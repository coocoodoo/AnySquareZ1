// fsck — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000110d8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0003000c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 00011108 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_00030010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00030014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00030018)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::ioctl @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003001c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_00030020)();
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00030024)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00030028)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0003002c)();
  return _Var1;
}



/* ===== <EXTERNAL>::snprintf @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00030030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00030034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_00030038)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getegid @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0003003c)();
  return _Var1;
}



/* ===== <EXTERNAL>::fgets @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00030040)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00030044)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00030048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setvbuf @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_0003004c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00030050)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00030054)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 000111e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00030058)();
  return _Var1;
}



/* ===== <EXTERNAL>::feof @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0003005c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00030060)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00030064)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00011210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00030068)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::lseek @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0003006c)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::abort @ 00011228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00030070)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00030074)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00030078)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::uname @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0003007c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_00030080)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00030084)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00030088)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fstat @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0003008c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00030090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::kill @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00030094)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00030098)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000112ac size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003009c)();
  return;
}



/* ===== <EXTERNAL>::umask @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_000300a0)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::lstat @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_000300a4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 000112d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000300a8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000112dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000300ac)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000300b0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 000112f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000300b4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000300b8)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtok @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_000300bc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011318 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000300c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_000300c4)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::fork @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_000300c8)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000300cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execv @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_000300d0)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011354 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_000300d4)();
  return;
}



/* ===== <EXTERNAL>::sigaction @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_000300d8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::endmntent @ 0001136c size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_000300dc)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_000300e4)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000300e8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 0001139c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000300ec)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000300f0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_000300f4)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 000113c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000300f8)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000300fc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00030100)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::difftime @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_difftime_00030104)(__time1);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::mkstemp @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkstemp_00030108)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0003010c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00030110)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00030114)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00030118)();
  return piVar1;
}



/* ===== <EXTERNAL>::link @ 0001142c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_link_0003011c)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00030120)(__status);
  return;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_00030124)(__major);
  return uVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00030128)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001145c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003012c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00011468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_00030130)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 00011474 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00030134)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00030138)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 0001148c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0003013c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00030140)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000114a4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00030144)();
  return;
}



/* ===== <EXTERNAL>::close @ 000114b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00030148)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000114bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003014c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000114c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00030150)(__ptr);
  return;
}



/* ===== entry @ 000114d8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000300e0)
            (DAT_0001150c,param_2,&stack0x00000004,DAT_00011510,DAT_00011508,param_1);
  return;
}



/* ===== FUN_00011514 @ 00011514 size=32 ===== */

void FUN_00011514(void)

{
  if (DAT_00011538 == DAT_00011534) {
    return;
  }
  if (DAT_0001153c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001153c)();
  return;
}



/* ===== _FINI_0 @ 00011578 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000115b4;
  if (*DAT_000115b4 != '\0') {
    return;
  }
  FUN_00011514();
  if (DAT_000115b8 != 0) {
    __deregister_frame_info(DAT_000115bc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000115c0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000115e4 != 0) {
    __register_frame_info(DAT_000115ec,DAT_000115e8);
  }
  if ((DAT_00011570 - DAT_0001156c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011574 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011574)();
  return;
}



/* ===== FUN_000115f0 @ 000115f0 size=108 ===== */

char * FUN_000115f0(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  if (param_1 == (char *)0x0) {
    __dest = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    __dest = malloc(sVar1 + 1);
    if (__dest != (char *)0x0) {
      strcpy(__dest,param_1);
    }
  }
  return __dest;
}



/* ===== FUN_0001165c @ 0001165c size=116 ===== */

long FUN_0001165c(char *param_1)

{
  long lVar1;
  char *local_10 [2];
  
  lVar1 = strtol(param_1,local_10,0);
  if ((((*local_10[0] != '\0') || (lVar1 == -0x80000000)) || (lVar1 == 0x7fffffff)) || (lVar1 < 0))
  {
    lVar1 = -1;
  }
  return lVar1;
}



/* ===== FUN_000116d0 @ 000116d0 size=112 ===== */

byte * FUN_000116d0(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00011740 @ 00011740 size=112 ===== */

byte * FUN_00011740(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) == 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_000117b0 @ 000117b0 size=120 ===== */

void FUN_000117b0(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  while( true ) {
    if (*param_1 == '\0') {
      return;
    }
    sVar1 = strlen(param_1);
    pcVar2 = param_1 + (sVar1 - 1);
    if ((*pcVar2 != '\n') && (*pcVar2 != '\r')) break;
    *pcVar2 = '\0';
  }
  return;
}



/* ===== FUN_00011828 @ 00011828 size=140 ===== */

undefined4 FUN_00011828(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char *local_c;
  
  if (*(char *)*param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000116d0((char *)*param_1);
    pcVar1 = (char *)FUN_00011740(uVar2);
    local_c = pcVar1;
    if (*pcVar1 != '\0') {
      local_c = pcVar1 + 1;
      *pcVar1 = '\0';
    }
    *param_1 = local_c;
  }
  return uVar2;
}



/* ===== FUN_000118b4 @ 000118b4 size=488 ===== */

void FUN_000118b4(byte *param_1)

{
  byte bVar1;
  int local_18;
  byte *local_10;
  byte *local_c;
  
  local_10 = param_1;
  local_c = param_1;
  if (param_1 != (byte *)0x0) {
    for (; *local_c != 0; local_c = local_c + 1) {
      *local_10 = *local_c;
      if (*local_c == 0x5c) {
        local_c = local_c + 1;
        if (*local_c == 0) break;
        if (*local_c == 0x74) {
          *local_10 = 9;
        }
        else if (*local_c == 0x6e) {
          *local_10 = 10;
        }
        else if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 8) == 0) {
          *local_10 = *local_c;
        }
        else {
          bVar1 = 0;
          local_18 = 0;
          while ((local_18 < 3 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 8) != 0))) {
            bVar1 = bVar1 * '\b' + (*local_c - 0x30);
            local_18 = local_18 + 1;
            local_c = local_c + 1;
          }
          *local_10 = bVar1;
          local_c = local_c + -1;
        }
      }
      local_10 = local_10 + 1;
    }
    *local_10 = 0;
  }
  return;
}



/* ===== FUN_00011a9c @ 00011a9c size=84 ===== */

void FUN_00011a9c(void *param_1)

{
  free(*(void **)((int)param_1 + 0x10));
  free(*(void **)((int)param_1 + 0x18));
  free(*(void **)((int)param_1 + 0x1c));
  free(param_1);
  return;
}



/* ===== FUN_00011af0 @ 00011af0 size=312 ===== */

undefined4 *
FUN_00011af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = malloc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    puVar1 = DAT_00030d3c;
    puVar2 = DAT_00030d40;
  }
  else {
    uVar4 = FUN_000115f0(param_1);
    *puVar3 = uVar4;
    uVar4 = FUN_000115f0(param_2);
    puVar3[1] = uVar4;
    uVar4 = FUN_000115f0(param_3);
    puVar3[2] = uVar4;
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_0001e540;
    }
    uVar4 = FUN_000115f0(param_4);
    puVar3[3] = uVar4;
    puVar3[4] = param_5;
    puVar3[5] = param_6;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar1 = puVar3;
    puVar2 = puVar3;
    if (DAT_00030d3c != (undefined4 *)0x0) {
      DAT_00030d40[7] = puVar3;
      puVar1 = DAT_00030d3c;
    }
  }
  DAT_00030d40 = puVar2;
  DAT_00030d3c = puVar1;
  return puVar3;
}



/* ===== FUN_00011c28 @ 00011c28 size=524 ===== */

