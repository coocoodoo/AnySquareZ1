// blkid — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011078 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 0001109c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002d00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 000110a8 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0002d010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000110b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002d014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000110c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002d018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 000110cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0002d01c)();
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 000110d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002d020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::geteuid @ 000110e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0002d024)();
  return _Var1;
}



/* ===== <EXTERNAL>::snprintf @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002d028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002d02c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 00011108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_0002d030)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getegid @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_0002d034)();
  return _Var1;
}



/* ===== <EXTERNAL>::fgets @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002d038)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0002d03c)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002d040)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002d044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::puts @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002d048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0002d04c)();
  return _Var1;
}



/* ===== <EXTERNAL>::feof @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0002d050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::hasmntopt @ 00011174 size=12 ===== */

void hasmntopt(void)

{
  (*(code *)PTR_hasmntopt_0002d054)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002d058)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0002d05c)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::lseek @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0002d060)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::abort @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002d064)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0002d068)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002d06c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::uname @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0002d070)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_0002d074)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 000111e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002d078)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002d07c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fstat @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0002d080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002d084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011210 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002d088)();
  return;
}



/* ===== <EXTERNAL>::umask @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_0002d08c)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::lstat @ 00011228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_0002d090)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002d094)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002d098)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002d09c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0002d0a0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002d0a4)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002d0a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_0002d0ac)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002d0b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011294 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_0002d0b4)();
  return;
}



/* ===== <EXTERNAL>::endmntent @ 000112a0 size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_0002d0b8)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0002d0c0)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fopen @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002d0c4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 000112d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002d0c8)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000112dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002d0cc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002d0d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 000112f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0002d0d4)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002d0d8)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002d0dc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011318 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002d0e0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::difftime @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_difftime_0002d0e4)(__time1);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::mkstemp @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkstemp_0002d0e8)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002d0ec)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002d0f0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getmntent @ 00011354 size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_0002d0f4)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002d0f8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 0001136c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002d0fc)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002d100)();
  return piVar1;
}



/* ===== <EXTERNAL>::link @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_link_0002d104)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002d108)(__status);
  return;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0001139c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_0002d10c)(__major);
  return uVar1;
}



/* ===== <EXTERNAL>::atoi @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002d110)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002d114)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 000113c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0002d118)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002d11c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002d120)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002d124)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002d128)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000113fc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002d12c)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002d130)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002d134)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002d138)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001142c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002d13c)();
  return;
}



/* ===== entry @ 00011438 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002d0bc)
            (DAT_0001146c,param_2,&stack0x00000004,DAT_00011470,DAT_00011468,param_1);
  return;
}



/* ===== FUN_00011474 @ 00011474 size=32 ===== */

void FUN_00011474(void)

{
  if (DAT_00011498 == DAT_00011494) {
    return;
  }
  if (DAT_0001149c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001149c)();
  return;
}



/* ===== _FINI_0 @ 000114d8 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011514;
  if (*DAT_00011514 != '\0') {
    return;
  }
  FUN_00011474();
  if (DAT_00011518 != 0) {
    __deregister_frame_info(DAT_0001151c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011520 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011544 != 0) {
    __register_frame_info(DAT_0001154c,DAT_00011548);
  }
  if ((DAT_000114d0 - DAT_000114cc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000114d4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000114c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000114d4)();
  return;
}



/* ===== FUN_00011550 @ 00011550 size=76 ===== */

void FUN_00011550(FILE *param_1)

{
  fprintf(param_1,"%s %s (%s)\n",DAT_0002d148,"1.0.0","12-Feb-2003");
  return;
}



/* ===== FUN_0001159c @ 0001159c size=108 ===== */

void FUN_0001159c(int param_1)

{
  FILE *__stream;
  
  __stream = stdout;
  if (param_1 != 0) {
    __stream = stderr;
  }
  FUN_00011550(__stream);
  fprintf(__stream,
          "usage:\t%s [-c <file>] [-ghlLv] [-o format] [-s <tag>] [-t <token>]\n    [-w <file>] [dev ...]\n\t-c\tcache file (default: /etc/blkid.tab, /dev/null = none)\n\t-h\tprint this usage message and exit\n\t-g\tgarbage collect the blkid cache\n\t-s\tshow specified tag(s) (default show all tags)\n\t-t\tfind device with a specific token (NAME=value pair)\n\t-l\tlookup the the first device with arguments specified by -t\n\t-v\tprint version and exit\n\t-w\twrite cache to different file (/dev/null = no write)\n\tdev\tspecify device(s) to probe (default: all devices)\n"
          ,DAT_0002d148);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== FUN_00011608 @ 00011608 size=436 ===== */

void FUN_00011608(byte *param_1,size_t param_2)

{
  byte *pbVar1;
  size_t sVar2;
  char *pcVar3;
  size_t local_20;
  byte *local_1c;
  byte local_9;
  
  local_20 = param_2;
  local_1c = param_1;
  if ((int)param_2 < 0) {
    local_20 = strlen((char *)param_1);
    local_1c = param_1;
  }
  while (sVar2 = local_20 - 1, local_20 != 0) {
    pbVar1 = local_1c + 1;
    local_9 = *local_1c;
    if (0x80 < local_9) {
      fwrite(&DAT_0001c17c,1,2,stdout);
      local_9 = local_9 + 0x80;
    }
    if ((local_9 < 0x20) || (local_9 == 0x7f)) {
      if (stdout->_chain == (_IO_FILE *)0x0) {
        fputc(0x5e,stdout);
      }
      else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
        pcVar3 = stdout->_IO_write_base;
        stdout->_IO_write_base = pcVar3 + 1;
        *pcVar3 = '^';
      }
      else {
        __fputc_unlocked(0x5e,stdout);
      }
      local_9 = local_9 ^ 0x40;
    }
    local_20 = sVar2;
    local_1c = pbVar1;
    if (stdout->_chain == (_IO_FILE *)0x0) {
      fputc((uint)local_9,stdout);
    }
    else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
      pbVar1 = (byte *)stdout->_IO_write_base;
      stdout->_IO_write_base = (char *)(pbVar1 + 1);
      *pbVar1 = local_9;
    }
    else {
      __fputc_unlocked(local_9,stdout);
    }
  }
  return;
}



/* ===== FUN_000117bc @ 000117bc size=148 ===== */

uint FUN_000117bc(void)

{
  int iVar1;
  undefined1 auStack_18 [2];
  ushort local_16;
  char *local_10;
  uint local_c;
  
  local_c = 0x50;
  iVar1 = ioctl(0,0x5413,auStack_18);
  if (iVar1 == 0) {
    local_c = (uint)local_16;
  }
  else {
    local_10 = getenv("COLUMNS");
    if (local_10 != (char *)0x0) {
      local_c = atoi(local_10);
    }
  }
  if (0x1000 < (int)local_c) {
    local_c = 0x1000;
  }
  return local_c;
}



/* ===== FUN_00011850 @ 00011850 size=428 ===== */

int FUN_00011850(char *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  int local_10;
  int local_c;
  
  sVar2 = strlen(param_1);
  local_c = sVar2 + param_3;
  local_10 = 0;
  fputs(param_1,stdout);
  if ((param_4 == 0) || (local_c <= param_2)) {
    if (param_2 < local_c) {
      local_10 = local_c - param_2;
    }
  }
  else {
    if (stdout->_chain == (_IO_FILE *)0x0) {
      fputc(10,stdout);
    }
    else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
      pcVar3 = stdout->_IO_write_base;
      stdout->_IO_write_base = pcVar3 + 1;
      *pcVar3 = '\n';
    }
    else {
      __fputc_unlocked(10,stdout);
    }
    local_c = 0;
  }
  do {
    if (stdout->_chain == (_IO_FILE *)0x0) {
      fputc(0x20,stdout);
    }
    else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
      pcVar3 = stdout->_IO_write_base;
      stdout->_IO_write_base = pcVar3 + 1;
      *pcVar3 = ' ';
    }
    else {
      __fputc_unlocked(0x20,stdout);
    }
    bVar1 = local_c < param_2;
    local_c = local_c + 1;
  } while (bVar1);
  return local_10;
}



/* ===== FUN_000119fc @ 000119fc size=648 ===== */

void FUN_000119fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  int local_c;
  
  if (DAT_0002d14c < 0) {
    DAT_0002d14c = FUN_000117bc();
    if (0x50 < DAT_0002d14c) {
      local_c = (DAT_0002d14c + -0x50) / 10;
      if (8 < local_c) {
        local_c = 8;
      }
      DAT_0002d14c = DAT_0002d14c + -0x50 + local_c * -2;
      DAT_0002d150 = DAT_0002d150 + local_c;
      DAT_0002d154 = DAT_0002d154 + local_c;
      DAT_0002d158 = DAT_0002d158 + DAT_0002d14c / 2;
      DAT_0002d15c = DAT_0002d15c + DAT_0002d14c / 2;
    }
  }
  uVar1 = FUN_00011850(param_1,DAT_0002d158,0,1);
  uVar1 = FUN_00011850(param_2,DAT_0002d154,uVar1,0);
  uVar1 = FUN_00011850(param_3,DAT_0002d150,uVar1,0);
  FUN_00011850(param_4,DAT_0002d15c,uVar1,0);
  fputs(param_5,stdout);
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



