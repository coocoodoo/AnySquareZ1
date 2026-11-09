// sar — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011084 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 000110a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0003d00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 000110b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003d010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000110c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003d014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 000110cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0003d018)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 000110d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003d01c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000110e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003d020)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0003d024)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003d028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003d02c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::atol @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_atol_0003d030)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0003d034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fgets @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0003d038)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0003d03c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003d040)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0003d044)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0003d048)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003d04c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dup2 @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_0003d050)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003d054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0003d058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0003d05c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0003d060)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0003d064)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::realpath @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0003d068)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::lseek @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0003d06c)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0003d070)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::gmtime_r @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0003d078)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strtol @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0003d07c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::pipe @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_0003d080)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::strnlen @ 00011210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0003d084)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003d088)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0003d08c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003d090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011240 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003d094)();
  return;
}



/* ===== <EXTERNAL>::scandir @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_0003d098)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0003d09c)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003d0a0)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0003d0a4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003d0a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::alphasort @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_alphasort_0003d0ac)(__e1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003d0b0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0003d0b4)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtok @ 000112ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0003d0b8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0003d0bc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0003d0c0)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 000112d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003d0c4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execv @ 000112dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_0003d0c8)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::sigaction @ 000112e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0003d0cc)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0003d0d4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003d0d8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011318 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003d0dc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003d0e0)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0003d0e4)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003d0e8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003d0ec)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0003d0f0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 0001136c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0003d0f8)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 00011378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0003d0fc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::stat @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0003d100)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003d104)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 0001139c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0003d108)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003d10c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003d110)(__status);
  return;
}



/* ===== <EXTERNAL>::setbuf @ 000113c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_0003d114)(__stream);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003d118)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0003d11c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003d120)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0003d124)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0003d128)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::execvp @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_0003d12c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0003d130)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011420 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003d134)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001142c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003d138)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003d13c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003d140)(__ptr);
  return;
}



/* ===== FUN_00011450 @ 00011450 size=3572 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00011450(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  __pid_t _Var4;
  size_t sVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int local_844;
  int local_834;
  int local_830;
  int local_82c;
  char local_828 [511];
  undefined1 local_629;
  undefined2 local_628;
  undefined1 local_429;
  undefined4 local_428;
  undefined2 uStack_424;
  undefined1 local_422;
  
  local_834 = 1;
  FUN_000278dc();
  DAT_000455b4 = 0;
  local_844 = 0;
  local_628 = (ushort)local_628._1_1_ << 8;
  local_828[0] = '\0';
  DAT_000453cc = 0;
  FUN_00015184(&DAT_0003d164);
  DAT_000453d0._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  DAT_000453d8._0_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  DAT_000453d8._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  DAT_000453e0._0_4_ = 0;
  DAT_000453d0._0_4_ = 0;
  DAT_000453e8._0_4_ = 0;
  DAT_000453f8._0_4_ = 0;
  DAT_00045400._0_4_ = 0;
  DAT_00045410._0_4_ = 0;
  iVar2 = local_834;
  DAT_000453e0._4_4_ = DAT_000453d0._4_4_;
  DAT_000453e8._4_4_ = DAT_000453d0._4_4_;
  DAT_000453f0._0_4_ = (undefined4)DAT_000453d8;
  DAT_000453f0._4_4_ = DAT_000453d8._4_4_;
  DAT_000453f8._4_4_ = DAT_000453d0._4_4_;
  DAT_00045400._4_4_ = DAT_000453d0._4_4_;
  DAT_00045408._0_4_ = (undefined4)DAT_000453d8;
  DAT_00045408._4_4_ = DAT_000453d8._4_4_;
  DAT_00045410._4_4_ = DAT_000453d0._4_4_;
joined_r0x000114f4:
  if (param_1 <= iVar2) {
    FUN_000288f4();
    if ((param_1 == 1) ||
       (((DAT_0003d158 < 0 || ((_DAT_0003d150 & 0x10) != 0)) &&
        (local_828[0] == '\0' && (char)local_628 == '\0')))) {
      FUN_000141f0(local_828,local_844,0xffffffff);
    }
    iVar2 = FUN_000188c0(&DAT_00045398,&DAT_00045580);
    if (iVar2 == 0) {
      if (local_828[0] != '\0') goto LAB_00011a08;
      goto LAB_00011630;
    }
    goto LAB_00011a00;
  }
  pcVar8 = (char *)param_2[iVar2];
  iVar1 = strcmp(pcVar8,"--sadc");
  if (iVar1 == 0) {
    FUN_000124c8();
LAB_00011ff8:
    iVar1 = strcmp(pcVar8,"-q");
    if (iVar1 == 0) {
      local_834 = iVar2 + 1;
      if ((param_2[iVar2 + 1] == 0) ||
         (iVar1 = FUN_000177e0(param_2,&local_834,&DAT_0003d164), iVar2 = local_834, iVar1 != 0)) {
        iVar2 = FUN_00014050(&DAT_0003d164,9,1);
        *(uint *)((&DAT_0003d164)[iVar2] + 4) = *(uint *)((&DAT_0003d164)[iVar2] + 4) | 2;
        iVar2 = local_834;
      }
      goto joined_r0x000114f4;
    }
    sVar5 = strlen(pcVar8);
    iVar1 = DAT_0003d158;
    if (sVar5 - 2 < 2) {
      if (*pcVar8 == '-') {
        sVar3 = strspn(pcVar8 + 1,"0123456789");
        if (sVar5 == 2) {
          sVar5 = 1;
        }
        else {
          sVar5 = 2;
        }
        if (sVar3 != sVar5) goto LAB_000121a8;
        if (local_844 != 0 || local_828[0] != '\0') goto LAB_00011a00;
        local_834 = iVar2 + 1;
        local_844 = atoi(pcVar8 + 1);
        iVar2 = iVar2 + 1;
        goto joined_r0x000114f4;
      }
    }
    else if (*pcVar8 == '-') {
LAB_000121a8:
      iVar1 = FUN_00016824(param_2,&local_834,&DAT_0003d164,&DAT_0003d150,0);
      iVar2 = local_834;
      if (iVar1 != 0) {
        if (iVar1 != 1) goto LAB_00012174;
        goto LAB_00011a00;
      }
LAB_00011b80:
      local_834 = iVar2 + 1;
      iVar2 = local_834;
      goto joined_r0x000114f4;
    }
    sVar3 = strspn(pcVar8,"0123456789");
    if (iVar1 < 0) {
      if (sVar5 != sVar3) goto LAB_00011a00;
      local_834 = iVar2 + 1;
      DAT_0003d158 = atol(pcVar8);
      iVar2 = iVar2 + 1;
      if (DAT_0003d158 < 0) goto LAB_00011a00;
    }
    else {
      if ((sVar5 != sVar3 || iVar1 == 0) || (DAT_0003f2e0 != 0)) goto LAB_00011a00;
      local_834 = iVar2 + 1;
      DAT_0003f2e0 = atol(pcVar8);
      iVar2 = iVar2 + 1;
      if (DAT_0003f2e0 < 1) goto LAB_00011a00;
    }
    goto joined_r0x000114f4;
  }
  iVar1 = strncmp(pcVar8,"--dev=",6);
  if (iVar1 == 0) {
    iVar2 = FUN_00014050(&DAT_0003d164,0xb,1);
    uVar6 = 6;
  }
  else {
    iVar1 = strncmp(pcVar8,"--fs=",5);
    if (iVar1 != 0) {
      iVar1 = strncmp(pcVar8,"--iface=",8);
      if (iVar1 == 0) {
        iVar2 = FUN_00014050(&DAT_0003d164,0xc,1);
        FUN_00017a68(param_2[local_834],(&DAT_0003d164)[iVar2],0x10,&local_834,8,0);
        iVar1 = FUN_00014050(&DAT_0003d164,0xd,1);
        uVar6 = *(undefined4 *)((&DAT_0003d164)[iVar2] + 0x44);
        iVar1 = (&DAT_0003d164)[iVar1];
        *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)((&DAT_0003d164)[iVar2] + 0x40);
        *(undefined4 *)(iVar1 + 0x44) = uVar6;
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x100;
        iVar2 = local_834;
        goto joined_r0x000114f4;
      }
      iVar1 = strncmp(pcVar8,"--int=",6);
      if (iVar1 == 0) {
        iVar2 = FUN_00014050(&DAT_0003d164,3,1);
        FUN_00017a68(param_2[local_834],(&DAT_0003d164)[iVar2],8,&local_834,6,0x1000);
        iVar2 = local_834;
        goto joined_r0x000114f4;
      }
      iVar1 = strcmp(pcVar8,"--help");
      if (iVar1 == 0) {
        FUN_000123c8(*param_2);
        goto LAB_00012118;
      }
      iVar1 = strcmp(pcVar8,"--human");
      if (iVar1 == 0) {
        local_834 = iVar2 + 1;
        _DAT_0003d150 = _DAT_0003d150 | 0x100000;
        iVar2 = local_834;
        goto joined_r0x000114f4;
      }
      iVar1 = strcmp(pcVar8,"--pretty");
      if (iVar1 == 0) {
        local_834 = iVar2 + 1;
        _DAT_0003d150 = _DAT_0003d150 | 4;
        iVar2 = local_834;
        goto joined_r0x000114f4;
      }
      iVar1 = strncmp(pcVar8,"--dec=",6);
      if ((iVar1 == 0) && (sVar5 = strlen(pcVar8), sVar5 == 7)) {
        if (((*(ushort *)(__ctype_b + (uint)(byte)pcVar8[6] * 2) & 8) != 0) &&
           (DAT_0003d160 = atoi(pcVar8 + 6), DAT_0003d160 < 3)) goto LAB_00011b80;
        goto LAB_00011a00;
      }
      iVar1 = strcmp(pcVar8,"-D");
      if (iVar1 == 0) {
        local_834 = iVar2 + 1;
        _DAT_0003d150 = _DAT_0003d150 | 0x400;
        iVar2 = local_834;
        goto joined_r0x000114f4;
      }
      iVar1 = strcmp(pcVar8,"-P");
      if (iVar1 == 0) {
        iVar1 = FUN_00017994(param_2,&local_834,&DAT_0003d150,&DAT_0003d164);
      }
      else {
        iVar1 = strcmp(pcVar8,"-o");
        if (iVar1 == 0) {
          if ((char)local_628 != '\0') goto LAB_00011a00;
          iVar1 = iVar2 + 1;
          pcVar8 = (char *)param_2[iVar2 + 1];
          local_834 = iVar1;
          if ((pcVar8 != (char *)0x0) && (*pcVar8 != '-')) {
            sVar5 = strspn(pcVar8,"0123456789");
            sVar3 = strlen(pcVar8);
            if (sVar5 != sVar3) {
              local_834 = iVar2 + 2;
              strncpy((char *)&local_628,pcVar8,0x200);
              local_429 = 0;
              iVar2 = iVar2 + 2;
              goto joined_r0x000114f4;
            }
          }
          local_628 = 0x2d;
          iVar2 = iVar1;
          goto joined_r0x000114f4;
        }
        iVar1 = strcmp(pcVar8,"-f");
        if (iVar1 == 0) {
          iVar1 = local_844;
          if (local_844 != 0) {
            iVar1 = 1;
          }
          if (local_828[0] != '\0') {
            iVar1 = 1;
          }
          if (iVar1 != 0) goto LAB_00011a00;
          local_834 = iVar2 + 1;
          pcVar8 = (char *)param_2[iVar2 + 1];
          if ((pcVar8 != (char *)0x0) && (*pcVar8 != '-')) {
            sVar5 = strspn(pcVar8,"0123456789");
            sVar3 = strlen(pcVar8);
            if (sVar5 != sVar3) {
              local_834 = iVar2 + 2;
              strncpy(local_828,pcVar8,0x200);
              local_629 = 0;
              FUN_00014338(local_828,0,0xffffffff);
              iVar2 = local_834;
              local_844 = iVar1;
              goto joined_r0x000114f4;
            }
          }
          local_844 = 0;
          FUN_000141f0(local_828,0,0xffffffff);
          iVar2 = local_834;
          goto joined_r0x000114f4;
        }
        iVar1 = strcmp(pcVar8,"-s");
        if (iVar1 == 0) {
          pcVar8 = "08:00:00";
          puVar7 = &DAT_00045398;
        }
        else {
          iVar1 = strcmp(pcVar8,"-e");
          if (iVar1 != 0) {
            iVar1 = strcmp(pcVar8,"-i");
            if (iVar1 == 0) {
              local_834 = iVar2 + 1;
              pcVar8 = (char *)param_2[iVar2 + 1];
              if (pcVar8 == (char *)0x0) goto LAB_00011a00;
              sVar5 = strspn(pcVar8,"0123456789");
              sVar3 = strlen(pcVar8);
              if (sVar5 != sVar3) goto LAB_00011a00;
              local_834 = iVar2 + 2;
              DAT_0003d158 = atol(pcVar8);
              if (DAT_0003d158 < 1) goto LAB_00011a00;
              _DAT_0003d150 = _DAT_0003d150 | 0x10;
              iVar2 = iVar2 + 2;
              goto joined_r0x000114f4;
            }
            iVar1 = strcmp(pcVar8,"-m");
            if (iVar1 == 0) {
              local_834 = iVar2 + 1;
              if (param_2[iVar2 + 1] != 0) {
                iVar1 = FUN_00016fb4(param_2,&local_834,&DAT_0003d164);
                goto joined_r0x00011fec;
              }
              goto LAB_00011a00;
            }
            iVar1 = strcmp(pcVar8,"-n");
            if (iVar1 != 0) goto LAB_00011ff8;
            local_834 = iVar2 + 1;
            if (param_2[iVar2 + 1] == 0) goto LAB_00011a00;
            iVar1 = FUN_00017210(param_2,&local_834,&DAT_0003d164);
            goto joined_r0x00011fec;
          }
          pcVar8 = "18:00:00";
          puVar7 = &DAT_00045580;
        }
        iVar1 = FUN_00014ac0(param_2,&local_834,puVar7,pcVar8,_DAT_0003d150,DAT_0003d154);
      }
joined_r0x00011fec:
      iVar2 = local_834;
      if (iVar1 != 0) goto LAB_00011a00;
      goto joined_r0x000114f4;
    }
    iVar2 = FUN_00014050(&DAT_0003d164,0x25,1);
    uVar6 = 5;
  }
  FUN_00017a68(param_2[local_834],(&DAT_0003d164)[iVar2],0x80,&local_834,uVar6,0);
  iVar2 = local_834;
  goto joined_r0x000114f4;
LAB_00011a00:
  FUN_00012388(*param_2);
LAB_00011a08:
  if ((char)local_628 != '\0') {
    fwrite("-f and -o options are mutually exclusive\n",1,0x29,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00011630:
  if ((_DAT_0003d150 & 0x10000000) != 0) {
    FUN_00017a1c(&DAT_0003d164,&DAT_0003d150);
  }
  if ((DAT_000453cc == 0) && ((_DAT_0003d150 & 0x10) == 0)) {
    if (DAT_0003d158 != 0) goto LAB_00011678;
    if ((char)local_628 != '\0' || local_828[0] != '\0') goto LAB_00011a00;
  }
  else {
    if (local_828[0] == '\0') {
      fwrite("Not reading from a system activity file (use -f option)\n",1,0x38,stderr);
LAB_00012174:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (DAT_0003d158 == 0) goto LAB_00011a00;
LAB_00011678:
    if ((char)local_628 != '\0' && local_844 != 0) goto LAB_00011a00;
  }
  if (DAT_0003f2e0 == 0) {
    DAT_0003f2e0 = -1;
  }
  FUN_00015290(&DAT_0003d164);
  iVar2 = FUN_00027d28();
  if (iVar2 == 0) {
    _DAT_0003d150 = _DAT_0003d150 | 0x8000;
  }
  if (local_828[0] != '\0') {
    if (DAT_0003d158 < 0) {
      DAT_0003d158 = 1;
    }
    FUN_000134ec(local_828);
LAB_000116e8:
    FUN_00015224(&DAT_0003d164);
    FUN_00014698(&DAT_0003d164);
    return 0;
  }
  iVar2 = pipe(&local_830);
  if (iVar2 == -1) {
LAB_00012118:
    perror("pipe");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  _Var4 = fork();
  if (_Var4 == -1) {
    perror("fork");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  if (_Var4 != 0) {
    iVar2 = dup2(local_830,0);
    if (-1 < iVar2) {
      close(local_830);
      close(local_82c);
      FUN_00013b4c();
      goto LAB_000116e8;
    }
LAB_00012140:
    perror("dup2");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  iVar2 = dup2(local_82c,1);
  if (iVar2 < 0) goto LAB_00012140;
  close(local_830);
  close(local_82c);
  FUN_00012544(0,&DAT_0002b368);
  if (-1 < DAT_0003d158) {
    if (DAT_0003d158 == 0) {
      local_428 = CONCAT22(local_428._2_2_,0x31);
      iVar2 = 2;
      FUN_00012544(1,&local_428);
    }
    else {
      iVar2 = 1;
      sprintf((char *)&local_428,"%ld");
    }
    FUN_00012544(iVar2,&local_428);
    iVar1 = iVar2 + 1;
    if (-1 < DAT_0003f2e0) {
      sprintf((char *)&local_428,"%ld",DAT_0003f2e0 + 1);
      iVar1 = iVar2 + 2;
      FUN_00012544(iVar2 + 1,&local_428);
    }
    iVar2 = iVar1 + 1;
    FUN_00012544(iVar1,&DAT_0002b374);
    piVar9 = DAT_00012244;
    if ((char)local_628 == '\0') {
      FUN_00012544(iVar2,&DAT_0002b378);
      piVar11 = piVar9 + 0x2b;
      local_428 = DAT_0002b384;
      uStack_424 = (undefined2)DAT_0002b388;
      local_422 = (undefined1)((uint)DAT_0002b388 >> 0x10);
      do {
        piVar9 = piVar9 + 1;
        iVar2 = *piVar9;
        if ((*(uint *)(iVar2 + 4) & 2) != 0) {
          sVar5 = strlen((char *)&local_428);
          *(undefined2 *)((int)&local_428 + sVar5) = s__nodename_____s___0002ca64._16_2_;
          strcpy((char *)((int)&local_428 + sVar5 + 1),*(char **)(iVar2 + 0x50));
        }
      } while (piVar11 != piVar9);
      FUN_00012544(iVar1 + 2,&local_428);
    }
    else {
      iVar10 = iVar2;
      if ((_DAT_0003d150 & 0x400) != 0) {
        iVar10 = iVar1 + 2;
        FUN_00012544(iVar2,&DAT_0002b29c);
      }
      FUN_00012544(iVar10,&DAT_0002b378);
      FUN_00012544(iVar10 + 1,&DAT_0002b37c);
      FUN_00012544(iVar10 + 2,&local_628);
      iVar1 = iVar10;
    }
    *(undefined4 *)(&DAT_0004525c + (iVar1 + 3) * 4) = 0;
    execv("/tmp/sysstat-12.7.2/lib/sa/sadc",(char **)&DAT_0004525c);
    execvp("sadc",(char **)&DAT_0004525c);
    fprintf(stderr,"Cannot find the data collector (%s)\n",&DAT_0002b368);
    perror("exec");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  goto LAB_00011a00;
}



/* ===== entry @ 00012248 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003d0d0)
            (DAT_0001227c,param_2,&stack0x00000004,DAT_00012280,DAT_00012278,param_1);
  return;
}



/* ===== FUN_00012284 @ 00012284 size=32 ===== */

void FUN_00012284(void)

{
  if (DAT_000122a8 == DAT_000122a4) {
    return;
  }
  if (DAT_000122ac == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000122a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000122ac)();
  return;
}



/* ===== _FINI_0 @ 000122e8 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012324;
  if (*DAT_00012324 != '\0') {
    return;
  }
  FUN_00012284();
  if (DAT_00012328 != 0) {
    __deregister_frame_info(DAT_0001232c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012330 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012354 != 0) {
    __register_frame_info(DAT_0001235c,DAT_00012358);
  }
  if ((DAT_000122e0 - DAT_000122dc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000122e4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000122d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000122e4)();
  return;
}



/* ===== FUN_00012388 @ 00012388 size=64 ===== */

void FUN_00012388(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [ options ] [ <interval> [ <count> ] ]\n",param_1);
  fwrite("Options are:\n[ -A ] [ -B ] [ -b ] [ -C ] [ -D ] [ -d ] [ -F [ MOUNT ] ] [ -H ] [ -h ]\n[ -p ] [ -r [ ALL ] ] [ -S ] [ -t ] [ -u [ ALL ] ] [ -V ]\n[ -v ] [ -W ] [ -w ] [ -x ] [ -y ] [ -z ]\n[ -I [ SUM | ALL ] ] [ -P { <cpu_list> | ALL } ]\n[ -m { <keyword> [,...] | ALL } ] [ -n { <keyword> [,...] | ALL } ]\n[ -q [ <keyword> [,...] | ALL ] ]\n[ --dev=<dev_list> ] [ --fs=<fs_list> ] [ --iface=<iface_list> ] [ --int=<int_list> ]\n[ --dec={ 0 | 1 | 2 } ] [ --help ] [ --human ] [ --pretty ] [ --sadc ]\n[ -j { SID | ID | LABEL | PATH | UUID | ... } ]\n[ -f [ <filename> ] | -o [ <filename> ] | -[0-9]+ ]\n[ -i <interval> ] [ -s [ <start_time> ] ] [ -e [ <end_time> ] ]\n"
         ,1,0x292,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000123c8 @ 000123c8 size=256 ===== */

void FUN_000123c8(undefined4 param_1)

{
  fprintf(stdout,"Usage: %s [ options ] [ <interval> [ <count> ] ]\n",param_1);
  puts("Main options and reports (report name between square brackets):");
  puts("\t-B\tPaging statistics [A_PAGE]");
  puts("\t-b\tI/O and transfer rate statistics [A_IO]");
  puts("\t-d\tBlock devices statistics [A_DISK]");
  puts("\t-F [ MOUNT ]");
  puts("\t\tFilesystems statistics [A_FS]");
  puts("\t-H\tHugepages utilization statistics [A_HUGE]");
  puts("\t-I [ SUM | ALL ]\n\t\tInterrupts statistics [A_IRQ]");
  puts(
      "\t-m { <keyword> [,...] | ALL }\n\t\tPower management statistics [A_PWR_...]\n\t\tKeywords are:\n\t\tBAT\tBatteries capacity\n\t\tCPU\tCPU instantaneous clock frequency\n\t\tFAN\tFans speed\n\t\tFREQ\tCPU average clock frequency\n\t\tIN\tVoltage inputs\n\t\tTEMP\tDevices temperature\n\t\tUSB\tUSB devices plugged into the system"
      );
  puts(
      "\t-n { <keyword> [,...] | ALL }\n\t\tNetwork statistics [A_NET_...]\n\t\tKeywords are:\n\t\tDEV\tNetwork interfaces\n\t\tEDEV\tNetwork interfaces (errors)\n\t\tNFS\tNFS client\n\t\tNFSD\tNFS server\n\t\tSOCK\tSockets\t(v4)\n\t\tIP\tIP traffic\t(v4)\n\t\tEIP\tIP traffic\t(v4) (errors)\n\t\tICMP\tICMP traffic\t(v4)\n\t\tEICMP\tICMP traffic\t(v4) (errors)\n\t\tTCP\tTCP traffic\t(v4)\n\t\tETCP\tTCP traffic\t(v4) (errors)\n\t\tUDP\tUDP traffic\t(v4)\n\t\tSOCK6\tSockets\t(v6)\n\t\tIP6\tIP traffic\t(v6)\n\t\tEIP6\tIP traffic\t(v6) (errors)\n\t\tICMP6\tICMP traffic\t(v6)\n\t\tEICMP6\tICMP traffic\t(v6) (errors)\n\t\tUDP6\tUDP traffic\t(v6)\n\t\tFC\tFibre channel HBAs\n\t\tSOFT\tSoftware-based network processing"
      );
  puts(
      "\t-q [ <keyword> [,...] | PSI | ALL ]\n\t\tSystem load and pressure-stall statistics\n\t\tKeywords are:\n\t\tLOAD\tQueue length and load average statistics [A_QUEUE]\n\t\tCPU\tPressure-stall CPU statistics [A_PSI_CPU]\n\t\tIO\tPressure-stall I/O statistics [A_PSI_IO]\n\t\tMEM\tPressure-stall memory statistics [A_PSI_MEM]"
      );
  puts("\t-r [ ALL ]\n\t\tMemory utilization statistics [A_MEMORY]");
  puts("\t-S\tSwap space utilization statistics [A_MEMORY]");
  puts("\t-u [ ALL ]\n\t\tCPU utilization statistics [A_CPU]");
  puts("\t-v\tKernel tables statistics [A_KTABLES]");
  puts("\t-W\tSwapping statistics [A_SWAP]");
  puts("\t-w\tTask creation and system switching statistics [A_PCSW]");
  puts("\t-y\tTTY devices statistics [A_SERIAL]");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_000124c8 @ 000124c8 size=76 ===== */

void FUN_000124c8(void)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat("/tmp/sysstat-12.7.2/lib/sa/sadc",&sStack_60);
  if (iVar1 < 0) {
    puts("Data collector will be sought in PATH");
  }
  else {
    printf("Data collector found: %s\n","/tmp/sysstat-12.7.2/lib/sa/sadc");
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00012544 @ 00012544 size=80 ===== */

void FUN_00012544(int param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_2);
  __dest = malloc(sVar1 + 1);
  *(char **)(&DAT_0004525c + param_1 * 4) = __dest;
  if (__dest != (char *)0x0) {
    strcpy(__dest,param_2);
    return;
  }
  perror("malloc");
                    /* WARNING: Subroutine does not return */
  exit(4);
}



/* ===== FUN_00012594 @ 00012594 size=64 ===== */

void FUN_00012594(int param_1)

{
  uint uVar1;
  size_t __n;
  
  if (param_1 == 1) {
    uVar1 = 0xb150;
    __n = 0x22;
  }
  else {
    uVar1 = 0xb174;
    __n = 0x18;
  }
  fwrite((void *)(uVar1 | 0x20000),1,__n,stderr);
                    /* WARNING: Subroutine does not return */
  exit(3);
}



/* ===== FUN_000125d4 @ 000125d4 size=132 ===== */

void FUN_000125d4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_000451b0;
  piVar5 = DAT_00012658 + 0x2b;
  piVar6 = DAT_00012658;
LAB_000125f8:
  do {
    piVar6 = piVar6 + 1;
    piVar4 = (int *)*piVar6;
    if ((piVar4[1] & 2U) != 0) {
      if (param_1 == 0) {
LAB_00012644:
        piVar4[1] = piVar4[1] & 0xfffffffd;
        if (piVar6 == piVar5) {
          return;
        }
        goto LAB_000125f8;
      }
      if (iVar1 != *piVar4) {
        iVar3 = 0;
        piVar2 = &DAT_000451b0;
        do {
          iVar3 = iVar3 + 1;
          if (iVar3 == param_1) goto LAB_00012644;
          piVar2 = piVar2 + 1;
        } while (*piVar2 != *piVar4);
      }
    }
    if (piVar6 == piVar5) {
      return;
    }
  } while( true );
}



/* ===== FUN_0001265c @ 0001265c size=148 ===== */

bool FUN_0001265c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar4;
  int *piVar3;
  
  iVar1 = FUN_0001409c(&DAT_0003d164,2,1);
  if (1 < iVar1) {
    return true;
  }
  piVar2 = &DAT_0003d164;
  do {
    piVar3 = piVar2 + 1;
    iVar1 = *piVar2;
    if ((*(uint *)(iVar1 + 4) & 2) != 0) {
      puVar4 = *(undefined4 **)(iVar1 + 0xb8);
      if (puVar4 == (undefined4 *)0x0) {
        return 1 < *(int *)(iVar1 + 0x70);
      }
      iVar1 = FUN_000281c0(*puVar4,(puVar4[1] + 1 >> 3) + 1);
      return 1 < iVar1;
    }
    piVar2 = piVar3;
  } while (piVar3 != (int *)&DAT_0003d210);
  return false;
}



/* ===== FUN_000126f0 @ 000126f0 size=408 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000126f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  iVar1 = param_1 * 0x40;
  uVar13 = FUN_00028190((undefined4)DAT_00045400,DAT_00045400._4_4_,
                        *(undefined4 *)(&DAT_000453d0 + param_1 * 3),
                        *(undefined4 *)((int)&DAT_000453d0 + param_1 * 0x18 + 4));
  strncpy(&DAT_00045318 + iVar1,"Average:",0x40);
  (&DAT_00045357)[iVar1] = 0;
  iVar2 = (uint)(param_1 == 0) * 0x40;
  if ((_DAT_0003d150 & 0x1000000) == 0) {
    pcVar4 = &DAT_00045318 + iVar2;
    pcVar8 = &DAT_00045318 + iVar1;
    do {
      pcVar9 = pcVar8 + 0x10;
      uVar12 = *(undefined4 *)(pcVar8 + 4);
      uVar5 = *(undefined4 *)(pcVar8 + 8);
      uVar6 = *(undefined4 *)(pcVar8 + 0xc);
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      *(undefined4 *)(pcVar4 + 4) = uVar12;
      *(undefined4 *)(pcVar4 + 8) = uVar5;
      *(undefined4 *)(pcVar4 + 0xc) = uVar6;
      pcVar4 = pcVar4 + 0x10;
      pcVar8 = pcVar9;
    } while (pcVar9 != (char *)(iVar1 + 0x45358));
  }
  else {
    strncpy(&DAT_00045318 + iVar2,"Summary:",0x40);
    (&DAT_00045357)[iVar2] = 0;
  }
  sVar3 = write(1,"",0);
  if (sVar3 != -1) {
    puVar11 = DAT_00012888 + 0x2b;
    puVar10 = DAT_00012888;
    do {
      puVar10 = puVar10 + 1;
      piVar7 = (int *)*puVar10;
      if ((((param_3 == -1) || (*piVar7 == param_3)) && ((piVar7[1] & 2U) != 0)) &&
         (0 < piVar7[param_1 + 0x1f])) {
        (*(code *)piVar7[8])(piVar7,2,param_1,(code *)piVar7[8],uVar13);
      }
    } while (puVar10 != puVar11);
    if (param_2 != 0) {
      DAT_0003f2d8 = 0;
    }
    return;
  }
  perror("stdout");
                    /* WARNING: Subroutine does not return */
  exit(6);
}



/* ===== FUN_0001288c @ 0001288c size=636 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0001288c(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 local_30;
  
  if (param_8 != 0) {
    DAT_0003f2dc = 0;
  }
  if ((param_2 == 0) ||
     (iVar3 = FUN_000147f4((undefined4)DAT_00045400,DAT_00045400._4_4_,
                           *(undefined4 *)(&DAT_000453d0 + param_1 * 3),
                           *(undefined4 *)((int)&DAT_000453d0 + param_1 * 0x18 + 4),param_6,
                           DAT_0003d158), iVar3 != 0)) {
    uVar1 = (uint)(param_1 == 0);
    iVar2 = FUN_00017cc8(_DAT_0003d150,DAT_0003d154,&DAT_000453d0 + uVar1 * 3,&DAT_000452e0);
    iVar3 = DAT_000452f0;
    if (iVar2 == 0) {
      FUN_00017d58(_DAT_0003d150,DAT_0003d154,0,&DAT_00045318 + uVar1 * 0x40,0x40,&DAT_000452e0);
      iVar2 = FUN_00017cc8(_DAT_0003d150,DAT_0003d154,&DAT_000453d0 + param_1 * 3,&DAT_000452e0);
      if (iVar2 == 0) {
        FUN_00017d58(_DAT_0003d150,DAT_0003d154,0,&DAT_00045318 + param_1 * 0x40,0x40,&DAT_000452e0)
        ;
        if (param_4 == 1) {
          uVar5 = *(uint *)((int)&DAT_000453d8 + uVar1 * 0x18 + 4);
          if (*(uint *)(&DAT_000453d8 + uVar1 * 3) != 0 || uVar5 != 0) {
            uVar7 = *(uint *)((int)&DAT_000453d8 + param_1 * 0x18 + 4);
            bVar11 = uVar7 <= uVar5;
            if (uVar5 == uVar7) {
              bVar11 = *(uint *)(&DAT_000453d8 + param_1 * 3) <=
                       *(uint *)(&DAT_000453d8 + uVar1 * 3);
            }
            if ((!bVar11) && (DAT_000452f0 < iVar3)) {
              DAT_0003f2dc = 1;
            }
          }
        }
        if ((param_5 == 0) ||
           (iVar3 = FUN_00014a54(&DAT_000452e0,&DAT_00045580,DAT_0003f2dc), iVar3 < 1)) {
          FUN_00014c34(&DAT_000453d0 + param_1 * 3,&DAT_000453d0 + uVar1 * 3,&local_30);
          DAT_0003f2d8 = DAT_0003f2d8 + 1;
          sVar4 = write(1,"",0);
          if (sVar4 != -1) {
            puVar10 = DAT_00012b08 + 0x2b;
            uVar9 = 0;
            puVar8 = DAT_00012b08;
            do {
              puVar8 = puVar8 + 1;
              piVar6 = (int *)*puVar8;
              if ((((param_7 == -1) || (*piVar6 == param_7)) && ((piVar6[1] & 2U) != 0)) &&
                 (0 < piVar6[param_1 + 0x1f])) {
                uVar9 = 1;
                (*(code *)piVar6[7])(piVar6,uVar1,param_1,(code *)piVar6[7],local_30);
              }
            } while (puVar8 != puVar10);
            return uVar9;
          }
          perror("stdout");
                    /* WARNING: Subroutine does not return */
          exit(6);
        }
        *param_3 = 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_00012b0c @ 00012b0c size=268 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012b0c(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar6 = DAT_00012c18;
  uVar1 = (uint)(param_1 == 0);
  iVar5 = param_1 * 0x18;
  iVar8 = uVar1 * 0x18;
  piVar7 = DAT_00012c18 + 0x2b;
  *(undefined4 *)(&DAT_000453e0 + uVar1 * 3) = 0;
  *(undefined4 *)((int)&DAT_000453e0 + iVar8 + 4) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined1 *)((int)&DAT_000453e0 + iVar8 + 4) = 1;
  *(undefined4 *)(&DAT_000453d0 + uVar1 * 3) = 0;
  *(undefined4 *)((int)&DAT_000453d0 + iVar8 + 4) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(&DAT_000453d8 + uVar1 * 3) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)&DAT_000453d8 + iVar8 + 4) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = *(undefined1 *)((int)&DAT_000453e0 + iVar5 + 5);
  *(undefined1 *)((int)&DAT_000453e0 + iVar8 + 6) = *(undefined1 *)((int)&DAT_000453e0 + iVar5 + 6);
  *(undefined1 *)((int)&DAT_000453e0 + iVar8 + 5) = uVar2;
  uVar3 = *(undefined4 *)(&DAT_000453d8 + param_1 * 3);
  uVar4 = *(undefined4 *)((int)&DAT_000453d8 + iVar5 + 4);
  *(undefined1 *)((int)&DAT_000453e0 + iVar8 + 7) = *(undefined1 *)((int)&DAT_000453e0 + iVar5 + 7);
  *(undefined4 *)(&DAT_000453d8 + uVar1 * 3) = uVar3;
  *(undefined4 *)((int)&DAT_000453d8 + iVar8 + 4) = uVar4;
  do {
    piVar6 = piVar6 + 1;
    iVar5 = *piVar6;
    if (((*(uint *)(iVar5 + 4) & 2) != 0) &&
       (iVar8 = *(int *)(iVar5 + (param_1 + 0x1e) * 4 + 4), 0 < iVar8)) {
      memset(*(void **)(iVar5 + (uVar1 + 0x26) * 4 + 4),0,
             iVar8 * *(int *)(iVar5 + 0x74) * *(int *)(iVar5 + 0x94));
    }
  } while (piVar6 != piVar7);
  _DAT_0003d150 = _DAT_0003d150 | 1;
  DAT_0003d15c = 1;
  FUN_0001288c(param_1,0,DAT_00012c1c,0,0,0,0xffffffff,1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00012c20 @ 00012c20 size=96 ===== */

size_t FUN_00012c20(void *param_1,size_t param_2)

{
  ssize_t sVar1;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    sVar1 = read(0,param_1,param_2);
    if (sVar1 < 0) break;
    if (sVar1 == 0) {
      return param_2;
    }
    param_2 = param_2 - sVar1;
    param_1 = (void *)((int)param_1 + sVar1);
  }
  perror("read");
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_00012c80 @ 00012c80 size=88 ===== */

void FUN_00012c80(void)

{
  uint uVar1;
  undefined4 in_r3;
  int in_stack_00000004;
  char acStack_48 [64];
  
  printf("\n%-11s",in_r3);
  uVar1 = *(uint *)(in_stack_00000004 + 0x10);
  if (uVar1 < 2) {
    uVar1 = 2;
  }
  sprintf(acStack_48,"  LINUX RESTART\t(%u CPU)\n",uVar1 - 1);
  FUN_00029280(2,&DAT_0002c6b4,acStack_48);
  return;
}



/* ===== FUN_00012cd8 @ 00012cd8 size=48 ===== */

void FUN_00012cd8(void)

{
  undefined4 in_r3;
  undefined4 in_stack_00000004;
  
  printf("%-11s",in_r3);
  FUN_00029280(3,"  COM %s\n",in_stack_00000004);
  return;
}



/* ===== FUN_00012d08 @ 00012d08 size=404 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012d08(int param_1)

{
  int iVar1;
  int iVar2;
  void *__s;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = FUN_00012c20(&DAT_000453d0 + param_1 * 3);
  if (iVar2 == 0) {
    piVar6 = DAT_00012e9c + 0x2b;
    piVar5 = DAT_00012e9c;
    do {
      piVar5 = piVar5 + 1;
      if (*piVar5 != 0) {
        iVar2 = FUN_00014050(&DAT_0003d164,*piVar5,1);
        iVar7 = (&DAT_0003d164)[iVar2];
        if ((*(uint *)(iVar7 + 4) & 4) == 0) {
          iVar4 = *(int *)(iVar7 + 0x90);
          iVar3 = *(int *)(iVar7 + 0x74);
          __s = *(void **)(iVar7 + param_1 * 4 + 0x9c);
        }
        else {
          iVar7 = FUN_00012c20(iVar7 + (param_1 + 0x1f) * 4,4);
          if (iVar7 != 0) goto LAB_00012e8c;
          iVar7 = (&DAT_0003d164)[iVar2];
          iVar3 = *(int *)(iVar7 + (param_1 + 0x1e) * 4 + 4);
          if (*(int *)(iVar7 + 0x78) < iVar3 || iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00012594(2);
          }
          if (*(int *)(iVar7 + 0x88) < iVar3) {
            FUN_000147a0(iVar7,iVar3,_DAT_0003d150,DAT_0003d154);
            iVar7 = (&DAT_0003d164)[iVar2];
          }
          iVar4 = *(int *)(iVar7 + 0x90);
          iVar1 = (param_1 + 0x26) * 4;
          iVar3 = *(int *)(iVar7 + 0x74);
          __s = *(void **)(iVar7 + iVar1 + 4);
          if ((*(uint *)(iVar7 + 4) & 8) != 0) {
            memset(__s,0,*(int *)(iVar7 + 0x70) * iVar3 * iVar4);
            iVar7 = (&DAT_0003d164)[iVar2];
            iVar4 = *(int *)(iVar7 + 0x90);
            iVar3 = *(int *)(iVar7 + 0x74);
            __s = *(void **)(iVar7 + iVar1 + 4);
          }
        }
        iVar2 = FUN_00012c20(__s,*(int *)(iVar7 + (param_1 + 0x1e) * 4 + 4) * iVar3 * iVar4);
        if (iVar2 != 0) goto LAB_00012e8c;
      }
    } while (piVar6 != piVar5);
  }
  else if (DAT_0003f2d4 == 0) {
LAB_00012e8c:
                    /* WARNING: Subroutine does not return */
    FUN_00012594(1);
  }
  return;
}