undefined4 FUN_00011c28(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  
  *param_2 = 0;
  FUN_000117b0(param_1);
  local_34 = param_1;
  local_14 = (char *)FUN_00011828(&local_34);
  if ((local_14 == (char *)0x0) || (*local_14 == '#')) {
    uVar4 = 0;
  }
  else {
    local_1c = FUN_00011828(&local_34);
    local_18 = (char *)FUN_00011828(&local_34);
    local_20 = FUN_00011828(&local_34);
    local_24 = (char *)FUN_00011828(&local_34);
    local_28 = (char *)FUN_00011828(&local_34);
    if ((local_1c == 0) || (local_18 == (char *)0x0)) {
      uVar4 = 0xffffffff;
    }
    else {
      FUN_000118b4(local_14);
      FUN_000118b4(local_1c);
      FUN_000118b4(local_18);
      FUN_000118b4(local_20);
      FUN_000118b4(local_24);
      FUN_000118b4(local_28);
      local_2c = (char *)FUN_0001713c(DAT_00030d4c,local_14,0);
      if (local_2c != (char *)0x0) {
        local_14 = local_2c;
      }
      pcVar1 = strchr(local_18,0x2c);
      if (pcVar1 != (char *)0x0) {
        local_18 = (char *)0x0;
      }
      pcVar1 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar1 = "auto";
      }
      if (local_24 == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        iVar2 = atoi(local_24);
      }
      if (local_28 == (char *)0x0) {
        iVar3 = -1;
      }
      else {
        iVar3 = atoi(local_28);
      }
      local_30 = FUN_00011af0(local_14,local_1c,pcVar1,local_20,iVar2,iVar3);
      free(local_2c);
      if (local_30 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        *param_2 = local_30;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ===== FUN_00011e34 @ 00011e34 size=148 ===== */

void FUN_00011e34(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_1[2],"auto");
  if (iVar1 == 0) {
    iVar1 = FUN_00017054(DAT_00030d4c,&DAT_0001e54c,*param_1);
    if (iVar1 != 0) {
      free((void *)param_1[2]);
      param_1[2] = iVar1;
    }
  }
  return;
}



/* ===== FUN_00011ec8 @ 00011ec8 size=520 ===== */

void FUN_00011ec8(char *param_1)

{
  FILE *__stream;
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int local_420;
  char acStack_41c [1023];
  undefined1 local_1d;
  FILE *local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 1;
  local_1c = fopen(param_1,"r");
  __stream = stderr;
  if (local_1c == (FILE *)0x0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    fprintf(__stream,"WARNING: couldn\'t open %s: %s\n",param_1,pcVar2);
  }
  else {
    while (iVar3 = feof(local_1c), iVar3 == 0) {
      local_14 = local_14 + 1;
      pcVar2 = fgets(acStack_41c,0x400,local_1c);
      if (pcVar2 == (char *)0x0) break;
      local_1d = 0;
      iVar3 = FUN_00011c28(acStack_41c,&local_420);
      if (iVar3 < 0) {
        fprintf(stderr,"WARNING: bad format on line %d of %s\n",local_14,param_1);
      }
      else if (local_420 != 0) {
        if (*(int *)(local_420 + 0x14) < 0) {
          *(undefined4 *)(local_420 + 0x14) = 0;
        }
        else {
          local_18 = 0;
        }
      }
    }
    fclose(local_1c);
    if ((local_18 != 0) && (DAT_00030d3c != 0)) {
      fwrite(&DAT_0001e5a0,1,3,stderr);
      fwrite("WARNING: Your /etc/fstab does not contain the fsck passno\n\tfield.  I will kludge around things for you, but you\n\tshould fix your /etc/fstab file as soon as you can.\n\n"
             ,1,0xa6,stderr);
      for (local_420 = DAT_00030d3c; local_420 != 0; local_420 = *(int *)(local_420 + 0x1c)) {
        *(undefined4 *)(local_420 + 0x14) = 1;
      }
    }
  }
  return;
}



/* ===== FUN_000120d0 @ 000120d0 size=176 ===== */

undefined4 * FUN_000120d0(char *param_1)

{
  int iVar1;
  undefined4 *local_c;
  
  if (param_1 == (char *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = DAT_00030d3c;
    while (((local_c != (undefined4 *)0x0 && (iVar1 = strcmp(param_1,(char *)*local_c), iVar1 != 0))
           && ((local_c[1] == 0 || (iVar1 = strcmp(param_1,(char *)local_c[1]), iVar1 != 0))))) {
      local_c = (undefined4 *)local_c[7];
    }
  }
  return local_c;
}



/* ===== FUN_00012180 @ 00012180 size=264 ===== */

undefined * FUN_00012180(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  stat sStack_70;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_10 = (char *)FUN_000115f0(DAT_00030d48);
  iVar2 = strncmp(param_1,"fsck.",5);
  if (iVar2 == 0) {
    uVar1 = 0xe660;
  }
  else {
    uVar1 = 0xe654;
  }
  local_14 = (char *)(uVar1 | 0x10000);
  local_c = strtok(local_10,":");
  while (local_c != (char *)0x0) {
    sprintf(&DAT_00030d5c,local_14,local_c,param_1);
    iVar2 = stat(&DAT_00030d5c,&sStack_70);
    if (iVar2 == 0) break;
    local_c = strtok((char *)0x0,":");
  }
  free(local_10);
  if (local_c == (char *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_00030d5c;
  }
  return puVar3;
}



/* ===== FUN_00012288 @ 00012288 size=128 ===== */

undefined4 FUN_00012288(void)

{
  int local_c;
  
  local_c = DAT_00030d44;
  while( true ) {
    if (local_c == 0) {
      return 0;
    }
    if (((*(uint *)(local_c + 4) & 1) == 0) && ((*(uint *)(local_c + 4) & 2) != 0)) break;
    local_c = *(int *)(local_c + 0x20);
  }
  return 1;
}



/* ===== FUN_00012308 @ 00012308 size=1360 ===== */

int FUN_00012308(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  __pid_t _Var3;
  time_t tVar4;
  int iVar5;
  char local_208 [80];
  char acStack_1b8 [80];
  char *local_168 [80];
  char *local_28;
  __pid_t *local_24;
  __pid_t local_20;
  __pid_t *local_1c;
  int local_18;
  int local_14;
  
  local_24 = malloc(0x24);
  if (local_24 == (__pid_t *)0x0) {
    iVar5 = 0xc;
  }
  else {
    memset(local_24,0,0x24);
    sprintf(acStack_1b8,"fsck.%s",param_1);
    local_168[0] = (char *)FUN_000115f0(acStack_1b8);
    local_14 = 1;
    for (local_18 = 0; iVar5 = local_14, local_18 < DAT_00030cf4; local_18 = local_18 + 1) {
      local_14 = local_14 + 1;
      pcVar1 = (char *)FUN_000115f0((&DAT_00030c70)[local_18]);
      local_168[iVar5] = pcVar1;
    }
    if ((DAT_00030d18 != 0) &&
       ((((iVar5 = strcmp(param_1,"ext2"), iVar5 == 0 ||
          (iVar5 = strcmp(param_1,"ext3"), iVar5 == 0)) ||
         (iVar5 = strcmp(param_1,"ext4"), iVar5 == 0)) ||
        (iVar5 = strcmp(param_1,"ext4dev"), iVar5 == 0)))) {
      local_208[0] = '\0';
      iVar5 = FUN_00012288();
      if (iVar5 == 0) {
        snprintf(local_208,0x50,"-C%d",DAT_00030d1c);
        local_24[1] = local_24[1] | 2;
      }
      else if (DAT_00030d1c != 0) {
        snprintf(local_208,0x50,"-C%d",-DAT_00030d1c);
      }
      iVar5 = local_14;
      if (local_208[0] != '\0') {
        local_14 = local_14 + 1;
        pcVar1 = (char *)FUN_000115f0(local_208);
        local_168[iVar5] = pcVar1;
      }
    }
    iVar5 = local_14;
    local_14 = local_14 + 1;
    pcVar1 = (char *)FUN_000115f0(param_2);
    local_168[iVar5] = pcVar1;
    local_168[local_14] = (char *)0x0;
    local_28 = (char *)FUN_00012180(acStack_1b8);
    if (local_28 == (char *)0x0) {
      fprintf(stderr,"fsck: %s: not found\n",acStack_1b8);
      free(local_24);
      iVar5 = 2;
    }
    else {
      if ((DAT_00030cf8 != 0) || (DAT_00030d00 != 0)) {
        iVar5 = param_2;
        if (param_3 != 0) {
          iVar5 = param_3;
        }
        printf("[%s (%d) -- %s] ",local_28,DAT_00030d24,iVar5);
        for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
          printf("%s ",local_168[local_18]);
        }
        putchar(10);
      }
      if (DAT_00030d00 == 0) {
        local_20 = fork();
        if (local_20 < 0) {
          perror("fork");
          free(local_24);
          piVar2 = __errno_location();
          return *piVar2;
        }
        if (local_20 == 0) {
          if (param_4 == 0) {
            close(0);
          }
          execv(local_28,local_168);
          perror(local_168[0]);
          free(local_24);
                    /* WARNING: Subroutine does not return */
          exit(8);
        }
      }
      else {
        local_20 = -1;
      }
      for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
        free(local_168[local_18]);
      }
      *local_24 = local_20;
      _Var3 = FUN_000115f0(acStack_1b8);
      local_24[4] = _Var3;
      _Var3 = FUN_000115f0(param_1);
      local_24[5] = _Var3;
      _Var3 = FUN_000115f0(param_2);
      local_24[6] = _Var3;
      _Var3 = FUN_00014cdc(param_2);
      local_24[7] = _Var3;
      tVar4 = time((time_t *)0x0);
      local_24[3] = tVar4;
      local_24[8] = 0;
      for (local_1c = DAT_00030d44; (local_1c != (__pid_t *)0x0 && (local_1c[8] != 0));
          local_1c = (__pid_t *)local_1c[8]) {
      }
      if (local_1c == (__pid_t *)0x0) {
        DAT_00030d44 = local_24;
      }
      else {
        local_1c[8] = (__pid_t)local_24;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ===== FUN_00012858 @ 00012858 size=144 ===== */

int FUN_00012858(int param_1)

{
  int local_10;
  __pid_t *local_c;
  
  local_10 = 0;
  for (local_c = DAT_00030d44; local_c != (__pid_t *)0x0; local_c = (__pid_t *)local_c[8]) {
    if ((local_c[1] & 1U) == 0) {
      kill(*local_c,param_1);
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}



/* ===== FUN_000128e8 @ 000128e8 size=1264 ===== */

int * FUN_000128e8(uint param_1)

{
  int *piVar1;
  int iVar2;
  time_t tVar3;
  __pid_t _Var4;
  uint local_20;
  uint local_1c;
  __pid_t local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  
  if (DAT_00030d44 == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    if (DAT_00030d00 == 0) {
      local_14 = (int *)0x0;
      local_c = (int *)0x0;
      do {
        local_18 = waitpid(-1,(int *)&local_20,param_1);
        if ((DAT_00030d2c != 0) && (DAT_00030d30 == 0)) {
          FUN_00012858(0xf);
          DAT_00030d30 = DAT_00030d30 + 1;
        }
        if ((local_18 == 0) && ((param_1 & 1) != 0)) {
          return (int *)0x0;
        }
        if (local_18 < 0) {
          piVar1 = __errno_location();
          if ((*piVar1 != 4) && (piVar1 = __errno_location(), *piVar1 != 0xb)) {
            piVar1 = __errno_location();
            if (*piVar1 == 10) {
              fprintf(stderr,"%s: wait: No more child process?!?\n",DAT_00030d34);
              return (int *)0x0;
            }
            perror("wait");
          }
        }
        else {
          local_14 = (int *)0x0;
          for (local_c = DAT_00030d44; (local_c != (int *)0x0 && (local_18 != *local_c));
              local_c = (int *)local_c[8]) {
            local_14 = local_c;
          }
        }
      } while (local_c == (int *)0x0);
      if ((local_20 & 0x7f) == 0) {
        local_20 = (int)local_20 >> 8 & 0xff;
      }
      else if ((local_20 & 0xffff) - 1 < 0xff) {
        local_1c = local_20 & 0x7f;
        if (local_1c == 2) {
          local_20 = 4;
        }
        else {
          printf("Warning... %s for device %s exited with signal %d.\n",local_c[4],local_c[6],
                 local_1c);
          local_20 = 8;
        }
      }
      else {
        printf("%s %s: status is %x, should never happen.\n",local_c[4],local_c[6],local_20);
        local_20 = 8;
      }
      local_c[2] = local_20;
      local_c[1] = local_c[1] | 1;
      if (((DAT_00030d18 != 0) && ((local_c[1] & 2U) != 0)) && (iVar2 = FUN_00012288(), iVar2 == 0))
      {
        for (local_10 = DAT_00030d44; local_10 != (int *)0x0; local_10 = (int *)local_10[8]) {
          if (((local_10[1] & 1U) == 0) &&
             (((iVar2 = strcmp((char *)local_10[5],"ext2"), iVar2 == 0 ||
               (iVar2 = strcmp((char *)local_10[5],"ext3"), iVar2 == 0)) ||
              ((iVar2 = strcmp((char *)local_10[5],"ext4"), iVar2 == 0 ||
               (iVar2 = strcmp((char *)local_10[5],"ext4dev"), iVar2 == 0)))))) {
            tVar3 = time((time_t *)0x0);
            if (tVar3 + 1 < local_10[3]) {
              kill(*local_10,10);
            }
            else {
              _Var4 = fork();
              if (_Var4 == 0) {
                sleep(1);
                kill(*local_10,10);
                    /* WARNING: Subroutine does not return */
                exit(0);
              }
            }
            local_10[1] = local_10[1] | 2;
            break;
          }
        }
      }
    }
    else {
      local_c = DAT_00030d44;
      local_14 = (int *)0x0;
      DAT_00030d44[2] = 0;
    }
    if (local_14 == (int *)0x0) {
      DAT_00030d44 = (int *)local_c[8];
    }
    else {
      local_14[8] = local_c[8];
    }
    if (1 < DAT_00030cf8) {
      printf("Finished with %s (exit status %d)\n",local_c[6],local_c[2]);
    }
    DAT_00030d24 = DAT_00030d24 + -1;
  }
  return local_c;
}



/* ===== FUN_00012dd8 @ 00012dd8 size=128 ===== */

uint FUN_00012dd8(uint param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_000128e8(local_10);
    if (iVar1 == 0) break;
    local_c = local_c | *(uint *)(iVar1 + 8);
    FUN_00011a9c(iVar1);
    if ((param_1 & 1) != 0) {
      local_10 = 1;
    }
  }
  return local_c;
}



/* ===== FUN_00012e58 @ 00012e58 size=472 ===== */

void FUN_00012e58(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *local_c;
  
  FUN_00011e34(param_1);
  iVar1 = strcmp((char *)param_1[2],"auto");
  if (iVar1 == 0) {
    if ((((DAT_00030d38 == (char *)0x0) || (iVar1 = strncmp(DAT_00030d38,"no",2), iVar1 == 0)) ||
        (iVar1 = strncmp(DAT_00030d38,"opts=",5), iVar1 == 0)) ||
       ((iVar1 = strncmp(DAT_00030d38,"loop",4), iVar1 == 0 ||
        (pcVar2 = strchr(DAT_00030d38,0x2c), pcVar2 != (char *)0x0)))) {
      local_c = "ext2";
    }
    else {
      local_c = DAT_00030d38;
    }
  }
  else {
    local_c = (char *)param_1[2];
  }
  DAT_00030d24 = DAT_00030d24 + 1;
  iVar1 = FUN_00012308(local_c,*param_1,param_1[1],param_2);
  if (iVar1 != 0) {
    fprintf(stderr,"%s: Error %d while executing fsck.%s for %s\n",DAT_00030d34,iVar1,local_c,
            *param_1);
    DAT_00030d24 = DAT_00030d24 + -1;
  }
  return;
}



/* ===== FUN_00013030 @ 00013030 size=840 ===== */

void FUN_00013030(char *param_1,int *param_2)

{
  bool bVar1;
  void *pvVar2;
  char *__s;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  
  local_1c = 2;
  bVar1 = true;
  local_14 = param_1;
  if (param_1 != (char *)0x0) {
    for (; *local_14 != '\0'; local_14 = local_14 + 1) {
      if (*local_14 == ',') {
        local_1c = local_1c + 1;
      }
    }
  }
  pvVar2 = malloc(local_1c << 2);
  *param_2 = (int)pvVar2;
  pvVar2 = malloc(local_1c << 2);
  param_2[1] = (int)pvVar2;
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    fwrite("Couldn\'t allocate memory for filesystem types\n",1,0x2e,stderr);
                    /* WARNING: Subroutine does not return */
    exit(8);
  }
  memset((void *)*param_2,0,local_1c << 2);
  memset((void *)param_2[1],0,local_1c << 2);
  param_2[2] = 0;
  if (param_1 != (char *)0x0) {
    __s = (char *)FUN_000115f0(param_1);
    local_1c = 0;
    local_18 = strtok(__s,",");
    while (local_18 != (char *)0x0) {
      local_20 = 0;
      iVar3 = strncmp(local_18,"no",2);
      if (iVar3 == 0) {
        local_18 = local_18 + 2;
        local_20 = 1;
      }
      else if (*local_18 == '!') {
        local_18 = local_18 + 1;
        local_20 = 1;
      }
      iVar3 = strcmp(local_18,"loop");
      if (iVar3 == 0) {
LAB_0001325c:
        if (local_20 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
        *(undefined4 *)(param_2[1] + local_1c * 4) = uVar4;
      }
      else {
        iVar3 = strncmp(local_18,"opts=",5);
        if (iVar3 == 0) {
          local_18 = local_18 + 5;
          goto LAB_0001325c;
        }
        if (bVar1) {
          param_2[2] = local_20;
          bVar1 = false;
        }
        if (((local_20 != 0) && (param_2[2] == 0)) || ((local_20 == 0 && (param_2[2] != 0)))) {
          fputs(DAT_000301ac,stderr);
                    /* WARNING: Subroutine does not return */
          exit(0x10);
        }
      }
      iVar3 = *param_2;
      uVar4 = FUN_000115f0(local_18);
      *(undefined4 *)(iVar3 + local_1c * 4) = uVar4;
      local_18 = strtok((char *)0x0,",");
      local_1c = local_1c + 1;
    }
    free(__s);
  }
  return;
}



/* ===== FUN_00013378 @ 00013378 size=172 ===== */

undefined4 FUN_00013378(char *param_1,int param_2)

{
  char *__s;
  int iVar1;
  char *local_c;
  
  if (param_2 != 0) {
    __s = (char *)FUN_000115f0(param_2);
    local_c = strtok(__s,",");
    while (local_c != (char *)0x0) {
      iVar1 = strcmp(local_c,param_1);
      if (iVar1 == 0) {
        free(__s);
        return 1;
      }
      local_c = strtok((char *)0x0,",");
    }
    free(__s);
  }
  return 0;
}



/* ===== FUN_00013424 @ 00013424 size=424 ===== */

bool FUN_00013424(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *__s1;
  int local_14;
  int local_c;
  
  bVar1 = false;
  bVar2 = false;
  local_14 = 0;
  if ((*param_2 == 0) || (*(int *)*param_2 == 0)) {
    bVar2 = true;
  }
  else {
    for (local_c = 0; __s1 = *(char **)(*param_2 + local_c * 4), __s1 != (char *)0x0;
        local_c = local_c + 1) {
      iVar3 = *(int *)(param_2[1] + local_c * 4);
      if (iVar3 == 1) {
        iVar3 = FUN_00013378(__s1,*(undefined4 *)(param_1 + 0xc));
        if (iVar3 == 0) {
          return false;
        }
      }
      else if (iVar3 == 2) {
        iVar3 = FUN_00013378(__s1,*(undefined4 *)(param_1 + 0xc));
        if (iVar3 != 0) {
          return false;
        }
      }
      else if (iVar3 == 0) {
        local_14 = local_14 + 1;
        iVar3 = strcmp(__s1,*(char **)(param_1 + 8));
        if (iVar3 == 0) {
          bVar1 = true;
          bVar2 = true;
        }
      }
    }
    if (local_14 == 0) {
      bVar2 = true;
    }
    else if (param_2[2] != 0) {
      bVar2 = !bVar1;
    }
  }
  return bVar2;
}



/* ===== FUN_000135cc @ 000135cc size=464 ===== */

undefined4 FUN_000135cc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_c;
  
  bVar1 = false;
  if (param_1[5] == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_00013378(&DAT_0001e838,param_1[3]);
    if (iVar2 == 0) {
      FUN_00011e34(param_1);
      iVar2 = FUN_00013424(param_1,&DAT_00030d50);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        for (local_c = &DAT_0003015c; *local_c != 0; local_c = local_c + 1) {
          iVar2 = strcmp((char *)param_1[2],(char *)*local_c);
          if (iVar2 == 0) {
            return 1;
          }
        }
        for (local_c = &DAT_00030180; *local_c != 0; local_c = local_c + 1) {
          iVar2 = strcmp((char *)param_1[2],(char *)*local_c);
          if (iVar2 == 0) {
            bVar1 = true;
            break;
          }
        }
        iVar2 = FUN_00012180(param_1[2]);
        if (iVar2 == 0) {
          if (bVar1) {
            fprintf(stderr,"fsck: cannot check %s: fsck.%s not found\n",*param_1,param_1[2]);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      fprintf(stderr,
              "%s: skipping bad line in /etc/fstab: bind mount with nonzero fsck pass number\n",
              param_1[1]);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ===== FUN_0001379c @ 0001379c size=340 ===== */

bool FUN_0001379c(char *param_1)

{
  int iVar1;
  char *__s1;
  bool bVar2;
  int local_c;
  
  if (DAT_00030d20 == 0) {
    if ((DAT_00030d44 == 0) ||
       ((iVar1 = strncmp(*(char **)(DAT_00030d44 + 0x18),"/dev/md",7), iVar1 != 0 &&
        (iVar1 = strncmp(param_1,"/dev/md",7), iVar1 != 0)))) {
      __s1 = (char *)FUN_00014cdc(param_1);
      if (__s1 == (char *)0x0) {
        bVar2 = DAT_00030d44 != 0;
      }
      else {
        for (local_c = DAT_00030d44; local_c != 0; local_c = *(int *)(local_c + 0x20)) {
          if ((*(int *)(local_c + 0x1c) == 0) ||
             (iVar1 = strcmp(__s1,*(char **)(local_c + 0x1c)), iVar1 == 0)) {
            free(__s1);
            return true;
          }
        }
        free(__s1);
        bVar2 = false;
      }
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* ===== FUN_000138f0 @ 000138f0 size=1284 ===== */

uint FUN_000138f0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  
  local_10 = 0;
  local_14 = 1;
  local_18 = 1;
  if (DAT_00030cf8 != 0) {
    fwrite("Checking all file systems.\n",1,0x1b,stdout);
  }
  for (local_c = DAT_00030d3c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)local_c[7]) {
    iVar2 = FUN_000135cc(local_c);
    if (iVar2 != 0) {
      local_c[6] = local_c[6] | 1;
    }
  }
  if (DAT_00030d14 == 0) {
    local_c = DAT_00030d3c;
    while ((local_c != (undefined4 *)0x0 && (iVar2 = strcmp((char *)local_c[1],"/"), iVar2 != 0))) {
      local_c = (undefined4 *)local_c[7];
    }
    if (local_c != (undefined4 *)0x0) {
      if (((DAT_00030d08 == 0) && (iVar2 = FUN_000135cc(local_c), iVar2 == 0)) &&
         ((DAT_00030d0c == 0 || (iVar2 = FUN_000156c0(*local_c), iVar2 == 0)))) {
        FUN_00012e58(local_c,1);
        local_10 = FUN_00012dd8(0);
        if (1 < (int)local_10) {
          return local_10;
        }
      }
      local_c[6] = local_c[6] | 1;
    }
  }
  if (DAT_00030d08 != 0) {
    for (local_c = DAT_00030d3c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)local_c[7]) {
      iVar2 = strcmp((char *)local_c[1],"/");
      if (iVar2 == 0) {
        local_c[6] = local_c[6] | 1;
      }
    }
  }
  while (local_14 != 0) {
    local_14 = 0;
    bVar1 = true;
    local_c = DAT_00030d3c;
LAB_00013cac:
    if ((local_c == (undefined4 *)0x0) || (DAT_00030d2c != 0)) goto LAB_00013cc0;
    if ((local_c[6] & 1) != 0) {
LAB_00013ca0:
      local_c = (undefined4 *)local_c[7];
      goto LAB_00013cac;
    }
    if (local_18 < (int)local_c[5]) {
      local_14 = local_14 + 1;
      goto LAB_00013ca0;
    }
    if ((DAT_00030d0c != 0) && (iVar2 = FUN_000156c0(*local_c), iVar2 != 0)) {
      local_c[6] = local_c[6] | 1;
      goto LAB_00013ca0;
    }
    iVar2 = FUN_0001379c(*local_c);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_00013ca0;
    }
    FUN_00012e58(local_c,DAT_00030d04);
    local_c[6] = local_c[6] | 1;
    if ((DAT_00030d04 == 0) && ((DAT_00030d28 == 0 || (DAT_00030d24 < DAT_00030d28))))
    goto LAB_00013ca0;
    bVar1 = false;
LAB_00013cc0:
    if (DAT_00030d2c != 0) break;
    if (1 < DAT_00030cf8) {
      printf("--waiting-- (pass %d)\n",local_18);
    }
    uVar3 = FUN_00012dd8(!bVar1);
    local_10 = local_10 | uVar3;
    if (bVar1) {
      if (1 < DAT_00030cf8) {
        puts("----------------------------------");
      }
      local_18 = local_18 + 1;
    }
    else {
      local_14 = local_14 + 1;
    }
  }
  if ((DAT_00030d2c != 0) && (DAT_00030d30 == 0)) {
    FUN_00012858(0xf);
    DAT_00030d30 = DAT_00030d30 + 1;
  }
  uVar3 = FUN_00012dd8(1);
  return local_10 | uVar3;
}



/* ===== FUN_00013df4 @ 00013df4 size=48 ===== */

void FUN_00013df4(void)

{
  fwrite("Usage: fsck [-AMNPRTV] [ -C [ fd ] ] [-t fstype] [fs-options] [filesys ...]\n",1,0x4c,
         stderr);
                    /* WARNING: Subroutine does not return */
  exit(0x10);
}



/* ===== FUN_00013e60 @ 00013e60 size=2184 ===== */

void FUN_00013e60(int param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__stream;
  int iVar2;
  int *piVar3;
  __uid_t _Var4;
  undefined4 uVar5;
  char *pcVar6;
  _union_1051 local_c0 [5];
  _union_1051 local_ac [32];
  int local_2c;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  
  local_1c = (char *)0x0;
  local_20 = 0;
  local_24 = 0;
  memset(local_c0,0,0x14);
  local_c0[0].sa_handler = (__sighandler_t)&LAB_00013e24;
  sigaction(2,(sigaction *)local_c0,(sigaction *)0x0);
  sigaction(0xf,(sigaction *)local_c0,(sigaction *)0x0);
  DAT_00030cf0 = 0;
  DAT_00030cf4 = 0;
  DAT_00030d44 = 0;
  DAT_00030d34 = *param_2;
  local_14 = 1;
  do {
    if (param_1 <= local_14) {
      pcVar6 = getenv("FSCK_FORCE_ALL_PARALLEL");
      if (pcVar6 != (char *)0x0) {
        DAT_00030d20 = DAT_00030d20 + 1;
      }
      local_1c = getenv("FSCK_MAX_INST");
      if (local_1c != (char *)0x0) {
        DAT_00030d28 = atoi(local_1c);
      }
      return;
    }
    local_28 = (char *)param_2[local_14];
    if (local_28 != (char *)0x0) {
      if (((*local_28 == '/') && (local_24 == 0)) ||
         (pcVar6 = strchr(local_28,0x3d), iVar2 = DAT_00030cf4, pcVar6 != (char *)0x0)) {
        if (0x1f < DAT_00030cf0) {
          fprintf(stderr,"%s: too many devices\n",DAT_00030d34);
                    /* WARNING: Subroutine does not return */
          exit(8);
        }
        local_2c = FUN_0001713c(DAT_00030d4c,local_28,0);
        if ((local_2c == 0) && (pcVar6 = strchr(local_28,0x3d), pcVar6 != (char *)0x0)) {
          iVar2 = access("/proc/partitions",4);
          __stream = stderr;
          if (iVar2 < 0) {
            piVar3 = __errno_location();
            pcVar6 = strerror(*piVar3);
            fprintf(__stream,"Couldn\'t open /proc/partitions: %s\n",pcVar6);
            fwrite("Is /proc mounted?\n",1,0x12,stderr);
                    /* WARNING: Subroutine does not return */
            exit(8);
          }
          _Var4 = geteuid();
          if (_Var4 == 0) {
            fprintf(stderr,"Couldn\'t find matching filesystem: %s\n",local_28);
          }
          else {
            fprintf(stderr,"Must be root to scan for matching filesystems: %s\n",local_28);
          }
                    /* WARNING: Subroutine does not return */
          exit(8);
        }
        iVar2 = local_2c;
        if (local_2c == 0) {
          iVar2 = FUN_000115f0(local_28);
        }
        piVar3 = &DAT_00030bf0 + DAT_00030cf0;
        DAT_00030cf0 = DAT_00030cf0 + 1;
        *piVar3 = iVar2;
      }
      else if ((*local_28 == '-') && (local_24 == 0)) {
        for (local_18 = 1; local_28[local_18] != '\0'; local_18 = local_18 + 1) {
          if (local_24 == 0) {
            switch(local_28[local_18]) {
            case '-':
              local_24 = 1;
              break;
            default:
              iVar2 = local_20 + 1;
              local_20 = local_20 + 1;
              *(char *)((int)local_ac + iVar2) = local_28[local_18];
              break;
            case '?':
              FUN_00013df4();
              break;
            case 'A':
              DAT_00030cfc = DAT_00030cfc + 1;
              break;
            case 'C':
              DAT_00030d18 = DAT_00030d18 + 1;
              if (local_28[local_18 + 1] == '\0') {
                if ((local_14 + 1 < param_1) && (*(char *)param_2[local_14 + 1] != '-')) {
                  DAT_00030d1c = FUN_0001165c(param_2[local_14]);
                  if (-1 < DAT_00030d1c) {
                    local_14 = local_14 + 1;
                    goto LAB_000146b8;
                  }
                  DAT_00030d1c = 0;
                }
              }
              else {
                DAT_00030d1c = FUN_0001165c(local_28 + local_18 + 1);
                if (-1 < DAT_00030d1c) goto LAB_000146b8;
                DAT_00030d1c = 0;
              }
              break;
            case 'M':
              DAT_00030d0c = DAT_00030d0c + 1;
              break;
            case 'N':
              DAT_00030d00 = DAT_00030d00 + 1;
              break;
            case 'P':
              DAT_00030d14 = DAT_00030d14 + 1;
              break;
            case 'R':
              DAT_00030d08 = DAT_00030d08 + 1;
              break;
            case 'T':
              DAT_00030d10 = DAT_00030d10 + 1;
              break;
            case 'V':
              DAT_00030cf8 = DAT_00030cf8 + 1;
              break;
            case 's':
              DAT_00030d04 = DAT_00030d04 + 1;
              break;
            case 't':
              local_1c = (char *)0x0;
              if (DAT_00030d38 != 0) {
                FUN_00013df4();
              }
              if (local_28[local_18 + 1] == '\0') {
                if (local_14 + 1 < param_1) {
                  local_14 = local_14 + 1;
                  local_1c = (char *)param_2[local_14];
                }
                else {
                  FUN_00013df4();
                }
              }
              else {
                local_1c = local_28 + local_18 + 1;
              }
              DAT_00030d38 = FUN_000115f0(local_1c);
              FUN_00013030(DAT_00030d38,&DAT_00030d50);
              goto LAB_000146b8;
            }
          }
          else {
            iVar2 = local_20 + 1;
            local_20 = local_20 + 1;
            *(char *)((int)local_ac + iVar2) = local_28[local_18];
          }
        }
LAB_000146b8:
        iVar2 = DAT_00030cf4;
        if (local_20 != 0) {
          local_ac[0]._0_1_ = 0x2d;
          iVar1 = local_20 + 1;
          local_20 = local_20 + 1;
          *(undefined1 *)((int)local_ac + iVar1) = 0;
          if (0x1f < DAT_00030cf4) {
            fprintf(stderr,"%s: too many arguments\n",DAT_00030d34);
                    /* WARNING: Subroutine does not return */
            exit(8);
          }
          DAT_00030cf4 = DAT_00030cf4 + 1;
          uVar5 = FUN_000115f0(local_ac);
          (&DAT_00030c70)[iVar2] = uVar5;
          local_20 = 0;
        }
      }
      else {
        if (0x1f < DAT_00030cf4) {
          fprintf(stderr,"%s: too many arguments\n",DAT_00030d34);
                    /* WARNING: Subroutine does not return */
          exit(8);
        }
        DAT_00030cf4 = DAT_00030cf4 + 1;
        uVar5 = FUN_000115f0(local_28);
        (&DAT_00030c70)[iVar2] = uVar5;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00014808 @ 00014808 size=1236 ===== */

uint FUN_00014808(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_24;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  local_18 = 0;
  local_1c = 0;
  __s = getenv("PATH");
  setvbuf(stdout,(char *)0x0,2,0x1000);
  setvbuf(stderr,(char *)0x0,2,0x1000);
  FUN_00015828(&DAT_00030d4c,0);
  FUN_00013e60(param_1,param_2);
  if (DAT_00030d10 == 0) {
    printf("fsck %s (%s)\n","1.43.9","8-Feb-2018");
  }
  local_20 = getenv("FSTAB_FILE");
  if (local_20 == (char *)0x0) {
    local_20 = "/etc/fstab";
  }
  FUN_00011ec8(local_20);
  if (__s == (char *)0x0) {
    DAT_00030d48 = (char *)FUN_000115f0(DAT_000301a8);
  }
  else {
    sVar2 = strlen(DAT_000301a8);
    sVar3 = strlen(__s);
    DAT_00030d48 = malloc(sVar2 + sVar3 + 2);
    if (DAT_00030d48 == (char *)0x0) {
      fprintf(stderr,"%s: Unable to allocate memory for fsck_path\n",DAT_00030d34);
                    /* WARNING: Subroutine does not return */
      exit(8);
    }
    strcpy(DAT_00030d48,DAT_000301a8);
    pcVar1 = DAT_00030d48;
    sVar2 = strlen(DAT_00030d48);
    *(undefined2 *)(pcVar1 + sVar2) = DAT_0001e668;
    strcat(DAT_00030d48,__s);
  }
  if ((DAT_00030cf0 == 1) || (DAT_00030d04 != 0)) {
    local_1c = 1;
  }
  if (DAT_00030cfc == 0) {
    if (DAT_00030cf0 == 0) {
      DAT_00030d04 = DAT_00030d04 + 1;
      local_18 = FUN_000138f0();
    }
    else {
      for (local_14 = 0; local_14 < DAT_00030cf0; local_14 = local_14 + 1) {
        if (DAT_00030d2c != 0) {
          if (DAT_00030d30 == 0) {
            FUN_00012858(0xf);
            DAT_00030d30 = DAT_00030d30 + 1;
          }
          break;
        }
        local_24 = (undefined4 *)FUN_000120d0((&DAT_00030bf0)[local_14]);
        if ((((local_24 != (undefined4 *)0x0) ||
             (local_24 = (undefined4 *)
                         FUN_00011af0((&DAT_00030bf0)[local_14],0,&DAT_0001e544,0,0xffffffff,
                                      0xffffffff), local_24 != (undefined4 *)0x0)) &&
            ((DAT_00030d0c == 0 || (iVar4 = FUN_000156c0(*local_24), iVar4 == 0)))) &&
           ((FUN_00012e58(local_24,local_1c), DAT_00030d04 != 0 ||
            ((DAT_00030d28 != 0 && (DAT_00030d28 <= DAT_00030d24)))))) {
          iVar4 = FUN_000128e8(0);
          if (iVar4 != 0) {
            local_18 = local_18 | *(uint *)(iVar4 + 8);
            FUN_00011a9c(iVar4);
          }
          if (1 < DAT_00030cf8) {
            puts("----------------------------------");
          }
        }
      }
      uVar5 = FUN_00012dd8(0);
      local_18 = local_18 | uVar5;
      free(DAT_00030d48);
      FUN_0001592c(DAT_00030d4c);
    }
  }
  else {
    local_18 = FUN_000138f0();
  }
  return local_18;
}



/* ===== FUN_00014cdc @ 00014cdc size=1348 ===== */

char * FUN_00014cdc(char *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  char *__dest;
  int iVar3;
  int local_18;
  char *local_14;
  int *local_10;
  byte *local_c;
  
  sVar2 = strlen(param_1);
  __dest = malloc(sVar2 + 1);
  if (__dest == (char *)0x0) {
    return (char *)0x0;
  }
  strcpy(__dest,param_1);
  iVar3 = strncmp(__dest,"/dev/",5);
  if (iVar3 == 0) {
    local_c = (byte *)(__dest + 5);
    iVar3 = strncmp((char *)local_c,"dsk/",4);
    if (iVar3 == 0) {
      local_c = (byte *)(__dest + 9);
    }
    if ((*local_c == 'm') && (local_c[1] == 'd')) {
      local_c[2] = '\0';
      return __dest;
    }
    iVar3 = strncmp((char *)local_c,"rd/",3);
    if (iVar3 == 0) {
      if ((((local_c[3] == 'c') && (local_c[5] == 'd')) &&
          ((*(ushort *)(__ctype_b + (uint)local_c[4] * 2) & 8) != 0)) &&
         ((*(ushort *)(__ctype_b + (uint)local_c[6] * 2) & 8) != 0)) {
        local_c[7] = '\0';
        return __dest;
      }
    }
    else if (((*local_c == 'h') || (*local_c == 's')) && (local_c[1] == 'd')) {
      pbVar1 = local_c + 2;
      if ((*(ushort *)(__ctype_b + (uint)local_c[2] * 2) & 8) != 0) {
        pbVar1 = local_c + 3;
      }
      local_c = pbVar1;
      if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 4) != 0) {
        local_c[1] = 0;
        return __dest;
      }
    }
    else {
      local_18 = 0;
      iVar3 = strncmp((char *)local_c,"ide/",4);
      if (iVar3 == 0) {
        local_18 = 4;
      }
      iVar3 = strncmp((char *)local_c,"scsi/",5);
      if (iVar3 == 0) {
        local_18 = 5;
      }
      if (local_18 == 0) {
        local_14 = (char *)0x0;
        iVar3 = strncmp((char *)local_c,"discs/",6);
        if (iVar3 == 0) {
          local_14 = "disc";
        }
        else {
          iVar3 = strncmp((char *)local_c,"disks/",6);
          if (iVar3 == 0) {
            local_14 = "disk";
          }
        }
        if ((local_14 != (char *)0x0) &&
           (iVar3 = strncmp((char *)(local_c + 6),local_14,4), iVar3 == 0)) {
          local_c = local_c + 10;
          while( true ) {
            if ((*local_c == 0x2f) || (*local_c == 0)) {
              *local_c = 0;
              return __dest;
            }
            if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 8) == 0) break;
            local_c = local_c + 1;
          }
        }
      }
      else {
        local_c = local_c + local_18;
        local_10 = &DAT_000301b0;
        while( true ) {
          if (*local_10 == 0) {
            local_c[-1] = 0;
            return __dest;
          }
          sVar2 = strlen((char *)*local_10);
          iVar3 = strncmp((char *)local_c,(char *)*local_10,sVar2);
          if (iVar3 != 0) break;
          for (local_c = local_c + sVar2; (*local_c != 0x2f && (*local_c != 0));
              local_c = local_c + 1) {
            if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 8) == 0) goto LAB_00015208;
          }
          local_c = local_c + 1;
          local_10 = local_10 + 1;
        }
      }
    }
  }
LAB_00015208:
  free(__dest);
  return (char *)0x0;
}



/* ===== FUN_00015220 @ 00015220 size=112 ===== */

byte * FUN_00015220(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00015290 @ 00015290 size=112 ===== */

byte * FUN_00015290(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) == 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00015300 @ 00015300 size=140 ===== */

undefined4 FUN_00015300(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char *local_c;
  
  if (*(char *)*param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00015220((char *)*param_1);
    pcVar1 = (char *)FUN_00015290(uVar2);
    local_c = pcVar1;
    if (*pcVar1 != '\0') {
      local_c = pcVar1 + 1;
      *pcVar1 = '\0';
    }
    *param_1 = local_c;
  }
  return uVar2;
}



/* ===== FUN_0001538c @ 0001538c size=820 ===== */

int FUN_0001538c(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *local_48c;
  char acStack_488 [1023];
  undefined1 local_89;
  stat local_88;
  FILE *local_30;
  char *local_2c;
  char *local_28;
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
  local_2c = (char *)0x0;
  local_28 = (char *)0x0;
  *param_3 = 0;
  local_30 = (FILE *)setmntent(param_1,&DAT_0001eb40);
  if (local_30 == (FILE *)0x0) {
    piVar1 = __errno_location();
    local_c = *piVar1;
  }
  else {
    iVar2 = stat(param_2,&local_88);
    if (iVar2 == 0) {
      if ((local_88.st_mode & 0xf000) == 0x6000) {
        local_20 = (int)local_88.st_rdev;
        iStack_1c = local_88.st_rdev._4_4_;
      }
      else {
        local_18 = (int)local_88.st_dev;
        iStack_14 = local_88.st_dev._4_4_;
        local_24 = local_88.st_ino;
      }
    }
    do {
      while( true ) {
        do {
          do {
            pcVar3 = fgets(acStack_488,0x400,local_30);
            if (pcVar3 == (char *)0x0) {
              local_28 = (char *)0x0;
              local_2c = (char *)0x0;
              goto LAB_000155bc;
            }
            local_89 = 0;
            local_48c = acStack_488;
            local_2c = (char *)FUN_00015300(&local_48c);
            if ((local_2c == (char *)0x0) || (*local_2c == '#')) {
              return 0;
            }
            local_28 = (char *)FUN_00015300(&local_48c);
          } while (*local_2c != '/');
          iVar2 = strcmp(param_2,local_2c);
          if (iVar2 == 0) goto LAB_000155bc;
          iVar2 = stat(local_2c,&local_88);
        } while (iVar2 != 0);
        if ((local_88.st_mode & 0xf000) == 0x6000) break;
        if ((local_18 != 0 || iStack_14 != 0) &&
           ((iStack_14 == local_88.st_dev._4_4_ && local_18 == (int)local_88.st_dev &&
            (local_24 == local_88.st_ino)))) goto LAB_000155bc;
      }
    } while ((local_20 == 0 && iStack_1c == 0) ||
            (iStack_1c != local_88.st_rdev._4_4_ || local_20 != (int)local_88.st_rdev));
LAB_000155bc:
    if (local_28 == (char *)0x0) {
      if (((local_20 != 0 || iStack_1c != 0) && (iVar2 = stat("/",&local_88), iVar2 == 0)) &&
         (iStack_1c == local_88.st_dev._4_4_ && local_20 == (int)local_88.st_dev)) {
        *param_3 = 1;
      }
    }
    else {
      iVar2 = stat(local_28,&local_88);
      if (iVar2 < 0) {
        piVar1 = __errno_location();
        local_c = *piVar1;
        if (local_c == 2) {
          local_c = 0;
        }
      }
      else if ((local_20 == 0 && iStack_1c == 0) ||
              (iStack_1c == local_88.st_dev._4_4_ && local_20 == (int)local_88.st_dev)) {
        *param_3 = 1;
        local_c = 0;
      }
    }
    endmntent(local_30);
  }
  return local_c;
}



/* ===== FUN_000156c0 @ 000156c0 size=156 ===== */

int FUN_000156c0(undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = FUN_0001538c("/proc/mounts",param_1,&local_10);
  if (local_c == 0) {
    if (local_10 == 0) {
      iVar1 = FUN_0001538c("/etc/mtab",param_1,&local_10);
      if (iVar1 != 0) {
        local_10 = 0;
      }
    }
    else {
      local_10 = 1;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



/* ===== FUN_0001575c @ 0001575c size=60 ===== */

bool FUN_0001575c(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00015798 @ 00015798 size=144 ===== */

undefined4 FUN_00015798(undefined4 param_1)

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



/* ===== FUN_00015828 @ 00015828 size=260 ===== */

undefined4 FUN_00015828(undefined4 *param_1,char *param_2)

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
      local_18 = (char *)FUN_00015798("BLKID_FILE");
    }
    if (local_18 == (char *)0x0) {
      local_18 = "/etc/blkid.tab";
    }
    uVar2 = FUN_00016060(local_18);
    *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    FUN_00016d98(pvVar1);
    *param_1 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001592c @ 0001592c size=232 ===== */

void FUN_0001592c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_000173fc(param_1);
    while (iVar1 = FUN_0001575c(param_1), iVar1 == 0) {
      FUN_00015bf4(*param_1);
    }
    while (iVar1 = FUN_0001575c(param_1 + 2), iVar1 == 0) {
      iVar1 = param_1[2];
      while (iVar2 = FUN_0001575c(iVar1 + 8), iVar2 == 0) {
        FUN_000178d8(*(int *)(iVar1 + 8) + -8);
      }
      FUN_000178d8(iVar1);
    }
    free((void *)param_1[7]);
    free(param_1);
  }
  return;
}



/* ===== FUN_00015a14 @ 00015a14 size=180 ===== */

void FUN_00015a14(undefined4 *param_1)

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
        FUN_00015bf4(local_14);
        param_1[6] = param_1[6] | 4;
      }
      local_c = local_10;
      local_10 = (undefined4 *)*local_10;
    }
  }
  return;
}



/* ===== FUN_00015ac8 @ 00015ac8 size=60 ===== */

void FUN_00015ac8(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00015b04 @ 00015b04 size=56 ===== */

void FUN_00015b04(undefined4 *param_1)

{
  FUN_00015ac8(param_1[1],*param_1);
  return;
}



/* ===== FUN_00015b3c @ 00015b3c size=60 ===== */

bool FUN_00015b3c(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00015b78 @ 00015b78 size=124 ===== */

void * FUN_00015b78(void)

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



/* ===== FUN_00015bf4 @ 00015bf4 size=132 ===== */

void FUN_00015bf4(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    FUN_00015b04(param_1);
    while (iVar1 = FUN_00015b3c((int)param_1 + 8), iVar1 == 0) {
      FUN_000178d8(*(undefined4 *)((int)param_1 + 8));
    }
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_00015c78 @ 00015c78 size=40 ===== */

undefined4 FUN_00015c78(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== FUN_00015ca0 @ 00015ca0 size=128 ===== */

undefined4 * FUN_00015ca0(undefined4 *param_1)

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



/* ===== FUN_00015d20 @ 00015d20 size=300 ===== */

undefined4 FUN_00015d20(int *param_1,char *param_2,char *param_3)

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



/* ===== FUN_00015e4c @ 00015e4c size=228 ===== */

undefined4 FUN_00015e4c(int *param_1,int *param_2)

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
    } while ((param_1[2] != 0) && (iVar1 = FUN_000179ec(iVar3,param_1[2],param_1[3]), iVar1 == 0));
    *param_2 = iVar3;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00015f30 @ 00015f30 size=88 ===== */

void FUN_00015f30(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_00015f88 @ 00015f88 size=56 ===== */

bool FUN_00015f88(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00015fc0 @ 00015fc0 size=160 ===== */

char * FUN_00015fc0(char *param_1,size_t param_2)

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



/* ===== FUN_00016060 @ 00016060 size=44 ===== */

undefined4 FUN_00016060(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015fc0(param_1,0);
  return uVar1;
}



/* ===== FUN_0001608c @ 0001608c size=140 ===== */

void FUN_0001608c(undefined4 param_1,int *param_2)

{
  int *__ptr;
  int iVar1;
  
  __ptr = malloc(8);
  if (__ptr != (int *)0x0) {
    iVar1 = FUN_00016060(param_1);
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



/* ===== FUN_00016118 @ 00016118 size=112 ===== */

void FUN_00016118(undefined4 *param_1)

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



/* ===== FUN_00016188 @ 00016188 size=540 ===== */

void FUN_00016188(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
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
          iVar2 = FUN_00015f88(sStack_470.st_mode);
          if ((iVar2 != 0) &&
             (param_4 == sStack_470.st_rdev._4_4_ && param_3 == (int)sStack_470.st_rdev)) {
            uVar3 = FUN_00016060(acStack_414);
            *param_6 = uVar3;
            break;
          }
          if ((((param_5 != 0) && ((sStack_470.st_mode & 0xf000) == 0x4000)) &&
              (iVar2 = lstat(acStack_414,&sStack_470), iVar2 == 0)) &&
             ((sStack_470.st_mode & 0xf000) == 0x4000)) {
            FUN_0001608c(acStack_414,param_5);
          }
        }
      }
    }
    closedir(local_c);
  }
  return;
}



/* ===== FUN_000163a4 @ 000163a4 size=292 ===== */

int FUN_000163a4(undefined4 param_1,undefined4 param_2)

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
  for (local_c = &DAT_000301c4; *local_c != 0; local_c = local_c + 1) {
    FUN_0001608c(*local_c,&local_14);
  }
  while (local_14 != (undefined4 *)0x0) {
    local_10 = local_14;
    uVar1 = *local_14;
    local_14 = (undefined4 *)local_14[1];
    FUN_00016188(uVar1,uVar1,param_1,param_2,&local_18,&local_1c);
    free((void *)*local_10);
    free(local_10);
    if (local_1c != 0) break;
    if (local_14 == (undefined4 *)0x0) {
      local_14 = local_18;
      local_18 = (undefined4 *)0x0;
    }
  }
  FUN_00016118(&local_14);
  FUN_00016118(&local_18);
  return local_1c;
}



/* ===== FUN_000164c8 @ 000164c8 size=112 ===== */

byte * FUN_000164c8(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00016538 @ 00016538 size=204 ===== */

byte * FUN_00016538(byte *param_1)

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



/* ===== FUN_00016604 @ 00016604 size=164 ===== */

char * FUN_00016604(undefined4 param_1)

{
  char *__s;
  size_t sVar1;
  byte *local_c;
  
  __s = (char *)FUN_000164c8(param_1);
  sVar1 = strlen(__s);
  local_c = (byte *)(__s + (sVar1 - 1));
  while ((*__s != '\0' && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    *local_c = 0;
    local_c = local_c + -1;
  }
  return __s;
}



/* ===== FUN_000166a8 @ 000166a8 size=180 ===== */

undefined4 FUN_000166a8(undefined4 *param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)FUN_00016604(*param_1);
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



/* ===== FUN_0001675c @ 0001675c size=128 ===== */

undefined4 FUN_0001675c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000164c8(*param_1);
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



/* ===== FUN_000167dc @ 000167dc size=452 ===== */

int FUN_000167dc(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  char *local_1c;
  void *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  local_c = FUN_000166a8(param_3);
  if (0 < local_c) {
    local_1c = strchr((char *)*param_3,0x3e);
    if (local_1c == (char *)0x0) {
      local_c = -0xe;
    }
    else {
      local_10 = local_1c;
      local_10 = (char *)FUN_000164c8(local_1c + 1);
      local_14 = (char *)FUN_00016538(local_10);
      if (*(char *)*param_3 == '>') {
        *param_3 = (int)local_14;
      }
      else {
        *param_3 = *param_3 + 1;
      }
      *local_1c = '\0';
      local_1c = strrchr(local_14,0x3c);
      if (((local_1c != (char *)0x0) && (iVar1 = FUN_0001675c(&local_1c), -1 < iVar1)) &&
         (local_1c != (char *)0x0)) {
        *local_1c = '\0';
      }
      if ((int)local_14 - (int)local_10 < 2) {
        local_c = -0xe;
      }
      else {
        local_18 = (void *)FUN_00015fc0(local_10,(int)local_14 - (int)local_10);
        if (local_18 == (void *)0x0) {
          local_c = -0xc;
        }
        else {
          iVar1 = FUN_00018458(param_1,local_18,1);
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



/* ===== FUN_000169a0 @ 000169a0 size=420 ===== */

undefined4 FUN_000169a0(undefined4 *param_1,int *param_2,int *param_3)

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
      uVar3 = FUN_00016604(*param_3);
      *param_1 = uVar3;
      iVar2 = FUN_000164c8(*param_2 + 1);
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
        local_c = (char *)FUN_00016538(*param_2);
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



/* ===== FUN_00016b44 @ 00016b44 size=392 ===== */

int FUN_00016b44(int param_1,int param_2,undefined4 param_3)

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
    local_14 = FUN_000169a0(&local_18,&local_1c,param_3);
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
            local_14 = FUN_00017b4c(param_2,local_18,local_1c,sVar3);
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



/* ===== FUN_00016ccc @ 00016ccc size=204 ===== */

int FUN_00016ccc(int param_1,int *param_2,undefined4 param_3)

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
    local_c = FUN_000167dc(param_1,param_2,&local_1c);
    if (0 < local_c) {
      local_10 = *local_18;
      do {
        local_c = FUN_00016b44(local_14,local_10,&local_1c);
      } while (0 < local_c);
      if (*(int *)(local_10 + 0x18) == 0) {
        FUN_00015bf4(local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_00016d98 @ 00016d98 size=700 ===== */

void FUN_00016d98(int param_1)

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
          FUN_00016ccc(param_1,auStack_1074,local_1018);
        }
      }
      fclose(local_18);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
      *(__time_t *)(param_1 + 0x14) = sStack_1070.st_mtim.tv_sec;
    }
  }
  return;
}



/* ===== FUN_00017054 @ 00017054 size=232 ===== */

undefined4 FUN_00017054(int param_1,undefined4 param_2,int param_3)

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
    if ((param_1 == 0) && (iVar1 = FUN_00015828(&local_18,0), iVar1 < 0)) {
      local_c = 0;
    }
    else {
      local_10 = FUN_00018458(local_18,param_3,3);
      if ((local_10 != 0) && (local_14 = FUN_00017948(local_10,param_2), local_14 != 0)) {
        local_c = FUN_00016060(*(undefined4 *)(local_14 + 0x14));
      }
      if (param_1 == 0) {
        FUN_0001592c(local_18);
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001713c @ 0001713c size=376 ===== */

undefined4 FUN_0001713c(int param_1,char *param_2,void *param_3)

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
  if ((param_1 == 0) && (iVar1 = FUN_00015828(&local_14,0), iVar1 < 0)) {
    return 0;
  }
  local_2c = param_3;
  local_28 = param_2;
  if (param_3 == (void *)0x0) {
    pcVar2 = strchr(param_2,0x3d);
    if (pcVar2 == (char *)0x0) {
      local_c = FUN_00016060(param_2);
      goto LAB_00017274;
    }
    FUN_00017e90(param_2,&local_18,&local_1c);
    if ((local_18 == (char *)0x0) || (local_1c == (void *)0x0)) goto LAB_00017274;
    local_28 = local_18;
    local_2c = local_1c;
  }
  local_10 = FUN_00018170(local_14,local_28,local_2c);
  if (local_10 != 0) {
    uVar3 = FUN_00015c78(local_10);
    local_c = FUN_00016060(uVar3);
  }
LAB_00017274:
  free(local_18);
  free(local_1c);
  if (param_1 == 0) {
    FUN_0001592c(local_14);
  }
  return local_c;
}



/* ===== FUN_000172b4 @ 000172b4 size=60 ===== */

bool FUN_000172b4(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_000172f0 @ 000172f0 size=268 ===== */

undefined4 FUN_000172f0(int param_1,FILE *param_2)

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



/* ===== FUN_000173fc @ 000173fc size=860 ===== */

int FUN_000173fc(undefined4 *param_1)

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
    iVar1 = FUN_000172b4(param_1);
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
                  (local_1c = FUN_000172f0(local_c,local_18), -1 < local_1c))))) {
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



/* ===== FUN_00017758 @ 00017758 size=88 ===== */

void FUN_00017758(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_000177b0 @ 000177b0 size=56 ===== */

void FUN_000177b0(undefined4 param_1,int param_2)

{
  FUN_00017758(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_000177e8 @ 000177e8 size=60 ===== */

void FUN_000177e8(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00017824 @ 00017824 size=56 ===== */

void FUN_00017824(undefined4 *param_1)

{
  FUN_000177e8(param_1[1],*param_1);
  return;
}



/* ===== FUN_0001785c @ 0001785c size=124 ===== */

void * FUN_0001785c(void)

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



/* ===== FUN_000178d8 @ 000178d8 size=112 ===== */

void FUN_000178d8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00017824(param_1);
    FUN_00017824((int)param_1 + 8);
    free(*(void **)((int)param_1 + 0x10));
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_00017948 @ 00017948 size=164 ===== */

undefined4 * FUN_00017948(int param_1,char *param_2)

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



/* ===== FUN_000179ec @ 000179ec size=176 ===== */

uint FUN_000179ec(int param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00017948(param_1,param_2);
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



/* ===== FUN_00017a9c @ 00017a9c size=176 ===== */

undefined4 * FUN_00017a9c(int param_1,char *param_2)

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



/* ===== FUN_00017b4c @ 00017b4c size=836 ===== */

undefined4 FUN_00017b4c(int param_1,char *param_2,int param_3,undefined4 param_4)

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
  __s2 = (char *)FUN_00015fc0(param_3,param_4);
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
  iVar1 = FUN_00017948(param_1,param_2);
  if (param_3 == 0) {
    if (iVar1 != 0) {
      FUN_000178d8(iVar1);
    }
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_0001785c();
    if (iVar1 == 0) goto LAB_00017e4c;
    uVar3 = FUN_00016060(param_2);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    *(char **)(iVar1 + 0x14) = __s2;
    *(int *)(iVar1 + 0x18) = param_1;
    FUN_000177b0(iVar1,param_1 + 8);
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_00017dec;
    local_c = FUN_00017a9c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x10));
    if (local_c == 0) {
      local_c = FUN_0001785c();
      if (local_c == 0) {
LAB_00017e4c:
        if (iVar1 == 0) {
          free(__s2);
        }
        else {
          FUN_000178d8(iVar1);
        }
        if (local_c != 0) {
          FUN_000178d8(local_c);
        }
        return 0xfffffff4;
      }
      uVar3 = FUN_00016060(param_2);
      *(undefined4 *)(local_c + 0x10) = uVar3;
      if (*(int *)(local_c + 0x10) == 0) goto LAB_00017e4c;
      FUN_000177b0(local_c,*(int *)(param_1 + 0x10) + 8);
    }
    FUN_000177b0(iVar1 + 8,local_c + 8);
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
LAB_00017dec:
  if (local_10 != (undefined4 *)0x0) {
    *local_10 = __s2;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(uint *)(*(int *)(param_1 + 0x10) + 0x18) = *(uint *)(*(int *)(param_1 + 0x10) + 0x18) | 4;
  }
  return 0;
}



/* ===== FUN_00017e90 @ 00017e90 size=340 ===== */

undefined4 FUN_00017e90(char *param_1,undefined4 *param_2,int *param_3)

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
  __ptr = (void *)FUN_00016060(param_1);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  puVar4 = (undefined1 *)((int)__ptr + ((int)pcVar1 - (int)param_1));
  pbVar3 = puVar4 + 1;
  *puVar4 = 0;
  if ((*pbVar3 == 0x22) || (local_c = pbVar3, *pbVar3 == 0x27)) {
    local_c = puVar4 + 2;
    pcVar1 = strrchr((char *)local_c,(uint)*pbVar3);
    if (pcVar1 == (char *)0x0) goto LAB_00017fcc;
    *pcVar1 = '\0';
  }
  iVar2 = FUN_00016060(local_c);
  if (iVar2 != 0) {
    *param_2 = __ptr;
    *param_3 = iVar2;
    return 0;
  }
LAB_00017fcc:
  free(__ptr);
  return 0xffffffff;
}



/* ===== FUN_00017fe4 @ 00017fe4 size=104 ===== */

undefined4 * FUN_00017fe4(int param_1)

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



/* ===== FUN_0001804c @ 0001804c size=204 ===== */

undefined4 FUN_0001804c(int *param_1,undefined4 *param_2,undefined4 *param_3)

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



/* ===== FUN_00018118 @ 00018118 size=88 ===== */

void FUN_00018118(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_00018170 @ 00018170 size=544 ===== */

int FUN_00018170(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  bVar1 = false;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) {
    FUN_00016d98(param_1);
    do {
      while( true ) {
        do {
          local_10 = -1;
          local_c = 0;
          iVar2 = FUN_00017a9c(param_1,param_2);
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
                ((local_c = FUN_0001d5e0(param_1,local_c), local_c == 0 ||
                 ((local_c != 0 && ((*(uint *)(local_c + 0x2c) & 1) != 0))))));
        if ((local_c != 0) || (bVar1)) break;
        iVar2 = FUN_000198a0(param_1);
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
      iVar2 = FUN_00019848(param_1);
    } while (-1 < iVar2);
  }
  return 0;
}



/* ===== FUN_00018390 @ 00018390 size=88 ===== */

void FUN_00018390(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_000183e8 @ 000183e8 size=56 ===== */

void FUN_000183e8(undefined4 param_1,int param_2)

{
  FUN_00018390(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_00018420 @ 00018420 size=56 ===== */

bool FUN_00018420(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00018458 @ 00018458 size=956 ===== */

undefined4 * FUN_00018458(undefined4 *param_1,char *param_2,uint param_3)

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
LAB_000184fc:
      if ((local_c == (undefined4 *)0x0) && ((param_3 & 1) != 0)) {
        iVar1 = access(param_2,0);
        if (iVar1 < 0) {
          return (undefined4 *)0x0;
        }
        local_c = (undefined4 *)FUN_00015b78();
        if (local_c == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        local_c[10] = 0x80000000;
        uVar2 = FUN_00016060(param_2);
        local_c[5] = uVar2;
        local_c[4] = param_1;
        FUN_000183e8(local_c,param_1);
        param_1[6] = param_1[6] | 4;
      }
      if ((((param_3 & 2) != 0) &&
          (local_c = (undefined4 *)FUN_0001d5e0(param_1,local_c), local_c != (undefined4 *)0x0)) &&
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
               ((iVar1 = FUN_0001d5e0(param_1,local_10), iVar1 != 0 &&
                ((*(uint *)(iVar1 + 0x2c) & 1) == 0)))))))) {
            FUN_00015bf4(iVar1);
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
      goto LAB_000184fc;
    }
    local_10 = (undefined4 *)*local_10;
  } while( true );
}



/* ===== FUN_00018814 @ 00018814 size=440 ===== */

int FUN_00018814(char *param_1)

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
          if (local_14 == (dirent *)0x0) goto LAB_000189b4;
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
        if (local_1c == (dirent *)0x0) goto LAB_00018980;
        iVar1 = strcmp(local_1c->d_name,param_1);
      } while (iVar1 != 0);
      local_c = 0;
LAB_00018980:
      closedir(local_18);
    } while (local_c != 0);
LAB_000189b4:
    closedir(local_10);
  }
  return local_c;
}



/* ===== FUN_000189cc @ 000189cc size=240 ===== */

undefined4 FUN_000189cc(undefined4 param_1)

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
        local_c = FUN_00016060(acStack_114);
      }
    }
    fclose(local_10);
  }
  return local_c;
}



/* ===== FUN_00018abc @ 00018abc size=1096 ===== */

void FUN_00018abc(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

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
      local_c = FUN_0001d5e0(param_1,local_1c);
      if ((local_c != 0) && ((*(uint *)(local_c + 0x2c) & 1) != 0)) break;
    }
    local_10 = local_14;
    local_14 = (undefined4 *)*local_14;
  }
  if ((local_c != 0) && (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20))
     ) goto LAB_00018e2c;
  iVar1 = strncmp(param_2,"dm-",3);
  if ((iVar1 == 0) && ((*(ushort *)(__ctype_b + (uint)(byte)param_2[3] * 2) & 8) != 0)) {
    uVar2 = FUN_000189cc(param_2);
    local_20 = (void *)uVar2;
    if (local_20 == (void *)0x0) {
      FUN_00016188("/dev/mapper",(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,0,&local_20);
    }
    if (local_20 == (void *)0x0) goto LAB_00018c7c;
  }
  else {
LAB_00018c7c:
    for (local_18 = &DAT_000301d4; *local_18 != 0; local_18 = local_18 + 1) {
      sprintf(acStack_120,"%s/%s",*local_18,param_2);
      local_c = FUN_00018458(param_1,acStack_120,0);
      if ((local_c != 0) &&
         (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20)))
      goto LAB_00018e2c;
      iVar1 = stat(acStack_120,&sStack_178);
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_00018420(sStack_178.st_mode), iVar1 != 0 &&
          (param_4 == sStack_178.st_rdev._4_4_ && param_3 == (int)sStack_178.st_rdev)))) {
        local_20 = (void *)FUN_00016060(acStack_120);
        goto LAB_00018df8;
      }
    }
    if (local_20 == (void *)0x0) {
      local_20 = (void *)FUN_000189cc(param_2);
    }
    if (local_20 == (void *)0x0) {
      FUN_00016188("/dev/mapper");
    }
    if ((local_20 == (void *)0x0) &&
       (local_20 = (void *)FUN_000163a4(param_3,param_4), local_20 == (void *)0x0)) {
      return;
    }
  }
LAB_00018df8:
  local_c = FUN_00018458(param_1,local_20,3);
  free(local_20);
LAB_00018e2c:
  if (local_c != 0) {
    if (param_5 == 0) {
      iVar1 = strncmp(*(char **)(local_c + 0x14),"/dev/mapper/",0xb);
      if (iVar1 == 0) {
        *(undefined4 *)(local_c + 0x1c) = 0x28;
        iVar1 = FUN_00018814(param_2);
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



/* ===== FUN_00018f04 @ 00018f04 size=224 ===== */

ulonglong FUN_00018f04(char *param_1)

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
      if (pcVar2 == (char *)0x0) goto LAB_00018fc4;
      iVar1 = sscanf(acStack_414,"device: %d:%d",&local_418,&local_41c);
    } while (iVar1 != 2);
    local_10 = gnu_dev_makedev(local_418,local_41c);
LAB_00018fc4:
    fclose(local_14);
  }
  return local_10;
}



/* ===== FUN_00018fe4 @ 00018fe4 size=600 ===== */

void FUN_00018fe4(undefined4 param_1,undefined4 param_2)

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
                goto LAB_00019224;
              }
              sprintf(__s,"%s/%s/LVs/%s","/proc/lvm/VGs",__s1,pcVar3);
              uVar6 = FUN_00018f04(__s);
              sprintf(__s,"%s/%s",__s1,pcVar3);
              FUN_00018abc(param_1,__s,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x14,param_2);
              free(__s);
            }
          }
          closedir(__dirp_00);
        }
      }
    }