/* ===== FUN_00011c84 @ 00011c84 size=836 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011c84(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint local_88;
  char acStack_84 [4];
  char local_80 [4];
  undefined2 local_7c [2];
  char local_78 [4];
  char acStack_74 [60];
  uint local_38;
  undefined *local_34;
  char *local_30;
  int local_2c;
  undefined4 local_28;
  char *local_24;
  FILE *local_20;
  FILE *local_1c;
  int local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  
  local_c = &DAT_0001c188;
  local_10 = &DAT_0001c188;
  local_14 = &DAT_0001c188;
  if (param_1 == 0) {
    FUN_000119fc("device","fs_type","label","mount point",&DAT_0001c1b0);
    local_18 = FUN_000117bc();
    while (local_18 = local_18 + -1, 0 < local_18) {
      local_1c = stdout;
      if (stdout->_chain == (_IO_FILE *)0x0) {
        fputc(0x2d,stdout);
      }
      else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
        pcVar2 = stdout->_IO_write_base;
        stdout->_IO_write_base = pcVar2 + 1;
        *pcVar2 = '-';
      }
      else {
        __fputc_unlocked(0x2d,stdout);
      }
    }
    local_20 = stdout;
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
  else {
    local_24 = (char *)FUN_00012efc(param_1);
    iVar1 = access(local_24,0);
    if (iVar1 == 0) {
      local_28 = FUN_0001a790(param_1);
      while (iVar1 = FUN_0001a7f8(local_28,&local_30,&local_34), iVar1 == 0) {
        iVar1 = strcmp(local_30,"UUID");
        if (iVar1 == 0) {
          local_c = local_34;
        }
        iVar1 = strcmp(local_30,"TYPE");
        if (iVar1 == 0) {
          local_10 = local_34;
        }
        iVar1 = strcmp(local_30,"LABEL");
        if (iVar1 == 0) {
          local_14 = local_34;
        }
      }
      FUN_0001a8c4(local_28);
      local_88 = local_88 & 0xffffff00;
      local_2c = FUN_0001bad8(local_24,&local_38,&local_88,0x50);
      if (local_2c == 0) {
        if ((local_38 & 1) == 0) {
          if ((local_38 & 0x10) == 0) {
            local_88._0_1_ = s__not_mounted__0001c1ec[0];
            local_88._1_1_ = s__not_mounted__0001c1ec[1];
            local_88._2_1_ = s__not_mounted__0001c1ec[2];
            local_88._3_1_ = s__not_mounted__0001c1ec[3];
            acStack_84[0] = s__not_mounted__0001c1ec[4];
            acStack_84[1] = s__not_mounted__0001c1ec[5];
            acStack_84[2] = s__not_mounted__0001c1ec[6];
            acStack_84[3] = s__not_mounted__0001c1ec[7];
            local_80[0] = s__not_mounted__0001c1ec[8];
            local_80[1] = s__not_mounted__0001c1ec[9];
            local_80[2] = s__not_mounted__0001c1ec[10];
            local_80[3] = s__not_mounted__0001c1ec[0xb];
            local_7c[0] = (short)ram0x0001c1f8;
          }
          else {
            local_88._0_1_ = s__in_use__0001c1e0[0];
            local_88._1_1_ = s__in_use__0001c1e0[1];
            local_88._2_1_ = s__in_use__0001c1e0[2];
            local_88._3_1_ = s__in_use__0001c1e0[3];
            acStack_84[0] = s__in_use__0001c1e0[4];
            acStack_84[1] = s__in_use__0001c1e0[5];
            acStack_84[2] = s__in_use__0001c1e0[6];
            acStack_84[3] = s__in_use__0001c1e0[7];
            local_80[0] = (char)ram0x0001c1e8;
          }
        }
        else if ((char)local_88 == '\0') {
          local_88._0_1_ = s__mounted__mtpt_unknown__0001c1c8[0];
          local_88._1_1_ = s__mounted__mtpt_unknown__0001c1c8[1];
          local_88._2_1_ = s__mounted__mtpt_unknown__0001c1c8[2];
          local_88._3_1_ = s__mounted__mtpt_unknown__0001c1c8[3];
          acStack_84[0] = s__mounted__mtpt_unknown__0001c1c8[4];
          acStack_84[1] = s__mounted__mtpt_unknown__0001c1c8[5];
          acStack_84[2] = s__mounted__mtpt_unknown__0001c1c8[6];
          acStack_84[3] = s__mounted__mtpt_unknown__0001c1c8[7];
          local_80[0] = s__mounted__mtpt_unknown__0001c1c8[8];
          local_80[1] = s__mounted__mtpt_unknown__0001c1c8[9];
          local_80[2] = s__mounted__mtpt_unknown__0001c1c8[10];
          local_80[3] = s__mounted__mtpt_unknown__0001c1c8[0xb];
          local_7c = (undefined2  [2])s__mounted__mtpt_unknown__0001c1c8._12_4_;
          local_78[0] = s__mounted__mtpt_unknown__0001c1c8[0x10];
          local_78[1] = s__mounted__mtpt_unknown__0001c1c8[0x11];
          local_78[2] = s__mounted__mtpt_unknown__0001c1c8[0x12];
          local_78[3] = s__mounted__mtpt_unknown__0001c1c8[0x13];
          acStack_74[0] = s__mounted__mtpt_unknown__0001c1c8[0x14];
          acStack_74[1] = s__mounted__mtpt_unknown__0001c1c8[0x15];
          acStack_74[2] = s__mounted__mtpt_unknown__0001c1c8[0x16];
          acStack_74[3] = s__mounted__mtpt_unknown__0001c1c8[0x17];
        }
      }
      FUN_000119fc(local_24,local_10,local_14,&local_88,local_c);
    }
  }
  return;
}



/* ===== FUN_00011fc8 @ 00011fc8 size=680 ===== */

void FUN_00011fc8(int param_1,int param_2,int param_3,uint param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_20;
  char *local_1c;
  FILE *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_10 = 1;
  if (param_1 != 0) {
    if ((param_4 & 4) == 0) {
      if ((param_4 & 2) == 0) {
        local_14 = FUN_0001a790(param_1);
LAB_00012214:
        iVar3 = FUN_0001a7f8(local_14,&local_1c,&local_20);
        if (iVar3 == 0) {
          if ((param_3 != 0) && (param_2 != 0)) goto code_r0x00012064;
          goto LAB_000120d4;
        }
        FUN_0001a8c4(local_14);
        if ((local_10 == 0) && ((param_4 & 1) == 0)) {
          putchar(10);
        }
      }
      else {
        pcVar1 = (char *)FUN_00012efc(param_1);
        puts(pcVar1);
      }
    }
    else {
      FUN_00011c84(param_1);
    }
  }
  return;
code_r0x00012064:
  local_c = 0;
  while ((local_c < param_3 &&
         (iVar3 = strcmp(local_1c,*(char **)(param_2 + local_c * 4)), iVar3 != 0))) {
    local_c = local_c + 1;
  }
  if (local_c < param_3) {
LAB_000120d4:
    if ((param_4 & 1) == 0) {
      if (local_10 != 0) {
        uVar2 = FUN_00012efc(param_1);
        printf("%s: ",uVar2);
        local_10 = 0;
      }
      fputs(local_1c,stdout);
      fwrite(&DAT_0001c204,1,2,stdout);
      FUN_00011608(local_20,0xffffffff);
      fwrite(&DAT_0001c208,1,2,stdout);
    }
    else {
      fputs(local_20,stdout);
      local_18 = stdout;
      if (stdout->_chain == (_IO_FILE *)0x0) {
        fputc(10,stdout);
      }
      else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
        pcVar1 = stdout->_IO_write_base;
        stdout->_IO_write_base = pcVar1 + 1;
        *pcVar1 = '\n';
      }
      else {
        __fputc_unlocked(10,stdout);
      }
    }
  }
  goto LAB_00012214;
}



/* ===== FUN_00012270 @ 00012270 size=1728 ===== */

undefined4 FUN_00012270(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_450;
  void *local_44c;
  void *local_448;
  undefined4 auStack_444 [128];
  undefined4 auStack_244 [128];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  char *local_10;
  char *local_c;
  
  local_44 = 0;
  memset(auStack_244,0,0x200);
  memset(auStack_444,0,0x200);
  local_448 = (void *)0x0;
  local_44c = (void *)0x0;
  local_c = (char *)0x0;
  local_10 = (char *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 4;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  do {
    local_34 = getopt(param_1,param_2,"c:f:ghlLo:s:t:w:v");
    if (local_34 == -1) {
      local_34 = 0xffffffff;
      while (optind < param_1) {
        puVar1 = auStack_244 + local_14;
        local_14 = local_14 + 1;
        *puVar1 = param_2[optind];
        optind = optind + 1;
      }
      if (local_1c == 0) {
        iVar2 = FUN_00012aac(&local_44,local_c);
        if (-1 < iVar2) {
          local_20 = 2;
          if (local_30 == 0) {
            if ((local_28 & 4) != 0) {
              FUN_00011c84(0);
            }
            if (local_2c == 0) {
              if (local_14 == 0) {
                FUN_000146c4(local_44);
                local_3c = FUN_00012f24(local_44);
                FUN_00012fa4(local_3c,local_448,local_44c);
                while (iVar2 = FUN_000130d0(local_3c,&local_450), iVar2 == 0) {
                  local_450 = FUN_000189a0(local_44,local_450);
                  if (local_450 != 0) {
                    FUN_00011fc8(local_450,auStack_444,local_18,local_28);
                    local_20 = 0;
                  }
                }
                FUN_000131b4(local_3c);
              }
              else {
                for (local_24 = 0; local_24 < local_14; local_24 = local_24 + 1) {
                  local_40 = FUN_000132d4(local_44,auStack_244[local_24],3);
                  if ((local_40 != 0) &&
                     ((local_448 == (void *)0x0 ||
                      (iVar2 = FUN_0001a198(local_40,local_448,local_44c), iVar2 != 0)))) {
                    FUN_00011fc8(local_40,auStack_444,local_18,local_28);
                    local_20 = 0;
                  }
                }
              }
            }
            else {
              if (local_448 == (void *)0x0) {
                fwrite("The lookup option requires a search type specified using -t\n",1,0x3c,stderr
                      );
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              for (local_24 = 0; local_24 < local_14; local_24 = local_24 + 1) {
                FUN_000132d4(local_44,auStack_244[local_24],3);
              }
              local_38 = FUN_0001a91c(local_44,local_448,local_44c);
              if (local_38 != 0) {
                FUN_00011fc8(local_38,auStack_444,local_18,local_28);
                local_20 = 0;
              }
            }
          }
          else {
            FUN_00012c98(local_44);
          }
        }
      }
      else {
        FUN_00011550(stdout);
      }
      free(local_448);
      free(local_44c);
      FUN_00012bb0(local_44);
      return local_20;
    }
    switch(local_34) {
    case 0x4c:
      local_28 = 4;
      break;
    case 99:
      local_c = optarg;
      if (local_10 == (char *)0x0) {
        local_10 = optarg;
      }
      break;
    case 0x67:
      local_30 = 1;
      break;
    case 0x68:
      local_20 = 0;
    default:
      FUN_0001159c(local_20);
      break;
    case 0x6c:
      local_2c = local_2c + 1;
      break;
    case 0x6f:
      iVar2 = strcmp(optarg,"value");
      if (iVar2 == 0) {
        local_28 = 1;
      }
      else {
        iVar2 = strcmp(optarg,"device");
        if (iVar2 == 0) {
          local_28 = 2;
        }
        else {
          iVar2 = strcmp(optarg,"list");
          if (iVar2 == 0) {
            local_28 = 4;
          }
          else {
            iVar2 = strcmp(optarg,"full");
            if (iVar2 != 0) {
              fprintf(stderr,
                      "Invalid output format %s. Choose from value,\n\tdevice, list, or full\n",
                      optarg);
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            local_28 = 0;
          }
        }
      }
      break;
    case 0x73:
      if (0x7f < local_18) {
        fwrite("Too many tags specified\n",1,0x18,stderr);
        FUN_0001159c(local_20);
      }
      puVar1 = auStack_444 + local_18;
      local_18 = local_18 + 1;
      *puVar1 = optarg;
      break;
    case 0x74:
      if (local_448 != (void *)0x0) {
        fwrite("Can only search for one NAME=value pair\n",1,0x28,stderr);
        FUN_0001159c(local_20);
      }
      iVar2 = FUN_0001a63c(optarg,&local_448,&local_44c);
      if (iVar2 != 0) {
        fwrite("-t needs NAME=value pair\n",1,0x19,stderr);
        FUN_0001159c(local_20);
      }
      break;
    case 0x76:
      local_1c = 1;
      break;
    case 0x77:
      local_10 = optarg;
    }
  } while( true );
}



/* ===== FUN_000129e0 @ 000129e0 size=60 ===== */

bool FUN_000129e0(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00012a1c @ 00012a1c size=144 ===== */

undefined4 FUN_00012a1c(undefined4 param_1)

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



/* ===== FUN_00012aac @ 00012aac size=260 ===== */

undefined4 FUN_00012aac(undefined4 *param_1,char *param_2)

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
      local_18 = (char *)FUN_00012a1c("BLKID_FILE");
    }
    if (local_18 == (char *)0x0) {
      local_18 = "/etc/blkid.tab";
    }
    uVar2 = FUN_00014824(local_18);
    *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    FUN_000197a4(pvVar1);
    *param_1 = pvVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00012bb0 @ 00012bb0 size=232 ===== */

void FUN_00012bb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00019ba8(param_1);
    while (iVar1 = FUN_000129e0(param_1), iVar1 == 0) {
      FUN_00012e78(*param_1);
    }
    while (iVar1 = FUN_000129e0(param_1 + 2), iVar1 == 0) {
      iVar1 = param_1[2];
      while (iVar2 = FUN_000129e0(iVar1 + 8), iVar2 == 0) {
        FUN_0001a084(*(int *)(iVar1 + 8) + -8);
      }
      FUN_0001a084(iVar1);
    }
    free((void *)param_1[7]);
    free(param_1);
  }
  return;
}



/* ===== FUN_00012c98 @ 00012c98 size=180 ===== */

void FUN_00012c98(undefined4 *param_1)

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
        FUN_00012e78(local_14);
        param_1[6] = param_1[6] | 4;
      }
      local_c = local_10;
      local_10 = (undefined4 *)*local_10;
    }
  }
  return;
}



