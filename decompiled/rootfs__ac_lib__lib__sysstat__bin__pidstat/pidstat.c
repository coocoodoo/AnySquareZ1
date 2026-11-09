// pidstat — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000110f4 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011118 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002c00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011124 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002c010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011130 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002c014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pause @ 0001113c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pause_0002c018)();
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00011148 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0002c01c)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00011154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002c020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011160 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002c024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 0001116c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0002c028)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011178 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002c02c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::atol @ 00011184 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_atol_0002c030)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011190 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002c034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpid @ 0001119c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0002c038)();
  return _Var1;
}



/* ===== <EXTERNAL>::fgets @ 000111a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002c03c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000111b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002c040)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000111c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002c044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 000111cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002c048)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 000111d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0002c04c)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 000111e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002c050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000111f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002c054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 000111fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0002c058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011208 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0002c05c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011214 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002c060)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00011220 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0002c064)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::realpath @ 0001122c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0002c068)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00011238 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002c06c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::gmtime_r @ 00011250 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0002c074)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::alarm @ 0001125c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0002c078)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011268 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002c07c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strnlen @ 00011274 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0002c080)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::uname @ 00011280 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0002c084)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 0001128c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002c088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011298 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002c08c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000112a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002c090)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000112b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002c094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000112bc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002c098)();
  return;
}



/* ===== <EXTERNAL>::wait @ 000112c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t wait(void *__stat_loc)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_wait_0002c09c)(__stat_loc);
  return _Var1;
}



/* ===== <EXTERNAL>::scandir @ 000112d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_0002c0a0)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 000112e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0002c0a4)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 000112ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002c0a8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 000112f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002c0ac)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011304 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002c0b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::alphasort @ 00011310 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_alphasort_0002c0b4)(__e1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 0001131c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002c0b8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtok @ 00011328 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0002c0bc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fork @ 00011334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0002c0c0)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 00011340 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002c0c4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::sigaction @ 0001134c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0002c0c8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011358 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002c0cc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::regcomp @ 00011370 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int regcomp(regex_t *__preg,char *__pattern,int __cflags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_regcomp_0002c0d4)(__preg);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 0001137c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002c0d8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011388 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002c0dc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002c0e0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::regexec @ 000113a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int regexec(regex_t *__preg,char *__string,size_t __nmatch,regmatch_t *__pmatch,int __eflags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_regexec_0002c0e4)(__preg);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 000113ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0002c0e8)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 000113b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002c0ec)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000113c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002c0f0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 000113d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_0002c0f4)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000113dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002c0f8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 000113e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0002c0fc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 000113f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0002c100)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 00011400 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0002c104)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::stat @ 0001140c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002c108)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011418 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002c10c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00011424 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002c110)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011430 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002c114)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 0001143c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002c118)(__status);
  return;
}



/* ===== <EXTERNAL>::setbuf @ 00011448 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_0002c11c)(__stream);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011454 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002c120)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 00011460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0002c124)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001146c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002c128)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00011478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002c12c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::regfree @ 00011484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void regfree(regex_t *__preg)

{
  (*(code *)PTR_regfree_0002c130)(__preg);
  return;
}



/* ===== <EXTERNAL>::strchr @ 00011490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002c134)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::execvp @ 0001149c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_0002c138)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 000114a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002c13c)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000114b4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002c140)();
  return;
}



/* ===== <EXTERNAL>::close @ 000114c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002c144)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000114cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002c148)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000114d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002c14c)(__ptr);
  return;
}



/* ===== FUN_000114e8 @ 000114e8 size=1984 ===== */

undefined4 FUN_000114e8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  __pid_t _Var5;
  int iVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  char *__s;
  int iVar12;
  int iVar13;
  int local_1b8;
  utsname uStack_1b0;
  
  FUN_00018504();
  FUN_00017544();
  FUN_000174ec();
  if (param_1 < 2) {
    iVar10 = 0;
    local_1b8 = -1;
  }
  else {
    iVar10 = 0;
    local_1b8 = -1;
    iVar12 = 1;
    do {
      while( true ) {
        __s = (char *)(param_2 + iVar12);
        pcVar9 = (char *)param_2[iVar12];
        iVar2 = strcmp(pcVar9,"-e");
        iVar13 = iVar12;
        if (iVar2 != 0) break;
        iVar12 = iVar12 + 1;
        if (param_2[iVar12] != 0) {
          DAT_0002c24c = DAT_0002c24c | 0x2001;
          uVar11 = FUN_00016224(param_1 - iVar12,param_2 + iVar12);
          FUN_00012058(DAT_00011d68,uVar11,0);
          goto LAB_000119b8;
        }
switchD_00011b74_caseD_4a:
        do {
          FUN_00011ed8(*param_2);
LAB_00011638:
          DAT_0002c24c = DAT_0002c24c | 1;
        } while (*(char **)(__s + 4) == (char *)0x0);
        pcVar9 = strtok(*(char **)(__s + 4),",");
        iVar12 = iVar13;
        if (pcVar9 != (char *)0x0) {
          do {
            iVar2 = strcmp(pcVar9,"ALL");
            if (iVar2 == 0) {
              iVar10 = iVar10 + 1;
              DAT_0002c24c = DAT_0002c24c | 2;
            }
            else {
              iVar2 = strcmp(pcVar9,"SELF");
              if (iVar2 == 0) {
                _Var5 = getpid();
                FUN_00012058(DAT_00011d68,_Var5,0);
              }
              else {
                sVar3 = strspn(pcVar9,"0123456789");
                sVar4 = strlen(pcVar9);
                __s = "ALL";
                if ((sVar3 != sVar4) || (iVar2 = atoi(pcVar9), iVar2 == 0))
                goto switchD_00011b74_caseD_4a;
                FUN_00012058(DAT_00011d68,iVar2,0);
              }
            }
            iVar10 = iVar10 + 1;
            pcVar9 = strtok((char *)0x0,",");
            if (pcVar9 == (char *)0x0) break;
          } while( true );
        }
LAB_000117fc:
        iVar12 = iVar12 + 2;
        if (param_1 <= iVar12) goto LAB_000119b8;
      }
      iVar2 = strcmp(pcVar9,"-p");
      if (iVar2 == 0) goto LAB_00011638;
      iVar2 = strcmp(pcVar9,"-C");
      if (iVar2 == 0) {
        if (*(char **)(__s + 4) != (char *)0x0) {
          pcVar9 = strncpy(&DAT_0003275c,*(char **)(__s + 4),0x1000);
          DAT_0002c24c = DAT_0002c24c | 8;
          cVar8 = *pcVar9;
          pcVar9[0xfff] = '\0';
joined_r0x00011574:
          iVar13 = iVar12 + 2;
          if (cVar8 != '\0') goto LAB_00011578;
        }
        goto switchD_00011b74_caseD_4a;
      }
      iVar2 = strcmp(pcVar9,"-G");
      if (iVar2 == 0) {
        if (*(char **)(__s + 4) != (char *)0x0) {
          pcVar9 = strncpy(&DAT_00033874,*(char **)(__s + 4),0x1000);
          DAT_0002c24c = DAT_0002c24c | 0x400;
          cVar8 = *pcVar9;
          pcVar9[0xfff] = '\0';
          goto joined_r0x00011574;
        }
        goto switchD_00011b74_caseD_4a;
      }
      iVar2 = strcmp(pcVar9,"--human");
      if (iVar2 != 0) {
        iVar6 = strncmp(pcVar9,"--dec=",6);
        iVar2 = local_1b8;
        if ((iVar6 == 0) && (sVar3 = strlen(pcVar9), sVar3 == 7)) {
          if (((*(ushort *)(__ctype_b + (uint)(byte)pcVar9[6] * 2) & 8) != 0) &&
             (DAT_0002c15c = atoi(pcVar9 + 6), DAT_0002c15c < 3)) {
LAB_00011b08:
            local_1b8 = iVar2;
            iVar13 = iVar12 + 1;
            goto LAB_00011578;
          }
          goto switchD_00011b74_caseD_4a;
        }
        iVar6 = strcmp(pcVar9,"-T");
        uVar1 = DAT_0002c250;
        if (iVar6 != 0) {
          iVar6 = strcmp(pcVar9,"-U");
          uVar1 = DAT_0002c24c;
          pcVar7 = DAT_0002c158;
          if (iVar6 == 0) {
            __s = *(char **)(__s + 4);
            iVar13 = iVar12 + 1;
            DAT_0002c24c = DAT_0002c24c | 0x100;
            if ((__s != (char *)0x0) && (*__s != '-')) {
              sVar3 = strspn(__s,"0123456789");
              sVar4 = strlen(__s);
              if (sVar3 != sVar4) {
                pcVar9 = strncpy(&DAT_0003375c,__s,0x100);
                iVar13 = iVar12 + 2;
                DAT_0002c24c = uVar1 | 0x300;
                pcVar9[0xff] = '\0';
                if (*pcVar9 == '\0') goto switchD_00011b74_caseD_4a;
              }
            }
            goto LAB_00011578;
          }
          if (*pcVar9 == '-') {
            cVar8 = pcVar9[1];
            if (cVar8 != '\0') {
              iVar6 = 1;
              do {
                switch(cVar8) {
                case 'H':
                  DAT_0002c24c = DAT_0002c24c | 0x1000;
                  break;
                case 'I':
                  DAT_0002c24c = DAT_0002c24c | 4;
                  break;
                default:
                  goto switchD_00011b74_caseD_4a;
                case 'R':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 0x40;
                  break;
                case 'U':
                  DAT_0002c24c = DAT_0002c24c | 0x100;
                  break;
                case 'V':
                  FUN_00017358();
                  pcVar9 = *(char **)__s;
                  break;
                case 'd':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 4;
                  break;
                case 'h':
                  DAT_0002c24c = DAT_0002c24c | 0x40;
                  break;
                case 'l':
                  DAT_0002c24c = DAT_0002c24c | 0x80;
                  break;
                case 'r':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 2;
                  break;
                case 's':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 0x10;
                  break;
                case 't':
                  DAT_0002c24c = DAT_0002c24c | 0x20;
                  break;
                case 'u':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 1;
                  break;
                case 'v':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 0x20;
                  break;
                case 'w':
                  iVar2 = iVar2 + 1;
                  DAT_0002c248 = DAT_0002c248 | 8;
                }
                iVar6 = iVar6 + 1;
                cVar8 = pcVar9[iVar6];
              } while (cVar8 != '\0');
            }
            goto LAB_00011b08;
          }
          if ((int)DAT_0002c158 < 0) {
            __s = (char *)strspn(pcVar9,"0123456789");
            pcVar7 = (char *)strlen(pcVar9);
            if (__s == pcVar7) {
              iVar13 = iVar12 + 1;
              DAT_0002c158 = (char *)atol(pcVar9);
              if (-1 < (int)DAT_0002c158) {
                DAT_0002ca90 = -1;
                goto LAB_00011578;
              }
            }
          }
          else {
            __s = DAT_0002c158;
            if (DAT_0002ca90 < 1) {
              sVar3 = strspn(pcVar9,"0123456789");
              __s = (char *)(uint)(pcVar7 == (char *)0x0);
              sVar4 = strlen(pcVar9);
              if (sVar3 != sVar4) {
                __s = (char *)0x1;
              }
              if (__s == (char *)0x0) {
                iVar13 = iVar12 + 1;
                DAT_0002ca90 = atol(pcVar9);
                if (0 < DAT_0002ca90) goto LAB_00011578;
              }
            }
          }
          goto switchD_00011b74_caseD_4a;
        }
        __s = *(char **)(__s + 4);
        if (__s == (char *)0x0) goto switchD_00011b74_caseD_4a;
        if (DAT_0002c250 != 0) {
          local_1b8 = local_1b8 + 1;
        }
        iVar2 = strcmp(__s,"TASK");
        if (iVar2 == 0) {
          DAT_0002c250 = uVar1 | 1;
        }
        else {
          iVar2 = strcmp(__s,"CHILD");
          if (iVar2 == 0) {
            DAT_0002c250 = uVar1 | 2;
          }
          else {
            iVar2 = strcmp(__s,"ALL");
            if (iVar2 != 0) goto switchD_00011b74_caseD_4a;
            DAT_0002c250 = uVar1 | 3;
            local_1b8 = local_1b8 + 1;
          }
        }
        goto LAB_000117fc;
      }
      iVar13 = iVar12 + 1;
      DAT_0002c24c = DAT_0002c24c | 0x800;
LAB_00011578:
      iVar12 = iVar13;
    } while (iVar13 < param_1);
  }
LAB_000119b8:
  if ((int)DAT_0002c158 < 0) {
    DAT_0002c158 = (char *)0x0;
  }
  if ((DAT_0002c24c & 1) == 0) {
    FUN_00011fb4();
    uVar11 = 0x17;
    DAT_0002ca94 = FUN_00017238(0xffffffff,0);
    local_1b8 = 1;
  }
  else {
    FUN_00011fb4();
    DAT_0002ca94 = FUN_00017238(0xffffffff,0);
    if (local_1b8 + 1U < 2) {
      if (iVar10 < 2) {
        uVar11 = FUN_00017c20();
        local_1b8 = 0;
      }
      else {
        local_1b8 = 1;
        uVar11 = 0x17;
      }
    }
    else {
      uVar11 = 0x17;
    }
  }
  FUN_00017384(&DAT_00034874,0);
  setbuf(stdout,(char *)0x0);
  uname(&uStack_1b0);
  FUN_00017af0(&DAT_00034874,&uStack_1b0,uStack_1b0.release,uStack_1b0.nodename,uStack_1b0.machine,
               DAT_0002ca94,0);
  FUN_00015f9c(local_1b8,uVar11);
  FUN_00011f18(DAT_00011d68,1);
  return DAT_0002c244;
}



/* ===== entry @ 00011d6c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002c0d0)
            (DAT_00011da0,param_2,&stack0x00000004,DAT_00011da4,DAT_00011d9c,param_1);
  return;
}



/* ===== FUN_00011da8 @ 00011da8 size=32 ===== */

void FUN_00011da8(void)

{
  if (DAT_00011dcc == DAT_00011dc8) {
    return;
  }
  if (DAT_00011dd0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011dd0)();
  return;
}



/* ===== _FINI_0 @ 00011e0c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011e48;
  if (*DAT_00011e48 != '\0') {
    return;
  }
  FUN_00011da8();
  if (DAT_00011e4c != 0) {
    __deregister_frame_info(DAT_00011e50);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011e54 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011e78 != 0) {
    __register_frame_info(DAT_00011e80,DAT_00011e7c);
  }
  if ((DAT_00011e04 - DAT_00011e00 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011e08 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011e08)();
  return;
}



/* ===== FUN_00011e98 @ 00011e98 size=64 ===== */

void FUN_00011e98(int param_1)

{
  undefined1 uStack_c;
  byte local_b;
  
  DAT_0002c240 = 1;
  if (param_1 != 0x11) {
    return;
  }
  wait(&uStack_c);
  DAT_0002c244 = (uint)local_b;
  return;
}



/* ===== FUN_00011ed8 @ 00011ed8 size=64 ===== */

void FUN_00011ed8(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [ options ] [ <interval> [ <count> ] ] [ -e <program> <args> ]\n",
          param_1);
  fwrite("Options are:\n[ -d ] [ -H ] [ -h ] [ -I ] [ -l ] [ -R ] [ -r ] [ -s ] [ -t ] [ -U [ <username> ] ]\n[ -u ] [ -V ] [ -v ] [ -w ] [ -C <command> ] [ -G <process_name> ]\n[ -p { <pid> [,...] | SELF | ALL } ] [ -T { TASK | CHILD | ALL } ]\n[ --dec={ 0 | 1 | 2 } ] [ --human ]\n"
         ,1,0x10c,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011f18 @ 00011f18 size=124 ===== */

void FUN_00011f18(int *param_1,int param_2)

{
  void *__ptr;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  __ptr = (void *)*param_1;
  do {
    if (__ptr == (void *)0x0) {
      return;
    }
    while (*(int *)((int)__ptr + 0x38) == 0 || param_2 != 0) {
      *param_1 = (int)*(void **)((int)__ptr + 0x68);
      puVar1 = (undefined4 *)((int)__ptr + 0x58);
      do {
        puVar2 = puVar1 + 1;
        if ((void *)*puVar1 != (void *)0x0) {
          free((void *)*puVar1);
        }
        puVar1 = puVar2;
      } while (puVar2 != (undefined4 *)((int)__ptr + 100));
      free(__ptr);
      __ptr = (void *)*param_1;
      if (__ptr == (void *)0x0) {
        return;
      }
    }
    param_1 = (int *)((int)__ptr + 0x68);
    __ptr = *(void **)((int)__ptr + 0x68);
  } while( true );
}



/* ===== FUN_00011fb4 @ 00011fb4 size=164 ===== */

void FUN_00011fb4(void)

{
  uint uVar1;
  
  if (DAT_0002c248 == 0) {
    DAT_0002c248 = 1;
  }
  if ((DAT_0002c24c & 1) == 0) {
    DAT_0002c24c = DAT_0002c24c | 0x12;
  }
  if (DAT_0002c250 == 0) {
    uVar1 = 0x7f;
    DAT_0002c250 = 1;
  }
  else if ((DAT_0002c250 & 1) == 0) {
    if ((DAT_0002c250 & 2) == 0) goto LAB_0001202c;
    uVar1 = 3;
  }
  else {
    uVar1 = 0x7f;
  }
  DAT_0002c248 = uVar1 & DAT_0002c248;
  if (DAT_0002c248 != 0) {
    return;
  }
LAB_0001202c:
  DAT_0002c248 = 0;
  fwrite("Requested activities not available\n",1,0x23,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012058 @ 00012058 size=380 ===== */

int FUN_00012058(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *param_1;
  iVar6 = iVar2;
  if (param_3 == 0) {
    for (; iVar3 = iVar2, iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x68)) {
      if (*(int *)(iVar6 + 100) == 0) {
        if (*(int *)(iVar6 + 0x30) == param_2) {
          return iVar6;
        }
        if (param_2 < *(int *)(iVar6 + 0x30)) {
          iVar2 = 0;
          iVar3 = *param_1;
          break;
        }
      }
      param_1 = (int *)(iVar6 + 0x68);
      iVar2 = 0;
    }
  }
  else {
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x30) == param_3) break;
      iVar2 = *(int *)(iVar2 + 0x68);
    }
    iVar3 = *(int *)(iVar2 + 0x68);
    param_1 = (int *)(iVar2 + 0x68);
    if ((iVar3 != 0) && (iVar2 == *(int *)(iVar3 + 100))) {
      iVar6 = *(int *)(iVar3 + 0x30);
      if (param_2 == iVar6) {
        return iVar3;
      }
      while (iVar6 <= param_2) {
        param_1 = (int *)(iVar3 + 0x68);
        iVar3 = *(int *)(iVar3 + 0x68);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 100) != iVar2)) break;
        iVar6 = *(int *)(iVar3 + 0x30);
        if (iVar6 == param_2) {
          return iVar3;
        }
      }
    }
  }
  pvVar1 = malloc(0x2070);
  *param_1 = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,0x2070);
    iVar6 = *param_1;
    puVar4 = (undefined4 *)(iVar6 + 0x58);
    while( true ) {
      pvVar1 = malloc(0xb0);
      puVar5 = puVar4 + 1;
      *puVar4 = pvVar1;
      if (pvVar1 == (void *)0x0) break;
      memset(pvVar1,0,0xb0);
      puVar4 = puVar5;
      if (puVar5 == (undefined4 *)(iVar6 + 100)) {
        *(int *)(iVar6 + 0x30) = param_2;
        *(int *)(iVar6 + 0x68) = iVar3;
        if (iVar2 != 0) {
          *(int *)(iVar6 + 100) = iVar2;
        }
        return iVar6;
      }
    }
  }
  perror("malloc");
                    /* WARNING: Subroutine does not return */
  exit(4);
}