LAB_00019224:
    closedir(__dirp);
  }
  return;
}



/* ===== FUN_0001923c @ 0001923c size=268 ===== */

int FUN_0001923c(undefined4 param_1,undefined4 param_2)

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
        FUN_00018abc(param_1,auStack_f8,(int)uVar3,(int)(uVar3 >> 0x20),0x1e,param_2);
        local_14 = local_14 + 1;
      }
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_00019348 @ 00019348 size=1280 ===== */

undefined4 FUN_00019348(undefined4 *param_1,undefined4 param_2)

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
    FUN_00016d98(param_1);
    FUN_0001923c(param_1,param_2);
    FUN_00018fe4(param_1,param_2);
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
              FUN_00018abc(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
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
                FUN_00015bf4(local_14);
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
            FUN_00018abc(param_1,local_52c[local_1c],*(undefined4 *)(&uStack_540 + local_1c),
                         *(undefined4 *)((int)&uStack_540 + local_1c * 8 + 4),0,param_2);
            local_558[local_1c] = 0;
          }
        }
      }
      if (local_558[local_10] != 0) {
        FUN_00018abc(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
                     *(undefined4 *)((int)&uStack_540 + local_10 * 8 + 4),0,param_2);
      }
      fclose(local_20);
      FUN_000173fc(param_1);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== FUN_00019848 @ 00019848 size=88 ===== */