/* ===== FUN_00012d4c @ 00012d4c size=60 ===== */

void FUN_00012d4c(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00012d88 @ 00012d88 size=56 ===== */

void FUN_00012d88(undefined4 *param_1)

{
  FUN_00012d4c(param_1[1],*param_1);
  return;
}



/* ===== FUN_00012dc0 @ 00012dc0 size=60 ===== */

bool FUN_00012dc0(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00012dfc @ 00012dfc size=124 ===== */

void * FUN_00012dfc(void)

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



/* ===== FUN_00012e78 @ 00012e78 size=132 ===== */

void FUN_00012e78(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    FUN_00012d88(param_1);
    while (iVar1 = FUN_00012dc0((int)param_1 + 8), iVar1 == 0) {
      FUN_0001a084(*(undefined4 *)((int)param_1 + 8));
    }
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_00012efc @ 00012efc size=40 ===== */

undefined4 FUN_00012efc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== FUN_00012f24 @ 00012f24 size=128 ===== */

undefined4 * FUN_00012f24(undefined4 *param_1)

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



/* ===== FUN_00012fa4 @ 00012fa4 size=300 ===== */

undefined4 FUN_00012fa4(int *param_1,char *param_2,char *param_3)

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



/* ===== FUN_000130d0 @ 000130d0 size=228 ===== */

undefined4 FUN_000130d0(int *param_1,int *param_2)

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
    } while ((param_1[2] != 0) && (iVar1 = FUN_0001a198(iVar3,param_1[2],param_1[3]), iVar1 == 0));
    *param_2 = iVar3;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000131b4 @ 000131b4 size=88 ===== */

void FUN_000131b4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_0001320c @ 0001320c size=88 ===== */

void FUN_0001320c(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_00013264 @ 00013264 size=56 ===== */

void FUN_00013264(undefined4 param_1,int param_2)

{
  FUN_0001320c(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_0001329c @ 0001329c size=56 ===== */

bool FUN_0001329c(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_000132d4 @ 000132d4 size=956 ===== */

undefined4 * FUN_000132d4(undefined4 *param_1,char *param_2,uint param_3)

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
LAB_00013378:
      if ((local_c == (undefined4 *)0x0) && ((param_3 & 1) != 0)) {
        iVar1 = access(param_2,0);
        if (iVar1 < 0) {
          return (undefined4 *)0x0;
        }
        local_c = (undefined4 *)FUN_00012dfc();
        if (local_c == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        local_c[10] = 0x80000000;
        uVar2 = FUN_00014824(param_2);
        local_c[5] = uVar2;
        local_c[4] = param_1;
        FUN_00013264(local_c,param_1);
        param_1[6] = param_1[6] | 4;
      }
      if ((((param_3 & 2) != 0) &&
          (local_c = (undefined4 *)FUN_000189a0(param_1,local_c), local_c != (undefined4 *)0x0)) &&
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
               ((iVar1 = FUN_000189a0(param_1,local_10), iVar1 != 0 &&
                ((*(uint *)(iVar1 + 0x2c) & 1) == 0)))))))) {
            FUN_00012e78(iVar1);
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
      goto LAB_00013378;
    }
    local_10 = (undefined4 *)*local_10;
  } while( true );
}



/* ===== FUN_00013690 @ 00013690 size=440 ===== */

int FUN_00013690(char *param_1)

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
          if (local_14 == (dirent *)0x0) goto LAB_00013830;
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
        if (local_1c == (dirent *)0x0) goto LAB_000137fc;
        iVar1 = strcmp(local_1c->d_name,param_1);
      } while (iVar1 != 0);
      local_c = 0;
LAB_000137fc:
      closedir(local_18);
    } while (local_c != 0);
LAB_00013830:
    closedir(local_10);
  }
  return local_c;
}



/* ===== FUN_00013848 @ 00013848 size=240 ===== */

undefined4 FUN_00013848(undefined4 param_1)

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
        local_c = FUN_00014824(acStack_114);
      }
    }
    fclose(local_10);
  }
  return local_c;
}



/* ===== FUN_00013938 @ 00013938 size=1096 ===== */

void FUN_00013938(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

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
      local_c = FUN_000189a0(param_1,local_1c);
      if ((local_c != 0) && ((*(uint *)(local_c + 0x2c) & 1) != 0)) break;
    }
    local_10 = local_14;
    local_14 = (undefined4 *)*local_14;
  }
  if ((local_c != 0) && (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20))
     ) goto LAB_00013ca8;
  iVar1 = strncmp(param_2,"dm-",3);
  if ((iVar1 == 0) && ((*(ushort *)(__ctype_b + (uint)(byte)param_2[3] * 2) & 8) != 0)) {
    uVar2 = FUN_00013848(param_2);
    local_20 = (void *)uVar2;
    if (local_20 == (void *)0x0) {
      FUN_0001494c("/dev/mapper",(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,0,&local_20);
    }
    if (local_20 == (void *)0x0) goto LAB_00013af8;
  }
  else {
LAB_00013af8:
    for (local_18 = &DAT_0002d160; *local_18 != 0; local_18 = local_18 + 1) {
      sprintf(acStack_120,"%s/%s",*local_18,param_2);
      local_c = FUN_000132d4(param_1,acStack_120,0);
      if ((local_c != 0) &&
         (param_4 == *(int *)(local_c + 0x24) && param_3 == *(int *)(local_c + 0x20)))
      goto LAB_00013ca8;
      iVar1 = stat(acStack_120,&sStack_178);
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_0001329c(sStack_178.st_mode), iVar1 != 0 &&
          (param_4 == sStack_178.st_rdev._4_4_ && param_3 == (int)sStack_178.st_rdev)))) {
        local_20 = (void *)FUN_00014824(acStack_120);
        goto LAB_00013c74;
      }
    }
    if (local_20 == (void *)0x0) {
      local_20 = (void *)FUN_00013848(param_2);
    }
    if (local_20 == (void *)0x0) {
      FUN_0001494c("/dev/mapper");
    }
    if ((local_20 == (void *)0x0) &&
       (local_20 = (void *)FUN_00014b68(param_3,param_4), local_20 == (void *)0x0)) {
      return;
    }
  }
LAB_00013c74:
  local_c = FUN_000132d4(param_1,local_20,3);
  free(local_20);
LAB_00013ca8:
  if (local_c != 0) {
    if (param_5 == 0) {
      iVar1 = strncmp(*(char **)(local_c + 0x14),"/dev/mapper/",0xb);
      if (iVar1 == 0) {
        *(undefined4 *)(local_c + 0x1c) = 0x28;
        iVar1 = FUN_00013690(param_2);
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



/* ===== FUN_00013d80 @ 00013d80 size=224 ===== */

ulonglong FUN_00013d80(char *param_1)

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
      if (pcVar2 == (char *)0x0) goto LAB_00013e40;
      iVar1 = sscanf(acStack_414,"device: %d:%d",&local_418,&local_41c);
    } while (iVar1 != 2);
    local_10 = gnu_dev_makedev(local_418,local_41c);
LAB_00013e40:
    fclose(local_14);
  }
  return local_10;
}



/* ===== FUN_00013e60 @ 00013e60 size=600 ===== */

void FUN_00013e60(undefined4 param_1,undefined4 param_2)

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
                goto LAB_000140a0;
              }
              sprintf(__s,"%s/%s/LVs/%s","/proc/lvm/VGs",__s1,pcVar3);
              uVar6 = FUN_00013d80(__s);
              sprintf(__s,"%s/%s",__s1,pcVar3);
              FUN_00013938(param_1,__s,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x14,param_2);
              free(__s);
            }
          }
          closedir(__dirp_00);
        }
      }
    }
LAB_000140a0:
    closedir(__dirp);
  }
  return;
}



/* ===== FUN_000140b8 @ 000140b8 size=268 ===== */

int FUN_000140b8(undefined4 param_1,undefined4 param_2)

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
        FUN_00013938(param_1,auStack_f8,(int)uVar3,(int)(uVar3 >> 0x20),0x1e,param_2);
        local_14 = local_14 + 1;
      }
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_000141c4 @ 000141c4 size=1280 ===== */

undefined4 FUN_000141c4(undefined4 *param_1,undefined4 param_2)

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
    FUN_000197a4(param_1);
    FUN_000140b8(param_1,param_2);
    FUN_00013e60(param_1,param_2);
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
              FUN_00013938(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
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
                FUN_00012e78(local_14);
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
            FUN_00013938(param_1,local_52c[local_1c],*(undefined4 *)(&uStack_540 + local_1c),
                         *(undefined4 *)((int)&uStack_540 + local_1c * 8 + 4),0,param_2);
            local_558[local_1c] = 0;
          }
        }
      }
      if (local_558[local_10] != 0) {
        FUN_00013938(param_1,local_c,*(undefined4 *)(&uStack_540 + local_10),
                     *(undefined4 *)((int)&uStack_540 + local_10 * 8 + 4),0,param_2);
      }
      fclose(local_20);
      FUN_00019ba8(param_1);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== FUN_000146c4 @ 000146c4 size=88 ===== */