/* ===== FUN_00012218 @ 00012218 size=212 ===== */

void FUN_00012218(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 100);
  if (((DAT_0002c24c & 0x80) == 0) || (*(char *)(param_1 + 0x106c) == '\0')) {
    iVar3 = param_1 + 0x6c;
    if (iVar1 == 0) goto LAB_000122d4;
    uVar2 = *(uint *)(iVar1 + 0x3c);
  }
  else {
    if (iVar1 == 0) {
      iVar3 = param_1 + 0x106c;
LAB_000122d4:
      FUN_00018e90(1,"  %s\n",iVar3);
      return;
    }
    uVar2 = *(uint *)(iVar1 + 0x3c);
  }
  if ((uVar2 & 4) != 0) {
    FUN_00018e90(4,"  |__%s\n",param_1 + 0x6c);
    return;
  }
  FUN_00018e90(1,"  (%s)",iVar1 + 0x6c);
  FUN_00018e90(4,"__%s\n",param_1 + 0x6c);
  *(uint *)(*(int *)(param_1 + 100) + 0x3c) = *(uint *)(*(int *)(param_1 + 100) + 0x3c) | 4;
  return;
}



/* ===== FUN_000122ec @ 000122ec size=56 ===== */

void FUN_000122ec(void)

{
  undefined1 auStack_90 [24];
  undefined4 local_78;
  
  memset(auStack_90,0,0x88);
  FUN_0001681c(auStack_90);
  DAT_00033870 = local_78;
  return;
}



/* ===== FUN_00012324 @ 00012324 size=472 ===== */

undefined4 FUN_00012324(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  ssize_t sVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  size_t __n;
  undefined8 uVar6;
  undefined8 in_d17;
  char acStack_a0 [128];
  
  iVar5 = *(int *)(param_2 + (param_5 + 0x16) * 4);
  if (param_4 == 0) {
    sprintf(acStack_a0,"/proc/%u/stat",param_1);
  }
  else {
    sprintf(acStack_a0,"/proc/%u/task/%u/stat",param_4,param_1);
  }
  iVar1 = open(acStack_a0,0);
  if (-1 < iVar1) {
    sVar2 = read(iVar1,&DAT_0002c254,0x400);
    close(iVar1);
    if (0 < sVar2) {
      (&DAT_0002c254)[sVar2] = 0;
      pcVar3 = strchr(&DAT_0002c254,0x28);
      if (pcVar3 != (char *)0x0) {
        pcVar3 = pcVar3 + 1;
        pcVar4 = strrchr(pcVar3,0x29);
        if ((pcVar4 != (char *)0x0) && (__n = (int)pcVar4 - (int)pcVar3, (int)__n < 0x1000)) {
          memcpy((void *)(param_2 + 0x6c),pcVar3,__n);
          *(undefined1 *)(param_2 + __n + 0x6c) = 0;
          iVar1 = sscanf(pcVar4 + 2,
                         "%*s %*d %*d %*d %*d %*d %*u %llu %llu %llu %llu %llu %llu %lld %lld %*d %*d %u %*u %*d %llu %llu %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %u %u %u %llu %llu %lld\n"
                         ,iVar5 + 0x20,iVar5 + 0x28,iVar5 + 0x30,iVar5 + 0x38,iVar5 + 0x40,
                         iVar5 + 0x50,iVar5 + 0x48,iVar5 + 0x58,param_3,iVar5 + 0x78,iVar5 + 0x80,
                         iVar5 + 0x98,iVar5 + 0x9c,iVar5 + 0xa0,iVar5 + 0x18,iVar5 + 0x60,
                         iVar5 + 0x68);
          if (0xe < iVar1) {
            if (iVar1 < 0x11) {
              *(undefined8 *)(iVar5 + 0x68) = 0;
              *(undefined8 *)(iVar5 + 0x60) = 0;
            }
                    /* WARNING: Ignoring partial resolution of indirect */
            *(uint *)(iVar5 + 0x78) =
                 *(uint *)(iVar5 + 0x78) >> 10 | *(uint *)(iVar5 + 0x7c) << 0x16;
            *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar5 + 0x7c) >> 10;
            uVar6 = VectorShiftLeft(*(undefined8 *)(iVar5 + 0x80),in_d17,8,1);
            *(undefined8 *)(iVar5 + 0x80) = uVar6;
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



/* ===== FUN_000124fc @ 000124fc size=300 ===== */

bool FUN_000124fc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  char *__s;
  int iVar2;
  ssize_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  char acStack_98 [132];
  
  iVar4 = *(int *)(param_2 + (param_4 + 0x16) * 4);
  local_a0 = 0;
  if (param_3 == 0) {
    sprintf(acStack_98,"/proc/%u/schedstat",param_1);
  }
  else {
    sprintf(acStack_98,"/proc/%u/task/%u/schedstat",param_3,param_1);
  }
  iVar2 = open(acStack_98,0);
  if (-1 < iVar2) {
    sVar3 = read(iVar2,DAT_00012630,0x400);
    close(iVar2);
    __s = DAT_00012630;
    if (0 < sVar3) {
      (&DAT_0002c658)[sVar3] = 0;
      iVar2 = sscanf(__s,"%*u %llu %*d\n",&local_a0);
      lVar1 = (ulonglong)DAT_0003490c * (local_a0 & 0xffffffff);
      uVar5 = FUN_0001a0dc((int)lVar1,
                           DAT_0003490c * local_a0._4_4_ + (int)((ulonglong)lVar1 >> 0x20),
                           DAT_00012628,DAT_0001262c);
      *(undefined8 *)(iVar4 + 0x70) = uVar5;
      return iVar2 < 1;
    }
  }
  lVar1 = (ulonglong)DAT_0003490c * (local_a0 & 0xffffffff);
  uVar5 = FUN_0001a0dc((int)lVar1,DAT_0003490c * local_a0._4_4_ + (int)((ulonglong)lVar1 >> 0x20),
                       DAT_00012628,DAT_0001262c);
  *(undefined8 *)(iVar4 + 0x70) = uVar5;
  return true;
}



/* ===== FUN_00012634 @ 00012634 size=368 ===== */

undefined4 FUN_00012634(undefined4 param_1,int param_2,int param_3,int param_4)

{
  FILE *__stream;
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_1a0 [128];
  char acStack_120 [5];
  char acStack_11b [4];
  char acStack_117 [16];
  char acStack_107 [3];
  char acStack_104 [228];
  
  iVar4 = *(int *)(param_2 + (param_4 + 0x16) * 4);
  if (param_3 == 0) {
    sprintf(acStack_1a0,"/proc/%u/status",param_1);
  }
  else {
    sprintf(acStack_1a0,"/proc/%u/task/%u/status",param_3,param_1);
  }
  __stream = fopen(acStack_1a0,"r");
  if (__stream == (FILE *)0x0) {
    uVar1 = 1;
  }
  else {
    while( true ) {
      pcVar2 = fgets(acStack_120,0x100,__stream);
      if (pcVar2 == (char *)0x0) break;
      iVar3 = strncmp(acStack_120,"Uid:",4);
      if (iVar3 == 0) {
        sscanf(acStack_11b,"%u",param_2 + 0x34);
      }
      else {
        iVar3 = strncmp(acStack_120,"Threads:",8);
        if (iVar3 == 0) {
          sscanf(acStack_117,"%u",iVar4 + 0xa4);
        }
        else {
          iVar3 = strncmp(acStack_120,"voluntary_ctxt_switches:",0x18);
          if (iVar3 == 0) {
            sscanf(acStack_107,"%lu",iVar4 + 0x88);
          }
          else {
            iVar3 = strncmp(acStack_120,"nonvoluntary_ctxt_switches:",0x1b);
            if (iVar3 == 0) {
              sscanf(acStack_104,"%lu",iVar4 + 0x8c);
            }
          }
        }
      }
    }
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000127a4 @ 000127a4 size=408 ===== */

undefined4 FUN_000127a4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  char acStack_190 [128];
  char acStack_110 [6];
  char acStack_10a [6];
  char acStack_104 [244];
  
  iVar2 = *(int *)(param_2 + (param_4 + 0x16) * 4);
  if (param_3 == 0) {
    sprintf(acStack_190,"/proc/%u/smaps",param_1);
  }
  else {
    sprintf(acStack_190,"/proc/%u/task/%u/smaps",param_3,param_1);
  }
  __stream = fopen(acStack_190,"rt");
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  pcVar1 = fgets(acStack_110,0x100,__stream);
  while (pcVar1 != (char *)0x0) {
    pcVar1 = strstr(acStack_110,"[stack]");
    if (pcVar1 != (char *)0x0) {
      pcVar1 = fgets(acStack_110,0x100,__stream);
      goto joined_r0x00012834;
    }
    pcVar1 = fgets(acStack_110,0x100,__stream);
  }
LAB_000128cc:
  fclose(__stream);
  return 0;
joined_r0x00012834:
  if (pcVar1 == (char *)0x0) goto LAB_000128cc;
  pcVar1 = strstr(acStack_110,"Size:");
  if (pcVar1 != (char *)0x0) {
    sscanf(acStack_10a,"%lu",iVar2 + 0x90);
    pcVar1 = fgets(acStack_110,0x100,__stream);
    goto joined_r0x0001287c;
  }
  pcVar1 = fgets(acStack_110,0x100,__stream);
  goto joined_r0x00012834;
joined_r0x0001287c:
  if (pcVar1 == (char *)0x0) goto LAB_000128cc;
  pcVar1 = strstr(acStack_110,"Referenced:");
  if (pcVar1 != (char *)0x0) {
    sscanf(acStack_104,"%lu",iVar2 + 0x94);
    goto LAB_000128cc;
  }
  pcVar1 = fgets(acStack_110,0x100,__stream);
  goto joined_r0x0001287c;
}



/* ===== FUN_0001293c @ 0001293c size=348 ===== */

undefined4 FUN_0001293c(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  FILE *__stream;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__src;
  char acStack_1098 [127];
  char acStack_1019 [4101];
  
  if (param_3 == 0) {
    sprintf(acStack_1098,"/proc/%u/cmdline",param_1);
  }
  else {
    sprintf(acStack_1098,"/proc/%u/task/%u/cmdline",param_3,param_1);
  }
  __stream = fopen(acStack_1098,"r");
  if (__stream == (FILE *)0x0) {
    uVar2 = 1;
  }
  else {
    __src = acStack_1019 + 1;
    memset(__src,0,0x1000);
    sVar3 = fread(__src,1,0xfff,__stream);
    fclose(__stream);
    if (sVar3 == 0) {
      *(undefined1 *)(param_2 + 0x106c) = 0;
      return 0;
    }
    if (-1 < (int)(sVar3 - 2)) {
      bVar1 = false;
      iVar4 = sVar3 - 2;
      do {
        while (iVar6 = iVar4 + -1, __src[iVar4] == '\0') {
          iVar5 = iVar6;
          if (!bVar1) goto LAB_000129e4;
LAB_00012a18:
          __src[iVar4] = ' ';
          bVar1 = true;
          iVar4 = iVar5;
          if (iVar5 == -1) goto LAB_00012a28;
        }
        bVar1 = true;
        if (iVar6 == -1) break;
        iVar5 = iVar4 + -2;
        iVar4 = iVar6;
        if (__src[iVar6] == '\0') goto LAB_00012a18;
LAB_000129e4:
        iVar4 = iVar5;
      } while (iVar5 != -1);
    }
LAB_00012a28:
    strncpy((char *)(param_2 + 0x106c),__src,0xfff);
    uVar2 = 0;
    *(undefined1 *)(param_2 + 0x206b) = 0;
  }
  return uVar2;
}



/* ===== FUN_00012bf4 @ 00012bf4 size=228 ===== */

undefined4 FUN_00012bf4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  char acStack_98 [132];
  
  iVar2 = *(int *)(param_2 + (param_4 + 0x16) * 4);
  if (param_3 == 0) {
    sprintf(acStack_98,"/proc/%u/fd",param_1);
    __dirp = opendir(acStack_98);
  }
  else {
    sprintf(acStack_98,"/proc/%u/task/%u/fd",param_3,param_1);
    __dirp = opendir(acStack_98);
  }
  if (__dirp != (DIR *)0x0) {
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    while (pdVar1 = readdir(__dirp), pdVar1 != (dirent *)0x0) {
      if ((*(ushort *)(__ctype_b + (uint)(byte)pdVar1->d_name[0] * 2) & 8) != 0) {
        *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 1;
      }
    }
    closedir(__dirp);
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffd;
    return 0;
  }
  *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 2;
  return 0;
}



/* ===== FUN_00012cd8 @ 00012cd8 size=644 ===== */

undefined4 FUN_00012cd8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_1a0 [128];
  char acStack_120 [12];
  char cStack_114;
  char acStack_113 [10];
  char acStack_109 [225];
  int local_28;
  
  local_28 = param_5;
  iVar3 = FUN_00012324();
  if (((iVar3 == 0) &&
      (((FUN_000124fc(param_1,param_2,param_4,param_5), (DAT_0002c24c & 0x80) == 0 ||
        (*(char *)(param_2 + 0x106c) != '\0')) ||
       (iVar3 = FUN_0001293c(param_1,param_2,param_4), iVar3 == 0)))) &&
     ((iVar3 = FUN_00012634(param_1,param_2,param_4,param_5), iVar3 == 0 &&
      ((((DAT_0002c248 & 0x10) == 0 ||
        (iVar3 = FUN_000127a4(param_1,param_2,param_4,param_5), iVar3 == 0)) &&
       (((DAT_0002c248 & 0x20) == 0 ||
        (iVar3 = FUN_00012bf4(param_1,param_2,param_4,param_5), iVar3 == 0)))))))) {
    uVar4 = 0;
    if ((DAT_0002c248 & 4) != 0) {
      iVar3 = *(int *)(param_2 + (param_5 + 0x16) * 4);
      if (param_4 == 0) {
        sprintf(acStack_1a0,"/proc/%u/io",param_1);
      }
      else {
        sprintf(acStack_1a0,"/proc/%u/task/%u/io",param_4,param_1);
      }
      __stream = fopen(acStack_1a0,"r");
      if (__stream == (FILE *)0x0) {
        *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 1;
        return 0;
      }
      while( true ) {
        pcVar1 = fgets(acStack_120,0x100,__stream);
        if (pcVar1 == (char *)0x0) break;
        iVar2 = strncmp(acStack_120,"read_bytes:",0xb);
        if (iVar2 == 0) {
          sscanf(&cStack_114,"%llu",iVar3);
        }
        else {
          iVar2 = strncmp(acStack_120,"write_bytes:",0xc);
          if (iVar2 == 0) {
            sscanf(acStack_113,"%llu",iVar3 + 8);
          }
          else {
            iVar2 = strncmp(acStack_120,"cancelled_write_bytes:",0x16);
            if (iVar2 == 0) {
              sscanf(acStack_109,"%llu",iVar3 + 0x10);
            }
          }
        }
      }
      fclose(__stream);
      *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffe;
      return 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== FUN_00012e00 @ 00012e00 size=204 ===== */

void FUN_00012e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  DIR *__dirp;
  dirent *pdVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a4 [4];
  char acStack_a0 [128];
  
  sprintf(acStack_a0,"/proc/%u/task",param_1);
  __dirp = opendir(acStack_a0);
  uVar1 = DAT_00012ecc;
  if (__dirp != (DIR *)0x0) {
    while( true ) {
      pdVar2 = readdir(__dirp);
      if (pdVar2 == (dirent *)0x0) break;
      if ((*(ushort *)(__ctype_b + (uint)(byte)pdVar2->d_name[0] * 2) & 8) != 0) {
        iVar3 = atoi(pdVar2->d_name);
        iVar4 = FUN_00012058(uVar1,iVar3,param_1);
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x38) = 1;
          iVar3 = FUN_00012cd8(iVar3,iVar4,auStack_a4,param_1,param_3);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar4 + 0x38) = 0;
          }
        }
      }
    }
    closedir(__dirp);
  }
  return;
}



/* ===== FUN_00012ed0 @ 00012ed0 size=588 ===== */

void FUN_00012ed0(int param_1)

{
  undefined4 uVar1;
  uint *__ptr;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  DIR *__dirp;
  dirent *pdVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
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
  undefined8 uVar27;
  undefined1 auStack_2c [8];
  
  __ptr = malloc(0xa0);
  if (__ptr == (uint *)0x0) {
    perror("malloc");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  FUN_000162f8(__ptr,1);
  uVar11 = *__ptr;
  uVar15 = __ptr[1];
  uVar2 = __ptr[2];
  uVar8 = __ptr[3];
  uVar17 = __ptr[4];
  uVar20 = __ptr[5];
  uVar22 = uVar11 + uVar2;
  uVar27 = *(undefined8 *)(__ptr + 0xe);
  uVar3 = __ptr[6];
  uVar9 = __ptr[7];
  uVar12 = uVar22 + uVar17;
  uVar18 = __ptr[8];
  uVar21 = __ptr[9];
  uVar13 = uVar12 + uVar3;
  uVar23 = uVar13 + uVar18;
  uVar4 = __ptr[0xc];
  uVar10 = __ptr[0xd];
  uVar24 = __ptr[10];
  uVar25 = __ptr[0xb];
  uVar14 = uVar23 + uVar4;
  uVar19 = uVar14 + uVar24;
  uVar26 = (uint)uVar27;
  *(uint *)(&DAT_0002ca60 + param_1) = uVar26 + uVar19;
  *(uint *)((int)&DAT_0002ca60 + param_1 * 8 + 4) =
       (int)((ulonglong)uVar27 >> 0x20) +
       uVar15 + uVar8 + (uint)CARRY4(uVar11,uVar2) + uVar20 + (uint)CARRY4(uVar22,uVar17) + uVar9 +
       (uint)CARRY4(uVar12,uVar3) + uVar21 + (uint)CARRY4(uVar13,uVar18) + uVar10 +
       (uint)CARRY4(uVar23,uVar4) + uVar25 + (uint)CARRY4(uVar14,uVar24) +
       (uint)CARRY4(uVar26,uVar19);
  free(__ptr);
  iVar16 = DAT_0002ca5c;
  if ((DAT_0002c24c & 2) == 0) {
    for (; iVar16 != 0; iVar16 = *(int *)(iVar16 + 0x68)) {
      while (*(int *)(iVar16 + 100) == 0) {
        iVar5 = FUN_00012cd8(*(undefined4 *)(iVar16 + 0x30),iVar16,auStack_2c,0,param_1);
        uVar2 = DAT_0002c24c;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar16 + 0x38) = 0;
          break;
        }
        *(undefined4 *)(iVar16 + 0x38) = 1;
        if ((uVar2 & 0x20) == 0) break;
        FUN_00012e00(*(undefined4 *)(iVar16 + 0x30),iVar16,param_1);
        iVar16 = *(int *)(iVar16 + 0x68);
        if (iVar16 == 0) goto LAB_0001300c;
      }
    }
  }
  else {
    __dirp = opendir("/proc");
    uVar1 = DAT_0001311c;
    if (__dirp == (DIR *)0x0) {
      perror("opendir");
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
LAB_00013040:
    pdVar6 = readdir(__dirp);
    if (pdVar6 != (dirent *)0x0) {
      while ((*(ushort *)(__ctype_b + (uint)(byte)pdVar6->d_name[0] * 2) & 8) != 0) {
        iVar16 = atoi(pdVar6->d_name);
        iVar5 = FUN_00012058(uVar1,iVar16,0);
        if (iVar5 == 0) break;
        *(undefined4 *)(iVar5 + 0x38) = 1;
        iVar7 = FUN_00012cd8(iVar16,iVar5,auStack_2c,0,param_1);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar5 + 0x38) = 0;
          break;
        }
        if ((DAT_0002c24c & 0x20) == 0) break;
        FUN_00012e00(iVar16,iVar5,param_1);
        pdVar6 = readdir(__dirp);
        if (pdVar6 == (dirent *)0x0) goto LAB_000130e8;
      }
      goto LAB_00013040;
    }
LAB_000130e8:
    closedir(__dirp);
  }