/* ===== FUN_00012ea0 @ 00012ea0 size=1060 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012ea0(int param_1,__off_t param_2,uint *param_3,int *param_4,int *param_5,uint param_6,
                 undefined *param_7,undefined4 *param_8,undefined *param_9,int param_10,
                 uint param_11,undefined4 param_12,undefined *param_13,undefined *param_14,
                 int param_15)

{
  byte bVar1;
  int iVar2;
  __off_t _Var3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulonglong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *local_48;
  undefined *local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  
  _Var3 = lseek(param_1,param_2,0);
  if (_Var3 < param_2) {
    perror("lseek");
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
  local_38 = &DAT_0003d164;
  local_3c = &DAT_0003f2d4;
  FUN_000159bc(&DAT_0003d164,&DAT_000451b0,&DAT_000453d0,*param_3 == 0,2);
  *param_4 = DAT_0003f2e0;
  puVar4 = (undefined4 *)FUN_00014050(&DAT_0003d164,param_7,1);
  puVar10 = *(undefined4 **)((&DAT_0003d164)[(int)puVar4] + 0xb8);
  if (puVar10 == (undefined4 *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = (undefined4 *)FUN_000281c0(*puVar10,(puVar10[1] + 1 >> 3) + 1);
  }
  uVar11 = 0;
  iVar12 = 1;
  if (((uint)_DAT_0003d150 & 0x1000000) != 0) {
    DAT_0003f2e4 = 1;
  }
  uVar19 = CONCAT44(DAT_0003d154,_DAT_0003d150);
  local_48 = &DAT_0003f1ac;
  puVar20 = &DAT_0003f1ac;
  puVar18 = (undefined *)0x0;
  puVar17 = param_14;
  puVar13 = param_13;
  iVar6 = param_15;
  iVar5 = FUN_00015790(param_1,param_12,&DAT_000453d0 + *param_3 * 3,&DAT_00045430,param_14,param_13
                       ,0,param_15,_DAT_0003d150,DAT_0003d154,&DAT_0003f1ac);
  local_44 = &DAT_00045580;
  local_40 = 0;
  DAT_0003d15c = 1;
  *param_5 = iVar5;
  bVar1 = *(byte *)((int)&DAT_000453e0 + *param_3 * 0x18 + 4);
  do {
    puVar15 = (undefined *)(uint)bVar1;
    puVar14 = (undefined *)(uint)(puVar15 == (undefined *)0x2);
    if (*param_5 != 0) {
      puVar14 = (undefined *)0x1;
    }
    if (puVar14 != (undefined *)0x0) goto LAB_0001326c;
    if (puVar15 == (undefined *)0x4) {
      puVar17 = &DAT_00045398;
      uVar19 = CONCAT44(param_10,&DAT_000452e0);
      puVar13 = local_44;
      iVar6 = param_1;
      puVar21 = puVar14;
      iVar8 = FUN_00017e0c(&DAT_000453d0 + *param_3 * 3);
      iVar5 = *param_4;
      iVar2 = iVar12;
      puVar18 = puVar15;
      puVar20 = puVar14;
      if (iVar8 != 0 && uVar11 != 0) {
        uVar11 = uVar11 + 1;
      }
    }
    else {
      uVar19 = (ulonglong)param_11;
      puVar17 = param_9;
      puVar13 = param_13;
      puVar18 = param_14;
      iVar6 = param_10;
      puVar20 = _DAT_0003d150;
      puVar21 = DAT_0003d154;
      iVar5 = FUN_00015b2c(&DAT_0003d164,*param_3,param_1,DAT_00045444,param_9,param_13,param_14,
                           param_10,param_11,0,_DAT_0003d150,DAT_0003d154);
      if (iVar5 != 0) {
LAB_0001326c:
        if (local_40 != 0) {
          FUN_000126f0(*param_3 == 0,1,param_7,local_40,puVar17,puVar13,puVar18,iVar6,uVar19,puVar20
                      );
          *param_8 = 1;
          return;
        }
        *param_8 = 1;
        return;
      }
      puVar13 = (undefined *)*param_8;
      puVar17 = DAT_000455b4;
      puVar18 = param_7;
      iVar6 = FUN_0001288c(*param_3,1,param_4,DAT_000453cc,DAT_000455b4,puVar13,param_7,iVar12);
      if (iVar6 == 0) {
        iVar5 = *param_4;
      }
      else {
        iVar5 = *param_4;
        if (0 < iVar5) {
          iVar5 = iVar5 + -1;
          *param_4 = iVar5;
        }
        bVar16 = local_34 != (undefined4 *)0x0;
        DAT_0003f2e4 = 0;
        puVar7 = puVar4;
        puVar10 = local_38;
        if (bVar16) {
          uVar11 = uVar11 + (int)local_34;
          puVar7 = local_3c;
          puVar10 = local_34;
        }
        local_40 = local_40 + 1;
        uVar9 = *param_3;
        if (!bVar16) {
          puVar10 = (undefined4 *)puVar10[(int)puVar7];
        }
        *param_3 = uVar9 ^ 1;
        if (!bVar16) {
          uVar11 = uVar11 + puVar10[(uVar9 ^ 1) + 0x1f];
        }
      }
      *param_8 = 0;
      iVar2 = 0;
      iVar6 = iVar12;
    }
    iVar12 = iVar2;
    if (iVar5 == 0) goto LAB_0001326c;
    uVar19 = CONCAT44(DAT_0003d154,_DAT_0003d150);
    puVar18 = (undefined *)0x0;
    puVar17 = param_14;
    puVar13 = param_13;
    iVar6 = param_15;
    puVar20 = local_48;
    iVar5 = FUN_00015790(param_1,param_12,&DAT_000453d0 + *param_3 * 3,&DAT_00045430,param_14,
                         param_13,0,param_15,uVar19,&DAT_0003f1ac,puVar21);
    bVar16 = uVar11 == 0 || param_6 <= uVar11;
    if (bVar16) {
      uVar11 = 0;
    }
    DAT_0003d15c = (uint)bVar16;
    *param_5 = iVar5;
    bVar1 = *(byte *)((int)&DAT_000453e0 + *param_3 * 0x18 + 4);
  } while( true );
}



/* ===== FUN_000132c4 @ 000132c4 size=552 ===== */

void FUN_000132c4(void)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 *puVar5;
  char acStack_98 [16];
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  
  iVar2 = FUN_00012c20(&local_64,0x4c);
  sprintf(acStack_98,"%d.%d.%d.%d",(uint)local_60,(uint)local_5f,(uint)local_5e,(uint)local_5d);
  if (local_5d == 0) {
    sVar3 = strlen(acStack_98);
    (&stack0xffffff66)[sVar3] = 0;
  }
  if (iVar2 != 0) {
    if (iVar2 == 0x4c) {
                    /* WARNING: Subroutine does not return */
      exit(3);
    }
LAB_00013350:
                    /* WARNING: Subroutine does not return */
    FUN_00012594(2);
  }
  if ((local_64 != 0x2175d596) || (iVar2 = strcmp(acStack_98,"12.7.5"), iVar2 != 0)) {
    if ((short)local_64 == -0x2a6a) {
      fwrite("Using a wrong data collector from a different sysstat version\n",1,0x3e,stderr);
    }
    goto LAB_00013350;
  }
  iVar2 = FUN_00012c20(&DAT_00045430,0x150);
  if (iVar2 != 0) {
LAB_000134e4:
                    /* WARNING: Subroutine does not return */
    FUN_00012594(1);
  }
  if (((0x2b < DAT_00045444) || (DAT_00045464 != 0x24)) || (DAT_00045468 != 0x18))
  goto LAB_00013350;
  uVar4 = 0;
  if (DAT_00045444 != 0) {
    uVar4 = 0;
    puVar5 = &DAT_000451b0;
    do {
      iVar2 = FUN_00012c20(&local_88,0x24);
      if (iVar2 != 0) goto LAB_000134e4;
      iVar2 = FUN_00014050(&DAT_0003d164,local_88);
      uVar1 = DAT_00045444;
      if (((((iVar2 < 0) || (iVar2 = (&DAT_0003d164)[iVar2], *(int *)(iVar2 + 0x90) != local_74)) ||
           ((*(int *)(iVar2 + 0x54) != local_70 ||
            ((*(int *)(iVar2 + 0x58) != local_6c || (*(int *)(iVar2 + 0x5c) != local_68)))))) ||
          (local_80 < 1)) || ((local_7c < 1 || (*(int *)(iVar2 + 8) != local_84))))
      goto LAB_00013350;
      uVar4 = uVar4 + 1;
      *puVar5 = local_88;
      *(int *)(iVar2 + 0x70) = local_80;
      *(int *)(iVar2 + 0x74) = local_7c;
      puVar5 = puVar5 + 1;
    } while (uVar4 < uVar1);
    if (0x2a < (int)uVar4) goto LAB_000134b4;
  }
  puVar5 = &DAT_000451b0 + uVar4;
  do {
    uVar4 = uVar4 + 1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  } while (uVar4 != 0x2b);
LAB_000134b4:
  FUN_000125d4();
  return;
}



/* ===== FUN_000134ec @ 000134ec size=1616 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000134ec(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  __off_t _Var5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_28c;
  int local_288;
  int local_284;
  int local_280;
  undefined4 local_27c;
  int local_278;
  undefined1 auStack_274 [76];
  undefined1 auStack_228 [516];
  
  local_28c = (void *)0x0;
  local_27c = 0;
  local_288 = 1;
  local_280 = 1;
  local_278 = 1;
  uVar3 = FUN_00028010();
  puVar2 = DAT_00013b3c;
  FUN_000160b4(&local_284,param_1,&DAT_0003d164,auStack_274,_DAT_0003d150,DAT_0003d154,auStack_274,
               &DAT_00045430,&local_28c,&DAT_000451b0,DAT_00013b3c + 1,DAT_00013b3c);
  FUN_00014648(&DAT_0003d164,extraout_r1,_DAT_0003d150,DAT_0003d154);
  FUN_00014cd0(_DAT_0003d150,DAT_0003d154,DAT_00013b40,&DAT_00045430);
  do {
    do {
      while( true ) {
        iVar4 = FUN_00015790(local_284,auStack_228,&DAT_000453d0,&DAT_00045430,*puVar2,puVar2[1],0,
                             0x200,CONCAT44(DAT_0003d154,_DAT_0003d150),&DAT_0003f1ac);
        if (iVar4 != 0) {
          return;
        }
        if ((DAT_000453e0._4_1_ - 2U & 0xfd) != 0) break;
        FUN_00017e0c(&DAT_000453d0,DAT_000453e0._4_1_,_DAT_0003d150,DAT_0003d154,&DAT_00045398,
                     &DAT_00045580,DAT_000453e0._4_1_,local_284,&DAT_000452e0,param_1,0,0,
                     auStack_274,&DAT_00045430,&DAT_0003d164,&DAT_0003f1ac,puVar2[1],*puVar2);
      }
      iVar4 = FUN_00015b2c(&DAT_0003d164,0,local_284,DAT_00045444,local_28c,puVar2[1],*puVar2,
                           param_1,auStack_274,0,CONCAT44(DAT_0003d154,_DAT_0003d150));
      if (iVar4 != 0) {
        return;
      }
      FUN_00017cc8(_DAT_0003d150,DAT_0003d154,&DAT_000453d0,&DAT_000452e0);
      iVar4 = FUN_00014a54(&DAT_000452e0,&DAT_00045398,0);
    } while ((iVar4 < 0) || (iVar4 = FUN_00014a54(&DAT_000452e0,&DAT_00045580,0), 0 < iVar4));
    FUN_000159bc(&DAT_0003d164,&DAT_000451b0,&DAT_000453d0,2,0);
    local_27c = 1;
    _Var5 = lseek(local_284,0,1);
    piVar11 = DAT_00013b44;
    if (_Var5 < 0) {
      perror("lseek");
                    /* WARNING: Subroutine does not return */
      exit(2);
    }
    do {
      piVar11 = piVar11 + 1;
      if (*piVar11 != 0) {
        iVar4 = FUN_00014050(&DAT_0003d164,*piVar11,1);
        puVar6 = (undefined4 *)(&DAT_0003d164)[iVar4];
        if ((puVar6[1] & 2) != 0) {
          if ((puVar6[1] & 0x20) == 0) {
            FUN_00012ea0(local_284,_Var5,&local_288,&local_278,&local_280,uVar3,*puVar6,&local_27c,
                         local_28c,param_1,auStack_274,auStack_228,puVar2[1],*puVar2,0x200);
          }
          else {
            uVar8 = puVar6[0x26];
            iVar10 = 8;
            uVar9 = 1;
            uVar7 = uVar8;
            while( true ) {
              if ((uVar9 & uVar7) != 0) {
                uVar12 = *puVar2;
                uVar13 = puVar2[1];
                puVar6[0x26] = uVar7 & uVar9 - 0x100;
                FUN_00012ea0(local_284,_Var5,&local_288,&local_278,&local_280,uVar3,*puVar6,
                             &local_27c,local_28c,param_1,auStack_274,auStack_228,uVar13,uVar12,
                             0x200);
                *(uint *)((&DAT_0003d164)[iVar4] + 0x98) = uVar8;
              }
              iVar10 = iVar10 + -1;
              uVar9 = uVar9 << 1;
              if (iVar10 == 0) break;
              puVar6 = (undefined4 *)(&DAT_0003d164)[iVar4];
              uVar7 = puVar6[0x26];
            }
          }
        }
      }
      iVar4 = local_278;
    } while (DAT_00013b48 != piVar11);
    while (iVar4 == 0) {
      while( true ) {
        local_280 = FUN_00015790(local_284,auStack_228,&DAT_000453d0 + local_288 * 3,&DAT_00045430,
                                 *puVar2,puVar2[1],0,0x200,CONCAT44(DAT_0003d154,_DAT_0003d150),
                                 &DAT_0003f1ac);
        cVar1 = *(char *)((int)&DAT_000453e0 + local_288 * 0x18 + 4);
        if (local_280 != 0 || cVar1 == '\x02') goto LAB_0001391c;
        if (cVar1 != '\x04') break;
        FUN_00017e0c(&DAT_000453d0 + local_288 * 3,param_1,_DAT_0003d150,DAT_0003d154,&DAT_00045398,
                     &DAT_00045580,4,local_284,&DAT_000452e0,param_1,0,0,auStack_274,&DAT_00045430,
                     &DAT_0003d164,&DAT_0003f1ac,puVar2[1],*puVar2);
      }
      iVar4 = FUN_00015b2c(&DAT_0003d164,local_288,local_284,DAT_00045444,local_28c,puVar2[1],
                           *puVar2,param_1,auStack_274,0,CONCAT44(DAT_0003d154,_DAT_0003d150));
    }
LAB_0001391c:
    if ((local_280 != 0) ||
       ((*(char *)((int)&DAT_000453e0 + local_288 * 0x18 + 4) == '\x02' &&
        (FUN_00017e0c(&DAT_000453d0 + local_288 * 3,local_284,_DAT_0003d150,DAT_0003d154,
                      &DAT_00045398,&DAT_00045580,2,local_284,&DAT_000452e0,param_1,0,0,auStack_274,
                      &DAT_00045430,&DAT_0003d164,&DAT_0003f1ac,puVar2[1],*puVar2), local_280 != 0))
       )) {
      close(local_284);
      free(local_28c);
      return;
    }
  } while( true );
}



/* ===== FUN_00013b4c @ 00013b4c size=1000 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013b4c(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 extraout_r1;
  size_t __n;
  uint extraout_r3;
  undefined4 *puVar6;
  undefined4 unaff_r5;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  sigaction *__act;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar7;
  
  setbuf(stdout,(char *)0x0);
  FUN_000132c4();
  iVar2 = FUN_0001409c(&DAT_0003d164,2,0);
  if (iVar2 == 0) {
    FUN_000144b0();
  }
  iVar2 = FUN_0001265c();
  uVar13 = FUN_00028010();
  FUN_00014648(&DAT_0003d164,(int)((ulonglong)uVar13 >> 0x20),_DAT_0003d150,DAT_0003d154);
  DAT_0003f2e4 = 0;
  FUN_00014cd0(_DAT_0003d150,DAT_0003d154,uRam00013da4,&DAT_00045430);
  FUN_00012d08(0);
  uVar12 = DAT_0003d158 == 0;
  if (!(bool)uVar12) {
    FUN_000159bc(&DAT_0003d164,&DAT_000451b0,&DAT_000453d0,2,0);
    puVar1 = puRam00013da8;
    __act = (sigaction *)(puRam00013da8 + -1);
    *puRam00013da8 = 0;
    *(undefined1 **)(puVar1 + -1) = &LAB_00012360;
    *(undefined8 *)((int)puVar1 + 4) = 0;
    *(undefined4 *)((int)puVar1 + -4) = 0x10000000;
    sigaction(2,__act,(sigaction *)0x0);
    uVar8 = 1;
    iVar9 = (int)uVar13;
    while (FUN_00012d08(uVar8), DAT_0003f2d4 == 0) {
      if (iVar2 == 0) {
        uVar14 = FUN_0002a0ec(iVar9,(int)uVar13);
        DAT_0003d15c = (int)uVar14;
        if (DAT_0003d15c != 0) {
          iVar9 = (int)((ulonglong)uVar14 >> 0x20);
        }
        iVar9 = iVar9 + 1;
      }
      FUN_0001288c(uVar8,0,uRam00013dac,0,DAT_000455b4,0,0xffffffff,1);
      if ((DAT_000455b4 == 0) || (iVar3 = FUN_00014a54(&DAT_000452e0,&DAT_00045580,0), iVar3 != 0))
      {
        if (*(char *)((int)&DAT_000453e0 + uVar8 * 0x18 + 4) == '\x03') goto LAB_00013d54;
      }
      else {
        DAT_0003f2e0 = 0;
        if (*(char *)((int)&DAT_000453e0 + uVar8 * 0x18 + 4) != '\x03') goto joined_r0x00013d7c;
LAB_00013d54:
        FUN_000132c4();
        FUN_00014648(&DAT_0003d164,extraout_r1,_DAT_0003d150,DAT_0003d154);
      }
      if (0 < DAT_0003f2e0) {
        DAT_0003f2e0 = DAT_0003f2e0 + -1;
      }
      if (DAT_0003f2e0 == 0) goto joined_r0x00013d7c;
      uVar8 = uVar8 ^ 1;
    }
    uVar8 = uVar8 ^ 1;
joined_r0x00013d7c:
    if (DAT_0003f2d8 == 0) {
      DAT_0003d15c = iVar2;
      return;
    }
    DAT_0003d15c = iVar2;
    FUN_000126f0(uVar8,0,0xffffffff);
    return;
  }
  uVar13 = FUN_00012b0c();
  iVar2 = (int)((ulonglong)uVar13 >> 0x20);
  uVar4 = (uint)uVar13;
  uVar8 = extraout_r3;
  while( true ) {
    if ((bool)uVar12) {
                    /* WARNING: Could not recover jumptable at 0x00013dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(uVar8 & (uVar4 >> 5 | uVar4 << 0x1b)))();
      return;
    }
    iVar9 = *(int *)(uVar4 + 0x8c);
    if (iVar9 != 0) break;
    uVar8 = 0;
    uVar12 = true;
  }
  FUN_00027c38(iVar9,iVar2,*(undefined4 *)(uVar4 + 0x74),iVar9,0,unaff_r5,&DAT_0003f2d4);
  iVar9 = *(int *)(uVar4 + 0x74);
  iVar3 = *(int *)(uVar4 + 0x8c);
  uVar8 = iVar2 * iVar3 * iVar9;
  if (uVar8 * 8 != 0) {
    pvVar5 = realloc(*(void **)(uVar4 + 0xa8),uVar8 * 8);
    if (pvVar5 == (void *)0x0) {
      perror("realloc");
      pvVar5 = *(void **)(uVar4 + 0xa8);
joined_r0x00013f08:
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
    iVar9 = *(int *)(uVar4 + 0x74);
    iVar3 = *(int *)(uVar4 + 0x8c);
    uVar8 = iVar2 * iVar3 * iVar9;
    __n = uVar8 * 8;
    if (*(int *)(uVar4 + 0xa8) == 0) {
      memset(pvVar5,0,__n);
      iVar9 = *(int *)(uVar4 + 0x74);
      iVar3 = *(int *)(uVar4 + 0x8c);
      uVar8 = iVar2 * iVar3 * iVar9;
      __n = uVar8 * 8;
    }
    *(void **)(uVar4 + 0xa8) = pvVar5;
    if (__n != 0) {
      pvVar5 = realloc(*(void **)(uVar4 + 0xac),__n);
      if (pvVar5 == (void *)0x0) {
        perror("realloc");
        pvVar5 = *(void **)(uVar4 + 0xac);
        goto joined_r0x00013f08;
      }
      iVar9 = *(int *)(uVar4 + 0x74);
      iVar3 = *(int *)(uVar4 + 0x8c);
      uVar8 = iVar2 * iVar3 * iVar9;
      if (*(int *)(uVar4 + 0xac) == 0) {
        memset(pvVar5,0,uVar8 * 8);
        iVar9 = *(int *)(uVar4 + 0x74);
        iVar3 = *(int *)(uVar4 + 0x8c);
        uVar8 = iVar2 * iVar9 * iVar3;
      }
      *(void **)(uVar4 + 0xac) = pvVar5;
    }
  }
  uVar10 = iVar3 * *(int *)(uVar4 + 0xb0) * iVar9;
  if (uVar10 < uVar8) {
    iVar9 = uVar10 * 8;
    iVar3 = *(int *)(uVar4 + 0xa8);
    puVar6 = (undefined4 *)(iVar3 + iVar9);
    puVar11 = (undefined4 *)(*(int *)(uVar4 + 0xac) + iVar9);
    do {
      puVar7 = puVar6 + 2;
      *puVar6 = 0xffffffff;
      puVar6[1] = 0x7fefffff;
      *puVar11 = 0xffffffff;
      puVar11[1] = 0xffefffff;
      puVar6 = puVar7;
      puVar11 = puVar11 + 2;
    } while (puVar7 != (undefined4 *)(iVar3 + uVar8 * 8));
  }
  *(int *)(uVar4 + 0xb0) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00013e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x13da4)();
  return;
}



/* ===== FUN_00013f34 @ 00013f34 size=284 ===== */

void FUN_00013f34(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar7;
  undefined4 unaff_r8;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *puVar5;
  
  FUN_00027c38(*(undefined4 *)(param_1 + 0x94),param_2,*(undefined4 *)(param_1 + 0x74));
  piVar7 = (int *)(param_1 + 0x9c);
  iVar8 = 0;
  do {
    sVar2 = param_2 * *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94);
    if (sVar2 != 0) {
      pvVar1 = realloc((void *)*piVar7,sVar2);
      if (pvVar1 == (void *)0x0) {
        perror("realloc");
        pvVar1 = *(void **)(param_1 + iVar8 * 4 + 0x9c);
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
      if (*piVar7 == 0) {
        memset(pvVar1,0,param_2 * *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94));
      }
      *piVar7 = (int)pvVar1;
    }
    iVar6 = *(int *)(param_1 + 0x88);
    if (iVar6 != 0) {
      memset((void *)(*(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94) * iVar6 + *piVar7),0,
             (param_2 - iVar6) * *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94));
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar8 != 3);
  *(uint *)(param_1 + 0x88) = param_2;
  if (param_2 <= *(uint *)(param_1 + 0xb0)) {
    return;
  }
  if ((param_3 & 0x1000000) == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x8c);
                    /* WARNING: Could not recover jumptable at 0x00013db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar8 == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00027c38(iVar8,param_2,*(undefined4 *)(param_1 + 0x74),iVar8,unaff_r4,unaff_r5,unaff_r6,
               unaff_r7,unaff_r8);
  iVar8 = *(int *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x8c);
  uVar3 = param_2 * iVar6 * iVar8;
  if (uVar3 * 8 != 0) {
    pvVar1 = realloc(*(void **)(param_1 + 0xa8),uVar3 * 8);
    if (pvVar1 == (void *)0x0) {
      perror("realloc");
      pvVar1 = *(void **)(param_1 + 0xa8);
joined_r0x00013f08:
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
    iVar8 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(param_1 + 0x8c);
    uVar3 = param_2 * iVar6 * iVar8;
    sVar2 = uVar3 * 8;
    if (*(int *)(param_1 + 0xa8) == 0) {
      memset(pvVar1,0,sVar2);
      iVar8 = *(int *)(param_1 + 0x74);
      iVar6 = *(int *)(param_1 + 0x8c);
      uVar3 = param_2 * iVar6 * iVar8;
      sVar2 = uVar3 * 8;
    }
    *(void **)(param_1 + 0xa8) = pvVar1;
    if (sVar2 != 0) {
      pvVar1 = realloc(*(void **)(param_1 + 0xac),sVar2);
      if (pvVar1 == (void *)0x0) {
        perror("realloc");
        pvVar1 = *(void **)(param_1 + 0xac);
        goto joined_r0x00013f08;
      }
      iVar8 = *(int *)(param_1 + 0x74);
      iVar6 = *(int *)(param_1 + 0x8c);
      uVar3 = param_2 * iVar6 * iVar8;
      if (*(int *)(param_1 + 0xac) == 0) {
        memset(pvVar1,0,uVar3 * 8);
        iVar8 = *(int *)(param_1 + 0x74);
        iVar6 = *(int *)(param_1 + 0x8c);
        uVar3 = param_2 * iVar8 * iVar6;
      }
      *(void **)(param_1 + 0xac) = pvVar1;
    }
  }
  uVar9 = iVar6 * *(int *)(param_1 + 0xb0) * iVar8;
  if (uVar9 < uVar3) {
    iVar8 = uVar9 * 8;
    iVar6 = *(int *)(param_1 + 0xa8);
    puVar4 = (undefined4 *)(iVar6 + iVar8);
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0xac) + iVar8);
    do {
      puVar5 = puVar4 + 2;
      *puVar4 = 0xffffffff;
      puVar4[1] = 0x7fefffff;
      *puVar10 = 0xffffffff;
      puVar10[1] = 0xffefffff;
      puVar4 = puVar5;
      puVar10 = puVar10 + 2;
    } while (puVar5 != (undefined4 *)(iVar6 + uVar3 * 8));
  }
  *(uint *)(param_1 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00013e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* ===== FUN_00014050 @ 00014050 size=76 ===== */

int FUN_00014050(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + -4);
  iVar1 = 0;
  do {
    puVar2 = puVar2 + 1;
    if (*(int *)*puVar2 == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x2b);
  if (param_3 == 0) {
    return -1;
  }
  FUN_0002796c("get_activity_position");
  return -1;
}



/* ===== FUN_0001409c @ 0001409c size=112 ===== */

int FUN_0001409c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = (int *)(param_1 + -4);
  iVar2 = 0;
  do {
    while( true ) {
      piVar3 = piVar3 + 1;
      uVar4 = *(uint *)(*piVar3 + 4);
      if ((param_2 & ~uVar4) == 0) break;
LAB_000140b0:
      if (piVar3 == (int *)(param_1 + 0xa8)) {
        return iVar2;
      }
    }
    if (((uint)(param_3 == 1) & uVar4 >> 5) == 0) {
      iVar2 = iVar2 + 1;
      goto LAB_000140b0;
    }
    uVar4 = 1;
    iVar5 = 8;
    do {
      uVar1 = *(uint *)(*piVar3 + 0x98) & uVar4;
      uVar4 = uVar4 << 1;
      if (uVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (piVar3 == (int *)(param_1 + 0xa8)) {
      return iVar2;
    }
  } while( true );
}



/* ===== FUN_0001410c @ 0001410c size=228 ===== */

void FUN_0001410c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  __time_t _Var1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  stat sStack_270;
  char acStack_218 [511];
  undefined1 local_19;
  
  *param_3 = 0;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  iVar5 = *(int *)(param_2 + 0x10) + 1;
  snprintf(acStack_218,0x200,"%s/sa%04d%02d%02d",param_1,*(int *)(param_2 + 0x14) + 0x76c,iVar5,
           uVar4);
  local_19 = 0;
  iVar3 = stat(acStack_218,&sStack_270);
  lVar2 = sStack_270.st_mtim.tv_nsec;
  _Var1 = sStack_270.st_mtim.tv_sec;
  if (-1 < iVar3) {
    snprintf(acStack_218,0x200,"%s/sa%02d",param_1,*(undefined4 *)(param_2 + 0xc),iVar5,uVar4);
    local_19 = 0;
    iVar3 = stat(acStack_218,&sStack_270);
    if (((iVar3 < 0) || (sStack_270.st_mtim.tv_sec < _Var1)) ||
       ((sStack_270.st_mtim.tv_sec == _Var1 && (sStack_270.st_mtim.tv_nsec < lVar2)))) {
      *param_3 = 1;
      return;
    }
  }
  return;
}



/* ===== FUN_000141f0 @ 000141f0 size=324 ===== */

void FUN_000141f0(char *param_1,undefined4 param_2,int param_3)