undefined4 FUN_000146c4(int param_1)

{
  undefined4 uVar1;
  time_t tVar2;
  
  uVar1 = FUN_000141c4(param_1,0);
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_1 + 0x10) = tVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return uVar1;
}



/* ===== FUN_0001471c @ 0001471c size=48 ===== */

undefined4 FUN_0001471c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000141c4(param_1,1);
  return uVar1;
}



/* ===== FUN_0001474c @ 0001474c size=56 ===== */

bool FUN_0001474c(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_00014784 @ 00014784 size=160 ===== */

char * FUN_00014784(char *param_1,size_t param_2)

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



/* ===== FUN_00014824 @ 00014824 size=44 ===== */

undefined4 FUN_00014824(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00014784(param_1,0);
  return uVar1;
}



/* ===== FUN_00014850 @ 00014850 size=140 ===== */

void FUN_00014850(undefined4 param_1,int *param_2)

{
  int *__ptr;
  int iVar1;
  
  __ptr = malloc(8);
  if (__ptr != (int *)0x0) {
    iVar1 = FUN_00014824(param_1);
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



/* ===== FUN_000148dc @ 000148dc size=112 ===== */

void FUN_000148dc(undefined4 *param_1)

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



/* ===== FUN_0001494c @ 0001494c size=540 ===== */

void FUN_0001494c(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
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
          iVar2 = FUN_0001474c(sStack_470.st_mode);
          if ((iVar2 != 0) &&
             (param_4 == sStack_470.st_rdev._4_4_ && param_3 == (int)sStack_470.st_rdev)) {
            uVar3 = FUN_00014824(acStack_414);
            *param_6 = uVar3;
            break;
          }
          if ((((param_5 != 0) && ((sStack_470.st_mode & 0xf000) == 0x4000)) &&
              (iVar2 = lstat(acStack_414,&sStack_470), iVar2 == 0)) &&
             ((sStack_470.st_mode & 0xf000) == 0x4000)) {
            FUN_00014850(acStack_414,param_5);
          }
        }
      }
    }
    closedir(local_c);
  }
  return;
}



/* ===== FUN_00014b68 @ 00014b68 size=292 ===== */

int FUN_00014b68(undefined4 param_1,undefined4 param_2)

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
  for (local_c = &DAT_0002d170; *local_c != 0; local_c = local_c + 1) {
    FUN_00014850(*local_c,&local_14);
  }
  while (local_14 != (undefined4 *)0x0) {
    local_10 = local_14;
    uVar1 = *local_14;
    local_14 = (undefined4 *)local_14[1];
    FUN_0001494c(uVar1,uVar1,param_1,param_2,&local_18,&local_1c);
    free((void *)*local_10);
    free(local_10);
    if (local_1c != 0) break;
    if (local_14 == (undefined4 *)0x0) {
      local_14 = local_18;
      local_18 = (undefined4 *)0x0;
    }
  }
  FUN_000148dc(&local_14);
  FUN_000148dc(&local_18);
  return local_1c;
}



/* ===== FUN_00014c90 @ 00014c90 size=76 ===== */

ushort FUN_00014c90(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}



/* ===== FUN_00014cdc @ 00014cdc size=84 ===== */

uint FUN_00014cdc(uint param_1)

{
  return param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}



/* ===== FUN_00014d30 @ 00014d30 size=160 ===== */

char * FUN_00014d30(char *param_1,int param_2)

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



/* ===== FUN_00014dd0 @ 00014dd0 size=536 ===== */

int FUN_00014dd0(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

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
    FUN_0001adf8(*param_1,*param_1,param_3,param_4,0);
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



/* ===== FUN_00014fe8 @ 00014fe8 size=536 ===== */

undefined4 FUN_00014fe8(int param_1,int *param_2)

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
    uVar5 = FUN_0001abb8(param_1);
    uVar4 = (uint)uVar5 & 0xffff0000;
    local_18 = uVar4 - 0x10000;
    iStack_14 = (int)((ulonglong)uVar5 >> 0x20) - (uint)(uVar4 < 0x10000);
    FUN_0001adf8(param_1,auStack_1010,local_18,iStack_14,0);
    if ((extraout_r1 < 0) || (sVar1 = read(param_1,auStack_101c,0x1000), sVar1 != 0x1000)) {
      uVar3 = 0xfffffffb;
    }
    else {
      iVar2 = memcmp(&DAT_0001c49c,auStack_101c,4);
      if ((iVar2 == 0) || (iVar2 = memcmp(&DAT_0001c4a4,auStack_101c,4), iVar2 == 0)) {
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



/* ===== FUN_00015200 @ 00015200 size=116 ===== */

void FUN_00015200(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 auStack_30 [40];
  
  iVar1 = FUN_0001aefc(param_2);
  if (iVar1 == 0) {
    FUN_0001b090(param_2,auStack_30);
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_0001c4ac;
    }
    FUN_0001a2f8(param_1,param_3,auStack_30,0x25);
  }
  return;
}



/* ===== FUN_00015274 @ 00015274 size=292 ===== */

void FUN_00015274(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x78) != '\0') {
    local_c = param_3 + 0x78;
  }
  FUN_0001a2f8(param_1,"LABEL",local_c,0x10);
  FUN_00015200(param_1,param_3 + 0x68,0);
  if (((*(uint *)(param_3 + 0x5c) & 4) != 0) && (iVar1 = FUN_0001aefc(param_3 + 0xd0), iVar1 == 0))
  {
    FUN_00015200(param_1,param_3 + 0xd0,"EXT_JOURNAL");
  }
  iVar1 = strcmp((char *)*param_2,"ext2");
  if ((iVar1 != 0) && ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
    FUN_0001a2f8(param_1,"SEC_TYPE",&DAT_0001c4c8,5);
  }
  return;
}



/* ===== FUN_00015398 @ 00015398 size=508 ===== */

undefined4 FUN_00015398(char *param_1)

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



/* ===== FUN_00015594 @ 00015594 size=500 ===== */

undefined4 FUN_00015594(char *param_1)

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



/* ===== FUN_00015788 @ 00015788 size=356 ===== */

int FUN_00015788(void)

{
  int iVar1;
  long lVar2;
  char *local_1a4;
  utsname uStack_1a0;
  int local_14;
  long local_10;
  char *local_c;
  
  iVar1 = DAT_0002db4c;
  if (DAT_0002db4c < 1) {
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
            DAT_0002db4c = (local_10 * 0x100 + local_14) * 0x100 + lVar2;
            iVar1 = DAT_0002db4c;
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



/* ===== FUN_000158ec @ 000158ec size=200 ===== */

int FUN_000158ec(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0002db50 == -1) && (4 < tVar1 - DAT_0002db9c)) {
    DAT_0002db9c = tVar1;
    iVar2 = FUN_00015398(&DAT_0001c4c8);
    if ((iVar2 == 0) && (iVar2 = FUN_00015594(&DAT_0001c4c8), iVar2 == 0)) {
      DAT_0002db50 = 0;
    }
    else {
      DAT_0002db50 = 1;
    }
  }
  return DAT_0002db50;
}



/* ===== FUN_000159b4 @ 000159b4 size=200 ===== */

int FUN_000159b4(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0002db54 == -1) && (4 < tVar1 - DAT_0002dba0)) {
    DAT_0002dba0 = tVar1;
    iVar2 = FUN_00015398(&DAT_0001c51c);
    if ((iVar2 == 0) && (iVar2 = FUN_00015594(&DAT_0001c51c), iVar2 == 0)) {
      DAT_0002db54 = 0;
    }
    else {
      DAT_0002db54 = 1;
    }
  }
  return DAT_0002db54;
}



/* ===== FUN_00015a7c @ 00015a7c size=200 ===== */

int FUN_00015a7c(void)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  if ((DAT_0002db58 == -1) && (4 < tVar1 - DAT_0002dba4)) {
    DAT_0002dba4 = tVar1;
    iVar2 = FUN_00015398("ext4dev");
    if ((iVar2 == 0) && (iVar2 = FUN_00015594("ext4dev"), iVar2 == 0)) {
      DAT_0002db58 = 0;
    }
    else {
      DAT_0002db58 = 1;
    }
  }
  return DAT_0002db58;
}



/* ===== FUN_00015b44 @ 00015b44 size=264 ===== */

undefined4 FUN_00015b44(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) != 0) {
    return 0xffffffea;
  }
  if (((((*(uint *)(param_3 + 0x5c) & 4) != 0) || (iVar1 = FUN_000158ec(), iVar1 != 0)) ||
      (iVar1 = FUN_000159b4(), iVar1 != 0)) ||
     ((iVar1 = FUN_00015a7c(), iVar1 == 0 || (iVar1 = FUN_00015788(), iVar1 < 0x2061d)))) {
    if ((*(uint *)(param_3 + 0x160) & 4) == 0) {
      return 0xffffffea;
    }
    iVar1 = FUN_00015a7c();
    if ((iVar1 == 0) && (iVar1 = FUN_000159b4(), iVar1 != 0)) {
      return 0xffffffea;
    }
  }
  FUN_00015274(*(undefined4 *)(param_1 + 8),param_2,param_3);
  return 0;
}



/* ===== FUN_00015c4c @ 00015c4c size=296 ===== */