LAB_0001300c:
  FUN_00011f18(DAT_0001311c,0);
  return;
}



/* ===== FUN_00013120 @ 00013120 size=1056 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00013120(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  passwd *ppVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  regex_t rStack_48;
  
  uVar7 = DAT_0002c24c;
  if (*(int *)(param_5 + 0x38) == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_5 + 100);
  bVar8 = uVar4 == 0;
  if (bVar8) {
    uVar4 = *(uint *)(param_5 + 0x3c);
  }
  piVar6 = *(int **)(param_5 + (param_2 + 0x16) * 4);
  if (bVar8) {
    uVar4 = uVar4 & 0xfffffffb;
  }
  piVar5 = *(int **)(param_5 + (param_1 + 0x16) * 4);
  if (bVar8) {
    *(uint *)(param_5 + 0x3c) = uVar4;
  }
  if ((((uVar7 & 0x22) != 0) && ((uVar7 & 0x10) != 0)) &&
     (((param_3 & 1) == 0 ||
      (((piVar6[0x11] == piVar5[0x11] && piVar6[0x10] == piVar5[0x10] &&
        (piVar6[0x15] == piVar5[0x15] && piVar6[0x14] == piVar5[0x14])) &&
       (((param_4 & 2) == 0 ||
        ((piVar6[0x13] == piVar5[0x13] && piVar6[0x12] == piVar5[0x12] &&
         (piVar6[0x17] == piVar5[0x17] && piVar6[0x16] == piVar5[0x16])))))))))) {
    if ((param_3 & 2) != 0) {
      if ((piVar6[9] != piVar5[9] || piVar6[8] != piVar5[8]) ||
         (piVar6[0xd] != piVar5[0xd] || piVar6[0xc] != piVar5[0xc])) goto LAB_0001319c;
      if ((param_4 & 1) == 0) {
        if (((param_4 & 2) != 0) &&
           ((piVar6[0xb] != piVar5[0xb] || piVar6[10] != piVar5[10] ||
            (piVar6[0xf] != piVar5[0xf] || piVar6[0xe] != piVar5[0xe])))) goto LAB_0001319c;
      }
      else if ((piVar6[0x1f] != piVar5[0x1f] || piVar6[0x1e] != piVar5[0x1e]) ||
              (piVar6[0x21] != piVar5[0x21] || piVar6[0x20] != piVar5[0x20])) goto LAB_0001319c;
    }
    if ((((((param_3 & 0x10) == 0) ||
          ((piVar6[0x24] == piVar5[0x24] && (piVar6[0x25] == piVar5[0x25])))) &&
         (((param_3 & 4) == 0 ||
          ((piVar6[7] == piVar5[7] && piVar6[6] == piVar5[6] &&
           (((*(uint *)(param_5 + 0x3c) & 1) != 0 ||
            (((piVar6[1] == piVar5[1] && *piVar6 == *piVar5 &&
              (piVar6[3] == piVar5[3] && piVar6[2] == piVar5[2])) &&
             (piVar6[5] == piVar5[5] && piVar6[4] == piVar5[4])))))))))) &&
        (((param_3 & 8) == 0 || ((piVar6[0x22] == piVar5[0x22] && (piVar6[0x23] == piVar5[0x23])))))
        ) && (((param_3 & 0x40) == 0 ||
              ((piVar6[0x27] == piVar5[0x27] && (piVar6[0x28] == piVar5[0x28])))))) {
      if ((param_3 & 0x20) == 0) {
        return 0xffffffff;
      }
      if ((*(uint *)(param_5 + 0x3c) & 2) != 0) {
        return 0xffffffff;
      }
      if ((piVar6[0x29] == piVar5[0x29]) && (piVar6[0x2a] == piVar5[0x2a])) {
        return 0xffffffff;
      }
    }
  }
LAB_0001319c:
  if ((uVar7 & 8) != 0) {
    iVar2 = regcomp(&rStack_48,&DAT_0003275c,9);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    if ((((DAT_0002c24c & 0x80) == 0) || (*(char *)(param_5 + 0x106c) == '\0')) ||
       (*(int *)(param_5 + 100) != 0)) {
      pcVar3 = (char *)(param_5 + 0x6c);
    }
    else {
      pcVar3 = (char *)(param_5 + 0x106c);
    }
    iVar2 = regexec(&rStack_48,pcVar3,0,(regmatch_t *)0x0,0);
    regfree(&rStack_48);
    uVar7 = DAT_0002c24c;
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  if ((uVar7 & 0x400) != 0) {
    if (*(int *)(param_5 + 100) == 0) {
      iVar2 = regcomp(&rStack_48,&DAT_00033874,9);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      if ((((DAT_0002c24c & 0x80) == 0) || (*(char *)(param_5 + 0x106c) == '\0')) ||
         (*(int *)(param_5 + 100) != 0)) {
        pcVar3 = (char *)(param_5 + 0x6c);
      }
      else {
        pcVar3 = (char *)(param_5 + 0x106c);
      }
      iVar2 = regexec(&rStack_48,pcVar3,0,(regmatch_t *)0x0,0);
      regfree(&rStack_48);
      uVar7 = DAT_0002c24c;
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    else if ((*(uint *)(*(int *)(param_5 + 100) + 0x3c) & 4) == 0) {
      return 0xffffffff;
    }
  }
  if ((((uVar7 & 0x200) != 0) &&
      (ppVar1 = getpwuid(*(__uid_t *)(param_5 + 0x34)), ppVar1 != (passwd *)0x0)) &&
     (iVar2 = strcmp(ppVar1->pw_name,&DAT_0003375c), iVar2 != 0)) {
    return 0xffffffff;
  }
  *(uint *)(param_5 + 0x3c) = *(uint *)(param_5 + 0x3c) | 4;
  return 1;
}



/* ===== FUN_00013540 @ 00013540 size=320 ===== */

void FUN_00013540(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  passwd *ppVar3;
  int iVar4;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (((DAT_0002c24c & 0x100) == 0) ||
     (ppVar3 = getpwuid(*(__uid_t *)(param_1 + 0x34)), ppVar3 == (passwd *)0x0)) {
    FUN_00018e3c(0,&DAT_0001a6d4,"");
  }
  else {
    FUN_00018e3c(1,&DAT_0001a6cc,ppVar3->pw_name,0);
  }
  uVar1 = DAT_0001a6f0;
  uVar2 = (char)DAT_0001a6f4;
  if ((DAT_0002c24c & 0x20) != 0) {
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 == 0) {
      sprintf((char *)&local_30," %%9u         %c",param_2);
      uVar1 = local_30;
      uVar2 = local_2c;
    }
    else if ((*(uint *)(iVar4 + 0x3c) & 4) == 0) {
      local_30 = DAT_0001a6f0;
      local_2c = (char)DAT_0001a6f4;
      FUN_00018e3c(0,&local_30,"",*(undefined4 *)(iVar4 + 0x30));
      uVar1 = local_30;
      uVar2 = local_2c;
    }
    else {
      sprintf((char *)&local_30,"         %c %%9u",param_2);
      uVar1 = local_30;
      uVar2 = local_2c;
    }
  }
  local_2c = uVar2;
  local_30 = uVar1;
  FUN_00018e3c(0,&local_30,"",*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_00013680 @ 00013680 size=40 ===== */

void FUN_00013680(undefined4 param_1,undefined4 param_2)

{
  printf("%-11s",param_1);
  FUN_00013540(param_2,0x2d);
  return;
}



/* ===== FUN_000136a8 @ 000136a8 size=2208 ===== */

undefined4
FUN_000136a8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_stack_ffffff08;
  undefined4 local_c8;
  int local_c4;
  uint local_a0;
  uint uStack_9c;
  char acStack_88 [36];
  
  if (param_3 != 0) {
    printf("\n%-11s",param_4);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar7 = "   UID";
    }
    else {
      pcVar7 = "     USER";
    }
    printf(pcVar7);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar7 = "       PID";
    }
    else {
      pcVar7 = "      TGID       TID";
    }
    printf(pcVar7);
    if ((DAT_0002c248 & 1) != 0) {
      printf("    %%usr %%system  %%guest   %%wait    %%CPU   CPU");
    }
    if ((DAT_0002c248 & 2) != 0) {
      printf("  minflt/s  majflt/s     VSZ     RSS   %%MEM");
    }
    if ((DAT_0002c248 & 0x10) != 0) {
      printf(" StkSize  StkRef");
    }
    if ((DAT_0002c248 & 4) != 0) {
      printf("   kB_rd/s   kB_wr/s kB_ccwr/s iodelay");
    }
    if ((DAT_0002c248 & 8) != 0) {
      printf("   cswch/s nvcswch/s");
    }
    if ((DAT_0002c248 & 0x20) != 0) {
      printf(" threads   fd-nr");
    }
    if ((DAT_0002c248 & 0x40) != 0) {
      printf(" prio policy");
    }
    puts("  Command");
  }
  if (DAT_0002ca5c == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    iVar17 = DAT_0002ca5c;
    do {
      in_stack_ffffff08 = CONCAT44((int)(in_stack_ffffff08 >> 0x20),iVar17);
      iVar2 = FUN_00013120(param_1,param_2,DAT_0002c248,1,iVar17);
      if (0 < iVar2) {
        printf("%-11s",param_5);
        FUN_00013540(iVar17,0x2d);
        uVar12 = DAT_0002c24c;
        uVar13 = (undefined4)(in_stack_ffffff08 >> 0x20);
        puVar14 = *(uint **)(iVar17 + (param_2 + 0x16) * 4);
        puVar15 = *(uint **)(iVar17 + (param_1 + 0x16) * 4);
        if ((DAT_0002c248 & 1) != 0) {
          uVar3 = puVar14[0x18];
          uVar8 = puVar14[0x19];
          uVar21 = *(undefined8 *)(puVar14 + 0x10);
          uVar4 = puVar15[0x10];
          uVar9 = puVar15[0x11];
          uVar23 = VectorSub(uVar21,*(undefined8 *)(puVar14 + 0x18),8);
          uVar5 = puVar15[0x18];
          uVar10 = puVar15[0x19];
          local_c4 = (int)((ulonglong)param_7 * (ulonglong)DAT_0003490c >> 0x20);
          uVar1 = DAT_0002c24c & 0xfff;
          local_c8 = (undefined4)((ulonglong)param_7 * (ulonglong)DAT_0003490c);
          FUN_0001a0dc(local_c8,DAT_0003490c * param_8 + local_c4,100,0);
          dVar19 = (double)FUN_0001a068();
          dVar20 = DAT_00013b78;
          uVar16 = uVar9 - (uVar10 + (uVar4 < uVar5));
          local_a0 = (uint)uVar23;
          uStack_9c = (uint)((ulonglong)uVar23 >> 0x20);
          bVar18 = uVar16 <= uStack_9c;
          if (uStack_9c == uVar16) {
            bVar18 = uVar4 - uVar5 <= local_a0;
          }
          dVar24 = DAT_00013b88;
          if (bVar18) {
            dVar24 = (double)FUN_0001a068(uVar5 + (local_a0 - uVar4),
                                          uVar10 + (uStack_9c - (uVar9 + (local_a0 < uVar4))) +
                                          (uint)CARRY4(uVar5,local_a0 - uVar4));
            dVar24 = (dVar24 / dVar19) * dVar20;
          }
          dVar20 = DAT_00013b78;
          uVar23 = *(undefined8 *)(puVar14 + 0x14);
          uVar16 = puVar15[0x14];
          uVar11 = puVar15[0x15];
          dVar25 = (double)FUN_0001a068((uint)uVar23 - uVar16,
                                        (int)((ulonglong)uVar23 >> 0x20) -
                                        (uVar11 + ((uint)uVar23 < uVar16)));
          dVar25 = dVar25 / dVar19;
          dVar26 = (double)FUN_0001a068(uVar3 - uVar5,uVar8 - (uVar10 + (uVar3 < uVar5)));
          dVar26 = dVar26 / dVar19;
          dVar27 = (double)FUN_0001a068(puVar14[0x1c] - puVar15[0x1c],
                                        puVar14[0x1d] -
                                        (puVar15[0x1d] + (uint)(puVar14[0x1c] < puVar15[0x1c])));
          uVar21 = VectorAdd(uVar21,uVar23,8);
          uVar3 = (uint)uVar21 - uVar4;
          dVar27 = dVar27 / dVar19;
          dVar22 = (double)FUN_0001a068(uVar3 - uVar16,
                                        ((int)((ulonglong)uVar21 >> 0x20) -
                                        (uVar9 + ((uint)uVar21 < uVar4))) -
                                        (uVar11 + (uVar3 < uVar16)));
          if ((uVar12 & 4) != 0) {
            dVar19 = (double)FUN_0001a068(param_9,param_10);
          }
          in_stack_ffffff08 = CONCAT44(uVar13,2);
          FUN_00018c0c(uVar1 >> 0xb,1,5,7,2,uVar13,dVar24,dVar25 * dVar20,dVar26 * dVar20,
                       dVar27 * dVar20,(dVar22 / dVar19) * dVar20);
          FUN_00018e3c(0,"   %3d","",puVar14[0x26]);
        }
        uVar13 = (undefined4)(in_stack_ffffff08 >> 0x20);
        if ((DAT_0002c248 & 2) != 0) {
          dVar20 = (double)FUN_0001a068(param_7,param_8);
          dVar19 = DAT_00013b78;
          dVar24 = (double)FUN_0001a068(puVar14[0xc] - puVar15[0xc],
                                        puVar14[0xd] -
                                        (puVar15[0xd] + (uint)(puVar14[0xc] < puVar15[0xc])));
          dVar24 = (dVar24 / dVar20) * dVar19;
          dVar27 = (double)FUN_0001a068(puVar14[8] - puVar15[8],
                                        puVar14[9] - (puVar15[9] + (uint)(puVar14[8] < puVar15[8])))
          ;
          FUN_00018a18(0xffffffff,0,2,9,2,uVar13,(dVar27 / dVar20) * dVar19,dVar24);
          uVar13 = (undefined4)((ulonglong)*(undefined8 *)(puVar14 + 0x1e) >> 0x20);
          if ((DAT_0002c24c & 0x800) == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 2;
          }
          FUN_000188b0(uVar6,2,7,DAT_0002c24c,puVar14[0x1e],puVar14[0x1f],puVar14[0x20],
                       puVar14[0x21]);
          iVar2 = DAT_00033870;
          uVar12 = DAT_0002c24c & 0xfff;
          dVar20 = DAT_00013b88;
          if (DAT_00033870 != 0) {
            dVar24 = (double)FUN_0001a068(puVar14[0x20],puVar14[0x21]);
            dVar20 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
            dVar20 = (dVar24 / dVar20) * dVar19;
          }
          in_stack_ffffff08 = CONCAT44(uVar13,2);
          FUN_00018c0c(uVar12 >> 0xb,1,1,6,2,uVar13,dVar20);
        }
        if ((DAT_0002c248 & 0x10) != 0) {
          if ((DAT_0002c24c & 0x800) == 0) {
            uVar13 = 0xffffffff;
          }
          else {
            uVar13 = 2;
          }
          in_stack_ffffff08 = 0;
          FUN_000188b0(uVar13,2,7,0,puVar14[0x24],0,puVar14[0x25],0);
        }
        if ((DAT_0002c248 & 4) != 0) {
          if ((*(uint *)(iVar17 + 0x3c) & 1) == 0) {
            FUN_0001a068(param_7,param_8);
            FUN_0001a068(*puVar14 - *puVar15,puVar14[1] - (puVar15[1] + (uint)(*puVar14 < *puVar15))
                        );
            FUN_0001a068(puVar14[2] - puVar15[2],
                         puVar14[3] - (puVar15[3] + (uint)(puVar14[2] < puVar15[2])));
            FUN_0001a068(puVar14[4] - puVar15[4],
                         puVar14[5] - (puVar15[5] + (uint)(puVar14[4] < puVar15[4])));
            if ((DAT_0002c24c & 0x800) == 0) {
              uVar13 = 0xffffffff;
            }
            else {
              uVar13 = 1;
            }
            FUN_00018a18(uVar13,0,3,9,2);
          }
          else {
            sprintf(acStack_88," %9.2f %9.2f %9.2f",0,0xbff00000,0xbff0000000000000);
            FUN_00018e90(4,"%s",acStack_88);
          }
          in_stack_ffffff08 =
               (ulonglong)
               ((int)((ulonglong)*(undefined8 *)(puVar14 + 6) >> 0x20) -
               (puVar15[7] + (uint)((uint)*(undefined8 *)(puVar14 + 6) < puVar15[6]))) << 0x20;
          FUN_000188b0(0xffffffff,1,7);
        }
        uVar13 = (undefined4)(in_stack_ffffff08 >> 0x20);
        if ((DAT_0002c248 & 8) != 0) {
          FUN_0001a068(param_7,param_8);
          VectorUnsignedToFloat(puVar14[0x23] - puVar15[0x23],(byte)(in_fpscr >> 0x16) & 3);
          in_stack_ffffff08 = CONCAT44(uVar13,2);
          VectorUnsignedToFloat(puVar14[0x22] - puVar15[0x22],(byte)(in_fpscr >> 0x16) & 3);
          FUN_00018a18(0xffffffff,0,2,9,2);
        }
        if ((DAT_0002c248 & 0x20) != 0) {
          in_stack_ffffff08 = 0;
          FUN_000188b0(0xffffffff,1,7,puVar14[0x29],puVar14[0x29]);
          if ((*(uint *)(iVar17 + 0x3c) & 2) == 0) {
            in_stack_ffffff08 = CONCAT44(*(uint *)(iVar17 + 0x3c),puVar14[0x2a]) & 0x2ffffffff;
            FUN_000188b0(0xffffffff,1,7,0,puVar14[0x2a]);
          }
          else {
            FUN_00018e90(4,&DAT_0001a87c,&DAT_0001a878);
          }
        }
        if ((DAT_0002c248 & 0x40) != 0) {
          in_stack_ffffff08 = 0;
          FUN_000188b0(0xffffffff,1,4,puVar14[0x27],puVar14[0x27]);
          uVar12 = puVar14[0x28];
          if (uVar12 == 0) {
LAB_00013ca8:
            FUN_00018e90(1,&DAT_0001a884);
          }
          else if (uVar12 == 1) {
            FUN_00018e90(1,&DAT_0001a884,&DAT_0001a71c);
          }
          else if (uVar12 == 2) {
            FUN_00018e90(1,&DAT_0001a884,&DAT_0001a73c);
          }
          else {
            if (uVar12 != 3) goto LAB_00013ca8;
            FUN_00018e90(1,&DAT_0001a884,"BATCH");
          }
        }
        uVar13 = 1;
        FUN_00012218(iVar17);
      }
      iVar17 = *(int *)(iVar17 + 0x68);
    } while (iVar17 != 0);
  }
  return uVar13;
}