{
  char *__src;
  int iVar1;
  int local_244 [2];
  undefined4 local_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  int local_22c;
  int iStack_228;
  undefined4 local_224;
  int iStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  int iStack_214;
  char acStack_210 [511];
  undefined1 local_11;
  
  iStack_238 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_234 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_230 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  __src = param_1;
  if (*param_1 == '\0') {
    __src = "/var/log/sa";
  }
  local_21c = 0;
  local_23c = 0;
  local_22c = 0;
  local_224 = 0;
  uStack_218 = 0;
  local_244[0] = param_3;
  iStack_228 = iStack_238;
  iStack_220 = iStack_238;
  iStack_214 = iStack_238;
  strncpy(acStack_210,__src,0x200);
  local_11 = 0;
  FUN_000277d0(&local_23c,param_2);
  if (local_244[0] < 0) {
    FUN_0001410c(acStack_210,&local_23c,local_244);
  }
  if (local_244[0] == 0) {
    iVar1 = snprintf(param_1,0x200,"%s/sa%02d",acStack_210,local_230);
  }
  else {
    iVar1 = snprintf(param_1,0x200,"%s/sa%04d%02d%02d",acStack_210,iStack_228 + 0x76c,local_22c + 1,
                     local_230);
  }
  param_1[0x1ff] = '\0';
  if (iVar1 < 0x200) {
    DAT_0003f2f0 = 1;
    return;
  }
  fprintf(stderr,"%s: %s\n",DAT_00014334,param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014338 @ 00014338 size=52 ===== */

undefined4 FUN_00014338(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00027c04();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_000141f0(param_1,param_2,param_3);
  return 1;
}



/* ===== FUN_0001436c @ 0001436c size=108 ===== */

void FUN_0001436c(FILE *param_1,int param_2)

{
  fprintf(param_1,"File created by sar/sadc from sysstat version %d.%d.%d",
          (uint)*(byte *)(param_2 + 4),(uint)*(byte *)(param_2 + 5),(uint)*(byte *)(param_2 + 6));
  if (*(char *)(param_2 + 7) != '\0') {
    fprintf(param_1,".%d");
  }
  (*(code *)PTR_fputc_0003d0f4)(10,param_1);
  return;
}



/* ===== FUN_000143cc @ 000143cc size=228 ===== */

void FUN_000143cc(int param_1,short *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  fprintf(stderr,"Invalid system activity file: %s\n");
  if ((param_4 == 0x4c) && (*param_2 == -0x692b || *param_2 == -0x2a6a)) {
    FUN_0001436c(stderr,param_2);
    uVar1 = (uint)(ushort)param_2[1];
    if (*param_2 != -0x2a6a) {
      uVar1 = (uVar1 & 0xff) << 8 | (uint)((ushort)param_2[1] >> 8);
    }
    fprintf(stderr,"Current sysstat version cannot read the format of this file (%#x)\n",uVar1);
    if (0x2170 < uVar1) {
      fwrite("Try to convert it to current format. Enter:\n\n",1,0x2d,stderr);
      fprintf(stderr,"sadf -c %s > %s.new\n\n",param_3,param_3);
      fprintf(stderr,"You should then be able to read the new file created (%s.new)\n",param_3);
    }
  }
  close(param_1);
                    /* WARNING: Subroutine does not return */
  exit(3);
}



/* ===== FUN_000144b0 @ 000144b0 size=44 ===== */

void FUN_000144b0(void)

{
  fwrite("Requested activities not available\n",1,0x23,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014594 @ 00014594 size=116 ===== */

int FUN_00014594(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  void *__buf;
  
  if ((int)param_3 < 1) {
    return 0;
  }
  iVar3 = 0;
  __buf = param_2;
  do {
    while( true ) {
      sVar1 = write(param_1,__buf,param_3);
      if (-1 < sVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return sVar1;
      }
    }
    param_3 = param_3 - sVar1;
    if (sVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + sVar1;
    __buf = (void *)((int)param_2 + iVar3);
  } while (0 < (int)param_3);
  return iVar3;
}



/* ===== FUN_00014648 @ 00014648 size=80 ===== */

void FUN_00014648(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  do {
    piVar1 = piVar1 + 1;
    iVar3 = *piVar1;
    uVar2 = *(uint *)(iVar3 + 0x70);
    if ((0 < (int)uVar2) && (*(uint *)(iVar3 + 0x88) < uVar2)) {
      FUN_00013f34(iVar3,uVar2,param_3,param_4);
    }
  } while (piVar1 != (int *)(param_1 + 0xa8));
  return;
}



/* ===== FUN_00014698 @ 00014698 size=176 ===== */

void FUN_00014698(int param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + -4);
  do {
    piVar3 = piVar3 + 1;
    iVar1 = *piVar3;
    if (0 < *(int *)(iVar1 + 0x88)) {
      iVar4 = 0;
      do {
        iVar2 = iVar4 + 0x26;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 * 4;
        __ptr = *(void **)(iVar1 + iVar2 + 4);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined4 *)(*piVar3 + iVar2 + 4) = 0;
          iVar1 = *piVar3;
        }
      } while (iVar4 != 3);
      *(undefined4 *)(iVar1 + 0x88) = 0;
    }
    if (0 < *(int *)(iVar1 + 0xb0)) {
      if (*(void **)(iVar1 + 0xa8) != (void *)0x0) {
        free(*(void **)(iVar1 + 0xa8));
        iVar1 = *piVar3;
        *(undefined4 *)(iVar1 + 0xa8) = 0;
      }
      if (*(void **)(iVar1 + 0xac) != (void *)0x0) {
        free(*(void **)(iVar1 + 0xac));
        iVar1 = *piVar3;
        *(undefined4 *)(iVar1 + 0xac) = 0;
      }
      *(undefined4 *)(iVar1 + 0xb0) = 0;
    }
  } while ((int *)(param_1 + 0xa8) != piVar3);
  return;
}



/* ===== FUN_00014748 @ 00014748 size=88 ===== */

void FUN_00014748(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *puVar5;
  
  uVar9 = *(uint *)(param_1 + 0xb0);
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar2 = param_2;
  uVar7 = uVar9;
  if (uVar9 != 0) {
    do {
      uVar2 = uVar7 << 1;
      uVar7 = uVar2;
    } while (uVar2 < param_2);
    if (uVar2 <= uVar9) {
      return;
    }
  }
  if ((param_3 & 0x1000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(int *)(param_1 + 0x8c) == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00027c38(*(int *)(param_1 + 0x8c),uVar2,*(undefined4 *)(param_1 + 0x74));
  iVar3 = *(int *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x8c);
  uVar9 = uVar2 * iVar6 * iVar3;
  if (uVar9 * 8 != 0) {
    pvVar1 = realloc(*(void **)(param_1 + 0xa8),uVar9 * 8);
    if (pvVar1 == (void *)0x0) {
      perror("realloc");
      pvVar1 = *(void **)(param_1 + 0xa8);
joined_r0x00013f08:
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
    iVar3 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(param_1 + 0x8c);
    uVar9 = uVar2 * iVar6 * iVar3;
    __n = uVar9 * 8;
    if (*(int *)(param_1 + 0xa8) == 0) {
      memset(pvVar1,0,__n);
      iVar3 = *(int *)(param_1 + 0x74);
      iVar6 = *(int *)(param_1 + 0x8c);
      uVar9 = uVar2 * iVar6 * iVar3;
      __n = uVar9 * 8;
    }
    *(void **)(param_1 + 0xa8) = pvVar1;
    if (__n != 0) {
      pvVar1 = realloc(*(void **)(param_1 + 0xac),__n);
      if (pvVar1 == (void *)0x0) {
        perror("realloc");
        pvVar1 = *(void **)(param_1 + 0xac);
        goto joined_r0x00013f08;
      }
      iVar3 = *(int *)(param_1 + 0x74);
      iVar6 = *(int *)(param_1 + 0x8c);
      uVar9 = uVar2 * iVar6 * iVar3;
      if (*(int *)(param_1 + 0xac) == 0) {
        memset(pvVar1,0,uVar9 * 8);
        iVar3 = *(int *)(param_1 + 0x74);
        iVar6 = *(int *)(param_1 + 0x8c);
        uVar9 = uVar2 * iVar3 * iVar6;
      }
      *(void **)(param_1 + 0xac) = pvVar1;
    }
  }
  uVar7 = iVar6 * *(int *)(param_1 + 0xb0) * iVar3;
  if (uVar7 < uVar9) {
    iVar3 = uVar7 * 8;
    iVar6 = *(int *)(param_1 + 0xa8);
    puVar4 = (undefined4 *)(iVar6 + iVar3);
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0xac) + iVar3);
    do {
      puVar5 = puVar4 + 2;
      *puVar4 = 0xffffffff;
      puVar4[1] = 0x7fefffff;
      *puVar8 = 0xffffffff;
      puVar8[1] = 0xffefffff;
      puVar4 = puVar5;
      puVar8 = puVar8 + 2;
    } while (puVar5 != (undefined4 *)(iVar6 + uVar9 * 8));
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00013e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* ===== FUN_000147a0 @ 000147a0 size=84 ===== */

void FUN_000147a0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar1 = param_2;
  uVar2 = uVar3;
  if (uVar3 != 0) {
    do {
      uVar1 = uVar2 << 1;
      uVar2 = uVar1;
    } while (uVar1 < param_2);
    if (uVar1 <= uVar3) {
      return;
    }
  }
  FUN_00013f34(param_1,uVar1,param_3,param_4);
  return;
}



/* ===== FUN_000147f4 @ 000147f4 size=348 ===== */

bool FUN_000147f4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  iVar2 = DAT_0003f2f8;
  if (param_5 != 0 || DAT_0003f2f8 == 0 && DAT_0003f2fc == 0) {
    iVar2 = param_1;
  }
  dVar8 = (double)FUN_0002a458(param_3 - iVar2,0);
  dVar8 = dVar8 / DAT_00014950;
  uVar3 = (uint)(0.0 < dVar8) * (int)(longlong)dVar8;
  dVar7 = (double)VectorUnsignedToFloat(uVar3 * 10,(byte)(in_fpscr >> 0x16) & 3);
  dVar8 = -dVar7 + dVar8 * 10.0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar8 < 5.0) << 0x1f;
  uVar6 = uVar1 | (uint)NAN(dVar8) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1)) {
    uVar3 = uVar3 + 1;
  }
  DAT_0003f2f8 = param_3;
  DAT_0003f2fc = param_4;
  if (param_6 != 1) {
    dVar8 = (double)FUN_0002a458(param_3 - param_1,0);
    dVar8 = dVar8 / DAT_00014950;
    iVar2 = (uint)(0.0 < dVar8) * (int)(longlong)dVar8;
    dVar7 = (double)VectorUnsignedToFloat(iVar2 * 10,(byte)(uVar6 >> 0x16) & 3);
    if (5.0 <= -dVar7 + dVar8 * 10.0) {
      iVar2 = iVar2 + 1;
    }
    iVar4 = (uVar3 & 1) + (uVar3 >> 1) + iVar2;
    iVar5 = iVar2 - (uVar3 >> 1);
    iVar2 = FUN_0002a044(iVar2,param_6);
    iVar2 = param_6 * iVar2;
    if (iVar4 <= iVar2 || iVar2 < iVar5) {
      return param_6 + iVar2 < iVar4 && iVar5 <= param_6 + iVar2;
    }
  }
  return true;
}



/* ===== FUN_00014958 @ 00014958 size=204 ===== */

bool FUN_00014958(char *param_1,int param_2)

{
  bool bVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[5] = '\0';
  param_1[2] = '\0';
  sVar2 = strspn(param_1,"0123456789");
  if (sVar2 == 2) {
    sVar2 = strspn(param_1 + 3,"0123456789");
    if (sVar2 == 2) {
      sVar2 = strspn(param_1 + 6,"0123456789");
      if (sVar2 == 2) {
        uVar3 = atoi(param_1 + 6);
        *(uint *)(param_2 + 8) = uVar3;
        uVar4 = atoi(param_1 + 3);
        *(uint *)(param_2 + 0xc) = uVar4;
        uVar5 = atoi(param_1);
        if (uVar4 < 0x3c) {
          uVar4 = uVar3;
        }
        *(uint *)(param_2 + 0x10) = uVar5;
        bVar1 = 0x17 < uVar5 || 0x3b < uVar4;
        if (bVar1) {
          *(undefined4 *)(param_2 + 0x34) = 0;
        }
        else {
          *(undefined4 *)(param_2 + 0x34) = 1;
        }
        return bVar1;
      }
    }
  }
  return true;
}



/* ===== FUN_00014a24 @ 00014a24 size=48 ===== */

bool FUN_00014a24(char *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = atol(param_1);
  *param_2 = lVar1;
  param_2[1] = lVar1 >> 0x1f;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 2;
  }
  param_2[0xd] = lVar2;
  return lVar1 == 0;
}



/* ===== FUN_00014a54 @ 00014a54 size=108 ===== */

int FUN_00014a54(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0xd] == 1) {
    iVar2 = param_1[4];
    iVar1 = param_2[4];
    if (param_3 != 0) {
      iVar2 = iVar2 + 0x18;
    }
    if (iVar1 == iVar2) {
      iVar2 = param_1[3];
      iVar1 = param_2[3];
      if (iVar2 == iVar1) {
        return param_1[2] - param_2[2];
      }
    }
    return iVar2 - iVar1;
  }
  if (param_2[0xd] == 2) {
    return *param_1 - *param_2;
  }
  return 0;
}



/* ===== FUN_00014ac0 @ 00014ac0 size=372 ===== */

uint FUN_00014ac0(int param_1,int *param_2,long *param_3,char *param_4)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  char *__s;
  int iVar4;
  char acStack_2c [5];
  undefined1 local_27;
  undefined1 local_24;
  undefined1 local_22;
  
  iVar4 = *param_2;
  *param_2 = iVar4 + 1;
  __s = *(char **)(param_1 + (iVar4 + 1) * 4);
  if ((__s != (char *)0x0) && (*__s != '-')) {
    sVar1 = strlen(__s);
    if (sVar1 == 8) {
      if ((__s[2] == ':') && (__s[5] == ':')) {
        *param_2 = iVar4 + 2;
        strncpy(acStack_2c,__s,8);
        goto LAB_00014b2c;
      }
    }
    else if (sVar1 == 10) {
      sVar1 = strspn(__s,"0123456789");
      if (sVar1 == 10) {
        *param_2 = iVar4 + 2;
        strncpy(acStack_2c,__s,10);
        local_22 = 0;
        lVar3 = atol(acStack_2c);
        *param_3 = lVar3;
        param_3[1] = lVar3 >> 0x1f;
        if (lVar3 == 0) {
          param_3[0xd] = 0;
        }
        else {
          param_3[0xd] = 2;
        }
        return (uint)(lVar3 == 0);
      }
    }
    else if ((sVar1 == 5) && (__s[2] == ':')) {
      *param_2 = iVar4 + 2;
      strncpy(acStack_2c,__s,5);
      local_27 = 0;
      sVar1 = strlen(acStack_2c);
      *(undefined4 *)(acStack_2c + sVar1) = DAT_0002c194;
      goto LAB_00014b2c;
    }
  }
  strncpy(acStack_2c,param_4,8);
LAB_00014b2c:
  local_24 = 0;
  uVar2 = FUN_00014958(acStack_2c,param_3);
  return uVar2;
}



/* ===== FUN_00014c34 @ 00014c34 size=28 ===== */

void FUN_00014c34(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00028190(*param_2,param_2[1],*param_1,param_1[1]);
  *param_3 = uVar1;
  return;
}



/* ===== FUN_00014c50 @ 00014c50 size=128 ===== */

void FUN_00014c50(uint param_1,undefined4 param_2,tm *param_3,time_t *param_4)

{
  byte bVar1;
  int iVar2;
  time_t local_1c [2];
  
  local_1c[0] = *param_4;
  if ((param_1 & 0x20) != 0) {
    FUN_000277d0(param_3,0);
    iVar2 = param_4[6];
    param_3->tm_mday = (uint)*(byte *)(param_4 + 0x10);
    bVar1 = *(byte *)((int)param_4 + 0x41);
    param_3->tm_year = iVar2;
    param_3->tm_sec = 0;
    param_3->tm_mon = (uint)bVar1;
    param_3->tm_min = 0;
    param_3->tm_hour = 0;
    mktime(param_3);
    return;
  }
  localtime_r(local_1c,param_3);
  return;
}



/* ===== FUN_00014cd0 @ 00014cd0 size=88 ===== */

void FUN_00014cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  FUN_00014c50();
  uVar1 = *(uint *)(param_4 + 0x10);
  if (uVar1 < 2) {
    uVar1 = 2;
  }
  FUN_00027ee0(param_3,param_4 + 0x43,param_4 + 0xc5,param_4 + 0x84,param_4 + 0x106,uVar1 - 1,0);
  return;
}



/* ===== FUN_00015184 @ 00015184 size=160 ===== */

void FUN_00015184(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = param_1;
  while( true ) {
    while( true ) {
      piVar5 = piVar4 + 1;
      iVar6 = *piVar4;
      piVar3 = *(int **)(iVar6 + 0xb8);
      if (((piVar3 != (int *)0x0) && (*piVar3 == 0)) && (iVar1 = piVar3[1] + 1 >> 3, iVar1 != -1))
      break;
      piVar4 = piVar5;
      if (param_1 + 0x2b == piVar5) {
        return;
      }
    }
    pvVar2 = calloc(iVar1 + 1,1);
    if (pvVar2 == (void *)0x0) break;
    **(undefined4 **)(iVar6 + 0xb8) = pvVar2;
    piVar4 = piVar5;
    if (param_1 + 0x2b == piVar5) {
      return;
    }
  }
  perror("realloc");
  if ((void *)**(undefined4 **)(*piVar4 + 0xb8) != (void *)0x0) {
    free((void *)**(undefined4 **)(*piVar4 + 0xb8));
  }
                    /* WARNING: Subroutine does not return */
  exit(4);
}



/* ===== FUN_00015224 @ 00015224 size=72 ===== */

void FUN_00015224(int param_1)

{
  void *__ptr;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -4);
  do {
    piVar1 = piVar1 + 1;
    if ((*(undefined4 **)(*piVar1 + 0xb8) != (undefined4 *)0x0) &&
       (__ptr = (void *)**(undefined4 **)(*piVar1 + 0xb8), __ptr != (void *)0x0)) {
      free(__ptr);
      **(undefined4 **)(*piVar1 + 0xb8) = 0;
    }
  } while (piVar1 != (int *)(param_1 + 0xa8));
  return;
}



/* ===== FUN_00015290 @ 00015290 size=128 ===== */

void FUN_00015290(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_00014050(param_1,1);
  pbVar1 = DAT_0003f1a4;
  piVar4 = (int *)(param_1 + -4);
  iVar5 = 0;
  do {
    piVar4 = piVar4 + 1;
    uVar3 = *(uint *)(*piVar4 + 4);
    if ((uVar3 & 2) != 0) {
      iVar5 = iVar5 + 1;
    }
  } while (piVar4 != (int *)(param_1 + 0xa8));
  if (iVar5 == 0) {
    uVar3 = *(uint *)(param_1 + iVar2 * 4);
    piVar4 = (int *)(*(uint *)(uVar3 + 4) | 2);
  }
  iVar2 = DAT_0003f1a8 + 1;
  if (iVar5 == 0) {
    *(int **)(uVar3 + 4) = piVar4;
  }
  iVar2 = FUN_000281c0(pbVar1,(iVar2 >> 3) + 1);
  if (iVar2 == 0) {
    *DAT_0003f1a4 = *DAT_0003f1a4 | 1;
  }
  return;
}



/* ===== FUN_00015310 @ 00015310 size=200 ===== */

void FUN_00015310(int *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar2 = 0;
    puVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
      puVar1[1] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18;
      *puVar1 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18;
      puVar1 = puVar1 + 2;
    } while (iVar2 != iVar4);
    param_2 = param_2 + iVar2 * 2;
  }
  uVar5 = param_1[1];
  puVar1 = param_2;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      if (param_3 == 0) {
        uVar5 = *puVar1;
        *puVar1 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18;
        uVar5 = param_1[1];
        puVar1 = puVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        uVar7 = param_2[1];
        param_2[1] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                     uVar3 >> 0x18;
        *param_2 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18;
        param_2 = param_2 + 2;
      }
    } while (uVar6 < uVar5);
  }
  if (param_3 != 0) {
    puVar1 = param_2;
  }
  if (param_1[2] != 0) {
    uVar5 = 0;
    do {
      uVar6 = *puVar1;
      uVar5 = uVar5 + 1;
      *puVar1 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18;
      puVar1 = puVar1 + 1;
    } while (uVar5 < (uint)param_1[2]);
    return;
  }
  return;
}



/* ===== FUN_000153d8 @ 000153d8 size=544 ===== */