undefined4 FUN_00015c4c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    if ((((((*(uint *)(param_3 + 0x5c) & 4) == 0) && (iVar1 = FUN_000158ec(), iVar1 == 0)) &&
         (iVar1 = FUN_000159b4(), iVar1 != 0)) && (iVar1 = FUN_00015788(), 0x2061c < iVar1)) ||
       (((*(uint *)(param_3 + 100) & 0xfffffff8) != 0 ||
        ((*(uint *)(param_3 + 0x60) & 0xffffffe9) != 0)))) {
      if (((*(uint *)(param_3 + 0x160) & 4) == 0) ||
         ((iVar1 = FUN_00015a7c(), iVar1 == 0 && (iVar1 = FUN_000159b4(), iVar1 != 0)))) {
        FUN_00015274(*(undefined4 *)(param_1 + 8),param_2,param_3);
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



/* ===== FUN_00015d74 @ 00015d74 size=148 ===== */

undefined4 FUN_00015d74(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    uVar1 = 0xffffffea;
  }
  else if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
          ((*(uint *)(param_3 + 0x60) & 0xffffffe9) == 0)) {
    FUN_00015274(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_00015e08 @ 00015e08 size=228 ===== */

undefined4 FUN_00015e08(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_3 + 0x5c) & 4) == 0) {
    if (((*(uint *)(param_3 + 100) & 0xfffffff8) == 0) &&
       ((*(uint *)(param_3 + 0x60) & 0xffffffed) == 0)) {
      iVar1 = FUN_000158ec();
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_000159b4(), iVar1 != 0 || (iVar1 = FUN_00015a7c(), iVar1 != 0)) &&
          (iVar1 = FUN_00015788(), 0x2061c < iVar1)))) {
        uVar2 = 0xffffffea;
      }
      else {
        FUN_00015274(*(undefined4 *)(param_1 + 8),param_2,param_3);
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



/* ===== FUN_00015eec @ 00015eec size=100 ===== */

undefined4 FUN_00015eec(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_3 + 0x60) & 8) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_00015274(*(undefined4 *)(param_1 + 8),param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00015f50 @ 00015f50 size=288 ===== */

int FUN_00015f50(int param_1,int param_2)

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



/* ===== FUN_00016070 @ 00016070 size=1480 ===== */

undefined4 FUN_00016070(int param_1,undefined4 param_2,int param_3)

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
    local_44 = FUN_0001bcd0((uint)local_38 * 0x20 + (uint)local_36 + -1,local_36);
    local_48 = local_20 - ((uint)local_3a + local_40 + local_44);
    if (*(char *)(local_30 + 0xd) == '\0') {
      uVar3 = 1;
    }
    else {
      local_48 = FUN_0001bcd0(local_48,*(undefined1 *)(local_30 + 0xd));
      if (local_48 < 0xffffff7) {
        if (*(short *)(local_30 + 0x16) == 0) {
          local_54 = (uint)local_36 * (uint)*(byte *)(local_2c + 0xd);
          local_5c = local_40 + (uint)local_3a;
          local_28 = *(uint *)(local_2c + 0x2c);
          while ((local_28 != 0 && (local_1c = local_1c + -1, local_1c != 0))) {
            local_60 = (uint)*(byte *)(local_2c + 0xd) * (local_28 - 2);
            local_68 = (ulonglong)local_36 * (ulonglong)(uint)(local_5c + local_60);
            local_58 = FUN_00014dd0(param_1,local_54,(undefined4)local_68,
                                    (int)((ulonglong)local_68 >> 0x20),local_54);
            if (local_58 == 0) break;
            local_6c = local_54 >> 5;
            local_10 = (void *)FUN_00015f50(local_58,local_6c);
            if (local_10 != (void *)0x0) break;
            local_78 = (uint)local_36 * (uint)local_3a + local_28 * 4;
            uStack_74 = 0;
            puVar2 = (uint *)FUN_00014dd0(param_1,local_54,local_78,0,local_54);
            if (puVar2 == (uint *)0x0) break;
            local_28 = *puVar2 & 0xfffffff;
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_0002d180,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_2c + 0x47);
          }
          local_14 = (byte *)(local_2c + 0x43);
        }
        else {
          local_4c = (uint)local_36 * ((uint)local_3a + local_40);
          local_50 = (uint)*(byte *)(local_2c + 0x11) + (uint)*(byte *)(local_2c + 0x12) * 0x100;
          local_54 = local_50 * 0x20;
          local_58 = FUN_00014dd0(param_1,local_54,local_4c,0,local_54);
          if (local_58 != 0) {
            local_10 = (void *)FUN_00015f50(local_58,local_50);
          }
          if ((local_10 == (void *)0x0) || (iVar1 = memcmp(local_10,DAT_0002d180,0xb), iVar1 == 0))
          {
            local_10 = (void *)(local_30 + 0x2b);
          }
          local_14 = (byte *)(local_30 + 0x27);
          FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","msdos",6);
        }
        if (((local_10 != (void *)0x0) && (iVar1 = memcmp(local_10,DAT_0002d180,0xb), iVar1 != 0))
           && (local_18 = FUN_00014d30(local_10,0xb), local_18 != 0)) {
          local_c = local_10;
        }
        sprintf(acStack_84,"%02X%02X-%02X%02X",(uint)local_14[3],(uint)local_14[2],(uint)local_14[1]
                ,(uint)*local_14);
        FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,local_18);
        FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,acStack_84,9);
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



/* ===== FUN_00016638 @ 00016638 size=300 ===== */

undefined4 FUN_00016638(undefined4 param_1,undefined4 param_2,int param_3)

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
      uVar2 = FUN_00016070(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_00016764 @ 00016764 size=1188 ===== */

undefined4 FUN_00016764(int param_1,undefined4 param_2,int param_3)

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
    local_30 = FUN_0001bd98(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),local_28
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
        local_3c = (void *)FUN_00014dd0(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar3 = memcmp(local_3c,&DAT_0001c56c,4);
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
        local_3c = (void *)FUN_00014dd0(param_1,iStack_34,local_38,iStack_34,local_10);
        if (local_3c == (void *)0x0) {
          return 1;
        }
        iVar4 = memcmp(local_3c,&DAT_0001c56c,4);
        iVar3 = iStack_34;
        if (iVar4 == 0) {
          uVar7 = VectorShiftRight(CONCAT44(local_10 * 3,local_10 * 3),0x20);
          bVar6 = CARRY4((uint)uVar7,local_38);
          local_38 = (uint)uVar7 + local_38;
          iStack_34 = (int)((ulonglong)uVar7 >> 0x20) + iStack_34 + (uint)bVar6;
          local_3c = (void *)FUN_00014dd0(param_1,iVar3,local_38,iStack_34,local_10);
          if (local_3c == (void *)0x0) {
            return 1;
          }
          iVar3 = memcmp(local_3c,&DAT_0001c56c,4);
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
            FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,acStack_68,0);
            if (local_ec[0] != '\0') {
              FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_ec,0);
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



/* ===== FUN_00016c08 @ 00016c08 size=144 ===== */

undefined4 FUN_00016c08(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x6c) != '\0') {
    local_c = param_3 + 0x6c;
  }
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0xc);
  FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_00016c98 @ 00016c98 size=292 ===== */

undefined4 FUN_00016c98(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  if (*(ushort *)(param_3 + 0x2c) >> 10 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar1 = FUN_0001bcd0(*(undefined4 *)(param_2 + 4),*(ushort *)(param_3 + 0x2c) >> 10);
    if (*(uint *)(param_3 + 0xc) < uVar1) {
      uVar2 = 0xffffffe5;
    }
    else {
      if ((*(char *)(*(int *)(param_2 + 0x10) + 6) == '2') ||
         (*(char *)(*(int *)(param_2 + 0x10) + 6) == '3')) {
        if (*(char *)(param_3 + 100) != '\0') {
          local_c = param_3 + 100;
        }
        FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x54,0);
      }
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00016dbc @ 00016dbc size=144 ===== */

undefined4 FUN_00016dbc(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x24) != '\0') {
    local_c = param_3 + 0x24;
  }
  FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x14,0);
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
  return 0;
}



/* ===== FUN_00016e4c @ 00016e4c size=280 ===== */

undefined4 FUN_00016e4c(int param_1,undefined4 param_2,int param_3)

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
        FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x10);
        FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x88,0);
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



/* ===== FUN_00016f90 @ 00016f90 size=92 ===== */

undefined4 FUN_00016f90(int param_1,undefined4 param_2,int param_3)

{
  char acStack_30 [40];
  
  strncpy(acStack_30,(char *)(param_3 + 0xa8),0x28);
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,acStack_30,0x28);
  return 0;
}



/* ===== FUN_00016fec @ 00016fec size=116 ===== */

undefined4 FUN_00016fec(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x10) != '\0') {
    local_c = param_3 + 0x10;
  }
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_00017060 @ 00017060 size=116 ===== */

undefined4 FUN_00017060(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 0x30) != '\0') {
    local_c = param_3 + 0x30;
  }
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0);
  return 0;
}



/* ===== FUN_000170d4 @ 000170d4 size=96 ===== */

undefined4 FUN_000170d4(int param_1)

{
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,0,0);
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",0,0);
  return 0;
}



/* ===== FUN_00017134 @ 00017134 size=312 ===== */

undefined4 FUN_00017134(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  FUN_000170d4(param_1,param_2,param_3);
  piVar1 = (int *)FUN_00014dd0(param_1,extraout_r1,0x400,0,0x400);
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
          FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",piVar1 + 7,0x10);
        }
        if ((char)piVar1[3] != '\0') {
          FUN_00015200(*(undefined4 *)(param_1 + 8),piVar1 + 3,0);
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_0001726c @ 0001726c size=104 ===== */

undefined4 FUN_0001726c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_00014d30(param_3 + 0x28,0x20);
  FUN_0001a2f8(uVar2,"LABEL",param_3 + 0x28,uVar1);
  return 0;
}



/* ===== FUN_000172d4 @ 000172d4 size=468 ===== */

undefined4 FUN_000172d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  for (local_10 = 1; (int)local_10 < 0x10; local_10 = local_10 + 1) {
    local_14 = FUN_00014dd0(param_1,0x60,(local_10 + 0x10) * 0x800,
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
       local_14 = FUN_00014dd0(param_1,0x60,iVar1,iVar1 >> 0x1f,0x60), local_14 == 0)) {
      return 1;
    }
    iVar1 = memcmp((void *)(local_14 + 1),&DAT_0001c5c0,4);
    if (iVar1 == 0) {
      uVar2 = FUN_0001726c(param_1,param_2,param_3);
      return uVar2;
    }
    local_18 = &DAT_0002d184;
    while ((*local_18 != 0 &&
           (iVar1 = memcmp((void *)*local_18,(void *)(local_14 + 1),5), iVar1 != 0))) {
      local_18 = local_18 + 1;
    }
    if (*local_18 == 0) break;
    local_c = local_c + 1;
  }
  return 1;
}



/* ===== FUN_000174a8 @ 000174a8 size=372 ===== */

undefined4 FUN_000174a8(int param_1,undefined4 param_2,void *param_3)

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
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ocfs1",6);
  }
  else if (8 < local_c) {
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"SEC_TYPE","ntocfs",7);
  }
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",auStack_16c,
               (uint)local_12c + (uint)local_12b * 0x100);
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"MOUNT",auStack_90,
               (uint)local_10 + (uint)local_f * 0x100);
  FUN_00015200(*(undefined4 *)(param_1 + 8),auStack_12a,0);
  return 0;
}



/* ===== FUN_0001761c @ 0001761c size=108 ===== */

undefined4 FUN_0001761c(int param_1,undefined4 param_2,int param_3)

{
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x110,0x40);
  FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x150,0);
  return 0;
}



/* ===== FUN_00017688 @ 00017688 size=80 ===== */

undefined4 FUN_00017688(int param_1,undefined4 param_2,int param_3)

{
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",param_3 + 0x28,0x18);
  return 0;
}



/* ===== FUN_000176d8 @ 000176d8 size=216 ===== */

undefined4 FUN_000176d8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_00014cdc(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x51d) && (iVar1 = FUN_00014cdc(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x579)) {
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_000177b0 @ 000177b0 size=216 ===== */

undefined4 FUN_000177b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_00014cdc(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 == 0x709) && (iVar1 = FUN_00014cdc(*(undefined4 *)(param_3 + 0x1c)), iVar1 == 0x76c)) {
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,0,0);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      local_c = param_3 + 0xa0;
    }
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00017888 @ 00017888 size=628 ===== */