undefined4 FUN_00019848(int param_1)

{
  undefined4 uVar1;
  time_t tVar2;
  
  uVar1 = FUN_00019348(param_1,0);
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_1 + 0x10) = tVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return uVar1;
}



/* ===== FUN_000198a0 @ 000198a0 size=48 ===== */

undefined4 FUN_000198a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019348(param_1,1);
  return uVar1;
}



/* ===== FUN_000198d0 @ 000198d0 size=76 ===== */

ushort FUN_000198d0(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}



/* ===== FUN_0001991c @ 0001991c size=84 ===== */

uint FUN_0001991c(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00019970 @ 00019970 size=160 ===== */

char * FUN_00019970(char *param_1,int param_2)

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



/* ===== FUN_00019a10 @ 00019a10 size=536 ===== */

int FUN_00019a10(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

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
    FUN_0001ddd0(*param_1,*param_1,param_3,param_4,0);
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



/* ===== FUN_00019c28 @ 00019c28 size=536 ===== */

undefined4 FUN_00019c28(int param_1,int *param_2)

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
    uVar5 = FUN_0001db90(param_1);
    uVar4 = (uint)uVar5 & 0xffff0000;
    local_18 = uVar4 - 0x10000;
    iStack_14 = (int)((ulonglong)uVar5 >> 0x20) - (uint)(uVar4 < 0x10000);
    FUN_0001ddd0(param_1,auStack_1010,local_18,iStack_14,0);
    if ((extraout_r1 < 0) || (sVar1 = read(param_1,auStack_101c,0x1000), sVar1 != 0x1000)) {
      uVar3 = 0xfffffffb;
    }
    else {
      iVar2 = memcmp(&DAT_0001ed94,auStack_101c,4);
      if ((iVar2 == 0) || (iVar2 = memcmp(&DAT_0001ed9c,auStack_101c,4), iVar2 == 0)) {
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



/* ===== FUN_00019e40 @ 00019e40 size=116 ===== */

void FUN_00019e40(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 auStack_30 [40];
  
  iVar1 = FUN_0001ded4(param_2);
  if (iVar1 == 0) {
    FUN_0001e068(param_2,auStack_30);
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_0001eda4;
    }
    FUN_00017b4c(param_1,param_3,auStack_30,0x25);
  }
  return;
}



/* ===== FUN_00019eb4 @ 00019eb4 size=292 ===== */

void FUN_00019eb4(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x78) != '\0') {
    local_c = param_3 + 0x78;
  }
  FUN_00017b4c(param_1,"LABEL",local_c,0x10);
  FUN_00019e40(param_1,param_3 + 0x68,0);
  if (((*(uint *)(param_3 + 0x5c) & 4) != 0) && (iVar1 = FUN_0001ded4(param_3 + 0xd0), iVar1 == 0))
  {
    FUN_00019e40(param_1,param_3 + 0xd0,"EXT_JOURNAL");
  }
  iVar1 = strcmp((char *)*param_2,"ext2");
  if ((iVar1 != 0) && ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
    FUN_00017b4c(param_1,"SEC_TYPE",&DAT_0001edc0,5);
  }
  return;
}



/* ===== FUN_00019fd8 @ 00019fd8 size=508 ===== */

undefined4 FUN_00019fd8(char *param_1)

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



/* ===== FUN_0001a1d4 @ 0001a1d4 size=500 ===== */

undefined4 FUN_0001a1d4(char *param_1)

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



/* ===== FUN_0001a3c8 @ 0001a3c8 size=356 ===== */

int FUN_0001a3c8(void)

{
  int iVar1;
  long lVar2;
  char *local_1a4;
  utsname uStack_1a0;
  int local_14;
  long local_10;
  char *local_c;
  
  iVar1 = DAT_00030bb0;
  if (DAT_00030bb0 < 1) {
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
            DAT_00030bb0 = (local_10 * 0x100 + local_14) * 0x100 + lVar2;
            iVar1 = DAT_00030bb0;
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



/* ===== FUN_0001a52c @ 0001a52c size=200 ===== */

int FUN_0001a52c(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_00030bb4 == -1) && (4 < tVar1 - DAT_00030e60)) {
    DAT_00030e60 = tVar1;
    iVar2 = FUN_00019fd8(&DAT_0001edc0);
    if ((iVar2 == 0) && (iVar2 = FUN_0001a1d4(&DAT_0001edc0), iVar2 == 0)) {
      DAT_00030bb4 = 0;
    }
    else {
      DAT_00030bb4 = 1;
    }
  }
  return DAT_00030bb4;
}



/* ===== FUN_0001a5f4 @ 0001a5f4 size=200 ===== */

int FUN_0001a5f4(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_00030bb8 == -1) && (4 < tVar1 - DAT_00030e64)) {
    DAT_00030e64 = tVar1;
    iVar2 = FUN_00019fd8(&DAT_0001ee14);
    if ((iVar2 == 0) && (iVar2 = FUN_0001a1d4(&DAT_0001ee14), iVar2 == 0)) {
      DAT_00030bb8 = 0;
    }
    else {
      DAT_00030bb8 = 1;
    }
  }
  return DAT_00030bb8;
}