/* ===== FUN_00013f68 @ 00013f68 size=872 ===== */

int FUN_00013f68(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_70;
  
  if (param_3 != 0) {
    printf("\n%-11s",param_4);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar4 = "   UID";
    }
    else {
      pcVar4 = "     USER";
    }
    printf(pcVar4);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar4 = "       PID";
    }
    else {
      pcVar4 = "      TGID       TID";
    }
    printf(pcVar4);
    if ((DAT_0002c248 & 1) != 0) {
      printf("    usr-ms system-ms  guest-ms");
    }
    if ((DAT_0002c248 & 2) != 0) {
      printf(" minflt-nr majflt-nr");
    }
    puts("  Command");
  }
  if (DAT_0002ca5c == 0) {
    local_70 = DAT_0002ca5c;
  }
  else {
    local_70 = 0;
    iVar16 = DAT_0002ca5c;
    do {
      iVar1 = FUN_00013120(param_1,param_2,DAT_0002c248,2,iVar16);
      if (0 < iVar1) {
        printf("%-11s",param_5);
        FUN_00013540(iVar16,0x2d);
        iVar12 = *(int *)(iVar16 + (param_2 + 0x16) * 4);
        iVar1 = *(int *)(iVar16 + (param_1 + 0x16) * 4);
        if ((DAT_0002c248 & 1) != 0) {
          uVar7 = *(uint *)(iVar12 + 0x60);
          iVar10 = *(int *)(iVar12 + 100);
          uVar2 = *(uint *)(iVar1 + 0x68);
          iVar5 = *(int *)(iVar1 + 0x6c);
          uVar18 = VectorAdd(*(undefined8 *)(iVar1 + 0x40),*(undefined8 *)(iVar1 + 0x48),8);
          uVar13 = *(uint *)(iVar12 + 0x48) - uVar7;
          uVar8 = *(uint *)(iVar12 + 0x68);
          iVar11 = *(int *)(iVar12 + 0x6c);
          uVar14 = *(uint *)(iVar1 + 0x60);
          iVar15 = *(int *)(iVar1 + 100);
          VectorUnsignedToFloat(DAT_0003490c,(byte)(in_fpscr >> 0x16) & 3);
          uVar19 = VectorSub(uVar18,*(undefined8 *)(iVar1 + 0x68),8);
          uVar9 = uVar13 + *(uint *)(iVar12 + 0x40);
          uVar6 = (int)((ulonglong)uVar19 >> 0x20) - (iVar15 + (uint)((uint)uVar19 < uVar14));
          uVar3 = uVar9 - uVar8;
          uVar9 = ((*(int *)(iVar12 + 0x4c) - (iVar10 + (uint)(*(uint *)(iVar12 + 0x48) < uVar7))) +
                   *(int *)(iVar12 + 0x44) + (uint)CARRY4(uVar13,*(uint *)(iVar12 + 0x40))) -
                  (iVar11 + (uint)(uVar9 < uVar8));
          bVar17 = uVar6 <= uVar9;
          if (uVar9 == uVar6) {
            bVar17 = (uint)uVar19 - uVar14 <= uVar3;
          }
          if (bVar17) {
            uVar6 = (uVar14 + uVar2) - (uint)uVar18;
            FUN_0001a068(uVar6 + uVar3,
                         ((iVar15 + iVar5 + (uint)CARRY4(uVar14,uVar2)) -
                         ((int)((ulonglong)uVar18 >> 0x20) + (uint)(uVar14 + uVar2 < (uint)uVar18)))
                         + uVar9 + (uint)CARRY4(uVar6,uVar3));
          }
          uVar3 = uVar7 + (uVar8 - uVar14);
          FUN_0001a068(uVar3 - uVar2,
                       (iVar10 + (iVar11 - (iVar15 + (uint)(uVar8 < uVar14))) +
                       (uint)CARRY4(uVar7,uVar8 - uVar14)) - (iVar5 + (uint)(uVar3 < uVar2)));
          uVar2 = *(uint *)(iVar12 + 0x58) - *(uint *)(iVar1 + 0x50);
          uVar3 = *(uint *)(iVar12 + 0x50) + uVar2;
          FUN_0001a068(uVar3 - *(uint *)(iVar1 + 0x58),
                       (*(int *)(iVar12 + 0x54) +
                        (*(int *)(iVar12 + 0x5c) -
                        (*(int *)(iVar1 + 0x54) +
                        (uint)(*(uint *)(iVar12 + 0x58) < *(uint *)(iVar1 + 0x50)))) +
                       (uint)CARRY4(*(uint *)(iVar12 + 0x50),uVar2)) -
                       (*(int *)(iVar1 + 0x5c) + (uint)(uVar3 < *(uint *)(iVar1 + 0x58))));
          FUN_00018a18(0xffffffff,0,3,9,0);
        }
        local_70 = 1;
        if ((DAT_0002c248 & 2) != 0) {
          uVar18 = VectorAdd(*(undefined8 *)(iVar12 + 0x30),*(undefined8 *)(iVar12 + 0x38),8);
          uVar18 = VectorSub(uVar18,*(undefined8 *)(iVar1 + 0x30),8);
          uVar18 = VectorSub(uVar18,*(undefined8 *)(iVar1 + 0x38),8);
          uVar19 = VectorAdd(*(undefined8 *)(iVar12 + 0x20),*(undefined8 *)(iVar12 + 0x28),8);
          uVar19 = VectorSub(uVar19,*(undefined8 *)(iVar1 + 0x20),8);
          FUN_000188b0(0xffffffff,2,9,1,(uint)uVar19 - *(uint *)(iVar1 + 0x28),
                       (int)((ulonglong)uVar19 >> 0x20) -
                       (*(int *)(iVar1 + 0x2c) + (uint)((uint)uVar19 < *(uint *)(iVar1 + 0x28))),
                       uVar18);
        }
        FUN_00012218(iVar16);
      }
      iVar16 = *(int *)(iVar16 + 0x68);
    } while (iVar16 != 0);
  }
  return local_70;
}



/* ===== FUN_000142d8 @ 000142d8 size=828 ===== */

undefined4
FUN_000142d8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            uint param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  char *local_64;
  
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar6 = "   UID";
    }
    else {
      pcVar6 = "     USER";
    }
    printf(pcVar6);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar6 = "       PID";
    }
    else {
      pcVar6 = "      TGID       TID";
    }
    printf(pcVar6);
    printf("    %%usr %%system  %%guest   %%wait    %%CPU   CPU  Command\n");
  }
  if (DAT_0002ca5c == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    local_64 = "     -";
    iVar15 = DAT_0002ca5c;
    do {
      iVar2 = FUN_00013120(param_1,param_2,1,1,iVar15);
      if (0 < iVar2) {
        printf("%-11s",param_6);
        FUN_00013540(iVar15,0x2d);
        uVar1 = DAT_0002c24c;
        iVar13 = *(int *)(iVar15 + (param_2 + 0x16) * 4);
        iVar14 = *(int *)(iVar15 + (param_1 + 0x16) * 4);
        uVar3 = *(uint *)(iVar13 + 0x60);
        iVar2 = *(int *)(iVar13 + 100);
        uVar19 = *(undefined8 *)(iVar13 + 0x40);
        uVar4 = DAT_0002c24c & 0xfff;
        uVar7 = *(uint *)(iVar14 + 0x60);
        iVar10 = *(int *)(iVar14 + 100);
        uVar16 = *(uint *)(iVar14 + 0x40);
        iVar17 = *(int *)(iVar14 + 0x44);
        uVar21 = VectorSub(uVar19,*(undefined8 *)(iVar13 + 0x60),8);
        uVar11 = iVar17 - (iVar10 + (uint)(uVar16 < uVar7));
        uVar5 = (uint)((ulonglong)uVar21 >> 0x20);
        uVar20 = (uint)uVar21;
        bVar18 = uVar11 <= uVar5;
        if (uVar5 == uVar11) {
          bVar18 = uVar16 - uVar7 <= uVar20;
        }
        if (bVar18) {
          FUN_0001a0dc((int)((ulonglong)param_7 * (ulonglong)DAT_0003490c),
                       DAT_0003490c * param_8 +
                       (int)((ulonglong)param_7 * (ulonglong)DAT_0003490c >> 0x20),100,0);
          FUN_0001a068();
          FUN_0001a068(uVar7 + (uVar20 - uVar16),
                       iVar10 + (uVar5 - (iVar17 + (uint)(uVar20 < uVar16))) +
                       (uint)CARRY4(uVar7,uVar20 - uVar16));
        }
        else {
          FUN_0001a0dc((int)((ulonglong)param_7 * (ulonglong)DAT_0003490c),
                       DAT_0003490c * param_8 +
                       (int)((ulonglong)param_7 * (ulonglong)DAT_0003490c >> 0x20),100,0);
          FUN_0001a068();
        }
        uVar5 = *(uint *)(iVar14 + 0x50);
        iVar8 = *(int *)(iVar14 + 0x54);
        uVar21 = *(undefined8 *)(iVar13 + 0x50);
        FUN_0001a068((uint)uVar21 - uVar5,
                     (int)((ulonglong)uVar21 >> 0x20) - (iVar8 + (uint)((uint)uVar21 < uVar5)));
        FUN_0001a068(uVar3 - uVar7,iVar2 - (iVar10 + (uint)(uVar3 < uVar7)));
        FUN_0001a068(*(uint *)(iVar13 + 0x70) - *(uint *)(iVar14 + 0x70),
                     *(int *)(iVar13 + 0x74) -
                     (*(int *)(iVar14 + 0x74) +
                     (uint)(*(uint *)(iVar13 + 0x70) < *(uint *)(iVar14 + 0x70))));
        uVar19 = VectorAdd(uVar19,uVar21,8);
        uVar3 = (uint)uVar19 - uVar16;
        FUN_0001a068(uVar3 - uVar5,
                     ((int)((ulonglong)uVar19 >> 0x20) - (iVar17 + (uint)((uint)uVar19 < uVar16))) -
                     (iVar8 + (uint)(uVar3 < uVar5)));
        if ((uVar1 & 4) != 0) {
          FUN_0001a068(param_9,param_10);
        }
        FUN_00018c0c(uVar4 >> 0xb,1,5,7,2);
        bVar18 = param_4 == 0;
        if (bVar18) {
          uVar9 = *(undefined4 *)(iVar13 + 0x98);
          uVar4 = 0xa85c;
          pcVar6 = (char *)0xa3d8;
        }
        else {
          uVar4 = 0xad10;
          uVar9 = 0;
          pcVar6 = local_64;
        }
        uVar12 = 1;
        if (bVar18) {
          pcVar6 = (char *)((uint)pcVar6 & 0xffff | 0x10000);
        }
        FUN_00018e3c(!bVar18,uVar4 | 0x10000,pcVar6,uVar9);
        FUN_00012218(iVar15);
      }
      iVar15 = *(int *)(iVar15 + 0x68);
    } while (iVar15 != 0);
  }
  return uVar12;
}



/* ===== FUN_00014620 @ 00014620 size=1016 ===== */