void FUN_00017888(int param_1,int param_2,int param_3,int param_4)

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
LAB_00017ad8:
      *(undefined1 *)(param_1 + local_10) = 0;
      return;
    }
    uVar1 = *(undefined1 *)(param_3 + local_c + 1);
    uVar2 = CONCAT11(*(byte *)(param_3 + local_c),uVar1);
    uVar4 = (uint)uVar2;
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + local_10) = 0;
      goto LAB_00017ad8;
    }
    if (uVar4 < 0x80) {
      if (param_2 <= local_10 + 1) goto LAB_00017ad8;
      *(undefined1 *)(param_1 + local_10) = uVar1;
      local_10 = local_10 + 1;
    }
    else if (uVar4 < 0x800) {
      if (param_2 <= local_10 + 2) goto LAB_00017ad8;
      iVar3 = local_10 + 1;
      *(byte *)(param_1 + local_10) = ~((byte)~(byte)(((uint)(uVar2 >> 6) << 0x1a) >> 0x18) >> 2);
      local_10 = local_10 + 2;
      *(byte *)(param_1 + iVar3) = ~((byte)~(byte)(((uVar4 & 0x3f) << 0x19) >> 0x18) >> 1);
    }
    else {
      if (param_2 <= local_10 + 3) goto LAB_00017ad8;
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



/* ===== FUN_00017afc @ 00017afc size=256 ===== */

undefined4 FUN_00017afc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2c [20];
  int local_18;
  int iStack_14;
  int *local_10;
  int local_c;
  
  local_c = param_3;
  iVar1 = memcmp((void *)(param_3 + 0x7c),&DAT_0001c5e0,2);
  if ((iVar1 == 0) || (iVar1 = memcmp((void *)(local_c + 0x7c),&DAT_0001c5e4,2), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    local_10 = (int *)(local_c + 0x74);
    local_18 = *local_10;
    iStack_14 = *(int *)(local_c + 0x78);
    if (local_18 != 0 || iStack_14 != 0) {
      sprintf(acStack_2c,"%016llX",local_18,iStack_14);
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,acStack_2c,0);
    }
    FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c + 0x25,*(undefined1 *)(local_c + 0x24)
                );
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00017bfc @ 00017bfc size=1428 ===== */

undefined4 FUN_00017bfc(int param_1,int param_2,void *param_3)

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
  iVar2 = memcmp(param_3,&DAT_0001c5e8,2);
  local_2e4 = param_3;
  if (iVar2 == 0) {
    iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0001c5e0,2);
    if ((iVar2 != 0) && (iVar2 = memcmp((void *)((int)local_2c + 0x7c),&DAT_0001c5e4,2), iVar2 != 0)
       ) {
      return 1;
    }
    local_30 = FUN_00014cdc(*(undefined4 *)((int)local_2c + 0x14));
    local_34 = FUN_00014c90(*(undefined2 *)((int)local_2c + 0x1c));
    local_38 = FUN_00014c90(*(undefined2 *)((int)local_2c + 0x7e));
    local_1c = local_34 * 0x200 + local_30 * local_38;
    local_2e4 = (void *)FUN_00014dd0(param_1,0x82,*(int *)(param_2 + 4) * 0x400 + local_1c,0,0x82);
    if (local_2e4 == (void *)0x0) {
      return 1;
    }
  }
  local_3c = local_2e4;
  iVar2 = memcmp(local_2e4,&DAT_0001c5e0,2);
  if ((iVar2 == 0) || (iVar2 = memcmp(local_3c,&DAT_0001c5e4,2), iVar2 == 0)) {
    local_40 = (int *)((int)local_3c + 0x68);
    local_48 = *local_40;
    iStack_44 = *(int *)((int)local_3c + 0x6c);
    if (local_48 != 0 || iStack_44 != 0) {
      sprintf(acStack_d4,"%016llX",local_48,iStack_44);
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,acStack_d4,0);
    }
    local_4c = FUN_00014cdc(*(undefined4 *)((int)local_3c + 0x28));
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
    local_50 = FUN_00014cdc(local_c0[0]);
    lVar1 = (ulonglong)local_4c * (ulonglong)local_50 + (ulonglong)local_1c;
    uVar4 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_00014dd0(param_1,uVar4,(int)lVar1,uVar4,0x2000);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_54 = iVar2 + 0xe;
      local_58 = FUN_00014cdc(*(undefined4 *)(iVar2 + 0x18));
      local_5c = FUN_00014c90(*(undefined2 *)(local_54 + 0x12));
      local_60 = FUN_00014cdc(*(undefined4 *)(local_54 + 6));
      if (local_60 == 0) {
        uVar4 = 0;
      }
      else {
        local_24 = FUN_0001bcd0(local_5c * local_58,local_4c);
        for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
          local_20 = FUN_00014cdc(local_c0[local_28 * 2]);
          local_64 = FUN_00014cdc(local_c0[local_28 * 2 + 1]);
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
          iVar2 = FUN_00014dd0(param_1,uVar4,(int)(local_70 + (ulonglong)local_1c),uVar4,local_5c);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            local_74 = iVar2;
            local_78 = FUN_00014c90(*(undefined2 *)(iVar2 + 10));
            if (local_78 == 0) {
              uVar4 = 0;
            }
            else if (*(char *)(local_74 + 8) == -1) {
              local_7c = iVar2 + 0xe;
              iVar2 = FUN_00014cdc(*(undefined4 *)(iVar2 + 0x10));
              if (iVar2 == 1) {
                local_80 = FUN_00014c90(*(undefined2 *)(local_7c + 6));
                local_80 = local_80 << 1;
                FUN_00017888(auStack_2d4,0x200,local_7c + 8,local_80);
                FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",auStack_2d4,0);
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



/* ===== FUN_00018190 @ 00018190 size=204 ===== */

uint FUN_00018190(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xf597a6cf;
  local_14 = param_1;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    uVar1 = *(uint *)(&DAT_0001c8d0 + ((local_10 ^ *local_14) & 0xf) * 4) ^
            (local_10 ^ *local_14) >> 4;
    local_10 = *(uint *)(&DAT_0001c8d0 + (uVar1 & 0xf) * 4) ^ uVar1 >> 4;
    local_14 = local_14 + 1;
  }
  return local_10;
}



/* ===== FUN_0001825c @ 0001825c size=456 ===== */

undefined4 FUN_0001825c(int param_1,int param_2,void *param_3)

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
    iVar4 = FUN_00018190((int)local_10 + 0x14,0x1ec);
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
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),&DAT_0001c4ac,local_48,0x26);
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



/* ===== FUN_00018424 @ 00018424 size=152 ===== */

undefined4 FUN_00018424(int param_1,undefined4 param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  if (*(char *)(param_3 + 299) != '\0') {
    local_c = param_3 + 299;
  }
  FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_c,0x100);
  FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x20,0);
  return 0;
}



/* ===== FUN_000184bc @ 000184bc size=76 ===== */

undefined4 FUN_000184bc(int param_1,undefined4 param_2,int param_3)

{
  FUN_00015200(*(undefined4 *)(param_1 + 8),param_3 + 0x6c,0);
  return 0;
}



/* ===== FUN_00018508 @ 00018508 size=80 ===== */

undefined8 FUN_00018508(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x6c);
  return CONCAT44(param_4 << uVar1 | param_3 << (uVar1 - 0x20 & 0xff) |
                  param_3 >> (0x20 - uVar1 & 0xff),param_3 << uVar1);
}



/* ===== FUN_00018558 @ 00018558 size=116 ===== */

undefined8 FUN_00018558(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 - 2;
  uVar2 = (uint)*(byte *)(param_1 + 0x6d);
  return CONCAT44((0 << uVar2 | uVar1 << (uVar2 - 0x20 & 0xff) | uVar1 >> (0x20 - uVar2 & 0xff)) +
                  (uint)CARRY4(uVar1 << uVar2,*(uint *)(param_1 + 0x58)),
                  (uVar1 << uVar2) + *(uint *)(param_1 + 0x58));
}



/* ===== FUN_000185cc @ 000185cc size=72 ===== */

undefined4 FUN_000185cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00018558(param_1,param_2);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar1 = FUN_00018508(param_1,uVar1,(int)uVar2,uVar1);
  return uVar1;
}



/* ===== FUN_00018614 @ 00018614 size=164 ===== */

undefined4 FUN_00018614(undefined4 param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = FUN_00018508(param_2,param_2,*(undefined4 *)(param_2 + 0x50),0);
  uVar4 = (ulonglong)CONCAT14(CARRY4(param_3,param_3),param_3 * 2);
  uVar4 = VectorAdd(uVar4,uVar4,8);
  lVar1 = (uVar4 & 0xffffffff00000000) + (uVar4 & 0xffffffff) + lVar1;
  local_18 = (undefined4)lVar1;
  uStack_14 = (undefined4)((ulonglong)lVar1 >> 0x20);
  puVar2 = (undefined4 *)FUN_00014dd0(param_1,4,local_18,uStack_14,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  return uVar3;
}



/* ===== FUN_000186b8 @ 000186b8 size=352 ===== */

char * FUN_000186b8(undefined4 param_1,int param_2)

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
  lVar4 = FUN_000185cc(param_2,local_c);
  local_1c = 0;
  while( true ) {
    uStack_14 = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_18 = (undefined4)lVar4;
    if (9999 < local_1c) {
      return (char *)0x0;
    }
    pcVar3 = (char *)FUN_00014dd0(param_1,0x20,local_18,uStack_14,0x20);
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
    FUN_0001bd98((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),iVar1,iVar1 >> 0x1f);
    if (extraout_r2 == 0 && extraout_r3 == 0) {
      local_c = FUN_00018614(param_1,param_2,local_c);
      if (local_c < 2) {
        return (char *)0x0;
      }
      if (0xffffff6 < local_c) {
        return (char *)0x0;
      }
      lVar4 = FUN_000185cc(param_2,local_c);
    }
    local_1c = local_1c + 1;
  }
  return pcVar3;
}



/* ===== FUN_00018818 @ 00018818 size=392 ===== */

int FUN_00018818(int param_1,undefined4 param_2,int param_3)

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
    local_18 = FUN_000186b8(param_1,param_3);
    if (local_18 == 0) {
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",&DAT_0001c5f8,4);
    }
    else {
      FUN_0001a2f8(*(undefined4 *)(param_1 + 8),"LABEL",local_18 + 2,*(undefined1 *)(local_18 + 1));
    }
    memset(acStack_28,0,0x10);
    snprintf(acStack_28,0x10,"%02hhX%02hhX-%02hhX%02hhX",(uint)*(byte *)(local_14 + 0x67),
             (uint)*(byte *)(local_14 + 0x66),(uint)*(byte *)(local_14 + 0x65),
             (uint)*(byte *)(local_14 + 100));
    uVar4 = *(undefined4 *)(param_1 + 8);
    sVar2 = strlen(acStack_28);
    FUN_0001a2f8(uVar4,&DAT_0001c4ac,acStack_28,sVar2);
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



