// wpa_cli_rtk — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010e74 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002800c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00028010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00010eb0 size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00028014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00010eb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00028014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010ec4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00028018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00028020)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 00010eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00028024)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 00010ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00028028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002802c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00028030)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpid @ 00010f2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00028038)();
  return _Var1;
}



/* ===== <EXTERNAL>::memcpy @ 00010f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002803c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00028040)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010f54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00028044)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00010f60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00028048)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010f6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002804c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010f78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00028050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00010f84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00028054)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00010f90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00028058)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010f9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0002805c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010fa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00028060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00010fb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_00028064)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 00010fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00028068)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 00010fcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002806c)();
  return;
}



/* ===== <EXTERNAL>::alarm @ 00010fd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00028070)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00010fe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00028074)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002807c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 0001100c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00028080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011018 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00028084)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00011024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00028088)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 00011030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0002808c)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001103c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00028090)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::signal @ 00011048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00028094)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00028098)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002809c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011070 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000280a0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 0001107c size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000280a4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 00011080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000280a4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 0001108c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_000280a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000280ac)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 000110a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_000280b0)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000110b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000280b4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000110bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000280b8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 000110d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000280c0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000110e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000280c4)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000280c8)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000280cc)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00011108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000280d0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000280d4)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000280d8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000280dc)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000280e0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_000280e4)(__buf);
  return pcVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000280e8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000280ec)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000280f0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::gmtime @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_000280f4)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::daemon @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_000280f8)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000280fc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00028100)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::closedir @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00028104)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000111b0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00028108)();
  return;
}



/* ===== <EXTERNAL>::close @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002810c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000111cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00028110)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000111d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00028114)(__filename);
  return pFVar1;
}



/* ===== entry @ 000114e0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000280bc)
            (DAT_00011514,param_2,&stack0x00000004,DAT_00011518,DAT_00011510,param_1);
  return;
}



/* ===== FUN_0001151c @ 0001151c size=32 ===== */

void FUN_0001151c(void)

{
  if (DAT_00011540 == DAT_0001153c) {
    return;
  }
  if (DAT_00011544 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011544)();
  return;
}



/* ===== _FINI_0 @ 00011580 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000115bc;
  if (*DAT_000115bc != '\0') {
    return;
  }
  FUN_0001151c();
  if (DAT_000115c0 != 0) {
    __deregister_frame_info(DAT_000115c4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000115c8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000115ec != 0) {
    __register_frame_info(DAT_000115f4,DAT_000115f0);
  }
  if ((DAT_00011578 - DAT_00011574 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001157c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001157c)();
  return;
}



/* ===== FUN_00011618 @ 00011618 size=170 ===== */

undefined4 FUN_00011618(undefined4 param_1,char *param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 local_1024;
  undefined1 auStack_1020 [4100];
  
  piVar1 = DAT_000116d8;
  if (*DAT_000116d8 == 0) {
    puts(DAT_000116c4);
  }
  else {
    local_1024 = 0xfff;
    sVar2 = strlen(param_2);
    iVar3 = FUN_000130d6(param_1,param_2,sVar2,auStack_1020,&local_1024,DAT_000116c8);
    if (iVar3 == -2) {
      printf(DAT_000116cc,param_2);
      return 0xfffffffe;
    }
    if (-1 < iVar3) {
      if (param_3 != 0) {
        auStack_1020[local_1024] = 0;
        printf(DAT_000116d4,auStack_1020);
        if (((piVar1[1] != 0) && (local_1024 != 0)) && (auStack_1020[local_1024 + -1] != '\n')) {
          putchar(10);
          return 0;
        }
      }
      return 0;
    }
    printf(DAT_000116d0,param_2);
  }
  return 0xffffffff;
}



/* ===== FUN_000116dc @ 000116dc size=4 ===== */

void FUN_000116dc(undefined4 param_1,undefined4 param_2)

{
  FUN_00011618(param_1,param_2,1);
  return;
}



/* ===== FUN_00011f60 @ 00011f60 size=80 ===== */