undefined4
FUN_00014620(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar4 = "   UID";
    }
    else {
      pcVar4 = "     USER";
    }
    printf(pcVar4);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar4 = "       PID";
    }
    else {
      pcVar4 = "      TGID       TID";
    }
    printf(pcVar4);
    puts("    usr-ms system-ms  guest-ms  Command");
  }
  if (DAT_0002ca5c == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    iVar12 = DAT_0002ca5c;
    do {
      iVar1 = FUN_00013120(param_1,param_2,1,2,iVar12);
      if (iVar1 != 0) {
        if (param_4 == 0) {
          *(int *)(iVar12 + 0x48) = *(int *)(iVar12 + 0x48) + 1;
          if (-1 < iVar1) {
            printf("%-11s",param_6);
            FUN_00013540(iVar12,0x2d);
            iVar6 = *(int *)(iVar12 + (param_1 + 0x16) * 4);
            iVar7 = *(int *)(iVar12 + (param_2 + 0x16) * 4);
            local_68 = *(uint *)(iVar6 + 0x68);
            iStack_64 = *(int *)(iVar6 + 0x6c);
            local_60 = *(uint *)(iVar7 + 0x60);
            iStack_5c = *(int *)(iVar7 + 100);
            uVar14 = VectorAdd(*(undefined8 *)(iVar6 + 0x40),*(undefined8 *)(iVar6 + 0x48),8);
            uVar3 = *(uint *)(iVar7 + 0x48) - local_60;
            uVar15 = VectorSub(uVar14,*(undefined8 *)(iVar6 + 0x68),8);
            uVar8 = uVar3 + *(uint *)(iVar7 + 0x40);
            uVar9 = *(uint *)(iVar7 + 0x68);
            iVar1 = *(int *)(iVar7 + 0x6c);
            uVar2 = *(uint *)(iVar6 + 0x60);
            iVar10 = *(int *)(iVar6 + 100);
            uVar11 = uVar8 - uVar9;
            uVar8 = ((*(int *)(iVar7 + 0x4c) -
                     (iStack_5c + (uint)(*(uint *)(iVar7 + 0x48) < local_60))) +
                     *(int *)(iVar7 + 0x44) + (uint)CARRY4(uVar3,*(uint *)(iVar7 + 0x40))) -
                    (iVar1 + (uint)(uVar8 < uVar9));
            uVar3 = (int)((ulonglong)uVar15 >> 0x20) - (iVar10 + (uint)((uint)uVar15 < uVar2));
            bVar13 = uVar3 <= uVar8;
            if (uVar8 == uVar3) {
              bVar13 = (uint)uVar15 - uVar2 <= uVar11;
            }
            if (bVar13) {
              uVar3 = (local_68 + uVar2) - (uint)uVar14;
              VectorUnsignedToFloat(DAT_0003490c,(byte)(in_fpscr >> 0x16) & 3);
              FUN_0001a068(uVar3 + uVar11,
                           ((iStack_64 + iVar10 + (uint)CARRY4(local_68,uVar2)) -
                           ((int)((ulonglong)uVar14 >> 0x20) +
                           (uint)(local_68 + uVar2 < (uint)uVar14))) + uVar8 +
                           (uint)CARRY4(uVar3,uVar11));
            }
            else {
              VectorUnsignedToFloat(DAT_0003490c,(byte)(in_fpscr >> 0x16) & 3);
            }
            uVar3 = uVar9 - uVar2;
            iVar1 = iVar1 - (iVar10 + (uint)(uVar9 < uVar2));
            goto LAB_00014750;
          }
        }
        else if (-1 < iVar1) {
          printf("%-11s",param_6);
          FUN_00013540(iVar12,0x2d);
          iVar6 = *(int *)(iVar12 + (param_1 + 0x16) * 4);
          iVar7 = *(int *)(iVar12 + (param_2 + 0x16) * 4);
          local_60 = *(uint *)(iVar7 + 0x60);
          iStack_5c = *(int *)(iVar7 + 100);
          local_68 = *(uint *)(iVar6 + 0x68);
          iStack_64 = *(int *)(iVar6 + 0x6c);
          uVar14 = VectorAdd(*(undefined8 *)(iVar6 + 0x40),*(undefined8 *)(iVar6 + 0x48),8);
          uVar8 = *(uint *)(iVar7 + 0x48) - local_60;
          uVar2 = *(uint *)(iVar7 + 0x68);
          iVar1 = *(int *)(iVar7 + 0x6c);
          uVar15 = VectorSub(uVar14,*(undefined8 *)(iVar6 + 0x68),8);
          uVar9 = *(uint *)(iVar6 + 0x60);
          iVar10 = *(int *)(iVar6 + 100);
          uVar3 = uVar8 + *(uint *)(iVar7 + 0x40);
          uVar11 = uVar3 - uVar2;
          uVar8 = ((*(int *)(iVar7 + 0x4c) -
                   (iStack_5c + (uint)(*(uint *)(iVar7 + 0x48) < local_60))) +
                   *(int *)(iVar7 + 0x44) + (uint)CARRY4(uVar8,*(uint *)(iVar7 + 0x40))) -
                  (iVar1 + (uint)(uVar3 < uVar2));
          uVar3 = (int)((ulonglong)uVar15 >> 0x20) - (iVar10 + (uint)((uint)uVar15 < uVar9));
          bVar13 = uVar3 <= uVar8;
          if (uVar8 == uVar3) {
            bVar13 = (uint)uVar15 - uVar9 <= uVar11;
          }
          if (bVar13) {
            VectorUnsignedToFloat
                      (DAT_0003490c * *(int *)(iVar12 + 0x48),(byte)(in_fpscr >> 0x16) & 3);
            uVar3 = (local_68 + uVar9) - (uint)uVar14;
            FUN_0001a068(uVar11 + uVar3,
                         uVar8 + ((iStack_64 + iVar10 + (uint)CARRY4(local_68,uVar9)) -
                                 ((int)((ulonglong)uVar14 >> 0x20) +
                                 (uint)(local_68 + uVar9 < (uint)uVar14))) +
                         (uint)CARRY4(uVar11,uVar3));
          }
          else {
            VectorUnsignedToFloat
                      (DAT_0003490c * *(int *)(iVar12 + 0x48),(byte)(in_fpscr >> 0x16) & 3);
          }
          uVar3 = uVar2 - uVar9;
          iVar1 = iVar1 - (iVar10 + (uint)(uVar2 < uVar9));
LAB_00014750:
          FUN_0001a068((local_60 + uVar3) - local_68,
                       (iStack_5c + iVar1 + (uint)CARRY4(local_60,uVar3)) -
                       (iStack_64 + (uint)(local_60 + uVar3 < local_68)));
          uVar3 = *(uint *)(iVar7 + 0x58) - *(uint *)(iVar6 + 0x50);
          uVar2 = uVar3 + *(uint *)(iVar7 + 0x50);
          uVar5 = 1;
          FUN_0001a068(uVar2 - *(uint *)(iVar6 + 0x58),
                       ((*(int *)(iVar7 + 0x5c) -
                        (*(int *)(iVar6 + 0x54) +
                        (uint)(*(uint *)(iVar7 + 0x58) < *(uint *)(iVar6 + 0x50)))) +
                        *(int *)(iVar7 + 0x54) + (uint)CARRY4(uVar3,*(uint *)(iVar7 + 0x50))) -
                       (*(int *)(iVar6 + 0x5c) + (uint)(uVar2 < *(uint *)(iVar6 + 0x58))));
          FUN_00018a18(0xffffffff,0,3,9,0);
          FUN_00012218(iVar12);
        }
      }
      iVar12 = *(int *)(iVar12 + 0x68);
    } while (iVar12 != 0);
  }
  return uVar5;
}



/* ===== FUN_00014a20 @ 00014a20 size=800 ===== */

undefined4
FUN_00014a20(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar3 = "   UID";
    }
    else {
      pcVar3 = "     USER";
    }
    printf(pcVar3);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar3 = "       PID";
    }
    else {
      pcVar3 = "      TGID       TID";
    }
    printf(pcVar3);
    printf("  minflt/s  majflt/s     VSZ     RSS   %%MEM  Command\n");
  }
  dVar1 = DAT_00014d40;
  if (DAT_0002ca5c == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar5 = DAT_0002ca5c;
    do {
      iVar2 = FUN_00013120(param_1,param_2,2,1,puVar5);
      if (iVar2 != 0) {
        iVar6 = *(int *)((int)puVar5 + (param_2 + 0x16) * 4);
        iVar8 = *(int *)((int)puVar5 + (param_1 + 0x16) * 4);
        if (param_4 == 0) {
          uVar4 = *(uint *)(puVar5 + 1);
          uVar10 = VectorAdd(*puVar5,*(undefined8 *)(iVar6 + 0x78),8);
          uVar13 = *(undefined8 *)(iVar6 + 0x80);
          *puVar5 = uVar10;
          uVar12 = (uint)uVar13;
          *(uint *)(puVar5 + 1) = uVar12 + uVar4;
          *(uint *)((int)puVar5 + 0xc) =
               (int)((ulonglong)uVar13 >> 0x20) + *(int *)((int)puVar5 + 0xc) +
               (uint)CARRY4(uVar12,uVar4);
          *(int *)(puVar5 + 8) = *(int *)(puVar5 + 8) + 1;
        }
        if (-1 < iVar2) {
          printf("%-11s",param_6);
          FUN_00013540(puVar5,0x2d);
          dVar9 = (double)FUN_0001a068(param_7,param_8);
          dVar11 = (double)FUN_0001a068(*(uint *)(iVar6 + 0x30) - *(uint *)(iVar8 + 0x30),
                                        *(int *)(iVar6 + 0x34) -
                                        (*(int *)(iVar8 + 0x34) +
                                        (uint)(*(uint *)(iVar6 + 0x30) < *(uint *)(iVar8 + 0x30))));
          dVar9 = (dVar11 / dVar9) * dVar1;
          FUN_0001a068(*(uint *)(iVar6 + 0x20) - *(uint *)(iVar8 + 0x20),
                       *(int *)(iVar6 + 0x24) -
                       (*(int *)(iVar8 + 0x24) +
                       (uint)(*(uint *)(iVar6 + 0x20) < *(uint *)(iVar8 + 0x20))));
          FUN_00018a18(0xffffffff,0,2,9,2);
          if (param_4 == 0) {
            if ((DAT_0002c24c & 0x800) == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = 2;
            }
            FUN_000188b0(uVar7,2,7,DAT_0002c24c,*(undefined4 *)(iVar6 + 0x78),
                         *(undefined4 *)(iVar6 + 0x7c),*(undefined8 *)(iVar6 + 0x80),dVar9);
            iVar2 = DAT_00033870;
            uVar4 = DAT_0002c24c;
            if (DAT_00033870 != 0) {
              FUN_0001a068(*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84));
              VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
            }
          }
          else {
            if ((DAT_0002c24c & 0x800) == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = 2;
            }
            VectorUnsignedToFloat(*(undefined4 *)(puVar5 + 8),(byte)(in_fpscr >> 0x16) & 3);
            FUN_0001a068(*(undefined4 *)(puVar5 + 1),*(undefined4 *)((int)puVar5 + 0xc));
            FUN_0001a068(*(undefined4 *)puVar5,*(undefined4 *)((int)puVar5 + 4));
            FUN_00018a18(uVar7,0,2,7,0);
            iVar2 = DAT_00033870;
            uVar4 = DAT_0002c24c;
            if (DAT_00033870 != 0) {
              FUN_0001a0dc(*(undefined4 *)(puVar5 + 1),*(undefined4 *)((int)puVar5 + 0xc),
                           *(undefined4 *)(puVar5 + 8),0);
              FUN_0001a068();
              VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
            }
          }
          FUN_00018c0c((uVar4 & 0xfff) >> 0xb,1,1,6,2);
          uVar7 = 1;
          FUN_00012218(puVar5);
        }
      }
      puVar5 = *(undefined8 **)(puVar5 + 0xd);
    } while (puVar5 != (undefined8 *)0x0);
  }
  return uVar7;
}



/* ===== FUN_00014d50 @ 00014d50 size=636 ===== */

undefined4
FUN_00014d50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  double dVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  longlong in_stack_ffffffa8;
  uint uVar14;
  
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    puts(" minflt-nr majflt-nr  Command");
  }
  if (DAT_0002ca5c == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    iVar4 = DAT_0002ca5c;
    do {
      in_stack_ffffffa8 = CONCAT44((int)((ulonglong)in_stack_ffffffa8 >> 0x20),iVar4);
      iVar1 = FUN_00013120(param_1,param_2,2,2,iVar4);
      uVar14 = (uint)((ulonglong)in_stack_ffffffa8 >> 0x20);
      if (iVar1 != 0) {
        if (param_4 == 0) {
          *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
          if (-1 < iVar1) {
            printf("%-11s",param_6);
            FUN_00013540(iVar4,0x2d);
            iVar6 = *(int *)(iVar4 + (param_2 + 0x16) * 4);
            iVar1 = *(int *)(iVar4 + (param_1 + 0x16) * 4);
            uVar10 = VectorAdd(*(undefined8 *)(iVar6 + 0x30),*(undefined8 *)(iVar6 + 0x38),8);
            uVar10 = VectorSub(uVar10,*(undefined8 *)(iVar1 + 0x30),8);
            uVar10 = VectorSub(uVar10,*(undefined8 *)(iVar1 + 0x38),8);
            uVar11 = VectorAdd(*(undefined8 *)(iVar6 + 0x20),*(undefined8 *)(iVar6 + 0x28),8);
            uVar11 = VectorSub(uVar11,*(undefined8 *)(iVar1 + 0x20),8);
            in_stack_ffffffa8 = VectorSub(uVar11,*(undefined8 *)(iVar1 + 0x28),8);
            FUN_000188b0(0xffffffff,2,9,iVar1,in_stack_ffffffa8,uVar10);
            goto LAB_00014e18;
          }
        }
        else if (-1 < iVar1) {
          printf("%-11s",param_6);
          FUN_00013540(iVar4,0x2d);
          iVar6 = *(int *)(iVar4 + (param_2 + 0x16) * 4);
          iVar1 = *(int *)(iVar4 + (param_1 + 0x16) * 4);
          dVar8 = (double)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar4 + 0x44),(byte)(in_fpscr >> 0x16) & 3);
          uVar7 = *(uint *)(iVar6 + 0x30) + *(uint *)(iVar6 + 0x38);
          uVar3 = uVar7 - *(uint *)(iVar1 + 0x30);
          dVar12 = (double)FUN_0001a068(uVar3 - *(uint *)(iVar1 + 0x38),
                                        ((*(int *)(iVar6 + 0x34) + *(int *)(iVar6 + 0x3c) +
                                         (uint)CARRY4(*(uint *)(iVar6 + 0x30),
                                                      *(uint *)(iVar6 + 0x38))) -
                                        (*(int *)(iVar1 + 0x34) +
                                        (uint)(uVar7 < *(uint *)(iVar1 + 0x30)))) -
                                        (*(int *)(iVar1 + 0x3c) +
                                        (uint)(uVar3 < *(uint *)(iVar1 + 0x38))));
          dVar12 = dVar12 / dVar8;
          uVar9 = (uint)*(undefined8 *)(iVar6 + 0x20);
          uVar7 = uVar9 + *(uint *)(iVar6 + 0x28);
          uVar3 = uVar7 - *(uint *)(iVar1 + 0x20);
          dVar13 = (double)FUN_0001a068(uVar3 - *(uint *)(iVar1 + 0x28),
                                        (((int)((ulonglong)*(undefined8 *)(iVar6 + 0x20) >> 0x20) +
                                          *(int *)(iVar6 + 0x2c) +
                                         (uint)CARRY4(uVar9,*(uint *)(iVar6 + 0x28))) -
                                        (*(int *)(iVar1 + 0x24) +
                                        (uint)(uVar7 < *(uint *)(iVar1 + 0x20)))) -
                                        (*(int *)(iVar1 + 0x2c) +
                                        (uint)(uVar3 < *(uint *)(iVar1 + 0x28))));
          in_stack_ffffffa8 = (ulonglong)uVar14 << 0x20;
          FUN_00018a18(0xffffffff,0,2,9,0,uVar14,dVar13 / dVar8,dVar12);
LAB_00014e18:
          uVar5 = 1;
          FUN_00012218(iVar4);
        }
      }
      iVar4 = *(int *)(iVar4 + 0x68);
    } while (iVar4 != 0);
  }
  return uVar5;
}



/* ===== FUN_00014fcc @ 00014fcc size=580 ===== */

undefined4
FUN_00014fcc(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 local_38;
  
  iVar4 = DAT_0002ca5c;
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    puts(" StkSize  StkRef  Command");
    iVar4 = DAT_0002ca5c;
  }
  if (iVar4 == 0) {
    DAT_0002ca5c = iVar4;
    return 0;
  }
  local_38 = 0;
  DAT_0002ca5c = iVar4;
  do {
    iVar1 = FUN_00013120(param_1,param_2,0x10,0,iVar4);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar5 = *(int *)(iVar4 + (param_2 + 0x16) * 4);
        uVar3 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0x90);
        uVar8 = *(uint *)(iVar5 + 0x94);
        *(uint *)(iVar4 + 0x10) = uVar3 + uVar7;
        *(uint *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + (uint)CARRY4(uVar3,uVar7);
        uVar3 = *(uint *)(iVar4 + 0x18);
        *(uint *)(iVar4 + 0x18) = uVar3 + uVar8;
        *(uint *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + (uint)CARRY4(uVar3,uVar8);
        *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
        if (-1 < iVar1) {
          printf("%-11s",param_6);
          FUN_00013540(iVar4,0x2d);
          if ((DAT_0002c24c & 0x800) == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 2;
          }
          FUN_000188b0(uVar6,2,7,*(undefined4 *)(iVar5 + 0x90),*(undefined4 *)(iVar5 + 0x90),0,
                       *(undefined4 *)(iVar5 + 0x94));
          goto LAB_000150b8;
        }
      }
      else if (-1 < iVar1) {
        printf("%-11s",param_6);
        FUN_00013540(iVar4,0x2d);
        VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        if ((DAT_0002c24c & 0x800) == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 2;
        }
        FUN_0001a068(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
        FUN_0001a068(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
        FUN_00018a18(uVar6,0,2,7,0);
LAB_000150b8:
        local_38 = 1;
        FUN_00012218(iVar4);
      }
    }
    iVar4 = *(int *)(iVar4 + 0x68);
    if (iVar4 == 0) {
      return local_38;
    }
  } while( true );
}



/* ===== FUN_00015210 @ 00015210 size=668 ===== */