/* ===== FUN_0001a6bc @ 0001a6bc size=200 ===== */

int FUN_0001a6bc(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_00030bbc == -1) && (4 < tVar1 - DAT_00030e68)) {
    DAT_00030e68 = tVar1;
    iVar2 = FUN_00019fd8("ext4dev");
    if ((iVar2 == 0) && (iVar2 = FUN_0001a1d4("ext4dev"), iVar2 == 0)) {
      DAT_00030bbc = 0;
    }
    else {
      DAT_00030bbc = 1;
    }
  }
  return DAT_00030bbc;
}



/* ===== FUN_0001a784 @ 0001a784 size=264 ===== */

undefined4 FUN_0001a784(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) != 0) {
    return 0xffffffea;
  }
  if (((((*(uint *)(param_3 + 0x5c) & 4) != 0) || (iVar1 = FUN_0001a52c(), iVar1 != 0)) ||
      (iVar1 = FUN_0001a5f4(), iVar1 != 0)) ||
     ((iVar1 = FUN_0001a6bc(), iVar1 == 0 || (iVar1 = FUN_0001a3c8(), iVar1 < 0x2061d)))) {
    if ((*(uint *)(param_3 + 0x160) & 4) == 0) {
      return 0xffffffea;
    }
    iVar1 = FUN_0001a6bc();
    if ((iVar1 == 0) && (iVar1 = FUN_0001a5f4(), iVar1 != 0)) {
      return 0xffffffea;
    }
  }
  FUN_00019eb4(*(undefined4 *)(param_1 + 8),param_2,param_3);
  return 0;
}