undefined4
FUN_000153d8(int *param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2[1];
  uVar6 = *param_2;
  if (param_4 < (param_2[2] + (uVar6 + uVar5) * 2) * 4) {
    return 0xffffffff;
  }
  iVar1 = *param_1;
  iVar4 = iVar1 - uVar6;
  if (iVar4 != 0) {
    uVar5 = uVar6 * 8;
    if (uVar5 < uVar6) {
      return 0xffffffff;
    }
    uVar6 = param_4 + uVar6 * -8;
    uVar3 = param_5 + iVar1 * -8;
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    if (param_6 <= uVar5) {
      return 0xffffffff;
    }
    if (param_6 < iVar1 * 8 + uVar6) {
      return 0xffffffff;
    }
    if (param_6 < uVar5 + uVar6) {
      return 0xffffffff;
    }
    memmove((void *)(param_3 + iVar1 * 8),(void *)(param_3 + uVar5),uVar6);
    if (0 < iVar4) {
      memset((void *)(param_3 + *param_2 * 8),0,iVar4 * 8);
    }
    uVar5 = param_2[1];
  }
  iVar1 = param_1[1] - uVar5;
  if (iVar1 != 0) {
    uVar6 = (*param_1 + uVar5) * 8;
    if (uVar6 < uVar5) {
      return 0xffffffff;
    }
    iVar2 = param_1[1] + *param_1;
    iVar4 = iVar2 * 8;
    uVar3 = param_5 + iVar2 * -8;
    uVar5 = param_4 + (uVar5 + *param_2) * -8;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
    if (param_6 <= uVar6) {
      return 0xffffffff;
    }
    if (param_6 < uVar5 + iVar4) {
      return 0xffffffff;
    }
    if (param_6 < uVar6 + uVar5) {
      return 0xffffffff;
    }
    memmove((void *)(param_3 + iVar4),(void *)(param_3 + uVar6),uVar5);
    if (0 < iVar1) {
      memset((void *)(param_3 + (*param_1 + param_2[1]) * 8),0,iVar1 * 8);
      iVar1 = param_1[2];
      uVar5 = param_2[2];
      iVar4 = iVar1 - uVar5;
      goto joined_r0x00015508;
    }
  }
  iVar1 = param_1[2];
  uVar5 = param_2[2];
  iVar4 = iVar1 - uVar5;
joined_r0x00015508:
  if (iVar4 == 0) {
    return 0;
  }
  iVar2 = (param_1[1] + *param_1) * 2;
  uVar6 = (uVar5 + iVar2) * 4;
  if (uVar5 <= uVar6) {
    uVar3 = param_5 + iVar1 * -4 + (param_1[1] + *param_1) * -8;
    uVar5 = param_4 + uVar5 * -4 + (*param_2 + param_2[1]) * -8;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
    if (((uVar6 < param_6) && (iVar1 = (iVar1 + iVar2) * 4, iVar1 + uVar5 <= param_6)) &&
       (uVar6 + uVar5 <= param_6)) {
      memmove((void *)(param_3 + iVar1),(void *)(param_3 + uVar6),uVar5);
      if (iVar4 < 1) {
        return 0;
      }
      memset((void *)(param_3 + (param_2[2] + (*param_1 + param_1[1]) * 2) * 4),0,iVar4 << 2);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000155f8 @ 000155f8 size=188 ===== */

undefined4 FUN_000155f8(int param_1,void *param_2,size_t param_3,int param_4,int param_5)

{
  FILE *__stream;
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  
  uVar1 = read(param_1,param_2,param_3);
  __stream = stderr;
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,"Error while reading system activity file: %s\n",pcVar3);
    close(param_1);
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
  if (param_4 == 0 && uVar1 == 0) {
    return 1;
  }
  if (param_3 <= uVar1) {
    return 0;
  }
  fwrite("End of system activity file unexpected\n",1,0x27,stderr);
  if (param_5 == 1) {
    return 2;
  }
  close(param_1);
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_000156b4 @ 000156b4 size=220 ===== */

undefined4 FUN_000156b4(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  while( true ) {
    FUN_000155f8(param_1,&local_38,0x18,1,0);
    if (param_2 != 0) {
      FUN_00015310(&DAT_0003f1cc,&local_38,param_3);
    }
    if (local_34 < (uint)((local_24 + (local_2c + local_28) * 2) * 4)) {
      return 0xffffffff;
    }
    bVar4 = 0x1fff < local_38;
    bVar3 = local_38 == 0x2000;
    if (local_38 < 0x2001) {
      bVar4 = 0x3ff < local_34;
      bVar3 = local_34 == 0x400;
    }
    if (bVar4 && !bVar3) break;
    uVar2 = 0;
    if (local_38 != 0) {
      do {
        uVar2 = uVar2 + 1;
        uVar1 = lseek(param_1,local_34,1);
        if (uVar1 < local_34) {
          return 0xffffffff;
        }
      } while (uVar2 < local_38);
    }
    if (local_30 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00015790 @ 00015790 size=540 ===== */

int FUN_00015790(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,uint param_9,
                undefined4 param_10,int *param_11)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  char acStack_a8 [132];
  
  uVar1 = DAT_000159b8;
  while( true ) {
    iVar3 = FUN_000155f8(param_1,param_2,*(undefined4 *)(param_4 + 0x38),0,param_7);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_000153d8(uVar1,param_4 + 0x28,param_2,*(undefined4 *)(param_4 + 0x38),0x18,param_8);
    if (iVar3 < 0) break;
    uVar7 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_3 = *param_2;
    param_3[1] = uVar7;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    uVar4 = param_2[5];
    param_3[4] = param_2[4];
    param_3[5] = uVar4;
    if (param_6 != 0) {
      FUN_00015310(uVar1,param_3,param_5);
    }
    uVar2 = (uint)*(byte *)(param_3 + 5);
    if (((param_9 & 0x80000000) != 0) && (*param_11 == 8)) {
      sprintf(acStack_a8,
              "# uptime_cs; %llu; ust_time; %llu; extra_next; %u; record_type; %d; HH:MM:SS; %02d:%02d:%02d\n"
              ,*param_3,param_3[1],*(undefined8 *)(param_3 + 2),param_3[4],uVar2,
              (uint)*(byte *)((int)param_3 + 0x15),(uint)*(byte *)((int)param_3 + 0x16),
              (uint)*(byte *)((int)param_3 + 0x17));
      FUN_00029280(3,&DAT_0002c6b4,acStack_a8);
      uVar2 = (uint)*(byte *)(param_3 + 5);
    }
    if ((((0xe < uVar2 - 1) || (0x17 < *(byte *)((int)param_3 + 0x15))) ||
        (0x3b < *(byte *)((int)param_3 + 0x16))) || (0x3c < *(byte *)((int)param_3 + 0x17))) break;
    uVar6 = param_3[3];
    bVar8 = DAT_000159b4 <= uVar6;
    if (uVar6 == DAT_000159b4) {
      bVar8 = DAT_000159b0 <= (uint)param_3[2];
    }
    if (!bVar8 || uVar6 == DAT_000159b4 && param_3[2] == DAT_000159b0) break;
    if (((uVar2 - 2 & 0xfd) != 0) && (param_3[4] != 0)) {
      iVar3 = FUN_000156b4(param_1,param_6,param_5);
      if (iVar3 < 0) break;
      uVar2 = (uint)*(byte *)(param_3 + 5);
    }
    if (10 < uVar2 - 5) {
      return 0;
    }
  }
  fwrite("Invalid data read\n",1,0x12,stderr);
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_000159bc @ 000159bc size=200 ===== */

void FUN_000159bc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = (undefined4 *)(param_5 * 0x18 + param_3);
  piVar5 = (int *)(param_2 + -4);
  iVar8 = param_3 + param_4 * 0x18;
  uVar2 = puVar3[1];
  uVar7 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(param_3 + param_4 * 0x18) = *puVar3;
  *(undefined4 *)(iVar8 + 4) = uVar2;
  *(undefined4 *)(iVar8 + 8) = uVar7;
  *(undefined4 *)(iVar8 + 0xc) = uVar6;
  uVar2 = puVar3[5];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[4];
  *(undefined4 *)(iVar8 + 0x14) = uVar2;
  iVar8 = param_4;
  do {
    piVar5 = piVar5 + 1;
    if (*piVar5 != 0) {
      iVar1 = FUN_00014050(param_1,*piVar5,1,puVar3,iVar8);
      iVar4 = *(int *)(param_1 + iVar1 * 4);
      memcpy(*(void **)(iVar4 + (param_4 + 0x26) * 4 + 4),*(void **)(iVar4 + param_5 * 4 + 0x9c),
             *(int *)(iVar4 + 0x74) * *(int *)(iVar4 + 0x88) * *(int *)(iVar4 + 0x94));
      iVar1 = *(int *)(param_1 + iVar1 * 4);
      puVar3 = (undefined4 *)(iVar1 + param_4 * 4);
      puVar3[0x1f] = *(undefined4 *)(iVar1 + param_5 * 4 + 0x7c);
    }
  } while (piVar5 != (int *)(param_2 + 0xa8));
  return;
}



/* ===== FUN_00015a84 @ 00015a84 size=168 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00015a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  int local_28 [4];
  
  local_28[3] = 1;
  local_28[1] = 0;
  local_28[2] = 0;
  FUN_000155f8(param_1,local_28,4,1,0);
  if (param_4 != 0) {
    FUN_00015310(local_28 + 1,local_28,param_5);
  }
  if (((param_6 == 0) || (local_28[0] != 0)) && (local_28[0] <= param_7 && -1 < local_28[0])) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000143cc(param_1,param_3,param_2,0);
}



/* ===== FUN_00015b2c @ 00015b2c size=880 ===== */

undefined4
FUN_00015b2c(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
            undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  __off_t _Var3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_30;
  
  if (0 < param_4) {
    iVar7 = 0;
    do {
      if (param_5[4] == 0) {
        iVar6 = param_5[2];
      }
      else {
        iVar6 = FUN_00015a84(param_3,param_8,param_9,param_6,param_7,0,0x10000000);
      }
      if (0x10000000 < iVar6) {
LAB_00015e80:
                    /* WARNING: Subroutine does not return */
        FUN_000143cc(param_3,param_9,param_8,0);
      }
      iVar1 = FUN_00014050(param_1,*param_5,0);
      if (iVar1 < 0) {
LAB_00015bac:
        if ((iVar6 != 0) &&
           (iVar6 = param_5[3] * param_5[5] * iVar6, _Var3 = lseek(param_3,iVar6,1), _Var3 < iVar6))
        {
          close(param_3);
          perror("lseek");
          if (param_10 == 1) {
            return 2;
          }
                    /* WARNING: Subroutine does not return */
          exit(2);
        }
      }
      else {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        piVar8 = (int *)(param_1 + iVar1 * 4);
        if (*(int *)(iVar2 + 8) != param_5[1]) goto LAB_00015bac;
        if (*(int *)(iVar2 + 0x78) < iVar6) goto LAB_00015e80;
        iVar5 = *(int *)(iVar2 + 0x88);
        *(int *)(iVar2 + (param_2 + 0x1e) * 4 + 4) = iVar6;
        if (iVar5 < iVar6) {
          FUN_000147a0(iVar2,iVar6,param_11,param_12);
          iVar2 = *(int *)(param_1 + iVar1 * 4);
        }
        if ((*(uint *)(iVar2 + 4) & 8) != 0) {
          memset(*(void **)(iVar2 + param_2 * 4 + 0x9c),0,
                 *(int *)(iVar2 + 0x74) * *(int *)(iVar2 + 0x70) * *(int *)(iVar2 + 0x94));
        }
        if (0 < iVar6) {
          iVar2 = *(int *)(param_1 + iVar1 * 4);
          iVar9 = *(int *)(iVar2 + 0x74);
          iVar5 = *(int *)(iVar2 + 0x90);
          if (((iVar6 == 1) && (iVar9 < 2)) || (iVar4 = *(int *)(iVar2 + 0x94), iVar4 <= iVar5)) {
            iVar2 = FUN_000155f8(param_3,*(undefined4 *)(iVar2 + (param_2 + 0x26) * 4 + 4),
                                 iVar6 * iVar9 * iVar5,1,param_10);
            if (0 < iVar2) {
              return 2;
            }
            iVar2 = *(int *)(param_1 + iVar1 * 4);
            iVar1 = *(int *)(iVar2 + 0x74) * iVar6;
          }
          else {
            if (iVar9 * iVar6 < 1) goto LAB_00015c78;
            iVar9 = 0;
            while( true ) {
              iVar1 = FUN_000155f8(param_3,iVar4 * iVar9 +
                                           *(int *)(iVar2 + (param_2 + 0x26) * 4 + 4),iVar5,1,
                                   param_10);
              if (0 < iVar1) {
                return 2;
              }
              iVar2 = *piVar8;
              iVar9 = iVar9 + 1;
              iVar1 = *(int *)(iVar2 + 0x74) * iVar6;
              if (iVar1 - iVar9 == 0 || iVar1 < iVar9) break;
              iVar4 = *(int *)(iVar2 + 0x94);
              iVar5 = *(int *)(iVar2 + 0x90);
            }
          }
          local_30 = param_2 + 0x26;
          if (param_6 != 0) {
            if (iVar1 < 1) goto LAB_00015c78;
            iVar5 = 0;
            do {
              FUN_00015310(iVar2 + 0x60,
                           *(int *)(iVar2 + 0x94) * iVar5 + *(int *)(iVar2 + local_30 * 4 + 4),
                           param_7);
              iVar2 = *piVar8;
              iVar5 = iVar5 + 1;
              iVar1 = *(int *)(iVar2 + 0x74) * iVar6;
            } while (iVar1 - iVar5 != 0 && iVar5 <= iVar1);
          }
          if (0 < iVar1) {
            iVar1 = 0;
            do {
              iVar5 = *(int *)(iVar2 + 0x94);
              iVar2 = FUN_000153d8(iVar2 + 0x54,iVar2 + 0x60,
                                   iVar1 * iVar5 + *(int *)(iVar2 + local_30 * 4 + 4),
                                   *(undefined4 *)(iVar2 + 0x90),iVar5,iVar5);
              if (iVar2 < 0) {
                return 2;
              }
              iVar2 = *piVar8;
              iVar1 = iVar1 + 1;
              iVar5 = *(int *)(iVar2 + 0x74) * iVar6;
            } while (iVar5 - iVar1 != 0 && iVar1 <= iVar5);
          }
        }
      }
LAB_00015c78:
      iVar7 = iVar7 + 1;
      param_5 = param_5 + 9;
    } while (param_4 != iVar7);
  }
  return 0;
}



/* ===== FUN_00015e9c @ 00015e9c size=536 ===== */

int FUN_00015e9c(int *param_1,char *param_2,short *param_3,int param_4,uint *param_5,int param_6)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  FILE *__stream;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 5;
  iVar4 = open(param_2,0);
  *param_1 = iVar4;
  if (iVar4 < 0) {
    piVar6 = __errno_location();
    __stream = stderr;
    iVar4 = *piVar6;
    pcVar7 = strerror(iVar4);
    fprintf(__stream,"Cannot open %s: %s\n",param_2,pcVar7);
    if ((iVar4 == 2) && (DAT_0003f2f0 != 0)) {
      fwrite("Please check if data collecting is enabled\n",1,0x2b,stderr);
    }
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
  sVar5 = read(iVar4,param_3,0x4c);
  if (sVar5 == 0x4c) {
    sVar2 = *param_3;
    if ((sVar2 == -0x692b || sVar2 == -0x2a6a) &&
       (uVar3 = param_3[1], param_4 != 0 || (uVar3 == 0x2175 || uVar3 == 0x7521))) {
      *param_5 = (uint)(sVar2 != -0x2a6a);
      if (sVar2 != -0x2a6a) {
        if (param_6 != 0) {
          *param_3 = -0x2a6a;
          param_3[1] = uVar3 << 8 | uVar3 >> 8;
        }
        FUN_00015310(&local_24,param_3 + 4,0);
      }
      bVar1 = *(byte *)(param_3 + 2);
      if (bVar1 < 0xb) {
        if (((bVar1 != 10) || (*(byte *)((int)param_3 + 5) < 3)) ||
           (*(int *)(param_3 + 4) - 1U < 0x2000)) goto LAB_00015fc4;
      }
      else if ((*(uint *)(param_3 + 4) - 1 < 0x2000) &&
              (((bVar1 == 0xb && (*(byte *)((int)param_3 + 5) < 7)) ||
               ((uint)((*(int *)(param_3 + 0xc) +
                       (*(int *)(param_3 + 8) + *(int *)(param_3 + 10)) * 2) * 4) <=
                *(uint *)(param_3 + 4))))) {
LAB_00015fc4:
        return -(uint)(param_3[1] != 0x2175 && param_3[1] != 0x7521);
      }
                    /* WARNING: Subroutine does not return */
      FUN_000143cc(*param_1,param_3,param_2,0x4c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000143cc(*param_1,param_3,param_2,sVar5);
}



/* ===== FUN_000160b4 @ 000160b4 size=1540 ===== */

void FUN_000160b4(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,int param_7,void *param_8,int *param_9,int param_10,
                 int *param_11,uint *param_12)

{
  int iVar1;
  undefined4 *__src;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  int *piVar22;
  undefined4 *puVar23;
  int local_34;
  
  param_5 = param_5 & 0x100;
  iVar1 = FUN_00015e9c(param_1,param_2,param_7,param_5 != 0,param_11,1);
  if (iVar1 < 0) {
    return;
  }
  uVar17 = *(uint *)(param_7 + 8);
  if (0x1fff < uVar17 - 1) goto LAB_00016610;
  sVar8 = uVar17;
  if (uVar17 < 0x150) {
    sVar8 = 0x150;
  }
  __src = calloc(sVar8,1);
  if (__src == (undefined4 *)0x0) {
LAB_0001664c:
    perror("realloc");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  FUN_000155f8(*param_1,__src,uVar17,1,0);
  iVar1 = FUN_000153d8(DAT_000166b8,param_7 + 0x10,__src,*(undefined4 *)(param_7 + 8),0x150,sVar8);
  if (iVar1 < 0) {
LAB_00016628:
    free(__src);
    goto LAB_00016610;
  }
  memcpy(param_8,__src,0x150);
  free(__src);
  *param_12 = (uint)(*(char *)((int)param_8 + 0x42) == '\b');
  if (*param_11 != 0) {
    FUN_00015310(DAT_000166b8,param_8);
  }
  uVar17 = *(uint *)((int)param_8 + 0x14);
  if ((((0x100 < uVar17) || (sVar8 = *(uint *)((int)param_8 + 0x34), 0x400 < sVar8)) ||
      (0x200 < *(uint *)((int)param_8 + 0x38))) ||
     ((sVar8 < (uint)((*(int *)((int)param_8 + 0x24) +
                      (*(int *)((int)param_8 + 0x1c) + *(int *)((int)param_8 + 0x20)) * 2) * 4) ||
      (*(uint *)((int)param_8 + 0x38) <
       (uint)((*(int *)((int)param_8 + 0x30) +
              (*(int *)((int)param_8 + 0x28) + *(int *)((int)param_8 + 0x2c)) * 2) * 4)))))
  goto LAB_00016610;
  if (sVar8 < 0x24) {
    sVar8 = 0x24;
  }
  __src = calloc(sVar8,1);
  if (__src == (undefined4 *)0x0) goto LAB_0001664c;
  puVar10 = (undefined4 *)*param_9;
  if (uVar17 * 0x24 != 0) {
    puVar10 = realloc(puVar10,uVar17 * 0x24);
    if (puVar10 == (undefined4 *)0x0) {
      perror("realloc");
      if ((void *)*param_9 != (void *)0x0) {
        free((void *)*param_9);
      }
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
    uVar17 = *(uint *)((int)param_8 + 0x14);
    if (*param_9 == 0) {
      memset(puVar10,0,uVar17 * 0x24);
      uVar17 = *(uint *)((int)param_8 + 0x14);
    }
    *param_9 = (int)puVar10;
  }
  if (uVar17 == 0) {
    local_34 = 0;
LAB_00016490:
    puVar10 = (undefined4 *)(param_10 + local_34 * 4);
    do {
      local_34 = local_34 + 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (local_34 != 0x2b);
  }
  else {
    local_34 = 0;
    uVar17 = 0;
    do {
      FUN_000155f8(*param_1,__src,*(undefined4 *)((int)param_8 + 0x34),1,0);
      iVar1 = FUN_000153d8(DAT_000166bc,(int)param_8 + 0x1c,__src,
                           *(undefined4 *)((int)param_8 + 0x34),0x24,sVar8);
      if (iVar1 < 0) goto LAB_00016628;
      puVar14 = __src;
      puVar19 = puVar10;
      do {
        puVar20 = puVar19 + 4;
        uVar2 = *puVar14;
        uVar4 = puVar14[1];
        uVar6 = puVar14[2];
        uVar9 = puVar14[3];
        puVar23 = puVar14 + 4;
        puVar14 = puVar14 + 4;
        *puVar19 = uVar2;
        puVar19[1] = uVar4;
        puVar19[2] = uVar6;
        puVar19[3] = uVar9;
        puVar19 = puVar20;
      } while (puVar23 != __src + 8);
      *puVar20 = *puVar14;
      if (*param_11 != 0) {
        FUN_00015310(DAT_000166bc,puVar10,*param_12);
      }
      if ((((int)puVar10[2] < 1) || (0xfff < puVar10[3] - 1 || 0x10000000 < (int)puVar10[2])) ||
         (0x3ff < puVar10[5] - 1)) goto LAB_00016628;
      iVar1 = FUN_00014050(param_3,*puVar10);
      if (-1 < iVar1) {
        iVar1 = *(int *)(param_3 + iVar1 * 4);
        iVar15 = puVar10[1];
        iVar21 = puVar10[2];
        if (*(int *)(iVar1 + 0x78) < iVar21) goto LAB_00016628;
        uVar5 = puVar10[6];
        uVar3 = puVar10[7];
        if (uVar5 < *(uint *)(iVar1 + 0x54)) {
LAB_00016578:
          if ((*(uint *)(iVar1 + 0x58) < uVar3) ||
             (uVar18 = puVar10[8], *(uint *)(iVar1 + 0x5c) < uVar18)) {
LAB_000163f4:
            if (iVar15 == *(int *)(iVar1 + 8) && param_5 == 0) goto LAB_00016628;
            uVar18 = puVar10[8];
          }
        }
        else if ((uVar3 < *(uint *)(iVar1 + 0x58)) ||
                (uVar18 = puVar10[8], uVar18 < *(uint *)(iVar1 + 0x5c))) {
          if (uVar5 <= *(uint *)(iVar1 + 0x54)) goto LAB_00016578;
          goto LAB_000163f4;
        }
        uVar12 = puVar10[5];
        if (uVar12 < (uVar18 + (uVar5 + uVar3) * 2) * 4) goto LAB_00016628;
        *(uint *)(iVar1 + 0x60) = uVar5;
        if (*(int *)(iVar1 + 0x94) < (int)uVar12) {
          *(uint *)(iVar1 + 0x94) = uVar12;
        }
        *(uint *)(iVar1 + 100) = uVar3;
        *(uint *)(iVar1 + 0x68) = uVar18;
        *(int *)(iVar1 + 0x70) = iVar21;
        uVar2 = puVar10[3];
        *(uint *)(iVar1 + 0x90) = uVar12;
        *(undefined4 *)(iVar1 + 0x74) = uVar2;
        if (iVar15 == *(int *)(iVar1 + 8) || param_5 != 0) {
          *(undefined4 *)(param_10 + local_34 * 4) = *puVar10;
          local_34 = local_34 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      puVar10 = puVar10 + 9;
    } while (uVar17 < *(uint *)((int)param_8 + 0x14));
    if (local_34 < 0x2b) goto LAB_00016490;
  }
  free(__src);
  piVar11 = (int *)(param_3 + -4);
  piVar22 = (int *)(param_3 + 0xa8);
  piVar13 = piVar11;
  do {
    while( true ) {
      piVar13 = piVar13 + 1;
      piVar16 = (int *)*piVar13;
      if ((piVar16[1] & 2U) != 0) break;
LAB_000164d0:
      if (piVar13 == piVar22) goto LAB_00016538;
    }
    piVar7 = (int *)*param_9;
    if (*(int *)((int)param_8 + 0x14) != 0) {
      if (*piVar7 != *piVar16) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
          if (*(int *)((int)param_8 + 0x14) == iVar1) goto LAB_00016528;
          piVar7 = piVar7 + 9;
        } while (*piVar7 != *piVar16);
      }
      goto LAB_000164d0;
    }
LAB_00016528:
    piVar16[1] = piVar16[1] & 0xfffffffd;
  } while (piVar13 != piVar22);
LAB_00016538:
  iVar1 = 0;
  do {
    piVar11 = piVar11 + 1;
    if ((*(uint *)(*piVar11 + 4) & 2) != 0) {
      iVar1 = iVar1 + 1;
    }
  } while (piVar22 != piVar11);
  if (param_5 == 0 && iVar1 == 0) {
    fprintf(stderr,"Requested activities not available in file %s\n",param_2);
    close(*param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((*(int *)((int)param_8 + 0x3c) == 0) ||
     (iVar1 = FUN_000156b4(*param_1,*param_11,*param_12), -1 < iVar1)) {
    return;
  }
LAB_00016610:
                    /* WARNING: Subroutine does not return */
  FUN_000143cc(*param_1,param_7,param_2,0);
}



/* ===== FUN_000166c0 @ 000166c0 size=60 ===== */

undefined4 * FUN_000166c0(undefined4 *param_1,char *param_2)

{
  int iVar1;
  
  while ((param_1 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*param_1,param_2), iVar1 != 0))) {
    param_1 = (undefined4 *)param_1[1];
  }
  return param_1;
}



/* ===== FUN_000166fc @ 000166fc size=232 ===== */

undefined4 FUN_000166fc(undefined4 *param_1,char *param_2,size_t param_3,int *param_4)

{
  size_t sVar1;
  int iVar2;
  char *__dest;
  undefined4 *puVar3;
  
  sVar1 = strnlen(param_2,param_3);
  if (param_3 != sVar1) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    while( true ) {
      puVar3 = (undefined4 *)*param_1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = malloc(8);
        if (puVar3 == (undefined4 *)0x0) {
          perror("realloc");
          if ((void *)*param_1 != (void *)0x0) {
            free((void *)*param_1);
          }
        }
        else {
          puVar3[1] = 0;
          *param_1 = puVar3;
          __dest = malloc(sVar1 + 1);
          *puVar3 = __dest;
          if (__dest != (char *)0x0) {
            strcpy(__dest,param_2);
            return 1;
          }
          perror("malloc");
        }
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) break;
      param_1 = puVar3 + 1;
      if (param_4 != (int *)0x0) {
        *param_4 = *param_4 + 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00016824 @ 00016824 size=1704 ===== */

undefined4 FUN_00016824(int param_1,int *param_2,int param_3,uint *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  
  iVar9 = *param_2;
  cVar11 = *(char *)(*(int *)(param_1 + iVar9 * 4) + 1);
  if (cVar11 != '\0') {
    iVar8 = 1;
    do {
      switch(cVar11) {
      case 'A':
        piVar7 = (int *)(param_3 + -4);
        do {
          piVar7 = piVar7 + 1;
          *(uint *)(*piVar7 + 4) = *(uint *)(*piVar7 + 4) | 2;
        } while ((int *)(param_3 + 0xa8) != piVar7);
        *param_4 = *param_4 | 0x10000000;
        param_4[1] = param_4[1];
        iVar9 = FUN_00014050(param_3,7,1);
        iVar9 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar9 + 0x98) = *(uint *)(iVar9 + 0x98) | 0x103;
        iVar9 = FUN_00014050(param_3,1);
        *(undefined4 *)(*(int *)(param_3 + iVar9 * 4) + 0x98) = 2;
        iVar9 = FUN_00014050(param_3,0x25,1);
        *(undefined4 *)(*(int *)(param_3 + iVar9 * 4) + 0x98) = 1;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'B':
        uVar6 = 5;
        goto LAB_000169a8;
      case 'C':
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        *param_4 = *param_4 | 0x1000;
        param_4[1] = param_4[1];
        break;
      default:
        return 1;
      case 'F':
        iVar9 = FUN_00014050(param_3,0x25,1);
        iVar9 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 2;
        iVar10 = *param_2;
        if (((*(char *)(*(int *)(param_1 + iVar10 * 4) + iVar8 + 1) == '\0') &&
            (pcVar1 = *(char **)(param_1 + iVar10 * 4 + 4), pcVar1 != (char *)0x0)) &&
           (iVar2 = strcmp(pcVar1,"MOUNT"), iVar2 == 0)) {
          *param_2 = iVar10 + 1;
          *(uint *)(iVar9 + 0x98) = *(uint *)(iVar9 + 0x98) | 2;
          return 0;
        }
        *(uint *)(iVar9 + 0x98) = *(uint *)(iVar9 + 0x98) | 1;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'H':
        uVar6 = 0x22;
        goto LAB_000169a8;
      case 'I':
        iVar2 = FUN_00014050(param_3,3,1);
        iVar3 = *(int *)(param_3 + iVar2 * 4);
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 2;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        if (((*(char *)(iVar10 + iVar8 + 1) == '\0') &&
            (pcVar1 = *(char **)(param_1 + iVar9 * 4 + 4), pcVar1 != (char *)0x0)) &&
           ((iVar5 = strcmp(pcVar1,"ALL"), iVar5 == 0 || (iVar5 = strcmp(pcVar1,"SUM"), iVar5 == 0))
           )) {
          *param_2 = iVar9 + 1;
          iVar9 = strcmp(pcVar1,"SUM");
          if (iVar9 == 0) {
            iVar9 = FUN_000166fc(iVar3 + 0x40,&DAT_0002c2e4,8,0);
            iVar8 = *(int *)(param_3 + iVar2 * 4);
            *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 0x100;
            *(int *)(iVar8 + 0x44) = *(int *)(iVar8 + 0x44) + iVar9;
            return 0;
          }
          return 0;
        }
        break;
      case 'S':
        iVar9 = FUN_00014050(param_3,7,1);
        iVar9 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 2;
        *(uint *)(iVar9 + 0x98) = *(uint *)(iVar9 + 0x98) | 2;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'V':
        FUN_00027748();
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'W':
        uVar6 = 4;
        goto LAB_000169a8;
      case 'b':
        uVar6 = 6;
        goto LAB_000169a8;
      case 'd':
        uVar6 = 0xb;
        goto LAB_000169a8;
      case 'h':
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        *param_4 = *param_4 | 0x100004;
        param_4[1] = param_4[1];
        break;
      case 'j':
        pcVar1 = *(char **)(param_1 + (iVar9 + 1) * 4);
        if (pcVar1 == (char *)0x0) {
          return 1;
        }
        *param_2 = iVar9 + 1;
        iVar9 = strcmp(pcVar1,"SID");
        if (iVar9 == 0) {
          *param_4 = *param_4 | 6;
          param_4[1] = param_4[1];
          return 0;
        }
        sVar4 = strnlen(pcVar1,0x200);
        if (0x1fe < sVar4) {
          return 1;
        }
        strncpy(&DAT_000455bc,pcVar1,0x1ff);
        DAT_000457bb = 0;
        FUN_00028210(&DAT_000455bc);
        iVar9 = FUN_00028248(&DAT_000455bc);
        if (iVar9 == 0) {
          fwrite("Invalid type of persistent device name\n",1,0x27,stderr);
          return 2;
        }
        *param_4 = *param_4 | 0x2004;
        param_4[1] = param_4[1];
        return 0;
      case 'p':
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        *param_4 = *param_4 | 4;
        param_4[1] = param_4[1];
        break;
      case 'q':
        uVar6 = 9;
        goto LAB_000169a8;
      case 'r':
        iVar9 = FUN_00014050(param_3,7,1);
        iVar2 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) | 1;
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        if (((*(char *)(iVar10 + iVar8 + 1) == '\0') &&
            (pcVar1 = *(char **)(param_1 + iVar9 * 4 + 4), pcVar1 != (char *)0x0)) &&
           (iVar3 = strcmp(pcVar1,"ALL"), iVar3 == 0)) {
          *param_2 = iVar9 + 1;
          *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) | 0x100;
          return 0;
        }
        break;
      case 't':
        if (param_5 != 0) {
          return 1;
        }
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        *param_4 = *param_4 | 0x20;
        param_4[1] = param_4[1];
        break;
      case 'u':
        iVar9 = FUN_00014050(param_3,1);
        iVar9 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 2;
        iVar10 = *param_2;
        if (((*(char *)(*(int *)(param_1 + iVar10 * 4) + iVar8 + 1) == '\0') &&
            (pcVar1 = *(char **)(param_1 + iVar10 * 4 + 4), pcVar1 != (char *)0x0)) &&
           (iVar2 = strcmp(pcVar1,"ALL"), iVar2 == 0)) {
          *param_2 = iVar10 + 1;
          *(undefined4 *)(iVar9 + 0x98) = 2;
          return 0;
        }
        *(undefined4 *)(iVar9 + 0x98) = 1;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'v':
        uVar6 = 8;
        goto LAB_000169a8;
      case 'w':
        uVar6 = 2;
        goto LAB_000169a8;
      case 'x':
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        if (param_5 == 0) {
          *param_4 = *param_4 | 0x1000000;
          param_4[1] = param_4[1];
        }
        break;
      case 'y':
        uVar6 = 10;
LAB_000169a8:
        iVar9 = FUN_00014050(param_3,uVar6,1);
        iVar9 = *(int *)(param_3 + iVar9 * 4);
        *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 2;
        iVar9 = *param_2;
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        break;
      case 'z':
        iVar10 = *(int *)(param_1 + iVar9 * 4);
        *param_4 = *param_4 | 0x2000000;
        param_4[1] = param_4[1];
      }
      iVar8 = iVar8 + 1;
      cVar11 = *(char *)(iVar10 + iVar8);
    } while (cVar11 != '\0');
  }
  return 0;
}



/* ===== FUN_00016fb4 @ 00016fb4 size=604 ===== */

undefined4 FUN_00016fb4(int param_1,int *param_2,int param_3)

{
  char *__s1;
  int iVar1;
  
  __s1 = strtok(*(char **)(param_1 + *param_2 * 4),",");
  do {
    if (__s1 == (char *)0x0) {
      *param_2 = *param_2 + 1;
      return 0;
    }
    iVar1 = strcmp(__s1,"CPU");
    if ((((iVar1 != 0) && (iVar1 = strcmp(__s1,"FAN"), iVar1 != 0)) &&
        (iVar1 = strcmp(__s1,"IN"), iVar1 != 0)) &&
       (((iVar1 = strcmp(__s1,"TEMP"), iVar1 != 0 && (iVar1 = strcmp(__s1,"FREQ"), iVar1 != 0)) &&
        ((iVar1 = strcmp(__s1,"USB"), iVar1 != 0 && (iVar1 = strcmp(__s1,"BAT"), iVar1 != 0)))))) {
      iVar1 = strcmp(__s1,"ALL");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00014050(param_3,0x1e,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x1f,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x21,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x20,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x23,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x24,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    }
    iVar1 = FUN_00014050(param_3);
    iVar1 = *(int *)(param_3 + iVar1 * 4);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    __s1 = strtok((char *)0x0,",");
  } while( true );
}



/* ===== FUN_00017210 @ 00017210 size=1488 ===== */

undefined4 FUN_00017210(int param_1,int *param_2,int param_3)

{
  char *__s1;
  int iVar1;
  
  __s1 = strtok(*(char **)(param_1 + *param_2 * 4),",");
  do {
    if (__s1 == (char *)0x0) {
      *param_2 = *param_2 + 1;
      return 0;
    }
    iVar1 = strcmp(__s1,"DEV");
    if (((((((iVar1 != 0) && (iVar1 = strcmp(__s1,"EDEV"), iVar1 != 0)) &&
           (iVar1 = strcmp(__s1,"SOCK"), iVar1 != 0)) &&
          ((iVar1 = strcmp(__s1,"NFS"), iVar1 != 0 && (iVar1 = strcmp(__s1,"NFSD"), iVar1 != 0))))
         && (((iVar1 = strcmp(__s1,"IP"), iVar1 != 0 &&
              ((iVar1 = strcmp(__s1,"EIP"), iVar1 != 0 && (iVar1 = strcmp(__s1,"ICMP"), iVar1 != 0))
              )) && (iVar1 = strcmp(__s1,"EICMP"), iVar1 != 0)))) &&
        ((((iVar1 = strcmp(__s1,"TCP"), iVar1 != 0 && (iVar1 = strcmp(__s1,"ETCP"), iVar1 != 0)) &&
          (iVar1 = strcmp(__s1,"UDP"), iVar1 != 0)) &&
         (((iVar1 = strcmp(__s1,"SOCK6"), iVar1 != 0 && (iVar1 = strcmp(__s1,"IP6"), iVar1 != 0)) &&
          ((iVar1 = strcmp(__s1,"EIP6"), iVar1 != 0 &&
           ((iVar1 = strcmp(__s1,"ICMP6"), iVar1 != 0 && (iVar1 = strcmp(__s1,"EICMP6"), iVar1 != 0)
            ))))))))) &&
       ((iVar1 = strcmp(__s1,"UDP6"), iVar1 != 0 &&
        ((iVar1 = strcmp(__s1,"FC"), iVar1 != 0 && (iVar1 = strcmp(__s1,"SOFT"), iVar1 != 0)))))) {
      iVar1 = strcmp(__s1,"ALL");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00014050(param_3,0xc,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0xd,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x10,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0xe,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0xf,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x11,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x12,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x13,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x14,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x15,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x16,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x17,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x18,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x19,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x1a,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x1b,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x1c,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x1d,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x26,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    }
    iVar1 = FUN_00014050(param_3);
    iVar1 = *(int *)(param_3 + iVar1 * 4);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    __s1 = strtok((char *)0x0,",");
  } while( true );
}



/* ===== FUN_000177e0 @ 000177e0 size=436 ===== */

undefined4 FUN_000177e0(int param_1,int *param_2,int param_3)

{
  char *__s1;
  int iVar1;
  
  __s1 = strtok(*(char **)(param_1 + *param_2 * 4),",");
  do {
    if (__s1 == (char *)0x0) {
      *param_2 = *param_2 + 1;
      return 0;
    }
    iVar1 = strcmp(__s1,"LOAD");
    if ((((iVar1 != 0) && (iVar1 = strcmp(__s1,"CPU"), iVar1 != 0)) &&
        (iVar1 = strcmp(__s1,"IO"), iVar1 != 0)) && (iVar1 = strcmp(__s1,"MEM"), iVar1 != 0)) {
      iVar1 = strcmp(__s1,"PSI");
      if (iVar1 != 0) {
        iVar1 = strcmp(__s1,"ALL");
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_00014050(param_3,9,1);
        iVar1 = *(int *)(param_3 + iVar1 * 4);
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      }
      iVar1 = FUN_00014050(param_3,0x28,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      iVar1 = FUN_00014050(param_3,0x29,1);
      iVar1 = *(int *)(param_3 + iVar1 * 4);
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    }
    iVar1 = FUN_00014050(param_3);
    iVar1 = *(int *)(param_3 + iVar1 * 4);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
    __s1 = strtok((char *)0x0,",");
  } while( true );
}



/* ===== FUN_00017994 @ 00017994 size=136 ===== */

undefined4 FUN_00017994(int param_1,int *param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_00014050(param_4,1);
  iVar3 = *param_2;
  *param_2 = iVar3 + 1;
  iVar3 = *(int *)(param_1 + (iVar3 + 1) * 4);
  if ((iVar3 != 0) &&
     (puVar2 = *(undefined4 **)(*(int *)(param_4 + iVar1 * 4) + 0xb8),
     iVar1 = FUN_000294b8(iVar3,*puVar2,puVar2[1],&DAT_0002c6c0), iVar1 == 0)) {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    *param_2 = *param_2 + 1;
    *param_3 = uVar4 | 0x20000000;
    param_3[1] = uVar5;
    return 0;
  }
  return 1;
}



/* ===== FUN_00017a1c @ 00017a1c size=76 ===== */

void FUN_00017a1c(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*param_2 & 0x20000000) != 0) {
    return;
  }
  iVar1 = FUN_00014050(param_1,1);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + iVar1 * 4) + 0xb8);
  memset((void *)*puVar2,-1,(puVar2[1] + 1 >> 3) + 1);
  return;
}



/* ===== FUN_00017a68 @ 00017a68 size=340 ===== */

void FUN_00017a68(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int param_6)

{
  char *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  int local_38;
  char acStack_34 [8];
  undefined1 local_2c;
  
  __s = strtok((char *)(param_1 + param_5),",");
  while (__s != (char *)0x0) {
    if ((((param_6 < 1) || (sVar1 = strlen(__s), 0x10 < sVar1)) ||
        (sVar2 = strspn(__s,"0123456789-"), sVar1 != sVar2)) ||
       (iVar3 = FUN_000293d4(__s,param_6,&local_3c,&local_38), iVar3 != 0)) {
      iVar3 = FUN_000166fc(param_2 + 0x40,__s,param_3,0);
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + iVar3;
    }
    else if (local_3c <= local_38) {
      iVar3 = local_3c;
      do {
        snprintf(acStack_34,9,"%d",iVar3);
        local_2c = 0;
        iVar4 = FUN_000166fc(param_2 + 0x40,acStack_34,param_3,0);
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + iVar4;
      } while (iVar3 <= local_38);
    }
    __s = strtok((char *)0x0,",");
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x100;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ===== FUN_00017c48 @ 00017c48 size=128 ===== */

void FUN_00017c48(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  
  FUN_000155f8(param_1,param_2,0x40,1,0);
  param_2[0x3f] = '\0';
  sVar1 = strlen(param_2);
  for (uVar2 = 0; uVar2 < sVar1; uVar2 = uVar2 + 1) {
    if ((*(ushort *)(__ctype_b + (uint)(byte)param_2[uVar2] * 2) & 0x40) == 0) {
      param_2[uVar2] = '.';
      sVar1 = strlen(param_2);
    }
  }
  return;
}



/* ===== FUN_00017cc8 @ 00017cc8 size=144 ===== */

bool FUN_00017cc8(uint param_1,undefined4 param_2,int param_3,time_t *param_4)

{
  tm *ptVar1;
  time_t local_24 [2];
  
  local_24[0] = *(time_t *)(param_3 + 8);
  param_4[1] = *(time_t *)(param_3 + 0xc);
  *param_4 = local_24[0];
  if ((param_1 & 0x4020) == 0) {
    ptVar1 = gmtime_r(local_24,(tm *)(param_4 + 2));
  }
  else {
    ptVar1 = localtime_r(local_24,(tm *)(param_4 + 2));
    param_4[0xb] = 1;
  }
  if ((param_1 & 0x20) != 0) {
    param_4[4] = (uint)*(byte *)(param_3 + 0x15);
    param_4[3] = (uint)*(byte *)(param_3 + 0x16);
    param_4[2] = (uint)*(byte *)(param_3 + 0x17);
  }
  return ptVar1 == (tm *)0x0;
}



/* ===== FUN_00017d58 @ 00017d58 size=180 ===== */

void FUN_00017d58(uint param_1,undefined4 param_2,char *param_3,char *param_4,size_t param_5,
                 undefined4 *param_6)

{
  char *__format;
  
  if ((param_1 & 0x80) == 0) {
    if (param_3 != (char *)0x0) {
      strftime(param_3,param_5,"%Y-%m-%d",(tm *)(param_6 + 2));
    }
  }
  else if (param_3 != (char *)0x0) {
    sprintf(param_4,"%llu",*param_6,param_6[1]);
    *param_3 = '\0';
    return;
  }
  if ((param_1 & 0x8000) == 0) {
    __format = "%H:%M:%S";
  }
  else {
    __format = "%X";
  }
  strftime(param_4,param_5,__format,(tm *)(param_6 + 2));
  return;
}



/* ===== FUN_00017e0c @ 00017e0c size=580 ===== */

int FUN_00017e0c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                int param_14,int param_15,int param_16,undefined4 param_17,undefined4 param_18)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  iVar1 = param_14;
  iVar2 = FUN_00017cc8(param_3,param_4,param_1,param_9);
  if (iVar2 != 0) {
    return 0;
  }
  iVar3 = FUN_00014a54(param_9,param_5,0);
  iVar2 = 0;
  if ((-1 < iVar3) && (iVar3 = FUN_00014a54(param_9,param_6,0), iVar3 < 1)) {
    FUN_00017d58(param_3,param_4,auStack_e0,auStack_a0,0x40,param_9);
    iVar2 = 1;
  }
  if (param_7 == 2) {
    piVar6 = (int *)(param_15 + -4);
    uVar4 = FUN_00015a84(param_8,param_10,param_13,param_17,param_18,1,0x2001);
    piVar7 = (int *)(param_15 + 0xa8);
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    do {
      while( true ) {
        piVar6 = piVar6 + 1;
        iVar3 = *piVar6;
        if (((*(uint *)(iVar3 + 4) & 8) != 0) && (0 < *(int *)(iVar3 + 0x70))) break;
LAB_00017f40:
        if (piVar7 == piVar6) goto LAB_00017f8c;
      }
      iVar5 = *(int *)(iVar1 + 0x10);
      *(int *)(iVar3 + 0x70) = iVar5;
      if (iVar5 <= *(int *)(iVar3 + 0x88)) goto LAB_00017f40;
      FUN_000147a0(iVar3,iVar5,param_3,param_4);
    } while (piVar7 != piVar6);
LAB_00017f8c:
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = FUN_000156b4(param_8,param_17,param_18), iVar3 < 0)) {
      return 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    if (*(code **)(param_16 + 0x14) != (code *)0x0) {
      (**(code **)(param_16 + 0x14))(&param_11,2,auStack_e0,auStack_a0,param_12,iVar1,param_1);
      return iVar2;
    }
  }
  else if (param_7 == 4) {
    FUN_00017c48(param_8,auStack_60);
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar3 = FUN_000156b4(param_8,param_17,param_18), iVar3 < 0)) {
      return 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_3 & 0x1000) != 0) {
      if (*(code **)(param_16 + 0x18) == (code *)0x0) {
        return iVar2;
      }
      (**(code **)(param_16 + 0x18))
                (&param_11,2,auStack_e0,auStack_a0,param_12,auStack_60,iVar1,param_1);
      return iVar2;
    }
    return 0;
  }
  return 1;
}



/* ===== FUN_00018050 @ 00018050 size=1100 ===== */

longlong FUN_00018050(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                     undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *__src;
  uint *__dest;
  uint uVar11;
  uint uVar12;
  uint *__s;
  undefined8 *__s_00;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  longlong lVar33;
  uint local_48;
  longlong local_40;
  
  iVar4 = param_1 + param_3 * 4;
  iVar2 = param_1 + param_2 * 4;
  __s = *(uint **)(iVar4 + 0x9c);
  __s_00 = *(undefined8 **)(iVar2 + 0x9c);
  if (1 < *(int *)(param_1 + 0x70)) {
    memset(__s,0,0x50);
    memset(__s_00,0,0x50);
    if ((1 < *(int *)(param_1 + 0x70)) && (0 < *(int *)(*(int *)(param_1 + 0xb8) + 4))) {
      local_48 = 1;
      local_40 = 0;
      while( true ) {
        iVar10 = *(int *)(param_1 + 0x94) * local_48;
        __dest = (uint *)(*(int *)(iVar4 + 0x9c) + iVar10);
        __src = (uint *)(*(int *)(iVar2 + 0x9c) + iVar10);
        uVar1 = *__src;
        uVar3 = __src[1];
        uVar22 = (uint)*(undefined8 *)(__dest + 2);
        uVar28 = *(undefined8 *)(__src + 2);
        uVar13 = uVar22 + *__dest;
        uVar23 = (uint)uVar28;
        uVar14 = uVar13 + __dest[4];
        uVar29 = *(undefined8 *)(__src + 4);
        uVar5 = uVar23 + uVar1;
        uVar6 = uVar14 + __dest[6];
        uVar24 = (uint)uVar29;
        uVar30 = *(undefined8 *)(__src + 6);
        uVar15 = uVar24 + uVar5;
        uVar16 = uVar6 + __dest[8];
        uVar25 = (uint)uVar30;
        uVar31 = *(undefined8 *)(__src + 8);
        uVar7 = uVar25 + uVar15;
        uVar8 = uVar16 + __dest[0xc];
        uVar26 = (uint)uVar31;
        uVar32 = *(undefined8 *)(__src + 0xc);
        uVar17 = uVar26 + uVar7;
        uVar18 = uVar8 + __dest[10];
        uVar27 = (uint)uVar32;
        uVar9 = uVar27 + uVar17;
        uVar19 = __src[10];
        uVar21 = __src[0xb];
        uVar11 = __src[0xe];
        uVar12 = __src[0xf];
        uVar20 = uVar19 + uVar9;
        iVar10 = (int)local_48 >> 3;
        if (uVar18 + __dest[0xe] == 0 &&
            (int)((ulonglong)*(undefined8 *)(__dest + 2) >> 0x20) + __dest[1] +
            (uint)CARRY4(uVar22,*__dest) + __dest[5] + (uint)CARRY4(uVar13,__dest[4]) + __dest[7] +
            (uint)CARRY4(uVar14,__dest[6]) + __dest[9] + (uint)CARRY4(uVar6,__dest[8]) + __dest[0xd]
            + (uint)CARRY4(uVar16,__dest[0xc]) + __dest[0xb] + (uint)CARRY4(uVar8,__dest[10]) +
            __dest[0xf] + (uint)CARRY4(uVar18,__dest[0xe]) == 0) {
          memcpy(__dest,__src,0x50);
          *(byte *)(param_7 + iVar10) = *(byte *)(param_7 + iVar10) | (byte)(1 << (local_48 & 7));
        }
        if (((param_5 & 1) == 0 && uVar11 + uVar20 == 0) &&
            uVar12 + uVar21 + (int)((ulonglong)uVar32 >> 0x20) +
                              (int)((ulonglong)uVar31 >> 0x20) +
                              (int)((ulonglong)uVar30 >> 0x20) +
                              (int)((ulonglong)uVar29 >> 0x20) +
                              (int)((ulonglong)uVar28 >> 0x20) + uVar3 + (uint)CARRY4(uVar23,uVar1)
                              + (uint)CARRY4(uVar24,uVar5) + (uint)CARRY4(uVar25,uVar15) +
                              (uint)CARRY4(uVar26,uVar7) + (uint)CARRY4(uVar27,uVar17) +
                     (uint)CARRY4(uVar19,uVar9) + (uint)CARRY4(uVar11,uVar20) == 0) {
          *(byte *)(param_7 + iVar10) = *(byte *)(param_7 + iVar10) | (byte)(1 << (local_48 & 7));
        }
        else {
          lVar33 = FUN_000274f0(__dest,__src);
          uVar3 = *__dest;
          uVar5 = __dest[1];
          uVar1 = *__s;
          *__s = uVar3 + uVar1;
          __s[1] = uVar5 + __s[1] + (uint)CARRY4(uVar3,uVar1);
          uVar1 = __s[2];
          uVar5 = __s[3];
          uVar7 = __dest[2];
          uVar8 = __dest[3];
          uVar28 = VectorAdd(*__s_00,*(undefined8 *)__src,8);
          uVar3 = __s[4];
          uVar6 = __s[5];
          *__s_00 = uVar28;
          __s[2] = uVar7 + uVar1;
          __s[3] = uVar8 + uVar5 + (uint)CARRY4(uVar7,uVar1);
          uVar1 = __dest[4];
          uVar5 = __dest[5];
          uVar28 = VectorAdd(__s_00[1],*(undefined8 *)(__src + 2),8);
          uVar7 = __s[6];
          uVar8 = __s[7];
          __s_00[1] = uVar28;
          __s[4] = uVar1 + uVar3;
          __s[5] = uVar5 + uVar6 + (uint)CARRY4(uVar1,uVar3);
          uVar28 = *(undefined8 *)(__src + 4);
          uVar9 = *(uint *)(__s_00 + 2);
          local_40 = lVar33 + local_40;
          uVar11 = (uint)uVar28;
          uVar1 = __dest[6];
          uVar5 = __dest[7];
          uVar29 = *(undefined8 *)(__dest + 8);
          uVar3 = __s[8];
          uVar6 = __s[9];
          *(uint *)(__s_00 + 2) = uVar11 + uVar9;
          *(uint *)((int)__s_00 + 0x14) =
               (int)((ulonglong)uVar28 >> 0x20) + *(int *)((int)__s_00 + 0x14) +
               (uint)CARRY4(uVar11,uVar9);
          __s[6] = uVar7 + uVar1;
          __s[7] = uVar8 + uVar5 + (uint)CARRY4(uVar7,uVar1);
          uVar1 = *(uint *)(__s_00 + 3);
          uVar8 = __src[6];
          uVar9 = __src[7];
          uVar11 = (uint)uVar29;
          uVar5 = __s[0xc];
          uVar7 = __s[0xd];
          *(uint *)(__s_00 + 3) = uVar8 + uVar1;
          *(uint *)((int)__s_00 + 0x1c) =
               uVar9 + *(int *)((int)__s_00 + 0x1c) + (uint)CARRY4(uVar8,uVar1);
          __s[8] = uVar11 + uVar3;
          __s[9] = (int)((ulonglong)uVar29 >> 0x20) + uVar6 + (uint)CARRY4(uVar11,uVar3);
          uVar28 = *(undefined8 *)(__src + 8);
          uVar1 = *(uint *)(__s_00 + 4);
          uVar3 = __dest[0xc];
          uVar6 = __dest[0xd];
          uVar8 = (uint)uVar28;
          uVar29 = *(undefined8 *)(__dest + 0xe);
          *(uint *)(__s_00 + 4) = uVar8 + uVar1;
          *(uint *)((int)__s_00 + 0x24) =
               (int)((ulonglong)uVar28 >> 0x20) + *(int *)((int)__s_00 + 0x24) +
               (uint)CARRY4(uVar8,uVar1);
          __s[0xc] = uVar5 + uVar3;
          __s[0xd] = uVar7 + uVar6 + (uint)CARRY4(uVar5,uVar3);
          uVar8 = __src[0xc];
          uVar9 = __src[0xd];
          uVar1 = *(uint *)(__s_00 + 6);
          uVar6 = __s[10];
          uVar7 = __s[0xb];
          uVar3 = __dest[10];
          uVar5 = __dest[0xb];
          *(uint *)(__s_00 + 6) = uVar8 + uVar1;
          *(uint *)((int)__s_00 + 0x34) =
               uVar9 + *(int *)((int)__s_00 + 0x34) + (uint)CARRY4(uVar8,uVar1);
          __s[10] = uVar3 + uVar6;
          __s[0xb] = uVar5 + uVar7 + (uint)CARRY4(uVar3,uVar6);
          uVar8 = __src[10];
          uVar9 = __src[0xb];
          uVar1 = *(uint *)(__s_00 + 5);
          uVar6 = __s[0xe];
          uVar7 = __s[0xf];
          uVar11 = (uint)uVar29;
          uVar28 = *(undefined8 *)(__dest + 0x10);
          uVar3 = __s[0x10];
          uVar5 = __s[0x11];
          *(uint *)(__s_00 + 5) = uVar8 + uVar1;
          *(uint *)((int)__s_00 + 0x2c) =
               uVar9 + *(int *)((int)__s_00 + 0x2c) + (uint)CARRY4(uVar8,uVar1);
          __s[0xe] = uVar11 + uVar6;
          __s[0xf] = (int)((ulonglong)uVar29 >> 0x20) + uVar7 + (uint)CARRY4(uVar11,uVar6);
          uVar8 = __src[0xe];
          uVar11 = __src[0xf];
          uVar1 = *(uint *)(__s_00 + 7);
          uVar13 = (uint)uVar28;
          uVar9 = __dest[0x12];
          uVar12 = __dest[0x13];
          uVar6 = __s[0x12];
          uVar7 = __s[0x13];
          *(uint *)(__s_00 + 7) = uVar8 + uVar1;
          *(uint *)((int)__s_00 + 0x3c) =
               uVar11 + *(int *)((int)__s_00 + 0x3c) + (uint)CARRY4(uVar8,uVar1);
          __s[0x10] = uVar13 + uVar3;
          __s[0x11] = (int)((ulonglong)uVar28 >> 0x20) + uVar5 + (uint)CARRY4(uVar13,uVar3);
          uVar28 = *(undefined8 *)(__src + 0x10);
          uVar1 = *(uint *)(__s_00 + 8);
          uVar3 = (uint)uVar28;
          *(uint *)(__s_00 + 8) = uVar3 + uVar1;
          *(uint *)((int)__s_00 + 0x44) =
               (int)((ulonglong)uVar28 >> 0x20) + *(int *)((int)__s_00 + 0x44) +
               (uint)CARRY4(uVar3,uVar1);
          __s[0x12] = uVar6 + uVar9;
          __s[0x13] = uVar7 + uVar12 + (uint)CARRY4(uVar6,uVar9);
          uVar5 = *(uint *)(__s_00 + 9);
          uVar1 = __src[0x12];
          uVar3 = __src[0x13];
          *(uint *)(__s_00 + 9) = uVar5 + uVar1;
          *(uint *)((int)__s_00 + 0x4c) =
               *(int *)((int)__s_00 + 0x4c) + uVar3 + (uint)CARRY4(uVar5,uVar1);
        }
        local_48 = local_48 + 1;
        if (*(int *)(param_1 + 0x70) <= (int)local_48) break;
        if (*(int *)(*(int *)(param_1 + 0xb8) + 4) < (int)local_48) {
          return local_40;
        }
      }
      return local_40;
    }
  }
  return 0;
}



/* ===== FUN_0001849c @ 0001849c size=640 ===== */

void FUN_0001849c(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar8 = param_1 + param_3 * 4;
  iVar5 = param_1 + param_2 * 4;
  iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piVar13 = *(int **)(iVar8 + 0x9c);
  piVar14 = *(int **)(iVar5 + 0x9c);
  *piVar13 = 0;
  piVar13[1] = iVar2;
  piVar13[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar13[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar13[4] = 0;
  piVar13[5] = iVar2;
  *piVar14 = 0;
  piVar14[1] = iVar2;
  piVar14[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar14[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar14[4] = 0;
  piVar14[5] = iVar2;
  local_3c = *(int *)(param_1 + 0x70);
  if ((1 < local_3c) && (0 < *(int *)(*(int *)(param_1 + 0xb8) + 4))) {
    uVar12 = 1;
    do {
      iVar11 = *(int *)(param_1 + 0x94) * uVar12;
      iVar16 = *(int *)(iVar5 + 0x9c);
      puVar17 = (undefined4 *)(iVar16 + iVar11);
      iVar15 = *(int *)(iVar8 + 0x9c);
      puVar20 = (undefined4 *)(iVar15 + iVar11);
      iVar2 = (int)uVar12 >> 3;
      if ((*(int *)(iVar16 + iVar11) + puVar17[1] + puVar17[2] + puVar17[3] + puVar17[4] +
           puVar17[5] == 0) && ((param_5 & 1) == 0)) {
        *(byte *)(param_7 + iVar2) = *(byte *)(param_7 + iVar2) | (byte)(1 << (uVar12 & 7));
        local_3c = *(int *)(param_1 + 0x70);
        if (local_3c <= (int)(uVar12 + 1)) {
          return;
        }
      }
      else {
        local_48 = *(int *)(iVar15 + iVar11);
        local_44 = puVar20[1];
        iVar1 = puVar20[2];
        iVar3 = puVar20[3];
        iVar6 = puVar20[4];
        local_40 = puVar20[5];
        if (local_48 + local_44 + iVar1 + iVar3 + iVar6 + local_40 == 0) {
          uVar4 = puVar17[1];
          uVar7 = puVar17[2];
          uVar9 = puVar17[3];
          *puVar20 = *puVar17;
          puVar20[1] = uVar4;
          puVar20[2] = uVar7;
          puVar20[3] = uVar9;
          uVar4 = puVar17[5];
          puVar20[4] = puVar17[4];
          puVar20[5] = uVar4;
          *(byte *)(param_7 + iVar2) = *(byte *)(param_7 + iVar2) | (byte)(1 << (uVar12 & 7));
          local_48 = *(int *)(iVar15 + iVar11);
          iVar1 = puVar20[2];
          iVar3 = puVar20[3];
          local_44 = puVar20[1];
          iVar6 = puVar20[4];
          local_40 = puVar20[5];
          local_3c = *(int *)(param_1 + 0x70);
        }
        *piVar13 = *piVar13 + local_48;
        iVar10 = *piVar14;
        iVar18 = *(int *)(iVar16 + iVar11);
        piVar13[1] = piVar13[1] + local_44;
        piVar13[3] = piVar13[3] + iVar3;
        piVar13[4] = piVar13[4] + iVar6;
        iVar11 = piVar14[1];
        iVar16 = puVar17[1];
        piVar13[2] = piVar13[2] + iVar1;
        iVar6 = puVar17[2];
        iVar2 = piVar14[2];
        iVar1 = puVar17[3];
        iVar15 = piVar14[3];
        piVar13[5] = piVar13[5] + local_40;
        iVar19 = puVar17[4];
        iVar3 = puVar17[5];
        *piVar14 = iVar10 + iVar18;
        piVar14[1] = iVar11 + iVar16;
        piVar14[2] = iVar2 + iVar6;
        piVar14[3] = iVar15 + iVar1;
        piVar14[4] = piVar14[4] + iVar19;
        piVar14[5] = piVar14[5] + iVar3;
        if (local_3c <= (int)(uVar12 + 1)) {
          return;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 <= *(int *)(*(int *)(param_1 + 0xb8) + 4));
  }
  return;
}



/* ===== FUN_0001871c @ 0001871c size=292 ===== */

void FUN_0001871c(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_1 + 0x70);
  if ((0 < iVar5) && (piVar6 = *(int **)(param_1 + 0xb8), -1 < piVar6[1])) {
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + (param_2 + 0x26) * 4 + 4);
      uVar8 = uVar4 & 7;
      iVar1 = (int)uVar4 >> 3;
      iVar3 = *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94) * uVar4;
      if (((*(int *)(iVar2 + iVar3) == 0) && ((param_5 & 1) == 0)) ||
         (((int)(uint)*(byte *)(*piVar6 + iVar1) >> uVar8 & 1U) == 0)) {
        *(byte *)(param_7 + iVar1) = *(byte *)(param_7 + iVar1) | (byte)(1 << uVar8);
        iVar5 = *(int *)(param_1 + 0x70);
        if (iVar5 <= (int)(uVar4 + 1)) {
          return;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + (param_3 + 0x26) * 4 + 4);
        if (*(int *)(iVar7 + iVar3) == 0) {
          *(byte *)(param_7 + iVar1) = *(byte *)(param_7 + iVar1) | (byte)(1 << uVar8);
          memcpy((void *)(iVar7 + iVar3),(void *)(iVar2 + iVar3),
                 *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x94));
          iVar5 = *(int *)(param_1 + 0x70);
        }
        if (iVar5 <= (int)(uVar4 + 1)) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
      piVar6 = *(int **)(param_1 + 0xb8);
    } while ((int)uVar4 <= piVar6[1]);
  }
  return;
}



/* ===== FUN_00018840 @ 00018840 size=128 ===== */

int FUN_00018840(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  char acStack_90 [127];
  undefined1 local_11;
  
  uVar2 = *(uint *)(param_1 + 0x98) & 2;
  if ((param_3 & 0x2000) != 0) {
    if (uVar2 != 0) goto LAB_0001886c;
    strncpy(acStack_90,(char *)(param_5 + 0x28),0x80);
    local_11 = 0;
    __xpg_basename(acStack_90);
    iVar1 = FUN_00028488();
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = *(uint *)(param_1 + 0x98) & 2;
  }
  if (uVar2 == 0) {
    return param_5 + 0x28;
  }
LAB_0001886c:
  return param_5 + 0xa8;
}



/* ===== FUN_000188c0 @ 000188c0 size=120 ===== */

bool FUN_000188c0(uint *param_1,uint *param_2)

{
  bool bVar1;
  
  if (param_1[0xd] == 1) {
    if ((param_2[0xd] == 1) && ((int)param_2[4] < (int)param_1[4])) {
      param_2[4] = param_2[4] + 0x18;
      return false;
    }
  }
  else if ((param_1[0xd] == 2) && (param_2[0xd] == 2)) {
    bVar1 = param_1[1] <= param_2[1];
    if (param_2[1] == param_1[1]) {
      bVar1 = *param_1 <= *param_2;
    }
    return !bVar1;
  }
  return false;
}



/* ===== FUN_00018938 @ 00018938 size=56 ===== */

void FUN_00018938(int param_1,int param_2)

{
  double *pdVar1;
  double in_d0;
  
  pdVar1 = (double *)(*(int *)(param_1 + 0xa8) + param_2 * 8);
  if (in_d0 < *pdVar1) {
    *pdVar1 = in_d0;
  }
  pdVar1 = (double *)(*(int *)(param_1 + 0xac) + param_2 * 8);
  if (*pdVar1 < in_d0) {
    *pdVar1 = in_d0;
  }
  return;
}



/* ===== FUN_00018970 @ 00018970 size=716 ===== */

void FUN_00018970(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,int *param_9)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  double in_d16;
  double dVar18;
  double dVar19;
  
  dVar1 = DAT_00018c40;
  iVar5 = *param_1;
  puVar11 = param_3;
  if (iVar5 != 0) {
    piVar14 = param_9;
    puVar15 = param_2;
    do {
      piVar12 = piVar14 + 1;
      iVar9 = *piVar14;
      if (-1 < iVar9) {
        uVar2 = *puVar15;
        uVar3 = puVar15[1];
        if (param_3 == (uint *)0x0) {
          in_d16 = (double)FUN_0002a458();
        }
        else {
          uVar4 = *puVar11;
          uVar6 = puVar11[1];
          bVar17 = uVar3 <= uVar6;
          bVar16 = uVar6 == uVar3;
          if (bVar16) {
            bVar17 = uVar2 <= uVar4;
          }
          if (bVar17 && (!bVar16 || uVar4 != uVar2)) {
            in_d16 = 0.0;
          }
          if (!bVar17 || bVar16 && uVar4 == uVar2) {
            dVar18 = (double)FUN_0002a458(uVar2 - uVar4,uVar3 - (uVar6 + (uVar2 < uVar4)));
            dVar19 = (double)FUN_0002a458(param_5,param_6);
            in_d16 = (dVar18 / dVar19) * dVar1;
          }
        }
        iVar9 = iVar9 * 8;
        pdVar7 = (double *)(param_7 + iVar9);
        pdVar8 = (double *)(param_8 + iVar9);
        if (in_d16 < *pdVar7) {
          *pdVar7 = in_d16;
        }
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*pdVar8 < in_d16) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          *pdVar8 = in_d16;
        }
      }
      puVar15 = puVar15 + 2;
      if (param_3 != (uint *)0x0) {
        puVar11 = puVar11 + 2;
      }
      piVar14 = piVar12;
    } while (piVar12 != param_9 + iVar5);
    param_2 = param_2 + iVar5 * 2;
  }
  dVar1 = DAT_00018c40;
  iVar9 = param_1[1];
  if (iVar9 != 0) {
    iVar13 = 0;
    piVar14 = param_9 + iVar5;
    do {
      iVar10 = *piVar14;
      if (-1 < iVar10) {
        uVar2 = param_2[iVar13 * 2];
        if (param_3 == (uint *)0x0) {
          dVar18 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        }
        else if (uVar2 < *puVar11) {
          dVar18 = 0.0;
        }
        else {
          dVar18 = (double)VectorUnsignedToFloat(uVar2 - *puVar11,(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = (double)FUN_0002a458(param_5,param_6);
          dVar18 = (dVar18 / dVar19) * dVar1;
        }
        iVar10 = iVar10 * 8;
        pdVar7 = (double *)(param_7 + iVar10);
        pdVar8 = (double *)(param_8 + iVar10);
        if (dVar18 < *pdVar7) {
          *pdVar7 = dVar18;
        }
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*pdVar8 < dVar18) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          *pdVar8 = dVar18;
        }
      }
      iVar13 = iVar13 + 1;
      if (param_3 != (uint *)0x0) {
        puVar11 = puVar11 + 2;
      }
      piVar14 = piVar14 + 1;
    } while (iVar9 != iVar13);
    param_2 = param_2 + iVar9 * 2;
    iVar5 = iVar5 + iVar9;
  }
  dVar1 = DAT_00018c40;
  if (param_1[2] != 0) {
    puVar15 = param_2 + param_1[2];
    piVar14 = param_9 + iVar5;
    do {
      iVar5 = *piVar14;
      if (-1 < iVar5) {
        uVar2 = *param_2;
        if (param_3 == (uint *)0x0) {
          dVar18 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        }
        else if (uVar2 < *puVar11) {
          dVar18 = 0.0;
        }
        else {
          dVar18 = (double)VectorUnsignedToFloat(uVar2 - *puVar11,(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = (double)FUN_0002a458(param_5,param_6);
          dVar18 = (dVar18 / dVar19) * dVar1;
        }
        iVar5 = iVar5 * 8;
        pdVar7 = (double *)(param_7 + iVar5);
        pdVar8 = (double *)(param_8 + iVar5);
        if (dVar18 < *pdVar7) {
          *pdVar7 = dVar18;
        }
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*pdVar8 < dVar18) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          *pdVar8 = dVar18;
        }
      }
      param_2 = param_2 + 1;
      if (param_3 != (uint *)0x0) {
        puVar11 = puVar11 + 1;
      }
      piVar14 = piVar14 + 1;
    } while (puVar15 != param_2);
  }
  return;
}



/* ===== FUN_00018c48 @ 00018c48 size=144 ===== */

void FUN_00018c48(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (0 < param_2) {
    puVar2 = *(undefined4 **)(param_1 + 0xa8);
    puVar1 = *(undefined4 **)(param_1 + 0xac);
    puVar4 = puVar2;
    do {
      puVar3 = puVar4 + 2;
      *puVar4 = 0xffffffff;
      puVar4[1] = 0x7fefffff;
      *puVar1 = 0xffffffff;
      puVar1[1] = 0xffefffff;
      puVar1 = puVar1 + 2;
      puVar4 = puVar3;
    } while (puVar3 != puVar2 + param_2 * 2);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb4);
  while (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar1[1];
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
    free(puVar1);
    puVar1 = puVar4;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}



/* ===== FUN_00018c98 @ 00018c98 size=36 ===== */

void FUN_00018c98(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Maximum:";
  if (param_1 == 0) {
    pcVar1 = "Minimum:";
  }
  printf("%-11s",pcVar1);
  return;
}



/* ===== FUN_00018cc0 @ 00018cc0 size=776 ===== */

void FUN_00018cc0(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *local_24c;
  char acStack_248 [16];
  char acStack_238 [15];
  undefined1 local_229;
  char local_228 [516];
  
  local_228[0] = '\0';
  local_228[1] = '\0';
  local_228[2] = '\0';
  local_228[3] = '\0';
  memset(local_228 + 4,0,0x1fc);
  strncpy(local_228,*(char **)(param_2 + 0x48),0x1ff);
  pcVar2 = strtok(local_228,"|");
  iVar7 = param_3;
  if (pcVar2 != (char *)0x0 && 0 < param_3) {
    do {
      pcVar2 = strtok((char *)0x0,"|");
      iVar7 = iVar7 + -1;
      iVar1 = 0;
      if (pcVar2 != (char *)0x0) {
        iVar1 = iVar7;
      }
    } while ((pcVar2 != (char *)0x0 && iVar7 != 0) && -1 < iVar1);
  }
  if (pcVar2 != (char *)0x0) {
    printf("\n%-11s",param_1);
    pcVar3 = strchr(pcVar2,0x26);
    if (pcVar3 != (char *)0x0) {
      sVar4 = strcspn(pcVar2,"&");
      if ((*(uint *)(param_2 + 0x98) & 1 << (param_3 + 8U & 0xff) & 0xff00) == 0) {
        pcVar2[sVar4] = '\0';
      }
      else {
        pcVar2[sVar4] = ';';
      }
    }
    pcVar2 = strtok(pcVar2,";");
    if (pcVar2 != (char *)0x0) {
      local_24c = (char *)0x0;
      uVar9 = 0xffffffff;
      do {
        pcVar3 = strchr(pcVar2,0x2a);
        uVar10 = param_4;
        if (pcVar3 == (char *)0x0) {
          uVar10 = 0;
          if ((int)param_4 < 1) {
            if (((uint)(param_4 == uVar9) & param_4 >> 0x1f) == 0) {
              printf(" %*s",param_5,pcVar2);
              uVar10 = param_4;
              pcVar2 = local_24c;
            }
          }
          else {
            printf(" %*s",param_4,pcVar2);
            pcVar2 = local_24c;
          }
        }
        else {
          strncpy(acStack_248,pcVar2,0xf);
          sVar4 = strcspn(acStack_248,"*");
          sVar5 = strlen(acStack_248);
          pcVar2 = local_24c;
          if (sVar4 < sVar5) {
            iVar7 = *(int *)(param_2 + 0x70);
            acStack_248[sVar4] = '\0';
            if ((0 < iVar7) && (piVar6 = *(int **)(param_2 + 0xb8), -1 < piVar6[1])) {
              uVar8 = 0;
              do {
                if ((((int)(uint)*(byte *)(*piVar6 + ((int)uVar8 >> 3)) >> (uVar8 & 7) & 1U) != 0)
                   && ((param_6 == 0 ||
                       (((int)(uint)*(byte *)(param_6 + ((int)uVar8 >> 3)) >> (uVar8 & 7) & 1U) == 0
                       )))) {
                  if (uVar8 == 0) {
                    printf(" %*s",param_5,&DAT_0002c6c0,acStack_248);
                    iVar7 = *(int *)(param_2 + 0x70);
                  }
                  else {
                    snprintf(acStack_238,0x10,"%s%d%s",acStack_248,uVar8 - 1,acStack_248 + sVar4 + 1
                            );
                    local_229 = 0;
                    printf(" %*s",param_5,acStack_238);
                    iVar7 = *(int *)(param_2 + 0x70);
                  }
                }
                uVar8 = uVar8 + 1;
              } while (((int)uVar8 < iVar7) &&
                      (piVar6 = *(int **)(param_2 + 0xb8), (int)uVar8 <= piVar6[1]));
            }
          }
        }
        local_24c = pcVar2;
        uVar9 = uVar9 - 1;
        pcVar2 = strtok((char *)0x0,";");
        param_4 = uVar10;
      } while (pcVar2 != (char *)0x0);
      if (local_24c != (char *)0x0) {
        printf(" %s",local_24c);
      }
    }
    putchar(10);
  }
  return;
}



/* ===== FUN_00018fc8 @ 00018fc8 size=892 ===== */

void FUN_00018fc8(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x98) & 1;
  if (param_2 == 0 && (param_3 == 0 && param_4 == 0)) {
    if (uVar1 == 0) {
      iVar4 = 9;
      iVar5 = 0;
    }
    else {
      iVar4 = 5;
      iVar5 = 0;
    }
    do {
      iVar3 = iVar5 + 1;
      FUN_00018938(0,param_1,iVar5);
      iVar5 = iVar3;
    } while (iVar4 != iVar3);
    FUN_00018938((int)DAT_00019350,param_1,9);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x8c) * param_2;
  if (uVar1 == 0) {
    uVar1 = param_5[1] - (param_5[0x11] + (uint)(*param_5 < param_5[0x10]));
    uVar2 = param_6[1] - (param_6[0x11] + (uint)(*param_6 < param_6[0x10]));
    bVar6 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar6 = *param_6 - param_6[0x10] <= *param_5 - param_5[0x10];
    }
    if (bVar6) {
      FUN_0002812c();
    }
    FUN_00018938(param_1,iVar5);
    iVar5 = *(int *)(param_1 + 0x8c);
    uVar1 = param_5[3] - (param_5[0x13] + (uint)(param_5[2] < param_5[0x12]));
    uVar2 = param_6[3] - (param_6[0x13] + (uint)(param_6[2] < param_6[0x12]));
    bVar6 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar6 = param_6[2] - param_6[0x12] <= param_5[2] - param_5[0x12];
    }
    if (bVar6) {
      uVar7 = FUN_0002812c();
    }
    else {
      uVar7 = (undefined4)DAT_00019348;
    }
    FUN_00018938(uVar7,param_1,iVar5 * param_2 + 1);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[4],param_6[5],param_5[4],param_5[5],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 2);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[0xc],param_6[0xd],param_5[0xc],param_5[0xd],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 5);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[0xe],param_6[0xf],param_5[0xe],param_5[0xf],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 6);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[0x10],param_6[0x11],param_5[0x10],param_5[0x11],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 7);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[0x12],param_6[0x13],param_5[0x12],param_5[0x13],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 8);
  }
  else {
    FUN_0002812c();
    FUN_00018938(param_1,iVar5);
    iVar5 = *(int *)(param_1 + 0x8c);
    FUN_0002812c(param_6[2],param_6[3],param_5[2],param_5[3],param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 1);
    iVar5 = *(int *)(param_1 + 0x8c);
    uVar2 = param_5[4] + param_5[0xc];
    uVar1 = param_6[4] + param_6[0xc];
    FUN_0002812c(uVar1 + param_6[0xe],
                 param_6[5] + param_6[0xd] + (uint)CARRY4(param_6[4],param_6[0xc]) + param_6[0xf] +
                 (uint)CARRY4(uVar1,param_6[0xe]),uVar2 + param_5[0xe],
                 param_5[5] + param_5[0xd] + (uint)CARRY4(param_5[4],param_5[0xc]) + param_5[0xf] +
                 (uint)CARRY4(uVar2,param_5[0xe]),param_3,param_4);
    FUN_00018938(param_1,iVar5 * param_2 + 2);
  }
  iVar5 = *(int *)(param_1 + 0x8c);
  FUN_0002812c(param_6[8],param_6[9],param_5[8],param_5[9],param_3,param_4);
  FUN_00018938(param_1,iVar5 * param_2 + 3);
  iVar5 = *(int *)(param_1 + 0x8c);
  FUN_0002812c(param_6[10],param_6[0xb],param_5[10],param_5[0xb],param_3,param_4);
  FUN_00018938(param_1,iVar5 * param_2 + 4);
  iVar5 = *(int *)(param_1 + 0x8c);
  bVar6 = param_6[7] <= param_5[7];
  if (param_5[7] == param_6[7]) {
    bVar6 = param_6[6] <= param_5[6];
  }
  if (bVar6) {
    uVar7 = FUN_0002812c();
  }
  else {
    uVar7 = (undefined4)DAT_00019348;
  }
  FUN_00018938(uVar7,param_1,iVar5 * param_2 + 9);
  return;
}