/* ===== FUN_000189a0 @ 000189a0 size=1208 ===== */

int FUN_000189a0(int param_1,int param_2)

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
      if (((*(uint *)(param_2 + 0x2c) & 1) != 0) && (dStack_28 < DAT_00018e58)) {
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
           (iVar1 = FUN_00014fe8(local_50,auStack_c0), iVar1 == 0)) {
          FUN_00015200(param_2,auStack_c0,0);
          local_54 = "mdraid";
          goto LAB_00018da0;
        }
        for (local_1c = &DAT_0002d1a4; *local_1c != 0; local_1c = local_1c + 6) {
          if ((*(int *)(param_2 + 0x18) == 0) ||
             (iVar1 = strcmp((char *)*local_1c,*(char **)(param_2 + 0x18)), iVar1 == 0)) {
            local_2c = local_1c[1] + ((uint)local_1c[2] >> 10);
            local_30 = FUN_00014dd0(&local_50,&local_50,local_2c * 0x400,local_2c >> 0x16,0x400);
            if (((local_30 != 0) &&
                (iVar1 = memcmp((void *)local_1c[4],(void *)(local_30 + (local_1c[2] & 0x3ffU)),
                                local_1c[3]), iVar1 == 0)) &&
               ((local_1c[5] == 0 ||
                (iVar1 = (*(code *)local_1c[5])(&local_50,local_1c,local_30), iVar1 == 0)))) {
              local_54 = (char *)*local_1c;
              goto LAB_00018da0;
            }
          }
        }
        if ((*local_1c != 0) || (*(int *)(param_2 + 0x18) == 0)) break;
        local_34 = FUN_0001a790(param_2);
        while (iVar1 = FUN_0001a7f8(local_34,&local_54,auStack_58), iVar1 == 0) {
          FUN_0001a2f8(param_2,local_54,0,0);
        }
        FUN_0001a8c4(local_34);
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        FUN_00012e78(param_2);
        local_c8 = 0;
      }
LAB_00018da0:
      if ((local_c8 != 0) && (local_54 != (char *)0x0)) {
        *(undefined4 *)(local_c8 + 0x20) = (undefined4)sStack_b0.st_rdev;
        *(undefined4 *)(local_c8 + 0x24) = sStack_b0.st_rdev._4_4_;
        tVar3 = time((time_t *)0x0);
        *(time_t *)(local_c8 + 0x28) = tVar3;
        *(uint *)(local_c8 + 0x2c) = *(uint *)(local_c8 + 0x2c) | 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
        FUN_0001a2f8(local_c8,&DAT_0001c8c8,local_54,0);
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
    FUN_00012e78(param_2);
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_00018e60 @ 00018e60 size=116 ===== */

undefined4 FUN_00018e60(char *param_1)

{
  int iVar1;
  int *local_c;
  
  local_c = &DAT_0002d1a4;
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



/* ===== FUN_00018ed4 @ 00018ed4 size=112 ===== */

byte * FUN_00018ed4(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  while ((*local_c != 0 && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00018f44 @ 00018f44 size=204 ===== */

byte * FUN_00018f44(byte *param_1)

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



/* ===== FUN_00019010 @ 00019010 size=164 ===== */

char * FUN_00019010(undefined4 param_1)

{
  char *__s;
  size_t sVar1;
  byte *local_c;
  
  __s = (char *)FUN_00018ed4(param_1);
  sVar1 = strlen(__s);
  local_c = (byte *)(__s + (sVar1 - 1));
  while ((*__s != '\0' && ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x20) != 0))) {
    *local_c = 0;
    local_c = local_c + -1;
  }
  return __s;
}



/* ===== FUN_000190b4 @ 000190b4 size=180 ===== */

undefined4 FUN_000190b4(undefined4 *param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)FUN_00019010(*param_1);
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



/* ===== FUN_00019168 @ 00019168 size=128 ===== */

undefined4 FUN_00019168(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00018ed4(*param_1);
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



/* ===== FUN_000191e8 @ 000191e8 size=452 ===== */

int FUN_000191e8(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  char *local_1c;
  void *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  local_c = FUN_000190b4(param_3);
  if (0 < local_c) {
    local_1c = strchr((char *)*param_3,0x3e);
    if (local_1c == (char *)0x0) {
      local_c = -0xe;
    }
    else {
      local_10 = local_1c;
      local_10 = (char *)FUN_00018ed4(local_1c + 1);
      local_14 = (char *)FUN_00018f44(local_10);
      if (*(char *)*param_3 == '>') {
        *param_3 = (int)local_14;
      }
      else {
        *param_3 = *param_3 + 1;
      }
      *local_1c = '\0';
      local_1c = strrchr(local_14,0x3c);
      if (((local_1c != (char *)0x0) && (iVar1 = FUN_00019168(&local_1c), -1 < iVar1)) &&
         (local_1c != (char *)0x0)) {
        *local_1c = '\0';
      }
      if ((int)local_14 - (int)local_10 < 2) {
        local_c = -0xe;
      }
      else {
        local_18 = (void *)FUN_00014784(local_10,(int)local_14 - (int)local_10);
        if (local_18 == (void *)0x0) {
          local_c = -0xc;
        }
        else {
          iVar1 = FUN_000132d4(param_1,local_18,1);
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



/* ===== FUN_000193ac @ 000193ac size=420 ===== */

undefined4 FUN_000193ac(undefined4 *param_1,int *param_2,int *param_3)

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
      uVar3 = FUN_00019010(*param_3);
      *param_1 = uVar3;
      iVar2 = FUN_00018ed4(*param_2 + 1);
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
        local_c = (char *)FUN_00018f44(*param_2);
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



/* ===== FUN_00019550 @ 00019550 size=392 ===== */

int FUN_00019550(int param_1,int param_2,undefined4 param_3)

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
    local_14 = FUN_000193ac(&local_18,&local_1c,param_3);
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
            local_14 = FUN_0001a2f8(param_2,local_18,local_1c,sVar3);
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



/* ===== FUN_000196d8 @ 000196d8 size=204 ===== */

int FUN_000196d8(int param_1,int *param_2,undefined4 param_3)

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
    local_c = FUN_000191e8(param_1,param_2,&local_1c);
    if (0 < local_c) {
      local_10 = *local_18;
      do {
        local_c = FUN_00019550(local_14,local_10,&local_1c);
      } while (0 < local_c);
      if (*(int *)(local_10 + 0x18) == 0) {
        FUN_00012e78(local_10);
      }
    }
  }
  return local_c;
}



/* ===== FUN_000197a4 @ 000197a4 size=700 ===== */

void FUN_000197a4(int param_1)

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
          FUN_000196d8(param_1,auStack_1074,local_1018);
        }
      }
      fclose(local_18);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
      *(__time_t *)(param_1 + 0x14) = sStack_1070.st_mtim.tv_sec;
    }
  }
  return;
}



/* ===== FUN_00019a60 @ 00019a60 size=60 ===== */

bool FUN_00019a60(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00019a9c @ 00019a9c size=268 ===== */

undefined4 FUN_00019a9c(int param_1,FILE *param_2)

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



/* ===== FUN_00019ba8 @ 00019ba8 size=860 ===== */

int FUN_00019ba8(undefined4 *param_1)

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
    iVar1 = FUN_00019a60(param_1);
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
                  (local_1c = FUN_00019a9c(local_c,local_18), -1 < local_1c))))) {
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



/* ===== FUN_00019f04 @ 00019f04 size=88 ===== */

void FUN_00019f04(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_00019f5c @ 00019f5c size=56 ===== */

void FUN_00019f5c(undefined4 param_1,int param_2)

{
  FUN_00019f04(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_00019f94 @ 00019f94 size=60 ===== */

void FUN_00019f94(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00019fd0 @ 00019fd0 size=56 ===== */

void FUN_00019fd0(undefined4 *param_1)

{
  FUN_00019f94(param_1[1],*param_1);
  return;
}



/* ===== FUN_0001a008 @ 0001a008 size=124 ===== */

void * FUN_0001a008(void)

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



/* ===== FUN_0001a084 @ 0001a084 size=112 ===== */

void FUN_0001a084(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00019fd0(param_1);
    FUN_00019fd0((int)param_1 + 8);
    free(*(void **)((int)param_1 + 0x10));
    free(*(void **)((int)param_1 + 0x14));
    free(param_1);
  }
  return;
}



/* ===== FUN_0001a0f4 @ 0001a0f4 size=164 ===== */

undefined4 * FUN_0001a0f4(int param_1,char *param_2)

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



/* ===== FUN_0001a198 @ 0001a198 size=176 ===== */

uint FUN_0001a198(int param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0001a0f4(param_1,param_2);
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



/* ===== FUN_0001a248 @ 0001a248 size=176 ===== */

undefined4 * FUN_0001a248(int param_1,char *param_2)

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



/* ===== FUN_0001a2f8 @ 0001a2f8 size=836 ===== */

undefined4 FUN_0001a2f8(int param_1,char *param_2,int param_3,undefined4 param_4)

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
  __s2 = (char *)FUN_00014784(param_3,param_4);
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
  iVar1 = FUN_0001a0f4(param_1,param_2);
  if (param_3 == 0) {
    if (iVar1 != 0) {
      FUN_0001a084(iVar1);
    }
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_0001a008();
    if (iVar1 == 0) goto LAB_0001a5f8;
    uVar3 = FUN_00014824(param_2);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    *(char **)(iVar1 + 0x14) = __s2;
    *(int *)(iVar1 + 0x18) = param_1;
    FUN_00019f5c(iVar1,param_1 + 8);
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0001a598;
    local_c = FUN_0001a248(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x10));
    if (local_c == 0) {
      local_c = FUN_0001a008();
      if (local_c == 0) {
LAB_0001a5f8:
        if (iVar1 == 0) {
          free(__s2);
        }
        else {
          FUN_0001a084(iVar1);
        }
        if (local_c != 0) {
          FUN_0001a084(local_c);
        }
        return 0xfffffff4;
      }
      uVar3 = FUN_00014824(param_2);
      *(undefined4 *)(local_c + 0x10) = uVar3;
      if (*(int *)(local_c + 0x10) == 0) goto LAB_0001a5f8;
      FUN_00019f5c(local_c,*(int *)(param_1 + 0x10) + 8);
    }
    FUN_00019f5c(iVar1 + 8,local_c + 8);
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
LAB_0001a598:
  if (local_10 != (undefined4 *)0x0) {
    *local_10 = __s2;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(uint *)(*(int *)(param_1 + 0x10) + 0x18) = *(uint *)(*(int *)(param_1 + 0x10) + 0x18) | 4;
  }
  return 0;
}



/* ===== FUN_0001a63c @ 0001a63c size=340 ===== */

undefined4 FUN_0001a63c(char *param_1,undefined4 *param_2,int *param_3)

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
  __ptr = (void *)FUN_00014824(param_1);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  puVar4 = (undefined1 *)((int)__ptr + ((int)pcVar1 - (int)param_1));
  pbVar3 = puVar4 + 1;
  *puVar4 = 0;
  if ((*pbVar3 == 0x22) || (local_c = pbVar3, *pbVar3 == 0x27)) {
    local_c = puVar4 + 2;
    pcVar1 = strrchr((char *)local_c,(uint)*pbVar3);
    if (pcVar1 == (char *)0x0) goto LAB_0001a778;
    *pcVar1 = '\0';
  }
  iVar2 = FUN_00014824(local_c);
  if (iVar2 != 0) {
    *param_2 = __ptr;
    *param_3 = iVar2;
    return 0;
  }
LAB_0001a778:
  free(__ptr);
  return 0xffffffff;
}



/* ===== FUN_0001a790 @ 0001a790 size=104 ===== */

undefined4 * FUN_0001a790(int param_1)

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



/* ===== FUN_0001a7f8 @ 0001a7f8 size=204 ===== */

undefined4 FUN_0001a7f8(int *param_1,undefined4 *param_2,undefined4 *param_3)

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



/* ===== FUN_0001a8c4 @ 0001a8c4 size=88 ===== */

void FUN_0001a8c4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1a5284c)) {
    *param_1 = 0;
    free(param_1);
  }
  return;
}