/* ===== FUN_0001a88c @ 0001a88c size=296 ===== */

undefined4 FUN_0001a88c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    if ((((((*(uint *)(param_3 + 0x5c) & 4) == 0) && (iVar1 = FUN_0001a52c(), iVar1 == 0)) &&
         (iVar1 = FUN_0001a5f4(), iVar1 != 0)) && (iVar1 = FUN_0001a3c8(), 0x2061c < iVar1)) ||
       (((*(uint *)(param_3 + 100) & 0xfffffff8) != 0 ||
        ((*(uint *)(param_3 + 0x60) & 0xffffffe9) != 0)))) {
      if (((*(uint *)(param_3 + 0x160) & 4) == 0) ||
         ((iVar1 = FUN_0001a6bc(), iVar1 == 0 && (iVar1 = FUN_0001a5f4(), iVar1 != 0)))) {
        FUN_00019eb4(*(undefined4 *)(param_1 + 8),param_2,param_3);
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



/* ===== FUN_0001a9b4 @ 0001a9b4 size=148 ===== */

undefined4 FUN_0001a9b4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    uVar1 = 0xffffffea;
  }
  else if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
          ((*(uint *)(param_3 + 0x60) & 0xffffffe9) == 0)) {
    FUN_00019eb4(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_0001aa48 @ 0001aa48 size=228 ===== */

undefined4 FUN_0001aa48(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
       ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
      iVar1 = FUN_0001a52c();
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_0001a5f4(), iVar1 != 0 || (iVar1 = FUN_0001a6bc(), iVar1 != 0)) &&
          (iVar1 = FUN_0001a3c8(), 0x2061c < iVar1)))) {
        uVar2 = 0xffffffea;
      }
      else {
        FUN_00019eb4(*(undefined4 *)(param_1 + 8),param_2,param_3);
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



/* ===== FUN_0001ab2c @ 0001ab2c size=100 ===== */

undefined4 FUN_0001ab2c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_00019eb4(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001ab90 @ 0001ab90 size=288 ===== */

int FUN_0001ab90(int param_1,int param_2)

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



/* ===== FUN_0001acb0 @ 0001acb0 size=1480 ===== */

undefined4 FUN_0001acb0(int param_1,undefined4 param_2,int param_3)

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
    local_44 = FUN_0001e230((uint)local_38 * 0x20 + (uint)local_36 + -1,local_36);
    local_48 = local_20 - ((uint)local_3a + local_40 + local_44);
    if (*(char *)(local_30 + 0xd) == '\0') {
      uVar3 = 1;
    }
    else {
      local_48 = FUN_0001e230(local_48,*(undefined1 *)(local_30 + 0xd));
      if (local_48 < 0xffffff7) {
        if (*(short *)(local_30 + 0x16) == 0) {
          local_54 = (uint)local_36 * (uint)*(byte *)(local_2c + 0xd);
          local_5c = local_40 + (uint)local_3a;
          local_28 = *(uint *)(local_2c + 0x2c);
          while ((local_28 != 0 && (local_1c = local_1c + -1, local_1c != 0))) {
            local_60 = (uint)*(byte *)(local_2c + 0xd) * (local_28 - 2);
            local_68 = (ulonglong)local_36 * (ulonglong)(uint)(local_5c + local_60);
            local_58 = FUN_00019a10(param_1,local_54,(undefined4)local_68,
                                    (int)((ulonglong)local_68 >> 0x20),local_54);
            if (local_58 == 0) break;
            local_6c = local_54 >> 5;
            local_10 = (void *)FUN_0001ab90(local_58,local_6c);
            if (local_10 != (void *)0x0) break;
            local_78 = (uint)local_36 * (uint)local_3a + local_28 * 4;
            uStack_74 = 0;
            puVar2 = (uint *)FUN_00019a10(param_1,local_54,local_78,0,local_54);
            if (puVar2 == (uint *)0x0) break;
            local_28 = *puVar2 & 0xfffffff;
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_000301e4,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_2c + 0x47);
          }
          local_14 = (byte *)(local_2c + 0x43);
        }
        else {
          local_4c = (uint)local_36 * ((uint)local_3a + local_40);
          local_50 = (uint)*(byte *)(local_2c + 0x11) + (uint)*(byte *)(local_2c + 0x12) * 0x100;
          local_54 = local_50 * 0x20;
          local_58 = FUN_00019a10(param_1,local_54,local_4c,0,local_54);
          if (local_58 != 0) {
            local_10 = (void *)FUN_0001ab90(local_58,local_50);
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_000301e4,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_30 + 0x2b);
          }
          local_14 = (byte *)(local_30 + 0x27);
          FUN_00017b4c(*(undefined4 *)(param_1 + 8),"SEC_TYPE","msdos",6);
        }
        if (((local_10 != (void *)0x0) && (iVar1 = memcmp(local_10,DAT_000301e4,0xb), iVar1 != 0))
           && (local_18 = FUN_00019970(local_10,0xb), local_18 != 0)) {
          local_c = local_10;
        }
        sprintf(acStack_84,"%02X%02X-%02X%02X",(uint)local_14[3],(uint)local_14[2],(uint)local_14[1]
                ,(uint)*local_14);
        FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,local_18);
        FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,acStack_84,9);
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