/* ===== FUN_00019358 @ 00019358 size=1052 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019358(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined8 uVar11;
  undefined4 extraout_s1_06;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 extraout_s1_11;
  undefined4 extraout_s1_12;
  undefined4 extraout_s1_13;
  int iVar16;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  undefined4 extraout_s1_10;
  
  if (param_2 == 0) {
    FUN_0002922c(1,&DAT_0002c6b8,&DAT_0002c6bc,0);
  }
  else {
    FUN_0002922c(0,&DAT_0002c6c4,"",param_2 + -1);
    if (param_3 == 0 && param_4 == 0) {
      FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,0,5,9,2);
      if ((*(uint *)(param_1 + 0x98) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x98) & 2) != 0) {
          FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,0,5,9,2);
        }
      }
      else {
        FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,0,1,9,2);
      }
      goto LAB_00019540;
    }
  }
  uVar1 = *param_5;
  uVar4 = *param_6;
  uVar5 = _DAT_0003d150 >> 0x14 & 1;
  iVar16 = param_4;
  if ((*(uint *)(param_1 + 0x98) & 1) == 0) {
    uVar2 = param_5[1] - (param_5[0x11] + (uint)(uVar1 < param_5[0x10]));
    uVar3 = param_6[1] - (param_6[0x11] + (uint)(uVar4 < param_6[0x10]));
    bVar6 = uVar3 <= uVar2;
    if (uVar2 == uVar3) {
      bVar6 = uVar4 - param_6[0x10] <= uVar1 - param_5[0x10];
    }
    uVar11 = DAT_00019778;
    if (bVar6) {
      uVar7 = FUN_0002812c();
      uVar11 = CONCAT44(extraout_s1_13,uVar7);
    }
    uVar1 = param_5[3] - (param_5[0x13] + (uint)(param_5[2] < param_5[0x12]));
    uVar4 = param_6[3] - (param_6[0x13] + (uint)(param_6[2] < param_6[0x12]));
    bVar6 = uVar4 <= uVar1;
    if (uVar1 == uVar4) {
      bVar6 = param_6[2] - param_6[0x12] <= param_5[2] - param_5[0x12];
    }
    uVar12 = DAT_00019778;
    if (bVar6) {
      uVar7 = FUN_0002812c();
      uVar12 = CONCAT44(extraout_s1_12,uVar7);
    }
    uVar7 = FUN_0002812c(param_6[4],param_6[5],param_5[4],param_5[5],param_3,param_4);
    uVar13 = CONCAT44(extraout_s1,uVar7);
    uVar7 = FUN_0002812c(param_6[8],param_6[9],param_5[8],param_5[9],param_3,param_4);
    uVar14 = CONCAT44(extraout_s1_00,uVar7);
    uVar7 = FUN_0002812c(param_6[10],param_6[0xb],param_5[10],param_5[0xb],param_3,param_4);
    uVar15 = CONCAT44(extraout_s1_01,uVar7);
    uVar7 = FUN_0002812c(param_6[0xc],param_6[0xd],param_5[0xc],param_5[0xd],param_3,param_4);
    uVar8 = FUN_0002812c(param_6[0xe],param_6[0xf],param_5[0xe],param_5[0xf],param_3,param_4);
    uVar9 = FUN_0002812c(param_6[0x10],param_6[0x11],param_5[0x10],param_5[0x11],param_3,param_4);
    uVar10 = FUN_0002812c(param_6[0x12],param_6[0x13],param_5[0x12],param_5[0x13],param_3,param_4);
    FUN_00028ffc(uVar5,1,9,9,2,iVar16,uVar11,uVar12,uVar13,uVar14,uVar15,
                 CONCAT44(extraout_s1_02,uVar7),CONCAT44(extraout_s1_03,uVar8),
                 CONCAT44(extraout_s1_04,uVar9),CONCAT44(extraout_s1_05,uVar10));
  }
  else {
    uVar7 = FUN_0002812c(uVar4,param_6[1],uVar1,param_5[1],param_3,param_4);
    uVar8 = FUN_0002812c(param_6[2],param_6[3],param_5[2],param_5[3],param_3,param_4);
    uVar12 = CONCAT44(extraout_s1_07,uVar8);
    uVar1 = param_5[0xc] + param_5[4];
    uVar4 = param_6[0xc] + param_6[4];
    uVar8 = FUN_0002812c(uVar4 + param_6[0xe],
                         param_6[0xd] + param_6[5] + (uint)CARRY4(param_6[0xc],param_6[4]) +
                         param_6[0xf] + (uint)CARRY4(uVar4,param_6[0xe]),param_5[0xe] + uVar1,
                         param_5[0xf] +
                         param_5[0xd] + param_5[5] + (uint)CARRY4(param_5[0xc],param_5[4]) +
                         (uint)CARRY4(param_5[0xe],uVar1),param_3,param_4);
    uVar13 = CONCAT44(extraout_s1_08,uVar8);
    uVar8 = FUN_0002812c(param_6[8],param_6[9],param_5[8],param_5[9],param_3,param_4);
    uVar14 = CONCAT44(extraout_s1_09,uVar8);
    uVar8 = FUN_0002812c(param_6[10],param_6[0xb],param_5[10],param_5[0xb],param_3,param_4);
    uVar15 = CONCAT44(extraout_s1_10,uVar8);
    FUN_00028ffc(uVar5,1,5,9,2,iVar16,CONCAT44(extraout_s1_06,uVar7),uVar12,uVar13,uVar14,uVar15);
  }
  uVar1 = _DAT_0003d150 >> 0x14;
  bVar6 = param_6[7] <= param_5[7];
  if (param_5[7] == param_6[7]) {
    bVar6 = param_6[6] <= param_5[6];
  }
  uVar11 = DAT_00019778;
  if (bVar6) {
    uVar7 = FUN_0002812c();
    uVar11 = CONCAT44(extraout_s1_11,uVar7);
    iVar16 = param_4;
  }
  FUN_00028ffc(uVar1 & 1,2,1,9,2,iVar16,uVar11,uVar12,uVar13,uVar14,uVar15);
LAB_00019540:
  putchar(10);
  return;
}



/* ===== FUN_00019780 @ 00019780 size=828 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019780(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte local_42c [1032];
  
  memset(local_42c,0,0x401);
  if ((DAT_0003f2e4 != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
    FUN_00018c48(param_1,*(int *)(param_1 + 0x8c) *
                         *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0xb0));
  }
  if ((DAT_0003d15c != 0) && ((param_2 != 2 || ((_DAT_0003d150 & 0x1000000) == 0)))) {
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,
                 (*(uint *)(param_1 + 0x98) & 3) >> 1,7,9,0);
  }
  iVar6 = param_1 + param_3 * 4;
  iVar2 = *(int *)(iVar6 + 0x7c);
  iVar1 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) < iVar2) {
    *(int *)(param_1 + 0x70) = iVar2;
    iVar1 = iVar2;
  }
  if (iVar1 < 2) {
    lVar8 = 1;
  }
  else {
    lVar8 = FUN_00018050(param_1,param_2,param_3,&DAT_0003d150,_DAT_0003d150,DAT_0003d154,local_42c)
    ;
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if ((0 < iVar1) && (piVar3 = *(int **)(param_1 + 0xb8), -1 < piVar3[1])) {
    uVar4 = 0;
    do {
      if ((((int)(uint)*(byte *)(*piVar3 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1U) != 0) &&
         (((int)(uint)local_42c[(int)uVar4 >> 3] >> (uVar4 & 7) & 1U) == 0)) {
        iVar2 = *(int *)(param_1 + 0x94) * uVar4;
        iVar5 = *(int *)(iVar6 + 0x9c) + iVar2;
        iVar2 = *(int *)(param_1 + (param_2 + 0x26) * 4 + 4) + iVar2;
        if (uVar4 == 0) {
          if (iVar1 == 1) {
            lVar8 = FUN_000274f0(iVar5,iVar2);
          }
          if (lVar8 == 0) {
            lVar8 = 1;
          }
        }
        else {
          lVar8 = FUN_000274f0(iVar5,iVar2);
        }
        uVar7 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if ((_DAT_0003d150 & 0x1000000) != 0) {
          if (param_2 == 2) {
            FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,
                         (*(uint *)(param_1 + 0x98) & 3) >> 1,7,9,0);
            FUN_000258a0(*(uint *)(param_1 + 0x98) & 1,uVar4,0,
                         *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x8c) * uVar4 * 8);
            FUN_000258a0(*(uint *)(param_1 + 0x98) & 1,uVar4,1,
                         *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0x8c) * uVar4 * 8);
          }
          else {
            FUN_00018fc8(param_1,uVar4,(int)lVar8,uVar7,iVar5,iVar2);
          }
        }
        printf("%-11s",&DAT_00045318 + param_3 * 0x40);
        FUN_00019358(param_1,uVar4,(int)lVar8,uVar7,iVar5,iVar2);
      }
      iVar1 = *(int *)(param_1 + 0x70);
      uVar4 = uVar4 + 1;
    } while (((int)uVar4 < iVar1) && (piVar3 = *(int **)(param_1 + 0xb8), (int)uVar4 <= piVar3[1]));
  }
  return;
}



/* ===== FUN_00019abc @ 00019abc size=564 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019abc(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar2 = *(uint **)(param_1 + param_3 * 4 + 0x9c);
  puVar1 = *(uint **)(param_1 + param_2 * 4 + 0x9c);
  local_38 = 1;
  uStack_34 = 0;
  if (DAT_0003f2e4 != 0) {
    FUN_00018c48(param_1,*(undefined4 *)(param_1 + 0x8c));
  }
  if (DAT_0003d15c == 0) {
    if (param_2 == 2) {
      if (((_DAT_0003d150 & 0x1000000) == 0) ||
         (FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0),
         (_DAT_0003d150 & 0x1000000) == 0)) goto LAB_00019b74;
LAB_00019cc0:
      FUN_000259f8(0,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xa8));
      FUN_000259f8(1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xac));
      goto LAB_00019b74;
    }
    if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_00019b74;
  }
  else {
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0);
    if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_00019b74;
    if (param_2 == 2) goto LAB_00019cc0;
  }
  FUN_00018970(param_1 + 0x54,puVar2,puVar1,&local_38,param_5,param_6,
               *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),&local_38);
LAB_00019b74:
  printf("%-11s",&DAT_00045318 + param_3 * 0x40);
  FUN_0002a458(param_5,param_6);
  FUN_0002a458(*puVar2 - *puVar1,puVar2[1] - (puVar1[1] + (uint)(*puVar2 < *puVar1)));
  VectorUnsignedToFloat(puVar2[2] - puVar1[2],(byte)(in_fpscr >> 0x16) & 3);
  FUN_00028e08(0xffffffff,0,2,9,2);
  putchar(10);
  return;
}



/* ===== FUN_00019cf8 @ 00019cf8 size=1056 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019cf8(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  byte local_43c [1032];
  
  memset(local_43c,0,0x401);
  if ((DAT_0003f2e4 != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
    FUN_00018c48(param_1,*(int *)(param_1 + 0x8c) *
                         *(int *)(param_1 + 0x74) * *(int *)(param_1 + 0xb0));
  }
  iVar6 = param_1 + param_3 * 4;
  uVar12 = CONCAT44(DAT_0003d154,_DAT_0003d150);
  if (*(int *)(param_1 + 0x70) < *(int *)(iVar6 + 0x7c)) {
    *(int *)(param_1 + 0x70) = *(int *)(iVar6 + 0x7c);
  }
  FUN_0001871c(param_1,param_2,param_3,local_43c,uVar12,local_43c);
  if ((param_2 != 2) || ((_DAT_0003d150 & 0x1000000) == 0)) {
    uVar12 = CONCAT44(local_43c,9);
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,-(_DAT_0003d150 >> 2 & 1),9,
                 local_43c);
  }
  if (0 < *(int *)(param_1 + 0x74)) {
    iVar5 = 0;
    iVar7 = param_1 + (param_2 + 0x26) * 4;
    do {
      iVar9 = *(int *)(param_1 + 0x94) * iVar5;
      piVar8 = (int *)(*(int *)(iVar6 + 0x9c) + iVar9);
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_00019e4c:
        if (((_DAT_0003d150 & 0x2000000) == 0) || (*piVar8 != *(int *)(*(int *)(iVar7 + 4) + iVar9))
           ) {
          if (param_2 == 2) {
            uVar1 = _DAT_0003d150 >> 0x18 & 1;
          }
          else {
            uVar1 = 0;
          }
          if (uVar1 != 0) {
            piVar4 = piVar8 + 1;
            FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,
                         -(_DAT_0003d150 >> 2 & 1),9,local_43c);
            FUN_00025aa8(0,param_1,param_3,iVar5,piVar4,local_43c,*(undefined4 *)(param_1 + 0xa8));
            uVar12 = CONCAT44(local_43c,piVar4);
            FUN_00025aa8(1,param_1,param_3,iVar5,piVar4,local_43c,*(undefined4 *)(param_1 + 0xac));
          }
          printf("%-11s",&DAT_00045318 + param_3 * 0x40);
          if ((_DAT_0003d150 & 4) == 0) {
            FUN_0002922c(1,&DAT_0002c6cc,piVar8 + 1,0);
            iVar9 = *(int *)(iVar6 + 0x7c);
            if ((0 < iVar9) && (-1 < *(int *)(*(int *)(param_1 + 0xb8) + 4))) goto LAB_00019ed0;
LAB_0001a008:
            if ((_DAT_0003d150 & 4) != 0) goto LAB_0001a044;
          }
          else {
            iVar9 = *(int *)(iVar6 + 0x7c);
            if ((0 < iVar9) && (-1 < *(int *)(*(int *)(param_1 + 0xb8) + 4))) {
LAB_00019ed0:
              uVar1 = 0;
              do {
                uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
                if (((int)(uint)local_43c[(int)uVar1 >> 3] >> (uVar1 & 7) & 1U) == 0) {
                  iVar9 = *(int *)(param_1 + 0x74) * uVar1 * *(int *)(param_1 + 0x94) +
                          iVar5 * *(int *)(param_1 + 0x94);
                  uVar2 = *(uint *)(*(int *)(iVar6 + 0x9c) + iVar9);
                  uVar3 = *(uint *)(*(int *)(iVar7 + 4) + iVar9);
                  if ((uVar1 != 0) || (dVar10 = 0.0, uVar3 <= uVar2)) {
                    dVar10 = (double)VectorUnsignedToFloat
                                               (uVar2 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
                    dVar11 = (double)FUN_0002a458((int)param_5,(int)((ulonglong)param_5 >> 0x20));
                    dVar10 = (dVar10 / dVar11) * DAT_0001a118;
                  }
                  uVar12 = CONCAT44(uVar13,2);
                  FUN_00028e08(0xffffffff,0,1,9,2,uVar13,dVar10);
                  if (param_2 == 2) {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = _DAT_0003d150 >> 0x18 & 1;
                  }
                  if (uVar2 != 0) {
                    FUN_00018938(SUB84(dVar10,0),param_1,
                                 *(int *)(param_1 + 0x8c) *
                                 (*(int *)(param_1 + 0x74) * uVar1 + iVar5));
                  }
                  iVar9 = *(int *)(iVar6 + 0x7c);
                }
                uVar1 = uVar1 + 1;
              } while (((int)uVar1 < iVar9) &&
                      ((int)uVar1 <= *(int *)(*(int *)(param_1 + 0xb8) + 4)));
              goto LAB_0001a008;
            }
LAB_0001a044:
            FUN_0002922c(1,&DAT_0002c6b8,piVar8 + 1,0);
          }
          putchar(10);
        }
      }
      else {
        iVar9 = FUN_000166c0(*(int *)(param_1 + 0x40),piVar8 + 1);
        if (iVar9 != 0) {
          iVar9 = *(int *)(param_1 + 0x94) * iVar5;
          goto LAB_00019e4c;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x74));
  }
  return;
}



/* ===== FUN_0001ab34 @ 0001ab34 size=1748 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ab34(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 in_stack_ffffff80;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffff80 >> 0x20);
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  if (param_2 == 0) {
    uVar13 = *(undefined8 *)param_1;
    uVar2 = (uint)uVar13 + param_1[2];
    uVar9 = uVar2 + param_1[4];
    uVar3 = uVar9 + param_1[0x18];
    uVar2 = (int)((ulonglong)uVar13 >> 0x20) + param_1[3] + (uint)CARRY4((uint)uVar13,param_1[2]) +
            param_1[5] + (uint)CARRY4(uVar2,param_1[4]) + param_1[0x19] +
            (uint)CARRY4(uVar9,param_1[0x18]);
    bVar11 = uVar8 <= uVar2;
    bVar10 = uVar2 == uVar8;
    if (bVar10) {
      bVar11 = uVar7 <= uVar3;
    }
    uVar9 = uVar3;
    if (bVar11 && (!bVar10 || uVar3 != uVar7)) {
      uVar9 = uVar7;
    }
    if (bVar11 && (!bVar10 || uVar3 != uVar7)) {
      uVar2 = uVar8;
    }
    FUN_00028ca0(param_3,3,9,uVar8,uVar13,param_1[0x20],param_1[0x21],uVar7 - uVar9,
                 uVar8 - (uVar2 + (uVar7 < uVar9)));
    uVar21 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar8 = param_1[6];
    uVar3 = param_1[7];
    uVar7 = _DAT_0003d150 >> 0x14;
    dVar12 = DAT_0001aec8;
    if (uVar8 != 0 || uVar3 != 0) {
      dVar12 = (double)FUN_0002a458(uVar8 - uVar9,uVar3 - (uVar2 + (uVar8 < uVar9)));
      dVar14 = (double)FUN_0002a458(uVar8,uVar3);
      dVar12 = (dVar12 / dVar14) * DAT_0001aed0;
    }
    FUN_00028ffc(uVar7 & 1,1,1,9,2,uVar21,dVar12);
    uVar13 = *(undefined8 *)(param_1 + 0xe);
    uVar22 = *(undefined8 *)(param_1 + 4);
    uVar19 = *(undefined8 *)(param_1 + 2);
    FUN_00028ca0(param_3,3,9);
    uVar8 = param_1[10];
    uVar3 = param_1[6] + uVar8;
    uVar9 = param_1[7] + param_1[0xb] + (uint)CARRY4(param_1[6],uVar8);
    uVar7 = _DAT_0003d150 >> 0x14;
    uVar2 = uVar3 | uVar9;
    dVar12 = DAT_0001aec8;
    if (uVar2 != 0) {
      dVar12 = (double)FUN_0002a458(param_1[0xe],param_1[0xf],uVar8,uVar2,uVar19,uVar22,uVar13);
      dVar14 = (double)FUN_0002a458(uVar3,uVar9);
      dVar12 = (dVar12 / dVar14) * DAT_0001aed0;
    }
    FUN_00028ffc(uVar7 & 1,1,1,9,2,(int)((ulonglong)uVar19 >> 0x20),dVar12);
    FUN_00028ca0(param_3,3,9);
    if (param_4 != 0) {
      FUN_00028ca0(param_3,5,9,param_4,param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                   param_1[0x1a],param_1[0x1b],param_1[0x1c],param_1[0x1d],param_1[0x1e],
                   param_1[0x1f]);
    }
    _DAT_0003f300 =
         CONCAT44(DAT_0003f304 + param_1[1] + (uint)CARRY4(_DAT_0003f300,*param_1),
                  _DAT_0003f300 + *param_1);
    _DAT_0003f308 =
         CONCAT44(DAT_0003f30c + param_1[3] + (uint)CARRY4(_DAT_0003f308,param_1[2]),
                  _DAT_0003f308 + param_1[2]);
    DAT_0003f310 = CONCAT44((int)((ulonglong)DAT_0003f310 >> 0x20) + param_1[5] +
                            (uint)CARRY4((uint)DAT_0003f310,param_1[4]),
                            (uint)DAT_0003f310 + param_1[4]);
    DAT_0003f318 = CONCAT44((int)((ulonglong)DAT_0003f318 >> 0x20) + param_1[0xf] +
                            (uint)CARRY4((uint)DAT_0003f318,param_1[0xe]),
                            (uint)DAT_0003f318 + param_1[0xe]);
    _DAT_0003f320 =
         CONCAT44(DAT_0003f324 + param_1[0x11] + (uint)CARRY4(_DAT_0003f320,param_1[0x10]),
                  _DAT_0003f320 + param_1[0x10]);
    _DAT_0003f328 =
         CONCAT44(DAT_0003f32c + param_1[0x13] + (uint)CARRY4(_DAT_0003f328,param_1[0x12]),
                  _DAT_0003f328 + param_1[0x12]);
    DAT_0003f330 = CONCAT44((int)((ulonglong)DAT_0003f330 >> 0x20) + param_1[0x15] +
                            (uint)CARRY4((uint)DAT_0003f330,param_1[0x14]),
                            (uint)DAT_0003f330 + param_1[0x14]);
    _DAT_0003f338 =
         CONCAT44(param_1[0x17] + DAT_0003f33c + (uint)CARRY4(param_1[0x16],_DAT_0003f338),
                  param_1[0x16] + _DAT_0003f338);
    _DAT_0003f340 =
         CONCAT44(DAT_0003f344 + param_1[0x19] + (uint)CARRY4(_DAT_0003f340,param_1[0x18]),
                  _DAT_0003f340 + param_1[0x18]);
    DAT_0003f348 = CONCAT44((int)((ulonglong)DAT_0003f348 >> 0x20) + param_1[0x1b] +
                            (uint)CARRY4((uint)DAT_0003f348,param_1[0x1a]),
                            (uint)DAT_0003f348 + param_1[0x1a]);
    _DAT_0003f350 =
         CONCAT44(param_1[0x1d] + DAT_0003f354 + (uint)CARRY4(param_1[0x1c],_DAT_0003f350),
                  param_1[0x1c] + _DAT_0003f350);
    _DAT_0003f358 =
         CONCAT44(param_1[0x1f] + DAT_0003f35c + (uint)CARRY4(param_1[0x1e],_DAT_0003f358),
                  param_1[0x1e] + _DAT_0003f358);
    _DAT_0003f360 =
         CONCAT44(param_1[0x21] + DAT_0003f364 + (uint)CARRY4(param_1[0x20],_DAT_0003f360),
                  param_1[0x20] + _DAT_0003f360);
  }
  else {
    uVar21 = _DAT_0003f300;
    uVar1 = DAT_0003f304;
    uVar13 = VectorAdd(_DAT_0003f300,_DAT_0003f308,8);
    uVar13 = VectorAdd(uVar13,DAT_0003f310,8);
    uVar13 = VectorAdd(uVar13,_DAT_0003f340,8);
    dVar12 = (double)VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
    dVar14 = (double)FUN_0002a458(uVar7,uVar8);
    uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
    dVar15 = (double)FUN_0002a458((int)uVar13,uVar5);
    dVar14 = dVar14 - dVar15 / dVar12;
    dVar15 = (double)FUN_0002a458(_DAT_0003f360,DAT_0003f364);
    dVar15 = dVar15 / dVar12;
    dVar16 = (double)FUN_0002a458(uVar21,uVar1);
    lVar20 = (ulonglong)uVar2 << 0x20;
    dVar16 = dVar16 / dVar12;
    FUN_00028e08(param_3,0,3,9,0);
    uVar7 = _DAT_0003d150 >> 0x14;
    dVar12 = DAT_0001aec8;
    if (param_1[6] != 0 || param_1[7] != 0) {
      dVar12 = (double)FUN_0002a458();
      FUN_0002a4cc((int)uVar13,uVar5,DAT_0003f2d8,0,lVar20,dVar16,dVar15,dVar14);
      dVar14 = (double)FUN_0002a458();
      dVar12 = ((dVar12 - dVar14) / dVar12) * DAT_0001aed0;
    }
    uVar21 = (undefined4)((ulonglong)lVar20 >> 0x20);
    FUN_00028ffc(uVar7 & 1,1,1,9,2,uVar21,dVar12);
    dVar14 = (double)VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
    dVar15 = (double)FUN_0002a458((undefined4)DAT_0003f318,DAT_0003f318._4_4_);
    dVar15 = dVar15 / dVar14;
    dVar16 = (double)FUN_0002a458((undefined4)DAT_0003f310,DAT_0003f310._4_4_);
    dVar16 = dVar16 / dVar14;
    dVar12 = (double)FUN_0002a458(_DAT_0003f308,DAT_0003f30c);
    dVar12 = dVar12 / dVar14;
    FUN_00028e08(param_3,0,3,9,0,uVar21,dVar12,dVar16,dVar15);
    iVar4 = param_1[6] + param_1[10];
    iVar6 = param_1[7] + param_1[0xb] + (uint)CARRY4(param_1[6],param_1[10]);
    uVar7 = _DAT_0003d150 >> 0x14;
    if (iVar4 == 0 && iVar6 == 0) {
      dVar12 = DAT_0001aec8;
    }
    if (iVar4 != 0 || iVar6 != 0) {
      FUN_0002a4cc((undefined4)DAT_0003f318,DAT_0003f318._4_4_,DAT_0003f2d8,0);
      dVar12 = (double)FUN_0002a458();
      dVar14 = (double)FUN_0002a458(iVar4,iVar6);
      dVar12 = (dVar12 / dVar14) * DAT_0001aed0;
    }
    FUN_00028ffc(uVar7 & 1,1,1,9,2,uVar21,dVar12);
    dVar12 = (double)VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
    dVar14 = (double)FUN_0002a458((undefined4)DAT_0003f330,DAT_0003f330._4_4_);
    dVar14 = dVar14 / dVar12;
    dVar15 = (double)FUN_0002a458(_DAT_0003f328,DAT_0003f32c);
    dVar15 = dVar15 / dVar12;
    dVar16 = (double)FUN_0002a458(_DAT_0003f320,DAT_0003f324);
    FUN_00028e08(param_3,0,3,9,0,uVar21,dVar16 / dVar12,dVar15,dVar14);
    if (param_4 != 0) {
      dVar14 = (double)FUN_0002a458(_DAT_0003f358,DAT_0003f35c);
      dVar12 = (double)VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
      dVar14 = dVar14 / dVar12;
      dVar15 = (double)FUN_0002a458(_DAT_0003f350,DAT_0003f354);
      dVar15 = dVar15 / dVar12;
      dVar16 = (double)FUN_0002a458((undefined4)DAT_0003f348,DAT_0003f348._4_4_);
      dVar16 = dVar16 / dVar12;
      dVar17 = (double)FUN_0002a458(_DAT_0003f340,DAT_0003f344);
      dVar17 = dVar17 / dVar12;
      dVar18 = (double)FUN_0002a458(_DAT_0003f338,DAT_0003f33c);
      FUN_00028e08(param_3,0,5,9,0,uVar21,dVar18 / dVar12,dVar17,dVar16,dVar15,dVar14);
    }
    DAT_0003f318 = 0;
    DAT_0003f310 = 0;
    _DAT_0003f308 = 0;
    _DAT_0003f300 = 0;
    DAT_0003f330 = 0;
    _DAT_0003f328 = 0;
    _DAT_0003f320 = 0;
    DAT_0003f348 = 0;
    _DAT_0003f340 = 0;
    _DAT_0003f338 = 0;
    _DAT_0003f360 = 0;
    _DAT_0003f358 = 0;
    _DAT_0003f350 = 0;
  }
  putchar(10);
  return;
}



/* ===== FUN_0001b21c @ 0001b21c size=748 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b21c(int param_1,uint *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  uint local_80;
  uint uStack_7c;
  undefined1 auStack_74 [72];
  
  memcpy(auStack_74,DAT_0001b518,0x44);
  if (DAT_0003d15c == 0) {
    if (param_4 == 0) {
      if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_0001b47c;
LAB_0001b308:
      FUN_00018970(param_1 + 0x54,param_2,0,*(undefined4 *)(param_1 + 0xa8),0,
                   *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),auStack_74);
      uVar2 = *param_2 + param_2[2];
      uVar3 = param_2[4] + uVar2;
      uVar4 = param_2[6];
      uVar6 = param_2[7];
      uVar5 = uVar3 + param_2[0x18];
      uVar2 = param_2[5] + param_2[1] + param_2[3] + (uint)CARRY4(*param_2,param_2[2]) +
              (uint)CARRY4(param_2[4],uVar2) + param_2[0x19] + (uint)CARRY4(uVar3,param_2[0x18]);
      bVar9 = uVar2 <= uVar6;
      if (uVar6 == uVar2) {
        bVar9 = uVar5 <= uVar4;
      }
      local_80 = uVar4;
      uStack_7c = uVar6;
      if (bVar9 && (uVar6 != uVar2 || uVar4 != uVar5)) {
        local_80 = uVar5;
        uStack_7c = uVar2;
      }
      if (uVar4 == 0 && uVar6 == 0) {
        uVar1 = (undefined4)DAT_0001b508;
      }
      else {
        dVar10 = (double)FUN_0002a458(uVar4 - local_80,uVar6 - (uStack_7c + (uVar4 < local_80)));
        dVar11 = (double)FUN_0002a458(uVar4,uVar6);
        uVar1 = SUB84((dVar10 / dVar11) * DAT_0001b510,0);
      }
      FUN_00018938(uVar1,param_1,3);
      iVar7 = param_2[6] + param_2[10];
      iVar8 = param_2[7] + param_2[0xb] + (uint)CARRY4(param_2[6],param_2[10]);
      if (iVar7 == 0 && iVar8 == 0) {
        uVar1 = (undefined4)DAT_0001b508;
      }
      else {
        dVar10 = (double)FUN_0002a458(param_2[0xe],param_2[0xf]);
        dVar11 = (double)FUN_0002a458(iVar7,iVar8);
        uVar1 = SUB84((dVar10 / dVar11) * DAT_0001b510,0);
      }
      FUN_00018938(uVar1,param_1,7);
      uVar1 = FUN_0002a458(param_2[6] - local_80,param_2[7] - (uStack_7c + (param_2[6] < local_80)))
      ;
      FUN_00018938(uVar1,param_1,2);
      goto LAB_0001b47c;
    }
    if (((_DAT_0003d150 & 0x1000000) == 0) ||
       (FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0),
       (_DAT_0003d150 & 0x1000000) == 0)) goto LAB_0001b47c;
  }
  else {
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0);
    if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_0001b47c;
    if (param_4 == 0) goto LAB_0001b308;
  }
  FUN_00025cc0(0,*(undefined4 *)(param_1 + 0xa8),param_5,(*(uint *)(param_1 + 0x98) & 0x1ff) >> 8);
  FUN_00025cc0(1,*(undefined4 *)(param_1 + 0xac),param_5,(*(uint *)(param_1 + 0x98) & 0x1ff) >> 8);
LAB_0001b47c:
  printf("%-11s",&DAT_00045318 + param_3 * 0x40);
  FUN_0001ab34(param_2,param_4,param_5,(*(uint *)(param_1 + 0x98) & 0x1ff) >> 8);
  return;
}



/* ===== FUN_0001b51c @ 0001b51c size=900 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b51c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  double dVar9;
  double dVar10;
  
  if (param_2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x24);
    FUN_00028ca0(param_3,2,9,iVar4,uVar3,iVar4,*(uint *)(param_1 + 0x28) - uVar3,
                 *(int *)(param_1 + 0x2c) - (iVar4 + (uint)(*(uint *)(param_1 + 0x28) < uVar3)));
    uVar5 = *(uint *)(param_1 + 0x28);
    iVar7 = *(int *)(param_1 + 0x2c);
    uVar3 = _DAT_0003d150 >> 0x14;
    dVar9 = DAT_0001b8a0;
    if (uVar5 != 0 || iVar7 != 0) {
      dVar9 = (double)FUN_0002a458(uVar5 - *(uint *)(param_1 + 0x20),
                                   iVar7 - (*(int *)(param_1 + 0x24) +
                                           (uint)(uVar5 < *(uint *)(param_1 + 0x20))));
      dVar10 = (double)FUN_0002a458(uVar5,iVar7);
      dVar9 = (dVar9 / dVar10) * DAT_0001b8a8;
    }
    FUN_00028ffc(uVar3 & 1,1,1,9,2,iVar4,dVar9);
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    FUN_00028ca0(param_3,1,9);
    uVar6 = *(uint *)(param_1 + 0x28);
    iVar7 = *(int *)(param_1 + 0x2c);
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x24);
    uVar3 = _DAT_0003d150 >> 0x14;
    if (iVar7 == iVar4 && uVar6 == uVar5) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = (double)FUN_0002a458(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      dVar10 = (double)FUN_0002a458(uVar6 - uVar5,iVar7 - (iVar4 + (uint)(uVar6 < uVar5)));
      dVar9 = (dVar9 / dVar10) * DAT_0001b8a8;
    }
    FUN_00028ffc(uVar3 & 1,0,1,9,2,uVar8,dVar9);
    _DAT_0003f368 =
         CONCAT44(*(int *)(param_1 + 0x24) + DAT_0003f36c +
                  (uint)CARRY4(*(uint *)(param_1 + 0x20),_DAT_0003f368),
                  *(uint *)(param_1 + 0x20) + _DAT_0003f368);
    _DAT_0003f370 =
         CONCAT44(DAT_0003f374 + *(int *)(param_1 + 0x2c) +
                  (uint)CARRY4(_DAT_0003f370,*(uint *)(param_1 + 0x28)),
                  _DAT_0003f370 + *(uint *)(param_1 + 0x28));
    _DAT_0003f378 =
         CONCAT44(*(int *)(param_1 + 0x34) + DAT_0003f37c +
                  (uint)CARRY4(*(uint *)(param_1 + 0x30),DAT_0003f378),
                  *(uint *)(param_1 + 0x30) + DAT_0003f378);
  }
  else {
    VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
    FUN_0002a458(_DAT_0003f368,DAT_0003f36c);
    FUN_0002a458(_DAT_0003f370,DAT_0003f374);
    FUN_00028e08(param_3,0,2,9,0);
    uVar3 = _DAT_0003d150 >> 0x14;
    if (_DAT_0003f370 != 0 || DAT_0003f374 != 0) {
      VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
      FUN_0002a458();
      FUN_0002a458(_DAT_0003f368,DAT_0003f36c);
    }
    FUN_00028ffc(uVar3 & 1,1,1,9,2);
    FUN_0002a458(DAT_0003f378,DAT_0003f37c);
    VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
    FUN_00028e08(param_3,0,1,9,0);
    iVar1 = _DAT_0003f370;
    iVar2 = DAT_0003f374;
    iVar4 = _DAT_0003f368;
    iVar7 = DAT_0003f36c;
    uVar3 = _DAT_0003d150 >> 0x14;
    if (DAT_0003f374 != DAT_0003f36c || _DAT_0003f370 != _DAT_0003f368) {
      FUN_0002a458(DAT_0003f378,DAT_0003f37c);
      VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
      FUN_0002a458(iVar1,iVar2);
      FUN_0002a458(iVar4,iVar7);
    }
    FUN_00028ffc(uVar3 & 1,0,1,9,2);
    _DAT_0003f378 = 0;
    _DAT_0003f370 = 0;
    _DAT_0003f368 = 0;
  }
  putchar(10);
  return;
}



/* ===== FUN_00023b54 @ 00023b54 size=1580 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023b54(int param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  void *__s1;
  uint uVar13;
  uint in_fpscr;
  undefined8 uVar14;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  byte local_434 [1032];
  
  memset(local_434,0,0x401);
  local_454 = 0;
  local_448 = *DAT_000240f0;
  uStack_444 = DAT_000240f0[1];
  uStack_440 = DAT_000240f0[2];
  uStack_43c = DAT_000240f0[3];
  local_450 = 0;
  local_44c = 5;
  local_438 = DAT_000240f0[4];
  if ((DAT_0003f2e4 != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
    FUN_00018c48(param_1,*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0xb0));
  }
  if (((DAT_0003d15c != 0) || ((_DAT_0003d150 & 0x2000000) != 0)) &&
     ((param_2 != 2 || ((_DAT_0003d150 & 0x1000000) == 0)))) {
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,7,9,0);
  }
  iVar5 = param_1 + param_3 * 4;
  iVar6 = *(int *)(iVar5 + 0x7c);
  iVar12 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) < iVar6) {
    *(int *)(param_1 + 0x70) = iVar6;
    iVar12 = iVar6;
  }
  if (DAT_0003f478 == (void *)0x0) {
    if (iVar12 << 3 != 0) {
      pvVar9 = malloc(iVar12 << 3);
      if (pvVar9 == (void *)0x0) {
LAB_00024154:
        perror("realloc");
        if (DAT_0003f478 != (void *)0x0) {
          free(DAT_0003f478);
        }
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
      memset(pvVar9,0,*(int *)(param_1 + 0x70) << 3);
LAB_00024138:
      iVar12 = *(int *)(param_1 + 0x70);
      DAT_0003f478 = pvVar9;
    }
    iVar6 = iVar12;
    if (iVar12 <= DAT_0003f47c) goto LAB_00023c4c;
  }
  else {
    iVar6 = DAT_0003f47c;
    if (iVar12 <= DAT_0003f47c) goto LAB_00023c4c;
    if (iVar12 << 3 != 0) {
      pvVar9 = realloc(DAT_0003f478,iVar12 << 3);
      if (pvVar9 == (void *)0x0) goto LAB_00024154;
      goto LAB_00024138;
    }
  }
  memset((void *)((int)DAT_0003f478 + DAT_0003f47c * 8),0,(iVar12 - DAT_0003f47c) * 8);
  iVar6 = *(int *)(param_1 + 0x70);
LAB_00023c4c:
  DAT_0003f47c = iVar6;
  FUN_0001849c(param_1,param_2,param_3,&DAT_0003d150,_DAT_0003d150,DAT_0003d154,local_434);
  iVar12 = *(int *)(param_1 + 0x70);
  if ((0 < iVar12) && (piVar7 = *(int **)(param_1 + 0xb8), -1 < piVar7[1])) {
    uVar13 = 0;
    do {
      uVar2 = _DAT_0003d150;
      if ((((int)(uint)*(byte *)(*piVar7 + ((int)uVar13 >> 3)) >> (uVar13 & 7) & 1U) != 0) &&
         (((int)(uint)local_434[(int)uVar13 >> 3] >> (uVar13 & 7) & 1U) == 0)) {
        iVar8 = *(int *)(param_1 + 0x94) * uVar13;
        iVar6 = *(int *)(param_1 + (param_2 + 0x26) * 4 + 4);
        iVar3 = *(int *)(iVar5 + 0x9c);
        pvVar9 = (void *)(iVar3 + iVar8);
        __s1 = (void *)(iVar6 + iVar8);
        if (((_DAT_0003d150 & 0x2000000) == 0) || (iVar1 = memcmp(__s1,pvVar9,0x18), iVar1 != 0)) {
          if ((uVar2 & 0x1000000) != 0) {
            if (param_6 == 0) {
              iVar12 = *(int *)(param_1 + 0x8c) * uVar13 * 8;
              iVar1 = *(int *)(param_1 + 0xa8) + iVar12;
              FUN_00018970(&local_454,pvVar9,__s1,iVar1,param_5,iVar1,
                           *(int *)(param_1 + 0xac) + iVar12,&local_448);
              uVar14 = VectorUnsignedToFloat
                                 (*(undefined4 *)((int)pvVar9 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
              FUN_00018938((int)uVar14,param_1,*(int *)(param_1 + 0x8c) * uVar13 + 5);
            }
            else {
              FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,7,9,0);
              FUN_0002683c(0,uVar13,*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x8c) * uVar13 * 8
                          );
              FUN_0002683c(1,uVar13,*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0x8c) * uVar13 * 8
                          );
            }
          }
          printf("%-11s",&DAT_00045318 + param_3 * 0x40);
          if (uVar13 == 0) {
            FUN_0002922c(1,&DAT_0002c6b8,&DAT_0002c6bc,0);
          }
          else {
            FUN_0002922c(0,&DAT_0002c6c4,"",uVar13 - 1);
          }
          FUN_0002a458((int)param_5,(int)((ulonglong)param_5 >> 0x20));
          VectorUnsignedToFloat
                    (*(int *)((int)pvVar9 + 0x10) - *(int *)((int)__s1 + 0x10),
                     (byte)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat
                    (*(int *)((int)pvVar9 + 0xc) - *(int *)((int)__s1 + 0xc),
                     (byte)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat
                    (*(int *)((int)pvVar9 + 8) - *(int *)((int)__s1 + 8),
                     (byte)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat
                    (*(int *)((int)pvVar9 + 4) - *(int *)((int)__s1 + 4),
                     (byte)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat
                    (*(int *)(iVar3 + iVar8) - *(int *)(iVar6 + iVar8),(byte)(in_fpscr >> 0x16) & 3)
          ;
          FUN_00028e08(0xffffffff,0,5,9,2);
          if (param_6 == 0) {
            FUN_00028ca0(0xffffffff,1,9);
            uVar2 = *(uint *)((int)pvVar9 + 0x14);
            puVar10 = (uint *)((int)DAT_0003f478 + uVar13 * 8);
            uVar4 = *puVar10;
            *puVar10 = uVar4 + uVar2;
            puVar10[1] = puVar10[1] + (uint)CARRY4(uVar4,uVar2);
          }
          else {
            puVar11 = (undefined4 *)((int)DAT_0003f478 + uVar13 * 8);
            FUN_0002a458(*puVar11,puVar11[1]);
            VectorUnsignedToFloat(DAT_0003f2d8,(byte)(in_fpscr >> 0x16) & 3);
            FUN_00028e08(0xffffffff,0,1,9);
          }
          putchar(10);
          iVar12 = *(int *)(param_1 + 0x70);
        }
      }
      uVar13 = uVar13 + 1;
    } while (((int)uVar13 < iVar12) &&
            (piVar7 = *(int **)(param_1 + 0xb8), (int)uVar13 <= piVar7[1]));
  }
  if ((param_6 != 0) && (DAT_0003f478 != (void *)0x0)) {
    free(DAT_0003f478);
    DAT_0003f478 = (void *)0x0;
    DAT_0003f47c = 0;
  }
  return;
}



/* ===== FUN_00024190 @ 00024190 size=36 ===== */

