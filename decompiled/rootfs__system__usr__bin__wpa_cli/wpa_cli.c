// wpa_cli — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011110 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002c00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002c010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002c014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 0001115c size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_0002c018)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00011160 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_0002c018)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::waitpid @ 0001116c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0002c01c)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 0001117c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002c020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0002c028)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002c02c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002c030)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002c034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002c038)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002c03c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpid @ 000111f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0002c044)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 000111fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002c048)(__base);
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011208 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0002c04c)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011214 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002c050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002c058)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002c05c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002c060)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002c064)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0002c068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0002c06c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0002c070)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002c074)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0002c078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0002c07c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 000112ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002c080)();
  return;
}



/* ===== <EXTERNAL>::alarm @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0002c084)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strrchr @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002c088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000112f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002c094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 00011300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0002c098)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 0001130c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_0002c09c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011318 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002c0a0)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00011324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002c0a4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0002c0a8)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002c0ac)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::signal @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002c0b0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002c0b4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002c0b8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011370 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0002c0bc)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 0001137c size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0002c0c0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0002c0c0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 0001138c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0002c0c4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002c0c8)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0002c0cc)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000113b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002c0d0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 000113bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0002c0d4)();
  return _Var1;
}



/* ===== <EXTERNAL>::execv @ 000113c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_0002c0d8)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000113d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002c0dc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002c0e4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002c0e8)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002c0ec)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_0002c0f0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002c0f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 0001142c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0002c0f8)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002c0fc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002c100)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002c104)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 0001145c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_0002c108)(__buf);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputc @ 0001146c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002c10c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00011478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002c110)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002c114)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002c118)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001149c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002c11c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 000114a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0002c120)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::daemon @ 000114c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_0002c128)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000114cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002c12c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__assert @ 000114d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0002c130)(__assertion);
  return;
}



/* ===== <EXTERNAL>::strchr @ 000114e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002c134)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000114f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002c138)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 000114fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002c13c)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011508 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002c140)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011514 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002c144)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011520 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0002c148)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011530 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002c14c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 0001153c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002c150)(__filename);
  return pFVar1;
}



/* ===== entry @ 0001187c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002c0e0)
            (DAT_000118b0,param_2,&stack0x00000004,DAT_000118b4,DAT_000118ac,param_1);
  return;
}



/* ===== FUN_000118b8 @ 000118b8 size=32 ===== */

void FUN_000118b8(void)

{
  if (DAT_000118dc == DAT_000118d8) {
    return;
  }
  if (DAT_000118e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000118d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000118e0)();
  return;
}



/* ===== _FINI_0 @ 0001191c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011958;
  if (*DAT_00011958 != '\0') {
    return;
  }
  FUN_000118b8();
  if (DAT_0001195c != 0) {
    __deregister_frame_info(DAT_00011960);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011964 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011988 != 0) {
    __register_frame_info(DAT_00011990,DAT_0001198c);
  }
  if ((DAT_00011914 - DAT_00011910 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011918 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011918)();
  return;
}



/* ===== FUN_000119d4 @ 000119d4 size=88 ===== */