undefined4
FUN_00015210(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong in_stack_ffffff68;
  uint uVar14;
  char acStack_70 [36];
  
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    puts("   kB_rd/s   kB_wr/s kB_ccwr/s iodelay  Command");
  }
  if (DAT_0002ca5c == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    iVar6 = DAT_0002ca5c;
    do {
      in_stack_ffffff68 = CONCAT44((int)((ulonglong)in_stack_ffffff68 >> 0x20),iVar6);
      iVar1 = FUN_00013120(param_1,param_2,4,0,iVar6);
      uVar14 = (uint)((ulonglong)in_stack_ffffff68 >> 0x20);
      if (iVar1 != 0) {
        if (param_4 == 0) {
          *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 1;
        }
        if (-1 < iVar1) {
          printf("%-11s",param_6);
          FUN_00013540(iVar6,0x2d);
          puVar4 = *(uint **)(iVar6 + (param_2 + 0x16) * 4);
          puVar5 = *(uint **)(iVar6 + (param_1 + 0x16) * 4);
          if ((*(uint *)(iVar6 + 0x3c) & 1) == 0) {
            dVar9 = (double)FUN_0001a068(param_7,param_8);
            dVar8 = DAT_000154b0;
            dVar11 = (double)FUN_0001a068(*puVar4 - *puVar5,
                                          puVar4[1] - (puVar5[1] + (uint)(*puVar4 < *puVar5)));
            dVar12 = (double)FUN_0001a068(puVar4[2] - puVar5[2],
                                          puVar4[3] - (puVar5[3] + (uint)(puVar4[2] < puVar5[2])));
            dVar13 = (double)FUN_0001a068(puVar4[4] - puVar5[4],
                                          puVar4[5] - (puVar5[5] + (uint)(puVar4[4] < puVar5[4])));
            bVar7 = (DAT_0002c24c & 0x800) == 0;
            dVar11 = (dVar11 / dVar9) * dVar8;
            if (bVar7) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = 1;
            }
            dVar12 = (dVar12 / dVar9) * dVar8;
            dVar8 = (dVar13 / dVar9) * dVar8;
            if (bVar7) {
              dVar11 = dVar11 * DAT_000154b8;
              dVar12 = dVar12 * DAT_000154b8;
              dVar8 = dVar8 * DAT_000154b8;
            }
            FUN_00018a18(uVar3,0,3,9,2,uVar14,dVar11,dVar12,dVar8);
          }
          else {
            uVar14 = 0xbff00000;
            sprintf(acStack_70," %9.2f %9.2f %9.2f",0,0xbff00000,0xbff0000000000000,
                    0xbff0000000000000);
            FUN_00018e90(4,"%s",acStack_70);
          }
          uVar10 = (uint)*(undefined8 *)(puVar4 + 6);
          iVar1 = uVar10 - puVar5[6];
          if (param_4 == 0) {
            in_stack_ffffff68 =
                 CONCAT44((int)((ulonglong)*(undefined8 *)(puVar4 + 6) >> 0x20) -
                          (puVar5[7] + (uint)(uVar10 < puVar5[6])),iVar1);
            FUN_000188b0(0xffffffff,1,7,puVar5[7],iVar1);
          }
          else {
            dVar8 = (double)FUN_0001a068();
            in_stack_ffffff68 = (ulonglong)uVar14 << 0x20;
            dVar11 = (double)VectorUnsignedToFloat
                                       (*(undefined4 *)(iVar6 + 0x54),(byte)(in_fpscr >> 0x16) & 3);
            FUN_00018a18(0xffffffff,0,1,7,0,uVar14,dVar8 / dVar11);
          }
          uVar3 = 1;
          FUN_00012218(iVar6);
        }
      }
      iVar6 = *(int *)(iVar6 + 0x68);
    } while (iVar6 != 0);
  }
  return uVar3;
}



/* ===== FUN_000154c0 @ 000154c0 size=396 ===== */

undefined4
FUN_000154c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  
  iVar3 = DAT_0002ca5c;
  if (param_3 != 0) {
    printf("\n%-11s",param_4);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    puts("   cswch/s nvcswch/s  Command");
    iVar3 = DAT_0002ca5c;
  }
  if (iVar3 == 0) {
    DAT_0002ca5c = iVar3;
    return 0;
  }
  uVar4 = 0;
  DAT_0002ca5c = iVar3;
  do {
    iVar1 = FUN_00013120(param_1,param_2,8,0,iVar3);
    if (0 < iVar1) {
      printf("%-11s",param_5);
      uVar4 = 1;
      FUN_00013540(iVar3,0x2d);
      iVar5 = *(int *)(iVar3 + (param_2 + 0x16) * 4);
      iVar1 = *(int *)(iVar3 + (param_1 + 0x16) * 4);
      FUN_0001a068(param_7,param_8);
      VectorUnsignedToFloat
                (*(int *)(iVar5 + 0x8c) - *(int *)(iVar1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat
                (*(int *)(iVar5 + 0x88) - *(int *)(iVar1 + 0x88),(byte)(in_fpscr >> 0x16) & 3);
      FUN_00018a18(0xffffffff,0,2,9,2);
      FUN_00012218(iVar3);
    }
    iVar3 = *(int *)(iVar3 + 0x68);
  } while (iVar3 != 0);
  return uVar4;
}



/* ===== FUN_00015658 @ 00015658 size=448 ===== */

undefined4
FUN_00015658(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_0002ca5c;
  if (param_3 != 0) {
    printf("\n%-11s",param_4);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    puts(" prio policy  Command");
    iVar3 = DAT_0002ca5c;
  }
  if (iVar3 == 0) {
    DAT_0002ca5c = iVar3;
    return 0;
  }
  uVar4 = 0;
  DAT_0002ca5c = iVar3;
  do {
    iVar1 = FUN_00013120(param_1,param_2,0x40,0,iVar3);
    if (0 < iVar1) {
      printf("%-11s",param_5);
      FUN_00013540(iVar3,0x2d);
      iVar1 = *(int *)(iVar3 + (param_2 + 0x16) * 4);
      uVar4 = *(undefined4 *)(iVar1 + 0x9c);
      FUN_000188b0(0xffffffff,1,4,uVar4,uVar4,0);
      iVar1 = *(int *)(iVar1 + 0xa0);
      pcVar2 = "NORMAL";
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          pcVar2 = "FIFO";
        }
        else if (iVar1 == 2) {
          pcVar2 = "RR";
        }
        else if (iVar1 == 3) {
          pcVar2 = "BATCH";
        }
        else if (iVar1 == 5) {
          pcVar2 = "IDLE";
        }
        else {
          pcVar2 = "DEADLN";
          if (iVar1 != 6) {
            pcVar2 = "?";
          }
        }
      }
      uVar4 = 1;
      FUN_00018e90(1,&DAT_0001a884,pcVar2);
      FUN_00012218(iVar3);
    }
    iVar3 = *(int *)(iVar3 + 0x68);
  } while (iVar3 != 0);
  return uVar4;
}



/* ===== FUN_00015818 @ 00015818 size=632 ===== */