/* ===== FUN_0001b278 @ 0001b278 size=300 ===== */

undefined4 FUN_0001b278(undefined4 param_1,undefined4 param_2,int param_3)

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
      uVar2 = FUN_0001acb0(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001b3a4 @ 0001b3a4 size=1188 ===== */

undefined4 FUN_0001b3a4(int param_1,undefined4 param_2,int param_3)

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
    local_30 = FUN_0001e2f8(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),local_28
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
        local_3c = (void *)FUN_00019a10(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar3 = memcmp(local_3c,&DAT_0001ee64,4);
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
        local_3c = (void *)FUN_00019a10(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar4 = memcmp(local_3c,&DAT_0001ee64,4);
        iVar3 = iStack_34;
        if (iVar4 == 0) {
          uVar7 = VectorShiftRight(CONCAT44(local_10 * 3,local_10 * 3),0x20);
          bVar6 = CARRY4((uint)uVar7,local_38);
          local_38 = (uint)uVar7 + local_38;
          iStack_34 = (int)((ulonglong)uVar7 >> 0x20) + iStack_34 + (uint)bVar6;
          local_3c = (void *)FUN_00019a10(param_1,iVar3,local_38,iStack_34,local_10);
          if (local_3c == (void *)0x0) {
            return 1;
          }
          iVar3 = memcmp(local_3c,&DAT_0001ee64,4);
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
            FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,acStack_68,0);
            if (local_ec[0] != '\0') {
              FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_ec,0);
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



/* ===== FUN_0001b848 @ 0001b848 size=144 ===== */

undefined4 FUN_0001b848(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x6c) != '\0') {
    local_c = param_3 + 0x6c;
  }
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0xc);
  FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_0001b8d8 @ 0001b8d8 size=292 ===== */

undefined4 FUN_0001b8d8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  if (*(ushort *)(param_3 + 0x2c) >> 10 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar1 = FUN_0001e230(*(undefined4 *)(param_2 + 4),*(ushort *)(param_3 + 0x2c) >> 10);
    if (*(uint *)(param_3 + 0xc) < uVar1) {
      uVar2 = 0xffffffe5;
    }
    else {
      if ((*(char *)(*(int *)(param_2 + 0x10) + 6) == '2') ||
         (*(char *)(*(int *)(param_2 + 0x10) + 6) == '3')) {
        if (*(char *)(param_3 + 100) != '\0') {
          local_c = param_3 + 100;
        }
        FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x54,0);
      }
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_0001b9fc @ 0001b9fc size=144 ===== */

undefined4 FUN_0001b9fc(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x24) != '\0') {
    local_c = param_3 + 0x24;
  }
  FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x14,0);
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
  return 0;
}



/* ===== FUN_0001ba8c @ 0001ba8c size=280 ===== */

undefined4 FUN_0001ba8c(int param_1,undefined4 param_2,int param_3)

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
        FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
        FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x88,0);
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



/* ===== FUN_0001bbd0 @ 0001bbd0 size=92 ===== */

undefined4 FUN_0001bbd0(int param_1,undefined4 param_2,int param_3)

{
  char acStack_30 [40];
  
  strncpy(acStack_30,(char *)(param_3 + 0xa8),0x28);
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,acStack_30,0x28);
  return 0;
}



/* ===== FUN_0001bc2c @ 0001bc2c size=116 ===== */

undefined4 FUN_0001bc2c(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x10) != '\0') {
    local_c = param_3 + 0x10;
  }
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_0001bca0 @ 0001bca0 size=116 ===== */

undefined4 FUN_0001bca0(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x30) != '\0') {
    local_c = param_3 + 0x30;
  }
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_0001bd14 @ 0001bd14 size=96 ===== */

undefined4 FUN_0001bd14(int param_1)

{
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,0,0);
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",0,0);
  return 0;
}



/* ===== FUN_0001bd74 @ 0001bd74 size=312 ===== */

undefined4 FUN_0001bd74(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  FUN_0001bd14(param_1,param_2,param_3);
  piVar1 = (int *)FUN_00019a10(param_1,extraout_r1,0x400,0,0x400);
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
          FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",piVar1 + 7,0x10);
        }
        if ((char)piVar1[3] != '\0') {
          FUN_00019e40(*(undefined4 *)(param_1 + 8),piVar1 + 3,0);
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_0001beac @ 0001beac size=104 ===== */

undefined4 FUN_0001beac(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_00019970(param_3 + 0x28,0x20);
  FUN_00017b4c(uVar2,"LABEL",param_3 + 0x28,uVar1);
  return 0;
}



/* ===== FUN_0001bf14 @ 0001bf14 size=468 ===== */

undefined4 FUN_0001bf14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  for (local_10 = 1; (int)local_10 < 0x10; local_10 = local_10 + 1) {
    local_14 = FUN_00019a10(param_1,0x60,(local_10 + 0x10) * 0x800,
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
       local_14 = FUN_00019a10(param_1,0x60,iVar1,iVar1 >> 0x1f,0x60), local_14 == 0)) {
      return 1;
    }
    iVar1 = memcmp((void *)(local_14 + 1),&DAT_0001eeb8,4);
    if (iVar1 == 0) {
      uVar2 = FUN_0001beac(param_1,param_2,param_3);
      return uVar2;
    }
    local_18 = &DAT_000301e8;
    while ((*local_18 != 0 &&
           (iVar1 = memcmp((void *)*local_18,(void *)(local_14 + 1),5), iVar1 != 0))) {
      local_18 = local_18 + 1;
    }
    if (*local_18 == 0) break;
    local_c = local_c + 1;
  }
  return 1;
}



/* ===== FUN_0001c0e8 @ 0001c0e8 size=372 ===== */

undefined4 FUN_0001c0e8(int param_1,undefined4 param_2,void *param_3)

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
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ocfs1",6);
  }
  else if (8 < local_c) {
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ntocfs",7);
  }
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",auStack_16c,
               (uint)local_12c + (uint)local_12b * 0x100);
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"MOUNT",auStack_90,
               (uint)local_10 + (uint)local_f * 0x100);
  FUN_00019e40(*(undefined4 *)(param_1 + 8),auStack_12a,0);
  return 0;
}



/* ===== FUN_0001c25c @ 0001c25c size=108 ===== */

undefined4 FUN_0001c25c(int param_1,undefined4 param_2,int param_3)

{
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x110,0x40);
  FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x150,0);
  return 0;
}



/* ===== FUN_0001c2c8 @ 0001c2c8 size=80 ===== */

undefined4 FUN_0001c2c8(int param_1,undefined4 param_2,int param_3)

{
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x28,0x18);
  return 0;
}



/* ===== FUN_0001c318 @ 0001c318 size=216 ===== */

undefined4 FUN_0001c318(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0001991c(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x51d) && (iVar1 = FUN_0001991c(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x579)) {
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001c3f0 @ 0001c3f0 size=216 ===== */

undefined4 FUN_0001c3f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0001991c(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x709) && (iVar1 = FUN_0001991c(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x76c)) {
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_0001c4c8 @ 0001c4c8 size=628 ===== */

void FUN_0001c4c8(int param_1,int param_2,int param_3,int param_4)

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
LAB_0001c718:
      *(undefined1 *)(param_1 + local_10) = 0;
      return;
    }
    uVar1 = *(undefined1 *)(param_3 + local_c + 1);
    uVar2 = CONCAT11(*(byte *)(param_3 + local_c),uVar1);
    uVar4 = (uint)uVar2;
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + local_10) = 0;
      goto LAB_0001c718;
    }
    if (uVar4 < 0x80) {
      if (param_2 <= local_10 + 1) goto LAB_0001c718;
      *(undefined1 *)(param_1 + local_10) = uVar1;
      local_10 = local_10 + 1;
    }
    else if (uVar4 < 0x800) {
      if (param_2 <= local_10 + 2) goto LAB_0001c718;
      iVar3 = local_10 + 1;
      *(byte *)(param_1 + local_10) = ~((byte)~(byte)(((uint)(uVar2 >> 6) << 0x1a) >> 0x18) >> 2);
      local_10 = local_10 + 2;
      *(byte *)(param_1 + iVar3) = ~((byte)~(byte)(((uVar4 & 0x3f) << 0x19) >> 0x18) >> 1);
    }
    else {
      if (param_2 <= local_10 + 3) goto LAB_0001c718;
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



/* ===== FUN_0001c73c @ 0001c73c size=256 ===== */

undefined4 FUN_0001c73c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2c [20];
  int local_18;
  int iStack_14;
  int *local_10;
  int local_c;
  
  local_c = param_3;
  iVar1 = memcmp((void *)(param_3 + 0x7c),&DAT_0001eed8,2);
  if ((iVar1 == 0) || (iVar1 = memcmp((void *)(local_c + 0x7c),&DAT_0001eedc,2), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    local_10 = (int *)(local_c + 0x74);
    local_18 = *local_10;
    iStack_14 = *(int *)(local_c + 0x78);
    if (local_18 != 0 || iStack_14 != 0) {
      sprintf(acStack_2c,"%016llX",local_18,iStack_14);
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,acStack_2c,0);
    }
    FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c + 0x25,*(undefined1 *)(local_c + 0x24)
                );
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001c83c @ 0001c83c size=1428 ===== */

undefined4 FUN_0001c83c(int param_1,int param_2,void *param_3)

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
  iVar2 = memcmp(param_3,&DAT_0001eee0,2);
  local_2e4 = param_3;
  if (iVar2 == 0) {
    iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0001eed8,2);
    if ((iVar2 != 0) && (iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0001eedc,2), iVar2 != 0)
       ) {
      return 1;
    }
    local_30 = FUN_0001991c(*(undefined4 *)((int)local_2c + 0x14));
    local_34 = FUN_000198d0(*(undefined2 *)((int)local_2c + 0x1c));
    local_38 = FUN_000198d0(*(undefined2 *)((int)local_2c + 0x7e));
    local_1c = local_34 * 0x200 + local_30 * local_38;
    local_2e4 = (void *)FUN_00019a10(param_1,0x82,*(int *)(param_2 + 4) * 0x400 + local_1c,0,0x82);
    if (local_2e4 == (void *)0x0) {
      return 1;
    }
  }
  local_3c = local_2e4;
  iVar2 = memcmp(local_2e4,&DAT_0001eed8,2);
  if ((iVar2 == 0) || (iVar2 = memcmp(local_3c,&DAT_0001eedc,2), iVar2 == 0)) {
    local_40 = (int *)((int)local_3c + 0x68);
    local_48 = *local_40;
    iStack_44 = *(int *)((int)local_3c + 0x6c);
    if (local_48 != 0 || iStack_44 != 0) {
      sprintf(acStack_d4,"%016llX",local_48,iStack_44);
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,acStack_d4,0);
    }
    local_4c = FUN_0001991c(*(undefined4 *)((int)local_3c + 0x28));
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
    local_50 = FUN_0001991c(local_c0[0]);
    lVar1 = (ulonglong)local_4c * (ulonglong)local_50 + (ulonglong)local_1c;
    uVar4 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_00019a10(param_1,uVar4,(int)lVar1,uVar4,0x2000);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_54 = iVar2 + 0xe;
      local_58 = FUN_0001991c(*(undefined4 *)(iVar2 + 0x18));
      local_5c = FUN_000198d0(*(undefined2 *)(local_54 + 0x12));
      local_60 = FUN_0001991c(*(undefined4 *)(local_54 + 6));
      if (local_60 == 0) {
        uVar4 = 0;
      }
      else {
        local_24 = FUN_0001e230(local_5c * local_58,local_4c);
        for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
          local_20 = FUN_0001991c(local_c0[local_28 * 2]);
          local_64 = FUN_0001991c(local_c0[local_28 * 2 + 1]);
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
          iVar2 = FUN_00019a10(param_1,uVar4,(int)(local_70 + (ulonglong)local_1c),uVar4,local_5c);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            local_74 = iVar2;
            local_78 = FUN_000198d0(*(undefined2 *)(iVar2 + 10));
            if (local_78 == 0) {
              uVar4 = 0;
            }
            else if (*(char *)(local_74 + 8) == -1) {
              local_7c = iVar2 + 0xe;
              iVar2 = FUN_0001991c(*(undefined4 *)(iVar2 + 0x10));
              if (iVar2 == 1) {
                local_80 = FUN_000198d0(*(undefined2 *)(local_7c + 6));
                local_80 = local_80 << 1;
                FUN_0001c4c8(auStack_2d4,0x200,local_7c + 8,local_80);
                FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",auStack_2d4,0);
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



/* ===== FUN_0001cdd0 @ 0001cdd0 size=204 ===== */

uint FUN_0001cdd0(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xf597a6cf;
  local_14 = param_1;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    uVar1 = *(uint *)(&DAT_0001f1c8 + ((local_10 ^ *local_14) & 0xf) * 4) ^
            (local_10 ^ *local_14) >> 4;
    local_10 = *(uint *)(&DAT_0001f1c8 + (uVar1 & 0xf) * 4) ^ uVar1 >> 4;
    local_14 = local_14 + 1;
  }
  return local_10;
}



/* ===== FUN_0001ce9c @ 0001ce9c size=456 ===== */

undefined4 FUN_0001ce9c(int param_1,int param_2,void *param_3)

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
    iVar4 = FUN_0001cdd0((int)local_10 + 0x14,0x1ec);
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
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),&DAT_0001eda4,local_48,0x26);
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