/* ===== FUN_0001a91c @ 0001a91c size=544 ===== */

int FUN_0001a91c(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  bVar1 = false;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) {
    FUN_000197a4(param_1);
    do {
      while( true ) {
        do {
          local_10 = -1;
          local_c = 0;
          iVar2 = FUN_0001a248(param_1,param_2);
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
                ((local_c = FUN_000189a0(param_1,local_c), local_c == 0 ||
                 ((local_c != 0 && ((*(uint *)(local_c + 0x2c) & 1) != 0))))));
        if ((local_c != 0) || (bVar1)) break;
        iVar2 = FUN_0001471c(param_1);
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
      iVar2 = FUN_000146c4(param_1);
    } while (-1 < iVar2);
  }
  return 0;
}



/* ===== FUN_0001ab3c @ 0001ab3c size=124 ===== */

undefined4 FUN_0001ab3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined1 uStack_9;
  
  FUN_0001adf8(param_1,param_2,param_3,param_4,0);
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



/* ===== FUN_0001abb8 @ 0001abb8 size=576 ===== */

undefined8 FUN_0001abb8(int param_1)

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
          while (iVar2 = FUN_0001ab3c(param_1,iVar2,local_18,iStack_14), iVar2 != 0) {
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
            iVar2 = FUN_0001ab3c(param_1,0,local_30,iStack_2c);
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



/* ===== FUN_0001adf8 @ 0001adf8 size=260 ===== */

__off64_t FUN_0001adf8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
  else if (DAT_0002dba8 == 0) {
    _Var3 = lseek64(param_1,CONCAT44(param_4,param_3),param_5);
    local_10 = (int)_Var3;
    iStack_c = (int)((ulonglong)_Var3 >> 0x20);
    if ((iStack_c == -1 && local_10 == -1) && (piVar2 = __errno_location(), *piVar2 == 0x26)) {
      DAT_0002dba8 = DAT_0002dba8 + 1;
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



/* ===== FUN_0001aefc @ 0001aefc size=112 ===== */

undefined4 FUN_0001aefc(char *param_1)

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



/* ===== FUN_0001af6c @ 0001af6c size=172 ===== */

void FUN_0001af6c(undefined4 param_1,char *param_2,char *param_3)

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
  
  FUN_0001b0cc(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_0001b018 @ 0001b018 size=60 ===== */

void FUN_0001b018(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af6c(param_1,param_2,DAT_0002db5c);
  return;
}



/* ===== FUN_0001b054 @ 0001b054 size=60 ===== */

void FUN_0001b054(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af6c(param_1,param_2,DAT_0002db60);
  return;
}



/* ===== FUN_0001b090 @ 0001b090 size=60 ===== */

void FUN_0001b090(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af6c(param_1,param_2,DAT_0002db5c);
  return;
}



/* ===== FUN_0001b0cc @ 0001b0cc size=396 ===== */

void FUN_0001b0cc(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_0001b258 @ 0001b258 size=56 ===== */

bool FUN_0001b258(uint param_1)

{
  return (param_1 & 0xf000) == 0x6000;
}



/* ===== FUN_0001b290 @ 0001b290 size=228 ===== */

undefined4
FUN_0001b290(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
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



/* ===== FUN_0001b374 @ 0001b374 size=1124 ===== */

int FUN_0001b374(undefined4 param_1,char *param_2,uint *param_3,char *param_4,size_t param_5)

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
  local_28 = setmntent(param_1,&DAT_0001ca30);
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
    iVar3 = FUN_0001b258(local_88.st_mode);
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
          if (local_2c == (undefined4 *)0x0) goto LAB_0001b5b0;
        } while (*(char *)*local_2c != '/');
        iVar3 = strcmp(param_2,(char *)*local_2c);
        if (iVar3 == 0) goto LAB_0001b5b0;
        iVar3 = stat((char *)*local_2c,&local_88);
      } while (iVar3 != 0);
      iVar3 = FUN_0001b258(local_88.st_mode);
      if (iVar3 == 0) break;
      if (((local_20 != 0 || iStack_1c != 0) &&
          (iStack_1c == local_88.st_rdev._4_4_ && local_20 == (int)local_88.st_rdev)) ||
         (iVar3 = FUN_0001b290(*local_2c,local_88.st_rdev._4_4_,(int)local_88.st_rdev,
                               local_88.st_rdev._4_4_,local_18,iStack_14,local_24), iVar3 == 1))
      goto LAB_0001b5b0;
    }
  } while (((local_18 == 0 && iStack_14 == 0) ||
           (iStack_14 != local_88.st_dev._4_4_ || local_18 != (int)local_88.st_dev)) ||
          (local_24 != local_88.st_ino));
LAB_0001b5b0:
  if (local_2c == (undefined4 *)0x0) {
    if (((local_20 == 0 && iStack_1c == 0) || (iVar3 = stat("/",&local_88), iVar3 != 0)) ||
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_0001b7c0;
    *param_3 = 1;
    if (param_4 != (char *)0x0) {
      strncpy(param_4,"/",param_5);
    }
LAB_0001b728:
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
      goto LAB_0001b7c0;
    }
    if ((local_20 != 0 || iStack_1c != 0) &&
       (iStack_1c != local_88.st_dev._4_4_ || local_20 != (int)local_88.st_dev)) goto LAB_0001b7c0;
    *param_3 = 1;
    iVar3 = hasmntopt(local_2c,&DAT_0001ca4c);
    if (iVar3 != 0) {
      *param_3 = *param_3 | 4;
    }
    if (param_4 != (char *)0x0) {
      strncpy(param_4,(char *)local_2c[1],param_5);
    }
    iVar3 = strcmp((char *)local_2c[1],"/");
    if (iVar3 == 0) goto LAB_0001b728;
  }
  local_c = 0;
LAB_0001b7c0:
  endmntent(local_28);
  return local_c;
}



/* ===== FUN_0001b7d8 @ 0001b7d8 size=152 ===== */

undefined4 FUN_0001b7d8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001b374("/proc/mounts",param_1,param_2,param_3,param_4);
  if ((iVar1 == 0) && (*param_2 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0001b374("/etc/mtab",param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



/* ===== FUN_0001b870 @ 0001b870 size=616 ===== */

int FUN_0001b870(char *param_1)

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
  if ((iVar1 == 0) && (iVar1 = FUN_0001b258(sStack_478.st_mode), iVar1 != 0)) {
    local_10 = CONCAT44(sStack_478.st_rdev._4_4_,(int)sStack_478.st_rdev);
  }
  local_18 = fopen("/proc/swaps","r");
  if (local_18 == (FILE *)0x0) {
    local_14 = 0;
  }
  else {
    pcVar2 = fgets(local_41c,0x400,local_18);
    if (pcVar2 != (char *)0x0) {
      if (local_41c[0] == '\0') goto LAB_0001ba90;
      iVar1 = strncmp(local_41c,"Filename\t",9);
      if (iVar1 == 0) goto LAB_0001ba90;
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
           (iVar1 = FUN_0001b258(sStack_478.st_mode), iVar1 != 0)) {
          if (local_10._4_4_ == sStack_478.st_rdev._4_4_ && (int)local_10 == (int)sStack_478.st_rdev
             ) {
            local_14 = local_14 + 1;
            break;
          }
        }
LAB_0001ba90:
        pcVar2 = fgets(local_41c,0x400,local_18);
      } while (pcVar2 != (char *)0x0);
    }
    fclose(local_18);
  }
  return local_14;
}



/* ===== FUN_0001bad8 @ 0001bad8 size=448 ===== */

int FUN_0001bad8(char *param_1,uint *param_2,char *param_3,size_t param_4)

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
      iVar2 = FUN_0001b870(param_1);
      if (iVar2 == 0) {
        local_c = FUN_0001b7d8(param_1,param_2,param_3,param_4);
      }
      else {
        *param_2 = 9;
        strncpy(param_3,"<swap>",param_4);
      }
      if (local_c == 0) {
        iVar2 = stat(param_1,&sStack_68);
        if ((iVar2 == 0) && (iVar2 = FUN_0001b258(sStack_68.st_mode), iVar2 != 0)) {
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



/* ===== FUN_0001bc98 @ 0001bc98 size=56 ===== */

undefined4 FUN_0001bc98(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001bad8(param_1,param_2,0,0);
  return uVar1;
}



/* ===== FUN_0001bcd0 @ 0001bcd0 size=168 ===== */

ulonglong FUN_0001bcd0(uint param_1,uint param_2)

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



/* ===== FUN_0001bd98 @ 0001bd98 size=76 ===== */

void FUN_0001bd98(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001bde4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001bde4 @ 0001bde4 size=328 ===== */

undefined8 FUN_0001bde4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0001bf2c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002e000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002e004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002e008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0002e00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002e010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkstemp @ 0002e014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0002e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 0002e024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0002e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0002e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0002e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0002e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002e040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002e044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002e048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0002e04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002e050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0002e054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0002e058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002e05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002e060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0002e064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0002e068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002e06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002e070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002e074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002e078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002e07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002e080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002e084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002e088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0002e08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002e090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0002e094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::difftime @ 0002e098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002e09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0002e0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0002e0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0002e0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0002e0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0002e0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002e0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 0002e0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002e0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002e0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002e0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002e0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002e0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002e0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0002e0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hasmntopt @ 0002e0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hasmntopt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002e0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002e0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002e0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 0002e0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002e0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0002e0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::link @ 0002e0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int link(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002e0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0002e0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0002e100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002e104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002e108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0002e10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 0002e110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002e114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002e118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0002e11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002e120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002e124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0002e128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0002e12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002e130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