undefined4
FUN_00015818(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 local_48;
  
  iVar4 = DAT_0002ca5c;
  if (param_3 != 0) {
    printf("\n%-11s",param_5);
    if ((DAT_0002c24c & 0x100) == 0) {
      pcVar2 = "   UID";
    }
    else {
      pcVar2 = "     USER";
    }
    printf(pcVar2);
    if ((DAT_0002c24c & 0x20) == 0) {
      pcVar2 = "       PID";
    }
    else {
      pcVar2 = "      TGID       TID";
    }
    printf(pcVar2);
    printf(" threads   fd-nr");
    puts("  Command");
    iVar4 = DAT_0002ca5c;
  }
  if (iVar4 == 0) {
    DAT_0002ca5c = iVar4;
    return 0;
  }
  local_48 = 0;
  DAT_0002ca5c = iVar4;
  do {
    while (iVar1 = FUN_00013120(param_1,param_2,0x20,0,iVar4), iVar1 == 0) {
LAB_000158bc:
      iVar4 = *(int *)(iVar4 + 0x68);
      if (iVar4 == 0) {
        return local_48;
      }
    }
    if (param_4 == 0) {
      uVar3 = *(uint *)(iVar4 + 0x20);
      iVar5 = *(int *)(iVar4 + (param_2 + 0x16) * 4);
      uVar6 = *(uint *)(iVar5 + 0xa4);
      uVar7 = *(uint *)(iVar5 + 0xa8);
      *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 1;
      *(uint *)(iVar4 + 0x20) = uVar3 + uVar6;
      *(uint *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + (uint)CARRY4(uVar3,uVar6);
      uVar3 = *(uint *)(iVar4 + 0x28);
      *(uint *)(iVar4 + 0x28) = uVar3 + uVar7;
      *(uint *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + (uint)CARRY4(uVar3,uVar7);
      if (-1 < iVar1) {
        printf("%-11s",param_6);
        FUN_00013540(iVar4,0x2d);
        FUN_000188b0(0xffffffff,1,7,*(undefined4 *)(iVar5 + 0xa4),*(undefined4 *)(iVar5 + 0xa4),0);
        if ((*(uint *)(iVar4 + 0x3c) & 2) == 0) {
          FUN_000188b0(0xffffffff,1,7,*(undefined4 *)(iVar5 + 0xa8),*(undefined4 *)(iVar5 + 0xa8),0)
          ;
        }
        else {
          FUN_00018e90(4,&DAT_0001a87c,&DAT_0001a878);
        }
        goto LAB_00015968;
      }
      goto LAB_000158bc;
    }
    if (iVar1 < 0) goto LAB_000158bc;
    printf("%-11s",param_6);
    FUN_00013540(iVar4,0x2d);
    VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
    FUN_0001a068(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24));
    if ((*(uint *)(iVar4 + 0x3c) & 2) == 0) {
      FUN_0001a068(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
    }
    FUN_00018a18(0xffffffff,0,2,7,0);
LAB_00015968:
    local_48 = 1;
    FUN_00012218(iVar4);
    iVar4 = *(int *)(iVar4 + 0x68);
    if (iVar4 == 0) {
      return 1;
    }
  } while( true );
}



/* ===== FUN_00015a90 @ 00015a90 size=808 ===== */

int FUN_00015a90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  uint uVar1;
  ssize_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  sVar2 = write(1,"",0);
  if (sVar2 == -1) {
    perror("stdout");
                    /* WARNING: Subroutine does not return */
    exit(6);
  }
  uVar7 = FUN_00017da0(*(undefined4 *)(&DAT_0002ca60 + param_1),
                       *(undefined4 *)((int)&DAT_0002ca60 + param_1 * 8 + 4),
                       *(undefined4 *)(&DAT_0002ca60 + param_2),
                       *(undefined4 *)((int)&DAT_0002ca60 + param_2 * 8 + 4));
  puVar6 = (undefined4 *)(DAT_00015db8 + param_1 * 8);
  puVar4 = (undefined4 *)(DAT_00015db8 + param_2 * 8);
  uVar8 = FUN_00017da0(*puVar6,puVar6[1],*puVar4,puVar4[1]);
  if ((DAT_0002c24c & 0x40) != 0) {
    if ((DAT_0002c250 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_000136a8(param_1,param_2,param_3,param_5,param_6);
    }
    if ((DAT_0002c250 & 2) != 0) {
      iVar3 = FUN_00013f68(param_1,param_2,param_3,param_5,param_6);
      iVar5 = iVar5 + iVar3;
    }
    goto LAB_00015b34;
  }
  iVar5 = 0;
  if ((DAT_0002c248 & 1) != 0) {
    iVar5 = 0;
    if ((DAT_0002c250 & 1) != 0) {
      iVar5 = FUN_000142d8(param_1,param_2,param_3,param_4,param_5,param_6,uVar8,uVar7);
    }
    if ((DAT_0002c250 & 2) != 0) {
      iVar3 = FUN_00014620(param_1,param_2,param_3,param_4,param_5,param_6);
      iVar5 = iVar5 + iVar3;
    }
  }
  if ((DAT_0002c248 & 2) != 0) {
    uVar1 = DAT_0002c250;
    if ((DAT_0002c250 & 1) != 0) {
      iVar3 = FUN_00014a20(param_1,param_2,param_3,param_4,param_5,param_6,uVar8);
      iVar5 = iVar5 + iVar3;
      uVar1 = DAT_0002c248;
      if ((DAT_0002c250 & 2) == 0) goto LAB_00015b90;
    }
    if ((uVar1 & 2) != 0) {
      iVar3 = FUN_00014d50(param_1,param_2,param_3,param_4,param_5,param_6);
      iVar5 = iVar5 + iVar3;
    }
  }
LAB_00015b90:
  if ((DAT_0002c248 & 0x10) != 0) {
    iVar3 = FUN_00014fcc(param_1,param_2,param_3,param_4,param_5,param_6);
    iVar5 = iVar5 + iVar3;
  }
  if ((DAT_0002c248 & 4) != 0) {
    iVar3 = FUN_00015210(param_1,param_2,param_3,param_4,param_5,param_6,uVar8);
    iVar5 = iVar5 + iVar3;
  }
  if ((DAT_0002c248 & 8) != 0) {
    iVar3 = FUN_000154c0(param_1,param_2,param_3,param_5,param_6);
    iVar5 = iVar5 + iVar3;
  }
  if ((DAT_0002c248 & 0x20) != 0) {
    iVar3 = FUN_00015818(param_1,param_2,param_3,param_4,param_5,param_6);
    iVar5 = iVar5 + iVar3;
  }
  if ((DAT_0002c248 & 0x40) != 0) {
    iVar3 = FUN_00015658(param_1,param_2,param_3,param_5,param_6);
    iVar5 = iVar5 + iVar3;
  }
LAB_00015b34:
  if ((DAT_0002c24c & 2) != 0) {
    iVar5 = 1;
  }
  return iVar5;
}



/* ===== FUN_00015e10 @ 00015e10 size=396 ===== */

void FUN_00015e10(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  char *pcVar4;
  char *__format;
  uint uVar5;
  char *__s;
  char acStack_a8 [4];
  char acStack_a4 [4];
  char acStack_a0 [55];
  undefined1 auStack_69 [69];
  
  uVar1 = (uint)(param_1 == 0);
  iVar2 = uVar1 * 0x40;
  uVar5 = DAT_0002c24c & 0x1000;
  __s = acStack_a8 + iVar2;
  if ((DAT_0002c24c & 0x40) == 0) {
    if (uVar5 == 0) {
      iVar2 = FUN_00017938();
      if (iVar2 == 0) {
        pcVar4 = "%X";
      }
      else {
        pcVar4 = "%H:%M:%S";
      }
      strftime(__s,0x40,pcVar4,(tm *)(&DAT_00034874 + uVar1 * 0xb));
      uVar5 = DAT_0002c24c & 0x1000;
    }
    else {
      tVar3 = mktime((tm *)(&DAT_00034874 + uVar1 * 0xb));
      snprintf(__s,0x40,"%-11ld",tVar3);
      auStack_69[iVar2] = 0;
      uVar5 = DAT_0002c24c & 0x1000;
    }
  }
  else {
    *(undefined4 *)(acStack_a8 + uVar1 * 0x40) = s___Time_0001aa24._0_4_;
    *(undefined4 *)(acStack_a0 + iVar2 + -4) = s___Time_0001aa24._4_4_;
    *(undefined4 *)(acStack_a0 + iVar2) = s___Time_0001aa24._8_4_;
  }
  pcVar4 = acStack_a8 + param_1 * 0x40;
  if (uVar5 == 0) {
    iVar2 = FUN_00017938();
    if (iVar2 == 0) {
      __format = "%X";
    }
    else {
      __format = "%H:%M:%S";
    }
    strftime(pcVar4,0x40,__format,(tm *)(&DAT_00034874 + param_1 * 0xb));
  }
  else {
    tVar3 = mktime((tm *)(&DAT_00034874 + param_1 * 0xb));
    snprintf(pcVar4,0x40,"%-11ld",tVar3);
    auStack_69[param_1 * 0x40] = 0;
  }
  FUN_00015a90(uVar1,param_1,param_2,0,__s,pcVar4);
  return;
}



/* ===== FUN_00015f9c @ 00015f9c size=708 ===== */

void FUN_00015f9c(int param_1,int param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar13;
  
  FUN_00016bf4(DAT_0001620c);
  FUN_00012ed0(0);
  if ((DAT_0002c248 & 2) != 0) {
    FUN_000122ec();
  }
  puVar11 = DAT_00016220;
  puVar14 = DAT_00016210;
  if ((DAT_0002c24c & 0x2000) == 0 && DAT_0002c158 == 0) {
    puVar14 = DAT_00016220 + -10;
    uVar3 = DAT_00016220[-9];
    uVar5 = DAT_00016220[-8];
    puVar12 = DAT_00016220 + -7;
    *DAT_00016220 = DAT_00016220[-0xb];
    puVar11[1] = *puVar14;
    puVar11[2] = uVar3;
    puVar11[3] = uVar5;
    puVar11[4] = *puVar12;
    puVar11[5] = puVar11[-6];
    puVar11[6] = puVar11[-5];
    puVar11[7] = puVar11[-4];
    puVar11[8] = puVar11[-3];
    puVar11[9] = puVar11[-2];
    puVar11[10] = puVar11[-1];
    FUN_00015e10(0,1);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  *DAT_00016210 = 0;
  puVar14[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar14[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar14[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (((sigaction *)(puVar14 + -1))->__sigaction_handler).sa_handler = (__sighandler_t)&LAB_00011e88;
  sigaction(0xe,(sigaction *)(puVar14 + -1),(sigaction *)0x0);
  if (DAT_0002c158 != 0) {
    alarm(DAT_0002c158);
  }
  iVar7 = DAT_0002ca5c;
  puVar1 = DAT_00016218;
  puVar14 = DAT_00016214;
  puVar11 = DAT_00016214 + -0x16;
  puVar12 = DAT_00016214 + -0x15;
  uVar3 = DAT_00016214[-0x14];
  uVar5 = DAT_00016214[-0x13];
  puVar13 = DAT_00016214 + -0x12;
  uVar15 = *DAT_00016218;
  *DAT_00016214 = *puVar11;
  puVar14[1] = *puVar12;
  puVar14[2] = uVar3;
  puVar14[3] = uVar5;
  uVar3 = *puVar13;
  uVar5 = puVar14[-0x11];
  uVar4 = puVar14[-0x10];
  uVar6 = puVar14[-0xf];
  puVar1[2] = uVar15;
  puVar14[4] = uVar3;
  puVar14[5] = uVar5;
  puVar14[6] = uVar4;
  puVar14[7] = uVar6;
  puVar14[8] = puVar14[-0xe];
  puVar14[9] = puVar14[-0xd];
  puVar14[10] = puVar14[-0xc];
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((int)puVar1 + 0x2c) = *(undefined4 *)((int)puVar1 + 0x1c);
  puVar14 = DAT_0001621c;
  for (; DAT_0001621c = puVar14, iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x68)) {
    memcpy(*(void **)(iVar7 + 0x60),*(void **)(iVar7 + 0x58),0xb0);
    puVar14 = DAT_0001621c;
  }
  *puVar14 = 0;
  puVar14[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar14[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar14[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (((sigaction *)(puVar14 + -1))->__sigaction_handler).sa_handler = FUN_00011e98;
  sigaction(2,(sigaction *)(puVar14 + -1),(sigaction *)0x0);
  pause();
  if ((DAT_0002c240 != 0) && (DAT_0002c158 != 0)) {
    return;
  }
  iVar10 = 1;
  uVar8 = 1;
  iVar7 = DAT_0002ca5c;
  iVar9 = param_2;
  do {
    for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x68)) {
      *(undefined4 *)(iVar7 + 0x38) = 0;
    }
    FUN_00017384(puVar11 + uVar8 * 0xb,0);
    FUN_00016bf4(puVar1 + 3 + uVar8);
    FUN_00012ed0(uVar8);
    if (param_1 == 0) {
      uVar15 = FUN_00019cfc(iVar9,param_2);
      iVar10 = (int)uVar15;
      if (iVar10 != 0) {
        iVar9 = (int)((ulonglong)uVar15 >> 0x20);
      }
      iVar9 = iVar9 + 1;
    }
    iVar7 = FUN_00015e10(uVar8,iVar10);
    if (iVar7 == 0) {
      return;
    }
    if (0 < DAT_0002ca90) {
      DAT_0002ca90 = DAT_0002ca90 + -1;
    }
    if (DAT_0002ca90 == 0) break;
    pause();
    if (DAT_0002c240 == 0) {
      uVar8 = uVar8 ^ 1;
    }
    else {
      DAT_0002ca90 = 0;
      putchar(10);
    }
    iVar7 = DAT_0002ca5c;
  } while (DAT_0002ca90 != 0);
  if ((DAT_0002c24c & 0x40) != 0) {
    return;
  }
  pcVar2 = strncpy(&stack0xffffffe0,"Average:",0x10);
  FUN_00015a90(2,uVar8,param_1,1,pcVar2,pcVar2);
  return;
}



/* ===== FUN_00016224 @ 00016224 size=208 ===== */

__pid_t FUN_00016224(int param_1,undefined4 *param_2)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_1c;
  undefined4 *puVar5;
  
  iVar1 = -((param_1 + 1) * 4 + 7U & 0xfffffff8);
  _Var2 = fork();
  puVar4 = DAT_000162f4;
  if (_Var2 == -1) {
    perror("fork");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  if (_Var2 == 0) {
    if (0 < param_1) {
      puVar3 = (undefined4 *)((int)&uStack_1c + iVar1);
      puVar4 = param_2;
      do {
        puVar5 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        puVar4 = puVar5;
      } while (puVar5 != param_2 + param_1);
    }
    *(undefined4 *)(&stack0xffffffe8 + param_1 * 4 + iVar1) = 0;
    execvp(*(char **)(&stack0xffffffe8 + iVar1),(char **)(&stack0xffffffe8 + iVar1));
    perror("exec");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  *DAT_000162f4 = 0;
  puVar4[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (((sigaction *)(puVar4 + -1))->__sigaction_handler).sa_handler = FUN_00011e98;
  sigaction(0x11,(sigaction *)(puVar4 + -1),(sigaction *)0x0);
  return _Var2;
}



/* ===== FUN_000162f8 @ 000162f8 size=520 ===== */

int FUN_000162f8(void *param_1,int param_2)

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
      if (pcVar1 == (char *)0x0) goto LAB_000164a4;
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
          goto LAB_000164a4;
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
LAB_000164a4:
  fclose(__stream_00);
  return iVar5;
}



/* ===== FUN_00016500 @ 00016500 size=796 ===== */

int FUN_00016500(int *param_1,int param_2,int param_3)

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
LAB_00016604:
    local_4c = calloc(sVar3,1);
    if (local_4c == (int *)0x0) goto LAB_00016618;
  }
  else {
    sVar3 = iVar9 * 4;
    if (sVar3 != 0) goto LAB_00016604;
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
LAB_00016618:
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
          goto LAB_00016648;
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
        *plVar8 = lVar5;
      }
    } while (iVar7 == 0);
    __dest = param_1 + 4;
    param_1[1] = DAT_0001ab58;
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
      goto LAB_00016648;
    }
  }
  iVar9 = 0;
LAB_00016648:
  free(local_4c);
  return iVar9;
}



/* ===== FUN_0001681c @ 0001681c size=984 ===== */

undefined4 FUN_0001681c(int param_1)

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



/* ===== FUN_00016bf4 @ 00016bf4 size=184 ===== */

void FUN_00016bf4(longlong *param_1)

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



/* ===== FUN_00016cac @ 00016cac size=276 ===== */

void FUN_00016cac(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,double *param_5)

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
  dVar6 = DAT_00016dc0;
  if (uVar1 <= uVar2) {
    dVar7 = (double)FUN_0001a068(param_3,param_4);
    dVar6 = (double)VectorUnsignedToFloat(uVar2 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar6 / dVar7) * DAT_00016dc8;
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
    dVar8 = (double)FUN_0001a068(uVar3 - uVar1,uVar4 - (uVar2 + (uVar3 < uVar1)));
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



/* ===== FUN_00017028 @ 00017028 size=280 ===== */

int FUN_00017028(int param_1)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  int iVar3;
  int local_484;
  stat sStack_480;
  char acStack_428 [1023];
  undefined1 local_29;
  
  __dirp = opendir("/sys/devices/system/cpu");
  if (__dirp == (DIR *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = -1;
    while( true ) {
      pdVar1 = readdir(__dirp);
      if (pdVar1 == (dirent *)0x0) break;
      iVar2 = strncmp(pdVar1->d_name,"cpu",3);
      if ((iVar2 == 0) && ((*(ushort *)(__ctype_b + (uint)(byte)pdVar1->d_name[3] * 2) & 8) != 0)) {
        snprintf(acStack_428,0x400,"%s/%s","/sys/devices/system/cpu",pdVar1->d_name);
        local_29 = 0;
        iVar2 = stat(acStack_428,&sStack_480);
        if ((-1 < iVar2) && ((sStack_480.st_mode & 0xf000) == 0x4000)) {
          if (param_1 == 0) {
            iVar3 = iVar3 + 1;
          }
          else {
            sscanf(pdVar1->d_name + 3,"%d",&local_484);
            if (iVar3 < local_484) {
              iVar3 = local_484;
            }
          }
        }
      }
    }
    closedir(__dirp);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



/* ===== FUN_00017140 @ 00017140 size=248 ===== */

int FUN_00017140(void)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  char acStack_28 [3];
  char acStack_25 [13];
  
  __stream_00 = fopen("/proc/stat","r");
  __stream = stderr;
  if (__stream_00 == (FILE *)0x0) {
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,"Cannot open %s: %s\n","/proc/stat",pcVar1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar4 = -1;
  while (pcVar1 = fgets(acStack_28,0x10,__stream_00), pcVar1 != (char *)0x0) {
    iVar2 = strncmp(acStack_28,"cpu ",4);
    if (((iVar2 != 0) && (iVar2 = strncmp(acStack_28,"cpu",3), iVar2 == 0)) &&
       (sscanf(acStack_25,"%d",&local_2c), iVar4 < local_2c)) {
      iVar4 = local_2c;
    }
  }
  fclose(__stream_00);
  return iVar4 + 1;
}



/* ===== FUN_00017238 @ 00017238 size=88 ===== */

void FUN_00017238(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00017028(param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_00017140();
    if (uVar1 <= param_1) {
      return;
    }
  }
  else if (uVar1 <= param_1) {
    return;
  }
  fwrite("Cannot handle so many processors!\n",1,0x22,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017290 @ 00017290 size=200 ===== */

int FUN_00017290(char *param_1,int param_2,int param_3)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  char *__s;
  size_t __nmemb;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  __nmemb = param_3 * 0xb + 0x80;
  if (param_3 * 0xb == -0x80) {
    __s = (char *)0x0;
  }
  else {
    __s = calloc(__nmemb,1);
    if (__s == (char *)0x0) {
      perror("realloc");
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
  }
  iVar4 = 0;
  while( true ) {
    pcVar3 = fgets(__s,__nmemb,__stream);
    iVar1 = 0;
    if (pcVar3 != (char *)0x0) {
      iVar1 = iVar4 - param_2;
    }
    if (iVar1 < 0 == (pcVar3 != (char *)0x0 && SBORROW4(iVar4,param_2))) break;
    sVar2 = strcspn(__s,":");
    if (sVar2 - 1 < 0xf) {
      iVar4 = iVar4 + 1;
    }
  }
  fclose(__stream);
  free(__s);
  return iVar4;
}



/* ===== FUN_00017358 @ 00017358 size=44 ===== */

void FUN_00017358(void)

{
  printf("sysstat version %s\n","12.7.5");
  puts("(C) Sebastien Godard (sysstat <at> orange.fr)");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00017384 @ 00017384 size=92 ===== */

int FUN_00017384(tm *param_1,int param_2,int param_3)

{
  time_t tVar1;
  int local_14;
  
  tVar1 = time((time_t *)0x0);
  local_14 = param_2 * -0x15180 + tVar1;
  if (param_3 != 0) {
    gmtime_r(&local_14,param_1);
    return local_14;
  }
  localtime_r(&local_14,param_1);
  return local_14;
}



/* ===== FUN_000173e0 @ 000173e0 size=112 ===== */

void FUN_000173e0(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  uint uVar2;
  
  if (DAT_0002ca98 == 0) {
    __s1 = getenv("S_TIME_DEF_TIME");
    uVar2 = 0;
    if (__s1 != (char *)0x0) {
      iVar1 = strcmp(__s1,"UTC");
      uVar2 = (uint)(iVar1 == 0);
    }
    DAT_0002ca98 = uVar2 + 1;
  }
  FUN_00017384(param_1,param_2,DAT_0002ca98 == 2);
  return;
}



/* ===== FUN_00017450 @ 00017450 size=156 ===== */

bool FUN_00017450(undefined4 param_1,char *param_2,int param_3)

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



/* ===== FUN_000174ec @ 000174ec size=88 ===== */

void FUN_000174ec(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = sysconf(0x1e);
  if (lVar1 == -1) {
    perror("sysconf");
    DAT_00034b10 = 0;
  }
  else {
    iVar2 = lVar1 >> 10;
    DAT_00034b10 = 0;
    if (1 < iVar2) {
      do {
        iVar2 = iVar2 >> 1;
        DAT_00034b10 = DAT_00034b10 + 1;
      } while (iVar2 != 1);
    }
  }
  return;
}



/* ===== FUN_00017544 @ 00017544 size=56 ===== */

void FUN_00017544(void)

{
  long lVar1;
  
  lVar1 = sysconf(2);
  if (lVar1 == -1) {
    perror("sysconf");
  }
  DAT_0003490c = lVar1;
  return;
}



/* ===== FUN_000175a8 @ 000175a8 size=292 ===== */

int FUN_000175a8(char *param_1,undefined8 *param_2,undefined4 *param_3)

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



/* ===== FUN_000176cc @ 000176cc size=328 ===== */

undefined4 FUN_000176cc(char *param_1,undefined4 param_2,undefined4 param_3)

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
              goto LAB_000177f4;
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
      iVar2 = FUN_000175a8(pcVar4,param_2,param_3);
    } while (iVar2 != 0);
    uVar5 = 0;
LAB_000177f4:
    closedir(__dirp);
  }
  return uVar5;
}



/* ===== FUN_00017814 @ 00017814 size=52 ===== */

bool FUN_00017814(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  return iVar1 == 0 && (sStack_60.st_mode & 0xf000) == 0x4000;
}



/* ===== FUN_00017938 @ 00017938 size=76 ===== */

void FUN_00017938(void)

{
  char *__s1;
  int iVar1;
  
  if ((int)DAT_0002c160 < 0) {
    __s1 = getenv("S_TIME_FORMAT");
    if (__s1 == (char *)0x0) {
      DAT_0002c160 = 0;
    }
    else {
      iVar1 = strcmp(__s1,"ISO");
      DAT_0002c160 = (uint)(iVar1 == 0);
    }
    return;
  }
  return;
}



/* ===== FUN_00017984 @ 00017984 size=40 ===== */

void FUN_00017984(int param_1)

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



/* ===== FUN_00017a1c @ 00017a1c size=100 ===== */

void FUN_00017a1c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_00017a80,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  puts(DAT_00017a80);
  return;
}



/* ===== FUN_00017a84 @ 00017a84 size=108 ===== */

bool FUN_00017a84(tm *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *__format;
  
  if (param_1 == (tm *)0x0) {
    strncpy(param_2,"?/?/?",param_3);
    param_2[param_3 - 1] = '\0';
    return false;
  }
  iVar1 = FUN_00017938();
  if (iVar1 != 0) {
    __format = "%Y-%m-%d";
  }
  else {
    __format = "%x";
  }
  strftime(param_2,param_3,__format,param_1);
  return iVar1 != 0;
}



/* ===== FUN_00017af0 @ 00017af0 size=304 ===== */

undefined4
FUN_00017af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_58 [64];
  
  uVar1 = FUN_00017a84(param_1,auStack_58,0x40);
  if (param_7 == 0) {
    printf("%s %s (%s) \t%s \t_%s_\t(%d CPU)\n",param_2,param_3,param_4,auStack_58,param_5,param_6);
    return uVar1;
  }
  FUN_00017a1c(0,"{\"sysstat\": {");
  FUN_00017a1c(1,"\"hosts\": [");
  FUN_00017a1c(2,"{");
  FUN_00017a1c(3,"\"nodename\": \"%s\",",param_4);
  FUN_00017a1c(3,"\"sysname\": \"%s\",",param_2);
  FUN_00017a1c(3,"\"release\": \"%s\",",param_3);
  FUN_00017a1c(3,"\"machine\": \"%s\",",param_5);
  FUN_00017a1c(3,"\"number-of-cpus\": %d,",param_6);
  FUN_00017a1c(3,"\"date\": \"%s\",",auStack_58);
  FUN_00017a1c(3,"\"statistics\": [");
  return uVar1;
}



/* ===== FUN_00017c20 @ 00017c20 size=140 ===== */

int FUN_00017c20(void)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  ushort local_18 [6];
  
  iVar1 = ioctl(1,0x5413,local_18);
  if (iVar1 == -1) {
    __s = getenv("S_REPEAT_HEADER");
    if (__s != (char *)0x0) {
      sVar2 = strspn(__s,"0123456789");
      sVar3 = strlen(__s);
      if ((sVar2 == sVar3) && (lVar4 = atol(__s), 0 < lVar4)) {
        return lVar4;
      }
    }
  }
  else if (2 < local_18[0]) {
    return local_18[0] - 2;
  }
  return 0x15180;
}



/* ===== FUN_00017cac @ 00017cac size=140 ===== */

char * FUN_00017cac(char *param_1)

{
  char *__s;
  char *__s1;
  int iVar1;
  char *pcVar2;
  
  __s1 = realpath(param_1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strncmp(__s1,"/dev/",5);
    __s = DAT_00017d38;
    pcVar2 = __s1;
    if (iVar1 == 0) {
      pcVar2 = __s1 + 5;
    }
    strncpy(DAT_00017d38,pcVar2,0x200);
    DAT_0002d49b = 0;
    while (pcVar2 = strchr(__s,0x2f), pcVar2 != (char *)0x0) {
      *pcVar2 = '!';
    }
    free(__s1);
    return DAT_00017d38;
  }
  return param_1;
}



/* ===== FUN_00017da0 @ 00017da0 size=48 ===== */

undefined8 FUN_00017da0(uint param_1,int param_2,uint param_3,int param_4)

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



/* ===== FUN_00017e58 @ 00017e58 size=104 ===== */

undefined * FUN_00017e58(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = snprintf(&DAT_00030680,0x1000,"%s-%s","/dev/disk/by",param_1);
  if ((uVar1 < 0x1000) && (iVar2 = access(&DAT_00030680,4), iVar2 == 0)) {
    return &DAT_00030680;
  }
  return (undefined *)0x0;
}



/* ===== FUN_00017ec0 @ 00017ec0 size=116 ===== */

undefined * FUN_00017ec0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00017e58(&DAT_00034910);
  uVar2 = snprintf(&DAT_0002f680,0x1000,"%s/%s",uVar1,param_1);
  if ((uVar2 < 0x1000) && (iVar3 = access(&DAT_0002f680,0), iVar3 == 0)) {
    return &DAT_0002f680;
  }
  return (undefined *)0x0;
}



/* ===== FUN_00017f34 @ 00017f34 size=356 ===== */

void * FUN_00017f34(void)

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
  
  pcVar1 = (char *)FUN_00017e58(&DAT_00034910);
  if ((pcVar1 == (char *)0x0) ||
     (iVar2 = scandir(pcVar1,local_2c,(__selector *)0x0,alphasort), ppdVar10 = local_2c[0],
     iVar2 < 0)) {
    return (void *)0x0;
  }
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pvVar9 = (void *)0x0;
      goto LAB_00017fa4;
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
LAB_00017fa4:
  free(local_2c[0]);
  return pvVar9;
}



/* ===== FUN_00018098 @ 00018098 size=276 ===== */

undefined1 * FUN_00018098(char *param_1)

{
  int *__ptr;
  char *pcVar1;
  ssize_t sVar2;
  int iVar3;
  void *__ptr_00;
  int *piVar4;
  int *piVar5;
  char acStack_1028 [4100];
  
  DAT_0002e680 = '\0';
  __ptr = (int *)FUN_00017f34();
  piVar5 = __ptr;
  if (__ptr != (int *)0x0) {
    do {
      do {
        piVar4 = piVar5;
        piVar5 = piVar4 + 1;
        if (*piVar4 == 0) goto LAB_00018158;
        pcVar1 = (char *)FUN_00017ec0();
      } while ((pcVar1 == (char *)0x0) ||
              (sVar2 = readlink(pcVar1,acStack_1028,0x1000), 0xffe < sVar2 - 1U));
      acStack_1028[sVar2] = '\0';
      pcVar1 = __xpg_basename(acStack_1028);
    } while ((pcVar1 == (char *)0x0) ||
            ((*pcVar1 == '\0' || (iVar3 = strncmp(pcVar1,param_1,0xfff), iVar3 != 0))));
    strncpy(&DAT_0002e680,(char *)*piVar4,0xfff);
    DAT_0002f67e = 0;
LAB_00018158:
    __ptr_00 = (void *)*__ptr;
    piVar5 = __ptr;
    while (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
      piVar5 = piVar5 + 1;
      __ptr_00 = (void *)*piVar5;
    }
    free(__ptr);
    if (DAT_0002e680 != '\0') {
      return &DAT_0002e680;
    }
  }
  return (undefined1 *)0x0;
}