void FUN_00024190(void)

{
  FUN_00023b54();
  return;
}



/* ===== FUN_000241b4 @ 000241b4 size=36 ===== */

void FUN_000241b4(void)

{
  FUN_00023b54();
  return;
}



/* ===== FUN_000241d8 @ 000241d8 size=1164 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000241d8(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar4 = *(undefined4 **)(param_1 + param_3 * 4 + 0x9c);
  puVar5 = *(undefined4 **)(param_1 + param_2 * 4 + 0x9c);
  if (DAT_0003f2e4 != 0) {
    FUN_00018c48(param_1,*(undefined4 *)(param_1 + 0x8c));
  }
  iVar3 = param_6 * 3 + (uint)CARRY4(param_5,param_5) + (uint)CARRY4(param_5 * 2,param_5);
  iVar1 = param_5 * 100;
  iVar3 = iVar3 + (iVar3 * 0x20 | param_5 * 3 >> 0x1b) + (uint)CARRY4(param_5 * 3,param_5 * 0x60) +
          param_6 + (uint)CARRY4(param_5 * 99,param_5);
  if (DAT_0003d15c == 0) {
    uVar2 = _DAT_0003d150 & 0x1000000;
    if (param_2 == 2) {
      if (uVar2 == 0) {
        FUN_0002a458(*puVar4,puVar4[1]);
        FUN_0002a458(*puVar5,puVar5[1]);
        FUN_0002a458(iVar1,iVar3);
        goto LAB_00024324;
      }
      FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0);
      FUN_0002a458(*puVar4,puVar4[1]);
      FUN_0002a458(*puVar5,puVar5[1]);
      FUN_0002a458(iVar1,iVar3);
      if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_00024324;
LAB_000245fc:
      FUN_00026904(0,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xa8));
      FUN_00026904(1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xac));
      goto LAB_00024324;
    }
    dVar7 = (double)FUN_0002a458(*puVar4,puVar4[1],_DAT_0003d150,DAT_0003d154);
    dVar8 = (double)FUN_0002a458(*puVar5,puVar5[1]);
    dVar9 = (double)FUN_0002a458(iVar1,iVar3);
    uVar6 = SUB84((dVar7 - dVar8) / dVar9,0);
    if (uVar2 == 0) goto LAB_00024324;
  }
  else {
    FUN_00018cc0(&DAT_00045318 + (uint)(param_3 == 0) * 0x40,param_1,0,0,9,0);
    dVar7 = (double)FUN_0002a458(*puVar4,puVar4[1]);
    dVar8 = (double)FUN_0002a458(*puVar5,puVar5[1]);
    dVar9 = (double)FUN_0002a458(iVar1,iVar3);
    uVar6 = SUB84((dVar7 - dVar8) / dVar9,0);
    if ((_DAT_0003d150 & 0x1000000) == 0) goto LAB_00024324;
    if (param_2 == 2) goto LAB_000245fc;
  }
  dVar7 = DAT_00024668;
  dVar8 = (double)VectorUnsignedToFloat(puVar4[2],(byte)(in_fpscr >> 0x16) & 3);
  FUN_00018938(SUB84(dVar8 / DAT_00024668,0),param_1,0);
  dVar8 = (double)VectorUnsignedToFloat(puVar4[4],(byte)(in_fpscr >> 0x16) & 3);
  FUN_00018938(SUB84(dVar8 / dVar7,0),param_1,1);
  dVar8 = (double)VectorUnsignedToFloat(puVar4[6],(byte)(in_fpscr >> 0x16) & 3);
  FUN_00018938(SUB84(dVar8 / dVar7,0),param_1,2);
  FUN_00018938(uVar6,param_1,3);
LAB_00024324:
  printf("%-11s",&DAT_00045318 + param_3 * 0x40);
  if (param_4 == 0) {
    VectorUnsignedToFloat(puVar4[6],(byte)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(puVar4[4],(byte)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(puVar4[2],(byte)(in_fpscr >> 0x16) & 3);
    FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,3,9,2);
    _DAT_0003f480 =
         CONCAT44(DAT_0003f484 + (uint)CARRY4(_DAT_0003f480,puVar4[2]),_DAT_0003f480 + puVar4[2]);
    _DAT_0003f488 =
         CONCAT44(DAT_0003f48c + (uint)CARRY4(_DAT_0003f488,puVar4[4]),_DAT_0003f488 + puVar4[4]);
    _DAT_0003f490 =
         CONCAT44(DAT_0003f494 + (uint)CARRY4(_DAT_0003f490,puVar4[6]),_DAT_0003f490 + puVar4[6]);
  }
  else {
    uVar2 = _DAT_0003d150 >> 0x14;
    VectorUnsignedToFloat(DAT_0003f2d8 * 100,(byte)(in_fpscr >> 0x16) & 3);
    FUN_0002a458(_DAT_0003f490,DAT_0003f494);
    FUN_0002a458(_DAT_0003f488,DAT_0003f48c);
    FUN_0002a458(_DAT_0003f480,DAT_0003f484);
    FUN_00028ffc(uVar2 & 1,1,3,9,2);
    _DAT_0003f490 = 0;
    _DAT_0003f488 = 0;
    _DAT_0003f480 = 0;
  }
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_000258a0 @ 000258a0 size=344 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000258a0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_00018c98(param_3);
  if (param_2 == 0) {
    FUN_0002922c(1,&DAT_0002c6b8,&DAT_0002c6bc,0);
  }
  else {
    FUN_0002922c(0,&DAT_0002c6c4,"",param_2 + -1);
  }
  uVar1 = _DAT_0003d150 >> 0x14 & 1;
  if (param_1 == 0) {
    FUN_00028ffc(uVar1,1,9,9,2);
  }
  else {
    FUN_00028ffc(uVar1,1,5,9,2);
  }
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,2,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_000259f8 @ 000259f8 size=92 ===== */

void FUN_000259f8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00018c98();
  if (0 < param_2) {
    iVar1 = param_3 + param_2 * 8;
    do {
      param_3 = param_3 + 8;
      FUN_00028e08(0xffffffff,0,1,9,2);
    } while (param_3 != iVar1);
  }
  putchar(10);
  return;
}



/* ===== FUN_00025a54 @ 00025a54 size=84 ===== */