undefined4 FUN_000119d4(undefined4 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  undefined4 uVar3;
  char *__s_00;
  
  __s_00 = DAT_00011a2c;
  if (param_2 != (char *)0x0) {
    __s_00 = param_2;
  }
  sVar1 = strlen(__s_00);
  sVar2 = strlen(param_3);
  sVar1 = sVar1 + sVar2 + 2;
  __s = malloc(sVar1);
  if (__s == (char *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    snprintf(__s,sVar1,DAT_00011a30,__s_00,param_3,param_2);
    uVar3 = FUN_00015652(param_1,__s,1);
    free(__s);
  }
  return uVar3;
}



/* ===== FUN_00011a34 @ 00011a34 size=560 ===== */

void FUN_00011a34(char *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  byte *__nptr;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  char *__s;
  undefined1 auStack_84 [104];
  
  iVar5 = DAT_00011c64;
  puVar9 = *(undefined1 **)(DAT_00011c64 + 4);
  iVar3 = FUN_00015f5c();
  if (iVar3 == 0) {
    iVar3 = strncmp(param_1,DAT_00011c68,7);
    if (iVar3 == 0) {
      __s = param_1 + 7;
      pcVar4 = strchr(__s,0x20);
      if ((pcVar4 != (char *)0x0) && ((uint)((int)pcVar4 - (int)param_1) < 100)) {
        puVar9 = auStack_84;
        memcpy(auStack_84,__s,(int)pcVar4 - (int)__s);
        auStack_84[(int)pcVar4 - (int)__s] = 0;
        param_1 = pcVar4 + 1;
      }
    }
    if ((*param_1 == '<') && (pcVar4 = strchr(param_1,0x3e), pcVar4 != (char *)0x0)) {
      param_1 = pcVar4 + 1;
    }
    iVar3 = FUN_00014fc4(param_1,DAT_00011c6c);
    if (iVar3 == 0) {
      iVar3 = FUN_00014fc4(param_1,DAT_00011c88);
      if (iVar3 == 0) {
        iVar3 = FUN_00014fc4(param_1,DAT_00011c90);
        if (((((iVar3 == 0) && (iVar3 = FUN_00014fc4(param_1,DAT_00011c94), iVar3 == 0)) &&
             (iVar3 = FUN_00014fc4(param_1,DAT_00011c98), iVar3 == 0)) &&
            ((iVar3 = FUN_00014fc4(param_1,DAT_00011c9c), iVar3 == 0 &&
             (iVar3 = FUN_00014fc4(param_1,DAT_00011ca0), iVar3 == 0)))) &&
           (iVar3 = FUN_00014fc4(param_1,DAT_00011ca4), iVar3 == 0)) {
          iVar3 = FUN_00014fc4(param_1,DAT_00011ca8);
          if ((((iVar3 == 0) && (iVar3 = FUN_00014fc4(param_1,DAT_00011cac), iVar3 == 0)) &&
              ((iVar3 = FUN_00014fc4(param_1,DAT_00011cb0), iVar3 == 0 &&
               (((iVar3 = FUN_00014fc4(param_1,DAT_00011cb4), iVar3 == 0 &&
                 (iVar3 = FUN_00014fc4(param_1,DAT_00011cb8), iVar3 == 0)) &&
                (iVar3 = FUN_00014fc4(param_1,DAT_00011cbc), iVar3 == 0)))))) &&
             (((iVar3 = FUN_00014fc4(param_1,DAT_00011cc0), iVar3 == 0 &&
               (iVar3 = FUN_00014fc4(param_1,DAT_00011cc4), iVar3 == 0)) &&
              ((iVar3 = FUN_00014fc4(param_1,DAT_00011cc8), iVar3 == 0 &&
               (((iVar3 = FUN_00014fc4(param_1,DAT_00011ccc), iVar3 == 0 &&
                 (iVar3 = FUN_00014fc4(param_1,DAT_00011cd0), iVar3 == 0)) &&
                (iVar3 = FUN_00014fc4(param_1,DAT_00011cd4), iVar3 == 0)))))))) {
            iVar5 = FUN_00014fc4(param_1,DAT_00011cd8);
            if (iVar5 == 0) {
              return;
            }
            puts(DAT_00011cdc);
            return;
          }
        }
        else {
          puVar9 = *(undefined1 **)(iVar5 + 4);
        }
      }
      else {
        if (DAT_00011c80[1] == 0) {
          return;
        }
        DAT_00011c80[1] = 0;
        param_1 = DAT_00011c8c;
      }
    }
    else {
      unsetenv(DAT_00011c70);
      unsetenv(DAT_00011c74);
      unsetenv(DAT_00011c78);
      pcVar4 = strstr(param_1,DAT_00011c7c);
      if ((pcVar4 == (char *)0x0) ||
         (__nptr = (byte *)strdup(pcVar4 + 4), pbVar7 = __nptr, __nptr == (byte *)0x0)) {
        iVar3 = -1;
      }
      else {
        do {
          pbVar6 = pbVar7;
          pbVar7 = pbVar6 + 1;
        } while ((*pbVar6 & 0xdf) != 0);
        *pbVar6 = *pbVar6 & 0xdf;
        iVar3 = atoi((char *)__nptr);
        setenv(DAT_00011c70,(char *)__nptr,1);
        do {
          pbVar8 = pbVar7 + 1;
          bVar1 = *pbVar7;
          pbVar6 = pbVar7;
          if (bVar1 == 0) break;
          pbVar7 = pbVar8;
          pbVar6 = pbVar8;
        } while (bVar1 != 0x3d);
        do {
          pbVar8 = pbVar7;
          if (*pbVar8 == 0) break;
          pbVar7 = pbVar8 + 1;
        } while (*pbVar8 != 0x5d);
        *pbVar8 = 0;
        setenv(DAT_00011c74,(char *)pbVar6,1);
        free(__nptr);
      }
      puVar2 = DAT_00011c80;
      setenv(DAT_00011c78,(char *)*DAT_00011c80,1);
      param_1 = DAT_00011c84;
      if ((0 < (int)puVar2[1]) && (*(int *)(iVar5 + 8) == iVar3)) {
        return;
      }
      *(int *)(iVar5 + 8) = iVar3;
      puVar2[1] = 1;
    }
    FUN_000119d4(*(undefined4 *)(iVar5 + 0xc),puVar9,param_1);
  }
  return;
}



/* ===== FUN_00011ce2 @ 00011ce2 size=58 ===== */

void FUN_00011ce2(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00011d1c;
  iVar2 = DAT_00011d1c[4];
  if (iVar2 != 0) {
    if (DAT_00011d1c[5] != 0) {
      if (*DAT_00011d1c != 0) {
        iVar2 = DAT_00011d1c[6];
      }
      FUN_00013c0c(iVar2);
      piVar1[5] = 0;
    }
    FUN_00013a5e(piVar1[4]);
    piVar1[4] = 0;
    if (piVar1[6] != 0) {
      FUN_00013c8c();
      FUN_000159fc();
      FUN_00013a5e(piVar1[6]);
      piVar1[6] = 0;
    }
  }
  return;
}



/* ===== FUN_00011d20 @ 00011d20 size=100 ===== */

void FUN_00011d20(int param_1)

{
  char *__needle;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *__haystack;
  int local_101c;
  char acStack_1018 [4100];
  
  __haystack = acStack_1018;
  local_101c = 0x1000;
  if ((param_1 != 0) &&
     (iVar2 = FUN_00013a80(param_1,DAT_00011d84,0x16,__haystack,&local_101c,0), uVar1 = DAT_00011d8c
     , __needle = DAT_00011d88, -1 < iVar2)) {
    __haystack[local_101c] = '\0';
    do {
      pcVar3 = strstr(__haystack,__needle);
      if (pcVar3 == (char *)0x0) {
        return;
      }
      pcVar4 = strchr(pcVar3 + 6,10);
      if (pcVar4 == (char *)0x0) {
        return;
      }
      __haystack = pcVar4 + 1;
      *pcVar4 = '\0';
      FUN_000150d0(uVar1,pcVar3 + 6);
    } while (__haystack != (char *)0x0);
  }
  return;
}



/* ===== FUN_00011d90 @ 00011d90 size=196 ===== */

undefined4 FUN_00011d90(undefined4 param_1,char *param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 local_1024;
  char acStack_1020 [4095];
  undefined1 local_21;
  
  piVar1 = DAT_00011e54;
  if (DAT_00011e54[4] == 0) {
    puts(DAT_00011e58);
  }
  else {
    if (DAT_00011e54[7] != 0) {
      snprintf(acStack_1020,0x1000,DAT_00011e5c,DAT_00011e54[7],param_2);
      local_21 = 0;
      param_2 = acStack_1020;
    }
    local_1024 = 0xfff;
    sVar2 = strlen(param_2);
    iVar3 = FUN_00013a80(param_1,param_2,sVar2,acStack_1020,&local_1024,DAT_00011e60);
    if (iVar3 == -2) {
      printf(DAT_00011e64,param_2);
      return 0xfffffffe;
    }
    if (-1 < iVar3) {
      if (param_3 != 0) {
        acStack_1020[local_1024] = '\0';
        printf(DAT_00011e6c,acStack_1020);
        if (((*piVar1 != 0) && (local_1024 != 0)) && (acStack_1020[local_1024 + -1] != '\n')) {
          putchar(10);
          return 0;
        }
      }
      return 0;
    }
    printf(DAT_00011e68,param_2);
  }
  return 0xffffffff;
}



/* ===== FUN_00011e70 @ 00011e70 size=4 ===== */

void FUN_00011e70(undefined4 param_1,undefined4 param_2)

{
  FUN_00011d90(param_1,param_2,1);
  return;
}



/* ===== FUN_000125dc @ 000125dc size=110 ===== */

void FUN_000125dc(int param_1)

{
  undefined4 uVar1;
  char *__format;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *__s;
  int local_10e4;
  char acStack_10e0 [200];
  char acStack_1018 [4100];
  
  local_10e4 = 0x1000;
  FUN_00015000(DAT_0001264c);
  if (param_1 != 0) {
    __s = acStack_1018;
    iVar2 = FUN_00013a80(param_1,DAT_00012650,10,__s,&local_10e4,0);
    __format = DAT_00012654;
    uVar1 = DAT_0001264c;
    if (-1 < iVar2) {
      __s[local_10e4] = '\0';
      do {
        pcVar3 = strchr(__s,10);
        if (pcVar3 == (char *)0x0) {
          return;
        }
        *pcVar3 = '\0';
        uVar4 = snprintf(acStack_10e0,200,__format,__s);
        if (uVar4 < 200) {
          FUN_000150d0(uVar1,acStack_10e0);
        }
        __s = pcVar3 + 1;
      } while (__s != (char *)0x0);
    }
  }
  return;
}



/* ===== FUN_00012658 @ 00012658 size=108 ===== */

void FUN_00012658(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *__s;
  int local_101c;
  char acStack_1018 [4096];
  
  __s = acStack_1018;
  local_101c = 0x1000;
  FUN_00015000(DAT_000126c4);
  if ((param_1 != 0) &&
     (iVar3 = FUN_00013a80(param_1,DAT_000126c8,0xd,acStack_1018,&local_101c,0),
     uVar2 = DAT_000126c4, -1 < iVar3)) {
    bVar1 = true;
    acStack_1018[local_101c] = '\0';
    do {
      pcVar4 = strchr(__s,10);
      if (pcVar4 == (char *)0x0) {
        return;
      }
      *pcVar4 = '\0';
      if (!bVar1) {
        FUN_00015160(uVar2,__s,9);
      }
      __s = pcVar4 + 1;
      bVar1 = false;
    } while (__s != (char *)0x0);
  }
  return;
}



/* ===== FUN_00012750 @ 00012750 size=92 ===== */

char * FUN_00012750(void)

{
  char *__s2;
  char *__s2_00;
  DIR *__dirp;
  dirent64 *pdVar1;
  int iVar2;
  char *pcVar3;
  
  __dirp = opendir((char *)*DAT_000127ac);
  __s2_00 = DAT_000127b4;
  __s2 = DAT_000127b0;
  pcVar3 = (char *)0x0;
  if (__dirp != (DIR *)0x0) {
    do {
      do {
        pdVar1 = readdir64(__dirp);
        pcVar3 = (char *)0x0;
        if (pdVar1 == (dirent64 *)0x0) goto LAB_000127a0;
      } while ((pdVar1->d_type != '\f') && (pdVar1->d_type != '\0'));
      pcVar3 = pdVar1->d_name;
      iVar2 = strcmp(pcVar3,__s2);
    } while ((iVar2 == 0) || (iVar2 = strcmp(pcVar3,__s2_00), iVar2 == 0));
    printf(DAT_000127b8,pcVar3);
    pcVar3 = strdup(pcVar3);
LAB_000127a0:
    closedir(__dirp);
  }
  return pcVar3;
}



/* ===== FUN_000127bc @ 000127bc size=208 ===== */

undefined4 FUN_000127bc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *__s;
  undefined4 *puVar8;
  
  iVar7 = DAT_0001288c;
  if (1 < param_2) {
    pcVar5 = (char *)*param_3;
    iVar1 = strncasecmp(pcVar5,DAT_00012890,7);
    if (iVar1 == 0) {
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
      *(char **)(iVar7 + 0x1c) = pcVar5 + 7;
      goto LAB_000127e2;
    }
  }
  *(undefined4 *)(iVar7 + 0x1c) = 0;
  if (param_2 == 0) {
    return 0xffffffff;
  }
LAB_000127e2:
  iVar7 = 0;
  puVar8 = (undefined4 *)0x0;
  for (puVar6 = DAT_00012894; pcVar5 = (char *)*puVar6, pcVar5 != (char *)0x0; puVar6 = puVar6 + 5)
  {
    pcVar4 = (char *)*param_3;
    sVar2 = strlen(pcVar4);
    iVar1 = strncasecmp(pcVar5,pcVar4,sVar2);
    if (iVar1 == 0) {
      iVar1 = strcasecmp(pcVar5,pcVar4);
      if (iVar1 == 0) goto LAB_0001287a;
      iVar7 = iVar7 + 1;
      puVar8 = puVar6;
    }
  }
  if (iVar7 < 2) {
    puVar6 = puVar8;
    if (iVar7 != 0) {
LAB_0001287a:
                    /* WARNING: Could not recover jumptable at 0x0001288a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)puVar6[1])(param_1,param_2 + -1,param_3 + 1);
      return uVar3;
    }
    printf(DAT_0001289c,*param_3);
  }
  else {
    printf(DAT_00012898,*param_3);
    pcVar5 = DAT_000128a0;
    for (puVar6 = DAT_00012894; pcVar4 = (char *)*puVar6, pcVar4 != (char *)0x0; puVar6 = puVar6 + 5
        ) {
      __s = (char *)*param_3;
      sVar2 = strlen(__s);
      iVar7 = strncasecmp(pcVar4,__s,sVar2);
      if (iVar7 == 0) {
        printf(pcVar5,pcVar4);
      }
    }
    putchar(10);
  }
  return 1;
}



/* ===== FUN_000128a4 @ 000128a4 size=32 ===== */

void FUN_000128a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [44];
  
  iVar1 = FUN_00015278(param_2,auStack_30);
  if (iVar1 != 0) {
    FUN_000127bc(*(undefined4 *)(DAT_000128c4 + 0x10),iVar1,auStack_30);
  }
  return;
}



/* ===== FUN_000128c8 @ 000128c8 size=216 ===== */

undefined4 FUN_000128c8(char *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *__s;
  
  piVar1 = DAT_000129a0;
  if (param_1 != (char *)0x0) {
    pcVar8 = (char *)DAT_000129a0[8];
    iVar6 = param_2;
    if (((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) || (iVar2 = access(pcVar8,0), -1 < iVar2)) {
      __s = (char *)*DAT_000129a4;
      sVar3 = strlen(__s);
      sVar4 = strlen(param_1);
      sVar3 = sVar3 + sVar4 + 2;
      pcVar8 = malloc(sVar3);
      if (pcVar8 != (char *)0x0) {
        uVar5 = snprintf(pcVar8,sVar3,DAT_000129a8,__s,param_1,iVar6,param_3);
        if ((-1 < (int)uVar5) && (uVar5 < sVar3)) {
          iVar6 = FUN_00013908(pcVar8,piVar1[8]);
          piVar1[4] = iVar6;
          if (iVar6 != 0) {
            if ((param_2 == 0) || (*piVar1 == 0)) {
              piVar1[6] = 0;
            }
            else {
              iVar6 = FUN_00013908(pcVar8,piVar1[8]);
              piVar1[6] = iVar6;
            }
            free(pcVar8);
            if (piVar1[6] != 0) {
              iVar6 = FUN_00013c08();
              if (iVar6 != 0) {
                puts(DAT_000129b0);
                FUN_00011ce2();
                return 0xffffffff;
              }
              piVar1[5] = 1;
              if (*piVar1 != 0) {
                uVar7 = FUN_00013c8c(piVar1[6]);
                FUN_00015984(uVar7,DAT_000129ac,0,0);
                return 0;
              }
            }
            return 0;
          }
        }
        free(pcVar8);
      }
    }
    else {
      perror(pcVar8);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000129b4 @ 000129b4 size=78 ===== */

undefined4
FUN_000129b4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_1010 [4100];
  
  if (param_4 < param_3) {
    puVar3 = PTR_DAT_00012a08;
    if (1 < param_3) {
      puVar3 = PTR_s_s_are_00012a04;
    }
    printf(PTR_s_Invalid__s_command___at_least__d_00012a0c,param_2,param_3,puVar3);
  }
  else {
    iVar1 = FUN_0001520a(auStack_1010,0x1000,param_2,param_4,param_5);
    if (-1 < iVar1) {
      uVar2 = FUN_00011e70(param_1,auStack_1010);
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000130b0 @ 000130b0 size=44 ===== */

void FUN_000130b0(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_00011ce2();
  piVar1 = DAT_000130dc;
  iVar2 = FUN_000128c8(DAT_000130dc[1],1);
  if ((-1 < iVar2) && (*piVar1 != 0)) {
    FUN_000160a6();
    puts(DAT_000130e0);
    FUN_000160a8();
    return;
  }
  return;
}



/* ===== FUN_0001341c @ 0001341c size=82 ===== */

void FUN_0001341c(undefined4 param_1)

{
  int iVar1;
  uint local_114;
  undefined1 auStack_110 [260];
  
  local_114 = 0xff;
  iVar1 = FUN_00013a80(param_1,DAT_00013474,4,auStack_110,&local_114,DAT_00013470);
  if (((iVar1 < 0) || (local_114 < 4)) || (iVar1 = memcmp(auStack_110,DAT_00013478,4), iVar1 != 0))
  {
    puts(DAT_0001347c);
    FUN_00015ec0();
  }
  else {
    FUN_00015a02(*(undefined4 *)(DAT_00013480 + 0x20),0,DAT_00013484,param_1,0);
  }
  return;
}



/* ===== FUN_00013488 @ 00013488 size=100 ===== */

void FUN_00013488(int param_1)

{
  undefined4 uVar1;
  char *__format;
  char *__format_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint __c;
  
  puts(DAT_000134ec);
  __format_00 = DAT_000134fc;
  __format = DAT_000134f8;
  uVar1 = DAT_000134f4;
  for (piVar3 = DAT_000134f0; iVar4 = *piVar3, iVar4 != 0; piVar3 = piVar3 + 5) {
    if ((param_1 == 0) || (iVar2 = FUN_00014fc4(iVar4,param_1), iVar2 != 0)) {
      printf(__format,uVar1,iVar4);
      for (iVar4 = 0; __c = (uint)*(byte *)(piVar3[4] + iVar4), __c != 0; iVar4 = iVar4 + 1) {
        putchar(__c);
        if (__c == 10) {
          printf(__format_00,uVar1);
        }
      }
      putchar(10);
    }
  }
  return;
}



/* ===== FUN_00013610 @ 00013610 size=70 ===== */

int FUN_00013610(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_e0 [51];
  
  iVar1 = FUN_000151e0();
  memcpy(auStack_e0,DAT_00013658,200);
  if ((iVar1 == 1) && (iVar1 = FUN_000155fa(0xcc), iVar1 != 0)) {
    puVar4 = (undefined4 *)(iVar1 + -4);
    puVar3 = auStack_e0;
    do {
      pcVar2 = strdup((char *)*puVar3);
      puVar4 = puVar4 + 1;
      *puVar4 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return iVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar4 != (undefined4 *)(iVar1 + 0xc4));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0001365c @ 0001365c size=108 ===== */

undefined4 * FUN_0001365c(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_000151e0();
  local_40[0] = *(undefined4 *)PTR_DAT_000136c8;
  local_40[1] = *(undefined4 *)(PTR_DAT_000136c8 + 4);
  local_40[2] = *(undefined4 *)(PTR_DAT_000136c8 + 8);
  local_40[3] = *(undefined4 *)(PTR_DAT_000136c8 + 0xc);
  local_30 = *(undefined4 *)(PTR_DAT_000136c8 + 0x10);
  uStack_2c = *(undefined4 *)(PTR_DAT_000136c8 + 0x14);
  uStack_28 = *(undefined4 *)(PTR_DAT_000136c8 + 0x18);
  uStack_24 = *(undefined4 *)(PTR_DAT_000136c8 + 0x1c);
  local_20 = *(undefined4 *)(PTR_DAT_000136c8 + 0x20);
  uStack_1c = *(undefined4 *)(PTR_DAT_000136c8 + 0x24);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)FUN_000155fa(0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2 + -1;
      puVar5 = local_40;
      do {
        pcVar3 = strdup((char *)*puVar5);
        puVar4 = puVar4 + 1;
        *puVar4 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          return puVar2;
        }
        puVar5 = puVar5 + 1;
      } while (puVar4 != puVar2 + 9);
      return puVar2;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (undefined4 *)FUN_000155fa(8);
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    pcVar3 = strdup(PTR_s_strict_000136cc);
    *puVar2 = pcVar3;
    return puVar2;
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00013908 @ 00013908 size=316 ===== */

int * FUN_00013908(char *param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  char *__format;
  int *__ptr;
  int iVar2;
  __pid_t _Var3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *__s;
  char *pcVar7;
  char *pcVar8;
  
  if ((param_1 != (char *)0x0) &&
     (pcVar8 = param_2, __ptr = (int *)FUN_000155fa(0xe0), __ptr != (int *)0x0)) {
    iVar2 = socket(1,2,0);
    *__ptr = iVar2;
    if (-1 < iVar2) {
      *(undefined2 *)(__ptr + 1) = 1;
      __format = DAT_00013a54;
      piVar1 = DAT_00013a44;
      __s = (char *)((int)__ptr + 6);
      iVar2 = 2;
      *DAT_00013a44 = *DAT_00013a44 + 1;
      while( true ) {
        pcVar7 = (char *)*piVar1;
        if ((param_2 == (char *)0x0) || (*param_2 != '/')) {
          _Var3 = getpid();
          uVar4 = snprintf(__s,0x6c,DAT_00013a4c,_Var3,pcVar7,pcVar8,param_3);
        }
        else {
          _Var3 = getpid();
          uVar4 = snprintf(__s,0x6c,__format,param_2,_Var3,pcVar7,param_3);
          pcVar8 = pcVar7;
        }
        iVar6 = *__ptr;
        if (0x6b < uVar4) goto LAB_000139e6;
        iVar6 = bind(iVar6,(sockaddr *)(__ptr + 1),0x6e);
        if (-1 < iVar6) break;
        piVar5 = __errno_location();
        if ((*piVar5 != 0x62) || (iVar2 == 1)) goto LAB_00013a18;
        iVar2 = 1;
        unlink(__s);
      }
      *(undefined2 *)((int)__ptr + 0x72) = 1;
      iVar2 = strncmp(param_1,DAT_00013a48,10);
      if (iVar2 == 0) {
        *(undefined1 *)(__ptr + 0x1d) = 0;
        FUN_00015602((int)__ptr + 0x75,param_1 + 10,0x6b);
LAB_000139b0:
        iVar2 = connect(*__ptr,(sockaddr *)((int)__ptr + 0x72),0x6e);
        if (-1 < iVar2) {
          uVar4 = fcntl64(*__ptr,3);
          if ((int)uVar4 < 0) {
            return __ptr;
          }
          iVar2 = fcntl64(*__ptr,4,uVar4 | 0x800);
          if (-1 < iVar2) {
            return __ptr;
          }
          perror(DAT_00013a50);
          return __ptr;
        }
        close(*__ptr);
        unlink(__s);
        goto LAB_00013938;
      }
      uVar4 = FUN_00015602(__ptr + 0x1d,param_1,0x6c);
      if (uVar4 < 0x6c) goto LAB_000139b0;
LAB_00013a18:
      iVar6 = *__ptr;
LAB_000139e6:
      close(iVar6);
    }
LAB_00013938:
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_00013a58 @ 00013a58 size=6 ===== */

void FUN_00013a58(undefined4 param_1)

{
  FUN_00013908(param_1,0);
  return;
}



/* ===== FUN_00013a5e @ 00013a5e size=36 ===== */

void FUN_00013a5e(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  unlink((char *)((int)param_1 + 6));
  if (-1 < *param_1) {
    close(*param_1);
  }
  (*(code *)PTR_free_0002c14c)(param_1);
  return;
}



/* ===== FUN_00013a80 @ 00013a80 size=308 ===== */

size_t FUN_00013a80(uint *param_1,void *param_2,size_t param_3,char *param_4,size_t *param_5,
                   code *param_6)

{
  int *piVar1;
  ssize_t sVar2;
  uint uVar3;
  size_t sVar4;
  __fd_mask *p_Var5;
  int iVar6;
  int iVar7;
  timeval local_b8;
  int local_b0;
  int local_ac;
  uint local_a8 [33];
  
  piVar1 = __errno_location();
  local_b0 = 0;
  local_ac = 0;
  *piVar1 = 0;
  while( true ) {
    sVar2 = send(*param_1,param_2,param_3,0);
    if (-1 < sVar2) {
      while( true ) {
        while( true ) {
          iVar6 = 0;
          local_b8.tv_sec = 10;
          local_b8.tv_usec = 0;
          p_Var5 = (__fd_mask *)local_a8;
          do {
            iVar6 = iVar6 + 1;
            *p_Var5 = 0;
            p_Var5 = p_Var5 + 1;
          } while (iVar6 != 0x20);
          uVar3 = *param_1;
          local_a8[uVar3 >> 5] = 1 << (uVar3 & 0x1f) | local_a8[uVar3 >> 5];
          sVar4 = select(uVar3 + 1,(fd_set *)local_a8,(fd_set *)0x0,(fd_set *)0x0,&local_b8);
          if (-1 < (int)sVar4) break;
          if (*piVar1 != 4) {
            return sVar4;
          }
        }
        uVar3 = *param_1;
        if (-1 < ((int)local_a8[uVar3 >> 5] >> (uVar3 & 0x1f)) << 0x1f) {
          return 0xfffffffe;
        }
        sVar4 = recv(uVar3,param_4,*param_5,0);
        if ((int)sVar4 < 0) break;
        if ((sVar4 == 0) || (*param_4 != '<')) {
          *param_5 = sVar4;
          return 0;
        }
        if (param_6 != (code *)0x0) {
          if (*param_5 == sVar4) {
            sVar4 = sVar4 - 1;
          }
          param_4[sVar4] = '\0';
          (*param_6)(param_4,sVar4);
        }
      }
      return sVar4;
    }
    if ((*piVar1 != 0xb) && (*piVar1 != 0x10)) break;
    if (local_b0 == 0) {
      FUN_000152f4(&local_b0);
    }
    else {
      FUN_000152f4(local_a8);
      iVar6 = local_a8[0] - local_b0;
      iVar7 = local_a8[1] - local_ac;
      if (iVar7 < 0) {
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + 1000000;
      }
      if (5 < iVar6) {
        return 0xffffffff;
      }
      if ((iVar6 == 5) && (0 < iVar7)) {
        return 0xffffffff;
      }
    }
    FUN_000152c4(1,0);
  }
  return 0xffffffff;
}



/* ===== FUN_00013c08 @ 00013c08 size=76 ===== */

/* WARNING: Removing unreachable block (ram,0x00013bcc) */

int FUN_00013c08(undefined4 param_1)

{
  int iVar1;
  int local_20;
  undefined1 auStack_1c [16];
  
  local_20 = 10;
  iVar1 = FUN_00013a80(param_1,DAT_00013bfc,6,auStack_1c,&local_20,0);
  if (-1 < iVar1) {
    if (local_20 == 3) {
      iVar1 = memcmp(auStack_1c,DAT_00013c04,3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00013c0c @ 00013c0c size=4 ===== */

/* WARNING: Removing unreachable block (ram,0x00013bca) */

int FUN_00013c0c(undefined4 param_1)

{
  int iVar1;
  int iStack_20;
  undefined1 auStack_1c [16];
  
  iStack_20 = 10;
  iVar1 = FUN_00013a80(param_1,DAT_00013c00,6,auStack_1c,&iStack_20,0);
  if (-1 < iVar1) {
    if (iStack_20 == 3) {
      iVar1 = memcmp(auStack_1c,DAT_00013c04,3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00013c10 @ 00013c10 size=24 ===== */

size_t FUN_00013c10(int *param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  
  sVar1 = recv(*param_1,param_2,*param_3,0);
  if (-1 < (int)sVar1) {
    *param_3 = sVar1;
    sVar1 = 0;
  }
  return sVar1;
}



/* ===== FUN_00013c28 @ 00013c28 size=100 ===== */

uint FUN_00013c28(uint *param_1)

{
  uint uVar1;
  __fd_mask *p_Var2;
  int iVar3;
  timeval local_98;
  uint auStack_90 [33];
  
  iVar3 = 0;
  local_98.tv_sec = 0;
  local_98.tv_usec = 0;
  p_Var2 = (__fd_mask *)auStack_90;
  do {
    iVar3 = iVar3 + 1;
    *p_Var2 = 0;
    p_Var2 = p_Var2 + 1;
  } while (iVar3 != 0x20);
  uVar1 = *param_1;
  auStack_90[uVar1 >> 5] = 1 << (uVar1 & 0x1f) | auStack_90[uVar1 >> 5];
  select(uVar1 + 1,(fd_set *)auStack_90,(fd_set *)0x0,(fd_set *)0x0,&local_98);
  return (int)auStack_90[*param_1 >> 5] >> (*param_1 & 0x1f) & 1;
}



/* ===== FUN_00013c8c @ 00013c8c size=4 ===== */

undefined4 FUN_00013c8c(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_00013c90 @ 00013c90 size=44 ===== */

void FUN_00013c90(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  piVar1 = DAT_00013cbc;
  if (*DAT_00013cbc != 0) {
    local_10 = param_1;
    uStack_c = param_2;
    FUN_000152dc(&local_10);
    if ((FILE *)piVar1[1] == (FILE *)0x0) {
      printf(DAT_00013cc0,local_10,uStack_c);
    }
    else {
      fprintf((FILE *)piVar1[1],DAT_00013cc0,local_10,uStack_c);
    }
  }
  return;
}



/* ===== FUN_00013cc4 @ 00013cc4 size=146 ===== */

void FUN_00013cc4(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *__format;
  FILE *__stream;
  byte *pbVar3;
  
  iVar1 = DAT_00013d54;
  FUN_00013c90();
  if (*(FILE **)(iVar1 + 4) == (FILE *)0x0) {
    printf(DAT_00013d58,param_1,param_3);
    pcVar2 = DAT_00013d60;
    __format = DAT_00013d5c;
    if ((param_2 == (byte *)0x0) || (__format = DAT_00013d64, param_4 == 0)) {
      printf(__format);
    }
    else {
      pbVar3 = param_2 + param_3;
      for (; param_2 != pbVar3; param_2 = param_2 + 1) {
        printf(pcVar2,(uint)*param_2);
      }
    }
    (*(code *)PTR_putchar_0002c00c)(10);
    return;
  }
  fprintf(*(FILE **)(iVar1 + 4),DAT_00013d58,param_1,param_3);
  pcVar2 = DAT_00013d60;
  if (param_2 == (byte *)0x0) {
    __stream = *(FILE **)(iVar1 + 4);
    pcVar2 = DAT_00013d5c;
  }
  else {
    if (param_4 != 0) {
      pbVar3 = param_2 + param_3;
      for (; param_2 != pbVar3; param_2 = param_2 + 1) {
        fprintf(*(FILE **)(iVar1 + 4),pcVar2,(uint)*param_2);
      }
      goto LAB_00011468;
    }
    __stream = *(FILE **)(iVar1 + 4);
    pcVar2 = DAT_00013d64;
  }
  fputs(pcVar2,__stream);
LAB_00011468:
  (*(code *)PTR_fputc_0002c10c)(10,*(undefined4 *)(iVar1 + 4));
  return;
}



/* ===== FUN_00013ef8 @ 00013ef8 size=72 ===== */

void FUN_00013ef8(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__s;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00013f44;
  if (*DAT_00013f40 <= param_1) {
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_00013c90();
    __s = *(FILE **)(iVar1 + 4);
    if (__s == (FILE *)0x0) {
      vprintf(param_2,&uStack_8);
      putchar(10);
    }
    else {
      vfprintf(__s,param_2,&uStack_8);
      fputc(10,*(FILE **)(iVar1 + 4));
    }
  }
  return;
}



/* ===== FUN_0001451a @ 0001451a size=82 ===== */

int FUN_0001451a(char *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  char *__s;
  byte *pbVar3;
  char *__format;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar3 = param_3 + param_4;
    __s = param_1;
    __format = DAT_0001456c;
    if (param_5 == 0) {
      __format = DAT_00014570;
    }
    while (param_3 != pbVar3) {
      pcVar2 = (char *)snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*param_3
                               );
      if (((int)pcVar2 < 0) || (param_1 + (param_2 - (int)__s) <= pcVar2)) break;
      __s = __s + (int)pcVar2;
      param_3 = param_3 + 1;
    }
    iVar1 = (int)__s - (int)param_1;
    param_1[param_2 + -1] = '\0';
  }
  return iVar1;
}



/* ===== FUN_00014574 @ 00014574 size=42 ===== */

uint FUN_00014574(int param_1)

{
  uint uVar1;
  
  if ((param_1 - 0x30U & 0xff) < 10) {
    return param_1 - 0x30U;
  }
  if (5 < param_1 - 0x61U) {
    if (param_1 - 0x41U < 6) {
      uVar1 = param_1 - 0x37;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return param_1 - 0x57;
}



/* ===== FUN_0001459e @ 0001459e size=36 ===== */

uint FUN_0001459e(undefined1 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00014574(*param_1,param_1);
  if (((int)uVar2 < 0) ||
     (uVar1 = FUN_00014574(*(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 1)), (int)uVar1 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 | (int)uVar2 * 0x10;
  }
  return uVar1;
}



/* ===== FUN_000145c2 @ 000145c2 size=52 ===== */

int FUN_000145c2(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_0001459e(param_1);
    if (iVar2 < 0) {
      return 0;
    }
    *(char *)(param_2 + iVar3) = (char)iVar2;
    if (iVar3 == 5) {
      param_1 = param_1 + 2;
    }
    else {
      pcVar1 = (char *)(param_1 + 2);
      param_1 = param_1 + 3;
      if (*pcVar1 != ':') {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return param_1;
}



/* ===== FUN_000145f6 @ 000145f6 size=16 ===== */

int FUN_000145f6(void)

{
  int iVar1;
  
  iVar1 = FUN_000145c2();
  return -(uint)(iVar1 == 0);
}



/* ===== FUN_00014606 @ 00014606 size=70 ===== */

int FUN_00014606(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_4;
  pbVar1 = (byte *)FUN_000145c2();
  if (pbVar1 != (byte *)0x0) {
    uVar3 = (uint)*pbVar1;
    if ((uVar3 == 0) || (iVar4 = (uint)*(ushort *)(*DAT_0001464c + uVar3 * 2) << 0x1a, iVar4 < 0)) {
      *param_3 = 0xffffffff;
      *(undefined2 *)(param_3 + 1) = 0xffff;
      return 0;
    }
    if ((param_4 != 0) && (uVar3 == 0x2f)) {
      iVar2 = FUN_000145c2(pbVar1 + 1,param_3,0x2f,iVar4,iVar2);
      return -(uint)(iVar2 == 0);
    }
  }
  return -1;
}



/* ===== FUN_000146d2 @ 000146d2 size=40 ===== */

undefined4 FUN_000146d2(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  while( true ) {
    if (puVar2 == param_2 + param_3) {
      return 0;
    }
    iVar1 = FUN_0001459e(param_1);
    if (iVar1 < 0) break;
    *puVar2 = (char)iVar1;
    param_1 = param_1 + 2;
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



/* ===== FUN_00014798 @ 00014798 size=44 ===== */

void FUN_00014798(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  FUN_000152dc(&local_10);
  uVar2 = local_c * 0x10c7 - ((local_c >> 9) + (local_c >> 5));
  uVar1 = DAT_000147c4 + (int)local_10;
  *param_1 = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  param_1[1] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}



/* ===== FUN_0001486c @ 0001486c size=158 ===== */

void FUN_0001486c(byte *param_1,int param_2,byte *param_3,int param_4)

{
  char *__format;
  byte *__s;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  __format = DAT_0001490c;
  __s = param_1;
  pbVar3 = param_3;
  do {
    while( true ) {
      while( true ) {
        if ((param_3 + param_4 == pbVar3) || (param_1 + param_2 <= __s + 4)) {
          *__s = 0;
          return;
        }
        pbVar4 = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar2 = (uint)bVar1;
        pbVar3 = pbVar4;
        if (uVar2 != 0xd) break;
        *__s = 0x5c;
        __s[1] = 0x72;
        __s = __s + 2;
      }
      if (uVar2 < 0xe) break;
      if (uVar2 == 0x22) {
        *__s = 0x5c;
      }
      else if (uVar2 == 0x5c) {
        *__s = bVar1;
      }
      else {
        if (uVar2 != 0x1b) goto LAB_000148a6;
        bVar1 = 0x65;
        *__s = 0x5c;
      }
LAB_000148d2:
      __s[1] = bVar1;
      __s = __s + 2;
    }
    if (uVar2 == 9) {
      bVar1 = 0x74;
      *__s = 0x5c;
      goto LAB_000148d2;
    }
    if (uVar2 == 10) {
      bVar1 = 0x6e;
      *__s = 0x5c;
      goto LAB_000148d2;
    }
LAB_000148a6:
    if (uVar2 - 0x20 < 0x5f) {
      *__s = bVar1;
      __s = __s + 1;
    }
    else {
      snprintf((char *)__s,(int)(param_1 + param_2) - (int)__s,__format);
      __s = __s + 4;
    }
  } while( true );
}



/* ===== FUN_00014910 @ 00014910 size=216 ===== */

uint FUN_00014910(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0;
LAB_00014924:
  while( true ) {
    pcVar6 = param_3;
    cVar4 = *pcVar6;
    if ((cVar4 == '\0') || (uVar7 = uVar5 + 1, param_2 <= uVar7)) {
      if (uVar5 < param_2) {
        *(undefined1 *)(param_1 + uVar5) = 0;
      }
      return uVar5;
    }
    param_3 = pcVar6 + 1;
    if (cVar4 == '\\') break;
LAB_000149e2:
    *(char *)(param_1 + uVar5) = cVar4;
    uVar5 = uVar7;
  }
  bVar3 = pcVar6[1];
  if (bVar3 == 0x65) {
    bVar3 = 0x1b;
LAB_000149a4:
    *(byte *)(param_1 + uVar5) = bVar3;
  }
  else {
    if (bVar3 < 0x66) {
      if (bVar3 < 0x38) {
        if (0x2f < bVar3) {
          cVar4 = bVar3 - 0x30;
          if ((byte)(pcVar6[2] - 0x30U) < 8) {
            param_3 = pcVar6 + 3;
            cVar4 = (pcVar6[2] - 0x30U) + cVar4 * '\b';
          }
          else {
            param_3 = pcVar6 + 2;
          }
          cVar1 = *param_3;
          if ((byte)(cVar1 - 0x30U) < 8) {
            param_3 = param_3 + 1;
            cVar4 = (cVar1 - 0x30U) + cVar4 * '\b';
          }
          goto LAB_000149e2;
        }
        bVar8 = bVar3 == 0x22;
      }
      else {
        bVar8 = bVar3 == 0x5c;
      }
      if (bVar8) goto LAB_000149a4;
      goto LAB_00014924;
    }
    if (bVar3 == 0x72) {
      bVar3 = 0xd;
      goto LAB_000149a4;
    }
    if (bVar3 < 0x73) {
      if (bVar3 != 0x6e) goto LAB_00014924;
      *(undefined1 *)(param_1 + uVar5) = 10;
    }
    else {
      if (bVar3 != 0x74) {
        if (bVar3 == 0x78) {
          iVar2 = FUN_0001459e(pcVar6 + 2);
          if (iVar2 < 0) {
            iVar2 = FUN_00014574(pcVar6[2]);
            param_3 = pcVar6 + 2;
            if (-1 < iVar2) {
              *(char *)(param_1 + uVar5) = (char)iVar2;
              uVar5 = uVar7;
              param_3 = pcVar6 + 3;
            }
          }
          else {
            *(char *)(param_1 + uVar5) = (char)iVar2;
            uVar5 = uVar7;
            param_3 = pcVar6 + 4;
          }
        }
        goto LAB_00014924;
      }
      *(undefined1 *)(param_1 + uVar5) = 9;
    }
  }
  uVar5 = uVar7;
  param_3 = pcVar6 + 2;
  goto LAB_00014924;
}



/* ===== FUN_00014a52 @ 00014a52 size=98 ===== */

uint FUN_00014a52(void *param_1,uint param_2,void *param_3,uint param_4,void *param_5,size_t param_6
                 )

{
  size_t __n;
  
  memset(param_1,0,param_2);
  if (param_3 == (void *)0x0) {
    param_4 = 0;
  }
  else {
    __n = param_2;
    if (param_2 <= param_4) goto LAB_00014a76;
    memcpy(param_1,param_3,param_4);
  }
  if (param_5 == (void *)0x0) {
    return param_4;
  }
  param_1 = (void *)((int)param_1 + param_4);
  if (param_4 + param_6 < param_2) {
    memcpy(param_1,param_5,param_6);
    return param_4 + param_6;
  }
  param_3 = param_5;
  __n = param_2 - param_4;
LAB_00014a76:
  memcpy(param_1,param_3,__n);
  return param_2;
}



/* ===== FUN_00014ab4 @ 00014ab4 size=38 ===== */

void * FUN_00014ab4(void *param_1,size_t param_2)

{
  void *__dest;
  
  if (param_1 == (void *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(param_2 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,param_2);
      *(undefined1 *)((int)__dest + param_2) = 0;
    }
  }
  return __dest;
}



/* ===== FUN_00014ada @ 00014ada size=180 ===== */

void * FUN_00014ada(char *param_1,uint *param_2)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
    pcVar1 = strrchr(param_1,0x22);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
      *param_2 = (int)pcVar1 - (int)param_1;
      pvVar2 = (void *)FUN_00014ab4(param_1);
      return pvVar2;
    }
  }
  else if ((*param_1 == 'P') && (param_1[1] == '\"')) {
    param_1 = param_1 + 2;
    pcVar1 = strrchr(param_1,0x22);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
      pvVar2 = (void *)FUN_00014ab4(param_1,(int)pcVar1 - (int)param_1);
      if (pvVar2 != (void *)0x0) {
        sVar6 = ((int)pcVar1 - (int)param_1) + 1;
        pvVar3 = malloc(sVar6);
        if (pvVar3 != (void *)0x0) {
          uVar4 = FUN_00014910(pvVar3,sVar6,pvVar2);
          *param_2 = uVar4;
        }
        free(pvVar2);
        return pvVar3;
      }
    }
  }
  else {
    sVar6 = strlen(param_1);
    if ((sVar6 & 1) == 0) {
      uVar4 = sVar6 >> 1;
      pvVar2 = malloc(uVar4 + 1);
      if (pvVar2 != (void *)0x0) {
        iVar5 = FUN_000146d2(param_1,pvVar2,uVar4);
        if (iVar5 == 0) {
          *(undefined1 *)((int)pvVar2 + uVar4) = 0;
          *param_2 = uVar4;
          return pvVar2;
        }
        free(pvVar2);
      }
    }
  }
  return (void *)0x0;
}



/* ===== FUN_00014fc4 @ 00014fc4 size=30 ===== */

bool FUN_00014fc4(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  return iVar1 == 0;
}



/* ===== FUN_00014fe4 @ 00014fe4 size=28 ===== */

void FUN_00014fe4(int *param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  __ptr = (void *)param_1[2];
  *piVar2 = iVar1;
  free(__ptr);
  (*(code *)PTR_free_0002c14c)(param_1);
  return;
}



/* ===== FUN_00015000 @ 00015000 size=20 ===== */

void FUN_00015000(int *param_1)

{
  while ((param_1 != (int *)*param_1 && ((int *)*param_1 != (int *)0x0))) {
    FUN_00014fe4();
  }
  return;
}



/* ===== FUN_00015014 @ 00015014 size=34 ===== */

undefined4 * FUN_00015014(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == param_1) {
      return (undefined4 *)0x0;
    }
    iVar1 = strcmp((char *)puVar2[2],param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}



/* ===== FUN_00015036 @ 00015036 size=18 ===== */

void FUN_00015036(void)

{
  int iVar1;
  
  iVar1 = FUN_00015014();
  if (iVar1 != 0) {
    FUN_00014fe4();
    return;
  }
  return;
}



/* ===== FUN_00015048 @ 00015048 size=74 ===== */

void FUN_00015048(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  char acStack_1c [20];
  
  iVar1 = FUN_000145f6(param_2,&local_24);
  if (-1 < iVar1) {
    snprintf(acStack_1c,0x12,DAT_00015094,(uint)local_24,(uint)local_23,(uint)local_22,
             (uint)local_21,(uint)local_20,(uint)local_1f);
    FUN_00015036(param_1,acStack_1c);
  }
  return;
}



/* ===== FUN_000150d0 @ 000150d0 size=58 ===== */

undefined4 FUN_000150d0(int *param_1,char *param_2)

{
  int iVar1;
  int *__ptr;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00015014();
  if (iVar1 == 0) {
    __ptr = (int *)FUN_000155fa(0xc);
    if (__ptr != (int *)0x0) {
      pcVar2 = strdup(param_2);
      __ptr[2] = (int)pcVar2;
      if (pcVar2 != (char *)0x0) {
        iVar1 = *param_1;
        *__ptr = iVar1;
        __ptr[1] = (int)param_1;
        *(int **)(iVar1 + 4) = __ptr;
        *param_1 = (int)__ptr;
        goto LAB_00015106;
      }
      free(__ptr);
    }
    uVar3 = 0xffffffff;
  }
  else {
LAB_00015106:
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001510a @ 0001510a size=80 ===== */

undefined4 FUN_0001510a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  char acStack_1c [20];
  
  iVar1 = FUN_000145f6(param_2,&local_24);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    snprintf(acStack_1c,0x12,DAT_0001515c,(uint)local_24,(uint)local_23,(uint)local_22,
             (uint)local_21,(uint)local_20,(uint)local_1f);
    uVar2 = FUN_000150d0(param_1,acStack_1c);
  }
  return uVar2;
}



/* ===== FUN_00015160 @ 00015160 size=62 ===== */

undefined4 FUN_00015160(undefined4 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  void *__ptr;
  undefined4 uVar3;
  
  pcVar1 = strchr(param_2,param_3);
  if (pcVar1 == (char *)0x0) {
    sVar2 = strlen(param_2);
    pcVar1 = param_2 + sVar2;
  }
  __ptr = (void *)FUN_00014ab4(param_2,(int)pcVar1 - (int)param_2);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_000150d0(param_1,__ptr);
    free(__ptr);
  }
  return uVar3;
}



/* ===== FUN_0001519e @ 0001519e size=66 ===== */

int FUN_0001519e(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  for (puVar4 = (undefined4 *)*param_1; uVar1 = uVar1 + 1, param_1 != puVar4;
      puVar4 = (undefined4 *)*puVar4) {
  }
  if ((uVar1 >> 0x1e == 0) && (iVar2 = FUN_000155fa(uVar1 * 4), iVar2 != 0)) {
    puVar4 = (undefined4 *)(iVar2 + -4);
    for (puVar5 = (undefined4 *)*param_1; puVar5 != param_1; puVar5 = (undefined4 *)*puVar5) {
      pcVar3 = strdup((char *)puVar5[2]);
      puVar4 = puVar4 + 1;
      *puVar4 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        return iVar2;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_000151e0 @ 000151e0 size=42 ===== */

int FUN_000151e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (param_2 < iVar2) {
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
      }
      return iVar1;
    }
    if (*(char *)(param_1 + iVar2) != ' ') {
      iVar1 = iVar1 + 1;
      do {
        iVar2 = iVar2 + 1;
        if (param_2 < iVar2) break;
      } while (*(char *)(param_1 + iVar2) != ' ');
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



/* ===== FUN_0001520a @ 0001520a size=96 ===== */

undefined4 FUN_0001520a(char *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined *__format;
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *__s;
  int iVar4;
  int iVar5;
  
  iVar5 = param_4;
  uVar1 = snprintf(param_1,param_2,PTR_s__s_00017354_0x23_0001526c,param_3,param_4);
  __format = PTR_s__s_0001a999_0x33_00015270;
  if (((int)uVar1 < 0) || (param_2 <= uVar1)) {
LAB_0001525e:
    puts(PTR_s_Too_long_command_00015274);
    uVar2 = 0xffffffff;
  }
  else {
    __s = param_1 + uVar1;
    for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
      pcVar3 = (char *)snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,
                                *(undefined4 *)(param_5 + iVar4 * 4),iVar5);
      if (((int)pcVar3 < 0) || (param_1 + (param_2 - (int)__s) <= pcVar3)) goto LAB_0001525e;
      __s = __s + (int)pcVar3;
    }
    uVar2 = 0;
    param_1[param_2 - 1] = '\0';
  }
  return uVar2;
}



/* ===== FUN_00015278 @ 00015278 size=74 ===== */

int FUN_00015278(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
LAB_00015282:
  do {
    for (; *param_1 == ' '; param_1 = param_1 + 1) {
    }
    if (*param_1 == '\0') {
      return iVar2;
    }
    *(char **)(param_2 + iVar2 * 4) = param_1;
    iVar2 = iVar2 + 1;
    if (iVar2 == 10) {
      return 10;
    }
    if ((*param_1 == '\"') && (pcVar1 = strrchr(param_1,0x22), pcVar1 != (char *)0x0)) {
      param_1 = pcVar1 + 1;
    }
    do {
      pcVar1 = param_1;
      param_1 = pcVar1;
      if (*pcVar1 == '\0') goto LAB_00015282;
      param_1 = pcVar1 + 1;
    } while (*pcVar1 != ' ');
    *pcVar1 = '\0';
  } while( true );
}



/* ===== FUN_000152c4 @ 000152c4 size=26 ===== */

void FUN_000152c4(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_0002c040)(param_2);
  return;
}



/* ===== FUN_000152dc @ 000152dc size=24 ===== */

void FUN_000152dc(int *param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = (__time_t)param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_usec;
  return;
}



/* ===== FUN_000152f4 @ 000152f4 size=72 ===== */

undefined4 FUN_000152f4(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int __clock_id;
  timespec local_20;
  undefined4 uStack_18;
  
  piVar1 = DAT_0001533c;
  local_20.tv_sec = (__time_t)param_1;
  local_20.tv_nsec = param_2;
  uStack_18 = param_3;
  do {
    while( true ) {
      while( true ) {
        __clock_id = *piVar1;
        iVar3 = clock_gettime(__clock_id,&local_20);
        iVar2 = DAT_00015340;
        if (iVar3 == 0) {
          *param_1 = local_20.tv_sec;
          param_1[1] = (int)((longlong)local_20.tv_nsec * (longlong)iVar2 >> 0x26) -
                       (local_20.tv_nsec >> 0x1f);
          return 0;
        }
        if (__clock_id != 1) break;
        *piVar1 = 0;
      }
      if (__clock_id != 7) break;
      *piVar1 = 1;
    }
  } while (__clock_id != 0);
  return 0xffffffff;
}



/* ===== FUN_00015400 @ 00015400 size=70 ===== */

undefined4 FUN_00015400(char *param_1)

{
  int iVar1;
  FILE *__stream;
  __pid_t _Var2;
  undefined4 uVar3;
  
  iVar1 = daemon(0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((param_1 != (char *)0x0) &&
       (__stream = fopen64(param_1,DAT_0001544c), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,DAT_00015450,_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror(DAT_00015448);
  }
  return uVar3;
}



/* ===== FUN_00015454 @ 00015454 size=10 ===== */

void FUN_00015454(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_unlink_0002c0bc)();
  return;
}



/* ===== FUN_0001545c @ 0001545c size=60 ===== */

undefined4 FUN_0001545c(void *param_1,size_t param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  size_t sVar2;
  
  __stream = fopen64(DAT_00015498,DAT_0001549c);
  if (__stream == (FILE *)0x0) {
    puts(DAT_000154a0);
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = fread(param_1,1,param_2,__stream);
    fclose(__stream);
    uVar1 = 0;
    if (param_2 != sVar2) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00015544 @ 00015544 size=4 ===== */

undefined4 FUN_00015544(void)

{
  return 0;
}



/* ===== FUN_00015548 @ 00015548 size=2 ===== */

void FUN_00015548(void)

{
  return;
}



/* ===== <EXTERNAL>::setenv @ 0001554a size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0002c0c0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 0001554e size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_0002c018)(__name);
  return iVar1;
}



/* ===== FUN_00015552 @ 00015552 size=118 ===== */

void * FUN_00015552(char *param_1,size_t *param_2)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  void *__ptr;
  
  __stream = fopen64(param_1,DAT_000155c8);
  if (__stream == (FILE *)0x0) {
    return (void *)0x0;
  }
  iVar1 = fseek(__stream,0,2);
  if ((-1 < iVar1) && (sVar2 = ftell(__stream), -1 < (int)sVar2)) {
    *param_2 = sVar2;
    iVar1 = fseek(__stream,0,0);
    if (-1 < iVar1) {
      sVar2 = *param_2;
      __ptr = malloc(sVar2);
      if ((__ptr != (void *)0x0) && (sVar2 = fread(__ptr,1,sVar2,__stream), sVar2 != *param_2)) {
        fclose(__stream);
        free(__ptr);
        return (void *)0x0;
      }
      fclose(__stream);
      return __ptr;
    }
  }
  fclose(__stream);
  return (void *)0x0;
}



/* ===== FUN_000155fa @ 000155fa size=10 ===== */

void FUN_000155fa(undefined4 param_1)

{
  (*(code *)PTR_calloc_0002c08c)(1,param_1);
  return;
}



/* ===== FUN_00015602 @ 00015602 size=54 ===== */

char * FUN_00015602(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_3 == 0) {
LAB_0001562e:
    do {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  else {
    do {
      pcVar2 = pcVar3 + 1;
      if (pcVar2 == param_2 + param_3) {
        *param_1 = '\0';
        goto LAB_0001562e;
      }
      cVar1 = *pcVar3;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== FUN_00015638 @ 00015638 size=26 ===== */

byte FUN_00015638(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    bVar1 = bVar1 | *(byte *)(param_1 + iVar2) ^ *(byte *)(param_2 + iVar2);
  }
  return bVar1;
}



/* ===== FUN_00015652 @ 00015652 size=170 ===== */

undefined4 FUN_00015652(char *param_1,char *param_2,int param_3)

{
  __pid_t __pid;
  char *__ptr;
  char *__ptr_00;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_a8 [33];
  int iStack_24;
  
  __pid = fork();
  if (__pid < 0) {
    uVar3 = 0xffffffff;
    perror(DAT_000156fc);
  }
  else {
    if (__pid == 0) {
      __ptr = strdup(param_1);
      iVar4 = 1;
      __ptr_00 = strdup(param_2);
      pcVar2 = __ptr_00;
      local_a8[0] = __ptr;
      do {
        if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) break;
        do {
          pcVar1 = pcVar2;
          pcVar2 = pcVar1 + 1;
        } while (*pcVar1 == ' ');
        if (*pcVar1 == '\0') break;
        local_a8[iVar4] = pcVar1;
        pcVar1 = strchr(pcVar1,0x20);
        pcVar2 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          pcVar2 = pcVar1 + 1;
          *pcVar1 = '\0';
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x1e);
      local_a8[iVar4] = (char *)0x0;
      execv(param_1,local_a8);
      perror(DAT_00015700);
      free(__ptr);
      free(__ptr_00);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    uVar3 = 0;
    if (param_3 != 0) {
      waitpid(__pid,&iStack_24,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00015704 @ 00015704 size=32 ===== */

bool FUN_00015704(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 != *param_2) {
    return false;
  }
  return param_1[1] < param_2[1];
}



/* ===== FUN_00015724 @ 00015724 size=38 ===== */

void FUN_00015724(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar4 = *param_1;
  iVar1 = param_2[1];
  iVar3 = param_1[1];
  *param_3 = iVar4 - iVar2;
  iVar3 = iVar3 - iVar1;
  param_3[1] = iVar3;
  if (iVar3 < 0) {
    *param_3 = (iVar4 - iVar2) + -1;
    param_3[1] = iVar3 + 1000000;
  }
  return;
}



/* ===== FUN_0001574a @ 0001574a size=12 ===== */

void FUN_0001574a(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  (*(code *)PTR_free_0002c14c)();
  return;
}



/* ===== FUN_000157bc @ 000157bc size=60 ===== */

void FUN_000157bc(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1[3] = 0;
  while( true ) {
    if (*param_1 <= iVar3) {
      return;
    }
    iVar2 = param_1[1] + iVar3 * 0x10;
    uVar1 = *(uint *)(param_1[1] + iVar3 * 0x10);
    if (((*(int *)(param_2 + (uVar1 >> 5) * 4) >> (uVar1 & 0x1f)) << 0x1f < 0) &&
       ((**(code **)(iVar2 + 0xc))(uVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8)),
       param_1[3] != 0)) break;
    iVar3 = iVar3 + 1;
  }
  return;
}



/* ===== FUN_000157f8 @ 000157f8 size=80 ===== */

void FUN_000157f8(int *param_1,int param_2)

{
  int extraout_r1;
  int iVar1;
  int extraout_r2;
  undefined4 *puVar2;
  uint uVar3;
  uint extraout_r3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(param_2 + -4);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
  } while (puVar2 != (undefined4 *)(param_2 + 0x7c));
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar5 = *param_1;
    for (iVar1 = 0; iVar1 < iVar5; iVar1 = iVar1 + 1) {
      uVar3 = *(uint *)(iVar4 + iVar1 * 0x10);
      if ((int)uVar3 < 0) {
        __assert(DAT_00015850,DAT_0001584c,0x242);
        param_2 = extraout_r1;
        iVar1 = extraout_r2;
        uVar3 = extraout_r3;
      }
      *(uint *)(param_2 + (uVar3 >> 5) * 4) =
           1 << (uVar3 & 0x1f) | *(uint *)(param_2 + (uVar3 >> 5) * 4);
    }
  }
  return;
}



/* ===== FUN_00015854 @ 00015854 size=56 ===== */

void FUN_00015854(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_0001588c;
  iVar5 = 0;
  while ((iVar2 = param_1[1], iVar5 < *param_1 && (iVar2 != 0))) {
    iVar3 = iVar5 * 0x10;
    iVar5 = iVar5 + 1;
    iVar4 = iVar2 + iVar3;
    FUN_00013ef8(3,uVar1,*(undefined4 *)(iVar2 + iVar3),*(undefined4 *)(iVar4 + 4),
                 *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
  }
  (*(code *)PTR_free_0002c14c)();
  return;
}



/* ===== FUN_00015890 @ 00015890 size=56 ===== */

void FUN_00015890(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_000158c8;
  piVar1 = (int *)(DAT_000158c8 + 0x4c);
  *(undefined4 *)(DAT_000158c8 + 0x48) = 0;
  if (*piVar1 != 0) {
    alarm(0);
    *(undefined4 *)(iVar2 + 0x4c) = 0;
  }
  for (iVar6 = 0; iVar6 < *(int *)(iVar2 + 0x40); iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(iVar2 + 0x44);
    iVar4 = iVar6 * 0x10;
    iVar5 = iVar3 + iVar4;
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(undefined4 *)(iVar5 + 0xc) = 0;
      (**(code **)(iVar5 + 8))
                (*(undefined4 *)(iVar3 + iVar4),*(undefined4 *)(iVar5 + 4),iVar4,iVar5,in_r3);
    }
  }
  return;
}



/* ===== FUN_000158cc @ 000158cc size=26 ===== */

undefined4 FUN_000158cc(void)

{
  void *pvVar1;
  
  pvVar1 = memset(DAT_000158e8,0,0x54);
  *(int *)((int)pvVar1 + 0x38) = (int)pvVar1 + 0x38;
  *(int *)((int)pvVar1 + 0x3c) = (int)pvVar1 + 0x38;
  return 0;
}



/* ===== FUN_000158ec @ 000158ec size=4 ===== */

undefined4 FUN_000158ec(void)

{
  return 0;
}



/* ===== FUN_000158f0 @ 000158f0 size=126 ===== */

undefined4 FUN_000158f0(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  void *pvVar2;
  uint extraout_r1;
  int iVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  int *unaff_r4;
  
  iVar4 = param_4;
  if (param_1 < 0) {
    __assert(DAT_00015978,DAT_00015974,0x2ea);
    param_2 = extraout_r1;
    iVar4 = extraout_r3;
  }
  piVar1 = DAT_0001597c;
  iVar3 = DAT_00015980;
  if (2 < param_2) {
    unaff_r4 = (int *)0x0;
    iVar3 = iVar4;
  }
  if (param_2 < 3) {
    unaff_r4 = *(int **)(iVar3 + param_2 * 4 + 0x30);
  }
  iVar4 = *DAT_0001597c;
  if (*DAT_0001597c < param_1) {
    iVar4 = param_1;
  }
  if (unaff_r4 != (int *)0x0) {
    if ((*unaff_r4 + 1U >> 0x1c == 0) &&
       (pvVar2 = realloc((void *)unaff_r4[1],(*unaff_r4 + 1U) * 0x10), pvVar2 != (void *)0x0)) {
      iVar5 = *unaff_r4;
      iVar3 = iVar5 * 0x10;
      *(int *)((int)pvVar2 + iVar3) = param_1;
      *(int *)((int)pvVar2 + iVar3 + 4) = param_4;
      *(undefined4 *)((int)pvVar2 + iVar3 + 8) = param_5;
      *(undefined4 *)((int)pvVar2 + iVar3 + 0xc) = param_3;
      *unaff_r4 = iVar5 + 1;
      unaff_r4[1] = (int)pvVar2;
      *piVar1 = iVar4;
      piVar1[1] = piVar1[1] + 1;
      unaff_r4[3] = 1;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00015984 @ 00015984 size=20 ===== */

void FUN_00015984(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000158f0(param_1,0,param_2,param_3,param_4,param_2,param_3);
  return;
}



/* ===== FUN_000159fc @ 000159fc size=98 ===== */

void FUN_000159fc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_000159f4 + 0x30);
  if (((piVar3 != (int *)0x0) && (iVar4 = piVar3[1], iVar4 != 0)) && (iVar1 = *piVar3, iVar1 != 0))
  {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (param_1 == *(int *)(iVar4 + iVar2 * 0x10)) goto LAB_000159c2;
    }
    if (iVar1 != iVar2) {
LAB_000159c2:
      if (iVar2 != iVar1 + -1) {
        memmove((void *)(iVar2 * 0x10 + iVar4),(void *)(iVar2 * 0x10 + 0x10 + iVar4),
                ((iVar1 - iVar2) + -1) * 0x10);
      }
      iVar4 = DAT_000159f8;
      *piVar3 = *piVar3 + -1;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1;
      piVar3[3] = 1;
    }
  }
  return;
}



/* ===== FUN_00015a02 @ 00015a02 size=168 ===== */

undefined4 FUN_00015a02(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_4;
  __ptr = (int *)FUN_000155fa(0x1c);
  if (__ptr != (int *)0x0) {
    iVar1 = FUN_000152f4(__ptr + 2);
    if (-1 < iVar1) {
      iVar1 = __ptr[2];
      __ptr[2] = iVar1 + param_1;
      if (iVar1 + param_1 < iVar1) {
        FUN_00013ef8(2,DAT_00015aac,param_1,iVar1,iVar3);
        free(__ptr);
      }
      else {
        __ptr[3] = __ptr[3] + param_2;
        iVar3 = DAT_00015ab0;
        while (iVar3 < __ptr[3]) {
          __ptr[3] = __ptr[3] + -1000000;
          __ptr[2] = __ptr[2] + 1;
        }
        __ptr[4] = param_4;
        __ptr[5] = param_5;
        __ptr[6] = param_3;
        iVar3 = DAT_00015ab4;
        iVar1 = DAT_00015ab4 + 0x38;
        for (piVar4 = *(int **)(DAT_00015ab4 + 0x38); piVar4 != (int *)iVar1;
            piVar4 = (int *)*piVar4) {
          iVar2 = FUN_00015704(__ptr + 2,piVar4 + 2);
          if (iVar2 != 0) {
            piVar4 = (int *)piVar4[1];
            goto LAB_00015a9a;
          }
        }
        piVar4 = *(int **)(iVar3 + 0x3c);
LAB_00015a9a:
        iVar3 = *piVar4;
        *__ptr = iVar3;
        __ptr[1] = (int)piVar4;
        *(int **)(iVar3 + 4) = __ptr;
        *piVar4 = (int)__ptr;
      }
      return 0;
    }
    free(__ptr);
  }
  return 0xffffffff;
}



/* ===== FUN_00015ab8 @ 00015ab8 size=70 ===== */

int FUN_00015ab8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)(DAT_00015b00 + 0x38);
  puVar2 = (undefined4 *)*puVar1;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar2 != puVar1) {
    if (((puVar2[6] == param_1) && ((puVar2[4] == param_2 || (param_2 == -1)))) &&
       ((puVar2[5] == param_3 || (param_3 == -1)))) {
      FUN_0001574a();
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  }
  return iVar3;
}



/* ===== FUN_00015b04 @ 00015b04 size=102 ===== */

undefined4 FUN_00015b04(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iStack_28 = param_1;
  iStack_24 = param_2;
  iStack_20 = param_3;
  FUN_000152f4(&iStack_28);
  iVar1 = DAT_00015b6c;
  *param_4 = 0;
  param_4[1] = 0;
  puVar2 = *(undefined4 **)(iVar1 + 0x38);
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar2 == (undefined4 *)(iVar1 + 0x38)) {
      return 0;
    }
    if (((puVar2[6] == param_1) && (puVar2[4] == param_2)) && (puVar2[5] == param_3)) break;
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  }
  iVar1 = FUN_00015704(&iStack_28,puVar2 + 2);
  if (iVar1 != 0) {
    FUN_00015724(puVar2 + 2,&iStack_28,param_4);
  }
  FUN_0001574a(puVar2);
  return 1;
}



/* ===== FUN_00015c98 @ 00015c98 size=70 ===== */

undefined4 FUN_00015c98(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_00015ce0;
  uVar4 = *(int *)(DAT_00015ce0 + 0x40) + 1;
  if ((uVar4 >> 0x1c == 0) &&
     (pvVar2 = realloc(*(void **)(DAT_00015ce0 + 0x44),uVar4 * 0x10), pvVar2 != (void *)0x0)) {
    iVar6 = *(int *)(iVar1 + 0x40);
    iVar5 = iVar6 * 0x10;
    *(int *)((int)pvVar2 + iVar5) = param_1;
    *(undefined4 *)((int)pvVar2 + iVar5 + 4) = param_3;
    *(undefined4 *)((int)pvVar2 + iVar5 + 8) = param_2;
    *(undefined4 *)((int)pvVar2 + iVar5 + 0xc) = 0;
    *(int *)(iVar1 + 0x40) = iVar6 + 1;
    *(void **)(iVar1 + 0x44) = pvVar2;
    signal(param_1,DAT_00015ce4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00015ce8 @ 00015ce8 size=34 ===== */

void FUN_00015ce8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00015c98(2,param_1,param_2);
  if (iVar1 == 0) {
    FUN_00015c98(0xf,param_1,param_2,param_4);
    return;
  }
  return;
}



/* ===== FUN_00015d14 @ 00015d14 size=404 ===== */

void FUN_00015d14(void)

{
  int *piVar1;
  fd_set *__readfds;
  fd_set *__writefds;
  fd_set *__exceptfds;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  timeval *__timeout;
  int *piVar9;
  timeval local_40;
  __time_t local_38;
  __suseconds_t local_34;
  undefined1 auStack_30 [12];
  
  __readfds = malloc(0x80);
  __writefds = malloc(0x80);
  __exceptfds = malloc(0x80);
  piVar1 = DAT_00015ea8;
  if (((__readfds != (fd_set *)0x0) && (__writefds != (fd_set *)0x0)) &&
     (__exceptfds != (fd_set *)0x0)) {
    piVar9 = DAT_00015ea8 + 0xe;
    while (((piVar1[0x14] == 0 &&
            ((((int *)piVar1[0xe] != piVar9 || (0 < piVar1[2])) ||
             ((0 < piVar1[6] || (0 < piVar1[10])))))) &&
           (((piVar1[0x13] == 0 || (piVar1[0x12] == 0)) || (FUN_00015890(), piVar1[0x14] == 0))))) {
      piVar8 = (int *)piVar1[0xe];
      if (piVar8 == piVar9) {
        piVar8 = (int *)0x0;
      }
      else if (piVar8 != (int *)0x0) {
        FUN_000152f4(auStack_30);
        iVar2 = FUN_00015704(auStack_30,piVar8 + 2);
        if (iVar2 == 0) {
          local_38 = 0;
          local_34 = 0;
        }
        else {
          FUN_00015724(piVar8 + 2,auStack_30,&local_38);
        }
        local_40.tv_sec = local_38;
        local_40.tv_usec = local_34;
      }
      FUN_000157f8(DAT_00015eac,__readfds);
      FUN_000157f8(DAT_00015eb0,__writefds);
      FUN_000157f8(DAT_00015eb4,__exceptfds);
      __timeout = (timeval *)0x0;
      if (piVar8 != (int *)0x0) {
        __timeout = &local_40;
      }
      iVar2 = select(*piVar1 + 1,__readfds,__writefds,__exceptfds,__timeout);
      if (iVar2 < 0) {
        puVar3 = (uint *)__errno_location();
        if ((*puVar3 & 0xfffffffb) != 0) {
          pcVar4 = strerror(*puVar3);
          FUN_00013ef8(5,DAT_00015ebc,DAT_00015eb8,pcVar4);
          goto LAB_0001152c;
        }
      }
      piVar1[5] = 0;
      piVar1[9] = 0;
      piVar1[0xd] = 0;
      if (piVar1[0x12] != 0) {
        FUN_00015890();
      }
      piVar8 = (int *)piVar1[0xe];
      if ((piVar8 != piVar9) && (piVar8 != (int *)0x0)) {
        FUN_000152f4(auStack_30);
        iVar5 = FUN_00015704(auStack_30,piVar8 + 2);
        if (iVar5 == 0) {
          iVar6 = piVar8[4];
          iVar5 = piVar8[5];
          pcVar7 = (code *)piVar8[6];
          FUN_0001574a(piVar8);
          (*pcVar7)(iVar6,iVar5);
        }
      }
      if ((0 < iVar2) && ((piVar1[5] == 0 && piVar1[9] == 0) && piVar1[0xd] == 0)) {
        if (piVar1[3] != 0) {
          FUN_000157bc(DAT_00015eac,__readfds);
        }
        if (piVar1[7] != 0) {
          FUN_000157bc(DAT_00015eb0,__writefds);
        }
        if (piVar1[0xb] != 0) {
          FUN_000157bc(DAT_00015eb4,__exceptfds);
        }
      }
    }
    piVar1[0x14] = 0;
  }
LAB_0001152c:
  free(__readfds);
  free(__writefds);
  (*(code *)PTR_free_0002c14c)(__exceptfds);
  return;
}



/* ===== FUN_00015ec0 @ 00015ec0 size=8 ===== */

void FUN_00015ec0(void)

{
  *(undefined4 *)(DAT_00015ec8 + 0x50) = 1;
  return;
}



/* ===== FUN_00015ecc @ 00015ecc size=124 ===== */

void FUN_00015ecc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_20;
  int local_1c;
  
  iVar1 = DAT_00015f48;
  FUN_000152f4(&local_20);
  uVar2 = DAT_00015f58;
  piVar5 = *(int **)(iVar1 + 0x38);
  piVar6 = (int *)**(int **)(iVar1 + 0x38);
  while (piVar5 != (int *)(iVar1 + 0x38)) {
    iVar3 = piVar5[2] - local_20;
    iVar4 = piVar5[3] - local_1c;
    if (piVar5[3] < local_1c) {
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1000000;
    }
    FUN_00013ef8(3,uVar2,iVar3,iVar4,piVar5[4],piVar5[5],piVar5[6]);
    FUN_0001574a(piVar5);
    piVar5 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  FUN_00015854(DAT_00015f4c);
  FUN_00015854(DAT_00015f50);
  FUN_00015854(DAT_00015f54);
  free(*(void **)(iVar1 + 0x44));
  return;
}



/* ===== FUN_00015f5c @ 00015f5c size=16 ===== */

bool FUN_00015f5c(void)

{
  return *(int *)(DAT_00015f6c + 0x4c) != 0 || *(int *)(DAT_00015f6c + 0x50) != 0;
}



/* ===== FUN_00016058 @ 00016058 size=52 ===== */

undefined4
FUN_00016058(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  char *__format;
  int iVar2;
  
  puVar1 = DAT_0001608c;
  *DAT_0001608c = param_4;
  puVar1[3] = param_1;
  puVar1[1] = param_2;
  FUN_00015984(0,DAT_00016090,0,0,param_4);
  __format = DAT_00016098;
  iVar2 = DAT_00016094;
  if (param_6 != 0) {
    iVar2 = param_6;
  }
  puVar1[4] = param_6;
  printf(__format,iVar2);
  fflush((FILE *)*DAT_0001609c);
  return 0;
}



/* ===== FUN_000160a0 @ 000160a0 size=6 ===== */

void FUN_000160a0(void)

{
  FUN_000159fc(0);
  return;
}



/* ===== FUN_000160a6 @ 000160a6 size=2 ===== */

void FUN_000160a6(void)

{
  return;
}



/* ===== FUN_000160a8 @ 000160a8 size=16 ===== */

void FUN_000160a8(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000160c0;
  *(undefined1 *)(DAT_000160bc + *(int *)(DAT_000160b8 + 8)) = 0;
  (*(code *)PTR_printf_0002c020)(uVar1);
  return;
}



/* ===== _DT_FINI @ 000160c4 size=16 ===== */

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



/* ===== <EXTERNAL>::connect @ 0002e008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002e00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0002e010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002e014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0002e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0002e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 0002e024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 0002e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 0002e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0002e040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002e044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdatasync @ 0002e048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fdatasync(int __fildes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002e04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002e050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

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



/* ===== <EXTERNAL>::clock_gettime @ 0002e058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0002e05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0002e060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0002e064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002e068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0002e06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002e070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002e074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002e078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002e07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002e080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 0002e084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002e088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002e08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002e090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002e094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002e098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002e09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 0002e0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0002e0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002e0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002e0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 0002e0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002e0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002e0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 0002e0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0002e0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 0002e0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002e0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002e0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002e0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002e0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 0002e0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0002e0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002e0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002e0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002e0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002e0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002e0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002e0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0002e0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 0002e0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0002e100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0002e104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0002e108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002e10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0002e110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0002e114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002e118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002e11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002e120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0002e124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002e128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0002e12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002e130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002e134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002e138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0002e13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0002e140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0002e144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