/* ===== FUN_000181ac @ 000181ac size=120 ===== */

char * FUN_000181ac(void)

{
  char *pcVar1;
  ssize_t sVar2;
  char acStack_1008 [4100];
  
  pcVar1 = (char *)FUN_00017ec0();
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



/* ===== FUN_00018224 @ 00018224 size=156 ===== */

char * FUN_00018224(undefined4 param_1,undefined4 param_2)

{
  ssize_t sVar1;
  char *__string;
  size_t sVar2;
  
  snprintf(DAT_000182c0,0x100,"%s/%u:%u","/sys/dev/block",param_1,param_2);
  sVar1 = readlink(DAT_000182c0,&DAT_0002d680,0x1000);
  if (sVar1 - 1U < 0xfff) {
    (&DAT_0002d680)[sVar1] = 0;
    __string = __xpg_basename(&DAT_0002d680);
    if ((__string != (char *)0x0) && (sVar2 = strnlen(__string,0xfff), sVar2 != 0)) {
      return __string;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00018504 @ 00018504 size=532 ===== */

void FUN_00018504(void)

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
      DAT_0002c164 = 0;
      DAT_0002c174 = 0;
      DAT_0002c184 = 0;
      DAT_0002c194 = 0;
      DAT_0002c1a4 = 0;
      DAT_0002c1b4 = 0;
      DAT_0002c1c4 = 0;
      DAT_0002c1d4 = 0;
      DAT_0002c1e4 = 0;
      DAT_0002c1f4 = 0;
      return;
    }
    iVar2 = strcmp(pcVar1,"always");
    if (iVar2 == 0) goto LAB_00018548;
  }
  iVar2 = isatty(1);
  if (iVar2 == 0) {
    DAT_0002c164 = 0;
    DAT_0002c174 = 0;
    DAT_0002c184 = 0;
    DAT_0002c194 = 0;
    DAT_0002c1a4 = 0;
    DAT_0002c1b4 = 0;
    DAT_0002c1c4 = 0;
    DAT_0002c1d4 = 0;
    DAT_0002c1e4 = 0;
    DAT_0002c1f4 = 0;
    return;
  }
LAB_00018548:
  pcVar1 = getenv("S_COLORS_SGR");
  if (pcVar1 == (char *)0x0) {
    return;
  }
  __s = strtok(pcVar1,":");
  pcVar1 = DAT_000187d8;
  if (__s != (char *)0x0) {
    do {
      sVar3 = strlen(__s);
      if ((sVar3 - 3 < 5) && (__s[1] == '=')) {
        __s_00 = __s + 2;
        sVar4 = strspn(__s_00,";0123456789");
        if (sVar4 == sVar3 - 2) {
          switch(*__s) {
          case '+':
            snprintf(DAT_000187e4,0x10,"\x1b[%sm",__s_00);
            break;
          case '-':
            snprintf(pcVar1,0x10,"\x1b[%sm",__s_00);
            break;
          case 'C':
            snprintf(DAT_000187e8,0x10,"\x1b[%sm",__s_00);
            break;
          case 'H':
          case 'X':
            snprintf(DAT_000187ec,0x10,"\x1b[%sm",__s_00);
            break;
          case 'I':
            snprintf(DAT_000187f0,0x10,"\x1b[%sm",__s_00);
            break;
          case 'M':
          case 'W':
            snprintf(DAT_000187dc,0x10,"\x1b[%sm",__s_00);
            break;
          case 'N':
            snprintf(DAT_000187f4,0x10,"\x1b[%sm",__s_00);
            break;
          case 'R':
            snprintf(DAT_000187f8,0x10,"\x1b[%sm",__s_00);
            break;
          case 'Z':
            snprintf(DAT_000187e0,0x10,"\x1b[%sm",__s_00);
          }
        }
      }
      __s = strtok((char *)0x0,":");
    } while (__s != (char *)0x0);
    return;
  }
  return;
}



/* ===== FUN_000187fc @ 000187fc size=164 ===== */

void FUN_000187fc(int param_1,int param_2)

{
  double in_d0;
  
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (param_1 == 0) {
    param_1 = 2;
    in_d0 = in_d0 * 0.5;
  }
  for (; DAT_000188a0 <= in_d0; in_d0 = in_d0 * DAT_000188a8) {
    param_1 = param_1 + 1;
  }
  if (param_1 < 8) {
    param_1 = (int)&DAT_0002c160 + param_1;
  }
  else {
    param_1 = 0x2c167;
  }
  printf(" %*.*f",param_2 + -1,(uint)(DAT_0002c15c != 0),&DAT_0002c15c,in_d0);
  printf("%s",&DAT_0002c1f4);
  putchar((uint)*(byte *)(param_1 + 0xa4));
  return;
}



/* ===== FUN_000188b0 @ 000188b0 size=212 ===== */

void FUN_000188b0(int param_1,int param_2,undefined4 param_3,int param_4)

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
  
  iVar1 = DAT_00018984;
  local_34 = &iStack_4;
  if (0 < param_2) {
    iVar5 = 0;
    iVar6 = DAT_00018984 + -0x10;
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
        printf("%s",DAT_00018988);
        if (param_2 == iVar5) {
          return;
        }
      }
      uVar2 = FUN_0001a068(iVar7,iVar8,iVar7,iVar8);
      iVar5 = iVar5 + 1;
      FUN_000187fc(uVar2,param_1,param_3);
    } while (param_2 != iVar5);
  }
  return;
}



/* ===== FUN_00018a18 @ 00018a18 size=464 ===== */

void FUN_00018a18(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *local_5c;
  
  uVar1 = DAT_00018bf8;
  dVar4 = DAT_00018be8;
  if (0 < param_5) {
    if (-1 < DAT_0002c15c) {
      param_5 = DAT_0002c15c;
    }
    if (param_5 == 1) {
      dVar4 = DAT_00018bf0;
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
        if ((param_5 == 0) && ((dVar5 <= 0.5 && (-0.5 <= dVar5)))) goto LAB_00018ab0;
LAB_00018b40:
        if (param_2 != 0) {
          if (dVar5 <= -10.0) {
            printf("%s",DAT_00018c08);
          }
          else {
            if (-5.0 < dVar5) goto LAB_00018b60;
            printf("%s",DAT_00018c04);
          }
          if (-1 < param_1) goto LAB_00018b78;
          goto LAB_00018bb8;
        }
LAB_00018b60:
        printf("%s",DAT_00018c00);
        if (param_1 < 0) goto LAB_00018ac8;
LAB_00018b78:
        iVar2 = iVar2 + 1;
        FUN_000187fc(SUB84(dVar5,0),param_1,param_4);
        if (param_3 == iVar2) {
          return;
        }
      }
      if ((dVar4 <= dVar5) || (dVar5 <= -dVar4)) goto LAB_00018b40;
LAB_00018ab0:
      printf("%s",DAT_00018bfc);
      if (-1 < param_1) goto LAB_00018b78;
LAB_00018ac8:
      if (param_2 == 0) {
        printf(" %*.*f",param_4,param_5);
      }
      else {
LAB_00018bb8:
        printf(" %+*.*f",param_4,param_5);
      }
      iVar2 = iVar2 + 1;
      printf("%s",uVar1);
    } while (param_3 != iVar2);
  }
  return;
}



/* ===== FUN_00018c0c @ 00018c0c size=504 ===== */

void FUN_00018c0c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if ((0 < param_5) && (-1 < DAT_0002c15c)) {
    param_5 = DAT_0002c15c;
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
  dVar5 = DAT_00018e08;
  if (param_5 == 1) {
    dVar5 = DAT_00018e10;
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      pdVar1 = (double *)((uint)((int)pdVar2 + 7U) & 0xfffffff8);
      pdVar2 = pdVar1 + 1;
      dVar4 = *pdVar1;
      if (param_2 == 1) {
        if (DAT_00018e18 <= dVar4) {
LAB_00018da8:
          printf("%s",DAT_00018e38);
        }
        else {
          if (dVar4 < DAT_00018e20) goto LAB_00018cb0;
          printf("%s",DAT_00018e30);
        }
      }
      else {
        if (param_2 == 2) {
          if (dVar4 <= 10.0) goto LAB_00018da8;
          if (dVar4 <= 25.0) {
            printf("%s",DAT_00018e30);
            goto LAB_00018cd0;
          }
        }
        else if (param_2 == 3) {
          if ((dVar4 <= 10.0) && (dVar5 <= dVar4)) goto LAB_00018da8;
          if ((dVar4 <= 25.0) && (dVar5 <= dVar4)) {
            printf("%s",DAT_00018e30);
            goto LAB_00018cd0;
          }
        }
LAB_00018cb0:
        if (param_5 < 1) {
          if ((param_5 == 0) && (dVar4 <= 0.5)) goto LAB_00018d70;
        }
        else if (dVar4 < dVar5) {
LAB_00018d70:
          printf("%s",DAT_00018e34);
          goto LAB_00018cd0;
        }
        printf("%s",DAT_00018e28);
      }
LAB_00018cd0:
      printf(" %*.*f",param_4,param_5);
      printf("%s",DAT_00018e2c);
      if (0 < param_1) {
        printf("%%");
      }
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



/* ===== FUN_00018e3c @ 00018e3c size=76 ===== */

void FUN_00018e3c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  printf("%s",DAT_00018e88);
  if (param_1 == 0) {
    param_3 = param_4;
  }
  printf(param_2,param_3);
  printf("%s",DAT_00018e8c);
  return;
}



/* ===== FUN_00018e90 @ 00018e90 size=124 ===== */

void FUN_00018e90(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    printf("%s",DAT_00018f18);
  }
  else if (param_1 == 4) {
    printf("%s",DAT_00018f1c);
  }
  else {
    uVar1 = DAT_00018f0c;
    if (param_1 != 2) {
      uVar1 = DAT_00018f10;
    }
    printf("%s",uVar1);
  }
  printf(param_2,param_3);
  printf("%s",DAT_00018f14);
  return;
}



/* ===== FUN_00018f70 @ 00018f70 size=116 ===== */

uint FUN_00018f70(char *param_1,int param_2,uint *param_3)

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



/* ===== FUN_00018fe4 @ 00018fe4 size=228 ===== */

bool FUN_00018fe4(char *param_1,int param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char acStack_30 [15];
  undefined1 local_21;
  
  strncpy(acStack_30,param_1,0x10);
  local_21 = 0;
  pcVar1 = strchr(acStack_30,0x2d);
  if (pcVar1 == (char *)0x0) {
    iVar2 = FUN_00018f70(param_1,param_2,param_4);
    if ((iVar2 == 0) && (-1 < *param_4)) {
      *param_3 = *param_4;
      return false;
    }
  }
  else {
    *pcVar1 = '\0';
    iVar2 = FUN_00018f70(acStack_30,param_2,param_3);
    if (((iVar2 == 0) && (-1 < *param_3)) &&
       (iVar2 = FUN_00018f70(pcVar1 + 1,param_2,param_4), iVar2 == 0)) {
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



/* ===== FUN_000190c8 @ 000190c8 size=272 ===== */

undefined4 FUN_000190c8(char *param_1,byte *param_2,int param_3,char *param_4)

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
      iVar1 = FUN_00018fe4(__s1,param_3,&local_20,&local_1c);
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



/* ===== FUN_000192a4 @ 000192a4 size=140 ===== */

void FUN_000192a4(void)

{
  int *piVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_00019334;
  piVar2 = DAT_00019330;
  piVar3 = DAT_00019330;
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



/* ===== FUN_00019338 @ 00019338 size=1608 ===== */

int FUN_00019338(void)

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
  memset(DAT_00019980,0,0x800);
  local_1e4 = 0;
  __ptr = (char *)0x0;
  __src = (char *)0x0;
LAB_0001939c:
  do {
    while( true ) {
      do {
        pcVar3 = fgets(local_128,0xff,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          free(__src);
          free(__ptr);
          DAT_00032694 = 1;
          return local_1e4;
        }
      } while (local_128[0] == '\n' || local_128[0] == '#');
      if ((__src == (char *)0x0) && (__src = malloc(0xf0), __src == (char *)0x0)) {
        perror("malloc");
        FUN_000192a4();
        fclose(__stream);
        if (__ptr == (char *)0x0) {
          return 0;
        }
        goto LAB_000197ec;
      }
      if ((__ptr == (char *)0x0) && (__ptr = malloc(0x14), __ptr == (char *)0x0)) {
        perror("malloc");
        FUN_000192a4();
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
            if ((&DAT_00031694)[local_1dc] == 0) {
              fprintf(stderr,
                      "%s: Indirect record \'%u:%u:%u:...\' references not yet seen major %u\n",
                      acStack_168,local_1e0,local_1dc,*(undefined4 *)(__ptr + 4),local_1e0);
            }
            else {
              if (iVar4 == 3) {
                *(int *)(__ptr + 0xc) = *(int *)((&DAT_00031694)[local_1dc] + 0x10) + 0x84;
              }
              else {
                puVar12 = *(undefined4 **)(__ptr + 0xc);
                if (puVar12 == (undefined4 *)0x0) {
                  puVar12 = malloc(0x40);
                  *(undefined4 **)(__ptr + 0xc) = puVar12;
                  if (puVar12 == (undefined4 *)0x0) {
                    perror("malloc");
                    FUN_000192a4();
                    fclose(__stream);
                    free(__src);
LAB_000197ec:
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
              (&DAT_00031694)[local_1e0] = __ptr;
              iVar4 = *(int *)(&DAT_00031e94 + iVar8);
              uVar5 = *(undefined4 *)(*(int *)((int)&DAT_00031694 + iVar8) + 0x10);
              __ptr[0] = '\0';
              __ptr[1] = '\0';
              __ptr[2] = '\0';
              __ptr[3] = '\0';
              *(int *)(&DAT_00031e94 + iVar8) = iVar4 + 1;
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
          if ((&DAT_00031694)[local_1e0] == 0) {
            fprintf(stderr,
                    "%s: type \'x\' record for major #%u must follow the base record - ignored\n",
                    acStack_168);
          }
          else {
            iVar4 = *(int *)((&DAT_00031694)[local_1e0] + 0x10);
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
          cVar2 = s__s__s__s_s_0001ad08[10];
          uVar1 = s__s__s__s_s_0001ad08._8_2_;
          if (local_1c8 == 'a') {
            *(undefined1 **)(__src + 0xc4) = &LAB_000191d8;
            *(undefined2 *)(__src + 0x53) = uVar1;
            __src[0x55] = cVar2;
          }
          else {
            if (local_1c8 != 'd') {
              if (local_1c8 != '%') goto LAB_0001950c;
              strncpy(__src + 0x53,acStack_1c7,0xf);
            }
            pcVar3 = __src + 0x53;
            *(undefined1 **)(__src + 0xc4) = &LAB_00019240;
            sVar6 = strlen(pcVar3);
            cVar2 = s__s__s__s_s_0001ad08[10];
            *(undefined2 *)(pcVar3 + sVar6) = s__s__s__s_s_0001ad08._8_2_;
            pcVar3[sVar6 + 2] = cVar2;
          }
LAB_0001950c:
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
          (&DAT_00031694)[local_1e0] = __ptr;
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
      goto LAB_0001939c;
    }
    fprintf(stderr,"%s: Malformed %u field record: %s\n",acStack_168,iVar4,local_128);
  } while( true );
}



/* ===== FUN_00019c54 @ 00019c54 size=168 ===== */

ulonglong FUN_00019c54(uint param_1,uint param_2)

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



/* ===== FUN_00019cfc @ 00019cfc size=32 ===== */

void FUN_00019cfc(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00019c54();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001a068 @ 0001a068 size=372 ===== */

ulonglong FUN_0001a068(uint param_1,uint param_2)

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
LAB_00019e40:
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
  if ((param_2 & 0x100000) != 0) goto LAB_00019e40;
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
      goto LAB_00019ec0;
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
LAB_00019ec0:
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



/* ===== FUN_0001a0dc @ 0001a0dc size=76 ===== */

void FUN_0001a0dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001a128();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001a128 @ 0001a128 size=328 ===== */

undefined8 FUN_0001a128(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0001a270 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00035000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00035004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atol @ 00035008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regexec @ 0003500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int regexec(regex_t *__preg,char *__string,size_t __nmatch,regmatch_t *__pmatch,int __eflags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 00035010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00035014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 00035018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 0003501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00035020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00035024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00035028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0003502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regcomp @ 00035030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int regcomp(regex_t *__preg,char *__pattern,int __cflags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00035034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 00035038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0003503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00035040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00035044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00035048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pause @ 0003504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00035050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00035054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00035058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00035060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scandir @ 00035064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00035068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0003506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00035070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00035074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00035078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00035080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alphasort @ 00035084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00035088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0003508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00035090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 00035094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 00035098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime_r @ 000350a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000350a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 000350a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait @ 000350ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t wait(void *__stat_loc)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 000350b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 000350b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000350b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 000350bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 000350c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000350c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000350c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000350cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000350d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000350d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000350d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000350dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000350e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000350e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000350e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000350ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000350f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 000350f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000350f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000350fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 00035100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00035104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00035108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00035110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 00035114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00035118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 0003511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regfree @ 00035120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void regfree(regex_t *__preg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 00035124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00035128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0003512c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00035130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 00035134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00035138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0003513c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00035140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