void FUN_00025a54(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 extraout_r3;
  undefined4 *puVar1;
  undefined8 uVar3;
  undefined4 *puVar2;
  
  FUN_00018c98();
  if (0 < param_2) {
    puVar1 = param_3;
    do {
      puVar2 = puVar1 + 2;
      uVar3 = FUN_0002a518(*puVar1,puVar1[1]);
      FUN_00028ca0(0xffffffff,1,9,extraout_r3,uVar3);
      puVar1 = puVar2;
    } while (puVar2 != param_3 + param_2 * 2);
  }
  putchar(10);
  return;
}



/* ===== FUN_00025aa8 @ 00025aa8 size=360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025aa8(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  uint uVar1;
  
  FUN_00018c98();
  if ((_DAT_0003d150 & 4) == 0) {
    FUN_0002922c(1,&DAT_0002c6cc,param_5,0);
    if ((0 < *(int *)(param_2 + (param_3 + 0x1e) * 4 + 4)) &&
       (-1 < *(int *)(*(int *)(param_2 + 0xb8) + 4))) goto LAB_00025b10;
  }
  else {
    if ((*(int *)(param_2 + (param_3 + 0x1e) * 4 + 4) < 1) ||
       (*(int *)(*(int *)(param_2 + 0xb8) + 4) < 0)) goto LAB_00025be8;
LAB_00025b10:
    uVar1 = 0;
    do {
      if (((int)(uint)*(byte *)(param_6 + ((int)uVar1 >> 3)) >> (uVar1 & 7) & 1U) == 0) {
        FUN_00028e08(0xffffffff,0,1,9,2);
      }
      uVar1 = uVar1 + 1;
    } while (((int)uVar1 < *(int *)(param_2 + (param_3 + 0x1e) * 4 + 4)) &&
            ((int)uVar1 <= *(int *)(*(int *)(param_2 + 0xb8) + 4)));
  }
  if ((_DAT_0003d150 & 4) == 0) {
    putchar(10);
    return;
  }
LAB_00025be8:
  FUN_0002922c(1,&DAT_0002c6b8,param_5,0);
  putchar(10);
  return;
}



/* ===== FUN_00025c10 @ 00025c10 size=176 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025c10(void)

{
  FUN_00018c98();
  FUN_00028e08(0xffffffff,0,8,9,2);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,3,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_00025cc0 @ 00025cc0 size=396 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025cc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00018c98();
  uVar1 = FUN_0002a518(param_2[4],param_2[5]);
  FUN_0002a518(param_2[2],param_2[3]);
  FUN_0002a518(*param_2,param_2[1]);
  uVar2 = extraout_r1;
  FUN_00028ca0(param_3,3,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2,uVar2,param_2[6],param_2[7],uVar1);
  uVar1 = FUN_0002a518(param_2[0xc],param_2[0xd]);
  FUN_0002a518(param_2[10],param_2[0xb]);
  FUN_0002a518(param_2[8],param_2[9]);
  uVar2 = extraout_r1_00;
  FUN_00028ca0(param_3,3,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2,uVar2,*(undefined8 *)(param_2 + 0xe),uVar1);
  FUN_0002a518(param_2[0x14],param_2[0x15]);
  FUN_0002a518(param_2[0x12],param_2[0x13]);
  FUN_0002a518(param_2[0x10],param_2[0x11]);
  FUN_00028ca0(param_3,3,9);
  if (param_4 == 0) {
    putchar(10);
    return;
  }
  FUN_0002a518(param_2[0x1e],param_2[0x1f]);
  FUN_0002a518(param_2[0x1c],param_2[0x1d]);
  FUN_0002a518(param_2[0x1a],param_2[0x1b]);
  FUN_0002a518(param_2[0x18],param_2[0x19]);
  FUN_0002a518(param_2[0x16],param_2[0x17]);
  FUN_00028ca0(param_3,5,9);
  putchar(10);
  return;
}



/* ===== FUN_00025e4c @ 00025e4c size=204 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025e4c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  FUN_00018c98();
  FUN_0002a518(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
  FUN_0002a518(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84));
  uVar1 = extraout_r1;
  FUN_00028ca0(param_3,2,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2,uVar1,*(undefined4 *)(param_2 + 0x90),
               *(undefined4 *)(param_2 + 0x94));
  FUN_0002a518(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
  uVar1 = extraout_r1_00;
  FUN_00028ca0(param_3,1,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,0,1,9,2,uVar1,*(undefined4 *)(param_2 + 0xa0),
               *(undefined4 *)(param_2 + 0xa4));
  putchar(10);
  return;
}



/* ===== FUN_00025f18 @ 00025f18 size=168 ===== */

void FUN_00025f18(undefined4 param_1,undefined4 *param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  FUN_00018c98();
  FUN_0002a518(param_2[2],param_2[3]);
  FUN_0002a518(*param_2,param_2[1]);
  uVar1 = extraout_r1;
  FUN_00028ca0(0xffffffff,2,9);
  FUN_00028e08(0xffffffff,0,3,9,2,uVar1,*(double *)(param_2 + 4) / DAT_00025fc0,
               *(double *)(param_2 + 6) / DAT_00025fc0,*(double *)(param_2 + 8) / DAT_00025fc0);
  FUN_0002a518(param_2[10],param_2[0xb]);
  FUN_00028ca0(0xffffffff,1,9);
  putchar(10);
  return;
}



/* ===== FUN_00025fc8 @ 00025fc8 size=148 ===== */

void FUN_00025fc8(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  FUN_00018c98();
  iVar1 = atoi(param_2);
  FUN_0002922c(0,"       %3d","",iVar1);
  FUN_00028e08(0xffffffff,0,6,9,2);
  putchar(10);
  return;
}



/* ===== FUN_0002605c @ 0002605c size=332 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002605c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00018c98();
  if ((_DAT_0003d150 & 4) == 0) {
    FUN_0002922c(1,&DAT_0002c6cc,param_3,0);
  }
  FUN_00028e08(0xffffffff,0,1,9,2);
  FUN_00028e08(param_2,0,4,9,2);
  FUN_00028e08(0xffffffff,0,2,9,2);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2);
  if ((_DAT_0003d150 & 4) == 0) {
    putchar(10);
    return;
  }
  FUN_0002922c(1,&DAT_0002c6b8,param_3,0);
  putchar(10);
  return;
}



/* ===== FUN_00026414 @ 00026414 size=96 ===== */

void FUN_00026414(undefined4 param_1,undefined4 param_2)

{
  FUN_00018c98();
  FUN_0002922c(1,&DAT_0002c6b4,param_2,0);
  FUN_00028e08(0xffffffff,0,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_00026474 @ 00026474 size=124 ===== */

void FUN_00026474(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_00018c98();
  FUN_0002922c(0,"     %5d","",param_2 + 1);
  FUN_00028e08(0xffffffff,0,2,9,2);
  FUN_0002922c(1," %s\n",param_3,0);
  return;
}



/* ===== FUN_000264f0 @ 000264f0 size=172 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000264f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00018c98();
  FUN_0002922c(0,"     %5d","",param_2);
  FUN_00028e08(0xffffffff,0,1,9,2);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2);
  FUN_0002922c(1," %s\n",param_3,0);
  return;
}



/* ===== FUN_0002659c @ 0002659c size=172 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002659c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  FUN_00018c98();
  FUN_0002a518(param_3[2],param_3[3]);
  FUN_0002a518(*param_3,param_3[1]);
  uVar1 = extraout_r1;
  FUN_00028ca0(param_2,2,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2,uVar1,param_3[4],param_3[5]);
  FUN_0002a518(param_3[8],param_3[9]);
  FUN_0002a518(param_3[6],param_3[7]);
  FUN_00028ca0(param_2,2,9);
  putchar(10);
  return;
}



/* ===== FUN_00026648 @ 00026648 size=140 ===== */

void FUN_00026648(undefined4 param_1,int param_2)

{
  FUN_00018c98();
  if (param_2 == 0) {
    FUN_0002922c(1,&DAT_0002c6b4,"     all",0);
  }
  else {
    FUN_0002922c(0,"     %3d","",param_2 + -1);
  }
  FUN_00028e08(0xffffffff,0,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_000266d4 @ 000266d4 size=248 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000266d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00018c98();
  FUN_00028e08(param_2,0,2,9,0);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,2,9,2);
  FUN_0002a518(*(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c));
  FUN_0002a518(*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24));
  uVar2 = extraout_r1;
  FUN_00028ca0(0xffffffff,2,9);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2,uVar2,*(undefined8 *)(param_4 + 0x30),uVar1);
  FUN_0002922c(1," %s\n",param_3,0);
  return;
}



/* ===== FUN_000267cc @ 000267cc size=112 ===== */

void FUN_000267cc(undefined4 param_1,undefined4 param_2)

{
  FUN_00018c98();
  FUN_00028e08(0xffffffff,0,4,9,2);
  FUN_0002922c(1," %s\n",param_2,0);
  return;
}



/* ===== FUN_0002683c @ 0002683c size=200 ===== */

void FUN_0002683c(undefined4 param_1,int param_2,int param_3)

{
  FUN_00018c98();
  if (param_2 == 0) {
    FUN_0002922c(1,&DAT_0002c6b8,&DAT_0002c6bc,0);
  }
  else {
    FUN_0002922c(0,&DAT_0002c6c4,"",param_2 + -1);
  }
  FUN_00028e08(0xffffffff,0,5,9,2);
  FUN_0002a518(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c));
  FUN_00028ca0(0xffffffff,1,9);
  putchar(10);
  return;
}



/* ===== FUN_00026904 @ 00026904 size=112 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026904(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00018c98();
  if (0 < param_2) {
    iVar1 = param_3 + param_2 * 8;
    do {
      param_3 = param_3 + 8;
      FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,1,1,9,2);
    } while (iVar1 != param_3);
  }
  putchar(10);
  return;
}



/* ===== FUN_00026974 @ 00026974 size=164 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026974(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  FUN_00018c98();
  iVar1 = atoi(param_2);
  FUN_0002922c(0,"     %5d","",iVar1);
  FUN_00028ffc(_DAT_0003d150 >> 0x14 & 1,2,1,9,0);
  FUN_00028e08(0xffffffff,1,1,9,2);
  putchar(10);
  return;
}



/* ===== FUN_00026a18 @ 00026a18 size=520 ===== */

int FUN_00026a18(void *param_1,int param_2)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_207c;
  undefined1 auStack_2078 [8];
  undefined1 auStack_2070 [8];
  undefined1 auStack_2068 [8];
  undefined1 auStack_2060 [8];
  undefined1 auStack_2058 [8];
  undefined1 auStack_2050 [8];
  undefined1 auStack_2048 [8];
  undefined1 auStack_2040 [8];
  undefined1 auStack_2038 [8];
  undefined1 auStack_2030 [8];
  char acStack_2028 [3];
  char acStack_2025 [2];
  char acStack_2023 [8191];
  
  __stream_00 = fopen("/proc/stat","r");
  __stream = stderr;
  if (__stream_00 == (FILE *)0x0) {
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,"Cannot open %s: %s\n","/proc/stat",pcVar1);
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
  iVar5 = 0;
  do {
    while( true ) {
      pcVar1 = fgets(acStack_2028,0x2000,__stream_00);
      if (pcVar1 == (char *)0x0) goto LAB_00026bc4;
      iVar2 = strncmp(acStack_2028,"cpu ",4);
      if (iVar2 == 0) break;
      iVar2 = strncmp(acStack_2028,"cpu",3);
      if (iVar2 == 0) {
        memset(auStack_2078,0,0x50);
        sscanf(acStack_2025,"%d %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&local_207c,
               auStack_2078,auStack_2070,auStack_2068,auStack_2060,auStack_2058,auStack_2048,
               auStack_2040,auStack_2050,auStack_2038,auStack_2030);
        iVar2 = local_207c;
        iVar4 = local_207c + 1;
        if (param_2 <= iVar4) {
          iVar5 = -1;
          goto LAB_00026bc4;
        }
        memcpy((void *)(iVar4 * 0x50 + (int)param_1),auStack_2078,0x50);
        if (iVar5 <= iVar4) {
          iVar5 = iVar2 + 2;
        }
      }
    }
    memset(param_1,0,0x50);
    sscanf(acStack_2023,"%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",param_1,(int)param_1 + 8
           ,(int)param_1 + 0x10,(int)param_1 + 0x18,(int)param_1 + 0x20,(int)param_1 + 0x30,
           (int)param_1 + 0x38,(int)param_1 + 0x28,(int)param_1 + 0x40,(int)param_1 + 0x48);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
  } while (param_2 != 1);
LAB_00026bc4:
  fclose(__stream_00);
  return iVar5;
}



/* ===== FUN_00026c20 @ 00026c20 size=796 ===== */

