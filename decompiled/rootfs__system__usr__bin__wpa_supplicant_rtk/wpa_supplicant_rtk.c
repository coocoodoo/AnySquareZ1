// wpa_supplicant_rtk — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011038 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001105c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003700c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00037014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00011084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00037018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::connect @ 000110a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00037020)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 000110ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00037024)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 000110b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00037028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000110c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003702c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 000110e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00037034)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 000110ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00037038)(__base);
  return;
}



/* ===== <EXTERNAL>::fgets @ 000110f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0003703c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011104 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00037040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00037044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00037048)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0003704c)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00037050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00037054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00037058)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0003705c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::recvfrom @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00037060)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::rmdir @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_00037064)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00037068)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003706c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::chown @ 00011198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chown_00037070)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00037074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00037078)();
  return;
}



/* ===== <EXTERNAL>::chmod @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_0003707c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::alarm @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00037080)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00037084)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strrchr @ 000111e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00037088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00037090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 0001120c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00037094)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00011218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00037098)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::if_nametoindex @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint if_nametoindex(char *__ifname)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_if_nametoindex_0003709c)(__ifname);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011230 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000370a0)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 0001123c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000370a4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 00011248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_000370a8)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000370ac)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::rand @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_000370b0)();
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 0001126c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000370b4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000370b8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sendmsg @ 00011284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendmsg_000370bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000370c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::unlink @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000370c4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000112bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_000370cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sendto @ 000112c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_000370d0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::realloc @ 000112d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000370d4)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000112e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000370d8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000112ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000370dc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000370e4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000370e8)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000370ec)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000370f0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00011338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000370f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00011344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000370f8)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000370fc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001135c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00037100)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00011368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_00037104)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00037108)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_0003710c)(__buf);
  return pcVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001138c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00037110)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00037114)(__status);
  return;
}



/* ===== <EXTERNAL>::getgrnam @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrnam_00037118)(__name);
  return pgVar1;
}



/* ===== <EXTERNAL>::atoi @ 000113b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003711c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::gmtime @ 000113bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_00037120)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strspn @ 000113c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_00037124)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::daemon @ 000113d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_00037128)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000113e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003712c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 000113ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00037130)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000113f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00037134)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00011404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00037138)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011410 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003713c)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001141c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00037140)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00037144)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00037148)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003714c)(__filename);
  return pFVar1;
}



/* ===== FUN_00011450 @ 00011450 size=438 ===== */

undefined4 FUN_00011450(int param_1,char **param_2)

{
  char *__file;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *__ptr;
  void *pvVar10;
  int local_68;
  int iStack_64;
  void *local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  iVar2 = FUN_00013920();
  if (iVar2 == 0) {
    iVar2 = 0;
    iVar8 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    pvVar10 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iVar6 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar9 = 3;
    local_68 = 0;
    local_5c = 3;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    iStack_64 = iVar8;
    local_60 = pvVar10;
    iStack_54 = iVar8;
    iStack_4c = iVar8;
    iStack_44 = iVar8;
    iStack_3c = iVar8;
    piVar3 = (int *)FUN_000139a8(0x18);
    __file = DAT_0001163c;
    if (piVar3 != (int *)0x0) {
      do {
        iVar4 = open64(__file,2);
        if (2 < iVar4) {
          close(iVar4);
          break;
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      piVar1 = DAT_0001164c;
      iVar9 = 1;
      __ptr = piVar3;
      while (iVar4 = getopt(param_1,param_2,DAT_00011640), -1 < iVar4) {
        uVar7 = 0;
        switch(iVar4) {
        case 0x42:
          local_68 = local_68 + 1;
          break;
        case 0x43:
          piVar3[1] = *piVar1;
          break;
        case 0x44:
          piVar3[2] = *piVar1;
          break;
        default:
          FUN_0001fd34();
          goto switchD_000114d2_caseD_4c;
        case 0x4b:
          local_58 = local_58 + 1;
          break;
        case 0x4c:
          goto switchD_000114d2_caseD_4c;
        case 0x4e:
          iVar9 = iVar9 + 1;
          piVar5 = realloc(__ptr,iVar9 * 0x18);
          if (piVar5 == (int *)0x0) goto LAB_00011540;
          piVar3 = piVar5 + iVar9 * 6 + -6;
          *piVar3 = iVar2;
          piVar3[1] = iVar8;
          piVar3[2] = (int)pvVar10;
          piVar3[3] = iVar6;
          piVar3[4] = 0;
          piVar3[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          __ptr = piVar5;
          break;
        case 0x4f:
          iStack_3c = *piVar1;
          break;
        case 0x50:
          free(local_60);
          local_60 = (void *)FUN_00013888(*piVar1);
          break;
        case 0x57:
          iStack_64 = iStack_64 + 1;
          break;
        case 0x62:
          piVar3[5] = *piVar1;
          break;
        case 99:
          *piVar3 = *piVar1;
          break;
        case 100:
          puts(DAT_00011644);
          goto LAB_00011540;
        case 0x67:
          local_50 = *piVar1;
          break;
        case 0x69:
          piVar3[4] = *piVar1;
          break;
        case 0x6f:
          local_40 = *piVar1;
          break;
        case 0x70:
          piVar3[3] = *piVar1;
          break;
        case 0x71:
          local_5c = local_5c + 1;
          break;
        case 0x74:
          iStack_54 = iStack_54 + 1;
          break;
        case 0x76:
          puts((char *)*DAT_00011648);
          goto switchD_000114d2_caseD_4c;
        }
      }
      iVar2 = FUN_0001dca4(&local_68);
      if (iVar2 == 0) {
LAB_00011540:
        uVar7 = 0xffffffff;
      }
      else {
        iVar8 = 0;
        piVar3 = __ptr;
        do {
          if (((*piVar3 == 0) && (piVar3[1] == 0)) || (piVar3[4] == 0)) {
            if ((iVar9 != 1) || ((local_50 == 0 && (iStack_4c == 0)))) {
              FUN_0001fd34();
LAB_00011610:
              uVar7 = 0xffffffff;
              goto LAB_00011634;
            }
            break;
          }
          iVar6 = FUN_0001d7cc(iVar2,piVar3);
          iVar8 = iVar8 + 1;
          if (iVar6 == 0) goto LAB_00011610;
          piVar3 = piVar3 + 6;
        } while (iVar9 != iVar8);
        uVar7 = FUN_0001dbda(iVar2);
LAB_00011634:
        FUN_0001dc2c(iVar2);
      }
switchD_000114d2_caseD_4c:
      free(__ptr);
      free(local_60);
      FUN_00013924();
      return uVar7;
    }
  }
  return 0xffffffff;
}



/* ===== entry @ 00011650 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000370e0)
            (DAT_00011684,param_2,&stack0x00000004,DAT_00011688,DAT_00011680,param_1);
  return;
}



/* ===== FUN_0001168c @ 0001168c size=32 ===== */

void FUN_0001168c(void)

{
  if (DAT_000116b0 == DAT_000116ac) {
    return;
  }
  if (DAT_000116b4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000116a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000116b4)();
  return;
}



/* ===== _FINI_0 @ 000116f0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001172c;
  if (*DAT_0001172c != '\0') {
    return;
  }
  FUN_0001168c();
  if (DAT_00011730 != 0) {
    __deregister_frame_info(DAT_00011734);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011738 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001175c != 0) {
    __register_frame_info(DAT_00011764,DAT_00011760);
  }
  if ((DAT_000116e8 - DAT_000116e4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000116ec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000116e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000116ec)();
  return;
}



/* ===== FUN_00011788 @ 00011788 size=42 ===== */

undefined1 * FUN_00011788(void *param_1,size_t param_2)

{
  undefined1 *puVar1;
  
  puVar1 = malloc(param_2 + 3);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0x22;
    memcpy(puVar1 + 1,param_1,param_2);
    puVar1[param_2 + 1] = 0x22;
    puVar1[param_2 + 2] = 0;
  }
  return puVar1;
}



/* ===== FUN_00011b20 @ 00011b20 size=34 ===== */

char * FUN_00011b20(int param_1,int param_2)

{
  char *__s;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  __s = malloc(0x14);
  if (__s != (char *)0x0) {
    snprintf(__s,0x14,DAT_00011b44,*(undefined4 *)(param_2 + iVar1));
    __s[0x13] = '\0';
  }
  return __s;
}



/* ===== FUN_00011b48 @ 00011b48 size=104 ===== */

int FUN_00011b48(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  int iVar5;
  int extraout_r3;
  undefined4 unaff_r4;
  byte *__s;
  int iVar6;
  
  __s = *(byte **)(param_2 + *(int *)(param_1 + 0xc));
  if (__s == (byte *)0x0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    sVar3 = strlen((char *)__s);
    iVar5 = extraout_r3;
  }
  else {
    sVar3 = *(size_t *)(param_2 + iVar5);
  }
  if (__s == (byte *)0x0) {
    iVar2 = 0;
  }
  else {
    pbVar4 = __s;
    do {
      if (__s + sVar3 == pbVar4) {
        iVar5 = FUN_00011788(__s,sVar3);
        return iVar5;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 - 0x20 < 0x5f);
    iVar6 = sVar3 * 2 + 1;
    iVar2 = FUN_000139a8(iVar6);
    if (iVar2 != 0) {
      FUN_000133ac(iVar2,iVar6,__s,sVar3,iVar5,unaff_r4);
    }
  }
  return iVar2;
}



/* ===== FUN_00011b6c @ 00011b6c size=44 ===== */

undefined4 FUN_00011b6c(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = atoi(param_4);
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_2 + iVar4) = iVar1;
  if (((iVar3 == 0) || (iVar3 <= iVar1)) &&
     ((iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0 || (iVar1 <= iVar3)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    *(int *)(param_2 + iVar4) = iVar3;
  }
  return uVar2;
}



/* ===== FUN_00011b98 @ 00011b98 size=44 ===== */

undefined4 FUN_00011b98(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = atoi(param_4);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_2 + iVar4) = iVar1;
  if (((iVar3 == 0) || (iVar3 <= iVar1)) &&
     ((iVar3 = *(int *)(param_1 + 0x10), iVar3 == 0 || (iVar1 <= iVar3)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    *(int *)(param_2 + iVar4) = iVar3;
  }
  return uVar2;
}



/* ===== FUN_00011e0c @ 00011e0c size=62 ===== */

undefined4 FUN_00011e0c(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  sVar1 = strlen(param_4);
  if ((((*(uint *)(param_1 + 0xc) == 0) || (*(uint *)(param_1 + 0xc) <= sVar1)) &&
      ((*(uint *)(param_1 + 0x10) == 0 || (sVar1 <= *(uint *)(param_1 + 0x10))))) &&
     (pcVar3 = strdup(param_4), pcVar3 != (char *)0x0)) {
    iVar4 = *(int *)(param_1 + 8);
    free(*(void **)(param_2 + iVar4));
    *(char **)(param_2 + iVar4) = pcVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00011e4a @ 00011e4a size=100 ===== */

char * FUN_00011e4a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *__format;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *__s;
  
  for (iVar3 = 0; *(int *)(param_1 + iVar3 * 4) != 0; iVar3 = iVar3 + 1) {
  }
  iVar6 = iVar3 * 10 + 1;
  pcVar2 = (char *)FUN_000139a8(iVar6);
  __format = DAT_00011eb8;
  uVar1 = DAT_00011eb4;
  if (pcVar2 != (char *)0x0) {
    __s = pcVar2;
    for (iVar7 = 0; iVar4 = *(int *)(param_1 + iVar7 * 4), iVar4 != 0; iVar7 = iVar7 + 1) {
      uVar5 = DAT_00011eb0;
      if (iVar7 != 0) {
        uVar5 = uVar1;
      }
      iVar4 = snprintf(__s,(size_t)(pcVar2 + (iVar6 - (int)__s)),__format,uVar5,iVar4,param_2,
                       param_3);
      if ((int)(pcVar2 + (iVar6 - (int)__s)) <= iVar4) {
        pcVar2[iVar3 * 10] = '\0';
        return pcVar2;
      }
      __s = __s + iVar4;
    }
  }
  return pcVar2;
}



/* ===== FUN_00011ec6 @ 00011ec6 size=122 ===== */

void * FUN_00011ec6(char *param_1,size_t *param_2)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
    pcVar1 = strrchr(param_1,0x22);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
      sVar4 = (int)pcVar1 - (int)param_1;
      *param_2 = sVar4;
      pvVar2 = malloc(sVar4 + 1);
      if (pvVar2 == (void *)0x0) {
        return (void *)0x0;
      }
      memcpy(pvVar2,param_1,sVar4);
      *(undefined1 *)((int)pvVar2 + sVar4) = 0;
      return pvVar2;
    }
  }
  else {
    sVar4 = strlen(param_1);
    if ((sVar4 & 1) == 0) {
      uVar5 = sVar4 >> 1;
      pvVar2 = malloc(uVar5 + 1);
      if (pvVar2 != (void *)0x0) {
        iVar3 = FUN_0001333a(param_1,pvVar2,uVar5);
        if (iVar3 == 0) {
          *(undefined1 *)((int)pvVar2 + uVar5) = 0;
          *param_2 = uVar5;
          return pvVar2;
        }
        free(pvVar2);
      }
    }
  }
  return (void *)0x0;
}



/* ===== FUN_00011f40 @ 00011f40 size=102 ===== */

undefined4 FUN_00011f40(int param_1,uint param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  int iVar3;
  uint local_1c;
  
  local_1c = param_2;
  iVar1 = strcmp(param_4,DAT_00011fa8);
  if (iVar1 == 0) {
    __ptr = (void *)0x0;
    local_1c = 0;
LAB_00011f58:
    iVar1 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0x10);
    free(*(void **)(param_2 + iVar1));
    *(void **)(param_2 + iVar1) = __ptr;
    uVar2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = 0;
      *(uint *)(param_2 + iVar3) = local_1c;
    }
  }
  else {
    __ptr = (void *)FUN_00011ec6(param_4,&local_1c);
    if (__ptr != (void *)0x0) {
      if (((*(uint *)(param_1 + 0x14) == 0) || (*(uint *)(param_1 + 0x14) <= local_1c)) &&
         ((*(uint *)(param_1 + 0x18) == 0 || (local_1c <= *(uint *)(param_1 + 0x18)))))
      goto LAB_00011f58;
      free(__ptr);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00011fac @ 00011fac size=68 ===== */

undefined4 FUN_00011fac(void *param_1,size_t *param_2,undefined4 param_3,undefined4 param_4)

{
  void *__src;
  char acStack_2c [24];
  
  __src = (void *)FUN_00011ec6(param_3);
  if (__src != (void *)0x0) {
    if (*param_2 < 0x11) {
      memcpy(param_1,__src,*param_2);
      free(__src);
      snprintf(acStack_2c,0x14,DAT_00011ff0,param_4);
      return 0;
    }
    free(__src);
  }
  return 0xffffffff;
}



/* ===== FUN_00012024 @ 00012024 size=114 ===== */

void * FUN_00012024(char *param_1)

{
  void *__ptr;
  char *__nptr;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  __ptr = (void *)FUN_000139a8(0x2c);
  if (__ptr != (void *)0x0) {
    uVar4 = 0;
    uVar5 = 10;
    while (param_1 != (char *)0x0) {
      do {
        __nptr = param_1;
        param_1 = __nptr + 1;
      } while (*__nptr == ' ');
      pvVar1 = __ptr;
      uVar3 = uVar5;
      if (uVar4 == uVar5) {
        pvVar1 = realloc(__ptr,uVar4 * 8 + 4);
        if (pvVar1 == (void *)0x0) {
          free(__ptr);
          return (void *)0x0;
        }
        uVar3 = uVar4 * 2;
        for (; uVar5 <= uVar3; uVar5 = uVar5 + 1) {
          *(undefined4 *)((int)pvVar1 + uVar5 * 4) = 0;
        }
      }
      iVar2 = atoi(__nptr);
      *(int *)((int)pvVar1 + uVar4 * 4) = iVar2;
      if (iVar2 == 0) {
        return pvVar1;
      }
      param_1 = strchr(__nptr + 1,0x20);
      uVar4 = uVar4 + 1;
      __ptr = pvVar1;
      uVar5 = uVar3;
    }
  }
  return __ptr;
}



/* ===== FUN_00012096 @ 00012096 size=36 ===== */

undefined4 FUN_00012096(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00012024(param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    free(*(void **)(param_2 + 0xe0));
    uVar2 = 0;
    *(int *)(param_2 + 0xe0) = iVar1;
  }
  return uVar2;
}



/* ===== FUN_000120de @ 000120de size=194 ===== */

uint FUN_000120de(char *param_1)

{
  char cVar1;
  char *__s2;
  char *__s2_00;
  char *pcVar2;
  char *__ptr;
  int iVar3;
  char *__s1;
  char *pcVar4;
  uint uVar5;
  
  __ptr = strdup(param_1);
  __s2_00 = DAT_000121b0;
  __s2 = DAT_000121ac;
  if (__ptr != (char *)0x0) {
    uVar5 = 0;
    for (pcVar4 = __ptr; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
      do {
        do {
          __s1 = pcVar4;
          cVar1 = *__s1;
          pcVar4 = __s1 + 1;
        } while (cVar1 == ' ');
      } while (cVar1 == '\t');
      pcVar2 = __s1;
      if (cVar1 == '\0') break;
      do {
        pcVar4 = pcVar2;
        cVar1 = *pcVar4;
        if ((cVar1 == ' ') || (cVar1 == '\t')) break;
        pcVar2 = pcVar4 + 1;
      } while (cVar1 != '\0');
      *pcVar4 = '\0';
      iVar3 = strcmp(__s1,DAT_000121a0);
      if (iVar3 == 0) {
        uVar5 = uVar5 | 0x10;
      }
      else {
        iVar3 = strcmp(__s1,DAT_000121a4);
        if (iVar3 == 0) {
          uVar5 = uVar5 | 8;
        }
        else {
          iVar3 = strcmp(__s1,DAT_000121a8);
          if (iVar3 == 0) {
            uVar5 = uVar5 | 4;
          }
          else {
            iVar3 = strcmp(__s1,__s2);
            if (iVar3 == 0) {
              uVar5 = uVar5 | 2;
            }
            else {
              iVar3 = strcmp(__s1,__s2_00);
              if (iVar3 != 0) {
                free(__ptr);
                return 0xffffffff;
              }
              uVar5 = uVar5 | 1;
            }
          }
        }
      }
      if (cVar1 == '\0') break;
    }
    free(__ptr);
    if (uVar5 != 0) {
      return uVar5;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000121b4 @ 000121b4 size=30 ===== */

uint FUN_000121b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_000120de(param_4);
  if (uVar1 != 0xffffffff) {
    if ((uVar1 & 0xffffffe1) == 0) {
      *(uint *)(param_2 + 0x50) = uVar1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001231e @ 0001231e size=128 ===== */

undefined4 FUN_0001231e(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *__src;
  int iVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 8); iVar5 = iVar5 + 1) {
    iVar4 = *(int *)((int)*(void **)(param_1 + 4) + iVar5 * 4);
    if (*(int *)(iVar4 + 0xc) == *(int *)(param_2 + 0xc)) {
      do {
        iVar5 = iVar4;
        iVar4 = *(int *)(iVar5 + 4);
      } while (iVar4 != 0);
      *(int *)(iVar5 + 4) = param_2;
      return 0;
    }
  }
  piVar2 = realloc(*(void **)(param_1 + 4),(*(int *)(param_1 + 8) + 1) * 4);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = piVar2;
    iVar5 = 0;
    do {
      iVar4 = iVar5;
      __src = piVar1;
      if (*(int *)(param_1 + 8) <= iVar4) break;
      piVar1 = __src + 1;
      iVar5 = iVar4 + 1;
    } while (*(int *)(param_2 + 0xc) <= *(int *)(*__src + 0xc));
    memmove(piVar2 + iVar4 + 1,__src,(*(int *)(param_1 + 8) - iVar4) * 4);
    iVar5 = *(int *)(param_1 + 8);
    *__src = param_2;
    uVar3 = 0;
    *(int **)(param_1 + 4) = piVar2;
    *(int *)(param_1 + 8) = iVar5 + 1;
  }
  return uVar3;
}



/* ===== FUN_0001239e @ 0001239e size=48 ===== */

undefined4 FUN_0001239e(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 0;
  free((void *)param_1[1]);
  piVar3 = (int *)*param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  while (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    iVar1 = FUN_0001231e(param_1,piVar3);
    piVar3 = (int *)*piVar3;
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_000123ce @ 000123ce size=60 ===== */

void FUN_000123ce(int param_1)

{
  free(*(void **)(param_1 + 0x10));
  free(*(void **)(param_1 + 0x48));
  free(*(void **)(param_1 + 0xcc));
  free(*(void **)(param_1 + 0xd8));
  free(*(void **)(param_1 + 0xe0));
  free(*(void **)(param_1 + 0xdc));
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00012408 @ 00012408 size=22 ===== */

void FUN_00012408(int *param_1,code *param_2,undefined4 param_3)

{
  param_1 = (int *)*param_1;
  while (param_1 != (int *)0x0) {
    param_1 = (int *)*param_1;
    (*param_2)(param_3);
  }
  return;
}



/* ===== FUN_0001241e @ 0001241e size=12 ===== */

void FUN_0001241e(int *param_1,int param_2)

{
  do {
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
  } while (param_1[2] != param_2);
  return;
}



/* ===== FUN_0001242a @ 0001242a size=60 ===== */

int FUN_0001242a(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  iVar4 = -1;
  piVar5 = (int *)0x0;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    piVar1 = (int *)*piVar3;
    piVar5 = piVar3;
    if (iVar4 < piVar3[2]) {
      iVar4 = piVar3[2];
    }
  }
  iVar2 = FUN_000139a8(0xf4);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar4 + 1;
    if (piVar5 == (int *)0x0) {
      *param_1 = iVar2;
    }
    else {
      *piVar5 = iVar2;
    }
    FUN_0001239e(param_1);
  }
  return iVar2;
}



/* ===== FUN_00012466 @ 00012466 size=52 ===== */

undefined4 FUN_00012466(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)*param_1;
  do {
    puVar4 = puVar3;
    puVar2 = puVar1;
    if (puVar4 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    puVar3 = (undefined4 *)*puVar4;
    puVar1 = puVar4;
  } while (puVar4[2] != param_2);
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = puVar3;
  }
  else {
    *puVar2 = puVar3;
  }
  FUN_0001239e();
  FUN_000123ce(puVar4);
  return 0;
}



/* ===== FUN_0001249a @ 0001249a size=16 ===== */

void FUN_0001249a(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 3;
  *(undefined4 *)(param_1 + 0x4c) = 0x18;
  *(undefined4 *)(param_1 + 0x50) = 0x1e;
  *(undefined4 *)(param_1 + 0x54) = 3;
  return;
}



/* ===== FUN_000124aa @ 000124aa size=76 ===== */

int FUN_000124aa(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000124f8;
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    iVar3 = 0;
    do {
      iVar1 = strcmp(param_2,*(char **)(iVar3 * 0x20 + iVar2));
      if (iVar1 == 0) {
        iVar2 = iVar2 + iVar3 * 0x20;
        iVar2 = (**(code **)(iVar2 + 4))(iVar2,param_1,param_4,param_3);
        return -(uint)(iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1a);
  }
  return -1;
}



/* ===== FUN_000124fc @ 000124fc size=122 ===== */

void * FUN_000124fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  void *__ptr;
  char *__ptr_00;
  char *pcVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar4;
  undefined4 extraout_r2_02;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = false;
  if ((param_2 != 0) && (bVar2 = false, *(int *)(param_1 + 0xf0) != 0)) {
    bVar2 = true;
  }
  __ptr = (void *)FUN_000139a8(0xd4);
  if (__ptr != (void *)0x0) {
    iVar6 = 0;
    iVar7 = 0;
    puVar5 = DAT_00012578;
    uVar4 = extraout_r2;
    do {
      if (((puVar5[7] == 0) || (bVar2)) &&
         (__ptr_00 = (char *)(*(code *)puVar5[2])(puVar5,param_1,uVar4,(code *)puVar5[2],param_4),
         uVar4 = extraout_r2_00, __ptr_00 != (char *)0x0)) {
        if (*__ptr_00 == '\0') {
          free(__ptr_00);
          uVar4 = extraout_r2_01;
        }
        else {
          pcVar3 = strdup((char *)*puVar5);
          if (pcVar3 == (char *)0x0) {
            free(__ptr_00);
            free(__ptr);
            return (void *)0x0;
          }
          iVar1 = iVar6 * 8;
          *(char **)((int)__ptr + iVar6 * 8) = pcVar3;
          iVar6 = iVar6 + 1;
          *(char **)((int)__ptr + iVar1 + 4) = __ptr_00;
          uVar4 = extraout_r2_02;
        }
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 8;
    } while (iVar7 != 0x1a);
  }
  return __ptr;
}



/* ===== FUN_0001257c @ 0001257c size=58 ===== */

undefined4 FUN_0001257c(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_000125b8;
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    iVar4 = 0;
    do {
      iVar1 = strcmp(param_2,*(char **)(iVar4 * 0x20 + iVar2));
      if (iVar1 == 0) {
        iVar2 = iVar2 + iVar4 * 0x20;
        uVar3 = (**(code **)(iVar2 + 8))(iVar2,param_1);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
  }
  return 0;
}



/* ===== FUN_000125bc @ 000125bc size=94 ===== */

char * FUN_000125bc(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0001261c;
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    iVar4 = 0;
    do {
      iVar1 = strcmp(param_2,*(char **)(iVar4 * 0x20 + iVar3));
      if (iVar1 == 0) {
        iVar3 = iVar3 + iVar4 * 0x20;
        pcVar2 = (char *)(**(code **)(iVar3 + 8))(iVar3,param_1);
        if (*(int *)(iVar3 + 0x1c) == 0) {
          return pcVar2;
        }
        if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
          free(pcVar2);
          pcVar2 = (char *)(*(code *)PTR_strdup_000370e4)(DAT_00012620);
          return pcVar2;
        }
        free(pcVar2);
        return (char *)0x0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
  }
  return (char *)0x0;
}



/* ===== FUN_00012624 @ 00012624 size=36 ===== */

void FUN_00012624(int param_1)

{
  FUN_0001c82c(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),0x1000,param_1 + 0x24,0x20);
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}



/* ===== FUN_00012648 @ 00012648 size=28 ===== */

undefined4 * FUN_00012648(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[3];
  }
  return puVar2;
}



/* ===== FUN_00012664 @ 00012664 size=30 ===== */

void FUN_00012664(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  free((void *)*param_1);
  free((void *)param_1[1]);
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00012682 @ 00012682 size=132 ===== */

void FUN_00012682(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    FUN_000123ce();
  }
  iVar2 = param_1[0x10];
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_00012664();
  }
  free((void *)param_1[5]);
  free((void *)param_1[6]);
  free((void *)param_1[8]);
  free((void *)param_1[9]);
  free((void *)param_1[10]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0x16]);
  free((void *)param_1[0x17]);
  free((void *)param_1[0x18]);
  free((void *)param_1[0x19]);
  free((void *)param_1[0x1a]);
  free((void *)param_1[0x1d]);
  free((void *)param_1[0x31]);
  free((void *)param_1[1]);
  (*(code *)PTR_free_00037148)(param_1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== FUN_00012706 @ 00012706 size=60 ===== */

undefined4 FUN_00012706(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  puVar3 = (undefined4 *)0x0;
  do {
    puVar4 = puVar3;
    puVar3 = puVar2;
    if (puVar3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    iVar1 = strcmp((char *)*puVar3,param_2);
    puVar2 = (undefined4 *)puVar3[3];
  } while (iVar1 != 0);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x40) = puVar2;
  }
  else {
    puVar4[3] = puVar2;
  }
  FUN_00012664(puVar3);
  return 0;
}



/* ===== FUN_00012742 @ 00012742 size=20 ===== */

void FUN_00012742(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00012706(param_1,*param_2,param_3,param_4,param_4);
  param_2[3] = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 **)(param_1 + 0x40) = param_2;
  return;
}



/* ===== FUN_00012756 @ 00012756 size=82 ===== */

int FUN_00012756(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_000139a8(0x118);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc0) = 7;
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0xfc) = 200;
    *(undefined4 *)(iVar1 + 0x100) = 0xb4;
    *(undefined4 *)(iVar1 + 0xcc) = 1;
    *(undefined4 *)(iVar1 + 0x104) = 2;
    *(undefined4 *)(iVar1 + 0x54) = 1;
    *(undefined4 *)(iVar1 + 0x10c) = 0x80;
    if (param_1 != (char *)0x0) {
      pcVar2 = strdup(param_1);
      *(char **)(iVar1 + 0x14) = pcVar2;
    }
    if (param_2 != (char *)0x0) {
      pcVar2 = strdup(param_2);
      *(char **)(iVar1 + 0x2c) = pcVar2;
    }
  }
  return iVar1;
}



/* ===== FUN_000127a8 @ 000127a8 size=122 ===== */

int FUN_000127a8(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  char *__s;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = DAT_00012824;
  iVar6 = DAT_00012824 + 0x340;
  iVar4 = 0;
  iVar3 = param_1;
  uVar7 = param_3;
  while( true ) {
    iVar5 = iVar4 * 0x18;
    __s = *(char **)(iVar5 + iVar6);
    __n = strlen(__s);
    iVar2 = strncmp(param_2,__s,__n);
    if ((iVar2 == 0) && (param_2[__n] == '=')) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x15) {
      return -1;
    }
  }
  iVar3 = (**(code **)(iVar1 + iVar5 + 0x344))
                    (iVar6 + iVar5,param_1,param_3,param_2 + __n + 1,iVar3,__s,uVar7);
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | *(uint *)(iVar1 + iVar5 + 0x354);
  return -(uint)(iVar3 != 0);
}



/* ===== FUN_00012828 @ 00012828 size=4 ===== */

undefined4 FUN_00012828(void)

{
  return 0;
}



/* ===== FUN_0001282c @ 0001282c size=2 ===== */

void FUN_0001282c(void)

{
  return;
}



/* ===== FUN_0001282e @ 0001282e size=4 ===== */

undefined4 FUN_0001282e(void)

{
  return 0;
}



/* ===== FUN_00012832 @ 00012832 size=2 ===== */

void FUN_00012832(void)

{
  return;
}



/* ===== FUN_00012834 @ 00012834 size=2 ===== */

void FUN_00012834(void)

{
  return;
}



/* ===== FUN_00012836 @ 00012836 size=2 ===== */

void FUN_00012836(void)

{
  return;
}



/* ===== FUN_00012838 @ 00012838 size=2 ===== */

void FUN_00012838(void)

{
  return;
}



/* ===== FUN_0001283a @ 0001283a size=2 ===== */

void FUN_0001283a(void)

{
  return;
}



/* ===== FUN_0001283e @ 0001283e size=2 ===== */

void FUN_0001283e(void)

{
  return;
}



/* ===== FUN_00012844 @ 00012844 size=2 ===== */

void FUN_00012844(void)

{
  return;
}



/* ===== FUN_00012846 @ 00012846 size=2 ===== */

void FUN_00012846(void)

{
  return;
}



/* ===== FUN_00012850 @ 00012850 size=2 ===== */

void FUN_00012850(void)

{
  return;
}



/* ===== FUN_00012852 @ 00012852 size=2 ===== */

void FUN_00012852(void)

{
  return;
}



/* ===== FUN_00012854 @ 00012854 size=42 ===== */

void FUN_00012854(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  FUN_00013494(param_1,3,DAT_00012880,param_3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
               param_2[5]);
  return;
}



/* ===== FUN_00012884 @ 00012884 size=42 ===== */

void FUN_00012884(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  FUN_00013494(param_1,3,DAT_000128b0,param_3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
               param_2[5]);
  return;
}



/* ===== FUN_000128b4 @ 000128b4 size=2 ===== */

void FUN_000128b4(void)

{
  return;
}



/* ===== FUN_000128b6 @ 000128b6 size=2 ===== */

void FUN_000128b6(void)

{
  return;
}



/* ===== FUN_000128b8 @ 000128b8 size=2 ===== */

void FUN_000128b8(void)

{
  return;
}



/* ===== FUN_000128ba @ 000128ba size=2 ===== */

void FUN_000128ba(void)

{
  return;
}



/* ===== FUN_000128bc @ 000128bc size=2 ===== */

void FUN_000128bc(void)

{
  return;
}



/* ===== FUN_000128be @ 000128be size=2 ===== */

void FUN_000128be(void)

{
  return;
}



/* ===== FUN_000128c0 @ 000128c0 size=2 ===== */

void FUN_000128c0(void)

{
  return;
}



/* ===== FUN_000128c2 @ 000128c2 size=2 ===== */

void FUN_000128c2(void)

{
  return;
}



/* ===== FUN_000128d0 @ 000128d0 size=36 ===== */

void FUN_000128d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00013744(param_1 + 0x11);
  for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x100) + 0x158);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(iVar2 + 0xd4));
    }
  }
  return;
}



/* ===== FUN_000128f4 @ 000128f4 size=58 ===== */

void FUN_000128f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  if (param_1[0x11] != 0) {
    FUN_00013744(&piStack_18);
  }
  uVar1 = DAT_00012930;
  for (iVar3 = *param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0x100) + 0x15c);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)(iVar3 + 0xd4));
    }
    if (*(int *)(iVar3 + 0x114) == 0) {
      FUN_0001f630(iVar3,0,uVar1);
    }
  }
  return;
}



/* ===== FUN_00012938 @ 00012938 size=54 ===== */

bool FUN_00012938(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != param_2) {
    iVar1 = memcmp((void *)(param_2 + 0x20),(void *)(param_1 + 0xa0),6);
    if (iVar1 != 0) {
      iVar1 = memcmp((void *)(param_2 + 0x20),(void *)(param_1 + 0xa6),6);
      return iVar1 == 0;
    }
  }
  return true;
}



/* ===== FUN_0001296e @ 0001296e size=132 ===== */

void FUN_0001296e(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x4c) = param_2[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x54) = param_2[5];
  *(undefined4 *)(param_1 + 0x58) = param_2[6];
  *(undefined4 *)(param_1 + 0x5c) = param_2[7];
  uVar3 = param_2[9];
  *(undefined4 *)(param_1 + 0x60) = param_2[8];
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_00013744();
  uVar1 = param_2[10];
  uVar4 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_000129f4 >> 0x26);
  iVar2 = *(int *)(param_1 + 0x68) - uVar4;
  *(int *)(param_1 + 0x68) = iVar2;
  iVar5 = uVar1 + uVar4 * -1000;
  if (*(int *)(param_1 + 0x6c) < iVar5 * 1000) {
    *(int *)(param_1 + 0x68) = iVar2 + -1;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1000000;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar5 * -1000;
  return;
}



/* ===== FUN_000129f8 @ 000129f8 size=60 ===== */

void FUN_000129f8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  piVar3 = (int *)param_2[1];
  iVar2 = param_2[4];
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  iVar1 = param_2[2];
  piVar3 = (int *)param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
  FUN_00012884(param_1,param_2 + 8,iVar2);
  (*(code *)PTR_free_00037148)(param_2);
  return;
}



/* ===== FUN_00012a34 @ 00012a34 size=68 ===== */

undefined4 * FUN_00012a34(int param_1,void *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xe4);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 0xe4)) {
      return (undefined4 *)0x0;
    }
    iVar1 = memcmp(puVar2 + 8,param_2,6);
    if (((iVar1 == 0) && (puVar2[0x12] == param_4)) &&
       (iVar1 = memcmp((void *)((int)puVar2 + 0x26),param_3,param_4), iVar1 == 0)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}



/* ===== FUN_00012a78 @ 00012a78 size=12 ===== */

void FUN_00012a78(int param_1)

{
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  return;
}



/* ===== FUN_00012a84 @ 00012a84 size=170 ===== */

void FUN_00012a84(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t __n;
  void *__s2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  
  if (param_3 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0xe4);
    puVar6 = (undefined4 *)*puVar4;
    iVar8 = param_1;
    pvVar9 = param_2;
    while (puVar4 != (undefined4 *)(param_1 + 0xe4)) {
      iVar1 = FUN_00012938(param_1,puVar4);
      if (iVar1 == 0) {
        if (param_2 == (void *)0x0) {
LAB_00012b06:
          if ((uint)puVar4[6] < *(uint *)(param_1 + 0xf8)) {
            puVar4[5] = puVar4[5] + 1;
          }
          uVar3 = *(uint *)(*(int *)(param_1 + 0x94) + 0x104);
          if (uVar3 <= (uint)puVar4[5]) {
            FUN_000129f8(param_1,puVar4,puVar4[5],uVar3,iVar8,pvVar9,param_3);
          }
        }
        else {
          iVar1 = 0;
          if (*(int *)((int)param_2 + 8) == 0) {
LAB_00012acc:
            iVar1 = *(int *)((int)param_2 + 0x2c);
            if (iVar1 == 0) goto LAB_00012b06;
            __s2 = (void *)((int)puVar4 + 0x26);
            iVar7 = 0;
            pvVar5 = param_2;
            do {
              if (((*(void **)((int)pvVar5 + 0xc) == (void *)0x0) ||
                  (__n = *(size_t *)((int)pvVar5 + 0x10), __n == 0)) ||
                 ((__n == puVar4[0x12] &&
                  (iVar2 = memcmp(*(void **)((int)pvVar5 + 0xc),__s2,__n), pvVar9 = __s2, iVar2 == 0
                  )))) goto LAB_00012b06;
              iVar7 = iVar7 + 1;
              pvVar5 = (void *)((int)pvVar5 + 8);
            } while (iVar1 != iVar7);
          }
          else {
            do {
              if (puVar4[0x13] == *(int *)(*(int *)((int)param_2 + 4) + iVar1 * 4))
              goto LAB_00012acc;
              iVar1 = iVar1 + 1;
            } while (*(int *)((int)param_2 + 8) != iVar1);
          }
        }
      }
      puVar4 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  return;
}



/* ===== FUN_00012b2e @ 00012b2e size=86 ===== */

void FUN_00012b2e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (param_1 + 0xe4 != *(int *)(param_1 + 0xe4)) {
    local_20 = param_1;
    local_1c = param_2;
    uStack_18 = param_3;
    FUN_00013744(&local_20);
    local_20 = local_20 - param_2;
    piVar2 = *(int **)(param_1 + 0xe4);
    piVar3 = (int *)**(int **)(param_1 + 0xe4);
    while ((int *)(param_1 + 0xe4) != piVar2) {
      iVar1 = FUN_00012938(param_1,piVar2);
      if (iVar1 == 0) {
        if (local_20 <= piVar2[0x1a]) {
          if (piVar2[0x1a] != local_20) {
            return;
          }
          if (local_1c <= piVar2[0x1b]) {
            return;
          }
        }
        FUN_000129f8(param_1,piVar2);
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  return;
}



/* ===== FUN_00012bac @ 00012bac size=40 ===== */

undefined4 FUN_00012bac(int param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0xe4) = param_1 + 0xe4;
  *(int *)(param_1 + 0xe8) = param_1 + 0xe4;
  *(int *)(param_1 + 0xec) = param_1 + 0xec;
  *(int *)(param_1 + 0xf0) = param_1 + 0xec;
  FUN_00013bbe(10,0,DAT_00012bd4,param_1,0,param_2);
  return 0;
}



/* ===== FUN_00012c06 @ 00012c06 size=70 ===== */

void FUN_00012c06(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00013c64(DAT_00012c20,param_1,0);
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    while (piVar2 != (int *)(param_1 + 0xe4)) {
      iVar1 = FUN_00012938(param_1,piVar2);
      if (iVar1 == 0) {
        FUN_000129f8(param_1,piVar2);
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  return;
}



/* ===== FUN_00012c24 @ 00012c24 size=42 ===== */

int FUN_00012c24(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  while( true ) {
    if (iVar2 == param_1 + 0xe4) {
      return 0;
    }
    iVar1 = memcmp((void *)(iVar2 + 0x20),param_2,6);
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}



/* ===== FUN_00012c4e @ 00012c4e size=24 ===== */

undefined4 * FUN_00012c4e(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe4);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0xe4)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[4] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}



/* ===== FUN_00012c66 @ 00012c66 size=42 ===== */

byte * FUN_00012c66(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(param_1 + 0x78) + *(int *)(param_1 + 0x70);
  pbVar1 = (byte *)(param_1 + 0x78);
  while ((pbVar3 = pbVar1, pbVar3 + 1 < pbVar2 && (pbVar3 + pbVar3[1] + 2 <= pbVar2))) {
    pbVar1 = pbVar3 + pbVar3[1] + 2;
    if (*pbVar3 == param_2) {
      return pbVar3;
    }
  }
  return (byte *)0x0;
}



/* ===== FUN_00012c90 @ 00012c90 size=56 ===== */

char * FUN_00012c90(int param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(param_1 + 0x78);
  pcVar2 = pcVar3 + *(int *)(param_1 + 0x70);
  while( true ) {
    if (pcVar2 <= pcVar3 + 1) {
      return (char *)0x0;
    }
    iVar4 = (byte)pcVar3[1] + 2;
    if (pcVar2 < pcVar3 + iVar4) break;
    if (((*pcVar3 == -0x23) && (3 < (byte)pcVar3[1])) &&
       (uVar1 = *(uint *)(pcVar3 + 2),
       (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18)
       == param_2)) {
      return pcVar3;
    }
    pcVar3 = pcVar3 + iVar4;
  }
  return (char *)0x0;
}



/* ===== FUN_00012cc8 @ 00012cc8 size=112 ===== */

int FUN_00012cc8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = FUN_00013534(*(undefined4 *)(param_1 + 0x70));
  if (iVar1 != 0) {
    pcVar4 = (char *)(param_1 + 0x78);
    pcVar5 = pcVar4 + *(int *)(param_1 + 0x70);
    for (; pcVar4 + 1 < pcVar5; pcVar4 = pcVar4 + (byte)pcVar4[1] + 2) {
      uVar2 = (uint)(byte)pcVar4[1];
      if (pcVar5 < pcVar4 + uVar2 + 2) break;
      if ((*pcVar4 == -0x23) && (3 < uVar2)) {
        uVar3 = *(uint *)(pcVar4 + 2);
        uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                uVar3 >> 0x18;
        if ((uVar3 == param_2) && (pcVar4 + 6 != (char *)0x0)) {
          __dest = (void *)FUN_000135e4(iVar1,uVar2 - 4,uVar2,uVar3,param_4);
          memcpy(__dest,pcVar4 + 6,uVar2 - 4);
        }
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000135cc(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00012d38 @ 00012d38 size=240 ===== */

bool FUN_00012d38(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  void *__s1;
  void *pvVar1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  
  if (param_3 == 0x32) {
LAB_00012d94:
    __s1 = (void *)FUN_00012c66(param_1,param_3 & 0xff);
    pvVar1 = (void *)FUN_0001fa5c(param_2);
LAB_00012d8c:
    if (__s1 != (void *)0x0) {
      if (pvVar1 == (void *)0x0) {
        iVar4 = 0;
        pvVar6 = (void *)0x0;
      }
      else {
        sVar3 = *(byte *)((int)__s1 + 1) + 2;
        iVar4 = 0;
        __n = *(byte *)((int)pvVar1 + 1) + 2;
        pvVar6 = (void *)0x0;
LAB_00012df0:
        if (__n == sVar3) {
          iVar2 = memcmp(__s1,pvVar1,__n);
          bVar5 = iVar2 == 0;
          goto LAB_00012e10;
        }
      }
LAB_00012e20:
      bVar5 = false;
      goto LAB_00012e10;
    }
    iVar4 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    if (param_3 < 0x33) {
      if ((param_3 != 1) && (param_3 != 0x30)) {
        return false;
      }
      goto LAB_00012d94;
    }
    if (param_3 == DAT_00012e28) {
      __s1 = (void *)FUN_00012c90(param_1,param_3,param_3,DAT_00012e28,param_4);
      pvVar1 = (void *)FUN_0001fb5c(param_2);
      goto LAB_00012d8c;
    }
    if (param_3 != DAT_00012e28 + 3) {
      return false;
    }
    iVar4 = FUN_00012cc8(param_1,param_3);
    pvVar6 = (void *)FUN_0001fb94(param_2,param_3);
    pvVar1 = pvVar6;
    if (iVar4 != 0) {
      __s1 = *(void **)(iVar4 + 8);
      if (__s1 == (void *)0x0) {
        __s1 = (void *)(iVar4 + 0xc);
      }
      if (pvVar6 != (void *)0x0) goto LAB_00012dbe;
      if (iVar4 != 0) goto LAB_00012dce;
      pvVar1 = (void *)0x0;
      if (__s1 == (void *)0x0) goto LAB_00012d78;
      iVar4 = 0;
      goto LAB_00012e20;
    }
    if (pvVar6 != (void *)0x0) {
      __s1 = (void *)0x0;
LAB_00012dbe:
      pvVar1 = *(void **)((int)pvVar6 + 8);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)((int)pvVar6 + 0xc);
      }
      if (iVar4 == 0) {
        sVar3 = 0;
LAB_00012dd2:
        __n = *(size_t *)((int)pvVar6 + 4);
      }
      else {
LAB_00012dce:
        sVar3 = *(size_t *)(iVar4 + 4);
        if (pvVar6 != (void *)0x0) goto LAB_00012dd2;
        __n = 0;
      }
      if (__s1 == (void *)0x0) goto LAB_00012e08;
      if (pvVar1 == (void *)0x0) goto LAB_00012e20;
      goto LAB_00012df0;
    }
LAB_00012d78:
    pvVar6 = (void *)0x0;
    iVar4 = 0;
  }
LAB_00012e08:
  bVar5 = pvVar1 == (void *)0x0;
LAB_00012e10:
  FUN_000135cc(iVar4);
  FUN_000135cc(pvVar6);
  return bVar5;
}



/* ===== FUN_00012e2c @ 00012e2c size=702 ===== */

int FUN_00012e2c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  size_t __n;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  void *__s1;
  
  iVar1 = FUN_0001fa5c(param_2,0);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 1) < 0x21)) {
    iVar2 = FUN_0001fb5c(param_2,DAT_000130e8);
    __s1 = (void *)(iVar1 + 2);
    uVar6 = (uint)*(byte *)(iVar1 + 1);
    if ((iVar2 != 0) && ((uVar6 == 7 && (iVar1 = memcmp(__s1,DAT_000130ec,7), iVar1 == 0)))) {
      return 0;
    }
    piVar3 = (int *)FUN_00012a34(param_1,param_2 + 4,__s1,uVar6);
    __n = *(size_t *)(param_2 + 0x2c);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_000139a8(*(int *)(param_2 + 0x30) + __n + 0x78);
      iVar1 = 0;
      if (piVar3 != (int *)0x0) {
        iVar1 = *(int *)(param_1 + 0xfc);
        *(int *)(param_1 + 0xfc) = iVar1 + 1;
        piVar3[4] = iVar1;
        piVar3[6] = *(int *)(param_1 + 0xf8);
        FUN_0001296e(piVar3,param_2);
        memcpy((void *)((int)piVar3 + 0x26),__s1,uVar6);
        iVar1 = *(int *)(param_2 + 0x2c);
        iVar2 = *(int *)(param_2 + 0x30);
        piVar3[0x12] = uVar6;
        piVar3[0x1c] = iVar1;
        piVar3[0x1d] = iVar2;
        memcpy(piVar3 + 0x1e,(void *)(param_2 + 0x38),iVar1 + iVar2);
        piVar4 = *(int **)(param_1 + 0xe8);
        iVar1 = *piVar4;
        *piVar3 = iVar1;
        piVar3[1] = (int)piVar4;
        *(int **)(iVar1 + 4) = piVar3;
        *piVar4 = (int)piVar3;
        piVar4 = *(int **)(param_1 + 0xf0);
        iVar1 = *piVar4;
        piVar3[2] = iVar1;
        piVar3[3] = (int)piVar4;
        *(int **)(iVar1 + 4) = piVar3 + 2;
        *piVar4 = (int)(piVar3 + 2);
        iVar1 = piVar3[4];
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
        iVar1 = FUN_00012854(param_1,piVar3 + 8,iVar1);
        if (*(uint *)(*(int *)(param_1 + 0x94) + 0xfc) < *(uint *)(param_1 + 0xf4)) {
          piVar3 = *(int **)(param_1 + 0xe4);
          if (piVar3 == (int *)(param_1 + 0xe4)) {
            piVar3 = (int *)0x0;
          }
          iVar1 = FUN_000129f8(param_1,piVar3,*(uint *)(param_1 + 0xf4),param_4);
          return iVar1;
        }
      }
    }
    else {
      uVar6 = (uint)(*(ushort *)((int)piVar3 + 0x52) ^ *(ushort *)(param_2 + 0x12));
      uVar5 = (uint)(piVar3[0x13] != *(int *)(param_2 + 0xc));
      if (piVar3[0x17] != *(int *)(param_2 + 0x1c)) {
        uVar5 = uVar5 | 2;
      }
      if ((int)(uVar6 << 0x1b) < 0) {
        uVar5 = uVar5 | 4;
      }
      if ((int)(uVar6 << 0x1e) < 0) {
        uVar5 = uVar5 | 8;
      }
      if ((piVar3[0x1c] != __n) ||
         (iVar1 = memcmp(piVar3 + 0x1e,(void *)(param_2 + 0x38),__n), iVar1 != 0)) {
        iVar1 = FUN_00012d38(piVar3,param_2,DAT_000130f0);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x110;
        }
        else {
          uVar5 = uVar5 | 0x100;
        }
        iVar1 = FUN_00012d38(piVar3,param_2,0x30);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x20;
        }
        iVar1 = FUN_00012d38(piVar3,param_2,DAT_000130f4);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x40;
        }
        iVar1 = FUN_00012d38(piVar3,param_2,1);
        if ((iVar1 == 0) || (iVar1 = FUN_00012d38(piVar3,param_2,0x32), iVar1 == 0)) {
          uVar5 = uVar5 | 0x80;
        }
      }
      iVar1 = *(int *)(param_1 + 0xf8);
      piVar3[5] = 0;
      piVar3[6] = iVar1;
      FUN_0001296e(piVar3,param_2);
      iVar1 = *piVar3;
      piVar4 = (int *)piVar3[1];
      *(int **)(iVar1 + 4) = piVar4;
      *piVar4 = iVar1;
      iVar2 = *(int *)(param_2 + 0x2c);
      iVar1 = *(int *)(param_2 + 0x30);
      *piVar3 = 0;
      piVar3[1] = 0;
      uVar6 = iVar2 + iVar1;
      if ((uint)(piVar3[0x1c] + piVar3[0x1d]) < uVar6) {
        iVar1 = piVar3[2];
        piVar7 = (int *)piVar3[3];
        *(int **)(iVar1 + 4) = piVar7;
        *piVar7 = iVar1;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar4 = realloc(piVar3,uVar6 + 0x78);
        if (piVar4 != (int *)0x0) {
          memcpy(piVar4 + 0x1e,(void *)(param_2 + 0x38),
                 *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x30));
          piVar4[0x1c] = *(int *)(param_2 + 0x2c);
          piVar4[0x1d] = *(int *)(param_2 + 0x30);
          piVar3 = piVar4;
        }
        iVar1 = *piVar7;
        piVar3[2] = iVar1;
        piVar3[3] = (int)piVar7;
        *(int **)(iVar1 + 4) = piVar3 + 2;
        *piVar7 = (int)(piVar3 + 2);
      }
      else {
        memcpy(piVar3 + 0x1e,(void *)(param_2 + 0x38),uVar6);
        piVar3[0x1c] = *(int *)(param_2 + 0x2c);
        piVar3[0x1d] = *(int *)(param_2 + 0x30);
      }
      piVar4 = *(int **)(param_1 + 0xe8);
      iVar1 = *piVar4;
      *piVar3 = iVar1;
      piVar3[1] = (int)piVar4;
      *(int **)(iVar1 + 4) = piVar3;
      *piVar4 = (int)piVar3;
      if ((int)(uVar5 << 0x1f) < 0) {
        FUN_000128b4(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        FUN_000128b6(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1d) < 0) {
        FUN_000128b8(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1c) < 0) {
        FUN_000128ba(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1b) < 0) {
        FUN_000128bc(param_1,piVar3[4]);
      }
      iVar1 = uVar5 << 0x1a;
      if (iVar1 < 0) {
        iVar1 = FUN_000128be(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x19) < 0) {
        iVar1 = FUN_000128c0(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x17) < 0) {
        iVar1 = FUN_000128c2(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x18) < 0) {
        return param_1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_000131c8 @ 000131c8 size=4 ===== */

undefined4 FUN_000131c8(void)

{
  return 0;
}



/* ===== FUN_000131cc @ 000131cc size=82 ===== */

int FUN_000131cc(char *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  char *__s;
  byte *pbVar2;
  char *__format;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar2 = param_3 + param_4;
    __s = param_1;
    __format = DAT_00013220;
    if (param_5 == 0) {
      __format = DAT_00013224;
    }
    while (param_3 != pbVar2) {
      iVar1 = snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*param_3);
      if ((iVar1 < 0) || ((int)(param_1 + (param_2 - (int)__s)) <= iVar1)) break;
      __s = __s + iVar1;
      param_3 = param_3 + 1;
    }
    iVar1 = (int)__s - (int)param_1;
    param_1[param_2 + -1] = '\0';
  }
  return iVar1;
}



/* ===== FUN_00013228 @ 00013228 size=42 ===== */

uint FUN_00013228(int param_1)

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



/* ===== FUN_00013252 @ 00013252 size=36 ===== */

uint FUN_00013252(undefined1 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00013228(*param_1,param_1);
  if (((int)uVar2 < 0) ||
     (uVar1 = FUN_00013228(*(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 1)), (int)uVar1 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 | (int)uVar2 * 0x10;
  }
  return uVar1;
}



/* ===== FUN_00013276 @ 00013276 size=66 ===== */

undefined4 FUN_00013276(undefined1 *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_00013228(*param_1);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_00013228(param_1[1]);
    if ((int)uVar4 < 0) {
      return 0xffffffff;
    }
    *(byte *)((int)((ulonglong)uVar4 >> 0x20) + iVar3) = (byte)uVar4 | (char)iVar2 * '\x10';
    if (iVar3 == 5) {
      param_1 = param_1 + 2;
    }
    else {
      pcVar1 = param_1 + 2;
      param_1 = param_1 + 3;
      if (*pcVar1 != ':') {
        return 0xffffffff;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return 0;
}



/* ===== FUN_0001333a @ 0001333a size=40 ===== */

undefined4 FUN_0001333a(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  while( true ) {
    if (puVar2 == param_2 + param_3) {
      return 0;
    }
    iVar1 = FUN_00013252(param_1);
    if (iVar1 < 0) break;
    *puVar2 = (char)iVar1;
    param_1 = param_1 + 2;
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



/* ===== FUN_00013362 @ 00013362 size=24 ===== */

void FUN_00013362(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + param_1);
  do {
    if ((int)(pcVar2 + ~param_1) < 0) {
      return;
    }
    pcVar2 = pcVar2 + -1;
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + '\x01';
  } while ((char)(cVar1 + '\x01') == '\0');
  return;
}



/* ===== FUN_0001337a @ 0001337a size=44 ===== */

void FUN_0001337a(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  FUN_00013744(&local_10);
  uVar2 = local_c * 0x10c7 - ((local_c >> 9) + (local_c >> 5));
  uVar1 = DAT_000133a8 + (int)local_10;
  *param_1 = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  param_1[1] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}



/* ===== FUN_000133ac @ 000133ac size=14 ===== */

void FUN_000133ac(void)

{
  FUN_000131cc();
  return;
}



/* ===== FUN_000133ba @ 000133ba size=14 ===== */

void FUN_000133ba(void)

{
  FUN_000131cc();
  return;
}



/* ===== FUN_000133c8 @ 000133c8 size=52 ===== */

void * FUN_000133c8(void *param_1,size_t param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (0x1f < param_2) {
    param_2 = 0x20;
  }
  pbVar1 = memcpy(DAT_000133fc,param_1,param_2);
  pbVar1[param_2] = 0;
  while( true ) {
    pbVar2 = pbVar1;
    if (*pbVar2 == 0) break;
    pbVar1 = pbVar2 + 1;
    if (0x5e < *pbVar2 - 0x20) {
      *pbVar2 = 0x5f;
    }
  }
  return DAT_000133fc;
}



/* ===== FUN_00013400 @ 00013400 size=2 ===== */

void FUN_00013400(void)

{
  return;
}



/* ===== FUN_00013404 @ 00013404 size=6 ===== */

void FUN_00013404(undefined4 param_1)

{
  *DAT_0001340c = param_1;
  return;
}



/* ===== FUN_00013410 @ 00013410 size=6 ===== */

void FUN_00013410(undefined4 param_1)

{
  *(undefined4 *)(DAT_00013418 + 4) = param_1;
  return;
}



/* ===== FUN_0001341c @ 0001341c size=110 ===== */

void FUN_0001341c(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char *__s;
  int iVar2;
  uint uVar3;
  char local_a4 [132];
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  __s = malloc(0x800);
  puVar1 = DAT_0001348c;
  if (__s != (char *)0x0) {
    local_a4[0] = '\0';
    if ((((code *)DAT_0001348c[1] != (code *)0x0) &&
        (iVar2 = (*(code *)DAT_0001348c[1])(param_1), iVar2 != 0)) &&
       (uVar3 = snprintf(local_a4,0x82,DAT_00013490,iVar2), 0x81 < uVar3)) {
      local_a4[0] = '\0';
    }
    iVar2 = vsnprintf(__s,0x800,param_3,&uStack_4);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,param_2,__s,iVar2);
    }
    free(__s);
  }
  return;
}



/* ===== FUN_00013494 @ 00013494 size=68 ===== */

void FUN_00013494(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int *piVar1;
  char *__s;
  int iVar2;
  undefined4 uVar3;
  undefined4 *__arg;
  char *pcVar4;
  undefined4 uStack_4;
  
  piVar1 = DAT_000134d8;
  if ((*DAT_000134d8 != 0) &&
     (uVar3 = param_1, pcVar4 = param_3, uStack_4 = param_4, __s = malloc(0x800), __s != (char *)0x0
     )) {
    __arg = &uStack_4;
    iVar2 = vsnprintf(__s,0x800,param_3,__arg);
    (*(code *)*piVar1)(param_1,param_2,__s,iVar2,uVar3,__arg,pcVar4);
    free(__s);
  }
  return;
}



/* ===== FUN_00013534 @ 00013534 size=16 ===== */

void FUN_00013534(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_000139a8(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
  }
  return;
}



/* ===== FUN_00013544 @ 00013544 size=114 ===== */

int FUN_00013544(int *param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  size_t __size;
  uint *__ptr;
  
  __ptr = (uint *)*param_1;
  if (__ptr == (uint *)0x0) {
    iVar1 = FUN_00013534(param_2);
    *param_1 = iVar1;
    return -(uint)(iVar1 == 0);
  }
  __size = __ptr[1] + param_2;
  if (*__ptr < __size) {
    if ((void *)__ptr[2] == (void *)0x0) {
      __ptr = realloc(__ptr,__size + 0xc);
      if (__ptr != (uint *)0x0) {
        memset((void *)(__ptr[1] + 0xc + (int)__ptr),0,param_2);
        *param_1 = (int)__ptr;
        goto LAB_0001358c;
      }
    }
    else {
      pvVar2 = realloc((void *)__ptr[2],__size);
      if (pvVar2 != (void *)0x0) {
        memset((void *)(__ptr[1] + (int)pvVar2),0,param_2);
        __ptr[2] = (uint)pvVar2;
LAB_0001358c:
        *__ptr = param_2 + __ptr[1];
        goto LAB_00013592;
      }
    }
    iVar1 = -1;
  }
  else {
LAB_00013592:
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000135cc @ 000135cc size=24 ===== */

void FUN_000135cc(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_000135e4 @ 000135e4 size=32 ===== */

int FUN_000135e4(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)param_1[2];
  if (puVar3 == (uint *)0x0) {
    puVar3 = param_1 + 3;
  }
  uVar2 = param_1[1];
  uVar1 = param_2 + uVar2;
  param_1[1] = uVar1;
  if (*param_1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (int)puVar3 + uVar2;
}



/* ===== FUN_00013604 @ 00013604 size=24 ===== */

void FUN_00013604(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000135e4(param_1,param_3);
  (*(code *)PTR_memcpy_00037044)(uVar1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_0001361c @ 0001361c size=36 ===== */

int FUN_0001361c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00013534(*(undefined4 *)(param_1 + 4));
  if ((iVar1 != 0) &&
     ((iVar2 = *(int *)(param_1 + 8), iVar2 != 0 || (iVar2 = param_1 + 0xc, iVar2 != 0)))) {
    FUN_00013604(iVar1,iVar2,*(undefined4 *)(param_1 + 4));
  }
  return iVar1;
}



/* ===== FUN_00013640 @ 00013640 size=18 ===== */

void FUN_00013640(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 == 0) && (iVar1 = param_2 + 0xc, iVar1 == 0)) {
    return;
  }
  FUN_00013604(param_1,iVar1,*(undefined4 *)(param_2 + 4));
  return;
}



/* ===== FUN_00013652 @ 00013652 size=30 ===== */

int FUN_00013652(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00013534(param_2);
  if ((iVar1 != 0) && (param_1 != 0)) {
    FUN_00013604(iVar1,param_1,param_2);
  }
  return iVar1;
}



/* ===== FUN_00013670 @ 00013670 size=62 ===== */

int FUN_00013670(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
    }
    iVar1 = FUN_00013534(*(int *)(param_2 + 4) + iVar1);
    if (iVar1 != 0) {
      if (param_1 != 0) {
        FUN_00013640(iVar1,param_1);
      }
      FUN_00013640(iVar1,param_2);
    }
    FUN_000135cc(param_1);
    FUN_000135cc(param_2);
  }
  return iVar1;
}



/* ===== FUN_0001372c @ 0001372c size=26 ===== */

void FUN_0001372c(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_00037030)(param_2);
  return;
}



/* ===== FUN_00013744 @ 00013744 size=24 ===== */

void FUN_00013744(int *param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = (__time_t)param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_usec;
  return;
}



/* ===== FUN_0001375c @ 0001375c size=132 ===== */

undefined4
FUN_0001375c(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int *param_7
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
      goto LAB_000137b4;
    }
  }
  iVar2 = 0;
LAB_000137b4:
  *param_7 = local_40 - iVar2;
  return 0;
}



/* ===== FUN_000137e0 @ 000137e0 size=70 ===== */

undefined4 FUN_000137e0(char *param_1)

{
  int iVar1;
  FILE *__stream;
  __pid_t _Var2;
  undefined4 uVar3;
  
  iVar1 = daemon(0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((param_1 != (char *)0x0) &&
       (__stream = fopen64(param_1,DAT_0001382c), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,DAT_00013830,_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror(DAT_00013828);
  }
  return uVar3;
}



/* ===== FUN_00013834 @ 00013834 size=10 ===== */

void FUN_00013834(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_unlink_000370c4)();
  return;
}



/* ===== FUN_0001383c @ 0001383c size=60 ===== */

undefined4 FUN_0001383c(void *param_1,size_t param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  size_t sVar2;
  
  __stream = fopen64(DAT_00013878,DAT_0001387c);
  if (__stream == (FILE *)0x0) {
    puts(DAT_00013880);
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



/* ===== FUN_00013888 @ 00013888 size=154 ===== */

void * FUN_00013888(char *param_1)

{
  char *__buf;
  char *__s;
  int *piVar1;
  size_t __n;
  void *pvVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == '/') {
    pvVar2 = (void *)(*(code *)PTR_strdup_000370e4)();
    return pvVar2;
  }
  iVar4 = 4;
  sVar3 = 0x80;
  do {
    __buf = malloc(sVar3);
    if (__buf == (char *)0x0) {
      return (void *)0x0;
    }
    __s = getcwd(__buf,sVar3);
    if (__s != (char *)0x0) {
      __buf[sVar3 - 1] = '\0';
      sVar3 = strlen(__s);
      __n = strlen(param_1);
      pvVar2 = malloc(sVar3 + __n + 2);
      if (pvVar2 != (void *)0x0) {
        memcpy(pvVar2,__s,sVar3);
        *(undefined1 *)((int)pvVar2 + sVar3) = 0x2f;
        memcpy((void *)(sVar3 + 1 + (int)pvVar2),param_1,__n);
        *(undefined1 *)((int)pvVar2 + sVar3 + __n + 1) = 0;
      }
      free(__buf);
      return pvVar2;
    }
    piVar1 = __errno_location();
    iVar5 = *piVar1;
    free(__buf);
    if (iVar5 != 0x22) {
      return (void *)0x0;
    }
    iVar4 = iVar4 + -1;
    sVar3 = sVar3 << 1;
  } while (iVar4 != 0);
  return (void *)0x0;
}



/* ===== FUN_00013920 @ 00013920 size=4 ===== */

undefined4 FUN_00013920(void)

{
  return 0;
}



/* ===== FUN_00013924 @ 00013924 size=2 ===== */

void FUN_00013924(void)

{
  return;
}



/* ===== FUN_000139a8 @ 000139a8 size=10 ===== */

void FUN_000139a8(undefined4 param_1)

{
  (*(code *)PTR_calloc_0003708c)(1,param_1);
  return;
}



/* ===== FUN_000139b0 @ 000139b0 size=54 ===== */

char * FUN_000139b0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_3 == 0) {
LAB_000139dc:
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
        goto LAB_000139dc;
      }
      cVar1 = *pcVar3;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== FUN_000139e8 @ 000139e8 size=62 ===== */

void FUN_000139e8(int *param_1,int param_2)

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



/* ===== FUN_00013a26 @ 00013a26 size=12 ===== */

void FUN_00013a26(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  (*(code *)PTR_free_00037148)();
  return;
}



/* ===== FUN_00013a8c @ 00013a8c size=60 ===== */

void FUN_00013a8c(int *param_1,int param_2)

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



/* ===== FUN_00013ac8 @ 00013ac8 size=26 ===== */

undefined4 FUN_00013ac8(void)

{
  void *pvVar1;
  
  pvVar1 = memset(DAT_00013ae4,0,0x48);
  *(int *)((int)pvVar1 + 0x28) = (int)pvVar1 + 0x28;
  *(int *)((int)pvVar1 + 0x2c) = (int)pvVar1 + 0x28;
  return 0;
}



/* ===== FUN_00013ae8 @ 00013ae8 size=90 ===== */

undefined4
FUN_00013ae8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (((param_2 < 3) && (piVar5 = *(int **)(DAT_00013b44 + param_2 * 4), piVar5 != (int *)0x0)) &&
     (pvVar3 = realloc((void *)piVar5[1],(*piVar5 + 1) * 0x10), pvVar3 != (void *)0x0)) {
    iVar4 = *piVar5;
    iVar6 = iVar4 * 0x10;
    *(int *)((int)pvVar3 + iVar6) = param_1;
    *(undefined4 *)((int)pvVar3 + iVar6 + 8) = param_5;
    *(undefined4 *)((int)pvVar3 + iVar6 + 0xc) = param_3;
    piVar1 = DAT_00013b48;
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



/* ===== FUN_00013b4c @ 00013b4c size=20 ===== */

void FUN_00013b4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00013ae8(param_1,0,param_2,param_3,param_4,param_2,param_3);
  return;
}



/* ===== FUN_00013bb8 @ 00013bb8 size=88 ===== */

void FUN_00013bb8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*DAT_00013bb4;
  if (((piVar3 != (int *)0x0) && (iVar4 = piVar3[1], iVar4 != 0)) && (iVar1 = *piVar3, iVar1 != 0))
  {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (param_1 == *(int *)(iVar4 + iVar2 * 0x10)) goto LAB_00013b88;
    }
    if (iVar1 != iVar2) {
LAB_00013b88:
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



/* ===== FUN_00013bbe @ 00013bbe size=156 ===== */

undefined4 FUN_00013bbe(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  __ptr = (int *)FUN_000139a8(0x1c);
  if (__ptr != (int *)0x0) {
    iVar2 = FUN_00013744(__ptr + 2);
    if (-1 < iVar2) {
      iVar2 = __ptr[2];
      param_1 = param_1 + iVar2;
      __ptr[2] = param_1;
      if (param_1 < iVar2) {
        free(__ptr);
      }
      else {
        __ptr[3] = __ptr[3] + param_2;
        iVar2 = DAT_00013c5c;
        while (iVar1 = DAT_00013c60, iVar4 = __ptr[3], iVar2 < iVar4) {
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
            goto LAB_00013c42;
          }
        }
        piVar3 = *(int **)(iVar1 + 0x2c);
LAB_00013c42:
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



/* ===== FUN_00013c64 @ 00013c64 size=70 ===== */

int FUN_00013c64(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)(DAT_00013cac + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar2 != puVar1) {
    if (((puVar2[6] == param_1) && ((puVar2[4] == param_2 || (param_2 == -1)))) &&
       ((puVar2[5] == param_3 || (param_3 == -1)))) {
      FUN_00013a26();
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  }
  return iVar3;
}



/* ===== FUN_00013cb0 @ 00013cb0 size=42 ===== */

undefined4 FUN_00013cb0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_00013cdc + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_00013cdc + 0x28)) {
      return 0;
    }
    if (((puVar1[6] == param_1) && (puVar1[4] == param_2)) && (puVar1[5] == param_3)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}



/* ===== FUN_00013ce0 @ 00013ce0 size=68 ===== */

undefined4 FUN_00013ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00013d24;
  pvVar2 = realloc(*(void **)(DAT_00013d24 + 0x34),(*(int *)(DAT_00013d24 + 0x30) + 1) * 0x10);
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
    signal(param_1,DAT_00013d28);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00013d2c @ 00013d2c size=34 ===== */

void FUN_00013d2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00013ce0(2,param_1,param_2);
  if (iVar1 == 0) {
    FUN_00013ce0(0xf,param_1,param_2,param_4);
    return;
  }
  return;
}



/* ===== FUN_00013d4e @ 00013d4e size=10 ===== */

void FUN_00013d4e(undefined4 param_1,undefined4 param_2)

{
  FUN_00013ce0(1,param_1,param_2);
  return;
}



/* ===== FUN_00013d58 @ 00013d58 size=396 ===== */

void FUN_00013d58(void)

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
  piVar1 = DAT_00013ee4;
  if (((__readfds != (fd_set *)0x0) && (__writefds != (fd_set *)0x0)) &&
     (__exceptfds != (fd_set *)0x0)) {
    piVar9 = DAT_00013ee4 + 10;
    while (piVar1[0x10] == 0) {
      piVar8 = (int *)piVar1[10];
      if (piVar8 == piVar9) {
        if (((piVar1[1] < 1) && (piVar1[4] < 1)) && (piVar1[7] < 1)) break;
        piVar8 = (int *)0x0;
      }
      else if (piVar8 != (int *)0x0) {
        FUN_00013744(&local_30);
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
      FUN_000139e8(DAT_00013ee8,__readfds);
      FUN_000139e8(DAT_00013eec,__writefds);
      FUN_000139e8(DAT_00013ef0,__exceptfds);
      __timeout = (timeval *)0x0;
      if (piVar8 != (int *)0x0) {
        __timeout = &local_38;
      }
      iVar2 = select(*piVar1 + 1,__readfds,__writefds,__exceptfds,__timeout);
      if ((iVar2 < 0) && (puVar3 = (uint *)__errno_location(), (*puVar3 & 0xfffffffb) != 0)) {
        perror(DAT_00013ef4);
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
        FUN_00013744(&local_30);
        if ((piVar8[2] <= local_30) && ((local_30 != piVar8[2] || (piVar8[3] <= local_2c)))) {
          iVar6 = piVar8[4];
          iVar5 = piVar8[5];
          pcVar7 = (code *)piVar8[6];
          FUN_00013a26(piVar8);
          (*pcVar7)(iVar6,iVar5);
        }
      }
      if (0 < iVar2) {
        if (piVar1[2] != 0) {
          FUN_00013a8c(DAT_00013ee8,__readfds);
        }
        if (piVar1[5] != 0) {
          FUN_00013a8c(DAT_00013eec,__writefds);
        }
        if (piVar1[8] != 0) {
          FUN_00013a8c(DAT_00013ef0,__exceptfds);
        }
      }
    }
  }
  free(__readfds);
  free(__writefds);
  (*(code *)PTR_free_00037148)(__exceptfds);
  return;
}



/* ===== FUN_00013ef8 @ 00013ef8 size=8 ===== */

void FUN_00013ef8(void)

{
  *(undefined4 *)(DAT_00013f00 + 0x40) = 1;
  return;
}



/* ===== FUN_00013f04 @ 00013f04 size=60 ===== */

void FUN_00013f04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_00013f40;
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_00013744(&uStack_18);
  piVar2 = *(int **)(iVar1 + 0x28);
  piVar3 = (int *)**(int **)(iVar1 + 0x28);
  while (piVar2 != (int *)(iVar1 + 0x28)) {
    FUN_00013a26();
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0x14));
  free(*(void **)(iVar1 + 0x20));
  free(*(void **)(iVar1 + 0x34));
  return;
}



/* ===== FUN_00013f50 @ 00013f50 size=68 ===== */

void FUN_00013f50(uint param_1)

{
  __fd_mask *p_Var1;
  int iVar2;
  uint auStack_90 [33];
  
  if (-1 < (int)param_1) {
    iVar2 = 0;
    p_Var1 = (__fd_mask *)auStack_90;
    do {
      iVar2 = iVar2 + 1;
      *p_Var1 = 0;
      p_Var1 = p_Var1 + 1;
    } while (iVar2 != 0x20);
    auStack_90[param_1 >> 5] = 1 << (param_1 & 0x1f) | auStack_90[param_1 >> 5];
    select(param_1 + 1,(fd_set *)auStack_90,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
  }
  return;
}



/* ===== FUN_00013f94 @ 00013f94 size=40 ===== */

void FUN_00013f94(FILE *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001257c(param_3);
  if (iVar1 == 0) {
    return;
  }
  fprintf(param_1,DAT_00013fbc,param_2,iVar1);
  (*(code *)PTR_free_00037148)(iVar1);
  return;
}



/* ===== FUN_00013fc0 @ 00013fc0 size=16 ===== */

void FUN_00013fc0(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  (*(code *)PTR_fprintf_00037090)(param_1,DAT_00013fd0,param_2,param_3);
  return;
}



/* ===== FUN_00013fd4 @ 00013fd4 size=172 ===== */

byte * FUN_00013fd4(byte *param_1,FILE *param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  uint uVar7;
  byte *__s;
  
  uVar2 = DAT_00014080;
  do {
    do {
      pcVar3 = fgets((char *)param_1,0x100,param_2);
      __s = (byte *)0x0;
      if (pcVar3 == (char *)0x0) goto LAB_00014078;
      *param_3 = *param_3 + 1;
      param_1[0xff] = 0;
      pbVar4 = param_1;
      do {
        do {
          __s = pbVar4;
          bVar1 = *__s;
          pbVar4 = __s + 1;
        } while (bVar1 == 0x20);
      } while ((bVar1 & 0xfb) == 9);
    } while (((bVar1 == 0x23) || (bVar1 == 10)) || (bVar1 == 0));
    pcVar3 = strchr((char *)__s,0x22);
    pbVar4 = __s;
    if ((pcVar3 != (char *)0x0) &&
       (pbVar4 = (byte *)strrchr(pcVar3 + 1,0x22), pbVar4 == (byte *)0x0)) {
      pbVar4 = __s;
    }
    pbVar4 = (byte *)strchr((char *)pbVar4,0x23);
    if (pbVar4 == (byte *)0x0) {
      sVar6 = strlen((char *)__s);
      pbVar5 = __s + (sVar6 - 1);
      goto LAB_00014058;
    }
    do {
      pbVar5 = pbVar4 + -1;
      *pbVar4 = 0;
LAB_00014058:
    } while (((__s < pbVar5) && (uVar7 = *pbVar5 - 9 & 0xff, uVar7 < 0x18)) &&
            (pbVar4 = pbVar5, (~(uVar2 >> uVar7) & 1) == 0));
  } while (*__s == 0);
LAB_00014078:
  *param_4 = __s;
  return __s;
}



/* ===== FUN_00014084 @ 00014084 size=570 ===== */

undefined4 * FUN_00014084(char *param_1)

{
  int *piVar1;
  undefined4 *__ptr;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  size_t __n;
  void *pvVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  uint uVar11;
  void *__ptr_00;
  int *local_250;
  int *local_24c;
  char *local_234;
  undefined4 local_230;
  char *local_22c;
  undefined1 auStack_228 [256];
  undefined1 auStack_128 [260];
  
  iVar8 = 0;
  local_230 = 0;
  __ptr = (undefined4 *)FUN_00012756(0,0);
  if (__ptr != (undefined4 *)0x0) {
    __stream = fopen64(param_1,DAT_000142c0);
    if (__stream == (FILE *)0x0) {
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      local_250 = (int *)0x0;
      local_24c = (int *)0x0;
      iVar9 = iVar8;
LAB_00014146:
      iVar4 = FUN_00013fd4(auStack_228,__stream,&local_230,&local_234);
      pcVar5 = local_234;
      if (iVar4 != 0) {
        iVar4 = strcmp(local_234,DAT_000142c4);
        if (iVar4 != 0) {
          iVar4 = strncmp(pcVar5,DAT_000142cc,0xc);
          if (iVar4 != 0) goto LAB_00014260;
          pcVar6 = strchr(pcVar5 + 0xc,0x3d);
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
            sVar10 = 0;
            __ptr_00 = (void *)0x0;
            while (iVar4 = FUN_00013fd4(auStack_128,__stream,&local_230,&local_22c),
                  pcVar6 = local_22c, iVar4 != 0) {
              iVar4 = strcmp(local_22c,DAT_000142c8);
              if (iVar4 == 0) {
                piVar2 = (int *)FUN_000139a8(0x10);
                if (piVar2 != (int *)0x0) {
                  pcVar5 = strdup(pcVar5 + 0xc);
                  *piVar2 = (int)pcVar5;
                  iVar4 = FUN_0001b5f8(__ptr_00,sVar10,piVar2 + 2);
                  piVar2[1] = iVar4;
                  free(__ptr_00);
                  if ((*piVar2 != 0) && (piVar2[1] != 0)) {
                    FUN_00012742(__ptr,piVar2);
                    goto LAB_00014146;
                  }
                  FUN_00012664(piVar2);
                  goto LAB_000142ba;
                }
                break;
              }
              __n = strlen(pcVar6);
              pvVar7 = realloc(__ptr_00,__n + sVar10);
              if (pvVar7 == (void *)0x0) break;
              memcpy((void *)((int)pvVar7 + sVar10),pcVar6,__n);
              sVar10 = __n + sVar10;
              __ptr_00 = pvVar7;
            }
            free(__ptr_00);
          }
          goto LAB_000142ba;
        }
        iVar4 = iVar9 + 1;
        piVar2 = (int *)FUN_000139a8(0xf4);
        if (piVar2 != (int *)0x0) {
          piVar2[2] = iVar9;
          FUN_0001249a();
          iVar9 = 0;
LAB_000140ea:
          iVar3 = FUN_00013fd4(auStack_128,__stream,&local_230,&local_22c);
          pcVar5 = local_22c;
          if (iVar3 == 0) {
            iVar9 = iVar9 + 1;
          }
          else {
            iVar3 = strcmp(local_22c,DAT_000142c8);
            if (iVar3 != 0) {
              pcVar5 = strchr(pcVar5,0x3d);
              if (pcVar5 != (char *)0x0) goto LAB_00014194;
              goto LAB_00014190;
            }
          }
          uVar11 = 0;
          if (piVar2[0x12] != 0) {
            uVar11 = (uint)(piVar2[0x11] != 0);
            FUN_00012624(piVar2);
          }
          if (((piVar2[0x15] & 0x142U) != 0) && (piVar2[0x11] == 0)) {
            uVar11 = uVar11 + 1;
          }
          if ((piVar2[0x14] << 0x1b < 0) && ((piVar2[0x13] & 0x11U) == 0)) {
            piVar2[0x14] = piVar2[0x14] & 0xffffffef;
          }
          if (iVar9 + uVar11 == 0) {
            piVar1 = piVar2;
            if (local_250 != (int *)0x0) {
              *local_24c = (int)piVar2;
              piVar1 = local_250;
            }
            local_250 = piVar1;
            iVar3 = FUN_0001231e(__ptr,piVar2);
            iVar9 = iVar4;
            local_24c = piVar2;
            if (iVar3 != 0) {
              iVar8 = iVar8 + 1;
            }
            goto LAB_00014146;
          }
          FUN_000123ce(piVar2);
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar4;
        goto LAB_00014146;
      }
      fclose(__stream);
      *__ptr = local_250;
      if (iVar8 != 0) {
        FUN_00012682(__ptr);
        __ptr = (undefined4 *)0x0;
      }
    }
  }
  return __ptr;
LAB_00014260:
  iVar4 = FUN_000127a8(__ptr,pcVar5,local_230);
  if (iVar4 < 0) {
LAB_000142ba:
    iVar8 = iVar8 + 1;
  }
  goto LAB_00014146;
LAB_00014194:
  *pcVar5 = '\0';
  if (((pcVar5[1] == '\"') && (pcVar6 = strchr(pcVar5 + 2,0x22), pcVar6 == (char *)0x0)) ||
     (iVar3 = FUN_000124aa(piVar2,local_22c,pcVar5 + 1,local_230), iVar3 < 0)) {
LAB_00014190:
    iVar9 = iVar9 + 1;
  }
  goto LAB_000140ea;
}



/* ===== FUN_000142d0 @ 000142d0 size=818 ===== */

undefined4 FUN_000142d0(char *param_1,int *param_2)

{
  char *__format;
  FILE *__stream;
  char *pcVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char acStack_3c [24];
  
  __stream = fopen64(param_1,DAT_00014418);
  if (__stream == (FILE *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    if (param_2[5] != 0) {
      fprintf(__stream,DAT_0001441c);
    }
    if (param_2[6] != 0) {
      fprintf(__stream,DAT_00014420);
    }
    if (param_2[3] != 1) {
      fprintf(__stream,DAT_00014424);
    }
    if (param_2[4] != 1) {
      fprintf(__stream,DAT_00014428);
    }
    if (param_2[7] != 1) {
      fprintf(__stream,DAT_0001442c);
    }
    if (param_2[8] != 0) {
      fprintf(__stream,DAT_00014430);
    }
    if (param_2[9] != 0) {
      fprintf(__stream,DAT_00014434);
    }
    if (param_2[10] != 0) {
      fprintf(__stream,DAT_00014438);
    }
    if (param_2[0xb] != 0) {
      fprintf(__stream,DAT_0001443c);
    }
    if (param_2[0xc] != 0) {
      fprintf(__stream,DAT_00014440);
    }
    if (param_2[0xd] != 0) {
      fprintf(__stream,DAT_00014444);
    }
    if (param_2[0xe] != 0) {
      fprintf(__stream,DAT_00014448);
    }
    if (param_2[0xf] != 0) {
      fprintf(__stream,DAT_0001444c);
    }
    if (((char)param_2[0x1f] != '\0') && (*(char *)((int)param_2 + 0x7d) != '\0')) {
      fprintf(__stream,DAT_00014450);
    }
    if (param_2[0x3f] != 200) {
      fprintf(__stream,DAT_00014454);
    }
    if (param_2[0x40] != 0xb4) {
      fprintf(__stream,DAT_00014458);
    }
    if (param_2[0x41] != 2) {
      fprintf(__stream,DAT_0001445c);
    }
    if (param_2[0x42] != 0) {
      fprintf(__stream,DAT_00014460);
    }
    if (param_2[0x43] != 0x80) {
      fprintf(__stream,DAT_00014464);
    }
    if (param_2[0x45] != 0) {
      fprintf(__stream,DAT_00014468);
    }
    uVar5 = DAT_00014470;
    for (piVar3 = (int *)*param_2; pcVar1 = DAT_0001446c, piVar3 != (int *)0x0;
        piVar3 = (int *)*piVar3) {
      if ((piVar3[0x15] != 0x200) && (piVar3[0x3b] == 0)) {
        fputs(DAT_00014660,__stream);
        FUN_00013f94(__stream,DAT_00014664,piVar3);
        FUN_00013fc0(__stream,uVar5,piVar3[0x18]);
        pvVar2 = (void *)FUN_0001257c(piVar3,DAT_00014668);
        if (pvVar2 != (void *)0x0) {
          fprintf(__stream,DAT_0001466c,pvVar2);
          free(pvVar2);
        }
        pvVar2 = (void *)FUN_0001257c(piVar3,DAT_00014670);
        if (pvVar2 != (void *)0x0) {
          fprintf(__stream,DAT_00014674,pvVar2);
          free(pvVar2);
        }
        if ((piVar3[0x16] != 3) &&
           (pcVar1 = (char *)FUN_0001257c(piVar3,DAT_00014678), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_0001467c,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x15] != 3) &&
           (pcVar1 = (char *)FUN_0001257c(piVar3,DAT_00014680), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00014684,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x13] != 0x18) &&
           (pcVar1 = (char *)FUN_0001257c(piVar3,DAT_00014688), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_0001468c,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x14] != 0x1e) &&
           (pcVar1 = (char *)FUN_0001257c(piVar3,DAT_00014690), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00014694,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x17] != 0) &&
           (pcVar1 = (char *)FUN_0001257c(piVar3,DAT_00014698), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_0001469c,pcVar1);
          }
          free(pcVar1);
        }
        __format = DAT_000146c4;
        pcVar1 = DAT_000146c0;
        iVar6 = 0;
        do {
          snprintf(acStack_3c,0x14,pcVar1,iVar6);
          pvVar2 = (void *)FUN_0001257c(piVar3,acStack_3c);
          if (pvVar2 != (void *)0x0) {
            fprintf(__stream,__format,acStack_3c,pvVar2);
            free(pvVar2);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
        FUN_00013fc0(__stream,DAT_000146a0,piVar3[0x2d]);
        FUN_00013fc0(__stream,DAT_000146a4,piVar3[3]);
        FUN_00013fc0(__stream,DAT_000146a8,piVar3[0x30]);
        FUN_00013fc0(__stream,DAT_000146ac,piVar3[0x2e]);
        FUN_00013fc0(__stream,DAT_000146b0,piVar3[0x31]);
        FUN_00013fc0(__stream,DAT_000146b4,piVar3[0x32]);
        FUN_00013f94(__stream,DAT_000146b8,piVar3);
        fputs(DAT_000146bc,__stream);
      }
    }
    for (puVar4 = (undefined4 *)param_2[0x10]; uVar5 = 0, puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[3]) {
      pvVar2 = (void *)FUN_0001b4f0(puVar4[1],puVar4[2],0);
      if (pvVar2 == (void *)0x0) {
        uVar5 = 0xffffffff;
        break;
      }
      fprintf(__stream,pcVar1,*puVar4,pvVar2);
      free(pvVar2);
    }
    fclose(__stream);
  }
  return uVar5;
}



/* ===== FUN_000146ca @ 000146ca size=6 ===== */

void FUN_000146ca(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(*param_1);
  return;
}



/* ===== FUN_000146d0 @ 000146d0 size=60 ===== */

undefined4 FUN_000146d0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 1:
    iVar2 = *param_1;
    uVar1 = DAT_00014740;
    uVar3 = DAT_0001473c;
    break;
  case 2:
    iVar2 = *param_1;
    uVar1 = DAT_00014738;
    uVar3 = DAT_00014734;
    break;
  default:
    return 0;
  case 4:
    iVar2 = *param_1;
    uVar1 = DAT_00014730;
    uVar3 = DAT_0001472c;
    break;
  case 8:
    iVar2 = *param_1;
    uVar1 = DAT_00014728;
    uVar3 = DAT_00014724;
    break;
  case 0x10:
    iVar2 = *param_1;
    uVar1 = DAT_00014720;
    uVar3 = DAT_0001471c;
  }
  if (iVar2 != 2) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* ===== FUN_00014744 @ 00014744 size=32 ===== */

int FUN_00014744(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1d4) != 1)) {
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00014764,
                 *(int *)(param_1 + 0x15c),param_4);
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_00014768 @ 00014768 size=140 ===== */

undefined4
FUN_00014768(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == 4) {
    if (param_3 != 0xd) goto LAB_000147d8;
    bVar5 = SBORROW4(param_4,0xc);
    iVar1 = param_4 + -0xc;
    bVar4 = param_4 == 0xc;
  }
  else {
    if (4 < param_2) {
      if (param_2 == 8) {
        if ((param_3 == 0x20) && (0x1f < param_4)) {
          *param_5 = 6;
          uVar2 = 2;
LAB_000147a6:
          *param_6 = uVar2;
          return 0;
        }
      }
      else {
        if (param_2 != 0x10) goto LAB_0001477c;
        if ((param_3 == 0x10) && (0xf < param_4)) {
          *param_5 = 6;
          uVar2 = 3;
          goto LAB_000147a6;
        }
      }
      goto LAB_000147d8;
    }
    if (param_2 != 2) {
LAB_0001477c:
      FUN_0001341c(*(undefined4 *)(*param_1 + 4),4,DAT_000147f4,param_2,param_1,param_2);
      return 0xffffffff;
    }
    if (param_3 != 5) goto LAB_000147d8;
    bVar5 = SBORROW4(param_4,4);
    iVar1 = param_4 + -4;
    bVar4 = param_4 == 4;
  }
  if (!bVar4 && iVar1 < 0 == bVar5) {
    *param_5 = 0;
    *param_6 = 1;
    return 0;
  }
LAB_000147d8:
  uVar3 = *(undefined4 *)(*param_1 + 4);
  uVar2 = FUN_0001784c(param_2);
  FUN_0001341c(uVar3,4,DAT_000147f8,uVar2,param_3,param_4);
  return 0xffffffff;
}



/* ===== FUN_000147fc @ 000147fc size=112 ===== */

void FUN_000147fc(int param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)param_3[5];
  uVar2 = (uint)param_3[4];
  uVar3 = (uint)param_3[3];
  uVar4 = (uint)param_3[2];
  uVar5 = (uint)param_3[1];
  uVar6 = (uint)*param_3;
  FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_0001486c,param_2,uVar6,uVar5,
               uVar4,uVar3,uVar2,uVar1);
  if ((param_4 != 0) && (*(int *)(param_1 + 500) == 0)) {
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00014870,
                 *(int *)(param_1 + 0x15c),uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
  if ((param_5 != 0) && (*(int *)(param_1 + 0x1f8) == 0)) {
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00014874,
                 *(int *)(param_1 + 0x15c),uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001486a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[5])(**(undefined4 **)(param_1 + 0x15c),0x11);
  return;
}



/* ===== FUN_00014878 @ 00014878 size=220 ===== */

undefined4 FUN_00014878(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *__s2;
  size_t sVar4;
  code *pcVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  sVar4 = param_2[0xc];
  __s2 = param_2 + 4;
  if ((*(size_t *)(param_1 + 300) == sVar4) &&
     (iVar1 = memcmp((void *)(param_1 + 0x10c),__s2,sVar4), iVar1 == 0)) {
    return 0;
  }
  puVar3 = __s2;
  if (*(int *)(param_1 + 0x1d8) == 8) {
    local_40 = *__s2;
    uStack_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    local_30 = param_2[10];
    uStack_2c = param_2[0xb];
    uStack_28 = param_2[8];
    uStack_24 = param_2[9];
    puVar3 = &local_40;
  }
  pcVar5 = (code *)(*(undefined4 **)(param_1 + 0x15c))[6];
  uVar2 = **(undefined4 **)(param_1 + 0x15c);
  if (*(int *)(param_1 + 0x1d4) == 1) {
    iVar1 = (*pcVar5)(uVar2,*param_2,0,param_2[3],1,param_3,param_2[2],puVar3,sVar4);
    if (-1 < iVar1) {
LAB_00014940:
      sVar4 = param_2[0xc];
      *(size_t *)(param_1 + 300) = sVar4;
      memcpy((void *)(param_1 + 0x10c),__s2,sVar4);
      return 0;
    }
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00014954);
  }
  else {
    iVar1 = (*pcVar5)(uVar2,*param_2,DAT_00014958,param_2[3],param_2[1],param_3,param_2[2],puVar3,
                      sVar4);
    if (-1 < iVar1) goto LAB_00014940;
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_0001495c,*param_2,param_2[0xc]
                 ,param_2[3]);
  }
  return 0xffffffff;
}



/* ===== FUN_00014960 @ 00014960 size=164 ===== */

void FUN_00014960(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x15c) + 4);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = FUN_0001784c(*(undefined4 *)(param_1 + 0x1d4));
  uVar8 = FUN_0001784c(*(undefined4 *)(param_1 + 0x1d8));
  FUN_0001341c(uVar10,3,DAT_00014a04,uVar3,uVar4,uVar5,uVar6,uVar1,uVar2,uVar7,uVar8);
  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xb])(**(undefined4 **)(param_1 + 0x15c));
  FUN_000146ca(*(undefined4 *)(param_1 + 0x15c),9);
  if (param_3 != 0) {
    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0x11])
              (**(undefined4 **)(param_1 + 0x15c),param_2,3,1);
    FUN_00013bbe(1,0,DAT_00014a08,param_1,0);
  }
  iVar9 = *(int *)(param_1 + 0x138);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x50) != 0)) {
    *(undefined4 *)(iVar9 + 0x50) = 0;
  }
  return;
}



/* ===== FUN_00014a0c @ 00014a0c size=178 ===== */

void FUN_00014a0c(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined2 param_5
                 ,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  char *pcVar2;
  
  if ((((((*param_4 == '\0' && param_4[1] == '\0') && param_4[2] == '\0') && param_4[3] == '\0') &&
       param_4[4] == '\0') && param_4[5] == '\0') &&
     (((((*(char *)(param_1 + 0x1b8) == '\0' && *(char *)(param_1 + 0x1b9) == '\0') &&
        *(char *)(param_1 + 0x1ba) == '\0') && *(char *)(param_1 + 0x1bb) == '\0') &&
      *(char *)(param_1 + 0x1bc) == '\0') && *(char *)(param_1 + 0x1bd) == '\0')) {
    pcVar2 = (char *)(param_1 + 0x1b8);
    iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[8])
                      (**(undefined4 **)(param_1 + 0x15c),pcVar2);
    if (-1 < iVar1) goto LAB_00014a3e;
  }
  pcVar2 = param_4;
LAB_00014a3e:
  if ((param_8 == 0) || (iVar1 = FUN_000173ac(param_2,param_3,param_6,param_7,param_8), iVar1 == 0))
  {
    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[9])
              (**(undefined4 **)(param_1 + 0x15c),pcVar2,param_5,param_6,param_7);
  }
  else {
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),5,DAT_00014ac0,param_3);
  }
  (*(code *)PTR_free_00037148)(param_6);
  return;
}



/* ===== FUN_00014ac4 @ 00014ac4 size=280 ===== */

void FUN_00014ac4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 auStack_28 [8];
  
  if ((*(uint *)(param_1 + 0x1dc) & 0x1e0) == 0) {
    if (*(int *)(param_1 + 0x1d4) == 0x10) {
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 3;
  }
  iVar2 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[8])
                    (**(undefined4 **)(param_1 + 0x15c),auStack_28);
  if (iVar2 < 0) {
    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00014bdc);
  }
  else {
    iVar2 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                      (**(undefined4 **)(param_1 + 0x15c),3,0,0x5f,&local_30,&local_2c);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1d0) == 2) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0xfe;
      }
      *local_2c = uVar3;
      if (*(int *)(param_1 + 0xac) == 0) {
        uVar4 = uVar6 | 0x800;
      }
      else {
        uVar4 = uVar6 | 0x900;
      }
      if (param_2 != 0) {
        uVar4 = uVar4 | 0x400;
      }
      if (param_3 != 0) {
        uVar4 = uVar4 | 8;
      }
      local_2c[2] = (char)uVar4;
      local_2c[3] = 0;
      local_2c[4] = 0;
      local_2c[1] = (char)(uVar4 >> 8);
      *(undefined4 *)(local_2c + 5) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(local_2c + 9) = *(undefined4 *)(param_1 + 0x108);
      FUN_00013362((undefined4 *)(param_1 + 0x104),8);
      uVar1 = DAT_00014be0;
      local_2c[0x5d] = 0;
      local_2c[0x5e] = 0;
      FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,uVar1,param_2,param_3,
                   *(undefined4 *)(param_1 + 0xac),local_30);
      puVar5 = (undefined1 *)0x0;
      if ((uVar4 & 0x100) != 0) {
        puVar5 = local_2c + 0x4d;
      }
      FUN_00014a0c(param_1,param_1 + 0x24,uVar6,auStack_28,0x888e,iVar2,local_30,puVar5);
    }
  }
  return;
}



/* ===== FUN_00014bec @ 00014bec size=222 ===== */

undefined4
FUN_00014bec(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            void *param_6,uint param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar7;
  undefined4 local_30;
  undefined1 *local_2c [2];
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (param_6 == (void *)0x0) {
    FUN_0001341c(puVar1[1],4,DAT_00014ccc);
  }
  else {
    iVar2 = (*(code *)puVar1[0xc])
                      (*puVar1,3,0,(param_7 & 0xffff) + 0x5f & 0xffff,&local_30,local_2c);
    if (iVar2 != 0) {
      bVar7 = *(int *)(param_1 + 0x1d0) == 2;
      if (bVar7) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0xfe;
      }
      *local_2c[0] = uVar3;
      local_2c[0][1] = (byte)((uint)param_4 >> 8) | 1;
      local_2c[0][2] = (byte)param_4 | 8;
      if (bVar7) {
        local_2c[0][3] = 0;
        local_2c[0][4] = 0;
      }
      else {
        *(undefined2 *)(local_2c[0] + 3) = *(undefined2 *)(param_3 + 3);
      }
      *(undefined4 *)(local_2c[0] + 5) = *(undefined4 *)(param_3 + 5);
      uVar4 = *(undefined4 *)(param_3 + 9);
      local_2c[0][0x5d] = (char)((param_7 & 0xffff) >> 8);
      local_2c[0][0x5e] = (char)param_7;
      *(undefined4 *)(local_2c[0] + 9) = uVar4;
      memcpy(local_2c[0] + 0x5f,param_6,param_7);
      puVar1 = (undefined4 *)(local_2c[0] + 0xd);
      puVar5 = param_5;
      do {
        puVar6 = puVar5 + 1;
        *puVar1 = *puVar5;
        puVar1 = puVar1 + 1;
        puVar5 = puVar6;
      } while (puVar6 != param_5 + 8);
      FUN_00014a0c(param_1,param_8,param_4,param_2,0x888e,iVar2,local_30,local_2c[0] + 0x4d);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014cd0 @ 00014cd0 size=198 ===== */

undefined4
FUN_00014cd0(int param_1,undefined4 param_2,int param_3,uint param_4,ushort param_5,void *param_6,
            uint param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_30;
  undefined1 *local_2c [2];
  
  iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                    (**(undefined4 **)(param_1 + 0x15c),3,0,(param_7 & 0xffff) + 0x5f & 0xffff,
                     &local_30,local_2c);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    bVar5 = *(int *)(param_1 + 0x1d0) == 2;
    if (bVar5) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0xfe;
    }
    *local_2c[0] = uVar2;
    uVar3 = param_4 | param_5 & 0x200 | 0x108;
    local_2c[0][2] = (char)uVar3;
    local_2c[0][1] = (char)(uVar3 >> 8);
    if (bVar5) {
      local_2c[0][3] = 0;
      local_2c[0][4] = 0;
    }
    else {
      *(undefined2 *)(local_2c[0] + 3) = *(undefined2 *)(param_3 + 3);
    }
    *(undefined4 *)(local_2c[0] + 5) = *(undefined4 *)(param_3 + 5);
    uVar4 = *(undefined4 *)(param_3 + 9);
    local_2c[0][0x5d] = (char)((param_7 & 0xffff) >> 8);
    local_2c[0][0x5e] = (char)param_7;
    *(undefined4 *)(local_2c[0] + 9) = uVar4;
    if (param_6 != (void *)0x0) {
      memcpy(local_2c[0] + 0x5f,param_6,param_7);
    }
    FUN_00014a0c(param_1,param_8,param_4,param_2,0x888e,iVar1,local_30,local_2c[0] + 0x4d);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_00014da6 @ 00014da6 size=362 ===== */

uint FUN_00014da6(int param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_4c [40];
  
  if (*(int *)(param_1 + 0x138) == 0) {
    local_4c[0] = 0;
  }
  else {
    FUN_000133ac(local_4c,0x21,*(int *)(param_1 + 0x138) + 4,0x10);
  }
  uVar6 = DAT_00014f10;
  if (((*(uint *)(param_1 + 0x1dc) & 0x1e3) != 0) && (*(int *)(param_1 + 0x1d0) == 2)) {
    uVar6 = DAT_00014f14;
  }
  uVar3 = *(int *)(param_1 + 0x1d8) - 2;
  if (uVar3 < 0xf) {
    iVar4 = (int)*(short *)(DAT_00014f18 + uVar3 * 2);
  }
  else {
    iVar4 = 0;
  }
  uVar3 = snprintf(param_2,param_3,DAT_00014f1c,uVar6,uVar6,1,iVar4,*(undefined4 *)(param_1 + 0x1c0)
                   ,*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8));
  if (param_3 <= uVar3) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x1dc);
  if (iVar4 == 2) {
    iVar4 = *(int *)(param_1 + 0x1d0);
    uVar1 = DAT_00014f2c;
    uVar7 = DAT_00014f28;
  }
  else {
    uVar7 = DAT_00014f30;
    if (iVar4 == 0x10) goto LAB_00014e4e;
    if (iVar4 != 1) {
      uVar7 = 0;
      goto LAB_00014e4e;
    }
    iVar4 = *(int *)(param_1 + 0x1d0);
    uVar1 = 0x50f201;
    uVar7 = DAT_00014f20;
  }
  if (iVar4 != 2) {
    uVar7 = uVar1;
  }
LAB_00014e4e:
  uVar1 = FUN_000146d0(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x1d4));
  uVar8 = uVar7 >> 8 & 0xff;
  uVar5 = (uVar1 & 0xffff) >> 8;
  uVar9 = (uVar1 & 0xffffff) >> 0x10;
  uVar2 = FUN_000146d0(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x1d8));
  uVar10 = (uVar2 & 0xffffff) >> 0x10;
  uVar11 = (uVar2 & 0xffff) >> 8;
  uVar1 = snprintf(param_2 + uVar3,param_3 - uVar3,DAT_00014f24,0,uVar7 >> 0x10,uVar8,uVar7 & 0xff,
                   uVar1 >> 0x18,uVar9,uVar5,uVar1 & 0xff,uVar2 >> 0x18,uVar10,uVar11,uVar2 & 0xff,
                   local_4c,0,uVar7 >> 0x10,uVar8,uVar7 & 0xff,uVar1 >> 0x18,uVar9,uVar5,
                   uVar1 & 0xff,uVar2 >> 0x18,uVar10,uVar11,uVar2 & 0xff,
                   *(undefined4 *)(param_1 + 0x1cc));
  if (uVar1 < param_3) {
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}



/* ===== FUN_00014f34 @ 00014f34 size=58 ===== */

void FUN_00014f34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_000139a8(0x208);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x13c) = iVar1 + 0x13c;
    *(int *)(iVar1 + 0x140) = iVar1 + 0x13c;
    *(undefined4 *)(iVar1 + 0x15c) = param_1;
    *(undefined4 *)(iVar1 + 0xf4) = 1;
    *(undefined4 *)(iVar1 + 0x1c0) = 0xa8c0;
    *(undefined4 *)(iVar1 + 0x1c4) = 0x46;
    *(undefined4 *)(iVar1 + 0x1c8) = 0x3c;
    *(undefined4 *)(iVar1 + 0x134) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00014f6e @ 00014f6e size=76 ===== */

void FUN_00014f6e(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00013c64(DAT_00014fbc,param_1,0);
  FUN_00013c64(DAT_00014fc0,param_1,0);
  free(*(void **)(param_1 + 0x1ec));
  free(*(void **)(param_1 + 500));
  free(*(void **)(param_1 + 0x1f8));
  free(*(void **)(param_1 + 0x15c));
  FUN_00016584(param_1);
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00014fc4 @ 00014fc4 size=72 ===== */

void FUN_00014fc4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1b8) = *param_2;
    *(undefined2 *)(param_1 + 0x1bc) = *(undefined2 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 1;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = uVar1;
    *(undefined4 *)(param_1 + 0x114) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 0x118) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    *(undefined4 *)(param_1 + 0x124) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_1 + 0x128) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = uVar1;
  }
  return;
}



/* ===== FUN_0001500c @ 0001500c size=30 ===== */

void FUN_0001500c(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[3])(**(undefined4 **)(param_1 + 0x15c));
  if (iVar1 == 7) {
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  }
  return;
}



/* ===== FUN_0001502a @ 0001502a size=22 ===== */

void FUN_0001502a(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  (*(code *)PTR_memcpy_00037044)();
  return;
}



/* ===== FUN_00015040 @ 00015040 size=38 ===== */

void FUN_00015040(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[0x4e];
    if (iVar1 != 0) {
      param_1[8] = *(undefined4 *)(iVar1 + 0x34);
      (*(code *)PTR_memcpy_00037044)(param_1,iVar1 + 0x14);
      return;
    }
    param_1[8] = 0x20;
    *param_1 = 0;
    param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[4] = 0;
    param_1[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  return;
}



/* ===== FUN_00015066 @ 00015066 size=3182 ===== */

undefined4 FUN_00015066(int param_1,void *param_2,void *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  void *__dest;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  void *pvVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  int *piVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 **ppuVar29;
  void **ppvVar30;
  bool bVar31;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined1 *local_94 [2];
  int local_8c;
  undefined4 local_88;
  void *local_84;
  byte *local_80;
  int local_7c;
  
  if (param_4 < 99) {
    return 0;
  }
  __dest = malloc(param_4);
  if (__dest == (void *)0x0) {
    return 0xffffffff;
  }
  memcpy(__dest,param_3,param_4);
  if ((((*(char *)((int)__dest + 1) != '\x03') ||
       (uVar27 = (*(ushort *)((int)__dest + 2) & 0xff) << 8 |
                 (uint)(*(ushort *)((int)__dest + 2) >> 8), param_4 - 4 < uVar27)) ||
      (uVar27 < 0x5f)) ||
     ((*(char *)((int)__dest + 4) != -2 && (*(char *)((int)__dest + 4) != '\x02')))) {
    uVar20 = 0;
    goto LAB_00015110;
  }
  bVar1 = *(byte *)((int)__dest + 5);
  bVar2 = *(byte *)((int)__dest + 6);
  uVar9 = CONCAT11(bVar1,bVar2);
  uVar23 = (uint)uVar9;
  uVar28 = uVar23 & 7;
  if (uVar28 - 1 < 2) {
    if ((*(int *)(param_1 + 0x1d4) == 0x10) && (uVar28 != 2)) {
      FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_000153bc,1);
      if ((*(int *)(param_1 + 0x1d8) != 0x10) && (-1 < (int)(uVar23 << 0x1c))) {
        FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_000153c0);
        goto LAB_00015130;
      }
    }
    else {
LAB_00015130:
      piVar22 = *(int **)(param_1 + 0x204);
      while ((piVar22 != (int *)0x0 && (iVar11 = memcmp(piVar22 + 2,param_2,6), iVar11 != 0))) {
        piVar22 = (int *)*piVar22;
      }
      if ((bVar1 & 0x20) == 0) {
        if (piVar22 == (int *)0x0) goto LAB_000151be;
        if (piVar22[1] != 0) {
          local_94[0] = *(undefined1 **)((int)__dest + 9);
          local_94[1] = *(undefined1 **)((int)__dest + 0xd);
          FUN_00013362(local_94,8,(undefined4 *)((int)__dest + 9),&local_8c);
          iVar11 = memcmp(local_94,piVar22 + 0x4e,8);
          if (iVar11 == 0) goto LAB_000151a2;
          goto LAB_0001510c;
        }
        if ((piVar22[0x50] == 0) ||
           (iVar11 = memcmp((void *)((int)__dest + 9),piVar22 + 0x4e,8), 0 < iVar11))
        goto LAB_000151de;
        iVar11 = *(int *)(param_1 + 0x15c);
        uVar20 = DAT_000153c4;
LAB_00015166:
        uVar14 = 4;
      }
      else {
        if (piVar22 == (int *)0x0) {
LAB_000151be:
          if ((*(int *)(param_1 + 0x100) == 0) ||
             (iVar11 = memcmp((void *)((int)__dest + 9),(void *)(param_1 + 0xf8),8), 0 < iVar11))
          goto LAB_000151de;
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar20 = DAT_000153cc;
          goto LAB_00015166;
        }
LAB_000151a2:
        if ((piVar22[1] == 0) || (-1 < (int)(uVar23 << 0x18))) {
LAB_000151de:
          if (((uVar9 & 0x2080) == 0) && ((piVar22 == (int *)0x0 || (piVar22[1] == 0)))) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_000153d0;
            goto LAB_000151b0;
          }
          if ((int)(uVar23 << 0x14) < 0) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_000153d4;
            goto LAB_000151b0;
          }
          iVar11 = (int)__dest + 4;
          if ((bVar1 & 1) != 0) {
            iVar25 = uVar27 + 4;
            if (piVar22 == (int *)0x0) {
              ppuVar29 = local_94;
              puVar24 = (undefined4 *)((int)__dest + 0x51);
              do {
                puVar21 = puVar24 + 2;
                puVar15 = (undefined1 *)puVar24[1];
                *ppuVar29 = (undefined1 *)*puVar24;
                ppuVar29[1] = puVar15;
                ppuVar29 = ppuVar29 + 2;
                puVar24 = puVar21;
              } while (puVar21 != (undefined4 *)((int)__dest + 0x61));
              if (*(int *)(param_1 + 0xb0) == 0) {
LAB_00015274:
                if (*(int *)(param_1 + 0xac) == 0) {
                  iVar11 = *(int *)(param_1 + 0x15c);
                  uVar20 = DAT_000153e4;
                }
                else {
                  puVar24 = (undefined4 *)((int)__dest + 0x51);
                  *puVar24 = 0;
                  *(undefined4 *)((int)__dest + 0x55) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  *(undefined4 *)((int)__dest + 0x59) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  *(undefined4 *)((int)__dest + 0x5d) =
                       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  FUN_000173ac(param_1 + 0x24,uVar28,__dest,iVar25,puVar24);
                  iVar25 = memcmp(local_94,puVar24,0x10);
                  if (iVar25 == 0) goto LAB_000152c4;
                  iVar11 = *(int *)(param_1 + 0x15c);
                  uVar20 = DAT_000153dc;
                }
                goto LAB_00015166;
              }
              puVar24 = (undefined4 *)((int)__dest + 0x51);
              *puVar24 = 0;
              *(undefined4 *)((int)__dest + 0x55) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              *(undefined4 *)((int)__dest + 0x59) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              *(undefined4 *)((int)__dest + 0x5d) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              FUN_000173ac((void *)(param_1 + 0x68),uVar28,__dest,iVar25,puVar24);
              iVar12 = memcmp(local_94,puVar24,0x10);
              if (iVar12 != 0) {
                FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000153d8);
                goto LAB_00015274;
              }
              *(undefined4 *)(param_1 + 0xb0) = 0;
              *(undefined4 *)(param_1 + 0xac) = 1;
              memcpy((void *)(param_1 + 0x24),(void *)(param_1 + 0x68),0x44);
LAB_000152c4:
              *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)((int)__dest + 9);
              *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((int)__dest + 0xd);
              *(undefined4 *)(param_1 + 0x100) = 1;
            }
            else {
              iVar25 = FUN_0001625c(param_1,piVar22,(int)__dest + 4,uVar28,__dest,iVar25);
              if (iVar25 != 0) goto LAB_0001510c;
            }
          }
          uVar26 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 0x61),*(byte *)((int)__dest + 0x62))
          ;
          if (uVar27 - 0x5f < uVar26) {
            FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_000153e0,uVar26,
                         uVar27 - 0x5f);
            goto LAB_0001510c;
          }
          if ((*(int *)(param_1 + 0x1d0) != 2) || (-1 < (int)(uVar23 << 0x13))) {
LAB_00015444:
            if ((int)(uVar23 << 0x1c) < 0) {
              if ((bVar2 & 0x30) != 0) {
                iVar11 = *(int *)(param_1 + 0x15c);
                uVar20 = DAT_0001569c;
                goto LAB_00015166;
              }
              if (piVar22 != (int *)0x0) {
                FUN_0001659e(param_1,piVar22,iVar11,uVar23,uVar28);
                goto LAB_0001546a;
              }
              puVar24 = *(undefined4 **)(param_1 + 0x15c);
              if ((bVar1 & 1) == 0) {
                iVar25 = (*(code *)puVar24[7])(*puVar24);
                if (iVar25 == 0) {
                  puVar24 = *(undefined4 **)(param_1 + 0x15c);
                  uVar20 = DAT_000159f4;
                  goto LAB_0001582c;
                }
                FUN_000146ca(*(undefined4 *)(param_1 + 0x15c),7);
                memset(local_94,uVar23 & 0x100,0x6c);
                if (*(int *)(param_1 + 0x1d0) == 2) {
                  FUN_0001719a((int)__dest + 99,
                               CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                        *(undefined1 *)((int)__dest + 0x62)),local_94);
                }
                if (local_84 == (void *)0x0) {
                  bVar31 = false;
LAB_000158ae:
                  if ((*(uint *)(param_1 + 0x1dc) & 0xa1) == 0) goto LAB_0001588a;
                  if (*(int *)(param_1 + 0x130) != 0) {
                    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000159fc);
                    if (*(int *)(param_1 + 0x138) == 0) {
                      if (!bVar31) goto LAB_00015504;
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x138) = 0;
                    }
                    goto LAB_000158dc;
                  }
                  if (!bVar31) goto LAB_0001588c;
LAB_000158e6:
                  pvVar16 = (void *)(*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                                              (**(undefined4 **)(param_1 + 0x15c),1,0,0,&local_c8,0)
                  ;
                  if (pvVar16 != (void *)0x0) {
                    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[9])
                              (**(undefined4 **)(param_1 + 0x15c),param_1 + 0x1b8,0x888e,pvVar16,
                               (undefined4)local_c8);
                    free(pvVar16);
                    goto LAB_0001546a;
                  }
                }
                else {
                  if (*(int *)(param_1 + 0x138) == 0) {
                    bVar31 = true;
                    goto LAB_000158ae;
                  }
                  bVar31 = false;
                  iVar25 = memcmp(local_84,(void *)(*(int *)(param_1 + 0x138) + 4),0x10);
                  if (iVar25 != 0) goto LAB_000158ae;
                  FUN_00015040(param_1);
LAB_0001588a:
                  if (bVar31) {
LAB_000158dc:
                    if ((*(uint *)(param_1 + 0x1dc) & 0xa1) != 0) goto LAB_000158e6;
                  }
LAB_0001588c:
                  iVar25 = param_1 + 0xb4;
                  if (*(int *)(param_1 + 0xf4) != 0) {
                    iVar12 = FUN_00018fec(iVar25,0x20);
                    if (iVar12 != 0) {
                      iVar11 = *(int *)(param_1 + 0x15c);
                      uVar20 = DAT_000159f8;
                      goto LAB_000154ac;
                    }
                    *(undefined4 *)(param_1 + 0xf4) = 0;
                  }
                  if (*(int *)(param_1 + 0x1d4) == 0x10) {
                    uVar20 = 0x30;
                  }
                  else {
                    uVar20 = 0x40;
                  }
                  FUN_000173fc(param_1,*(undefined4 *)(param_1 + 0x20),DAT_00015a00,param_1 + 0x1a8,
                               param_1 + 0x1b8,iVar25,(undefined4 *)((int)__dest + 0x11),
                               param_1 + 0x68,uVar20,(*(uint *)(param_1 + 0x1dc) & 0x180) != 0);
                  uVar20 = *(undefined4 *)(param_1 + 0x98);
                  uVar14 = *(undefined4 *)(param_1 + 0x9c);
                  local_c8 = *(longlong *)(param_1 + 0x98);
                  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xa0);
                  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xa4);
                  *(undefined4 *)(param_1 + 0xa0) = uVar20;
                  *(undefined4 *)(param_1 + 0xa4) = uVar14;
                  *(undefined4 *)(param_1 + 0xb0) = 1;
                  iVar11 = FUN_00014bec(param_1,param_1 + 0x1b8,iVar11,uVar28,iVar25,
                                        *(undefined4 *)(param_1 + 0x1ec),
                                        *(undefined4 *)(param_1 + 0x1f0),param_1 + 0x68);
                  if (iVar11 == 0) {
                    puVar24 = (undefined4 *)((int)__dest + 0x11);
                    puVar21 = (undefined4 *)(param_1 + 0xd4);
                    do {
                      puVar19 = puVar24 + 1;
                      *puVar21 = *puVar24;
                      puVar24 = puVar19;
                      puVar21 = puVar21 + 1;
                    } while (puVar19 != (undefined4 *)((int)__dest + 0x31));
                    goto LAB_0001546a;
                  }
                }
              }
              else {
                FUN_000146ca(puVar24,7);
                bVar1 = *(byte *)((int)__dest + 5);
                uVar27 = (uint)CONCAT11(bVar1,*(undefined1 *)((int)__dest + 6));
                FUN_0001719a((int)__dest + 99,
                             CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                      *(undefined1 *)((int)__dest + 0x62)),local_94);
                if ((local_80 == (byte *)0x0) || ((int)(uVar27 << 0x13) < 0)) {
                  iVar25 = param_1 + 0x1b8;
                  if ((*(int *)(param_1 + 500) == 0) && (*(int *)(param_1 + 0x1f8) == 0)) {
                    iVar12 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[10])
                                       (**(undefined4 **)(param_1 + 0x15c));
                    if (iVar12 < 0) {
                      uVar14 = 4;
                      uVar20 = DAT_000156a4;
                    }
                    else {
                      uVar14 = 2;
                      uVar20 = DAT_000156a8;
                    }
                    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),uVar14,uVar20);
                  }
                  iVar12 = local_8c;
                  if (local_94[0] != (undefined1 *)0x0) {
                    if ((*(void **)(param_1 + 500) == (void *)0x0) ||
                       ((uVar20 = DAT_000156b0, puVar15 = local_94[0],
                        local_94[1] == (undefined1 *)*(size_t *)(param_1 + 0x1fc) &&
                        (iVar13 = memcmp(local_94[0],*(void **)(param_1 + 500),(size_t)local_94[1]),
                        uVar20 = DAT_000156b0, puVar15 = local_94[0], iVar13 == 0)))) {
                      if (iVar12 == 0) goto LAB_0001555e;
                      goto LAB_00015538;
                    }
LAB_000154fe:
                    FUN_000147fc(param_1,uVar20,iVar25,puVar15,local_8c);
                    goto LAB_00015504;
                  }
                  if (local_8c == 0) {
                    if ((*(int *)(param_1 + 500) != 0) || (*(int *)(param_1 + 0x1f8) != 0)) {
                      local_8c = 0;
                      uVar20 = DAT_000156ac;
                      puVar15 = (undefined1 *)0x0;
                      goto LAB_000154fe;
                    }
                  }
                  else {
LAB_00015538:
                    if ((*(int *)(param_1 + 0x1f8) != 0) &&
                       (iVar12 = FUN_000178cc((*(uint *)(param_1 + 0x1dc) & 0x60) != 0,
                                              *(int *)(param_1 + 0x1f8),
                                              *(undefined4 *)(param_1 + 0x200),iVar12,local_88),
                       uVar20 = DAT_000156b0, puVar15 = local_94[0], iVar12 != 0))
                    goto LAB_000154fe;
                  }
LAB_0001555e:
                  if ((((*(int *)(param_1 + 0x1d0) == 1) && (local_8c != 0)) &&
                      (*(int *)(param_1 + 0x1f8) == 0)) &&
                     (uVar20 = DAT_000156b4, puVar15 = local_94[0], *(int *)(param_1 + 0x1e4) != 0))
                  goto LAB_000154fe;
                  iVar12 = memcmp((void *)(param_1 + 0xd4),(void *)((int)__dest + 0x11),0x20);
                  if (iVar12 != 0) {
                    FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000156b8,
                                 *(undefined1 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0x1b9),
                                 *(undefined1 *)(param_1 + 0x1ba),*(undefined1 *)(param_1 + 0x1bb),
                                 *(undefined1 *)(param_1 + 0x1bc),*(undefined1 *)(param_1 + 0x1bd));
                    goto LAB_00015504;
                  }
                  sVar10 = CONCAT11(*(undefined1 *)((int)__dest + 7),
                                    *(undefined1 *)((int)__dest + 8));
                  if (*(int *)(param_1 + 0x1d4) == 8) {
                    if (sVar10 != 0x20) {
                      uVar17 = *(undefined1 *)(param_1 + 0x1bd);
                      iVar11 = *(int *)(param_1 + 0x15c);
                      uVar3 = *(undefined1 *)(param_1 + 0x1bc);
                      uVar4 = *(undefined1 *)(param_1 + 0x1bb);
                      uVar5 = *(undefined1 *)(param_1 + 0x1ba);
                      uVar6 = *(undefined1 *)(param_1 + 0x1b9);
                      uVar7 = *(undefined1 *)(param_1 + 0x1b8);
                      uVar20 = DAT_000156c0;
                      goto LAB_00015604;
                    }
                  }
                  else if ((*(int *)(param_1 + 0x1d4) == 0x10) && (sVar10 != 0x10)) {
                    uVar17 = *(undefined1 *)(param_1 + 0x1bd);
                    iVar11 = *(int *)(param_1 + 0x15c);
                    uVar3 = *(undefined1 *)(param_1 + 0x1bc);
                    uVar4 = *(undefined1 *)(param_1 + 0x1bb);
                    uVar5 = *(undefined1 *)(param_1 + 0x1ba);
                    uVar6 = *(undefined1 *)(param_1 + 0x1b9);
                    uVar7 = *(undefined1 *)(param_1 + 0x1b8);
                    uVar20 = DAT_000156bc;
LAB_00015604:
                    FUN_0001341c(*(undefined4 *)(iVar11 + 4),4,uVar20,sVar10,uVar7,uVar6,uVar5,uVar4
                                 ,uVar3,uVar17);
                    goto LAB_00015504;
                  }
                  iVar11 = FUN_00014cd0(param_1,iVar25,iVar11,uVar28,uVar27,0,0,param_1 + 0x24);
                  if (iVar11 != 0) goto LAB_00015504;
                  *(undefined4 *)(param_1 + 0xf4) = 1;
                  if ((int)(uVar27 << 0x19) < 0) {
                    puVar24 = *(undefined4 **)(param_1 + 0x15c);
                    local_c8 = 0;
                    if (*(int *)(param_1 + 100) == 0) {
                      iVar11 = *(int *)(param_1 + 0x1d4);
                      if (iVar11 == 8) {
                        uVar20 = 2;
                        uVar14 = 0x20;
                      }
                      else {
                        if (iVar11 != 0x10) {
                          if (iVar11 != 1) {
                            FUN_0001341c(puVar24[1],4,DAT_000156c4);
                            goto LAB_00015504;
                          }
                          goto LAB_00015768;
                        }
                        uVar20 = 3;
                        uVar14 = 0x10;
                      }
                      puVar18 = &local_c8;
                      if (*(int *)(param_1 + 0x1d0) != 2) {
                        puVar18 = (undefined8 *)((int)__dest + 0x41);
                      }
                      iVar11 = (*(code *)puVar24[6])
                                         (*puVar24,uVar20,iVar25,0,1,puVar18,6,param_1 + 0x44,uVar14
                                         );
                      if (iVar11 < 0) {
                        FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000159e8,
                                     uVar20,uVar14,*(undefined1 *)(param_1 + 0x1b8),
                                     *(undefined1 *)(param_1 + 0x1b9),
                                     *(undefined1 *)(param_1 + 0x1ba),
                                     *(undefined1 *)(param_1 + 0x1bb),
                                     *(undefined1 *)(param_1 + 0x1bc),
                                     *(undefined1 *)(param_1 + 0x1bd));
                        goto LAB_00015504;
                      }
                      *(undefined4 *)(param_1 + 100) = 1;
                      if (*(int *)(param_1 + 0x1a4) != 0) {
                        FUN_00013c64(DAT_000159ec,param_1,0);
                        FUN_00013bbe(*(undefined4 *)(param_1 + 0x1a4),0,DAT_000159ec,param_1,0);
                      }
                    }
                  }
LAB_00015768:
                  if ((bVar1 & 2) != 0) {
                    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0x11])
                              (**(undefined4 **)(param_1 + 0x15c),iVar25,1);
                  }
                  FUN_000146ca(*(undefined4 *)(param_1 + 0x15c),8);
                  if (local_80 == (byte *)0x0) goto LAB_0001546a;
                  uStack_b4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  local_bc = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  uVar23 = local_7c - 2;
                  local_a0 = 0;
                  local_c8 = (ulonglong)uStack_b4 << 0x20;
                  local_b8 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  uStack_9c = 0;
                  uStack_ac = uStack_b4;
                  uStack_a4 = uStack_b4;
                  local_98 = uStack_b4;
                  if (0x20 < uVar23) {
LAB_000157f2:
                    iVar11 = *(int *)(param_1 + 0x15c);
                    uVar14 = 3;
                    uVar20 = DAT_000159f0;
                    goto LAB_000157fa;
                  }
                  local_bc = *local_80 & 3;
                  uVar20 = FUN_00014744(param_1,(*local_80 & 7) >> 2);
                  local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                  memcpy(&local_b8,local_80 + 2,uVar23);
                  local_98 = uVar23;
                  iVar11 = FUN_00014768(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),uVar23,
                                        uVar23,&uStack_c0,&local_c8);
                  if ((iVar11 != 0) ||
                     (iVar11 = FUN_00014878(param_1,&local_c8,(int)__dest + 0x41), iVar11 != 0))
                  goto LAB_000157f2;
                  goto LAB_00015816;
                }
                iVar11 = *(int *)(param_1 + 0x15c);
                uVar20 = DAT_000156a0;
LAB_000154ac:
                uVar14 = 4;
LAB_000157fa:
                FUN_0001341c(*(undefined4 *)(iVar11 + 4),uVar14,uVar20);
              }
LAB_00015504:
              (*(code *)(*(undefined4 **)(param_1 + 0x15c))[4])
                        (**(undefined4 **)(param_1 + 0x15c),1);
            }
            else if ((bVar1 & 0x20) == 0) {
              puVar24 = *(undefined4 **)(param_1 + 0x15c);
              uVar20 = DAT_00015d90;
              if ((bVar1 & 1) == 0) {
LAB_0001582c:
                FUN_0001341c(puVar24[1],4,uVar20);
              }
              else {
                uStack_b4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                local_bc = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                local_a0 = 0;
                local_c8 = (ulonglong)uStack_b4 << 0x20;
                local_b8 = 0;
                local_b0 = 0;
                local_a8 = 0;
                uStack_9c = 0;
                uStack_ac = uStack_b4;
                uStack_a4 = uStack_b4;
                local_98 = uStack_b4;
                iVar11 = (*(code *)puVar24[3])(*puVar24);
                bVar1 = *(byte *)((int)__dest + 5);
                bVar2 = *(byte *)((int)__dest + 6);
                bVar8 = *(byte *)((int)__dest + 0x62);
                uVar27 = (uint)CONCAT11(bVar1,bVar2);
                uVar23 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 0x61),bVar8);
                if (*(int *)(param_1 + 0x1d0) == 2) {
                  FUN_0001719a((int)__dest + 99,uVar23,local_94);
                  if (local_80 == (byte *)0x0) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar14 = 3;
                    uVar20 = DAT_00015d68;
LAB_00015a7e:
                    FUN_0001341c(*(undefined4 *)(iVar25 + 4),uVar14,uVar20);
                    goto LAB_00015ad2;
                  }
                  if ((bVar1 & 0x10) == 0) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar20 = DAT_00015d64;
LAB_00015a72:
                    uVar14 = 4;
                    goto LAB_00015a7e;
                  }
                  local_98 = local_7c - 2;
                  iVar25 = FUN_00014768(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),local_98,
                                        local_98,&uStack_c0,&local_c8);
                  if (iVar25 != 0) goto LAB_00015ad2;
                  local_bc = *local_80 & 3;
                  uVar20 = FUN_00014744(param_1,(*local_80 & 7) >> 2);
                  uVar23 = local_7c - 2;
                  local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                  if (0x20 < uVar23) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar20 = DAT_00015d6c;
                    goto LAB_00015aca;
                  }
                  memcpy(&local_b8,local_80 + 2,uVar23);
                  iVar25 = 0;
                }
                else {
                  local_98 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 7),
                                            *(undefined1 *)((int)__dest + 8));
                  if (uVar26 < uVar23) {
                    uVar14 = 3;
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar20 = DAT_00015d74;
LAB_00015c0a:
                    FUN_0001341c(*(undefined4 *)(iVar25 + 4),uVar14,uVar20,uVar23,uVar26);
                  }
                  else {
                    uVar26 = uVar23;
                    if (uVar28 == 2) {
                      if (7 < uVar23) {
                        uVar26 = uVar23 - 8;
                        goto LAB_00015c2c;
                      }
                      iVar25 = *(int *)(param_1 + 0x15c);
                      uVar20 = DAT_00015d78;
LAB_00015aca:
                      uVar14 = 3;
                    }
                    else {
LAB_00015c2c:
                      iVar25 = FUN_00014768(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),
                                            local_98,uVar26,&uStack_c0,&local_c8);
                      if (iVar25 != 0) goto LAB_00015ad2;
                      local_bc = (uVar27 & 0x3f) >> 4;
                      if (uVar28 == 1) {
                        ppuVar29 = local_94;
                        puVar24 = (undefined4 *)((int)__dest + 0x31);
                        do {
                          puVar21 = puVar24 + 2;
                          puVar15 = (undefined1 *)puVar24[1];
                          *ppuVar29 = (undefined1 *)*puVar24;
                          ppuVar29[1] = puVar15;
                          ppuVar29 = ppuVar29 + 2;
                          puVar24 = puVar21;
                        } while (puVar21 != (undefined4 *)((int)__dest + 0x41));
                        ppvVar30 = &local_84;
                        puVar24 = (undefined4 *)(param_1 + 0x34);
                        do {
                          puVar21 = puVar24 + 2;
                          pvVar16 = (void *)puVar24[1];
                          *ppvVar30 = (void *)*puVar24;
                          ppvVar30[1] = pvVar16;
                          ppvVar30 = ppvVar30 + 2;
                          puVar24 = puVar21;
                        } while (puVar21 != (undefined4 *)(param_1 + 0x44));
                        if (uVar23 < 0x21) {
                          memcpy(&local_b8,(void *)((int)__dest + 99),uVar23);
                          iVar25 = FUN_00018de4(local_94,0x20,0x100,&local_b8,uVar23);
                          if (iVar25 != 0) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar14 = 5;
                            uVar20 = DAT_00015d80;
                            goto LAB_00015a7e;
                          }
LAB_00015d12:
                          uVar20 = FUN_00014744(param_1,(uVar27 & 0x7f) >> 6);
                          local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                          iVar25 = 0;
                          goto LAB_00015ae4;
                        }
                        iVar25 = *(int *)(param_1 + 0x15c);
                        uVar20 = DAT_00015d7c;
                      }
                      else {
                        if ((bVar8 & 7) == 0) {
                          if (0x20 < uVar26) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar14 = 4;
                            uVar20 = DAT_00015d88;
                            goto LAB_00015c0a;
                          }
                          iVar25 = FUN_000180b0(param_1 + 0x34,uVar26 >> 3,(int)__dest + 99,
                                                &local_b8);
                          if (iVar25 != 0) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar20 = DAT_00015d8c;
                            goto LAB_00015a72;
                          }
                          goto LAB_00015d12;
                        }
                        iVar25 = *(int *)(param_1 + 0x15c);
                        uVar20 = DAT_00015d84;
                      }
                      uVar14 = 4;
                    }
                    FUN_0001341c(*(undefined4 *)(iVar25 + 4),uVar14,uVar20,uVar23);
                  }
LAB_00015ad2:
                  iVar25 = -1;
                }
LAB_00015ae4:
                FUN_000146ca(*(undefined4 *)(param_1 + 0x15c),8);
                if (((iVar25 != 0) ||
                    (iVar25 = FUN_00014878(param_1,&local_c8,(int)__dest + 0x41), iVar25 != 0)) ||
                   (iVar25 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                                       (**(undefined4 **)(param_1 + 0x15c),3,0,0x5f,&local_cc,
                                        local_94), iVar25 == 0)) goto LAB_00015504;
                bVar31 = *(int *)(param_1 + 0x1d0) == 2;
                if (bVar31) {
                  uVar17 = 2;
                }
                else {
                  uVar17 = 0xfe;
                }
                *local_94[0] = uVar17;
                local_94[0][1] = 3;
                local_94[0][2] = (byte)uVar28 | bVar2 & 0x30;
                if (bVar31) {
                  local_94[0][3] = 0;
                  local_94[0][4] = 0;
                }
                else {
                  *(undefined2 *)(local_94[0] + 3) = *(undefined2 *)((int)__dest + 7);
                }
                *(undefined4 *)(local_94[0] + 5) = *(undefined4 *)((int)__dest + 9);
                *(undefined4 *)(local_94[0] + 9) = *(undefined4 *)((int)__dest + 0xd);
                local_94[0][0x5d] = 0;
                local_94[0][0x5e] = 0;
                FUN_00014a0c(param_1,param_1 + 0x24,uVar28,param_1 + 0x1b8,0x888e,iVar25,local_cc,
                             local_94[0] + 0x4d);
                if (iVar11 == 9) {
                  uVar17 = *(undefined1 *)(param_1 + 0x1bd);
                  uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x15c) + 4);
                  uVar3 = *(undefined1 *)(param_1 + 0x1b8);
                  uVar4 = *(undefined1 *)(param_1 + 0x1b9);
                  uVar5 = *(undefined1 *)(param_1 + 0x1ba);
                  uVar6 = *(undefined1 *)(param_1 + 0x1bb);
                  uVar7 = *(undefined1 *)(param_1 + 0x1bc);
                  uVar20 = FUN_0001784c(*(undefined4 *)(param_1 + 0x1d8));
                  FUN_0001341c(uVar14,3,DAT_00015d70,uVar3,uVar4,uVar5,uVar6,uVar7,uVar17,uVar20);
                  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xb])
                            (**(undefined4 **)(param_1 + 0x15c));
                  FUN_000146ca(*(undefined4 *)(param_1 + 0x15c),9);
                }
                else {
LAB_00015816:
                  FUN_00014960(param_1,param_1 + 0x1b8,uVar27 & 0x200);
                }
              }
            }
            else {
              FUN_000169ac(param_1,param_2,iVar11,uVar26,uVar23,uVar28);
            }
LAB_0001546a:
            uVar20 = 1;
            goto LAB_00015110;
          }
          if (*(int *)(param_1 + 0xac) == 0) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_000153e8;
            goto LAB_00015166;
          }
          if (uVar28 != 1) {
            if ((*(byte *)((int)__dest + 0x62) & 7) != 0) {
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar14 = 4;
              uVar20 = DAT_000153f0;
              goto LAB_000150de;
            }
            uVar27 = uVar26 - 8 & 0xffff;
            pvVar16 = malloc(uVar27);
            if (pvVar16 == (void *)0x0) {
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar20 = DAT_000153f4;
            }
            else {
              iVar25 = FUN_000180b0(param_1 + 0x34,uVar27 >> 3,(void *)((int)__dest + 99),pvVar16);
              if (iVar25 == 0) {
                memcpy((void *)((int)__dest + 99),pvVar16,uVar27);
                free(pvVar16);
                *(char *)((int)__dest + 0x62) = (char)uVar27;
                *(char *)((int)__dest + 0x61) = (char)(uVar27 >> 8);
                goto LAB_00015438;
              }
              free(pvVar16);
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar20 = DAT_00015698;
            }
            goto LAB_00015166;
          }
          ppuVar29 = local_94;
          puVar24 = (undefined4 *)((int)__dest + 0x31);
          do {
            puVar21 = puVar24 + 2;
            puVar15 = (undefined1 *)puVar24[1];
            *ppuVar29 = (undefined1 *)*puVar24;
            ppuVar29[1] = puVar15;
            ppuVar29 = ppuVar29 + 2;
            puVar24 = puVar21;
          } while (puVar21 != (undefined4 *)((int)__dest + 0x41));
          ppvVar30 = &local_84;
          puVar24 = (undefined4 *)(param_1 + 0x34);
          do {
            puVar21 = puVar24 + 2;
            pvVar16 = (void *)puVar24[1];
            *ppvVar30 = (void *)*puVar24;
            ppvVar30[1] = pvVar16;
            ppvVar30 = ppvVar30 + 2;
            puVar24 = puVar21;
          } while (puVar21 != (undefined4 *)(param_1 + 0x44));
          iVar25 = FUN_00018de4(local_94,0x20,0x100,(int)__dest + 99,uVar26);
          if (iVar25 == 0) {
LAB_00015438:
            uVar26 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                    *(undefined1 *)((int)__dest + 0x62));
            goto LAB_00015444;
          }
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar14 = 5;
          uVar20 = DAT_000153ec;
        }
        else {
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar20 = DAT_000153c8;
LAB_000151b0:
          uVar14 = 3;
        }
      }
      FUN_0001341c(*(undefined4 *)(iVar11 + 4),uVar14,uVar20);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x15c);
    uVar14 = 3;
    uVar20 = DAT_000153b8;
    uVar26 = uVar28;
LAB_000150de:
    FUN_0001341c(*(undefined4 *)(iVar11 + 4),uVar14,uVar20,uVar26);
  }
LAB_0001510c:
  uVar20 = 0xffffffff;
LAB_00015110:
  free(__dest);
  return uVar20;
}



/* ===== FUN_00015d94 @ 00015d94 size=8 ===== */

void FUN_00015d94(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x164) = param_2;
  }
  return;
}



/* ===== FUN_00015d9c @ 00015d9c size=8 ===== */

void FUN_00015d9c(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x160) = param_2;
  }
  return;
}



/* ===== FUN_00015da4 @ 00015da4 size=98 ===== */

void FUN_00015da4(int param_1,undefined4 *param_2)

{
  void *__src;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = *param_2;
      *(undefined4 *)(param_1 + 0x16c) = param_2[1];
      *(undefined4 *)(param_1 + 0x170) = param_2[2];
      *(undefined4 *)(param_1 + 0x174) = param_2[3];
      *(undefined4 *)(param_1 + 0x178) = param_2[4];
      __src = (void *)param_2[6];
      *(undefined4 *)(param_1 + 0x17c) = param_2[5];
      if (__src == (void *)0x0) {
        *(undefined4 *)(param_1 + 0x1a0) = 0;
      }
      else {
        memcpy((void *)(param_1 + 0x180),__src,param_2[7]);
        *(undefined4 *)(param_1 + 0x1a0) = param_2[7];
      }
      *(undefined4 *)(param_1 + 0x1a4) = param_2[8];
    }
  }
  return;
}



/* ===== FUN_00015e06 @ 00015e06 size=16 ===== */

void FUN_00015e06(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = *param_2;
    *(undefined2 *)(param_1 + 0x1ac) = *(undefined2 *)(param_2 + 1);
  }
  return;
}



/* ===== FUN_00015e16 @ 00015e16 size=8 ===== */

void FUN_00015e16(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1b0) = param_2;
    *(undefined4 *)(param_1 + 0x1b4) = param_3;
  }
  return;
}



/* ===== FUN_00015e1e @ 00015e1e size=8 ===== */

void FUN_00015e1e(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x130) = param_2;
  }
  return;
}



/* ===== FUN_00015e26 @ 00015e26 size=82 ===== */

undefined4 FUN_00015e26(int param_1,undefined4 param_2,int param_3)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x1c0) = param_3;
    break;
  case 1:
    if (99 < param_3 - 1U) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x1c4) = param_3;
    break;
  case 2:
    if (param_3 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x1c8) = param_3;
    break;
  case 3:
    *(int *)(param_1 + 0x1d0) = param_3;
    break;
  case 4:
    *(int *)(param_1 + 0x1d4) = param_3;
    break;
  case 5:
    *(int *)(param_1 + 0x1d8) = param_3;
    break;
  case 6:
    *(int *)(param_1 + 0x1dc) = param_3;
    break;
  case 8:
    *(int *)(param_1 + 0x1e4) = param_3;
    break;
  case 9:
    *(int *)(param_1 + 0x1e8) = param_3;
  }
  return 0;
}



/* ===== FUN_00015eca @ 00015eca size=78 ===== */

int FUN_00015eca(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_0001784c(*(undefined4 *)(param_1 + 0x1d4));
  uVar2 = FUN_0001784c(*(undefined4 *)(param_1 + 0x1d8));
  uVar3 = FUN_00017868(*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1d0));
  iVar4 = snprintf(param_2,param_3,DAT_00015f18,uVar1,uVar2,uVar3);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if ((int)param_3 <= iVar4) {
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== FUN_00015f1c @ 00015f1c size=62 ===== */

undefined4 FUN_00015f1c(int param_1,void *param_2,size_t *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  size_t __size;
  void *__dest;
  
  if ((param_1 == 0) ||
     (__size = FUN_00016f9a(param_1,param_2,*param_3,param_4,param_4), (int)__size < 0)) {
LAB_00015f26:
    uVar1 = 0xffffffff;
  }
  else {
    *param_3 = __size;
    if (*(int *)(param_1 + 0x1ec) == 0) {
      __dest = malloc(__size);
      *(void **)(param_1 + 0x1ec) = __dest;
      if (__dest == (void *)0x0) goto LAB_00015f26;
      memcpy(__dest,param_2,__size);
      *(size_t *)(param_1 + 0x1f0) = __size;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00015f5a @ 00015f5a size=66 ===== */

undefined4 FUN_00015f5a(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_1 != 0) {
    free(*(void **)(param_1 + 0x1ec));
    if ((param_2 == (void *)0x0) || (param_3 == 0)) {
      *(undefined4 *)(param_1 + 0x1ec) = 0;
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      return 0;
    }
    __dest = malloc(param_3);
    *(void **)(param_1 + 0x1ec) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,param_3);
      *(size_t *)(param_1 + 0x1f0) = param_3;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00015f9c @ 00015f9c size=70 ===== */

undefined4 FUN_00015f9c(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_1 != 0) {
    free(*(void **)(param_1 + 500));
    if ((param_2 == (void *)0x0) || (param_3 == 0)) {
      *(undefined4 *)(param_1 + 500) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      return 0;
    }
    __dest = malloc(param_3);
    *(void **)(param_1 + 500) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,param_3);
      *(size_t *)(param_1 + 0x1fc) = param_3;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00015fe2 @ 00015fe2 size=70 ===== */

undefined4 FUN_00015fe2(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_1 != 0) {
    free(*(void **)(param_1 + 0x1f8));
    if ((param_2 == (void *)0x0) || (param_3 == 0)) {
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      *(undefined4 *)(param_1 + 0x200) = 0;
      return 0;
    }
    __dest = malloc(param_3);
    *(void **)(param_1 + 0x1f8) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,param_3);
      *(size_t *)(param_1 + 0x200) = param_3;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00016028 @ 00016028 size=38 ===== */

undefined4 FUN_00016028(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1ec) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00016f78(*(int *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0),param_2,param_1,
                         param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* ===== FUN_0001604e @ 0001604e size=6 ===== */

undefined4 FUN_0001604e(void)

{
  return 0xffffffff;
}



/* ===== FUN_00016054 @ 00016054 size=82 ===== */

void FUN_00016054(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = 0;
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = 0;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  memset(param_1 + 9,0,0x44);
  memset(param_1 + 0x1a,0,0x44);
  param_1[0x43] = uVar1;
  param_1[0x44] = uVar2;
  param_1[0x45] = uVar3;
  param_1[0x46] = uVar4;
  param_1[0x47] = uVar1;
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar3;
  param_1[0x4a] = uVar4;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = uVar2;
  return;
}



/* ===== FUN_000160b2 @ 000160b2 size=44 ===== */

undefined1 * FUN_000160b2(undefined1 *param_1,undefined1 param_2,void *param_3,size_t param_4)

{
  param_1[5] = param_2;
  *param_1 = 0xdd;
  param_1[1] = (char)param_4 + '\x04';
  param_1[2] = 0;
  param_1[3] = 0xf;
  param_1[4] = 0xac;
  memcpy(param_1 + 6,param_3,param_4);
  return param_1 + 6 + param_4;
}



/* ===== FUN_000160de @ 000160de size=74 ===== */

void FUN_000160de(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  undefined4 uStack_14;
  
  if ((*(uint **)(param_3 + 0x34) != (uint *)0x0) && (3 < *(uint *)(param_3 + 0x38))) {
    uVar2 = **(uint **)(param_3 + 0x34);
    uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18;
    if (uVar2 < *(uint *)(param_2 + 300)) {
      *(uint *)(param_2 + 300) = uVar2;
      uVar3 = param_1;
      iVar4 = param_2;
      local_18 = param_3;
      uStack_14 = param_4;
      FUN_00013744(&local_18);
      uVar1 = DAT_00016128;
      *(uint *)(param_2 + 0x130) = local_18 + uVar2;
      FUN_00013c64(uVar1,param_1,param_2,local_18 + uVar2,uVar3,iVar4);
      FUN_00013bbe(uVar2,0,DAT_00016128,param_1,param_2);
    }
  }
  return;
}



/* ===== FUN_0001612c @ 0001612c size=88 ===== */

void FUN_0001612c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 auStack_28 [5];
  
  local_4c = *DAT_00016184;
  uStack_48 = DAT_00016184[1];
  uStack_44 = DAT_00016184[2];
  uStack_40 = DAT_00016184[3];
  local_3c = DAT_00016184[4];
  puVar3 = local_38;
  local_60 = DAT_00016188;
  local_50 = param_5;
  uStack_5c = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  FUN_0001b6d8(param_1,0x20,5,&local_60,&local_4c,puVar3);
  do {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 2;
    *param_6 = uVar1;
    param_6[1] = uVar2;
    param_6 = param_6 + 2;
  } while (puVar3 != auStack_28);
  return;
}



/* ===== FUN_0001618c @ 0001618c size=196 ===== */

undefined4 FUN_0001618c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  if (param_3 == 0) {
    cVar4 = '\n';
  }
  else {
    cVar4 = '\x16';
  }
  iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                    (**(undefined4 **)(param_1 + 0x15c),3,0,cVar4 + '_',&local_2c,&local_28);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    *local_28 = 2;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[2] = (char)param_4;
    local_28[1] = (byte)((uint)param_4 >> 8) | 0x2f;
    *(undefined4 *)(local_28 + 5) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(local_28 + 9) = *(undefined4 *)(param_1 + 0x108);
    FUN_00013362((undefined4 *)(param_1 + 0x104),8);
    puVar2 = local_28 + 0x5f;
    local_28[0x5d] = 0;
    local_28[0x5e] = cVar4;
    if (param_3 != 0) {
      puVar2 = (undefined1 *)FUN_000160b2(puVar2,DAT_00016250,param_3,6);
    }
    local_24 = DAT_00016254;
    FUN_000160b2(puVar2,DAT_00016258,&local_24,4);
    FUN_00014a0c(param_1,param_1 + 0x24,param_4,param_2,0x888e,iVar1,local_2c,local_28 + 0x4d);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001625c @ 0001625c size=256 ===== */

undefined4
FUN_0001625c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *__s2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30 [5];
  
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 0x1d0) == 0)) {
    FUN_000173fc(param_2 + 0xf8,0x20,DAT_0001635c,param_1 + 0x1a8,param_2 + 8,param_2 + 0xe,
                 param_3 + 0xd,param_2 + 0x148,0x44,*(undefined4 *)(param_2 + 0x144));
    *(undefined4 *)(param_2 + 0x1d0) = 1;
  }
  __s2 = (undefined4 *)(param_3 + 0x4d);
  puVar3 = local_30;
  puVar4 = __s2;
  do {
    puVar5 = puVar4 + 2;
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
    puVar4 = puVar5;
  } while (puVar5 != (undefined4 *)(param_3 + 0x5d));
  if (*(int *)(param_2 + 0x1d4) == 0) {
LAB_00016324:
    if (*(int *)(param_2 + 0x1d0) != 0) {
      *__s2 = 0;
      *(undefined4 *)(param_3 + 0x51) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(param_3 + 0x55) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(param_3 + 0x59) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      FUN_000173ac(param_2 + 0x148,param_4,param_5,param_6,__s2);
      iVar1 = memcmp(local_30,__s2,0x10);
      if (iVar1 == 0) goto LAB_0001630c;
    }
    uVar2 = 0xffffffff;
  }
  else {
    *__s2 = 0;
    *(undefined4 *)(param_3 + 0x51) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_3 + 0x55) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_3 + 0x59) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    FUN_000173ac((void *)(param_2 + 0x18c),param_4,param_5,param_6,__s2);
    iVar1 = memcmp(local_30,__s2,0x10);
    if (iVar1 != 0) goto LAB_00016324;
    *(undefined4 *)(param_2 + 0x1d4) = 0;
    *(undefined4 *)(param_2 + 0x1d0) = 1;
    memcpy((void *)(param_2 + 0x148),(void *)(param_2 + 0x18c),0x44);
LAB_0001630c:
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_3 + 9);
    *(undefined4 *)(param_2 + 0x140) = 1;
  }
  return uVar2;
}



/* ===== FUN_00016360 @ 00016360 size=534 ===== */

undefined4 FUN_00016360(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 *puVar2;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 *__dest;
  size_t __n;
  char cVar7;
  undefined4 local_58;
  undefined1 *local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  uint local_38;
  undefined4 *puVar3;
  
  if ((((*(int *)(param_1 + 0x1d0) == 2) && (*(int *)(param_1 + 0xac) != 0)) &&
      (*(int *)(param_1 + 0x16c) != 0)) &&
     ((*(int *)(param_1 + 0x1f8) == 0 ||
      (iVar1 = FUN_000174de(*(int *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200),auStack_48),
      (local_38 & 0x200) != 0 || iVar1 != 0)))) {
    if (*(int *)(param_1 + 0x1d4) == 0x10) {
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
    iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[8])
                      (**(undefined4 **)(param_1 + 0x15c),auStack_50);
    if ((-1 < iVar1) && (__ptr = (undefined4 *)FUN_000139a8(0x1d8), __ptr != (undefined4 *)0x0)) {
      __ptr[1] = 1;
      __ptr[2] = *param_2;
      *(undefined2 *)(__ptr + 3) = *(undefined2 *)(param_2 + 1);
      *(undefined1 *)((int)__ptr + 0x4e) = 0x30;
      *(undefined1 *)(__ptr + 0x14) = 1;
      *(undefined1 *)((int)__ptr + 0x51) = 0;
      *(undefined1 *)((int)__ptr + 0x52) = 0;
      *(undefined1 *)((int)__ptr + 0x53) = 0xf;
      *(undefined1 *)(__ptr + 0x15) = 0xac;
      *(undefined1 *)((int)__ptr + 0x55) = 4;
      cVar7 = (*(uint *)(param_1 + 0x170) & 0x10) != 0;
      if ((bool)cVar7) {
        *(undefined1 *)(__ptr + 0x16) = 0;
        *(undefined1 *)((int)__ptr + 0x59) = 0xf;
        *(undefined1 *)((int)__ptr + 0x5a) = 0xac;
        *(undefined1 *)((int)__ptr + 0x5b) = 4;
        puVar2 = __ptr + 0x17;
      }
      else {
        puVar2 = __ptr + 0x16;
      }
      puVar4 = puVar2;
      if (*(int *)(param_1 + 0x170) << 0x1c < 0) {
        cVar7 = cVar7 + '\x01';
        puVar4 = puVar2 + 1;
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((int)puVar2 + 1) = 0xf;
        *(undefined1 *)((int)puVar2 + 2) = 0xac;
        *(undefined1 *)((int)puVar2 + 3) = 2;
      }
      iVar1 = (int)puVar4 - ((int)__ptr + 0x4e);
      *(char *)((int)__ptr + 0x56) = cVar7;
      __ptr[0x28] = iVar1;
      uVar6 = iVar1 + 0xc;
      *(char *)((int)__ptr + 0x4f) = (char)iVar1 + -2;
      *(undefined1 *)((int)__ptr + 0x57) = 0;
      __ptr_00 = (void *)(*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                                   (**(undefined4 **)(param_1 + 0x15c),3,0,
                                    (uVar6 & 0xffff) + 0x5f & 0xffff,&local_58,&local_54);
      if (__ptr_00 != (void *)0x0) {
        *local_54 = 2;
        local_54[1] = 0x2b;
        local_54[3] = 0;
        local_54[4] = 0;
        local_54[2] = uVar5;
        *(undefined4 *)(local_54 + 5) = *(undefined4 *)(param_1 + 0x104);
        *(undefined4 *)(local_54 + 9) = *(undefined4 *)(param_1 + 0x108);
        FUN_00013362((undefined4 *)(param_1 + 0x104),8);
        iVar1 = FUN_00018fec((undefined4 *)((int)__ptr + 0xe),0x20);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)((int)__ptr + 0xe);
          puVar4 = (undefined4 *)(local_54 + 0xd);
          do {
            puVar3 = puVar2 + 1;
            *puVar4 = *puVar2;
            puVar2 = puVar3;
            puVar4 = puVar4 + 1;
          } while (puVar3 != (undefined4 *)((int)__ptr + 0x2e));
          local_54[0x5d] = (char)(uVar6 >> 8);
          __dest = local_54 + 0x5f;
          local_54[0x5e] = (char)uVar6;
          __n = __ptr[0x28];
          memcpy(__dest,(void *)((int)__ptr + 0x4e),__n);
          FUN_000160b2(__dest + __n,DAT_00016580,param_2,6);
          FUN_00014a0c(param_1,param_1 + 0x24,uVar5,auStack_50,0x888e,__ptr_00,local_58,
                       local_54 + 0x4d);
          *__ptr = *(undefined4 *)(param_1 + 0x204);
          *(undefined4 **)(param_1 + 0x204) = __ptr;
          return 0;
        }
        FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_0001657c);
        free(__ptr_00);
      }
      FUN_00013c64(DAT_00016578,param_1,__ptr);
      free(__ptr);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00016584 @ 00016584 size=26 ===== */

void FUN_00016584(int param_1)

{
  undefined4 *__ptr;
  void *pvVar1;
  
  __ptr = *(void **)(param_1 + 0x204);
  while (__ptr != (void *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = pvVar1;
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  return;
}



/* ===== FUN_0001659e @ 0001659e size=1022 ===== */

void FUN_0001659e(int param_1,int param_2,int param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *__dest_00;
  size_t sVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  bool bVar14;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined2 local_b8;
  uint local_b4 [5];
  undefined4 uStack_a0;
  uint local_9c;
  uint uStack_98;
  uint local_94;
  undefined2 local_90;
  void *local_8c;
  size_t local_88;
  void *local_84;
  
  if ((param_4 & 0x180) == 0x180) {
    memset(&local_94,0,0x6c);
    iVar1 = FUN_0001719a(param_3 + 0x5f,
                         CONCAT11(*(undefined1 *)(param_3 + 0x5d),*(undefined1 *)(param_3 + 0x5e)),
                         &local_94);
    if ((((-1 < iVar1) && (local_88 == *(size_t *)(param_2 + 0xa0))) &&
        (iVar1 = memcmp(local_8c,(void *)(param_2 + 0x4e),local_88), iVar1 == 0)) &&
       (iVar1 = memcmp((void *)(param_2 + 0xe),(void *)(param_3 + 0xd),0x20), iVar1 == 0)) {
      FUN_000160de(param_1,param_2,&local_94);
      iVar1 = FUN_00014cd0(param_1,param_2 + 8,param_3,param_5,
                           CONCAT11(*(undefined1 *)(param_3 + 1),*(undefined1 *)(param_3 + 2)),0,0,
                           param_2 + 0x148);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_2 + 0x134);
        puVar4 = (uint *)(param_2 + 0x168);
        if (iVar1 == 8) {
          puVar13 = local_b4;
          do {
            puVar6 = puVar4;
            puVar4 = puVar6 + 2;
            uVar2 = puVar6[1];
            *puVar13 = *puVar6;
            puVar13[1] = uVar2;
            puVar13 = puVar13 + 2;
          } while (puVar4 != (uint *)(param_2 + 0x178));
          local_b4[4] = *(undefined4 *)(param_2 + 0x180);
          uStack_a0 = *(undefined4 *)(param_2 + 0x184);
          uVar8 = 0x20;
          local_9c = *puVar4;
          uStack_98 = puVar6[3];
          puVar4 = local_b4;
        }
        else {
          uVar8 = 0x10;
        }
        local_bc = (undefined1 *)0x0;
        local_b8 = 0;
        (*(code *)(*(undefined4 **)(param_1 + 0x15c))[6])
                  (**(undefined4 **)(param_1 + 0x15c),iVar1,param_2 + 8,0,1,&local_bc,6,puVar4,uVar8
                  );
      }
    }
  }
  else {
    local_94 = param_4 & 0x80;
    if (local_94 == 0) {
      if ((param_4 & 0x200) == 0) {
        memset(&local_94,0,0x6c);
        iVar1 = FUN_0001719a(param_3 + 0x5f,
                             CONCAT11(*(undefined1 *)(param_3 + 0x5d),
                                      *(undefined1 *)(param_3 + 0x5e)),&local_94);
        if ((((-1 < iVar1) && (local_84 != (void *)0x0)) && (local_8c != (void *)0x0)) &&
           (((iVar1 = memcmp(local_84,(void *)(param_2 + 0x11c),0x10), iVar1 == 0 &&
             (local_88 == *(size_t *)(param_2 + 0xf4))) &&
            (iVar1 = memcmp(local_8c,(void *)(param_2 + 0xa4),local_88), iVar1 == 0)))) {
          FUN_000160de(param_1,param_2,&local_94);
          uVar2 = *(int *)(param_2 + 0xa0) + 10;
          uVar11 = uVar2 & 0xffff;
          iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                            (**(undefined4 **)(param_1 + 0x15c),3,0,uVar11 + 0x5f & 0xffff,&local_c0
                             ,&local_bc);
          if (iVar1 != 0) {
            *local_bc = 2;
            bVar14 = *(int *)(param_2 + 0x134) == 0x10;
            if (bVar14) {
              local_bc[4] = 0x10;
              bVar12 = 2;
            }
            else {
              bVar12 = 1;
            }
            local_bc[1] = 3;
            local_bc[2] = bVar12 | 0x88;
            local_bc[3] = 0;
            if (!bVar14) {
              local_bc[4] = 0x20;
            }
            *(undefined4 *)(local_bc + 5) = *(undefined4 *)(param_2 + 0x138);
            *(undefined4 *)(local_bc + 9) = *(undefined4 *)(param_2 + 0x13c);
            FUN_00013362((undefined4 *)(param_2 + 0x138),8);
            local_bc[0x5e] = (char)uVar2;
            __dest_00 = local_bc + 0x5f;
            local_bc[0x5d] = (char)(uVar11 >> 8);
            sVar10 = *(size_t *)(param_2 + 0xa0);
            memcpy(__dest_00,(void *)(param_2 + 0x4e),sVar10);
            uVar2 = *(uint *)(param_2 + 300);
            local_b4[0] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18;
            FUN_000160b2(__dest_00 + sVar10,DAT_000169a4,local_b4,4);
            puVar3 = (undefined4 *)(local_bc + 0xd);
            puVar5 = (undefined4 *)(param_2 + 0xe);
            do {
              puVar7 = puVar5 + 1;
              *puVar3 = *puVar5;
              puVar3 = puVar3 + 1;
              puVar5 = puVar7;
            } while (puVar7 != (undefined4 *)(param_2 + 0x2e));
            FUN_00014a0c(param_1,param_2 + 0x148,bVar12,param_2 + 8,0x888e,iVar1,local_c0,
                         local_bc + 0x4d);
          }
          puVar3 = (undefined4 *)(param_3 + 0xd);
          puVar5 = (undefined4 *)(param_2 + 0x2e);
          do {
            puVar7 = puVar3 + 1;
            *puVar5 = *puVar3;
            puVar3 = puVar7;
            puVar5 = puVar5 + 1;
          } while (puVar7 != (undefined4 *)(param_3 + 0x2d));
        }
      }
      else {
        local_90 = 0;
        if (*(int *)(param_2 + 0x134) == 8) {
          uVar8 = 0x20;
        }
        else {
          uVar8 = 0x10;
        }
        (*(code *)(*(undefined4 **)(param_1 + 0x15c))[6])
                  (**(undefined4 **)(param_1 + 0x15c),*(int *)(param_2 + 0x134),param_2 + 8,0,1,
                   &local_94,6,param_2 + 0x168,uVar8);
      }
    }
    else {
      memset(&local_94,0,0x6c);
      iVar1 = FUN_0001719a(param_3 + 0x5f,
                           CONCAT11(*(undefined1 *)(param_3 + 0x5d),*(undefined1 *)(param_3 + 0x5e))
                           ,&local_94);
      if ((-1 < iVar1) && (local_84 != (void *)0x0)) {
        iVar1 = memcmp(local_84,(void *)(param_2 + 0x11c),0x10);
        if (iVar1 == 0) {
          iVar9 = param_2 + 0x2e;
          iVar1 = FUN_00018fec(iVar9,0x20);
          if (iVar1 == 0) {
            FUN_000173fc(param_2 + 0xf8,0x20,DAT_000169a0,param_1 + 0x1a8,param_2 + 8,iVar9,
                         (undefined4 *)(param_3 + 0xd),param_2 + 0x18c,0x44,
                         *(undefined4 *)(param_2 + 0x144));
            local_b4[0] = *(uint *)(param_2 + 0x1bc);
            local_b4[1] = *(undefined4 *)(param_2 + 0x1c0);
            sVar10 = *(size_t *)(param_2 + 0xf4);
            *(undefined4 *)(param_2 + 0x1bc) = *(undefined4 *)(param_2 + 0x1c4);
            *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c8);
            *(undefined4 *)(param_2 + 0x1d4) = 1;
            *(uint *)(param_2 + 0x1c4) = local_b4[0];
            *(uint *)(param_2 + 0x1c8) = local_b4[1];
            __dest = malloc(sVar10 + 0x20);
            if (__dest != (void *)0x0) {
              memcpy(__dest,(void *)(param_2 + 0xa4),sVar10);
              uVar2 = *(uint *)(param_2 + 300);
              local_bc = (undefined1 *)
                         (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                         | uVar2 >> 0x18);
              uVar8 = FUN_000160b2((int)__dest + sVar10,DAT_000169a4,&local_bc,4);
              FUN_000160b2(uVar8,DAT_000169a8,(void *)(param_2 + 0x11c),0x10);
              iVar1 = FUN_00014bec(param_1,param_2 + 8,param_3,param_5,iVar9,__dest,sVar10 + 0x20,
                                   param_2 + 0x18c);
              if (iVar1 != 0) {
                (*(code *)PTR_free_00037148)(__dest);
                return;
              }
              free(__dest);
              puVar3 = (undefined4 *)(param_3 + 0xd);
              puVar5 = (undefined4 *)(param_2 + 0xe);
              do {
                puVar7 = puVar3 + 1;
                *puVar5 = *puVar3;
                puVar3 = puVar7;
                puVar5 = puVar5 + 1;
              } while (puVar7 != (undefined4 *)(param_3 + 0x2d));
            }
          }
          else {
            FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_0001699c);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_000169ac @ 000169ac size=1444 ===== */

void FUN_000169ac(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ushort param_5,
                 undefined2 param_6)

{
  ushort uVar1;
  undefined1 uVar2;
  uint *__s2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *__s1;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *__dest;
  undefined4 *puVar12;
  size_t __n;
  void *__s1_00;
  byte bVar13;
  undefined4 local_bc;
  undefined1 *local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined1 auStack_94 [8];
  void *local_8c;
  uint local_88;
  uint *local_78;
  uint local_74;
  undefined4 *local_70;
  uint local_6c;
  undefined4 *local_68;
  uint local_64;
  uint *local_60;
  uint local_5c;
  uint *local_58;
  uint local_54;
  
  iVar7 = *(int *)(param_1 + 0x16c);
  if ((int)((uint)param_5 << 0x15) < 0) {
    if ((((iVar7 != 0) && (*(int *)(param_1 + 0x1d0) == 2)) &&
        (iVar7 = FUN_0001719a(param_3 + 0x5f,param_4,auStack_94), -1 < iVar7)) &&
       ((local_58 != (uint *)0x0 && (3 < local_54)))) {
      if ((local_78 == (uint *)0x0) || (local_74 < 6)) {
        local_b4 = 0;
        local_b0._0_2_ = 0;
        uVar1 = (ushort)local_b0;
      }
      else {
        local_b4 = *local_78;
        uVar1 = (ushort)local_78[1];
      }
      local_b0 = CONCAT22(local_b0._2_2_,uVar1);
      uVar5 = local_b0;
      uVar8 = *local_58;
      local_b0._1_1_ = (undefined1)(uVar1 >> 8);
      uVar2 = local_b0._1_1_;
      uVar10 = (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
      local_b0 = uVar5;
      FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00016d54,
                   (uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff,uVar10,local_b4 & 0xff,
                   local_b4 >> 8 & 0xff,local_b4 >> 0x10 & 0xff,local_b4 >> 0x18,uVar1 & 0xff,uVar2)
      ;
      if ((local_78 != (uint *)0x0) && (uVar10 - 1 < 3)) {
        piVar11 = *(int **)(param_1 + 0x204);
        while ((piVar11 != (int *)0x0 && (iVar7 = memcmp(piVar11 + 2,local_78,6), iVar7 != 0))) {
          piVar11 = (int *)*piVar11;
        }
      }
    }
  }
  else if ((int)((uint)param_5 << 0x18) < 0) {
    if ((((iVar7 != 0) && (*(int *)(param_1 + 0x1d0) == 2)) &&
        (iVar7 = FUN_0001719a(param_3 + 0x5f,param_4,auStack_94), -1 < iVar7)) &&
       (((local_8c != (void *)0x0 && (local_78 != (uint *)0x0)) &&
        ((5 < local_74 &&
         ((local_88 < 0x51 && (iVar7 = FUN_000174de(local_8c,local_88,&local_b4), -1 < iVar7))))))))
    {
      local_b0 = local_b0 & *(uint *)(param_1 + 0x170);
      if ((int)(local_b0 << 0x1b) < 0) {
        iVar7 = 0x10;
      }
      else {
        if (-1 < (int)(local_b0 << 0x1c)) {
LAB_00016ace:
          FUN_0001618c(param_1,param_2,local_78,param_6);
          return;
        }
        iVar7 = 8;
      }
      puVar3 = (undefined4 *)FUN_000139a8(0x1d8);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[2] = *local_78;
        *(short *)(puVar3 + 3) = (short)local_78[1];
        puVar12 = (undefined4 *)((int)puVar3 + 0xe);
        puVar6 = (undefined4 *)(param_3 + 0xd);
        do {
          puVar9 = puVar6 + 1;
          *puVar12 = *puVar6;
          puVar12 = puVar12 + 1;
          puVar6 = puVar9;
        } while (puVar9 != (undefined4 *)(param_3 + 0x2d));
        memcpy((void *)((int)puVar3 + 0x4e),local_8c,local_88);
        puVar3[0x28] = local_88;
        puVar3[0x4d] = iVar7;
        iVar4 = FUN_00018fec((undefined4 *)((int)puVar3 + 0x2e),0x20);
        if (iVar4 == 0) {
          *(undefined1 *)(puVar3 + 0x29) = 0x30;
          *(undefined1 *)((int)puVar3 + 0xa7) = 0;
          *(undefined1 *)((int)puVar3 + 0xa6) = 1;
          *(undefined1 *)(puVar3 + 0x2a) = 0;
          *(undefined1 *)((int)puVar3 + 0xa9) = 0xf;
          *(undefined1 *)((int)puVar3 + 0xaa) = 0xac;
          *(undefined1 *)((int)puVar3 + 0xab) = 4;
          *(undefined1 *)((int)puVar3 + 0xad) = 0;
          *(undefined1 *)(puVar3 + 0x2b) = 1;
          if (iVar7 == 0x10) {
            *(undefined1 *)((int)puVar3 + 0xae) = 0;
            *(undefined1 *)((int)puVar3 + 0xaf) = 0xf;
            *(undefined1 *)(puVar3 + 0x2c) = 0xac;
            *(undefined1 *)((int)puVar3 + 0xb1) = 4;
          }
          else if (iVar7 == 8) {
            *(undefined1 *)(puVar3 + 0x2c) = 0xac;
            *(undefined1 *)((int)puVar3 + 0xae) = 0;
            *(undefined1 *)((int)puVar3 + 0xaf) = 0xf;
            *(undefined1 *)((int)puVar3 + 0xb1) = 2;
          }
          iVar4 = (int)puVar3 + (0xb2 - (int)(puVar3 + 0x29));
          puVar3[0x3d] = iVar4;
          *(char *)((int)puVar3 + 0xa5) = (char)iVar4 + -2;
          uVar8 = iVar4 + 0x32U & 0xffff;
          iVar7 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                            (**(undefined4 **)(param_1 + 0x15c),3,0,uVar8 + 0x5f & 0xffff,&local_bc,
                             &local_b8);
          if (iVar7 != 0) {
            *local_b8 = 2;
            local_b8[2] = (char)param_6;
            local_b8[1] = (byte)((ushort)param_6 >> 8) | 0x23;
            local_b8[3] = 0;
            local_b8[4] = 0;
            *(undefined4 *)(local_b8 + 5) = *(undefined4 *)(param_3 + 5);
            *(undefined4 *)(local_b8 + 9) = *(undefined4 *)(param_3 + 9);
            puVar12 = (undefined4 *)(local_b8 + 0xd);
            puVar6 = (undefined4 *)((int)puVar3 + 0x2e);
            do {
              puVar9 = puVar6 + 1;
              *puVar12 = *puVar6;
              puVar12 = puVar12 + 1;
              puVar6 = puVar9;
            } while (puVar9 != (undefined4 *)((int)puVar3 + 0x4e));
            local_b8[0x5e] = (char)(iVar4 + 0x32U);
            local_b8[0x5d] = (char)(uVar8 >> 8);
            __dest = local_b8 + 0x5f;
            __n = puVar3[0x3d];
            memcpy(__dest,puVar3 + 0x29,__n);
            uVar5 = FUN_000160b2(__dest + __n,DAT_00016d60,puVar3 + 2,6);
            FUN_000160b2(uVar5,DAT_00016d64,(undefined4 *)((int)puVar3 + 0xe),0x20);
            FUN_00014a0c(param_1,param_1 + 0x24,param_6,param_2,0x888e,iVar7,local_bc,
                         local_b8 + 0x4d);
          }
          *puVar3 = *(undefined4 *)(param_1 + 0x204);
          *(undefined4 **)(param_1 + 0x204) = puVar3;
        }
        else {
          FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00016d58);
          FUN_00013c64(DAT_00016d5c,param_1,puVar3);
LAB_00016b5c:
          free(puVar3);
        }
      }
    }
  }
  else if ((((((iVar7 != 0) && (*(int *)(param_1 + 0x1d0) == 2)) &&
             (iVar7 = FUN_0001719a(param_3 + 0x5f,param_4,auStack_94), puVar3 = local_68,
             puVar12 = local_70, __s2 = local_78, -1 < iVar7)) &&
            ((local_78 != (uint *)0x0 && (5 < local_74)))) && (local_68 != (undefined4 *)0x0)) &&
          (((0x1f < local_64 && (local_70 != (undefined4 *)0x0)) &&
           ((0x3f < local_6c && ((local_60 != (uint *)0x0 && (3 < local_5c)))))))) {
    piVar11 = *(int **)(param_1 + 0x204);
LAB_00016d1a:
    if (piVar11 != (int *)0x0) {
      __s1_00 = piVar11 + 2;
      iVar7 = memcmp(__s1_00,__s2,6);
      if (iVar7 != 0) goto LAB_00016d48;
      iVar7 = piVar11[1];
      if (iVar7 == 0) {
        __s1 = (void *)((int)piVar11 + 0x2e);
      }
      else {
        __s1 = (void *)((int)piVar11 + 0xe);
      }
      iVar4 = memcmp(__s1,(void *)(param_3 + 0xd),0x20);
      if (iVar4 != 0) goto LAB_00016d48;
      if (iVar7 == 0) {
        iVar7 = memcmp(puVar12 + 8,(void *)((int)piVar11 + 0x2e),0x20);
        if ((iVar7 == 0) && (iVar7 = memcmp(puVar3,(void *)((int)piVar11 + 0xe),0x20), iVar7 == 0))
        goto LAB_00016e54;
      }
      else if ((local_8c != (void *)0x0) &&
              ((local_88 < 0x51 && (iVar7 = FUN_000174de(local_8c,local_88,&local_b4), -1 < iVar7)))
              ) {
        iVar7 = memcmp((void *)(param_3 + 0xd),(void *)((int)piVar11 + 0xe),0x20);
        if ((iVar7 == 0) &&
           (iVar7 = memcmp(local_70 + 8,(void *)((int)piVar11 + 0xe),0x20), iVar7 == 0)) {
          memcpy(piVar11 + 0x29,local_8c,local_88);
          piVar11[0x3d] = local_88;
          puVar12 = (undefined4 *)((int)piVar11 + 0x2e);
          puVar3 = local_68;
          do {
            puVar6 = puVar3 + 1;
            *puVar12 = *puVar3;
            puVar12 = puVar12 + 1;
            puVar3 = puVar6;
          } while (puVar6 != local_68 + 8);
          local_b0 = local_b0 & *(uint *)(param_1 + 0x170);
          if ((int)(local_b0 << 0x1b) < 0) {
            uVar5 = 0x10;
          }
          else {
            if (-1 < (int)(local_b0 << 0x1c)) goto LAB_00016ace;
            uVar5 = 8;
          }
          piVar11[0x4d] = uVar5;
LAB_00016e54:
          puVar6 = piVar11 + 0x3e;
          puVar12 = puVar6;
          puVar3 = local_70;
          do {
            puVar9 = puVar3 + 1;
            *puVar12 = *puVar3;
            puVar12 = puVar12 + 1;
            puVar3 = puVar9;
          } while (puVar9 != local_70 + 8);
          piVar11[0x46] = 1;
          iVar7 = (int)(piVar11 + 0x47);
          uVar8 = *local_60;
          uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18;
          if (DAT_00016f68 <= uVar8) {
            uVar8 = DAT_00016f68;
          }
          piVar11[0x4b] = uVar8;
          FUN_00013744(&local_b4);
          uVar5 = DAT_00016f6c;
          piVar11[0x4c] = local_b4 + uVar8;
          puVar12 = (undefined4 *)((int)piVar11 + 0xe);
          FUN_00013bbe(uVar8,0,uVar5,param_1,piVar11);
          if (piVar11[1] == 0) {
            FUN_0001612c(puVar6,(int)piVar11 + 0x2e,param_1 + 0x1a8,puVar12,__s1_00,iVar7);
            return;
          }
          FUN_0001612c(puVar6,(int)piVar11 + 0x2e,__s1_00,puVar12,param_1 + 0x1a8,iVar7);
          puVar3 = (undefined4 *)
                   (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                             (**(undefined4 **)(param_1 + 0x15c),3,0,0x75,&local_bc,&local_b8);
          if (puVar3 == (undefined4 *)0x0) {
            return;
          }
          *local_b8 = 2;
          iVar4 = piVar11[0x4d];
          if (iVar4 == 0x10) {
            local_b8[4] = 0x10;
            bVar13 = 2;
          }
          else {
            bVar13 = 1;
          }
          local_b8[2] = bVar13 | 0x88;
          local_b8[1] = 0;
          local_b8[3] = 0;
          if (iVar4 != 0x10) {
            local_b8[4] = 0x20;
          }
          *(int *)(local_b8 + 5) = piVar11[0x4e];
          *(int *)(local_b8 + 9) = piVar11[0x4f];
          FUN_00013362(piVar11 + 0x4e,8);
          uVar5 = DAT_00016f70;
          local_b8[0x5d] = 0;
          local_b8[0x5e] = 0x16;
          FUN_000160b2(local_b8 + 0x5f,uVar5,iVar7,0x10);
          iVar7 = FUN_00018fec(puVar12,0x20);
          if (iVar7 == 0) {
            puVar6 = (undefined4 *)(local_b8 + 0xd);
            do {
              puVar9 = puVar12 + 1;
              *puVar6 = *puVar12;
              puVar6 = puVar6 + 1;
              puVar12 = puVar9;
            } while (puVar9 != (undefined4 *)((int)piVar11 + 0x2e));
            FUN_00014a0c(param_1,0,bVar13,__s1_00,0x888e,puVar3,local_bc,0);
            return;
          }
          FUN_0001341c(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00016f74);
          goto LAB_00016b5c;
        }
      }
    }
  }
  return;
LAB_00016d48:
  piVar11 = (int *)*piVar11;
  goto LAB_00016d1a;
}



/* ===== FUN_00016f78 @ 00016f78 size=414 ===== */

undefined4 FUN_00016f78(char *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined4 *extraout_r2;
  int extraout_r2_00;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  
  if ((param_2 != 0) && (*param_1 == '0')) {
    uVar4 = FUN_000174de();
    return uVar4;
  }
  *param_3 = 1;
  param_3[1] = 8;
  param_3[2] = 8;
  param_3[3] = 1;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  uVar1 = DAT_000177ec;
  if (param_2 < 8) {
    uVar4 = 0xffffffff;
  }
  else if ((((*param_1 == -0x23) && ((uint)(byte)param_1[1] == param_2 - 2)) &&
           (uVar7 = *(uint *)(param_1 + 2),
           (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) == DAT_000177ec)) && (*(short *)(param_1 + 6) == 1)) {
    iVar9 = param_2 - 8;
    puVar5 = (ushort *)(param_1 + 8);
    if (iVar9 < 4) {
      if (0 < iVar9) {
        return 0xfffffffd;
      }
    }
    else {
      uVar13 = FUN_00017370();
      extraout_r2[2] = (int)uVar13;
      iVar9 = (int)((ulonglong)uVar13 >> 0x20) + -0xc;
      puVar5 = (ushort *)(param_1 + 0xc);
      param_3 = extraout_r2;
    }
    if (iVar9 < 2) {
      if (iVar9 == 1) {
        return 0xfffffffb;
      }
    }
    else {
      param_3[1] = 0;
      puVar10 = puVar5 + 1;
      uVar7 = (uint)*puVar5;
      if ((uVar7 == 0) || (puVar5 = puVar10, iVar9 + -2 < (int)(uVar7 * 4))) {
        return 0xfffffffc;
      }
      do {
        uVar13 = FUN_00017370(puVar5);
        *(uint *)(extraout_r2_00 + 4) = (uint)uVar13 | *(uint *)(extraout_r2_00 + 4);
        puVar5 = puVar5 + 2;
      } while ((int)((ulonglong)uVar13 >> 0x20) + 1 < (int)uVar7);
      iVar11 = iVar9 + -2 + uVar7 * -4;
      if (iVar11 < 2) {
        if (iVar11 == 1) {
          return 0xfffffff9;
        }
      }
      else {
        *(undefined4 *)(extraout_r2_00 + 0xc) = 0;
        uVar3 = DAT_000177f4;
        uVar2 = DAT_000177f0;
        puVar6 = (uint *)(puVar10 + (uVar7 + 0x3fffffff) * 2 + 3);
        iVar9 = iVar9 + uVar7 * -4 + -4;
        uVar7 = (uint)CONCAT11(*(char *)((int)puVar10 + uVar7 * 4 + 1),(char)puVar10[uVar7 * 2]);
        if ((uVar7 == 0) || (iVar9 < (int)(uVar7 * 4))) {
          return 0xfffffffa;
        }
        iVar11 = 0;
        puVar12 = puVar6;
        do {
          uVar8 = *puVar12;
          uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18;
          if (uVar8 == uVar1) {
            uVar8 = 1;
          }
          else if (uVar8 == uVar2) {
            uVar8 = 2;
          }
          else if (uVar8 == uVar3) {
            uVar8 = 0x10;
          }
          else {
            uVar8 = 0;
          }
          iVar11 = iVar11 + 1;
          puVar12 = puVar12 + 1;
          *(uint *)(extraout_r2_00 + 0xc) = uVar8 | *(uint *)(extraout_r2_00 + 0xc);
        } while (iVar11 < (int)uVar7);
        if (1 < (int)(uVar7 * -4 + iVar9)) {
          *(uint *)(extraout_r2_00 + 0x10) =
               (uint)CONCAT11(*(char *)((int)puVar6 + uVar7 * 4 + 1),(char)puVar6[uVar7]);
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}



/* ===== FUN_00016f9a @ 00016f9a size=512 ===== */

int FUN_00016f9a(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar5;
  
  iVar9 = *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8);
  iVar7 = *(int *)(param_1 + 0x1dc);
  if (*(int *)(param_1 + 0x1d0) == 2) {
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar10 = 0x16;
    }
    else {
      uVar10 = 0x28;
    }
    if (uVar10 <= param_3) {
      *param_2 = 0x30;
      param_2[2] = 1;
      param_2[3] = 0;
      if (iVar8 == 0x10) {
        param_2[4] = 0;
        param_2[5] = 0xf;
        param_2[6] = 0xac;
        uVar3 = 4;
LAB_00016fe6:
        param_2[7] = uVar3;
      }
      else if (iVar8 == 8) {
        param_2[4] = 0;
        param_2[7] = 2;
        param_2[5] = 0xf;
        param_2[6] = 0xac;
      }
      else {
        if (iVar8 == 4) {
          param_2[4] = 0;
          param_2[5] = 0xf;
          param_2[6] = 0xac;
          uVar3 = 5;
          goto LAB_00016fe6;
        }
        if (iVar8 != 2) goto LAB_00016fbe;
        param_2[4] = 0;
        param_2[7] = 1;
        param_2[5] = 0xf;
        param_2[6] = 0xac;
      }
      param_2[8] = 1;
      uVar3 = 0;
      param_2[9] = 0;
      if (iVar9 == 0x10) {
        param_2[10] = 0;
        param_2[0xb] = 0xf;
        param_2[0xc] = 0xac;
        uVar3 = 4;
      }
      else if (iVar9 == 8) {
        param_2[10] = 0;
        param_2[0xb] = 0xf;
        param_2[0xc] = 0xac;
        uVar3 = 2;
      }
      else {
        if (iVar9 != 1) goto LAB_00016fbe;
        param_2[10] = 0;
        param_2[0xb] = 0xf;
        param_2[0xc] = 0xac;
      }
      param_2[0xd] = uVar3;
      param_2[0xe] = 1;
      param_2[0xf] = 0;
      if ((iVar7 == 1) || (iVar7 == 2)) {
        param_2[0x10] = 0;
        param_2[0x13] = (char)iVar7;
        param_2[0x11] = 0xf;
        param_2[0x15] = 0;
        param_2[0x12] = 0xac;
        param_2[0x14] = 0;
        if (*(int *)(param_1 + 0x138) == 0) {
          puVar1 = param_2 + 0x16;
        }
        else {
          param_2[0x17] = 0;
          param_2[0x16] = 1;
          iVar7 = *(int *)(param_1 + 0x138);
          puVar2 = (undefined4 *)(param_2 + 0x18);
          puVar4 = (undefined4 *)(iVar7 + 4);
          do {
            puVar5 = puVar4 + 1;
            *puVar2 = *puVar4;
            puVar2 = puVar2 + 1;
            puVar4 = puVar5;
          } while (puVar5 != (undefined4 *)(iVar7 + 0x14));
          puVar1 = param_2 + 0x28;
        }
        iVar7 = (int)puVar1 - (int)param_2;
        cVar6 = (char)iVar7 + -2;
        goto LAB_00017048;
      }
    }
LAB_00016fbe:
    iVar7 = -1;
  }
  else {
    if (param_3 < 0x18) goto LAB_00016fbe;
    *param_2 = 0xdd;
    param_2[2] = 0;
    param_2[3] = 0x50;
    param_2[4] = 0xf2;
    param_2[5] = 1;
    param_2[7] = 0;
    param_2[6] = 1;
    if (iVar8 == 0x10) {
      param_2[8] = 0;
      uVar3 = 4;
      param_2[9] = 0x50;
      param_2[10] = 0xf2;
LAB_000170f0:
      param_2[0xb] = uVar3;
    }
    else {
      if (iVar8 == 8) {
        param_2[8] = 0;
        uVar3 = 2;
        param_2[9] = 0x50;
        param_2[10] = 0xf2;
        goto LAB_000170f0;
      }
      if (iVar8 == 4) {
        param_2[8] = 0;
        uVar3 = 5;
        param_2[9] = 0x50;
        param_2[10] = 0xf2;
        goto LAB_000170f0;
      }
      if (iVar8 != 2) goto LAB_00016fbe;
      param_2[8] = 0;
      param_2[9] = 0x50;
      param_2[10] = 0xf2;
      param_2[0xb] = 1;
    }
    param_2[0xc] = 1;
    uVar3 = 0;
    param_2[0xd] = 0;
    if (iVar9 == 0x10) {
      param_2[0xe] = 0;
      param_2[0xf] = 0x50;
      param_2[0x10] = 0xf2;
      uVar3 = 4;
    }
    else if (iVar9 == 8) {
      param_2[0xe] = 0;
      param_2[0xf] = 0x50;
      param_2[0x10] = 0xf2;
      uVar3 = 2;
    }
    else {
      if (iVar9 != 1) goto LAB_00016fbe;
      param_2[0xe] = 0;
      param_2[0xf] = 0x50;
      param_2[0x10] = 0xf2;
    }
    param_2[0x11] = uVar3;
    param_2[0x12] = 1;
    param_2[0x13] = 0;
    if ((iVar7 == 1) || (iVar7 == 2)) {
      param_2[0x14] = 0;
      param_2[0x17] = (char)iVar7;
      param_2[0x15] = 0x50;
      param_2[0x16] = 0xf2;
    }
    else {
      if (iVar7 != 0x10) goto LAB_00016fbe;
      param_2[0x14] = 0;
      param_2[0x15] = 0x50;
      param_2[0x17] = 0;
      param_2[0x16] = 0xf2;
    }
    iVar7 = 0x18;
    cVar6 = '\x16';
LAB_00017048:
    param_2[1] = cVar6;
  }
  return iVar7;
}



/* ===== FUN_0001719a @ 0001719a size=376 ===== */

undefined4 FUN_0001719a(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  
  pcVar12 = param_1 + param_2;
  memset(param_3,0,0x6c);
  uVar8 = DAT_00017330;
  uVar7 = DAT_0001732c;
  uVar6 = DAT_00017328;
  uVar5 = DAT_00017324;
  uVar4 = DAT_00017320;
  uVar3 = DAT_00017318;
  uVar2 = DAT_00017314;
  pcVar10 = param_1 + param_2 + -1;
  do {
    if (pcVar12 <= param_1 + 1) {
      return 0;
    }
    cVar1 = *param_1;
    if (cVar1 == -0x23) {
      if (param_1 == pcVar10) {
        return 0;
      }
      if (param_1[1] == '\0') {
        return 0;
      }
    }
    uVar9 = (uint)(byte)param_1[1];
    if (pcVar12 < param_1 + uVar9 + 2) {
      return 0xffffffff;
    }
    if (cVar1 == '0') {
      param_3[2] = param_1;
      param_3[3] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == '6') {
      param_3[0x11] = param_1;
      param_3[0x12] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == '7') {
      param_3[0x13] = param_1;
      param_3[0x14] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == '8') {
      if (4 < uVar9) {
        if (param_1[2] == '\x01') {
          param_3[0x15] = param_1;
        }
        else if (param_1[2] == '\x02') {
          param_3[0x16] = param_1;
        }
      }
    }
    else if (cVar1 == 'e') {
      param_3[0x17] = param_1;
      param_3[0x18] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == '\x7f') {
      param_3[0x19] = param_1;
      param_3[0x1a] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == -0x23) {
      if (uVar9 == 0) {
        return 0;
      }
      if ((((uVar9 < 6) ||
           (uVar11 = *(uint *)(param_1 + 2),
           (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) != uVar8)) || (param_1[6] != '\x01')) || (param_1[7] != '\0')) {
        if ((param_1 + 5 < pcVar12) && (0x13 < uVar9)) {
          if (*(int *)(param_1 + 2) == DAT_0001731c) {
            param_3[4] = param_1 + 6;
          }
          else {
LAB_000172a6:
            uVar9 = *(uint *)(param_1 + 2);
            uVar9 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                    uVar9 >> 0x18;
            if (uVar9 == uVar2) {
              param_3[5] = param_1 + 6;
              param_3[6] = (byte)param_1[1] - 4;
            }
            else if (uVar9 == uVar3) {
              param_3[7] = param_1 + 6;
              param_3[8] = (byte)param_1[1] - 4;
            }
            else if (uVar9 == uVar4) {
              param_3[9] = param_1 + 6;
              param_3[10] = (byte)param_1[1] - 4;
            }
            else if (uVar9 == uVar5) {
              param_3[0xb] = param_1 + 6;
              param_3[0xc] = (byte)param_1[1] - 4;
            }
            else if (uVar9 == uVar6) {
              param_3[0xd] = param_1 + 6;
              param_3[0xe] = (byte)param_1[1] - 4;
            }
            else if (uVar9 == uVar7) {
              param_3[0xf] = param_1 + 6;
              param_3[0x10] = (byte)param_1[1] - 4;
            }
          }
        }
        else if (6 < uVar9) goto LAB_000172a6;
      }
      else {
        *param_3 = param_1;
        param_3[1] = (byte)param_1[1] + 2;
      }
    }
    param_1 = param_1 + (byte)param_1[1] + 2;
  } while( true );
}



/* ===== FUN_00017334 @ 00017334 size=56 ===== */

undefined4 FUN_00017334(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 == DAT_0001736c) {
    return 1;
  }
  if (uVar1 == DAT_0001736c + 1) {
    return 2;
  }
  if (uVar1 == DAT_0001736c + 2) {
    return 8;
  }
  if (uVar1 == DAT_0001736c + 4) {
    return 0x10;
  }
  if (uVar1 == DAT_0001736c + 5) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00017370 @ 00017370 size=56 ===== */

undefined4 FUN_00017370(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 == DAT_000173a8) {
    return 1;
  }
  if (uVar1 == DAT_000173a8 + 1) {
    return 2;
  }
  if (uVar1 == DAT_000173a8 + 2) {
    return 8;
  }
  if (uVar1 == DAT_000173a8 + 4) {
    return 0x10;
  }
  if (uVar1 == DAT_000173a8 + 5) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000173ac @ 000173ac size=80 ===== */

undefined4
FUN_000173ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_24 [4];
  undefined4 uStack_14;
  
  if (param_2 == 1) {
    uVar4 = FUN_000185c4(param_1,0x10,param_3,param_4,param_5);
  }
  else {
    if (param_2 == 2) {
      puVar3 = local_24;
      iVar1 = FUN_0001b7e8(param_1,0x10,param_3,param_4,puVar3);
      if (iVar1 == 0) {
        do {
          uVar4 = *puVar3;
          uVar2 = puVar3[1];
          puVar3 = puVar3 + 2;
          *param_5 = uVar4;
          param_5[1] = uVar2;
          param_5 = param_5 + 2;
        } while (puVar3 != &uStack_14);
        return 0;
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_000173fc @ 000173fc size=226 ===== */

void FUN_000173fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5e;
  undefined2 local_5a;
  undefined4 local_58 [8];
  undefined4 local_38 [8];
  
  iVar1 = memcmp(param_4,param_5,6);
  if (iVar1 < 0) {
    local_5e = *param_5;
    local_64 = *param_4;
    local_5a = *(undefined2 *)(param_5 + 1);
    local_60 = *(undefined2 *)(param_4 + 1);
  }
  else {
    local_60 = *(undefined2 *)(param_5 + 1);
    local_64 = *param_5;
    local_5e = *param_4;
    local_5a = *(undefined2 *)(param_4 + 1);
  }
  iVar1 = memcmp(param_6,param_7,0x20);
  if (iVar1 < 0) {
    puVar3 = local_58;
    puVar5 = param_6;
    do {
      puVar4 = puVar5 + 2;
      uVar2 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar4;
    } while (puVar4 != param_6 + 8);
    puVar3 = local_38;
    puVar5 = param_7;
    do {
      puVar4 = puVar5 + 2;
      uVar2 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar4;
    } while (puVar4 != param_7 + 8);
  }
  else {
    puVar3 = local_58;
    puVar5 = param_7;
    do {
      puVar4 = puVar5 + 2;
      uVar2 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar4;
    } while (puVar4 != param_7 + 8);
    puVar3 = local_38;
    puVar5 = param_6;
    do {
      puVar4 = puVar5 + 2;
      uVar2 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar4;
    } while (puVar4 != param_6 + 8);
  }
  FUN_0001b804(param_1,param_2,param_3,&local_64,0x4c,param_8,param_9);
  return;
}



/* ===== FUN_000174de @ 000174de size=394 ===== */

undefined4 FUN_000174de(char *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *extraout_r2;
  int extraout_r2_00;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  
  param_3[2] = 0x10;
  *param_3 = 2;
  param_3[1] = 0x10;
  param_3[3] = 1;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  if (param_2 < 4) {
    uVar3 = 0xffffffff;
  }
  else if (((*param_1 == '0') && ((uint)(byte)param_1[1] == param_2 - 2)) &&
          (*(short *)(param_1 + 2) == 1)) {
    iVar9 = param_2 - 4;
    puVar2 = (ushort *)(param_1 + 4);
    if (iVar9 < 4) {
      if (0 < iVar9) {
        return 0xfffffffd;
      }
    }
    else {
      uVar15 = FUN_00017334();
      extraout_r2[2] = (int)uVar15;
      iVar9 = (int)((ulonglong)uVar15 >> 0x20) + -8;
      puVar2 = (ushort *)(param_1 + 8);
      param_3 = extraout_r2;
    }
    if (iVar9 < 2) {
      if (iVar9 == 1) {
        return 0xfffffffb;
      }
    }
    else {
      iVar10 = 0;
      param_3[1] = 0;
      iVar12 = iVar9 + -2;
      puVar13 = puVar2 + 1;
      uVar7 = (uint)*puVar2;
      if ((uVar7 == 0) || (iVar11 = uVar7 * 4, iVar11 - iVar12 != 0 && iVar12 <= iVar11)) {
        return 0xfffffffc;
      }
      do {
        iVar10 = iVar10 + 1;
        uVar15 = FUN_00017334(puVar13);
        iVar4 = (int)((ulonglong)uVar15 >> 0x20);
        puVar13 = puVar13 + 2;
        *(uint *)(extraout_r2_00 + 4) = (uint)uVar15 | *(uint *)(extraout_r2_00 + 4);
      } while (iVar10 < (int)uVar7);
      iVar12 = iVar12 + uVar7 * -4;
      iVar9 = iVar9 + 2 + uVar7 * -4;
      if (iVar12 < 2) {
        if (iVar12 == 1) {
          return 0xfffffff9;
        }
      }
      else {
        iVar10 = 0;
        *(undefined4 *)(extraout_r2_00 + 0xc) = 0;
        uVar1 = DAT_0001766c;
        uVar6 = DAT_00017668;
        iVar12 = iVar9 + -6;
        puVar5 = (uint *)(iVar4 + (uVar7 + 0x3fffffff) * 4 + 6);
        uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar11 + iVar4 + 1),
                               *(undefined1 *)(iVar4 + uVar7 * 4));
        if ((uVar7 == 0) || (iVar11 = uVar7 * 4, puVar14 = puVar5, iVar12 < iVar11)) {
          return 0xfffffffa;
        }
        do {
          uVar8 = *puVar14;
          uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18;
          if (uVar8 == uVar6) {
            uVar8 = 1;
          }
          else if (uVar8 == uVar1) {
            uVar8 = 2;
          }
          else {
            uVar8 = 0;
          }
          iVar10 = iVar10 + 1;
          *(uint *)(extraout_r2_00 + 0xc) = uVar8 | *(uint *)(extraout_r2_00 + 0xc);
          puVar14 = puVar14 + 1;
        } while (iVar10 < (int)uVar7);
        iVar9 = iVar9 + -2 + uVar7 * -4;
        if ((1 < (int)(iVar12 + uVar7 * -4)) &&
           (*(uint *)(extraout_r2_00 + 0x10) =
                 (uint)CONCAT11(*(undefined1 *)((int)puVar5 + iVar11 + 1),(char)puVar5[uVar7]),
           7 < iVar9)) {
          uVar6 = (uint)*(ushort *)((int)puVar5 + iVar11 + 2);
          *(uint *)(extraout_r2_00 + 0x14) = uVar6;
          if ((int)(uVar6 * 0x10) <= iVar9 + -8) {
            *(uint **)(extraout_r2_00 + 0x18) = puVar5 + uVar7 + 1;
            return 0;
          }
          *(undefined4 *)(extraout_r2_00 + 0x14) = 0;
          return 0xfffffff7;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



/* ===== FUN_000177f8 @ 000177f8 size=76 ===== */

void FUN_000177f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [4];
  undefined4 auStack_28 [5];
  
  local_44 = *DAT_00017844;
  uStack_40 = DAT_00017844[1];
  uStack_3c = DAT_00017844[2];
  local_50 = DAT_00017848;
  puVar3 = local_38;
  uStack_4c = param_3;
  local_48 = param_4;
  FUN_0001b6d8(param_1,param_2,3,&local_50,&local_44,puVar3);
  do {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 2;
    *param_5 = uVar1;
    param_5[1] = uVar2;
    param_5 = param_5 + 2;
  } while (puVar3 != auStack_28);
  return;
}



/* ===== FUN_0001784c @ 0001784c size=18 ===== */

undefined4 FUN_0001784c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00017864;
  if (param_1 - 1U < 0x18) {
    uVar1 = *(undefined4 *)(DAT_00017860 + (param_1 - 1U) * 4 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_00017868 @ 00017868 size=56 ===== */

undefined4 FUN_00017868(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 1:
    uVar1 = DAT_000178b0;
    uVar2 = DAT_000178ac;
    if (param_2 == 3) {
      return DAT_000178c4;
    }
    break;
  case 2:
    uVar1 = DAT_000178b8;
    uVar2 = DAT_000178b4;
    if (param_2 == 3) {
      return DAT_000178c8;
    }
    break;
  default:
    return DAT_000178bc;
  case 4:
    return DAT_000178c0;
  case 8:
    return DAT_000178a8;
  }
  if (param_2 == 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* ===== FUN_000178cc @ 000178cc size=36 ===== */

int FUN_000178cc(undefined4 param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
  if (((param_2 == (void *)0x0) || (param_4 == (void *)0x0)) || (param_3 != param_5)) {
    iVar1 = -1;
  }
  else {
    iVar1 = memcmp(param_2,param_4,param_3);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}



/* ===== FUN_000178f0 @ 000178f0 size=282 ===== */

undefined4 * FUN_000178f0(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  undefined4 *__ptr;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_6c [20];
  byte local_58 [68];
  
  __ptr = (undefined4 *)FUN_000139a8(0xa4);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    switch(param_1) {
    case 0:
      FUN_00018c7c(__ptr + 1);
      break;
    case 1:
      FUN_0001c6a4(__ptr + 1);
      break;
    case 2:
      puVar3 = __ptr + 1;
      if (0x40 < param_3) {
        FUN_00018c7c(puVar3);
        FUN_00018ca8(puVar3,param_2,param_3);
        param_2 = auStack_6c;
        FUN_00018d3a(auStack_6c,puVar3);
        param_3 = 0x10;
      }
      memcpy(__ptr + 0x18,param_2,param_3);
      __ptr[0x28] = param_3;
      memcpy(local_58,param_2,param_3);
      memset(local_58 + param_3,0,0x40 - param_3);
      iVar2 = 0x40;
      pbVar1 = local_58;
      do {
        iVar2 = iVar2 + -1;
        *pbVar1 = *pbVar1 ^ 0x36;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 != 0);
      FUN_00018c7c(puVar3);
      FUN_00018ca8(puVar3,local_58,0x40);
      break;
    case 3:
      puVar3 = __ptr + 1;
      if (0x40 < param_3) {
        FUN_0001c6a4(puVar3);
        FUN_0001c6d8(puVar3,param_2,param_3);
        param_2 = auStack_6c;
        FUN_0001c744(auStack_6c,puVar3);
        param_3 = 0x14;
      }
      memcpy(__ptr + 0x18,param_2,param_3);
      __ptr[0x28] = param_3;
      memcpy(local_58,param_2,param_3);
      memset(local_58 + param_3,0,0x40 - param_3);
      iVar2 = 0x40;
      pbVar1 = local_58;
      do {
        iVar2 = iVar2 + -1;
        *pbVar1 = *pbVar1 ^ 0x36;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 != 0);
      FUN_0001c6a4(puVar3);
      FUN_0001c6d8(puVar3,local_58,0x40);
      break;
    default:
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00017a2c @ 00017a2c size=302 ===== */

undefined4 FUN_00017a2c(undefined4 *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  byte local_58 [68];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  if ((param_2 == 0) || (param_3 == (uint *)0x0)) goto switchD_00017a4e_default;
  switch(*param_1) {
  case 0:
    if (0xf < *param_3) {
      *param_3 = 0x10;
LAB_00017a74:
      FUN_00018d3a(param_2,param_1 + 1);
      goto switchD_00017a4e_default;
    }
    break;
  case 1:
    if (*param_3 < 0x14) {
LAB_00017a82:
      uVar2 = 0x14;
      goto LAB_00017a5e;
    }
    *param_3 = 0x14;
    goto LAB_00017a8c;
  case 2:
    if (0xf < *param_3) {
      puVar4 = param_1 + 1;
      *param_3 = 0x10;
      FUN_00018d3a(param_2,puVar4);
      sVar5 = param_1[0x28];
      memcpy(local_58,param_1 + 0x18,sVar5);
      memset(local_58 + sVar5,0,0x40 - sVar5);
      iVar3 = 0x40;
      pbVar1 = local_58;
      do {
        iVar3 = iVar3 + -1;
        *pbVar1 = *pbVar1 ^ 0x5c;
        pbVar1 = pbVar1 + 1;
      } while (iVar3 != 0);
      FUN_00018c7c(puVar4);
      FUN_00018ca8(puVar4,local_58,0x40);
      FUN_00018ca8(puVar4,param_2,0x10);
      goto LAB_00017a74;
    }
    break;
  case 3:
    if (*param_3 < 0x14) goto LAB_00017a82;
    puVar4 = param_1 + 1;
    *param_3 = 0x14;
    FUN_0001c744(param_2,puVar4);
    sVar5 = param_1[0x28];
    memcpy(local_58,param_1 + 0x18,sVar5);
    memset(local_58 + sVar5,0,0x40 - sVar5);
    iVar3 = 0x40;
    pbVar1 = local_58;
    do {
      iVar3 = iVar3 + -1;
      *pbVar1 = *pbVar1 ^ 0x5c;
      pbVar1 = pbVar1 + 1;
    } while (iVar3 != 0);
    FUN_0001c6a4(puVar4);
    FUN_0001c6d8(puVar4,local_58,0x40);
    FUN_0001c6d8(puVar4,param_2,0x14);
LAB_00017a8c:
    FUN_0001c744(param_2,param_1 + 1);
switchD_00017a4e_default:
    free(param_1);
    return 0;
  default:
    goto switchD_00017a4e_default;
  }
  uVar2 = 0x10;
LAB_00017a5e:
  *param_3 = uVar2;
  free(param_1);
  return 0xffffffff;
}



/* ===== FUN_00017bfc @ 00017bfc size=200 ===== */

void FUN_00017bfc(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = ((uint)param_2[1] << 0x10 | (uint)*param_2 << 0x18) ^ (uint)param_2[3] |
             (uint)param_2[2] << 8;
  param_1[1] = ((uint)param_2[5] << 0x10 | (uint)param_2[4] << 0x18) ^ (uint)param_2[7] |
               (uint)param_2[6] << 8;
  param_1[2] = ((uint)param_2[9] << 0x10 | (uint)param_2[8] << 0x18) ^ (uint)param_2[0xb] |
               (uint)param_2[10] << 8;
  pbVar1 = DAT_00017cc4;
  param_1[3] = ((uint)param_2[0xd] << 0x10 | (uint)param_2[0xc] << 0x18) ^ (uint)param_2[0xf] |
               (uint)param_2[0xe] << 8;
  puVar2 = param_1;
  pbVar4 = pbVar1;
  do {
    uVar6 = puVar2[3];
    puVar3 = puVar2 + 4;
    uVar5 = *(uint *)(pbVar1 + (uVar6 & 0xff) * 4 + 0xc) & 0xff00 ^ *puVar2 ^
            *(uint *)(pbVar1 + ((uVar6 & 0xffff) >> 8) * 4 + 0xc) & 0xff0000 ^
            (uint)pbVar1[(uVar6 >> 0x18) * 4 + 0xd] ^ (uint)*pbVar4 << 0x18 ^
            (*(uint *)(pbVar1 + ((uVar6 & 0xffffff) >> 0x10) * 4 + 0xc) & 0xff0000) << 8;
    *puVar3 = uVar5;
    uVar5 = uVar5 ^ puVar2[1];
    puVar2[5] = uVar5;
    uVar5 = uVar5 ^ puVar2[2];
    puVar2[6] = uVar5;
    puVar2[7] = uVar5 ^ uVar6;
    puVar2 = puVar3;
    pbVar4 = pbVar4 + 1;
  } while (puVar3 != param_1 + 0x28);
  return;
}



/* ===== FUN_00017cc8 @ 00017cc8 size=192 ===== */

void FUN_00017cc8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_00017bfc();
  puVar5 = param_1;
  puVar8 = param_1;
  do {
    puVar9 = puVar8 + -4;
    uVar3 = *puVar5;
    *puVar5 = puVar8[0x28];
    puVar8[0x28] = uVar3;
    uVar3 = puVar5[1];
    puVar5[1] = puVar8[0x29];
    puVar8[0x29] = uVar3;
    uVar3 = puVar5[2];
    puVar5[2] = puVar8[0x2a];
    puVar8[0x2a] = uVar3;
    uVar3 = puVar5[3];
    puVar5[3] = puVar8[0x2b];
    puVar8[0x2b] = uVar3;
    iVar2 = DAT_00017d8c;
    iVar1 = DAT_00017d88;
    puVar5 = puVar5 + 4;
    puVar8 = puVar9;
  } while (param_1 + -0x14 != puVar9);
  puVar4 = param_1 + 7;
  do {
    puVar10 = puVar4 + -4;
    do {
      puVar10 = puVar10 + 1;
      uVar6 = *puVar10;
      uVar12 = *(uint *)(iVar1 + ((*(uint *)(iVar2 + (uVar6 & 0xff) * 4) & 0xffff) >> 8) * 4);
      uVar11 = *(uint *)(iVar1 + ((*(uint *)(iVar2 + ((uVar6 & 0xffffff) >> 0x10) * 4) & 0xffff) >>
                                 8) * 4);
      uVar7 = *(uint *)(iVar1 + ((*(uint *)(iVar2 + ((uVar6 & 0xffff) >> 8) * 4) & 0xffff) >> 8) * 4
                       );
      *puVar10 = *(uint *)(iVar1 + ((*(uint *)(iVar2 + (uVar6 >> 0x18) * 4) & 0xffff) >> 8) * 4) ^
                 (uVar12 >> 0x18 | uVar12 << 8) ^ (uVar11 >> 8 | uVar11 << 0x18) ^
                 (uVar7 >> 0x10 | uVar7 << 0x10);
    } while (puVar4 != puVar10);
    puVar4 = puVar4 + 4;
  } while (param_1 + 0x2b != puVar4);
  return;
}



/* ===== FUN_00017d90 @ 00017d90 size=32 ===== */

void * FUN_00017d90(undefined4 param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 == 0x10) {
    pvVar1 = malloc(0xb0);
    if (pvVar1 != (void *)0x0) {
      FUN_00017cc8(pvVar1,param_1);
    }
  }
  else {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ===== FUN_00017db0 @ 00017db0 size=754 ===== */

void FUN_00017db0(uint *param_1,byte *param_2,undefined1 *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar3 = DAT_000180a8;
  uVar17 = (uint)param_2[3] ^ *param_1 ^ (uint)*param_2 << 0x18 ^ (uint)param_2[1] << 0x10 ^
           (uint)param_2[2] << 8;
  uVar13 = (uint)param_2[7] ^ param_1[1] ^ (uint)param_2[4] << 0x18 ^ (uint)param_2[5] << 0x10 ^
           (uint)param_2[6] << 8;
  uVar15 = (uint)param_2[0xb] ^ param_1[2] ^ (uint)param_2[8] << 0x18 ^ (uint)param_2[9] << 0x10 ^
           (uint)param_2[10] << 8;
  uVar10 = (uint)param_2[0xf] ^ param_1[3] ^ (uint)param_2[0xc] << 0x18 ^ (uint)param_2[0xd] << 0x10
           ^ (uint)param_2[0xe] << 8;
  puVar12 = param_1;
  while( true ) {
    uVar14 = *(uint *)(DAT_000180a4 + (uVar10 & 0xff) * 4);
    uVar5 = *(uint *)(DAT_000180a4 + (uVar13 & 0xff) * 4);
    uVar6 = *(uint *)(DAT_000180a4 + ((uVar10 & 0xffffff) >> 0x10) * 4);
    uVar7 = *(uint *)(DAT_000180a4 + ((uVar15 & 0xffff) >> 8) * 4);
    uVar5 = *(uint *)(DAT_000180a4 + (uVar17 >> 0x18) * 4) ^ puVar12[4] ^
            (uVar5 >> 0x18 | uVar5 << 8) ^ (uVar6 >> 8 | uVar6 << 0x18) ^
            (uVar7 >> 0x10 | uVar7 << 0x10);
    uVar6 = *(uint *)(DAT_000180a4 + (uVar15 & 0xff) * 4);
    uVar7 = *(uint *)(DAT_000180a4 + ((uVar17 & 0xffffff) >> 0x10) * 4);
    uVar9 = *(uint *)(DAT_000180a4 + ((uVar10 & 0xffff) >> 8) * 4);
    uVar8 = puVar12[5] ^ *(uint *)(DAT_000180a4 + (uVar13 >> 0x18) * 4) ^
            (uVar6 >> 0x18 | uVar6 << 8) ^ (uVar7 >> 8 | uVar7 << 0x18) ^
            (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar16 = *(uint *)(DAT_000180a4 + ((uVar15 & 0xffffff) >> 0x10) * 4);
    uVar7 = *(uint *)(DAT_000180a4 + ((uVar13 & 0xffffff) >> 0x10) * 4);
    uVar9 = *(uint *)(DAT_000180a4 + ((uVar17 & 0xffff) >> 8) * 4);
    uVar6 = (uVar5 & 0xffffff) >> 0x10;
    uVar17 = *(uint *)(DAT_000180a4 + (uVar17 & 0xff) * 4);
    uVar14 = *(uint *)(DAT_000180a4 + (uVar15 >> 0x18) * 4) ^ puVar12[6] ^
             (uVar14 >> 0x18 | uVar14 << 8) ^ (uVar7 >> 8 | uVar7 << 0x18) ^
             (uVar9 >> 0x10 | uVar9 << 0x10);
    puVar1 = puVar12 + 8;
    uVar15 = *(uint *)(DAT_000180a4 + ((uVar13 & 0xffff) >> 8) * 4);
    uVar13 = (uVar14 & 0xffff) >> 8;
    uVar11 = *(uint *)(DAT_000180a4 + (uVar10 >> 0x18) * 4) ^ puVar12[7] ^
             (uVar17 >> 0x18 | uVar17 << 8) ^ (uVar16 >> 8 | uVar16 << 0x18) ^
             (uVar15 >> 0x10 | uVar15 << 0x10);
    uVar10 = (uVar11 & 0xffff) >> 8;
    uVar15 = (uVar8 & 0xffffff) >> 0x10;
    uVar17 = (uVar11 & 0xffffff) >> 0x10;
    uVar16 = (uVar14 & 0xffffff) >> 0x10;
    uVar7 = (uVar5 & 0xffff) >> 8;
    uVar9 = (uVar8 & 0xffff) >> 8;
    if (param_1 + 0x28 == puVar1) break;
    uVar4 = *(uint *)(DAT_000180a4 + (uVar8 & 0xff) * 4);
    uVar17 = *(uint *)(DAT_000180a4 + uVar17 * 4);
    uVar13 = *(uint *)(DAT_000180a4 + uVar13 * 4);
    uVar17 = *puVar1 ^ *(uint *)(DAT_000180a4 + (uVar5 >> 0x18) * 4) ^ (uVar4 >> 0x18 | uVar4 << 8)
             ^ (uVar17 >> 8 | uVar17 << 0x18) ^ (uVar13 >> 0x10 | uVar13 << 0x10);
    uVar13 = *(uint *)(DAT_000180a4 + (uVar14 & 0xff) * 4);
    uVar6 = *(uint *)(DAT_000180a4 + uVar6 * 4);
    uVar10 = *(uint *)(DAT_000180a4 + uVar10 * 4);
    uVar13 = puVar12[9] ^ *(uint *)(DAT_000180a4 + (uVar8 >> 0x18) * 4) ^
             (uVar13 >> 0x18 | uVar13 << 8) ^ (uVar6 >> 8 | uVar6 << 0x18) ^
             (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar6 = *(uint *)(DAT_000180a4 + (uVar11 & 0xff) * 4);
    uVar15 = *(uint *)(DAT_000180a4 + uVar15 * 4);
    uVar10 = *(uint *)(DAT_000180a4 + uVar7 * 4);
    uVar15 = puVar12[10] ^ *(uint *)(DAT_000180a4 + (uVar14 >> 0x18) * 4) ^
             (uVar6 >> 0x18 | uVar6 << 8) ^ (uVar15 >> 8 | uVar15 << 0x18) ^
             (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar10 = *(uint *)(DAT_000180a4 + (uVar5 & 0xff) * 4);
    uVar5 = *(uint *)(DAT_000180a4 + uVar16 * 4);
    uVar6 = *(uint *)(DAT_000180a4 + uVar9 * 4);
    uVar10 = *(uint *)(DAT_000180a4 + (uVar11 >> 0x18) * 4) ^ puVar12[0xb] ^
             (uVar10 >> 0x18 | uVar10 << 8) ^ (uVar5 >> 8 | uVar5 << 0x18) ^
             (uVar6 >> 0x10 | uVar6 << 0x10);
    puVar12 = puVar1;
  }
  uVar13 = (((uint)*(byte *)(DAT_000180a8 + uVar17) << 0x10 |
            (uint)*(byte *)(DAT_000180a8 + (uVar5 >> 0x18)) << 0x18) ^
            (uint)*(byte *)(DAT_000180a8 + (uVar8 & 0xff)) |
           (uint)*(byte *)(DAT_000180a8 + uVar13) << 8) ^ *puVar1;
  param_3[3] = (char)uVar13;
  bVar2 = *(byte *)(iVar3 + uVar6);
  *param_3 = (char)(uVar13 >> 0x18);
  param_3[1] = (char)(uVar13 >> 0x10);
  param_3[2] = (char)(uVar13 >> 8);
  uVar10 = param_1[0x29] ^
           (((uint)bVar2 << 0x10 | (uint)*(byte *)(iVar3 + (uVar8 >> 0x18)) << 0x18) ^
            (uint)*(byte *)(iVar3 + (uVar14 & 0xff)) | (uint)*(byte *)(iVar3 + uVar10) << 8);
  param_3[7] = (char)uVar10;
  param_3[4] = (char)(uVar10 >> 0x18);
  param_3[5] = (char)(uVar10 >> 0x10);
  param_3[6] = (char)(uVar10 >> 8);
  uVar10 = param_1[0x2a] ^
           (((uint)*(byte *)(iVar3 + uVar15) << 0x10 |
            (uint)*(byte *)(iVar3 + (uVar14 >> 0x18)) << 0x18) ^
            (uint)*(byte *)(iVar3 + (uVar11 & 0xff)) | (uint)*(byte *)(iVar3 + uVar7) << 8);
  param_3[8] = (char)(uVar10 >> 0x18);
  param_3[9] = (char)(uVar10 >> 0x10);
  param_3[10] = (char)(uVar10 >> 8);
  param_3[0xb] = (char)uVar10;
  uVar10 = (((uint)*(byte *)(iVar3 + uVar16) << 0x10 |
            (uint)*(byte *)(iVar3 + (uVar11 >> 0x18)) << 0x18) ^
            (uint)*(byte *)(iVar3 + (uVar5 & 0xff)) | (uint)*(byte *)(iVar3 + uVar9) << 8) ^
           param_1[0x2b];
  param_3[0xf] = (char)uVar10;
  param_3[0xc] = (char)(uVar10 >> 0x18);
  param_3[0xd] = (char)(uVar10 >> 0x10);
  param_3[0xe] = (char)(uVar10 >> 8);
  return;
}



/* ===== FUN_000180ac @ 000180ac size=4 ===== */

void FUN_000180ac(void)

{
  (*(code *)PTR_free_00037148)();
  return;
}



/* ===== FUN_000180b0 @ 000180b0 size=198 ===== */

undefined4 FUN_000180b0(undefined4 param_1,uint param_2,undefined4 *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = *param_3;
  uStack_3c = param_3[1];
  memcpy(param_4,param_3 + 2,param_2 * 8);
  iVar1 = FUN_00017d90(param_1,0x10);
  if (iVar1 == 0) {
LAB_00018170:
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)((int)param_4 + (param_2 * 8 - 8));
    uVar4 = param_2 & 0xff;
    iVar6 = 6;
    uVar7 = uVar4 * 5;
    do {
      puVar8 = puVar3;
      for (uVar9 = param_2; 0 < (int)uVar9; uVar9 = uVar9 - 1) {
        local_38 = local_40;
        uStack_34._3_1_ = (byte)((uint)uStack_3c >> 0x18);
        local_30 = *puVar8;
        uStack_2c = puVar8[1];
        uStack_34 = CONCAT13(uStack_34._3_1_ ^ (char)uVar7 + (char)uVar9,(int3)uStack_3c);
        FUN_00017db0(iVar1,&local_38,&local_38,uVar4,puVar3,uVar4);
        local_40 = local_38;
        uStack_3c = uStack_34;
        *puVar8 = local_30;
        puVar8[1] = uStack_2c;
        puVar8 = puVar8 + -2;
      }
      uVar7 = (uVar7 & 0xff) - uVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_000180ac(iVar1);
    iVar1 = 0;
    pcVar5 = (char *)&local_40;
    do {
      if (*pcVar5 != -0x5a) goto LAB_00018170;
      iVar1 = iVar1 + 1;
      pcVar5 = pcVar5 + 1;
    } while (iVar1 != 8);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000184b4 @ 000184b4 size=272 ===== */

undefined4
FUN_000184b4(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  size_t local_b8;
  undefined1 *local_b4;
  undefined1 auStack_b0 [16];
  byte *local_a0 [6];
  undefined4 local_88 [6];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_3 < 6) {
    local_b8 = param_2;
    local_b4 = param_1;
    if (0x40 < param_2) {
      local_b4 = param_1;
      iVar1 = FUN_00018da6(1,&local_b4,&local_b8,auStack_b0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      local_b8 = 0x10;
      local_b4 = auStack_b0;
    }
    uVar3 = 0;
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_70 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_6c = uVar8;
    uStack_68 = uVar9;
    uStack_64 = uVar10;
    uStack_5c = uVar8;
    uStack_54 = uVar8;
    uStack_4c = uVar8;
    uStack_44 = uVar8;
    uStack_3c = uVar8;
    uStack_34 = uVar8;
    memcpy(&local_70,local_b4,local_b8);
    iVar1 = 0x40;
    pbVar5 = (byte *)&local_70;
    do {
      iVar1 = iVar1 + -1;
      *pbVar5 = *pbVar5 ^ 0x36;
      pbVar5 = pbVar5 + 1;
    } while (iVar1 != 0);
    local_88[0] = 0x40;
    puVar4 = (undefined4 *)(param_5 + -4);
    puVar6 = (undefined4 *)(param_4 + -4);
    uVar2 = 0;
    local_a0[0] = (byte *)&local_70;
    while (bVar7 = uVar2 != param_3, uVar2 = uVar2 + 1, bVar7) {
      puVar6 = puVar6 + 1;
      local_a0[uVar2] = (byte *)*puVar6;
      puVar4 = puVar4 + 1;
      local_88[uVar2] = *puVar4;
    }
    iVar1 = FUN_00018da6(uVar2,local_a0,local_88,param_6);
    if (iVar1 == 0) {
      uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_70 = uVar3;
      uStack_6c = uVar8;
      uStack_68 = uVar9;
      uStack_64 = uVar10;
      uStack_54 = uStack_5c;
      uStack_4c = uStack_5c;
      uStack_44 = uStack_5c;
      uStack_3c = uStack_5c;
      uStack_34 = uStack_5c;
      memcpy(&local_70,local_b4,local_b8);
      iVar1 = 0x40;
      pbVar5 = (byte *)&local_70;
      do {
        iVar1 = iVar1 + -1;
        *pbVar5 = *pbVar5 ^ 0x5c;
        pbVar5 = pbVar5 + 1;
      } while (iVar1 != 0);
      local_88[0] = 0x40;
      local_88[1] = 0x10;
      local_a0[1] = (byte *)param_6;
      local_a0[0] = (byte *)&local_70;
      uVar3 = FUN_00018da6(2,local_a0,local_88,param_6);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000185c4 @ 000185c4 size=28 ===== */

void FUN_000185c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_4;
  uStack_c = param_3;
  FUN_000184b4(param_1,param_2,1,&uStack_c,&local_10,param_5);
  return;
}



/* ===== FUN_000185e0 @ 000185e0 size=1446 ===== */

void FUN_000185e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar19 = *param_2;
  uVar4 = ((param_1[2] ^ param_1[3]) & param_1[1] ^ param_1[3]) + DAT_0001893c + iVar19 + *param_1;
  uVar5 = param_1[1] + (uVar4 >> 0x19 | uVar4 * 0x80);
  iVar1 = param_2[1];
  uVar4 = ((param_1[2] ^ param_1[1]) & uVar5 ^ param_1[2]) + DAT_00018940 + iVar1 + param_1[3];
  iVar2 = param_2[2];
  uVar7 = uVar5 + (uVar4 >> 0x14 | uVar4 * 0x1000);
  uVar4 = ((param_1[1] ^ uVar5) & uVar7 ^ param_1[1]) + DAT_00018944 + iVar2 + param_1[2];
  iVar3 = param_2[3];
  uVar6 = uVar7 + (uVar4 >> 0xf | uVar4 * 0x20000);
  uVar4 = ((uVar5 ^ uVar7) & uVar6 ^ uVar5) + DAT_00018948 + iVar3 + param_1[1];
  iVar9 = param_2[4];
  uVar4 = uVar6 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar7 ^ uVar6) & uVar4 ^ uVar7) + DAT_0001894c + iVar9 + uVar5;
  iVar10 = param_2[5];
  uVar5 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00018950 + iVar10 + uVar7;
  iVar11 = param_2[6];
  uVar7 = uVar5 + (uVar7 >> 0x14 | uVar7 * 0x1000);
  iVar18 = param_2[7];
  iVar21 = param_2[0xc];
  iVar17 = param_2[0xe];
  uVar6 = ((uVar4 ^ uVar5) & uVar7 ^ uVar4) + DAT_00018954 + iVar11 + uVar6;
  uVar6 = uVar7 + (uVar6 >> 0xf | uVar6 * 0x20000);
  uVar4 = ((uVar5 ^ uVar7) & uVar6 ^ uVar5) + DAT_00018958 + iVar18 + uVar4;
  iVar12 = param_2[8];
  uVar4 = uVar6 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar7 ^ uVar6) & uVar4 ^ uVar7) + DAT_0001895c + iVar12 + uVar5;
  iVar13 = param_2[9];
  uVar5 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00018960 + iVar13 + uVar7;
  iVar14 = param_2[10];
  uVar8 = uVar5 + (uVar7 >> 0x14 | uVar7 * 0x1000);
  uVar6 = ((uVar4 ^ uVar5) & uVar8 ^ uVar4) + iVar14 + -0xa44f + uVar6;
  iVar15 = param_2[0xb];
  uVar7 = uVar8 + (uVar6 >> 0xf | uVar6 * 0x20000);
  uVar4 = ((uVar5 ^ uVar8) & uVar7 ^ uVar5) + DAT_00018964 + iVar15 + uVar4;
  uVar4 = uVar7 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar8 ^ uVar7) & uVar4 ^ uVar8) + DAT_00018968 + iVar21 + uVar5;
  iVar16 = param_2[0xd];
  uVar6 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar5 = uVar8 + DAT_000189b8 + iVar16 + ((uVar7 ^ uVar4) & uVar6 ^ uVar7);
  uVar8 = uVar6 + (uVar5 >> 0x14 | uVar5 * 0x1000);
  uVar5 = ((uVar4 ^ uVar6) & uVar8 ^ uVar4) + DAT_000189c0 + iVar17 + uVar7;
  iVar20 = param_2[0xf];
  uVar7 = uVar8 + (uVar5 >> 0xf | uVar5 * 0x20000);
  uVar4 = ((uVar6 ^ uVar8) & uVar7 ^ uVar6) + DAT_0001896c + iVar20 + uVar4;
  uVar5 = uVar7 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar4 = ((uVar7 ^ uVar5) & uVar8 ^ uVar7) + DAT_00018970 + iVar1 + uVar6;
  uVar6 = uVar5 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + uVar8 + DAT_00018974 + iVar11;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00018978 + iVar15 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_0001897c + iVar19 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = ((uVar7 ^ uVar5) & uVar4 ^ uVar7) + DAT_00018980 + iVar10 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + DAT_00018984 + iVar14 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00018988 + iVar20 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_0001898c + iVar9 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = ((uVar7 ^ uVar5) & uVar4 ^ uVar7) + DAT_00018990 + iVar13 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + DAT_00018994 + iVar17 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = uVar7 + DAT_00018998 + iVar3 + ((uVar6 ^ uVar4) & uVar5 ^ uVar6);
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = uVar5 + DAT_0001899c + iVar12 + ((uVar4 ^ uVar7) & uVar6 ^ uVar4);
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = uVar6 + DAT_000189a0 + iVar16 + ((uVar7 ^ uVar5) & uVar4 ^ uVar7);
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = uVar4 + DAT_000189a4 + iVar2 + ((uVar5 ^ uVar6) & uVar7 ^ uVar5);
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + uVar7 + DAT_000189a8 + iVar18;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_000189bc + iVar21 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = uVar6 + iVar10 + -0x5c6be + (uVar4 ^ uVar7 ^ uVar5);
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = (uVar7 ^ uVar5 ^ uVar6) + DAT_000189ac + iVar12 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = uVar7 + DAT_000189b0 + iVar15 + (uVar5 ^ uVar6 ^ uVar4);
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + DAT_000189b4 + iVar17 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar6 = (uVar4 ^ uVar7 ^ uVar5) + DAT_00018c10 + iVar1 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = (uVar7 ^ uVar5 ^ uVar6) + DAT_00018c14 + iVar9 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = (uVar5 ^ uVar6 ^ uVar4) + uVar7 + DAT_00018c18 + iVar18;
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + DAT_00018c1c + iVar14 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar6 = (uVar4 ^ uVar7 ^ uVar5) + DAT_00018c20 + iVar16 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = uVar4 + DAT_00018c24 + iVar19 + (uVar7 ^ uVar5 ^ uVar6);
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = (uVar5 ^ uVar6 ^ uVar4) + DAT_00018c28 + iVar3 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + uVar5 + DAT_00018c2c + iVar11;
  uVar8 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar5 = (uVar4 ^ uVar7 ^ uVar8) + uVar6 + DAT_00018c30 + iVar13;
  uVar5 = uVar8 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar4 = (uVar7 ^ uVar8 ^ uVar5) + DAT_00018c34 + iVar21 + uVar4;
  uVar4 = uVar5 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar6 = uVar7 + DAT_00018c38 + iVar20 + (uVar8 ^ uVar5 ^ uVar4);
  uVar7 = uVar4 + (uVar6 >> 0x10 | uVar6 * 0x10000);
  uVar6 = (uVar5 ^ uVar4 ^ uVar7) + uVar8 + DAT_00018c3c + iVar2;
  uVar6 = uVar7 + (uVar6 >> 9 | uVar6 * 0x800000);
  uVar5 = uVar5 + DAT_00018c40 + iVar19 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00018c44 + iVar18 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = uVar7 + DAT_00018c48 + iVar17 + ((uVar4 | ~uVar6) ^ uVar5);
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = uVar6 + DAT_00018c4c + iVar10 + ((uVar7 | ~uVar5) ^ uVar4);
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = uVar5 + DAT_00018c50 + iVar21 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00018c54 + iVar3 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = ((uVar4 | ~uVar6) ^ uVar5) + iVar14 + -0x100b83 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = uVar6 + DAT_00018c58 + iVar1 + ((uVar7 | ~uVar5) ^ uVar4);
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = uVar5 + DAT_00018c5c + iVar12 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00018c60 + iVar20 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = uVar7 + DAT_00018c64 + iVar11 + ((uVar4 | ~uVar6) ^ uVar5);
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = ((uVar7 | ~uVar5) ^ uVar4) + DAT_00018c68 + iVar16 + uVar6;
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = ((uVar6 | ~uVar4) ^ uVar7) + DAT_00018c6c + iVar9 + uVar5;
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = ((uVar5 | ~uVar7) ^ uVar6) + DAT_00018c70 + iVar15 + uVar4;
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = ((uVar4 | ~uVar6) ^ uVar5) + DAT_00018c74 + iVar2 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = ((uVar7 | ~uVar5) ^ uVar4) + DAT_00018c78 + iVar13 + uVar6;
  *param_1 = uVar5 + *param_1;
  param_1[1] = param_1[1] + uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  param_1[2] = uVar7 + param_1[2];
  param_1[3] = uVar4 + param_1[3];
  return;
}



/* ===== FUN_00018c7c @ 00018c7c size=38 ===== */

void FUN_00018c7c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00018ca4;
  *param_1 = DAT_00018ca4;
  param_1[1] = iVar1 + -0x77777778;
  param_1[2] = iVar1 + 0x3175b9fd;
  param_1[3] = iVar1 + -0x5712ce8b;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* ===== FUN_00018ca8 @ 00018ca8 size=146 ===== */

void FUN_00018ca8(int param_1,void *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar4;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = param_3 * 8 + uVar5;
  uVar6 = (uVar5 & 0x1ff) >> 3;
  puVar7 = (undefined4 *)(param_1 + 0x18);
  if (CARRY4(param_3 * 8,uVar5)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar5 = param_3;
  if (uVar6 != 0) {
    uVar5 = 0x40 - uVar6;
    puVar2 = (undefined4 *)((int)puVar7 + uVar6);
    if (param_3 < uVar5) goto LAB_00011110;
    memcpy((undefined4 *)((int)puVar7 + uVar6),param_2,uVar5);
    param_2 = (void *)((int)param_2 + uVar5);
    FUN_000185e0(param_1,puVar7);
    param_3 = (param_3 - 0x40) + uVar6;
    uVar5 = param_3;
  }
  for (; puVar2 = (undefined4 *)((int)param_2 + (uVar5 - param_3)), 0x3f < param_3;
      param_3 = param_3 - 0x40) {
    puVar1 = puVar7;
    puVar3 = puVar2;
    do {
      puVar4 = puVar3 + 1;
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
      puVar3 = puVar4;
    } while (puVar4 != puVar2 + 0x10);
    FUN_000185e0(param_1,puVar7);
  }
  param_3 = (uVar5 >> 6) * -0x40 + uVar5;
  param_2 = (void *)((int)param_2 + (uVar5 >> 6) * 0x40);
  puVar2 = puVar7;
LAB_00011110:
  (*(code *)PTR_memcpy_00037044)(puVar2,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018d3a @ 00018d3a size=108 ===== */

void FUN_00018d3a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  size_t __n;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = (param_2[4] & 0x1ff) >> 3;
  puVar3 = param_2 + 6;
  *(undefined1 *)((int)puVar3 + uVar2) = 0x80;
  puVar1 = (undefined4 *)((int)puVar3 + uVar2 + 1);
  if (0x3f - uVar2 < 8) {
    memset(puVar1,0,0x3f - uVar2);
    FUN_000185e0(param_2,puVar3);
    __n = 0x38;
    puVar1 = puVar3;
  }
  else {
    __n = 0x37 - uVar2;
  }
  memset(puVar1,0,__n);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_000185e0(param_2,puVar3);
  puVar1 = param_2;
  do {
    puVar3 = puVar1 + 1;
    *param_1 = *puVar1;
    param_1 = param_1 + 1;
    puVar1 = puVar3;
  } while (puVar3 != param_2 + 4);
  *param_2 = 0;
  return;
}



/* ===== FUN_00018da6 @ 00018da6 size=60 ===== */

undefined4 FUN_00018da6(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_70 [88];
  
  FUN_00018c7c(auStack_70);
  for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
    FUN_00018ca8(auStack_70,*(undefined4 *)(param_2 + iVar1 * 4),
                 *(undefined4 *)(param_3 + iVar1 * 4));
  }
  FUN_00018d3a(param_4,auStack_70);
  return 0;
}



/* ===== FUN_00018de4 @ 00018de4 size=148 ===== */

undefined4 FUN_00018de4(int param_1,uint param_2,int param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte local_118 [256];
  
  iVar4 = 0;
  pbVar3 = local_118;
  do {
    *pbVar3 = (char)iVar4;
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 != 0x100);
  uVar5 = 0;
  uVar6 = 0;
  iVar4 = 0x100;
  pbVar3 = local_118;
  do {
    bVar2 = *pbVar3;
    pbVar1 = (byte *)(param_1 + uVar5);
    uVar5 = uVar5 + 1;
    if (param_2 <= uVar5) {
      uVar5 = 0;
    }
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 + (uint)*pbVar1 + (uint)bVar2 & 0xff;
    *pbVar3 = local_118[uVar6];
    local_118[uVar6] = bVar2;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 != 0);
  uVar5 = 0;
  uVar6 = 0;
  for (iVar4 = 0; iVar4 != param_3; iVar4 = iVar4 + 1) {
    uVar6 = uVar6 + 1 & 0xff;
    bVar2 = local_118[uVar6];
    uVar5 = uVar5 + bVar2 & 0xff;
    local_118[uVar6] = local_118[uVar5];
    local_118[uVar5] = bVar2;
  }
  pbVar3 = param_4 + param_5;
  for (; param_4 != pbVar3; param_4 = param_4 + 1) {
    uVar6 = uVar6 + 1 & 0xff;
    bVar2 = local_118[uVar6];
    uVar5 = uVar5 + bVar2 & 0xff;
    local_118[uVar6] = local_118[uVar5];
    local_118[uVar5] = bVar2;
    *param_4 = local_118[(uint)bVar2 + (uint)local_118[uVar6] & 0xff] ^ *param_4;
  }
  return 0;
}



/* ===== FUN_00018e78 @ 00018e78 size=188 ===== */

void FUN_00018e78(byte *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = DAT_00018f38;
  puVar1 = DAT_00018f34;
  bVar8 = false;
  uVar6 = *DAT_00018f34;
  uVar5 = DAT_00018f34[1];
  pbVar3 = param_1;
  while (pbVar3 != param_1 + param_2) {
    bVar8 = uVar5 == 0;
    uVar5 = uVar5 - 1 & 0x1f;
    uVar4 = 0x20 - (uVar6 & 0x1f) & 0x1f;
    if (bVar8) {
      iVar7 = 0xe;
    }
    else {
      iVar7 = 7;
    }
    uVar6 = uVar6 + iVar7;
    uVar4 = ((uint)(*pbVar3 >> uVar4) | (uint)*pbVar3 << 0x20 - uVar4) ^ puVar1[uVar5 + 2] ^
            puVar1[(uVar5 + 0x1a & 0x1f) + 2] ^ puVar1[(uVar5 + 0x14 & 0x1f) + 2] ^
            puVar1[(uVar5 + 0xe & 0x1f) + 2] ^ puVar1[(uVar5 + 7 & 0x1f) + 2] ^
            puVar1[(uVar5 + 1 & 0x1f) + 2];
    puVar1[uVar5 + 2] = *(uint *)(iVar2 + (uVar4 & 7) * 4) ^ uVar4 >> 3;
    bVar8 = true;
    pbVar3 = pbVar3 + 1;
  }
  if (bVar8) {
    *puVar1 = uVar6;
    puVar1[1] = uVar5;
  }
  return;
}



/* ===== FUN_00018f3c @ 00018f3c size=28 ===== */

void FUN_00018f3c(void)

{
  int *piVar1;
  
  piVar1 = DAT_00018f58;
  if (-1 < *DAT_00018f58) {
    FUN_00013bb8();
    close(*piVar1);
    *piVar1 = -1;
  }
  return;
}



/* ===== FUN_00018f5c @ 00018f5c size=52 ===== */

void FUN_00018f5c(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  
  iVar1 = DAT_00018f90;
  iVar3 = *(int *)(DAT_00018f90 + 0x88);
  if (iVar3 == 0x14) {
LAB_00018f68:
    FUN_00018f3c();
    return;
  }
  sVar2 = read(param_1,(void *)(DAT_00018f90 + 0x8c + iVar3),0x14 - iVar3);
  if (-1 < sVar2) {
    iVar3 = sVar2 + *(int *)(iVar1 + 0x88);
    *(int *)(iVar1 + 0x88) = iVar3;
    if (iVar3 == 0x14) goto LAB_00018f68;
  }
  return;
}



/* ===== FUN_00018f94 @ 00018f94 size=82 ===== */

void FUN_00018f94(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_00018fe8;
  puVar1 = (uint *)(DAT_00018fe8 + 0xa4);
  uVar3 = *(int *)(DAT_00018fe8 + 0xa0) + 1;
  *(uint *)(DAT_00018fe8 + 0xa0) = uVar3;
  if ((*puVar1 < 0x3e9) || ((uVar3 & 0x3ff) == 0)) {
    uStack_18 = param_1;
    uStack_14 = param_2;
    FUN_00013744(&uStack_18);
    FUN_00018e78(&uStack_18,8);
    FUN_00018e78(param_1,param_2);
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 1;
  }
  return;
}



/* ===== FUN_00018fec @ 00018fec size=180 ===== */

undefined4 FUN_00018fec(byte *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 auStack_68 [17];
  
  uVar2 = FUN_0001383c();
  iVar1 = DAT_000190a0;
  iVar9 = DAT_000190a0 + 8;
  iVar10 = DAT_000190a0 + 0x8c;
  for (uVar7 = param_2; uVar7 != 0; uVar7 = uVar7 - uVar6) {
    FUN_0001b7e8(DAT_000190a4,0x14,iVar9,0x80,&local_7c);
    FUN_00018e78(&local_7c,0x14);
    iVar11 = *(int *)(iVar1 + 4);
    iVar4 = 0;
    puVar3 = auStack_68;
    do {
      uVar6 = iVar11 - iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *(undefined4 *)(iVar1 + (uVar6 & 0x1f) * 4 + 8);
      puVar3 = puVar3 + 1;
    } while (iVar4 != 0x10);
    FUN_0001b7e8(iVar10,0x14,auStack_68,0x40,&local_7c);
    local_7c = local_7c ^ local_6c;
    local_8c = local_7c;
    uStack_88 = uStack_78;
    uStack_84 = uStack_74;
    uStack_80 = uStack_70;
    uVar6 = uVar7;
    if (0xf < uVar7) {
      uVar6 = 0x10;
    }
    pbVar5 = param_1 + uVar6;
    pbVar8 = param_1;
    puVar12 = &local_8c;
    do {
      param_1 = pbVar8 + 1;
      *pbVar8 = (byte)*puVar12 ^ *pbVar8;
      pbVar8 = param_1;
      puVar12 = (uint *)((int)puVar12 + 1);
    } while (param_1 != pbVar5);
  }
  iVar9 = 0;
  if (param_2 <= *(uint *)(iVar1 + 0xa4)) {
    iVar9 = *(uint *)(iVar1 + 0xa4) - param_2;
  }
  *(int *)(iVar1 + 0xa4) = iVar9;
  return uVar2;
}



/* ===== FUN_00019134 @ 00019134 size=42 ===== */

void FUN_00019134(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00019160;
  if (*DAT_00019160 < 0) {
    iVar2 = open64(DAT_00019164,0x800);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_00013b4c(iVar2,DAT_00019168,0);
      return;
    }
  }
  return;
}



/* ===== thunk_FUN_00018f3c @ 0001916c size=2 ===== */

void thunk_FUN_00018f3c(void)

{
  int *piVar1;
  
  piVar1 = DAT_00018f58;
  if (-1 < *DAT_00018f58) {
    FUN_00013bb8();
    close(*piVar1);
    *piVar1 = -1;
  }
  return;
}



/* ===== FUN_00019170 @ 00019170 size=418 ===== */

char * FUN_00019170(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __maxlen;
  char *__s;
  undefined1 auStack_38 [4];
  int local_34;
  int local_2c;
  int local_28;
  
  iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_00019314,param_3);
  if (iVar2 < 0) {
    return param_1;
  }
  if (param_2 - (int)param_1 <= iVar2) {
    return param_1;
  }
  param_1 = param_1 + iVar2;
  iVar2 = FUN_00016f78(param_4,param_5,auStack_38);
  __maxlen = param_2 - (int)param_1;
  if (iVar2 < 0) {
    snprintf(param_1,__maxlen,DAT_00019318);
    if ((int)__maxlen < 3) {
      return param_1;
    }
    return param_1 + 2;
  }
  if (local_2c << 0x1f < 0) {
    snprintf(param_1,__maxlen,DAT_00019320,DAT_0001931c);
    if ((int)__maxlen < 4) {
      return param_1;
    }
    param_1 = param_1 + 3;
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (local_2c << 0x1e < 0) {
    uVar3 = DAT_00019324;
    if (bVar1) {
      uVar3 = DAT_0001931c;
    }
    iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_00019328,uVar3);
    if (param_2 - (int)param_1 <= iVar2) {
      return param_1;
    }
    param_1 = param_1 + iVar2;
    bVar1 = false;
  }
  if (local_2c << 0x1b < 0) {
    uVar3 = DAT_00019324;
    if (bVar1) {
      uVar3 = DAT_0001931c;
    }
    iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_0001932c,uVar3);
    if (param_2 - (int)param_1 <= iVar2) {
      return param_1;
    }
    param_1 = param_1 + iVar2;
  }
  snprintf(param_1,param_2 - (int)param_1,DAT_00019330);
  __s = param_1;
  if (1 < param_2 - (int)param_1) {
    __s = param_1 + 1;
    if (local_34 << 0x1f < 0) {
      snprintf(__s,param_2 - (int)__s,DAT_00019334,DAT_0001931c);
      if (param_2 - (int)__s < 5) goto LAB_000192d6;
      __s = param_1 + 5;
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (local_34 << 0x1e < 0) {
      uVar3 = DAT_00019324;
      if (bVar1) {
        uVar3 = DAT_0001931c;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019338,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_000192d6;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1d < 0) {
      uVar3 = DAT_00019324;
      if (bVar1) {
        uVar3 = DAT_0001931c;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_0001933c,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_000192d6;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1c < 0) {
      uVar3 = DAT_00019324;
      if (bVar1) {
        uVar3 = DAT_0001931c;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019340,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_000192d6;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1b < 0) {
      uVar3 = DAT_00019324;
      if (bVar1) {
        uVar3 = DAT_0001931c;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019344,uVar3);
      if (iVar2 < param_2 - (int)__s) {
        __s = __s + iVar2;
      }
    }
  }
LAB_000192d6:
  if (local_28 << 0x1f < 0) {
    snprintf(__s,param_2 - (int)__s,DAT_00019348);
    if (param_2 - (int)__s < 9) {
      return __s;
    }
    __s = __s + 8;
  }
  snprintf(__s,param_2 - (int)__s,DAT_0001934c);
  if (1 < param_2 - (int)__s) {
    __s = __s + 1;
  }
  return __s;
}



/* ===== FUN_00019350 @ 00019350 size=58 ===== */

int FUN_00019350(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *__format;
  int iVar1;
  char *__s;
  
  __format = DAT_0001938c;
  __s = param_2;
  do {
    if (param_1 == 0) {
LAB_0001937e:
      return (int)__s - (int)param_2;
    }
    iVar1 = snprintf(__s,(size_t)(param_2 + (param_3 - (int)__s)),__format,param_1 + 0x1a,param_4);
    if ((int)(param_2 + (param_3 - (int)__s)) <= iVar1) {
      *__s = '\0';
      goto LAB_0001937e;
    }
    __s = __s + iVar1;
    param_1 = *(int *)(param_1 + 8);
  } while( true );
}



/* ===== FUN_00019390 @ 00019390 size=164 ===== */

int FUN_00019390(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *__format;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int *__ptr;
  int *piVar6;
  char *__s;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = DAT_00019434;
  piVar6 = (int *)0x0;
  __ptr = (int *)0x0;
  iVar9 = param_3;
  for (piVar7 = DAT_00019434; __format = DAT_0001943c, iVar1 = DAT_00019438, __s = param_2,
      piVar4 = __ptr, *piVar7 != 0; piVar7 = piVar7 + 1) {
    pcVar5 = *(code **)(*piVar7 + 0x90);
    if ((pcVar5 != (code *)0x0) &&
       (piVar4 = (int *)(*pcVar5)(*(undefined4 *)((int)piVar7 + (*param_1 - (int)piVar8))),
       piVar4 != (int *)0x0)) {
      piVar2 = piVar4;
      if (piVar6 != (int *)0x0) {
        *piVar6 = (int)piVar4;
        piVar4 = piVar6;
        piVar2 = __ptr;
      }
      do {
        __ptr = piVar2;
        piVar6 = piVar4;
        piVar4 = (int *)*piVar6;
        piVar2 = __ptr;
      } while ((int *)*piVar6 != (int *)0x0);
    }
  }
  do {
    if (piVar4 == (int *)0x0) {
LAB_000193dc:
      while (__ptr != (int *)0x0) {
        piVar8 = (int *)*__ptr;
        free((void *)__ptr[1]);
        free((void *)__ptr[2]);
        free(__ptr);
        __ptr = piVar8;
      }
      return (int)__s - (int)param_2;
    }
    iVar3 = piVar4[2];
    if (piVar4[2] == 0) {
      iVar3 = iVar1;
    }
    iVar3 = snprintf(__s,(size_t)(param_2 + (param_3 - (int)__s)),__format,piVar4[3],piVar4[1],iVar3
                     ,iVar9);
    if ((iVar3 < 0) || ((int)(param_2 + (param_3 - (int)__s)) <= iVar3)) {
      *__s = '\0';
      goto LAB_000193dc;
    }
    __s = __s + iVar3;
    piVar4 = (int *)*piVar4;
  } while( true );
}



/* ===== FUN_00019440 @ 00019440 size=52 ===== */

undefined4 FUN_00019440(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x100) + 0x10);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = 0;
    uVar1 = (*pcVar2)(param_1 + 0x1a,*(undefined4 *)(param_1 + 0xd4),0,param_2,param_3,0,0,0,0,0);
  }
  return uVar1;
}



/* ===== FUN_00019474 @ 00019474 size=5096 ===== */

char * FUN_00019474(int *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char *__s;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  void *__ptr;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined4 *puVar25;
  int iVar26;
  int *piVar27;
  int *piVar28;
  int iVar29;
  byte *pbVar30;
  byte *pbVar31;
  char *pcVar32;
  bool bVar33;
  uint *local_7c;
  byte *local_74;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  short sStack_36;
  undefined2 uStack_34;
  undefined4 uStack_32;
  undefined4 uStack_2e;
  
  __s = malloc(0x1000);
  pcVar23 = DAT_000196e4;
  if (__s == (char *)0x0) {
    *param_3 = 1;
    return (char *)0x0;
  }
  cVar1 = *(char *)(DAT_000196e0 + 1);
  *(undefined2 *)__s = *DAT_000196e0;
  __s[2] = cVar1;
  iVar2 = strcmp(param_2,pcVar23);
  puVar3 = DAT_000196e8;
  if (iVar2 == 0) goto LAB_000194b0;
  iVar2 = strncmp(param_2,DAT_000196ec,5);
  if ((iVar2 == 0) || (iVar2 = strncmp(param_2,DAT_000196f0,5), iVar2 == 0)) goto LAB_000194c8;
  iVar2 = strcmp(param_2,DAT_000196f4);
  if (iVar2 == 0) {
    pcVar22 = (char *)FUN_00014da6(param_1[0x42],__s,0x1000);
LAB_00019810:
    puVar3 = DAT_00019a68;
    if (-1 < (int)pcVar22) goto LAB_00019858;
  }
  else {
    iVar2 = strncmp(param_2,DAT_000196f8,6);
    pcVar23 = __s;
    if (iVar2 == 0) {
      if ((uint)param_1[0x45] < 6) {
LAB_00019752:
        uVar4 = FUN_0001cd78(param_1[0x45]);
        iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019a1c,uVar4);
        if ((-1 < iVar2) && (iVar2 < (int)(__s + (0x1000 - (int)pcVar23)))) {
          pcVar23 = pcVar23 + iVar2;
          if ((param_1[3] != 0) && (iVar2 = FUN_00021efa(param_1[3],&local_48,0x1e), -1 < iVar2)) {
            iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019a20,&local_48)
            ;
            if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2) goto LAB_000195aa;
            pcVar23 = pcVar23 + iVar2;
          }
          uVar10 = (uint)*(byte *)((int)param_1 + 0x19);
          uVar11 = (uint)*(byte *)(param_1 + 6);
          uVar12 = (uint)*(byte *)((int)param_1 + 0x17);
          uVar13 = (uint)*(byte *)((int)param_1 + 0x16);
          uVar5 = (uint)*(byte *)((int)param_1 + 0x15);
          snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019a24,
                   (uint)*(byte *)(param_1 + 5),uVar5,uVar13,uVar12,uVar11,uVar10);
          if (0x1a < (int)(__s + (0x1000 - (int)pcVar23))) {
            uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            local_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2e = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_48 = 0;
            local_3c = (undefined2)uStack_2e;
            uStack_3a = 0;
            uStack_38 = 0;
            sStack_36 = (short)uStack_44;
            uStack_34 = (undefined2)((uint)uStack_44 >> 0x10);
            uStack_32 = local_40;
            if ((*(code **)(param_1[0x40] + 0x1c4) != (code *)0x0) &&
               (iVar2 = (**(code **)(param_1[0x40] + 0x1c4))(param_1[0x35],&local_64), iVar2 == 0))
            {
              snprintf((char *)&local_48,0x12,DAT_00019a28,local_5c,uVar5,uVar13,uVar12,uVar11,
                       uVar10);
              strcat(__s,(char *)&local_48);
            }
            sVar7 = strlen((char *)&local_48);
            pcVar22 = pcVar23 + sVar7 + (0x1a - (int)__s);
            goto LAB_00019810;
          }
        }
      }
      else {
        iVar2 = strcmp(param_2 + 6,DAT_000196fc);
        uVar10 = (uint)*(byte *)((int)param_1 + 0xa5);
        iVar26 = param_1[0x2d];
        pcVar23 = __s + 0x18;
        uVar11 = (uint)*(byte *)(param_1 + 0x29);
        uVar12 = (uint)*(byte *)((int)param_1 + 0xa3);
        uVar13 = (uint)*(byte *)((int)param_1 + 0xa2);
        snprintf(__s,0x1000,DAT_00019700,(uint)*(byte *)(param_1 + 0x28),
                 (uint)*(byte *)((int)param_1 + 0xa1),uVar13,uVar12,uVar11,uVar10);
        if (iVar26 == 0) {
LAB_0001973a:
          iVar2 = FUN_00015eca(param_1[0x42],pcVar23,__s + (0x1000 - (int)pcVar23),iVar2 == 0);
          pcVar23 = pcVar23 + iVar2;
          goto LAB_00019752;
        }
        iVar29 = *(int *)(iVar26 + 0x14);
        if (iVar29 == 0) {
          if ((*(code **)(param_1[0x40] + 0xc) != (code *)0x0) &&
             (iVar6 = (**(code **)(param_1[0x40] + 0xc))(param_1[0x35],&local_48), -1 < iVar6)) {
            iVar29 = iVar6;
          }
          puVar3 = &local_48;
        }
        else {
          puVar3 = *(undefined4 **)(iVar26 + 0x10);
        }
        uVar4 = FUN_000133c8(puVar3,iVar29);
        uVar14 = *(undefined4 *)(iVar26 + 8);
        uVar5 = snprintf(pcVar23,0xfe8,DAT_00019704,uVar4,uVar14,uVar13,uVar12,uVar11,uVar10);
        if (0xfe7 < uVar5) {
          pcVar22 = (char *)0x18;
          goto LAB_00019858;
        }
        pcVar23 = pcVar23 + uVar5;
        if (*(int *)(iVar26 + 0xcc) != 0) {
          iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019708,
                            *(int *)(iVar26 + 0xcc),uVar14,uVar13,uVar12,uVar11,uVar10);
          if ((iVar29 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29)) goto LAB_000195aa;
          pcVar23 = pcVar23 + iVar29;
        }
        if (*(int *)(iVar26 + 0x48) != 0) {
          iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001970c,
                            *(int *)(iVar26 + 0x48),uVar14);
          if ((iVar29 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29)) goto LAB_000195aa;
          pcVar23 = pcVar23 + iVar29;
        }
        if (*(int *)(iVar26 + 0x44) == 0) {
LAB_00019640:
          iVar29 = 0;
          local_7c = (uint *)(iVar26 + 0xa4);
          do {
            if (*local_7c != 0) {
              snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001971c,iVar29);
              if ((int)(__s + (0x1000 - (int)pcVar23)) < 10) goto LAB_000195aa;
              pcVar23 = pcVar23 + 9;
              local_74 = (byte *)(iVar26 + 100 + iVar29 * 0x10);
              for (uVar10 = 0; pcVar22 = __s + (0x1000 - (int)pcVar23), uVar10 < *local_7c;
                  uVar10 = uVar10 + 1) {
                snprintf(pcVar23,(size_t)pcVar22,DAT_00019720,(uint)*local_74);
                if ((int)pcVar22 < 3) goto LAB_000195aa;
                pcVar23 = pcVar23 + 2;
                local_74 = local_74 + 1;
              }
              snprintf(pcVar23,(size_t)pcVar22,DAT_00019718);
              if ((int)pcVar22 < 2) goto LAB_000195aa;
              pcVar23 = pcVar23 + 1;
            }
            iVar29 = iVar29 + 1;
            local_7c = local_7c + 1;
          } while (iVar29 != 4);
          pcVar22 = __s + (0x1000 - (int)pcVar23);
          iVar29 = 0;
          switch(*(undefined4 *)(iVar26 + 0xc0)) {
          case 0:
            iVar29 = 0xd;
            snprintf(pcVar23,(size_t)pcVar22,DAT_00019a18);
            break;
          case 1:
            iVar29 = 10;
            snprintf(pcVar23,(size_t)pcVar22,DAT_00019a2c);
            break;
          case 2:
            iVar29 = 8;
            snprintf(pcVar23,(size_t)pcVar22,DAT_00019a30);
            break;
          case 3:
            iVar29 = 0xc;
            snprintf(pcVar23,(size_t)pcVar22,DAT_00019a34);
            break;
          case 4:
            iVar29 = 0x1e;
            snprintf(pcVar23,(size_t)pcVar22,DAT_00019a38);
          }
          if (iVar29 < (int)pcVar22) {
            pcVar23 = pcVar23 + iVar29;
            goto LAB_0001973a;
          }
        }
        else {
          snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019710,
                   *(int *)(iVar26 + 0x44),uVar14);
          if (4 < (int)(__s + (0x1000 - (int)pcVar23))) {
            pcVar23 = pcVar23 + 4;
            pbVar31 = (byte *)(iVar26 + 0x24);
            do {
              pbVar30 = pbVar31 + 1;
              iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019714,
                                (uint)*pbVar31);
              if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29) goto LAB_000195aa;
              pcVar23 = pcVar23 + iVar29;
              pbVar31 = pbVar30;
            } while (pbVar30 != (byte *)(iVar26 + 0x44));
            snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019718);
            if (1 < (int)(__s + (0x1000 - (int)pcVar23))) {
              pcVar23 = pcVar23 + 1;
              goto LAB_00019640;
            }
          }
        }
      }
LAB_000195aa:
      pcVar22 = pcVar23 + -(int)__s;
      goto LAB_00019810;
    }
    iVar2 = strcmp(param_2,DAT_00019a3c);
    if (iVar2 == 0) {
      pcVar22 = (char *)FUN_0001604e(param_1[0x42],__s,0x1000);
      goto LAB_00019810;
    }
    iVar2 = strncmp(param_2,DAT_00019a40,4);
    if (iVar2 == 0) {
      param_2 = param_2 + 4;
      pcVar23 = strchr(param_2,0x20);
      puVar3 = DAT_00019a68;
      if (pcVar23 != (char *)0x0) {
        *pcVar23 = '\0';
        iVar2 = strcasecmp(param_2,DAT_00019a44);
        if ((((iVar2 == 0) || (iVar2 = strcasecmp(param_2,DAT_00019a48), iVar2 == 0)) ||
            (iVar2 = strcasecmp(param_2,DAT_00019a4c), iVar2 == 0)) ||
           (iVar2 = strcasecmp(param_2,DAT_00019a50), iVar2 == 0)) goto LAB_000194c8;
        iVar2 = strcasecmp(param_2,DAT_00019a54);
        pcVar22 = pcVar23 + 1;
        if (iVar2 == 0) {
          iVar2 = atoi(pcVar22);
          uVar4 = 0;
        }
        else {
          iVar2 = strcasecmp(param_2,DAT_00019a58);
          if (iVar2 == 0) {
            iVar2 = atoi(pcVar22);
            uVar4 = 1;
          }
          else {
            iVar2 = strcasecmp(param_2,DAT_00019a5c);
            if (iVar2 != 0) {
              iVar2 = strcasecmp(param_2,DAT_00019a60);
              if (iVar2 == 0) {
                iVar2 = atoi(pcVar22);
                param_1[0x6f] = iVar2;
                goto LAB_000194c8;
              }
              iVar2 = strcasecmp(param_2,DAT_00019a64);
              if (iVar2 == 0) {
                iVar2 = atoi(pcVar22);
                puVar3 = DAT_00019a68;
                if ((*(code **)(param_1[0x40] + 0x178) != (code *)0x0) &&
                   (iVar2 = (**(code **)(param_1[0x40] + 0x178))(param_1[0x35],iVar2),
                   puVar3 = DAT_00019a68, -1 < iVar2)) goto LAB_000194c8;
              }
              else {
                *pcVar23 = '=';
                iVar2 = FUN_000127a8(param_1[0x25],param_2,0xffffffff);
                puVar3 = DAT_00019a68;
                if (iVar2 == 0) {
                  FUN_0001dda8(param_1);
                  goto LAB_000194c8;
                }
              }
              goto LAB_000194b0;
            }
            iVar2 = atoi(pcVar22);
            uVar4 = 2;
          }
        }
        iVar2 = FUN_00015e26(param_1[0x42],uVar4,iVar2);
LAB_000198fc:
        puVar3 = DAT_00019a68;
        if (iVar2 == 0) goto LAB_000194c8;
      }
    }
    else {
      iVar2 = strncmp(param_2,DAT_00019a6c,4);
      if (iVar2 == 0) {
        iVar2 = strcmp(param_2 + 4,DAT_00019a70);
        puVar3 = DAT_00019a68;
        if (iVar2 == 0) {
          strcpy(__s,DAT_00019a74);
          pcVar22 = (char *)0x1f;
          goto LAB_00019858;
        }
      }
      else {
        iVar2 = strcmp(param_2,DAT_00019a78);
        if ((iVar2 == 0) || (iVar2 = strcmp(param_2,DAT_00019a7c), iVar2 == 0)) {
LAB_000194c8:
          pcVar22 = (char *)0x3;
          goto LAB_00019858;
        }
        iVar2 = strcmp(param_2,DAT_00019a80);
        if (iVar2 == 0) {
          puVar3 = DAT_00019a68;
          if (param_1[0x45] != 1) {
LAB_000199e6:
            param_1[0x2b] = 1;
            param_1[0x2c] = 0;
LAB_000199ee:
            FUN_0001f630(param_1,0);
            goto LAB_000194c8;
          }
        }
        else {
          iVar2 = strcmp(param_2,DAT_00019a84);
          if (iVar2 == 0) {
            puVar3 = DAT_00019a68;
            if (param_1[0x45] != 1) {
              if (param_1[0x2c] != 0) goto LAB_000199e6;
              goto LAB_000194c8;
            }
          }
          else {
            iVar2 = strncmp(param_2,DAT_00019cb8,9);
            if (iVar2 == 0) {
              iVar2 = FUN_00013276(param_2 + 9,&local_48);
              puVar3 = DAT_00019a68;
              if (iVar2 == 0) {
                iVar2 = FUN_00016360(param_1[0x42],&local_48);
                goto LAB_000198fc;
              }
            }
            else {
              iVar2 = strncmp(param_2,DAT_00019cbc,9);
              puVar3 = DAT_00019a68;
              if (iVar2 != 0) {
                iVar2 = strcmp(param_2,DAT_00019cc0);
                if (iVar2 == 0) {
                  iVar2 = FUN_0001ddf2(param_1);
                  goto LAB_000198fc;
                }
                iVar2 = strcmp(param_2,DAT_00019cc4);
                if (iVar2 == 0) {
                  FUN_0001cec0(*param_1);
                  goto LAB_000194c8;
                }
                iVar2 = strncmp(param_2,DAT_00019cc8,6);
                if (iVar2 == 0) {
                  pcVar23 = strchr(param_2 + 6,0x20);
                  puVar3 = DAT_00019a68;
                  if (pcVar23 != (char *)0x0) {
                    *pcVar23 = '\0';
                    iVar2 = atoi(param_2 + 6);
                    iVar26 = FUN_00013276(pcVar23 + 1,&local_48);
                    puVar3 = DAT_00019a68;
                    if ((iVar26 == 0) &&
                       (iVar2 = FUN_0001241e(param_1[0x25],iVar2), puVar3 = DAT_00019a68, iVar2 != 0
                       )) {
                      *(undefined4 *)(iVar2 + 0x18) = local_48;
                      *(undefined2 *)(iVar2 + 0x1c) = (undefined2)uStack_44;
                      *(uint *)(iVar2 + 0x20) =
                           (uint)((((((char)local_48 != '\0' || local_48._1_1_ != '\0') ||
                                    local_48._2_1_ != '\0') || local_48._3_1_ != '\0') ||
                                  (char)uStack_44 != '\0') || uStack_44._1_1_ != '\0');
                      goto LAB_000194c8;
                    }
                  }
                  goto LAB_000194b0;
                }
                iVar2 = strcmp(param_2,DAT_00019ccc);
                if (iVar2 == 0) {
                  strcpy(__s,DAT_00019cd0);
                  uVar4 = DAT_00019d00;
                  pcVar22 = DAT_00019cfc;
                  pcVar23 = __s + 0x22;
                  for (piVar27 = *(int **)param_1[0x25]; piVar27 != (int *)0x0;
                      piVar27 = (int *)*piVar27) {
                    uVar15 = piVar27[2];
                    uVar14 = FUN_000133c8(piVar27[4],piVar27[5]);
                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),pcVar22,uVar15,
                                     uVar14);
                    if ((iVar2 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)) break;
                    pcVar23 = pcVar23 + iVar2;
                    pcVar32 = __s + (0x1000 - (int)pcVar23);
                    if (piVar27[8] == 0) {
                      snprintf(pcVar23,(size_t)pcVar32,DAT_00019cec,0,uVar14);
                      iVar2 = 4;
                    }
                    else {
                      snprintf(pcVar23,(size_t)pcVar32,DAT_00019cd4,(uint)*(byte *)(piVar27 + 6),
                               (uint)*(byte *)((int)piVar27 + 0x19),
                               (uint)*(byte *)((int)piVar27 + 0x1a),
                               (uint)*(byte *)((int)piVar27 + 0x1b),(uint)*(byte *)(piVar27 + 7),
                               (uint)*(byte *)((int)piVar27 + 0x1d));
                      iVar2 = 0x12;
                    }
                    if ((int)pcVar32 <= iVar2) break;
                    pcVar23 = pcVar23 + iVar2;
                    uVar14 = DAT_00019cd8;
                    if (piVar27 != (int *)param_1[0x2d]) {
                      uVar14 = uVar4;
                    }
                    uVar15 = uVar4;
                    uVar9 = uVar4;
                    if ((piVar27[0x31] != 0) &&
                       (uVar15 = DAT_00019ce0, uVar9 = DAT_00019cdc, piVar27[0x31] != 2)) {
                      uVar9 = uVar4;
                    }
                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019ce4,
                                     uVar14,uVar15,uVar9);
                    if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2) break;
                    pcVar23 = pcVar23 + iVar2;
                    snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_00019ce8);
                    if ((int)(__s + (0x1000 - (int)pcVar23)) < 2) break;
                    pcVar23 = pcVar23 + 1;
                  }
                  goto LAB_000195aa;
                }
                iVar2 = strcmp(param_2,DAT_00019cf0);
                if (iVar2 == 0) {
                  param_1[0x2b] = 0;
                  param_1[0x2c] = 1;
                  FUN_0001d280(param_1,3);
                  goto LAB_000194c8;
                }
                iVar2 = strcmp(param_2,DAT_00019cf4);
                if (iVar2 == 0) {
                  uVar10 = param_1[0x45];
                  puVar3 = DAT_00019a68;
                  if (uVar10 == 1) goto LAB_000194b0;
                  if ((param_1[0x46] != 0) || ((3 < uVar10 && (uVar10 != 9)))) {
                    strcpy(__s,DAT_00019cf8);
                    pcVar22 = (char *)0xa;
                    goto LAB_00019858;
                  }
                  param_1[0x4f] = 2;
                  goto LAB_000199ee;
                }
                iVar2 = strcmp(param_2,DAT_0001a02c);
                if (iVar2 == 0) {
                  strcpy(__s,DAT_0001a030);
                  pcVar22 = __s + 0x1000;
                  pcVar23 = __s + 0x30;
                  for (piVar27 = (int *)param_1[0x3b]; piVar28 = piVar27 + -2,
                      piVar27 != param_1 + 0x3b; piVar27 = (int *)*piVar27) {
                    iVar2 = FUN_00012c90(piVar28,DAT_0001a034);
                    sVar7 = (int)pcVar22 - (int)pcVar23;
                    if ((iVar2 == 0) || (piVar27[0x10] != 7)) {
LAB_00019d60:
                      iVar29 = piVar27[0x15];
                      iVar6 = piVar27[0x11];
                      uVar10 = (uint)*(byte *)((int)piVar27 + 0x1d);
                      uVar11 = (uint)*(byte *)(piVar27 + 7);
                      uVar12 = (uint)*(byte *)((int)piVar27 + 0x1b);
                      uVar13 = (uint)*(byte *)((int)piVar27 + 0x1a);
                      uVar5 = (uint)*(byte *)((int)piVar27 + 0x19);
                      iVar26 = snprintf(pcVar23,sVar7,DAT_0001a03c,(uint)*(byte *)(piVar27 + 6),
                                        uVar5,uVar13,uVar12,uVar11,uVar10,iVar6,iVar29);
                      if ((int)sVar7 <= iVar26) break;
                      pcVar32 = pcVar23 + iVar26;
                      iVar26 = FUN_00012c90(piVar28,DAT_0001a040);
                      if (iVar26 != 0) {
                        uVar5 = *(byte *)(iVar26 + 1) + 2;
                        pcVar32 = (char *)FUN_00019170(pcVar32,pcVar22,DAT_0001a044,iVar26,uVar5);
                      }
                      iVar8 = FUN_00012c66(piVar28,0x30);
                      if (iVar8 == 0) {
                        if ((iVar26 == 0) &&
                           (iVar26 = (uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1b, iVar26 < 0)) {
                          snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001aad4,iVar26,uVar5,
                                   uVar13,uVar12,uVar11,uVar10,iVar6,iVar29);
                          if ((int)pcVar22 - (int)pcVar32 < 6) break;
                          pcVar32 = pcVar32 + 5;
                        }
                      }
                      else {
                        pcVar32 = (char *)FUN_00019170(pcVar32,pcVar22,DAT_0001a048,iVar8,
                                                       *(byte *)(iVar8 + 1) + 2);
                      }
                      if ((int)((uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1e) < 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001a04c);
                        if ((int)pcVar22 - (int)pcVar32 < 7) break;
                        pcVar32 = pcVar32 + 6;
                      }
                      if ((int)((uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1f) < 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001a050);
                        if ((int)pcVar22 - (int)pcVar32 < 6) break;
                        pcVar32 = pcVar32 + 5;
                      }
                      if (iVar2 != 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001a054);
                        if ((int)pcVar22 - (int)pcVar32 < 6) break;
                        pcVar32 = pcVar32 + 5;
                      }
                      uVar4 = FUN_000133c8((int)piVar27 + 0x1e,piVar27[0x10]);
                      iVar2 = snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001a058,uVar4);
                      if ((iVar2 < 0) || ((int)pcVar22 - (int)pcVar32 <= iVar2)) break;
                      pcVar32 = pcVar32 + iVar2;
                      snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001a05c);
                      if (((int)pcVar22 - (int)pcVar32 < 2) ||
                         (pcVar32 = pcVar32 + (1 - (int)pcVar23), (int)pcVar32 < 0)) break;
                    }
                    else {
                      iVar26 = memcmp((void *)((int)piVar27 + 0x1e),DAT_0001a038,7);
                      pcVar32 = (char *)0x0;
                      if (iVar26 != 0) goto LAB_00019d60;
                    }
                    if ((int)sVar7 <= (int)pcVar32) break;
                    pcVar23 = pcVar23 + (int)pcVar32;
                  }
                  goto LAB_000195aa;
                }
                iVar2 = strncmp(param_2,DAT_0001a060,0xf);
                if (iVar2 == 0) {
                  iVar26 = strcmp(param_2 + 0xf,DAT_0001a064);
                  iVar2 = 0;
                  if (iVar26 != 0) {
                    iVar2 = atoi(param_2 + 0xf);
                    iVar2 = FUN_0001241e(param_1[0x25],iVar2);
                    puVar3 = DAT_00019a68;
                    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_000194b0;
                  }
                  FUN_0001d4a4(param_1,iVar2);
                }
                else {
                  iVar2 = strncmp(param_2,DAT_0001a068,0xf);
                  if (iVar2 == 0) {
                    iVar26 = strcmp(param_2 + 0xf,DAT_0001a06c);
                    iVar2 = 0;
                    if (iVar26 != 0) {
                      iVar2 = atoi(param_2 + 0xf);
                      iVar2 = FUN_0001241e(param_1[0x25],iVar2);
                      puVar3 = DAT_00019a68;
                      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_000194b0;
                    }
                    FUN_0001d3ae(param_1,iVar2);
                  }
                  else {
                    iVar2 = strncmp(param_2,DAT_0001a070,0x10);
                    if (iVar2 != 0) {
                      iVar2 = strcmp(param_2,DAT_0001a074);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0001242a(param_1[0x25]);
                        puVar3 = DAT_00019a68;
                        if (iVar2 != 0) {
                          FUN_00012850(param_1,iVar2);
                          *(undefined4 *)(iVar2 + 0xc4) = 1;
                          FUN_0001249a(iVar2);
                          pcVar22 = (char *)snprintf(__s,0x1000,DAT_0001a078,
                                                     *(undefined4 *)(iVar2 + 8));
                          goto LAB_00019858;
                        }
                      }
                      else {
                        iVar2 = strncmp(param_2,DAT_0001a07c,0xf);
                        if (iVar2 == 0) {
                          iVar2 = strcmp(param_2 + 0xf,DAT_0001a06c);
                          piVar27 = (int *)param_1[0x25];
                          if (iVar2 == 0) {
                            piVar27 = (int *)*piVar27;
                            while (piVar27 != (int *)0x0) {
                              uVar4 = piVar27[2];
                              piVar27 = (int *)*piVar27;
                              FUN_00012852(param_1);
                              FUN_00012466(param_1[0x25],uVar4);
                            }
                            if (param_1[0x2d] != 0) {
LAB_00019fd4:
                              FUN_0001d1d8(param_1,3);
                            }
                          }
                          else {
                            iVar2 = atoi(param_2 + 0xf);
                            iVar26 = FUN_0001241e(piVar27,iVar2);
                            puVar3 = DAT_00019a68;
                            if ((iVar26 == 0) ||
                               (iVar2 = FUN_00012466(param_1[0x25],iVar2), puVar3 = DAT_00019a68,
                               iVar2 < 0)) goto LAB_000194b0;
                            if (iVar26 == param_1[0x2d]) goto LAB_00019fd4;
                          }
                          goto LAB_000194c8;
                        }
                        iVar2 = strncmp(param_2,DAT_0001a378,0xc);
                        if (iVar2 == 0) {
                          pcVar23 = strchr(param_2 + 0xc,0x20);
                          puVar3 = DAT_00019a68;
                          if (pcVar23 != (char *)0x0) {
                            pcVar22 = pcVar23 + 1;
                            *pcVar23 = '\0';
                            pcVar23 = strchr(pcVar22,0x20);
                            puVar3 = DAT_00019a68;
                            if (pcVar23 != (char *)0x0) {
                              *pcVar23 = '\0';
                              iVar2 = atoi(param_2 + 0xc);
                              iVar2 = FUN_0001241e(param_1[0x25],iVar2);
                              puVar3 = DAT_00019a68;
                              if ((iVar2 != 0) &&
                                 (iVar26 = FUN_000124aa(iVar2,pcVar22,pcVar23 + 1,0),
                                 puVar3 = DAT_00019a68, -1 < iVar26)) {
                                iVar26 = strcmp(pcVar22,DAT_0001a37c);
                                if (((iVar26 == 0) &&
                                    ((pcVar23[1] == '\"' && (*(int *)(iVar2 + 0x14) != 0)))) ||
                                   ((iVar26 = strcmp(pcVar22,DAT_0001a380), iVar26 == 0 &&
                                    (*(int *)(iVar2 + 0x48) != 0)))) {
                                  FUN_00012624(iVar2);
                                }
                                else {
                                  iVar2 = strcmp(pcVar22,DAT_0001a384);
                                  if (iVar2 == 0) {
                                    FUN_0001239e(param_1[0x25]);
                                  }
                                }
                                goto LAB_000194c8;
                              }
                            }
                          }
                        }
                        else {
                          iVar2 = strncmp(param_2,DAT_0001a388,0xc);
                          if (iVar2 == 0) {
                            pcVar23 = strchr(param_2 + 0xc,0x20);
                            puVar3 = DAT_00019a68;
                            if (pcVar23 != (char *)0x0) {
                              *pcVar23 = '\0';
                              iVar2 = atoi(param_2 + 0xc);
                              iVar2 = FUN_0001241e(param_1[0x25],iVar2);
                              puVar3 = DAT_00019a68;
                              if ((iVar2 != 0) &&
                                 (__ptr = (void *)FUN_000125bc(iVar2,pcVar23 + 1),
                                 puVar3 = DAT_00019a68, __ptr != (void *)0x0)) {
                                pcVar22 = (char *)FUN_000139b0(__s,__ptr,0x1000);
                                if (pcVar22 < (char *)0x1000) {
                                  free(__ptr);
                                  goto LAB_00019858;
                                }
                                free(__ptr);
                                puVar3 = DAT_00019a68;
                              }
                            }
                          }
                          else {
                            iVar2 = strcmp(param_2,DAT_0001a38c);
                            if (iVar2 == 0) {
                              puVar3 = DAT_00019a68;
                              if (*(int *)(param_1[0x25] + 0x3c) != 0) {
                                iVar2 = FUN_000142d0(param_1[0x24]);
                                goto LAB_000198fc;
                              }
                            }
                            else {
                              iVar2 = strncmp(param_2,DAT_0001a390,0xf);
                              if (iVar2 != 0) {
                                iVar2 = strncmp(param_2,DAT_0001a6f0,8);
                                if (iVar2 == 0) {
                                  iVar2 = atoi(param_2 + 8);
                                  iVar2 = FUN_0001d510(param_1,iVar2);
                                  goto LAB_000198fc;
                                }
                                iVar2 = strncmp(param_2,DAT_0001a6f4,0xe);
                                if (iVar2 == 0) {
                                  iVar2 = atoi(param_2 + 0xe);
                                  puVar3 = DAT_00019a68;
                                  if (-1 < iVar2) {
                                    param_1[0x52] = iVar2;
                                    goto LAB_000194c8;
                                  }
                                  goto LAB_000194b0;
                                }
                                iVar2 = strcmp(param_2,DAT_0001a6f8);
                                if (iVar2 == 0) {
                                  pcVar22 = (char *)FUN_00019390(*param_1 + 0x3c,__s,0x1000);
                                }
                                else {
                                  iVar2 = strcmp(param_2,DAT_0001a6fc);
                                  if (iVar2 != 0) {
                                    iVar2 = strncmp(param_2,DAT_0001a700,4);
                                    if (iVar2 != 0) {
                                      iVar2 = strcmp(param_2,DAT_0001aa4c);
                                      if (iVar2 == 0) {
                                        FUN_000128d0(*param_1);
                                      }
                                      else {
                                        iVar2 = strcmp(param_2,DAT_0001aa50);
                                        if (iVar2 == 0) {
                                          FUN_000128f4(*param_1);
                                        }
                                        else {
                                          iVar2 = strcmp(param_2,DAT_0001aa54);
                                          if (iVar2 == 0) {
                                            FUN_00019440(param_1,0,0);
                                            FUN_00019440(param_1,0,1);
                                            FUN_00019440(param_1,0,2);
                                            FUN_00019440(param_1,0,3);
                                            FUN_00019440(param_1,param_1 + 0x28,0);
                                            if (*(code **)(param_1[0x40] + 0x54) != (code *)0x0) {
                                              (**(code **)(param_1[0x40] + 0x54))
                                                        (param_1[0x35],param_1 + 0x28,0,1);
                                            }
                                            FUN_00016054(param_1[0x42]);
                                          }
                                          else {
                                            iVar2 = strncmp(param_2,DAT_0001aa58,5);
                                            if (iVar2 == 0) {
                                              iVar26 = param_1[0x2d];
                                              iVar2 = FUN_00013276(param_2 + 5,&local_48);
                                              puVar3 = DAT_00019a68;
                                              if (((iVar2 != 0) ||
                                                  (iVar2 = FUN_00012c24(param_1,&local_48),
                                                  puVar3 = DAT_00019a68, iVar2 == 0)) ||
                                                 (iVar26 == 0)) goto LAB_000194b0;
                                              param_1[0x2b] = 1;
                                              FUN_0001e5ce(param_1,iVar2,iVar26);
                                            }
                                            else {
                                              iVar2 = strncmp(param_2,DAT_0001aa5c,0x10);
                                              if (iVar2 != 0) {
                                                iVar2 = strncmp(param_2,DAT_0001aa60,0xf);
                                                if (iVar2 == 0) {
                                                  iVar2 = atoi(param_2 + 0xf);
                                                  iVar2 = FUN_0001d530(param_1,iVar2);
                                                }
                                                else {
                                                  iVar2 = strncmp(param_2,DAT_0001aa64,0x11);
                                                  if (iVar2 != 0) {
                                                    iVar2 = strncmp(param_2,DAT_0001aa68,0xb);
                                                    if (iVar2 != 0) {
                                                      puVar25 = DAT_0001aa74 + 4;
                                                      puVar3 = DAT_0001aa74;
                                                      do {
                                                        puVar21 = puVar3 + 2;
                                                        uVar4 = puVar3[1];
                                                        *(undefined4 *)pcVar23 = *puVar3;
                                                        *(undefined4 *)(pcVar23 + 4) = uVar4;
                                                        pcVar23 = pcVar23 + 8;
                                                        puVar3 = puVar21;
                                                      } while (puVar21 != puVar25);
                                                      pcVar22 = (char *)0x10;
                                                      goto LAB_00019858;
                                                    }
                                                    puVar3 = DAT_00019a68;
                                                    if ((*(code **)(param_1[0x40] + 0x1c4) !=
                                                         (code *)0x0) &&
                                                       (iVar2 = (**(code **)(param_1[0x40] + 0x1c4))
                                                                          (param_1[0x35],&local_48),
                                                       puVar3 = DAT_00019a68, iVar2 == 0)) {
                                                      pcVar22 = (char *)snprintf(__s,0x1000,
                                                                                 DAT_0001aa70,
                                                                                 local_40,(int)((
                                                  longlong)CONCAT22(sStack_36,uStack_38) *
                                                  (longlong)DAT_0001aa6c >> 0x26) -
                                                  ((int)sStack_36 >> 0xf),
                                                  CONCAT22(uStack_3a,local_3c),local_48);
                                                  goto LAB_00019858;
                                                  }
                                                  goto LAB_000194b0;
                                                  }
                                                  iVar2 = atoi(param_2 + 0x11);
                                                  iVar2 = FUN_0001d568(param_1,iVar2);
                                                }
                                                goto LAB_000198fc;
                                              }
                                              iVar2 = atoi(param_2 + 0x10);
                                              param_1[0x70] = (uint)(iVar2 == 0);
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_000194c8;
                                    }
                                    pcVar23 = param_2 + 4;
                                    iVar2 = strcmp(pcVar23,DAT_0001a704);
                                    pcVar22 = (char *)0x0;
                                    if (iVar2 == 0) {
                                      piVar27 = (int *)param_1[0x39];
                                      if (piVar27 == param_1 + 0x39) goto LAB_00019858;
                                    }
                                    else {
                                      iVar2 = strncmp(pcVar23,DAT_0001aa28,3);
                                      if (iVar2 == 0) {
                                        iVar2 = atoi(param_2 + 7);
                                        piVar27 = (int *)FUN_00012c4e(param_1,iVar2);
                                      }
                                      else {
                                        iVar2 = strncmp(pcVar23,DAT_0001aa2c,5);
                                        if (iVar2 == 0) {
                                          iVar2 = atoi(param_2 + 9);
                                          iVar2 = FUN_00012c4e(param_1,iVar2);
                                          if ((iVar2 == 0) ||
                                             (*(int **)(iVar2 + 8) == param_1 + 0x3b))
                                          goto LAB_00019858;
                                          piVar27 = *(int **)(iVar2 + 8) + -2;
                                        }
                                        else {
                                          iVar2 = FUN_00013276(pcVar23,&local_48);
                                          if (iVar2 != 0) {
                                            iVar2 = atoi(pcVar23);
                                            for (piVar28 = (int *)param_1[0x3b];
                                                piVar27 = piVar28 + -2, piVar28 != param_1 + 0x3b;
                                                piVar28 = (int *)*piVar28) {
                                              if (iVar2 == 0) goto LAB_0001a5d4;
                                              iVar2 = iVar2 + -1;
                                            }
                                            goto LAB_00019858;
                                          }
                                          piVar27 = (int *)FUN_00012c24(param_1,&local_48);
                                        }
                                      }
                                    }
LAB_0001a5d4:
                                    pcVar32 = DAT_0001a71c;
                                    if (piVar27 == (int *)0x0) goto LAB_00019858;
                                    iVar26 = piVar27[0x18];
                                    iVar29 = piVar27[0x19];
                                    pcVar24 = __s + 0x1000;
                                    iVar6 = piVar27[0x17];
                                    iVar8 = piVar27[0x16];
                                    iVar16 = piVar27[0x15];
                                    uVar10 = (uint)*(ushort *)((int)piVar27 + 0x52);
                                    uVar11 = (uint)*(ushort *)(piVar27 + 0x14);
                                    iVar17 = piVar27[0x13];
                                    uVar12 = (uint)*(byte *)((int)piVar27 + 0x25);
                                    uVar13 = (uint)*(byte *)(piVar27 + 9);
                                    uVar5 = (uint)*(byte *)((int)piVar27 + 0x23);
                                    uVar18 = (uint)*(byte *)((int)piVar27 + 0x22);
                                    uVar19 = (uint)*(byte *)((int)piVar27 + 0x21);
                                    uVar20 = (uint)*(byte *)(piVar27 + 8);
                                    iVar2 = snprintf(__s,0x1000,DAT_0001a708,piVar27[4],uVar20,
                                                     uVar19,uVar18,uVar5,uVar13,uVar12,iVar17,uVar11
                                                     ,uVar10,iVar16,iVar8,iVar6,iVar26,iVar29);
                                    pcVar23 = __s + iVar2;
                                    pbVar31 = (byte *)(piVar27 + 0x1e);
                                    while (sVar7 = (int)pcVar24 - (int)pcVar23,
                                          pbVar31 + (-0x78 - (int)piVar27) < (byte *)piVar27[0x1c])
                                    {
                                      snprintf(pcVar23,sVar7,pcVar32,(uint)*pbVar31,uVar20,uVar19,
                                               uVar18,uVar5,uVar13,uVar12,iVar17,uVar11,uVar10,
                                               iVar16,iVar8,iVar6,iVar26,iVar29);
                                      if ((int)sVar7 < 3) goto LAB_000195aa;
                                      pcVar23 = pcVar23 + 2;
                                      pbVar31 = pbVar31 + 1;
                                    }
                                    iVar2 = FUN_00012c90(piVar27,DAT_0001a70c);
                                    if (iVar2 != 0) {
                                      snprintf(pcVar23,sVar7,DAT_0001a710);
                                      if ((int)sVar7 < 6) goto LAB_000195aa;
                                      pcVar23 = pcVar23 + 5;
                                    }
                                    snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001a714);
                                    if ((int)pcVar24 - (int)pcVar23 < 2) goto LAB_000195aa;
                                    pcVar22 = pcVar23 + 1;
                                    snprintf(pcVar22,(int)pcVar24 - (int)pcVar22,DAT_0001a718);
                                    if ((int)pcVar24 - (int)pcVar22 < 7) {
                                      pcVar22 = pcVar22 + -(int)__s;
                                      goto LAB_00019810;
                                    }
                                    iVar2 = FUN_00012c90(piVar27,DAT_0001aa30);
                                    pcVar23 = pcVar23 + 7;
                                    if (iVar2 != 0) {
                                      pcVar23 = (char *)FUN_00019170(pcVar23,pcVar24,DAT_0001aa34,
                                                                     iVar2,*(byte *)(iVar2 + 1) + 2)
                                      ;
                                    }
                                    iVar26 = FUN_00012c66(piVar27,0x30);
                                    if (iVar26 == 0) {
                                      if ((iVar2 == 0) &&
                                         ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1b) < 0)
                                         ) {
                                        snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001aad4);
                                        if ((int)pcVar24 - (int)pcVar23 < 6) goto LAB_000195aa;
                                        pcVar23 = pcVar23 + 5;
                                      }
                                    }
                                    else {
                                      pcVar23 = (char *)FUN_00019170(pcVar23,pcVar24,DAT_0001aa38,
                                                                     iVar26,*(byte *)(iVar26 + 1) +
                                                                            2);
                                    }
                                    if ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1e) < 0) {
                                      snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001aa3c);
                                      if ((int)pcVar24 - (int)pcVar23 < 7) goto LAB_000195aa;
                                      pcVar23 = pcVar23 + 6;
                                    }
                                    if ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1f) < 0) {
                                      snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001aa40);
                                      if ((int)pcVar24 - (int)pcVar23 < 6) goto LAB_000195aa;
                                      pcVar23 = pcVar23 + 5;
                                    }
                                    snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001aa44);
                                    if (1 < (int)pcVar24 - (int)pcVar23) {
                                      uVar4 = FUN_000133c8((int)piVar27 + 0x26,piVar27[0x12]);
                                      pcVar23 = pcVar23 + 1;
                                      pcVar24 = pcVar24 + -(int)pcVar23;
                                      iVar2 = snprintf(pcVar23,(size_t)pcVar24,DAT_0001aa48,uVar4);
                                      if (-1 < iVar2) goto LAB_0001a2be;
                                    }
                                    goto LAB_000195aa;
                                  }
                                  pcVar22 = (char *)FUN_00019350(*(undefined4 *)*param_1,__s,0x1000)
                                  ;
                                }
                                goto LAB_00019810;
                              }
                              uVar10 = FUN_000139b0(&local_48,param_2 + 0xf,0x1e);
                              puVar3 = DAT_00019a68;
                              if (uVar10 < 0x1e) {
                                pcVar22 = strchr((char *)&local_48,0x20);
                                pcVar32 = pcVar22;
                                if (pcVar22 != (char *)0x0) {
                                  pcVar32 = pcVar22 + 1;
                                  *pcVar22 = '\0';
                                  iVar2 = strcmp(pcVar32,DAT_0001a394);
                                  puVar3 = DAT_00019a68;
                                  if (iVar2 != 0) goto LAB_000194b0;
                                }
                                iVar2 = strcmp((char *)&local_48,DAT_0001a398);
                                pcVar22 = (char *)0x0;
                                if (iVar2 == 0) goto LAB_00019858;
                                if (*(code **)(param_1[0x40] + 0x3c) == (code *)0x0) {
                                  iVar2 = -1;
                                }
                                else {
                                  iVar2 = (**(code **)(param_1[0x40] + 0x3c))
                                                    (param_1[0x35],&local_64);
                                }
                                iVar26 = strcmp((char *)&local_48,DAT_0001a39c);
                                if (iVar26 == 0) {
                                  uVar4 = DAT_0001a3a0;
                                  if (iVar2 < 0) {
joined_r0x0001a4c0:
                                    if (pcVar32 != (char *)0x0) goto LAB_00019858;
                                    pcVar22 = (char *)FUN_000139b0(__s,uVar4,0x1000);
                                    puVar3 = DAT_00019a68;
                                    if (pcVar22 < (char *)0x1000) goto LAB_00019810;
                                    goto LAB_000194b0;
                                  }
                                  bVar33 = -1 < local_60 << 0x1c;
                                  if (!bVar33) {
                                    snprintf(__s,0x1000,DAT_0001a3a8,DAT_0001a3a4);
                                    pcVar23 = __s + 4;
                                  }
                                  if (local_60 << 0x1d < 0) {
                                    uVar4 = DAT_0001a3ac;
                                    if (bVar33) {
                                      uVar4 = DAT_0001a3a4;
                                    }
                                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23))
                                                     ,DAT_0001a3b0,uVar4);
                                    if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                    goto LAB_000195aa;
                                    pcVar23 = pcVar23 + iVar2;
                                    bVar33 = false;
                                  }
                                  if ((int)(local_64 << 0x1b) < 0) {
                                    pcVar24 = __s + (0x1000 - (int)pcVar23);
                                    pcVar22 = DAT_0001a3b4;
                                    uVar4 = DAT_0001a3ac;
                                    if (bVar33) {
                                      uVar4 = DAT_0001a3a4;
                                    }
LAB_0001a2b6:
                                    iVar2 = snprintf(pcVar23,(size_t)pcVar24,pcVar22,uVar4);
LAB_0001a2be:
                                    if (iVar2 < (int)pcVar24) {
                                      pcVar23 = pcVar23 + iVar2;
                                    }
                                  }
                                }
                                else {
                                  iVar26 = strcmp((char *)&local_48,DAT_0001a3b8);
                                  if (iVar26 == 0) {
                                    uVar4 = DAT_0001a3bc;
                                    if (iVar2 < 0) goto joined_r0x0001a4c0;
                                    bVar33 = -1 < local_60 << 0x1c;
                                    if (!bVar33) {
                                      snprintf(__s,0x1000,DAT_0001a3a8,DAT_0001a3a4);
                                      pcVar23 = __s + 4;
                                    }
                                    if (local_60 << 0x1d < 0) {
                                      uVar4 = DAT_0001a3ac;
                                      if (bVar33) {
                                        uVar4 = DAT_0001a3a4;
                                      }
                                      iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23
                                                                              )),DAT_0001a3b0,uVar4)
                                      ;
                                      if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                      goto LAB_000195aa;
                                      pcVar23 = pcVar23 + iVar2;
                                      bVar33 = false;
                                    }
                                    if (local_60 << 0x1e < 0) {
                                      uVar4 = DAT_0001a3ac;
                                      if (bVar33) {
                                        uVar4 = DAT_0001a3a4;
                                      }
                                      iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23
                                                                              )),DAT_0001a3c0,uVar4)
                                      ;
                                      if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                      goto LAB_000195aa;
                                      pcVar23 = pcVar23 + iVar2;
                                      bVar33 = false;
                                    }
                                    if (local_60 << 0x1f < 0) {
                                      pcVar24 = __s + (0x1000 - (int)pcVar23);
                                      pcVar22 = DAT_0001a3c4;
                                      uVar4 = DAT_0001a3ac;
                                      if (bVar33) {
                                        uVar4 = DAT_0001a3a4;
                                      }
                                      goto LAB_0001a2b6;
                                    }
                                  }
                                  else {
                                    iVar26 = strcmp((char *)&local_48,DAT_0001a6ac);
                                    if (iVar26 == 0) {
                                      uVar4 = DAT_0001a6b0;
                                      if (iVar2 < 0) goto joined_r0x0001a4c0;
                                      strcpy(__s,DAT_0001a6b4);
                                      pcVar23 = __s + 0xe;
                                      if ((local_64 & 3) != 0) {
                                        pcVar23 = __s + 0x16;
                                        snprintf(__s + 0xe,0xff2,DAT_0001a6b8);
                                      }
                                      if ((local_64 & 0xc) != 0) {
                                        snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),
                                                 DAT_0001a6bc);
                                        if ((int)(__s + (0x1000 - (int)pcVar23)) < 9)
                                        goto LAB_000195aa;
                                        pcVar23 = pcVar23 + 8;
                                      }
                                      if (((int)(local_64 << 0x1b) < 0) &&
                                         (snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),
                                                   DAT_0001a6c0),
                                         9 < (int)(__s + (0x1000 - (int)pcVar23)))) {
                                        pcVar23 = pcVar23 + 9;
                                      }
                                    }
                                    else {
                                      iVar26 = strcmp((char *)&local_48,DAT_0001a6c4);
                                      if (iVar26 == 0) {
                                        uVar4 = DAT_0001a6c8;
                                        if (iVar2 < 0) goto joined_r0x0001a4c0;
                                        bVar33 = (local_64 & 10) == 0;
                                        if (!bVar33) {
                                          snprintf(__s,0x1000,DAT_0001a6d0,DAT_0001a6cc);
                                          pcVar23 = __s + 3;
                                        }
                                        if ((local_64 & 5) != 0) {
                                          pcVar24 = __s + (0x1000 - (int)pcVar23);
                                          pcVar22 = DAT_0001a6d8;
                                          uVar4 = DAT_0001a6d4;
                                          if (bVar33) {
                                            uVar4 = DAT_0001a6cc;
                                          }
                                          goto LAB_0001a2b6;
                                        }
                                      }
                                      else {
                                        iVar26 = strcmp((char *)&local_48,DAT_0001a6dc);
                                        puVar3 = DAT_00019a68;
                                        if (iVar26 != 0) goto LAB_000194b0;
                                        uVar4 = DAT_0001a6e0;
                                        if (iVar2 < 0) goto joined_r0x0001a4c0;
                                        bVar33 = -1 < local_5c << 0x1f;
                                        if (!bVar33) {
                                          snprintf(__s,0x1000,DAT_0001a6e4,DAT_0001a6cc);
                                          pcVar23 = __s + 4;
                                        }
                                        if (local_5c << 0x1e < 0) {
                                          uVar4 = DAT_0001a6d4;
                                          if (bVar33) {
                                            uVar4 = DAT_0001a6cc;
                                          }
                                          iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)
                                                  pcVar23)),DAT_0001a6e8,uVar4);
                                          if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                          goto LAB_000195aa;
                                          pcVar23 = pcVar23 + iVar2;
                                          bVar33 = false;
                                        }
                                        if (local_5c << 0x1d < 0) {
                                          pcVar24 = __s + (0x1000 - (int)pcVar23);
                                          pcVar22 = DAT_0001a6ec;
                                          uVar4 = DAT_0001a6d4;
                                          if (bVar33) {
                                            uVar4 = DAT_0001a6cc;
                                          }
                                          goto LAB_0001a2b6;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_000195aa;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_000194b0;
                    }
                    iVar26 = strcmp(param_2 + 0x10,DAT_0001a06c);
                    iVar2 = 0;
                    if (iVar26 != 0) {
                      iVar2 = atoi(param_2 + 0x10);
                      iVar2 = FUN_0001241e(param_1[0x25],iVar2);
                      puVar3 = DAT_00019a68;
                      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_000194b0;
                    }
                    FUN_0001d432(param_1,iVar2);
                  }
                }
                goto LAB_000194c8;
              }
            }
          }
        }
      }
    }
  }
LAB_000194b0:
  pcVar22 = (char *)0x5;
  cVar1 = *(char *)(puVar3 + 1);
  *(undefined4 *)__s = *puVar3;
  __s[4] = cVar1;
LAB_00019858:
  *param_3 = pcVar22;
  return __s;
}



/* ===== FUN_0001aad8 @ 0001aad8 size=482 ===== */

undefined4 * FUN_0001aad8(undefined4 *param_1,char *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *__s;
  char *pcVar11;
  char *local_38;
  char *pcStack_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *pcStack_24;
  
  puVar2 = malloc(0x800);
  pcVar11 = DAT_0001acc0;
  if (puVar2 == (undefined4 *)0x0) {
    *param_3 = 1;
    return (undefined4 *)0x0;
  }
  uVar1 = *(undefined1 *)(DAT_0001acbc + 1);
  *(undefined2 *)puVar2 = *DAT_0001acbc;
  *(undefined1 *)((int)puVar2 + 2) = uVar1;
  iVar3 = strcmp(param_2,pcVar11);
  puVar7 = DAT_0001acc4;
  if (iVar3 != 0) {
    iVar3 = strncmp(param_2,DAT_0001acc8,0xe);
    if (iVar3 == 0) {
      pcStack_34 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_30 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_2c = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __s = param_2 + 0xe;
      local_38 = (char *)0x0;
      local_28 = __s;
      pcStack_24 = pcStack_34;
      pcVar4 = strchr(__s,9);
      pcVar11 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcVar11 = pcVar4 + 1;
        *pcVar4 = '\0';
      }
      puVar7 = DAT_0001acd0;
      if (param_2[0xe] != '\0') {
        if (pcVar11 != (char *)0x0) {
          local_38 = pcVar11;
          pcVar5 = strchr(pcVar11,9);
          pcVar4 = pcVar5;
          if (pcVar5 != (char *)0x0) {
            pcVar4 = pcVar5 + 1;
            *pcVar5 = '\0';
          }
          if (*pcVar11 == '\0') {
            local_38 = (char *)0x0;
          }
          if (pcVar4 != (char *)0x0) {
            local_30 = pcVar4;
            pcVar5 = strchr(pcVar4,9);
            pcVar11 = pcVar5;
            if (pcVar5 != (char *)0x0) {
              pcVar11 = pcVar5 + 1;
              *pcVar5 = '\0';
            }
            if (*pcVar4 == '\0') {
              local_30 = (char *)0x0;
            }
            if (pcVar11 != (char *)0x0) {
              pcStack_34 = pcVar11;
              pcVar5 = strchr(pcVar11,9);
              pcVar4 = pcVar5;
              if (pcVar5 != (char *)0x0) {
                pcVar4 = pcVar5 + 1;
                *pcVar5 = '\0';
              }
              if (*pcVar11 == '\0') {
                pcStack_34 = (char *)0x0;
              }
              if (pcVar4 != (char *)0x0) {
                local_2c = pcVar4;
                pcVar5 = strchr(pcVar4,9);
                pcVar11 = pcVar5;
                if (pcVar5 != (char *)0x0) {
                  pcVar11 = pcVar5 + 1;
                  *pcVar5 = '\0';
                }
                if (*pcVar4 == '\0') {
                  local_2c = (char *)0x0;
                }
                if (pcVar11 != (char *)0x0) {
                  pcStack_24 = pcVar11;
                  pcVar4 = strchr(pcVar11,9);
                  if (pcVar4 != (char *)0x0) {
                    *pcVar4 = '\0';
                  }
                  if (*pcVar11 == '\0') {
                    pcStack_24 = (char *)0x0;
                  }
                }
              }
            }
          }
        }
        iVar3 = FUN_0001dbbc(param_1,__s);
        puVar7 = DAT_0001acd0;
        if ((iVar3 == 0) &&
           (iVar3 = FUN_0001d7cc(param_1,&local_38), puVar7 = DAT_0001acd0, iVar3 != 0))
        goto LAB_0001ac00;
      }
    }
    else {
      iVar3 = strncmp(param_2,DAT_0001accc,0x11);
      if (iVar3 == 0) {
        iVar3 = FUN_0001dbbc(param_1,param_2 + 0x11);
        puVar7 = DAT_0001acd0;
        if ((iVar3 != 0) && (iVar3 = FUN_0001db5c(param_1,iVar3), puVar7 = DAT_0001acd0, iVar3 == 0)
           ) {
LAB_0001ac00:
          iVar3 = 3;
          goto LAB_0001ac02;
        }
      }
      else {
        iVar3 = strcmp(param_2,DAT_0001acd4);
        if (iVar3 == 0) {
          iVar3 = FUN_00019390(param_1 + 0xf,puVar2,0x800);
        }
        else {
          iVar3 = strcmp(param_2,DAT_0001acd8);
          if (iVar3 != 0) {
            iVar3 = strcmp(param_2,DAT_0001acdc);
            if (iVar3 == 0) {
              FUN_0001cec0(param_1);
            }
            else {
              iVar3 = strcmp(param_2,DAT_0001ace0);
              if (iVar3 == 0) {
                FUN_000128d0(param_1);
              }
              else {
                iVar3 = strcmp(param_2,DAT_0001ace4);
                if (iVar3 != 0) {
                  puVar10 = DAT_0001ace8 + 4;
                  puVar7 = DAT_0001ace8;
                  puVar9 = puVar2;
                  do {
                    puVar8 = puVar7 + 2;
                    uVar6 = puVar7[1];
                    *puVar9 = *puVar7;
                    puVar9[1] = uVar6;
                    puVar9 = puVar9 + 2;
                    puVar7 = puVar8;
                  } while (puVar8 != puVar10);
                  iVar3 = 0x10;
                  goto LAB_0001ac02;
                }
                FUN_000128f4(param_1);
              }
            }
            goto LAB_0001ac00;
          }
          iVar3 = FUN_00019350(*param_1,puVar2,0x800);
        }
        puVar7 = DAT_0001acd0;
        if (-1 < iVar3) goto LAB_0001ac02;
      }
    }
  }
  uVar1 = *(undefined1 *)(puVar7 + 1);
  *puVar2 = *puVar7;
  iVar3 = 5;
  *(undefined1 *)(puVar2 + 1) = uVar1;
LAB_0001ac02:
  *param_3 = iVar3;
  return puVar2;
}



/* ===== FUN_0001acec @ 0001acec size=76 ===== */

undefined4 FUN_0001acec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *__ptr;
  
  __ptr = *(int **)(param_1 + 8);
  while( true ) {
    if (__ptr == (int *)(param_1 + 8)) {
      return 0xffffffff;
    }
    if ((__ptr[0x1e] == param_3) &&
       (iVar1 = memcmp((void *)(param_2 + 2),(void *)((int)__ptr + 10),param_3 - 2), iVar1 == 0))
    break;
    __ptr = (int *)*__ptr;
  }
  iVar1 = *__ptr;
  piVar2 = (int *)__ptr[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  free(__ptr);
  return 0;
}



/* ===== FUN_0001ad38 @ 0001ad38 size=198 ===== */

void FUN_0001ad38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char acStack_58 [12];
  iovec local_4c;
  undefined4 uStack_44;
  undefined4 local_40;
  msghdr local_3c;
  
  if ((((param_1 != 0) && (iVar6 = *(int *)(param_1 + 0x110), iVar6 != 0)) &&
      (-1 < *(int *)(iVar6 + 4))) &&
     ((iVar6 + 8 != *(int *)(iVar6 + 8) &&
      (iVar1 = snprintf(acStack_58,10,DAT_0001ae00,param_2), iVar1 < 10)))) {
    local_4c.iov_base = acStack_58;
    local_4c.iov_len = strlen(acStack_58);
    local_3c.msg_control = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_3c.msg_controllen = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_3c.msg_flags = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c.msg_iov = &local_4c;
    local_3c.msg_iovlen = 2;
    piVar5 = *(int **)(iVar6 + 8);
    piVar7 = (int *)**(int **)(iVar6 + 8);
    uStack_44 = param_3;
    local_40 = param_4;
    while ((int *)(iVar6 + 8) != piVar5) {
      if (piVar5[0x1f] <= param_2) {
        local_3c.msg_namelen = piVar5[0x1e];
        local_3c.msg_name = piVar5 + 2;
        sVar2 = sendmsg(*(int *)(iVar6 + 4),&local_3c,0);
        if (sVar2 < 0) {
          piVar3 = __errno_location();
          iVar4 = piVar5[0x20] + 1;
          iVar1 = *piVar3;
          piVar5[0x20] = iVar4;
          if ((1000 < iVar4) || ((iVar1 != 0x69 && ((10 < iVar4 || (iVar1 == 2)))))) {
            FUN_0001acec(iVar6,piVar5 + 2,piVar5[0x1e]);
          }
        }
        else {
          piVar5[0x20] = 0;
        }
      }
      piVar5 = piVar7;
      piVar7 = (int *)*piVar7;
    }
  }
  return;
}



/* ===== FUN_0001ae04 @ 0001ae04 size=58 ===== */

undefined4 FUN_0001ae04(int param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_000139a8(0x84);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    memcpy(piVar1 + 2,param_2,0x6e);
    piVar1[0x1f] = 3;
    iVar3 = *(int *)(param_1 + 8);
    uVar2 = 0;
    piVar1[0x1e] = param_3;
    *piVar1 = iVar3;
    piVar1[1] = param_1 + 8;
    *(int **)(iVar3 + 4) = piVar1;
    *(int **)(param_1 + 8) = piVar1;
  }
  return uVar2;
}



/* ===== FUN_0001ae3e @ 0001ae3e size=272 ===== */

void FUN_0001ae3e(int param_1,undefined4 param_2,int param_3)

{
  socklen_t sVar1;
  ssize_t sVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  undefined4 *puVar6;
  socklen_t local_1098;
  size_t local_1094;
  sockaddr asStack_1090 [7];
  char acStack_1020 [6];
  char acStack_101a [4090];
  
  local_1098 = 0x6e;
  local_1094 = 0;
  sVar2 = recvfrom(param_1,acStack_1020,0xfff,0,asStack_1090,&local_1098);
  if (sVar2 < 0) {
    perror(DAT_0001af50);
    return;
  }
  acStack_1020[sVar2] = '\0';
  iVar3 = strcmp(acStack_1020,DAT_0001af54);
  if (iVar3 == 0) {
    iVar3 = FUN_0001ae04(param_3,asStack_1090,local_1098);
LAB_0001ae96:
    if (iVar3 == 0) {
LAB_0001af0a:
      local_1094 = 2;
      goto LAB_0001ae9e;
    }
  }
  else {
    iVar3 = strcmp(acStack_1020,DAT_0001af5c);
    if (iVar3 == 0) {
      iVar3 = FUN_0001acec(param_3,asStack_1090,local_1098);
      goto LAB_0001ae96;
    }
    iVar3 = strncmp(acStack_1020,DAT_0001af60,6);
    sVar1 = local_1098;
    if (iVar3 != 0) {
      pvVar4 = (void *)FUN_00019474(param_2,acStack_1020,&local_1094);
      if (pvVar4 != (void *)0x0) {
        sendto(param_1,pvVar4,local_1094,0,asStack_1090,local_1098);
        free(pvVar4);
        return;
      }
      goto LAB_0001ae9e;
    }
    sVar5 = local_1098 - 2;
    for (puVar6 = *(undefined4 **)(param_3 + 8); puVar6 != (undefined4 *)(param_3 + 8);
        puVar6 = (undefined4 *)*puVar6) {
      if ((sVar1 == puVar6[0x1e]) &&
         (iVar3 = memcmp(asStack_1090[0].sa_data,(void *)((int)puVar6 + 10),sVar5), iVar3 == 0)) {
        iVar3 = atoi(acStack_101a);
        puVar6[0x1f] = iVar3;
        goto LAB_0001af0a;
      }
    }
  }
  local_1094 = 1;
LAB_0001ae9e:
  if (local_1094 == 1) {
    sVar5 = 5;
    pvVar4 = DAT_0001af58;
  }
  else {
    if (local_1094 != 2) {
      return;
    }
    sVar5 = 3;
    pvVar4 = DAT_0001af64;
  }
  sendto(param_1,pvVar4,sVar5,0,asStack_1090,local_1098);
  return;
}



/* ===== FUN_0001af68 @ 0001af68 size=138 ===== */

char * FUN_0001af68(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  uint uVar6;
  uint __size;
  char *__haystack;
  
  pcVar1 = *(char **)(*(int *)(param_1 + 0x94) + 0x14);
  if ((pcVar1 != (char *)0x0) && (pcVar1 = strdup(pcVar1), pcVar1 != (char *)0x0)) {
    iVar2 = strncmp(pcVar1,DAT_0001aff4,4);
    __haystack = pcVar1;
    if (iVar2 == 0) {
      __haystack = pcVar1 + 4;
      pcVar3 = strstr(__haystack,DAT_0001aff8);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
    }
    sVar4 = strlen(__haystack);
    sVar5 = strlen((char *)(param_1 + 0x1a));
    __size = sVar4 + sVar5 + 2;
    pcVar3 = malloc(__size);
    if ((pcVar3 == (char *)0x0) ||
       ((uVar6 = snprintf(pcVar3,__size,DAT_0001affc,__haystack,(char *)(param_1 + 0x1a)),
        -1 < (int)uVar6 && (uVar6 < __size)))) {
      free(pcVar1);
      return pcVar3;
    }
    free(pcVar1);
    free(pcVar3);
  }
  return (char *)0x0;
}



/* ===== FUN_0001b000 @ 0001b000 size=124 ===== */

void FUN_0001b000(int param_1,undefined4 param_2)

{
  ssize_t sVar1;
  void *__buf;
  socklen_t local_198;
  size_t local_194;
  sockaddr asStack_190 [7];
  undefined1 auStack_120 [260];
  
  local_198 = 0x6e;
  sVar1 = recvfrom(param_1,auStack_120,0xff,0,asStack_190,&local_198);
  if (sVar1 < 0) {
    perror(DAT_0001b07c);
  }
  else {
    auStack_120[sVar1] = 0;
    __buf = (void *)FUN_0001aad8(param_2,auStack_120,&local_194);
    if (__buf == (void *)0x0) {
      if (local_194 != 0) {
        sendto(param_1,DAT_0001b080,5,0,asStack_190,local_198);
      }
    }
    else {
      sendto(param_1,__buf,local_194,0,asStack_190,local_198);
      free(__buf);
    }
  }
  return;
}



/* ===== FUN_0001b084 @ 0001b084 size=494 ===== */

int * FUN_0001b084(int param_1)

{
  bool bVar1;
  int *__ptr;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  group *pgVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  char *pcVar10;
  __gid_t __group;
  char *pcVar11;
  char *local_94;
  sockaddr local_90 [7];
  
  __ptr = (int *)FUN_000139a8(0x10);
  if (__ptr == (int *)0x0) {
    return (int *)0x0;
  }
  iVar9 = *(int *)(param_1 + 0x94);
  *__ptr = param_1;
  __ptr[2] = (int)(__ptr + 2);
  __ptr[3] = (int)(__ptr + 2);
  __ptr[1] = -1;
  pcVar2 = *(char **)(iVar9 + 0x14);
  if (pcVar2 == (char *)0x0) {
    return __ptr;
  }
  pcVar2 = strdup(pcVar2);
  if (pcVar2 != (char *)0x0) {
    iVar3 = strncmp(pcVar2,DAT_0001b274,4);
    if (iVar3 == 0) {
      pcVar11 = pcVar2 + 4;
      pcVar4 = strstr(pcVar11,DAT_0001b278);
      pcVar10 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcVar10 = pcVar4 + 7;
        *pcVar4 = '\0';
      }
    }
    else {
      pcVar10 = *(char **)(iVar9 + 0x18);
      pcVar11 = pcVar2;
    }
    iVar9 = mkdir(pcVar11,0x1f8);
    if ((iVar9 < 0) && (piVar5 = __errno_location(), pcVar4 = DAT_0001b27c, *piVar5 != 0x11)) {
LAB_0001b0fa:
      perror(pcVar4);
    }
    else {
      if (pcVar10 == (char *)0x0) {
        __group = 0;
        bVar1 = false;
      }
      else {
        pgVar6 = getgrnam(pcVar10);
        if (pgVar6 == (group *)0x0) {
          __group = strtol(pcVar10,&local_94,10);
          if ((*pcVar10 == '\0') || (*local_94 != '\0')) goto LAB_0001b0fe;
        }
        else {
          __group = pgVar6->gr_gid;
        }
        iVar9 = chown(pcVar11,0xffffffff,__group);
        pcVar4 = DAT_0001b280;
        if (iVar9 < 0) goto LAB_0001b0fa;
        iVar9 = chmod(pcVar11,0x1e8);
        if (iVar9 < 0) goto LAB_0001b0fe;
        bVar1 = true;
      }
      sVar7 = strlen(pcVar11);
      sVar8 = strlen((char *)(param_1 + 0x1a));
      if (sVar8 + sVar7 + 1 < 0x6c) {
        iVar9 = socket(1,2,0);
        __ptr[1] = iVar9;
        pcVar4 = DAT_0001b284;
        if (iVar9 < 0) goto LAB_0001b0fa;
        memset(local_90[0].sa_data,0,0x6c);
        local_90[0].sa_family = 1;
        pcVar10 = (char *)FUN_0001af68(param_1);
        if (pcVar10 != (char *)0x0) {
          FUN_000139b0(local_90[0].sa_data,pcVar10,0x6c);
          iVar9 = bind(__ptr[1],local_90,0x6e);
          if (iVar9 < 0) {
            iVar9 = connect(__ptr[1],local_90,0x6e);
            if (-1 < iVar9) {
              free(pcVar10);
              goto LAB_0001b0fe;
            }
            iVar9 = unlink(pcVar10);
            pcVar11 = DAT_0001b288;
            if ((-1 < iVar9) &&
               (iVar9 = bind(__ptr[1],local_90,0x6e), pcVar11 = DAT_0001b28c, -1 < iVar9))
            goto LAB_0001b220;
          }
          else {
LAB_0001b220:
            if (((!bVar1) ||
                (iVar9 = chown(pcVar10,0xffffffff,__group), pcVar11 = DAT_0001b290, -1 < iVar9)) &&
               (iVar9 = chmod(pcVar10,0x1f8), pcVar11 = DAT_0001b294, -1 < iVar9)) {
              free(pcVar10);
              FUN_00013b4c(__ptr[1],DAT_0001b298,param_1,__ptr);
              FUN_00013404(DAT_0001b29c);
              free(pcVar2);
              return __ptr;
            }
          }
          perror(pcVar11);
          goto LAB_0001b1e0;
        }
      }
    }
  }
LAB_0001b0fe:
  pcVar10 = (char *)0x0;
LAB_0001b1e0:
  if (-1 < __ptr[1]) {
    close(__ptr[1]);
  }
  free(__ptr);
  if (pcVar10 != (char *)0x0) {
    unlink(pcVar10);
    free(pcVar10);
  }
  free(pcVar2);
  return (int *)0x0;
}



/* ===== FUN_0001b2a0 @ 0001b2a0 size=174 ===== */

void FUN_0001b2a0(int *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char *__haystack;
  
  if (-1 < param_1[1]) {
    FUN_00013bb8();
    if ((int *)param_1[2] != param_1 + 2) {
      FUN_0001372c(1,0);
    }
    close(param_1[1]);
    param_1[1] = -1;
    pcVar1 = (char *)FUN_0001af68(*param_1);
    if (pcVar1 != (char *)0x0) {
      unlink(pcVar1);
      free(pcVar1);
    }
    pcVar1 = strdup(*(char **)(*(int *)(*param_1 + 0x94) + 0x14));
    if (pcVar1 != (char *)0x0) {
      iVar2 = strncmp(pcVar1,DAT_0001b350,4);
      __haystack = pcVar1;
      if (iVar2 == 0) {
        __haystack = pcVar1 + 4;
        pcVar3 = strstr(__haystack,DAT_0001b354);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      iVar2 = rmdir(__haystack);
      if ((iVar2 < 0) && (piVar4 = __errno_location(), *piVar4 != 0x27)) {
        perror(DAT_0001b358);
      }
      free(pcVar1);
    }
  }
  piVar4 = (int *)param_1[2];
  piVar5 = *(int **)param_1[2];
  while (piVar4 != param_1 + 2) {
    free(piVar4);
    piVar4 = piVar5;
    piVar5 = (int *)*piVar5;
  }
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_0001b35c @ 0001b35c size=142 ===== */

void FUN_0001b35c(int param_1)

{
  char *__s2;
  void *__buf;
  char *__s;
  ssize_t sVar1;
  int iVar2;
  socklen_t local_19c;
  sockaddr asStack_198 [7];
  char acStack_128 [260];
  
  __s = DAT_0001b3f8;
  __buf = DAT_0001b3f4;
  __s2 = DAT_0001b3f0;
  local_19c = 0x6e;
  while( true ) {
    while( true ) {
      FUN_00013f50(*(undefined4 *)(param_1 + 4));
      sVar1 = recvfrom(*(int *)(param_1 + 4),acStack_128,0xff,0,asStack_198,&local_19c);
      if (-1 < sVar1) break;
      perror(__s);
    }
    acStack_128[sVar1] = '\0';
    iVar2 = strcmp(acStack_128,__s2);
    if ((iVar2 == 0) && (iVar2 = FUN_0001ae04(param_1,asStack_198), iVar2 == 0)) break;
    sendto(*(int *)(param_1 + 4),__buf,5,0,asStack_198,local_19c);
  }
  sendto(*(int *)(param_1 + 4),DAT_0001b3ec,3,0,asStack_198,local_19c);
  return;
}



/* ===== FUN_0001b3fc @ 0001b3fc size=188 ===== */

int * FUN_0001b3fc(int param_1)

{
  int *__ptr;
  char *__s;
  int iVar1;
  sockaddr local_80 [7];
  
  __ptr = (int *)FUN_000139a8(8);
  if (__ptr == (int *)0x0) {
    return (int *)0x0;
  }
  __ptr[1] = -1;
  iVar1 = *(int *)(param_1 + 0x1c);
  *__ptr = param_1;
  if (iVar1 == 0) {
    return __ptr;
  }
  iVar1 = socket(1,2,0);
  __ptr[1] = iVar1;
  __s = DAT_0001b4b8;
  if (iVar1 < 0) {
LAB_0001b42e:
    perror(__s);
LAB_0001b432:
    if (-1 < __ptr[1]) {
      close(__ptr[1]);
    }
    free(__ptr);
    __ptr = (int *)0x0;
  }
  else {
    memset(local_80[0].sa_data,0,0x6c);
    local_80[0].sa_family = 1;
    FUN_000139b0(local_80[0].sa_data,*(undefined4 *)(param_1 + 0x1c),0x6c);
    iVar1 = bind(__ptr[1],local_80,0x6e);
    if (iVar1 < 0) {
      perror(DAT_0001b4bc);
      iVar1 = connect(__ptr[1],local_80,0x6e);
      if (-1 < iVar1) goto LAB_0001b432;
      iVar1 = unlink(*(char **)(param_1 + 0x1c));
      __s = DAT_0001b4c0;
      if ((iVar1 < 0) || (iVar1 = bind(__ptr[1],local_80,0x6e), __s = DAT_0001b4bc, iVar1 < 0))
      goto LAB_0001b42e;
    }
    FUN_00013b4c(__ptr[1],DAT_0001b4c4,param_1,0);
  }
  return __ptr;
}



/* ===== FUN_0001b4c8 @ 0001b4c8 size=40 ===== */

void FUN_0001b4c8(int *param_1)

{
  if (-1 < param_1[1]) {
    FUN_00013bb8();
    close(param_1[1]);
  }
  if (*(char **)(*param_1 + 0x1c) != (char *)0x0) {
    unlink(*(char **)(*param_1 + 0x1c));
  }
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_0001b4f0 @ 0001b4f0 size=250 ===== */

undefined1 * FUN_0001b4f0(byte *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  size_t __size;
  undefined1 *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = (uint)((ulonglong)(param_2 << 2) * (ulonglong)DAT_0001b5ec >> 0x21);
  __size = uVar4 + 5 + (uint)((ulonglong)(uVar4 + 4) * (ulonglong)DAT_0001b5f0 >> 0x24);
  if ((__size < param_2) ||
     (puVar5 = malloc(__size), iVar3 = DAT_0001b5f4, puVar5 == (undefined1 *)0x0)) {
    return (undefined1 *)0x0;
  }
  iVar10 = 0;
  puVar8 = puVar5;
  pbVar9 = param_1;
  while (iVar11 = DAT_0001b5f4, iVar7 = (int)(param_1 + param_2) - (int)pbVar9, 2 < iVar7) {
    bVar1 = *pbVar9;
    iVar11 = iVar10 + 4;
    if (0x47 < iVar11) {
      puVar8[4] = 10;
    }
    iVar10 = iVar11;
    if (0x47 < iVar11) {
      iVar10 = 0;
    }
    *puVar8 = *(undefined1 *)(iVar3 + (uint)(bVar1 >> 2));
    bVar2 = pbVar9[1];
    puVar8[1] = *(undefined1 *)(iVar3 + ((bVar1 & 3) << 4 | (uint)(bVar2 >> 4)));
    uVar6 = *(undefined1 *)(iVar3 + (pbVar9[2] & 0x3f));
    puVar8[2] = *(undefined1 *)(iVar3 + ((bVar2 & 0xf) << 2 | (uint)(pbVar9[2] >> 6)));
    puVar8[3] = uVar6;
    if (iVar11 < 0x48) {
      puVar8 = puVar8 + 4;
      pbVar9 = pbVar9 + 3;
    }
    else {
      puVar8 = puVar8 + 5;
      pbVar9 = pbVar9 + 3;
    }
  }
  if (pbVar9 == param_1 + param_2) {
    if (iVar10 == 0) goto LAB_0001b5dc;
  }
  else {
    uVar4 = (*pbVar9 & 3) * 0x10;
    *puVar8 = *(undefined1 *)(DAT_0001b5f4 + (uint)(*pbVar9 >> 2));
    if (iVar7 == 1) {
      puVar8[1] = *(undefined1 *)(iVar11 + uVar4);
      uVar6 = 0x3d;
    }
    else {
      uVar6 = *(undefined1 *)(iVar11 + (pbVar9[1] & 0xf) * 4);
      puVar8[1] = *(undefined1 *)(iVar11 + (uVar4 | pbVar9[1] >> 4));
    }
    puVar8[2] = uVar6;
    puVar8[3] = 0x3d;
    puVar8 = puVar8 + 4;
  }
  *puVar8 = 10;
  puVar8 = puVar8 + 1;
LAB_0001b5dc:
  *puVar8 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = (int)puVar8 - (int)puVar5;
  }
  return puVar5;
}



/* ===== FUN_0001b5f8 @ 0001b5f8 size=218 ===== */

byte * FUN_0001b5f8(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_120 [4];
  char local_11c [4];
  char acStack_118 [61];
  undefined1 local_db;
  
  memset(acStack_118,0x80,0x100);
  iVar5 = 0;
  pbVar4 = DAT_0001b6d4;
  do {
    acStack_118[*pbVar4] = (char)iVar5;
    iVar5 = iVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar5 != 0x40);
  uVar6 = 0;
  local_db = 0;
  pbVar4 = param_1;
  while (param_1 + param_2 != pbVar4) {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar3;
    if (acStack_118[bVar1] != -0x80) {
      uVar6 = uVar6 + 1;
    }
  }
  if (((uVar6 == 0) || ((uVar6 & 3) != 0)) ||
     (pbVar3 = malloc((uVar6 >> 2) * 3), pbVar3 == (byte *)0x0)) {
    pbVar3 = (byte *)0x0;
  }
  else {
    iVar5 = 0;
    pbVar7 = pbVar3;
    while (param_1 != pbVar4) {
      pbVar8 = param_1 + 1;
      bVar1 = *param_1;
      cVar2 = acStack_118[bVar1];
      param_1 = pbVar8;
      if (cVar2 != -0x80) {
        local_120[iVar5] = bVar1;
        local_11c[iVar5] = cVar2;
        iVar5 = iVar5 + 1;
        if (iVar5 == 4) {
          *pbVar7 = (byte)local_11c[1] >> 4 | local_11c[0] << 2;
          pbVar7[1] = (byte)local_11c[2] >> 2 | local_11c[1] << 4;
          pbVar7[2] = local_11c[3] | local_11c[2] << 6;
          iVar5 = 0;
          pbVar7 = pbVar7 + 3;
        }
      }
    }
    if (pbVar3 < pbVar7) {
      if (local_120[2] == '=') {
        pbVar7 = pbVar7 + -2;
      }
      else if (local_120[3] == '=') {
        pbVar7 = pbVar7 + -1;
      }
    }
    *param_3 = (int)pbVar7 - (int)pbVar3;
  }
  return pbVar3;
}



/* ===== FUN_0001b6d8 @ 0001b6d8 size=272 ===== */

undefined4
FUN_0001b6d8(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  size_t local_c0;
  undefined1 *local_bc [2];
  undefined1 auStack_b4 [20];
  byte *local_a0 [6];
  undefined4 local_88 [6];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_3 < 6) {
    local_c0 = param_2;
    local_bc[0] = param_1;
    if (0x40 < param_2) {
      local_bc[0] = param_1;
      iVar1 = FUN_0001c7f0(1,local_bc,&local_c0,auStack_b4);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      local_c0 = 0x14;
      local_bc[0] = auStack_b4;
    }
    uVar3 = 0;
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_70 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_6c = uVar8;
    uStack_68 = uVar9;
    uStack_64 = uVar10;
    uStack_5c = uVar8;
    uStack_54 = uVar8;
    uStack_4c = uVar8;
    uStack_44 = uVar8;
    uStack_3c = uVar8;
    uStack_34 = uVar8;
    memcpy(&local_70,local_bc[0],local_c0);
    iVar1 = 0x40;
    pbVar5 = (byte *)&local_70;
    do {
      iVar1 = iVar1 + -1;
      *pbVar5 = *pbVar5 ^ 0x36;
      pbVar5 = pbVar5 + 1;
    } while (iVar1 != 0);
    local_88[0] = 0x40;
    puVar4 = (undefined4 *)(param_5 + -4);
    puVar6 = (undefined4 *)(param_4 + -4);
    uVar2 = 0;
    local_a0[0] = (byte *)&local_70;
    while (bVar7 = uVar2 != param_3, uVar2 = uVar2 + 1, bVar7) {
      puVar6 = puVar6 + 1;
      local_a0[uVar2] = (byte *)*puVar6;
      puVar4 = puVar4 + 1;
      local_88[uVar2] = *puVar4;
    }
    iVar1 = FUN_0001c7f0(uVar2,local_a0,local_88,param_6);
    if (iVar1 == 0) {
      uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_70 = uVar3;
      uStack_6c = uVar8;
      uStack_68 = uVar9;
      uStack_64 = uVar10;
      uStack_54 = uStack_5c;
      uStack_4c = uStack_5c;
      uStack_44 = uStack_5c;
      uStack_3c = uStack_5c;
      uStack_34 = uStack_5c;
      memcpy(&local_70,local_bc[0],local_c0);
      iVar1 = 0x40;
      pbVar5 = (byte *)&local_70;
      do {
        iVar1 = iVar1 + -1;
        *pbVar5 = *pbVar5 ^ 0x5c;
        pbVar5 = pbVar5 + 1;
      } while (iVar1 != 0);
      local_88[0] = 0x40;
      local_88[1] = 0x14;
      local_a0[1] = (byte *)param_6;
      local_a0[0] = (byte *)&local_70;
      uVar3 = FUN_0001c7f0(2,local_a0,local_88,param_6);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001b7e8 @ 0001b7e8 size=28 ===== */

void FUN_0001b7e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_4;
  uStack_c = param_3;
  FUN_0001b6d8(param_1,param_2,1,&uStack_c,&local_10,param_5);
  return;
}



/* ===== FUN_0001b804 @ 0001b804 size=160 ===== */

undefined4
FUN_0001b804(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,uint param_7)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  char local_4d;
  char *local_4c;
  undefined4 local_48;
  char *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [20];
  
  uVar3 = 0;
  local_4d = '\0';
  sVar1 = strlen(param_3);
  local_3c = param_5;
  local_44 = &local_4d;
  local_38 = 1;
  local_40 = sVar1 + 1;
  local_4c = param_3;
  local_48 = param_4;
  while( true ) {
    if (param_7 <= uVar3) {
      return 0;
    }
    if (param_7 - uVar3 < 0x14) break;
    iVar2 = FUN_0001b6d8(param_1,param_2,3,&local_4c,&local_40,param_6 + uVar3);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar3 = uVar3 + 0x14;
    local_4d = local_4d + '\x01';
  }
  iVar2 = FUN_0001b6d8(param_1,param_2,3,&local_4c,&local_40,auStack_34);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  memcpy((void *)(param_6 + uVar3),auStack_34,param_7 - uVar3);
  return 0;
}



/* ===== FUN_0001b8a4 @ 0001b8a4 size=3564 ===== */

void FUN_0001b8a4(uint *param_1,uint *param_2)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_68 [5];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar23 = local_68;
  puVar16 = param_2;
  do {
    puVar17 = puVar16 + 2;
    uVar1 = puVar16[1];
    *puVar23 = *puVar16;
    puVar23[1] = uVar1;
    puVar23 = puVar23 + 2;
    puVar16 = puVar17;
  } while (puVar17 != param_2 + 0x10);
  uVar18 = *param_1;
  uVar19 = param_1[1];
  uVar20 = param_1[2];
  uVar21 = param_1[3];
  uVar22 = local_68[0] << 0x18 | (local_68[0] >> 8 & 0xff) << 0x10 |
           (local_68[0] >> 0x10 & 0xff) << 8 | local_68[0] >> 0x18;
  uVar1 = uVar18 >> 2 | uVar18 << 0x1e;
  uVar29 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
           param_1[4] + DAT_0001bc64 + (uVar18 >> 0x1b | uVar18 << 5) + uVar22;
  uVar30 = uVar19 >> 2 | uVar19 << 0x1e;
  uVar7 = local_68[1] << 0x18 | (local_68[1] >> 8 & 0xff) << 0x10 |
          (local_68[1] >> 0x10 & 0xff) << 8 | local_68[1] >> 0x18;
  uVar31 = ((uVar20 ^ uVar30) & uVar18 ^ uVar20) + uVar21 + DAT_0001bc64 + uVar7 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar27 = local_68[2] << 0x18 | (local_68[2] >> 8 & 0xff) << 0x10 |
           (local_68[2] >> 0x10 & 0xff) << 8 | local_68[2] >> 0x18;
  uVar24 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar2 = local_68[3] << 0x18 | (local_68[3] >> 8 & 0xff) << 0x10 |
          (local_68[3] >> 0x10 & 0xff) << 8 | local_68[3] >> 0x18;
  uVar8 = ((uVar30 ^ uVar1) & uVar29 ^ uVar30) + uVar20 + DAT_0001bc64 + uVar27 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar3 = local_68[4] << 0x18 | (local_68[4] >> 8 & 0xff) << 0x10 |
          (local_68[4] >> 0x10 & 0xff) << 8 | local_68[4] >> 0x18;
  uVar4 = local_54 << 0x18 | (local_54 >> 8 & 0xff) << 0x10 | (local_54 >> 0x10 & 0xff) << 8 |
          local_54 >> 0x18;
  uVar31 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + DAT_0001bc64 + uVar2 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar30 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar5 = local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
          local_50 >> 0x18;
  uVar8 = ((uVar24 ^ uVar29) & uVar8 ^ uVar24) + uVar1 + DAT_0001bc64 + uVar3 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar1 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar6 = local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 | (local_4c >> 0x10 & 0xff) << 8 |
          local_4c >> 0x18;
  uVar31 = ((uVar29 ^ uVar30) & uVar31 ^ uVar29) + uVar24 + uVar4 + DAT_0001bc64 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar24 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar26 = local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
           local_48 >> 0x18;
  uVar8 = ((uVar30 ^ uVar1) & uVar8 ^ uVar30) + uVar29 + uVar5 + DAT_0001bc64 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar31 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + uVar6 + DAT_0001bc64 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar9 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
          local_44 >> 0x18;
  uVar30 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar10 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
           local_40 >> 0x18;
  uVar25 = ((uVar24 ^ uVar29) & uVar8 ^ uVar24) + uVar1 + uVar26 + DAT_0001bc64 +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar1 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar11 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
           local_3c >> 0x18;
  uVar8 = ((uVar29 ^ uVar30) & uVar31 ^ uVar29) + uVar24 + uVar9 + DAT_0001bc64 +
          (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar24 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar12 = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18;
  uVar31 = ((uVar30 ^ uVar1) & uVar25 ^ uVar30) + uVar29 + uVar10 + DAT_0001bc64 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar29 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar13 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  uVar8 = ((uVar1 ^ uVar24) & uVar8 ^ uVar1) + uVar30 + uVar11 + DAT_0001bc64 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar30 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar14 = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
           local_30 >> 0x18;
  uVar25 = ((uVar24 ^ uVar29) & uVar31 ^ uVar24) + uVar1 + uVar12 + DAT_0001bc64 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar15 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  uVar31 = ((uVar29 ^ uVar30) & uVar8 ^ uVar29) + uVar24 + uVar13 + DAT_0001bc64 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar22 ^ uVar27 ^ uVar26 ^ uVar13;
  uVar24 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar22 = ((uVar30 ^ uVar1) & uVar25 ^ uVar30) + uVar29 + uVar14 + DAT_0001bc64 +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar25 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + uVar15 + DAT_0001bc64 +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar31 = uVar7 ^ uVar2 ^ uVar9 ^ uVar14;
  uVar30 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar22 = ((uVar24 ^ uVar8) & uVar22 ^ uVar24) + uVar1 + uVar29 + DAT_0001bc64 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar1 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar7 = uVar27 ^ uVar3 ^ uVar10 ^ uVar15;
  uVar25 = ((uVar8 ^ uVar30) & uVar25 ^ uVar8) + uVar24 + uVar31 + DAT_0001bc64 +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar24 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar27 = ((uVar30 ^ uVar1) & uVar22 ^ uVar30) + uVar8 + uVar24 + DAT_0001bc64 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar2 ^ uVar4 ^ uVar11 ^ uVar29;
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar25 = ((uVar1 ^ uVar7) & uVar25 ^ uVar1) + DAT_0001bc64 + uVar22 + uVar30 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar2 = uVar5 ^ uVar3 ^ uVar12 ^ uVar31;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar27 = (uVar7 ^ uVar8 ^ uVar27) + uVar1 + uVar2 + DAT_0001bc68 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar1 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar3 = uVar6 ^ uVar4 ^ uVar13 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar25 = (uVar8 ^ uVar30 ^ uVar25) + uVar7 + uVar3 + DAT_0001bc68 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar4 = uVar5 ^ uVar26 ^ uVar14 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar27 = (uVar30 ^ uVar1 ^ uVar27) + uVar8 + uVar4 + DAT_0001bc68 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar5 = uVar6 ^ uVar9 ^ uVar15 ^ uVar2;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar28 = (uVar1 ^ uVar7 ^ uVar25) + uVar30 + uVar5 + DAT_0001bc68 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar6 = uVar26 ^ uVar10 ^ uVar29 ^ uVar3;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar1 + uVar6 + DAT_0001bc68 + (uVar7 ^ uVar8 ^ uVar27) +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar1 = uVar9 ^ uVar11 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar25 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar26 = (uVar8 ^ uVar30 ^ uVar28) + uVar7 + uVar1 + DAT_0001bc68 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar10 ^ uVar12 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar27 = (uVar30 ^ uVar25 ^ uVar27) + uVar8 + uVar9 + DAT_0001bc68 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar10 = uVar11 ^ uVar13 ^ uVar22 ^ uVar6;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar28 = uVar30 + uVar10 + DAT_0001bc68 + (uVar25 ^ uVar7 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar12 ^ uVar14 ^ uVar2 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = (uVar7 ^ uVar8 ^ uVar27) + uVar25 + uVar30 + DAT_0001bc68 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar25 = uVar13 ^ uVar15 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar12 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar27 = uVar7 + uVar25 + DAT_0001bc68 + (uVar8 ^ uVar11 ^ uVar28) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar14 ^ uVar29 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = uVar8 + uVar7 + DAT_0001bc68 + (uVar11 ^ uVar12 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar8 = uVar15 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = uVar11 + uVar8 + DAT_0001bc68 + (uVar12 ^ uVar13 ^ uVar27) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar6 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = uVar12 + uVar29 + DAT_0001bc68 + (uVar13 ^ uVar14 ^ uVar26) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar15 = uVar13 + uVar31 + DAT_0001bc68 + (uVar14 ^ uVar11 ^ uVar15) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar13 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar24 = uVar2 ^ uVar24 ^ uVar9 ^ uVar8;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar26 = uVar24 + DAT_0001bc68 + uVar14 + (uVar11 ^ uVar12 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar2 = uVar2 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar27 = uVar11 + uVar22 + DAT_0001bc68 + (uVar12 ^ uVar13 ^ uVar15) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar12 + uVar2 + DAT_0001bc68 + (uVar13 ^ uVar14 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar3 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar13 + uVar3 + DAT_0001bc68 + (uVar14 ^ uVar11 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar4 = uVar4 ^ uVar6 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = uVar14 + uVar4 + DAT_0001bc68 + (uVar11 ^ uVar12 ^ uVar15) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar5 = uVar5 ^ uVar1 ^ uVar8 ^ uVar2;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar11 + DAT_0001bc68 + uVar5 + (uVar12 ^ uVar13 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar6 = uVar6 ^ uVar9 ^ uVar29 ^ uVar3;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = uVar12 + uVar6 + DAT_0001c288 + ((uVar15 | uVar14) & uVar13 | uVar15 & uVar14) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar1 ^ uVar10 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar13 + uVar1 + DAT_0001c288 + ((uVar27 | uVar11) & uVar14 | uVar27 & uVar11) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar9 = uVar9 ^ uVar30 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar26 = uVar14 + uVar9 + DAT_0001c288 + (uVar15 & uVar12 | (uVar15 | uVar12) & uVar11) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar10 = uVar10 ^ uVar25 ^ uVar22 ^ uVar6;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = uVar11 + uVar10 + DAT_0001c288 + ((uVar27 | uVar13) & uVar12 | uVar27 & uVar13) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar30 = uVar30 ^ uVar7 ^ uVar2 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = uVar12 + uVar30 + DAT_0001c288 + ((uVar26 | uVar14) & uVar13 | uVar26 & uVar14) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar25 = uVar25 ^ uVar8 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar27 = (uVar15 & uVar11 | (uVar15 | uVar11) & uVar14) + uVar13 + uVar25 + DAT_0001c288 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar29 ^ uVar7 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar14 + uVar7 + DAT_0001c288 + (uVar26 & uVar12 | (uVar26 | uVar12) & uVar11) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar8 = uVar8 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = ((uVar27 | uVar13) & uVar12 | uVar27 & uVar13) + uVar11 + uVar8 + DAT_0001c288 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar6 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar26 = ((uVar15 | uVar14) & uVar13 | uVar15 & uVar14) + uVar12 + uVar29 + DAT_0001c288 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = ((uVar27 | uVar11) & uVar14 | uVar27 & uVar11) + uVar13 + uVar31 + DAT_0001c288 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar24 = uVar24 ^ uVar2 ^ uVar9 ^ uVar8;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = ((uVar26 | uVar12) & uVar11 | uVar26 & uVar12) + uVar14 + uVar24 + DAT_0001c288 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar26 = uVar22 + DAT_0001c288 + uVar11 + ((uVar15 | uVar13) & uVar12 | uVar15 & uVar13) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar2 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar2 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar15 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = (uVar27 & uVar14 | (uVar27 | uVar14) & uVar13) + uVar12 + uVar11 + DAT_0001c288 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar3 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = uVar13 + uVar3 + DAT_0001c288 + (uVar26 & uVar2 | (uVar26 | uVar2) & uVar14) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar6 ^ uVar4 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar14 = (uVar27 & uVar15 | (uVar27 | uVar15) & uVar2) + uVar14 + uVar4 + DAT_0001c288 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar5 = uVar5 ^ uVar1 ^ uVar8 ^ uVar11;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = (uVar26 & uVar12 | (uVar26 | uVar12) & uVar15) + uVar2 + uVar5 + DAT_0001c288 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar2 = uVar6 ^ uVar9 ^ uVar29 ^ uVar3;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar6 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar26 = (uVar14 & uVar13 | (uVar14 | uVar13) & uVar12) + uVar15 + uVar2 + DAT_0001c288 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar1 ^ uVar10 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = (uVar27 & uVar6 | (uVar27 | uVar6) & uVar13) + uVar12 + uVar1 + DAT_0001c288 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar9 = uVar9 ^ uVar30 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = ((uVar26 | uVar14) & uVar6 | uVar26 & uVar14) + uVar13 + uVar9 + DAT_0001c288 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar10 = uVar10 ^ uVar25 ^ uVar22 ^ uVar2;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = ((uVar15 | uVar12) & uVar14 | uVar15 & uVar12) + DAT_0001c288 + uVar10 + uVar6 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar30 = uVar30 ^ uVar7 ^ uVar11 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar27 = (uVar12 ^ uVar13 ^ uVar27) + uVar14 + uVar30 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar25 = uVar25 ^ uVar8 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar15 = (uVar13 ^ uVar6 ^ uVar15) + uVar12 + uVar25 + DAT_0001c6a0 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar7 = uVar29 ^ uVar7 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar26 = (uVar6 ^ uVar14 ^ uVar27) + uVar13 + uVar7 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar13 = uVar8 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar27 = (uVar14 ^ uVar12 ^ uVar15) + uVar6 + uVar13 + DAT_0001c6a0 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar2 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar6 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = (uVar12 ^ uVar8 ^ uVar26) + uVar14 + uVar29 + DAT_0001c6a0 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = (uVar8 ^ uVar6 ^ uVar27) + uVar12 + uVar31 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar24 = uVar24 ^ uVar11 ^ uVar9 ^ uVar13;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar26 = (uVar6 ^ uVar14 ^ uVar15) + uVar8 + uVar24 + DAT_0001c6a0 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar15 = (uVar14 ^ uVar12 ^ uVar27) + uVar6 + uVar22 + DAT_0001c6a0 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar6 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar11 = uVar11 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar27 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar26 = (uVar12 ^ uVar8 ^ uVar26) + uVar14 + uVar11 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar14 = uVar27 >> 0x1f | uVar27 << 1;
  uVar15 = (uVar8 ^ uVar6 ^ uVar15) + uVar12 + uVar14 + DAT_0001c6a0 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar4 = uVar4 ^ uVar2 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar27 = (uVar6 ^ uVar3 ^ uVar26) + uVar8 + uVar4 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar5 = uVar5 ^ uVar1 ^ uVar13 ^ uVar11;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar15 = (uVar3 ^ uVar12 ^ uVar15) + uVar6 + uVar5 + DAT_0001c6a0 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar2 = uVar9 ^ uVar2 ^ uVar29 ^ uVar14;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar27 = (uVar12 ^ uVar8 ^ uVar27) + uVar3 + uVar2 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar1 = uVar10 ^ uVar1 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar15 = (uVar8 ^ uVar6 ^ uVar15) + uVar12 + uVar1 + DAT_0001c6a0 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar9 = uVar24 ^ uVar30 ^ uVar9 ^ uVar5;
  uVar24 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar12 = (uVar6 ^ uVar3 ^ uVar27) + uVar8 + uVar9 + DAT_0001c6a0 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar2 = uVar2 ^ uVar10 ^ uVar25 ^ uVar22;
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = uVar2 >> 0x1f | uVar2 << 1;
  uVar6 = (uVar3 ^ uVar24 ^ uVar15) + uVar6 + uVar22 + DAT_0001c6a0 +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar1 = uVar30 ^ uVar7 ^ uVar11 ^ uVar1;
  uVar30 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar3 = (uVar24 ^ uVar8 ^ uVar12) + uVar3 + uVar1 + DAT_0001c6a0 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar9 = uVar25 ^ uVar13 ^ uVar14 ^ uVar9;
  uVar2 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_0001c6a0 + (uVar9 >> 0x1f | uVar9 << 1) + (uVar8 ^ uVar30 ^ uVar6) +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar22 = uVar4 ^ uVar7 ^ uVar29 ^ uVar22;
  uVar24 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar29 = uVar8 + DAT_0001c6a0 + (uVar22 >> 0x1f | uVar22 << 1) + (uVar30 ^ uVar2 ^ uVar3) +
           (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar1 = uVar1 ^ uVar5 ^ uVar13 ^ uVar31;
  *param_1 = uVar30 + DAT_0001c6a0 + uVar18 + (uVar1 >> 0x1f | uVar1 << 1) +
             (uVar2 ^ uVar24 ^ uVar6) + (uVar29 >> 0x1b | uVar29 * 0x20);
  param_1[1] = uVar19 + uVar29;
  param_1[2] = uVar20 + (uVar6 >> 2 | uVar6 * 0x40000000);
  param_1[3] = uVar21 + uVar24;
  param_1[4] = uVar2 + param_1[4];
  return;
}



/* ===== FUN_0001c6a4 @ 0001c6a4 size=42 ===== */

void FUN_0001c6a4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001c6d0;
  *param_1 = DAT_0001c6d0;
  param_1[1] = iVar1 + -0x77777778;
  param_1[2] = iVar1 + 0x3175b9fd;
  param_1[3] = iVar1 + -0x5712ce8b;
  param_1[4] = DAT_0001c6d4;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



/* ===== FUN_0001c6d8 @ 0001c6d8 size=110 ===== */

void FUN_0001c6d8(int param_1,void *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar1 = (uVar2 & 0x1ff) >> 3;
  *(uint *)(param_1 + 0x14) = uVar2 + param_3 * 8;
  if (CARRY4(uVar2,param_3 * 8)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_3 >> 0x1d);
  if (uVar1 + param_3 < 0x40) {
    __n = 0;
  }
  else {
    __n = 0x40 - uVar1;
    memcpy((void *)(uVar1 + 0x1c + param_1),param_2,__n);
    FUN_0001b8a4(param_1,param_1 + 0x1c);
    for (; __n + 0x3f < param_3; __n = __n + 0x40) {
      FUN_0001b8a4(param_1,(int)param_2 + __n);
    }
    uVar1 = 0;
  }
  (*(code *)PTR_memcpy_00037044)(uVar1 + 0x1c + param_1,(int)param_2 + __n,param_3 - __n,param_4);
  return;
}



/* ===== FUN_0001c744 @ 0001c744 size=164 ===== */

void FUN_0001c744(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  
  uVar1 = DAT_0001c7ec;
  uVar5 = 0;
  piVar3 = &iStack_20;
  iStack_20 = param_1;
  puStack_1c = param_2;
  uStack_18 = param_3;
  do {
    if (uVar5 < 4) {
      iVar2 = 0x14;
    }
    else {
      iVar2 = 0x10;
    }
    uVar4 = ~uVar5;
    uVar5 = uVar5 + 1;
    *(char *)piVar3 = (char)(*(uint *)((int)param_2 + iVar2 + 4) >> ((uVar4 & 3) << 3));
    piVar3 = (int *)((int)piVar3 + 1);
  } while (uVar5 != 8);
  FUN_0001c6d8(param_2,DAT_0001c7e8,1);
  while ((param_2[5] & 0x1f8) != 0x1c0) {
    FUN_0001c6d8(param_2,uVar1,1);
  }
  FUN_0001c6d8(param_2,&iStack_20,8);
  uVar5 = 0;
  do {
    *(char *)(param_1 + uVar5) =
         (char)(*(uint *)((int)param_2 + (uVar5 & 0xfffffffc)) >> ((~uVar5 & 3) << 3));
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x14);
  memset(param_2 + 7,0,0x40);
  *param_2 = 0;
  param_2[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined8 *)(param_2 + 5) = 0;
  return;
}



/* ===== FUN_0001c7f0 @ 0001c7f0 size=60 ===== */

undefined4 FUN_0001c7f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_74 [92];
  
  FUN_0001c6a4(auStack_74);
  for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
    FUN_0001c6d8(auStack_74,*(undefined4 *)(param_2 + iVar1 * 4),
                 *(undefined4 *)(param_3 + iVar1 * 4));
  }
  FUN_0001c744(param_4,auStack_74);
  return 0;
}



/* ===== FUN_0001c82c @ 0001c82c size=218 ===== */

undefined4
FUN_0001c82c(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,void *param_5,
            uint param_6)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint __n;
  uint uVar6;
  uint local_78;
  undefined4 local_74;
  uint *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar6 = 0;
  while( true ) {
    if (param_6 == 0) {
      return 0;
    }
    uVar6 = uVar6 + 1;
    sVar1 = strlen(param_1);
    local_70 = &local_78;
    local_68 = 4;
    local_78 = uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    local_74 = param_2;
    local_6c = param_3;
    iVar2 = FUN_0001b6d8(param_1,sVar1,2,&local_74,&local_6c,&local_50);
    if (iVar2 != 0) break;
    local_64 = local_50;
    uStack_60 = uStack_4c;
    uStack_5c = uStack_48;
    uStack_58 = uStack_44;
    local_54 = local_40;
    for (iVar2 = 1; iVar2 < param_4; iVar2 = iVar2 + 1) {
      iVar3 = FUN_0001b7e8(param_1,sVar1,&local_50,0x14,&local_3c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      local_50 = local_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
      uStack_44 = uStack_30;
      local_40 = local_2c;
      iVar3 = 0x14;
      pbVar4 = (byte *)&local_3c;
      pbVar5 = (byte *)&local_64;
      do {
        iVar3 = iVar3 + -1;
        *pbVar5 = *pbVar5 ^ *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar3 != 0);
    }
    __n = param_6;
    if (0x13 < param_6) {
      __n = 0x14;
    }
    param_6 = param_6 - __n;
    memcpy(param_5,&local_64,__n);
    param_5 = (void *)((int)param_5 + __n);
  }
  return 0xffffffff;
}



/* ===== FUN_0001c908 @ 0001c908 size=30 ===== */

char * FUN_0001c908(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  
  pcVar1 = param_1 + 1;
  cVar6 = *param_1;
  pcVar2 = param_1 + 2;
  pcVar3 = param_1 + 3;
  pcVar4 = param_1 + 4;
  pcVar5 = param_1 + 5;
  if (((((cVar6 == '\0' && *pcVar1 == '\0') && *pcVar2 == '\0') && *pcVar3 == '\0') &&
      *pcVar4 == '\0') && *pcVar5 == '\0') {
    param_1 = (char *)0x1;
  }
  if (((((cVar6 != '\0' || *pcVar1 != '\0') || *pcVar2 != '\0') || *pcVar3 != '\0') ||
      *pcVar4 != '\0') || *pcVar5 != '\0') {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ===== FUN_0001c926 @ 0001c926 size=62 ===== */

undefined4
FUN_0001c926(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x100) + 0x10);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = 0;
    uVar1 = (*pcVar2)(param_1 + 0x1a,*(undefined4 *)(param_1 + 0xd4),param_2,param_3,param_4,param_5
                      ,param_6,param_7,param_8,param_9);
  }
  return uVar1;
}



/* ===== FUN_0001c964 @ 0001c964 size=18 ===== */

undefined4 FUN_0001c964(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x48);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0xd4));
    return uVar1;
  }
  return 0;
}



/* ===== FUN_0001c97c @ 0001c97c size=34 ===== */

void FUN_0001c97c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0001c9a0;
  for (iVar2 = *param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_0001341c(iVar2,3,uVar1,param_1);
  }
  FUN_00013ef8();
  return;
}



/* ===== FUN_0001c9a4 @ 0001c9a4 size=172 ===== */

undefined4 FUN_0001c9a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38 [6];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = 0;
  local_3c = 0;
  uVar1 = DAT_0001ca50;
  if (*(int *)(param_2 + 0xc0) != 1) {
LAB_0001c9be:
    FUN_0001341c(param_1,3,uVar1);
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    FUN_0001341c(param_1,3,DAT_0001ca54);
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 200) == 8) {
    puVar5 = local_38;
    puVar2 = (undefined4 *)(param_2 + 0x24);
    do {
      puVar3 = puVar2 + 2;
      uVar1 = puVar2[1];
      *puVar5 = *puVar2;
      puVar5[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)(param_2 + 0x3c));
    local_20 = *(undefined4 *)(param_2 + 0x34);
    uStack_1c = *(undefined4 *)(param_2 + 0x38);
    uVar1 = 2;
    uVar4 = 0x20;
  }
  else {
    uVar1 = DAT_0001ca58;
    if (*(int *)(param_1 + 200) != 0x10) goto LAB_0001c9be;
    puVar5 = local_38;
    puVar2 = (undefined4 *)(param_2 + 0x24);
    do {
      puVar3 = puVar2 + 2;
      uVar1 = puVar2[1];
      *puVar5 = *puVar2;
      puVar5[1] = uVar1;
      puVar5 = puVar5 + 2;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)(param_2 + 0x34));
    uVar1 = 3;
    uVar4 = 0x10;
  }
  uVar1 = FUN_0001c926(param_1,uVar1,0,0,1,&local_40,6,local_38,uVar4);
  return uVar1;
}



/* ===== FUN_0001ca5c @ 0001ca5c size=80 ===== */

undefined4 FUN_0001ca5c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  piVar3 = (int *)(param_2 + 0xa4);
  do {
    if (*piVar3 != 0) {
      FUN_0001c926(param_1,1,0,iVar2,*(int *)(param_2 + 0xb4) == iVar2,0,0,
                   param_2 + 100 + iVar2 * 0x10,*piVar3);
      uVar1 = 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 4);
  return uVar1;
}



/* ===== FUN_0001caac @ 0001caac size=56 ===== */

void FUN_0001caac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(int *)(param_1 + 0x94) == 0) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x10), iVar1 != 0)) ||
     (iVar1 = *(int *)(param_1 + 0x150) << 0x1b, -1 < iVar1)) {
    FUN_00013c64(DAT_0001cae4,param_1,0,iVar1,param_1,param_2);
    FUN_00013bbe(param_2,param_3,DAT_0001cae4,param_1,0);
  }
  return;
}



/* ===== FUN_0001cae8 @ 0001cae8 size=226 ===== */

void FUN_0001cae8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  if (*(uint *)(param_1 + 0x114) < 6) {
    FUN_000135cc(*(undefined4 *)(param_1 + 0x17c));
    iVar1 = FUN_00013652(param_3,param_4);
    *(int *)(param_1 + 0x17c) = iVar1;
    if (iVar1 != 0) {
      FUN_00013744(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x188) = *param_2;
      *(undefined2 *)(param_1 + 0x18c) = *(undefined2 *)(param_2 + 1);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xcc);
    if (uVar3 != 4) {
      if (((*(int *)(param_1 + 0x124) == 0) &&
          (((-1 < *(int *)(param_1 + 0x150) << 0x1c || ((uVar3 & 0x142) == 0)) ||
           (*(uint *)(param_1 + 0x114) != 9)))) &&
         ((*(int *)(param_1 + 0xb4) == 0 || (*(int *)(*(int *)(param_1 + 0xb4) + 0xc0) != 1)))) {
        if (((uVar3 & 0xa1) == 0) && (uVar3 != 8)) {
          if (uVar3 == 0x200) {
            uVar2 = 0x46;
          }
          else {
            uVar2 = 10;
          }
        }
        else {
          uVar2 = 0x46;
        }
        FUN_0001caac(param_1,uVar2,0);
      }
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_0001341c(param_1,3,DAT_0001cbcc);
        return;
      }
      *(undefined4 *)(param_1 + 300) = *param_2;
      *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 1);
      pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x40);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined4 *)(param_1 + 0xd4));
      }
      if (-1 < *(int *)(param_1 + 0x150) << 0x1c) {
        FUN_00015066(*(undefined4 *)(param_1 + 0x108),param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_0001cbd0 @ 0001cbd0 size=94 ===== */

undefined4 FUN_0001cbd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *__ptr;
  undefined4 *puVar3;
  
  FUN_00013c64(DAT_0001cbec,param_1,0);
  puVar2 = *(undefined4 **)(param_1 + 0x138);
  __ptr = (undefined4 *)0x0;
  do {
    puVar3 = __ptr;
    __ptr = puVar2;
    if (__ptr == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    iVar1 = memcmp(__ptr + 1,(void *)(param_1 + 0xa0),6);
    puVar2 = (undefined4 *)*__ptr;
  } while (iVar1 != 0);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x138) = puVar2;
  }
  else {
    *puVar3 = puVar2;
  }
  free(__ptr);
  return 0;
}



/* ===== FUN_0001cbf0 @ 0001cbf0 size=2 ===== */

void FUN_0001cbf0(void)

{
  return;
}



/* ===== FUN_0001cbf2 @ 0001cbf2 size=168 ===== */

void FUN_0001cbf2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*(int *)(param_2 + 0x54) << 0x16 < 0) {
    uVar1 = 0x200;
  }
  else if (*(int *)(param_2 + 0x54) << 0x1c < 0) {
    uVar1 = 8;
  }
  else {
    uVar1 = 4;
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  FUN_00015f9c(*(undefined4 *)(param_1 + 0x108),0);
  FUN_00015fe2(*(undefined4 *)(param_1 + 0x108),0);
  FUN_00015f5a(*(undefined4 *)(param_1 + 0x108),0);
  *(undefined4 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  puVar2 = (uint *)(param_2 + 0xa4);
  do {
    puVar3 = puVar2 + 1;
    if (5 < *puVar2) {
      uVar1 = 4;
LAB_0001cc46:
      *(undefined4 *)(param_1 + 0xc4) = uVar1;
      *(undefined4 *)(param_1 + 200) = uVar1;
      break;
    }
    if (*puVar2 != 0) {
      uVar1 = 2;
      goto LAB_0001cc46;
    }
    puVar2 = puVar3;
  } while (puVar3 != (uint *)(param_2 + 0xb4));
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),8,0);
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),6,*(undefined4 *)(param_1 + 0xcc));
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),4,*(undefined4 *)(param_1 + 0xc4));
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),5,*(undefined4 *)(param_1 + 200),param_4);
  return;
}



/* ===== FUN_0001cc9a @ 0001cc9a size=156 ===== */

void FUN_0001cc9a(int param_1,int param_2)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    FUN_0001c926(param_1,0,0,0,0,0,0,0,0);
    FUN_0001c926(param_1,0,0,1,0,0,0,0,0);
    FUN_0001c926(param_1,0,0,2,0,0,0,0,0);
    FUN_0001c926(param_1,0,0,3,0,0,0,0,0);
    if (param_2 != 0) {
      FUN_0001c926(param_1,0,param_2,0,0,0,0,0,0);
      pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x54);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),param_2,0,1);
      }
    }
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  return;
}



/* ===== FUN_0001cd36 @ 0001cd36 size=60 ===== */

void FUN_0001cd36(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0001cc9a();
  FUN_0001e56c(param_1);
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_00015da4(*(undefined4 *)(param_1 + 0x108));
  if (*(int *)(param_1 + 0xb4) != iVar1) {
    FUN_00012836(param_1);
  }
  FUN_00013c64(DAT_0001cd74,param_1,0,param_4);
  return;
}



/* ===== FUN_0001cd78 @ 0001cd78 size=14 ===== */

undefined4 FUN_0001cd78(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001cd8c;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(DAT_0001cd88 + param_1 * 4);
  }
  return uVar1;
}



/* ===== FUN_0001cd90 @ 0001cd90 size=288 ===== */

int FUN_0001cd90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x114);
  iVar1 = param_1;
  if (param_2 != 3) {
    iVar1 = FUN_0001f694(param_1,0);
    if (param_2 == 9) {
      if (*(int *)(param_1 + 0x11c) != 0) {
        iVar1 = *(int *)(param_1 + 0xb4);
        uVar2 = DAT_0001cebc;
        if (*(int *)(param_1 + 0x120) == 0) {
          uVar2 = DAT_0001ceb0;
        }
        if (iVar1 == 0) {
          uVar6 = 0xffffffff;
          iVar3 = DAT_0001ceb8;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 8);
          iVar3 = *(int *)(iVar1 + 0xcc);
          if (*(int *)(iVar1 + 0xcc) == 0) {
            iVar3 = DAT_0001ceb8;
          }
        }
        iVar1 = FUN_0001341c(param_1,3,DAT_0001ceb4,*(undefined1 *)(param_1 + 0xa0),
                             *(undefined1 *)(param_1 + 0xa1),*(undefined1 *)(param_1 + 0xa2),
                             *(undefined1 *)(param_1 + 0xa3),*(undefined1 *)(param_1 + 0xa4),
                             *(undefined1 *)(param_1 + 0xa5),uVar2,uVar6,iVar3);
        *(undefined4 *)(param_1 + 0x11c) = 0;
        *(undefined4 *)(param_1 + 0x120) = 1;
        pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x50);
        if (pcVar4 != (code *)0x0) {
          iVar1 = (*pcVar4)(*(undefined4 *)(param_1 + 0xd4));
        }
        pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x134);
        if (pcVar4 != (code *)0x0) {
          iVar1 = (*pcVar4)(*(undefined4 *)(param_1 + 0xd4),1);
        }
        *(undefined4 *)(param_1 + 0x1b4) = 0;
      }
    }
    else if ((param_2 == 0) || (param_2 - 5U < 2)) {
      *(undefined4 *)(param_1 + 0x11c) = 1;
      pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x50);
      if (pcVar4 != (code *)0x0) {
        iVar1 = (*pcVar4)(*(undefined4 *)(param_1 + 0xd4),0);
      }
      pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x134);
      if (pcVar4 != (code *)0x0) {
        iVar1 = (*pcVar4)(*(undefined4 *)(param_1 + 0xd4),0);
      }
    }
  }
  *(int *)(param_1 + 0x114) = param_2;
  if ((iVar5 != param_2) &&
     ((iVar1 = FUN_00012834(param_1,param_2,iVar5), *(int *)(param_1 + 0x114) == 9 || (iVar5 == 9)))
     ) {
    return param_1;
  }
  return iVar1;
}



/* ===== FUN_0001cec0 @ 0001cec0 size=4 ===== */

void FUN_0001cec0(void)

{
  *(undefined4 *)(DAT_00013f00 + 0x40) = 1;
  return;
}



/* ===== FUN_0001cec4 @ 0001cec4 size=36 ===== */

void FUN_0001cec4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0x114) != iVar1) {
    FUN_00012834();
    return;
  }
  return;
}



/* ===== FUN_0001cee8 @ 0001cee8 size=18 ===== */

undefined1 FUN_0001cee8(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 0x10) {
    uVar1 = *(undefined1 *)(DAT_0001cefc + (param_1 - 1U) + 0x28);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* ===== FUN_0001cf00 @ 0001cf00 size=88 ===== */

uint FUN_0001cf00(uint param_1)

{
  bool bVar1;
  
  if (param_1 == 0x20) {
    return 5;
  }
  if ((int)param_1 < 0x21) {
    if (param_1 == 4) {
      return 2;
    }
    if ((int)param_1 < 5) {
      return (uint)(param_1 != 1);
    }
    if (param_1 == 8) {
      return 3;
    }
    bVar1 = param_1 == 0x10;
    if (bVar1) {
      param_1 = 4;
    }
  }
  else {
    if (param_1 == 0x80) {
      return 7;
    }
    if ((int)param_1 < 0x81) {
      bVar1 = param_1 == 0x40;
      if (bVar1) {
        param_1 = 6;
      }
    }
    else {
      if (param_1 == 0x100) {
        return 8;
      }
      bVar1 = param_1 == 0x200;
      if (bVar1) {
        param_1 = 9;
      }
    }
  }
  if (!bVar1) {
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_0001cf58 @ 0001cf58 size=600 ===== */

undefined4 FUN_0001cf58(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0) {
    if ((*(uint *)(param_3 + 0x58) & 2) == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = 2;
    }
    iVar1 = FUN_00016028(*(undefined4 *)(param_1 + 0x108),&local_40);
    if (iVar1 == 0) {
      uVar4 = *(uint *)(param_3 + 0x50);
      uVar6 = DAT_0001d1b8;
      uVar5 = local_38;
      if ((((local_38 & uVar4) != 0) &&
          (uVar4 = *(uint *)(param_3 + 0x4c), uVar6 = DAT_0001d1bc, uVar5 = uStack_3c,
          (uStack_3c & uVar4) != 0)) &&
         (uVar4 = *(uint *)(param_3 + 0x54), uVar6 = DAT_0001d1c0, uVar5 = local_34,
         (local_34 & uVar4) != 0)) {
        iVar1 = 0;
        iVar2 = 0;
        uVar7 = local_40;
        goto LAB_0001d01a;
      }
      FUN_0001341c(param_1,3,uVar6,uVar5,uVar4);
    }
    else if (iVar1 == -2) {
      FUN_0001341c(param_1,3,DAT_0001d1d4);
    }
    local_40 = 0;
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iVar2 = 0;
    iVar1 = 0;
    local_38 = *(uint *)(param_3 + 0x50);
    uStack_3c = *(uint *)(param_3 + 0x4c);
    local_34 = *(uint *)(param_3 + 0x54);
    local_30 = local_40;
    local_28 = local_40;
    uStack_24 = uStack_2c;
  }
  else {
    iVar1 = FUN_00012c90(param_2,DAT_0001d1b0);
    iVar2 = FUN_00012c66(param_2,0x30);
    if ((((iVar2 == 0) || (-1 < *(int *)(param_3 + 0x58) << 0x1e)) ||
        ((iVar3 = FUN_00016f78(iVar2,*(byte *)(iVar2 + 1) + 2,&local_40), iVar3 != 0 ||
         (((local_38 & *(uint *)(param_3 + 0x50)) == 0 ||
          ((uStack_3c & *(uint *)(param_3 + 0x4c)) == 0)))))) ||
       ((local_34 & *(uint *)(param_3 + 0x54)) == 0)) {
      uVar6 = DAT_0001d1b4;
      if (((((iVar1 == 0) || (uVar7 = *(uint *)(param_3 + 0x58) & 1, uVar7 == 0)) ||
           (iVar3 = FUN_00016f78(iVar1,*(byte *)(iVar1 + 1) + 2,&local_40), uVar6 = DAT_0001d1b4,
           iVar3 != 0)) ||
          (((local_38 & *(uint *)(param_3 + 0x50)) == 0 ||
           ((uStack_3c & *(uint *)(param_3 + 0x4c)) == 0)))) ||
         ((local_34 & *(uint *)(param_3 + 0x54)) == 0)) goto LAB_0001d10c;
    }
    else {
      uVar7 = 2;
    }
  }
LAB_0001d01a:
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),3,uVar7);
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),8,(*(uint *)(param_3 + 0x58) & 3) >> 1);
  if ((param_2 != 0) || (*(int *)(param_1 + 0xbc) == 0)) {
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(byte *)(iVar1 + 1) + 2;
    }
    iVar1 = FUN_00015f9c(*(undefined4 *)(param_1 + 0x108),iVar1,iVar3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(byte *)(iVar2 + 1) + 2;
    }
    iVar1 = FUN_00015fe2(*(undefined4 *)(param_1 + 0x108),iVar2,iVar1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  uVar7 = local_38 & *(uint *)(param_3 + 0x50);
  if ((int)(uVar7 << 0x1b) < 0) {
    uVar6 = 0x10;
  }
  else if ((int)(uVar7 << 0x1c) < 0) {
    uVar6 = 8;
  }
  else if ((int)(uVar7 << 0x1d) < 0) {
    uVar6 = 4;
  }
  else {
    uVar6 = DAT_0001d1c8;
    if (-1 < (int)(uVar7 << 0x1e)) goto LAB_0001d10c;
    uVar6 = 2;
  }
  *(undefined4 *)(param_1 + 200) = uVar6;
  uVar7 = uStack_3c & *(uint *)(param_3 + 0x4c);
  if ((int)(uVar7 << 0x1b) < 0) {
    uVar6 = 0x10;
  }
  else if ((int)(uVar7 << 0x1c) < 0) {
    uVar6 = 8;
  }
  else {
    uVar6 = DAT_0001d1cc;
    if (-1 < (int)(uVar7 << 0x1f)) goto LAB_0001d10c;
    uVar6 = 1;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  uVar7 = local_34 & *(uint *)(param_3 + 0x54);
  if ((int)(uVar7 << 0x1f) < 0) {
    uVar6 = 1;
  }
  else if ((int)(uVar7 << 0x1e) < 0) {
    uVar6 = 2;
  }
  else {
    uVar6 = DAT_0001d1d0;
    if (-1 < (int)(uVar7 << 0x1b)) goto LAB_0001d10c;
    uVar6 = 0x10;
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),6,*(undefined4 *)(param_1 + 0xcc));
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),4,*(undefined4 *)(param_1 + 0xc4));
  FUN_00015e26(*(undefined4 *)(param_1 + 0x108),5,*(undefined4 *)(param_1 + 200));
  iVar1 = FUN_00015f1c(*(undefined4 *)(param_1 + 0x108),param_4,param_5);
  uVar6 = DAT_0001d1c4;
  if (iVar1 == 0) {
    if ((*(uint *)(param_3 + 0x54) & 0x142) == 0) {
      FUN_00015040(*(undefined4 *)(param_1 + 0x108));
      return 0;
    }
    FUN_0001502a(*(undefined4 *)(param_1 + 0x108),param_3 + 0x24,0x20);
    return 0;
  }
LAB_0001d10c:
  FUN_0001341c(param_1,4,uVar6);
  return 0xffffffff;
}



/* ===== FUN_0001d1d8 @ 0001d1d8 size=56 ===== */

void FUN_0001d1d8(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1 + 0xa0;
  uVar3 = FUN_0001c908(iVar2);
  if ((int)uVar3 == 0) {
    if ((-1 < *(int *)(param_1 + 0x150) << 0x1d) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),iVar2,(int)((ulonglong)uVar3 >> 0x20));
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_0001cd36(param_1,iVar2);
  return;
}



/* ===== FUN_0001d280 @ 0001d280 size=56 ===== */

void FUN_0001d280(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1 + 0xa0;
  uVar3 = FUN_0001c908(iVar2);
  if ((int)uVar3 == 0) {
    if ((-1 < *(int *)(param_1 + 0x150) << 0x1d) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x24), pcVar1 != (code *)0x0)) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),iVar2,(int)((ulonglong)uVar3 >> 0x20));
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_0001cd36(param_1,iVar2);
  return;
}



/* ===== FUN_0001d2b8 @ 0001d2b8 size=246 ===== */

void FUN_0001d2b8(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_0001d280(param_1,3);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0xd4),0);
    }
    FUN_0001cc9a(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_00015d9c(*(undefined4 *)(param_1 + 0x108),0);
  FUN_00021ed8(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00021ed8();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_0001b2a0();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 0x94); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1)
    {
      FUN_00012852(param_1,piVar1);
    }
    FUN_00012682(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  free(*(void **)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00015e1e(*(undefined4 *)(param_1 + 0x108),0);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  FUN_00014f6e(*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_0001f284(param_1);
  FUN_00012c06(param_1);
  FUN_0001f684(param_1);
  FUN_0001cbd0(param_1);
  FUN_000135cc(*(undefined4 *)(param_1 + 0x17c));
  *(undefined4 *)(param_1 + 0x17c) = 0;
  free(*(void **)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_2 != 0) {
    FUN_00012832(param_1);
  }
  if ((*(int *)(param_1 + 0xd4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001d39e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== FUN_0001d3ae @ 0001d3ae size=132 ===== */

void FUN_0001d3ae(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    for (piVar2 = (int *)**(int **)(param_1 + 0x94); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
    {
      iVar1 = piVar2[0x31];
      if (iVar1 != 2) {
        if (((int *)*(int *)(param_1 + 0xb4) == piVar2) && (iVar1 != 0)) {
          *(undefined4 *)(param_1 + 0xac) = 1;
        }
        piVar2[0x31] = 0;
        if (iVar1 != 0) {
          FUN_0001283e(param_1,piVar2);
        }
      }
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_0001f630(param_1,0,0,param_4);
      return;
    }
  }
  else if ((*(uint *)(param_2 + 0xc4) & 0xfffffffd) != 0) {
    if (*(int *)(param_1 + 0xb4) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
      FUN_0001f630(param_1,0);
    }
    iVar1 = *(int *)(param_2 + 0xc4);
    *(undefined4 *)(param_2 + 0xc4) = 0;
    if (iVar1 != 0) {
      FUN_0001283e(param_1,param_2,0,param_4);
      return;
    }
  }
  return;
}



/* ===== FUN_0001d432 @ 0001d432 size=114 ===== */

void FUN_0001d432(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    for (piVar2 = (int *)**(int **)(param_1 + 0x94); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
    {
      iVar1 = piVar2[0x31];
      if ((iVar1 != 2) && (piVar2[0x31] = 1, iVar1 != 1)) {
        FUN_0001283e(param_1,piVar2);
      }
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_0001d1d8(param_1,3);
      return;
    }
  }
  else if (*(int *)(param_2 + 0xc4) != 2) {
    if (*(int *)(param_1 + 0xb4) == param_2) {
      FUN_0001d1d8(param_1,3);
    }
    iVar1 = *(int *)(param_2 + 0xc4);
    *(undefined4 *)(param_2 + 0xc4) = 1;
    if (iVar1 != 1) {
      FUN_0001283e(param_1,param_2);
      return;
    }
  }
  return;
}



/* ===== FUN_0001d4a4 @ 0001d4a4 size=110 ===== */

undefined8 FUN_0001d4a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    FUN_0001d1d8(param_1,3);
  }
  for (piVar3 = (int *)**(int **)(param_1 + 0x94); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    iVar1 = piVar3[0x31];
    if (iVar1 != 2) {
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        if (*(int *)(param_2 + 8) != piVar3[2]) {
          iVar2 = 1;
        }
      }
      piVar3[0x31] = iVar2;
      if (iVar2 != iVar1) {
        FUN_0001283e(param_1,piVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 1;
  uVar4 = FUN_0001f630(param_1,0,0);
  if (param_2 != 0) {
    return CONCAT44(param_2,param_1);
  }
  return uVar4;
}



/* ===== FUN_0001d510 @ 0001d510 size=32 ===== */

undefined4 FUN_0001d510(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 < 3) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x94) + 0x10);
    *(uint *)(*(int *)(param_1 + 0x94) + 0x10) = param_2;
    if (param_2 != uVar2) {
      FUN_00012838();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001d530 @ 0001d530 size=46 ===== */

undefined4 FUN_0001d530(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 10) {
    FUN_0001341c(param_1,5,DAT_0001d560,param_2,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0001341c(param_1,2,DAT_0001d564,param_2,param_4);
    uVar1 = 0;
    *(uint *)(*(int *)(param_1 + 0x94) + 0x100) = param_2;
  }
  return uVar1;
}



/* ===== FUN_0001d568 @ 0001d568 size=44 ===== */

undefined4 FUN_0001d568(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_0001341c(param_1,5,DAT_0001d594,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0001341c(param_1,2,DAT_0001d598,param_2,param_4);
    uVar1 = 0;
    *(int *)(*(int *)(param_1 + 0x94) + 0x104) = param_2;
  }
  return uVar1;
}



/* ===== FUN_0001d604 @ 0001d604 size=184 ===== */

int FUN_0001d604(int param_1)

{
  size_t __n;
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 auStack_30 [32];
  
  uVar2 = DAT_0001d6bc;
  if (((*(int *)(param_1 + 0x150) << 0x1d < 0) ||
      (pcVar3 = *(code **)(*(int *)(param_1 + 0x100) + 0xc), uVar2 = DAT_0001d6c0,
      pcVar3 == (code *)0x0)) ||
     (__n = (*pcVar3)(*(undefined4 *)(param_1 + 0xd4),auStack_30), uVar2 = DAT_0001d6c0,
     (int)__n < 0)) {
LAB_0001d616:
    FUN_0001341c(param_1,4,uVar2);
    piVar4 = (int *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x150) << 0x1d < 0) {
      local_38 = *(undefined4 *)(param_1 + 0xa0);
      local_34 = *(undefined2 *)(param_1 + 0xa4);
    }
    else {
      pcVar3 = *(code **)(*(int *)(param_1 + 0x100) + 8);
      uVar2 = DAT_0001d6c4;
      if ((pcVar3 == (code *)0x0) ||
         (iVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0xd4),&local_38), uVar2 = DAT_0001d6c4,
         iVar1 < 0)) goto LAB_0001d616;
    }
    if ((*(int **)(param_1 + 0x94))[4] == 0) {
      uVar5 = (*(uint *)(param_1 + 0x150) & 0x1f) >> 4;
    }
    else {
      uVar5 = 0;
    }
    piVar4 = (int *)**(int **)(param_1 + 0x94);
    while ((piVar4 != (int *)0x0 &&
           ((piVar4[0x31] != 0 ||
            ((((__n != piVar4[5] || (iVar1 = memcmp(auStack_30,(void *)piVar4[4],__n), iVar1 != 0))
              && (uVar5 == 0)) ||
             ((piVar4[8] != 0 && (iVar1 = memcmp(&local_38,piVar4 + 6,6), iVar1 != 0))))))))) {
      piVar4 = (int *)*piVar4;
    }
  }
  return (int)piVar4;
}



/* ===== FUN_0001d6c8 @ 0001d6c8 size=240 ===== */

undefined4 FUN_0001d6c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  if ((*(int *)(*(int *)(param_1 + 0x100) + 0x4c) == 0) &&
     ((*(uint *)(param_1 + 0x150) & 0x400) == 0)) {
    uVar4 = FUN_0001c964();
    iVar3 = FUN_00021df0(param_1 + 0x1a,uVar4,0x888e,DAT_0001d7bc,param_1,0);
    *(int *)(param_1 + 0xc) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_0001c964();
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = *puVar2;
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(puVar2 + 1);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar3 = FUN_00021d80(*(int *)(param_1 + 0xc),param_1 + 0x14), iVar3 != 0)) {
    FUN_0001341c(param_1,5,DAT_0001d7b8);
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x7e) != '\0') {
    iVar3 = FUN_00021df0(param_1 + 0x7e,param_1 + 0x14,0x888e,DAT_0001d7bc,param_1,0,param_3);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      FUN_0001341c(param_1,5,DAT_0001d7c0,param_1 + 0x7e);
      return 0xffffffff;
    }
  }
  FUN_0001cc9a(param_1,0);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x100) + 0x20);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(*(undefined4 *)(param_1 + 0xd4),0);
  }
  pcVar5 = *(code **)(*(int *)(param_1 + 0x100) + 0x38);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(*(undefined4 *)(param_1 + 0xd4));
  }
  *(undefined4 *)(param_1 + 0xdc) = 1;
  iVar3 = FUN_0001f61c(*(undefined4 *)(param_1 + 0x94));
  piVar1 = DAT_0001d7c4;
  if (iVar3 == 0) {
    FUN_0001cd90(param_1,2);
    return 0;
  }
  FUN_0001f630(param_1,*DAT_0001d7c4,DAT_0001d7c8);
  *piVar1 = *piVar1 + 1;
  return 0;
}



/* ===== FUN_0001d7cc @ 0001d7cc size=880 ===== */

int * FUN_0001d7cc(int *param_1,int *param_2)

{
  int *__ptr;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  code *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int *local_54;
  undefined1 auStack_44 [12];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  __ptr = (int *)FUN_000139a8(0x1d0);
  if (__ptr == (int *)0x0) {
    return (int *)0x0;
  }
  __ptr[0x4f] = 1;
  __ptr[0x52] = 5;
  __ptr[0x47] = 1;
  *__ptr = (int)param_1;
  __ptr[1] = (int)__ptr;
  pcVar13 = (char *)param_2[3];
  pcVar12 = (char *)param_2[4];
  pcVar10 = (char *)param_2[5];
  pcVar2 = (char *)param_1[0xc];
  if ((char *)param_1[0xc] == (char *)0x0) {
    pcVar2 = (char *)param_2[1];
  }
  pcVar7 = (char *)param_1[0xb];
  if ((char *)param_1[0xb] == (char *)0x0) {
    pcVar7 = (char *)param_2[2];
  }
  if (*param_2 == 0) {
    iVar1 = FUN_00012756(pcVar2,pcVar13);
    __ptr[0x25] = iVar1;
    if (iVar1 == 0) goto LAB_0001d8ce;
  }
  else {
    iVar1 = FUN_00013888();
    __ptr[0x24] = iVar1;
    if (iVar1 == 0) goto LAB_0001d8ce;
    iVar1 = FUN_00014084();
    __ptr[0x25] = iVar1;
    if (iVar1 == 0) goto LAB_0001d8ce;
    if (pcVar2 != (char *)0x0) {
      free(*(void **)(iVar1 + 0x14));
      iVar1 = __ptr[0x25];
      pcVar2 = strdup(pcVar2);
      *(char **)(iVar1 + 0x14) = pcVar2;
    }
    if (pcVar13 != (char *)0x0) {
      free(*(void **)(__ptr[0x25] + 0x2c));
      iVar1 = __ptr[0x25];
      pcVar2 = strdup(pcVar13);
      *(char **)(iVar1 + 0x2c) = pcVar2;
    }
  }
  if ((pcVar12 != (char *)0x0) && (sVar3 = strlen(pcVar12), sVar3 < 100)) {
    pcVar2 = (char *)((int)__ptr + 0x1a);
    FUN_000139b0(pcVar2,pcVar12,100);
    if (pcVar10 != (char *)0x0) {
      sVar3 = strlen(pcVar10);
      if (0xf < sVar3) goto LAB_0001d8ce;
      FUN_000139b0((int)__ptr + 0x7e,pcVar10,0x10);
    }
    while (uVar6 = DAT_0001db40, *DAT_0001db3c != 0) {
      pcVar10 = pcVar7;
      if (pcVar7 != (char *)0x0) {
        do {
          pcVar12 = strchr(pcVar10,0x2c);
          if (pcVar12 == (char *)0x0) {
            sVar3 = strlen(pcVar10);
          }
          else {
            sVar3 = (int)pcVar12 - (int)pcVar10;
          }
          iVar1 = 0;
          local_54 = DAT_0001db3c;
          while( true ) {
            puVar8 = (undefined4 *)*local_54;
            if (puVar8 == (undefined4 *)0x0) break;
            pcVar13 = (char *)*puVar8;
            sVar4 = strlen(pcVar13);
            if ((sVar4 == sVar3) && (iVar5 = strncmp(pcVar10,pcVar13,sVar3), iVar5 == 0)) {
              __ptr[0x40] = (int)puVar8;
              iVar1 = *(int *)(*(int *)(*__ptr + 0x3c) + iVar1 * 4);
              goto LAB_0001d8ea;
            }
            iVar1 = iVar1 + 1;
            local_54 = local_54 + 1;
          }
          uVar6 = DAT_0001db48;
          pcVar10 = pcVar12 + 1;
        } while (pcVar12 != (char *)0x0);
LAB_0001d960:
        FUN_0001341c(__ptr,5,uVar6,pcVar7);
        goto LAB_0001d8ce;
      }
      __ptr[0x40] = *DAT_0001db3c;
      iVar1 = **(int **)(*__ptr + 0x3c);
LAB_0001d8ea:
      __ptr[0x36] = iVar1;
      pcVar11 = *(code **)(__ptr[0x40] + 0x8c);
      if (pcVar11 == (code *)0x0) {
        pcVar11 = *(code **)(__ptr[0x40] + 0x14);
        if (pcVar11 != (code *)0x0) {
          iVar1 = (*pcVar11)(__ptr,pcVar2);
          goto LAB_0001d906;
        }
        __ptr[0x35] = 0;
      }
      else {
        iVar1 = (*pcVar11)(__ptr,pcVar2,__ptr[0x36]);
LAB_0001d906:
        __ptr[0x35] = iVar1;
        if (iVar1 != 0) {
          if ((*(code **)(__ptr[0x40] + 0x1c) != (code *)0x0) &&
             (iVar1 = (**(code **)(__ptr[0x40] + 0x1c))(iVar1,*(undefined4 *)(__ptr[0x25] + 0x2c)),
             iVar1 < 0)) {
            pcVar7 = *(char **)(__ptr[0x25] + 0x2c);
            uVar6 = DAT_0001db44;
            goto LAB_0001d960;
          }
          if (((*(code **)(__ptr[0x40] + 0x44) != (code *)0x0) &&
              (pcVar10 = (char *)(**(code **)(__ptr[0x40] + 0x44))(__ptr[0x35]),
              pcVar10 != (char *)0x0)) && (iVar1 = strcmp(pcVar10,pcVar2), iVar1 != 0)) {
            FUN_000139b0(pcVar2,pcVar10,100);
          }
          iVar1 = FUN_0001f50a(__ptr);
          if (iVar1 < 0) goto LAB_0001d8ce;
          iVar1 = 0;
          if (*(char *)((int)__ptr + 0x7e) != '\0') {
            iVar1 = (int)__ptr + 0x7e;
          }
          FUN_00015e16(__ptr[0x42],pcVar2,iVar1);
          FUN_00015d94(__ptr[0x42],*(undefined4 *)(__ptr[0x25] + 0x1c));
          if ((((*(int *)(__ptr[0x25] + 0x30) == 0) ||
               (iVar1 = FUN_00015e26(__ptr[0x42],0), uVar6 = DAT_0001db50, iVar1 == 0)) &&
              ((*(int *)(__ptr[0x25] + 0x34) == 0 ||
               (iVar1 = FUN_00015e26(__ptr[0x42],1), uVar6 = DAT_0001db54, iVar1 == 0)))) &&
             ((*(int *)(__ptr[0x25] + 0x38) == 0 ||
              (iVar1 = FUN_00015e26(__ptr[0x42],2), uVar6 = DAT_0001db58, iVar1 == 0)))) {
            if ((*(code **)(__ptr[0x40] + 0x3c) != (code *)0x0) &&
               (iVar1 = (**(code **)(__ptr[0x40] + 0x3c))(__ptr[0x35],auStack_44), iVar1 == 0)) {
              __ptr[0x54] = local_38;
              __ptr[0x55] = local_34;
              __ptr[0x56] = local_30;
              __ptr[0x57] = local_2c;
            }
            if (__ptr[0x56] == 0) {
              __ptr[0x56] = 1000;
            }
            iVar1 = FUN_0001d6c8(__ptr);
            if ((iVar1 < 0) ||
               ((((iVar1 = __ptr[0x25], *(char *)(iVar1 + 0x7c) != '\0' &&
                  (*(char *)(iVar1 + 0x7d) != '\0')) &&
                 (*(code **)(__ptr[0x40] + 0x80) != (code *)0x0)) &&
                (iVar1 = (**(code **)(__ptr[0x40] + 0x80))(__ptr[0x35],iVar1 + 0x7c), iVar1 != 0))))
            goto LAB_0001d8ce;
            FUN_00015e06(__ptr[0x42],__ptr + 5);
            iVar1 = FUN_0001f506(__ptr);
            if (iVar1 < 0) goto LAB_0001d8ce;
            FUN_00015e1e(__ptr[0x42],__ptr[0x43]);
            iVar1 = FUN_0001b084(__ptr);
            __ptr[0x44] = iVar1;
            if ((iVar1 == 0) || (iVar1 = FUN_00012bac(__ptr), iVar1 < 0)) goto LAB_0001d8ce;
            iVar1 = FUN_0001282e(__ptr);
            if (iVar1 == 0) {
              for (piVar9 = *(int **)__ptr[0x25]; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
                FUN_00012850(__ptr,piVar9);
              }
              __ptr[2] = *param_1;
              *param_1 = (int)__ptr;
              return __ptr;
            }
            uVar6 = 1;
            goto LAB_0001d8d0;
          }
          break;
        }
      }
      uVar6 = DAT_0001db4c;
      if ((pcVar7 == (char *)0x0) ||
         (pcVar7 = strchr(pcVar7,0x2c), uVar6 = DAT_0001db4c, pcVar7 == (char *)0x0)) break;
      pcVar7 = pcVar7 + 1;
    }
    FUN_0001341c(__ptr,5,uVar6);
  }
LAB_0001d8ce:
  uVar6 = 0;
LAB_0001d8d0:
  FUN_0001d2b8(__ptr,uVar6);
  free(__ptr);
  return (int *)0x0;
}



/* ===== FUN_0001db5c @ 0001db5c size=64 ===== */

undefined4 FUN_0001db5c(undefined4 *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if ((void *)*param_1 == param_2) {
    *param_1 = *(undefined4 *)((int)param_2 + 8);
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) {
        return 0xffffffff;
      }
      pvVar1 = *(void **)((int)pvVar2 + 8);
    } while (*(void **)((int)pvVar2 + 8) != param_2);
    *(undefined4 *)((int)pvVar2 + 8) = *(undefined4 *)((int)param_2 + 8);
  }
  if ((void *)param_1[0x14] == param_2) {
    param_1[0x14] = 0;
  }
  FUN_0001d2b8(param_2,1);
  free(param_2);
  return 0;
}



/* ===== FUN_0001dbbc @ 0001dbbc size=30 ===== */

int FUN_0001dbbc(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while ((iVar2 != 0 && (iVar1 = strcmp((char *)(iVar2 + 0x1a),param_2), iVar1 != 0))) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2;
}



/* ===== FUN_0001dbda @ 0001dbda size=72 ===== */

undefined4 FUN_0001dbda(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1[1] == 0) || (iVar2 = FUN_000137e0(param_1[3]), iVar2 == 0)) {
    if (param_1[2] != 0) {
      for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (*(int *)(iVar2 + 0x110) != 0) {
          FUN_0001b35c();
        }
      }
    }
    FUN_00013d2c(DAT_0001dc24,param_1);
    FUN_00013d4e(DAT_0001dc28,param_1);
    FUN_00013d58();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001dc2c @ 0001dc2c size=116 ===== */

void FUN_0001dc2c(int *param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    while (*param_1 != 0) {
      FUN_0001db5c(param_1);
    }
    if (param_1[0xd] != 0) {
      FUN_0001b4c8();
    }
    piVar2 = DAT_0001dca0;
    FUN_0001282c(param_1);
    iVar1 = 0;
    while( true ) {
      __ptr = (void *)param_1[0xf];
      if ((*piVar2 == 0) || (__ptr == (void *)0x0)) break;
      if (*(int *)((int)__ptr + iVar1) != 0) {
        (**(code **)(*piVar2 + 0x88))();
      }
      iVar1 = iVar1 + 4;
      piVar2 = piVar2 + 1;
    }
    free(__ptr);
    thunk_FUN_00018f3c();
    FUN_00013f04();
    if (param_1[3] != 0) {
      FUN_00013834();
      free((void *)param_1[3]);
    }
    free((void *)param_1[7]);
    free((void *)param_1[0xb]);
    free((void *)param_1[0xc]);
    (*(code *)PTR_free_00037148)(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001dca4 @ 0001dca4 size=238 ===== */

int FUN_0001dca4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00013410(DAT_0001dd94);
    iVar2 = FUN_000131c8();
    if ((iVar2 == 0) && (iVar2 = FUN_000139a8(0x74), iVar2 != 0)) {
      *(int *)(iVar2 + 0x5c) = iVar2 + 0x5c;
      *(int *)(iVar2 + 0x60) = iVar2 + 0x5c;
      *(int *)(iVar2 + 100) = iVar2 + 100;
      *(int *)(iVar2 + 0x68) = iVar2 + 100;
      *(undefined4 *)(iVar2 + 4) = *param_1;
      *(undefined4 *)(iVar2 + 8) = param_1[1];
      *(undefined4 *)(iVar2 + 0x20) = param_1[7];
      if ((char *)param_1[2] != (char *)0x0) {
        pcVar3 = strdup((char *)param_1[2]);
        *(char **)(iVar2 + 0xc) = pcVar3;
      }
      if ((char *)param_1[6] != (char *)0x0) {
        pcVar3 = strdup((char *)param_1[6]);
        *(char **)(iVar2 + 0x1c) = pcVar3;
      }
      if ((char *)param_1[10] != (char *)0x0) {
        pcVar3 = strdup((char *)param_1[10]);
        *(char **)(iVar2 + 0x2c) = pcVar3;
      }
      if ((char *)param_1[0xb] != (char *)0x0) {
        pcVar3 = strdup((char *)param_1[0xb]);
        *(char **)(iVar2 + 0x30) = pcVar3;
      }
      puVar1 = DAT_0001dd98;
      uVar6 = param_1[3];
      *(undefined4 *)(iVar2 + 0x10) = uVar6;
      *puVar1 = uVar6;
      puVar1 = DAT_0001dd9c;
      uVar6 = param_1[4];
      *(undefined4 *)(iVar2 + 0x14) = uVar6;
      *puVar1 = uVar6;
      puVar1 = DAT_0001dda0;
      uVar6 = param_1[5];
      *(undefined4 *)(iVar2 + 0x18) = uVar6;
      *puVar1 = uVar6;
      iVar4 = FUN_00013ac8();
      if (iVar4 == 0) {
        FUN_00019134();
        iVar4 = FUN_0001b3fc(iVar2);
        *(int *)(iVar2 + 0x34) = iVar4;
        if ((iVar4 != 0) &&
           (iVar4 = FUN_00012828(iVar2), piVar9 = DAT_0001dda4, piVar7 = DAT_0001dda4, iVar4 == 0))
        {
          while( true ) {
            iVar4 = *(int *)(iVar2 + 0x40);
            if (*piVar7 == 0) break;
            *(int *)(iVar2 + 0x40) = iVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          if (iVar4 != 0) {
            iVar5 = FUN_000139a8(iVar4 << 2);
            *(int *)(iVar2 + 0x3c) = iVar5;
            iVar4 = 0;
            if (iVar5 != 0) {
              do {
                if (*piVar9 == 0) {
                  return iVar2;
                }
                pcVar8 = *(code **)(*piVar9 + 0x84);
                if (pcVar8 != (code *)0x0) {
                  iVar5 = *(int *)(iVar2 + 0x3c);
                  uVar6 = (*pcVar8)();
                  *(undefined4 *)(iVar5 + iVar4) = uVar6;
                  if (*(int *)(*(int *)(iVar2 + 0x3c) + iVar4) == 0) break;
                }
                iVar4 = iVar4 + 4;
                piVar9 = piVar9 + 1;
              } while( true );
            }
          }
        }
      }
      FUN_0001dc2c(iVar2);
    }
  }
  return 0;
}



/* ===== FUN_0001dda8 @ 0001dda8 size=74 ===== */

void FUN_0001dda8(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int3 local_c;
  undefined1 uStack_9;
  
  iVar2 = *(int *)(param_1 + 0x94);
  if (*(int *)(iVar2 + 0x110) << 0x1a < 0) {
    cVar1 = *(char *)(iVar2 + 0x7c);
    if ((cVar1 != '\0') && (*(byte *)(iVar2 + 0x7d) != 0)) {
      uStack_9 = (undefined1)((uint)param_2 >> 0x18);
      local_c = (uint3)*(byte *)(iVar2 + 0x7d) << 8;
      _local_c = CONCAT31(stack0xfffffff5,cVar1);
      pcVar3 = *(code **)(*(int *)(param_1 + 0x100) + 0x80);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(param_1 + 0xd4),&local_c,cVar1,pcVar3,param_1);
      }
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x110) = 0;
  return;
}



/* ===== FUN_0001ddf2 @ 0001ddf2 size=232 ===== */

undefined4 FUN_0001ddf2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  char *__s1;
  int iVar3;
  undefined4 uVar4;
  char *__s2;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar6;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_00014084();
  if (iVar2 == 0) {
    FUN_0001341c(param_1,5,DAT_0001dedc,*(undefined4 *)(param_1 + 0x90));
    return 0xffffffff;
  }
  *(undefined4 *)(iVar2 + 0x110) = 0xffffffff;
  __s1 = *(char **)(iVar2 + 0x14);
  __s2 = *(char **)(*(int *)(param_1 + 0x94) + 0x14);
  if ((__s1 != (char *)0x0) == (__s2 != (char *)0x0)) {
    if (__s1 == (char *)0x0) {
      bVar1 = false;
      goto LAB_0001de5c;
    }
    if (__s2 == (char *)0x0) {
      bVar1 = false;
      goto LAB_0001de5c;
    }
    iVar3 = strcmp(__s1,__s2);
    bVar1 = false;
    if (iVar3 == 0) goto LAB_0001de5c;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_0001b2a0();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  bVar1 = true;
LAB_0001de5c:
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar4 = 0;
  if (iVar3 != 0) {
    FUN_00012836(param_1);
    uVar5 = extraout_r2;
    uVar4 = extraout_r3;
  }
  FUN_00015da4(*(undefined4 *)(param_1 + 0x108),0,uVar5,uVar4,param_4);
  FUN_00015d94(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x1c));
  iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0x10);
  FUN_00012682();
  iVar3 = *(int *)(iVar2 + 0x10);
  *(int *)(param_1 + 0x94) = iVar2;
  if (iVar3 != iVar6) {
    FUN_00012838(param_1);
  }
  if (bVar1) {
    uVar4 = FUN_0001b084(param_1);
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  FUN_0001dda8(param_1);
  FUN_0001cec4(param_1);
  iVar2 = FUN_0001f61c(*(undefined4 *)(param_1 + 0x94));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 1;
    FUN_0001f630(param_1,0);
    return 0;
  }
  return 0;
}



/* ===== FUN_0001dee0 @ 0001dee0 size=26 ===== */

void FUN_0001dee0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = *param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = FUN_0001ddf2(iVar2);
    if (iVar1 < 0) {
      FUN_00013ef8();
    }
  }
  return;
}



/* ===== FUN_0001defa @ 0001defa size=48 ===== */

void FUN_0001defa(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  for (iVar1 = param_1; iVar1 != param_2 * 0x28 + param_1; iVar1 = iVar1 + 0x28) {
    free(*(void **)(iVar1 + 8));
    free(*(void **)(iVar1 + 0x10));
  }
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_0001df2a @ 0001df2a size=216 ===== */

void FUN_0001df2a(int param_1,undefined4 param_2)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  int extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_0001f204();
  if (((iVar1 == 1) && (*(int *)(param_1 + 0xb8) != 0)) &&
     (__ptr = (void *)FUN_000139a8(0x2c), __ptr != (void *)0x0)) {
    puVar6 = *(undefined4 **)(param_1 + 0xb8);
    iVar4 = 0;
    for (puVar3 = *(undefined4 **)(param_1 + 0xe4); puVar3 != (undefined4 *)(param_1 + 0xe4);
        puVar3 = (undefined4 *)*puVar3) {
      if (((puVar6 != puVar3) && (puVar3[0x12] == puVar6[0x12])) &&
         ((iVar2 = memcmp((void *)((int)puVar3 + 0x26),(void *)((int)puVar6 + 0x26),puVar3[0x12]),
          iVar2 == 0 && (iVar2 = FUN_0001f1e4(param_1,puVar3 + 8), iVar2 == 0)))) {
        for (iVar2 = 0; iVar2 != iVar4; iVar2 = iVar2 + 1) {
          if (puVar3[0x13] == *(int *)((int)__ptr + iVar2 * 4)) goto LAB_0001dfd8;
        }
        *(undefined4 *)((int)__ptr + iVar4 * 4) = puVar3[0x13];
        iVar4 = iVar4 + 1;
LAB_0001dfd8:
        if (iVar4 == 10) goto LAB_0001dfec;
      }
    }
    if (iVar4 == 0) {
      free(__ptr);
    }
    else {
LAB_0001dfec:
      FUN_0001f204(param_1,param_2);
      free(*(void **)(param_1 + 0x144));
      *(void **)(param_1 + 0x144) = __ptr;
    }
  }
  if (iVar1 - 1U < 3) {
    uVar5 = (uint)*(short *)(DAT_0001e004 + (iVar1 - 1U) * 2 + 0x38);
  }
  else {
    uVar5 = 5000;
  }
  FUN_00022120(uVar5,1000);
  FUN_0001f630(param_1,(uint)((ulonglong)uVar5 * (ulonglong)DAT_0001e008 >> 0x26),extraout_r1 * 1000
              );
  return;
}



/* ===== FUN_0001e00c @ 0001e00c size=932 ===== */

void FUN_0001e00c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  code *pcVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 local_18c;
  undefined1 auStack_188 [12];
  int local_17c;
  int local_16c;
  int local_168;
  undefined4 local_164;
  int local_160;
  undefined1 *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  int iStack_148;
  int aiStack_140 [4];
  int aiStack_130 [4];
  undefined4 local_120;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_f4;
  undefined1 auStack_f0 [204];
  int *piVar15;
  
  if (*(int *)(param_3 + 0xc0) - 2U < 3) {
    uVar12 = 5;
    uVar9 = DAT_0001e32c;
    goto LAB_0001e026;
  }
  if ((*(int *)(param_1 + 0x150) << 0x1a < 0) && (*(int *)(param_3 + 0xc0) == 0)) {
    return;
  }
  memset(&local_16c,0,0x7c);
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    uVar9 = FUN_000133c8(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14));
    FUN_0001341c(param_1,3,DAT_0001e33c,uVar9);
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x20);
    uVar2 = *(undefined1 *)(param_2 + 0x25);
    uVar3 = *(undefined1 *)(param_2 + 0x24);
    uVar4 = *(undefined1 *)(param_2 + 0x21);
    uVar5 = *(undefined1 *)(param_2 + 0x22);
    uVar6 = *(undefined1 *)(param_2 + 0x23);
    uVar9 = FUN_000133c8(param_2 + 0x26,*(undefined4 *)(param_2 + 0x48));
    FUN_0001341c(param_1,3,DAT_0001e330,uVar1,uVar4,uVar5,uVar6,uVar3,uVar2,uVar9,
                 *(undefined4 *)(param_2 + 0x4c));
    iVar10 = FUN_0001c908(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_2 + 0x24);
    if (iVar10 == 0) {
      FUN_0001283a(param_1);
    }
  }
  FUN_0001f684(param_1);
  FUN_00015f5a(*(undefined4 *)(param_1 + 0x108),0);
  iVar10 = *(int *)(param_3 + 0x5c);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  if ((param_2 == 0) ||
     (((iVar11 = FUN_00012c90(param_2,DAT_0001e334), iVar11 == 0 &&
       (iVar11 = FUN_00012c66(param_2,0x30), iVar11 == 0)) ||
      ((*(uint *)(param_3 + 0x54) & 0x1e3) == 0)))) {
    if ((*(uint *)(param_3 + 0x54) & 499) == 0) {
      FUN_0001cbf2(param_1,param_3);
      local_18c = 0;
    }
    else {
      local_18c = 200;
      iVar11 = FUN_0001cf58(param_1,0,param_3,auStack_f0,&local_18c);
      uVar9 = DAT_0001e340;
      if (iVar11 != 0) goto LAB_0001e30a;
    }
    if (param_2 != 0) goto LAB_0001e122;
    iVar11 = 0;
  }
  else {
    local_18c = 200;
    iVar11 = FUN_0001cf58(param_1,param_2,param_3,auStack_f0,&local_18c);
    uVar9 = DAT_0001e344;
    if (iVar11 != 0) {
LAB_0001e30a:
      uVar12 = 4;
LAB_0001e026:
      FUN_0001341c(param_1,uVar12,uVar9);
      return;
    }
LAB_0001e122:
    iVar11 = param_2 + 0x20;
  }
  FUN_0001cc9a(param_1,iVar11);
  uVar9 = FUN_0001cee8(*(undefined4 *)(param_1 + 0xc4));
  uVar12 = FUN_0001cee8(*(undefined4 *)(param_1 + 200));
  if (*(int *)(param_1 + 0xcc) == 4) {
    uVar18 = 0;
LAB_0001e154:
    iVar11 = FUN_0001ca5c(param_1,param_3);
    bVar7 = false;
    if (iVar11 != 0) {
      uVar18 = 1;
      bVar7 = true;
    }
  }
  else {
    if (*(int *)(param_1 + 0xcc) == 8) {
      uVar18 = 1;
      goto LAB_0001e154;
    }
    bVar7 = false;
    uVar18 = 1;
  }
  if (*(int *)(param_1 + 0xcc) == 0x200) {
    uVar18 = 0;
  }
  else if (*(int *)(param_1 + 0xcc) == 0x10) {
    FUN_0001c9a4(param_1,param_3);
  }
  FUN_0001cd90(param_1,5);
  if (param_2 == 0) {
    local_168 = *(int *)(param_3 + 0x10);
    local_164 = *(undefined4 *)(param_3 + 0x14);
  }
  else {
    local_16c = param_2 + 0x20;
    local_168 = param_2 + 0x26;
    local_164 = *(undefined4 *)(param_2 + 0x48);
    local_160 = *(int *)(param_2 + 0x4c);
  }
  if (((*(int *)(param_3 + 0xc0) == 1) && (0 < *(int *)(param_3 + 0xd0))) && (local_160 == 0)) {
    local_160 = *(int *)(param_3 + 0xd0);
  }
  local_15c = auStack_f0;
  local_158 = local_18c;
  local_154 = uVar9;
  local_150 = uVar12;
  local_14c = FUN_0001cf00(*(undefined4 *)(param_1 + 0xcc));
  iVar11 = param_3 + 100;
  piVar13 = aiStack_130;
  piVar14 = (int *)(param_3 + 0xa4);
  do {
    piVar15 = piVar14 + 1;
    iVar17 = *piVar14;
    if (iVar17 != 0) {
      piVar13[-4] = iVar11;
    }
    *piVar13 = iVar17;
    iVar11 = iVar11 + 0x10;
    piVar13 = piVar13 + 1;
    piVar14 = piVar15;
  } while (piVar15 != (int *)(param_3 + 0xb4));
  local_120 = *(undefined4 *)(param_3 + 0xb4);
  if ((((int)(*(uint *)(param_1 + 0x150) << 0x1c) < 0) && ((local_14c == 1 || (local_14c == 6)))) &&
     (local_10c = *(undefined4 *)(param_3 + 0x48), *(int *)(param_3 + 0x44) != 0)) {
    local_108 = param_3 + 0x24;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x194) == 0) {
    local_f4 = 0xffffffff;
  }
  else {
    local_f4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x198);
  }
  iStack_148 = iVar10;
  local_104 = uVar18;
  if (((*(uint *)(param_1 + 0x150) & 4) == 0) &&
     (pcVar16 = *(code **)(*(int *)(param_1 + 0x100) + 0x2c), pcVar16 != (code *)0x0)) {
    iVar10 = (*pcVar16)(*(undefined4 *)(param_1 + 0xd4),&local_16c);
    bVar8 = false;
    if (-1 < iVar10) goto LAB_0001e250;
  }
  FUN_0001341c(param_1,3,DAT_0001e338);
  if (*(int *)(param_1 + 0x150) << 0x11 < 0) {
    FUN_0001df2a(param_1,param_1 + 0xa6);
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
    return;
  }
  bVar8 = true;
LAB_0001e250:
  if (*(int *)(param_1 + 0xcc) == 0x10) {
    FUN_0001c9a4(param_1,param_3);
    FUN_0001cbd0(param_1);
    FUN_0001cd90(param_1,9);
  }
  else {
    if (bVar8) {
      if (*(int *)(param_3 + 0xc0) == 1) {
        uVar9 = 10;
      }
      else {
        uVar9 = 5;
      }
    }
    else if (*(int *)(*(int *)(param_1 + 0x94) + 0x10) == 1) {
      if (*(int *)(param_3 + 0xc0) == 1) {
        uVar9 = 0x14;
      }
      else {
        uVar9 = 10;
      }
    }
    else {
      uVar9 = 0x3c;
    }
    FUN_0001caac(param_1,uVar9,0);
  }
  if ((((bVar7) && (pcVar16 = *(code **)(*(int *)(param_1 + 0x100) + 0x3c), pcVar16 != (code *)0x0))
      && (iVar10 = (*pcVar16)(*(undefined4 *)(param_1 + 0xd4),auStack_188), iVar10 == 0)) &&
     (local_17c << 0x1e < 0)) {
    FUN_0001ca5c(param_1,param_3);
  }
  iVar10 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb4) = param_3;
  *(int *)(param_1 + 0xb8) = param_2;
  FUN_0001f5b4(param_1,param_3);
  if (iVar10 != *(int *)(param_1 + 0xb4)) {
    FUN_00012836(param_1);
  }
  return;
}



/* ===== FUN_0001e3cc @ 0001e3cc size=308 ===== */

undefined4 FUN_0001e3cc(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined1 auStack_48 [36];
  
  pvVar1 = DAT_0001e500;
  pcVar4 = *(char **)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
LAB_0001e3de:
  if ((pcVar4 == (char *)0x0) || (iVar6 < 2)) goto LAB_0001e3ee;
  uVar3 = (uint)(byte)pcVar4[1];
  iVar8 = uVar3 + 2;
  if (iVar6 < iVar8) goto LAB_0001e3ee;
  if (*pcVar4 != -0x23) {
    if ((*pcVar4 == '0') && (1 < uVar3)) goto LAB_0001e44e;
LAB_0001e472:
    iVar6 = iVar6 - iVar8;
    pcVar4 = pcVar4 + iVar8;
    goto LAB_0001e3de;
  }
  if ((uVar3 < 6) || (iVar2 = memcmp(pcVar4 + 2,pvVar1,6), iVar2 != 0)) goto LAB_0001e472;
LAB_0001e44e:
  iVar6 = FUN_00015f5a(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
  if (iVar6 == 0) {
    FUN_00016028(*(undefined4 *)(param_1 + 0x108),auStack_48);
    goto LAB_0001e3f4;
  }
LAB_0001e3ee:
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00015f5a(*(undefined4 *)(param_1 + 0x108),0);
  }
LAB_0001e3f4:
  pvVar1 = DAT_0001e500;
  pcVar4 = *(char **)(param_2 + 0x14);
  bVar5 = false;
  bVar7 = false;
  for (iVar6 = *(int *)(param_2 + 0x18); (pcVar4 != (char *)0x0 && (1 < iVar6));
      iVar6 = iVar6 - iVar8) {
    iVar8 = (byte)pcVar4[1] + 2;
    if (iVar6 < iVar8) break;
    if ((((!bVar7) && (*pcVar4 == -0x23)) && (5 < (byte)pcVar4[1])) &&
       (iVar2 = memcmp(pcVar4 + 2,pvVar1,6), iVar2 == 0)) {
      bVar7 = true;
      FUN_00015f9c(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
    }
    if (((!bVar5) && (*pcVar4 == '0')) && (1 < (byte)pcVar4[1])) {
      bVar5 = true;
      FUN_00015fe2(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
    }
    pcVar4 = pcVar4 + iVar8;
  }
  if (bVar7) {
LAB_0001e420:
    if (!bVar5) {
      bVar5 = bVar7;
      if (*(int *)(param_2 + 0x14) != 0) {
        FUN_00015fe2(*(undefined4 *)(param_1 + 0x108),0,0);
      }
      goto joined_r0x0001e4f6;
    }
  }
  else {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_00015f9c(*(undefined4 *)(param_1 + 0x108),0,0);
      goto LAB_0001e420;
    }
joined_r0x0001e4f6:
    if (!bVar5) goto LAB_0001e42a;
  }
  *(undefined4 *)(param_1 + 0xbc) = 1;
LAB_0001e42a:
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}



/* ===== FUN_0001e504 @ 0001e504 size=42 ===== */

void FUN_0001e504(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0001f61c(*(undefined4 *)(param_1 + 0x94));
  if (iVar1 == 0) {
    FUN_0001cd90(param_1,2);
    return;
  }
  FUN_0001f630(param_1,param_2,0,param_4);
  return;
}



/* ===== FUN_0001e56c @ 0001e56c size=94 ===== */

void FUN_0001e56c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x114) != 1) {
    FUN_0001cd90(param_1,0,param_3,*(int *)(param_1 + 0x114),param_4);
    cVar1 = *(char *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
    cVar2 = *(char *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (((((cVar1 != '\0' || *(char *)(param_1 + 0xa1) != '\0') || *(char *)(param_1 + 0xa2) != '\0'
          ) || *(char *)(param_1 + 0xa3) != '\0') || cVar2 != '\0') ||
        *(char *)(param_1 + 0xa5) != '\0') {
      FUN_0001283a(param_1);
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}



/* ===== FUN_0001e5ce @ 0001e5ce size=272 ===== */

void FUN_0001e5ce(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  
  iVar21 = *(int *)(param_1 + 0xac);
  if (iVar21 == 0) {
    iVar19 = memcmp((void *)(param_2 + 0x20),(void *)(param_1 + 0xa0),6);
    if ((iVar19 == 0) ||
       ((*(int *)(param_1 + 0x114) - 4U < 2 &&
        (iVar19 = memcmp((void *)(param_2 + 0x20),(void *)(param_1 + 0xa6),6), iVar19 == 0)))) {
      return;
    }
  }
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0xaa);
  uVar3 = *(undefined1 *)(param_1 + 0xab);
  uVar4 = *(undefined1 *)(param_2 + 0x21);
  uVar5 = *(undefined1 *)(param_2 + 0x22);
  uVar6 = *(undefined1 *)(param_1 + 0xa1);
  uVar7 = *(undefined1 *)(param_1 + 0xa3);
  uVar8 = *(undefined1 *)(param_2 + 0x23);
  uVar9 = *(undefined1 *)(param_1 + 0xa4);
  uVar10 = *(undefined1 *)(param_1 + 0xa8);
  uVar11 = *(undefined1 *)(param_2 + 0x24);
  uVar12 = *(undefined1 *)(param_2 + 0x25);
  uVar13 = *(undefined1 *)(param_1 + 0xa0);
  uVar14 = *(undefined1 *)(param_1 + 0xa2);
  uVar15 = *(undefined1 *)(param_1 + 0xa5);
  uVar16 = *(undefined1 *)(param_1 + 0xa6);
  uVar17 = *(undefined1 *)(param_1 + 0xa7);
  uVar18 = *(undefined1 *)(param_1 + 0xa9);
  uVar20 = FUN_0001cd78(*(undefined4 *)(param_1 + 0x114));
  FUN_0001341c(param_1,2,DAT_0001e6e0,iVar21,uVar1,uVar4,uVar5,uVar8,uVar11,uVar12,uVar13,uVar6,
               uVar14,uVar7,uVar9,uVar15,uVar16,uVar17,uVar10,uVar18,uVar2,uVar3,uVar20);
  FUN_0001e00c(param_1,param_2,param_3);
  return;
}



/* ===== FUN_0001e6e4 @ 0001e6e4 size=1118 ===== */

undefined4 FUN_0001e6e4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  undefined1 uVar8;
  void *__s1;
  int *piVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  size_t __n;
  char cVar16;
  void *local_50;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  FUN_0001f694(param_1,0);
  piVar2 = (int *)FUN_0001fc80(param_1,param_2,1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(*(int *)(param_1 + 0x94) + 0x10) != 2) {
      FUN_0001e504(param_1,1);
    }
    return 0xffffffff;
  }
  uVar13 = piVar2[1];
  uVar12 = 0;
  if (9 < uVar13) {
    uVar13 = 10;
  }
  for (; uVar12 != uVar13; uVar12 = uVar12 + 1) {
    iVar10 = *(int *)(*piVar2 + uVar12 * 4);
    local_48 = CONCAT13((char)*(undefined4 *)(iVar10 + 0x1c),
                        CONCAT12((char)*(undefined4 *)(iVar10 + 0x18),
                                 CONCAT11((char)*(undefined4 *)(iVar10 + 0x14),
                                          *(undefined1 *)(iVar10 + 9))));
    local_44 = CONCAT31(local_44._1_3_,(char)*(undefined4 *)(iVar10 + 0x20));
    FUN_00018f94(&local_48,5);
  }
  pcVar14 = *(code **)(param_1 + 0xe0);
  if (pcVar14 != (code *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    (*pcVar14)(param_1,piVar2);
    FUN_0001fcec(piVar2);
    return 0;
  }
  FUN_00013494(param_1,3,DAT_0001e9d8);
  FUN_00012846(param_1);
  FUN_00012844(param_1,1);
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x10) != 2) {
    if (*(int *)(param_1 + 0xb0) == 0) {
      do {
        for (iVar10 = 0; iVar10 < *(int *)(*(int *)(param_1 + 0x94) + 8); iVar10 = iVar10 + 1) {
          iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x94) + 4) + iVar10 * 4);
          for (uVar12 = 0; uVar12 < (uint)piVar2[1]; uVar12 = uVar12 + 1) {
            iVar15 = *(int *)(*piVar2 + uVar12 * 4);
            iVar3 = FUN_0001fa5c(iVar15,0);
            if (iVar3 == 0) {
              local_50 = DAT_0001e9e0;
              __n = 0;
            }
            else {
              __n = (size_t)*(byte *)(iVar3 + 1);
              local_50 = (void *)(iVar3 + 2);
            }
            iVar3 = FUN_0001fb5c(iVar15,DAT_0001e9dc);
            if (iVar3 == 0) {
              cVar16 = '\0';
            }
            else {
              cVar16 = *(char *)(iVar3 + 1);
            }
            iVar3 = FUN_0001fa5c(iVar15,0x30);
            if (iVar3 == 0) {
              cVar11 = '\0';
            }
            else {
              cVar11 = *(char *)(iVar3 + 1);
            }
            __s1 = (void *)(iVar15 + 4);
            iVar3 = FUN_0001f1e4(param_1,__s1);
            if (((iVar3 == 0) ||
                (iVar4 = FUN_0001f61c(*(undefined4 *)(param_1 + 0x94)),
                *(int *)(iVar3 + 0xc) <= (int)(uint)(iVar4 != 1))) && (iVar3 = iVar7, __n != 0)) {
              for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
                if (cVar16 == '\0' && cVar11 == '\0') {
                  bVar1 = false;
                  if (*(int *)(iVar3 + 0x14) != 0) {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
                if (((*(int *)(iVar3 + 0xc4) == 0) &&
                    ((!bVar1 ||
                     ((__n == *(size_t *)(iVar3 + 0x14) &&
                      (iVar4 = memcmp(local_50,*(void **)(iVar3 + 0x10),__n), iVar4 == 0)))))) &&
                   ((*(int *)(iVar3 + 0x20) == 0 ||
                    (iVar4 = memcmp(__s1,(void *)(iVar3 + 0x18),6), iVar4 == 0)))) {
                  uVar13 = *(uint *)(iVar3 + 0x54);
                  if ((uVar13 & 0x1e3) == 0) {
                    if (((int)(uVar13 << 0x1d) < 0) &&
                       (*(int *)(iVar3 + *(int *)(iVar3 + 0xb4) * 4 + 0xa4) != 0)) {
                      uVar13 = 1;
                    }
                    else {
                      uVar13 = (uVar13 & 0xf) >> 3;
                    }
                  }
                  else {
                    uVar13 = 0;
                  }
                  iVar4 = FUN_0001fa5c(iVar15,0x30);
                  if ((((((*(int *)(iVar3 + 0x58) << 0x1e < 0) && (iVar4 != 0)) &&
                        (iVar4 = FUN_00016f78(iVar4,*(byte *)(iVar4 + 1) + 2,&local_48), iVar4 == 0)
                        ) && (((uVar13 != 0 && ((local_40 & 6) != 0)) ||
                              ((((local_48 & *(uint *)(iVar3 + 0x58)) != 0 &&
                                (((local_44 & *(uint *)(iVar3 + 0x4c)) != 0 &&
                                 ((local_40 & *(uint *)(iVar3 + 0x50)) != 0)))) &&
                               ((local_3c & *(uint *)(iVar3 + 0x54)) != 0)))))) ||
                      ((((iVar4 = FUN_0001fb5c(iVar15,DAT_0001e9dc),
                         *(int *)(iVar3 + 0x58) << 0x1f < 0 && (iVar4 != 0)) &&
                        (iVar4 = FUN_00016f78(iVar4,*(byte *)(iVar4 + 1) + 2,&local_48), iVar4 == 0)
                        ) && (((uVar13 != 0 && ((local_40 & 6) != 0)) ||
                              ((((local_48 & *(uint *)(iVar3 + 0x58)) != 0 &&
                                (((local_44 & *(uint *)(iVar3 + 0x4c)) != 0 &&
                                 ((local_40 & *(uint *)(iVar3 + 0x50)) != 0)))) &&
                               ((local_3c & *(uint *)(iVar3 + 0x54)) != 0)))))))) ||
                     ((*(uint *)(iVar3 + 0x54) & 0x1e3) == 0)) {
                    if (cVar16 == '\0' && cVar11 == '\0') {
                      if ((*(uint *)(iVar3 + 0x54) & 0x20c) != 0) {
                        if (*(int *)(iVar3 + 0xbc) == 0) {
                          piVar9 = (int *)(iVar3 + 0xa4);
                          do {
                            piVar5 = piVar9 + 1;
                            if (*piVar9 != 0) {
                              bVar1 = true;
                              break;
                            }
                            bVar1 = false;
                            piVar9 = piVar5;
                          } while ((int *)(iVar3 + 0xb4) != piVar5);
                          if (-1 < (int)((uint)*(ushort *)(iVar15 + 0x12) << 0x1b)) {
                            bVar1 = (bool)(bVar1 ^ 1);
                          }
                          if (!bVar1) goto LAB_0001e8d8;
                        }
                        if (-1 < (int)((uint)*(ushort *)(iVar15 + 0x12) << 0x1e)) goto LAB_0001e966;
                      }
                    }
                    else {
LAB_0001e966:
                      if (*(int *)(iVar3 + 0xe0) == 0) {
LAB_0001e97c:
                        iVar7 = FUN_0001fa5c(iVar15,0);
                        if (iVar7 == 0) {
                          uVar8 = 0;
                          pvVar6 = DAT_0001e9e0;
                        }
                        else {
                          uVar8 = *(undefined1 *)(iVar7 + 1);
                          pvVar6 = (void *)(iVar7 + 2);
                        }
                        iVar7 = FUN_00012a34(param_1,__s1,pvVar6,uVar8);
                        if (iVar7 == 0) goto LAB_0001e9f8;
                        if ((((*(int *)(param_1 + 0xac) != 0) || (*(uint *)(param_1 + 0x114) < 6))
                            || (*(int *)(param_1 + 0xb4) == 0)) ||
                           (iVar3 != *(int *)(param_1 + 0xb4))) goto LAB_0001eb36;
                        uVar12 = 0;
                        goto LAB_0001ea44;
                      }
                      piVar9 = (int *)(*(int *)(iVar3 + 0xe0) + -4);
                      while( true ) {
                        piVar9 = piVar9 + 1;
                        if (*piVar9 == 0) break;
                        if (*(int *)(iVar15 + 0xc) == *piVar9) goto LAB_0001e97c;
                      }
                    }
                  }
                }
LAB_0001e8d8:
              }
            }
          }
LAB_0001e9f8:
        }
        if (*(int *)(param_1 + 0x138) == 0) {
          FUN_0001fcec(piVar2);
          iVar10 = 0;
          do {
            if (*(int *)(*(int *)(param_1 + 0x94) + 8) <= iVar10) {
              FUN_0001e504(param_1,*(undefined4 *)(param_1 + 0x148));
              return 0;
            }
            for (iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x94) + 4) + iVar10 * 4); iVar7 != 0;
                iVar7 = *(int *)(iVar7 + 4)) {
              if ((*(int *)(iVar7 + 0xc4) == 0) && (*(int *)(iVar7 + 0xc0) - 1U < 2)) {
                FUN_0001e00c(param_1,0);
                return 0;
              }
            }
            iVar10 = iVar10 + 1;
          } while( true );
        }
        FUN_0001f284(param_1);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      } while( true );
    }
    FUN_0001cd90(param_1,0);
  }
  FUN_0001fcec(piVar2);
  return 0;
LAB_0001ea44:
  if ((uint)piVar2[1] <= uVar12) {
LAB_0001eb36:
    bVar1 = true;
LAB_0001eb38:
    FUN_0001fcec(piVar2);
    if (bVar1) {
      FUN_0001e5ce(param_1,iVar7,iVar3);
      return 0;
    }
    return 0;
  }
  iVar15 = *(int *)(*piVar2 + uVar12 * 4);
  iVar10 = memcmp((void *)(iVar15 + 4),(void *)(param_1 + 0xa0),6);
  if ((iVar10 == 0) && (iVar10 = FUN_0001fa5c(iVar15,0), iVar10 != 0)) {
    iVar4 = *(int *)(param_1 + 0xb4);
    if (((uint)*(byte *)(iVar10 + 1) == *(uint *)(iVar4 + 0x14)) &&
       (iVar10 = memcmp((void *)(iVar10 + 2),*(void **)(iVar4 + 0x10),(uint)*(byte *)(iVar10 + 1)),
       iVar10 == 0)) {
      if ((iVar15 != 0) &&
         ((*(int *)(iVar4 + 0x20) == 0 ||
          (iVar10 = memcmp((void *)(iVar7 + 0x20),(void *)(iVar4 + 0x18),6), iVar10 != 0)))) {
        iVar10 = *(int *)(iVar15 + 0x1c);
        if (iVar10 < 0) {
          if (iVar10 < -0x55) {
            iVar15 = 1;
          }
          else {
            if (iVar10 < -0x50) goto LAB_0001eae6;
            if (iVar10 < -0x4b) {
              iVar15 = 3;
            }
            else if (iVar10 < -0x46) {
              iVar15 = 4;
            }
            else {
              iVar15 = 5;
            }
          }
        }
        else {
LAB_0001eae6:
          iVar15 = 2;
        }
        iVar10 = iVar10 - *(int *)(iVar7 + 0x5c);
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        bVar1 = iVar15 <= iVar10;
        goto LAB_0001eb38;
      }
      goto LAB_0001eb36;
    }
  }
  uVar12 = uVar12 + 1;
  goto LAB_0001ea44;
}



/* ===== FUN_0001eb50 @ 0001eb50 size=1448 ===== */

void FUN_0001eb50(undefined4 *param_1,int param_2,int *param_3)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_74;
  uint local_70;
  undefined2 local_6c;
  int local_68;
  int local_64;
  int local_5c;
  
  if (param_1[0x45] == 1) {
    if (param_2 == 0x1d) {
      FUN_0001cd90(param_1,0);
      FUN_0001f630(param_1,0);
      return;
    }
    if (param_2 != 5) {
      return;
    }
switchD_0001eb7a_caseD_5:
    iVar1 = strcmp((char *)((int)param_1 + 0x1a),(char *)param_3);
    if (iVar1 != 0) {
      return;
    }
    if (param_3[0x19] != 0) {
      if (param_3[0x19] != 1) {
        return;
      }
      param_1[0x41] = 1;
      FUN_0001e56c(param_1);
      FUN_00021ed8(param_1[3]);
      param_1[3] = 0;
      return;
    }
    if (param_1[0x41] == 0) {
      return;
    }
    param_1[0x41] = 0;
    iVar1 = FUN_0001d6c8(param_1);
    if (-1 < iVar1) {
      return;
    }
    FUN_0001341c(param_1,3,DAT_0001f1d4);
    return;
  }
  switch(param_2) {
  case 0:
    if ((param_3 != (int *)0x0) && (iVar1 = FUN_0001e3cc(param_1,param_3), iVar1 < 0)) {
      return;
    }
    FUN_0001cd90(param_1,6);
    if ((int)(param_1[0x54] << 0x1d) < 0) {
      local_70 = param_1[0x28];
      local_6c = *(undefined2 *)(param_1 + 0x29);
LAB_0001edd2:
      FUN_00018f94(&local_70,6);
      iVar1 = memcmp(param_1 + 0x28,&local_70,6);
      *(undefined4 *)((int)param_1 + 0xa6) = 0;
      *(undefined2 *)((int)param_1 + 0xaa) = 0;
      *(undefined2 *)(param_1 + 0x29) = local_6c;
      param_1[0x28] = local_70;
      if (iVar1 != 0) {
        FUN_0001283a(param_1);
      }
      if ((param_1[0x33] != 4) && (param_1[0x33] != 0x10)) {
        FUN_0001cc9a(param_1,&local_70);
      }
      if ((*(int *)(param_1[0x25] + 0x10) != 1) || (param_1[0x2d] == 0)) {
        iVar1 = FUN_0001d604(param_1);
        if (iVar1 == 0) {
          FUN_0001341c(param_1,3,DAT_0001eee4);
LAB_0001ee42:
          FUN_0001d1d8(param_1,3);
          return;
        }
        if (*(int *)(iVar1 + 0xc4) != 0) goto LAB_0001ee42;
        if ((*(uint *)(iVar1 + 0x54) & 499) == 0) {
          FUN_0001cbf2(param_1,iVar1);
        }
        else {
          local_74 = 0x50;
          FUN_0001cf58(param_1,0,iVar1,&local_68,&local_74);
        }
        iVar3 = param_1[0x2d];
        param_1[0x2d] = iVar1;
        FUN_0001f5b4(param_1,iVar1);
        FUN_0001cbf0(param_1);
        if (iVar3 != param_1[0x2d]) {
          FUN_00012836(param_1);
        }
      }
      iVar1 = param_1[0x2d];
      if ((iVar1 != 0) &&
         (((*(int *)(iVar1 + 0x14) != 0 &&
           (iVar1 = FUN_00012a34(param_1,&local_70,*(undefined4 *)(iVar1 + 0x10)), iVar1 != 0)) ||
          (iVar1 = FUN_00012c24(param_1,&local_70), iVar1 != 0)))) {
        param_1[0x2e] = iVar1;
      }
    }
    else if (((*(code **)(param_1[0x40] + 8) != (code *)0x0) &&
             (iVar1 = (**(code **)(param_1[0x40] + 8))(param_1[0x35],&local_70), -1 < iVar1)) &&
            (iVar1 = memcmp(&local_70,param_1 + 0x28,6), iVar1 != 0)) goto LAB_0001edd2;
    FUN_0001341c(param_1,3,DAT_0001eedc,local_70 & 0xff,local_70 >> 8 & 0xff,local_70 >> 0x10 & 0xff
                 ,local_70 >> 0x18,(undefined1)local_6c,local_6c._1_1_);
    FUN_00014fc4(param_1[0x42],&local_70);
    if (param_1[3] != 0) {
      FUN_00021f78();
    }
    param_1[0x49] = 0;
    if (((param_1[0x33] == 4) || (param_1[0x33] == 0x10)) ||
       ((param_1[0x2d] != 0 && (*(int *)(param_1[0x2d] + 0xc0) == 1)))) {
      FUN_0001cbd0(param_1);
      FUN_0001cd90(param_1,9);
    }
    else {
      FUN_0001caac(param_1,10,0);
    }
    FUN_0001f684(param_1);
    if (((int)(param_1[0x54] << 0x1c) < 0) && ((param_1[0x33] & 0x142) != 0)) {
      FUN_0001cbd0(param_1);
      FUN_0001cd90(param_1,9);
    }
    if (param_1[0x5f] != 0) {
      FUN_00013744(&local_68);
      local_68 = local_68 - param_1[0x60];
      local_64 = local_64 - param_1[0x61];
      if (local_64 < 0) {
        local_68 = local_68 + -1;
        local_64 = local_64 + 1000000;
      }
      if ((local_68 == 0) && (local_64 <= DAT_0001eee0)) {
        iVar1 = memcmp(param_1 + 0x62,&local_70,6);
        if (iVar1 == 0) {
          iVar3 = param_1[0x5f];
          iVar1 = *(int *)(iVar3 + 8);
          if (iVar1 == 0) {
            iVar1 = iVar3 + 0xc;
          }
          FUN_0001cae8(param_1,param_1 + 0x62,iVar1,*(undefined4 *)(iVar3 + 4));
        }
      }
      FUN_000135cc(param_1[0x5f]);
      param_1[0x5f] = 0;
    }
    if (((((param_1[0x33] == 4) || (param_1[0x33] == 8)) && (param_1[0x2d] != 0)) &&
        ((*(code **)(param_1[0x40] + 0x3c) != (code *)0x0 &&
         (iVar1 = (**(code **)(param_1[0x40] + 0x3c))(param_1[0x35],&local_68), iVar1 == 0)))) &&
       (local_5c << 0x18 < 0)) {
      FUN_0001ca5c(param_1,param_1[0x2d]);
    }
    break;
  case 1:
  case 0xc:
    uVar4 = 0;
    if (param_3 != (int *)0x0) {
      uVar4 = (undefined2)param_3[1];
    }
    if (param_1[0x33] != 0x10) {
      if ((param_1[0x45] == 7) && ((param_1[0x33] & 0x142) != 0)) {
        FUN_0001341c(param_1,3,DAT_0001f1bc);
      }
      if ((param_1[0x70] == 0) || (param_1[0x33] == 0x200)) {
        if (4 < (uint)param_1[0x45]) {
          FUN_0001f630(param_1,0,DAT_0001f1c0);
        }
      }
      else {
        param_1[0x2b] = 0;
        param_1[0x2c] = 1;
      }
      puVar6 = param_1 + 0x28;
      if (((((*(char *)(param_1 + 0x28) == '\0' && *(char *)((int)param_1 + 0xa1) == '\0') &&
            *(char *)((int)param_1 + 0xa2) == '\0') && *(char *)((int)param_1 + 0xa3) == '\0') &&
          *(char *)(param_1 + 0x29) == '\0') && *(char *)((int)param_1 + 0xa5) == '\0') {
        puVar6 = (undefined4 *)((int)param_1 + 0xa6);
      }
      FUN_0001df2a(param_1,puVar6);
      FUN_0001500c(param_1[0x42]);
      FUN_0001341c(param_1,3,DAT_0001f1c4,*(undefined1 *)puVar6,*(undefined1 *)((int)puVar6 + 1),
                   *(undefined1 *)((int)puVar6 + 2),*(undefined1 *)((int)puVar6 + 3),
                   *(undefined1 *)(puVar6 + 1),*(undefined1 *)((int)puVar6 + 5),uVar4);
      if ((param_1[0x33] != 4) && (param_1[0x33] != 0x10)) {
        param_1[0x4d] = 0;
        FUN_0001cc9a(param_1,param_1 + 0x28);
      }
      FUN_0001e56c(param_1);
    }
    break;
  case 2:
    FUN_0001341c(param_1,4,DAT_0001f1c8);
    uVar5 = 0;
    if ((param_3 != (int *)0x0) && (uVar5 = 0, *param_3 != 0)) {
      uVar5 = 1;
    }
    FUN_00013744(&local_68);
    if ((param_1[0x27] == 0) || (0x3c < local_68 - param_1[0x27])) {
      if (param_1[0x58] != 0) goto LAB_0001eff4;
      FUN_00014ac4(param_1[0x42],1,uVar5);
    }
    else {
      if (param_1[0x58] != 0) {
LAB_0001eff4:
        FUN_00014ac4(param_1[0x42],1,param_1[0x59]);
      }
      FUN_00014ac4(param_1[0x42],1,uVar5);
      uVar5 = DAT_0001f1cc;
      param_1[0x26] = 1;
      FUN_0001341c(param_1,4,uVar5);
      FUN_0001372c(0,10000);
      if (*(code **)(param_1[0x40] + 0x20) != (code *)0x0) {
        (**(code **)(param_1[0x40] + 0x20))(param_1[0x35],1);
      }
      FUN_0001d280(param_1,0xe);
      FUN_00013c64(DAT_0001f1d0,param_1,0);
      FUN_00013bbe(0x3c,0,DAT_0001f1d0,param_1,0);
    }
    param_1[0x27] = local_68;
    param_1[0x5a] = param_1[0x5a] + 1;
    break;
  case 3:
    iVar1 = FUN_0001e6e4(param_1,param_3);
    if ((((-1 < iVar1) && (*(code **)(param_1[0x40] + 0x180) != (code *)0x0)) &&
        (__s1 = (char *)(**(code **)(param_1[0x40] + 0x180))(param_1[0x35]), __s1 != (char *)0x0))
       && (*__s1 != '\0')) {
      for (puVar6 = *(undefined4 **)*param_1; puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)puVar6[2]) {
        if (((param_1 != puVar6) && (*(code **)(puVar6[0x40] + 0x180) != (code *)0x0)) &&
           ((__s2 = (char *)(**(code **)(puVar6[0x40] + 0x180))(puVar6[0x35]), __s2 != (char *)0x0
            && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)))) {
          FUN_0001e6e4(puVar6,param_3);
        }
      }
    }
    break;
  case 4:
    FUN_0001e3cc(param_1,param_3);
    break;
  case 5:
    goto switchD_0001eb7a_caseD_5;
  case 6:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x15:
  case 0x19:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x2c:
    break;
  case 7:
    if (param_3 != (int *)0x0) {
      FUN_00016360(param_1[0x42],param_3);
    }
    break;
  default:
    uVar5 = DAT_0001f1e0;
    goto LAB_0001f16c;
  case 0xd:
    puVar2 = (undefined1 *)*param_3;
    uVar5 = DAT_0001f1dc;
    if (puVar2 != (undefined1 *)0x0) {
      FUN_0001341c(param_1,3,DAT_0001f1d8,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                   (short)param_3[3]);
      return;
    }
LAB_0001f16c:
    FUN_0001341c(param_1,3,uVar5);
    break;
  case 0x1b:
    FUN_0001cae8(param_1,*param_3,param_3[1],param_3[2]);
    break;
  case 0x1e:
    FUN_0001e56c();
    FUN_0001cd90(param_1,1);
    break;
  case 0x21:
    param_1[0x71] = *param_3;
    param_1[0x72] = param_3[1];
    param_1[0x73] = param_3[2];
  }
  return;
}



/* ===== FUN_0001f1e4 @ 0001f1e4 size=32 ===== */

int FUN_0001f1e4(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x138);
  while ((piVar2 != (int *)0x0 && (iVar1 = memcmp(piVar2 + 1,param_2,6), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



/* ===== FUN_0001f204 @ 0001f204 size=62 ===== */

int FUN_0001f204(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0001f1e4();
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_000139a8(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = -1;
    }
    else {
      puVar3[1] = *param_2;
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 1);
      iVar2 = 1;
      uVar4 = *(undefined4 *)(param_1 + 0x138);
      puVar3[3] = 1;
      *puVar3 = uVar4;
      *(undefined4 **)(param_1 + 0x138) = puVar3;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xc) + 1;
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return iVar2;
}



/* ===== FUN_0001f284 @ 0001f284 size=28 ===== */

void FUN_0001f284(int param_1)

{
  undefined4 *__ptr;
  void *pvVar1;
  
  __ptr = *(undefined4 **)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x138) = 0;
  while (__ptr != (void *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = pvVar1;
  }
  return;
}



/* ===== FUN_0001f340 @ 0001f340 size=34 ===== */

void FUN_0001f340(int param_1)

{
  FUN_00012742(*(undefined4 *)(param_1 + 0x94));
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x3c) != 0) {
    FUN_000142d0(*(undefined4 *)(param_1 + 0x90));
    return;
  }
  return;
}



/* ===== FUN_0001f390 @ 0001f390 size=164 ===== */

int FUN_0001f390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  size_t __n;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  puVar3 = *(undefined4 **)(param_1 + 0xe4);
  do {
    if (puVar3 == (undefined4 *)(param_1 + 0xe4)) {
      return -1;
    }
    iVar1 = memcmp(puVar3 + 8,(void *)(param_1 + 0xa0),6);
    if (iVar1 == 0) {
      if (iVar4 == 0) {
        if (puVar3 == (undefined4 *)0x0) {
          return -1;
        }
LAB_0001f3d6:
        iVar4 = FUN_00012c90(puVar3,DAT_0001f434);
        if (iVar4 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(byte *)(iVar4 + 1) + 2;
        }
        iVar4 = FUN_00015f9c(*(undefined4 *)(param_1 + 0x108),iVar4,iVar1,
                             *(undefined4 *)(param_1 + 0x108),param_4);
        iVar1 = FUN_00012c66(puVar3,0x30);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(byte *)(iVar1 + 1) + 2;
        }
        iVar1 = FUN_00015fe2(*(undefined4 *)(param_1 + 0x108),iVar1,iVar2);
        if (iVar1 != 0) {
          return -1;
        }
        return -(uint)(iVar4 != 0);
      }
      __n = *(size_t *)(iVar4 + 0x14);
      if (((puVar3[0x12] == __n) &&
          (iVar1 = memcmp((void *)((int)puVar3 + 0x26),*(void **)(iVar4 + 0x10),__n), iVar1 == 0))
         || (__n == 0)) goto LAB_0001f3d6;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



/* ===== FUN_0001f46a @ 0001f46a size=22 ===== */

void FUN_0001f46a(undefined4 param_1)

{
  FUN_0001d1d8();
  FUN_0001f630(param_1,5,0);
  return;
}



/* ===== FUN_0001f480 @ 0001f480 size=22 ===== */

void FUN_0001f480(undefined4 param_1)

{
  FUN_0001d280();
  FUN_0001f630(param_1,5,0);
  return;
}



/* ===== FUN_0001f49a @ 0001f49a size=74 ===== */

undefined1 *
FUN_0001f49a(int param_1,undefined1 param_2,void *param_3,uint param_4,size_t *param_5,
            undefined4 *param_6)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  *param_5 = param_4 + 4;
  puVar1 = malloc(param_4 + 4);
  if (puVar1 != (undefined1 *)0x0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0xc);
    puVar1[1] = param_2;
    *puVar1 = (char)uVar3;
    *(ushort *)(puVar1 + 2) = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
    if (param_3 == (void *)0x0) {
      pvVar2 = memset(puVar1 + 4,0,param_4);
    }
    else {
      pvVar2 = memcpy(puVar1 + 4,param_3,param_4);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = pvVar2;
    }
  }
  return puVar1;
}



/* ===== FUN_0001f4e4 @ 0001f4e4 size=34 ===== */

undefined4 FUN_0001f4e4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001f390();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0001fd18(param_1);
    if (-1 < iVar1) {
      uVar2 = FUN_0001f390(param_1);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001f506 @ 0001f506 size=4 ===== */

undefined4 FUN_0001f506(void)

{
  return 0;
}



/* ===== FUN_0001f50a @ 0001f50a size=106 ===== */

int FUN_0001f50a(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_000139a8(0x54);
  iVar2 = DAT_0001f574;
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = param_1;
    piVar1[2] = iVar2;
    piVar1[3] = DAT_0001f578;
    piVar1[4] = DAT_0001f57c;
    piVar1[5] = DAT_0001f580;
    piVar1[6] = DAT_0001f584;
    piVar1[7] = DAT_0001f588;
    piVar1[8] = DAT_0001f58c;
    piVar1[9] = DAT_0001f590;
    piVar1[10] = DAT_0001f594;
    piVar1[0xc] = DAT_0001f598;
    piVar1[0xb] = DAT_0001f59c;
    piVar1[0xd] = DAT_0001f5a0;
    piVar1[0xe] = DAT_0001f5a4;
    piVar1[0xf] = DAT_0001f5a8;
    piVar1[0x10] = DAT_0001f5ac;
    piVar1[0x11] = DAT_0001f5b0;
    iVar2 = FUN_00014f34();
    *(int *)(param_1 + 0x108) = iVar2;
    iVar2 = -(uint)(iVar2 == 0);
  }
  return iVar2;
}



/* ===== FUN_0001f5b4 @ 0001f5b4 size=62 ===== */

void FUN_0001f5b4(int param_1,int param_2)

{
  int *piVar1;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    local_28 = *(undefined4 *)(param_2 + 200);
    local_24 = *(undefined4 *)(param_2 + 0x4c);
    local_20 = 0;
    local_14 = *(undefined4 *)(param_2 + 0x10);
    uStack_1c = 0;
    uStack_18 = 0;
    local_10 = *(undefined4 *)(param_2 + 0x14);
    local_c = *(undefined4 *)(param_2 + 0xd4);
    local_2c = param_2;
  }
  piVar1 = (int *)0x0;
  if (param_2 != 0) {
    piVar1 = &local_2c;
  }
  FUN_00015da4(*(undefined4 *)(param_1 + 0x108),piVar1);
  return;
}



/* ===== FUN_0001f5f4 @ 0001f5f4 size=18 ===== */

int FUN_0001f5f4(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (param_1 != 0 && (*(int *)(param_1 + iVar1 * 4) != 0)); iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



/* ===== FUN_0001f61c @ 0001f61c size=20 ===== */

int FUN_0001f61c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    if (param_1[0x31] == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001f630 @ 0001f630 size=80 ===== */

void FUN_0001f630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00013cb0(DAT_0001f680,param_1,0,param_4,param_1,param_2);
  if ((iVar1 != 0) && ((*(int **)(param_1 + 0x94))[4] == 1)) {
    for (piVar2 = (int *)**(int **)(param_1 + 0x94); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
    {
      if ((piVar2[0x31] == 0) && (piVar2[0x18] != 0)) {
        return;
      }
    }
  }
  FUN_00013c64(DAT_0001f680,param_1,0);
  FUN_00013bbe(param_2,param_3,DAT_0001f680,param_1,0);
  return;
}



/* ===== FUN_0001f684 @ 0001f684 size=10 ===== */

void FUN_0001f684(undefined4 param_1)

{
  FUN_00013c64(DAT_0001f690,param_1,0);
  return;
}



/* ===== FUN_0001f694 @ 0001f694 size=20 ===== */

void FUN_0001f694(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x118) != param_2) {
    *(int *)(param_1 + 0x118) = param_2;
    return;
  }
  return;
}



/* ===== FUN_0001f6a6 @ 0001f6a6 size=80 ===== */

int FUN_0001f6a6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  FUN_0001f694(param_1,1,param_3,param_4,param_4);
  if ((*(int *)(param_1 + 0x150) << 0x1d < 0) ||
     (pcVar2 = *(code **)(*(int *)(param_1 + 0x100) + 0x94), pcVar2 == (code *)0x0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0xd4),param_2);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      return 0;
    }
  }
  FUN_0001f694(param_1,0);
  FUN_00012844(param_1,0);
  return iVar1;
}



/* ===== FUN_0001fa5c @ 0001fa5c size=42 ===== */

byte * FUN_0001fa5c(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(param_1 + 0x38) + *(int *)(param_1 + 0x2c);
  pbVar1 = (byte *)(param_1 + 0x38);
  while ((pbVar3 = pbVar1, pbVar3 + 1 < pbVar2 && (pbVar3 + pbVar3[1] + 2 <= pbVar2))) {
    pbVar1 = pbVar3 + pbVar3[1] + 2;
    if (*pbVar3 == param_2) {
      return pbVar3;
    }
  }
  return (byte *)0x0;
}



/* ===== FUN_0001fa86 @ 0001fa86 size=84 ===== */

byte FUN_0001fa86(undefined4 param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  uVar1 = FUN_0001fa5c(param_1,1);
  pbVar2 = (byte *)(uVar1 + 1);
  bVar3 = 0;
  while ((uVar1 != 0 && ((int)(pbVar2 + ~uVar1) < (int)(uint)*(byte *)(uVar1 + 1)))) {
    pbVar2 = pbVar2 + 1;
    if (bVar3 < (*pbVar2 & 0x7f)) {
      bVar3 = *pbVar2 & 0x7f;
    }
  }
  uVar1 = FUN_0001fa5c(param_1,0x32);
  pbVar2 = (byte *)(uVar1 + 1);
  while ((uVar1 != 0 && ((int)(pbVar2 + ~uVar1) < (int)(uint)*(byte *)(uVar1 + 1)))) {
    pbVar2 = pbVar2 + 1;
    if (bVar3 < (*pbVar2 & 0x7f)) {
      bVar3 = *pbVar2 & 0x7f;
    }
  }
  return bVar3;
}



/* ===== FUN_0001fada @ 0001fada size=130 ===== */

int FUN_0001fada(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar4 = *param_2;
  iVar1 = FUN_0001fa5c(iVar5,0x30,param_3,param_4,param_4);
  iVar2 = FUN_0001fa5c(iVar4,0x30);
  if (iVar2 == 0) {
    if (iVar1 != 0) {
      return -1;
    }
LAB_0001fafc:
    if ((int)((uint)*(ushort *)(iVar5 + 0x12) << 0x1b) < 0) {
      if ((*(ushort *)(iVar4 + 0x12) & 0x10) == 0) {
        return -1;
      }
    }
    else if ((*(ushort *)(iVar4 + 0x12) & 0x10) != 0) goto LAB_0001faf6;
    iVar1 = *(int *)(iVar5 + 0x1c);
    if ((((iVar1 != 0) && (*(int *)(iVar4 + 0x1c) != 0)) &&
        ((*(int *)(iVar4 + 0x1c) - iVar1) + 4U < 9)) ||
       (((*(int *)(iVar5 + 0x14) != 0 && (*(int *)(iVar4 + 0x14) != 0)) &&
        ((*(int *)(iVar4 + 0x14) - *(int *)(iVar5 + 0x14)) + 9U < 0x13)))) {
      iVar2 = FUN_0001fa86(iVar5);
      iVar3 = FUN_0001fa86(iVar4);
      if (iVar2 != iVar3) {
        return iVar3 - iVar2;
      }
    }
    if (iVar1 == *(int *)(iVar4 + 0x1c)) {
      iVar1 = *(int *)(iVar4 + 0x14) - *(int *)(iVar5 + 0x14);
    }
    else {
      iVar1 = *(int *)(iVar4 + 0x1c) - iVar1;
    }
  }
  else {
    if (iVar1 != 0) goto LAB_0001fafc;
LAB_0001faf6:
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_0001fb5c @ 0001fb5c size=56 ===== */

char * FUN_0001fb5c(int param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(param_1 + 0x38);
  pcVar2 = pcVar3 + *(int *)(param_1 + 0x2c);
  while( true ) {
    if (pcVar2 <= pcVar3 + 1) {
      return (char *)0x0;
    }
    iVar4 = (byte)pcVar3[1] + 2;
    if (pcVar2 < pcVar3 + iVar4) break;
    if (((*pcVar3 == -0x23) && (3 < (byte)pcVar3[1])) &&
       (uVar1 = *(uint *)(pcVar3 + 2),
       (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18)
       == param_2)) {
      return pcVar3;
    }
    pcVar3 = pcVar3 + iVar4;
  }
  return (char *)0x0;
}



/* ===== FUN_0001fb94 @ 0001fb94 size=112 ===== */

int FUN_0001fb94(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = FUN_00013534(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    pcVar4 = (char *)(param_1 + 0x38);
    pcVar5 = pcVar4 + *(int *)(param_1 + 0x2c);
    for (; pcVar4 + 1 < pcVar5; pcVar4 = pcVar4 + (byte)pcVar4[1] + 2) {
      uVar2 = (uint)(byte)pcVar4[1];
      if (pcVar5 < pcVar4 + uVar2 + 2) break;
      if ((*pcVar4 == -0x23) && (3 < uVar2)) {
        uVar3 = *(uint *)(pcVar4 + 2);
        uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                uVar3 >> 0x18;
        if ((uVar3 == param_2) && (pcVar4 + 6 != (char *)0x0)) {
          __dest = (void *)FUN_000135e4(iVar1,uVar2 - 4,uVar2,uVar3,param_4);
          memcpy(__dest,pcVar4 + 6,uVar2 - 4);
        }
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000135cc(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0001fc04 @ 0001fc04 size=124 ===== */

int FUN_0001fc04(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if ((*(int *)(param_1 + 0x30) == 0) || (iVar4 = FUN_00013534(), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    pcVar3 = (char *)(*(int *)(param_1 + 0x2c) + 0x38 + param_1);
    pcVar5 = pcVar3 + *(int *)(param_1 + 0x30);
    for (; pcVar3 + 1 < pcVar5; pcVar3 = pcVar3 + (byte)pcVar3[1] + 2) {
      uVar1 = (uint)(byte)pcVar3[1];
      if (pcVar5 < pcVar3 + uVar1 + 2) break;
      if ((*pcVar3 == -0x23) && (3 < uVar1)) {
        uVar2 = *(uint *)(pcVar3 + 2);
        uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                uVar2 >> 0x18;
        if ((uVar2 == param_2) && (pcVar3 + 6 != (char *)0x0)) {
          __dest = (void *)FUN_000135e4(iVar4,uVar1 - 4,uVar1,uVar2,param_4);
          memcpy(__dest,pcVar3 + 6,uVar1 - 4);
        }
      }
    }
    if (*(int *)(iVar4 + 4) == 0) {
      FUN_000135cc(iVar4);
      iVar4 = 0;
    }
  }
  return iVar4;
}



/* ===== FUN_0001fc80 @ 0001fc80 size=102 ===== */

int * FUN_0001fc80(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  
  if ((((*(uint *)(param_1 + 0x150) & 4) == 0) &&
      (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x7c), pcVar1 != (code *)0x0)) &&
     (piVar2 = (int *)(*pcVar1)(*(undefined4 *)(param_1 + 0xd4)), piVar2 != (int *)0x0)) {
    qsort((void *)*piVar2,piVar2[1],4,DAT_0001fce8);
    FUN_00012a78(param_1);
    for (uVar3 = 0; uVar3 < (uint)piVar2[1]; uVar3 = uVar3 + 1) {
      FUN_00012e2c(param_1,*(undefined4 *)(*piVar2 + uVar3 * 4));
    }
    FUN_00012a84(param_1,param_2,param_3);
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



/* ===== FUN_0001fcec @ 0001fcec size=44 ===== */

void FUN_0001fcec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    free(*(void **)((int)*param_1 + uVar1 * 4));
  }
  free((void *)*param_1);
  (*(code *)PTR_free_00037148)(param_1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== FUN_0001fd18 @ 0001fd18 size=26 ===== */

undefined4 FUN_0001fd18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001fc80(param_1,0,0,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0001fcec();
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001fd34 @ 0001fd34 size=40 ===== */

void FUN_0001fd34(void)

{
  char *__format;
  undefined4 in_r3;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  __format = DAT_0001fd6c;
  puVar2 = DAT_0001fd64;
  printf(DAT_0001fd60,*DAT_0001fd68,*DAT_0001fd5c,DAT_0001fd68,in_r3);
  while( true ) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 == (undefined4 *)0x0) break;
    printf(__format,*puVar1,puVar1[1],puVar1,in_r3);
    puVar2 = puVar2 + 1;
  }
  return;
}



/* ===== FUN_0001ff58 @ 0001ff58 size=174 ===== */

/* WARNING: Removing unreachable block (ram,0x0001fef0) */
/* WARNING: Removing unreachable block (ram,0x0001fefe) */
/* WARNING: Removing unreachable block (ram,0x0001ff06) */

undefined4 FUN_0001ff58(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_46;
  undefined4 uStack_42;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = 0;
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_6c = 0;
  local_5c = (undefined4 *)0x0;
  local_54 = 0;
  uStack_68 = uVar4;
  uStack_64 = uVar5;
  uStack_60 = uVar6;
  uStack_58 = uVar4;
  uStack_50 = uVar4;
  FUN_000139b0(&local_6c,param_1 + 0x10);
  local_4c = 3;
  uStack_3a = (undefined2)uVar6;
  local_38 = (undefined2)uVar3;
  uStack_36 = (undefined2)((uint)uVar3 >> 0x10);
  local_48 = 1;
  local_5c = &local_4c;
  uStack_58 = CONCAT22(uStack_58._2_2_,0x24);
  local_46 = uVar3;
  uStack_42 = uVar4;
  uStack_3e = uVar5;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b36,&local_6c);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 0x5f) {
      perror(DAT_0001ff54);
    }
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001ff70 @ 0001ff70 size=34 ===== */

undefined4 FUN_0001ff70(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
    do {
      puVar2 = puVar1 + 1;
      *param_2 = *puVar1;
      param_2 = param_2 + 1;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(param_1 + 0x84));
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_0001ff92 @ 0001ff92 size=122 ===== */

undefined4 FUN_0001ff92(int param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 *local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  uStack_44 = uVar3;
  uStack_34 = uVar3;
  uStack_2c = uVar3;
  FUN_000139b0(&local_48,param_1 + 0x10);
  local_58 = 1;
  local_56 = *param_2;
  local_52 = *(undefined2 *)(param_2 + 1);
  local_38 = &local_5c;
  uStack_34 = CONCAT22(uStack_34._2_2_,0x14);
  local_5c = param_3;
  local_5a = param_4;
  local_50 = uVar2;
  uStack_4c = uVar3;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b16,&local_48);
  if (iVar1 < 0) {
    perror(DAT_0002000c);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002001c @ 0002001c size=76 ===== */

void FUN_0002001c(undefined4 *param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char acStack_80 [100];
  int local_1c;
  
  memset(acStack_80,0,100);
  if (100 < param_3) {
    param_3 = 99;
  }
  memcpy(acStack_80,param_2,param_3);
  local_1c = param_4;
  iVar1 = strcmp((char *)(param_1 + 4),acStack_80);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      param_1[0x13] = 0;
    }
    else {
      param_1[0x13] = 1;
    }
  }
  FUN_0001eb50(*param_1,5,acStack_80);
  return;
}



/* ===== FUN_00020068 @ 00020068 size=56 ===== */

void FUN_00020068(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  
  for (; ((0 < param_4 && (uVar1 = (uint)*param_3, 3 < uVar1)) && ((int)uVar1 <= param_4));
      param_3 = (ushort *)((int)param_3 + uVar1)) {
    if (param_3[1] == 3) {
      FUN_0002001c(param_1,param_3 + 2,uVar1 - 4,1);
    }
    uVar1 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar1;
  }
  return;
}



/* ===== FUN_0002020c @ 0002020c size=252 ===== */

void FUN_0002020c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  
  pcVar8 = (char *)param_2[0xe];
  pcVar9 = pcVar8 + param_2[0xf];
  pcVar11 = (char *)0x0;
  pcVar13 = (char *)0x0;
  for (; ((pcVar8 != (char *)0x0 && (pcVar8 + 1 < pcVar9)) &&
         (pcVar8 + (byte)pcVar8[1] + 2 <= pcVar9)); pcVar8 = pcVar8 + (byte)pcVar8[1] + 2) {
    cVar1 = *pcVar8;
    pcVar12 = pcVar11;
    pcVar14 = pcVar8;
    if (((cVar1 != '\0') && (pcVar12 = pcVar8, pcVar14 = pcVar13, cVar1 != '\x01')) &&
       (pcVar12 = pcVar11, cVar1 == '2')) {
      pcVar12 = pcVar8;
    }
    pcVar11 = pcVar12;
    pcVar13 = pcVar14;
  }
  if (pcVar13 == (char *)0x0) {
    iVar10 = param_2[0x18] + 2;
  }
  else {
    iVar10 = 0;
  }
  if ((pcVar11 == (char *)0x0) && (param_2[0x19] != 0)) {
    iVar10 = iVar10 + 3;
  }
  puVar2 = (undefined4 *)FUN_000139a8(param_2[0xf] + 0x38 + iVar10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    puVar6 = param_2;
    do {
      uVar3 = *puVar6;
      uVar7 = puVar6[1];
      puVar6 = puVar6 + 2;
      *puVar5 = uVar3;
      puVar5[1] = uVar7;
      puVar5 = puVar5 + 2;
    } while (puVar6 != param_2 + 0xe);
    puVar5 = puVar2 + 0xe;
    puVar2[0xb] = iVar10 + param_2[0xf];
    if (pcVar13 == (char *)0x0) {
      *(undefined1 *)(puVar2 + 0xe) = 0;
      *(char *)((int)puVar2 + 0x39) = (char)param_2[0x18];
      pvVar4 = memcpy((void *)((int)puVar2 + 0x3a),param_2 + 0x10,param_2[0x18]);
      puVar5 = (undefined4 *)(param_2[0x18] + (int)pvVar4);
    }
    puVar6 = puVar5;
    if ((pcVar11 == (char *)0x0) && (param_2[0x19] != 0)) {
      *(undefined1 *)puVar5 = 1;
      *(undefined1 *)((int)puVar5 + 1) = 1;
      puVar6 = (undefined4 *)((int)puVar5 + 3);
      *(char *)((int)puVar5 + 2) = (char)param_2[0x19];
    }
    if ((void *)param_2[0xe] != (void *)0x0) {
      memcpy(puVar6,(void *)param_2[0xe],param_2[0xf]);
    }
    pvVar4 = realloc((void *)*param_1,(param_1[1] + 1) * 4);
    if (pvVar4 == (void *)0x0) {
      (*(code *)PTR_free_00037148)(puVar2);
      return;
    }
    iVar10 = param_1[1];
    param_1[1] = iVar10 + 1;
    *(undefined4 **)((int)pvVar4 + iVar10 * 4) = puVar2;
    *param_1 = pvVar4;
  }
  return;
}



/* ===== FUN_00020308 @ 00020308 size=566 ===== */

undefined4
FUN_00020308(undefined4 param_1,int param_2,uint param_3,byte *param_4,short param_5,int param_6,
            void *param_7,uint param_8,void *param_9,size_t param_10)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  uint *__ptr;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint *local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if ((param_8 < 9) && (__ptr = (uint *)FUN_000139a8(param_10 + 0x28), __ptr != (uint *)0x0)) {
    uVar9 = 0;
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar8 = param_2 + 0x10;
    local_58 = 0;
    local_48 = (uint *)0x0;
    local_40 = 0;
    uStack_54 = uVar10;
    uStack_50 = uVar11;
    uStack_4c = uVar12;
    uStack_44 = uVar10;
    uStack_3c = uVar10;
    FUN_000139b0(&local_58,iVar8,0x10);
    uVar3 = param_5 + 1;
    uVar1 = uVar3 | 0x400;
    uStack_44._2_2_ = uVar1;
    if (param_3 == 0) {
      uStack_44._2_2_ = uVar3 | 0x8400;
    }
    sVar2 = (short)param_10;
    uStack_44 = CONCAT22(uStack_44._2_2_,sVar2 + 0x28);
    if ((param_4 == (byte *)0x0) ||
       ((*param_4 & param_4[1] & param_4[2] & param_4[3] & param_4[4] & param_4[5]) == 0xff)) {
      *__ptr = *__ptr | 4;
    }
    if (param_6 != 0) {
      *__ptr = *__ptr | 8;
    }
    *(undefined2 *)(__ptr + 5) = 1;
    if (param_4 == (byte *)0x0) {
      uVar6 = 0xffff;
      *(undefined4 *)((int)__ptr + 0x16) = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)__ptr + 0x16) = *(undefined4 *)param_4;
      uVar6 = *(undefined2 *)(param_4 + 4);
    }
    *(undefined2 *)((int)__ptr + 0x1a) = uVar6;
    local_48 = __ptr;
    if ((param_9 != (void *)0x0) && (param_10 != 0)) {
      memcpy(__ptr + 10,param_9,param_10);
      *(short *)((int)__ptr + 0x26) = sVar2;
    }
    switch(param_3) {
    case 0:
      uVar6 = 0;
      break;
    case 1:
      uVar6 = 1;
      break;
    case 2:
      uVar6 = 2;
      break;
    case 3:
      uVar6 = 3;
      break;
    default:
      free(__ptr);
      return 0xffffffff;
    case 5:
      uVar6 = 4;
    }
    *(undefined2 *)(__ptr + 9) = uVar6;
    if ((param_7 != (void *)0x0) && (param_8 != 0)) {
      *__ptr = *__ptr | 2;
      memcpy(__ptr + 3,param_7,param_8);
    }
    iVar4 = ioctl(*(int *)(param_2 + 8),0x8b34,&local_58);
    if (iVar4 < 0) {
      piVar5 = __errno_location();
      if (*piVar5 == 0x5f) {
        iVar4 = -2;
      }
      else if (*piVar5 == 0x13) {
        iVar4 = -2;
      }
      else {
        iVar4 = -1;
      }
      perror(DAT_00020544);
    }
    else {
      iVar4 = 0;
    }
    free(__ptr);
    if (iVar4 == 0) {
      return 0;
    }
    if (iVar4 == -2) {
      if (1 < param_3) {
        return 0xfffffffe;
      }
      uStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_48 = (uint *)0x0;
      local_40 = 0;
      local_58 = uVar9;
      uStack_54 = uVar10;
      uStack_50 = uVar11;
      uStack_4c = uVar12;
      uStack_3c = uStack_44;
      FUN_000139b0(&local_58,iVar8,0x10);
      uStack_44._2_2_ = uVar1;
      if (param_3 == 0) {
        uStack_44._2_2_ = uVar3 | 0x8400;
      }
      uStack_44 = CONCAT22(uStack_44._2_2_,sVar2);
      local_48 = param_9;
      iVar4 = ioctl(*(int *)(param_2 + 8),0x8b2a,&local_58);
      if (iVar4 < 0) {
        uVar7 = 0xffffffff;
        perror(DAT_00020548);
      }
      else {
        uVar7 = 0;
      }
      if (param_6 == 0) {
        return uVar7;
      }
      if (param_3 == 0) {
        return uVar7;
      }
      uStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_48 = (uint *)0x0;
      local_40 = 0;
      local_58 = uVar9;
      uStack_54 = uVar10;
      uStack_50 = uVar11;
      uStack_4c = uVar12;
      uStack_3c = uStack_44;
      FUN_000139b0(&local_58,iVar8,0x10);
      local_48 = (uint *)0x0;
      uStack_44 = (uint)uVar1 << 0x10;
      iVar8 = ioctl(*(int *)(param_2 + 8),0x8b2a,&local_58);
      if (-1 < iVar8) {
        return uVar7;
      }
      perror(DAT_0002054c);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00020550 @ 00020550 size=1108 ===== */

int FUN_00020550(int param_1)

{
  longlong lVar1;
  bool bVar2;
  uint *__ptr;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uVar19;
  uint local_bc;
  uint uStack_b8;
  uint local_b4;
  byte local_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  ushort local_ac;
  short sStack_aa;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  undefined8 local_80;
  uint *local_68;
  int local_64;
  undefined1 auStack_60 [32];
  uint local_40;
  uint local_3c;
  
  uVar15 = 0;
  uVar7 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar5 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar14 = 5;
  uVar11 = 0x1000;
  while( true ) {
    __ptr = malloc(uVar11);
    if (__ptr == (uint *)0x0) {
      return 0;
    }
    local_a0 = uVar15;
    uStack_9c = uVar7;
    local_98 = uVar19;
    local_94 = iVar5;
    local_90 = (uint *)uVar15;
    uStack_8c = uVar7;
    local_88 = uVar15;
    uStack_84 = uVar7;
    FUN_000139b0(&local_a0,param_1 + 0x10,0x10);
    uStack_8c = CONCAT22(uStack_8c._2_2_,(short)uVar11);
    local_90 = __ptr;
    iVar3 = ioctl(*(int *)(param_1 + 8),0x8b19,&local_a0);
    if (iVar3 == 0) break;
    piVar4 = __errno_location();
    if ((*piVar4 != 7) || (iVar14 = iVar14 + -1, iVar14 == 0)) {
      perror(DAT_000208a4);
      goto LAB_000205d0;
    }
    uVar11 = uVar11 << 1;
    free(__ptr);
    if (0xfffe < uVar11) {
      uVar11 = 0xffff;
    }
  }
  uVar15 = uStack_8c & 0xffff;
  if (uVar11 < uVar15) {
LAB_000205d0:
    free(__ptr);
    return 0;
  }
  iVar5 = FUN_000139a8(8);
  if (iVar5 != 0) {
    puVar16 = (uint *)(uVar15 + (int)__ptr);
    memset(&local_a0,0,0x68);
    bVar2 = true;
    for (puVar17 = __ptr;
        (puVar6 = puVar17 + 1, puVar6 <= puVar16 && (local_b4 = *puVar17, 4 < (local_b4 & 0xffff)));
        puVar17 = (uint *)((int)puVar17 + uVar7)) {
      if ((*(int *)(param_1 + 0x88) < 0x13) ||
         ((((uVar15 = local_b4 >> 0x10, uVar15 != 0x8b1b && (uVar15 != 0x8b2b)) &&
           (uVar15 != 0x8c05)) && (uVar15 != 0x8c02)))) {
        puVar12 = &local_b4;
        puVar8 = puVar17;
        do {
          puVar9 = puVar8 + 2;
          uVar15 = puVar8[1];
          *puVar12 = *puVar8;
          puVar12[1] = uVar15;
          puVar12 = puVar12 + 2;
          puVar8 = puVar9;
        } while (puVar9 != puVar17 + 4);
        puVar8 = puVar17 + 3;
        *puVar12 = *puVar9;
      }
      else {
        uStack_a8 = puVar17[2];
        puVar8 = puVar17 + 2;
        local_ac = (ushort)*puVar6;
        sStack_aa = (short)(*puVar6 >> 0x10);
        local_a4 = puVar17[3];
      }
      uVar7 = local_b4 & 0xffff;
      uVar15 = local_b4 >> 0x10;
      if (uVar15 == 0x8b21) {
        if ((uint *)((int)puVar6 + uVar7) <= puVar16) {
          uVar15 = 0;
          uVar11 = uVar7;
          while (7 < uVar11) {
            local_bc = *puVar6;
            uStack_b8 = puVar6[1];
            uVar11 = uVar11 - 8;
            puVar6 = puVar6 + 2;
            if ((int)uVar15 < (int)local_bc) {
              uVar15 = local_bc;
            }
          }
          local_3c = (uint)((ulonglong)uVar15 * (ulonglong)DAT_000209b0 >> 0x31);
        }
      }
      else if (uVar15 < 0x8b22) {
        if (uVar15 == 0x8b07) {
          iVar14 = CONCAT13(bStack_ad,CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0)));
          if (iVar14 == 1) {
            uVar10 = local_90._2_2_ | 2;
          }
          else {
            if (1 < iVar14 - 2U) goto LAB_000206b4;
            uVar10 = local_90._2_2_ | 1;
          }
LAB_000207bc:
          local_90 = (uint *)CONCAT22(uVar10,(undefined2)local_90);
        }
        else if (uVar15 < 0x8b08) {
          if (uVar15 == 0x8b05) {
            iVar3 = (int)(short)local_ac;
            iVar14 = DAT_000208a8;
            if (iVar3 == 0) {
              if (local_94 == 0) {
                iVar3 = CONCAT13(bStack_ad,CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0)));
                lVar1 = CONCAT44(iVar3,iVar3 - 1U);
                if (iVar3 - 1U < 0xd) {
                  local_94 = iVar3 * 5 + 0x967;
                }
                else {
                  if (iVar3 != 0xe) goto LAB_0002080e;
                  local_94 = 0x9b4;
                }
              }
            }
            else if (iVar3 < 7) {
              lVar1 = 0x8b0500008b05;
              for (iVar13 = 0; iVar13 < iVar3; iVar13 = iVar13 + 1) {
                lVar1 = (longlong)iVar14 * (longlong)DAT_000208ac;
                iVar14 = (int)(lVar1 >> 0x22) - (iVar14 >> 0x1f);
              }
LAB_0002080e:
              local_94 = FUN_00022044(CONCAT13(bStack_ad,
                                               CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0))),
                                      iVar14,(int)lVar1);
            }
          }
        }
        else if (uVar15 == 0x8b15) {
          if (!bVar2) {
            FUN_0002020c(iVar5,&local_a0);
          }
          free(local_68);
          memset(&local_a0,0,0x68);
          uStack_9c = CONCAT22(local_ac,CONCAT11(bStack_ad,bStack_ae));
          local_98 = CONCAT22(local_98._2_2_,sStack_aa);
          bVar2 = false;
        }
        else if (((uVar15 == 0x8b1b) &&
                 (uVar15 = (uint)local_ac, (uint *)((int)puVar8 + uVar15) <= puVar16)) &&
                ((sStack_aa != 0 && (uVar15 - 1 < 0x20)))) {
          memcpy(auStack_60,puVar8,uVar15);
          local_40 = uVar15;
        }
      }
      else if (uVar15 == 0x8c01) {
        uVar11 = (uint)bStack_ad;
        uStack_8c = (uint)local_b0;
        uVar15 = uVar11 << 0x1b;
        bVar18 = (int)uVar15 < 0;
        local_88 = (uint)bStack_ae;
        if (bVar18) {
          uVar15 = local_a0 | 1;
        }
        uStack_84 = (uint)bStack_af;
        if (bVar18) {
          local_a0 = uVar15;
        }
        if ((int)(uVar11 << 0x1a) < 0) {
          local_a0 = local_a0 | 4;
        }
        if ((int)(uVar11 << 0x19) < 0) {
          local_a0 = local_a0 | 2;
        }
        if ((int)(uVar11 << 0x1c) < 0) {
          local_a0 = local_a0 | 8;
        }
        else if ((uStack_84 == 0) || (uStack_84 <= *(byte *)(param_1 + 0xb4))) goto LAB_000206b4;
        if (0x3f < uStack_84) {
          uStack_84 = uStack_84 - 0x100;
        }
        if (0x3f < local_88) {
          local_88 = local_88 - 0x100;
        }
      }
      else if (uVar15 < 0x8c02) {
        if ((uVar15 == 0x8b2b) && (-1 < sStack_aa)) {
          uVar10 = local_90._2_2_ | 0x10;
          goto LAB_000207bc;
        }
      }
      else if (uVar15 == 0x8c02) {
        uVar15 = (uint)local_ac;
        if ((uint *)((int)puVar8 + uVar15) <= puVar16) {
          if (uVar15 < 8) {
            if (4 < uVar15) goto LAB_00020944;
          }
          else {
            iVar14 = strncmp((char *)puVar8,DAT_000209b4,7);
            if ((iVar14 == 0) || (iVar14 = strncmp((char *)puVar8,DAT_000209b8,7), iVar14 == 0)) {
              iVar14 = uVar15 - 7;
              if ((-1 < iVar14 * -0x80000000) && (iVar14 != 0)) {
                uVar15 = iVar14 / 2;
                puVar6 = realloc(local_68,local_64 + uVar15);
                if ((puVar6 != (uint *)0x0) &&
                   (local_68 = puVar6,
                   iVar14 = FUN_0001333a((int)puVar8 + 7,local_64 + (int)puVar6,uVar15), -1 < iVar14
                   )) goto LAB_00020776;
              }
            }
            else {
LAB_00020944:
              iVar14 = strncmp((char *)puVar8,DAT_000209bc,4);
              if ((iVar14 == 0) &&
                 ((uVar15 == 0x14 && (iVar14 = FUN_0001333a(puVar8 + 1,&local_bc,8), -1 < iVar14))))
              {
                uVar15 = uStack_b8 << 0x18 | (uStack_b8 >> 8 & 0xff) << 0x10 |
                         (uStack_b8 >> 0x10 & 0xff) << 8 | uStack_b8 >> 0x18;
                local_80 = CONCAT44(local_80._4_4_ +
                                    (local_bc << 0x18 | (local_bc >> 8 & 0xff) << 0x10 |
                                     (local_bc >> 0x10 & 0xff) << 8 | local_bc >> 0x18) +
                                    (uint)CARRY4((uint)local_80,uVar15),(uint)local_80 + uVar15);
              }
            }
          }
        }
      }
      else if ((((uVar15 == 0x8c05) && (uVar15 = (uint)local_ac, uVar15 != 0)) &&
               ((uint *)((int)puVar8 + uVar15) <= puVar16)) &&
              (puVar6 = realloc(local_68,(int)((int)puVar8 + uVar15) + (local_64 - (int)puVar8)),
              puVar6 != (uint *)0x0)) {
        memcpy((void *)(local_64 + (int)puVar6),puVar8,uVar15);
        local_68 = puVar6;
LAB_00020776:
        local_64 = local_64 + uVar15;
      }
LAB_000206b4:
    }
    free(__ptr);
    __ptr = local_68;
    if (!bVar2) {
      FUN_0002020c(iVar5,&local_a0);
      __ptr = local_68;
    }
  }
  free(__ptr);
  return iVar5;
}



/* ===== FUN_000209c0 @ 000209c0 size=88 ===== */

undefined4 FUN_000209c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_1c = uStack_2c;
  uStack_14 = uStack_2c;
  FUN_000139b0(&local_30,param_1 + 0x10);
  uStack_1c = CONCAT22((ushort)((uint)(param_2 << 0x14) >> 0x14),(undefined2)uStack_1c);
  local_20 = param_3;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b32,&local_30);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0x5f) {
      uVar3 = 0xfffffffe;
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00020a78 @ 00020a78 size=98 ===== */

undefined4 FUN_00020a78(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_30 = 0;
  local_20 = 0;
  uStack_1e = 0;
  uStack_1c = (undefined2)uStack_2c;
  uStack_1a = (undefined2)((uint)uStack_2c >> 0x10);
  local_18 = 0;
  uStack_14 = uStack_2c;
  FUN_000139b0(&local_30,param_1 + 0x10);
  local_20 = 1;
  if (param_2 == (undefined4 *)0x0) {
    uStack_1e = 0;
    uStack_1c = 0;
    uStack_1a = 0;
  }
  else {
    uStack_1e = (undefined2)*param_2;
    uStack_1c = (undefined2)((uint)*param_2 >> 0x10);
    uStack_1a = *(undefined2 *)(param_2 + 1);
  }
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b14,&local_30);
  if (iVar1 < 0) {
    perror(DAT_00020adc);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00020ae0 @ 00020ae0 size=144 ===== */

undefined4 FUN_00020ae0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined3 uStack_2b;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (param_3 < 0x21) {
    uVar2 = 0;
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_64 = 0;
    local_54 = (void *)0x0;
    local_4c = 0;
    uStack_60 = uVar3;
    uStack_5c = uVar4;
    uStack_58 = uVar5;
    uStack_50 = uVar3;
    uStack_48 = uVar3;
    FUN_000139b0(&local_64,param_1 + 0x10);
    local_2c = (undefined1)uVar2;
    uStack_2b = (undefined3)uVar2;
    uStack_28._1_3_ = (undefined3)uVar3;
    uStack_28 = CONCAT31(uStack_28._1_3_,(char)((uint)uVar2 >> 0x18));
    uStack_24 = (undefined1)((uint)uVar3 >> 0x18);
    local_44 = uVar2;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    uStack_38 = uVar5;
    local_34 = uVar2;
    uStack_30 = uVar3;
    uStack_50._2_2_ = (ushort)(param_3 != 0);
    local_54 = memcpy(&local_44,param_2,param_3);
    if ((*(int *)(param_1 + 0x88) < 0x15) && (param_3 != 0)) {
      param_3 = param_3 + 1;
    }
    uStack_50 = CONCAT22(uStack_50._2_2_,(short)param_3);
    iVar1 = ioctl(*(int *)(param_1 + 8),0x8b1a,&local_64);
    if (-1 < iVar1) {
      return 0;
    }
    perror(DAT_00020b70);
  }
  return 0xffffffff;
}



/* ===== FUN_00020b74 @ 00020b74 size=144 ===== */

void FUN_00020b74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [36];
  
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_44 = uStack_54;
  uStack_3c = uStack_54;
  FUN_000139b0(&local_58,param_1 + 0x10);
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b07,&local_58);
  if (iVar1 < 0) {
    perror(DAT_00020c04);
    local_48 = 2;
  }
  else if (local_48 != 2) {
    return;
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    puVar3 = auStack_38;
    iVar1 = 0;
    puVar5 = puVar3;
    do {
      iVar2 = rand();
      iVar1 = iVar1 + 1;
      *puVar5 = (char)iVar2;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0x20);
    iVar1 = FUN_00020a78(param_1,&local_60);
    if (iVar1 < 0) {
      return;
    }
    uVar4 = 0x20;
  }
  else {
    iVar1 = FUN_00020a78(param_1,&local_60);
    if (iVar1 < 0) {
      return;
    }
    uVar4 = 0;
    puVar3 = DAT_00020c08;
  }
  FUN_00020ae0(param_1,puVar3,uVar4);
  return;
}



/* ===== FUN_00020cb0 @ 00020cb0 size=80 ===== */

undefined4 FUN_00020cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_1c = uStack_2c;
  uStack_14 = uStack_2c;
  FUN_000139b0(&local_30,param_1 + 0x10);
  uStack_1c = CONCAT22(uStack_1c._2_2_,1);
  local_20 = param_2 * DAT_00020d00;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b04,&local_30);
  if (iVar1 < 0) {
    perror(DAT_00020d04);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00020d18 @ 00020d18 size=24 ===== */

bool FUN_00020d18(int param_1)

{
  if (param_1 == 1) {
    return (bool)2;
  }
  if (param_1 != 3) {
    return param_1 == 0;
  }
  return true;
}



/* ===== FUN_00020d30 @ 00020d30 size=174 ===== */

undefined4 FUN_00020d30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *__s;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = param_1 + 0x10;
  if (param_2 == 0) {
    iVar5 = 2;
  }
  else {
    iVar5 = 1;
  }
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_24 = uStack_34;
  uStack_1c = uStack_34;
  FUN_000139b0(&local_38,iVar4,0x10);
  local_28 = iVar5;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b06,&local_38);
  if (iVar1 == 0) {
LAB_00020d6e:
    uVar3 = 0;
  }
  else {
    piVar2 = __errno_location();
    __s = DAT_00020de0;
    if ((*piVar2 == 0x10) &&
       (iVar1 = ioctl(*(int *)(param_1 + 8),0x8b07,&local_38), __s = DAT_00020de4, -1 < iVar1)) {
      if (local_28 == iVar5) goto LAB_00020d6e;
      iVar1 = FUN_00021a34(*(undefined4 *)(param_1 + 8),iVar4,0);
      if (iVar1 == 0) {
        local_28 = iVar5;
        iVar5 = ioctl(*(int *)(param_1 + 8),0x8b06,&local_38);
        uVar3 = 0;
        if (iVar5 < 0) {
          uVar3 = 0xffffffff;
          perror(DAT_00020de0);
        }
        FUN_00021a34(*(undefined4 *)(param_1 + 8),iVar4,1);
        return uVar3;
      }
    }
    else {
      perror(__s);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00020de8 @ 00020de8 size=752 ===== */

int FUN_00020de8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00020ae0(param_1,DAT_000210d8,0);
  }
  *(int *)(param_1 + 0x8c) = param_2[0x1a];
  iVar1 = FUN_000209c0(param_1,5);
  uVar7 = param_2[9];
  uVar4 = uVar7 & 1;
  if ((int)(uVar7 << 0x1e) < 0) {
    uVar4 = uVar4 | 2;
  }
  if ((int)(uVar7 << 0x1d) < 0) {
    uVar4 = uVar4 | 4;
  }
  else if (uVar4 == 0) {
    uVar4 = 1;
  }
  iVar2 = FUN_000209c0(param_1,6,uVar4);
  iVar3 = param_2[10];
  iVar11 = param_1 + 0x10;
  uVar13 = 0;
  uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar15 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(uint *)(param_1 + 0x90) = (uint)(iVar2 == -2);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = iVar1 >> 0x1f;
  }
  iVar2 = FUN_00020d30(param_1,iVar3);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if (*(int *)(param_1 + 0x90) == 0) goto LAB_00020eb0;
  local_50 = uVar13;
  uStack_4c = uVar14;
  uStack_48 = uVar15;
  uStack_44 = uVar16;
  local_40 = (void *)uVar13;
  uStack_3c = uVar14;
  local_38 = uVar13;
  uStack_34 = uVar14;
  FUN_000139b0(&local_50,iVar11,0x10);
  local_40 = (void *)0x0;
  uStack_3c = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    uStack_3c._2_2_ = 0x8000;
LAB_00020e92:
    uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  }
  else {
    if (param_2[9] << 0x1f < 0) {
      uStack_3c = 0x20000000;
    }
    if (param_2[9] << 0x1e < 0) {
      uStack_3c._2_2_ = uStack_3c._2_2_ | 0x4000;
      goto LAB_00020e92;
    }
  }
  iVar2 = ioctl(*(int *)(param_1 + 8),0x8b2a,&local_50);
  if (iVar2 < 0) {
    iVar1 = -1;
    perror(DAT_000210dc);
  }
LAB_00020eb0:
  if ((*param_2 == 0) && (iVar2 = FUN_00020a78(param_1), iVar2 < 0)) {
    iVar1 = -1;
  }
  uStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pvVar12 = (void *)param_2[4];
  iVar2 = param_2[5];
  local_40 = (void *)0x0;
  local_38 = 0;
  local_50 = uVar13;
  uStack_4c = uVar14;
  uStack_48 = uVar15;
  uStack_44 = uVar16;
  uStack_34 = uStack_3c;
  FUN_000139b0(&local_50,iVar11,0x10);
  uStack_3c = CONCAT22(uStack_3c._2_2_,(short)iVar2);
  local_40 = pvVar12;
  iVar2 = ioctl(*(int *)(param_1 + 8),0x8b30,&local_50);
  if (iVar2 < 0) {
    iVar1 = -1;
    perror(DAT_000210e0);
  }
  if (((char *)param_2[4] == (char *)0x0) || (param_2[5] == 0)) {
    uVar5 = 1;
  }
  else if (*(char *)param_2[4] == '0') {
    uVar5 = 4;
  }
  else {
    uVar5 = 2;
  }
  iVar2 = FUN_000209c0(param_1,0,uVar5);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((uint)param_2[6] < 5) {
    iVar2 = (int)*(char *)(DAT_000210e4 + param_2[6]);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = FUN_000209c0(param_1,1,iVar2);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((uint)param_2[7] < 5) {
    iVar2 = (int)*(char *)(DAT_000210e4 + param_2[7]);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = FUN_000209c0(param_1,2,iVar2);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  uVar5 = FUN_00020d18(param_2[8]);
  iVar2 = FUN_000209c0(param_1,3,uVar5);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if (((param_2[8] == 2) && (param_2[6] == 0)) && (param_2[7] == 0)) {
    uVar5 = 0;
    if (param_2[5] != 0) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
  }
  iVar2 = FUN_000209c0(param_1,10,uVar5);
  uVar4 = param_2[8];
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((*(int *)(param_1 + 0x74) << 0x1c < 0) &&
     (puVar10 = (undefined4 *)param_2[0x19], puVar10 != (undefined4 *)0x0)) {
    uStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_40 = (void *)0x0;
    local_38 = 0;
    local_50 = uVar13;
    uStack_4c = uVar14;
    uStack_48 = uVar15;
    uStack_44 = uVar16;
    uStack_34 = uStack_3c;
    FUN_000139b0(&local_50,iVar11,0x10);
    pvVar12 = (void *)FUN_000139a8(0x48);
    if (pvVar12 == (void *)0x0) {
      iVar1 = -1;
    }
    else {
      uStack_3c = CONCAT22(uStack_3c._2_2_,0x48);
      *(undefined2 *)((int)pvVar12 + 0x26) = 0x20;
      puVar6 = (undefined4 *)((int)pvVar12 + 0x28);
      puVar8 = puVar10;
      do {
        puVar9 = puVar8 + 1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar9;
      } while (puVar9 != puVar10 + 8);
      *(undefined2 *)((int)pvVar12 + 0x24) = 4;
      local_40 = pvVar12;
      iVar2 = ioctl(*(int *)(param_1 + 8),0x8b34,&local_50);
      if (iVar2 < 0) {
        perror(DAT_000210e8);
      }
      free(pvVar12);
      if (iVar2 < 0) {
        iVar1 = -1;
      }
    }
  }
  iVar2 = FUN_000209c0(param_1,8,1 < uVar4);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((param_2[3] != 0) && (iVar2 = FUN_00020cb0(param_1), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*(int *)(param_1 + 0xb0) == 0) &&
     (iVar2 = FUN_00020ae0(param_1,param_2[1],param_2[2]), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*param_2 != 0) && (iVar2 = FUN_00020a78(param_1), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar2 = FUN_00020ae0(param_1,param_2[1],param_2[2]), iVar2 < 0)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_000210ec @ 000210ec size=34 ===== */

int FUN_000210ec(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    iVar1 = 0;
  }
  else {
    uVar2 = if_nametoindex(param_2);
    *(uint *)(param_1 + 0x48) = uVar2;
    iVar1 = -(uint)((int)uVar2 < 1);
  }
  return iVar1;
}



/* ===== FUN_0002110e @ 0002110e size=338 ===== */

undefined4 FUN_0002110e(undefined4 *param_1)

{
  byte bVar1;
  char *__s2;
  int iVar2;
  void *__ptr;
  uint uVar3;
  bool bVar4;
  char *__ifname;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  __ifname = (char *)(param_1 + 4);
  iVar2 = FUN_00021a34(param_1[2],__ifname,1);
  if (iVar2 < 0) {
    iVar2 = FUN_00021d38(param_1[0x15]);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    bVar4 = true;
    param_1[0x14] = 1;
  }
  else {
    bVar4 = false;
  }
  FUN_0001ff58(param_1);
  FUN_00020d30(param_1,0);
  __ptr = (void *)FUN_000139a8(0x42c);
  if (__ptr != (void *)0x0) {
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_38 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    uStack_24 = uStack_34;
    uStack_1c = uStack_34;
    FUN_000139b0(&local_38,__ifname,0x10);
    uStack_24 = CONCAT22(uStack_24._2_2_,0x42c);
    local_28 = __ptr;
    iVar2 = ioctl(param_1[2],0x8b0b,&local_38);
    if (iVar2 < 0) {
      perror(DAT_00021260);
    }
    else {
      if ((0x237 < (ushort)uStack_24) && (bVar1 = *(byte *)((int)__ptr + 0x118), 0x11 < bVar1)) {
        param_1[0x21] = 1;
        param_1[0x22] = (uint)bVar1;
        iVar2 = *(int *)((int)__ptr + 0x234);
        if (iVar2 << 0x1f < 0) {
          param_1[0x1a] = param_1[0x1a] | 5;
        }
        if (iVar2 << 0x1e < 0) {
          param_1[0x1a] = param_1[0x1a] | 10;
        }
        if (iVar2 << 0x1d < 0) {
          uVar3 = param_1[0x1b] | 7;
        }
        else {
          uVar3 = param_1[0x1b] | 3;
        }
        param_1[0x1b] = uVar3;
        if (iVar2 << 0x1c < 0) {
          param_1[0x1b] = param_1[0x1b] | 8;
        }
        if (iVar2 << 0x1b < 0) {
          param_1[0x1d] = param_1[0x1d] | 8;
        }
        param_1[0x1c] = 7;
        param_1[0x1e] = 1;
      }
      *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)((int)__ptr + 0x2d);
    }
    free(__ptr);
  }
  FUN_00020b74(param_1);
  uVar3 = if_nametoindex(__ifname);
  __s2 = DAT_00021264;
  param_1[0x11] = uVar3;
  iVar2 = strncmp(__ifname,__s2,4);
  if (iVar2 == 0) {
    FUN_000139b0(&local_38,__ifname,0x11);
    local_38 = DAT_00021268;
    FUN_000210ec(param_1,&local_38);
  }
  FUN_0002199c(param_1[1],param_1[0x11],1,5);
  if (bVar4) {
    FUN_00013bbe(0,0,DAT_0002126c,param_1,*param_1);
  }
  return 0;
}



/* ===== FUN_00021270 @ 00021270 size=312 ===== */

undefined4 * FUN_00021270(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  int iVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char acStack_164 [92];
  stat64 sStack_108;
  char acStack_a0 [132];
  
  __ptr = (undefined4 *)FUN_000139a8(0xb8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    FUN_000139b0(__ptr + 4,param_2,0x11);
    snprintf(acStack_a0,0x80,DAT_000213a8,param_2);
    iVar2 = stat64(acStack_a0,&sStack_108);
    if (iVar2 == 0) {
      *(undefined1 *)((int)__ptr + 0x21) = 0;
      __ptr[0x2c] = 1;
      snprintf(acStack_164,0x59,DAT_000213ac,__ptr + 4);
      iVar2 = open64(acStack_164,0);
      if (-1 < iVar2) {
        sVar3 = read(iVar2,(char *)((int)__ptr + 0x21),0x1f);
        close(iVar2);
        if (-1 < sVar3) {
          *(undefined1 *)((int)__ptr + sVar3 + 0x21) = 0;
          pcVar4 = strchr((char *)((int)__ptr + 0x21),10);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
        }
      }
    }
    iVar2 = socket(2,2,0);
    __ptr[2] = iVar2;
    if (iVar2 < 0) {
      perror(DAT_000213b0);
    }
    else {
      puVar5 = (undefined4 *)FUN_000139a8(0xc);
      uVar1 = DAT_000213b4;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = __ptr;
        puVar5[1] = uVar1;
        puVar5[2] = DAT_000213b8;
        iVar2 = FUN_00021938();
        __ptr[1] = iVar2;
        if (iVar2 == 0) {
          free(puVar5);
        }
        else {
          puVar5 = (undefined4 *)FUN_000139a8(0x1c);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = __ptr;
            FUN_000139b0(puVar5 + 1,param_2,0x10);
            puVar5[5] = DAT_000213bc;
            puVar5[6] = DAT_000213c0;
            iVar2 = FUN_00021c84(puVar5);
            __ptr[0x15] = iVar2;
            if (iVar2 == 0) {
              free(puVar5);
            }
            __ptr[3] = 0xffffffff;
            iVar2 = FUN_0002110e(__ptr);
            if (-1 < iVar2) {
              FUN_000209c0(__ptr,7,1);
              return __ptr;
            }
          }
          FUN_00021d10(__ptr[0x15]);
          FUN_00021910(__ptr[1]);
        }
        close(__ptr[2]);
      }
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_000213c4 @ 000213c4 size=1134 ===== */

void FUN_000213c4(undefined4 *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  char *pcVar4;
  size_t sVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  void *pvVar12;
  void *__ptr;
  void *pvVar13;
  uint *puVar14;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  void *local_84;
  size_t local_80;
  
  if ((*(int *)(param_2 + 4) != param_1[0x11]) && (*(int *)(param_2 + 4) != param_1[0x12])) {
    puVar1 = param_3;
    iVar2 = param_4;
    if (param_1[0x13] == 0) {
      return;
    }
    while( true ) {
      if (iVar2 < 1) {
        return;
      }
      uVar10 = (uint)*puVar1;
      if (uVar10 < 4) {
        return;
      }
      if (iVar2 < (int)uVar10) {
        return;
      }
      if (puVar1[1] == 3) break;
      uVar10 = uVar10 + 3 & 0xfffffffc;
      puVar1 = (ushort *)((int)puVar1 + uVar10);
      iVar2 = iVar2 - uVar10;
    }
    iVar2 = strcmp((char *)(puVar1 + 2),(char *)(param_1 + 4));
    if (iVar2 != 0) {
      return;
    }
    uVar10 = if_nametoindex((char *)(param_1 + 4));
    param_1[0x11] = uVar10;
    FUN_0002110e(param_1);
  }
  if (param_1[0x14] == 0) {
    if ((*(uint *)(param_2 + 8) & 1) != 0) goto LAB_0002145e;
    param_1[0x14] = 1;
    FUN_0001eb50(*param_1,0x1e);
    if (param_1[0x14] == 0) goto LAB_0002145e;
  }
  if (*(int *)(param_2 + 8) << 0x1f < 0) {
    param_1[0x14] = 0;
    FUN_0001eb50(*param_1,0x1d);
  }
LAB_0002145e:
  if ((param_1[0x25] == 1) && ((DAT_00021748 & *(uint *)(param_2 + 8)) == 0x10000)) {
    FUN_0002199c(param_1[1],param_1[0x11],0xffffffff,6);
  }
  do {
    if (((param_4 < 1) || (uVar10 = (uint)*param_3, uVar10 < 4)) || (param_4 < (int)uVar10)) {
      return;
    }
    if (param_3[1] == 0xb) {
      puVar11 = (uint *)((int)param_3 + uVar10);
      for (puVar14 = (uint *)(param_3 + 2);
          (puVar14 + 1 <= puVar11 && (local_a4 = *puVar14, 4 < (local_a4 & 0xffff)));
          puVar14 = (uint *)((int)puVar14 + (local_a4 & 0xffff))) {
        if (((int)param_1[0x22] < 0x13) ||
           ((3 < ((local_a4 >> 0x10) + 0x73fa & 0xffff) && (local_a4 >> 0x10 != 0x8c02)))) {
          puVar8 = &local_a4;
          puVar9 = puVar14;
          do {
            puVar6 = puVar9 + 2;
            uVar10 = puVar9[1];
            *puVar8 = *puVar9;
            puVar8[1] = uVar10;
            puVar8 = puVar8 + 2;
            puVar9 = puVar6;
          } while (puVar6 != puVar14 + 4);
          *puVar8 = *puVar6;
          puVar8 = puVar14 + 3;
        }
        else {
          local_9c = puVar14[1];
          uStack_98 = puVar14[2];
          puVar8 = puVar14 + 2;
          local_94 = puVar14[3];
        }
        if (local_a4._2_2_ == 0x8c06) {
          if (puVar11 < (uint *)((int)puVar8 + (local_9c & 0xffff))) break;
          uVar3 = *param_1;
          if ((local_9c & 0xffff) < 0x1c) goto LAB_000215a4;
          memset(&local_8c,0,100);
          puVar9 = &local_90;
          puVar6 = (uint *)0x2;
          local_90 = ((*puVar8 ^ 4) & 7) >> 2;
LAB_0002162a:
          FUN_0001eb50(uVar3,puVar6,puVar9);
        }
        else {
          if (local_a4._2_2_ < 0x8c07) {
            if (local_a4._2_2_ == 0x8b19) {
              param_1[0x2b] = 1;
              FUN_00013c64(DAT_00021854,param_1,*param_1);
              puVar9 = (uint *)0x0;
              puVar6 = (uint *)0x3;
            }
            else {
              if (local_a4._2_2_ == 0x8c02) {
                uVar10 = local_9c & 0xffff;
                if (((uint *)((int)puVar8 + uVar10) <= puVar11) &&
                   (__s1 = malloc(uVar10 + 1), __s1 != (char *)0x0)) {
                  memcpy(__s1,puVar8,uVar10);
                  uVar3 = *param_1;
                  __s1[uVar10] = '\0';
                  memset(&local_90,0,0x68);
                  iVar2 = strncmp(__s1,DAT_00021750,0x21);
                  if (iVar2 == 0) {
                    pcVar4 = strstr(__s1,DAT_00021754);
                    uVar7 = 2;
                    local_90 = (uint)(pcVar4 != (char *)0x0);
LAB_00021688:
                    FUN_0001eb50(uVar3,uVar7,&local_90);
                  }
                  else {
                    iVar2 = strncmp(__s1,DAT_00021758,0x11);
                    if (iVar2 == 0) {
                      pcVar4 = __s1 + 0x11;
                      sVar5 = strspn(pcVar4,DAT_0002175c);
                      if ((sVar5 != 0) && (-1 < (int)(sVar5 << 0x1f))) {
                        sVar5 = (int)sVar5 / 2;
                        pvVar12 = malloc(sVar5);
                        if ((pvVar12 == (void *)0x0) ||
                           (iVar2 = FUN_0001333a(pcVar4,pvVar12,sVar5), iVar2 < 0)) {
LAB_000216c0:
                          __ptr = (void *)0x0;
                        }
                        else {
                          pcVar4 = pcVar4 + sVar5 * 2;
                          __ptr = (void *)0x0;
                          local_84 = (void *)0x0;
                          local_80 = 0;
                          local_8c = pvVar12;
                          local_88 = sVar5;
                          iVar2 = strncmp(pcVar4,DAT_00021760,9);
                          pvVar13 = local_84;
                          sVar5 = local_80;
                          if (iVar2 == 0) {
                            sVar5 = strspn(pcVar4 + 9,DAT_0002175c);
                            if ((sVar5 != 0) && (-1 < (int)(sVar5 << 0x1f))) {
                              sVar5 = (int)sVar5 / 2;
                              __ptr = malloc(sVar5);
                              if (__ptr != (void *)0x0) {
                                iVar2 = FUN_0001333a(pcVar4 + 9,__ptr,sVar5);
                                pvVar13 = __ptr;
                                if (-1 < iVar2) goto LAB_0002173c;
                                goto LAB_000216c2;
                              }
                            }
                            goto LAB_000216c0;
                          }
LAB_0002173c:
                          local_80 = sVar5;
                          local_84 = pvVar13;
                          FUN_0001eb50(uVar3,4,&local_90);
                        }
LAB_000216c2:
                        free(__ptr);
                        free(pvVar12);
                      }
                    }
                    else {
                      iVar2 = strncmp(__s1,DAT_00021850,0x11);
                      if ((iVar2 == 0) && (iVar2 = FUN_00013276(__s1 + 0x11,&local_90), iVar2 == 0))
                      {
                        uVar7 = 7;
                        goto LAB_00021688;
                      }
                    }
                  }
                  free(__s1);
                  goto LAB_000215a4;
                }
                break;
              }
              if (local_a4._2_2_ != 0x8b15) goto LAB_000215a4;
              pvVar12 = (void *)param_1[0x16];
              if ((((((uStack_a0._2_1_ == '\0' && uStack_a0._3_1_ == '\0') && (char)local_9c == '\0'
                     ) && local_9c._1_1_ == '\0') && local_9c._2_1_ == '\0') &&
                   local_9c._3_1_ == '\0') ||
                 (iVar2 = memcmp((void *)((int)&uStack_a0 + 2),DAT_0002174c,6), iVar2 == 0)) {
                free(pvVar12);
                param_1[0x16] = 0;
                free((void *)param_1[0x18]);
                puVar6 = (uint *)0x1;
                param_1[0x18] = 0;
                puVar9 = (uint *)0x0;
              }
              else {
                pvVar13 = (void *)param_1[0x18];
                if ((pvVar12 != (void *)0x0) || (pvVar13 != (void *)0x0)) {
                  memset(&local_90,0,0x68);
                  if (pvVar12 != (void *)0x0) {
                    local_88 = param_1[0x17];
                    local_8c = pvVar12;
                  }
                  if (pvVar13 != (void *)0x0) {
                    local_80 = param_1[0x19];
                    local_84 = pvVar13;
                  }
                  FUN_0001eb50(*param_1,4,&local_90);
                  free((void *)param_1[0x16]);
                  param_1[0x16] = 0;
                  free((void *)param_1[0x18]);
                  param_1[0x18] = 0;
                }
                puVar6 = (uint *)0x0;
                puVar9 = puVar6;
              }
            }
LAB_00021564:
            uVar3 = *param_1;
            goto LAB_0002162a;
          }
          if (local_a4._2_2_ == 0x8c08) {
            uVar10 = local_9c & 0xffff;
            if (puVar11 < (uint *)((int)puVar8 + uVar10)) break;
            free((void *)param_1[0x18]);
            pvVar12 = malloc(uVar10);
            param_1[0x18] = pvVar12;
            if (pvVar12 == (void *)0x0) {
              param_1[0x19] = 0;
            }
            else {
              memcpy(pvVar12,puVar8,uVar10);
              param_1[0x19] = uVar10;
            }
          }
          else if (local_a4._2_2_ < 0x8c08) {
            uVar10 = local_9c & 0xffff;
            if (puVar11 < (uint *)((int)puVar8 + uVar10)) break;
            free((void *)param_1[0x16]);
            pvVar12 = malloc(uVar10);
            param_1[0x16] = pvVar12;
            if (pvVar12 == (void *)0x0) {
              param_1[0x17] = 0;
            }
            else {
              memcpy(pvVar12,puVar8,uVar10);
              param_1[0x17] = uVar10;
            }
          }
          else if (local_a4._2_2_ == 0x8c09) {
            if (puVar11 < (uint *)((int)puVar8 + (local_9c & 0xffff))) break;
            if (0x17 < (local_9c & 0xffff)) {
              memset((void *)((int)&local_8c + 2),0,0x62);
              local_90 = *(uint *)((int)puVar8 + 10);
              puVar9 = &local_90;
              puVar6 = (uint *)0x6;
              local_8c = (void *)CONCAT22(local_8c._2_2_,*(ushort *)((int)puVar8 + 0xe));
              local_88 = puVar8[1];
              local_84 = (void *)(*puVar8 & 1);
              goto LAB_00021564;
            }
          }
        }
LAB_000215a4:
      }
    }
    else if (param_3[1] == 3) {
      FUN_0002001c(param_1,param_3 + 2,uVar10 - 4,0);
    }
    uVar10 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar10;
    param_3 = (ushort *)((int)param_3 + uVar10);
  } while( true );
}



/* ===== FUN_00021860 @ 00021860 size=42 ===== */

void FUN_00021860(undefined4 *param_1,code *UNRECOVERED_JUMPTABLE,int *param_3)

{
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (0xf < *param_3 - 0x10U)) {
                    /* WARNING: Could not recover jumptable at 0x00021884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1,param_3 + 4,param_3 + 8,*param_3 + -0x20);
    return;
  }
  return;
}



/* ===== FUN_0002188a @ 0002188a size=134 ===== */

void FUN_0002188a(int param_1,int *param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  socklen_t local_2030;
  sockaddr asStack_202c [512];
  
  iVar5 = 10;
  do {
    local_2030 = 0xc;
    sVar1 = recvfrom(param_1,asStack_202c[0].sa_data + 10,0x2000,0x40,asStack_202c,&local_2030);
    pcVar4 = asStack_202c[0].sa_data + 10;
    if (sVar1 < 0) {
      return;
    }
    for (; ((0xf < sVar1 && (0xf < *(uint *)pcVar4)) && ((int)*(uint *)pcVar4 <= sVar1));
        pcVar4 = (char *)((int)pcVar4 + uVar3)) {
      if ((short)*(uint *)((int)pcVar4 + 4) == 0x10) {
        uVar2 = *(undefined4 *)(*param_2 + 4);
LAB_000218fc:
        FUN_00021860(param_2,uVar2,pcVar4);
      }
      else if ((short)*(uint *)((int)pcVar4 + 4) == 0x11) {
        uVar2 = *(undefined4 *)(*param_2 + 8);
        goto LAB_000218fc;
      }
      uVar3 = *(uint *)pcVar4 + 3 & 0xfffffffc;
      sVar1 = sVar1 - uVar3;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}



/* ===== FUN_00021910 @ 00021910 size=40 ===== */

void FUN_00021910(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (-1 < (int)param_1[1]) {
    FUN_00013bb8();
    close(param_1[1]);
  }
  free((void *)*param_1);
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00021938 @ 00021938 size=96 ===== */

undefined4 * FUN_00021938(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  sockaddr local_1c;
  
  puVar1 = (undefined4 *)FUN_000139a8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    iVar2 = socket(0x10,3,0);
    puVar1[1] = iVar2;
    if (-1 < iVar2) {
      local_1c.sa_data[0] = '\0';
      local_1c.sa_data[1] = '\0';
      local_1c.sa_data[2] = '\0';
      local_1c.sa_data[3] = '\0';
      local_1c.sa_data[4] = '\0';
      local_1c.sa_data[5] = '\0';
      local_1c.sa_family = 0x10;
      local_1c.sa_data[6] = '\x01';
      local_1c.sa_data[7] = '\0';
      local_1c.sa_data[8] = '\0';
      local_1c.sa_data[9] = '\0';
      iVar2 = bind(puVar1[1],&local_1c,0xc);
      if (-1 < iVar2) {
        FUN_00013b4c(puVar1[1],DAT_00021998,puVar1,0);
        return puVar1;
      }
    }
    FUN_00021910(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0002199c @ 0002199c size=144 ===== */

int FUN_0002199c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  ssize_t sVar2;
  size_t local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_34 = 0;
  local_1c = 0;
  local_40 = 0x20;
  uStack_3c = DAT_00021a2c;
  local_24 = 0;
  uStack_18 = 0;
  local_38 = *DAT_00021a30 + 1;
  *DAT_00021a30 = local_38;
  local_2c = param_2;
  uStack_20 = uStack_30;
  uStack_14 = uStack_30;
  if (param_3 != -1) {
    puVar1 = (undefined2 *)FUN_00013400(&uStack_20);
    puVar1[1] = 0x11;
    *puVar1 = 5;
    *(char *)(puVar1 + 2) = (char)param_3;
    local_40 = (local_40 + 3 & 0xfffffffc) + 5;
  }
  if (param_4 != -1) {
    puVar1 = (undefined2 *)FUN_00013400((int)&local_40 + (local_40 + 3 & 0xfffffffc));
    puVar1[1] = 0x10;
    *puVar1 = 5;
    *(char *)(puVar1 + 2) = (char)param_4;
    local_40 = (local_40 + 3 & 0xfffffffc) + 5;
  }
  sVar2 = send(*(int *)(param_1 + 4),&local_40,local_40,0);
  return sVar2 >> 0x1f;
}



/* ===== FUN_00021a34 @ 00021a34 size=112 ===== */

int FUN_00021a34(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (-1 < param_1) {
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_30 = 0;
    local_20 = 0;
    local_18 = 0;
    uStack_1c = uStack_2c;
    uStack_14 = uStack_2c;
    FUN_000139b0(&local_30,param_2,0x10);
    iVar1 = ioctl(param_1,0x8913,&local_30);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        if ((local_20 & 1) == 0) {
          return 0;
        }
        uVar2 = (ushort)local_20 & 0xfffe;
      }
      else {
        if ((local_20 & 1) != 0) {
          return 0;
        }
        uVar2 = (ushort)local_20 | 1;
      }
      local_20 = CONCAT22(local_20._2_2_,uVar2);
      iVar1 = ioctl(param_1,0x8914,&local_30);
      return -(uint)(iVar1 != 0);
    }
  }
  return -1;
}



/* ===== FUN_00021c84 @ 00021c84 size=130 ===== */

undefined4 * FUN_00021c84(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 *__ptr;
  int iVar1;
  ssize_t sVar2;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  __ptr = (undefined4 *)FUN_000139a8(0xc);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    iVar1 = open64(DAT_00021d08,0);
    __ptr[1] = iVar1;
    if (-1 < iVar1) {
      iVar1 = fcntl64(iVar1,4,0x800);
      if (-1 < iVar1) {
        while (sVar2 = read(__ptr[1],&uStack_18,8), -1 < sVar2) {
          if ((((sVar2 == 8) && (local_14._1_1_ == '\0')) && ((local_14 & 0xff) == 1)) &&
             ((local_14._3_1_ != '\0' || (local_14._2_1_ != '\0')))) {
            __ptr[2] = 1;
          }
        }
        FUN_00013b4c(__ptr[1],DAT_00021d0c,__ptr,0);
        return __ptr;
      }
      close(__ptr[1]);
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00021d10 @ 00021d10 size=40 ===== */

void FUN_00021d10(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (-1 < (int)param_1[1]) {
    FUN_00013bb8();
    close(param_1[1]);
  }
  free((void *)*param_1);
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00021d38 @ 00021d38 size=6 ===== */

undefined4 FUN_00021d38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00021d80 @ 00021d80 size=14 ===== */

undefined4 FUN_00021d80(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x20);
  return 0;
}



/* ===== FUN_00021d8e @ 00021d8e size=98 ===== */

ssize_t FUN_00021d8e(int *param_1,char *param_2,uint param_3,void *param_4,size_t param_5)

{
  ssize_t sVar1;
  sockaddr local_24;
  undefined2 local_14;
  undefined2 uStack_12;
  
  if (param_1 == (int *)0x0) {
    sVar1 = -1;
  }
  else if (param_1[0xb] == 0) {
    local_24.sa_data._2_4_ = param_1[6];
    local_24.sa_data._0_2_ = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    local_24.sa_data[6] = '\0';
    local_24.sa_data[7] = '\0';
    local_24.sa_data[8] = '\0';
    local_24.sa_data[9] = '\x06';
    local_24.sa_data._10_4_ = *(undefined4 *)param_2;
    local_14 = *(undefined2 *)(param_2 + 4);
    uStack_12 = 0;
    local_24.sa_family = 0x11;
    sVar1 = sendto(*param_1,param_4,param_5,0,&local_24,0x14);
  }
  else {
    sVar1 = send(*param_1,param_4,param_5,0);
  }
  return sVar1;
}



/* ===== FUN_00021df0 @ 00021df0 size=228 ===== */

int * FUN_00021df0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                  int param_6)

{
  ushort uVar1;
  int *__ptr;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  sockaddr local_64;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  
  __ptr = (int *)FUN_000139a8(0x30);
  if (__ptr != (int *)0x0) {
    uVar1 = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    FUN_000139b0(__ptr + 1,param_1,0x11);
    __ptr[9] = param_4;
    if (param_6 == 0) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
    __ptr[10] = param_5;
    __ptr[0xb] = param_6;
    iVar2 = socket(0x11,iVar2,(uint)uVar1);
    *__ptr = iVar2;
    if (-1 < iVar2) {
      uVar3._0_1_ = '\0';
      uVar3._1_1_ = '\0';
      uVar3._2_1_ = '\0';
      uVar3._3_1_ = '\0';
      uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_50 = 0;
      local_40 = 0;
      uStack_3e = 0;
      uStack_3c = (undefined2)uVar4;
      uStack_3a = (undefined2)((uint)uVar4 >> 0x10);
      local_38 = 0;
      uStack_4c = uVar4;
      uStack_34 = uVar4;
      FUN_000139b0(&local_50,__ptr + 1,0x10);
      iVar2 = ioctl(*__ptr,0x8933,&local_50);
      if (-1 < iVar2) {
        local_64.sa_data._2_4_ = CONCAT22(uStack_3e,local_40);
        local_64.sa_family = 0x11;
        __ptr[6] = local_64.sa_data._2_4_;
        local_64.sa_data._0_2_ = uVar1;
        local_64.sa_data._6_4_ = uVar3;
        local_64.sa_data._10_4_ = uVar3;
        uStack_54 = uVar4;
        iVar2 = bind(*__ptr,&local_64,0x14);
        if ((-1 < iVar2) &&
           (iVar2 = ioctl(*__ptr,0x8927,&local_50), uVar3 = DAT_00021ed4, -1 < iVar2)) {
          __ptr[7] = CONCAT22(uStack_3c,uStack_3e);
          *(undefined2 *)(__ptr + 8) = uStack_3a;
          FUN_00013b4c(*__ptr,uVar3,__ptr,0);
          return __ptr;
        }
      }
      close(*__ptr);
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_00021ed8 @ 00021ed8 size=34 ===== */

void FUN_00021ed8(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (-1 < *param_1) {
    FUN_00013bb8();
    close(*param_1);
  }
  (*(code *)PTR_free_00037148)(param_1);
  return;
}



/* ===== FUN_00021efa @ 00021efa size=126 ===== */

undefined4 FUN_00021efa(int param_1,undefined4 param_2,uint param_3)

{
  int __fd;
  int iVar1;
  short *psVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  __fd = socket(2,2,0);
  if (-1 < __fd) {
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_24 = uStack_34;
    uStack_1c = uStack_34;
    FUN_000139b0(&local_38,param_1 + 4,0x10);
    iVar1 = ioctl(__fd,0x8915,&local_38);
    if (iVar1 < 0) {
      close(__fd);
    }
    else {
      close(__fd);
      psVar2 = (short *)FUN_00013400(&local_28);
      if (*psVar2 == 2) {
        pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(psVar2 + 2));
        uVar4 = FUN_000139b0(param_2,pcVar3,param_3);
        if (param_3 <= uVar4) {
          return 0xffffffff;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00021f78 @ 00021f78 size=2 ===== */

void FUN_00021f78(void)

{
  return;
}



/* ===== FUN_00022044 @ 00022044 size=24 ===== */

ulonglong FUN_00022044(uint param_1,uint param_2)

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



/* ===== FUN_0002204c @ 0002204c size=196 ===== */

uint FUN_0002204c(uint param_1,uint param_2)

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



/* ===== FUN_00022120 @ 00022120 size=48 ===== */

void FUN_00022120(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002204c();
    return;
  }
  raise(8);
  return;
}



/* ===== _DT_FINI @ 00022150 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00038000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00038004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00038008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00038010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00038014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00038018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 00038020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00038024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 00038028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00038030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00038034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00038038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0003803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rmdir @ 00038040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 00038044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00038048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0003804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00038050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00038054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chown @ 00038058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0003805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00038060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00038064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendmsg @ 00038068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 00038070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00038074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00038078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0003807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00038080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 00038084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00038088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00038090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00038094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00038098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 0003809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::if_nametoindex @ 000380a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint if_nametoindex(char *__ifname)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000380a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000380a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 000380ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 000380b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000380b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000380b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 000380bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000380c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000380c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000380c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000380cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000380d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000380d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000380d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000380dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000380e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000380e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 000380e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 000380ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000380f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000380f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000380f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam @ 000380fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 00038100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00038104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 00038108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00038110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 00038114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00038118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0003811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 00038120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00038124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00038128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00038130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00038134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 00038138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0003813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00038140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