/* ===== FUN_0001d064 @ 0001d064 size=152 ===== */

undefined4 FUN_0001d064(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 299) != '\0') {
    local_c = param_3 + 299;
  }
  FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x100);
  FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_0001d0fc @ 0001d0fc size=76 ===== */

undefined4 FUN_0001d0fc(int param_1,undefined4 param_2,int param_3)

{
  FUN_00019e40(*(undefined4 *)(param_1 + 8),param_3 + 0x6c,0);
  return 0;
}



/* ===== FUN_0001d148 @ 0001d148 size=80 ===== */

undefined8 FUN_0001d148(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x6c);
  return CONCAT44(param_4 << uVar1 | param_3 << (uVar1 - 0x20 & 0xff) |
                  param_3 >> (0x20 - uVar1 & 0xff),param_3 << uVar1);
}



/* ===== FUN_0001d198 @ 0001d198 size=116 ===== */

undefined8 FUN_0001d198(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 - 2;
  uVar2 = (uint)*(byte *)(param_1 + 0x6d);
  return CONCAT44((0 << uVar2 | uVar1 << (uVar2 - 0x20 & 0xff) | uVar1 >> (0x20 - uVar2 & 0xff)) +
                  (uint)CARRY4(uVar1 << uVar2,*(uint *)(param_1 + 0x58)),
                  (uVar1 << uVar2) + *(uint *)(param_1 + 0x58));
}



/* ===== FUN_0001d20c @ 0001d20c size=72 ===== */

undefined4 FUN_0001d20c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0001d198(param_1,param_2);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar1 = FUN_0001d148(param_1,uVar1,(int)uVar2,uVar1);
  return uVar1;
}



/* ===== FUN_0001d254 @ 0001d254 size=164 ===== */

undefined4 FUN_0001d254(undefined4 param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = FUN_0001d148(param_2,param_2,*(undefined4 *)(param_2 + 0x50),0);
  uVar4 = (ulonglong)CONCAT14(CARRY4(param_3,param_3),param_3 * 2);
  uVar4 = VectorAdd(uVar4,uVar4,8);
  lVar1 = (uVar4 & 0xffffffff00000000) + (uVar4 & 0xffffffff) + lVar1;
  local_18 = (undefined4)lVar1;
  uStack_14 = (undefined4)((ulonglong)lVar1 >> 0x20);
  puVar2 = (undefined4 *)FUN_00019a10(param_1,4,local_18,uStack_14,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  return uVar3;
}



/* ===== FUN_0001d2f8 @ 0001d2f8 size=352 ===== */

char * FUN_0001d2f8(undefined4 param_1,int param_2)

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
  lVar4 = FUN_0001d20c(param_2,local_c);
  local_1c = 0;
  while( true ) {
    uStack_14 = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_18 = (undefined4)lVar4;
    if (9999 < local_1c) {
      return (char *)0x0;
    }
    pcVar3 = (char *)FUN_00019a10(param_1,0x20,local_18,uStack_14,0x20);
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
    FUN_0001e2f8((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),iVar1,iVar1 >> 0x1f);
    if (extraout_r2 == 0 && extraout_r3 == 0) {
      local_c = FUN_0001d254(param_1,param_2,local_c);
      if (local_c < 2) {
        return (char *)0x0;
      }
      if (0xffffff6 < local_c) {
        return (char *)0x0;
      }
      lVar4 = FUN_0001d20c(param_2,local_c);
    }
    local_1c = local_1c + 1;
  }
  return pcVar3;
}



/* ===== FUN_0001d458 @ 0001d458 size=392 ===== */

int FUN_0001d458(int param_1,undefined4 param_2,int param_3)

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
    local_18 = FUN_0001d2f8(param_1,param_3);
    if (local_18 == 0) {
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",&DAT_0001eef0,4);
    }
    else {
      FUN_00017b4c(*(undefined4 *)(param_1 + 8),"LABEL",local_18 + 2,*(undefined1 *)(local_18 + 1));
    }
    memset(acStack_28,0,0x10);
    snprintf(acStack_28,0x10,"%02hhX%02hhX-%02hhX%02hhX",(uint)*(byte *)(local_14 + 0x67),
             (uint)*(byte *)(local_14 + 0x66),(uint)*(byte *)(local_14 + 0x65),
             (uint)*(byte *)(local_14 + 100));
    uVar4 = *(undefined4 *)(param_1 + 8);
    sVar2 = strlen(acStack_28);
    FUN_00017b4c(uVar4,&DAT_0001eda4,acStack_28,sVar2);
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



/* ===== FUN_0001d5e0 @ 0001d5e0 size=1208 ===== */

int FUN_0001d5e0(int param_1,int param_2)

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
      if (((*(uint *)(param_2 + 0x2c) & 1) != 0) && (dStack_28 < DAT_0001da98)) {
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
           (iVar1 = FUN_00019c28(local_50,auStack_c0), iVar1 == 0)) {
          FUN_00019e40(param_2,auStack_c0,0);
          local_54 = "mdraid";
          goto LAB_0001d9e0;
        }
        for (local_1c = &DAT_00030208; *local_1c != 0; local_1c = local_1c + 6) {
          if ((*(int *)(param_2 + 0x18) == 0) ||
             (iVar1 = strcmp((char *)*local_1c,*(char **)(param_2 + 0x18)), iVar1 == 0)) {
            local_2c = local_1c[1] + ((uint)local_1c[2] >> 10);
            local_30 = FUN_00019a10(&local_50,&local_50,local_2c * 0x400,local_2c >> 0x16,0x400);
            if (((local_30 != 0) &&
                (iVar1 = memcmp((void *)local_1c[4],(void *)(local_30 + (local_1c[2] & 0x3ffU)),
                                local_1c[3]), iVar1 == 0)) &&
               ((local_1c[5] == 0 ||
                (iVar1 = (*(code *)local_1c[5])(&local_50,local_1c,local_30), iVar1 == 0)))) {
              local_54 = (char *)*local_1c;
              goto LAB_0001d9e0;
            }
          }
        }
        if ((*local_1c != 0) || (*(int *)(param_2 + 0x18) == 0)) break;
        local_34 = FUN_00017fe4(param_2);
        while (iVar1 = FUN_0001804c(local_34,&local_54,auStack_58), iVar1 == 0) {
          FUN_00017b4c(param_2,local_54,0,0);
        }
        FUN_00018118(local_34);
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        FUN_00015bf4(param_2);
        local_c8 = 0;
      }
LAB_0001d9e0:
      if ((local_c8 != 0) && (local_54 != (char *)0x0)) {
        *(undefined4 *)(local_c8 + 0x20) = (undefined4)sStack_b0.st_rdev;
        *(undefined4 *)(local_c8 + 0x24) = sStack_b0.st_rdev._4_4_;
        tVar3 = time((time_t *)0x0);
        *(time_t *)(local_c8 + 0x28) = tVar3;
        *(uint *)(local_c8 + 0x2c) = *(uint *)(local_c8 + 0x2c) | 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
        FUN_00017b4c(local_c8,&DAT_0001f1c0,local_54,0);
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
    FUN_00015bf4(param_2);
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_0001daa0 @ 0001daa0 size=116 ===== */

undefined4 FUN_0001daa0(char *param_1)

{
  int iVar1;
  int *local_c;
  
  local_c = &DAT_00030208;
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



/* ===== FUN_0001db14 @ 0001db14 size=124 ===== */

undefined4 FUN_0001db14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined1 uStack_9;
  
  FUN_0001ddd0(param_1,param_2,param_3,param_4,0);
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



/* ===== FUN_0001db90 @ 0001db90 size=576 ===== */

undefined8 FUN_0001db90(int param_1)

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
          while (iVar2 = FUN_0001db14(param_1,iVar2,local_18,iStack_14), iVar2 != 0) {
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
            iVar2 = FUN_0001db14(param_1,0,local_30,iStack_2c);
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



/* ===== FUN_0001ddd0 @ 0001ddd0 size=260 ===== */

__off64_t FUN_0001ddd0(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
  else if (DAT_00030e6c == 0) {
    _Var3 = lseek64(param_1,CONCAT44(param_4,param_3),param_5);
    local_10 = (int)_Var3;
    iStack_c = (int)((ulonglong)_Var3 >> 0x20);
    if ((iStack_c == -1 && local_10 == -1) && (piVar2 = __errno_location(), *piVar2 == 0x26)) {
      DAT_00030e6c = DAT_00030e6c + 1;
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



/* ===== FUN_0001ded4 @ 0001ded4 size=112 ===== */

undefined4 FUN_0001ded4(char *param_1)

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



/* ===== FUN_0001df44 @ 0001df44 size=172 ===== */

void FUN_0001df44(undefined4 param_1,char *param_2,char *param_3)

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
  
  FUN_0001e0a4(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_0001dff0 @ 0001dff0 size=60 ===== */

void FUN_0001dff0(undefined4 param_1,undefined4 param_2)

{
  FUN_0001df44(param_1,param_2,DAT_00030bc0);
  return;
}



/* ===== FUN_0001e02c @ 0001e02c size=60 ===== */

void FUN_0001e02c(undefined4 param_1,undefined4 param_2)

{
  FUN_0001df44(param_1,param_2,DAT_00030bc4);
  return;
}



/* ===== FUN_0001e068 @ 0001e068 size=60 ===== */

void FUN_0001e068(undefined4 param_1,undefined4 param_2)

{
  FUN_0001df44(param_1,param_2,DAT_00030bc0);
  return;
}



/* ===== FUN_0001e0a4 @ 0001e0a4 size=396 ===== */

void FUN_0001e0a4(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_0001e230 @ 0001e230 size=168 ===== */

ulonglong FUN_0001e230(uint param_1,uint param_2)

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



/* ===== FUN_0001e2f8 @ 0001e2f8 size=76 ===== */

void FUN_0001e2f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001e344();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001e344 @ 0001e344 size=328 ===== */

undefined8 FUN_0001e344(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0001e48c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00031000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00031004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00031008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0003100c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 00031010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00031014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkstemp @ 00031018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003101c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 00031020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 00031024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00031028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0003102c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 00031030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00031034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 00031038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0003103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00031040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00031044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00031048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00031050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 00031054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00031058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0003105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 00031060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00031064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00031068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0003106c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00031070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00031074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00031078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0003107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00031080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00031084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00031088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0003108c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00031090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 00031094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00031098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0003109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 000310a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 000310a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::difftime @ 000310a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000310ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000310b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 000310b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 000310b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 000310bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 000310c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000310c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000310c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 000310cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000310d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000310d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 000310d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000310dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000310e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000310e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000310e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 000310ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000310f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000310f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000310f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 000310fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00031100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 00031104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::link @ 00031108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0003110c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00031110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00031114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00031118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0003111c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 00031120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00031124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00031128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0003112c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00031130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00031134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00031138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0003113c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00031140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00031144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