int FUN_00026c20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  FILE *__stream;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  size_t __n;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  char *__s;
  int iVar9;
  int *piVar10;
  int *__dest;
  int local_54;
  int *local_4c;
  char *local_48;
  char *local_2c [2];
  int *piVar11;
  
  iVar9 = param_2 + -1;
  if (iVar9 == 0) {
    iVar9 = 1;
    sVar3 = 4;
LAB_00026d24:
    local_4c = calloc(sVar3,1);
    if (local_4c == (int *)0x0) goto LAB_00026d38;
  }
  else {
    sVar3 = iVar9 * 4;
    if (sVar3 != 0) goto LAB_00026d24;
    local_4c = (int *)0x0;
  }
  __stream = fopen("/proc/interrupts","r");
  if (__stream != (FILE *)0x0) {
    sVar3 = iVar9 * 0xb + 0x80;
    if (iVar9 * 0xb == -0x80) {
      local_48 = (char *)0x0;
    }
    else {
      local_48 = calloc(sVar3,1);
      if (local_48 == (char *)0x0) {
LAB_00026d38:
        perror("realloc");
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
    }
    do {
      pcVar4 = fgets(local_48,sVar3,__stream);
      if (pcVar4 == (char *)0x0) {
        iVar7 = 0;
        break;
      }
      local_2c[0] = local_48;
      iVar7 = 0;
      plVar8 = local_4c + -1;
      while( true ) {
        pcVar4 = strstr(local_2c[0],"CPU");
        iVar1 = 0;
        if (pcVar4 != (char *)0x0) {
          iVar1 = iVar7 - iVar9;
        }
        if (iVar1 < 0 == (pcVar4 != (char *)0x0 && SBORROW4(iVar7,iVar9))) break;
        lVar5 = strtol(pcVar4 + 3,local_2c,10);
        if (param_2 <= lVar5 + 1) {
          iVar9 = -1;
          free(local_48);
          fclose(__stream);
          goto LAB_00026d68;
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
        *plVar8 = lVar5;
      }
    } while (iVar7 == 0);
    __dest = param_1 + 4;
    param_1[1] = DAT_0002c2e4;
    local_54 = 0;
    while ((pcVar4 = fgets(local_48,sVar3,__stream), pcVar4 != (char *)0x0 &&
           (local_54 < param_3 + -1))) {
      pcVar4 = strchr(local_48,0x3a);
      if (pcVar4 != (char *)0x0) {
        pcVar4 = pcVar4 + 1;
        local_54 = local_54 + 1;
        cVar2 = *local_48;
        __s = local_48;
        while (cVar2 == ' ') {
          __s = __s + 1;
          cVar2 = *__s;
        }
        __n = strcspn(__s,":");
        if (6 < (int)__n) {
          __n = 7;
        }
        strncpy((char *)__dest,__s,__n);
        *(undefined1 *)((int)__dest + __n) = 0;
        piVar10 = local_4c;
        if (iVar7 != 0) {
          do {
            piVar11 = piVar10 + 1;
            iVar9 = *piVar10 * param_3 + param_3;
            uVar6 = strtoul(pcVar4,local_2c,10);
            param_1[(iVar9 + local_54) * 3] = uVar6;
            __dest[-1] = __dest[-1] + uVar6;
            param_1[iVar9 * 3] = param_1[iVar9 * 3] + param_1[(iVar9 + local_54) * 3];
            pcVar4 = local_2c[0];
            piVar10 = piVar11;
          } while (local_4c + iVar7 != piVar11);
        }
        piVar10 = __dest + -1;
        __dest = __dest + 3;
        *param_1 = *param_1 + *piVar10;
      }
    }
    free(local_48);
    fclose(__stream);
    if (iVar7 != 0) {
      iVar9 = (local_4c + iVar7)[-1] + 2;
      goto LAB_00026d68;
    }
  }
  iVar9 = 0;
LAB_00026d68:
  free(local_4c);
  return iVar9;
}



/* ===== FUN_00026f3c @ 00026f3c size=984 ===== */

undefined4 FUN_00026f3c(int param_1)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_98 [5];
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char acStack_8b [115];
  
  __stream = fopen("/proc/meminfo","r");
  if (__stream == (FILE *)0x0) {
    uVar3 = 0;
  }
  else {
    while (pcVar1 = fgets(acStack_98,0x80,__stream), pcVar1 != (char *)0x0) {
      iVar2 = strncmp(acStack_98,"MemTotal:",9);
      if (iVar2 == 0) {
        sscanf(&cStack_8f,"%llu",param_1 + 0x18);
      }
      else {
        iVar2 = strncmp(acStack_98,"MemFree:",8);
        if (iVar2 == 0) {
          sscanf(&cStack_90,"%llu",param_1);
        }
        else {
          iVar2 = strncmp(acStack_98,"MemAvailable:",0xd);
          if (iVar2 == 0) {
            sscanf(acStack_8b,"%llu",param_1 + 0x80);
          }
          else {
            iVar2 = strncmp(acStack_98,"Buffers:",8);
            if (iVar2 == 0) {
              sscanf(&cStack_90,"%llu",param_1 + 8);
            }
            else {
              iVar2 = strncmp(acStack_98,"Cached:",7);
              if (iVar2 == 0) {
                sscanf(&cStack_91,"%llu",param_1 + 0x10);
              }
              else {
                iVar2 = strncmp(acStack_98,"SwapCached:",0xb);
                if (iVar2 == 0) {
                  sscanf(&cStack_8d,"%llu",param_1 + 0x30);
                }
                else {
                  iVar2 = strncmp(acStack_98,"Active:",7);
                  if (iVar2 == 0) {
                    sscanf(&cStack_91,"%llu",param_1 + 0x40);
                  }
                  else {
                    iVar2 = strncmp(acStack_98,"Inactive:",9);
                    if (iVar2 == 0) {
                      sscanf(&cStack_8f,"%llu",param_1 + 0x48);
                    }
                    else {
                      iVar2 = strncmp(acStack_98,"SwapTotal:",10);
                      if (iVar2 == 0) {
                        sscanf(&cStack_8e,"%llu",param_1 + 0x28);
                      }
                      else {
                        iVar2 = strncmp(acStack_98,"SwapFree:",9);
                        if (iVar2 == 0) {
                          sscanf(&cStack_8f,"%llu",param_1 + 0x20);
                        }
                        else {
                          iVar2 = strncmp(acStack_98,"Dirty:",6);
                          if (iVar2 == 0) {
                            sscanf(&cStack_92,"%llu",param_1 + 0x50);
                          }
                          else {
                            iVar2 = strncmp(acStack_98,"Committed_AS:",0xd);
                            if (iVar2 == 0) {
                              sscanf(acStack_8b,"%llu",param_1 + 0x38);
                            }
                            else {
                              iVar2 = strncmp(acStack_98,"AnonPages:",10);
                              if (iVar2 == 0) {
                                sscanf(&cStack_8e,"%llu",param_1 + 0x58);
                              }
                              else {
                                iVar2 = strncmp(acStack_98,"Slab:",5);
                                if (iVar2 == 0) {
                                  sscanf(&cStack_93,"%llu",param_1 + 0x60);
                                }
                                else {
                                  iVar2 = strncmp(acStack_98,"KernelStack:",0xc);
                                  if (iVar2 == 0) {
                                    sscanf(&cStack_8c,"%llu",param_1 + 0x68);
                                  }
                                  else {
                                    iVar2 = strncmp(acStack_98,"PageTables:",0xb);
                                    if (iVar2 == 0) {
                                      sscanf(&cStack_8d,"%llu",param_1 + 0x70);
                                    }
                                    else {
                                      iVar2 = strncmp(acStack_98,"VmallocUsed:",0xc);
                                      if (iVar2 == 0) {
                                        sscanf(&cStack_8c,"%llu",param_1 + 0x78);
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
    fclose(__stream);
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_00027314 @ 00027314 size=184 ===== */

void FUN_00027314(longlong *param_1)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  uint local_98;
  uint local_94;
  char acStack_90 [132];
  
  __stream = fopen("/proc/uptime","r");
  if (__stream != (FILE *)0x0) {
    pcVar1 = fgets(acStack_90,0x80,__stream);
    if ((pcVar1 != (char *)0x0) &&
       (iVar2 = sscanf(acStack_90,"%lu.%lu",&local_98,&local_94), iVar2 == 2)) {
      *param_1 = (ulonglong)local_98 * 100 + (ulonglong)local_94;
      fclose(__stream);
      return;
    }
    fclose(__stream);
  }
  fprintf(stderr,"Cannot read %s\n","/proc/uptime");
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_000273cc @ 000273cc size=276 ===== */

void FUN_000273cc(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xe];
  dVar6 = DAT_000274e0;
  if (uVar1 <= uVar2) {
    dVar7 = (double)FUN_0002a458(param_3,param_4);
    dVar6 = (double)VectorUnsignedToFloat(uVar2 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar6 / dVar7) * DAT_000274e8;
  }
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_5 = dVar6;
  bVar5 = uVar2 <= uVar4;
  if (uVar4 == uVar2) {
    bVar5 = uVar1 <= uVar3;
  }
  if (bVar5 && (uVar4 != uVar2 || uVar3 != uVar1)) {
    dVar8 = (double)FUN_0002a458(uVar3 - uVar1,uVar4 - (uVar2 + (uVar3 < uVar1)));
    dVar7 = (double)VectorUnsignedToFloat
                              (((((param_1[0xc] - param_2[0xc]) + param_1[0xd]) - param_2[0xd]) +
                               param_1[0x12]) - param_2[0x12],(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)VectorUnsignedToFloat
                              (((((param_1[6] - param_2[6]) + param_1[8]) - param_2[8]) +
                               param_1[10]) - param_2[10],(byte)(in_fpscr >> 0x16) & 3);
    param_5[1] = dVar7 / dVar8;
    param_5[2] = dVar6 / dVar8;
    return;
  }
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  return;
}



/* ===== FUN_000274f0 @ 000274f0 size=600 ===== */

undefined8 FUN_000274f0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_38;
  uint uStack_34;
  
  uVar15 = *param_1;
  uVar4 = *param_2;
  uVar14 = VectorSub(uVar15,param_1[8],8);
  uVar5 = uVar4 - param_2[0x10];
  uVar6 = param_2[1] - (param_2[0x11] + (uint)(uVar4 < param_2[0x10]));
  uVar2 = (uint)((ulonglong)uVar14 >> 0x20);
  bVar12 = uVar6 <= uVar2;
  if (uVar2 == uVar6) {
    bVar12 = uVar5 <= (uint)uVar14;
  }
  if (bVar12) {
    uVar14 = 0;
  }
  else {
    uVar14 = VectorAdd(param_1[8],CONCAT44(uVar6,uVar5),8);
    uVar14 = VectorSub(uVar14,uVar15,8);
  }
  uVar16 = param_1[1];
  uVar5 = param_2[2];
  uVar6 = uVar5 - param_2[0x12];
  uVar7 = param_2[3] - (param_2[0x13] + (uint)(uVar5 < param_2[0x12]));
  uVar17 = VectorSub(uVar16,param_1[9],8);
  uVar2 = (uint)((ulonglong)uVar17 >> 0x20);
  bVar12 = uVar7 <= uVar2;
  if (uVar2 == uVar7) {
    bVar12 = uVar6 <= (uint)uVar17;
  }
  if (!bVar12) {
    uVar17 = VectorAdd(param_1[9],CONCAT44(uVar7,uVar6),8);
    uVar17 = VectorSub(uVar17,uVar16,8);
    uVar14 = VectorAdd(uVar14,uVar17,8);
  }
  uVar2 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = 0xffffffff;
  uVar8 = *(uint *)(param_1 + 4);
  uVar10 = *(uint *)((int)param_1 + 0x24);
  local_38 = *(uint *)(param_1 + 3);
  uStack_34 = *(uint *)((int)param_1 + 0x1c);
  bVar12 = uVar6 <= uVar10;
  if (uVar10 == uVar6) {
    bVar12 = uVar2 <= uVar8;
  }
  bVar13 = 0xfffffffe < uVar6;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  if (uVar6 == 0xffffffff) {
    bVar13 = 0xfff7fffe < uVar2;
  }
  uVar9 = uVar8;
  uVar11 = uVar10;
  if ((!bVar13 || uVar6 == 0xffffffff && uVar2 == 0xfff7ffff) && !bVar12) {
    bVar12 = 0xfffffffe < uVar3;
    bVar13 = uVar3 == 0xffffffff;
    if (bVar13) {
      bVar12 = 0xfff7fffe < uVar1;
    }
    if (bVar12 && (!bVar13 || uVar1 != 0xfff7ffff)) {
      uVar7 = 1;
    }
    if (!bVar12 || bVar13 && uVar1 == 0xfff7ffff) {
      uVar7 = 0;
    }
    bVar12 = uVar3 <= uStack_34;
    if (uStack_34 == uVar3) {
      bVar12 = uVar1 <= local_38;
    }
    if (bVar12 && (uStack_34 != uVar3 || local_38 != uVar1)) {
      uVar7 = uVar7 | 1;
    }
    if (uVar7 == 0) {
      param_2[8] = 0;
      param_2[9] = 0;
      uVar2 = 0;
      uVar6 = 0;
      uVar9 = *(uint *)(param_1 + 4);
      uVar11 = *(uint *)((int)param_1 + 0x24);
    }
    else {
      param_2[8] = uVar8;
      param_2[9] = uVar10;
      uVar9 = *(uint *)(param_1 + 4);
      uVar11 = *(uint *)((int)param_1 + 0x24);
      uVar2 = uVar8;
      uVar6 = uVar10;
    }
  }
  bVar12 = uVar3 <= uStack_34;
  if (uStack_34 == uVar3) {
    bVar12 = uVar1 <= local_38;
  }
  bVar13 = 0xfffffffe < uVar3;
  if (uVar3 == 0xffffffff) {
    bVar13 = 0xfff7fffe < uVar1;
  }
  if ((!bVar13 || uVar3 == 0xffffffff && uVar1 == 0xfff7ffff) && !bVar12) {
    uVar1 = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    local_38 = *(uint *)(param_1 + 3);
    uStack_34 = *(uint *)((int)param_1 + 0x1c);
    uVar3 = uVar1;
  }
  uVar15 = VectorAdd(uVar15,uVar16,8);
  uVar15 = VectorAdd(uVar15,param_1[2],8);
  uVar15 = VectorAdd(uVar15,param_1[5],8);
  uVar15 = VectorAdd(uVar15,param_1[6],8);
  uVar7 = (uint)uVar15 + *(uint *)(param_1 + 7);
  uVar8 = uVar7 - uVar4;
  uVar15 = VectorSub(CONCAT44((((int)((ulonglong)uVar15 >> 0x20) + *(int *)((int)param_1 + 0x3c) +
                               (uint)CARRY4((uint)uVar15,*(uint *)(param_1 + 7))) -
                              (param_2[1] + (uint)(uVar7 < uVar4))) -
                              (param_2[3] + (uint)(uVar8 < uVar5)),uVar8 - uVar5),
                     *(undefined8 *)(param_2 + 4),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 10),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 0xc),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 0xe),8);
  uVar14 = VectorAdd(uVar15,uVar14,8);
  uVar4 = (uint)uVar14 + uVar9;
  uVar5 = uVar4 - uVar2;
  uVar7 = local_38 + uVar5;
  return CONCAT44((uStack_34 +
                   (((int)((ulonglong)uVar14 >> 0x20) + uVar11 + (uint)CARRY4((uint)uVar14,uVar9)) -
                   (uVar6 + (uVar4 < uVar2))) + (uint)CARRY4(local_38,uVar5)) -
                  (uVar3 + (uVar7 < uVar1)),uVar7 - uVar1);
}



/* ===== FUN_00027748 @ 00027748 size=44 ===== */

void FUN_00027748(void)

{
  printf("sysstat version %s\n","12.7.5");
  puts("(C) Sebastien Godard (sysstat <at> orange.fr)");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_000277d0 @ 000277d0 size=204 ===== */

int FUN_000277d0(tm *param_1,int param_2)

{
  bool bVar1;
  time_t tVar2;
  int iVar3;
  char *__s1;
  uint uVar4;
  
  if (DAT_0003f500 == 0) {
    __s1 = getenv("S_TIME_DEF_TIME");
    uVar4 = 0;
    if (__s1 != (char *)0x0) {
      iVar3 = strcmp(__s1,"UTC");
      uVar4 = (uint)(iVar3 == 0);
    }
    DAT_0003f500 = uVar4 + 1;
  }
  bVar1 = DAT_0003f500 == 2;
  tVar2 = time((time_t *)0x0);
  iVar3 = param_2 * -0x15180 + tVar2;
  if (bVar1) {
    gmtime_r((time_t *)&stack0xffffffec,param_1);
    return iVar3;
  }
  localtime_r((time_t *)&stack0xffffffec,param_1);
  return iVar3;
}



/* ===== FUN_00027840 @ 00027840 size=156 ===== */

bool FUN_00027840(undefined4 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char acStack_1018 [4096];
  
  while (pcVar1 = strchr(param_2,0x2f), pcVar1 != (char *)0x0) {
    *pcVar1 = '!';
  }
  pcVar1 = "";
  if (param_3 == 0) {
    pcVar1 = "/device";
  }
  snprintf(acStack_1018,0x1000,"%s/%s/%s%s",param_1,"block",param_2,pcVar1);
  iVar2 = access(acStack_1018,0);
  return iVar2 == 0;
}



/* ===== FUN_000278dc @ 000278dc size=88 ===== */

void FUN_000278dc(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = sysconf(0x1e);
  if (lVar1 == -1) {
    perror("sysconf");
    DAT_000457bc = 0;
  }
  else {
    iVar2 = lVar1 >> 10;
    DAT_000457bc = 0;
    if (1 < iVar2) {
      do {
        iVar2 = iVar2 >> 1;
        DAT_000457bc = DAT_000457bc + 1;
      } while (iVar2 != 1);
    }
  }
  return;
}



/* ===== FUN_00027934 @ 00027934 size=56 ===== */

void FUN_00027934(void)

{
  long lVar1;
  
  lVar1 = sysconf(2);
  if (lVar1 == -1) {
    perror("sysconf");
  }
  DAT_000455b8 = lVar1;
  return;
}



/* ===== FUN_0002796c @ 0002796c size=44 ===== */

void FUN_0002796c(undefined4 param_1,undefined4 param_2)

{
  fprintf(stderr,"sysstat: %s[%d]: Internal error...\n",param_1,param_2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00027998 @ 00027998 size=292 ===== */

int FUN_00027998(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char acStack_34 [16];
  undefined1 local_24;
  
  param_2[1] = 0;
  *param_2 = 0;
  *param_3 = 0;
  sVar1 = strlen(param_1);
  if ((0x15 < sVar1) && (iVar2 = strncmp(param_1,"wwn-0x",6), iVar2 == 0)) {
    pcVar3 = strstr(param_1,"-part");
    if (pcVar3 != (char *)0x0) {
      iVar2 = sscanf(pcVar3 + 5,"%u",param_3);
      if (iVar2 == 0) {
        return -1;
      }
      sVar1 = (int)pcVar3 - (int)param_1;
    }
    if ((sVar1 - 0x16 & 0xffffffef) == 0) {
      strncpy(acStack_34,param_1 + 6,0x10);
      local_24 = 0;
      iVar2 = sscanf(acStack_34,"%llx",param_2);
      if (iVar2 != 0) {
        sVar1 = strlen(param_1);
        if (0x25 < sVar1) {
          iVar2 = sscanf(param_1 + 0x16,"%llx",param_2 + 1);
          return -(uint)(iVar2 == 0);
        }
        return 0;
      }
    }
  }
  return -1;
}



/* ===== FUN_00027abc @ 00027abc size=328 ===== */

undefined4 FUN_00027abc(char *param_1,undefined4 param_2,undefined4 param_3)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  ssize_t sVar3;
  char *__s1;
  char *pcVar4;
  undefined4 uVar5;
  char acStack_3028 [4096];
  char acStack_2028 [4096];
  char acStack_1028 [4100];
  
  __dirp = opendir("/dev/disk/by-id");
  if (__dirp == (DIR *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    do {
      do {
        do {
          do {
            pdVar1 = readdir(__dirp);
            pcVar4 = pdVar1->d_name;
            if (pdVar1 == (dirent *)0x0) {
              uVar5 = 0xffffffff;
              goto LAB_00027be4;
            }
            iVar2 = strncmp(pcVar4,"wwn-0x",6);
          } while (iVar2 != 0);
          snprintf(acStack_2028,0x1000,"%s/%s","/dev/disk/by-id",pcVar4);
          sVar3 = readlink(acStack_2028,acStack_1028,0x1000);
        } while (0xffe < sVar3 - 1U);
        acStack_1028[sVar3] = '\0';
        __s1 = __xpg_basename(acStack_1028);
      } while (((__s1 == (char *)0x0) || (*__s1 == '\0')) ||
              (iVar2 = strncmp(__s1,param_1,0xfff), iVar2 != 0));
      pcVar4 = strncpy(acStack_3028,pcVar4,0x100);
      pcVar4[0xffe] = '\0';
      iVar2 = FUN_00027998(pcVar4,param_2,param_3);
    } while (iVar2 != 0);
    uVar5 = 0;
LAB_00027be4:
    closedir(__dirp);
  }
  return uVar5;
}



/* ===== FUN_00027c04 @ 00027c04 size=52 ===== */

bool FUN_00027c04(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  return iVar1 == 0 && (sStack_60.st_mode & 0xf000) == 0x4000;
}



/* ===== FUN_00027c38 @ 00027c38 size=92 ===== */

void FUN_00027c38(uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0 || (param_2 == 0 || param_3 == 0)) {
    return;
  }
  if (((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) == 0) &&
     (uVar1 = FUN_0002a4cc(0xffffffff,0,(int)((ulonglong)param_2 * (ulonglong)param_1),
                           (int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20)),
     (int)((ulonglong)uVar1 >> 0x20) != 0 || param_3 <= (uint)uVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(4);
}



/* ===== FUN_00027c94 @ 00027c94 size=148 ===== */

undefined4 FUN_00027c94(void)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 local_94;
  char acStack_90 [128];
  
  local_94 = 0xffffffff;
  __stream = fopen("/proc/devices","r");
  if (__stream != (FILE *)0x0) {
    while( true ) {
      pcVar1 = fgets(acStack_90,0x80,__stream);
      if (pcVar1 == (char *)0x0) break;
      pcVar1 = strstr(acStack_90,"device-mapper");
      if (pcVar1 != (char *)0x0) {
        sscanf(acStack_90,"%u",&local_94);
      }
    }
    fclose(__stream);
  }
  return local_94;
}



/* ===== FUN_00027d28 @ 00027d28 size=76 ===== */

void FUN_00027d28(void)

{
  char *__s1;
  int iVar1;
  
  if ((int)DAT_0003f1fc < 0) {
    __s1 = getenv("S_TIME_FORMAT");
    if (__s1 == (char *)0x0) {
      DAT_0003f1fc = 0;
    }
    else {
      iVar1 = strcmp(__s1,"ISO");
      DAT_0003f1fc = (uint)(iVar1 == 0);
    }
    return;
  }
  return;
}



/* ===== FUN_00027d74 @ 00027d74 size=40 ===== */

void FUN_00027d74(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    putchar(9);
  } while (param_1 != iVar1);
  return;
}



/* ===== FUN_00027e0c @ 00027e0c size=100 ===== */

void FUN_00027e0c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_00027e70,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  puts(DAT_00027e70);
  return;
}



/* ===== FUN_00027e74 @ 00027e74 size=108 ===== */

bool FUN_00027e74(tm *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *__format;
  
  if (param_1 == (tm *)0x0) {
    strncpy(param_2,"?/?/?",param_3);
    param_2[param_3 - 1] = '\0';
    return false;
  }
  iVar1 = FUN_00027d28();
  if (iVar1 != 0) {
    __format = "%Y-%m-%d";
  }
  else {
    __format = "%x";
  }
  strftime(param_2,param_3,__format,param_1);
  return iVar1 != 0;
}



/* ===== FUN_00027ee0 @ 00027ee0 size=304 ===== */

undefined4
FUN_00027ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_58 [64];
  
  uVar1 = FUN_00027e74(param_1,auStack_58,0x40);
  if (param_7 == 0) {
    printf("%s %s (%s) \t%s \t_%s_\t(%d CPU)\n",param_2,param_3,param_4,auStack_58,param_5,param_6);
    return uVar1;
  }
  FUN_00027e0c(0,"{\"sysstat\": {");
  FUN_00027e0c(1,"\"hosts\": [");
  FUN_00027e0c(2,"{");
  FUN_00027e0c(3,"\"nodename\": \"%s\",",param_4);
  FUN_00027e0c(3,"\"sysname\": \"%s\",",param_2);
  FUN_00027e0c(3,"\"release\": \"%s\",",param_3);
  FUN_00027e0c(3,"\"machine\": \"%s\",",param_5);
  FUN_00027e0c(3,"\"number-of-cpus\": %d,",param_6);
  FUN_00027e0c(3,"\"date\": \"%s\",",auStack_58);
  FUN_00027e0c(3,"\"statistics\": [");
  return uVar1;
}



/* ===== FUN_00028010 @ 00028010 size=140 ===== */

undefined * FUN_00028010(void)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  undefined *puVar4;
  ushort local_18 [6];
  
  iVar1 = ioctl(1,0x5413,local_18);
  if (iVar1 == -1) {
    __s = getenv("S_REPEAT_HEADER");
    if (__s != (char *)0x0) {
      sVar2 = strspn(__s,"0123456789");
      sVar3 = strlen(__s);
      if ((sVar2 == sVar3) && (puVar4 = (undefined *)atol(__s), 0 < (int)puVar4)) {
        return puVar4;
      }
    }
  }
  else if (2 < local_18[0]) {
    return (undefined *)(local_18[0] - 2);
  }
  return &DAT_00015180;
}



/* ===== FUN_0002809c @ 0002809c size=140 ===== */

char * FUN_0002809c(char *param_1)

{
  char *__s;
  char *__s1;
  int iVar1;
  char *pcVar2;
  
  __s1 = realpath(param_1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strncmp(__s1,"/dev/",5);
    __s = DAT_00028128;
    pcVar2 = __s1;
    if (iVar1 == 0) {
      pcVar2 = __s1 + 5;
    }
    strncpy(DAT_00028128,pcVar2,0x200);
    DAT_0003ff03 = 0;
    while (pcVar2 = strchr(__s,0x2f), pcVar2 != (char *)0x0) {
      *pcVar2 = '!';
    }
    free(__s1);
    return DAT_00028128;
  }
  return param_1;
}



/* ===== FUN_0002812c @ 0002812c size=92 ===== */

undefined4
FUN_0002812c(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = param_2 <= param_4;
  if (param_4 == param_2) {
    bVar1 = param_1 <= param_3;
  }
  if (bVar1) {
    dVar2 = (double)FUN_0002a458(param_3 - param_1,param_4 - (param_2 + (param_3 < param_1)));
    dVar3 = (double)FUN_0002a458(param_5,param_6);
    return SUB84((dVar2 / dVar3) * DAT_00028188,0);
  }
  return 0;
}



/* ===== FUN_00028190 @ 00028190 size=48 ===== */

undefined8 FUN_00028190(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3 - param_1;
  param_4 = param_4 - (param_2 + (uint)(param_3 < param_1));
  if (iVar1 == 0 && param_4 == 0) {
    iVar1 = 1;
    param_4 = 0;
  }
  return CONCAT44(param_4,iVar1);
}



/* ===== FUN_000281c0 @ 000281c0 size=80 ===== */

int FUN_000281c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (0 < param_2) {
    pbVar5 = (byte *)(param_1 + -1);
    iVar2 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      iVar3 = 8;
      uVar4 = 0x80;
      do {
        uVar1 = *pbVar5 & uVar4;
        uVar4 = (int)uVar4 >> 1;
        if (uVar1 != 0) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    } while (pbVar5 != (byte *)(param_1 + param_2 + -1));
    return iVar2;
  }
  return 0;
}



/* ===== FUN_00028210 @ 00028210 size=56 ===== */

void FUN_00028210(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 != 0) {
    do {
      *param_1 = (byte)*(undefined2 *)(__ctype_tolower + uVar1 * 2);
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    return;
  }
  return;
}



/* ===== FUN_00028248 @ 00028248 size=104 ===== */

undefined * FUN_00028248(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = snprintf(&DAT_000430e8,0x1000,"%s-%s","/dev/disk/by",param_1);
  if ((uVar1 < 0x1000) && (iVar2 = access(&DAT_000430e8,4), iVar2 == 0)) {
    return &DAT_000430e8;
  }
  return (undefined *)0x0;
}



/* ===== FUN_000282b0 @ 000282b0 size=116 ===== */

undefined * FUN_000282b0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00028248(&DAT_000455bc);
  uVar2 = snprintf(&DAT_000420e8,0x1000,"%s/%s",uVar1,param_1);
  if ((uVar2 < 0x1000) && (iVar3 = access(&DAT_000420e8,0), iVar3 == 0)) {
    return &DAT_000420e8;
  }
  return (undefined *)0x0;
}



/* ===== FUN_00028324 @ 00028324 size=356 ===== */

void * FUN_00028324(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *__dest;
  int iVar5;
  undefined4 *puVar6;
  dirent **ppdVar7;
  void *pvVar9;
  dirent **ppdVar10;
  dirent **local_2c [2];
  dirent **ppdVar8;
  
  pcVar1 = (char *)FUN_00028248(&DAT_000455bc);
  if ((pcVar1 == (char *)0x0) ||
     (iVar2 = scandir(pcVar1,local_2c,(__selector *)0x0,alphasort), ppdVar10 = local_2c[0],
     iVar2 < 0)) {
    return (void *)0x0;
  }
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pvVar9 = (void *)0x0;
      goto LAB_00028394;
    }
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = calloc(iVar2 - 1,4);
    if (pvVar9 != (void *)0x0) {
      iVar5 = 0;
      ppdVar7 = ppdVar10;
      do {
        ppdVar8 = ppdVar7 + 1;
        pcVar1 = (*ppdVar7)->d_name;
        puVar6 = (undefined4 *)((int)pvVar9 + iVar5 * 4);
        iVar3 = strcmp(".",pcVar1);
        if ((iVar3 != 0) && (iVar3 = strcmp("..",pcVar1), iVar3 != 0)) {
          sVar4 = strlen(pcVar1);
          __dest = calloc(sVar4 + 1,1);
          *puVar6 = __dest;
          if (__dest != (char *)0x0) {
            strcpy(__dest,pcVar1);
            puVar6 = (undefined4 *)((int)pvVar9 + iVar5 * 4 + 4);
            iVar5 = iVar5 + 1;
          }
        }
        ppdVar7 = ppdVar8;
      } while (ppdVar10 + iVar2 != ppdVar8);
      *puVar6 = 0;
    }
  }
  iVar5 = 0;
  do {
    ppdVar10 = ppdVar10 + iVar5;
    iVar5 = iVar5 + 1;
    free(*ppdVar10);
    ppdVar10 = local_2c[0];
  } while (iVar5 < iVar2);
LAB_00028394:
  free(local_2c[0]);
  return pvVar9;
}



/* ===== FUN_00028488 @ 00028488 size=276 ===== */

undefined1 * FUN_00028488(char *param_1)

{
  int *__ptr;
  char *pcVar1;
  ssize_t sVar2;
  int iVar3;
  void *__ptr_00;
  int *piVar4;
  int *piVar5;
  char acStack_1028 [4100];
  
  DAT_000410e8 = '\0';
  __ptr = (int *)FUN_00028324();
  piVar5 = __ptr;
  if (__ptr != (int *)0x0) {
    do {
      do {
        piVar4 = piVar5;
        piVar5 = piVar4 + 1;
        if (*piVar4 == 0) goto LAB_00028548;
        pcVar1 = (char *)FUN_000282b0();
      } while ((pcVar1 == (char *)0x0) ||
              (sVar2 = readlink(pcVar1,acStack_1028,0x1000), 0xffe < sVar2 - 1U));
      acStack_1028[sVar2] = '\0';
      pcVar1 = __xpg_basename(acStack_1028);
    } while ((pcVar1 == (char *)0x0) ||
            ((*pcVar1 == '\0' || (iVar3 = strncmp(pcVar1,param_1,0xfff), iVar3 != 0))));
    strncpy(&DAT_000410e8,(char *)*piVar4,0xfff);
    DAT_000420e6 = 0;
LAB_00028548:
    __ptr_00 = (void *)*__ptr;
    piVar5 = __ptr;
    while (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
      piVar5 = piVar5 + 1;
      __ptr_00 = (void *)*piVar5;
    }
    free(__ptr);
    if (DAT_000410e8 != '\0') {
      return &DAT_000410e8;
    }
  }
  return (undefined1 *)0x0;
}



/* ===== FUN_0002859c @ 0002859c size=120 ===== */

char * FUN_0002859c(void)

{
  char *pcVar1;
  ssize_t sVar2;
  char acStack_1008 [4100];
  
  pcVar1 = (char *)FUN_000282b0();
  if ((pcVar1 != (char *)0x0) && (sVar2 = readlink(pcVar1,acStack_1008,0x1000), sVar2 - 1U < 0xfff))
  {
    acStack_1008[sVar2] = '\0';
    pcVar1 = __xpg_basename(acStack_1008);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      return pcVar1;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00028614 @ 00028614 size=156 ===== */

char * FUN_00028614(undefined4 param_1,undefined4 param_2)

{
  ssize_t sVar1;
  char *__string;
  size_t sVar2;
  
  snprintf(DAT_000286b0,0x100,"%s/%u:%u","/sys/dev/block",param_1,param_2);
  sVar1 = readlink(DAT_000286b0,&DAT_000400e8,0x1000);
  if (sVar1 - 1U < 0xfff) {
    (&DAT_000400e8)[sVar1] = 0;
    __string = __xpg_basename(&DAT_000400e8);
    if ((__string != (char *)0x0) && (sVar2 = strnlen(__string,0xfff), sVar2 != 0)) {
      return __string;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_000288f4 @ 000288f4 size=532 ===== */

void FUN_000288f4(void)

{
  char *pcVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  size_t sVar4;
  char *__s_00;
  
  pcVar1 = getenv("S_COLORS");
  if (pcVar1 != (char *)0x0) {
    iVar2 = strcmp(pcVar1,"never");
    if (iVar2 == 0) {
      DAT_0003f200 = 0;
      DAT_0003f210 = 0;
      DAT_0003f220 = 0;
      DAT_0003f230 = 0;
      DAT_0003f240 = 0;
      DAT_0003f250 = 0;
      DAT_0003f260 = 0;
      DAT_0003f270 = 0;
      DAT_0003f280 = 0;
      DAT_0003f290 = 0;
      return;
    }
    iVar2 = strcmp(pcVar1,"always");
    if (iVar2 == 0) goto LAB_00028938;
  }
  iVar2 = isatty(1);
  if (iVar2 == 0) {
    DAT_0003f200 = 0;
    DAT_0003f210 = 0;
    DAT_0003f220 = 0;
    DAT_0003f230 = 0;
    DAT_0003f240 = 0;
    DAT_0003f250 = 0;
    DAT_0003f260 = 0;
    DAT_0003f270 = 0;
    DAT_0003f280 = 0;
    DAT_0003f290 = 0;
    return;
  }
LAB_00028938:
  pcVar1 = getenv("S_COLORS_SGR");
  if (pcVar1 == (char *)0x0) {
    return;
  }
  __s = strtok(pcVar1,":");
  pcVar1 = DAT_00028bc8;
  if (__s != (char *)0x0) {
    do {
      sVar3 = strlen(__s);
      if ((sVar3 - 3 < 5) && (__s[1] == '=')) {
        __s_00 = __s + 2;
        sVar4 = strspn(__s_00,";0123456789");
        if (sVar4 == sVar3 - 2) {
          switch(*__s) {
          case '+':
            snprintf(DAT_00028bd4,0x10,"\x1b[%sm",__s_00);
            break;
          case '-':
            snprintf(pcVar1,0x10,"\x1b[%sm",__s_00);
            break;
          case 'C':
            snprintf(DAT_00028bd8,0x10,"\x1b[%sm",__s_00);
            break;
          case 'H':
          case 'X':
            snprintf(DAT_00028bdc,0x10,"\x1b[%sm",__s_00);
            break;
          case 'I':
            snprintf(DAT_00028be0,0x10,"\x1b[%sm",__s_00);
            break;
          case 'M':
          case 'W':
            snprintf(DAT_00028bcc,0x10,"\x1b[%sm",__s_00);
            break;
          case 'N':
            snprintf(DAT_00028be4,0x10,"\x1b[%sm",__s_00);
            break;
          case 'R':
            snprintf(DAT_00028be8,0x10,"\x1b[%sm",__s_00);
            break;
          case 'Z':
            snprintf(DAT_00028bd0,0x10,"\x1b[%sm",__s_00);
          }
        }
      }
      __s = strtok((char *)0x0,":");
    } while (__s != (char *)0x0);
    return;
  }
  return;
}



/* ===== FUN_00028bec @ 00028bec size=164 ===== */

void FUN_00028bec(int param_1,int param_2)

{
  double in_d0;
  
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (param_1 == 0) {
    param_1 = 2;
    in_d0 = in_d0 * 0.5;
  }
  for (; DAT_00028c90 <= in_d0; in_d0 = in_d0 * DAT_00028c98) {
    param_1 = param_1 + 1;
  }
  if (param_1 < 8) {
    param_1 = (int)&DAT_0003f1fc + param_1;
  }
  else {
    param_1 = 0x3f203;
  }
  printf(" %*.*f",param_2 + -1,(uint)(DAT_0003d160 != 0),&DAT_0003d160,in_d0);
  printf("%s",&DAT_0003f290);
  putchar((uint)*(byte *)(param_1 + 0xa4));
  return;
}



/* ===== FUN_00028ca0 @ 00028ca0 size=212 ===== */

void FUN_00028ca0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_34;
  int iStack_4;
  
  iVar1 = DAT_00028d74;
  local_34 = &iStack_4;
  if (0 < param_2) {
    iVar5 = 0;
    iVar6 = DAT_00028d74 + -0x10;
    iStack_4 = param_4;
    do {
      while( true ) {
        piVar4 = (int *)((int)local_34 + 7U & 0xfffffff8);
        local_34 = piVar4 + 2;
        iVar7 = *piVar4;
        iVar8 = piVar4[1];
        iVar3 = iVar1;
        if (iVar7 == 0 && iVar8 == 0) {
          iVar3 = iVar6;
        }
        printf("%s",iVar3);
        if (-1 < param_1) break;
        iVar5 = iVar5 + 1;
        printf(" %*llu",param_3);
        printf("%s",DAT_00028d78);
        if (param_2 == iVar5) {
          return;
        }
      }
      uVar2 = FUN_0002a458(iVar7,iVar8,iVar7,iVar8);
      iVar5 = iVar5 + 1;
      FUN_00028bec(uVar2,param_1,param_3);
    } while (param_2 != iVar5);
  }
  return;
}



/* ===== FUN_00028e08 @ 00028e08 size=464 ===== */

void FUN_00028e08(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *local_5c;
  
  uVar1 = DAT_00028fe8;
  dVar4 = DAT_00028fd8;
  if (0 < param_5) {
    if (-1 < DAT_0003d160) {
      param_5 = DAT_0003d160;
    }
    if (param_5 == 1) {
      dVar4 = DAT_00028fe0;
    }
  }
  local_5c = (double *)&stack0x00000004;
  if (0 < param_3) {
    iVar2 = 0;
    do {
      while( true ) {
        pdVar3 = (double *)((uint)((int)local_5c + 7U) & 0xfffffff8);
        local_5c = pdVar3 + 1;
        dVar5 = *pdVar3;
        if (0 < param_5) break;
        if ((param_5 == 0) && ((dVar5 <= 0.5 && (-0.5 <= dVar5)))) goto LAB_00028ea0;
LAB_00028f30:
        if (param_2 != 0) {
          if (dVar5 <= -10.0) {
            printf("%s",DAT_00028ff8);
          }
          else {
            if (-5.0 < dVar5) goto LAB_00028f50;
            printf("%s",DAT_00028ff4);
          }
          if (-1 < param_1) goto LAB_00028f68;
          goto LAB_00028fa8;
        }
LAB_00028f50:
        printf("%s",DAT_00028ff0);
        if (param_1 < 0) goto LAB_00028eb8;
LAB_00028f68:
        iVar2 = iVar2 + 1;
        FUN_00028bec(SUB84(dVar5,0),param_1,param_4);
        if (param_3 == iVar2) {
          return;
        }
      }
      if ((dVar4 <= dVar5) || (dVar5 <= -dVar4)) goto LAB_00028f30;
LAB_00028ea0:
      printf("%s",DAT_00028fec);
      if (-1 < param_1) goto LAB_00028f68;
LAB_00028eb8:
      if (param_2 == 0) {
        printf(" %*.*f",param_4,param_5);
      }
      else {
LAB_00028fa8:
        printf(" %+*.*f",param_4,param_5);
      }
      iVar2 = iVar2 + 1;
      printf("%s",uVar1);
    } while (param_3 != iVar2);
  }
  return;
}



/* ===== FUN_00028ffc @ 00028ffc size=504 ===== */

void FUN_00028ffc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if ((0 < param_5) && (-1 < DAT_0003d160)) {
    param_5 = DAT_0003d160;
  }
  if (0 < param_1) {
    if (param_4 < 4) {
      param_4 = 4;
    }
    param_4 = param_4 + -1;
    if (1 < param_5) {
      param_5 = param_5 + -1;
    }
  }
  pdVar2 = (double *)&stack0x00000004;
  dVar5 = DAT_000291f8;
  if (param_5 == 1) {
    dVar5 = DAT_00029200;
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      pdVar1 = (double *)((uint)((int)pdVar2 + 7U) & 0xfffffff8);
      pdVar2 = pdVar1 + 1;
      dVar4 = *pdVar1;
      if (param_2 == 1) {
        if (DAT_00029208 <= dVar4) {
LAB_00029198:
          printf("%s",DAT_00029228);
        }
        else {
          if (dVar4 < DAT_00029210) goto LAB_000290a0;
          printf("%s",DAT_00029220);
        }
      }
      else {
        if (param_2 == 2) {
          if (dVar4 <= 10.0) goto LAB_00029198;
          if (dVar4 <= 25.0) {
            printf("%s",DAT_00029220);
            goto LAB_000290c0;
          }
        }
        else if (param_2 == 3) {
          if ((dVar4 <= 10.0) && (dVar5 <= dVar4)) goto LAB_00029198;
          if ((dVar4 <= 25.0) && (dVar5 <= dVar4)) {
            printf("%s",DAT_00029220);
            goto LAB_000290c0;
          }
        }
LAB_000290a0:
        if (param_5 < 1) {
          if ((param_5 == 0) && (dVar4 <= 0.5)) goto LAB_00029160;
        }
        else if (dVar4 < dVar5) {
LAB_00029160:
          printf("%s",DAT_00029224);
          goto LAB_000290c0;
        }
        printf("%s",DAT_00029218);
      }
LAB_000290c0:
      printf(" %*.*f",param_4,param_5);
      printf("%s",DAT_0002921c);
      if (0 < param_1) {
        printf("%%");
      }
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



/* ===== FUN_0002922c @ 0002922c size=76 ===== */

void FUN_0002922c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  printf("%s",DAT_00029278);
  if (param_1 == 0) {
    param_3 = param_4;
  }
  printf(param_2,param_3);
  printf("%s",DAT_0002927c);
  return;
}



/* ===== FUN_00029280 @ 00029280 size=124 ===== */

void FUN_00029280(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    printf("%s",DAT_00029308);
  }
  else if (param_1 == 4) {
    printf("%s",DAT_0002930c);
  }
  else {
    uVar1 = DAT_000292fc;
    if (param_1 != 2) {
      uVar1 = DAT_00029300;
    }
    printf("%s",uVar1);
  }
  printf(param_2,param_3);
  printf("%s",DAT_00029304);
  return;
}



/* ===== FUN_00029310 @ 00029310 size=68 ===== */

void FUN_00029310(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00029354;
  if (param_1 == 0) {
    uVar1 = DAT_00029358;
  }
  printf("%s",uVar1);
  printf(param_2,param_3);
  printf("%s",DAT_0002935c);
  return;
}



/* ===== FUN_00029360 @ 00029360 size=116 ===== */

uint FUN_00029360(char *param_1,int param_2,uint *param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  
  if (*param_1 == '\0') {
    *param_3 = 0xffffffff;
    return 0;
  }
  sVar1 = strspn(param_1,"0123456789");
  sVar2 = strlen(param_1);
  if (sVar1 == sVar2) {
    uVar3 = atoi(param_1);
    *param_3 = uVar3;
    return (uint)(param_2 <= (int)uVar3) | uVar3 >> 0x1f;
  }
  return 1;
}



/* ===== FUN_000293d4 @ 000293d4 size=228 ===== */

bool FUN_000293d4(char *param_1,int param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char acStack_30 [15];
  undefined1 local_21;
  
  strncpy(acStack_30,param_1,0x10);
  local_21 = 0;
  pcVar1 = strchr(acStack_30,0x2d);
  if (pcVar1 == (char *)0x0) {
    iVar2 = FUN_00029360(param_1,param_2,param_4);
    if ((iVar2 == 0) && (-1 < *param_4)) {
      *param_3 = *param_4;
      return false;
    }
  }
  else {
    *pcVar1 = '\0';
    iVar2 = FUN_00029360(acStack_30,param_2,param_3);
    if (((iVar2 == 0) && (-1 < *param_3)) &&
       (iVar2 = FUN_00029360(pcVar1 + 1,param_2,param_4), iVar2 == 0)) {
      iVar2 = *param_4;
      if (iVar2 < 0) {
        iVar2 = param_2 + -1;
        *param_4 = iVar2;
      }
      return iVar2 < *param_3;
    }
  }
  return true;
}



/* ===== FUN_000294b8 @ 000294b8 size=272 ===== */

undefined4 FUN_000294b8(char *param_1,byte *param_2,int param_3,char *param_4)

{
  int iVar1;
  char *__s1;
  uint uVar2;
  uint local_20;
  int local_1c;
  
  iVar1 = strcmp(param_1,"ALL");
  if (iVar1 == 0) {
    memset(param_2,-1,(param_3 + 1 >> 3) + 1);
    return 0;
  }
  __s1 = strtok(param_1,",");
  do {
    if (__s1 == (char *)0x0) {
      return 0;
    }
    iVar1 = strcmp(__s1,param_4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 1;
    }
    else {
      iVar1 = FUN_000293d4(__s1,param_3,&local_20,&local_1c);
      uVar2 = local_20;
      if (iVar1 != 0) {
        return 1;
      }
      while ((int)uVar2 <= local_1c) {
        uVar2 = uVar2 + 1;
        param_2[(int)uVar2 >> 3] = param_2[(int)uVar2 >> 3] | (byte)(1 << (uVar2 & 7));
      }
    }
    __s1 = strtok((char *)0x0,",");
  } while( true );
}



/* ===== FUN_00029694 @ 00029694 size=140 ===== */

void FUN_00029694(void)

{
  int *piVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_00029724;
  piVar2 = DAT_00029720;
  piVar3 = DAT_00029720;
  do {
    piVar3 = piVar3 + 1;
    __ptr = (int *)*piVar3;
    if ((__ptr != (int *)0x0) && (*__ptr == 0)) {
      if ((void *)__ptr[3] != (void *)(__ptr[4] + 0x84)) {
        free((void *)__ptr[3]);
        __ptr = (int *)*piVar3;
      }
      free(__ptr);
      *piVar3 = 0;
    }
  } while (piVar3 != piVar1);
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      free(*(void **)(*piVar2 + 0x10));
      free((void *)*piVar2);
      *piVar2 = 0;
    }
  } while (piVar2 != piVar1);
  return;
}



/* ===== FUN_00029728 @ 00029728 size=1608 ===== */

int FUN_00029728(void)

{
  undefined2 uVar1;
  char cVar2;
  FILE *__stream;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *__src;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *__ptr;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_1e4;
  uint local_1e0;
  uint local_1dc;
  char local_1d8 [16];
  char local_1c8;
  char acStack_1c7 [15];
  char local_1b8 [16];
  undefined4 local_1a8 [7];
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char acStack_168 [63];
  undefined1 local_129;
  char local_128 [260];
  
  __stream = fopen("/etc/sysconfig/sysstat.ioconf","r");
  if (__stream == (FILE *)0x0) {
    __stream = fopen("./sysstat.ioconf","r");
    if (__stream == (FILE *)0x0) {
      return 0;
    }
    strncpy(acStack_168,"./sysstat.ioconf",0x40);
  }
  else {
    strncpy(acStack_168,"/etc/sysconfig/sysstat.ioconf",0x40);
  }
  local_129 = 0;
  memset(DAT_00029d70,0,0x800);
  local_1e4 = 0;
  __ptr = (char *)0x0;
  __src = (char *)0x0;
LAB_0002978c:
  do {
    while( true ) {
      do {
        pcVar3 = fgets(local_128,0xff,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          free(__src);
          free(__ptr);
          DAT_000450fc = 1;
          return local_1e4;
        }
      } while (local_128[0] == '\n' || local_128[0] == '#');
      if ((__src == (char *)0x0) && (__src = malloc(0xf0), __src == (char *)0x0)) {
        perror("malloc");
        FUN_00029694();
        fclose(__stream);
        if (__ptr == (char *)0x0) {
          return 0;
        }
        goto LAB_00029bdc;
      }
      if ((__ptr == (char *)0x0) && (__ptr = malloc(0x14), __ptr == (char *)0x0)) {
        perror("malloc");
        FUN_00029694();
        fclose(__stream);
        free(__src);
        return 0;
      }
      pcVar3 = __ptr + 4;
      memset(__src,0,0xf0);
      puVar12 = local_1a8;
      __ptr[0] = '\0';
      __ptr[1] = '\0';
      __ptr[2] = '\0';
      __ptr[3] = '\0';
      *(undefined4 *)(__ptr + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(__ptr + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __ptr[0xc] = '\0';
      __ptr[0xd] = '\0';
      __ptr[0xe] = '\0';
      __ptr[0xf] = '\0';
      *(undefined4 *)(__ptr + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
      ;
      iVar4 = sscanf(local_128,"%u:%u:%u:%63s",&local_1e0,&local_1dc,pcVar3,puVar12);
      if ((iVar4 != 4) &&
         (iVar4 = sscanf(local_128,"%u:%u:%u",&local_1e0,&local_1dc,pcVar3,puVar12), 1 < iVar4 - 3U)
         ) break;
      if (local_1dc != 0) {
        if (local_1dc < 0x200) {
          if (local_1e0 < 0x200) {
            iVar8 = local_1dc * 4;
            if ((&DAT_000440fc)[local_1dc] == 0) {
              fprintf(stderr,
                      "%s: Indirect record \'%u:%u:%u:...\' references not yet seen major %u\n",
                      acStack_168,local_1e0,local_1dc,*(undefined4 *)(__ptr + 4),local_1e0);
            }
            else {
              if (iVar4 == 3) {
                *(int *)(__ptr + 0xc) = *(int *)((&DAT_000440fc)[local_1dc] + 0x10) + 0x84;
              }
              else {
                puVar12 = *(undefined4 **)(__ptr + 0xc);
                if (puVar12 == (undefined4 *)0x0) {
                  puVar12 = malloc(0x40);
                  *(undefined4 **)(__ptr + 0xc) = puVar12;
                  if (puVar12 == (undefined4 *)0x0) {
                    perror("malloc");
                    FUN_00029694();
                    fclose(__stream);
                    free(__src);
LAB_00029bdc:
                    free(__ptr);
                    return 0;
                  }
                }
                puVar11 = local_1a8;
                do {
                  uVar5 = *puVar11;
                  uVar7 = puVar11[1];
                  uVar9 = puVar11[2];
                  uVar10 = puVar11[3];
                  pcVar3 = (char *)(puVar11 + 4);
                  puVar11 = puVar11 + 4;
                  *puVar12 = uVar5;
                  puVar12[1] = uVar7;
                  puVar12[2] = uVar9;
                  puVar12[3] = uVar10;
                  puVar12 = puVar12 + 4;
                } while (pcVar3 != acStack_168);
                iVar8 = local_1dc << 2;
              }
              *(uint *)(__ptr + 8) = local_1dc;
              (&DAT_000440fc)[local_1e0] = __ptr;
              iVar4 = *(int *)(&DAT_000448fc + iVar8);
              uVar5 = *(undefined4 *)(*(int *)((int)&DAT_000440fc + iVar8) + 0x10);
              __ptr[0] = '\0';
              __ptr[1] = '\0';
              __ptr[2] = '\0';
              __ptr[3] = '\0';
              *(int *)(&DAT_000448fc + iVar8) = iVar4 + 1;
              *(undefined4 *)(__ptr + 0x10) = uVar5;
              __ptr = (char *)0x0;
            }
          }
          else {
            fprintf(stderr,"%s: Major #%u out of range\n",acStack_168);
          }
        }
        else {
          fprintf(stderr,"%s: Indirect major #%u out of range\n",acStack_168,local_1dc);
        }
      }
    }
    iVar4 = sscanf(local_128,"%u:%[^:]:%[^:]:%u:%[^:]:%u:%[^:]:%u:%63s",&local_1e0,__src,local_1d8,
                   pcVar3,&local_1c8,__src + 0x7c,local_1b8,__src + 0x80,local_1a8);
    if (iVar4 == 9) {
      if (local_1e0 - 1 < 0x1fe) {
        if (local_1d8[0] == 'x') {
          if ((&DAT_000440fc)[local_1e0] == 0) {
            fprintf(stderr,
                    "%s: type \'x\' record for major #%u must follow the base record - ignored\n",
                    acStack_168);
          }
          else {
            iVar4 = *(int *)((&DAT_000440fc)[local_1e0] + 0x10);
            if (*(int *)(iVar4 + 0xe8) == 0) {
              *(undefined4 *)(iVar4 + 0xec) = *(undefined4 *)(__ptr + 4);
              strncpy((char *)(iVar4 + 200),__src,0x20);
              *(undefined1 *)(iVar4 + 0xe7) = 0;
              *(undefined4 *)(iVar4 + 0xe8) = 1;
            }
            else {
              fprintf(stderr,"%s: duplicate \'x\' record for major #%u - ignored\ninput line: %s\n",
                      acStack_168,local_1e0,local_128);
            }
          }
        }
        else {
          if (local_1d8[0] == '*') {
            strncpy(__src + 0x20,__src,0x20);
            __src[0x52] = '\0';
          }
          else {
            sprintf(__src + 0x20,"%s%s%%d",__src,local_1d8);
            *(int *)(__src + 0x78) = *(int *)(__src + 0x78) + 1;
          }
          __src[0x53] = '\0';
          cVar2 = DAT_0002c6b6;
          uVar1 = DAT_0002c6b4;
          if (local_1c8 == 'a') {
            *(undefined1 **)(__src + 0xc4) = &LAB_000295c8;
            *(undefined2 *)(__src + 0x53) = uVar1;
            __src[0x55] = cVar2;
          }
          else {
            if (local_1c8 != 'd') {
              if (local_1c8 != '%') goto LAB_000298fc;
              strncpy(__src + 0x53,acStack_1c7,0xf);
            }
            pcVar3 = __src + 0x53;
            *(undefined1 **)(__src + 0xc4) = &LAB_00029630;
            sVar6 = strlen(pcVar3);
            cVar2 = DAT_0002c6b6;
            *(undefined2 *)(pcVar3 + sVar6) = DAT_0002c6b4;
            pcVar3[sVar6 + 2] = cVar2;
          }
LAB_000298fc:
          pcVar3 = "";
          if (local_1b8[0] != '*') {
            pcVar3 = local_1b8;
          }
          local_1e4 = local_1e4 + 1;
          sprintf(__src + 99,"%s%%d",pcVar3);
          __ptr[0xc] = '\0';
          __ptr[0xd] = '\0';
          __ptr[0xe] = '\0';
          __ptr[0xf] = '\0';
          *(char **)(__ptr + 0x10) = __src;
          __ptr[0] = '\x01';
          __ptr[1] = '\0';
          __ptr[2] = '\0';
          __ptr[3] = '\0';
          *(undefined4 *)(__src + 0x84) = local_1a8[0];
          *(undefined4 *)(__src + 0x88) = local_1a8[1];
          *(undefined4 *)(__src + 0x8c) = local_1a8[2];
          *(undefined4 *)(__src + 0x90) = local_1a8[3];
          (&DAT_000440fc)[local_1e0] = __ptr;
          *(uint *)(__ptr + 8) = local_1e0;
          *(undefined4 *)(__src + 0x94) = local_1a8[4];
          *(undefined4 *)(__src + 0x98) = local_1a8[5];
          *(undefined4 *)(__src + 0x9c) = local_1a8[6];
          *(undefined4 *)(__src + 0xa0) = uStack_18c;
          *(undefined4 *)(__src + 0xa4) = local_188;
          *(undefined4 *)(__src + 0xa8) = uStack_184;
          *(undefined4 *)(__src + 0xac) = uStack_180;
          *(undefined4 *)(__src + 0xb0) = uStack_17c;
          *(undefined4 *)(__src + 0xb4) = local_178;
          *(undefined4 *)(__src + 0xb8) = uStack_174;
          *(undefined4 *)(__src + 0xbc) = uStack_170;
          *(undefined4 *)(__src + 0xc0) = uStack_16c;
          __ptr = (char *)0x0;
          __src = (char *)0x0;
        }
      }
      else {
        fprintf(stderr,"%s: major #%u out of range\n","ioc_init");
      }
      goto LAB_0002978c;
    }
    fprintf(stderr,"%s: Malformed %u field record: %s\n",acStack_168,iVar4,local_128);
  } while( true );
}



/* ===== FUN_0002a044 @ 0002a044 size=168 ===== */

ulonglong FUN_0002a044(uint param_1,uint param_2)

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



/* ===== FUN_0002a0ec @ 0002a0ec size=32 ===== */

void FUN_0002a0ec(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002a044();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002a458 @ 0002a458 size=372 ===== */

ulonglong FUN_0002a458(uint param_1,uint param_2)

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
LAB_0002a230:
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
  if ((param_2 & 0x100000) != 0) goto LAB_0002a230;
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
      goto LAB_0002a2b0;
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
LAB_0002a2b0:
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



/* ===== FUN_0002a4cc @ 0002a4cc size=76 ===== */

void FUN_0002a4cc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0002a570();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002a518 @ 0002a518 size=72 ===== */

undefined8 FUN_0002a518(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * DAT_0002a560;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) + -dVar2 * DAT_0002a568;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== FUN_0002a570 @ 0002a570 size=328 ===== */

undefined8 FUN_0002a570(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0002a6b8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00046000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00046004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atol @ 00046008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 0004600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 00046010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00046014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 00046018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00046020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00046024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 00046028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0004602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00046030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00046034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00046038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 0004603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00046040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00046044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00046048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0004604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00046050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00046054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scandir @ 00046058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0004605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00046060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00046064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00046068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00046070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00046074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00046078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alphasort @ 0004607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00046080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00046084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00046088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0004608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 00046090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime_r @ 00046094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00046098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0004609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 000460a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 000460a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000460a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 000460ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000460b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000460b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000460b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000460bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 000460c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000460c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000460c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000460cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000460d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000460d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000460d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000460dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000460e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000460e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 000460e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000460ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 000460f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000460f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000460f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 000460fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00046100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00046104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00046108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0004610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00046110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 00046114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 00046118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0004611c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00046120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00046124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 00046128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0004612c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00046130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00046134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