undefined4 FUN_00011f60(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *__s;
  uint uVar1;
  undefined4 uVar2;
  char acStack_110 [260];
  
  if (param_2 == 0) {
    puts(PTR_s_set_network_variables__ssid__net_00011fb0);
    uVar2 = 0;
  }
  else {
    __s = PTR_s_Invalid_SET_NETWORK_command__nee_00011fb4;
    if ((param_2 == 3) &&
       (uVar1 = snprintf(acStack_110,0x100,PTR_s_SET_NETWORK__s__s__s_00011fb8,*param_3,param_3[1],
                         param_3[2]), __s = PTR_s_Too_long_SET_NETWORK_command__00011fbc,
       uVar1 < 0xff)) {
      uVar2 = FUN_000116dc(param_1,acStack_110);
    }
    else {
      puts(__s);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_000124d4 @ 000124d4 size=82 ===== */

undefined4 FUN_000124d4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *__s;
  uint uVar1;
  undefined4 uVar2;
  char acStack_110 [260];
  
  if (param_2 == 0) {
    puts(PTR_s_set_variables__EAPOL_heldPeriod_00012528);
    puts(PTR_s_dot11RSNAConfigPMKLifetime__WPA__0001252c);
    uVar2 = 0;
  }
  else {
    __s = PTR_s_Invalid_SET_command__needs_two_a_00012530;
    if ((param_2 == 2) &&
       (uVar1 = snprintf(acStack_110,0x100,PTR_s_SET__s__s_00012534,*param_3,param_3[1]),
       __s = PTR_s_Too_long_SET_command__00012538, uVar1 < 0xff)) {
      uVar2 = FUN_000116dc(param_1,acStack_110);
    }
    else {
      puts(__s);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00012580 @ 00012580 size=44 ===== */

undefined4 FUN_00012580(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char acStack_108 [256];
  
  if ((param_2 == 0) || (uVar2 = snprintf(acStack_108,0x100,DAT_000125ac,*param_3), 0xff < uVar2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_000116dc(param_1,acStack_108);
  }
  return uVar1;
}



/* ===== FUN_00012678 @ 00012678 size=58 ===== */

void FUN_00012678(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000126b4;
  iVar2 = *DAT_000126b4;
  if (iVar2 != 0) {
    if (DAT_000126b4[3] != 0) {
      if (DAT_000126b4[1] != 0) {
        iVar2 = DAT_000126b4[4];
      }
      FUN_000131f4(iVar2);
      piVar1[3] = 0;
    }
    FUN_000130b4(*piVar1);
    *piVar1 = 0;
    if (piVar1[4] != 0) {
      FUN_00013274();
      FUN_00013834();
      FUN_000130b4(piVar1[4]);
      piVar1[4] = 0;
    }
  }
  return;
}



/* ===== FUN_000126b8 @ 000126b8 size=178 ===== */

undefined4 FUN_000126b8(char *param_1,int param_2)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  int iVar4;
  undefined4 uVar5;
  char *__s_00;
  
  if (param_1 != (char *)0x0) {
    __s_00 = (char *)*DAT_0001276c;
    iVar4 = param_2;
    sVar2 = strlen(__s_00);
    sVar3 = strlen(param_1);
    sVar2 = sVar2 + sVar3 + 2;
    __s = malloc(sVar2);
    if (__s != (char *)0x0) {
      iVar4 = snprintf(__s,sVar2,DAT_00012770,__s_00,param_1,iVar4);
      piVar1 = DAT_00012774;
      if ((-1 < iVar4) && (iVar4 < (int)sVar2)) {
        iVar4 = FUN_00012fe8(__s);
        *piVar1 = iVar4;
        if (iVar4 != 0) {
          if ((param_2 == 0) || (piVar1[1] == 0)) {
            piVar1[4] = 0;
          }
          else {
            iVar4 = FUN_00012fe8(__s);
            piVar1[4] = iVar4;
          }
          free(__s);
          if (piVar1[4] != 0) {
            iVar4 = FUN_000131f0();
            if (iVar4 != 0) {
              puts(DAT_0001277c);
              return 0xffffffff;
            }
            piVar1[3] = 1;
            if (piVar1[1] != 0) {
              uVar5 = FUN_00013274(piVar1[4]);
              FUN_000137c8(uVar5,DAT_00012778,0,0);
              return 0;
            }
          }
          return 0;
        }
      }
      free(__s);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00012780 @ 00012780 size=18 ===== */

void FUN_00012780(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  FUN_00012678();
  FUN_000126b8(*(undefined4 *)(DAT_00012794 + 0x14),1,extraout_r2,in_r3);
  return;
}



/* ===== FUN_00012808 @ 00012808 size=30 ===== */

bool FUN_00012808(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  return iVar1 == 0;
}



/* ===== FUN_00012826 @ 00012826 size=438 ===== */

int FUN_00012826(char *param_1)

{
  byte bVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *__s;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *__s_00;
  byte *__nptr;
  char *__s_01;
  byte *pbVar9;
  undefined4 unaff_r4;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 unaff_r5;
  uint __size;
  undefined4 unaff_r6;
  int iVar12;
  
  if ((*param_1 == '<') && (pcVar6 = strchr(param_1,0x3e), pcVar6 != (char *)0x0)) {
    param_1 = pcVar6 + 1;
  }
  iVar7 = FUN_00012808(param_1,DAT_00012970);
  if (iVar7 == 0) {
    iVar12 = FUN_00012808(param_1,DAT_00012990);
    iVar7 = DAT_00012988;
    if (iVar12 == 0) {
      iVar12 = FUN_00012808(param_1,DAT_00012998);
      iVar7 = DAT_00012988;
      if (((((iVar12 == 0) &&
            (iVar12 = FUN_00012808(param_1,DAT_0001299c), iVar7 = DAT_00012988, iVar12 == 0)) &&
           (iVar12 = FUN_00012808(param_1,DAT_000129a0), iVar7 = DAT_00012988, iVar12 == 0)) &&
          ((iVar12 = FUN_00012808(param_1,DAT_000129a4), iVar7 = DAT_00012988, iVar12 == 0 &&
           (iVar12 = FUN_00012808(param_1,DAT_000129a8), iVar7 = DAT_00012988, iVar12 == 0)))) &&
         (iVar12 = FUN_00012808(param_1,DAT_000129ac), iVar7 = DAT_00012988, iVar12 == 0)) {
        iVar7 = FUN_00012808(param_1,DAT_000129b0);
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = puts(DAT_000129b4);
        *(undefined4 *)(DAT_00012988 + 8) = 1;
        return iVar7;
      }
    }
    else {
      if (*(int *)(DAT_00012988 + 0x18) == 0) {
        return iVar12;
      }
      *(undefined4 *)(DAT_00012988 + 0x18) = 0;
      param_1 = DAT_00012994;
    }
  }
  else {
    unsetenv(DAT_00012974);
    unsetenv(DAT_00012978);
    unsetenv(DAT_0001297c);
    pcVar6 = strstr(param_1,DAT_00012980);
    if ((pcVar6 == (char *)0x0) ||
       (__nptr = (byte *)strdup(pcVar6 + 4), pbVar10 = __nptr, __nptr == (byte *)0x0)) {
      iVar12 = -1;
    }
    else {
      do {
        pbVar9 = pbVar10;
        pbVar10 = pbVar9 + 1;
      } while ((*pbVar9 & 0xdf) != 0);
      *pbVar9 = *pbVar9 & 0xdf;
      iVar12 = atoi((char *)__nptr);
      setenv(DAT_00012974,(char *)__nptr,1);
      do {
        pbVar11 = pbVar10 + 1;
        bVar1 = *pbVar10;
        pbVar9 = pbVar10;
        if (bVar1 == 0) break;
        pbVar10 = pbVar11;
        pbVar9 = pbVar11;
      } while (bVar1 != 0x3d);
      do {
        pbVar11 = pbVar10;
        if (*pbVar11 == 0) break;
        pbVar10 = pbVar11 + 1;
      } while (*pbVar11 != 0x5d);
      *pbVar11 = 0;
      setenv(DAT_00012978,(char *)pbVar9,1);
      free(__nptr);
    }
    iVar8 = setenv(DAT_0001297c,(char *)*DAT_00012984,1);
    iVar7 = DAT_00012988;
    if ((*(int *)(DAT_00012988 + 0x18) != 0) && (*(int *)(DAT_00012988 + 0x1c) == iVar12)) {
      return iVar8;
    }
    *(undefined4 *)(DAT_00012988 + 0x18) = 1;
    *(int *)(iVar7 + 0x1c) = iVar12;
    param_1 = DAT_0001298c;
  }
  __s_01 = *(char **)(iVar7 + 0x14);
  __s_00 = *(char **)(iVar7 + 0x20);
  pcVar6 = param_1;
  sVar2 = strlen(__s_00);
  sVar3 = strlen(__s_01);
  sVar4 = strlen(param_1);
  iVar7 = sVar2 + sVar3 + sVar4;
  __size = iVar7 + 3;
  __s = malloc(__size);
  if (__s != (char *)0x0) {
    uVar5 = snprintf(__s,__size,DAT_00012804,__s_00,__s_01,param_1,pcVar6,unaff_r4,unaff_r5,unaff_r6
                    );
    if ((-1 < (int)uVar5) && (uVar5 < __size)) {
      __s[iVar7 + 2] = '\0';
      iVar7 = system(__s);
      free(__s);
      return iVar7 >> 0x1f;
    }
    free(__s);
  }
  return -1;
}



/* ===== FUN_00012a0c @ 00012a0c size=92 ===== */

uint FUN_00012a0c(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  size_t __n;
  int iVar5;
  int iVar6;
  
  pcVar2 = strchr(param_2,0x20);
  if (pcVar2 == (char *)0x0) {
    __n = strlen(param_2);
  }
  else {
    __n = (int)pcVar2 - (int)param_2;
  }
  iVar1 = DAT_00012a68;
  iVar5 = 0;
  iVar6 = DAT_00012a68 + 8;
  while( true ) {
    pcVar2 = *(char **)(iVar5 * 0x10 + iVar6);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    iVar3 = strncasecmp(param_2,pcVar2,__n);
    if ((iVar3 == 0) && (sVar4 = strlen(pcVar2), sVar4 == __n)) break;
    iVar5 = iVar5 + 1;
  }
  return *(uint *)(iVar1 + iVar5 * 0x10 + 0x10) & 1;
}



/* ===== FUN_00012a6c @ 00012a6c size=166 ===== */

undefined4 FUN_00012a6c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char *__s;
  char *pcVar8;
  
  iVar6 = 0;
  puVar7 = (undefined4 *)0x0;
  for (puVar4 = DAT_00012b14; pcVar8 = (char *)*puVar4, pcVar8 != (char *)0x0; puVar4 = puVar4 + 4)
  {
    pcVar5 = (char *)*param_3;
    sVar2 = strlen(pcVar5);
    iVar1 = strncasecmp(pcVar8,pcVar5,sVar2);
    if (iVar1 == 0) {
      iVar1 = strcasecmp(pcVar8,pcVar5);
      if (iVar1 == 0) goto LAB_00012b00;
      iVar6 = iVar6 + 1;
      puVar7 = puVar4;
    }
  }
  if (iVar6 < 2) {
    puVar4 = puVar7;
    if (iVar6 != 0) {
LAB_00012b00:
                    /* WARNING: Could not recover jumptable at 0x00012b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)puVar4[1])(param_1,param_2 + -1,param_3 + 1);
      return uVar3;
    }
    printf(DAT_00012b1c,*param_3);
  }
  else {
    printf(DAT_00012b18,*param_3);
    pcVar8 = DAT_00012b20;
    for (puVar4 = DAT_00012b14; pcVar5 = (char *)*puVar4, pcVar5 != (char *)0x0; puVar4 = puVar4 + 4
        ) {
      __s = (char *)*param_3;
      sVar2 = strlen(__s);
      iVar6 = strncasecmp(pcVar5,__s,sVar2);
      if (iVar6 == 0) {
        printf(pcVar8,pcVar5);
      }
    }
    putchar(10);
  }
  return 1;
}



/* ===== FUN_00012b84 @ 00012b84 size=26 ===== */

void FUN_00012b84(void)

{
  FUN_00012678();
  if (*(int *)(DAT_00012b9c + 0x24) != 0) {
    FUN_000134b0();
  }
  return;
}



/* ===== FUN_00012bdc @ 00012bdc size=76 ===== */

undefined4 FUN_00012bdc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *__s;
  uint uVar1;
  undefined4 uVar2;
  char acStack_108 [256];
  
  __s = PTR_s_Invalid_WPS_PIN_command__need_on_00012c28;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = snprintf(acStack_108,0x100,PTR_s_WPS_PIN__s_00012c2c,*param_3);
    }
    else {
      uVar1 = snprintf(acStack_108,0x100,PTR_s_WPS_PIN__s__s_00012c34,*param_3,param_3[1]);
    }
    __s = PTR_s_Too_long_WPS_PIN_command__00012c30;
    if (uVar1 < 0xff) {
      uVar2 = FUN_000116dc(param_1,acStack_108);
      return uVar2;
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_00012c38 @ 00012c38 size=54 ===== */

undefined4 FUN_00012c38(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  char acStack_108 [256];
  
  pcVar3 = PTR_s_WPS_PBC_00012c70;
  if ((param_2 == 0) ||
     (uVar2 = snprintf(acStack_108,0x100,PTR_s_WPS_PBC__s_00012c74,*param_3), pcVar3 = acStack_108,
     uVar2 < 0xff)) {
    uVar1 = FUN_000116dc(param_1,pcVar3);
  }
  else {
    puts(PTR_s_Too_long_WPS_PBC_command__00012c78);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00012cd8 @ 00012cd8 size=150 ===== */

void FUN_00012cd8(undefined4 param_1,int param_2)

{
  char *__format;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_124;
  char acStack_120 [256];
  
  uVar2 = DAT_00012d80;
  uVar1 = DAT_00012d7c;
  __format = DAT_00012d78;
LAB_00012cee:
  do {
    iVar3 = FUN_00013210(param_1);
    if (iVar3 < 1) {
LAB_00012d54:
      iVar3 = FUN_00013210(param_1);
      if (iVar3 < 0) {
        puts(DAT_00012d74);
        FUN_00012780();
      }
      return;
    }
    local_124 = 0xff;
    iVar3 = FUN_000131f8(param_1,acStack_120,&local_124);
    if (iVar3 != 0) {
      puts(DAT_00012d70);
      goto LAB_00012d54;
    }
    acStack_120[local_124] = '\0';
    if (param_2 == 0) {
      pcVar4 = strchr(acStack_120,0x3e);
      if (pcVar4 != (char *)0x0) break;
      goto LAB_00012d3c;
    }
    FUN_00012826(acStack_120);
  } while( true );
  iVar3 = FUN_00012808(pcVar4 + 1,uVar1);
  if ((iVar3 == 0) && (iVar3 = FUN_00012808(pcVar4 + 1,uVar2), iVar3 == 0)) {
LAB_00012d3c:
    FUN_00013cda();
    printf(__format,acStack_120);
    FUN_00013cdc();
  }
  goto LAB_00012cee;
}



/* ===== FUN_00012d98 @ 00012d98 size=148 ===== */

int FUN_00012d98(undefined4 param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  int iVar2;
  char *__s2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar1 = strchr(param_2,0x20);
  if ((pcVar1 == (char *)0x0) || (param_2 + param_3 < pcVar1)) {
    iVar2 = FUN_00013624(0x128);
    if (iVar2 != 0) {
      puVar6 = (undefined4 *)(iVar2 + -4);
      puVar5 = DAT_00012e2c;
      do {
        if ((char *)*puVar5 == (char *)0x0) {
          return iVar2;
        }
        pcVar1 = strdup((char *)*puVar5);
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 1;
        *puVar6 = pcVar1;
      } while (pcVar1 != (char *)0x0);
      return iVar2;
    }
  }
  else {
    __s2 = malloc(param_3 + 1);
    if (__s2 != (char *)0x0) {
      memcpy(__s2,param_2,param_3);
      iVar2 = DAT_00012e30;
      iVar4 = 0;
      __s2[(int)pcVar1 - (int)param_2] = '\0';
      while( true ) {
        pcVar1 = *(char **)(iVar4 * 0x10 + iVar2 + 8);
        if (pcVar1 == (char *)0x0) break;
        iVar3 = strcasecmp(pcVar1,__s2);
        if (iVar3 == 0) {
          FUN_00013cda();
          printf(DAT_00012e34,*(undefined4 *)(iVar2 + iVar4 * 0x10 + 0x14));
          FUN_00013cdc();
          break;
        }
        iVar4 = iVar4 + 1;
      }
      free(__s2);
    }
  }
  return 0;
}



/* ===== FUN_00012e38 @ 00012e38 size=78 ===== */

void FUN_00012e38(void)

{
  undefined4 uVar1;
  char *__format;
  char *__format_00;
  int *piVar2;
  uint __c;
  int iVar3;
  
  puts(DAT_00012e88);
  __format_00 = DAT_00012e98;
  __format = DAT_00012e94;
  uVar1 = DAT_00012e90;
  for (piVar2 = DAT_00012e8c; *piVar2 != 0; piVar2 = piVar2 + 4) {
    printf(__format,uVar1);
    for (iVar3 = 0; __c = (uint)*(byte *)(piVar2[3] + iVar3), __c != 0; iVar3 = iVar3 + 1) {
      putchar(__c);
      if (__c == 10) {
        printf(__format_00,uVar1);
      }
    }
    putchar(10);
  }
  return;
}



/* ===== FUN_00012ea6 @ 00012ea6 size=202 ===== */

void FUN_00012ea6(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  __fd_mask *p_Var5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_1b4;
  timeval local_1b0;
  __fd_mask a_Stack_1a8 [32];
  undefined1 auStack_128 [260];
  
  uVar3 = FUN_00013274();
  iVar2 = DAT_00012f88;
  piVar1 = DAT_00012f84;
  uVar8 = uVar3 >> 5;
  uVar7 = 1 << (uVar3 & 0x1f);
  while( true ) {
    local_1b0.tv_usec = piVar1[2];
    if (local_1b0.tv_usec != 0) {
      return;
    }
    iVar6 = 0;
    p_Var5 = a_Stack_1a8;
    do {
      iVar6 = iVar6 + 1;
      *p_Var5 = 0;
      p_Var5 = p_Var5 + 1;
    } while (iVar6 != 0x20);
    local_1b0.tv_sec = *(__time_t *)(iVar2 + 4);
    a_Stack_1a8[uVar8] = a_Stack_1a8[uVar8] | uVar7;
    iVar6 = select(uVar3 + 1,(fd_set *)a_Stack_1a8,(fd_set *)0x0,(fd_set *)0x0,&local_1b0);
    if ((iVar6 < 0) && (piVar4 = __errno_location(), *piVar4 != 4)) break;
    if ((uVar7 & a_Stack_1a8[uVar8]) == 0) {
      local_1b4 = 0xff;
      iVar6 = FUN_000130d6(param_1,DAT_00012f78,4,auStack_128,&local_1b4,DAT_00012f74);
      if (((iVar6 < 0) || (local_1b4 < 4)) ||
         (iVar6 = memcmp(auStack_128,DAT_00012f7c,4), iVar6 != 0)) {
        puts(DAT_00012f80);
        return;
      }
    }
    else if (*piVar1 == 0) {
      FUN_00012780();
    }
    else {
      FUN_00012cd8(param_1,1);
    }
  }
  perror(DAT_00012f70);
  return;
}



/* ===== FUN_00012f8c @ 00012f8c size=76 ===== */

undefined4 FUN_00012f8c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *__s;
  uint uVar1;
  undefined4 uVar2;
  char acStack_110 [260];
  
  if (param_2 == 0) {
    puts(DAT_00012fd8);
    uVar2 = 0;
  }
  else {
    __s = DAT_00012fdc;
    if ((param_2 == 2) &&
       (uVar1 = snprintf(acStack_110,0x100,DAT_00012fe0,*param_3,param_3[1]), __s = DAT_00012fe4,
       uVar1 < 0xff)) {
      uVar2 = FUN_000116dc(param_1,acStack_110);
    }
    else {
      puts(__s);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00012fe8 @ 00012fe8 size=194 ===== */

int * FUN_00012fe8(undefined4 param_1)

{
  int *piVar1;
  char *__format;
  int *__s;
  int iVar2;
  __pid_t _Var3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *__s_00;
  
  __s = malloc(0xe0);
  if (__s != (int *)0x0) {
    memset(__s,0,0xe0);
    iVar2 = socket(1,2,0);
    *__s = iVar2;
    __format = DAT_000130b0;
    piVar1 = DAT_000130ac;
    if (-1 < iVar2) {
      __s_00 = (char *)((int)__s + 6);
      iVar2 = 2;
      *(undefined2 *)(__s + 1) = 1;
      *piVar1 = *piVar1 + 1;
      while( true ) {
        _Var3 = getpid();
        snprintf(__s_00,0x6c,__format,_Var3,*piVar1);
        iVar4 = bind(*__s,(sockaddr *)(__s + 1),0x6e);
        if (-1 < iVar4) break;
        piVar5 = __errno_location();
        if ((*piVar5 != 0x62) || (iVar2 == 1)) goto LAB_00013084;
        iVar2 = 1;
        unlink(__s_00);
      }
      *(undefined2 *)((int)__s + 0x72) = 1;
      uVar6 = FUN_0001362c(__s + 0x1d,param_1,0x6c);
      if (uVar6 < 0x6c) {
        iVar2 = connect(*__s,(sockaddr *)((int)__s + 0x72),0x6e);
        if (-1 < iVar2) {
          return __s;
        }
        close(*__s);
        unlink(__s_00);
      }
      else {
LAB_00013084:
        close(*__s);
      }
    }
    free(__s);
  }
  return (int *)0x0;
}



/* ===== FUN_000130b4 @ 000130b4 size=36 ===== */

void FUN_000130b4(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  unlink((char *)((int)param_1 + 6));
  if (-1 < *param_1) {
    close(*param_1);
  }
  (*(code *)PTR_free_00028110)(param_1);
  return;
}



/* ===== FUN_000130d6 @ 000130d6 size=198 ===== */

size_t FUN_000130d6(uint *param_1,void *param_2,size_t param_3,char *param_4,size_t *param_5,
                   code *param_6)

{
  ssize_t sVar1;
  uint uVar2;
  size_t sVar3;
  __fd_mask *p_Var4;
  int iVar5;
  timeval local_a8;
  uint auStack_a0 [32];
  
  sVar1 = send(*param_1,param_2,param_3,0);
  if (sVar1 < 0) {
    sVar3 = 0xffffffff;
  }
  else {
    while( true ) {
      iVar5 = 0;
      local_a8.tv_sec = 10;
      local_a8.tv_usec = 0;
      p_Var4 = (__fd_mask *)auStack_a0;
      do {
        iVar5 = iVar5 + 1;
        *p_Var4 = 0;
        p_Var4 = p_Var4 + 1;
      } while (iVar5 != 0x20);
      uVar2 = *param_1;
      auStack_a0[uVar2 >> 5] = 1 << (uVar2 & 0x1f) | auStack_a0[uVar2 >> 5];
      sVar3 = select(uVar2 + 1,(fd_set *)auStack_a0,(fd_set *)0x0,(fd_set *)0x0,&local_a8);
      if ((int)sVar3 < 0) {
        return sVar3;
      }
      uVar2 = *param_1;
      if (-1 < ((int)auStack_a0[uVar2 >> 5] >> (uVar2 & 0x1f)) << 0x1f) {
        return 0xfffffffe;
      }
      sVar3 = recv(uVar2,param_4,*param_5,0);
      if ((int)sVar3 < 0) {
        return sVar3;
      }
      if ((sVar3 == 0) || (*param_4 != '<')) break;
      if (param_6 != (code *)0x0) {
        if (*param_5 == sVar3) {
          sVar3 = sVar3 - 1;
        }
        param_4[sVar3] = '\0';
        (*param_6)(param_4,sVar3);
      }
    }
    *param_5 = sVar3;
    sVar3 = 0;
  }
  return sVar3;
}



/* ===== FUN_000131f0 @ 000131f0 size=76 ===== */

/* WARNING: Removing unreachable block (ram,0x000131b4) */

int FUN_000131f0(undefined4 param_1)

{
  int iVar1;
  int local_20;
  undefined1 auStack_1c [16];
  
  local_20 = 10;
  iVar1 = FUN_000130d6(param_1,DAT_000131e4,6,auStack_1c,&local_20,0);
  if (-1 < iVar1) {
    if (local_20 == 3) {
      iVar1 = memcmp(auStack_1c,DAT_000131ec,3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_000131f4 @ 000131f4 size=4 ===== */

/* WARNING: Removing unreachable block (ram,0x000131b2) */

int FUN_000131f4(undefined4 param_1)

{
  int iVar1;
  int iStack_20;
  undefined1 auStack_1c [16];
  
  iStack_20 = 10;
  iVar1 = FUN_000130d6(param_1,DAT_000131e8,6,auStack_1c,&iStack_20,0);
  if (-1 < iVar1) {
    if (iStack_20 == 3) {
      iVar1 = memcmp(auStack_1c,DAT_000131ec,3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_000131f8 @ 000131f8 size=24 ===== */

size_t FUN_000131f8(int *param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  
  sVar1 = recv(*param_1,param_2,*param_3,0);
  if (-1 < (int)sVar1) {
    *param_3 = sVar1;
    sVar1 = 0;
  }
  return sVar1;
}



/* ===== FUN_00013210 @ 00013210 size=100 ===== */

uint FUN_00013210(uint *param_1)

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



/* ===== FUN_00013274 @ 00013274 size=4 ===== */

undefined4 FUN_00013274(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_000133a8 @ 000133a8 size=26 ===== */

void FUN_000133a8(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_00028034)(param_2);
  return;
}



/* ===== FUN_000133c0 @ 000133c0 size=24 ===== */

void FUN_000133c0(int *param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = (__time_t)param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_usec;
  return;
}



/* ===== FUN_000133d8 @ 000133d8 size=132 ===== */

undefined4
FUN_000133d8(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int *param_7
            )

{
  tm *ptVar1;
  int iVar2;
  time_t tVar3;
  time_t tVar4;
  time_t local_40;
  tm local_3c;
  
  if ((((param_1 < 0x7b2) || (local_3c.tm_mon = param_2 - 1, 0xb < (uint)local_3c.tm_mon)) ||
      (0x1e < param_3 - 1U)) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3c < param_6)))) {
    return 0xffffffff;
  }
  local_3c.tm_yday = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c.tm_isdst = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_3c.tm_year = param_1 + -0x76c;
  local_3c.tm_wday = 0;
  local_3c.tm_sec = param_6;
  local_3c.tm_min = param_5;
  local_3c.tm_gmtoff = 0;
  local_3c.tm_hour = param_4;
  local_3c.tm_mday = param_3;
  local_3c.tm_zone = (char *)local_3c.tm_yday;
  local_40 = mktime(&local_3c);
  ptVar1 = localtime(&local_40);
  if (ptVar1 != (tm *)0x0) {
    tVar3 = mktime(ptVar1);
    ptVar1 = gmtime(&local_40);
    if (ptVar1 != (tm *)0x0) {
      tVar4 = mktime(ptVar1);
      iVar2 = tVar4 - tVar3;
      goto LAB_00013430;
    }
  }
  iVar2 = 0;
LAB_00013430:
  *param_7 = local_40 - iVar2;
  return 0;
}



/* ===== FUN_0001345c @ 0001345c size=70 ===== */

undefined4 FUN_0001345c(char *param_1)

{
  int iVar1;
  FILE *__stream;
  __pid_t _Var2;
  undefined4 uVar3;
  
  iVar1 = daemon(0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((param_1 != (char *)0x0) &&
       (__stream = fopen64(param_1,DAT_000134a8), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,DAT_000134ac,_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror(DAT_000134a4);
  }
  return uVar3;
}



/* ===== FUN_000134b0 @ 000134b0 size=10 ===== */

void FUN_000134b0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_unlink_000280a0)();
  return;
}



/* ===== FUN_000134b8 @ 000134b8 size=60 ===== */

undefined4 FUN_000134b8(void *param_1,size_t param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  size_t sVar2;
  
  __stream = fopen64(DAT_000134f4,DAT_000134f8);
  if (__stream == (FILE *)0x0) {
    puts(DAT_000134fc);
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



/* ===== FUN_0001359c @ 0001359c size=4 ===== */

undefined4 FUN_0001359c(void)

{
  return 0;
}



/* ===== <EXTERNAL>::setenv @ 000135a2 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000280a4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 000135a6 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00028014)(__name);
  return iVar1;
}



/* ===== FUN_000135aa @ 000135aa size=118 ===== */

void * FUN_000135aa(char *param_1,size_t *param_2)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  void *__ptr;
  
  __stream = fopen64(param_1,DAT_00013620);
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



/* ===== FUN_00013624 @ 00013624 size=10 ===== */

void FUN_00013624(undefined4 param_1)

{
  (*(code *)PTR_calloc_00028078)(1,param_1);
  return;
}



/* ===== FUN_0001362c @ 0001362c size=54 ===== */

char * FUN_0001362c(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_3 == 0) {
LAB_00013658:
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
        goto LAB_00013658;
      }
      cVar1 = *pcVar3;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== FUN_00013664 @ 00013664 size=62 ===== */

void FUN_00013664(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)(param_2 + -4);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
  } while (puVar2 != (undefined4 *)(param_2 + 0x7c));
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar6 = *param_1;
    for (iVar1 = 0; iVar1 < iVar6; iVar1 = iVar1 + 1) {
      uVar3 = *(uint *)(iVar4 + iVar1 * 0x10);
      uVar5 = uVar3 >> 5;
      *(uint *)(param_2 + uVar5 * 4) = 1 << (uVar3 & 0x1f) | *(uint *)(param_2 + uVar5 * 4);
    }
  }
  return;
}



/* ===== FUN_000136a2 @ 000136a2 size=12 ===== */

void FUN_000136a2(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  (*(code *)PTR_free_00028110)();
  return;
}



/* ===== FUN_00013708 @ 00013708 size=60 ===== */

void FUN_00013708(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1[2] = 0;
  while( true ) {
    if (*param_1 <= iVar3) {
      return;
    }
    iVar2 = param_1[1] + iVar3 * 0x10;
    uVar1 = *(uint *)(param_1[1] + iVar3 * 0x10);
    if (((*(int *)(param_2 + (uVar1 >> 5) * 4) >> (uVar1 & 0x1f)) << 0x1f < 0) &&
       ((**(code **)(iVar2 + 0xc))(uVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8)),
       param_1[2] != 0)) break;
    iVar3 = iVar3 + 1;
  }
  return;
}



/* ===== FUN_00013744 @ 00013744 size=26 ===== */

undefined4 FUN_00013744(void)

{
  void *pvVar1;
  
  pvVar1 = memset(DAT_00013760,0,0x48);
  *(int *)((int)pvVar1 + 0x28) = (int)pvVar1 + 0x28;
  *(int *)((int)pvVar1 + 0x2c) = (int)pvVar1 + 0x28;
  return 0;
}



/* ===== FUN_00013764 @ 00013764 size=90 ===== */

undefined4
FUN_00013764(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (((param_2 < 3) && (piVar5 = *(int **)(DAT_000137c0 + param_2 * 4), piVar5 != (int *)0x0)) &&
     (pvVar3 = realloc((void *)piVar5[1],(*piVar5 + 1) * 0x10), pvVar3 != (void *)0x0)) {
    iVar4 = *piVar5;
    iVar6 = iVar4 * 0x10;
    *(int *)((int)pvVar3 + iVar6) = param_1;
    *(undefined4 *)((int)pvVar3 + iVar6 + 8) = param_5;
    *(undefined4 *)((int)pvVar3 + iVar6 + 0xc) = param_3;
    piVar1 = DAT_000137c4;
    *(undefined4 *)((int)pvVar3 + iVar6 + 4) = param_4;
    *piVar5 = iVar4 + 1;
    piVar5[1] = (int)pvVar3;
    uVar2 = 0;
    if (*piVar1 < param_1) {
      *piVar1 = param_1;
    }
    piVar5[2] = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000137c8 @ 000137c8 size=20 ===== */

void FUN_000137c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00013764(param_1,0,param_2,param_3,param_4,param_2,param_3);
  return;
}



/* ===== FUN_00013834 @ 00013834 size=88 ===== */

void FUN_00013834(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*DAT_00013830;
  if (((piVar3 != (int *)0x0) && (iVar4 = piVar3[1], iVar4 != 0)) && (iVar1 = *piVar3, iVar1 != 0))
  {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (param_1 == *(int *)(iVar4 + iVar2 * 0x10)) goto LAB_00013804;
    }
    if (iVar1 != iVar2) {
LAB_00013804:
      if (iVar2 != iVar1 + -1) {
        memmove((void *)(iVar2 * 0x10 + iVar4),(void *)(iVar2 * 0x10 + 0x10 + iVar4),
                ((iVar1 - iVar2) + -1) * 0x10);
      }
      *piVar3 = *piVar3 + -1;
      piVar3[2] = 1;
    }
  }
  return;
}



/* ===== FUN_0001383a @ 0001383a size=156 ===== */

undefined4 FUN_0001383a(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  __ptr = (int *)FUN_00013624(0x1c);
  if (__ptr != (int *)0x0) {
    iVar2 = FUN_000133c0(__ptr + 2);
    if (-1 < iVar2) {
      iVar2 = __ptr[2];
      param_1 = param_1 + iVar2;
      __ptr[2] = param_1;
      if (param_1 < iVar2) {
        free(__ptr);
      }
      else {
        __ptr[3] = __ptr[3] + param_2;
        iVar2 = DAT_000138d8;
        while (iVar1 = DAT_000138dc, iVar4 = __ptr[3], iVar2 < iVar4) {
          __ptr[3] = iVar4 + -1000000;
          __ptr[2] = __ptr[2] + 1;
        }
        __ptr[4] = param_4;
        __ptr[5] = param_5;
        __ptr[6] = param_3;
        for (piVar3 = *(int **)(iVar1 + 0x28); piVar3 != (int *)(iVar1 + 0x28);
            piVar3 = (int *)*piVar3) {
          if ((__ptr[2] < piVar3[2]) || ((__ptr[2] == piVar3[2] && (iVar4 < piVar3[3])))) {
            piVar3 = (int *)piVar3[1];
            goto LAB_000138be;
          }
        }
        piVar3 = *(int **)(iVar1 + 0x2c);
LAB_000138be:
        iVar2 = *piVar3;
        *__ptr = iVar2;
        __ptr[1] = (int)piVar3;
        *(int **)(iVar2 + 4) = __ptr;
        *piVar3 = (int)__ptr;
      }
      return 0;
    }
    free(__ptr);
  }
  return 0xffffffff;
}



/* ===== FUN_000138e0 @ 000138e0 size=70 ===== */

int FUN_000138e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)(DAT_00013928 + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar2 != puVar1) {
    if (((puVar2[6] == param_1) && ((puVar2[4] == param_2 || (param_2 == -1)))) &&
       ((puVar2[5] == param_3 || (param_3 == -1)))) {
      FUN_000136a2();
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  }
  return iVar3;
}



/* ===== FUN_0001392c @ 0001392c size=42 ===== */

undefined4 FUN_0001392c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_00013958 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_00013958 + 0x28)) {
      return 0;
    }
    if (((puVar1[6] == param_1) && (puVar1[4] == param_2)) && (puVar1[5] == param_3)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}



/* ===== FUN_0001395c @ 0001395c size=68 ===== */

undefined4 FUN_0001395c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_000139a0;
  pvVar2 = realloc(*(void **)(DAT_000139a0 + 0x34),(*(int *)(DAT_000139a0 + 0x30) + 1) * 0x10);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x30);
    iVar5 = iVar4 * 0x10;
    *(int *)((int)pvVar2 + iVar5) = param_1;
    *(undefined4 *)((int)pvVar2 + iVar5 + 4) = param_3;
    *(undefined4 *)((int)pvVar2 + iVar5 + 8) = param_2;
    *(undefined4 *)((int)pvVar2 + iVar5 + 0xc) = 0;
    *(int *)(iVar1 + 0x30) = iVar4 + 1;
    *(void **)(iVar1 + 0x34) = pvVar2;
    signal(param_1,DAT_000139a4);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000139a8 @ 000139a8 size=34 ===== */

void FUN_000139a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0001395c(2,param_1,param_2);
  if (iVar1 == 0) {
    FUN_0001395c(0xf,param_1,param_2,param_4);
    return;
  }
  return;
}



/* ===== FUN_000139d4 @ 000139d4 size=396 ===== */

void FUN_000139d4(void)

{
  int *piVar1;
  fd_set *__readfds;
  fd_set *__writefds;
  fd_set *__exceptfds;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  timeval *__timeout;
  int *piVar9;
  timeval local_38;
  int local_30;
  int local_2c;
  
  __readfds = malloc(0x80);
  __writefds = malloc(0x80);
  __exceptfds = malloc(0x80);
  piVar1 = DAT_00013b60;
  if (((__readfds != (fd_set *)0x0) && (__writefds != (fd_set *)0x0)) &&
     (__exceptfds != (fd_set *)0x0)) {
    piVar9 = DAT_00013b60 + 10;
    while (piVar1[0x10] == 0) {
      piVar8 = (int *)piVar1[10];
      if (piVar8 == piVar9) {
        if (((piVar1[1] < 1) && (piVar1[4] < 1)) && (piVar1[7] < 1)) break;
        piVar8 = (int *)0x0;
      }
      else if (piVar8 != (int *)0x0) {
        FUN_000133c0(&local_30);
        local_38.tv_sec = piVar8[2];
        if ((local_30 < local_38.tv_sec) ||
           ((local_30 == local_38.tv_sec && (local_2c < piVar8[3])))) {
          local_38.tv_sec = local_38.tv_sec - local_30;
          local_38.tv_usec = piVar8[3] - local_2c;
          if (local_38.tv_usec < 0) {
            local_38.tv_sec = local_38.tv_sec + -1;
            local_38.tv_usec = local_38.tv_usec + 1000000;
          }
        }
        else {
          local_38.tv_sec = 0;
          local_38.tv_usec = 0;
        }
      }
      FUN_00013664(DAT_00013b64,__readfds);
      FUN_00013664(DAT_00013b68,__writefds);
      FUN_00013664(DAT_00013b6c,__exceptfds);
      __timeout = (timeval *)0x0;
      if (piVar8 != (int *)0x0) {
        __timeout = &local_38;
      }
      iVar2 = select(*piVar1 + 1,__readfds,__writefds,__exceptfds,__timeout);
      if ((iVar2 < 0) && (puVar3 = (uint *)__errno_location(), (*puVar3 & 0xfffffffb) != 0)) {
        perror(DAT_00013b70);
        break;
      }
      if (piVar1[0xe] != 0) {
        piVar1[0xe] = 0;
        iVar5 = 0;
        if (piVar1[0xf] != 0) {
          alarm(0);
          piVar1[0xf] = 0;
        }
        for (; iVar5 < piVar1[0xc]; iVar5 = iVar5 + 1) {
          iVar6 = piVar1[0xd] + iVar5 * 0x10;
          if (*(int *)(iVar6 + 0xc) != 0) {
            uVar4 = *(undefined4 *)(piVar1[0xd] + iVar5 * 0x10);
            *(undefined4 *)(iVar6 + 0xc) = 0;
            (**(code **)(iVar6 + 8))(uVar4,*(undefined4 *)(iVar6 + 4));
          }
        }
      }
      piVar8 = (int *)piVar1[10];
      if ((piVar8 != piVar9) && (piVar8 != (int *)0x0)) {
        FUN_000133c0(&local_30);
        if ((piVar8[2] <= local_30) && ((local_30 != piVar8[2] || (piVar8[3] <= local_2c)))) {
          iVar6 = piVar8[4];
          iVar5 = piVar8[5];
          pcVar7 = (code *)piVar8[6];
          FUN_000136a2(piVar8);
          (*pcVar7)(iVar6,iVar5);
        }
      }
      if (0 < iVar2) {
        if (piVar1[2] != 0) {
          FUN_00013708(DAT_00013b64,__readfds);
        }
        if (piVar1[5] != 0) {
          FUN_00013708(DAT_00013b68,__writefds);
        }
        if (piVar1[8] != 0) {
          FUN_00013708(DAT_00013b6c,__exceptfds);
        }
      }
    }
  }
  free(__readfds);
  free(__writefds);
  (*(code *)PTR_free_00028110)(__exceptfds);
  return;
}



/* ===== FUN_00013b74 @ 00013b74 size=8 ===== */

void FUN_00013b74(void)

{
  *(undefined4 *)(DAT_00013b7c + 0x40) = 1;
  return;
}



/* ===== FUN_00013b80 @ 00013b80 size=60 ===== */

void FUN_00013b80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_00013bbc;
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_000133c0(&uStack_18);
  piVar2 = *(int **)(iVar1 + 0x28);
  piVar3 = (int *)**(int **)(iVar1 + 0x28);
  while (piVar2 != (int *)(iVar1 + 0x28)) {
    FUN_000136a2();
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0x14));
  free(*(void **)(iVar1 + 0x20));
  free(*(void **)(iVar1 + 0x34));
  return;
}



/* ===== FUN_00013c98 @ 00013c98 size=42 ===== */

undefined4 FUN_00013c98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00013cc4;
  *DAT_00013cc4 = param_4;
  puVar1[0x43] = param_1;
  puVar1[1] = param_2;
  FUN_000137c8(0,DAT_00013cc8,0,0,param_4);
  printf(DAT_00013ccc);
  fflush((FILE *)*DAT_00013cd0);
  return 0;
}



/* ===== FUN_00013cd4 @ 00013cd4 size=6 ===== */

void FUN_00013cd4(void)

{
  FUN_00013834(0);
  return;
}



/* ===== FUN_00013cda @ 00013cda size=2 ===== */

void FUN_00013cda(void)

{
  return;
}



/* ===== FUN_00013cdc @ 00013cdc size=22 ===== */

void FUN_00013cdc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00013cf4;
  iVar2 = DAT_00013cf0 + 8;
  *(undefined1 *)(*(int *)(DAT_00013cf0 + 0x108) + DAT_00013cf0 + 8) = 0;
  (*(code *)PTR_printf_00028018)(uVar1,iVar2);
  return;
}



/* ===== _DT_FINI @ 00013cf8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00029000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00029004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00029008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00029010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00029014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 00029018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00029020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 00029024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00029028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 00029030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00029034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00029038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00029040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 00029044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00029048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00029050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00029054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00029058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00029060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 00029064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00029068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00029070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00029074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 00029078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00029080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 00029084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00029088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 00029090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 00029094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00029098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0002909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000290a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000290a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000290a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000290ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000290b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000290b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000290b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000290bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000290c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000290c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 000290c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000290cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 000290d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000290d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000290d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 000290dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000290e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 000290e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000290e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 000290ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000290f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 000290f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000290f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000290fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00029100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00029104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00029108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


