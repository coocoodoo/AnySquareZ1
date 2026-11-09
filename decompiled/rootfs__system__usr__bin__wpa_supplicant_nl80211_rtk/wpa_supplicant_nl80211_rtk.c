// wpa_supplicant_nl80211_rtk — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011828 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001184c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0004e00c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004e014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00011874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0004e018)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00011880 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004e01c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 0001189c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0004e024)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 000118a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0004e028)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_rdlock @ 000118b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_0004e02c)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000118c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004e030)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::inet_pton @ 000118cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inet_pton_0004e034)(__af);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 000118d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0004e038)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 000118e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004e03c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000118f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004e040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getprotobynumber @ 000118fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

protoent * getprotobynumber(int __proto)

{
  protoent *ppVar1;
  
  ppVar1 = (protoent *)(*(code *)PTR_getprotobynumber_0004e044)(__proto);
  return ppVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004e048)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getprotobyname @ 00011924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

protoent * getprotobyname(char *__name)

{
  protoent *ppVar1;
  
  ppVar1 = (protoent *)(*(code *)PTR_getprotobyname_0004e050)(__name);
  return ppVar1;
}



/* ===== <EXTERNAL>::getpagesize @ 00011930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpagesize_0004e054)();
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 0001193c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0004e058)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00011948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0004e05c)(__base);
  return;
}



/* ===== <EXTERNAL>::fscanf @ 00011954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0004e060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011960 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004e064)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 0001196c size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0004e068)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 0001197c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004e06c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0004e070)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 00011994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0004e074)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 000119a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0004e078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000119ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004e07c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 000119b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0004e080)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 000119c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004e084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::recvfrom @ 000119d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_0004e088)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000119dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0004e08c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_unlock @ 000119e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_0004e090)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::rmdir @ 000119f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_0004e094)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00011a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0004e098)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00011a0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0004e09c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::chown @ 00011a18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chown_0004e0a0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00011a24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0004e0a4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 00011a30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0004e0a8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 00011a3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004e0ac)();
  return;
}



/* ===== <EXTERNAL>::chmod @ 00011a48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_0004e0b0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getnameinfo @ 00011a54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getnameinfo_0004e0b4)(__sa);
  return iVar1;
}



/* ===== <EXTERNAL>::alarm @ 00011a60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0004e0b8)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004e0bc)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00011a78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0004e0c0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0004e0c4)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 00011a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_0004e0c8)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::fprintf @ 00011aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0004e0cc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011ab0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0004e0d0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00011abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0004e0d4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::if_nametoindex @ 00011ac8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint if_nametoindex(char *__ifname)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_if_nametoindex_0004e0d8)(__ifname);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011ad4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004e0dc)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00011ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0004e0e0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00011aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0004e0e4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 00011af8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0004e0e8)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011b04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0004e0ec)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::rand @ 00011b10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0004e0f0)();
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00011b1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0004e0f4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004e0f8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sendmsg @ 00011b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendmsg_0004e0fc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0004e100)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_rwlock_wrlock @ 00011b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_0004e104)(__rwlock);
  return iVar1;
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 00011b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
  cmsghdr *pcVar1;
  
  pcVar1 = (cmsghdr *)(*(code *)PTR___cmsg_nxthdr_0004e108)(__mhdr);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011b64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0004e10c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0004e110)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00011b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0004e118)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sendto @ 00011b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0004e11c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004e120)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004e124)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0004e128)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00011bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_0004e12c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fread @ 00011bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0004e130)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 00011bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0004e138)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0004e13c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0004e140)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0004e144)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 00011c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_0004e148)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00011c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004e14c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00011c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0004e150)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0004e154)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00011c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0004e158)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00011c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0004e15c)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::time @ 00011c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0004e160)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0004e164)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0004e168)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00011c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_0004e16c)(__buf);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcspn @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0004e170)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0004e174)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::getsockopt @ 00011cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_0004e178)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getaddrinfo @ 00011cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getaddrinfo_0004e17c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0004e180)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0004e184)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004e188)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0004e18c)(__status);
  return;
}



/* ===== <EXTERNAL>::inet_ntop @ 00011cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntop_0004e190)(__af);
  return pcVar1;
}



/* ===== <EXTERNAL>::getgrnam @ 00011d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrnam_0004e194)(__name);
  return pgVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0004e198)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::gmtime @ 00011d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_0004e19c)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strspn @ 00011d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0004e1a0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::daemon @ 00011d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_0004e1a4)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004e1a8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__assert @ 00011d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0004e1ac)(__assertion);
  return;
}



/* ===== <EXTERNAL>::strchr @ 00011d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0004e1b0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0004e1b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::vasprintf @ 00011d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_0004e1b8)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::recvmsg @ 00011d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvmsg_0004e1bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00011d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0004e1c0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00011d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0004e1c4)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011da4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004e1c8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004e1cc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0004e1d0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004e1d4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011dd4 size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004e1d8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::free @ 00011dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004e1d8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::getsockname @ 00011de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_0004e1dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0004e1e0)(__filename);
  return pFVar1;
}



/* ===== _FINI_1 @ 00011e00 size=48 ===== */

void _FINI_1(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_00011e08;
  if (DAT_00011e08 == 0) {
    return;
  }
  FUN_0002a6cc();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x58) + 0x18);
  piVar3 = *(int **)(*(int *)(iVar1 + 0x58) + 0x1c);
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  return;
}



/* ===== FUN_00011e0c @ 00011e0c size=438 ===== */

undefined4 FUN_00011e0c(int param_1,char **param_2)

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
  
  iVar2 = FUN_00014414();
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
    piVar3 = (int *)FUN_0001449c(0x18);
    __file = DAT_00011ff8;
    if (piVar3 != (int *)0x0) {
      do {
        iVar4 = open64(__file,2);
        if (2 < iVar4) {
          close(iVar4);
          break;
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      piVar1 = DAT_00012008;
      iVar9 = 1;
      __ptr = piVar3;
      while (iVar4 = getopt(param_1,param_2,DAT_00011ffc), -1 < iVar4) {
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
          FUN_000211cc();
          goto switchD_00011e8e_caseD_4c;
        case 0x4b:
          local_58 = local_58 + 1;
          break;
        case 0x4c:
          goto switchD_00011e8e_caseD_4c;
        case 0x4e:
          iVar9 = iVar9 + 1;
          piVar5 = realloc(__ptr,iVar9 * 0x18);
          if (piVar5 == (int *)0x0) goto LAB_00011efc;
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
          local_60 = (void *)FUN_0001437c(*piVar1);
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
          puts(DAT_00012000);
          goto LAB_00011efc;
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
          puts((char *)*DAT_00012004);
          goto switchD_00011e8e_caseD_4c;
        }
      }
      iVar2 = FUN_0001f094(&local_68);
      if (iVar2 == 0) {
LAB_00011efc:
        uVar7 = 0xffffffff;
      }
      else {
        iVar8 = 0;
        piVar3 = __ptr;
        do {
          if (((*piVar3 == 0) && (piVar3[1] == 0)) || (piVar3[4] == 0)) {
            if ((iVar9 != 1) || ((local_50 == 0 && (iStack_4c == 0)))) {
              FUN_000211cc();
LAB_00011fcc:
              uVar7 = 0xffffffff;
              goto LAB_00011ff0;
            }
            break;
          }
          iVar6 = FUN_0001ebbc(iVar2,piVar3);
          iVar8 = iVar8 + 1;
          if (iVar6 == 0) goto LAB_00011fcc;
          piVar3 = piVar3 + 6;
        } while (iVar9 != iVar8);
        uVar7 = FUN_0001efca(iVar2);
LAB_00011ff0:
        FUN_0001f01c(iVar2);
      }
switchD_00011e8e_caseD_4c:
      free(__ptr);
      free(local_60);
      FUN_00014418();
      return uVar7;
    }
  }
  return 0xffffffff;
}



/* ===== _INIT_1 @ 0001200c size=24 ===== */

void _INIT_1(void)

{
  DAT_0004e7d8 = getpagesize();
  return;
}



/* ===== _INIT_2 @ 00012024 size=184 ===== */

void _INIT_2(void)

{
  char *__s1;
  int iVar1;
  
  __s1 = getenv("NLCB");
  if (__s1 == (char *)0x0) {
    return;
  }
  iVar1 = strcasecmp(__s1,"default");
  if (iVar1 == 0) {
    DAT_0004e884 = iVar1;
    return;
  }
  iVar1 = strcasecmp(__s1,"verbose");
  if (iVar1 == 0) {
    DAT_0004e884 = 1;
    return;
  }
  iVar1 = strcasecmp(__s1,"debug");
  if (iVar1 == 0) {
    DAT_0004e884 = 2;
    return;
  }
  fwrite("Unknown value for NLCB, valid values: {default | verbose | debug}\n",1,0x42,stderr);
  return;
}



/* ===== _INIT_3 @ 000120dc size=92 ===== */

void _INIT_3(void)

{
  char *__nptr;
  long lVar1;
  char *local_c;
  
  __nptr = getenv("NLDBG");
  if ((__nptr != (char *)0x0) && (lVar1 = strtol(__nptr,&local_c,0), local_c != __nptr)) {
    DAT_0004e88c = lVar1;
  }
  DAT_0004e4a4 = stderr;
  return;
}



/* ===== _INIT_4 @ 00012138 size=456 ===== */

int _INIT_4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_r4;
  int iVar4;
  
  piVar1 = DAT_00012140;
  if (DAT_00012140[2] != 0x10) {
    return -0x1a;
  }
  if (((uint)DAT_00012140[1] < 4) || (piVar3 = (int *)DAT_00012140[0x16], piVar3 == (int *)0x0)) {
    return -7;
  }
  iVar4 = DAT_00012140[0x19];
  iVar2 = DAT_00012140[0x17];
  *piVar3 = DAT_00012140[1] - 4;
  piVar3[3] = (int)piVar1;
  piVar3[1] = iVar2;
  piVar3[2] = iVar4;
  piVar1[8] = (int)&DAT_00034570;
  iVar2 = FUN_000346c0(piVar3);
  if (iVar2 < 0) {
    return iVar2;
  }
  if ((*piVar1 != 0) && (iVar2 = piVar1[0x13], iVar2 != 0)) {
    if ((*(int *)(iVar2 + 0x2c) != 0) && (*(int *)(iVar2 + 0x24) == 0)) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/cache_mngt.c",0x102,
              "nl_cache_mngt_register");
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/cache_mngt.c",0x102);
    }
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7b8);
    iVar2 = FUN_0002a2b0(*piVar1);
    piVar3 = DAT_0004e7b4;
    if (iVar2 == 0) {
      piVar1[5] = 0;
      DAT_0004e7b4 = piVar1;
      piVar1[0x14] = (int)piVar3;
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7b8);
      iVar2 = 0;
      if (0 < DAT_0004e88c) {
        piVar3 = __errno_location();
        iVar4 = *piVar3;
        fprintf(stderr,"DBG<1>%20s:%-4u %s: Registered cache operations %s\n","lib/cache_mngt.c",
                0x10f,"nl_cache_mngt_register",*piVar1,unaff_r4);
        *piVar3 = iVar4;
      }
    }
    else {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7b8);
      iVar2 = -6;
    }
    return iVar2;
  }
  return -7;
}



/* ===== entry @ 00012144 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0004e134)
            (DAT_00012178,param_2,&stack0x00000004,DAT_0001217c,DAT_00012174,param_1);
  return;
}



/* ===== FUN_00012180 @ 00012180 size=32 ===== */

void FUN_00012180(void)

{
  if (DAT_000121a4 == DAT_000121a0) {
    return;
  }
  if (DAT_000121a8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000121a8)();
  return;
}



/* ===== _FINI_0 @ 000121e4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012220;
  if (*DAT_00012220 != '\0') {
    return;
  }
  FUN_00012180();
  if (DAT_00012224 != 0) {
    __deregister_frame_info(DAT_00012228);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001222c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012250 != 0) {
    __register_frame_info(DAT_00012258,DAT_00012254);
  }
  if ((DAT_000121dc - DAT_000121d8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000121e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000121d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000121e0)();
  return;
}



/* ===== FUN_0001227c @ 0001227c size=42 ===== */

undefined1 * FUN_0001227c(void *param_1,size_t param_2)

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



/* ===== FUN_00012614 @ 00012614 size=34 ===== */

char * FUN_00012614(int param_1,int param_2)

{
  char *__s;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  __s = malloc(0x14);
  if (__s != (char *)0x0) {
    snprintf(__s,0x14,DAT_00012638,*(undefined4 *)(param_2 + iVar1));
    __s[0x13] = '\0';
  }
  return __s;
}



/* ===== FUN_0001263c @ 0001263c size=104 ===== */

int FUN_0001263c(int param_1,int param_2)

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
        iVar5 = FUN_0001227c(__s,sVar3);
        return iVar5;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 - 0x20 < 0x5f);
    iVar6 = sVar3 * 2 + 1;
    iVar2 = FUN_0001449c(iVar6);
    if (iVar2 != 0) {
      FUN_00013ea0(iVar2,iVar6,__s,sVar3,iVar5,unaff_r4);
    }
  }
  return iVar2;
}



/* ===== FUN_00012660 @ 00012660 size=44 ===== */

undefined4 FUN_00012660(int param_1,int param_2,undefined4 param_3,char *param_4)

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



/* ===== FUN_00012900 @ 00012900 size=62 ===== */

undefined4 FUN_00012900(int param_1,int param_2,undefined4 param_3,char *param_4)

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



/* ===== FUN_0001293e @ 0001293e size=100 ===== */

char * FUN_0001293e(int param_1,undefined4 param_2,undefined4 param_3)

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
  pcVar2 = (char *)FUN_0001449c(iVar6);
  __format = DAT_000129ac;
  uVar1 = DAT_000129a8;
  if (pcVar2 != (char *)0x0) {
    __s = pcVar2;
    for (iVar7 = 0; iVar4 = *(int *)(param_1 + iVar7 * 4), iVar4 != 0; iVar7 = iVar7 + 1) {
      uVar5 = DAT_000129a4;
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



/* ===== FUN_000129ba @ 000129ba size=122 ===== */

void * FUN_000129ba(char *param_1,size_t *param_2)

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
        iVar3 = FUN_00013e2e(param_1,pvVar2,uVar5);
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



/* ===== FUN_00012a34 @ 00012a34 size=102 ===== */

undefined4 FUN_00012a34(int param_1,uint param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  int iVar3;
  uint local_1c;
  
  local_1c = param_2;
  iVar1 = strcmp(param_4,DAT_00012a9c);
  if (iVar1 == 0) {
    __ptr = (void *)0x0;
    local_1c = 0;
LAB_00012a4c:
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
    __ptr = (void *)FUN_000129ba(param_4,&local_1c);
    if (__ptr != (void *)0x0) {
      if (((*(uint *)(param_1 + 0x14) == 0) || (*(uint *)(param_1 + 0x14) <= local_1c)) &&
         ((*(uint *)(param_1 + 0x18) == 0 || (local_1c <= *(uint *)(param_1 + 0x18)))))
      goto LAB_00012a4c;
      free(__ptr);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00012aa0 @ 00012aa0 size=68 ===== */

undefined4 FUN_00012aa0(void *param_1,size_t *param_2,undefined4 param_3,undefined4 param_4)

{
  void *__src;
  char acStack_2c [24];
  
  __src = (void *)FUN_000129ba(param_3);
  if (__src != (void *)0x0) {
    if (*param_2 < 0x11) {
      memcpy(param_1,__src,*param_2);
      free(__src);
      snprintf(acStack_2c,0x14,DAT_00012ae4,param_4);
      return 0;
    }
    free(__src);
  }
  return 0xffffffff;
}



/* ===== FUN_00012b18 @ 00012b18 size=114 ===== */

void * FUN_00012b18(char *param_1)

{
  void *__ptr;
  char *__nptr;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  __ptr = (void *)FUN_0001449c(0x2c);
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



/* ===== FUN_00012b8a @ 00012b8a size=36 ===== */

undefined4 FUN_00012b8a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00012b18(param_4);
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



/* ===== FUN_00012bd2 @ 00012bd2 size=194 ===== */

uint FUN_00012bd2(char *param_1)

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
  __s2_00 = DAT_00012ca4;
  __s2 = DAT_00012ca0;
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
      iVar3 = strcmp(__s1,DAT_00012c94);
      if (iVar3 == 0) {
        uVar5 = uVar5 | 0x10;
      }
      else {
        iVar3 = strcmp(__s1,DAT_00012c98);
        if (iVar3 == 0) {
          uVar5 = uVar5 | 8;
        }
        else {
          iVar3 = strcmp(__s1,DAT_00012c9c);
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



/* ===== FUN_00012e12 @ 00012e12 size=128 ===== */

undefined4 FUN_00012e12(int param_1,int param_2)

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



/* ===== FUN_00012e92 @ 00012e92 size=48 ===== */

undefined4 FUN_00012e92(int *param_1)

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
    iVar1 = FUN_00012e12(param_1,piVar3);
    piVar3 = (int *)*piVar3;
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00012ec2 @ 00012ec2 size=58 ===== */

void FUN_00012ec2(void *param_1)

{
  free(*(void **)((int)param_1 + 0x10));
  free(*(void **)((int)param_1 + 0x48));
  free(*(void **)((int)param_1 + 0xcc));
  free(*(void **)((int)param_1 + 0xd8));
  free(*(void **)((int)param_1 + 0xe0));
  free(*(void **)((int)param_1 + 0xdc));
  free(param_1);
  return;
}



/* ===== FUN_00012efc @ 00012efc size=22 ===== */

void FUN_00012efc(int *param_1,code *param_2,undefined4 param_3)

{
  param_1 = (int *)*param_1;
  while (param_1 != (int *)0x0) {
    param_1 = (int *)*param_1;
    (*param_2)(param_3);
  }
  return;
}



/* ===== FUN_00012f12 @ 00012f12 size=12 ===== */

void FUN_00012f12(int *param_1,int param_2)

{
  do {
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
  } while (param_1[2] != param_2);
  return;
}



/* ===== FUN_00012f1e @ 00012f1e size=60 ===== */

int FUN_00012f1e(int *param_1)

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
  iVar2 = FUN_0001449c(0xf4);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar4 + 1;
    if (piVar5 == (int *)0x0) {
      *param_1 = iVar2;
    }
    else {
      *piVar5 = iVar2;
    }
    FUN_00012e92(param_1);
  }
  return iVar2;
}



/* ===== FUN_00012f5a @ 00012f5a size=52 ===== */

undefined4 FUN_00012f5a(undefined4 *param_1,int param_2)

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
  FUN_00012e92();
  FUN_00012ec2(puVar4);
  return 0;
}



/* ===== FUN_00012f8e @ 00012f8e size=16 ===== */

void FUN_00012f8e(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 3;
  *(undefined4 *)(param_1 + 0x4c) = 0x18;
  *(undefined4 *)(param_1 + 0x50) = 0x1e;
  *(undefined4 *)(param_1 + 0x54) = 3;
  return;
}



/* ===== FUN_00012f9e @ 00012f9e size=76 ===== */

int FUN_00012f9e(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00012fec;
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



/* ===== FUN_00012ff0 @ 00012ff0 size=122 ===== */

void * FUN_00012ff0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  __ptr = (void *)FUN_0001449c(0xd4);
  if (__ptr != (void *)0x0) {
    iVar6 = 0;
    iVar7 = 0;
    puVar5 = DAT_0001306c;
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



/* ===== FUN_00013070 @ 00013070 size=58 ===== */

undefined4 FUN_00013070(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_000130ac;
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



/* ===== FUN_000130b0 @ 000130b0 size=96 ===== */

char * FUN_000130b0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00013110;
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
          pcVar2 = (char *)(*(code *)PTR_strdup_0004e138)(DAT_00013114);
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



/* ===== FUN_00013118 @ 00013118 size=36 ===== */

void FUN_00013118(int param_1)

{
  FUN_0001dc18(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),0x1000,param_1 + 0x24,0x20);
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}



/* ===== FUN_0001313c @ 0001313c size=28 ===== */

undefined4 * FUN_0001313c(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[3];
  }
  return puVar2;
}



/* ===== FUN_00013158 @ 00013158 size=30 ===== */

void FUN_00013158(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    free((void *)*param_1);
    free((void *)param_1[1]);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_00013176 @ 00013176 size=132 ===== */

void FUN_00013176(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    FUN_00012ec2();
  }
  iVar2 = param_1[0x10];
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    FUN_00013158();
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
  free(param_1);
  return;
}



/* ===== FUN_000131fa @ 000131fa size=60 ===== */

undefined4 FUN_000131fa(int param_1,char *param_2)

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
  FUN_00013158(puVar3);
  return 0;
}



/* ===== FUN_00013236 @ 00013236 size=20 ===== */

void FUN_00013236(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000131fa(param_1,*param_2,param_3,param_4,param_4);
  param_2[3] = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 **)(param_1 + 0x40) = param_2;
  return;
}



/* ===== FUN_0001324a @ 0001324a size=82 ===== */

int FUN_0001324a(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_0001449c(0x118);
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



/* ===== FUN_0001329c @ 0001329c size=122 ===== */

int FUN_0001329c(int param_1,char *param_2,undefined4 param_3)

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
  
  iVar1 = DAT_00013318;
  iVar6 = DAT_00013318 + 0x340;
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



/* ===== FUN_0001331c @ 0001331c size=4 ===== */

undefined4 FUN_0001331c(void)

{
  return 0;
}



/* ===== FUN_00013320 @ 00013320 size=2 ===== */

void FUN_00013320(void)

{
  return;
}



/* ===== FUN_00013322 @ 00013322 size=4 ===== */

undefined4 FUN_00013322(void)

{
  return 0;
}



/* ===== FUN_00013326 @ 00013326 size=2 ===== */

void FUN_00013326(void)

{
  return;
}



/* ===== thunk_FUN_0001c79e @ 00013328 size=4 ===== */

void thunk_FUN_0001c79e(int param_1)

{
  if (*(int *)(param_1 + 0x114) != 5) {
    FUN_00014758(DAT_0001c7d0,param_1,0);
    if (*(int *)(param_1 + 0x114) == 4) {
      return;
    }
  }
  FUN_00014758(DAT_0001c7cc,param_1,0);
  return;
}



/* ===== FUN_0001332c @ 0001332c size=2 ===== */

void FUN_0001332c(void)

{
  return;
}



/* ===== FUN_0001332e @ 0001332e size=2 ===== */

void FUN_0001332e(void)

{
  return;
}



/* ===== FUN_00013330 @ 00013330 size=2 ===== */

void FUN_00013330(void)

{
  return;
}



/* ===== FUN_00013334 @ 00013334 size=2 ===== */

void FUN_00013334(void)

{
  return;
}



/* ===== FUN_0001333a @ 0001333a size=2 ===== */

void FUN_0001333a(void)

{
  return;
}



/* ===== FUN_0001333c @ 0001333c size=2 ===== */

void FUN_0001333c(void)

{
  return;
}



/* ===== FUN_00013346 @ 00013346 size=2 ===== */

void FUN_00013346(void)

{
  return;
}



/* ===== FUN_00013348 @ 00013348 size=2 ===== */

void FUN_00013348(void)

{
  return;
}



/* ===== FUN_0001334a @ 0001334a size=42 ===== */

void FUN_0001334a(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  FUN_00013f88(param_1,3,DAT_00013374,param_3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
               param_2[5]);
  return;
}



/* ===== FUN_00013378 @ 00013378 size=42 ===== */

void FUN_00013378(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  FUN_00013f88(param_1,3,DAT_000133a4,param_3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
               param_2[5]);
  return;
}



/* ===== FUN_000133a8 @ 000133a8 size=2 ===== */

void FUN_000133a8(void)

{
  return;
}



/* ===== FUN_000133aa @ 000133aa size=2 ===== */

void FUN_000133aa(void)

{
  return;
}



/* ===== FUN_000133ac @ 000133ac size=2 ===== */

void FUN_000133ac(void)

{
  return;
}



/* ===== FUN_000133ae @ 000133ae size=2 ===== */

void FUN_000133ae(void)

{
  return;
}



/* ===== FUN_000133b0 @ 000133b0 size=2 ===== */

void FUN_000133b0(void)

{
  return;
}



/* ===== FUN_000133b2 @ 000133b2 size=2 ===== */

void FUN_000133b2(void)

{
  return;
}



/* ===== FUN_000133b4 @ 000133b4 size=2 ===== */

void FUN_000133b4(void)

{
  return;
}



/* ===== FUN_000133b6 @ 000133b6 size=2 ===== */

void FUN_000133b6(void)

{
  return;
}



/* ===== FUN_000133c4 @ 000133c4 size=36 ===== */

void FUN_000133c4(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00014238(param_1 + 0x11);
  for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x100) + 0x158);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)(iVar2 + 0xd4));
    }
  }
  return;
}



/* ===== FUN_000133e8 @ 000133e8 size=58 ===== */

void FUN_000133e8(int *param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_00014238(&piStack_18);
  }
  uVar1 = DAT_00013424;
  for (iVar3 = *param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0x100) + 0x15c);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined4 *)(iVar3 + 0xd4));
    }
    if (*(int *)(iVar3 + 0x114) == 0) {
      FUN_00020ac8(iVar3,0,uVar1);
    }
  }
  return;
}



/* ===== FUN_0001342c @ 0001342c size=54 ===== */

bool FUN_0001342c(int param_1,int param_2)

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



/* ===== FUN_00013462 @ 00013462 size=132 ===== */

void FUN_00013462(int param_1,undefined4 *param_2)

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
  FUN_00014238();
  uVar1 = param_2[10];
  uVar4 = (uint)((ulonglong)uVar1 * (ulonglong)DAT_000134e8 >> 0x26);
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



/* ===== FUN_000134ec @ 000134ec size=60 ===== */

void FUN_000134ec(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = *(int *)(param_1 + 0xf4) + -1;
  *(int *)(param_1 + 0xf4) = iVar1;
  FUN_00013378(param_1,param_2 + 8,iVar2,iVar1,param_4);
  free(param_2);
  return;
}



/* ===== FUN_00013528 @ 00013528 size=68 ===== */

undefined4 * FUN_00013528(int param_1,void *param_2,void *param_3,size_t param_4)

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



/* ===== FUN_0001356c @ 0001356c size=12 ===== */

void FUN_0001356c(int param_1)

{
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  return;
}



/* ===== FUN_00013578 @ 00013578 size=170 ===== */

void FUN_00013578(int param_1,void *param_2,int param_3)

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
      iVar1 = FUN_0001342c(param_1,puVar4);
      if (iVar1 == 0) {
        if (param_2 == (void *)0x0) {
LAB_000135fa:
          if ((uint)puVar4[6] < *(uint *)(param_1 + 0xf8)) {
            puVar4[5] = puVar4[5] + 1;
          }
          uVar3 = *(uint *)(*(int *)(param_1 + 0x94) + 0x104);
          if (uVar3 <= (uint)puVar4[5]) {
            FUN_000134ec(param_1,puVar4,puVar4[5],uVar3,iVar8,pvVar9,param_3);
          }
        }
        else {
          iVar1 = 0;
          if (*(int *)((int)param_2 + 8) == 0) {
LAB_000135c0:
            iVar1 = *(int *)((int)param_2 + 0x2c);
            if (iVar1 == 0) goto LAB_000135fa;
            __s2 = (void *)((int)puVar4 + 0x26);
            iVar7 = 0;
            pvVar5 = param_2;
            do {
              if (((*(void **)((int)pvVar5 + 0xc) == (void *)0x0) ||
                  (__n = *(size_t *)((int)pvVar5 + 0x10), __n == 0)) ||
                 ((__n == puVar4[0x12] &&
                  (iVar2 = memcmp(*(void **)((int)pvVar5 + 0xc),__s2,__n), pvVar9 = __s2, iVar2 == 0
                  )))) goto LAB_000135fa;
              iVar7 = iVar7 + 1;
              pvVar5 = (void *)((int)pvVar5 + 8);
            } while (iVar1 != iVar7);
          }
          else {
            do {
              if (puVar4[0x13] == *(int *)(*(int *)((int)param_2 + 4) + iVar1 * 4))
              goto LAB_000135c0;
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



/* ===== FUN_00013622 @ 00013622 size=86 ===== */

void FUN_00013622(int param_1,int param_2,undefined4 param_3)

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
    FUN_00014238(&local_20);
    local_20 = local_20 - param_2;
    piVar2 = *(int **)(param_1 + 0xe4);
    piVar3 = (int *)**(int **)(param_1 + 0xe4);
    while ((int *)(param_1 + 0xe4) != piVar2) {
      iVar1 = FUN_0001342c(param_1,piVar2);
      if (iVar1 == 0) {
        if (local_20 <= piVar2[0x1a]) {
          if (piVar2[0x1a] != local_20) {
            return;
          }
          if (local_1c <= piVar2[0x1b]) {
            return;
          }
        }
        FUN_000134ec(param_1,piVar2);
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  return;
}



/* ===== FUN_000136a0 @ 000136a0 size=40 ===== */

undefined4 FUN_000136a0(int param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0xe4) = param_1 + 0xe4;
  *(int *)(param_1 + 0xe8) = param_1 + 0xe4;
  *(int *)(param_1 + 0xec) = param_1 + 0xec;
  *(int *)(param_1 + 0xf0) = param_1 + 0xec;
  FUN_000146b2(10,0,DAT_000136c8,param_1,0,param_2);
  return 0;
}



/* ===== FUN_000136fa @ 000136fa size=70 ===== */

void FUN_000136fa(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00014758(DAT_00013714,param_1,0);
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    while (piVar2 != (int *)(param_1 + 0xe4)) {
      iVar1 = FUN_0001342c(param_1,piVar2);
      if (iVar1 == 0) {
        FUN_000134ec(param_1,piVar2);
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  return;
}



/* ===== FUN_00013718 @ 00013718 size=42 ===== */

int FUN_00013718(int param_1,void *param_2)

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



/* ===== FUN_00013742 @ 00013742 size=24 ===== */

undefined4 * FUN_00013742(int param_1,int param_2)

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



/* ===== FUN_0001375a @ 0001375a size=42 ===== */

byte * FUN_0001375a(int param_1,uint param_2)

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



/* ===== FUN_00013784 @ 00013784 size=56 ===== */

char * FUN_00013784(int param_1,uint param_2)

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



/* ===== FUN_000137bc @ 000137bc size=112 ===== */

int FUN_000137bc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = FUN_00014028(*(undefined4 *)(param_1 + 0x70));
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
          __dest = (void *)FUN_000140d8(iVar1,uVar2 - 4,uVar2,uVar3,param_4);
          memcpy(__dest,pcVar4 + 6,uVar2 - 4);
        }
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000140c0(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0001382c @ 0001382c size=240 ===== */

bool FUN_0001382c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
LAB_00013888:
    __s1 = (void *)FUN_0001375a(param_1,param_3 & 0xff);
    pvVar1 = (void *)FUN_00020ef4(param_2);
LAB_00013880:
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
LAB_000138e4:
        if (__n == sVar3) {
          iVar2 = memcmp(__s1,pvVar1,__n);
          bVar5 = iVar2 == 0;
          goto LAB_00013904;
        }
      }
LAB_00013914:
      bVar5 = false;
      goto LAB_00013904;
    }
    iVar4 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    if (param_3 < 0x33) {
      if ((param_3 != 1) && (param_3 != 0x30)) {
        return false;
      }
      goto LAB_00013888;
    }
    if (param_3 == DAT_0001391c) {
      __s1 = (void *)FUN_00013784(param_1,param_3,param_3,DAT_0001391c,param_4);
      pvVar1 = (void *)FUN_00020ff4(param_2);
      goto LAB_00013880;
    }
    if (param_3 != DAT_0001391c + 3) {
      return false;
    }
    iVar4 = FUN_000137bc(param_1,param_3);
    pvVar6 = (void *)FUN_0002102c(param_2,param_3);
    pvVar1 = pvVar6;
    if (iVar4 != 0) {
      __s1 = *(void **)(iVar4 + 8);
      if (__s1 == (void *)0x0) {
        __s1 = (void *)(iVar4 + 0xc);
      }
      if (pvVar6 != (void *)0x0) goto LAB_000138b2;
      if (iVar4 != 0) goto LAB_000138c2;
      pvVar1 = (void *)0x0;
      if (__s1 == (void *)0x0) goto LAB_0001386c;
      iVar4 = 0;
      goto LAB_00013914;
    }
    if (pvVar6 != (void *)0x0) {
      __s1 = (void *)0x0;
LAB_000138b2:
      pvVar1 = *(void **)((int)pvVar6 + 8);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)((int)pvVar6 + 0xc);
      }
      if (iVar4 == 0) {
        sVar3 = 0;
LAB_000138c6:
        __n = *(size_t *)((int)pvVar6 + 4);
      }
      else {
LAB_000138c2:
        sVar3 = *(size_t *)(iVar4 + 4);
        if (pvVar6 != (void *)0x0) goto LAB_000138c6;
        __n = 0;
      }
      if (__s1 == (void *)0x0) goto LAB_000138fc;
      if (pvVar1 == (void *)0x0) goto LAB_00013914;
      goto LAB_000138e4;
    }
LAB_0001386c:
    pvVar6 = (void *)0x0;
    iVar4 = 0;
  }
LAB_000138fc:
  bVar5 = pvVar1 == (void *)0x0;
LAB_00013904:
  FUN_000140c0(iVar4);
  FUN_000140c0(pvVar6);
  return bVar5;
}



/* ===== FUN_00013920 @ 00013920 size=702 ===== */

int FUN_00013920(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar1 = FUN_00020ef4(param_2,0);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 1) < 0x21)) {
    iVar2 = FUN_00020ff4(param_2,DAT_00013bdc);
    __s1 = (void *)(iVar1 + 2);
    uVar6 = (uint)*(byte *)(iVar1 + 1);
    if ((iVar2 != 0) && ((uVar6 == 7 && (iVar1 = memcmp(__s1,DAT_00013be0,7), iVar1 == 0)))) {
      return 0;
    }
    piVar3 = (int *)FUN_00013528(param_1,param_2 + 4,__s1,uVar6);
    __n = *(size_t *)(param_2 + 0x2c);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_0001449c(*(int *)(param_2 + 0x30) + __n + 0x78);
      iVar1 = 0;
      if (piVar3 != (int *)0x0) {
        iVar1 = *(int *)(param_1 + 0xfc);
        *(int *)(param_1 + 0xfc) = iVar1 + 1;
        piVar3[4] = iVar1;
        piVar3[6] = *(int *)(param_1 + 0xf8);
        FUN_00013462(piVar3,param_2);
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
        iVar1 = FUN_0001334a(param_1,piVar3 + 8,iVar1);
        if (*(uint *)(*(int *)(param_1 + 0x94) + 0xfc) < *(uint *)(param_1 + 0xf4)) {
          piVar3 = *(int **)(param_1 + 0xe4);
          if (piVar3 == (int *)(param_1 + 0xe4)) {
            piVar3 = (int *)0x0;
          }
          iVar1 = FUN_000134ec(param_1,piVar3,*(uint *)(param_1 + 0xf4),param_4);
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
        iVar1 = FUN_0001382c(piVar3,param_2,DAT_00013be4);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x110;
        }
        else {
          uVar5 = uVar5 | 0x100;
        }
        iVar1 = FUN_0001382c(piVar3,param_2,0x30);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x20;
        }
        iVar1 = FUN_0001382c(piVar3,param_2,DAT_00013be8);
        if (iVar1 == 0) {
          uVar5 = uVar5 | 0x40;
        }
        iVar1 = FUN_0001382c(piVar3,param_2,1);
        if ((iVar1 == 0) || (iVar1 = FUN_0001382c(piVar3,param_2,0x32), iVar1 == 0)) {
          uVar5 = uVar5 | 0x80;
        }
      }
      iVar1 = *(int *)(param_1 + 0xf8);
      piVar3[5] = 0;
      piVar3[6] = iVar1;
      FUN_00013462(piVar3,param_2);
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
        FUN_000133a8(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        FUN_000133aa(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1d) < 0) {
        FUN_000133ac(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1c) < 0) {
        FUN_000133ae(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x1b) < 0) {
        FUN_000133b0(param_1,piVar3[4]);
      }
      iVar1 = uVar5 << 0x1a;
      if (iVar1 < 0) {
        iVar1 = FUN_000133b2(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x19) < 0) {
        iVar1 = FUN_000133b4(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x17) < 0) {
        iVar1 = FUN_000133b6(param_1,piVar3[4]);
      }
      if ((int)(uVar5 << 0x18) < 0) {
        return param_1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00013cbc @ 00013cbc size=4 ===== */

undefined4 FUN_00013cbc(void)

{
  return 0;
}



/* ===== FUN_00013cc0 @ 00013cc0 size=82 ===== */

int FUN_00013cc0(char *param_1,int param_2,byte *param_3,int param_4,int param_5)

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
    __format = DAT_00013d14;
    if (param_5 == 0) {
      __format = DAT_00013d18;
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



/* ===== FUN_00013d1c @ 00013d1c size=42 ===== */

uint FUN_00013d1c(int param_1)

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



/* ===== FUN_00013d46 @ 00013d46 size=36 ===== */

uint FUN_00013d46(undefined1 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00013d1c(*param_1,param_1);
  if (((int)uVar2 < 0) ||
     (uVar1 = FUN_00013d1c(*(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 1)), (int)uVar1 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 | (int)uVar2 * 0x10;
  }
  return uVar1;
}



/* ===== FUN_00013d6a @ 00013d6a size=66 ===== */

undefined4 FUN_00013d6a(undefined1 *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_00013d1c(*param_1);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_00013d1c(param_1[1]);
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



/* ===== FUN_00013e2e @ 00013e2e size=40 ===== */

undefined4 FUN_00013e2e(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  while( true ) {
    if (puVar2 == param_2 + param_3) {
      return 0;
    }
    iVar1 = FUN_00013d46(param_1);
    if (iVar1 < 0) break;
    *puVar2 = (char)iVar1;
    param_1 = param_1 + 2;
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



/* ===== FUN_00013e56 @ 00013e56 size=24 ===== */

void FUN_00013e56(uint param_1,int param_2)

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



/* ===== FUN_00013e6e @ 00013e6e size=44 ===== */

void FUN_00013e6e(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  FUN_00014238(&local_10);
  uVar2 = local_c * 0x10c7 - ((local_c >> 9) + (local_c >> 5));
  uVar1 = DAT_00013e9c + (int)local_10;
  *param_1 = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  param_1[1] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}



/* ===== FUN_00013ea0 @ 00013ea0 size=14 ===== */

void FUN_00013ea0(void)

{
  FUN_00013cc0();
  return;
}



/* ===== FUN_00013eae @ 00013eae size=14 ===== */

void FUN_00013eae(void)

{
  FUN_00013cc0();
  return;
}



/* ===== FUN_00013ebc @ 00013ebc size=52 ===== */

void * FUN_00013ebc(void *param_1,size_t param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (0x1f < param_2) {
    param_2 = 0x20;
  }
  pbVar1 = memcpy(DAT_00013ef0,param_1,param_2);
  pbVar1[param_2] = 0;
  while( true ) {
    pbVar2 = pbVar1;
    if (*pbVar2 == 0) break;
    pbVar1 = pbVar2 + 1;
    if (0x5e < *pbVar2 - 0x20) {
      *pbVar2 = 0x5f;
    }
  }
  return DAT_00013ef0;
}



/* ===== FUN_00013ef4 @ 00013ef4 size=2 ===== */

void FUN_00013ef4(void)

{
  return;
}



/* ===== FUN_00013ef8 @ 00013ef8 size=6 ===== */

void FUN_00013ef8(undefined4 param_1)

{
  *DAT_00013f00 = param_1;
  return;
}



/* ===== FUN_00013f04 @ 00013f04 size=6 ===== */

void FUN_00013f04(undefined4 param_1)

{
  *(undefined4 *)(DAT_00013f0c + 4) = param_1;
  return;
}



/* ===== FUN_00013f10 @ 00013f10 size=110 ===== */

void FUN_00013f10(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char *__s;
  int iVar2;
  uint uVar3;
  char local_a4 [132];
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  __s = malloc(0x800);
  puVar1 = DAT_00013f80;
  if (__s != (char *)0x0) {
    local_a4[0] = '\0';
    if ((((code *)DAT_00013f80[1] != (code *)0x0) &&
        (iVar2 = (*(code *)DAT_00013f80[1])(param_1), iVar2 != 0)) &&
       (uVar3 = snprintf(local_a4,0x82,DAT_00013f84,iVar2), 0x81 < uVar3)) {
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



/* ===== FUN_00013f88 @ 00013f88 size=68 ===== */

void FUN_00013f88(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int *piVar1;
  char *__s;
  int iVar2;
  undefined4 uVar3;
  undefined4 *__arg;
  char *pcVar4;
  undefined4 uStack_4;
  
  piVar1 = DAT_00013fcc;
  if ((*DAT_00013fcc != 0) &&
     (uVar3 = param_1, pcVar4 = param_3, uStack_4 = param_4, __s = malloc(0x800), __s != (char *)0x0
     )) {
    __arg = &uStack_4;
    iVar2 = vsnprintf(__s,0x800,param_3,__arg);
    (*(code *)*piVar1)(param_1,param_2,__s,iVar2,uVar3,__arg,pcVar4);
    free(__s);
  }
  return;
}



/* ===== FUN_00014028 @ 00014028 size=16 ===== */

void FUN_00014028(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0001449c(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
  }
  return;
}



/* ===== FUN_00014038 @ 00014038 size=114 ===== */

int FUN_00014038(int *param_1,size_t param_2)

{
  int iVar1;
  void *pvVar2;
  size_t __size;
  uint *__ptr;
  
  __ptr = (uint *)*param_1;
  if (__ptr == (uint *)0x0) {
    iVar1 = FUN_00014028(param_2);
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
        goto LAB_00014080;
      }
    }
    else {
      pvVar2 = realloc((void *)__ptr[2],__size);
      if (pvVar2 != (void *)0x0) {
        memset((void *)(__ptr[1] + (int)pvVar2),0,param_2);
        __ptr[2] = (uint)pvVar2;
LAB_00014080:
        *__ptr = param_2 + __ptr[1];
        goto LAB_00014086;
      }
    }
    iVar1 = -1;
  }
  else {
LAB_00014086:
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000140c0 @ 000140c0 size=24 ===== */

void FUN_000140c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 8));
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_000140d8 @ 000140d8 size=32 ===== */

int FUN_000140d8(uint *param_1,int param_2)

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



/* ===== FUN_000140f8 @ 000140f8 size=26 ===== */

void FUN_000140f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000140d8(param_1,param_3);
  (*(code *)PTR_memcpy_0004e06c)(uVar1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00014110 @ 00014110 size=36 ===== */

int FUN_00014110(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00014028(*(undefined4 *)(param_1 + 4));
  if ((iVar1 != 0) &&
     ((iVar2 = *(int *)(param_1 + 8), iVar2 != 0 || (iVar2 = param_1 + 0xc, iVar2 != 0)))) {
    FUN_000140f8(iVar1,iVar2,*(undefined4 *)(param_1 + 4));
  }
  return iVar1;
}



/* ===== FUN_00014134 @ 00014134 size=18 ===== */

void FUN_00014134(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 == 0) && (iVar1 = param_2 + 0xc, iVar1 == 0)) {
    return;
  }
  FUN_000140f8(param_1,iVar1,*(undefined4 *)(param_2 + 4));
  return;
}



/* ===== FUN_00014146 @ 00014146 size=30 ===== */

int FUN_00014146(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00014028(param_2);
  if ((iVar1 != 0) && (param_1 != 0)) {
    FUN_000140f8(iVar1,param_1,param_2);
  }
  return iVar1;
}



/* ===== FUN_00014164 @ 00014164 size=62 ===== */

int FUN_00014164(int param_1,int param_2)

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
    iVar1 = FUN_00014028(*(int *)(param_2 + 4) + iVar1);
    if (iVar1 != 0) {
      if (param_1 != 0) {
        FUN_00014134(iVar1,param_1);
      }
      FUN_00014134(iVar1,param_2);
    }
    FUN_000140c0(param_1);
    FUN_000140c0(param_2);
  }
  return iVar1;
}



/* ===== FUN_00014220 @ 00014220 size=26 ===== */

void FUN_00014220(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_0004e04c)(param_2);
  return;
}



/* ===== FUN_00014238 @ 00014238 size=24 ===== */

void FUN_00014238(int *param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = (__time_t)param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_usec;
  return;
}



/* ===== FUN_00014250 @ 00014250 size=132 ===== */

undefined4
FUN_00014250(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int *param_7
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
      goto LAB_000142a8;
    }
  }
  iVar2 = 0;
LAB_000142a8:
  *param_7 = local_40 - iVar2;
  return 0;
}



/* ===== FUN_000142d4 @ 000142d4 size=70 ===== */

undefined4 FUN_000142d4(char *param_1)

{
  int iVar1;
  FILE *__stream;
  __pid_t _Var2;
  undefined4 uVar3;
  
  iVar1 = daemon(0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((param_1 != (char *)0x0) &&
       (__stream = fopen64(param_1,DAT_00014320), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,DAT_00014324,_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror(DAT_0001431c);
  }
  return uVar3;
}



/* ===== FUN_00014328 @ 00014328 size=10 ===== */

void FUN_00014328(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_unlink_0004e110)();
  return;
}



/* ===== FUN_00014330 @ 00014330 size=60 ===== */

undefined4 FUN_00014330(void *param_1,size_t param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  size_t sVar2;
  
  __stream = fopen64(DAT_0001436c,DAT_00014370);
  if (__stream == (FILE *)0x0) {
    puts(DAT_00014374);
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



/* ===== FUN_0001437c @ 0001437c size=152 ===== */

void * FUN_0001437c(char *param_1)

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
    pvVar2 = (void *)(*(code *)PTR_strdup_0004e138)();
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



/* ===== FUN_00014414 @ 00014414 size=4 ===== */

undefined4 FUN_00014414(void)

{
  return 0;
}



/* ===== FUN_00014418 @ 00014418 size=2 ===== */

void FUN_00014418(void)

{
  return;
}



/* ===== FUN_0001449c @ 0001449c size=10 ===== */

void FUN_0001449c(undefined4 param_1)

{
  (*(code *)PTR_calloc_0004e0c4)(1,param_1);
  return;
}



/* ===== FUN_000144a4 @ 000144a4 size=54 ===== */

char * FUN_000144a4(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_3 == 0) {
LAB_000144d0:
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
        goto LAB_000144d0;
      }
      cVar1 = *pcVar3;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== FUN_000144dc @ 000144dc size=62 ===== */

void FUN_000144dc(int *param_1,int param_2)

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



/* ===== FUN_0001451a @ 0001451a size=12 ===== */

void FUN_0001451a(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  free(param_1);
  return;
}



/* ===== FUN_00014580 @ 00014580 size=60 ===== */

void FUN_00014580(int *param_1,int param_2)

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



/* ===== FUN_000145bc @ 000145bc size=26 ===== */

undefined4 FUN_000145bc(void)

{
  void *pvVar1;
  
  pvVar1 = memset(DAT_000145d8,0,0x48);
  *(int *)((int)pvVar1 + 0x28) = (int)pvVar1 + 0x28;
  *(int *)((int)pvVar1 + 0x2c) = (int)pvVar1 + 0x28;
  return 0;
}



/* ===== FUN_000145dc @ 000145dc size=90 ===== */

undefined4
FUN_000145dc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (((param_2 < 3) && (piVar5 = *(int **)(DAT_00014638 + param_2 * 4), piVar5 != (int *)0x0)) &&
     (pvVar3 = realloc((void *)piVar5[1],(*piVar5 + 1) * 0x10), pvVar3 != (void *)0x0)) {
    iVar4 = *piVar5;
    iVar6 = iVar4 * 0x10;
    *(int *)((int)pvVar3 + iVar6) = param_1;
    *(undefined4 *)((int)pvVar3 + iVar6 + 8) = param_5;
    *(undefined4 *)((int)pvVar3 + iVar6 + 0xc) = param_3;
    piVar1 = DAT_0001463c;
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



/* ===== FUN_00014640 @ 00014640 size=20 ===== */

void FUN_00014640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000145dc(param_1,0,param_2,param_3,param_4,param_2,param_3);
  return;
}



/* ===== FUN_000146ac @ 000146ac size=88 ===== */

void FUN_000146ac(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*DAT_000146a8;
  if (((piVar3 != (int *)0x0) && (iVar4 = piVar3[1], iVar4 != 0)) && (iVar1 = *piVar3, iVar1 != 0))
  {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (param_1 == *(int *)(iVar4 + iVar2 * 0x10)) goto LAB_0001467c;
    }
    if (iVar1 != iVar2) {
LAB_0001467c:
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



/* ===== FUN_000146b2 @ 000146b2 size=156 ===== */

undefined4 FUN_000146b2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  __ptr = (int *)FUN_0001449c(0x1c);
  if (__ptr != (int *)0x0) {
    iVar2 = FUN_00014238(__ptr + 2);
    if (-1 < iVar2) {
      iVar2 = __ptr[2];
      param_1 = param_1 + iVar2;
      __ptr[2] = param_1;
      if (param_1 < iVar2) {
        free(__ptr);
      }
      else {
        __ptr[3] = __ptr[3] + param_2;
        iVar2 = DAT_00014750;
        while (iVar1 = DAT_00014754, iVar4 = __ptr[3], iVar2 < iVar4) {
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
            goto LAB_00014736;
          }
        }
        piVar3 = *(int **)(iVar1 + 0x2c);
LAB_00014736:
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



/* ===== FUN_00014758 @ 00014758 size=70 ===== */

int FUN_00014758(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)(DAT_000147a0 + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar2 != puVar1) {
    if (((puVar2[6] == param_1) && ((puVar2[4] == param_2 || (param_2 == -1)))) &&
       ((puVar2[5] == param_3 || (param_3 == -1)))) {
      FUN_0001451a();
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  }
  return iVar3;
}



/* ===== FUN_000147a4 @ 000147a4 size=42 ===== */

undefined4 FUN_000147a4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_000147d0 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)(DAT_000147d0 + 0x28)) {
      return 0;
    }
    if (((puVar1[6] == param_1) && (puVar1[4] == param_2)) && (puVar1[5] == param_3)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}



/* ===== FUN_000147d4 @ 000147d4 size=68 ===== */

undefined4 FUN_000147d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00014818;
  pvVar2 = realloc(*(void **)(DAT_00014818 + 0x34),(*(int *)(DAT_00014818 + 0x30) + 1) * 0x10);
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
    signal(param_1,DAT_0001481c);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00014820 @ 00014820 size=34 ===== */

void FUN_00014820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000147d4(2,param_1,param_2);
  if (iVar1 == 0) {
    FUN_000147d4(0xf,param_1,param_2,param_4);
    return;
  }
  return;
}



/* ===== FUN_00014842 @ 00014842 size=10 ===== */

void FUN_00014842(undefined4 param_1,undefined4 param_2)

{
  FUN_000147d4(1,param_1,param_2);
  return;
}



/* ===== FUN_0001484c @ 0001484c size=396 ===== */

void FUN_0001484c(void)

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
  piVar1 = DAT_000149d8;
  if (((__readfds != (fd_set *)0x0) && (__writefds != (fd_set *)0x0)) &&
     (__exceptfds != (fd_set *)0x0)) {
    piVar9 = DAT_000149d8 + 10;
    while (piVar1[0x10] == 0) {
      piVar8 = (int *)piVar1[10];
      if (piVar8 == piVar9) {
        if (((piVar1[1] < 1) && (piVar1[4] < 1)) && (piVar1[7] < 1)) break;
        piVar8 = (int *)0x0;
      }
      else if (piVar8 != (int *)0x0) {
        FUN_00014238(&local_30);
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
      FUN_000144dc(DAT_000149dc,__readfds);
      FUN_000144dc(DAT_000149e0,__writefds);
      FUN_000144dc(DAT_000149e4,__exceptfds);
      __timeout = (timeval *)0x0;
      if (piVar8 != (int *)0x0) {
        __timeout = &local_38;
      }
      iVar2 = select(*piVar1 + 1,__readfds,__writefds,__exceptfds,__timeout);
      if ((iVar2 < 0) && (puVar3 = (uint *)__errno_location(), (*puVar3 & 0xfffffffb) != 0)) {
        perror(DAT_000149e8);
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
        FUN_00014238(&local_30);
        if ((piVar8[2] <= local_30) && ((local_30 != piVar8[2] || (piVar8[3] <= local_2c)))) {
          iVar6 = piVar8[4];
          iVar5 = piVar8[5];
          pcVar7 = (code *)piVar8[6];
          FUN_0001451a(piVar8);
          (*pcVar7)(iVar6,iVar5);
        }
      }
      if (0 < iVar2) {
        if (piVar1[2] != 0) {
          FUN_00014580(DAT_000149dc,__readfds);
        }
        if (piVar1[5] != 0) {
          FUN_00014580(DAT_000149e0,__writefds);
        }
        if (piVar1[8] != 0) {
          FUN_00014580(DAT_000149e4,__exceptfds);
        }
      }
    }
  }
  free(__readfds);
  free(__writefds);
  free(__exceptfds);
  return;
}



/* ===== FUN_000149ec @ 000149ec size=8 ===== */

void FUN_000149ec(void)

{
  *(undefined4 *)(DAT_000149f4 + 0x40) = 1;
  return;
}



/* ===== FUN_000149f8 @ 000149f8 size=60 ===== */

void FUN_000149f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_00014a34;
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_00014238(&uStack_18);
  piVar2 = *(int **)(iVar1 + 0x28);
  piVar3 = (int *)**(int **)(iVar1 + 0x28);
  while (piVar2 != (int *)(iVar1 + 0x28)) {
    FUN_0001451a();
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  free(*(void **)(iVar1 + 8));
  free(*(void **)(iVar1 + 0x14));
  free(*(void **)(iVar1 + 0x20));
  free(*(void **)(iVar1 + 0x34));
  return;
}



/* ===== FUN_00014a44 @ 00014a44 size=68 ===== */

void FUN_00014a44(uint param_1)

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



/* ===== FUN_00014a88 @ 00014a88 size=40 ===== */

void FUN_00014a88(FILE *param_1,undefined4 param_2,undefined4 param_3)

{
  void *__ptr;
  
  __ptr = (void *)FUN_00013070(param_3);
  if (__ptr != (void *)0x0) {
    fprintf(param_1,DAT_00014ab0,param_2,__ptr);
    free(__ptr);
    return;
  }
  return;
}



/* ===== FUN_00014ab4 @ 00014ab4 size=16 ===== */

void FUN_00014ab4(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  (*(code *)PTR_fprintf_0004e0cc)(param_1,DAT_00014ac4,param_2,param_3);
  return;
}



/* ===== FUN_00014ac8 @ 00014ac8 size=172 ===== */

byte * FUN_00014ac8(byte *param_1,FILE *param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  uint uVar7;
  byte *__s;
  
  uVar2 = DAT_00014b74;
  do {
    do {
      pcVar3 = fgets((char *)param_1,0x100,param_2);
      __s = (byte *)0x0;
      if (pcVar3 == (char *)0x0) goto LAB_00014b6c;
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
      goto LAB_00014b4c;
    }
    do {
      pbVar5 = pbVar4 + -1;
      *pbVar4 = 0;
LAB_00014b4c:
    } while (((__s < pbVar5) && (uVar7 = *pbVar5 - 9 & 0xff, uVar7 < 0x18)) &&
            (pbVar4 = pbVar5, (~(uVar2 >> uVar7) & 1) == 0));
  } while (*__s == 0);
LAB_00014b6c:
  *param_4 = __s;
  return __s;
}



/* ===== FUN_00014b78 @ 00014b78 size=570 ===== */

undefined4 * FUN_00014b78(char *param_1)

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
  __ptr = (undefined4 *)FUN_0001324a(0,0);
  if (__ptr != (undefined4 *)0x0) {
    __stream = fopen64(param_1,DAT_00014db4);
    if (__stream == (FILE *)0x0) {
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      local_250 = (int *)0x0;
      local_24c = (int *)0x0;
      iVar9 = iVar8;
LAB_00014c3a:
      iVar4 = FUN_00014ac8(auStack_228,__stream,&local_230,&local_234);
      pcVar5 = local_234;
      if (iVar4 != 0) {
        iVar4 = strcmp(local_234,DAT_00014db8);
        if (iVar4 != 0) {
          iVar4 = strncmp(pcVar5,DAT_00014dc0,0xc);
          if (iVar4 != 0) goto LAB_00014d54;
          pcVar6 = strchr(pcVar5 + 0xc,0x3d);
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
            sVar10 = 0;
            __ptr_00 = (void *)0x0;
            while (iVar4 = FUN_00014ac8(auStack_128,__stream,&local_230,&local_22c),
                  pcVar6 = local_22c, iVar4 != 0) {
              iVar4 = strcmp(local_22c,DAT_00014dbc);
              if (iVar4 == 0) {
                piVar2 = (int *)FUN_0001449c(0x10);
                if (piVar2 != (int *)0x0) {
                  pcVar5 = strdup(pcVar5 + 0xc);
                  *piVar2 = (int)pcVar5;
                  iVar4 = FUN_0001c0ec(__ptr_00,sVar10,piVar2 + 2);
                  piVar2[1] = iVar4;
                  free(__ptr_00);
                  if ((*piVar2 != 0) && (piVar2[1] != 0)) {
                    FUN_00013236(__ptr,piVar2);
                    goto LAB_00014c3a;
                  }
                  FUN_00013158(piVar2);
                  goto LAB_00014dae;
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
          goto LAB_00014dae;
        }
        iVar4 = iVar9 + 1;
        piVar2 = (int *)FUN_0001449c(0xf4);
        if (piVar2 != (int *)0x0) {
          piVar2[2] = iVar9;
          FUN_00012f8e();
          iVar9 = 0;
LAB_00014bde:
          iVar3 = FUN_00014ac8(auStack_128,__stream,&local_230,&local_22c);
          pcVar5 = local_22c;
          if (iVar3 == 0) {
            iVar9 = iVar9 + 1;
          }
          else {
            iVar3 = strcmp(local_22c,DAT_00014dbc);
            if (iVar3 != 0) {
              pcVar5 = strchr(pcVar5,0x3d);
              if (pcVar5 != (char *)0x0) goto LAB_00014c88;
              goto LAB_00014c84;
            }
          }
          uVar11 = 0;
          if (piVar2[0x12] != 0) {
            uVar11 = (uint)(piVar2[0x11] != 0);
            FUN_00013118(piVar2);
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
            iVar3 = FUN_00012e12(__ptr,piVar2);
            iVar9 = iVar4;
            local_24c = piVar2;
            if (iVar3 != 0) {
              iVar8 = iVar8 + 1;
            }
            goto LAB_00014c3a;
          }
          FUN_00012ec2(piVar2);
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar4;
        goto LAB_00014c3a;
      }
      fclose(__stream);
      *__ptr = local_250;
      if (iVar8 != 0) {
        FUN_00013176(__ptr);
        __ptr = (undefined4 *)0x0;
      }
    }
  }
  return __ptr;
LAB_00014d54:
  iVar4 = FUN_0001329c(__ptr,pcVar5,local_230);
  if (iVar4 < 0) {
LAB_00014dae:
    iVar8 = iVar8 + 1;
  }
  goto LAB_00014c3a;
LAB_00014c88:
  *pcVar5 = '\0';
  if (((pcVar5[1] == '\"') && (pcVar6 = strchr(pcVar5 + 2,0x22), pcVar6 == (char *)0x0)) ||
     (iVar3 = FUN_00012f9e(piVar2,local_22c,pcVar5 + 1,local_230), iVar3 < 0)) {
LAB_00014c84:
    iVar9 = iVar9 + 1;
  }
  goto LAB_00014bde;
}



/* ===== FUN_00014dc4 @ 00014dc4 size=818 ===== */

undefined4 FUN_00014dc4(char *param_1,int *param_2)

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
  
  __stream = fopen64(param_1,DAT_00014f0c);
  if (__stream == (FILE *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    if (param_2[5] != 0) {
      fprintf(__stream,DAT_00014f10);
    }
    if (param_2[6] != 0) {
      fprintf(__stream,DAT_00014f14);
    }
    if (param_2[3] != 1) {
      fprintf(__stream,DAT_00014f18);
    }
    if (param_2[4] != 1) {
      fprintf(__stream,DAT_00014f1c);
    }
    if (param_2[7] != 1) {
      fprintf(__stream,DAT_00014f20);
    }
    if (param_2[8] != 0) {
      fprintf(__stream,DAT_00014f24);
    }
    if (param_2[9] != 0) {
      fprintf(__stream,DAT_00014f28);
    }
    if (param_2[10] != 0) {
      fprintf(__stream,DAT_00014f2c);
    }
    if (param_2[0xb] != 0) {
      fprintf(__stream,DAT_00014f30);
    }
    if (param_2[0xc] != 0) {
      fprintf(__stream,DAT_00014f34);
    }
    if (param_2[0xd] != 0) {
      fprintf(__stream,DAT_00014f38);
    }
    if (param_2[0xe] != 0) {
      fprintf(__stream,DAT_00014f3c);
    }
    if (param_2[0xf] != 0) {
      fprintf(__stream,DAT_00014f40);
    }
    if (((char)param_2[0x1f] != '\0') && (*(char *)((int)param_2 + 0x7d) != '\0')) {
      fprintf(__stream,DAT_00014f44);
    }
    if (param_2[0x3f] != 200) {
      fprintf(__stream,DAT_00014f48);
    }
    if (param_2[0x40] != 0xb4) {
      fprintf(__stream,DAT_00014f4c);
    }
    if (param_2[0x41] != 2) {
      fprintf(__stream,DAT_00014f50);
    }
    if (param_2[0x42] != 0) {
      fprintf(__stream,DAT_00014f54);
    }
    if (param_2[0x43] != 0x80) {
      fprintf(__stream,DAT_00014f58);
    }
    if (param_2[0x45] != 0) {
      fprintf(__stream,DAT_00014f5c);
    }
    uVar5 = DAT_00014f64;
    for (piVar3 = (int *)*param_2; pcVar1 = DAT_00014f60, piVar3 != (int *)0x0;
        piVar3 = (int *)*piVar3) {
      if ((piVar3[0x15] != 0x200) && (piVar3[0x3b] == 0)) {
        fputs(DAT_00015154,__stream);
        FUN_00014a88(__stream,DAT_00015158,piVar3);
        FUN_00014ab4(__stream,uVar5,piVar3[0x18]);
        pvVar2 = (void *)FUN_00013070(piVar3,DAT_0001515c);
        if (pvVar2 != (void *)0x0) {
          fprintf(__stream,DAT_00015160,pvVar2);
          free(pvVar2);
        }
        pvVar2 = (void *)FUN_00013070(piVar3,DAT_00015164);
        if (pvVar2 != (void *)0x0) {
          fprintf(__stream,DAT_00015168,pvVar2);
          free(pvVar2);
        }
        if ((piVar3[0x16] != 3) &&
           (pcVar1 = (char *)FUN_00013070(piVar3,DAT_0001516c), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00015170,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x15] != 3) &&
           (pcVar1 = (char *)FUN_00013070(piVar3,DAT_00015174), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00015178,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x13] != 0x18) &&
           (pcVar1 = (char *)FUN_00013070(piVar3,DAT_0001517c), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00015180,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x14] != 0x1e) &&
           (pcVar1 = (char *)FUN_00013070(piVar3,DAT_00015184), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00015188,pcVar1);
          }
          free(pcVar1);
        }
        if ((piVar3[0x17] != 0) &&
           (pcVar1 = (char *)FUN_00013070(piVar3,DAT_0001518c), pcVar1 != (char *)0x0)) {
          if (*pcVar1 != '\0') {
            fprintf(__stream,DAT_00015190,pcVar1);
          }
          free(pcVar1);
        }
        __format = DAT_000151b8;
        pcVar1 = DAT_000151b4;
        iVar6 = 0;
        do {
          snprintf(acStack_3c,0x14,pcVar1,iVar6);
          pvVar2 = (void *)FUN_00013070(piVar3,acStack_3c);
          if (pvVar2 != (void *)0x0) {
            fprintf(__stream,__format,acStack_3c,pvVar2);
            free(pvVar2);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
        FUN_00014ab4(__stream,DAT_00015194,piVar3[0x2d]);
        FUN_00014ab4(__stream,DAT_00015198,piVar3[3]);
        FUN_00014ab4(__stream,DAT_0001519c,piVar3[0x30]);
        FUN_00014ab4(__stream,DAT_000151a0,piVar3[0x2e]);
        FUN_00014ab4(__stream,DAT_000151a4,piVar3[0x31]);
        FUN_00014ab4(__stream,DAT_000151a8,piVar3[0x32]);
        FUN_00014a88(__stream,DAT_000151ac,piVar3);
        fputs(DAT_000151b0,__stream);
      }
    }
    for (puVar4 = (undefined4 *)param_2[0x10]; uVar5 = 0, puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[3]) {
      pvVar2 = (void *)FUN_0001bfe4(puVar4[1],puVar4[2],0);
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



/* ===== FUN_000151be @ 000151be size=6 ===== */

void FUN_000151be(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000151c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(*param_1);
  return;
}



/* ===== FUN_000151c4 @ 000151c4 size=60 ===== */

undefined4 FUN_000151c4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 1:
    iVar2 = *param_1;
    uVar1 = DAT_00015234;
    uVar3 = DAT_00015230;
    break;
  case 2:
    iVar2 = *param_1;
    uVar1 = DAT_0001522c;
    uVar3 = DAT_00015228;
    break;
  default:
    return 0;
  case 4:
    iVar2 = *param_1;
    uVar1 = DAT_00015224;
    uVar3 = DAT_00015220;
    break;
  case 8:
    iVar2 = *param_1;
    uVar1 = DAT_0001521c;
    uVar3 = DAT_00015218;
    break;
  case 0x10:
    iVar2 = *param_1;
    uVar1 = DAT_00015214;
    uVar3 = DAT_00015210;
  }
  if (iVar2 != 2) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* ===== FUN_00015238 @ 00015238 size=32 ===== */

int FUN_00015238(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1d4) != 1)) {
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015258,
                 *(int *)(param_1 + 0x15c),param_4);
    param_2 = 0;
  }
  return param_2;
}



/* ===== FUN_0001525c @ 0001525c size=140 ===== */

undefined4
FUN_0001525c(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == 4) {
    if (param_3 != 0xd) goto LAB_000152cc;
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
LAB_0001529a:
          *param_6 = uVar2;
          return 0;
        }
      }
      else {
        if (param_2 != 0x10) goto LAB_00015270;
        if ((param_3 == 0x10) && (0xf < param_4)) {
          *param_5 = 6;
          uVar2 = 3;
          goto LAB_0001529a;
        }
      }
      goto LAB_000152cc;
    }
    if (param_2 != 2) {
LAB_00015270:
      FUN_00013f10(*(undefined4 *)(*param_1 + 4),4,DAT_000152e8,param_2,param_1,param_2);
      return 0xffffffff;
    }
    if (param_3 != 5) goto LAB_000152cc;
    bVar5 = SBORROW4(param_4,4);
    iVar1 = param_4 + -4;
    bVar4 = param_4 == 4;
  }
  if (!bVar4 && iVar1 < 0 == bVar5) {
    *param_5 = 0;
    *param_6 = 1;
    return 0;
  }
LAB_000152cc:
  uVar3 = *(undefined4 *)(*param_1 + 4);
  uVar2 = FUN_00018340(param_2);
  FUN_00013f10(uVar3,4,DAT_000152ec,uVar2,param_3,param_4);
  return 0xffffffff;
}



/* ===== FUN_000152f0 @ 000152f0 size=112 ===== */

void FUN_000152f0(int param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

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
  FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00015360,param_2,uVar6,uVar5,
               uVar4,uVar3,uVar2,uVar1);
  if ((param_4 != 0) && (*(int *)(param_1 + 500) == 0)) {
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015364,
                 *(int *)(param_1 + 0x15c),uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
  if ((param_5 != 0) && (*(int *)(param_1 + 0x1f8) == 0)) {
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015368,
                 *(int *)(param_1 + 0x15c),uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001535e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[5])(**(undefined4 **)(param_1 + 0x15c),0x11);
  return;
}



/* ===== FUN_0001536c @ 0001536c size=220 ===== */

undefined4 FUN_0001536c(int param_1,undefined4 *param_2,undefined4 param_3)

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
LAB_00015434:
      sVar4 = param_2[0xc];
      *(size_t *)(param_1 + 300) = sVar4;
      memcpy((void *)(param_1 + 0x10c),__s2,sVar4);
      return 0;
    }
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00015448);
  }
  else {
    iVar1 = (*pcVar5)(uVar2,*param_2,DAT_0001544c,param_2[3],param_2[1],param_3,param_2[2],puVar3,
                      sVar4);
    if (-1 < iVar1) goto LAB_00015434;
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00015450,*param_2,param_2[0xc]
                 ,param_2[3]);
  }
  return 0xffffffff;
}



/* ===== FUN_00015454 @ 00015454 size=164 ===== */

void FUN_00015454(int param_1,undefined1 *param_2,int param_3)

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
  uVar7 = FUN_00018340(*(undefined4 *)(param_1 + 0x1d4));
  uVar8 = FUN_00018340(*(undefined4 *)(param_1 + 0x1d8));
  FUN_00013f10(uVar10,3,DAT_000154f8,uVar3,uVar4,uVar5,uVar6,uVar1,uVar2,uVar7,uVar8);
  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xb])(**(undefined4 **)(param_1 + 0x15c));
  FUN_000151be(*(undefined4 *)(param_1 + 0x15c),9);
  if (param_3 != 0) {
    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0x11])
              (**(undefined4 **)(param_1 + 0x15c),param_2,3,1);
    FUN_000146b2(1,0,DAT_000154fc,param_1,0);
  }
  iVar9 = *(int *)(param_1 + 0x138);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x50) != 0)) {
    *(undefined4 *)(iVar9 + 0x50) = 0;
  }
  return;
}



/* ===== FUN_00015500 @ 00015500 size=178 ===== */

void FUN_00015500(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined2 param_5
                 ,void *param_6,undefined4 param_7,int param_8)

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
    if (-1 < iVar1) goto LAB_00015532;
  }
  pcVar2 = param_4;
LAB_00015532:
  if ((param_8 == 0) || (iVar1 = FUN_00017ea0(param_2,param_3,param_6,param_7,param_8), iVar1 == 0))
  {
    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[9])
              (**(undefined4 **)(param_1 + 0x15c),pcVar2,param_5,param_6,param_7);
  }
  else {
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),5,DAT_000155b4,param_3);
  }
  free(param_6);
  return;
}



/* ===== FUN_000155b8 @ 000155b8 size=280 ===== */

void FUN_000155b8(int param_1,int param_2,int param_3)

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
    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000156d0);
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
      FUN_00013e56((undefined4 *)(param_1 + 0x104),8);
      uVar1 = DAT_000156d4;
      local_2c[0x5d] = 0;
      local_2c[0x5e] = 0;
      FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,uVar1,param_2,param_3,
                   *(undefined4 *)(param_1 + 0xac),local_30);
      puVar5 = (undefined1 *)0x0;
      if ((uVar4 & 0x100) != 0) {
        puVar5 = local_2c + 0x4d;
      }
      FUN_00015500(param_1,param_1 + 0x24,uVar6,auStack_28,0x888e,iVar2,local_30,puVar5);
    }
  }
  return;
}



/* ===== FUN_000156e0 @ 000156e0 size=222 ===== */

undefined4
FUN_000156e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5,
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
    FUN_00013f10(puVar1[1],4,DAT_000157c0);
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
      FUN_00015500(param_1,param_8,param_4,param_2,0x888e,iVar2,local_30,local_2c[0] + 0x4d);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000157c4 @ 000157c4 size=198 ===== */

undefined4
FUN_000157c4(int param_1,undefined4 param_2,int param_3,uint param_4,ushort param_5,void *param_6,
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
    FUN_00015500(param_1,param_8,param_4,param_2,0x888e,iVar1,local_30,local_2c[0] + 0x4d);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_0001589a @ 0001589a size=362 ===== */

uint FUN_0001589a(int param_1,char *param_2,uint param_3)

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
    FUN_00013ea0(local_4c,0x21,*(int *)(param_1 + 0x138) + 4,0x10);
  }
  uVar6 = DAT_00015a04;
  if (((*(uint *)(param_1 + 0x1dc) & 0x1e3) != 0) && (*(int *)(param_1 + 0x1d0) == 2)) {
    uVar6 = DAT_00015a08;
  }
  uVar3 = *(int *)(param_1 + 0x1d8) - 2;
  if (uVar3 < 0xf) {
    iVar4 = (int)*(short *)(DAT_00015a0c + uVar3 * 2);
  }
  else {
    iVar4 = 0;
  }
  uVar3 = snprintf(param_2,param_3,DAT_00015a10,uVar6,uVar6,1,iVar4,*(undefined4 *)(param_1 + 0x1c0)
                   ,*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8));
  if (param_3 <= uVar3) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x1dc);
  if (iVar4 == 2) {
    iVar4 = *(int *)(param_1 + 0x1d0);
    uVar1 = DAT_00015a20;
    uVar7 = DAT_00015a1c;
  }
  else {
    uVar7 = DAT_00015a24;
    if (iVar4 == 0x10) goto LAB_00015942;
    if (iVar4 != 1) {
      uVar7 = 0;
      goto LAB_00015942;
    }
    iVar4 = *(int *)(param_1 + 0x1d0);
    uVar1 = 0x50f201;
    uVar7 = DAT_00015a14;
  }
  if (iVar4 != 2) {
    uVar7 = uVar1;
  }
LAB_00015942:
  uVar1 = FUN_000151c4(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x1d4));
  uVar8 = uVar7 >> 8 & 0xff;
  uVar5 = (uVar1 & 0xffff) >> 8;
  uVar9 = (uVar1 & 0xffffff) >> 0x10;
  uVar2 = FUN_000151c4(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x1d8));
  uVar10 = (uVar2 & 0xffffff) >> 0x10;
  uVar11 = (uVar2 & 0xffff) >> 8;
  uVar1 = snprintf(param_2 + uVar3,param_3 - uVar3,DAT_00015a18,0,uVar7 >> 0x10,uVar8,uVar7 & 0xff,
                   uVar1 >> 0x18,uVar9,uVar5,uVar1 & 0xff,uVar2 >> 0x18,uVar10,uVar11,uVar2 & 0xff,
                   local_4c,0,uVar7 >> 0x10,uVar8,uVar7 & 0xff,uVar1 >> 0x18,uVar9,uVar5,
                   uVar1 & 0xff,uVar2 >> 0x18,uVar10,uVar11,uVar2 & 0xff,
                   *(undefined4 *)(param_1 + 0x1cc));
  if (uVar1 < param_3) {
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}



/* ===== FUN_00015a28 @ 00015a28 size=58 ===== */

void FUN_00015a28(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001449c(0x208);
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



/* ===== FUN_00015a62 @ 00015a62 size=76 ===== */

void FUN_00015a62(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00014758(DAT_00015ab0,param_1,0);
    FUN_00014758(DAT_00015ab4,param_1,0);
    free(*(void **)((int)param_1 + 0x1ec));
    free(*(void **)((int)param_1 + 500));
    free(*(void **)((int)param_1 + 0x1f8));
    free(*(void **)((int)param_1 + 0x15c));
    FUN_00017078(param_1);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_00015ab8 @ 00015ab8 size=72 ===== */

void FUN_00015ab8(int param_1,undefined4 *param_2)

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



/* ===== FUN_00015b00 @ 00015b00 size=30 ===== */

void FUN_00015b00(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[3])(**(undefined4 **)(param_1 + 0x15c));
  if (iVar1 == 7) {
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  }
  return;
}



/* ===== FUN_00015b1e @ 00015b1e size=22 ===== */

void FUN_00015b1e(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  (*(code *)PTR_memcpy_0004e06c)();
  return;
}



/* ===== FUN_00015b34 @ 00015b34 size=38 ===== */

void FUN_00015b34(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[0x4e];
    if (iVar1 != 0) {
      param_1[8] = *(undefined4 *)(iVar1 + 0x34);
      (*(code *)PTR_memcpy_0004e06c)(param_1,iVar1 + 0x14);
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



/* ===== FUN_00015b5a @ 00015b5a size=3182 ===== */

undefined4 FUN_00015b5a(int param_1,void *param_2,void *param_3,uint param_4)

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
    goto LAB_00015c04;
  }
  bVar1 = *(byte *)((int)__dest + 5);
  bVar2 = *(byte *)((int)__dest + 6);
  uVar9 = CONCAT11(bVar1,bVar2);
  uVar23 = (uint)uVar9;
  uVar28 = uVar23 & 7;
  if (uVar28 - 1 < 2) {
    if ((*(int *)(param_1 + 0x1d4) == 0x10) && (uVar28 != 2)) {
      FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015eb0,1);
      if ((*(int *)(param_1 + 0x1d8) != 0x10) && (-1 < (int)(uVar23 << 0x1c))) {
        FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015eb4);
        goto LAB_00015c24;
      }
    }
    else {
LAB_00015c24:
      piVar22 = *(int **)(param_1 + 0x204);
      while ((piVar22 != (int *)0x0 && (iVar11 = memcmp(piVar22 + 2,param_2,6), iVar11 != 0))) {
        piVar22 = (int *)*piVar22;
      }
      if ((bVar1 & 0x20) == 0) {
        if (piVar22 == (int *)0x0) goto LAB_00015cb2;
        if (piVar22[1] != 0) {
          local_94[0] = *(undefined1 **)((int)__dest + 9);
          local_94[1] = *(undefined1 **)((int)__dest + 0xd);
          FUN_00013e56(local_94,8,(undefined4 *)((int)__dest + 9),&local_8c);
          iVar11 = memcmp(local_94,piVar22 + 0x4e,8);
          if (iVar11 == 0) goto LAB_00015c96;
          goto LAB_00015c00;
        }
        if ((piVar22[0x50] == 0) ||
           (iVar11 = memcmp((void *)((int)__dest + 9),piVar22 + 0x4e,8), 0 < iVar11))
        goto LAB_00015cd2;
        iVar11 = *(int *)(param_1 + 0x15c);
        uVar20 = DAT_00015eb8;
LAB_00015c5a:
        uVar14 = 4;
      }
      else {
        if (piVar22 == (int *)0x0) {
LAB_00015cb2:
          if ((*(int *)(param_1 + 0x100) == 0) ||
             (iVar11 = memcmp((void *)((int)__dest + 9),(void *)(param_1 + 0xf8),8), 0 < iVar11))
          goto LAB_00015cd2;
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar20 = DAT_00015ec0;
          goto LAB_00015c5a;
        }
LAB_00015c96:
        if ((piVar22[1] == 0) || (-1 < (int)(uVar23 << 0x18))) {
LAB_00015cd2:
          if (((uVar9 & 0x2080) == 0) && ((piVar22 == (int *)0x0 || (piVar22[1] == 0)))) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_00015ec4;
            goto LAB_00015ca4;
          }
          if ((int)(uVar23 << 0x14) < 0) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_00015ec8;
            goto LAB_00015ca4;
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
LAB_00015d68:
                if (*(int *)(param_1 + 0xac) == 0) {
                  iVar11 = *(int *)(param_1 + 0x15c);
                  uVar20 = DAT_00015ed8;
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
                  FUN_00017ea0(param_1 + 0x24,uVar28,__dest,iVar25,puVar24);
                  iVar25 = memcmp(local_94,puVar24,0x10);
                  if (iVar25 == 0) goto LAB_00015db8;
                  iVar11 = *(int *)(param_1 + 0x15c);
                  uVar20 = DAT_00015ed0;
                }
                goto LAB_00015c5a;
              }
              puVar24 = (undefined4 *)((int)__dest + 0x51);
              *puVar24 = 0;
              *(undefined4 *)((int)__dest + 0x55) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              *(undefined4 *)((int)__dest + 0x59) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              *(undefined4 *)((int)__dest + 0x5d) =
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              FUN_00017ea0((void *)(param_1 + 0x68),uVar28,__dest,iVar25,puVar24);
              iVar12 = memcmp(local_94,puVar24,0x10);
              if (iVar12 != 0) {
                FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00015ecc);
                goto LAB_00015d68;
              }
              *(undefined4 *)(param_1 + 0xb0) = 0;
              *(undefined4 *)(param_1 + 0xac) = 1;
              memcpy((void *)(param_1 + 0x24),(void *)(param_1 + 0x68),0x44);
LAB_00015db8:
              *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)((int)__dest + 9);
              *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((int)__dest + 0xd);
              *(undefined4 *)(param_1 + 0x100) = 1;
            }
            else {
              iVar25 = FUN_00016d50(param_1,piVar22,(int)__dest + 4,uVar28,__dest,iVar25);
              if (iVar25 != 0) goto LAB_00015c00;
            }
          }
          uVar26 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 0x61),*(byte *)((int)__dest + 0x62))
          ;
          if (uVar27 - 0x5f < uVar26) {
            FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00015ed4,uVar26,
                         uVar27 - 0x5f);
            goto LAB_00015c00;
          }
          if ((*(int *)(param_1 + 0x1d0) != 2) || (-1 < (int)(uVar23 << 0x13))) {
LAB_00015f38:
            if ((int)(uVar23 << 0x1c) < 0) {
              if ((bVar2 & 0x30) != 0) {
                iVar11 = *(int *)(param_1 + 0x15c);
                uVar20 = DAT_00016190;
                goto LAB_00015c5a;
              }
              if (piVar22 != (int *)0x0) {
                FUN_00017092(param_1,piVar22,iVar11,uVar23,uVar28);
                goto LAB_00015f5e;
              }
              puVar24 = *(undefined4 **)(param_1 + 0x15c);
              if ((bVar1 & 1) == 0) {
                iVar25 = (*(code *)puVar24[7])(*puVar24);
                if (iVar25 == 0) {
                  puVar24 = *(undefined4 **)(param_1 + 0x15c);
                  uVar20 = DAT_000164e8;
                  goto LAB_00016320;
                }
                FUN_000151be(*(undefined4 *)(param_1 + 0x15c),7);
                memset(local_94,uVar23 & 0x100,0x6c);
                if (*(int *)(param_1 + 0x1d0) == 2) {
                  FUN_00017c8e((int)__dest + 99,
                               CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                        *(undefined1 *)((int)__dest + 0x62)),local_94);
                }
                if (local_84 == (void *)0x0) {
                  bVar31 = false;
LAB_000163a2:
                  if ((*(uint *)(param_1 + 0x1dc) & 0xa1) == 0) goto LAB_0001637e;
                  if (*(int *)(param_1 + 0x130) != 0) {
                    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000164f0);
                    if (*(int *)(param_1 + 0x138) == 0) {
                      if (!bVar31) goto LAB_00015ff8;
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x138) = 0;
                    }
                    goto LAB_000163d0;
                  }
                  if (!bVar31) goto LAB_00016380;
LAB_000163da:
                  pvVar16 = (void *)(*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                                              (**(undefined4 **)(param_1 + 0x15c),1,0,0,&local_c8,0)
                  ;
                  if (pvVar16 != (void *)0x0) {
                    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[9])
                              (**(undefined4 **)(param_1 + 0x15c),param_1 + 0x1b8,0x888e,pvVar16,
                               (undefined4)local_c8);
                    free(pvVar16);
                    goto LAB_00015f5e;
                  }
                }
                else {
                  if (*(int *)(param_1 + 0x138) == 0) {
                    bVar31 = true;
                    goto LAB_000163a2;
                  }
                  bVar31 = false;
                  iVar25 = memcmp(local_84,(void *)(*(int *)(param_1 + 0x138) + 4),0x10);
                  if (iVar25 != 0) goto LAB_000163a2;
                  FUN_00015b34(param_1);
LAB_0001637e:
                  if (bVar31) {
LAB_000163d0:
                    if ((*(uint *)(param_1 + 0x1dc) & 0xa1) != 0) goto LAB_000163da;
                  }
LAB_00016380:
                  iVar25 = param_1 + 0xb4;
                  if (*(int *)(param_1 + 0xf4) != 0) {
                    iVar12 = FUN_00019ae0(iVar25,0x20);
                    if (iVar12 != 0) {
                      iVar11 = *(int *)(param_1 + 0x15c);
                      uVar20 = DAT_000164ec;
                      goto LAB_00015fa0;
                    }
                    *(undefined4 *)(param_1 + 0xf4) = 0;
                  }
                  if (*(int *)(param_1 + 0x1d4) == 0x10) {
                    uVar20 = 0x30;
                  }
                  else {
                    uVar20 = 0x40;
                  }
                  FUN_00017ef0(param_1,*(undefined4 *)(param_1 + 0x20),DAT_000164f4,param_1 + 0x1a8,
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
                  iVar11 = FUN_000156e0(param_1,param_1 + 0x1b8,iVar11,uVar28,iVar25,
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
                    goto LAB_00015f5e;
                  }
                }
              }
              else {
                FUN_000151be(puVar24,7);
                bVar1 = *(byte *)((int)__dest + 5);
                uVar27 = (uint)CONCAT11(bVar1,*(undefined1 *)((int)__dest + 6));
                FUN_00017c8e((int)__dest + 99,
                             CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                      *(undefined1 *)((int)__dest + 0x62)),local_94);
                if ((local_80 == (byte *)0x0) || ((int)(uVar27 << 0x13) < 0)) {
                  iVar25 = param_1 + 0x1b8;
                  if ((*(int *)(param_1 + 500) == 0) && (*(int *)(param_1 + 0x1f8) == 0)) {
                    iVar12 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[10])
                                       (**(undefined4 **)(param_1 + 0x15c));
                    if (iVar12 < 0) {
                      uVar14 = 4;
                      uVar20 = DAT_00016198;
                    }
                    else {
                      uVar14 = 2;
                      uVar20 = DAT_0001619c;
                    }
                    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),uVar14,uVar20);
                  }
                  iVar12 = local_8c;
                  if (local_94[0] != (undefined1 *)0x0) {
                    if ((*(void **)(param_1 + 500) == (void *)0x0) ||
                       ((uVar20 = DAT_000161a4, puVar15 = local_94[0],
                        local_94[1] == (undefined1 *)*(size_t *)(param_1 + 0x1fc) &&
                        (iVar13 = memcmp(local_94[0],*(void **)(param_1 + 500),(size_t)local_94[1]),
                        uVar20 = DAT_000161a4, puVar15 = local_94[0], iVar13 == 0)))) {
                      if (iVar12 == 0) goto LAB_00016052;
                      goto LAB_0001602c;
                    }
LAB_00015ff2:
                    FUN_000152f0(param_1,uVar20,iVar25,puVar15,local_8c);
                    goto LAB_00015ff8;
                  }
                  if (local_8c == 0) {
                    if ((*(int *)(param_1 + 500) != 0) || (*(int *)(param_1 + 0x1f8) != 0)) {
                      local_8c = 0;
                      uVar20 = DAT_000161a0;
                      puVar15 = (undefined1 *)0x0;
                      goto LAB_00015ff2;
                    }
                  }
                  else {
LAB_0001602c:
                    if ((*(int *)(param_1 + 0x1f8) != 0) &&
                       (iVar12 = FUN_000183c0((*(uint *)(param_1 + 0x1dc) & 0x60) != 0,
                                              *(int *)(param_1 + 0x1f8),
                                              *(undefined4 *)(param_1 + 0x200),iVar12,local_88),
                       uVar20 = DAT_000161a4, puVar15 = local_94[0], iVar12 != 0))
                    goto LAB_00015ff2;
                  }
LAB_00016052:
                  if ((((*(int *)(param_1 + 0x1d0) == 1) && (local_8c != 0)) &&
                      (*(int *)(param_1 + 0x1f8) == 0)) &&
                     (uVar20 = DAT_000161a8, puVar15 = local_94[0], *(int *)(param_1 + 0x1e4) != 0))
                  goto LAB_00015ff2;
                  iVar12 = memcmp((void *)(param_1 + 0xd4),(void *)((int)__dest + 0x11),0x20);
                  if (iVar12 != 0) {
                    FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000161ac,
                                 *(undefined1 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0x1b9),
                                 *(undefined1 *)(param_1 + 0x1ba),*(undefined1 *)(param_1 + 0x1bb),
                                 *(undefined1 *)(param_1 + 0x1bc),*(undefined1 *)(param_1 + 0x1bd));
                    goto LAB_00015ff8;
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
                      uVar20 = DAT_000161b4;
                      goto LAB_000160f8;
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
                    uVar20 = DAT_000161b0;
LAB_000160f8:
                    FUN_00013f10(*(undefined4 *)(iVar11 + 4),4,uVar20,sVar10,uVar7,uVar6,uVar5,uVar4
                                 ,uVar3,uVar17);
                    goto LAB_00015ff8;
                  }
                  iVar11 = FUN_000157c4(param_1,iVar25,iVar11,uVar28,uVar27,0,0,param_1 + 0x24);
                  if (iVar11 != 0) goto LAB_00015ff8;
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
                            FUN_00013f10(puVar24[1],4,DAT_000161b8);
                            goto LAB_00015ff8;
                          }
                          goto LAB_0001625c;
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
                        FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_000164dc,
                                     uVar20,uVar14,*(undefined1 *)(param_1 + 0x1b8),
                                     *(undefined1 *)(param_1 + 0x1b9),
                                     *(undefined1 *)(param_1 + 0x1ba),
                                     *(undefined1 *)(param_1 + 0x1bb),
                                     *(undefined1 *)(param_1 + 0x1bc),
                                     *(undefined1 *)(param_1 + 0x1bd));
                        goto LAB_00015ff8;
                      }
                      *(undefined4 *)(param_1 + 100) = 1;
                      if (*(int *)(param_1 + 0x1a4) != 0) {
                        FUN_00014758(DAT_000164e0,param_1,0);
                        FUN_000146b2(*(undefined4 *)(param_1 + 0x1a4),0,DAT_000164e0,param_1,0);
                      }
                    }
                  }
LAB_0001625c:
                  if ((bVar1 & 2) != 0) {
                    (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0x11])
                              (**(undefined4 **)(param_1 + 0x15c),iVar25,1);
                  }
                  FUN_000151be(*(undefined4 *)(param_1 + 0x15c),8);
                  if (local_80 == (byte *)0x0) goto LAB_00015f5e;
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
LAB_000162e6:
                    iVar11 = *(int *)(param_1 + 0x15c);
                    uVar14 = 3;
                    uVar20 = DAT_000164e4;
                    goto LAB_000162ee;
                  }
                  local_bc = *local_80 & 3;
                  uVar20 = FUN_00015238(param_1,(*local_80 & 7) >> 2);
                  local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                  memcpy(&local_b8,local_80 + 2,uVar23);
                  local_98 = uVar23;
                  iVar11 = FUN_0001525c(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),uVar23,
                                        uVar23,&uStack_c0,&local_c8);
                  if ((iVar11 != 0) ||
                     (iVar11 = FUN_0001536c(param_1,&local_c8,(int)__dest + 0x41), iVar11 != 0))
                  goto LAB_000162e6;
                  goto LAB_0001630a;
                }
                iVar11 = *(int *)(param_1 + 0x15c);
                uVar20 = DAT_00016194;
LAB_00015fa0:
                uVar14 = 4;
LAB_000162ee:
                FUN_00013f10(*(undefined4 *)(iVar11 + 4),uVar14,uVar20);
              }
LAB_00015ff8:
              (*(code *)(*(undefined4 **)(param_1 + 0x15c))[4])
                        (**(undefined4 **)(param_1 + 0x15c),1);
            }
            else if ((bVar1 & 0x20) == 0) {
              puVar24 = *(undefined4 **)(param_1 + 0x15c);
              uVar20 = DAT_00016884;
              if ((bVar1 & 1) == 0) {
LAB_00016320:
                FUN_00013f10(puVar24[1],4,uVar20);
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
                  FUN_00017c8e((int)__dest + 99,uVar23,local_94);
                  if (local_80 == (byte *)0x0) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar14 = 3;
                    uVar20 = DAT_0001685c;
LAB_00016572:
                    FUN_00013f10(*(undefined4 *)(iVar25 + 4),uVar14,uVar20);
                    goto LAB_000165c6;
                  }
                  if ((bVar1 & 0x10) == 0) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar20 = DAT_00016858;
LAB_00016566:
                    uVar14 = 4;
                    goto LAB_00016572;
                  }
                  local_98 = local_7c - 2;
                  iVar25 = FUN_0001525c(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),local_98,
                                        local_98,&uStack_c0,&local_c8);
                  if (iVar25 != 0) goto LAB_000165c6;
                  local_bc = *local_80 & 3;
                  uVar20 = FUN_00015238(param_1,(*local_80 & 7) >> 2);
                  uVar23 = local_7c - 2;
                  local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                  if (0x20 < uVar23) {
                    iVar25 = *(int *)(param_1 + 0x15c);
                    uVar20 = DAT_00016860;
                    goto LAB_000165be;
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
                    uVar20 = DAT_00016868;
LAB_000166fe:
                    FUN_00013f10(*(undefined4 *)(iVar25 + 4),uVar14,uVar20,uVar23,uVar26);
                  }
                  else {
                    uVar26 = uVar23;
                    if (uVar28 == 2) {
                      if (7 < uVar23) {
                        uVar26 = uVar23 - 8;
                        goto LAB_00016720;
                      }
                      iVar25 = *(int *)(param_1 + 0x15c);
                      uVar20 = DAT_0001686c;
LAB_000165be:
                      uVar14 = 3;
                    }
                    else {
LAB_00016720:
                      iVar25 = FUN_0001525c(param_1 + 0x15c,*(undefined4 *)(param_1 + 0x1d8),
                                            local_98,uVar26,&uStack_c0,&local_c8);
                      if (iVar25 != 0) goto LAB_000165c6;
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
                          iVar25 = FUN_000198d8(local_94,0x20,0x100,&local_b8,uVar23);
                          if (iVar25 != 0) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar14 = 5;
                            uVar20 = DAT_00016874;
                            goto LAB_00016572;
                          }
LAB_00016806:
                          uVar20 = FUN_00015238(param_1,(uVar27 & 0x7f) >> 6);
                          local_c8 = CONCAT44(uVar20,(undefined4)local_c8);
                          iVar25 = 0;
                          goto LAB_000165d8;
                        }
                        iVar25 = *(int *)(param_1 + 0x15c);
                        uVar20 = DAT_00016870;
                      }
                      else {
                        if ((bVar8 & 7) == 0) {
                          if (0x20 < uVar26) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar14 = 4;
                            uVar20 = DAT_0001687c;
                            goto LAB_000166fe;
                          }
                          iVar25 = FUN_00018ba4(param_1 + 0x34,uVar26 >> 3,(int)__dest + 99,
                                                &local_b8);
                          if (iVar25 != 0) {
                            iVar25 = *(int *)(param_1 + 0x15c);
                            uVar20 = DAT_00016880;
                            goto LAB_00016566;
                          }
                          goto LAB_00016806;
                        }
                        iVar25 = *(int *)(param_1 + 0x15c);
                        uVar20 = DAT_00016878;
                      }
                      uVar14 = 4;
                    }
                    FUN_00013f10(*(undefined4 *)(iVar25 + 4),uVar14,uVar20,uVar23);
                  }
LAB_000165c6:
                  iVar25 = -1;
                }
LAB_000165d8:
                FUN_000151be(*(undefined4 *)(param_1 + 0x15c),8);
                if (((iVar25 != 0) ||
                    (iVar25 = FUN_0001536c(param_1,&local_c8,(int)__dest + 0x41), iVar25 != 0)) ||
                   (iVar25 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xc])
                                       (**(undefined4 **)(param_1 + 0x15c),3,0,0x5f,&local_cc,
                                        local_94), iVar25 == 0)) goto LAB_00015ff8;
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
                FUN_00015500(param_1,param_1 + 0x24,uVar28,param_1 + 0x1b8,0x888e,iVar25,local_cc,
                             local_94[0] + 0x4d);
                if (iVar11 == 9) {
                  uVar17 = *(undefined1 *)(param_1 + 0x1bd);
                  uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x15c) + 4);
                  uVar3 = *(undefined1 *)(param_1 + 0x1b8);
                  uVar4 = *(undefined1 *)(param_1 + 0x1b9);
                  uVar5 = *(undefined1 *)(param_1 + 0x1ba);
                  uVar6 = *(undefined1 *)(param_1 + 0x1bb);
                  uVar7 = *(undefined1 *)(param_1 + 0x1bc);
                  uVar20 = FUN_00018340(*(undefined4 *)(param_1 + 0x1d8));
                  FUN_00013f10(uVar14,3,DAT_00016864,uVar3,uVar4,uVar5,uVar6,uVar7,uVar17,uVar20);
                  (*(code *)(*(undefined4 **)(param_1 + 0x15c))[0xb])
                            (**(undefined4 **)(param_1 + 0x15c));
                  FUN_000151be(*(undefined4 *)(param_1 + 0x15c),9);
                }
                else {
LAB_0001630a:
                  FUN_00015454(param_1,param_1 + 0x1b8,uVar27 & 0x200);
                }
              }
            }
            else {
              FUN_000174a0(param_1,param_2,iVar11,uVar26,uVar23,uVar28);
            }
LAB_00015f5e:
            uVar20 = 1;
            goto LAB_00015c04;
          }
          if (*(int *)(param_1 + 0xac) == 0) {
            iVar11 = *(int *)(param_1 + 0x15c);
            uVar20 = DAT_00015edc;
            goto LAB_00015c5a;
          }
          if (uVar28 != 1) {
            if ((*(byte *)((int)__dest + 0x62) & 7) != 0) {
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar14 = 4;
              uVar20 = DAT_00015ee4;
              goto LAB_00015bd2;
            }
            uVar27 = uVar26 - 8 & 0xffff;
            pvVar16 = malloc(uVar27);
            if (pvVar16 == (void *)0x0) {
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar20 = DAT_00015ee8;
            }
            else {
              iVar25 = FUN_00018ba4(param_1 + 0x34,uVar27 >> 3,(void *)((int)__dest + 99),pvVar16);
              if (iVar25 == 0) {
                memcpy((void *)((int)__dest + 99),pvVar16,uVar27);
                free(pvVar16);
                *(char *)((int)__dest + 0x62) = (char)uVar27;
                *(char *)((int)__dest + 0x61) = (char)(uVar27 >> 8);
                goto LAB_00015f2c;
              }
              free(pvVar16);
              iVar11 = *(int *)(param_1 + 0x15c);
              uVar20 = DAT_0001618c;
            }
            goto LAB_00015c5a;
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
          iVar25 = FUN_000198d8(local_94,0x20,0x100,(int)__dest + 99,uVar26);
          if (iVar25 == 0) {
LAB_00015f2c:
            uVar26 = (uint)CONCAT11(*(undefined1 *)((int)__dest + 0x61),
                                    *(undefined1 *)((int)__dest + 0x62));
            goto LAB_00015f38;
          }
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar14 = 5;
          uVar20 = DAT_00015ee0;
        }
        else {
          iVar11 = *(int *)(param_1 + 0x15c);
          uVar20 = DAT_00015ebc;
LAB_00015ca4:
          uVar14 = 3;
        }
      }
      FUN_00013f10(*(undefined4 *)(iVar11 + 4),uVar14,uVar20);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x15c);
    uVar14 = 3;
    uVar20 = DAT_00015eac;
    uVar26 = uVar28;
LAB_00015bd2:
    FUN_00013f10(*(undefined4 *)(iVar11 + 4),uVar14,uVar20,uVar26);
  }
LAB_00015c00:
  uVar20 = 0xffffffff;
LAB_00015c04:
  free(__dest);
  return uVar20;
}



/* ===== FUN_00016888 @ 00016888 size=8 ===== */

void FUN_00016888(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x164) = param_2;
  }
  return;
}



/* ===== FUN_00016890 @ 00016890 size=8 ===== */

void FUN_00016890(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x160) = param_2;
  }
  return;
}



/* ===== FUN_00016898 @ 00016898 size=98 ===== */

void FUN_00016898(int param_1,undefined4 *param_2)

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



/* ===== FUN_000168fa @ 000168fa size=16 ===== */

void FUN_000168fa(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = *param_2;
    *(undefined2 *)(param_1 + 0x1ac) = *(undefined2 *)(param_2 + 1);
  }
  return;
}



/* ===== FUN_0001690a @ 0001690a size=8 ===== */

void FUN_0001690a(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1b0) = param_2;
    *(undefined4 *)(param_1 + 0x1b4) = param_3;
  }
  return;
}



/* ===== FUN_00016912 @ 00016912 size=8 ===== */

void FUN_00016912(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x130) = param_2;
  }
  return;
}



/* ===== FUN_0001691a @ 0001691a size=82 ===== */

undefined4 FUN_0001691a(int param_1,undefined4 param_2,int param_3)

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



/* ===== FUN_000169be @ 000169be size=78 ===== */

int FUN_000169be(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_00018340(*(undefined4 *)(param_1 + 0x1d4));
  uVar2 = FUN_00018340(*(undefined4 *)(param_1 + 0x1d8));
  uVar3 = FUN_0001835c(*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1d0));
  iVar4 = snprintf(param_2,param_3,DAT_00016a0c,uVar1,uVar2,uVar3);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if ((int)param_3 <= iVar4) {
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== FUN_00016a10 @ 00016a10 size=62 ===== */

undefined4 FUN_00016a10(int param_1,void *param_2,size_t *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  size_t __size;
  void *__dest;
  
  if ((param_1 == 0) ||
     (__size = FUN_00017a8e(param_1,param_2,*param_3,param_4,param_4), (int)__size < 0)) {
LAB_00016a1a:
    uVar1 = 0xffffffff;
  }
  else {
    *param_3 = __size;
    if (*(int *)(param_1 + 0x1ec) == 0) {
      __dest = malloc(__size);
      *(void **)(param_1 + 0x1ec) = __dest;
      if (__dest == (void *)0x0) goto LAB_00016a1a;
      memcpy(__dest,param_2,__size);
      *(size_t *)(param_1 + 0x1f0) = __size;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00016a4e @ 00016a4e size=66 ===== */

undefined4 FUN_00016a4e(int param_1,void *param_2,size_t param_3)

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



/* ===== FUN_00016a90 @ 00016a90 size=70 ===== */

undefined4 FUN_00016a90(int param_1,void *param_2,size_t param_3)

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



/* ===== FUN_00016ad6 @ 00016ad6 size=70 ===== */

undefined4 FUN_00016ad6(int param_1,void *param_2,size_t param_3)

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



/* ===== FUN_00016b1c @ 00016b1c size=38 ===== */

undefined4 FUN_00016b1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1ec) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00017a6c(*(int *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0),param_2,param_1,
                         param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* ===== FUN_00016b42 @ 00016b42 size=6 ===== */

undefined4 FUN_00016b42(void)

{
  return 0xffffffff;
}



/* ===== FUN_00016b48 @ 00016b48 size=82 ===== */

void FUN_00016b48(undefined4 *param_1)

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



/* ===== FUN_00016ba6 @ 00016ba6 size=44 ===== */

undefined1 * FUN_00016ba6(undefined1 *param_1,undefined1 param_2,void *param_3,size_t param_4)

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



/* ===== FUN_00016bd2 @ 00016bd2 size=74 ===== */

void FUN_00016bd2(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

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
      FUN_00014238(&local_18);
      uVar1 = DAT_00016c1c;
      *(uint *)(param_2 + 0x130) = local_18 + uVar2;
      FUN_00014758(uVar1,param_1,param_2,local_18 + uVar2,uVar3,iVar4);
      FUN_000146b2(uVar2,0,DAT_00016c1c,param_1,param_2);
    }
  }
  return;
}



/* ===== FUN_00016c20 @ 00016c20 size=88 ===== */

void FUN_00016c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  local_4c = *DAT_00016c78;
  uStack_48 = DAT_00016c78[1];
  uStack_44 = DAT_00016c78[2];
  uStack_40 = DAT_00016c78[3];
  local_3c = DAT_00016c78[4];
  puVar3 = local_38;
  local_60 = DAT_00016c7c;
  local_50 = param_5;
  uStack_5c = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  FUN_0001cac4(param_1,0x20,5,&local_60,&local_4c,puVar3);
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



/* ===== FUN_00016c80 @ 00016c80 size=196 ===== */

undefined4 FUN_00016c80(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
    FUN_00013e56((undefined4 *)(param_1 + 0x104),8);
    puVar2 = local_28 + 0x5f;
    local_28[0x5d] = 0;
    local_28[0x5e] = cVar4;
    if (param_3 != 0) {
      puVar2 = (undefined1 *)FUN_00016ba6(puVar2,DAT_00016d44,param_3,6);
    }
    local_24 = DAT_00016d48;
    FUN_00016ba6(puVar2,DAT_00016d4c,&local_24,4);
    FUN_00015500(param_1,param_1 + 0x24,param_4,param_2,0x888e,iVar1,local_2c,local_28 + 0x4d);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00016d50 @ 00016d50 size=256 ===== */

undefined4
FUN_00016d50(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    FUN_00017ef0(param_2 + 0xf8,0x20,DAT_00016e50,param_1 + 0x1a8,param_2 + 8,param_2 + 0xe,
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
LAB_00016e18:
    if (*(int *)(param_2 + 0x1d0) != 0) {
      *__s2 = 0;
      *(undefined4 *)(param_3 + 0x51) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(param_3 + 0x55) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(param_3 + 0x59) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      FUN_00017ea0(param_2 + 0x148,param_4,param_5,param_6,__s2);
      iVar1 = memcmp(local_30,__s2,0x10);
      if (iVar1 == 0) goto LAB_00016e00;
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
    FUN_00017ea0((void *)(param_2 + 0x18c),param_4,param_5,param_6,__s2);
    iVar1 = memcmp(local_30,__s2,0x10);
    if (iVar1 != 0) goto LAB_00016e18;
    *(undefined4 *)(param_2 + 0x1d4) = 0;
    *(undefined4 *)(param_2 + 0x1d0) = 1;
    memcpy((void *)(param_2 + 0x148),(void *)(param_2 + 0x18c),0x44);
LAB_00016e00:
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_3 + 9);
    *(undefined4 *)(param_2 + 0x140) = 1;
  }
  return uVar2;
}



/* ===== FUN_00016e54 @ 00016e54 size=534 ===== */

undefined4 FUN_00016e54(int param_1,undefined4 *param_2)

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
      (iVar1 = FUN_00017fd2(*(int *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200),auStack_48),
      (local_38 & 0x200) != 0 || iVar1 != 0)))) {
    if (*(int *)(param_1 + 0x1d4) == 0x10) {
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
    iVar1 = (*(code *)(*(undefined4 **)(param_1 + 0x15c))[8])
                      (**(undefined4 **)(param_1 + 0x15c),auStack_50);
    if ((-1 < iVar1) && (__ptr = (undefined4 *)FUN_0001449c(0x1d8), __ptr != (undefined4 *)0x0)) {
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
        FUN_00013e56((undefined4 *)(param_1 + 0x104),8);
        iVar1 = FUN_00019ae0((undefined4 *)((int)__ptr + 0xe),0x20);
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
          FUN_00016ba6(__dest + __n,DAT_00017074,param_2,6);
          FUN_00015500(param_1,param_1 + 0x24,uVar5,auStack_50,0x888e,__ptr_00,local_58,
                       local_54 + 0x4d);
          *__ptr = *(undefined4 *)(param_1 + 0x204);
          *(undefined4 **)(param_1 + 0x204) = __ptr;
          return 0;
        }
        FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00017070);
        free(__ptr_00);
      }
      FUN_00014758(DAT_0001706c,param_1,__ptr);
      free(__ptr);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00017078 @ 00017078 size=26 ===== */

void FUN_00017078(int param_1)

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



/* ===== FUN_00017092 @ 00017092 size=1022 ===== */

void FUN_00017092(int param_1,int param_2,int param_3,uint param_4,undefined2 param_5)

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
    iVar1 = FUN_00017c8e(param_3 + 0x5f,
                         CONCAT11(*(undefined1 *)(param_3 + 0x5d),*(undefined1 *)(param_3 + 0x5e)),
                         &local_94);
    if ((((-1 < iVar1) && (local_88 == *(size_t *)(param_2 + 0xa0))) &&
        (iVar1 = memcmp(local_8c,(void *)(param_2 + 0x4e),local_88), iVar1 == 0)) &&
       (iVar1 = memcmp((void *)(param_2 + 0xe),(void *)(param_3 + 0xd),0x20), iVar1 == 0)) {
      FUN_00016bd2(param_1,param_2,&local_94);
      iVar1 = FUN_000157c4(param_1,param_2 + 8,param_3,param_5,
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
        iVar1 = FUN_00017c8e(param_3 + 0x5f,
                             CONCAT11(*(undefined1 *)(param_3 + 0x5d),
                                      *(undefined1 *)(param_3 + 0x5e)),&local_94);
        if ((((-1 < iVar1) && (local_84 != (void *)0x0)) && (local_8c != (void *)0x0)) &&
           (((iVar1 = memcmp(local_84,(void *)(param_2 + 0x11c),0x10), iVar1 == 0 &&
             (local_88 == *(size_t *)(param_2 + 0xf4))) &&
            (iVar1 = memcmp(local_8c,(void *)(param_2 + 0xa4),local_88), iVar1 == 0)))) {
          FUN_00016bd2(param_1,param_2,&local_94);
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
            FUN_00013e56((undefined4 *)(param_2 + 0x138),8);
            local_bc[0x5e] = (char)uVar2;
            __dest_00 = local_bc + 0x5f;
            local_bc[0x5d] = (char)(uVar11 >> 8);
            sVar10 = *(size_t *)(param_2 + 0xa0);
            memcpy(__dest_00,(void *)(param_2 + 0x4e),sVar10);
            uVar2 = *(uint *)(param_2 + 300);
            local_b4[0] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18;
            FUN_00016ba6(__dest_00 + sVar10,DAT_00017498,local_b4,4);
            puVar3 = (undefined4 *)(local_bc + 0xd);
            puVar5 = (undefined4 *)(param_2 + 0xe);
            do {
              puVar7 = puVar5 + 1;
              *puVar3 = *puVar5;
              puVar3 = puVar3 + 1;
              puVar5 = puVar7;
            } while (puVar7 != (undefined4 *)(param_2 + 0x2e));
            FUN_00015500(param_1,param_2 + 0x148,bVar12,param_2 + 8,0x888e,iVar1,local_c0,
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
      iVar1 = FUN_00017c8e(param_3 + 0x5f,
                           CONCAT11(*(undefined1 *)(param_3 + 0x5d),*(undefined1 *)(param_3 + 0x5e))
                           ,&local_94);
      if ((-1 < iVar1) && (local_84 != (void *)0x0)) {
        iVar1 = memcmp(local_84,(void *)(param_2 + 0x11c),0x10);
        if (iVar1 == 0) {
          iVar9 = param_2 + 0x2e;
          iVar1 = FUN_00019ae0(iVar9,0x20);
          if (iVar1 == 0) {
            FUN_00017ef0(param_2 + 0xf8,0x20,DAT_00017494,param_1 + 0x1a8,param_2 + 8,iVar9,
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
              uVar8 = FUN_00016ba6((int)__dest + sVar10,DAT_00017498,&local_bc,4);
              FUN_00016ba6(uVar8,DAT_0001749c,(void *)(param_2 + 0x11c),0x10);
              iVar1 = FUN_000156e0(param_1,param_2 + 8,param_3,param_5,iVar9,__dest,sVar10 + 0x20,
                                   param_2 + 0x18c);
              if (iVar1 != 0) {
                free(__dest);
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
            FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00017490);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_000174a0 @ 000174a0 size=1444 ===== */

void FUN_000174a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ushort param_5,
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
        (iVar7 = FUN_00017c8e(param_3 + 0x5f,param_4,auStack_94), -1 < iVar7)) &&
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
      FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),3,DAT_00017848,
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
        (iVar7 = FUN_00017c8e(param_3 + 0x5f,param_4,auStack_94), -1 < iVar7)) &&
       (((local_8c != (void *)0x0 && (local_78 != (uint *)0x0)) &&
        ((5 < local_74 &&
         ((local_88 < 0x51 && (iVar7 = FUN_00017fd2(local_8c,local_88,&local_b4), -1 < iVar7))))))))
    {
      local_b0 = local_b0 & *(uint *)(param_1 + 0x170);
      if ((int)(local_b0 << 0x1b) < 0) {
        iVar7 = 0x10;
      }
      else {
        if (-1 < (int)(local_b0 << 0x1c)) {
LAB_000175c2:
          FUN_00016c80(param_1,param_2,local_78,param_6);
          return;
        }
        iVar7 = 8;
      }
      puVar3 = (undefined4 *)FUN_0001449c(0x1d8);
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
        iVar4 = FUN_00019ae0((undefined4 *)((int)puVar3 + 0x2e),0x20);
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
            uVar5 = FUN_00016ba6(__dest + __n,DAT_00017854,puVar3 + 2,6);
            FUN_00016ba6(uVar5,DAT_00017858,(undefined4 *)((int)puVar3 + 0xe),0x20);
            FUN_00015500(param_1,param_1 + 0x24,param_6,param_2,0x888e,iVar7,local_bc,
                         local_b8 + 0x4d);
          }
          *puVar3 = *(undefined4 *)(param_1 + 0x204);
          *(undefined4 **)(param_1 + 0x204) = puVar3;
        }
        else {
          FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_0001784c);
          FUN_00014758(DAT_00017850,param_1,puVar3);
LAB_00017650:
          free(puVar3);
        }
      }
    }
  }
  else if ((((((iVar7 != 0) && (*(int *)(param_1 + 0x1d0) == 2)) &&
             (iVar7 = FUN_00017c8e(param_3 + 0x5f,param_4,auStack_94), puVar3 = local_68,
             puVar12 = local_70, __s2 = local_78, -1 < iVar7)) &&
            ((local_78 != (uint *)0x0 && (5 < local_74)))) && (local_68 != (undefined4 *)0x0)) &&
          (((0x1f < local_64 && (local_70 != (undefined4 *)0x0)) &&
           ((0x3f < local_6c && ((local_60 != (uint *)0x0 && (3 < local_5c)))))))) {
    piVar11 = *(int **)(param_1 + 0x204);
LAB_0001780e:
    if (piVar11 != (int *)0x0) {
      __s1_00 = piVar11 + 2;
      iVar7 = memcmp(__s1_00,__s2,6);
      if (iVar7 != 0) goto LAB_0001783c;
      iVar7 = piVar11[1];
      if (iVar7 == 0) {
        __s1 = (void *)((int)piVar11 + 0x2e);
      }
      else {
        __s1 = (void *)((int)piVar11 + 0xe);
      }
      iVar4 = memcmp(__s1,(void *)(param_3 + 0xd),0x20);
      if (iVar4 != 0) goto LAB_0001783c;
      if (iVar7 == 0) {
        iVar7 = memcmp(puVar12 + 8,(void *)((int)piVar11 + 0x2e),0x20);
        if ((iVar7 == 0) && (iVar7 = memcmp(puVar3,(void *)((int)piVar11 + 0xe),0x20), iVar7 == 0))
        goto LAB_00017948;
      }
      else if ((local_8c != (void *)0x0) &&
              ((local_88 < 0x51 && (iVar7 = FUN_00017fd2(local_8c,local_88,&local_b4), -1 < iVar7)))
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
            if (-1 < (int)(local_b0 << 0x1c)) goto LAB_000175c2;
            uVar5 = 8;
          }
          piVar11[0x4d] = uVar5;
LAB_00017948:
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
          if (DAT_00017a5c <= uVar8) {
            uVar8 = DAT_00017a5c;
          }
          piVar11[0x4b] = uVar8;
          FUN_00014238(&local_b4);
          uVar5 = DAT_00017a60;
          piVar11[0x4c] = local_b4 + uVar8;
          puVar12 = (undefined4 *)((int)piVar11 + 0xe);
          FUN_000146b2(uVar8,0,uVar5,param_1,piVar11);
          if (piVar11[1] == 0) {
            FUN_00016c20(puVar6,(int)piVar11 + 0x2e,param_1 + 0x1a8,puVar12,__s1_00,iVar7);
            return;
          }
          FUN_00016c20(puVar6,(int)piVar11 + 0x2e,__s1_00,puVar12,param_1 + 0x1a8,iVar7);
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
          FUN_00013e56(piVar11 + 0x4e,8);
          uVar5 = DAT_00017a64;
          local_b8[0x5d] = 0;
          local_b8[0x5e] = 0x16;
          FUN_00016ba6(local_b8 + 0x5f,uVar5,iVar7,0x10);
          iVar7 = FUN_00019ae0(puVar12,0x20);
          if (iVar7 == 0) {
            puVar6 = (undefined4 *)(local_b8 + 0xd);
            do {
              puVar9 = puVar12 + 1;
              *puVar6 = *puVar12;
              puVar6 = puVar6 + 1;
              puVar12 = puVar9;
            } while (puVar9 != (undefined4 *)((int)piVar11 + 0x2e));
            FUN_00015500(param_1,0,bVar13,__s1_00,0x888e,puVar3,local_bc,0);
            return;
          }
          FUN_00013f10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 4),4,DAT_00017a68);
          goto LAB_00017650;
        }
      }
    }
  }
  return;
LAB_0001783c:
  piVar11 = (int *)*piVar11;
  goto LAB_0001780e;
}



/* ===== FUN_00017a6c @ 00017a6c size=414 ===== */

undefined4 FUN_00017a6c(char *param_1,uint param_2,undefined4 *param_3)

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
    uVar4 = FUN_00017fd2();
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
  uVar1 = DAT_000182e0;
  if (param_2 < 8) {
    uVar4 = 0xffffffff;
  }
  else if ((((*param_1 == -0x23) && ((uint)(byte)param_1[1] == param_2 - 2)) &&
           (uVar7 = *(uint *)(param_1 + 2),
           (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) == DAT_000182e0)) && (*(short *)(param_1 + 6) == 1)) {
    iVar9 = param_2 - 8;
    puVar5 = (ushort *)(param_1 + 8);
    if (iVar9 < 4) {
      if (0 < iVar9) {
        return 0xfffffffd;
      }
    }
    else {
      uVar13 = FUN_00017e64();
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
        uVar13 = FUN_00017e64(puVar5);
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
        uVar3 = DAT_000182e8;
        uVar2 = DAT_000182e4;
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



/* ===== FUN_00017a8e @ 00017a8e size=512 ===== */

int FUN_00017a8e(int param_1,undefined1 *param_2,uint param_3)

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
LAB_00017ada:
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
          goto LAB_00017ada;
        }
        if (iVar8 != 2) goto LAB_00017ab2;
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
        if (iVar9 != 1) goto LAB_00017ab2;
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
        goto LAB_00017b3c;
      }
    }
LAB_00017ab2:
    iVar7 = -1;
  }
  else {
    if (param_3 < 0x18) goto LAB_00017ab2;
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
LAB_00017be4:
      param_2[0xb] = uVar3;
    }
    else {
      if (iVar8 == 8) {
        param_2[8] = 0;
        uVar3 = 2;
        param_2[9] = 0x50;
        param_2[10] = 0xf2;
        goto LAB_00017be4;
      }
      if (iVar8 == 4) {
        param_2[8] = 0;
        uVar3 = 5;
        param_2[9] = 0x50;
        param_2[10] = 0xf2;
        goto LAB_00017be4;
      }
      if (iVar8 != 2) goto LAB_00017ab2;
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
      if (iVar9 != 1) goto LAB_00017ab2;
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
      if (iVar7 != 0x10) goto LAB_00017ab2;
      param_2[0x14] = 0;
      param_2[0x15] = 0x50;
      param_2[0x17] = 0;
      param_2[0x16] = 0xf2;
    }
    iVar7 = 0x18;
    cVar6 = '\x16';
LAB_00017b3c:
    param_2[1] = cVar6;
  }
  return iVar7;
}



/* ===== FUN_00017c8e @ 00017c8e size=376 ===== */

undefined4 FUN_00017c8e(char *param_1,int param_2,undefined4 *param_3)

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
  uVar8 = DAT_00017e24;
  uVar7 = DAT_00017e20;
  uVar6 = DAT_00017e1c;
  uVar5 = DAT_00017e18;
  uVar4 = DAT_00017e14;
  uVar3 = DAT_00017e0c;
  uVar2 = DAT_00017e08;
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
          if (*(int *)(param_1 + 2) == DAT_00017e10) {
            param_3[4] = param_1 + 6;
          }
          else {
LAB_00017d9a:
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
        else if (6 < uVar9) goto LAB_00017d9a;
      }
      else {
        *param_3 = param_1;
        param_3[1] = (byte)param_1[1] + 2;
      }
    }
    param_1 = param_1 + (byte)param_1[1] + 2;
  } while( true );
}



/* ===== FUN_00017e28 @ 00017e28 size=56 ===== */

undefined4 FUN_00017e28(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 == DAT_00017e60) {
    return 1;
  }
  if (uVar1 == DAT_00017e60 + 1) {
    return 2;
  }
  if (uVar1 == DAT_00017e60 + 2) {
    return 8;
  }
  if (uVar1 == DAT_00017e60 + 4) {
    return 0x10;
  }
  if (uVar1 == DAT_00017e60 + 5) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00017e64 @ 00017e64 size=56 ===== */

undefined4 FUN_00017e64(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (uVar1 == DAT_00017e9c) {
    return 1;
  }
  if (uVar1 == DAT_00017e9c + 1) {
    return 2;
  }
  if (uVar1 == DAT_00017e9c + 2) {
    return 8;
  }
  if (uVar1 == DAT_00017e9c + 4) {
    return 0x10;
  }
  if (uVar1 == DAT_00017e9c + 5) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00017ea0 @ 00017ea0 size=80 ===== */

undefined4
FUN_00017ea0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_24 [4];
  undefined4 uStack_14;
  
  if (param_2 == 1) {
    uVar4 = FUN_000190b8(param_1,0x10,param_3,param_4,param_5);
  }
  else {
    if (param_2 == 2) {
      puVar3 = local_24;
      iVar1 = FUN_0001cbd4(param_1,0x10,param_3,param_4,puVar3);
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



/* ===== FUN_00017ef0 @ 00017ef0 size=226 ===== */

void FUN_00017ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
  FUN_0001cbf0(param_1,param_2,param_3,&local_64,0x4c,param_8,param_9);
  return;
}



/* ===== FUN_00017fd2 @ 00017fd2 size=394 ===== */

undefined4 FUN_00017fd2(char *param_1,uint param_2,undefined4 *param_3)

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
      uVar15 = FUN_00017e28();
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
        uVar15 = FUN_00017e28(puVar13);
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
        uVar1 = DAT_00018160;
        uVar6 = DAT_0001815c;
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



/* ===== FUN_000182ec @ 000182ec size=76 ===== */

void FUN_000182ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  local_44 = *DAT_00018338;
  uStack_40 = DAT_00018338[1];
  uStack_3c = DAT_00018338[2];
  local_50 = DAT_0001833c;
  puVar3 = local_38;
  uStack_4c = param_3;
  local_48 = param_4;
  FUN_0001cac4(param_1,param_2,3,&local_50,&local_44,puVar3);
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



/* ===== FUN_00018340 @ 00018340 size=18 ===== */

undefined4 FUN_00018340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00018358;
  if (param_1 - 1U < 0x18) {
    uVar1 = *(undefined4 *)(DAT_00018354 + (param_1 - 1U) * 4 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_0001835c @ 0001835c size=56 ===== */

undefined4 FUN_0001835c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 1:
    uVar1 = DAT_000183a4;
    uVar2 = DAT_000183a0;
    if (param_2 == 3) {
      return DAT_000183b8;
    }
    break;
  case 2:
    uVar1 = DAT_000183ac;
    uVar2 = DAT_000183a8;
    if (param_2 == 3) {
      return DAT_000183bc;
    }
    break;
  default:
    return DAT_000183b0;
  case 4:
    return DAT_000183b4;
  case 8:
    return DAT_0001839c;
  }
  if (param_2 == 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* ===== FUN_000183c0 @ 000183c0 size=36 ===== */

int FUN_000183c0(undefined4 param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

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



/* ===== FUN_000183e4 @ 000183e4 size=282 ===== */

undefined4 * FUN_000183e4(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  undefined4 *__ptr;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_6c [20];
  byte local_58 [68];
  
  __ptr = (undefined4 *)FUN_0001449c(0xa4);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    switch(param_1) {
    case 0:
      FUN_00019770(__ptr + 1);
      break;
    case 1:
      FUN_0001da90(__ptr + 1);
      break;
    case 2:
      puVar3 = __ptr + 1;
      if (0x40 < param_3) {
        FUN_00019770(puVar3);
        FUN_0001979c(puVar3,param_2,param_3);
        param_2 = auStack_6c;
        FUN_0001982e(auStack_6c,puVar3);
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
      FUN_00019770(puVar3);
      FUN_0001979c(puVar3,local_58,0x40);
      break;
    case 3:
      puVar3 = __ptr + 1;
      if (0x40 < param_3) {
        FUN_0001da90(puVar3);
        FUN_0001dac4(puVar3,param_2,param_3);
        param_2 = auStack_6c;
        FUN_0001db30(auStack_6c,puVar3);
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
      FUN_0001da90(puVar3);
      FUN_0001dac4(puVar3,local_58,0x40);
      break;
    default:
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00018520 @ 00018520 size=302 ===== */

undefined4 FUN_00018520(undefined4 *param_1,int param_2,uint *param_3)

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
  if ((param_2 == 0) || (param_3 == (uint *)0x0)) goto switchD_00018542_default;
  switch(*param_1) {
  case 0:
    if (0xf < *param_3) {
      *param_3 = 0x10;
LAB_00018568:
      FUN_0001982e(param_2,param_1 + 1);
      goto switchD_00018542_default;
    }
    break;
  case 1:
    if (*param_3 < 0x14) {
LAB_00018576:
      uVar2 = 0x14;
      goto LAB_00018552;
    }
    *param_3 = 0x14;
    goto LAB_00018580;
  case 2:
    if (0xf < *param_3) {
      puVar4 = param_1 + 1;
      *param_3 = 0x10;
      FUN_0001982e(param_2,puVar4);
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
      FUN_00019770(puVar4);
      FUN_0001979c(puVar4,local_58,0x40);
      FUN_0001979c(puVar4,param_2,0x10);
      goto LAB_00018568;
    }
    break;
  case 3:
    if (*param_3 < 0x14) goto LAB_00018576;
    puVar4 = param_1 + 1;
    *param_3 = 0x14;
    FUN_0001db30(param_2,puVar4);
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
    FUN_0001da90(puVar4);
    FUN_0001dac4(puVar4,local_58,0x40);
    FUN_0001dac4(puVar4,param_2,0x14);
LAB_00018580:
    FUN_0001db30(param_2,param_1 + 1);
switchD_00018542_default:
    free(param_1);
    return 0;
  default:
    goto switchD_00018542_default;
  }
  uVar2 = 0x10;
LAB_00018552:
  *param_3 = uVar2;
  free(param_1);
  return 0xffffffff;
}



/* ===== FUN_000186f0 @ 000186f0 size=200 ===== */

void FUN_000186f0(uint *param_1,byte *param_2)

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
  pbVar1 = DAT_000187b8;
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



/* ===== FUN_000187bc @ 000187bc size=192 ===== */

void FUN_000187bc(undefined4 *param_1)

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
  
  FUN_000186f0();
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
    iVar2 = DAT_00018880;
    iVar1 = DAT_0001887c;
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



/* ===== FUN_00018884 @ 00018884 size=32 ===== */

void * FUN_00018884(undefined4 param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 == 0x10) {
    pvVar1 = malloc(0xb0);
    if (pvVar1 != (void *)0x0) {
      FUN_000187bc(pvVar1,param_1);
    }
  }
  else {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ===== FUN_000188a4 @ 000188a4 size=754 ===== */

void FUN_000188a4(uint *param_1,byte *param_2,undefined1 *param_3)

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
  
  iVar3 = DAT_00018b9c;
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
    uVar14 = *(uint *)(DAT_00018b98 + (uVar10 & 0xff) * 4);
    uVar5 = *(uint *)(DAT_00018b98 + (uVar13 & 0xff) * 4);
    uVar6 = *(uint *)(DAT_00018b98 + ((uVar10 & 0xffffff) >> 0x10) * 4);
    uVar7 = *(uint *)(DAT_00018b98 + ((uVar15 & 0xffff) >> 8) * 4);
    uVar5 = *(uint *)(DAT_00018b98 + (uVar17 >> 0x18) * 4) ^ puVar12[4] ^
            (uVar5 >> 0x18 | uVar5 << 8) ^ (uVar6 >> 8 | uVar6 << 0x18) ^
            (uVar7 >> 0x10 | uVar7 << 0x10);
    uVar6 = *(uint *)(DAT_00018b98 + (uVar15 & 0xff) * 4);
    uVar7 = *(uint *)(DAT_00018b98 + ((uVar17 & 0xffffff) >> 0x10) * 4);
    uVar9 = *(uint *)(DAT_00018b98 + ((uVar10 & 0xffff) >> 8) * 4);
    uVar8 = puVar12[5] ^ *(uint *)(DAT_00018b98 + (uVar13 >> 0x18) * 4) ^
            (uVar6 >> 0x18 | uVar6 << 8) ^ (uVar7 >> 8 | uVar7 << 0x18) ^
            (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar16 = *(uint *)(DAT_00018b98 + ((uVar15 & 0xffffff) >> 0x10) * 4);
    uVar7 = *(uint *)(DAT_00018b98 + ((uVar13 & 0xffffff) >> 0x10) * 4);
    uVar9 = *(uint *)(DAT_00018b98 + ((uVar17 & 0xffff) >> 8) * 4);
    uVar6 = (uVar5 & 0xffffff) >> 0x10;
    uVar17 = *(uint *)(DAT_00018b98 + (uVar17 & 0xff) * 4);
    uVar14 = *(uint *)(DAT_00018b98 + (uVar15 >> 0x18) * 4) ^ puVar12[6] ^
             (uVar14 >> 0x18 | uVar14 << 8) ^ (uVar7 >> 8 | uVar7 << 0x18) ^
             (uVar9 >> 0x10 | uVar9 << 0x10);
    puVar1 = puVar12 + 8;
    uVar15 = *(uint *)(DAT_00018b98 + ((uVar13 & 0xffff) >> 8) * 4);
    uVar13 = (uVar14 & 0xffff) >> 8;
    uVar11 = *(uint *)(DAT_00018b98 + (uVar10 >> 0x18) * 4) ^ puVar12[7] ^
             (uVar17 >> 0x18 | uVar17 << 8) ^ (uVar16 >> 8 | uVar16 << 0x18) ^
             (uVar15 >> 0x10 | uVar15 << 0x10);
    uVar10 = (uVar11 & 0xffff) >> 8;
    uVar15 = (uVar8 & 0xffffff) >> 0x10;
    uVar17 = (uVar11 & 0xffffff) >> 0x10;
    uVar16 = (uVar14 & 0xffffff) >> 0x10;
    uVar7 = (uVar5 & 0xffff) >> 8;
    uVar9 = (uVar8 & 0xffff) >> 8;
    if (param_1 + 0x28 == puVar1) break;
    uVar4 = *(uint *)(DAT_00018b98 + (uVar8 & 0xff) * 4);
    uVar17 = *(uint *)(DAT_00018b98 + uVar17 * 4);
    uVar13 = *(uint *)(DAT_00018b98 + uVar13 * 4);
    uVar17 = *puVar1 ^ *(uint *)(DAT_00018b98 + (uVar5 >> 0x18) * 4) ^ (uVar4 >> 0x18 | uVar4 << 8)
             ^ (uVar17 >> 8 | uVar17 << 0x18) ^ (uVar13 >> 0x10 | uVar13 << 0x10);
    uVar13 = *(uint *)(DAT_00018b98 + (uVar14 & 0xff) * 4);
    uVar6 = *(uint *)(DAT_00018b98 + uVar6 * 4);
    uVar10 = *(uint *)(DAT_00018b98 + uVar10 * 4);
    uVar13 = puVar12[9] ^ *(uint *)(DAT_00018b98 + (uVar8 >> 0x18) * 4) ^
             (uVar13 >> 0x18 | uVar13 << 8) ^ (uVar6 >> 8 | uVar6 << 0x18) ^
             (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar6 = *(uint *)(DAT_00018b98 + (uVar11 & 0xff) * 4);
    uVar15 = *(uint *)(DAT_00018b98 + uVar15 * 4);
    uVar10 = *(uint *)(DAT_00018b98 + uVar7 * 4);
    uVar15 = puVar12[10] ^ *(uint *)(DAT_00018b98 + (uVar14 >> 0x18) * 4) ^
             (uVar6 >> 0x18 | uVar6 << 8) ^ (uVar15 >> 8 | uVar15 << 0x18) ^
             (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar10 = *(uint *)(DAT_00018b98 + (uVar5 & 0xff) * 4);
    uVar5 = *(uint *)(DAT_00018b98 + uVar16 * 4);
    uVar6 = *(uint *)(DAT_00018b98 + uVar9 * 4);
    uVar10 = *(uint *)(DAT_00018b98 + (uVar11 >> 0x18) * 4) ^ puVar12[0xb] ^
             (uVar10 >> 0x18 | uVar10 << 8) ^ (uVar5 >> 8 | uVar5 << 0x18) ^
             (uVar6 >> 0x10 | uVar6 << 0x10);
    puVar12 = puVar1;
  }
  uVar13 = (((uint)*(byte *)(DAT_00018b9c + uVar17) << 0x10 |
            (uint)*(byte *)(DAT_00018b9c + (uVar5 >> 0x18)) << 0x18) ^
            (uint)*(byte *)(DAT_00018b9c + (uVar8 & 0xff)) |
           (uint)*(byte *)(DAT_00018b9c + uVar13) << 8) ^ *puVar1;
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



/* ===== <EXTERNAL>::free @ 00018ba0 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004e1d8)(__ptr);
  return;
}



/* ===== FUN_00018ba4 @ 00018ba4 size=198 ===== */

undefined4 FUN_00018ba4(undefined4 param_1,uint param_2,undefined4 *param_3,void *param_4)

{
  void *__ptr;
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = *param_3;
  uStack_3c = param_3[1];
  memcpy(param_4,param_3 + 2,param_2 * 8);
  __ptr = (void *)FUN_00018884(param_1,0x10);
  if (__ptr == (void *)0x0) {
LAB_00018c64:
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)((int)param_4 + (param_2 * 8 - 8));
    uVar3 = param_2 & 0xff;
    iVar5 = 6;
    uVar6 = uVar3 * 5;
    do {
      puVar7 = puVar2;
      for (uVar8 = param_2; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
        local_38 = local_40;
        uStack_34._3_1_ = (byte)((uint)uStack_3c >> 0x18);
        local_30 = *puVar7;
        uStack_2c = puVar7[1];
        uStack_34 = CONCAT13(uStack_34._3_1_ ^ (char)uVar6 + (char)uVar8,(int3)uStack_3c);
        FUN_000188a4(__ptr,&local_38,&local_38,uVar3,puVar2,uVar3);
        local_40 = local_38;
        uStack_3c = uStack_34;
        *puVar7 = local_30;
        puVar7[1] = uStack_2c;
        puVar7 = puVar7 + -2;
      }
      uVar6 = (uVar6 & 0xff) - uVar3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    free(__ptr);
    iVar5 = 0;
    pcVar4 = (char *)&local_40;
    do {
      if (*pcVar4 != -0x5a) goto LAB_00018c64;
      iVar5 = iVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (iVar5 != 8);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00018fa8 @ 00018fa8 size=272 ===== */

undefined4
FUN_00018fa8(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5,
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
      iVar1 = FUN_0001989a(1,&local_b4,&local_b8,auStack_b0);
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
    iVar1 = FUN_0001989a(uVar2,local_a0,local_88,param_6);
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
      uVar3 = FUN_0001989a(2,local_a0,local_88,param_6);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000190b8 @ 000190b8 size=28 ===== */

void FUN_000190b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_4;
  uStack_c = param_3;
  FUN_00018fa8(param_1,param_2,1,&uStack_c,&local_10,param_5);
  return;
}



/* ===== FUN_000190d4 @ 000190d4 size=1446 ===== */

void FUN_000190d4(int *param_1,int *param_2)

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
  uVar4 = ((param_1[2] ^ param_1[3]) & param_1[1] ^ param_1[3]) + DAT_00019430 + iVar19 + *param_1;
  uVar5 = param_1[1] + (uVar4 >> 0x19 | uVar4 * 0x80);
  iVar1 = param_2[1];
  uVar4 = ((param_1[2] ^ param_1[1]) & uVar5 ^ param_1[2]) + DAT_00019434 + iVar1 + param_1[3];
  iVar2 = param_2[2];
  uVar7 = uVar5 + (uVar4 >> 0x14 | uVar4 * 0x1000);
  uVar4 = ((param_1[1] ^ uVar5) & uVar7 ^ param_1[1]) + DAT_00019438 + iVar2 + param_1[2];
  iVar3 = param_2[3];
  uVar6 = uVar7 + (uVar4 >> 0xf | uVar4 * 0x20000);
  uVar4 = ((uVar5 ^ uVar7) & uVar6 ^ uVar5) + DAT_0001943c + iVar3 + param_1[1];
  iVar9 = param_2[4];
  uVar4 = uVar6 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar7 ^ uVar6) & uVar4 ^ uVar7) + DAT_00019440 + iVar9 + uVar5;
  iVar10 = param_2[5];
  uVar5 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00019444 + iVar10 + uVar7;
  iVar11 = param_2[6];
  uVar7 = uVar5 + (uVar7 >> 0x14 | uVar7 * 0x1000);
  iVar18 = param_2[7];
  iVar21 = param_2[0xc];
  iVar17 = param_2[0xe];
  uVar6 = ((uVar4 ^ uVar5) & uVar7 ^ uVar4) + DAT_00019448 + iVar11 + uVar6;
  uVar6 = uVar7 + (uVar6 >> 0xf | uVar6 * 0x20000);
  uVar4 = ((uVar5 ^ uVar7) & uVar6 ^ uVar5) + DAT_0001944c + iVar18 + uVar4;
  iVar12 = param_2[8];
  uVar4 = uVar6 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar7 ^ uVar6) & uVar4 ^ uVar7) + DAT_00019450 + iVar12 + uVar5;
  iVar13 = param_2[9];
  uVar5 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_00019454 + iVar13 + uVar7;
  iVar14 = param_2[10];
  uVar8 = uVar5 + (uVar7 >> 0x14 | uVar7 * 0x1000);
  uVar6 = ((uVar4 ^ uVar5) & uVar8 ^ uVar4) + iVar14 + -0xa44f + uVar6;
  iVar15 = param_2[0xb];
  uVar7 = uVar8 + (uVar6 >> 0xf | uVar6 * 0x20000);
  uVar4 = ((uVar5 ^ uVar8) & uVar7 ^ uVar5) + DAT_00019458 + iVar15 + uVar4;
  uVar4 = uVar7 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar5 = ((uVar8 ^ uVar7) & uVar4 ^ uVar8) + DAT_0001945c + iVar21 + uVar5;
  iVar16 = param_2[0xd];
  uVar6 = uVar4 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar5 = uVar8 + DAT_000194ac + iVar16 + ((uVar7 ^ uVar4) & uVar6 ^ uVar7);
  uVar8 = uVar6 + (uVar5 >> 0x14 | uVar5 * 0x1000);
  uVar5 = ((uVar4 ^ uVar6) & uVar8 ^ uVar4) + DAT_000194b4 + iVar17 + uVar7;
  iVar20 = param_2[0xf];
  uVar7 = uVar8 + (uVar5 >> 0xf | uVar5 * 0x20000);
  uVar4 = ((uVar6 ^ uVar8) & uVar7 ^ uVar6) + DAT_00019460 + iVar20 + uVar4;
  uVar5 = uVar7 + (uVar4 >> 10 | uVar4 * 0x400000);
  uVar4 = ((uVar7 ^ uVar5) & uVar8 ^ uVar7) + DAT_00019464 + iVar1 + uVar6;
  uVar6 = uVar5 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + uVar8 + DAT_00019468 + iVar11;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_0001946c + iVar15 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_00019470 + iVar19 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = ((uVar7 ^ uVar5) & uVar4 ^ uVar7) + DAT_00019474 + iVar10 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + DAT_00019478 + iVar14 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + DAT_0001947c + iVar20 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_00019480 + iVar9 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = ((uVar7 ^ uVar5) & uVar4 ^ uVar7) + DAT_00019484 + iVar13 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = ((uVar5 ^ uVar6) & uVar7 ^ uVar5) + DAT_00019488 + iVar17 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = uVar7 + DAT_0001948c + iVar3 + ((uVar6 ^ uVar4) & uVar5 ^ uVar6);
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = uVar5 + DAT_00019490 + iVar12 + ((uVar4 ^ uVar7) & uVar6 ^ uVar4);
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = uVar6 + DAT_00019494 + iVar16 + ((uVar7 ^ uVar5) & uVar4 ^ uVar7);
  uVar6 = uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar4 = uVar4 + DAT_00019498 + iVar2 + ((uVar5 ^ uVar6) & uVar7 ^ uVar5);
  uVar4 = uVar6 + (uVar4 >> 0x17 | uVar4 * 0x200);
  uVar7 = ((uVar6 ^ uVar4) & uVar5 ^ uVar6) + uVar7 + DAT_0001949c + iVar18;
  uVar7 = uVar4 + (uVar7 >> 0x12 | uVar7 * 0x4000);
  uVar5 = ((uVar4 ^ uVar7) & uVar6 ^ uVar4) + DAT_000194b0 + iVar21 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar6 = uVar6 + iVar10 + -0x5c6be + (uVar4 ^ uVar7 ^ uVar5);
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = (uVar7 ^ uVar5 ^ uVar6) + DAT_000194a0 + iVar12 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = uVar7 + DAT_000194a4 + iVar15 + (uVar5 ^ uVar6 ^ uVar4);
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + DAT_000194a8 + iVar17 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar6 = (uVar4 ^ uVar7 ^ uVar5) + DAT_00019704 + iVar1 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = (uVar7 ^ uVar5 ^ uVar6) + DAT_00019708 + iVar9 + uVar4;
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = (uVar5 ^ uVar6 ^ uVar4) + uVar7 + DAT_0001970c + iVar18;
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + DAT_00019710 + iVar14 + uVar5;
  uVar5 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar6 = (uVar4 ^ uVar7 ^ uVar5) + DAT_00019714 + iVar16 + uVar6;
  uVar6 = uVar5 + (uVar6 >> 0x1c | uVar6 * 0x10);
  uVar4 = uVar4 + DAT_00019718 + iVar19 + (uVar7 ^ uVar5 ^ uVar6);
  uVar4 = uVar6 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar7 = (uVar5 ^ uVar6 ^ uVar4) + DAT_0001971c + iVar3 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x10 | uVar7 * 0x10000);
  uVar5 = (uVar6 ^ uVar4 ^ uVar7) + uVar5 + DAT_00019720 + iVar11;
  uVar8 = uVar7 + (uVar5 >> 9 | uVar5 * 0x800000);
  uVar5 = (uVar4 ^ uVar7 ^ uVar8) + uVar6 + DAT_00019724 + iVar13;
  uVar5 = uVar8 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar4 = (uVar7 ^ uVar8 ^ uVar5) + DAT_00019728 + iVar21 + uVar4;
  uVar4 = uVar5 + (uVar4 >> 0x15 | uVar4 * 0x800);
  uVar6 = uVar7 + DAT_0001972c + iVar20 + (uVar8 ^ uVar5 ^ uVar4);
  uVar7 = uVar4 + (uVar6 >> 0x10 | uVar6 * 0x10000);
  uVar6 = (uVar5 ^ uVar4 ^ uVar7) + uVar8 + DAT_00019730 + iVar2;
  uVar6 = uVar7 + (uVar6 >> 9 | uVar6 * 0x800000);
  uVar5 = uVar5 + DAT_00019734 + iVar19 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00019738 + iVar18 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = uVar7 + DAT_0001973c + iVar17 + ((uVar4 | ~uVar6) ^ uVar5);
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = uVar6 + DAT_00019740 + iVar10 + ((uVar7 | ~uVar5) ^ uVar4);
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = uVar5 + DAT_00019744 + iVar21 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00019748 + iVar3 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = ((uVar4 | ~uVar6) ^ uVar5) + iVar14 + -0x100b83 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = uVar6 + DAT_0001974c + iVar1 + ((uVar7 | ~uVar5) ^ uVar4);
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = uVar5 + DAT_00019750 + iVar12 + ((uVar6 | ~uVar4) ^ uVar7);
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = uVar4 + DAT_00019754 + iVar20 + ((uVar5 | ~uVar7) ^ uVar6);
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = uVar7 + DAT_00019758 + iVar11 + ((uVar4 | ~uVar6) ^ uVar5);
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = ((uVar7 | ~uVar5) ^ uVar4) + DAT_0001975c + iVar16 + uVar6;
  uVar6 = uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  uVar5 = ((uVar6 | ~uVar4) ^ uVar7) + DAT_00019760 + iVar9 + uVar5;
  uVar5 = uVar6 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar4 = ((uVar5 | ~uVar7) ^ uVar6) + DAT_00019764 + iVar15 + uVar4;
  uVar4 = uVar5 + (uVar4 >> 0x16 | uVar4 * 0x400);
  uVar7 = ((uVar4 | ~uVar6) ^ uVar5) + DAT_00019768 + iVar2 + uVar7;
  uVar7 = uVar4 + (uVar7 >> 0x11 | uVar7 * 0x8000);
  uVar6 = ((uVar7 | ~uVar5) ^ uVar4) + DAT_0001976c + iVar13 + uVar6;
  *param_1 = uVar5 + *param_1;
  param_1[1] = param_1[1] + uVar7 + (uVar6 >> 0xb | uVar6 * 0x200000);
  param_1[2] = uVar7 + param_1[2];
  param_1[3] = uVar4 + param_1[3];
  return;
}



/* ===== FUN_00019770 @ 00019770 size=38 ===== */

void FUN_00019770(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00019798;
  *param_1 = DAT_00019798;
  param_1[1] = iVar1 + -0x77777778;
  param_1[2] = iVar1 + 0x3175b9fd;
  param_1[3] = iVar1 + -0x5712ce8b;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* ===== FUN_0001979c @ 0001979c size=146 ===== */

void FUN_0001979c(int param_1,void *param_2,uint param_3,undefined4 param_4)

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
    if (param_3 < uVar5) goto LAB_00011978;
    memcpy((undefined4 *)((int)puVar7 + uVar6),param_2,uVar5);
    param_2 = (void *)((int)param_2 + uVar5);
    FUN_000190d4(param_1,puVar7);
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
    FUN_000190d4(param_1,puVar7);
  }
  param_3 = (uVar5 >> 6) * -0x40 + uVar5;
  param_2 = (void *)((int)param_2 + (uVar5 >> 6) * 0x40);
  puVar2 = puVar7;
LAB_00011978:
  (*(code *)PTR_memcpy_0004e06c)(puVar2,param_2,param_3,param_4);
  return;
}



/* ===== FUN_0001982e @ 0001982e size=108 ===== */

void FUN_0001982e(undefined4 *param_1,undefined4 *param_2)

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
    FUN_000190d4(param_2,puVar3);
    __n = 0x38;
    puVar1 = puVar3;
  }
  else {
    __n = 0x37 - uVar2;
  }
  memset(puVar1,0,__n);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_000190d4(param_2,puVar3);
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



/* ===== FUN_0001989a @ 0001989a size=60 ===== */

undefined4 FUN_0001989a(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_70 [88];
  
  FUN_00019770(auStack_70);
  for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
    FUN_0001979c(auStack_70,*(undefined4 *)(param_2 + iVar1 * 4),
                 *(undefined4 *)(param_3 + iVar1 * 4));
  }
  FUN_0001982e(param_4,auStack_70);
  return 0;
}



/* ===== FUN_000198d8 @ 000198d8 size=148 ===== */

undefined4 FUN_000198d8(int param_1,uint param_2,int param_3,byte *param_4,int param_5)

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



/* ===== FUN_0001996c @ 0001996c size=188 ===== */

void FUN_0001996c(byte *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = DAT_00019a2c;
  puVar1 = DAT_00019a28;
  bVar8 = false;
  uVar6 = *DAT_00019a28;
  uVar5 = DAT_00019a28[1];
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



/* ===== FUN_00019a30 @ 00019a30 size=28 ===== */

void FUN_00019a30(void)

{
  int *piVar1;
  
  piVar1 = DAT_00019a4c;
  if (-1 < *DAT_00019a4c) {
    FUN_000146ac();
    close(*piVar1);
    *piVar1 = -1;
  }
  return;
}



/* ===== FUN_00019a50 @ 00019a50 size=52 ===== */

void FUN_00019a50(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  
  iVar1 = DAT_00019a84;
  iVar3 = *(int *)(DAT_00019a84 + 0x88);
  if (iVar3 == 0x14) {
LAB_00019a5c:
    FUN_00019a30();
    return;
  }
  sVar2 = read(param_1,(void *)(DAT_00019a84 + 0x8c + iVar3),0x14 - iVar3);
  if (-1 < sVar2) {
    iVar3 = sVar2 + *(int *)(iVar1 + 0x88);
    *(int *)(iVar1 + 0x88) = iVar3;
    if (iVar3 == 0x14) goto LAB_00019a5c;
  }
  return;
}



/* ===== FUN_00019a88 @ 00019a88 size=82 ===== */

void FUN_00019a88(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_00019adc;
  puVar1 = (uint *)(DAT_00019adc + 0xa4);
  uVar3 = *(int *)(DAT_00019adc + 0xa0) + 1;
  *(uint *)(DAT_00019adc + 0xa0) = uVar3;
  if ((*puVar1 < 0x3e9) || ((uVar3 & 0x3ff) == 0)) {
    uStack_18 = param_1;
    uStack_14 = param_2;
    FUN_00014238(&uStack_18);
    FUN_0001996c(&uStack_18,8);
    FUN_0001996c(param_1,param_2);
    *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 1;
  }
  return;
}



/* ===== FUN_00019ae0 @ 00019ae0 size=180 ===== */

undefined4 FUN_00019ae0(byte *param_1,uint param_2)

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
  
  uVar2 = FUN_00014330();
  iVar1 = DAT_00019b94;
  iVar9 = DAT_00019b94 + 8;
  iVar10 = DAT_00019b94 + 0x8c;
  for (uVar7 = param_2; uVar7 != 0; uVar7 = uVar7 - uVar6) {
    FUN_0001cbd4(DAT_00019b98,0x14,iVar9,0x80,&local_7c);
    FUN_0001996c(&local_7c,0x14);
    iVar11 = *(int *)(iVar1 + 4);
    iVar4 = 0;
    puVar3 = auStack_68;
    do {
      uVar6 = iVar11 - iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *(undefined4 *)(iVar1 + (uVar6 & 0x1f) * 4 + 8);
      puVar3 = puVar3 + 1;
    } while (iVar4 != 0x10);
    FUN_0001cbd4(iVar10,0x14,auStack_68,0x40,&local_7c);
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



/* ===== FUN_00019c28 @ 00019c28 size=42 ===== */

void FUN_00019c28(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00019c54;
  if (*DAT_00019c54 < 0) {
    iVar2 = open64(DAT_00019c58,0x800);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_00014640(iVar2,DAT_00019c5c,0);
      return;
    }
  }
  return;
}



/* ===== thunk_FUN_00019a30 @ 00019c60 size=2 ===== */

void thunk_FUN_00019a30(void)

{
  int *piVar1;
  
  piVar1 = DAT_00019a4c;
  if (-1 < *DAT_00019a4c) {
    FUN_000146ac();
    close(*piVar1);
    *piVar1 = -1;
  }
  return;
}



/* ===== FUN_00019c64 @ 00019c64 size=418 ===== */

char * FUN_00019c64(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,
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
  
  iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_00019e08,param_3);
  if (iVar2 < 0) {
    return param_1;
  }
  if (param_2 - (int)param_1 <= iVar2) {
    return param_1;
  }
  param_1 = param_1 + iVar2;
  iVar2 = FUN_00017a6c(param_4,param_5,auStack_38);
  __maxlen = param_2 - (int)param_1;
  if (iVar2 < 0) {
    snprintf(param_1,__maxlen,DAT_00019e0c);
    if ((int)__maxlen < 3) {
      return param_1;
    }
    return param_1 + 2;
  }
  if (local_2c << 0x1f < 0) {
    snprintf(param_1,__maxlen,DAT_00019e14,DAT_00019e10);
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
    uVar3 = DAT_00019e18;
    if (bVar1) {
      uVar3 = DAT_00019e10;
    }
    iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_00019e1c,uVar3);
    if (param_2 - (int)param_1 <= iVar2) {
      return param_1;
    }
    param_1 = param_1 + iVar2;
    bVar1 = false;
  }
  if (local_2c << 0x1b < 0) {
    uVar3 = DAT_00019e18;
    if (bVar1) {
      uVar3 = DAT_00019e10;
    }
    iVar2 = snprintf(param_1,param_2 - (int)param_1,DAT_00019e20,uVar3);
    if (param_2 - (int)param_1 <= iVar2) {
      return param_1;
    }
    param_1 = param_1 + iVar2;
  }
  snprintf(param_1,param_2 - (int)param_1,DAT_00019e24);
  __s = param_1;
  if (1 < param_2 - (int)param_1) {
    __s = param_1 + 1;
    if (local_34 << 0x1f < 0) {
      snprintf(__s,param_2 - (int)__s,DAT_00019e28,DAT_00019e10);
      if (param_2 - (int)__s < 5) goto LAB_00019dca;
      __s = param_1 + 5;
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (local_34 << 0x1e < 0) {
      uVar3 = DAT_00019e18;
      if (bVar1) {
        uVar3 = DAT_00019e10;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019e2c,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_00019dca;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1d < 0) {
      uVar3 = DAT_00019e18;
      if (bVar1) {
        uVar3 = DAT_00019e10;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019e30,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_00019dca;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1c < 0) {
      uVar3 = DAT_00019e18;
      if (bVar1) {
        uVar3 = DAT_00019e10;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019e34,uVar3);
      if (param_2 - (int)__s <= iVar2) goto LAB_00019dca;
      __s = __s + iVar2;
      bVar1 = false;
    }
    if (local_34 << 0x1b < 0) {
      uVar3 = DAT_00019e18;
      if (bVar1) {
        uVar3 = DAT_00019e10;
      }
      iVar2 = snprintf(__s,param_2 - (int)__s,DAT_00019e38,uVar3);
      if (iVar2 < param_2 - (int)__s) {
        __s = __s + iVar2;
      }
    }
  }
LAB_00019dca:
  if (local_28 << 0x1f < 0) {
    snprintf(__s,param_2 - (int)__s,DAT_00019e3c);
    if (param_2 - (int)__s < 9) {
      return __s;
    }
    __s = __s + 8;
  }
  snprintf(__s,param_2 - (int)__s,DAT_00019e40);
  if (1 < param_2 - (int)__s) {
    __s = __s + 1;
  }
  return __s;
}



/* ===== FUN_00019e44 @ 00019e44 size=58 ===== */

int FUN_00019e44(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *__format;
  int iVar1;
  char *__s;
  
  __format = DAT_00019e80;
  __s = param_2;
  do {
    if (param_1 == 0) {
LAB_00019e72:
      return (int)__s - (int)param_2;
    }
    iVar1 = snprintf(__s,(size_t)(param_2 + (param_3 - (int)__s)),__format,param_1 + 0x1a,param_4);
    if ((int)(param_2 + (param_3 - (int)__s)) <= iVar1) {
      *__s = '\0';
      goto LAB_00019e72;
    }
    __s = __s + iVar1;
    param_1 = *(int *)(param_1 + 8);
  } while( true );
}



/* ===== FUN_00019e84 @ 00019e84 size=164 ===== */

int FUN_00019e84(int *param_1,char *param_2,int param_3)

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
  
  piVar8 = DAT_00019f28;
  piVar6 = (int *)0x0;
  __ptr = (int *)0x0;
  iVar9 = param_3;
  for (piVar7 = DAT_00019f28; __format = DAT_00019f30, iVar1 = DAT_00019f2c, __s = param_2,
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
LAB_00019ed0:
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
      goto LAB_00019ed0;
    }
    __s = __s + iVar3;
    piVar4 = (int *)*piVar4;
  } while( true );
}



/* ===== FUN_00019f34 @ 00019f34 size=52 ===== */

undefined4 FUN_00019f34(int param_1,undefined4 param_2,undefined4 param_3)

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



/* ===== FUN_00019f68 @ 00019f68 size=5096 ===== */

char * FUN_00019f68(int *param_1,char *param_2,undefined4 *param_3)

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
  pcVar23 = DAT_0001a1d8;
  if (__s == (char *)0x0) {
    *param_3 = 1;
    return (char *)0x0;
  }
  cVar1 = *(char *)(DAT_0001a1d4 + 1);
  *(undefined2 *)__s = *DAT_0001a1d4;
  __s[2] = cVar1;
  iVar2 = strcmp(param_2,pcVar23);
  puVar3 = DAT_0001a1dc;
  if (iVar2 == 0) goto LAB_00019fa4;
  iVar2 = strncmp(param_2,DAT_0001a1e0,5);
  if ((iVar2 == 0) || (iVar2 = strncmp(param_2,DAT_0001a1e4,5), iVar2 == 0)) goto LAB_00019fbc;
  iVar2 = strcmp(param_2,DAT_0001a1e8);
  if (iVar2 == 0) {
    pcVar22 = (char *)FUN_0001589a(param_1[0x42],__s,0x1000);
LAB_0001a304:
    puVar3 = DAT_0001a55c;
    if (-1 < (int)pcVar22) goto LAB_0001a34c;
  }
  else {
    iVar2 = strncmp(param_2,DAT_0001a1ec,6);
    pcVar23 = __s;
    if (iVar2 == 0) {
      if ((uint)param_1[0x45] < 6) {
LAB_0001a246:
        uVar4 = FUN_0001e164(param_1[0x45]);
        iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a510,uVar4);
        if ((-1 < iVar2) && (iVar2 < (int)(__s + (0x1000 - (int)pcVar23)))) {
          pcVar23 = pcVar23 + iVar2;
          if ((param_1[3] != 0) && (iVar2 = FUN_0002758e(param_1[3],&local_48,0x1e), -1 < iVar2)) {
            iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a514,&local_48)
            ;
            if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2) goto LAB_0001a09e;
            pcVar23 = pcVar23 + iVar2;
          }
          uVar10 = (uint)*(byte *)((int)param_1 + 0x19);
          uVar11 = (uint)*(byte *)(param_1 + 6);
          uVar12 = (uint)*(byte *)((int)param_1 + 0x17);
          uVar13 = (uint)*(byte *)((int)param_1 + 0x16);
          uVar5 = (uint)*(byte *)((int)param_1 + 0x15);
          snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a518,
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
              snprintf((char *)&local_48,0x12,DAT_0001a51c,local_5c,uVar5,uVar13,uVar12,uVar11,
                       uVar10);
              strcat(__s,(char *)&local_48);
            }
            sVar7 = strlen((char *)&local_48);
            pcVar22 = pcVar23 + sVar7 + (0x1a - (int)__s);
            goto LAB_0001a304;
          }
        }
      }
      else {
        iVar2 = strcmp(param_2 + 6,DAT_0001a1f0);
        uVar10 = (uint)*(byte *)((int)param_1 + 0xa5);
        iVar26 = param_1[0x2d];
        pcVar23 = __s + 0x18;
        uVar11 = (uint)*(byte *)(param_1 + 0x29);
        uVar12 = (uint)*(byte *)((int)param_1 + 0xa3);
        uVar13 = (uint)*(byte *)((int)param_1 + 0xa2);
        snprintf(__s,0x1000,DAT_0001a1f4,(uint)*(byte *)(param_1 + 0x28),
                 (uint)*(byte *)((int)param_1 + 0xa1),uVar13,uVar12,uVar11,uVar10);
        if (iVar26 == 0) {
LAB_0001a22e:
          iVar2 = FUN_000169be(param_1[0x42],pcVar23,__s + (0x1000 - (int)pcVar23),iVar2 == 0);
          pcVar23 = pcVar23 + iVar2;
          goto LAB_0001a246;
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
        uVar4 = FUN_00013ebc(puVar3,iVar29);
        uVar14 = *(undefined4 *)(iVar26 + 8);
        uVar5 = snprintf(pcVar23,0xfe8,DAT_0001a1f8,uVar4,uVar14,uVar13,uVar12,uVar11,uVar10);
        if (0xfe7 < uVar5) {
          pcVar22 = (char *)0x18;
          goto LAB_0001a34c;
        }
        pcVar23 = pcVar23 + uVar5;
        if (*(int *)(iVar26 + 0xcc) != 0) {
          iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a1fc,
                            *(int *)(iVar26 + 0xcc),uVar14,uVar13,uVar12,uVar11,uVar10);
          if ((iVar29 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29)) goto LAB_0001a09e;
          pcVar23 = pcVar23 + iVar29;
        }
        if (*(int *)(iVar26 + 0x48) != 0) {
          iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a200,
                            *(int *)(iVar26 + 0x48),uVar14);
          if ((iVar29 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29)) goto LAB_0001a09e;
          pcVar23 = pcVar23 + iVar29;
        }
        if (*(int *)(iVar26 + 0x44) == 0) {
LAB_0001a134:
          iVar29 = 0;
          local_7c = (uint *)(iVar26 + 0xa4);
          do {
            if (*local_7c != 0) {
              snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a210,iVar29);
              if ((int)(__s + (0x1000 - (int)pcVar23)) < 10) goto LAB_0001a09e;
              pcVar23 = pcVar23 + 9;
              local_74 = (byte *)(iVar26 + 100 + iVar29 * 0x10);
              for (uVar10 = 0; pcVar22 = __s + (0x1000 - (int)pcVar23), uVar10 < *local_7c;
                  uVar10 = uVar10 + 1) {
                snprintf(pcVar23,(size_t)pcVar22,DAT_0001a214,(uint)*local_74);
                if ((int)pcVar22 < 3) goto LAB_0001a09e;
                pcVar23 = pcVar23 + 2;
                local_74 = local_74 + 1;
              }
              snprintf(pcVar23,(size_t)pcVar22,DAT_0001a20c);
              if ((int)pcVar22 < 2) goto LAB_0001a09e;
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
            snprintf(pcVar23,(size_t)pcVar22,DAT_0001a50c);
            break;
          case 1:
            iVar29 = 10;
            snprintf(pcVar23,(size_t)pcVar22,DAT_0001a520);
            break;
          case 2:
            iVar29 = 8;
            snprintf(pcVar23,(size_t)pcVar22,DAT_0001a524);
            break;
          case 3:
            iVar29 = 0xc;
            snprintf(pcVar23,(size_t)pcVar22,DAT_0001a528);
            break;
          case 4:
            iVar29 = 0x1e;
            snprintf(pcVar23,(size_t)pcVar22,DAT_0001a52c);
          }
          if (iVar29 < (int)pcVar22) {
            pcVar23 = pcVar23 + iVar29;
            goto LAB_0001a22e;
          }
        }
        else {
          snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a204,
                   *(int *)(iVar26 + 0x44),uVar14);
          if (4 < (int)(__s + (0x1000 - (int)pcVar23))) {
            pcVar23 = pcVar23 + 4;
            pbVar31 = (byte *)(iVar26 + 0x24);
            do {
              pbVar30 = pbVar31 + 1;
              iVar29 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a208,
                                (uint)*pbVar31);
              if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar29) goto LAB_0001a09e;
              pcVar23 = pcVar23 + iVar29;
              pbVar31 = pbVar30;
            } while (pbVar30 != (byte *)(iVar26 + 0x44));
            snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a20c);
            if (1 < (int)(__s + (0x1000 - (int)pcVar23))) {
              pcVar23 = pcVar23 + 1;
              goto LAB_0001a134;
            }
          }
        }
      }
LAB_0001a09e:
      pcVar22 = pcVar23 + -(int)__s;
      goto LAB_0001a304;
    }
    iVar2 = strcmp(param_2,DAT_0001a530);
    if (iVar2 == 0) {
      pcVar22 = (char *)FUN_00016b42(param_1[0x42],__s,0x1000);
      goto LAB_0001a304;
    }
    iVar2 = strncmp(param_2,DAT_0001a534,4);
    if (iVar2 == 0) {
      param_2 = param_2 + 4;
      pcVar23 = strchr(param_2,0x20);
      puVar3 = DAT_0001a55c;
      if (pcVar23 != (char *)0x0) {
        *pcVar23 = '\0';
        iVar2 = strcasecmp(param_2,DAT_0001a538);
        if ((((iVar2 == 0) || (iVar2 = strcasecmp(param_2,DAT_0001a53c), iVar2 == 0)) ||
            (iVar2 = strcasecmp(param_2,DAT_0001a540), iVar2 == 0)) ||
           (iVar2 = strcasecmp(param_2,DAT_0001a544), iVar2 == 0)) goto LAB_00019fbc;
        iVar2 = strcasecmp(param_2,DAT_0001a548);
        pcVar22 = pcVar23 + 1;
        if (iVar2 == 0) {
          iVar2 = atoi(pcVar22);
          uVar4 = 0;
        }
        else {
          iVar2 = strcasecmp(param_2,DAT_0001a54c);
          if (iVar2 == 0) {
            iVar2 = atoi(pcVar22);
            uVar4 = 1;
          }
          else {
            iVar2 = strcasecmp(param_2,DAT_0001a550);
            if (iVar2 != 0) {
              iVar2 = strcasecmp(param_2,DAT_0001a554);
              if (iVar2 == 0) {
                iVar2 = atoi(pcVar22);
                param_1[0xba] = iVar2;
                goto LAB_00019fbc;
              }
              iVar2 = strcasecmp(param_2,DAT_0001a558);
              if (iVar2 == 0) {
                iVar2 = atoi(pcVar22);
                puVar3 = DAT_0001a55c;
                if ((*(code **)(param_1[0x40] + 0x178) != (code *)0x0) &&
                   (iVar2 = (**(code **)(param_1[0x40] + 0x178))(param_1[0x35],iVar2),
                   puVar3 = DAT_0001a55c, -1 < iVar2)) goto LAB_00019fbc;
              }
              else {
                *pcVar23 = '=';
                iVar2 = FUN_0001329c(param_1[0x25],param_2,0xffffffff);
                puVar3 = DAT_0001a55c;
                if (iVar2 == 0) {
                  FUN_0001f198(param_1);
                  goto LAB_00019fbc;
                }
              }
              goto LAB_00019fa4;
            }
            iVar2 = atoi(pcVar22);
            uVar4 = 2;
          }
        }
        iVar2 = FUN_0001691a(param_1[0x42],uVar4,iVar2);
LAB_0001a3f0:
        puVar3 = DAT_0001a55c;
        if (iVar2 == 0) goto LAB_00019fbc;
      }
    }
    else {
      iVar2 = strncmp(param_2,DAT_0001a560,4);
      if (iVar2 == 0) {
        iVar2 = strcmp(param_2 + 4,DAT_0001a564);
        puVar3 = DAT_0001a55c;
        if (iVar2 == 0) {
          strcpy(__s,DAT_0001a568);
          pcVar22 = (char *)0x1f;
          goto LAB_0001a34c;
        }
      }
      else {
        iVar2 = strcmp(param_2,DAT_0001a56c);
        if ((iVar2 == 0) || (iVar2 = strcmp(param_2,DAT_0001a570), iVar2 == 0)) {
LAB_00019fbc:
          pcVar22 = (char *)0x3;
          goto LAB_0001a34c;
        }
        iVar2 = strcmp(param_2,DAT_0001a574);
        if (iVar2 == 0) {
          puVar3 = DAT_0001a55c;
          if (param_1[0x45] != 1) {
LAB_0001a4da:
            param_1[0x2b] = 1;
            param_1[0x2c] = 0;
LAB_0001a4e2:
            FUN_00020ac8(param_1,0);
            goto LAB_00019fbc;
          }
        }
        else {
          iVar2 = strcmp(param_2,DAT_0001a578);
          if (iVar2 == 0) {
            puVar3 = DAT_0001a55c;
            if (param_1[0x45] != 1) {
              if (param_1[0x2c] != 0) goto LAB_0001a4da;
              goto LAB_00019fbc;
            }
          }
          else {
            iVar2 = strncmp(param_2,DAT_0001a7ac,9);
            if (iVar2 == 0) {
              iVar2 = FUN_00013d6a(param_2 + 9,&local_48);
              puVar3 = DAT_0001a55c;
              if (iVar2 == 0) {
                iVar2 = FUN_00016e54(param_1[0x42],&local_48);
                goto LAB_0001a3f0;
              }
            }
            else {
              iVar2 = strncmp(param_2,DAT_0001a7b0,9);
              puVar3 = DAT_0001a55c;
              if (iVar2 != 0) {
                iVar2 = strcmp(param_2,DAT_0001a7b4);
                if (iVar2 == 0) {
                  iVar2 = FUN_0001f1e2(param_1);
                  goto LAB_0001a3f0;
                }
                iVar2 = strcmp(param_2,DAT_0001a7b8);
                if (iVar2 == 0) {
                  FUN_0001e2ac(*param_1);
                  goto LAB_00019fbc;
                }
                iVar2 = strncmp(param_2,DAT_0001a7bc,6);
                if (iVar2 == 0) {
                  pcVar23 = strchr(param_2 + 6,0x20);
                  puVar3 = DAT_0001a55c;
                  if (pcVar23 != (char *)0x0) {
                    *pcVar23 = '\0';
                    iVar2 = atoi(param_2 + 6);
                    iVar26 = FUN_00013d6a(pcVar23 + 1,&local_48);
                    puVar3 = DAT_0001a55c;
                    if ((iVar26 == 0) &&
                       (iVar2 = FUN_00012f12(param_1[0x25],iVar2), puVar3 = DAT_0001a55c, iVar2 != 0
                       )) {
                      *(undefined4 *)(iVar2 + 0x18) = local_48;
                      *(undefined2 *)(iVar2 + 0x1c) = (undefined2)uStack_44;
                      *(uint *)(iVar2 + 0x20) =
                           (uint)((((((char)local_48 != '\0' || local_48._1_1_ != '\0') ||
                                    local_48._2_1_ != '\0') || local_48._3_1_ != '\0') ||
                                  (char)uStack_44 != '\0') || uStack_44._1_1_ != '\0');
                      goto LAB_00019fbc;
                    }
                  }
                  goto LAB_00019fa4;
                }
                iVar2 = strcmp(param_2,DAT_0001a7c0);
                if (iVar2 == 0) {
                  strcpy(__s,DAT_0001a7c4);
                  uVar4 = DAT_0001a7f4;
                  pcVar22 = DAT_0001a7f0;
                  pcVar23 = __s + 0x22;
                  for (piVar27 = *(int **)param_1[0x25]; piVar27 != (int *)0x0;
                      piVar27 = (int *)*piVar27) {
                    uVar15 = piVar27[2];
                    uVar14 = FUN_00013ebc(piVar27[4],piVar27[5]);
                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),pcVar22,uVar15,
                                     uVar14);
                    if ((iVar2 < 0) || ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)) break;
                    pcVar23 = pcVar23 + iVar2;
                    pcVar32 = __s + (0x1000 - (int)pcVar23);
                    if (piVar27[8] == 0) {
                      snprintf(pcVar23,(size_t)pcVar32,DAT_0001a7e0,0,uVar14);
                      iVar2 = 4;
                    }
                    else {
                      snprintf(pcVar23,(size_t)pcVar32,DAT_0001a7c8,(uint)*(byte *)(piVar27 + 6),
                               (uint)*(byte *)((int)piVar27 + 0x19),
                               (uint)*(byte *)((int)piVar27 + 0x1a),
                               (uint)*(byte *)((int)piVar27 + 0x1b),(uint)*(byte *)(piVar27 + 7),
                               (uint)*(byte *)((int)piVar27 + 0x1d));
                      iVar2 = 0x12;
                    }
                    if ((int)pcVar32 <= iVar2) break;
                    pcVar23 = pcVar23 + iVar2;
                    uVar14 = DAT_0001a7cc;
                    if (piVar27 != (int *)param_1[0x2d]) {
                      uVar14 = uVar4;
                    }
                    uVar15 = uVar4;
                    uVar9 = uVar4;
                    if ((piVar27[0x31] != 0) &&
                       (uVar15 = DAT_0001a7d4, uVar9 = DAT_0001a7d0, piVar27[0x31] != 2)) {
                      uVar9 = uVar4;
                    }
                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a7d8,
                                     uVar14,uVar15,uVar9);
                    if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2) break;
                    pcVar23 = pcVar23 + iVar2;
                    snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),DAT_0001a7dc);
                    if ((int)(__s + (0x1000 - (int)pcVar23)) < 2) break;
                    pcVar23 = pcVar23 + 1;
                  }
                  goto LAB_0001a09e;
                }
                iVar2 = strcmp(param_2,DAT_0001a7e4);
                if (iVar2 == 0) {
                  param_1[0x2b] = 0;
                  param_1[0x2c] = 1;
                  FUN_0001e66c(param_1,3);
                  goto LAB_00019fbc;
                }
                iVar2 = strcmp(param_2,DAT_0001a7e8);
                if (iVar2 == 0) {
                  uVar10 = param_1[0x45];
                  puVar3 = DAT_0001a55c;
                  if (uVar10 == 1) goto LAB_00019fa4;
                  if ((param_1[0x46] != 0) || ((3 < uVar10 && (uVar10 != 9)))) {
                    strcpy(__s,DAT_0001a7ec);
                    pcVar22 = (char *)0xa;
                    goto LAB_0001a34c;
                  }
                  param_1[0x4f] = 2;
                  goto LAB_0001a4e2;
                }
                iVar2 = strcmp(param_2,DAT_0001ab20);
                if (iVar2 == 0) {
                  strcpy(__s,DAT_0001ab24);
                  pcVar22 = __s + 0x1000;
                  pcVar23 = __s + 0x30;
                  for (piVar27 = (int *)param_1[0x3b]; piVar28 = piVar27 + -2,
                      piVar27 != param_1 + 0x3b; piVar27 = (int *)*piVar27) {
                    iVar2 = FUN_00013784(piVar28,DAT_0001ab28);
                    sVar7 = (int)pcVar22 - (int)pcVar23;
                    if ((iVar2 == 0) || (piVar27[0x10] != 7)) {
LAB_0001a854:
                      iVar29 = piVar27[0x15];
                      iVar6 = piVar27[0x11];
                      uVar10 = (uint)*(byte *)((int)piVar27 + 0x1d);
                      uVar11 = (uint)*(byte *)(piVar27 + 7);
                      uVar12 = (uint)*(byte *)((int)piVar27 + 0x1b);
                      uVar13 = (uint)*(byte *)((int)piVar27 + 0x1a);
                      uVar5 = (uint)*(byte *)((int)piVar27 + 0x19);
                      iVar26 = snprintf(pcVar23,sVar7,DAT_0001ab30,(uint)*(byte *)(piVar27 + 6),
                                        uVar5,uVar13,uVar12,uVar11,uVar10,iVar6,iVar29);
                      if ((int)sVar7 <= iVar26) break;
                      pcVar32 = pcVar23 + iVar26;
                      iVar26 = FUN_00013784(piVar28,DAT_0001ab34);
                      if (iVar26 != 0) {
                        uVar5 = *(byte *)(iVar26 + 1) + 2;
                        pcVar32 = (char *)FUN_00019c64(pcVar32,pcVar22,DAT_0001ab38,iVar26,uVar5);
                      }
                      iVar8 = FUN_0001375a(piVar28,0x30);
                      if (iVar8 == 0) {
                        if ((iVar26 == 0) &&
                           (iVar26 = (uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1b, iVar26 < 0)) {
                          snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001b5c8,iVar26,uVar5,
                                   uVar13,uVar12,uVar11,uVar10,iVar6,iVar29);
                          if ((int)pcVar22 - (int)pcVar32 < 6) break;
                          pcVar32 = pcVar32 + 5;
                        }
                      }
                      else {
                        pcVar32 = (char *)FUN_00019c64(pcVar32,pcVar22,DAT_0001ab3c,iVar8,
                                                       *(byte *)(iVar8 + 1) + 2);
                      }
                      if ((int)((uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1e) < 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001ab40);
                        if ((int)pcVar22 - (int)pcVar32 < 7) break;
                        pcVar32 = pcVar32 + 6;
                      }
                      if ((int)((uint)*(ushort *)((int)piVar27 + 0x4a) << 0x1f) < 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001ab44);
                        if ((int)pcVar22 - (int)pcVar32 < 6) break;
                        pcVar32 = pcVar32 + 5;
                      }
                      if (iVar2 != 0) {
                        snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001ab48);
                        if ((int)pcVar22 - (int)pcVar32 < 6) break;
                        pcVar32 = pcVar32 + 5;
                      }
                      uVar4 = FUN_00013ebc((int)piVar27 + 0x1e,piVar27[0x10]);
                      iVar2 = snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001ab4c,uVar4);
                      if ((iVar2 < 0) || ((int)pcVar22 - (int)pcVar32 <= iVar2)) break;
                      pcVar32 = pcVar32 + iVar2;
                      snprintf(pcVar32,(int)pcVar22 - (int)pcVar32,DAT_0001ab50);
                      if (((int)pcVar22 - (int)pcVar32 < 2) ||
                         (pcVar32 = pcVar32 + (1 - (int)pcVar23), (int)pcVar32 < 0)) break;
                    }
                    else {
                      iVar26 = memcmp((void *)((int)piVar27 + 0x1e),DAT_0001ab2c,7);
                      pcVar32 = (char *)0x0;
                      if (iVar26 != 0) goto LAB_0001a854;
                    }
                    if ((int)sVar7 <= (int)pcVar32) break;
                    pcVar23 = pcVar23 + (int)pcVar32;
                  }
                  goto LAB_0001a09e;
                }
                iVar2 = strncmp(param_2,DAT_0001ab54,0xf);
                if (iVar2 == 0) {
                  iVar26 = strcmp(param_2 + 0xf,DAT_0001ab58);
                  iVar2 = 0;
                  if (iVar26 != 0) {
                    iVar2 = atoi(param_2 + 0xf);
                    iVar2 = FUN_00012f12(param_1[0x25],iVar2);
                    puVar3 = DAT_0001a55c;
                    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_00019fa4;
                  }
                  FUN_0001e896(param_1,iVar2);
                }
                else {
                  iVar2 = strncmp(param_2,DAT_0001ab5c,0xf);
                  if (iVar2 == 0) {
                    iVar26 = strcmp(param_2 + 0xf,DAT_0001ab60);
                    iVar2 = 0;
                    if (iVar26 != 0) {
                      iVar2 = atoi(param_2 + 0xf);
                      iVar2 = FUN_00012f12(param_1[0x25],iVar2);
                      puVar3 = DAT_0001a55c;
                      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_00019fa4;
                    }
                    FUN_0001e7a0(param_1,iVar2);
                  }
                  else {
                    iVar2 = strncmp(param_2,DAT_0001ab64,0x10);
                    if (iVar2 != 0) {
                      iVar2 = strcmp(param_2,DAT_0001ab68);
                      if (iVar2 == 0) {
                        iVar2 = FUN_00012f1e(param_1[0x25]);
                        puVar3 = DAT_0001a55c;
                        if (iVar2 != 0) {
                          FUN_00013346(param_1,iVar2);
                          *(undefined4 *)(iVar2 + 0xc4) = 1;
                          FUN_00012f8e(iVar2);
                          pcVar22 = (char *)snprintf(__s,0x1000,DAT_0001ab6c,
                                                     *(undefined4 *)(iVar2 + 8));
                          goto LAB_0001a34c;
                        }
                      }
                      else {
                        iVar2 = strncmp(param_2,DAT_0001ab70,0xf);
                        if (iVar2 == 0) {
                          iVar2 = strcmp(param_2 + 0xf,DAT_0001ab60);
                          piVar27 = (int *)param_1[0x25];
                          if (iVar2 == 0) {
                            piVar27 = (int *)*piVar27;
                            while (piVar27 != (int *)0x0) {
                              uVar4 = piVar27[2];
                              piVar27 = (int *)*piVar27;
                              FUN_00013348(param_1);
                              FUN_00012f5a(param_1[0x25],uVar4);
                            }
                            if (param_1[0x2d] != 0) {
LAB_0001aac8:
                              FUN_0001e5c4(param_1,3);
                            }
                          }
                          else {
                            iVar2 = atoi(param_2 + 0xf);
                            iVar26 = FUN_00012f12(piVar27,iVar2);
                            puVar3 = DAT_0001a55c;
                            if ((iVar26 == 0) ||
                               (iVar2 = FUN_00012f5a(param_1[0x25],iVar2), puVar3 = DAT_0001a55c,
                               iVar2 < 0)) goto LAB_00019fa4;
                            if (iVar26 == param_1[0x2d]) goto LAB_0001aac8;
                          }
                          goto LAB_00019fbc;
                        }
                        iVar2 = strncmp(param_2,DAT_0001ae6c,0xc);
                        if (iVar2 == 0) {
                          pcVar23 = strchr(param_2 + 0xc,0x20);
                          puVar3 = DAT_0001a55c;
                          if (pcVar23 != (char *)0x0) {
                            pcVar22 = pcVar23 + 1;
                            *pcVar23 = '\0';
                            pcVar23 = strchr(pcVar22,0x20);
                            puVar3 = DAT_0001a55c;
                            if (pcVar23 != (char *)0x0) {
                              *pcVar23 = '\0';
                              iVar2 = atoi(param_2 + 0xc);
                              iVar2 = FUN_00012f12(param_1[0x25],iVar2);
                              puVar3 = DAT_0001a55c;
                              if ((iVar2 != 0) &&
                                 (iVar26 = FUN_00012f9e(iVar2,pcVar22,pcVar23 + 1,0),
                                 puVar3 = DAT_0001a55c, -1 < iVar26)) {
                                iVar26 = strcmp(pcVar22,DAT_0001ae70);
                                if (((iVar26 == 0) &&
                                    ((pcVar23[1] == '\"' && (*(int *)(iVar2 + 0x14) != 0)))) ||
                                   ((iVar26 = strcmp(pcVar22,DAT_0001ae74), iVar26 == 0 &&
                                    (*(int *)(iVar2 + 0x48) != 0)))) {
                                  FUN_00013118(iVar2);
                                }
                                else {
                                  iVar2 = strcmp(pcVar22,DAT_0001ae78);
                                  if (iVar2 == 0) {
                                    FUN_00012e92(param_1[0x25]);
                                  }
                                }
                                goto LAB_00019fbc;
                              }
                            }
                          }
                        }
                        else {
                          iVar2 = strncmp(param_2,DAT_0001ae7c,0xc);
                          if (iVar2 == 0) {
                            pcVar23 = strchr(param_2 + 0xc,0x20);
                            puVar3 = DAT_0001a55c;
                            if (pcVar23 != (char *)0x0) {
                              *pcVar23 = '\0';
                              iVar2 = atoi(param_2 + 0xc);
                              iVar2 = FUN_00012f12(param_1[0x25],iVar2);
                              puVar3 = DAT_0001a55c;
                              if ((iVar2 != 0) &&
                                 (__ptr = (void *)FUN_000130b0(iVar2,pcVar23 + 1),
                                 puVar3 = DAT_0001a55c, __ptr != (void *)0x0)) {
                                pcVar22 = (char *)FUN_000144a4(__s,__ptr,0x1000);
                                if (pcVar22 < (char *)0x1000) {
                                  free(__ptr);
                                  goto LAB_0001a34c;
                                }
                                free(__ptr);
                                puVar3 = DAT_0001a55c;
                              }
                            }
                          }
                          else {
                            iVar2 = strcmp(param_2,DAT_0001ae80);
                            if (iVar2 == 0) {
                              puVar3 = DAT_0001a55c;
                              if (*(int *)(param_1[0x25] + 0x3c) != 0) {
                                iVar2 = FUN_00014dc4(param_1[0x24]);
                                goto LAB_0001a3f0;
                              }
                            }
                            else {
                              iVar2 = strncmp(param_2,DAT_0001ae84,0xf);
                              if (iVar2 != 0) {
                                iVar2 = strncmp(param_2,DAT_0001b1e4,8);
                                if (iVar2 == 0) {
                                  iVar2 = atoi(param_2 + 8);
                                  iVar2 = FUN_0001e902(param_1,iVar2);
                                  goto LAB_0001a3f0;
                                }
                                iVar2 = strncmp(param_2,DAT_0001b1e8,0xe);
                                if (iVar2 == 0) {
                                  iVar2 = atoi(param_2 + 0xe);
                                  puVar3 = DAT_0001a55c;
                                  if (-1 < iVar2) {
                                    param_1[0x52] = iVar2;
                                    goto LAB_00019fbc;
                                  }
                                  goto LAB_00019fa4;
                                }
                                iVar2 = strcmp(param_2,DAT_0001b1ec);
                                if (iVar2 == 0) {
                                  pcVar22 = (char *)FUN_00019e84(*param_1 + 0x3c,__s,0x1000);
                                }
                                else {
                                  iVar2 = strcmp(param_2,DAT_0001b1f0);
                                  if (iVar2 != 0) {
                                    iVar2 = strncmp(param_2,DAT_0001b1f4,4);
                                    if (iVar2 != 0) {
                                      iVar2 = strcmp(param_2,DAT_0001b540);
                                      if (iVar2 == 0) {
                                        FUN_000133c4(*param_1);
                                      }
                                      else {
                                        iVar2 = strcmp(param_2,DAT_0001b544);
                                        if (iVar2 == 0) {
                                          FUN_000133e8(*param_1);
                                        }
                                        else {
                                          iVar2 = strcmp(param_2,DAT_0001b548);
                                          if (iVar2 == 0) {
                                            FUN_00019f34(param_1,0,0);
                                            FUN_00019f34(param_1,0,1);
                                            FUN_00019f34(param_1,0,2);
                                            FUN_00019f34(param_1,0,3);
                                            FUN_00019f34(param_1,param_1 + 0x28,0);
                                            if (*(code **)(param_1[0x40] + 0x54) != (code *)0x0) {
                                              (**(code **)(param_1[0x40] + 0x54))
                                                        (param_1[0x35],param_1 + 0x28,0,1);
                                            }
                                            FUN_00016b48(param_1[0x42]);
                                          }
                                          else {
                                            iVar2 = strncmp(param_2,DAT_0001b54c,5);
                                            if (iVar2 == 0) {
                                              iVar26 = param_1[0x2d];
                                              iVar2 = FUN_00013d6a(param_2 + 5,&local_48);
                                              puVar3 = DAT_0001a55c;
                                              if (((iVar2 != 0) ||
                                                  (iVar2 = FUN_00013718(param_1,&local_48),
                                                  puVar3 = DAT_0001a55c, iVar2 == 0)) ||
                                                 (iVar26 == 0)) goto LAB_00019fa4;
                                              param_1[0x2b] = 1;
                                              FUN_0001f9c2(param_1,iVar2,iVar26);
                                            }
                                            else {
                                              iVar2 = strncmp(param_2,DAT_0001b550,0x10);
                                              if (iVar2 != 0) {
                                                iVar2 = strncmp(param_2,DAT_0001b554,0xf);
                                                if (iVar2 == 0) {
                                                  iVar2 = atoi(param_2 + 0xf);
                                                  iVar2 = FUN_0001e922(param_1,iVar2);
                                                }
                                                else {
                                                  iVar2 = strncmp(param_2,DAT_0001b558,0x11);
                                                  if (iVar2 != 0) {
                                                    iVar2 = strncmp(param_2,DAT_0001b55c,0xb);
                                                    if (iVar2 != 0) {
                                                      puVar25 = DAT_0001b568 + 4;
                                                      puVar3 = DAT_0001b568;
                                                      do {
                                                        puVar21 = puVar3 + 2;
                                                        uVar4 = puVar3[1];
                                                        *(undefined4 *)pcVar23 = *puVar3;
                                                        *(undefined4 *)(pcVar23 + 4) = uVar4;
                                                        pcVar23 = pcVar23 + 8;
                                                        puVar3 = puVar21;
                                                      } while (puVar21 != puVar25);
                                                      pcVar22 = (char *)0x10;
                                                      goto LAB_0001a34c;
                                                    }
                                                    puVar3 = DAT_0001a55c;
                                                    if ((*(code **)(param_1[0x40] + 0x1c4) !=
                                                         (code *)0x0) &&
                                                       (iVar2 = (**(code **)(param_1[0x40] + 0x1c4))
                                                                          (param_1[0x35],&local_48),
                                                       puVar3 = DAT_0001a55c, iVar2 == 0)) {
                                                      pcVar22 = (char *)snprintf(__s,0x1000,
                                                                                 DAT_0001b564,
                                                                                 local_40,(int)((
                                                  longlong)CONCAT22(sStack_36,uStack_38) *
                                                  (longlong)DAT_0001b560 >> 0x26) -
                                                  ((int)sStack_36 >> 0xf),
                                                  CONCAT22(uStack_3a,local_3c),local_48);
                                                  goto LAB_0001a34c;
                                                  }
                                                  goto LAB_00019fa4;
                                                  }
                                                  iVar2 = atoi(param_2 + 0x11);
                                                  iVar2 = FUN_0001e958(param_1,iVar2);
                                                }
                                                goto LAB_0001a3f0;
                                              }
                                              iVar2 = atoi(param_2 + 0x10);
                                              param_1[0xbb] = (uint)(iVar2 == 0);
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_00019fbc;
                                    }
                                    pcVar23 = param_2 + 4;
                                    iVar2 = strcmp(pcVar23,DAT_0001b1f8);
                                    pcVar22 = (char *)0x0;
                                    if (iVar2 == 0) {
                                      piVar27 = (int *)param_1[0x39];
                                      if (piVar27 == param_1 + 0x39) goto LAB_0001a34c;
                                    }
                                    else {
                                      iVar2 = strncmp(pcVar23,DAT_0001b51c,3);
                                      if (iVar2 == 0) {
                                        iVar2 = atoi(param_2 + 7);
                                        piVar27 = (int *)FUN_00013742(param_1,iVar2);
                                      }
                                      else {
                                        iVar2 = strncmp(pcVar23,DAT_0001b520,5);
                                        if (iVar2 == 0) {
                                          iVar2 = atoi(param_2 + 9);
                                          iVar2 = FUN_00013742(param_1,iVar2);
                                          if ((iVar2 == 0) ||
                                             (*(int **)(iVar2 + 8) == param_1 + 0x3b))
                                          goto LAB_0001a34c;
                                          piVar27 = *(int **)(iVar2 + 8) + -2;
                                        }
                                        else {
                                          iVar2 = FUN_00013d6a(pcVar23,&local_48);
                                          if (iVar2 != 0) {
                                            iVar2 = atoi(pcVar23);
                                            for (piVar28 = (int *)param_1[0x3b];
                                                piVar27 = piVar28 + -2, piVar28 != param_1 + 0x3b;
                                                piVar28 = (int *)*piVar28) {
                                              if (iVar2 == 0) goto LAB_0001b0c8;
                                              iVar2 = iVar2 + -1;
                                            }
                                            goto LAB_0001a34c;
                                          }
                                          piVar27 = (int *)FUN_00013718(param_1,&local_48);
                                        }
                                      }
                                    }
LAB_0001b0c8:
                                    pcVar32 = DAT_0001b210;
                                    if (piVar27 == (int *)0x0) goto LAB_0001a34c;
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
                                    iVar2 = snprintf(__s,0x1000,DAT_0001b1fc,piVar27[4],uVar20,
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
                                      if ((int)sVar7 < 3) goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + 2;
                                      pbVar31 = pbVar31 + 1;
                                    }
                                    iVar2 = FUN_00013784(piVar27,DAT_0001b200);
                                    if (iVar2 != 0) {
                                      snprintf(pcVar23,sVar7,DAT_0001b204);
                                      if ((int)sVar7 < 6) goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + 5;
                                    }
                                    snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001b208);
                                    if ((int)pcVar24 - (int)pcVar23 < 2) goto LAB_0001a09e;
                                    pcVar22 = pcVar23 + 1;
                                    snprintf(pcVar22,(int)pcVar24 - (int)pcVar22,DAT_0001b20c);
                                    if ((int)pcVar24 - (int)pcVar22 < 7) {
                                      pcVar22 = pcVar22 + -(int)__s;
                                      goto LAB_0001a304;
                                    }
                                    iVar2 = FUN_00013784(piVar27,DAT_0001b524);
                                    pcVar23 = pcVar23 + 7;
                                    if (iVar2 != 0) {
                                      pcVar23 = (char *)FUN_00019c64(pcVar23,pcVar24,DAT_0001b528,
                                                                     iVar2,*(byte *)(iVar2 + 1) + 2)
                                      ;
                                    }
                                    iVar26 = FUN_0001375a(piVar27,0x30);
                                    if (iVar26 == 0) {
                                      if ((iVar2 == 0) &&
                                         ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1b) < 0)
                                         ) {
                                        snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001b5c8);
                                        if ((int)pcVar24 - (int)pcVar23 < 6) goto LAB_0001a09e;
                                        pcVar23 = pcVar23 + 5;
                                      }
                                    }
                                    else {
                                      pcVar23 = (char *)FUN_00019c64(pcVar23,pcVar24,DAT_0001b52c,
                                                                     iVar26,*(byte *)(iVar26 + 1) +
                                                                            2);
                                    }
                                    if ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1e) < 0) {
                                      snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001b530);
                                      if ((int)pcVar24 - (int)pcVar23 < 7) goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + 6;
                                    }
                                    if ((int)((uint)*(ushort *)((int)piVar27 + 0x52) << 0x1f) < 0) {
                                      snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001b534);
                                      if ((int)pcVar24 - (int)pcVar23 < 6) goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + 5;
                                    }
                                    snprintf(pcVar23,(int)pcVar24 - (int)pcVar23,DAT_0001b538);
                                    if (1 < (int)pcVar24 - (int)pcVar23) {
                                      uVar4 = FUN_00013ebc((int)piVar27 + 0x26,piVar27[0x12]);
                                      pcVar23 = pcVar23 + 1;
                                      pcVar24 = pcVar24 + -(int)pcVar23;
                                      iVar2 = snprintf(pcVar23,(size_t)pcVar24,DAT_0001b53c,uVar4);
                                      if (-1 < iVar2) goto LAB_0001adb2;
                                    }
                                    goto LAB_0001a09e;
                                  }
                                  pcVar22 = (char *)FUN_00019e44(*(undefined4 *)*param_1,__s,0x1000)
                                  ;
                                }
                                goto LAB_0001a304;
                              }
                              uVar10 = FUN_000144a4(&local_48,param_2 + 0xf,0x1e);
                              puVar3 = DAT_0001a55c;
                              if (uVar10 < 0x1e) {
                                pcVar22 = strchr((char *)&local_48,0x20);
                                pcVar32 = pcVar22;
                                if (pcVar22 != (char *)0x0) {
                                  pcVar32 = pcVar22 + 1;
                                  *pcVar22 = '\0';
                                  iVar2 = strcmp(pcVar32,DAT_0001ae88);
                                  puVar3 = DAT_0001a55c;
                                  if (iVar2 != 0) goto LAB_00019fa4;
                                }
                                iVar2 = strcmp((char *)&local_48,DAT_0001ae8c);
                                pcVar22 = (char *)0x0;
                                if (iVar2 == 0) goto LAB_0001a34c;
                                if (*(code **)(param_1[0x40] + 0x3c) == (code *)0x0) {
                                  iVar2 = -1;
                                }
                                else {
                                  iVar2 = (**(code **)(param_1[0x40] + 0x3c))
                                                    (param_1[0x35],&local_64);
                                }
                                iVar26 = strcmp((char *)&local_48,DAT_0001ae90);
                                if (iVar26 == 0) {
                                  uVar4 = DAT_0001ae94;
                                  if (iVar2 < 0) {
joined_r0x0001afb4:
                                    if (pcVar32 != (char *)0x0) goto LAB_0001a34c;
                                    pcVar22 = (char *)FUN_000144a4(__s,uVar4,0x1000);
                                    puVar3 = DAT_0001a55c;
                                    if (pcVar22 < (char *)0x1000) goto LAB_0001a304;
                                    goto LAB_00019fa4;
                                  }
                                  bVar33 = -1 < local_60 << 0x1c;
                                  if (!bVar33) {
                                    snprintf(__s,0x1000,DAT_0001ae9c,DAT_0001ae98);
                                    pcVar23 = __s + 4;
                                  }
                                  if (local_60 << 0x1d < 0) {
                                    uVar4 = DAT_0001aea0;
                                    if (bVar33) {
                                      uVar4 = DAT_0001ae98;
                                    }
                                    iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23))
                                                     ,DAT_0001aea4,uVar4);
                                    if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                    goto LAB_0001a09e;
                                    pcVar23 = pcVar23 + iVar2;
                                    bVar33 = false;
                                  }
                                  if ((int)(local_64 << 0x1b) < 0) {
                                    pcVar24 = __s + (0x1000 - (int)pcVar23);
                                    pcVar22 = DAT_0001aea8;
                                    uVar4 = DAT_0001aea0;
                                    if (bVar33) {
                                      uVar4 = DAT_0001ae98;
                                    }
LAB_0001adaa:
                                    iVar2 = snprintf(pcVar23,(size_t)pcVar24,pcVar22,uVar4);
LAB_0001adb2:
                                    if (iVar2 < (int)pcVar24) {
                                      pcVar23 = pcVar23 + iVar2;
                                    }
                                  }
                                }
                                else {
                                  iVar26 = strcmp((char *)&local_48,DAT_0001aeac);
                                  if (iVar26 == 0) {
                                    uVar4 = DAT_0001aeb0;
                                    if (iVar2 < 0) goto joined_r0x0001afb4;
                                    bVar33 = -1 < local_60 << 0x1c;
                                    if (!bVar33) {
                                      snprintf(__s,0x1000,DAT_0001ae9c,DAT_0001ae98);
                                      pcVar23 = __s + 4;
                                    }
                                    if (local_60 << 0x1d < 0) {
                                      uVar4 = DAT_0001aea0;
                                      if (bVar33) {
                                        uVar4 = DAT_0001ae98;
                                      }
                                      iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23
                                                                              )),DAT_0001aea4,uVar4)
                                      ;
                                      if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                      goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + iVar2;
                                      bVar33 = false;
                                    }
                                    if (local_60 << 0x1e < 0) {
                                      uVar4 = DAT_0001aea0;
                                      if (bVar33) {
                                        uVar4 = DAT_0001ae98;
                                      }
                                      iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23
                                                                              )),DAT_0001aeb4,uVar4)
                                      ;
                                      if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                      goto LAB_0001a09e;
                                      pcVar23 = pcVar23 + iVar2;
                                      bVar33 = false;
                                    }
                                    if (local_60 << 0x1f < 0) {
                                      pcVar24 = __s + (0x1000 - (int)pcVar23);
                                      pcVar22 = DAT_0001aeb8;
                                      uVar4 = DAT_0001aea0;
                                      if (bVar33) {
                                        uVar4 = DAT_0001ae98;
                                      }
                                      goto LAB_0001adaa;
                                    }
                                  }
                                  else {
                                    iVar26 = strcmp((char *)&local_48,DAT_0001b1a0);
                                    if (iVar26 == 0) {
                                      uVar4 = DAT_0001b1a4;
                                      if (iVar2 < 0) goto joined_r0x0001afb4;
                                      strcpy(__s,DAT_0001b1a8);
                                      pcVar23 = __s + 0xe;
                                      if ((local_64 & 3) != 0) {
                                        pcVar23 = __s + 0x16;
                                        snprintf(__s + 0xe,0xff2,DAT_0001b1ac);
                                      }
                                      if ((local_64 & 0xc) != 0) {
                                        snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),
                                                 DAT_0001b1b0);
                                        if ((int)(__s + (0x1000 - (int)pcVar23)) < 9)
                                        goto LAB_0001a09e;
                                        pcVar23 = pcVar23 + 8;
                                      }
                                      if (((int)(local_64 << 0x1b) < 0) &&
                                         (snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)pcVar23)),
                                                   DAT_0001b1b4),
                                         9 < (int)(__s + (0x1000 - (int)pcVar23)))) {
                                        pcVar23 = pcVar23 + 9;
                                      }
                                    }
                                    else {
                                      iVar26 = strcmp((char *)&local_48,DAT_0001b1b8);
                                      if (iVar26 == 0) {
                                        uVar4 = DAT_0001b1bc;
                                        if (iVar2 < 0) goto joined_r0x0001afb4;
                                        bVar33 = (local_64 & 10) == 0;
                                        if (!bVar33) {
                                          snprintf(__s,0x1000,DAT_0001b1c4,DAT_0001b1c0);
                                          pcVar23 = __s + 3;
                                        }
                                        if ((local_64 & 5) != 0) {
                                          pcVar24 = __s + (0x1000 - (int)pcVar23);
                                          pcVar22 = DAT_0001b1cc;
                                          uVar4 = DAT_0001b1c8;
                                          if (bVar33) {
                                            uVar4 = DAT_0001b1c0;
                                          }
                                          goto LAB_0001adaa;
                                        }
                                      }
                                      else {
                                        iVar26 = strcmp((char *)&local_48,DAT_0001b1d0);
                                        puVar3 = DAT_0001a55c;
                                        if (iVar26 != 0) goto LAB_00019fa4;
                                        uVar4 = DAT_0001b1d4;
                                        if (iVar2 < 0) goto joined_r0x0001afb4;
                                        bVar33 = -1 < local_5c << 0x1f;
                                        if (!bVar33) {
                                          snprintf(__s,0x1000,DAT_0001b1d8,DAT_0001b1c0);
                                          pcVar23 = __s + 4;
                                        }
                                        if (local_5c << 0x1e < 0) {
                                          uVar4 = DAT_0001b1c8;
                                          if (bVar33) {
                                            uVar4 = DAT_0001b1c0;
                                          }
                                          iVar2 = snprintf(pcVar23,(size_t)(__s + (0x1000 - (int)
                                                  pcVar23)),DAT_0001b1dc,uVar4);
                                          if ((int)(__s + (0x1000 - (int)pcVar23)) <= iVar2)
                                          goto LAB_0001a09e;
                                          pcVar23 = pcVar23 + iVar2;
                                          bVar33 = false;
                                        }
                                        if (local_5c << 0x1d < 0) {
                                          pcVar24 = __s + (0x1000 - (int)pcVar23);
                                          pcVar22 = DAT_0001b1e0;
                                          uVar4 = DAT_0001b1c8;
                                          if (bVar33) {
                                            uVar4 = DAT_0001b1c0;
                                          }
                                          goto LAB_0001adaa;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_0001a09e;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_00019fa4;
                    }
                    iVar26 = strcmp(param_2 + 0x10,DAT_0001ab60);
                    iVar2 = 0;
                    if (iVar26 != 0) {
                      iVar2 = atoi(param_2 + 0x10);
                      iVar2 = FUN_00012f12(param_1[0x25],iVar2);
                      puVar3 = DAT_0001a55c;
                      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc4) == 2)) goto LAB_00019fa4;
                    }
                    FUN_0001e824(param_1,iVar2);
                  }
                }
                goto LAB_00019fbc;
              }
            }
          }
        }
      }
    }
  }
LAB_00019fa4:
  pcVar22 = (char *)0x5;
  cVar1 = *(char *)(puVar3 + 1);
  *(undefined4 *)__s = *puVar3;
  __s[4] = cVar1;
LAB_0001a34c:
  *param_3 = pcVar22;
  return __s;
}



/* ===== FUN_0001b5cc @ 0001b5cc size=482 ===== */

undefined4 * FUN_0001b5cc(undefined4 *param_1,char *param_2,int *param_3)

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
  pcVar11 = DAT_0001b7b4;
  if (puVar2 == (undefined4 *)0x0) {
    *param_3 = 1;
    return (undefined4 *)0x0;
  }
  uVar1 = *(undefined1 *)(DAT_0001b7b0 + 1);
  *(undefined2 *)puVar2 = *DAT_0001b7b0;
  *(undefined1 *)((int)puVar2 + 2) = uVar1;
  iVar3 = strcmp(param_2,pcVar11);
  puVar7 = DAT_0001b7b8;
  if (iVar3 != 0) {
    iVar3 = strncmp(param_2,DAT_0001b7bc,0xe);
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
      puVar7 = DAT_0001b7c4;
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
        iVar3 = FUN_0001efac(param_1,__s);
        puVar7 = DAT_0001b7c4;
        if ((iVar3 == 0) &&
           (iVar3 = FUN_0001ebbc(param_1,&local_38), puVar7 = DAT_0001b7c4, iVar3 != 0))
        goto LAB_0001b6f4;
      }
    }
    else {
      iVar3 = strncmp(param_2,DAT_0001b7c0,0x11);
      if (iVar3 == 0) {
        iVar3 = FUN_0001efac(param_1,param_2 + 0x11);
        puVar7 = DAT_0001b7c4;
        if ((iVar3 != 0) && (iVar3 = FUN_0001ef4c(param_1,iVar3), puVar7 = DAT_0001b7c4, iVar3 == 0)
           ) {
LAB_0001b6f4:
          iVar3 = 3;
          goto LAB_0001b6f6;
        }
      }
      else {
        iVar3 = strcmp(param_2,DAT_0001b7c8);
        if (iVar3 == 0) {
          iVar3 = FUN_00019e84(param_1 + 0xf,puVar2,0x800);
        }
        else {
          iVar3 = strcmp(param_2,DAT_0001b7cc);
          if (iVar3 != 0) {
            iVar3 = strcmp(param_2,DAT_0001b7d0);
            if (iVar3 == 0) {
              FUN_0001e2ac(param_1);
            }
            else {
              iVar3 = strcmp(param_2,DAT_0001b7d4);
              if (iVar3 == 0) {
                FUN_000133c4(param_1);
              }
              else {
                iVar3 = strcmp(param_2,DAT_0001b7d8);
                if (iVar3 != 0) {
                  puVar10 = DAT_0001b7dc + 4;
                  puVar7 = DAT_0001b7dc;
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
                  goto LAB_0001b6f6;
                }
                FUN_000133e8(param_1);
              }
            }
            goto LAB_0001b6f4;
          }
          iVar3 = FUN_00019e44(*param_1,puVar2,0x800);
        }
        puVar7 = DAT_0001b7c4;
        if (-1 < iVar3) goto LAB_0001b6f6;
      }
    }
  }
  uVar1 = *(undefined1 *)(puVar7 + 1);
  *puVar2 = *puVar7;
  iVar3 = 5;
  *(undefined1 *)(puVar2 + 1) = uVar1;
LAB_0001b6f6:
  *param_3 = iVar3;
  return puVar2;
}



/* ===== FUN_0001b7e0 @ 0001b7e0 size=76 ===== */

undefined4 FUN_0001b7e0(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001b82c @ 0001b82c size=198 ===== */

void FUN_0001b82c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
      (iVar1 = snprintf(acStack_58,10,DAT_0001b8f4,param_2), iVar1 < 10)))) {
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
            FUN_0001b7e0(iVar6,piVar5 + 2,piVar5[0x1e]);
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



/* ===== FUN_0001b8f8 @ 0001b8f8 size=58 ===== */

undefined4 FUN_0001b8f8(int param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0001449c(0x84);
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



/* ===== FUN_0001b932 @ 0001b932 size=272 ===== */

void FUN_0001b932(int param_1,undefined4 param_2,int param_3)

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
    perror(DAT_0001ba44);
    return;
  }
  acStack_1020[sVar2] = '\0';
  iVar3 = strcmp(acStack_1020,DAT_0001ba48);
  if (iVar3 == 0) {
    iVar3 = FUN_0001b8f8(param_3,asStack_1090,local_1098);
LAB_0001b98a:
    if (iVar3 == 0) {
LAB_0001b9fe:
      local_1094 = 2;
      goto LAB_0001b992;
    }
  }
  else {
    iVar3 = strcmp(acStack_1020,DAT_0001ba50);
    if (iVar3 == 0) {
      iVar3 = FUN_0001b7e0(param_3,asStack_1090,local_1098);
      goto LAB_0001b98a;
    }
    iVar3 = strncmp(acStack_1020,DAT_0001ba54,6);
    sVar1 = local_1098;
    if (iVar3 != 0) {
      pvVar4 = (void *)FUN_00019f68(param_2,acStack_1020,&local_1094);
      if (pvVar4 != (void *)0x0) {
        sendto(param_1,pvVar4,local_1094,0,asStack_1090,local_1098);
        free(pvVar4);
        return;
      }
      goto LAB_0001b992;
    }
    sVar5 = local_1098 - 2;
    for (puVar6 = *(undefined4 **)(param_3 + 8); puVar6 != (undefined4 *)(param_3 + 8);
        puVar6 = (undefined4 *)*puVar6) {
      if ((sVar1 == puVar6[0x1e]) &&
         (iVar3 = memcmp(asStack_1090[0].sa_data,(void *)((int)puVar6 + 10),sVar5), iVar3 == 0)) {
        iVar3 = atoi(acStack_101a);
        puVar6[0x1f] = iVar3;
        goto LAB_0001b9fe;
      }
    }
  }
  local_1094 = 1;
LAB_0001b992:
  if (local_1094 == 1) {
    sVar5 = 5;
    pvVar4 = DAT_0001ba4c;
  }
  else {
    if (local_1094 != 2) {
      return;
    }
    sVar5 = 3;
    pvVar4 = DAT_0001ba58;
  }
  sendto(param_1,pvVar4,sVar5,0,asStack_1090,local_1098);
  return;
}



/* ===== FUN_0001ba5c @ 0001ba5c size=138 ===== */

char * FUN_0001ba5c(int param_1)

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
    iVar2 = strncmp(pcVar1,DAT_0001bae8,4);
    __haystack = pcVar1;
    if (iVar2 == 0) {
      __haystack = pcVar1 + 4;
      pcVar3 = strstr(__haystack,DAT_0001baec);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
    }
    sVar4 = strlen(__haystack);
    sVar5 = strlen((char *)(param_1 + 0x1a));
    __size = sVar4 + sVar5 + 2;
    pcVar3 = malloc(__size);
    if ((pcVar3 == (char *)0x0) ||
       ((uVar6 = snprintf(pcVar3,__size,DAT_0001baf0,__haystack,(char *)(param_1 + 0x1a)),
        -1 < (int)uVar6 && (uVar6 < __size)))) {
      free(pcVar1);
      return pcVar3;
    }
    free(pcVar1);
    free(pcVar3);
  }
  return (char *)0x0;
}



/* ===== FUN_0001baf4 @ 0001baf4 size=124 ===== */

void FUN_0001baf4(int param_1,undefined4 param_2)

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
    perror(DAT_0001bb70);
  }
  else {
    auStack_120[sVar1] = 0;
    __buf = (void *)FUN_0001b5cc(param_2,auStack_120,&local_194);
    if (__buf == (void *)0x0) {
      if (local_194 != 0) {
        sendto(param_1,DAT_0001bb74,5,0,asStack_190,local_198);
      }
    }
    else {
      sendto(param_1,__buf,local_194,0,asStack_190,local_198);
      free(__buf);
    }
  }
  return;
}



/* ===== FUN_0001bb78 @ 0001bb78 size=494 ===== */

int * FUN_0001bb78(int param_1)

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
  
  __ptr = (int *)FUN_0001449c(0x10);
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
    iVar3 = strncmp(pcVar2,DAT_0001bd68,4);
    if (iVar3 == 0) {
      pcVar11 = pcVar2 + 4;
      pcVar4 = strstr(pcVar11,DAT_0001bd6c);
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
    if ((iVar9 < 0) && (piVar5 = __errno_location(), pcVar4 = DAT_0001bd70, *piVar5 != 0x11)) {
LAB_0001bbee:
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
          if ((*pcVar10 == '\0') || (*local_94 != '\0')) goto LAB_0001bbf2;
        }
        else {
          __group = pgVar6->gr_gid;
        }
        iVar9 = chown(pcVar11,0xffffffff,__group);
        pcVar4 = DAT_0001bd74;
        if (iVar9 < 0) goto LAB_0001bbee;
        iVar9 = chmod(pcVar11,0x1e8);
        if (iVar9 < 0) goto LAB_0001bbf2;
        bVar1 = true;
      }
      sVar7 = strlen(pcVar11);
      sVar8 = strlen((char *)(param_1 + 0x1a));
      if (sVar8 + sVar7 + 1 < 0x6c) {
        iVar9 = socket(1,2,0);
        __ptr[1] = iVar9;
        pcVar4 = DAT_0001bd78;
        if (iVar9 < 0) goto LAB_0001bbee;
        memset(local_90[0].sa_data,0,0x6c);
        local_90[0].sa_family = 1;
        pcVar10 = (char *)FUN_0001ba5c(param_1);
        if (pcVar10 != (char *)0x0) {
          FUN_000144a4(local_90[0].sa_data,pcVar10,0x6c);
          iVar9 = bind(__ptr[1],local_90,0x6e);
          if (iVar9 < 0) {
            iVar9 = connect(__ptr[1],local_90,0x6e);
            if (-1 < iVar9) {
              free(pcVar10);
              goto LAB_0001bbf2;
            }
            iVar9 = unlink(pcVar10);
            pcVar11 = DAT_0001bd7c;
            if ((-1 < iVar9) &&
               (iVar9 = bind(__ptr[1],local_90,0x6e), pcVar11 = DAT_0001bd80, -1 < iVar9))
            goto LAB_0001bd14;
          }
          else {
LAB_0001bd14:
            if (((!bVar1) ||
                (iVar9 = chown(pcVar10,0xffffffff,__group), pcVar11 = DAT_0001bd84, -1 < iVar9)) &&
               (iVar9 = chmod(pcVar10,0x1f8), pcVar11 = DAT_0001bd88, -1 < iVar9)) {
              free(pcVar10);
              FUN_00014640(__ptr[1],DAT_0001bd8c,param_1,__ptr);
              FUN_00013ef8(DAT_0001bd90);
              free(pcVar2);
              return __ptr;
            }
          }
          perror(pcVar11);
          goto LAB_0001bcd4;
        }
      }
    }
  }
LAB_0001bbf2:
  pcVar10 = (char *)0x0;
LAB_0001bcd4:
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



/* ===== FUN_0001bd94 @ 0001bd94 size=174 ===== */

void FUN_0001bd94(int *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char *__haystack;
  
  if (-1 < param_1[1]) {
    FUN_000146ac();
    if ((int *)param_1[2] != param_1 + 2) {
      FUN_00014220(1,0);
    }
    close(param_1[1]);
    param_1[1] = -1;
    pcVar1 = (char *)FUN_0001ba5c(*param_1);
    if (pcVar1 != (char *)0x0) {
      unlink(pcVar1);
      free(pcVar1);
    }
    pcVar1 = strdup(*(char **)(*(int *)(*param_1 + 0x94) + 0x14));
    if (pcVar1 != (char *)0x0) {
      iVar2 = strncmp(pcVar1,DAT_0001be44,4);
      __haystack = pcVar1;
      if (iVar2 == 0) {
        __haystack = pcVar1 + 4;
        pcVar3 = strstr(__haystack,DAT_0001be48);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      iVar2 = rmdir(__haystack);
      if ((iVar2 < 0) && (piVar4 = __errno_location(), *piVar4 != 0x27)) {
        perror(DAT_0001be4c);
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
  free(param_1);
  return;
}



/* ===== FUN_0001be50 @ 0001be50 size=142 ===== */

void FUN_0001be50(int param_1)

{
  char *__s2;
  void *__buf;
  char *__s;
  ssize_t sVar1;
  int iVar2;
  socklen_t local_19c;
  sockaddr asStack_198 [7];
  char acStack_128 [260];
  
  __s = DAT_0001beec;
  __buf = DAT_0001bee8;
  __s2 = DAT_0001bee4;
  local_19c = 0x6e;
  while( true ) {
    while( true ) {
      FUN_00014a44(*(undefined4 *)(param_1 + 4));
      sVar1 = recvfrom(*(int *)(param_1 + 4),acStack_128,0xff,0,asStack_198,&local_19c);
      if (-1 < sVar1) break;
      perror(__s);
    }
    acStack_128[sVar1] = '\0';
    iVar2 = strcmp(acStack_128,__s2);
    if ((iVar2 == 0) && (iVar2 = FUN_0001b8f8(param_1,asStack_198), iVar2 == 0)) break;
    sendto(*(int *)(param_1 + 4),__buf,5,0,asStack_198,local_19c);
  }
  sendto(*(int *)(param_1 + 4),DAT_0001bee0,3,0,asStack_198,local_19c);
  return;
}



/* ===== FUN_0001bef0 @ 0001bef0 size=188 ===== */

int * FUN_0001bef0(int param_1)

{
  int *__ptr;
  char *__s;
  int iVar1;
  sockaddr local_80 [7];
  
  __ptr = (int *)FUN_0001449c(8);
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
  __s = DAT_0001bfac;
  if (iVar1 < 0) {
LAB_0001bf22:
    perror(__s);
LAB_0001bf26:
    if (-1 < __ptr[1]) {
      close(__ptr[1]);
    }
    free(__ptr);
    __ptr = (int *)0x0;
  }
  else {
    memset(local_80[0].sa_data,0,0x6c);
    local_80[0].sa_family = 1;
    FUN_000144a4(local_80[0].sa_data,*(undefined4 *)(param_1 + 0x1c),0x6c);
    iVar1 = bind(__ptr[1],local_80,0x6e);
    if (iVar1 < 0) {
      perror(DAT_0001bfb0);
      iVar1 = connect(__ptr[1],local_80,0x6e);
      if (-1 < iVar1) goto LAB_0001bf26;
      iVar1 = unlink(*(char **)(param_1 + 0x1c));
      __s = DAT_0001bfb4;
      if ((iVar1 < 0) || (iVar1 = bind(__ptr[1],local_80,0x6e), __s = DAT_0001bfb0, iVar1 < 0))
      goto LAB_0001bf22;
    }
    FUN_00014640(__ptr[1],DAT_0001bfb8,param_1,0);
  }
  return __ptr;
}



/* ===== FUN_0001bfbc @ 0001bfbc size=40 ===== */

void FUN_0001bfbc(int *param_1)

{
  if (-1 < param_1[1]) {
    FUN_000146ac();
    close(param_1[1]);
  }
  if (*(char **)(*param_1 + 0x1c) != (char *)0x0) {
    unlink(*(char **)(*param_1 + 0x1c));
  }
  free(param_1);
  return;
}



/* ===== FUN_0001bfe4 @ 0001bfe4 size=250 ===== */

undefined1 * FUN_0001bfe4(byte *param_1,uint param_2,int *param_3)

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
  
  uVar4 = (uint)((ulonglong)(param_2 << 2) * (ulonglong)DAT_0001c0e0 >> 0x21);
  __size = uVar4 + 5 + (uint)((ulonglong)(uVar4 + 4) * (ulonglong)DAT_0001c0e4 >> 0x24);
  if ((__size < param_2) ||
     (puVar5 = malloc(__size), iVar3 = DAT_0001c0e8, puVar5 == (undefined1 *)0x0)) {
    return (undefined1 *)0x0;
  }
  iVar10 = 0;
  puVar8 = puVar5;
  pbVar9 = param_1;
  while (iVar11 = DAT_0001c0e8, iVar7 = (int)(param_1 + param_2) - (int)pbVar9, 2 < iVar7) {
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
    if (iVar10 == 0) goto LAB_0001c0d0;
  }
  else {
    uVar4 = (*pbVar9 & 3) * 0x10;
    *puVar8 = *(undefined1 *)(DAT_0001c0e8 + (uint)(*pbVar9 >> 2));
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
LAB_0001c0d0:
  *puVar8 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = (int)puVar8 - (int)puVar5;
  }
  return puVar5;
}



/* ===== FUN_0001c0ec @ 0001c0ec size=218 ===== */

byte * FUN_0001c0ec(byte *param_1,int param_2,int *param_3)

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
  pbVar4 = DAT_0001c1c8;
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



/* ===== FUN_0001c2a0 @ 0001c2a0 size=572 ===== */

void FUN_0001c2a0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  code *pcVar15;
  undefined4 *puVar16;
  size_t __n;
  void *__s2;
  undefined4 uVar17;
  undefined4 local_6c;
  undefined4 *local_68;
  void *local_64;
  size_t local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int aiStack_50 [11];
  int *piVar14;
  
  if (param_2 == 0) {
    uVar11 = 5;
    uVar17 = DAT_0001c4dc;
LAB_0001c2b2:
    FUN_00013f10(param_1,uVar11,uVar17);
  }
  else {
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    aiStack_50[0] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __n = *(size_t *)(param_2 + 0x48);
    puVar16 = (undefined4 *)(param_2 + 0x20);
    *(int *)(param_1 + 0xb8) = param_2;
    __s2 = (void *)(param_2 + 0x26);
    local_5c = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar17 = *(undefined4 *)(param_2 + 0x4c);
    aiStack_50[7] = 0;
    aiStack_50[1] = 0;
    aiStack_50[3] = 0;
    aiStack_50[5] = 0;
    aiStack_50[8] = 0;
    local_6c = uVar17;
    local_68 = puVar16;
    local_64 = __s2;
    local_60 = __n;
    aiStack_50[2] = uStack_58;
    aiStack_50[4] = uStack_58;
    aiStack_50[6] = uStack_58;
    aiStack_50[9] = uStack_58;
    if ((__n != *(size_t *)(param_1 + 0x1c4)) ||
       (iVar9 = memcmp((void *)(param_1 + 0x1a4),__s2,__n), iVar9 != 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c8) = uVar17;
    memcpy((void *)(param_1 + 0x1a4),__s2,__n);
    local_5c = *(int *)(param_3 + 0x5c);
    iVar9 = param_3 + 100;
    *(size_t *)(param_1 + 0x1c4) = __n;
    if (local_5c == 0) {
      local_5c = 1;
    }
    piVar12 = aiStack_50 + 4;
    piVar13 = (int *)(param_3 + 0xa4);
    do {
      piVar14 = piVar13 + 1;
      iVar10 = *piVar13;
      if (iVar10 != 0) {
        piVar12[-4] = iVar9;
      }
      *piVar12 = iVar10;
      iVar9 = iVar9 + 0x10;
      piVar12 = piVar12 + 1;
      piVar13 = piVar14;
    } while (piVar14 != (int *)(param_3 + 0xb4));
    aiStack_50[8] = *(undefined4 *)(param_3 + 0xb4);
    cVar3 = *(char *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    cVar4 = *(char *)(param_1 + 0xa4);
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa6) = *puVar16;
    *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_2 + 0x24);
    if (((((cVar3 != '\0' || *(char *)(param_1 + 0xa1) != '\0') || *(char *)(param_1 + 0xa2) != '\0'
          ) || *(char *)(param_1 + 0xa3) != '\0') || cVar4 != '\0') ||
        *(char *)(param_1 + 0xa5) != '\0') {
      FUN_00013330(param_1);
    }
    iVar9 = FUN_00013784(param_2,DAT_0001c4e0);
    if (((iVar9 == 0) && (iVar9 = FUN_0001375a(param_2,0x30), iVar9 == 0)) ||
       ((*(uint *)(param_3 + 0x54) & 0x1e3) == 0)) {
      if ((*(uint *)(param_3 + 0x54) & 499) != 0) {
        *(undefined4 *)(param_1 + 0x294) = 200;
        iVar9 = FUN_0001e344(param_1,0,param_3,param_1 + 0x1cc,param_1 + 0x294);
        uVar17 = DAT_0001c4e8;
        goto joined_r0x0001c40e;
      }
      FUN_0001dfde(param_1,param_3);
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x294) = 200;
      iVar9 = FUN_0001e344(param_1,param_2,param_3,param_1 + 0x1cc,param_1 + 0x294);
      uVar17 = DAT_0001c4e4;
joined_r0x0001c40e:
      if (iVar9 != 0) {
        uVar11 = 4;
        goto LAB_0001c2b2;
      }
    }
    FUN_00020b1c(param_1);
    uVar1 = *(undefined1 *)((int)local_68 + 5);
    uVar2 = *(undefined1 *)local_68;
    uVar5 = *(undefined1 *)((int)local_68 + 1);
    uVar6 = *(undefined1 *)((int)local_68 + 2);
    uVar7 = *(undefined1 *)((int)local_68 + 3);
    uVar8 = *(undefined1 *)(local_68 + 1);
    uVar17 = FUN_00013ebc(local_64,local_60);
    FUN_00013f10(param_1,3,DAT_0001c4ec,uVar2,uVar5,uVar6,uVar7,uVar8,uVar1,uVar17,local_6c);
    FUN_0001e086(param_1,puVar16);
    FUN_0001e17c(param_1,4);
    iVar9 = *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0xb4) = param_3;
    FUN_00020a4c(param_1,param_3);
    FUN_0001dfdc(param_1);
    if (*(int *)(param_1 + 0xb4) != iVar9) {
      FUN_0001332c(param_1);
    }
    *(int *)(param_1 + 0x2b8) = local_5c;
    pcVar15 = *(code **)(*(int *)(param_1 + 0x100) + 0x98);
    if ((pcVar15 == (code *)0x0) ||
       (iVar9 = (*pcVar15)(*(undefined4 *)(param_1 + 0xd4),&local_6c), iVar9 < 0)) {
      FUN_00013f10(param_1,3,DAT_0001c4f0);
      FUN_00020ac8(param_1,1,0);
    }
    else {
      FUN_000146b2(5,0,DAT_0001c4f4,param_1,0);
    }
  }
  return;
}



/* ===== FUN_0001c668 @ 0001c668 size=488 ===== */

void FUN_0001c668(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  undefined1 *local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_c8;
  int local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [40];
  int local_74;
  int local_70;
  int local_40;
  byte local_2e;
  byte local_2d;
  
  iVar12 = *(int *)(param_1 + 0xb4);
  if ((iVar12 != 0) && (*(int *)(param_1 + 0x114) == 4)) {
    iVar8 = memcmp((void *)(param_1 + 0xa6),param_2,6);
    if (iVar8 == 0) {
      FUN_00014758(DAT_0001c6f0,param_1,0);
      if (*(short *)(param_2 + 8) == 0) {
        uVar9 = *(undefined4 *)(iVar12 + 0xc0);
        memset(&local_100,0,100);
        local_114 = param_1 + 0x1a4;
        local_110 = *(undefined4 *)(param_1 + 0x1c4);
        local_10c = *(undefined4 *)(param_1 + 0x1c8);
        local_104 = *(int *)(param_1 + 0x294);
        if (local_104 == 0) {
          local_108 = 0;
        }
        else {
          local_108 = param_1 + 0x1cc;
        }
        local_118 = param_2;
        local_100 = FUN_0001e2d4(*(undefined4 *)(param_1 + 0xc4));
        local_fc = FUN_0001e2d4(*(undefined4 *)(param_1 + 200));
        local_c8 = *(undefined4 *)(param_1 + 0x298);
        if (*(int *)(param_1 + 0x2b4) != 0) {
          local_ac = param_1 + 0x2ac;
        }
        uVar1 = *local_118;
        uVar2 = local_118[1];
        uVar3 = local_118[2];
        uVar4 = local_118[3];
        uVar5 = local_118[4];
        uVar6 = local_118[5];
        uVar7 = DAT_0001c660;
        local_f0 = uVar9;
        if (local_114 != 0) {
          uVar7 = FUN_00013ebc(local_114,local_110);
        }
        FUN_00013f10(param_1,3,DAT_0001c658,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,local_10c);
        FUN_0001e17c(param_1,5);
        if ((local_108 == 0) ||
           (iVar12 = FUN_0001c844(local_108,local_104,auStack_9c,0), iVar12 < 0)) {
          memset(auStack_9c,0,0x7c);
        }
        if ((local_70 == 0) && (local_70 = local_74, local_2d = local_2e, local_74 == 0)) {
          local_70 = 0;
          iVar12 = 0;
        }
        else {
          iVar12 = local_2d + 2;
          local_70 = local_70 + -2;
        }
        FUN_00016a4e(*(undefined4 *)(param_1 + 0x108),local_70,iVar12);
        if ((local_40 != 0) && (*(int *)(param_1 + 0x150) << 0x14 < 0)) {
          local_a4 = 1;
        }
        if (*(int *)(*(int *)(param_1 + 4) + 0x194) == 0) {
          local_a0 = 0xffffffff;
        }
        else {
          local_a0 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x198);
        }
        pcVar10 = *(code **)(*(int *)(param_1 + 0x100) + 0x2c);
        if ((pcVar10 == (code *)0x0) ||
           (iVar12 = (*pcVar10)(*(undefined4 *)(param_1 + 0xd4),&local_118), iVar12 < 0)) {
          FUN_00013f10(param_1,3,DAT_0001c65c);
          FUN_0001f31a(param_1,param_1 + 0xa6);
          *(undefined4 *)(param_1 + 0xa6) = 0;
          *(undefined2 *)(param_1 + 0xaa) = 0;
        }
        else {
          FUN_000146b2(5,0,DAT_0001c664,param_1,0);
        }
        return;
      }
      if (((*(short *)(param_2 + 8) == 0xd) &&
          (uVar11 = (uint)*(ushort *)(param_2 + 6), *(uint *)(param_1 + 0x2b8) != uVar11)) &&
         (iVar12 = *(int *)(param_1 + 0xb4), *(int *)(iVar12 + 0x5c) != 4)) {
        if (uVar11 == 0) {
          *(undefined4 *)(iVar12 + 0x5c) = 2;
        }
        else {
          if (uVar11 != 1) {
            return;
          }
          *(undefined4 *)(iVar12 + 0x5c) = 4;
        }
        FUN_0001f3fc(param_1,*(undefined4 *)(param_1 + 0xb8));
        return;
      }
      FUN_0001f31a(param_1,(void *)(param_1 + 0xa6));
      return;
    }
  }
  return;
}



/* ===== FUN_0001c6f4 @ 0001c6f4 size=76 ===== */

undefined4 FUN_0001c6f4(int param_1,undefined2 *param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  
  if ((param_2 == (undefined2 *)0x0) || (param_3 == (void *)0x0)) {
    free(*(void **)(param_1 + 0x2a4));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x2a0) = *param_2;
    free(*(void **)(param_1 + 0x2a4));
    __dest = malloc(param_4);
    *(void **)(param_1 + 0x2a4) = __dest;
    if (__dest == (void *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(__dest,param_3,param_4);
      *(size_t *)(param_1 + 0x2a8) = param_4;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001c740 @ 0001c740 size=156 ===== */

void FUN_0001c740(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  undefined4 unaff_r4;
  
  FUN_00014758(DAT_0001c758,param_1,0);
  cVar1 = *(char *)(param_1 + 0xa1);
  cVar2 = *(char *)(param_1 + 0xa0);
  cVar3 = *(char *)(param_1 + 0xa2);
  cVar4 = *(char *)(param_1 + 0xa3);
  cVar5 = *(char *)(param_1 + 0xa4);
  cVar6 = *(char *)(param_1 + 0xa5);
  pcVar8 = *(code **)(*(int *)(param_1 + 0x100) + 0x24);
  if ((pcVar8 == (code *)0x0) ||
     (iVar7 = (*pcVar8)(*(undefined4 *)(param_1 + 0xd4),param_1 + 0xa6,3,pcVar8,unaff_r4), iVar7 < 0
     )) {
    FUN_00013f10(param_1,3,DAT_0001c254);
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  FUN_0001f31a(param_1,param_1 + 0xa6);
  FUN_0001e17c(param_1,0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  if (((((cVar2 == '\0' && cVar1 == '\0') && cVar3 == '\0') && cVar4 == '\0') && cVar5 == '\0') &&
      cVar6 == '\0') {
    return;
  }
  FUN_00013330(param_1);
  return;
}



/* ===== FUN_0001c75c @ 0001c75c size=8 ===== */

void FUN_0001c75c(int param_1)

{
  FUN_0001f31a(param_1,param_1 + 0xa6);
  return;
}



/* ===== FUN_0001c764 @ 0001c764 size=22 ===== */

void FUN_0001c764(int param_1)

{
  FUN_0001f31a(param_1,param_1 + 0xa6);
  FUN_0001f960(param_1);
  return;
}



/* ===== FUN_0001c77a @ 0001c77a size=36 ===== */

void FUN_0001c77a(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(int *)(param_1 + 0x2b4) != 0) && (-1 < *(int *)(param_1 + 0x150) << 0x1d)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x24);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c79a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0xd4),param_1 + 0x2ac,3);
      return;
    }
  }
  return;
}



/* ===== FUN_0001c79e @ 0001c79e size=46 ===== */

void FUN_0001c79e(int param_1)

{
  if (*(int *)(param_1 + 0x114) != 5) {
    FUN_00014758(DAT_0001c7d0,param_1,0);
    if (*(int *)(param_1 + 0x114) == 4) {
      return;
    }
  }
  FUN_00014758(DAT_0001c7cc,param_1,0);
  return;
}



/* ===== FUN_0001c7d4 @ 0001c7d4 size=54 ===== */

void FUN_0001c7d4(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_0001e17c(param_1,4,param_3,param_4,param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0xa6) = *param_2;
  uVar1 = DAT_0001c80c;
  *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_2 + 1);
  FUN_00014758(uVar1,param_1,0);
  FUN_000146b2(5,0,uVar1,param_1,0);
  return;
}



/* ===== FUN_0001c810 @ 0001c810 size=42 ===== */

void FUN_0001c810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  free(*(void **)(param_1 + 0x2a4));
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  FUN_00014758(DAT_0001c83c,param_1,0);
  FUN_00014758(DAT_0001c840,param_1,0,param_4);
  return;
}



/* ===== FUN_0001c844 @ 0001c844 size=462 ===== */

undefined4 FUN_0001c844(byte *param_1,uint param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  puVar4 = memset(param_3,0,0x7c);
  uVar3 = DAT_0001ca14;
  iVar5 = 0;
  for (; 1 < param_2; param_2 = (param_2 - 2) - uVar7) {
    bVar1 = param_1[1];
    uVar7 = (uint)bVar1;
    pbVar8 = param_1 + 2;
    bVar2 = *param_1;
    if (param_2 - 2 < uVar7) goto LAB_0001ca0c;
    if (bVar2 == 0x24) {
      puVar4[0x10] = pbVar8;
      *(byte *)(puVar4 + 0x1d) = bVar1;
    }
    else if (bVar2 < 0x25) {
      if (bVar2 == 4) {
        puVar4[4] = pbVar8;
        *(byte *)(puVar4 + 0x1a) = bVar1;
      }
      else if (bVar2 < 5) {
        if (bVar2 == 1) {
          puVar4[1] = pbVar8;
          *(byte *)((int)puVar4 + 0x65) = bVar1;
        }
        else if (bVar2 == 0) {
          *puVar4 = pbVar8;
          *(byte *)(puVar4 + 0x19) = bVar1;
        }
        else if (bVar2 == 2) {
          puVar4[2] = pbVar8;
          *(byte *)((int)puVar4 + 0x66) = bVar1;
        }
        else {
          if (bVar2 != 3) goto LAB_0001c8aa;
          puVar4[3] = pbVar8;
          *(byte *)((int)puVar4 + 0x67) = bVar1;
        }
      }
      else if (bVar2 == 6) {
        puVar4[6] = pbVar8;
        *(byte *)((int)puVar4 + 0x6a) = bVar1;
      }
      else if (bVar2 < 6) {
        puVar4[5] = pbVar8;
        *(byte *)((int)puVar4 + 0x69) = bVar1;
      }
      else if (bVar2 == 0x10) {
        puVar4[7] = pbVar8;
        *(byte *)((int)puVar4 + 0x6b) = bVar1;
      }
      else {
        if (bVar2 != 0x21) goto LAB_0001c8aa;
        puVar4[0xf] = pbVar8;
        *(byte *)((int)puVar4 + 0x73) = bVar1;
      }
    }
    else if (bVar2 == 0x36) {
      puVar4[0x11] = pbVar8;
      *(byte *)((int)puVar4 + 0x75) = bVar1;
    }
    else if (bVar2 < 0x37) {
      if (bVar2 == 0x2d) {
        puVar4[0x14] = pbVar8;
        *(byte *)(puVar4 + 0x1e) = bVar1;
      }
      else if (bVar2 < 0x2e) {
        if (bVar2 != 0x2a) goto LAB_0001c8aa;
        puVar4[8] = pbVar8;
        *(byte *)(puVar4 + 0x1b) = bVar1;
      }
      else if (bVar2 == 0x30) {
        puVar4[0xb] = pbVar8;
        *(byte *)((int)puVar4 + 0x6f) = bVar1;
      }
      else {
        if (bVar2 != 0x32) goto LAB_0001c8aa;
        puVar4[9] = pbVar8;
        *(byte *)((int)puVar4 + 0x6d) = bVar1;
      }
    }
    else if (bVar2 == 0x3d) {
      puVar4[0x15] = pbVar8;
      *(byte *)((int)puVar4 + 0x79) = bVar1;
    }
    else if (bVar2 < 0x3e) {
      if (bVar2 == 0x37) {
        puVar4[0x12] = pbVar8;
        *(byte *)((int)puVar4 + 0x76) = bVar1;
      }
      else {
        if (bVar2 != 0x38) goto LAB_0001c8aa;
        puVar4[0x13] = pbVar8;
        *(byte *)((int)puVar4 + 0x77) = bVar1;
      }
    }
    else if (bVar2 == 0x65) {
      if (0x11 < uVar7) {
        puVar4[0x18] = pbVar8;
      }
    }
    else {
      if ((bVar2 == 0xdd) && (3 < uVar7)) {
        uVar9 = (uint)param_1[3] << 8 | (uint)param_1[2] << 0x10 | (uint)param_1[4];
        if (uVar9 == 0x904c) {
          if (param_1[5] == 0x33) {
            puVar4[0x16] = pbVar8;
            *(byte *)((int)puVar4 + 0x7a) = bVar1;
            goto LAB_0001c950;
          }
        }
        else if (uVar9 == uVar3) {
          if (param_1[5] == 9) {
            puVar4[0x17] = pbVar8;
            *(byte *)((int)puVar4 + 0x7b) = bVar1;
            goto LAB_0001c950;
          }
        }
        else if (uVar9 == 0x50f2) {
          bVar2 = param_1[5];
          if (bVar2 == 2) {
            if (uVar7 == 4) goto LAB_0001c8aa;
            if (param_1[6] < 2) {
              puVar4[0xc] = pbVar8;
              *(byte *)(puVar4 + 0x1c) = bVar1;
            }
            else {
              if (param_1[6] != 2) goto LAB_0001c8aa;
              puVar4[0xd] = pbVar8;
              *(byte *)((int)puVar4 + 0x71) = bVar1;
            }
          }
          else if (bVar2 == 4) {
            puVar4[0xe] = pbVar8;
            *(byte *)((int)puVar4 + 0x72) = bVar1;
          }
          else {
            if (bVar2 != 1) goto LAB_0001c8aa;
            puVar4[10] = pbVar8;
            *(byte *)((int)puVar4 + 0x6e) = bVar1;
          }
          goto LAB_0001c950;
        }
      }
LAB_0001c8aa:
      iVar5 = iVar5 + 1;
    }
LAB_0001c950:
    param_1 = pbVar8 + uVar7;
  }
  if (param_2 == 0) {
    uVar6 = 0;
    if (iVar5 != 0) {
      uVar6 = 1;
    }
  }
  else {
LAB_0001ca0c:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* ===== FUN_0001ca38 @ 0001ca38 size=138 ===== */

int FUN_0001ca38(char *param_1,int param_2,uint param_3,undefined4 param_4)

{
  void *__dest;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1 + param_2;
  while( true ) {
    if (pcVar4 <= param_1 + 1) {
      return 0;
    }
    iVar1 = (byte)param_1[1] + 2;
    if (pcVar4 < param_1 + iVar1) break;
    if (((*param_1 == -0x23) && (3 < (byte)param_1[1])) &&
       (uVar2 = *(uint *)(param_1 + 2),
       (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18)
       == param_3)) {
      iVar1 = FUN_00014028(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      do {
        uVar2 = (uint)(byte)param_1[1];
        if (pcVar4 < param_1 + uVar2 + 2) {
          return iVar1;
        }
        if ((*param_1 == -0x23) && (3 < uVar2)) {
          uVar3 = *(uint *)(param_1 + 2);
          uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                  uVar3 >> 0x18;
          if ((uVar3 == param_3) && (param_1 + 6 != (char *)0x0)) {
            __dest = (void *)FUN_000140d8(iVar1,uVar2 - 4,uVar2,uVar3,param_4);
            memcpy(__dest,param_1 + 6,uVar2 - 4);
          }
        }
        param_1 = param_1 + (byte)param_1[1] + 2;
      } while (param_1 + 1 < pcVar4);
      return iVar1;
    }
    param_1 = param_1 + iVar1;
  }
  return 0;
}



/* ===== FUN_0001cac4 @ 0001cac4 size=272 ===== */

undefined4
FUN_0001cac4(undefined1 *param_1,uint param_2,uint param_3,int param_4,int param_5,
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
      iVar1 = FUN_0001dbdc(1,local_bc,&local_c0,auStack_b4);
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
    iVar1 = FUN_0001dbdc(uVar2,local_a0,local_88,param_6);
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
      uVar3 = FUN_0001dbdc(2,local_a0,local_88,param_6);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001cbd4 @ 0001cbd4 size=28 ===== */

void FUN_0001cbd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_4;
  uStack_c = param_3;
  FUN_0001cac4(param_1,param_2,1,&uStack_c,&local_10,param_5);
  return;
}



/* ===== FUN_0001cbf0 @ 0001cbf0 size=160 ===== */

undefined4
FUN_0001cbf0(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
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
    iVar2 = FUN_0001cac4(param_1,param_2,3,&local_4c,&local_40,param_6 + uVar3);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar3 = uVar3 + 0x14;
    local_4d = local_4d + '\x01';
  }
  iVar2 = FUN_0001cac4(param_1,param_2,3,&local_4c,&local_40,auStack_34);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  memcpy((void *)(param_6 + uVar3),auStack_34,param_7 - uVar3);
  return 0;
}



/* ===== FUN_0001cc90 @ 0001cc90 size=3564 ===== */

void FUN_0001cc90(uint *param_1,uint *param_2)

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
           param_1[4] + DAT_0001d050 + (uVar18 >> 0x1b | uVar18 << 5) + uVar22;
  uVar30 = uVar19 >> 2 | uVar19 << 0x1e;
  uVar7 = local_68[1] << 0x18 | (local_68[1] >> 8 & 0xff) << 0x10 |
          (local_68[1] >> 0x10 & 0xff) << 8 | local_68[1] >> 0x18;
  uVar31 = ((uVar20 ^ uVar30) & uVar18 ^ uVar20) + uVar21 + DAT_0001d050 + uVar7 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar27 = local_68[2] << 0x18 | (local_68[2] >> 8 & 0xff) << 0x10 |
           (local_68[2] >> 0x10 & 0xff) << 8 | local_68[2] >> 0x18;
  uVar24 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar2 = local_68[3] << 0x18 | (local_68[3] >> 8 & 0xff) << 0x10 |
          (local_68[3] >> 0x10 & 0xff) << 8 | local_68[3] >> 0x18;
  uVar8 = ((uVar30 ^ uVar1) & uVar29 ^ uVar30) + uVar20 + DAT_0001d050 + uVar27 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar3 = local_68[4] << 0x18 | (local_68[4] >> 8 & 0xff) << 0x10 |
          (local_68[4] >> 0x10 & 0xff) << 8 | local_68[4] >> 0x18;
  uVar4 = local_54 << 0x18 | (local_54 >> 8 & 0xff) << 0x10 | (local_54 >> 0x10 & 0xff) << 8 |
          local_54 >> 0x18;
  uVar31 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + DAT_0001d050 + uVar2 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar30 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar5 = local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
          local_50 >> 0x18;
  uVar8 = ((uVar24 ^ uVar29) & uVar8 ^ uVar24) + uVar1 + DAT_0001d050 + uVar3 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar1 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar6 = local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 | (local_4c >> 0x10 & 0xff) << 8 |
          local_4c >> 0x18;
  uVar31 = ((uVar29 ^ uVar30) & uVar31 ^ uVar29) + uVar24 + uVar4 + DAT_0001d050 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar24 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar26 = local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
           local_48 >> 0x18;
  uVar8 = ((uVar30 ^ uVar1) & uVar8 ^ uVar30) + uVar29 + uVar5 + DAT_0001d050 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar31 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + uVar6 + DAT_0001d050 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar9 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
          local_44 >> 0x18;
  uVar30 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar10 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
           local_40 >> 0x18;
  uVar25 = ((uVar24 ^ uVar29) & uVar8 ^ uVar24) + uVar1 + uVar26 + DAT_0001d050 +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar1 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar11 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
           local_3c >> 0x18;
  uVar8 = ((uVar29 ^ uVar30) & uVar31 ^ uVar29) + uVar24 + uVar9 + DAT_0001d050 +
          (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar24 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar12 = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18;
  uVar31 = ((uVar30 ^ uVar1) & uVar25 ^ uVar30) + uVar29 + uVar10 + DAT_0001d050 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar29 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar13 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  uVar8 = ((uVar1 ^ uVar24) & uVar8 ^ uVar1) + uVar30 + uVar11 + DAT_0001d050 +
          (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar30 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar14 = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
           local_30 >> 0x18;
  uVar25 = ((uVar24 ^ uVar29) & uVar31 ^ uVar24) + uVar1 + uVar12 + DAT_0001d050 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar15 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  uVar31 = ((uVar29 ^ uVar30) & uVar8 ^ uVar29) + uVar24 + uVar13 + DAT_0001d050 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar22 ^ uVar27 ^ uVar26 ^ uVar13;
  uVar24 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar22 = ((uVar30 ^ uVar1) & uVar25 ^ uVar30) + uVar29 + uVar14 + DAT_0001d050 +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar25 = ((uVar1 ^ uVar24) & uVar31 ^ uVar1) + uVar30 + uVar15 + DAT_0001d050 +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar31 = uVar7 ^ uVar2 ^ uVar9 ^ uVar14;
  uVar30 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar22 = ((uVar24 ^ uVar8) & uVar22 ^ uVar24) + uVar1 + uVar29 + DAT_0001d050 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar1 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar7 = uVar27 ^ uVar3 ^ uVar10 ^ uVar15;
  uVar25 = ((uVar8 ^ uVar30) & uVar25 ^ uVar8) + uVar24 + uVar31 + DAT_0001d050 +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar24 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar27 = ((uVar30 ^ uVar1) & uVar22 ^ uVar30) + uVar8 + uVar24 + DAT_0001d050 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar2 ^ uVar4 ^ uVar11 ^ uVar29;
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar25 = ((uVar1 ^ uVar7) & uVar25 ^ uVar1) + DAT_0001d050 + uVar22 + uVar30 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar2 = uVar5 ^ uVar3 ^ uVar12 ^ uVar31;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar27 = (uVar7 ^ uVar8 ^ uVar27) + uVar1 + uVar2 + DAT_0001d054 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar1 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar3 = uVar6 ^ uVar4 ^ uVar13 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar25 = (uVar8 ^ uVar30 ^ uVar25) + uVar7 + uVar3 + DAT_0001d054 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar4 = uVar5 ^ uVar26 ^ uVar14 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar27 = (uVar30 ^ uVar1 ^ uVar27) + uVar8 + uVar4 + DAT_0001d054 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar5 = uVar6 ^ uVar9 ^ uVar15 ^ uVar2;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar28 = (uVar1 ^ uVar7 ^ uVar25) + uVar30 + uVar5 + DAT_0001d054 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar6 = uVar26 ^ uVar10 ^ uVar29 ^ uVar3;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar1 + uVar6 + DAT_0001d054 + (uVar7 ^ uVar8 ^ uVar27) +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar1 = uVar9 ^ uVar11 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar25 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar26 = (uVar8 ^ uVar30 ^ uVar28) + uVar7 + uVar1 + DAT_0001d054 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar10 ^ uVar12 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar27 = (uVar30 ^ uVar25 ^ uVar27) + uVar8 + uVar9 + DAT_0001d054 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar10 = uVar11 ^ uVar13 ^ uVar22 ^ uVar6;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar28 = uVar30 + uVar10 + DAT_0001d054 + (uVar25 ^ uVar7 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar30 = uVar12 ^ uVar14 ^ uVar2 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = (uVar7 ^ uVar8 ^ uVar27) + uVar25 + uVar30 + DAT_0001d054 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar25 = uVar13 ^ uVar15 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar12 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar27 = uVar7 + uVar25 + DAT_0001d054 + (uVar8 ^ uVar11 ^ uVar28) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar14 ^ uVar29 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = uVar8 + uVar7 + DAT_0001d054 + (uVar11 ^ uVar12 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar8 = uVar15 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = uVar11 + uVar8 + DAT_0001d054 + (uVar12 ^ uVar13 ^ uVar27) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar6 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = uVar12 + uVar29 + DAT_0001d054 + (uVar13 ^ uVar14 ^ uVar26) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar15 = uVar13 + uVar31 + DAT_0001d054 + (uVar14 ^ uVar11 ^ uVar15) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar13 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar24 = uVar2 ^ uVar24 ^ uVar9 ^ uVar8;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar26 = uVar24 + DAT_0001d054 + uVar14 + (uVar11 ^ uVar12 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar2 = uVar2 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar27 = uVar11 + uVar22 + DAT_0001d054 + (uVar12 ^ uVar13 ^ uVar15) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar12 + uVar2 + DAT_0001d054 + (uVar13 ^ uVar14 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar3 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar13 + uVar3 + DAT_0001d054 + (uVar14 ^ uVar11 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar4 = uVar4 ^ uVar6 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = uVar14 + uVar4 + DAT_0001d054 + (uVar11 ^ uVar12 ^ uVar15) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar5 = uVar5 ^ uVar1 ^ uVar8 ^ uVar2;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar11 + DAT_0001d054 + uVar5 + (uVar12 ^ uVar13 ^ uVar27) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar6 = uVar6 ^ uVar9 ^ uVar29 ^ uVar3;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = uVar12 + uVar6 + DAT_0001d674 + ((uVar15 | uVar14) & uVar13 | uVar15 & uVar14) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar1 ^ uVar10 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar13 + uVar1 + DAT_0001d674 + ((uVar27 | uVar11) & uVar14 | uVar27 & uVar11) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar9 = uVar9 ^ uVar30 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar26 = uVar14 + uVar9 + DAT_0001d674 + (uVar15 & uVar12 | (uVar15 | uVar12) & uVar11) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar10 = uVar10 ^ uVar25 ^ uVar22 ^ uVar6;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = uVar11 + uVar10 + DAT_0001d674 + ((uVar27 | uVar13) & uVar12 | uVar27 & uVar13) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar30 = uVar30 ^ uVar7 ^ uVar2 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = uVar12 + uVar30 + DAT_0001d674 + ((uVar26 | uVar14) & uVar13 | uVar26 & uVar14) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar25 = uVar25 ^ uVar8 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar27 = (uVar15 & uVar11 | (uVar15 | uVar11) & uVar14) + uVar13 + uVar25 + DAT_0001d674 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar29 ^ uVar7 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar14 + uVar7 + DAT_0001d674 + (uVar26 & uVar12 | (uVar26 | uVar12) & uVar11) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar8 = uVar8 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = ((uVar27 | uVar13) & uVar12 | uVar27 & uVar13) + uVar11 + uVar8 + DAT_0001d674 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar6 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar26 = ((uVar15 | uVar14) & uVar13 | uVar15 & uVar14) + uVar12 + uVar29 + DAT_0001d674 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = ((uVar27 | uVar11) & uVar14 | uVar27 & uVar11) + uVar13 + uVar31 + DAT_0001d674 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar24 = uVar24 ^ uVar2 ^ uVar9 ^ uVar8;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = ((uVar26 | uVar12) & uVar11 | uVar26 & uVar12) + uVar14 + uVar24 + DAT_0001d674 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar26 = uVar22 + DAT_0001d674 + uVar11 + ((uVar15 | uVar13) & uVar12 | uVar15 & uVar13) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar2 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar2 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar15 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = (uVar27 & uVar14 | (uVar27 | uVar14) & uVar13) + uVar12 + uVar11 + DAT_0001d674 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar3 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = uVar13 + uVar3 + DAT_0001d674 + (uVar26 & uVar2 | (uVar26 | uVar2) & uVar14) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar6 ^ uVar4 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar14 = (uVar27 & uVar15 | (uVar27 | uVar15) & uVar2) + uVar14 + uVar4 + DAT_0001d674 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar5 = uVar5 ^ uVar1 ^ uVar8 ^ uVar11;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar13 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = (uVar26 & uVar12 | (uVar26 | uVar12) & uVar15) + uVar2 + uVar5 + DAT_0001d674 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar2 = uVar6 ^ uVar9 ^ uVar29 ^ uVar3;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar6 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar26 = (uVar14 & uVar13 | (uVar14 | uVar13) & uVar12) + uVar15 + uVar2 + DAT_0001d674 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar1 ^ uVar10 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar15 = (uVar27 & uVar6 | (uVar27 | uVar6) & uVar13) + uVar12 + uVar1 + DAT_0001d674 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar9 = uVar9 ^ uVar30 ^ uVar24 ^ uVar5;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = ((uVar26 | uVar14) & uVar6 | uVar26 & uVar14) + uVar13 + uVar9 + DAT_0001d674 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar10 = uVar10 ^ uVar25 ^ uVar22 ^ uVar2;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar13 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = ((uVar15 | uVar12) & uVar14 | uVar15 & uVar12) + DAT_0001d674 + uVar10 + uVar6 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar30 = uVar30 ^ uVar7 ^ uVar11 ^ uVar1;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar27 = (uVar12 ^ uVar13 ^ uVar27) + uVar14 + uVar30 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar25 = uVar25 ^ uVar8 ^ uVar3 ^ uVar9;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar15 = (uVar13 ^ uVar6 ^ uVar15) + uVar12 + uVar25 + DAT_0001da8c +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar12 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar7 = uVar29 ^ uVar7 ^ uVar4 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar26 = (uVar6 ^ uVar14 ^ uVar27) + uVar13 + uVar7 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar13 = uVar8 ^ uVar31 ^ uVar5 ^ uVar30;
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar27 = (uVar14 ^ uVar12 ^ uVar15) + uVar6 + uVar13 + DAT_0001da8c +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar29 = uVar24 ^ uVar29 ^ uVar2 ^ uVar25;
  uVar29 = uVar29 >> 0x1f | uVar29 << 1;
  uVar6 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = (uVar12 ^ uVar8 ^ uVar26) + uVar14 + uVar29 + DAT_0001da8c +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar31 = uVar31 ^ uVar22 ^ uVar1 ^ uVar7;
  uVar31 = uVar31 >> 0x1f | uVar31 << 1;
  uVar14 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = (uVar8 ^ uVar6 ^ uVar27) + uVar12 + uVar31 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar24 = uVar24 ^ uVar11 ^ uVar9 ^ uVar13;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar26 = (uVar6 ^ uVar14 ^ uVar15) + uVar8 + uVar24 + DAT_0001da8c +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar22 = uVar22 ^ uVar3 ^ uVar10 ^ uVar29;
  uVar8 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar15 = (uVar14 ^ uVar12 ^ uVar27) + uVar6 + uVar22 + DAT_0001da8c +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar6 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar11 = uVar11 ^ uVar4 ^ uVar30 ^ uVar31;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar27 = uVar3 ^ uVar5 ^ uVar25 ^ uVar24;
  uVar26 = (uVar12 ^ uVar8 ^ uVar26) + uVar14 + uVar11 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar14 = uVar27 >> 0x1f | uVar27 << 1;
  uVar15 = (uVar8 ^ uVar6 ^ uVar15) + uVar12 + uVar14 + DAT_0001da8c +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar4 = uVar4 ^ uVar2 ^ uVar7 ^ uVar22;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar27 = (uVar6 ^ uVar3 ^ uVar26) + uVar8 + uVar4 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar5 = uVar5 ^ uVar1 ^ uVar13 ^ uVar11;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar15 = (uVar3 ^ uVar12 ^ uVar15) + uVar6 + uVar5 + DAT_0001da8c +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar2 = uVar9 ^ uVar2 ^ uVar29 ^ uVar14;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar27 = (uVar12 ^ uVar8 ^ uVar27) + uVar3 + uVar2 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar1 = uVar10 ^ uVar1 ^ uVar31 ^ uVar4;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar15 = (uVar8 ^ uVar6 ^ uVar15) + uVar12 + uVar1 + DAT_0001da8c +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar9 = uVar24 ^ uVar30 ^ uVar9 ^ uVar5;
  uVar24 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar12 = (uVar6 ^ uVar3 ^ uVar27) + uVar8 + uVar9 + DAT_0001da8c +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar2 = uVar2 ^ uVar10 ^ uVar25 ^ uVar22;
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = uVar2 >> 0x1f | uVar2 << 1;
  uVar6 = (uVar3 ^ uVar24 ^ uVar15) + uVar6 + uVar22 + DAT_0001da8c +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar1 = uVar30 ^ uVar7 ^ uVar11 ^ uVar1;
  uVar30 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar3 = (uVar24 ^ uVar8 ^ uVar12) + uVar3 + uVar1 + DAT_0001da8c + (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar9 = uVar25 ^ uVar13 ^ uVar14 ^ uVar9;
  uVar2 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_0001da8c + (uVar9 >> 0x1f | uVar9 << 1) + (uVar8 ^ uVar30 ^ uVar6) +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar22 = uVar4 ^ uVar7 ^ uVar29 ^ uVar22;
  uVar24 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar29 = uVar8 + DAT_0001da8c + (uVar22 >> 0x1f | uVar22 << 1) + (uVar30 ^ uVar2 ^ uVar3) +
           (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar1 = uVar1 ^ uVar5 ^ uVar13 ^ uVar31;
  *param_1 = uVar30 + DAT_0001da8c + uVar18 + (uVar1 >> 0x1f | uVar1 << 1) +
             (uVar2 ^ uVar24 ^ uVar6) + (uVar29 >> 0x1b | uVar29 * 0x20);
  param_1[1] = uVar19 + uVar29;
  param_1[2] = uVar20 + (uVar6 >> 2 | uVar6 * 0x40000000);
  param_1[3] = uVar21 + uVar24;
  param_1[4] = uVar2 + param_1[4];
  return;
}



/* ===== FUN_0001da90 @ 0001da90 size=42 ===== */

void FUN_0001da90(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001dabc;
  *param_1 = DAT_0001dabc;
  param_1[1] = iVar1 + -0x77777778;
  param_1[2] = iVar1 + 0x3175b9fd;
  param_1[3] = iVar1 + -0x5712ce8b;
  param_1[4] = DAT_0001dac0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



/* ===== FUN_0001dac4 @ 0001dac4 size=108 ===== */

void FUN_0001dac4(int param_1,void *param_2,uint param_3,undefined4 param_4)

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
    FUN_0001cc90(param_1,param_1 + 0x1c);
    for (; __n + 0x3f < param_3; __n = __n + 0x40) {
      FUN_0001cc90(param_1,(int)param_2 + __n);
    }
    uVar1 = 0;
  }
  (*(code *)PTR_memcpy_0004e06c)(uVar1 + 0x1c + param_1,(int)param_2 + __n,param_3 - __n,param_4);
  return;
}



/* ===== FUN_0001db30 @ 0001db30 size=164 ===== */

void FUN_0001db30(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  
  uVar1 = DAT_0001dbd8;
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
  FUN_0001dac4(param_2,DAT_0001dbd4,1);
  while ((param_2[5] & 0x1f8) != 0x1c0) {
    FUN_0001dac4(param_2,uVar1,1);
  }
  FUN_0001dac4(param_2,&iStack_20,8);
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



/* ===== FUN_0001dbdc @ 0001dbdc size=60 ===== */

undefined4 FUN_0001dbdc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_74 [92];
  
  FUN_0001da90(auStack_74);
  for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
    FUN_0001dac4(auStack_74,*(undefined4 *)(param_2 + iVar1 * 4),
                 *(undefined4 *)(param_3 + iVar1 * 4));
  }
  FUN_0001db30(param_4,auStack_74);
  return 0;
}



/* ===== FUN_0001dc18 @ 0001dc18 size=218 ===== */

undefined4
FUN_0001dc18(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,void *param_5,
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
    iVar2 = FUN_0001cac4(param_1,sVar1,2,&local_74,&local_6c,&local_50);
    if (iVar2 != 0) break;
    local_64 = local_50;
    uStack_60 = uStack_4c;
    uStack_5c = uStack_48;
    uStack_58 = uStack_44;
    local_54 = local_40;
    for (iVar2 = 1; iVar2 < param_4; iVar2 = iVar2 + 1) {
      iVar3 = FUN_0001cbd4(param_1,sVar1,&local_50,0x14,&local_3c);
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



/* ===== FUN_0001dcf4 @ 0001dcf4 size=30 ===== */

char * FUN_0001dcf4(char *param_1)

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



/* ===== FUN_0001dd12 @ 0001dd12 size=62 ===== */

undefined4
FUN_0001dd12(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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



/* ===== FUN_0001dd50 @ 0001dd50 size=18 ===== */

undefined4 FUN_0001dd50(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x48);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001dd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0xd4));
    return uVar1;
  }
  return 0;
}



/* ===== FUN_0001dd68 @ 0001dd68 size=34 ===== */

void FUN_0001dd68(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0001dd8c;
  for (iVar2 = *param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_00013f10(iVar2,3,uVar1,param_1);
  }
  FUN_000149ec();
  return;
}



/* ===== FUN_0001dd90 @ 0001dd90 size=172 ===== */

undefined4 FUN_0001dd90(int param_1,int param_2)

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
  uVar1 = DAT_0001de3c;
  if (*(int *)(param_2 + 0xc0) != 1) {
LAB_0001ddaa:
    FUN_00013f10(param_1,3,uVar1);
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    FUN_00013f10(param_1,3,DAT_0001de40);
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
    uVar1 = DAT_0001de44;
    if (*(int *)(param_1 + 200) != 0x10) goto LAB_0001ddaa;
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
  uVar1 = FUN_0001dd12(param_1,uVar1,0,0,1,&local_40,6,local_38,uVar4);
  return uVar1;
}



/* ===== FUN_0001de48 @ 0001de48 size=80 ===== */

undefined4 FUN_0001de48(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  piVar3 = (int *)(param_2 + 0xa4);
  do {
    if (*piVar3 != 0) {
      FUN_0001dd12(param_1,1,0,iVar2,*(int *)(param_2 + 0xb4) == iVar2,0,0,
                   param_2 + 100 + iVar2 * 0x10,*piVar3);
      uVar1 = 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 4);
  return uVar1;
}



/* ===== FUN_0001de98 @ 0001de98 size=56 ===== */

void FUN_0001de98(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(int *)(param_1 + 0x94) == 0) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x10), iVar1 != 0)) ||
     (iVar1 = *(int *)(param_1 + 0x150) << 0x1b, -1 < iVar1)) {
    FUN_00014758(DAT_0001ded0,param_1,0,iVar1,param_1,param_2);
    FUN_000146b2(param_2,param_3,DAT_0001ded0,param_1,0);
  }
  return;
}



/* ===== FUN_0001ded4 @ 0001ded4 size=226 ===== */

void FUN_0001ded4(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  if (*(uint *)(param_1 + 0x114) < 6) {
    FUN_000140c0(*(undefined4 *)(param_1 + 0x17c));
    iVar1 = FUN_00014146(param_3,param_4);
    *(int *)(param_1 + 0x17c) = iVar1;
    if (iVar1 != 0) {
      FUN_00014238(param_1 + 0x180);
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
        FUN_0001de98(param_1,uVar2,0);
      }
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_00013f10(param_1,3,DAT_0001dfb8);
        return;
      }
      *(undefined4 *)(param_1 + 300) = *param_2;
      *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 1);
      pcVar4 = *(code **)(*(int *)(param_1 + 0x100) + 0x40);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined4 *)(param_1 + 0xd4));
      }
      if (-1 < *(int *)(param_1 + 0x150) << 0x1c) {
        FUN_00015b5a(*(undefined4 *)(param_1 + 0x108),param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_0001dfbc @ 0001dfbc size=94 ===== */

undefined4 FUN_0001dfbc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *__ptr;
  undefined4 *puVar3;
  
  FUN_00014758(DAT_0001dfd8,param_1,0);
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



/* ===== FUN_0001dfdc @ 0001dfdc size=2 ===== */

void FUN_0001dfdc(void)

{
  return;
}



/* ===== FUN_0001dfde @ 0001dfde size=168 ===== */

void FUN_0001dfde(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00016a90(*(undefined4 *)(param_1 + 0x108),0);
  FUN_00016ad6(*(undefined4 *)(param_1 + 0x108),0);
  FUN_00016a4e(*(undefined4 *)(param_1 + 0x108),0);
  *(undefined4 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  puVar2 = (uint *)(param_2 + 0xa4);
  do {
    puVar3 = puVar2 + 1;
    if (5 < *puVar2) {
      uVar1 = 4;
LAB_0001e032:
      *(undefined4 *)(param_1 + 0xc4) = uVar1;
      *(undefined4 *)(param_1 + 200) = uVar1;
      break;
    }
    if (*puVar2 != 0) {
      uVar1 = 2;
      goto LAB_0001e032;
    }
    puVar2 = puVar3;
  } while (puVar3 != (uint *)(param_2 + 0xb4));
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),8,0);
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),6,*(undefined4 *)(param_1 + 0xcc));
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),4,*(undefined4 *)(param_1 + 0xc4));
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),5,*(undefined4 *)(param_1 + 200),param_4);
  return;
}



/* ===== FUN_0001e086 @ 0001e086 size=156 ===== */

void FUN_0001e086(int param_1,int param_2)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    FUN_0001dd12(param_1,0,0,0,0,0,0,0,0);
    FUN_0001dd12(param_1,0,0,1,0,0,0,0,0);
    FUN_0001dd12(param_1,0,0,2,0,0,0,0,0);
    FUN_0001dd12(param_1,0,0,3,0,0,0,0,0);
    if (param_2 != 0) {
      FUN_0001dd12(param_1,0,param_2,0,0,0,0,0,0);
      pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x54);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),param_2,0,1);
      }
    }
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  return;
}



/* ===== FUN_0001e122 @ 0001e122 size=60 ===== */

void FUN_0001e122(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0001e086();
  FUN_0001f960(param_1);
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_00016898(*(undefined4 *)(param_1 + 0x108));
  if (*(int *)(param_1 + 0xb4) != iVar1) {
    FUN_0001332c(param_1);
  }
  FUN_00014758(DAT_0001e160,param_1,0,param_4);
  return;
}



/* ===== FUN_0001e164 @ 0001e164 size=14 ===== */

undefined4 FUN_0001e164(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0001e178;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(DAT_0001e174 + param_1 * 4);
  }
  return uVar1;
}



/* ===== FUN_0001e17c @ 0001e17c size=288 ===== */

int FUN_0001e17c(int param_1,int param_2)

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
    iVar1 = FUN_00020b2c(param_1,0);
    if (param_2 == 9) {
      if (*(int *)(param_1 + 0x11c) != 0) {
        iVar1 = *(int *)(param_1 + 0xb4);
        uVar2 = DAT_0001e2a8;
        if (*(int *)(param_1 + 0x120) == 0) {
          uVar2 = DAT_0001e29c;
        }
        if (iVar1 == 0) {
          uVar6 = 0xffffffff;
          iVar3 = DAT_0001e2a4;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 8);
          iVar3 = *(int *)(iVar1 + 0xcc);
          if (*(int *)(iVar1 + 0xcc) == 0) {
            iVar3 = DAT_0001e2a4;
          }
        }
        iVar1 = FUN_00013f10(param_1,3,DAT_0001e2a0,*(undefined1 *)(param_1 + 0xa0),
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
        *(undefined4 *)(param_1 + 0x2e0) = 0;
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
     ((iVar1 = thunk_FUN_0001c79e(param_1,param_2,iVar5), *(int *)(param_1 + 0x114) == 9 ||
      (iVar5 == 9)))) {
    return param_1;
  }
  return iVar1;
}



/* ===== FUN_0001e2ac @ 0001e2ac size=4 ===== */

void FUN_0001e2ac(void)

{
  *(undefined4 *)(DAT_000149f4 + 0x40) = 1;
  return;
}



/* ===== FUN_0001e2b0 @ 0001e2b0 size=36 ===== */

void FUN_0001e2b0(int param_1)

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
    thunk_FUN_0001c79e();
    return;
  }
  return;
}



/* ===== FUN_0001e2d4 @ 0001e2d4 size=18 ===== */

undefined1 FUN_0001e2d4(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 - 1U < 0x10) {
    uVar1 = *(undefined1 *)(DAT_0001e2e8 + (param_1 - 1U) + 0x28);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* ===== FUN_0001e2ec @ 0001e2ec size=88 ===== */

uint FUN_0001e2ec(uint param_1)

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



/* ===== FUN_0001e344 @ 0001e344 size=600 ===== */

undefined4 FUN_0001e344(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

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
    iVar1 = FUN_00016b1c(*(undefined4 *)(param_1 + 0x108),&local_40);
    if (iVar1 == 0) {
      uVar4 = *(uint *)(param_3 + 0x50);
      uVar6 = DAT_0001e5a4;
      uVar5 = local_38;
      if ((((local_38 & uVar4) != 0) &&
          (uVar4 = *(uint *)(param_3 + 0x4c), uVar6 = DAT_0001e5a8, uVar5 = uStack_3c,
          (uStack_3c & uVar4) != 0)) &&
         (uVar4 = *(uint *)(param_3 + 0x54), uVar6 = DAT_0001e5ac, uVar5 = local_34,
         (local_34 & uVar4) != 0)) {
        iVar1 = 0;
        iVar2 = 0;
        uVar7 = local_40;
        goto LAB_0001e406;
      }
      FUN_00013f10(param_1,3,uVar6,uVar5,uVar4);
    }
    else if (iVar1 == -2) {
      FUN_00013f10(param_1,3,DAT_0001e5c0);
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
    iVar1 = FUN_00013784(param_2,DAT_0001e59c);
    iVar2 = FUN_0001375a(param_2,0x30);
    if ((((iVar2 == 0) || (-1 < *(int *)(param_3 + 0x58) << 0x1e)) ||
        ((iVar3 = FUN_00017a6c(iVar2,*(byte *)(iVar2 + 1) + 2,&local_40), iVar3 != 0 ||
         (((local_38 & *(uint *)(param_3 + 0x50)) == 0 ||
          ((uStack_3c & *(uint *)(param_3 + 0x4c)) == 0)))))) ||
       ((local_34 & *(uint *)(param_3 + 0x54)) == 0)) {
      uVar6 = DAT_0001e5a0;
      if (((((iVar1 == 0) || (uVar7 = *(uint *)(param_3 + 0x58) & 1, uVar7 == 0)) ||
           (iVar3 = FUN_00017a6c(iVar1,*(byte *)(iVar1 + 1) + 2,&local_40), uVar6 = DAT_0001e5a0,
           iVar3 != 0)) ||
          (((local_38 & *(uint *)(param_3 + 0x50)) == 0 ||
           ((uStack_3c & *(uint *)(param_3 + 0x4c)) == 0)))) ||
         ((local_34 & *(uint *)(param_3 + 0x54)) == 0)) goto LAB_0001e4f8;
    }
    else {
      uVar7 = 2;
    }
  }
LAB_0001e406:
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),3,uVar7);
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),8,(*(uint *)(param_3 + 0x58) & 3) >> 1);
  if ((param_2 != 0) || (*(int *)(param_1 + 0xbc) == 0)) {
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(byte *)(iVar1 + 1) + 2;
    }
    iVar1 = FUN_00016a90(*(undefined4 *)(param_1 + 0x108),iVar1,iVar3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(byte *)(iVar2 + 1) + 2;
    }
    iVar1 = FUN_00016ad6(*(undefined4 *)(param_1 + 0x108),iVar2,iVar1);
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
    uVar6 = DAT_0001e5b4;
    if (-1 < (int)(uVar7 << 0x1e)) goto LAB_0001e4f8;
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
    uVar6 = DAT_0001e5b8;
    if (-1 < (int)(uVar7 << 0x1f)) goto LAB_0001e4f8;
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
    uVar6 = DAT_0001e5bc;
    if (-1 < (int)(uVar7 << 0x1b)) goto LAB_0001e4f8;
    uVar6 = 0x10;
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),6,*(undefined4 *)(param_1 + 0xcc));
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),4,*(undefined4 *)(param_1 + 0xc4));
  FUN_0001691a(*(undefined4 *)(param_1 + 0x108),5,*(undefined4 *)(param_1 + 200));
  iVar1 = FUN_00016a10(*(undefined4 *)(param_1 + 0x108),param_4,param_5);
  uVar6 = DAT_0001e5b0;
  if (iVar1 == 0) {
    if ((*(uint *)(param_3 + 0x54) & 0x142) == 0) {
      FUN_00015b34(*(undefined4 *)(param_1 + 0x108));
      return 0;
    }
    FUN_00015b1e(*(undefined4 *)(param_1 + 0x108),param_3 + 0x24,0x20);
    return 0;
  }
LAB_0001e4f8:
  FUN_00013f10(param_1,4,uVar6);
  return 0xffffffff;
}



/* ===== FUN_0001e5c4 @ 0001e5c4 size=56 ===== */

void FUN_0001e5c4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1 + 0xa0;
  uVar3 = FUN_0001dcf4(iVar2);
  if ((int)uVar3 == 0) {
    if ((-1 < *(int *)(param_1 + 0x150) << 0x1d) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),iVar2,(int)((ulonglong)uVar3 >> 0x20));
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_0001e122(param_1,iVar2);
  return;
}



/* ===== FUN_0001e66c @ 0001e66c size=56 ===== */

void FUN_0001e66c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1 + 0xa0;
  uVar3 = FUN_0001dcf4(iVar2);
  if ((int)uVar3 == 0) {
    if ((-1 < *(int *)(param_1 + 0x150) << 0x1d) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x24), pcVar1 != (code *)0x0)) {
      (*pcVar1)(*(undefined4 *)(param_1 + 0xd4),iVar2,(int)((ulonglong)uVar3 >> 0x20));
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_0001e122(param_1,iVar2);
  return;
}



/* ===== FUN_0001e6a4 @ 0001e6a4 size=252 ===== */

void FUN_0001e6a4(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_0001e66c(param_1,3);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 0xd4),0);
    }
    FUN_0001e086(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_00016890(*(undefined4 *)(param_1 + 0x108),0);
  FUN_0002756c(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0002756c();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_0001bd94();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 0x94); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1)
    {
      FUN_00013348(param_1,piVar1);
    }
    FUN_00013176(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  free(*(void **)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00016912(*(undefined4 *)(param_1 + 0x108),0);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  FUN_00015a62(*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_0002071c(param_1);
  FUN_000136fa(param_1);
  FUN_00020b1c(param_1);
  FUN_0001dfbc(param_1);
  FUN_000140c0(*(undefined4 *)(param_1 + 0x17c));
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_0001c810(param_1);
  free(*(void **)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_2 != 0) {
    FUN_00013326(param_1);
  }
  if ((*(int *)(param_1 + 0xd4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x100) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== FUN_0001e7a0 @ 0001e7a0 size=132 ===== */

void FUN_0001e7a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
          FUN_00013334(param_1,piVar2);
        }
      }
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_00020ac8(param_1,0,0,param_4);
      return;
    }
  }
  else if ((*(uint *)(param_2 + 0xc4) & 0xfffffffd) != 0) {
    if (*(int *)(param_1 + 0xb4) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
      FUN_00020ac8(param_1,0);
    }
    iVar1 = *(int *)(param_2 + 0xc4);
    *(undefined4 *)(param_2 + 0xc4) = 0;
    if (iVar1 != 0) {
      FUN_00013334(param_1,param_2,0,param_4);
      return;
    }
  }
  return;
}



/* ===== FUN_0001e824 @ 0001e824 size=114 ===== */

void FUN_0001e824(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    for (piVar2 = (int *)**(int **)(param_1 + 0x94); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
    {
      iVar1 = piVar2[0x31];
      if ((iVar1 != 2) && (piVar2[0x31] = 1, iVar1 != 1)) {
        FUN_00013334(param_1,piVar2);
      }
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_0001e5c4(param_1,3);
      return;
    }
  }
  else if (*(int *)(param_2 + 0xc4) != 2) {
    if (*(int *)(param_1 + 0xb4) == param_2) {
      FUN_0001e5c4(param_1,3);
    }
    iVar1 = *(int *)(param_2 + 0xc4);
    *(undefined4 *)(param_2 + 0xc4) = 1;
    if (iVar1 != 1) {
      FUN_00013334(param_1,param_2);
      return;
    }
  }
  return;
}



/* ===== FUN_0001e896 @ 0001e896 size=110 ===== */

undefined8 FUN_0001e896(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    FUN_0001e5c4(param_1,3);
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
        FUN_00013334(param_1,piVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 1;
  uVar4 = FUN_00020ac8(param_1,0,0);
  if (param_2 != 0) {
    return CONCAT44(param_2,param_1);
  }
  return uVar4;
}



/* ===== FUN_0001e902 @ 0001e902 size=32 ===== */

undefined4 FUN_0001e902(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 < 3) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x94) + 0x10);
    *(uint *)(*(int *)(param_1 + 0x94) + 0x10) = param_2;
    if (param_2 != uVar2) {
      FUN_0001332e();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001e922 @ 0001e922 size=46 ===== */

undefined4 FUN_0001e922(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 10) {
    FUN_00013f10(param_1,5,DAT_0001e950,param_2,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00013f10(param_1,2,DAT_0001e954,param_2,param_4);
    uVar1 = 0;
    *(uint *)(*(int *)(param_1 + 0x94) + 0x100) = param_2;
  }
  return uVar1;
}



/* ===== FUN_0001e958 @ 0001e958 size=44 ===== */

undefined4 FUN_0001e958(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00013f10(param_1,5,DAT_0001e984,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00013f10(param_1,2,DAT_0001e988,param_2,param_4);
    uVar1 = 0;
    *(int *)(*(int *)(param_1 + 0x94) + 0x104) = param_2;
  }
  return uVar1;
}



/* ===== FUN_0001e9f4 @ 0001e9f4 size=184 ===== */

int FUN_0001e9f4(int param_1)

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
  
  uVar2 = DAT_0001eaac;
  if (((*(int *)(param_1 + 0x150) << 0x1d < 0) ||
      (pcVar3 = *(code **)(*(int *)(param_1 + 0x100) + 0xc), uVar2 = DAT_0001eab0,
      pcVar3 == (code *)0x0)) ||
     (__n = (*pcVar3)(*(undefined4 *)(param_1 + 0xd4),auStack_30), uVar2 = DAT_0001eab0,
     (int)__n < 0)) {
LAB_0001ea06:
    FUN_00013f10(param_1,4,uVar2);
    piVar4 = (int *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x150) << 0x1d < 0) {
      local_38 = *(undefined4 *)(param_1 + 0xa0);
      local_34 = *(undefined2 *)(param_1 + 0xa4);
    }
    else {
      pcVar3 = *(code **)(*(int *)(param_1 + 0x100) + 8);
      uVar2 = DAT_0001eab4;
      if ((pcVar3 == (code *)0x0) ||
         (iVar1 = (*pcVar3)(*(undefined4 *)(param_1 + 0xd4),&local_38), uVar2 = DAT_0001eab4,
         iVar1 < 0)) goto LAB_0001ea06;
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



/* ===== FUN_0001eab8 @ 0001eab8 size=240 ===== */

undefined4 FUN_0001eab8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  if ((*(int *)(*(int *)(param_1 + 0x100) + 0x4c) == 0) &&
     ((*(uint *)(param_1 + 0x150) & 0x400) == 0)) {
    uVar4 = FUN_0001dd50();
    iVar3 = FUN_00027484(param_1 + 0x1a,uVar4,0x888e,DAT_0001ebac,param_1,0);
    *(int *)(param_1 + 0xc) = iVar3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_0001dd50();
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = *puVar2;
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(puVar2 + 1);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar3 = FUN_00027414(*(int *)(param_1 + 0xc),param_1 + 0x14), iVar3 != 0)) {
    FUN_00013f10(param_1,5,DAT_0001eba8);
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x7e) != '\0') {
    iVar3 = FUN_00027484(param_1 + 0x7e,param_1 + 0x14,0x888e,DAT_0001ebac,param_1,0,param_3);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      FUN_00013f10(param_1,5,DAT_0001ebb0,param_1 + 0x7e);
      return 0xffffffff;
    }
  }
  FUN_0001e086(param_1,0);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x100) + 0x20);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(*(undefined4 *)(param_1 + 0xd4),0);
  }
  pcVar5 = *(code **)(*(int *)(param_1 + 0x100) + 0x38);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(*(undefined4 *)(param_1 + 0xd4));
  }
  *(undefined4 *)(param_1 + 0xdc) = 1;
  iVar3 = FUN_00020ab4(*(undefined4 *)(param_1 + 0x94));
  piVar1 = DAT_0001ebb4;
  if (iVar3 == 0) {
    FUN_0001e17c(param_1,2);
    return 0;
  }
  FUN_00020ac8(param_1,*DAT_0001ebb4,DAT_0001ebb8);
  *piVar1 = *piVar1 + 1;
  return 0;
}



/* ===== FUN_0001ebbc @ 0001ebbc size=880 ===== */

int * FUN_0001ebbc(int *param_1,int *param_2)

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
  __ptr = (int *)FUN_0001449c(0x2fc);
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
    iVar1 = FUN_0001324a(pcVar2,pcVar13);
    __ptr[0x25] = iVar1;
    if (iVar1 == 0) goto LAB_0001ecbe;
  }
  else {
    iVar1 = FUN_0001437c();
    __ptr[0x24] = iVar1;
    if (iVar1 == 0) goto LAB_0001ecbe;
    iVar1 = FUN_00014b78();
    __ptr[0x25] = iVar1;
    if (iVar1 == 0) goto LAB_0001ecbe;
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
    FUN_000144a4(pcVar2,pcVar12,100);
    if (pcVar10 != (char *)0x0) {
      sVar3 = strlen(pcVar10);
      if (0xf < sVar3) goto LAB_0001ecbe;
      FUN_000144a4((int)__ptr + 0x7e,pcVar10,0x10);
    }
    while (uVar6 = DAT_0001ef30, *DAT_0001ef2c != 0) {
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
          local_54 = DAT_0001ef2c;
          while( true ) {
            puVar8 = (undefined4 *)*local_54;
            if (puVar8 == (undefined4 *)0x0) break;
            pcVar13 = (char *)*puVar8;
            sVar4 = strlen(pcVar13);
            if ((sVar4 == sVar3) && (iVar5 = strncmp(pcVar10,pcVar13,sVar3), iVar5 == 0)) {
              __ptr[0x40] = (int)puVar8;
              iVar1 = *(int *)(*(int *)(*__ptr + 0x3c) + iVar1 * 4);
              goto LAB_0001ecda;
            }
            iVar1 = iVar1 + 1;
            local_54 = local_54 + 1;
          }
          uVar6 = DAT_0001ef38;
          pcVar10 = pcVar12 + 1;
        } while (pcVar12 != (char *)0x0);
LAB_0001ed50:
        FUN_00013f10(__ptr,5,uVar6,pcVar7);
        goto LAB_0001ecbe;
      }
      __ptr[0x40] = *DAT_0001ef2c;
      iVar1 = **(int **)(*__ptr + 0x3c);
LAB_0001ecda:
      __ptr[0x36] = iVar1;
      pcVar11 = *(code **)(__ptr[0x40] + 0x8c);
      if (pcVar11 == (code *)0x0) {
        pcVar11 = *(code **)(__ptr[0x40] + 0x14);
        if (pcVar11 != (code *)0x0) {
          iVar1 = (*pcVar11)(__ptr,pcVar2);
          goto LAB_0001ecf6;
        }
        __ptr[0x35] = 0;
      }
      else {
        iVar1 = (*pcVar11)(__ptr,pcVar2,__ptr[0x36]);
LAB_0001ecf6:
        __ptr[0x35] = iVar1;
        if (iVar1 != 0) {
          if ((*(code **)(__ptr[0x40] + 0x1c) != (code *)0x0) &&
             (iVar1 = (**(code **)(__ptr[0x40] + 0x1c))(iVar1,*(undefined4 *)(__ptr[0x25] + 0x2c)),
             iVar1 < 0)) {
            pcVar7 = *(char **)(__ptr[0x25] + 0x2c);
            uVar6 = DAT_0001ef34;
            goto LAB_0001ed50;
          }
          if (((*(code **)(__ptr[0x40] + 0x44) != (code *)0x0) &&
              (pcVar10 = (char *)(**(code **)(__ptr[0x40] + 0x44))(__ptr[0x35]),
              pcVar10 != (char *)0x0)) && (iVar1 = strcmp(pcVar10,pcVar2), iVar1 != 0)) {
            FUN_000144a4(pcVar2,pcVar10,100);
          }
          iVar1 = FUN_000209a2(__ptr);
          if (iVar1 < 0) goto LAB_0001ecbe;
          iVar1 = 0;
          if (*(char *)((int)__ptr + 0x7e) != '\0') {
            iVar1 = (int)__ptr + 0x7e;
          }
          FUN_0001690a(__ptr[0x42],pcVar2,iVar1);
          FUN_00016888(__ptr[0x42],*(undefined4 *)(__ptr[0x25] + 0x1c));
          if ((((*(int *)(__ptr[0x25] + 0x30) == 0) ||
               (iVar1 = FUN_0001691a(__ptr[0x42],0), uVar6 = DAT_0001ef40, iVar1 == 0)) &&
              ((*(int *)(__ptr[0x25] + 0x34) == 0 ||
               (iVar1 = FUN_0001691a(__ptr[0x42],1), uVar6 = DAT_0001ef44, iVar1 == 0)))) &&
             ((*(int *)(__ptr[0x25] + 0x38) == 0 ||
              (iVar1 = FUN_0001691a(__ptr[0x42],2), uVar6 = DAT_0001ef48, iVar1 == 0)))) {
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
            iVar1 = FUN_0001eab8(__ptr);
            if ((iVar1 < 0) ||
               ((((iVar1 = __ptr[0x25], *(char *)(iVar1 + 0x7c) != '\0' &&
                  (*(char *)(iVar1 + 0x7d) != '\0')) &&
                 (*(code **)(__ptr[0x40] + 0x80) != (code *)0x0)) &&
                (iVar1 = (**(code **)(__ptr[0x40] + 0x80))(__ptr[0x35],iVar1 + 0x7c), iVar1 != 0))))
            goto LAB_0001ecbe;
            FUN_000168fa(__ptr[0x42],__ptr + 5);
            iVar1 = FUN_0002099e(__ptr);
            if (iVar1 < 0) goto LAB_0001ecbe;
            FUN_00016912(__ptr[0x42],__ptr[0x43]);
            iVar1 = FUN_0001bb78(__ptr);
            __ptr[0x44] = iVar1;
            if ((iVar1 == 0) || (iVar1 = FUN_000136a0(__ptr), iVar1 < 0)) goto LAB_0001ecbe;
            iVar1 = FUN_00013322(__ptr);
            if (iVar1 == 0) {
              for (piVar9 = *(int **)__ptr[0x25]; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
                FUN_00013346(__ptr,piVar9);
              }
              __ptr[2] = *param_1;
              *param_1 = (int)__ptr;
              return __ptr;
            }
            uVar6 = 1;
            goto LAB_0001ecc0;
          }
          break;
        }
      }
      uVar6 = DAT_0001ef3c;
      if ((pcVar7 == (char *)0x0) ||
         (pcVar7 = strchr(pcVar7,0x2c), uVar6 = DAT_0001ef3c, pcVar7 == (char *)0x0)) break;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00013f10(__ptr,5,uVar6);
  }
LAB_0001ecbe:
  uVar6 = 0;
LAB_0001ecc0:
  FUN_0001e6a4(__ptr,uVar6);
  free(__ptr);
  return (int *)0x0;
}



/* ===== FUN_0001ef4c @ 0001ef4c size=64 ===== */

undefined4 FUN_0001ef4c(undefined4 *param_1,void *param_2)

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
  FUN_0001e6a4(param_2,1);
  free(param_2);
  return 0;
}



/* ===== FUN_0001efac @ 0001efac size=30 ===== */

int FUN_0001efac(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while ((iVar2 != 0 && (iVar1 = strcmp((char *)(iVar2 + 0x1a),param_2), iVar1 != 0))) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2;
}



/* ===== FUN_0001efca @ 0001efca size=72 ===== */

undefined4 FUN_0001efca(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1[1] == 0) || (iVar2 = FUN_000142d4(param_1[3]), iVar2 == 0)) {
    if (param_1[2] != 0) {
      for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (*(int *)(iVar2 + 0x110) != 0) {
          FUN_0001be50();
        }
      }
    }
    FUN_00014820(DAT_0001f014,param_1);
    FUN_00014842(DAT_0001f018,param_1);
    FUN_0001484c();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001f01c @ 0001f01c size=116 ===== */

void FUN_0001f01c(int *param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  while (*param_1 != 0) {
    FUN_0001ef4c(param_1);
  }
  if (param_1[0xd] != 0) {
    FUN_0001bfbc();
  }
  piVar2 = DAT_0001f090;
  FUN_00013320(param_1);
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
  thunk_FUN_00019a30();
  FUN_000149f8();
  if (param_1[3] != 0) {
    FUN_00014328();
    free((void *)param_1[3]);
  }
  free((void *)param_1[7]);
  free((void *)param_1[0xb]);
  free((void *)param_1[0xc]);
  free(param_1);
  return;
}



/* ===== FUN_0001f094 @ 0001f094 size=238 ===== */

int FUN_0001f094(undefined4 *param_1)

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
    FUN_00013f04(DAT_0001f184);
    iVar2 = FUN_00013cbc();
    if ((iVar2 == 0) && (iVar2 = FUN_0001449c(0x74), iVar2 != 0)) {
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
      puVar1 = DAT_0001f188;
      uVar6 = param_1[3];
      *(undefined4 *)(iVar2 + 0x10) = uVar6;
      *puVar1 = uVar6;
      puVar1 = DAT_0001f18c;
      uVar6 = param_1[4];
      *(undefined4 *)(iVar2 + 0x14) = uVar6;
      *puVar1 = uVar6;
      puVar1 = DAT_0001f190;
      uVar6 = param_1[5];
      *(undefined4 *)(iVar2 + 0x18) = uVar6;
      *puVar1 = uVar6;
      iVar4 = FUN_000145bc();
      if (iVar4 == 0) {
        FUN_00019c28();
        iVar4 = FUN_0001bef0(iVar2);
        *(int *)(iVar2 + 0x34) = iVar4;
        if ((iVar4 != 0) &&
           (iVar4 = FUN_0001331c(iVar2), piVar9 = DAT_0001f194, piVar7 = DAT_0001f194, iVar4 == 0))
        {
          while( true ) {
            iVar4 = *(int *)(iVar2 + 0x40);
            if (*piVar7 == 0) break;
            *(int *)(iVar2 + 0x40) = iVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          if (iVar4 != 0) {
            iVar5 = FUN_0001449c(iVar4 << 2);
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
      FUN_0001f01c(iVar2);
    }
  }
  return 0;
}



/* ===== FUN_0001f198 @ 0001f198 size=74 ===== */

void FUN_0001f198(int param_1,undefined4 param_2)

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



/* ===== FUN_0001f1e2 @ 0001f1e2 size=232 ===== */

undefined4 FUN_0001f1e2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar2 = FUN_00014b78();
  if (iVar2 == 0) {
    FUN_00013f10(param_1,5,DAT_0001f2cc,*(undefined4 *)(param_1 + 0x90));
    return 0xffffffff;
  }
  *(undefined4 *)(iVar2 + 0x110) = 0xffffffff;
  __s1 = *(char **)(iVar2 + 0x14);
  __s2 = *(char **)(*(int *)(param_1 + 0x94) + 0x14);
  if ((__s1 != (char *)0x0) == (__s2 != (char *)0x0)) {
    if (__s1 == (char *)0x0) {
      bVar1 = false;
      goto LAB_0001f24c;
    }
    if (__s2 == (char *)0x0) {
      bVar1 = false;
      goto LAB_0001f24c;
    }
    iVar3 = strcmp(__s1,__s2);
    bVar1 = false;
    if (iVar3 == 0) goto LAB_0001f24c;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_0001bd94();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  bVar1 = true;
LAB_0001f24c:
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar4 = 0;
  if (iVar3 != 0) {
    FUN_0001332c(param_1);
    uVar5 = extraout_r2;
    uVar4 = extraout_r3;
  }
  FUN_00016898(*(undefined4 *)(param_1 + 0x108),0,uVar5,uVar4,param_4);
  FUN_00016888(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x1c));
  iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0x10);
  FUN_00013176();
  iVar3 = *(int *)(iVar2 + 0x10);
  *(int *)(param_1 + 0x94) = iVar2;
  if (iVar3 != iVar6) {
    FUN_0001332e(param_1);
  }
  if (bVar1) {
    uVar4 = FUN_0001bb78(param_1);
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  FUN_0001f198(param_1);
  FUN_0001e2b0(param_1);
  iVar2 = FUN_00020ab4(*(undefined4 *)(param_1 + 0x94));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 1;
    FUN_00020ac8(param_1,0);
    return 0;
  }
  return 0;
}



/* ===== FUN_0001f2d0 @ 0001f2d0 size=26 ===== */

void FUN_0001f2d0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = *param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = FUN_0001f1e2(iVar2);
    if (iVar1 < 0) {
      FUN_000149ec();
    }
  }
  return;
}



/* ===== FUN_0001f2ea @ 0001f2ea size=48 ===== */

void FUN_0001f2ea(void *param_1,int param_2)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    for (pvVar1 = param_1; pvVar1 != (void *)(param_2 * 0x28 + (int)param_1);
        pvVar1 = (void *)((int)pvVar1 + 0x28)) {
      free(*(void **)((int)pvVar1 + 8));
      free(*(void **)((int)pvVar1 + 0x10));
    }
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001f31a @ 0001f31a size=216 ===== */

void FUN_0001f31a(int param_1,undefined4 param_2)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  int extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_0002069c();
  if (((iVar1 == 1) && (*(int *)(param_1 + 0xb8) != 0)) &&
     (__ptr = (void *)FUN_0001449c(0x2c), __ptr != (void *)0x0)) {
    puVar6 = *(undefined4 **)(param_1 + 0xb8);
    iVar4 = 0;
    for (puVar3 = *(undefined4 **)(param_1 + 0xe4); puVar3 != (undefined4 *)(param_1 + 0xe4);
        puVar3 = (undefined4 *)*puVar3) {
      if (((puVar6 != puVar3) && (puVar3[0x12] == puVar6[0x12])) &&
         ((iVar2 = memcmp((void *)((int)puVar3 + 0x26),(void *)((int)puVar6 + 0x26),puVar3[0x12]),
          iVar2 == 0 && (iVar2 = FUN_0002067c(param_1,puVar3 + 8), iVar2 == 0)))) {
        for (iVar2 = 0; iVar2 != iVar4; iVar2 = iVar2 + 1) {
          if (puVar3[0x13] == *(int *)((int)__ptr + iVar2 * 4)) goto LAB_0001f3c8;
        }
        *(undefined4 *)((int)__ptr + iVar4 * 4) = puVar3[0x13];
        iVar4 = iVar4 + 1;
LAB_0001f3c8:
        if (iVar4 == 10) goto LAB_0001f3dc;
      }
    }
    if (iVar4 == 0) {
      free(__ptr);
    }
    else {
LAB_0001f3dc:
      FUN_0002069c(param_1,param_2);
      free(*(void **)(param_1 + 0x144));
      *(void **)(param_1 + 0x144) = __ptr;
    }
  }
  if (iVar1 - 1U < 3) {
    uVar5 = (uint)*(short *)(DAT_0001f3f4 + (iVar1 - 1U) * 2 + 0x38);
  }
  else {
    uVar5 = 5000;
  }
  FUN_00034bac(uVar5,1000);
  FUN_00020ac8(param_1,(uint)((ulonglong)uVar5 * (ulonglong)DAT_0001f3f8 >> 0x26),extraout_r1 * 1000
              );
  return;
}



/* ===== FUN_0001f3fc @ 0001f3fc size=936 ===== */

void FUN_0001f3fc(int param_1,int param_2,int param_3)

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
    uVar9 = DAT_0001f720;
    goto LAB_0001f416;
  }
  if ((*(int *)(param_1 + 0x150) << 0x1a < 0) && (*(int *)(param_3 + 0xc0) == 0)) {
    FUN_0001c2a0();
    return;
  }
  memset(&local_16c,0,0x7c);
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    uVar9 = FUN_00013ebc(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14));
    FUN_00013f10(param_1,3,DAT_0001f730,uVar9);
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
    uVar9 = FUN_00013ebc(param_2 + 0x26,*(undefined4 *)(param_2 + 0x48));
    FUN_00013f10(param_1,3,DAT_0001f724,uVar1,uVar4,uVar5,uVar6,uVar3,uVar2,uVar9,
                 *(undefined4 *)(param_2 + 0x4c));
    iVar10 = FUN_0001dcf4(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_2 + 0x24);
    if (iVar10 == 0) {
      FUN_00013330(param_1);
    }
  }
  FUN_00020b1c(param_1);
  FUN_00016a4e(*(undefined4 *)(param_1 + 0x108),0);
  iVar10 = *(int *)(param_3 + 0x5c);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  if ((param_2 == 0) ||
     (((iVar11 = FUN_00013784(param_2,DAT_0001f728), iVar11 == 0 &&
       (iVar11 = FUN_0001375a(param_2,0x30), iVar11 == 0)) ||
      ((*(uint *)(param_3 + 0x54) & 0x1e3) == 0)))) {
    if ((*(uint *)(param_3 + 0x54) & 499) == 0) {
      FUN_0001dfde(param_1,param_3);
      local_18c = 0;
    }
    else {
      local_18c = 200;
      iVar11 = FUN_0001e344(param_1,0,param_3,auStack_f0,&local_18c);
      uVar9 = DAT_0001f734;
      if (iVar11 != 0) goto LAB_0001f6fe;
    }
    if (param_2 != 0) goto LAB_0001f516;
    iVar11 = 0;
  }
  else {
    local_18c = 200;
    iVar11 = FUN_0001e344(param_1,param_2,param_3,auStack_f0,&local_18c);
    uVar9 = DAT_0001f738;
    if (iVar11 != 0) {
LAB_0001f6fe:
      uVar12 = 4;
LAB_0001f416:
      FUN_00013f10(param_1,uVar12,uVar9);
      return;
    }
LAB_0001f516:
    iVar11 = param_2 + 0x20;
  }
  FUN_0001e086(param_1,iVar11);
  uVar9 = FUN_0001e2d4(*(undefined4 *)(param_1 + 0xc4));
  uVar12 = FUN_0001e2d4(*(undefined4 *)(param_1 + 200));
  if (*(int *)(param_1 + 0xcc) == 4) {
    uVar18 = 0;
LAB_0001f548:
    iVar11 = FUN_0001de48(param_1,param_3);
    bVar7 = false;
    if (iVar11 != 0) {
      uVar18 = 1;
      bVar7 = true;
    }
  }
  else {
    if (*(int *)(param_1 + 0xcc) == 8) {
      uVar18 = 1;
      goto LAB_0001f548;
    }
    bVar7 = false;
    uVar18 = 1;
  }
  if (*(int *)(param_1 + 0xcc) == 0x200) {
    uVar18 = 0;
  }
  else if (*(int *)(param_1 + 0xcc) == 0x10) {
    FUN_0001dd90(param_1,param_3);
  }
  FUN_0001e17c(param_1,5);
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
  local_14c = FUN_0001e2ec(*(undefined4 *)(param_1 + 0xcc));
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
    if (-1 < iVar10) goto LAB_0001f644;
  }
  FUN_00013f10(param_1,3,DAT_0001f72c);
  if (*(int *)(param_1 + 0x150) << 0x11 < 0) {
    FUN_0001f31a(param_1,param_1 + 0xa6);
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
    return;
  }
  bVar8 = true;
LAB_0001f644:
  if (*(int *)(param_1 + 0xcc) == 0x10) {
    FUN_0001dd90(param_1,param_3);
    FUN_0001dfbc(param_1);
    FUN_0001e17c(param_1,9);
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
    FUN_0001de98(param_1,uVar9,0);
  }
  if ((((bVar7) && (pcVar16 = *(code **)(*(int *)(param_1 + 0x100) + 0x3c), pcVar16 != (code *)0x0))
      && (iVar10 = (*pcVar16)(*(undefined4 *)(param_1 + 0xd4),auStack_188), iVar10 == 0)) &&
     (local_17c << 0x1e < 0)) {
    FUN_0001de48(param_1,param_3);
  }
  iVar10 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb4) = param_3;
  *(int *)(param_1 + 0xb8) = param_2;
  FUN_00020a4c(param_1,param_3);
  if (iVar10 != *(int *)(param_1 + 0xb4)) {
    FUN_0001332c(param_1);
  }
  return;
}



/* ===== FUN_0001f7c0 @ 0001f7c0 size=308 ===== */

undefined4 FUN_0001f7c0(int param_1,int param_2)

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
  
  pvVar1 = DAT_0001f8f4;
  pcVar4 = *(char **)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
LAB_0001f7d2:
  if ((pcVar4 == (char *)0x0) || (iVar6 < 2)) goto LAB_0001f7e2;
  uVar3 = (uint)(byte)pcVar4[1];
  iVar8 = uVar3 + 2;
  if (iVar6 < iVar8) goto LAB_0001f7e2;
  if (*pcVar4 != -0x23) {
    if ((*pcVar4 == '0') && (1 < uVar3)) goto LAB_0001f842;
LAB_0001f866:
    iVar6 = iVar6 - iVar8;
    pcVar4 = pcVar4 + iVar8;
    goto LAB_0001f7d2;
  }
  if ((uVar3 < 6) || (iVar2 = memcmp(pcVar4 + 2,pvVar1,6), iVar2 != 0)) goto LAB_0001f866;
LAB_0001f842:
  iVar6 = FUN_00016a4e(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
  if (iVar6 == 0) {
    FUN_00016b1c(*(undefined4 *)(param_1 + 0x108),auStack_48);
    goto LAB_0001f7e8;
  }
LAB_0001f7e2:
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00016a4e(*(undefined4 *)(param_1 + 0x108),0);
  }
LAB_0001f7e8:
  pvVar1 = DAT_0001f8f4;
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
      FUN_00016a90(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
    }
    if (((!bVar5) && (*pcVar4 == '0')) && (1 < (byte)pcVar4[1])) {
      bVar5 = true;
      FUN_00016ad6(*(undefined4 *)(param_1 + 0x108),pcVar4,iVar8);
    }
    pcVar4 = pcVar4 + iVar8;
  }
  if (bVar7) {
LAB_0001f814:
    if (!bVar5) {
      bVar5 = bVar7;
      if (*(int *)(param_2 + 0x14) != 0) {
        FUN_00016ad6(*(undefined4 *)(param_1 + 0x108),0,0);
      }
      goto joined_r0x0001f8ea;
    }
  }
  else {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_00016a90(*(undefined4 *)(param_1 + 0x108),0,0);
      goto LAB_0001f814;
    }
joined_r0x0001f8ea:
    if (!bVar5) goto LAB_0001f81e;
  }
  *(undefined4 *)(param_1 + 0xbc) = 1;
LAB_0001f81e:
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}



/* ===== FUN_0001f8f8 @ 0001f8f8 size=42 ===== */

void FUN_0001f8f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00020ab4(*(undefined4 *)(param_1 + 0x94));
  if (iVar1 == 0) {
    FUN_0001e17c(param_1,2);
    return;
  }
  FUN_00020ac8(param_1,param_2,0,param_4);
  return;
}



/* ===== FUN_0001f960 @ 0001f960 size=94 ===== */

void FUN_0001f960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x114) != 1) {
    FUN_0001e17c(param_1,0,param_3,*(int *)(param_1 + 0x114),param_4);
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
      FUN_00013330(param_1);
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}



/* ===== FUN_0001f9c2 @ 0001f9c2 size=272 ===== */

void FUN_0001f9c2(int param_1,int param_2,undefined4 param_3)

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
  uVar20 = FUN_0001e164(*(undefined4 *)(param_1 + 0x114));
  FUN_00013f10(param_1,2,DAT_0001fad4,iVar21,uVar1,uVar4,uVar5,uVar8,uVar11,uVar12,uVar13,uVar6,
               uVar14,uVar7,uVar9,uVar15,uVar16,uVar17,uVar10,uVar18,uVar2,uVar3,uVar20);
  FUN_0001f3fc(param_1,param_2,param_3);
  return;
}



/* ===== FUN_0001fad8 @ 0001fad8 size=1118 ===== */

undefined4 FUN_0001fad8(int param_1,undefined4 param_2)

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
  
  FUN_00020b2c(param_1,0);
  piVar2 = (int *)FUN_00021118(param_1,param_2,1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(*(int *)(param_1 + 0x94) + 0x10) != 2) {
      FUN_0001f8f8(param_1,1);
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
    FUN_00019a88(&local_48,5);
  }
  pcVar14 = *(code **)(param_1 + 0xe0);
  if (pcVar14 != (code *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    (*pcVar14)(param_1,piVar2);
    FUN_00021184(piVar2);
    return 0;
  }
  FUN_00013f88(param_1,3,DAT_0001fdcc);
  FUN_0001333c(param_1);
  FUN_0001333a(param_1,1);
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x10) != 2) {
    if (*(int *)(param_1 + 0xb0) == 0) {
      do {
        for (iVar10 = 0; iVar10 < *(int *)(*(int *)(param_1 + 0x94) + 8); iVar10 = iVar10 + 1) {
          iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x94) + 4) + iVar10 * 4);
          for (uVar12 = 0; uVar12 < (uint)piVar2[1]; uVar12 = uVar12 + 1) {
            iVar15 = *(int *)(*piVar2 + uVar12 * 4);
            iVar3 = FUN_00020ef4(iVar15,0);
            if (iVar3 == 0) {
              local_50 = DAT_0001fdd4;
              __n = 0;
            }
            else {
              __n = (size_t)*(byte *)(iVar3 + 1);
              local_50 = (void *)(iVar3 + 2);
            }
            iVar3 = FUN_00020ff4(iVar15,DAT_0001fdd0);
            if (iVar3 == 0) {
              cVar16 = '\0';
            }
            else {
              cVar16 = *(char *)(iVar3 + 1);
            }
            iVar3 = FUN_00020ef4(iVar15,0x30);
            if (iVar3 == 0) {
              cVar11 = '\0';
            }
            else {
              cVar11 = *(char *)(iVar3 + 1);
            }
            __s1 = (void *)(iVar15 + 4);
            iVar3 = FUN_0002067c(param_1,__s1);
            if (((iVar3 == 0) ||
                (iVar4 = FUN_00020ab4(*(undefined4 *)(param_1 + 0x94)),
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
                  iVar4 = FUN_00020ef4(iVar15,0x30);
                  if ((((((*(int *)(iVar3 + 0x58) << 0x1e < 0) && (iVar4 != 0)) &&
                        (iVar4 = FUN_00017a6c(iVar4,*(byte *)(iVar4 + 1) + 2,&local_48), iVar4 == 0)
                        ) && (((uVar13 != 0 && ((local_40 & 6) != 0)) ||
                              ((((local_48 & *(uint *)(iVar3 + 0x58)) != 0 &&
                                (((local_44 & *(uint *)(iVar3 + 0x4c)) != 0 &&
                                 ((local_40 & *(uint *)(iVar3 + 0x50)) != 0)))) &&
                               ((local_3c & *(uint *)(iVar3 + 0x54)) != 0)))))) ||
                      ((((iVar4 = FUN_00020ff4(iVar15,DAT_0001fdd0),
                         *(int *)(iVar3 + 0x58) << 0x1f < 0 && (iVar4 != 0)) &&
                        (iVar4 = FUN_00017a6c(iVar4,*(byte *)(iVar4 + 1) + 2,&local_48), iVar4 == 0)
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
                          if (!bVar1) goto LAB_0001fccc;
                        }
                        if (-1 < (int)((uint)*(ushort *)(iVar15 + 0x12) << 0x1e)) goto LAB_0001fd5a;
                      }
                    }
                    else {
LAB_0001fd5a:
                      if (*(int *)(iVar3 + 0xe0) == 0) {
LAB_0001fd70:
                        iVar7 = FUN_00020ef4(iVar15,0);
                        if (iVar7 == 0) {
                          uVar8 = 0;
                          pvVar6 = DAT_0001fdd4;
                        }
                        else {
                          uVar8 = *(undefined1 *)(iVar7 + 1);
                          pvVar6 = (void *)(iVar7 + 2);
                        }
                        iVar7 = FUN_00013528(param_1,__s1,pvVar6,uVar8);
                        if (iVar7 == 0) goto LAB_0001fdec;
                        if ((((*(int *)(param_1 + 0xac) != 0) || (*(uint *)(param_1 + 0x114) < 6))
                            || (*(int *)(param_1 + 0xb4) == 0)) ||
                           (iVar3 != *(int *)(param_1 + 0xb4))) goto LAB_0001ff2a;
                        uVar12 = 0;
                        goto LAB_0001fe38;
                      }
                      piVar9 = (int *)(*(int *)(iVar3 + 0xe0) + -4);
                      while( true ) {
                        piVar9 = piVar9 + 1;
                        if (*piVar9 == 0) break;
                        if (*(int *)(iVar15 + 0xc) == *piVar9) goto LAB_0001fd70;
                      }
                    }
                  }
                }
LAB_0001fccc:
              }
            }
          }
LAB_0001fdec:
        }
        if (*(int *)(param_1 + 0x138) == 0) {
          FUN_00021184(piVar2);
          iVar10 = 0;
          do {
            if (*(int *)(*(int *)(param_1 + 0x94) + 8) <= iVar10) {
              FUN_0001f8f8(param_1,*(undefined4 *)(param_1 + 0x148));
              return 0;
            }
            for (iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x94) + 4) + iVar10 * 4); iVar7 != 0;
                iVar7 = *(int *)(iVar7 + 4)) {
              if ((*(int *)(iVar7 + 0xc4) == 0) && (*(int *)(iVar7 + 0xc0) - 1U < 2)) {
                FUN_0001f3fc(param_1,0);
                return 0;
              }
            }
            iVar10 = iVar10 + 1;
          } while( true );
        }
        FUN_0002071c(param_1);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      } while( true );
    }
    FUN_0001e17c(param_1,0);
  }
  FUN_00021184(piVar2);
  return 0;
LAB_0001fe38:
  if ((uint)piVar2[1] <= uVar12) {
LAB_0001ff2a:
    bVar1 = true;
LAB_0001ff2c:
    FUN_00021184(piVar2);
    if (bVar1) {
      FUN_0001f9c2(param_1,iVar7,iVar3);
      return 0;
    }
    return 0;
  }
  iVar15 = *(int *)(*piVar2 + uVar12 * 4);
  iVar10 = memcmp((void *)(iVar15 + 4),(void *)(param_1 + 0xa0),6);
  if ((iVar10 == 0) && (iVar10 = FUN_00020ef4(iVar15,0), iVar10 != 0)) {
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
            if (iVar10 < -0x50) goto LAB_0001feda;
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
LAB_0001feda:
          iVar15 = 2;
        }
        iVar10 = iVar10 - *(int *)(iVar7 + 0x5c);
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        bVar1 = iVar15 <= iVar10;
        goto LAB_0001ff2c;
      }
      goto LAB_0001ff2a;
    }
  }
  uVar12 = uVar12 + 1;
  goto LAB_0001fe38;
}



/* ===== FUN_0001ff44 @ 0001ff44 size=1614 ===== */

void FUN_0001ff44(undefined4 *param_1,int param_2,int *param_3)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_74;
  uint local_70;
  undefined2 local_6c;
  int local_68;
  int local_64;
  int local_5c;
  
  if (param_1[0x45] == 1) {
    if (param_2 == 0x1d) {
      FUN_0001e17c(param_1,0);
      FUN_00020ac8(param_1,0);
      return;
    }
    if (param_2 != 5) {
      return;
    }
switchD_0001ff72_caseD_5:
    iVar1 = strcmp((char *)((int)param_1 + 0x1a),(char *)param_3);
    if (iVar1 != 0) {
      return;
    }
    if (param_3[0x19] != 0) {
      if (param_3[0x19] != 1) {
        return;
      }
      param_1[0x41] = 1;
      FUN_0001f960(param_1);
      FUN_0002756c(param_1[3]);
      param_1[3] = 0;
      return;
    }
    if (param_1[0x41] == 0) {
      return;
    }
    param_1[0x41] = 0;
    iVar1 = FUN_0001eab8(param_1);
    if (-1 < iVar1) {
      return;
    }
    FUN_00013f10(param_1,3,DAT_00020644);
    return;
  }
  piVar6 = param_3;
  switch(param_2) {
  case 0:
    if ((param_3 != (int *)0x0) && (iVar1 = FUN_0001f7c0(param_1,param_3), iVar1 < 0)) {
      return;
    }
    FUN_0001e17c(param_1,6);
    if ((int)(param_1[0x54] << 0x1d) < 0) {
      local_70 = param_1[0x28];
      local_6c = *(undefined2 *)(param_1 + 0x29);
LAB_000201e6:
      FUN_00019a88(&local_70,6);
      iVar1 = memcmp(param_1 + 0x28,&local_70,6);
      *(undefined4 *)((int)param_1 + 0xa6) = 0;
      *(undefined2 *)((int)param_1 + 0xaa) = 0;
      *(undefined2 *)(param_1 + 0x29) = local_6c;
      param_1[0x28] = local_70;
      if (iVar1 != 0) {
        FUN_00013330(param_1);
      }
      if ((param_1[0x33] != 4) && (param_1[0x33] != 0x10)) {
        FUN_0001e086(param_1,&local_70);
      }
      if ((*(int *)(param_1[0x25] + 0x10) != 1) || (param_1[0x2d] == 0)) {
        iVar1 = FUN_0001e9f4(param_1);
        if (iVar1 == 0) {
          FUN_00013f10(param_1,3,DAT_000202f8);
LAB_00020256:
          FUN_0001e5c4(param_1,3);
          return;
        }
        if (*(int *)(iVar1 + 0xc4) != 0) goto LAB_00020256;
        if ((*(uint *)(iVar1 + 0x54) & 499) == 0) {
          FUN_0001dfde(param_1,iVar1);
        }
        else {
          local_74 = 0x50;
          FUN_0001e344(param_1,0,iVar1,&local_68,&local_74);
        }
        iVar3 = param_1[0x2d];
        param_1[0x2d] = iVar1;
        FUN_00020a4c(param_1,iVar1);
        FUN_0001dfdc(param_1);
        if (iVar3 != param_1[0x2d]) {
          FUN_0001332c(param_1);
        }
      }
      iVar1 = param_1[0x2d];
      if ((iVar1 != 0) &&
         (((*(int *)(iVar1 + 0x14) != 0 &&
           (iVar1 = FUN_00013528(param_1,&local_70,*(undefined4 *)(iVar1 + 0x10)), iVar1 != 0)) ||
          (iVar1 = FUN_00013718(param_1,&local_70), iVar1 != 0)))) {
        param_1[0x2e] = iVar1;
      }
    }
    else if (((*(code **)(param_1[0x40] + 8) != (code *)0x0) &&
             (iVar1 = (**(code **)(param_1[0x40] + 8))(param_1[0x35],&local_70), -1 < iVar1)) &&
            (iVar1 = memcmp(&local_70,param_1 + 0x28,6), iVar1 != 0)) goto LAB_000201e6;
    uVar5 = DAT_000202f0;
    *(undefined2 *)(param_1 + 0xac) = local_6c;
    param_1[0xad] = 1;
    param_1[0xab] = local_70;
    FUN_00013f10(param_1,3,uVar5,local_70 & 0xff,local_70 >> 8 & 0xff,local_70 >> 0x10 & 0xff,
                 local_70 >> 0x18,(undefined1)local_6c,local_6c._1_1_);
    FUN_00015ab8(param_1[0x42],&local_70);
    if (param_1[3] != 0) {
      FUN_0002760c();
    }
    param_1[0x49] = 0;
    if (((param_1[0x33] == 4) || (param_1[0x33] == 0x10)) ||
       ((param_1[0x2d] != 0 && (*(int *)(param_1[0x2d] + 0xc0) == 1)))) {
      FUN_0001dfbc(param_1);
      FUN_0001e17c(param_1,9);
    }
    else {
      FUN_0001de98(param_1,10,0);
    }
    FUN_00020b1c(param_1);
    if (((int)(param_1[0x54] << 0x1c) < 0) && ((param_1[0x33] & 0x142) != 0)) {
      FUN_0001dfbc(param_1);
      FUN_0001e17c(param_1,9);
    }
    if (param_1[0x5f] != 0) {
      FUN_00014238(&local_68);
      local_68 = local_68 - param_1[0x60];
      iVar1 = local_64 - param_1[0x61];
      if (iVar1 < 0) {
        local_68 = local_68 + -1;
        iVar1 = iVar1 + 1000000;
      }
      if ((local_68 == 0) && (iVar1 <= DAT_000202f4)) {
        iVar1 = memcmp(param_1 + 0x62,&local_70,6);
        if (iVar1 == 0) {
          iVar3 = param_1[0x5f];
          iVar1 = *(int *)(iVar3 + 8);
          if (iVar1 == 0) {
            iVar1 = iVar3 + 0xc;
          }
          FUN_0001ded4(param_1,param_1 + 0x62,iVar1,*(undefined4 *)(iVar3 + 4));
        }
      }
      FUN_000140c0(param_1[0x5f]);
      param_1[0x5f] = 0;
    }
    if (((((param_1[0x33] == 4) || (param_1[0x33] == 8)) && (param_1[0x2d] != 0)) &&
        ((*(code **)(param_1[0x40] + 0x3c) != (code *)0x0 &&
         (iVar1 = (**(code **)(param_1[0x40] + 0x3c))(param_1[0x35],&local_68), iVar1 == 0)))) &&
       (local_5c << 0x18 < 0)) {
      FUN_0001de48(param_1,param_1[0x2d]);
    }
    break;
  case 1:
    if (param_3 != (int *)0x0) {
      piVar6 = (int *)(uint)*(ushort *)(param_3 + 1);
    }
    if ((int)(param_1[0x54] << 0x1a) < 0) {
      FUN_0001c77a(param_1,param_3);
    }
    goto LAB_00020312;
  case 2:
    FUN_00013f10(param_1,4,DAT_00020638);
    uVar5 = 0;
    if ((param_3 != (int *)0x0) && (uVar5 = 0, *param_3 != 0)) {
      uVar5 = 1;
    }
    FUN_00014238(&local_68);
    if ((param_1[0x27] == 0) || (0x3c < local_68 - param_1[0x27])) {
      if (param_1[0x58] != 0) goto LAB_0002044a;
      FUN_000155b8(param_1[0x42],1,uVar5);
    }
    else {
      if (param_1[0x58] != 0) {
LAB_0002044a:
        FUN_000155b8(param_1[0x42],1,param_1[0x59]);
      }
      FUN_000155b8(param_1[0x42],1,uVar5);
      uVar5 = DAT_0002063c;
      param_1[0x26] = 1;
      FUN_00013f10(param_1,4,uVar5);
      FUN_00014220(0,10000);
      if (*(code **)(param_1[0x40] + 0x20) != (code *)0x0) {
        (**(code **)(param_1[0x40] + 0x20))(param_1[0x35],1);
      }
      FUN_0001e66c(param_1,0xe);
      FUN_00014758(DAT_00020640,param_1,0);
      FUN_000146b2(0x3c,0,DAT_00020640,param_1,0);
    }
    param_1[0x27] = local_68;
    param_1[0x5a] = param_1[0x5a] + 1;
    break;
  case 3:
    iVar1 = FUN_0001fad8(param_1,param_3);
    if ((((-1 < iVar1) && (*(code **)(param_1[0x40] + 0x180) != (code *)0x0)) &&
        (__s1 = (char *)(**(code **)(param_1[0x40] + 0x180))(param_1[0x35]), __s1 != (char *)0x0))
       && (*__s1 != '\0')) {
      for (puVar7 = *(undefined4 **)*param_1; puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)puVar7[2]) {
        if (((param_1 != puVar7) && (*(code **)(puVar7[0x40] + 0x180) != (code *)0x0)) &&
           ((__s2 = (char *)(**(code **)(puVar7[0x40] + 0x180))(puVar7[0x35]), __s2 != (char *)0x0
            && (iVar1 = strcmp(__s1,__s2), iVar1 == 0)))) {
          FUN_0001fad8(puVar7,param_3);
        }
      }
    }
    break;
  case 4:
    FUN_0001f7c0(param_1,param_3);
    break;
  case 5:
    goto switchD_0001ff72_caseD_5;
  case 6:
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
      FUN_00016e54(param_1[0x42],param_3);
    }
    break;
  default:
    FUN_00013f10(param_1,3,DAT_00020678);
    break;
  case 0xb:
    FUN_0001c668(param_1,param_3);
    break;
  case 0xc:
    if (param_3 != (int *)0x0) {
      piVar6 = (int *)(uint)*(ushort *)(param_3 + 1);
    }
LAB_00020312:
    iVar1 = param_1[0x45];
    local_68 = *(int *)((int)param_1 + 0xa6);
    local_64 = CONCAT22(local_64._2_2_,*(undefined2 *)((int)param_1 + 0xaa));
    if (param_1[0x33] != 0x10) {
      if ((iVar1 == 7) && ((param_1[0x33] & 0x142) != 0)) {
        FUN_00013f10(param_1,3,DAT_0002062c);
      }
      if ((param_1[0xbb] == 0) || (param_1[0x33] == 0x200)) {
        if (4 < (uint)param_1[0x45]) {
          FUN_00020ac8(param_1,0,DAT_00020630);
        }
      }
      else {
        param_1[0x2b] = 0;
        param_1[0x2c] = 1;
      }
      piVar4 = (int *)((int)param_1 + 0xa6);
      if (((((*(char *)(param_1 + 0x28) != '\0' || *(char *)((int)param_1 + 0xa1) != '\0') ||
            *(char *)((int)param_1 + 0xa2) != '\0') || *(char *)((int)param_1 + 0xa3) != '\0') ||
          *(char *)(param_1 + 0x29) != '\0') || *(char *)((int)param_1 + 0xa5) != '\0') {
        piVar4 = param_1 + 0x28;
      }
      FUN_0001f31a(param_1,piVar4);
      FUN_00015b00(param_1[0x42]);
      FUN_00013f10(param_1,3,DAT_00020634,(char)*piVar4,*(undefined1 *)((int)piVar4 + 1),
                   *(undefined1 *)((int)piVar4 + 2),*(undefined1 *)((int)piVar4 + 3),(char)piVar4[1]
                   ,*(undefined1 *)((int)piVar4 + 5),piVar6);
      if ((param_1[0x33] != 4) && (param_1[0x33] != 0x10)) {
        param_1[0x4d] = 0;
        FUN_0001e086(param_1,param_1 + 0x28);
      }
      FUN_0001f960(param_1);
      if ((iVar1 == 4) && ((int)(param_1[0x54] << 0x1a) < 0)) {
        FUN_0001c7d4(param_1,&local_68);
      }
    }
    break;
  case 0xd:
    puVar2 = (undefined1 *)*param_3;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_00013f10(param_1,3,DAT_0002064c);
    }
    else {
      FUN_00013f10(param_1,3,DAT_00020648,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                   (short)param_3[3]);
    }
    if ((int)(param_1[0x54] << 0x1a) < 0) {
      FUN_0001c740(param_1,param_3);
    }
    break;
  case 0xe:
    if ((int)(param_1[0x54] << 0x1a) < 0) {
      FUN_0001c75c(param_1,param_3);
    }
    break;
  case 0xf:
    if ((int)(param_1[0x54] << 0x1a) < 0) {
      FUN_0001c764(param_1,param_3);
    }
    break;
  case 0x1b:
    FUN_0001ded4(param_1,*param_3,param_3[1],param_3[2]);
    break;
  case 0x1e:
    FUN_0001f960();
    FUN_0001e17c(param_1,1);
    break;
  case 0x21:
    param_1[0xbc] = *param_3;
    param_1[0xbd] = param_3[1];
    param_1[0xbe] = param_3[2];
  }
  return;
}



/* ===== FUN_0002067c @ 0002067c size=32 ===== */

int FUN_0002067c(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x138);
  while ((piVar2 != (int *)0x0 && (iVar1 = memcmp(piVar2 + 1,param_2,6), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



/* ===== FUN_0002069c @ 0002069c size=62 ===== */

int FUN_0002069c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0002067c();
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_0001449c(0x10);
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



/* ===== FUN_0002071c @ 0002071c size=28 ===== */

void FUN_0002071c(int param_1)

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



/* ===== FUN_000207d8 @ 000207d8 size=34 ===== */

void FUN_000207d8(int param_1)

{
  FUN_00013236(*(undefined4 *)(param_1 + 0x94));
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x3c) != 0) {
    FUN_00014dc4(*(undefined4 *)(param_1 + 0x90));
    return;
  }
  return;
}



/* ===== FUN_00020828 @ 00020828 size=164 ===== */

int FUN_00020828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
LAB_0002086e:
        iVar4 = FUN_00013784(puVar3,DAT_000208cc);
        if (iVar4 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(byte *)(iVar4 + 1) + 2;
        }
        iVar4 = FUN_00016a90(*(undefined4 *)(param_1 + 0x108),iVar4,iVar1,
                             *(undefined4 *)(param_1 + 0x108),param_4);
        iVar1 = FUN_0001375a(puVar3,0x30);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(byte *)(iVar1 + 1) + 2;
        }
        iVar1 = FUN_00016ad6(*(undefined4 *)(param_1 + 0x108),iVar1,iVar2);
        if (iVar1 != 0) {
          return -1;
        }
        return -(uint)(iVar4 != 0);
      }
      __n = *(size_t *)(iVar4 + 0x14);
      if (((puVar3[0x12] == __n) &&
          (iVar1 = memcmp((void *)((int)puVar3 + 0x26),*(void **)(iVar4 + 0x10),__n), iVar1 == 0))
         || (__n == 0)) goto LAB_0002086e;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



/* ===== FUN_00020902 @ 00020902 size=22 ===== */

void FUN_00020902(undefined4 param_1)

{
  FUN_0001e5c4();
  FUN_00020ac8(param_1,5,0);
  return;
}



/* ===== FUN_00020918 @ 00020918 size=22 ===== */

void FUN_00020918(undefined4 param_1)

{
  FUN_0001e66c();
  FUN_00020ac8(param_1,5,0);
  return;
}



/* ===== FUN_00020932 @ 00020932 size=74 ===== */

undefined1 *
FUN_00020932(int param_1,undefined1 param_2,void *param_3,uint param_4,size_t *param_5,
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



/* ===== FUN_0002097c @ 0002097c size=34 ===== */

undefined4 FUN_0002097c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00020828();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_000211b0(param_1);
    if (-1 < iVar1) {
      uVar2 = FUN_00020828(param_1);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0002099e @ 0002099e size=4 ===== */

undefined4 FUN_0002099e(void)

{
  return 0;
}



/* ===== FUN_000209a2 @ 000209a2 size=106 ===== */

int FUN_000209a2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0001449c(0x54);
  iVar2 = DAT_00020a0c;
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = param_1;
    piVar1[2] = iVar2;
    piVar1[3] = DAT_00020a10;
    piVar1[4] = DAT_00020a14;
    piVar1[5] = DAT_00020a18;
    piVar1[6] = DAT_00020a1c;
    piVar1[7] = DAT_00020a20;
    piVar1[8] = DAT_00020a24;
    piVar1[9] = DAT_00020a28;
    piVar1[10] = DAT_00020a2c;
    piVar1[0xc] = DAT_00020a30;
    piVar1[0xb] = DAT_00020a34;
    piVar1[0xd] = DAT_00020a38;
    piVar1[0xe] = DAT_00020a3c;
    piVar1[0xf] = DAT_00020a40;
    piVar1[0x10] = DAT_00020a44;
    piVar1[0x11] = DAT_00020a48;
    iVar2 = FUN_00015a28();
    *(int *)(param_1 + 0x108) = iVar2;
    iVar2 = -(uint)(iVar2 == 0);
  }
  return iVar2;
}



/* ===== FUN_00020a4c @ 00020a4c size=62 ===== */

void FUN_00020a4c(int param_1,int param_2)

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
  FUN_00016898(*(undefined4 *)(param_1 + 0x108),piVar1);
  return;
}



/* ===== FUN_00020a8c @ 00020a8c size=18 ===== */

int FUN_00020a8c(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (param_1 != 0 && (*(int *)(param_1 + iVar1 * 4) != 0)); iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



/* ===== FUN_00020ab4 @ 00020ab4 size=20 ===== */

int FUN_00020ab4(int *param_1)

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



/* ===== FUN_00020ac8 @ 00020ac8 size=80 ===== */

void FUN_00020ac8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_000147a4(DAT_00020b18,param_1,0,param_4,param_1,param_2);
  if ((iVar1 != 0) && ((*(int **)(param_1 + 0x94))[4] == 1)) {
    for (piVar2 = (int *)**(int **)(param_1 + 0x94); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
    {
      if ((piVar2[0x31] == 0) && (piVar2[0x18] != 0)) {
        return;
      }
    }
  }
  FUN_00014758(DAT_00020b18,param_1,0);
  FUN_000146b2(param_2,param_3,DAT_00020b18,param_1,0);
  return;
}



/* ===== FUN_00020b1c @ 00020b1c size=10 ===== */

void FUN_00020b1c(undefined4 param_1)

{
  FUN_00014758(DAT_00020b28,param_1,0);
  return;
}



/* ===== FUN_00020b2c @ 00020b2c size=20 ===== */

void FUN_00020b2c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x118) != param_2) {
    *(int *)(param_1 + 0x118) = param_2;
    return;
  }
  return;
}



/* ===== FUN_00020b3e @ 00020b3e size=80 ===== */

int FUN_00020b3e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  FUN_00020b2c(param_1,1,param_3,param_4,param_4);
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
  FUN_00020b2c(param_1,0);
  FUN_0001333a(param_1,0);
  return iVar1;
}



/* ===== FUN_00020ef4 @ 00020ef4 size=42 ===== */

byte * FUN_00020ef4(int param_1,uint param_2)

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



/* ===== FUN_00020f1e @ 00020f1e size=84 ===== */

byte FUN_00020f1e(undefined4 param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  uVar1 = FUN_00020ef4(param_1,1);
  pbVar2 = (byte *)(uVar1 + 1);
  bVar3 = 0;
  while ((uVar1 != 0 && ((int)(pbVar2 + ~uVar1) < (int)(uint)*(byte *)(uVar1 + 1)))) {
    pbVar2 = pbVar2 + 1;
    if (bVar3 < (*pbVar2 & 0x7f)) {
      bVar3 = *pbVar2 & 0x7f;
    }
  }
  uVar1 = FUN_00020ef4(param_1,0x32);
  pbVar2 = (byte *)(uVar1 + 1);
  while ((uVar1 != 0 && ((int)(pbVar2 + ~uVar1) < (int)(uint)*(byte *)(uVar1 + 1)))) {
    pbVar2 = pbVar2 + 1;
    if (bVar3 < (*pbVar2 & 0x7f)) {
      bVar3 = *pbVar2 & 0x7f;
    }
  }
  return bVar3;
}



/* ===== FUN_00020f72 @ 00020f72 size=130 ===== */

int FUN_00020f72(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar4 = *param_2;
  iVar1 = FUN_00020ef4(iVar5,0x30,param_3,param_4,param_4);
  iVar2 = FUN_00020ef4(iVar4,0x30);
  if (iVar2 == 0) {
    if (iVar1 != 0) {
      return -1;
    }
LAB_00020f94:
    if ((int)((uint)*(ushort *)(iVar5 + 0x12) << 0x1b) < 0) {
      if ((*(ushort *)(iVar4 + 0x12) & 0x10) == 0) {
        return -1;
      }
    }
    else if ((*(ushort *)(iVar4 + 0x12) & 0x10) != 0) goto LAB_00020f8e;
    iVar1 = *(int *)(iVar5 + 0x1c);
    if ((((iVar1 != 0) && (*(int *)(iVar4 + 0x1c) != 0)) &&
        ((*(int *)(iVar4 + 0x1c) - iVar1) + 4U < 9)) ||
       (((*(int *)(iVar5 + 0x14) != 0 && (*(int *)(iVar4 + 0x14) != 0)) &&
        ((*(int *)(iVar4 + 0x14) - *(int *)(iVar5 + 0x14)) + 9U < 0x13)))) {
      iVar2 = FUN_00020f1e(iVar5);
      iVar3 = FUN_00020f1e(iVar4);
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
    if (iVar1 != 0) goto LAB_00020f94;
LAB_00020f8e:
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_00020ff4 @ 00020ff4 size=56 ===== */

char * FUN_00020ff4(int param_1,uint param_2)

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



/* ===== FUN_0002102c @ 0002102c size=112 ===== */

int FUN_0002102c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = FUN_00014028(*(undefined4 *)(param_1 + 0x2c));
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
          __dest = (void *)FUN_000140d8(iVar1,uVar2 - 4,uVar2,uVar3,param_4);
          memcpy(__dest,pcVar4 + 6,uVar2 - 4);
        }
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_000140c0(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0002109c @ 0002109c size=124 ===== */

int FUN_0002109c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if ((*(int *)(param_1 + 0x30) == 0) || (iVar4 = FUN_00014028(), iVar4 == 0)) {
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
          __dest = (void *)FUN_000140d8(iVar4,uVar1 - 4,uVar1,uVar2,param_4);
          memcpy(__dest,pcVar3 + 6,uVar1 - 4);
        }
      }
    }
    if (*(int *)(iVar4 + 4) == 0) {
      FUN_000140c0(iVar4);
      iVar4 = 0;
    }
  }
  return iVar4;
}



/* ===== FUN_00021118 @ 00021118 size=102 ===== */

int * FUN_00021118(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  
  if ((((*(uint *)(param_1 + 0x150) & 4) == 0) &&
      (pcVar1 = *(code **)(*(int *)(param_1 + 0x100) + 0x7c), pcVar1 != (code *)0x0)) &&
     (piVar2 = (int *)(*pcVar1)(*(undefined4 *)(param_1 + 0xd4)), piVar2 != (int *)0x0)) {
    qsort((void *)*piVar2,piVar2[1],4,DAT_00021180);
    FUN_0001356c(param_1);
    for (uVar3 = 0; uVar3 < (uint)piVar2[1]; uVar3 = uVar3 + 1) {
      FUN_00013920(param_1,*(undefined4 *)(*piVar2 + uVar3 * 4));
    }
    FUN_00013578(param_1,param_2,param_3);
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



/* ===== FUN_00021184 @ 00021184 size=44 ===== */

void FUN_00021184(undefined4 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      free(*(void **)((int)*param_1 + uVar1 * 4));
    }
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_000211b0 @ 000211b0 size=26 ===== */

undefined4 FUN_000211b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00021118(param_1,0,0,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00021184();
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000211cc @ 000211cc size=40 ===== */

void FUN_000211cc(void)

{
  char *__format;
  undefined4 in_r3;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  __format = DAT_00021204;
  puVar2 = DAT_000211fc;
  printf(DAT_000211f8,*DAT_00021200,*DAT_000211f4,DAT_00021200,in_r3);
  while( true ) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 == (undefined4 *)0x0) break;
    printf(__format,*puVar1,puVar1[1],puVar1,in_r3);
    puVar2 = puVar2 + 1;
  }
  return;
}



/* ===== FUN_000213f0 @ 000213f0 size=174 ===== */

/* WARNING: Removing unreachable block (ram,0x00021388) */
/* WARNING: Removing unreachable block (ram,0x00021396) */
/* WARNING: Removing unreachable block (ram,0x0002139e) */

undefined4 FUN_000213f0(int param_1)

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
  FUN_000144a4(&local_6c,param_1 + 0x10);
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
      perror(DAT_000213ec);
    }
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00021408 @ 00021408 size=34 ===== */

undefined4 FUN_00021408(int param_1,undefined4 *param_2)

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



/* ===== FUN_0002142a @ 0002142a size=122 ===== */

undefined4 FUN_0002142a(int param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_000144a4(&local_48,param_1 + 0x10);
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
    perror(DAT_000214a4);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000214b4 @ 000214b4 size=76 ===== */

void FUN_000214b4(undefined4 *param_1,void *param_2,size_t param_3,int param_4)

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
  FUN_0001ff44(*param_1,5,acStack_80);
  return;
}



/* ===== FUN_00021500 @ 00021500 size=56 ===== */

void FUN_00021500(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  
  for (; ((0 < param_4 && (uVar1 = (uint)*param_3, 3 < uVar1)) && ((int)uVar1 <= param_4));
      param_3 = (ushort *)((int)param_3 + uVar1)) {
    if (param_3[1] == 3) {
      FUN_000214b4(param_1,param_3 + 2,uVar1 - 4,1);
    }
    uVar1 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar1;
  }
  return;
}



/* ===== FUN_000216a4 @ 000216a4 size=252 ===== */

void FUN_000216a4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *__ptr;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  
  pcVar7 = (char *)param_2[0xe];
  pcVar8 = pcVar7 + param_2[0xf];
  pcVar10 = (char *)0x0;
  pcVar12 = (char *)0x0;
  for (; ((pcVar7 != (char *)0x0 && (pcVar7 + 1 < pcVar8)) &&
         (pcVar7 + (byte)pcVar7[1] + 2 <= pcVar8)); pcVar7 = pcVar7 + (byte)pcVar7[1] + 2) {
    cVar1 = *pcVar7;
    pcVar11 = pcVar10;
    pcVar13 = pcVar7;
    if (((cVar1 != '\0') && (pcVar11 = pcVar7, pcVar13 = pcVar12, cVar1 != '\x01')) &&
       (pcVar11 = pcVar10, cVar1 == '2')) {
      pcVar11 = pcVar7;
    }
    pcVar10 = pcVar11;
    pcVar12 = pcVar13;
  }
  if (pcVar12 == (char *)0x0) {
    iVar9 = param_2[0x18] + 2;
  }
  else {
    iVar9 = 0;
  }
  if ((pcVar10 == (char *)0x0) && (param_2[0x19] != 0)) {
    iVar9 = iVar9 + 3;
  }
  __ptr = (undefined4 *)FUN_0001449c(param_2[0xf] + 0x38 + iVar9);
  if (__ptr != (undefined4 *)0x0) {
    puVar4 = __ptr;
    puVar5 = param_2;
    do {
      uVar2 = *puVar5;
      uVar6 = puVar5[1];
      puVar5 = puVar5 + 2;
      *puVar4 = uVar2;
      puVar4[1] = uVar6;
      puVar4 = puVar4 + 2;
    } while (puVar5 != param_2 + 0xe);
    puVar4 = __ptr + 0xe;
    __ptr[0xb] = iVar9 + param_2[0xf];
    if (pcVar12 == (char *)0x0) {
      *(undefined1 *)(__ptr + 0xe) = 0;
      *(char *)((int)__ptr + 0x39) = (char)param_2[0x18];
      pvVar3 = memcpy((void *)((int)__ptr + 0x3a),param_2 + 0x10,param_2[0x18]);
      puVar4 = (undefined4 *)(param_2[0x18] + (int)pvVar3);
    }
    puVar5 = puVar4;
    if ((pcVar10 == (char *)0x0) && (param_2[0x19] != 0)) {
      *(undefined1 *)puVar4 = 1;
      *(undefined1 *)((int)puVar4 + 1) = 1;
      puVar5 = (undefined4 *)((int)puVar4 + 3);
      *(char *)((int)puVar4 + 2) = (char)param_2[0x19];
    }
    if ((void *)param_2[0xe] != (void *)0x0) {
      memcpy(puVar5,(void *)param_2[0xe],param_2[0xf]);
    }
    pvVar3 = realloc((void *)*param_1,(param_1[1] + 1) * 4);
    if (pvVar3 == (void *)0x0) {
      free(__ptr);
      return;
    }
    iVar9 = param_1[1];
    param_1[1] = iVar9 + 1;
    *(undefined4 **)((int)pvVar3 + iVar9 * 4) = __ptr;
    *param_1 = pvVar3;
  }
  return;
}



/* ===== FUN_000217a0 @ 000217a0 size=566 ===== */

undefined4
FUN_000217a0(undefined4 param_1,int param_2,uint param_3,byte *param_4,short param_5,int param_6,
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
  
  if ((param_8 < 9) && (__ptr = (uint *)FUN_0001449c(param_10 + 0x28), __ptr != (uint *)0x0)) {
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
    FUN_000144a4(&local_58,iVar8,0x10);
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
      perror(DAT_000219dc);
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
      FUN_000144a4(&local_58,iVar8,0x10);
      uStack_44._2_2_ = uVar1;
      if (param_3 == 0) {
        uStack_44._2_2_ = uVar3 | 0x8400;
      }
      uStack_44 = CONCAT22(uStack_44._2_2_,sVar2);
      local_48 = param_9;
      iVar4 = ioctl(*(int *)(param_2 + 8),0x8b2a,&local_58);
      if (iVar4 < 0) {
        uVar7 = 0xffffffff;
        perror(DAT_000219e0);
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
      FUN_000144a4(&local_58,iVar8,0x10);
      local_48 = (uint *)0x0;
      uStack_44 = (uint)uVar1 << 0x10;
      iVar8 = ioctl(*(int *)(param_2 + 8),0x8b2a,&local_58);
      if (-1 < iVar8) {
        return uVar7;
      }
      perror(DAT_000219e4);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000219e8 @ 000219e8 size=1108 ===== */

int FUN_000219e8(int param_1)

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
    FUN_000144a4(&local_a0,param_1 + 0x10,0x10);
    uStack_8c = CONCAT22(uStack_8c._2_2_,(short)uVar11);
    local_90 = __ptr;
    iVar3 = ioctl(*(int *)(param_1 + 8),0x8b19,&local_a0);
    if (iVar3 == 0) break;
    piVar4 = __errno_location();
    if ((*piVar4 != 7) || (iVar14 = iVar14 + -1, iVar14 == 0)) {
      perror(DAT_00021d3c);
      goto LAB_00021a68;
    }
    uVar11 = uVar11 << 1;
    free(__ptr);
    if (0xfffe < uVar11) {
      uVar11 = 0xffff;
    }
  }
  uVar15 = uStack_8c & 0xffff;
  if (uVar11 < uVar15) {
LAB_00021a68:
    free(__ptr);
    return 0;
  }
  iVar5 = FUN_0001449c(8);
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
          local_3c = (uint)((ulonglong)uVar15 * (ulonglong)DAT_00021e48 >> 0x31);
        }
      }
      else if (uVar15 < 0x8b22) {
        if (uVar15 == 0x8b07) {
          iVar14 = CONCAT13(bStack_ad,CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0)));
          if (iVar14 == 1) {
            uVar10 = local_90._2_2_ | 2;
          }
          else {
            if (1 < iVar14 - 2U) goto LAB_00021b4c;
            uVar10 = local_90._2_2_ | 1;
          }
LAB_00021c54:
          local_90 = (uint *)CONCAT22(uVar10,(undefined2)local_90);
        }
        else if (uVar15 < 0x8b08) {
          if (uVar15 == 0x8b05) {
            iVar3 = (int)(short)local_ac;
            iVar14 = DAT_00021d40;
            if (iVar3 == 0) {
              if (local_94 == 0) {
                iVar3 = CONCAT13(bStack_ad,CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0)));
                lVar1 = CONCAT44(iVar3,iVar3 - 1U);
                if (iVar3 - 1U < 0xd) {
                  local_94 = iVar3 * 5 + 0x967;
                }
                else {
                  if (iVar3 != 0xe) goto LAB_00021ca6;
                  local_94 = 0x9b4;
                }
              }
            }
            else if (iVar3 < 7) {
              lVar1 = 0x8b0500008b05;
              for (iVar13 = 0; iVar13 < iVar3; iVar13 = iVar13 + 1) {
                lVar1 = (longlong)iVar14 * (longlong)DAT_00021d44;
                iVar14 = (int)(lVar1 >> 0x22) - (iVar14 >> 0x1f);
              }
LAB_00021ca6:
              local_94 = FUN_00034ad0(CONCAT13(bStack_ad,
                                               CONCAT12(bStack_ae,CONCAT11(bStack_af,local_b0))),
                                      iVar14,(int)lVar1);
            }
          }
        }
        else if (uVar15 == 0x8b15) {
          if (!bVar2) {
            FUN_000216a4(iVar5,&local_a0);
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
        else if ((uStack_84 == 0) || (uStack_84 <= *(byte *)(param_1 + 0xb4))) goto LAB_00021b4c;
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
          goto LAB_00021c54;
        }
      }
      else if (uVar15 == 0x8c02) {
        uVar15 = (uint)local_ac;
        if ((uint *)((int)puVar8 + uVar15) <= puVar16) {
          if (uVar15 < 8) {
            if (4 < uVar15) goto LAB_00021ddc;
          }
          else {
            iVar14 = strncmp((char *)puVar8,DAT_00021e4c,7);
            if ((iVar14 == 0) || (iVar14 = strncmp((char *)puVar8,DAT_00021e50,7), iVar14 == 0)) {
              iVar14 = uVar15 - 7;
              if ((-1 < iVar14 * -0x80000000) && (iVar14 != 0)) {
                uVar15 = iVar14 / 2;
                puVar6 = realloc(local_68,local_64 + uVar15);
                if ((puVar6 != (uint *)0x0) &&
                   (local_68 = puVar6,
                   iVar14 = FUN_00013e2e((int)puVar8 + 7,local_64 + (int)puVar6,uVar15), -1 < iVar14
                   )) goto LAB_00021c0e;
              }
            }
            else {
LAB_00021ddc:
              iVar14 = strncmp((char *)puVar8,DAT_00021e54,4);
              if ((iVar14 == 0) &&
                 ((uVar15 == 0x14 && (iVar14 = FUN_00013e2e(puVar8 + 1,&local_bc,8), -1 < iVar14))))
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
LAB_00021c0e:
        local_64 = local_64 + uVar15;
      }
LAB_00021b4c:
    }
    free(__ptr);
    __ptr = local_68;
    if (!bVar2) {
      FUN_000216a4(iVar5,&local_a0);
      __ptr = local_68;
    }
  }
  free(__ptr);
  return iVar5;
}



/* ===== FUN_00021e58 @ 00021e58 size=88 ===== */

undefined4 FUN_00021e58(int param_1,int param_2,undefined4 param_3)

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
  FUN_000144a4(&local_30,param_1 + 0x10);
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



/* ===== FUN_00021f10 @ 00021f10 size=98 ===== */

undefined4 FUN_00021f10(int param_1,undefined4 *param_2)

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
  FUN_000144a4(&local_30,param_1 + 0x10);
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
    perror(DAT_00021f74);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00021f78 @ 00021f78 size=144 ===== */

undefined4 FUN_00021f78(int param_1,void *param_2,uint param_3)

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
    FUN_000144a4(&local_64,param_1 + 0x10);
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
    perror(DAT_00022008);
  }
  return 0xffffffff;
}



/* ===== FUN_0002200c @ 0002200c size=144 ===== */

void FUN_0002200c(int param_1)

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
  FUN_000144a4(&local_58,param_1 + 0x10);
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b07,&local_58);
  if (iVar1 < 0) {
    perror(DAT_0002209c);
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
    iVar1 = FUN_00021f10(param_1,&local_60);
    if (iVar1 < 0) {
      return;
    }
    uVar4 = 0x20;
  }
  else {
    iVar1 = FUN_00021f10(param_1,&local_60);
    if (iVar1 < 0) {
      return;
    }
    uVar4 = 0;
    puVar3 = DAT_000220a0;
  }
  FUN_00021f78(param_1,puVar3,uVar4);
  return;
}



/* ===== FUN_00022148 @ 00022148 size=80 ===== */

undefined4 FUN_00022148(int param_1,int param_2)

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
  FUN_000144a4(&local_30,param_1 + 0x10);
  uStack_1c = CONCAT22(uStack_1c._2_2_,1);
  local_20 = param_2 * DAT_00022198;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b04,&local_30);
  if (iVar1 < 0) {
    perror(DAT_0002219c);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000221b0 @ 000221b0 size=24 ===== */

bool FUN_000221b0(int param_1)

{
  if (param_1 == 1) {
    return (bool)2;
  }
  if (param_1 != 3) {
    return param_1 == 0;
  }
  return true;
}



/* ===== FUN_000221c8 @ 000221c8 size=174 ===== */

undefined4 FUN_000221c8(int param_1,int param_2)

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
  FUN_000144a4(&local_38,iVar4,0x10);
  local_28 = iVar5;
  iVar1 = ioctl(*(int *)(param_1 + 8),0x8b06,&local_38);
  if (iVar1 == 0) {
LAB_00022206:
    uVar3 = 0;
  }
  else {
    piVar2 = __errno_location();
    __s = DAT_00022278;
    if ((*piVar2 == 0x10) &&
       (iVar1 = ioctl(*(int *)(param_1 + 8),0x8b07,&local_38), __s = DAT_0002227c, -1 < iVar1)) {
      if (local_28 == iVar5) goto LAB_00022206;
      iVar1 = FUN_000270c8(*(undefined4 *)(param_1 + 8),iVar4,0);
      if (iVar1 == 0) {
        local_28 = iVar5;
        iVar5 = ioctl(*(int *)(param_1 + 8),0x8b06,&local_38);
        uVar3 = 0;
        if (iVar5 < 0) {
          uVar3 = 0xffffffff;
          perror(DAT_00022278);
        }
        FUN_000270c8(*(undefined4 *)(param_1 + 8),iVar4,1);
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



/* ===== FUN_00022280 @ 00022280 size=752 ===== */

int FUN_00022280(int param_1,int *param_2)

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
    FUN_00021f78(param_1,DAT_00022570,0);
  }
  *(int *)(param_1 + 0x8c) = param_2[0x1a];
  iVar1 = FUN_00021e58(param_1,5);
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
  iVar2 = FUN_00021e58(param_1,6,uVar4);
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
  iVar2 = FUN_000221c8(param_1,iVar3);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if (*(int *)(param_1 + 0x90) == 0) goto LAB_00022348;
  local_50 = uVar13;
  uStack_4c = uVar14;
  uStack_48 = uVar15;
  uStack_44 = uVar16;
  local_40 = (void *)uVar13;
  uStack_3c = uVar14;
  local_38 = uVar13;
  uStack_34 = uVar14;
  FUN_000144a4(&local_50,iVar11,0x10);
  local_40 = (void *)0x0;
  uStack_3c = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    uStack_3c._2_2_ = 0x8000;
LAB_0002232a:
    uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  }
  else {
    if (param_2[9] << 0x1f < 0) {
      uStack_3c = 0x20000000;
    }
    if (param_2[9] << 0x1e < 0) {
      uStack_3c._2_2_ = uStack_3c._2_2_ | 0x4000;
      goto LAB_0002232a;
    }
  }
  iVar2 = ioctl(*(int *)(param_1 + 8),0x8b2a,&local_50);
  if (iVar2 < 0) {
    iVar1 = -1;
    perror(DAT_00022574);
  }
LAB_00022348:
  if ((*param_2 == 0) && (iVar2 = FUN_00021f10(param_1), iVar2 < 0)) {
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
  FUN_000144a4(&local_50,iVar11,0x10);
  uStack_3c = CONCAT22(uStack_3c._2_2_,(short)iVar2);
  local_40 = pvVar12;
  iVar2 = ioctl(*(int *)(param_1 + 8),0x8b30,&local_50);
  if (iVar2 < 0) {
    iVar1 = -1;
    perror(DAT_00022578);
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
  iVar2 = FUN_00021e58(param_1,0,uVar5);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((uint)param_2[6] < 5) {
    iVar2 = (int)*(char *)(DAT_0002257c + param_2[6]);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = FUN_00021e58(param_1,1,iVar2);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((uint)param_2[7] < 5) {
    iVar2 = (int)*(char *)(DAT_0002257c + param_2[7]);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = FUN_00021e58(param_1,2,iVar2);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  uVar5 = FUN_000221b0(param_2[8]);
  iVar2 = FUN_00021e58(param_1,3,uVar5);
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
  iVar2 = FUN_00021e58(param_1,10,uVar5);
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
    FUN_000144a4(&local_50,iVar11,0x10);
    pvVar12 = (void *)FUN_0001449c(0x48);
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
        perror(DAT_00022580);
      }
      free(pvVar12);
      if (iVar2 < 0) {
        iVar1 = -1;
      }
    }
  }
  iVar2 = FUN_00021e58(param_1,8,1 < uVar4);
  if (iVar2 < 0) {
    iVar1 = -1;
  }
  if ((param_2[3] != 0) && (iVar2 = FUN_00022148(param_1), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*(int *)(param_1 + 0xb0) == 0) &&
     (iVar2 = FUN_00021f78(param_1,param_2[1],param_2[2]), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*param_2 != 0) && (iVar2 = FUN_00021f10(param_1), iVar2 < 0)) {
    iVar1 = -1;
  }
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar2 = FUN_00021f78(param_1,param_2[1],param_2[2]), iVar2 < 0)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_00022584 @ 00022584 size=34 ===== */

int FUN_00022584(int param_1,char *param_2)

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



/* ===== FUN_000225a6 @ 000225a6 size=338 ===== */

undefined4 FUN_000225a6(undefined4 *param_1)

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
  iVar2 = FUN_000270c8(param_1[2],__ifname,1);
  if (iVar2 < 0) {
    iVar2 = FUN_000273cc(param_1[0x15]);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    bVar4 = true;
    param_1[0x14] = 1;
  }
  else {
    bVar4 = false;
  }
  FUN_000213f0(param_1);
  FUN_000221c8(param_1,0);
  __ptr = (void *)FUN_0001449c(0x42c);
  if (__ptr != (void *)0x0) {
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_38 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    uStack_24 = uStack_34;
    uStack_1c = uStack_34;
    FUN_000144a4(&local_38,__ifname,0x10);
    uStack_24 = CONCAT22(uStack_24._2_2_,0x42c);
    local_28 = __ptr;
    iVar2 = ioctl(param_1[2],0x8b0b,&local_38);
    if (iVar2 < 0) {
      perror(DAT_000226f8);
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
  FUN_0002200c(param_1);
  uVar3 = if_nametoindex(__ifname);
  __s2 = DAT_000226fc;
  param_1[0x11] = uVar3;
  iVar2 = strncmp(__ifname,__s2,4);
  if (iVar2 == 0) {
    FUN_000144a4(&local_38,__ifname,0x11);
    local_38 = DAT_00022700;
    FUN_00022584(param_1,&local_38);
  }
  FUN_00027030(param_1[1],param_1[0x11],1,5);
  if (bVar4) {
    FUN_000146b2(0,0,DAT_00022704,param_1,*param_1);
  }
  return 0;
}



/* ===== FUN_00022708 @ 00022708 size=312 ===== */

undefined4 * FUN_00022708(undefined4 param_1,undefined4 param_2)

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
  
  __ptr = (undefined4 *)FUN_0001449c(0xb8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    FUN_000144a4(__ptr + 4,param_2,0x11);
    snprintf(acStack_a0,0x80,DAT_00022840,param_2);
    iVar2 = stat64(acStack_a0,&sStack_108);
    if (iVar2 == 0) {
      *(undefined1 *)((int)__ptr + 0x21) = 0;
      __ptr[0x2c] = 1;
      snprintf(acStack_164,0x59,DAT_00022844,__ptr + 4);
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
      perror(DAT_00022848);
    }
    else {
      puVar5 = (undefined4 *)FUN_0001449c(0xc);
      uVar1 = DAT_0002284c;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = __ptr;
        puVar5[1] = uVar1;
        puVar5[2] = DAT_00022850;
        iVar2 = FUN_00026fcc();
        __ptr[1] = iVar2;
        if (iVar2 == 0) {
          free(puVar5);
        }
        else {
          puVar5 = (undefined4 *)FUN_0001449c(0x1c);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = __ptr;
            FUN_000144a4(puVar5 + 1,param_2,0x10);
            puVar5[5] = DAT_00022854;
            puVar5[6] = DAT_00022858;
            iVar2 = FUN_00027318(puVar5);
            __ptr[0x15] = iVar2;
            if (iVar2 == 0) {
              free(puVar5);
            }
            __ptr[3] = 0xffffffff;
            iVar2 = FUN_000225a6(__ptr);
            if (-1 < iVar2) {
              FUN_00021e58(__ptr,7,1);
              return __ptr;
            }
          }
          FUN_000273a4(__ptr[0x15]);
          FUN_00026fa4(__ptr[1]);
        }
        close(__ptr[2]);
      }
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0002285c @ 0002285c size=1134 ===== */

void FUN_0002285c(undefined4 *param_1,int param_2,ushort *param_3,int param_4)

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
    FUN_000225a6(param_1);
  }
  if (param_1[0x14] == 0) {
    if ((*(uint *)(param_2 + 8) & 1) != 0) goto LAB_000228f6;
    param_1[0x14] = 1;
    FUN_0001ff44(*param_1,0x1e);
    if (param_1[0x14] == 0) goto LAB_000228f6;
  }
  if (*(int *)(param_2 + 8) << 0x1f < 0) {
    param_1[0x14] = 0;
    FUN_0001ff44(*param_1,0x1d);
  }
LAB_000228f6:
  if ((param_1[0x25] == 1) && ((DAT_00022be0 & *(uint *)(param_2 + 8)) == 0x10000)) {
    FUN_00027030(param_1[1],param_1[0x11],0xffffffff,6);
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
          if ((local_9c & 0xffff) < 0x1c) goto LAB_00022a3c;
          memset(&local_8c,0,100);
          puVar9 = &local_90;
          puVar6 = (uint *)0x2;
          local_90 = ((*puVar8 ^ 4) & 7) >> 2;
LAB_00022ac2:
          FUN_0001ff44(uVar3,puVar6,puVar9);
        }
        else {
          if (local_a4._2_2_ < 0x8c07) {
            if (local_a4._2_2_ == 0x8b19) {
              param_1[0x2b] = 1;
              FUN_00014758(DAT_00022cec,param_1,*param_1);
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
                  iVar2 = strncmp(__s1,DAT_00022be8,0x21);
                  if (iVar2 == 0) {
                    pcVar4 = strstr(__s1,DAT_00022bec);
                    uVar7 = 2;
                    local_90 = (uint)(pcVar4 != (char *)0x0);
LAB_00022b20:
                    FUN_0001ff44(uVar3,uVar7,&local_90);
                  }
                  else {
                    iVar2 = strncmp(__s1,DAT_00022bf0,0x11);
                    if (iVar2 == 0) {
                      pcVar4 = __s1 + 0x11;
                      sVar5 = strspn(pcVar4,DAT_00022bf4);
                      if ((sVar5 != 0) && (-1 < (int)(sVar5 << 0x1f))) {
                        sVar5 = (int)sVar5 / 2;
                        pvVar12 = malloc(sVar5);
                        if ((pvVar12 == (void *)0x0) ||
                           (iVar2 = FUN_00013e2e(pcVar4,pvVar12,sVar5), iVar2 < 0)) {
LAB_00022b58:
                          __ptr = (void *)0x0;
                        }
                        else {
                          pcVar4 = pcVar4 + sVar5 * 2;
                          __ptr = (void *)0x0;
                          local_84 = (void *)0x0;
                          local_80 = 0;
                          local_8c = pvVar12;
                          local_88 = sVar5;
                          iVar2 = strncmp(pcVar4,DAT_00022bf8,9);
                          pvVar13 = local_84;
                          sVar5 = local_80;
                          if (iVar2 == 0) {
                            sVar5 = strspn(pcVar4 + 9,DAT_00022bf4);
                            if ((sVar5 != 0) && (-1 < (int)(sVar5 << 0x1f))) {
                              sVar5 = (int)sVar5 / 2;
                              __ptr = malloc(sVar5);
                              if (__ptr != (void *)0x0) {
                                iVar2 = FUN_00013e2e(pcVar4 + 9,__ptr,sVar5);
                                pvVar13 = __ptr;
                                if (-1 < iVar2) goto LAB_00022bd4;
                                goto LAB_00022b5a;
                              }
                            }
                            goto LAB_00022b58;
                          }
LAB_00022bd4:
                          local_80 = sVar5;
                          local_84 = pvVar13;
                          FUN_0001ff44(uVar3,4,&local_90);
                        }
LAB_00022b5a:
                        free(__ptr);
                        free(pvVar12);
                      }
                    }
                    else {
                      iVar2 = strncmp(__s1,DAT_00022ce8,0x11);
                      if ((iVar2 == 0) && (iVar2 = FUN_00013d6a(__s1 + 0x11,&local_90), iVar2 == 0))
                      {
                        uVar7 = 7;
                        goto LAB_00022b20;
                      }
                    }
                  }
                  free(__s1);
                  goto LAB_00022a3c;
                }
                break;
              }
              if (local_a4._2_2_ != 0x8b15) goto LAB_00022a3c;
              pvVar12 = (void *)param_1[0x16];
              if ((((((uStack_a0._2_1_ == '\0' && uStack_a0._3_1_ == '\0') && (char)local_9c == '\0'
                     ) && local_9c._1_1_ == '\0') && local_9c._2_1_ == '\0') &&
                   local_9c._3_1_ == '\0') ||
                 (iVar2 = memcmp((void *)((int)&uStack_a0 + 2),DAT_00022be4,6), iVar2 == 0)) {
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
                  FUN_0001ff44(*param_1,4,&local_90);
                  free((void *)param_1[0x16]);
                  param_1[0x16] = 0;
                  free((void *)param_1[0x18]);
                  param_1[0x18] = 0;
                }
                puVar6 = (uint *)0x0;
                puVar9 = puVar6;
              }
            }
LAB_000229fc:
            uVar3 = *param_1;
            goto LAB_00022ac2;
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
              goto LAB_000229fc;
            }
          }
        }
LAB_00022a3c:
      }
    }
    else if (param_3[1] == 3) {
      FUN_000214b4(param_1,param_3 + 2,uVar10 - 4,0);
    }
    uVar10 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar10;
    param_3 = (ushort *)((int)param_3 + uVar10);
  } while( true );
}



/* ===== FUN_00022cf8 @ 00022cf8 size=32 ===== */

bool FUN_00022cf8(byte *param_1)

{
  return (param_1[5] & *param_1 & param_1[1] & param_1[2] & param_1[3] & param_1[4]) == 0xff;
}



/* ===== FUN_00023102 @ 00023102 size=38 ===== */

undefined4 FUN_00023102(int *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0xa4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(param_2,(void *)(iVar2 + 0xa8),*(size_t *)(iVar2 + 200));
    uVar1 = *(undefined4 *)(iVar2 + 200);
  }
  return uVar1;
}



/* ===== FUN_00023144 @ 00023144 size=132 ===== */

void FUN_00023144(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  void *__s1;
  void *local_88;
  undefined2 local_84;
  uint local_80;
  int local_7c;
  
  if (param_4 < 0x18) {
    __s1 = (void *)0x0;
  }
  else {
    __s1 = (void *)(param_3 + 0x10);
    if (((*(int *)(param_1 + 0xa4) != 0) &&
        (iVar1 = memcmp(__s1,(void *)(param_1 + 0x9e),6), iVar1 != 0)) &&
       (iVar1 = memcmp(__s1,(void *)(param_1 + 0x98),6), iVar1 != 0)) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  memset(&local_88,0,0x68);
  uVar2 = param_3 + 0x1a;
  local_84 = 0;
  if (0x19 < param_4) {
    local_84 = *(undefined2 *)(param_3 + 0x18);
  }
  if (uVar2 < param_3 + param_4) {
    local_7c = (param_3 + param_4) - uVar2;
    local_80 = uVar2;
  }
  local_88 = __s1;
  FUN_0001ff44(*(undefined4 *)(param_1 + 0x34),param_2,&local_88);
  return;
}



/* ===== FUN_000231c8 @ 000231c8 size=128 ===== */

void FUN_000231c8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [96];
  
  uVar1 = 0;
  if (*(int *)(param_3 + 0x98) != 0) {
    uVar1 = FUN_00027e90();
  }
  if (*(int *)(param_3 + 0x9c) != 0) {
    FUN_00027e90();
  }
  uVar2 = 0;
  if (*(int *)(param_3 + 0x15c) != 0) {
    uVar2 = FUN_00027e90();
  }
  if (*(int *)(param_3 + 0x160) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00027f14();
  }
  if (lVar4 == *(longlong *)(param_1 + 0xe8)) {
    *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xfe | ((byte)param_2 ^ 1) & 1;
    memset(auStack_78,0,0x60);
    if (param_2 == 0) {
      uVar3 = 0x16;
    }
    else {
      uVar3 = 0x17;
    }
    local_80 = uVar1;
    uStack_7c = uVar2;
    FUN_0001ff44(*(undefined4 *)(param_1 + 0x34),uVar3,&local_80);
  }
  return;
}



/* ===== FUN_00023248 @ 00023248 size=66 ===== */

undefined4 FUN_00023248(undefined4 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1d0 [352];
  int local_70;
  
  FUN_0002c044();
  uVar1 = FUN_0002ba5c();
  uVar2 = FUN_0003432c(uVar1,0);
  uVar1 = thunk_FUN_00034314(uVar1,0);
  FUN_000277b8(auStack_1d0,0x6f,uVar2,uVar1,0);
  if (local_70 != 0) {
    uVar3 = FUN_00027f14();
    *param_2 = uVar3;
  }
  return 1;
}



/* ===== FUN_0002328a @ 0002328a size=16 ===== */

void FUN_0002328a(void)

{
  int iVar1;
  
  iVar1 = FUN_0001449c(8);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}



/* ===== FUN_000232a2 @ 000232a2 size=76 ===== */

void FUN_000232a2(int param_1,void *param_2,size_t param_3,int param_4)

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
  iVar1 = strcmp((char *)(param_1 + 0x110),acStack_80);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
  }
  FUN_0001ff44(*(undefined4 *)(param_1 + 0x34),5,acStack_80);
  return;
}



/* ===== FUN_000232ee @ 000232ee size=68 ===== */

void FUN_000232ee(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  
  for (; ((3 < param_4 && (uVar1 = (uint)*param_3, 3 < uVar1)) && ((int)uVar1 <= param_4));
      param_3 = (ushort *)((int)param_3 + uVar1)) {
    if (param_3[1] == 3) {
      FUN_000232a2(param_1,param_3 + 2,uVar1 - 4,1);
    }
    else if (param_3[1] == 10) {
      FUN_00027e90(param_3);
    }
    uVar1 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar1;
  }
  return;
}



/* ===== FUN_000233fa @ 000233fa size=236 ===== */

undefined4 FUN_000233fa(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1dc;
  undefined1 auStack_1d8 [128];
  int local_158;
  int local_12c;
  int local_110;
  int local_28;
  int local_1c;
  
  FUN_0002c044();
  uVar2 = FUN_0002ba5c();
  uVar3 = FUN_0003432c(uVar2,0);
  uVar2 = thunk_FUN_00034314(uVar2,0);
  FUN_000277b8(auStack_1d8,0x6f,uVar3,uVar2,0);
  if (local_12c != 0) {
    uVar2 = FUN_00027df0();
    *param_2 = uVar2;
  }
  if (local_158 != 0) {
    uVar2 = FUN_00027758();
    uVar3 = 0;
    bVar1 = false;
    local_1dc = FUN_00027760(local_158);
    while (iVar4 = FUN_0002776c(uVar2,local_1dc), iVar4 != 0) {
      iVar4 = FUN_0002774c(uVar2);
      if (iVar4 == 8) {
        uVar3 = 1;
      }
      else if (iVar4 == 9) {
        bVar1 = true;
      }
      else if (iVar4 == 3) {
        param_2[1] = 1;
      }
      uVar2 = FUN_00027798(uVar2,&local_1dc);
    }
    if (bVar1) goto LAB_0002343c;
  }
  uVar3 = 0;
LAB_0002343c:
  param_2[2] = uVar3;
  if (local_110 != 0) {
    uVar2 = FUN_00027758();
    local_1dc = FUN_00027760(local_110);
    while (iVar4 = FUN_0002776c(uVar2,local_1dc), iVar4 != 0) {
      iVar4 = FUN_00027e90(uVar2);
      if (iVar4 == 0x25) {
        param_2[3] = 1;
      }
      else if (iVar4 == 0x2e) {
        param_2[4] = 1;
      }
      uVar2 = FUN_00027798(uVar2,&local_1dc);
    }
  }
  if (local_28 != 0) {
    param_2[5] = 1;
  }
  if (local_1c != 0) {
    uVar2 = FUN_00027e90();
    param_2[6] = uVar2;
  }
  return 1;
}



/* ===== FUN_000234e6 @ 000234e6 size=864 ===== */

undefined4 FUN_000234e6(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 *puVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 auStack_22c [4];
  int local_228;
  undefined1 auStack_220 [4];
  undefined4 local_21c;
  undefined4 local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  undefined1 auStack_204 [4];
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined1 auStack_1e8 [88];
  int local_190;
  undefined4 *puVar13;
  
  FUN_0002c044();
  uVar6 = FUN_0002ba5c();
  uVar7 = FUN_0003432c(uVar6,0);
  uVar6 = thunk_FUN_00034314(uVar6,0);
  FUN_000277b8(auStack_1e8,0x6f,uVar7,uVar6,0);
  if (local_190 != 0) {
    uVar6 = FUN_00027758();
    local_238 = FUN_00027760(local_190);
    while ((iVar8 = FUN_0002776c(uVar6,local_238), iVar8 != 0 &&
           (pvVar9 = realloc((void *)param_2[1],(uint)*(ushort *)*param_2 * 0x28 + 0x28),
           pvVar9 != (void *)0x0))) {
      iVar8 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_2[1] = pvVar9;
      piVar21 = (int *)((uint)*(ushort *)*param_2 * 0x28 + (int)pvVar9);
      *piVar21 = 0;
      piVar21[1] = iVar8;
      piVar21[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      piVar21[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar21[4] = 0;
      piVar21[5] = iVar8;
      piVar21[6] = 0;
      piVar21[7] = iVar8;
      piVar21[8] = 0;
      piVar21[9] = iVar8;
      *(short *)*param_2 = *(short *)*param_2 + 1;
      uVar7 = FUN_00027758(uVar6);
      uVar10 = FUN_00027760(uVar6);
      FUN_000277b8(auStack_220,6,uVar7,uVar10,0);
      if (local_210 != 0) {
        uVar4 = FUN_00027e40();
        *(undefined2 *)(piVar21 + 5) = uVar4;
      }
      if (local_20c != 0) {
        bVar2 = FUN_00027df0();
        *(byte *)((int)piVar21 + 0x26) = *(byte *)((int)piVar21 + 0x26) | bVar2 & 3;
      }
      if (local_208 != 0) {
        cVar3 = FUN_00027df0();
        *(byte *)((int)piVar21 + 0x26) = *(byte *)((int)piVar21 + 0x26) | cVar3 << 2;
      }
      if ((local_214 != 0) && (iVar8 = FUN_00027760(), iVar8 != 0)) {
        puVar11 = (undefined4 *)FUN_00027758(local_214);
        puVar12 = puVar11;
        puVar20 = (undefined4 *)((int)piVar21 + 0x16);
        do {
          puVar13 = puVar12 + 1;
          *puVar20 = *puVar12;
          puVar12 = puVar13;
          puVar20 = puVar20 + 1;
        } while (puVar13 != puVar11 + 4);
      }
      uVar7 = FUN_00027758(local_21c);
      local_234 = FUN_00027760(local_21c);
      while (iVar8 = FUN_0002776c(uVar7,local_234), iVar8 != 0) {
        uVar10 = FUN_00027758(uVar7);
        uVar17 = FUN_00027760(uVar7);
        FUN_000277b8(auStack_204,6,uVar10,uVar17,DAT_00023848);
        if (local_200 != 0) {
          piVar21[1] = piVar21[1] + 1;
        }
        uVar7 = FUN_00027798(uVar7,&local_234);
      }
      iVar8 = FUN_0001449c(piVar21[1] * 0xc);
      piVar21[2] = iVar8;
      if (iVar8 == 0) {
        return 1;
      }
      uVar7 = FUN_00027758(local_21c);
      iVar15 = DAT_00023850;
      local_234 = FUN_00027760(local_21c);
      iVar8 = 0;
      bVar1 = false;
      while (iVar14 = FUN_0002776c(uVar7,local_234), iVar14 != 0) {
        uVar10 = FUN_00027758(uVar7);
        uVar17 = FUN_00027760(uVar7);
        FUN_000277b8(auStack_204,6,uVar10,uVar17,DAT_00023848);
        if (local_200 != 0) {
          sVar5 = FUN_00027e90();
          iVar22 = iVar8 * 0xc;
          iVar19 = piVar21[2];
          *(undefined4 *)(iVar19 + iVar22 + 4) = 0;
          iVar23 = (int)sVar5;
          iVar14 = piVar21[2];
          *(short *)(iVar19 + iVar22 + 2) = sVar5;
          if (bVar1) {
            if (iVar23 < 4000) goto LAB_00023726;
LAB_0002379a:
            sVar5 = ((short)(int)((longlong)iVar23 * (longlong)iVar15 >> 0x21) - (sVar5 >> 0xf)) +
                    -1000;
LAB_000237c4:
            *(short *)(iVar19 + iVar22) = sVar5;
          }
          else {
            if (3999 < iVar23) {
              *piVar21 = 2;
              goto LAB_0002379a;
            }
            *piVar21 = 0;
LAB_00023726:
            if (iVar23 != 0x9b4) {
              sVar5 = (short)(int)((longlong)(iVar23 + -0x967) * (longlong)iVar15 >> 0x21) -
                      (short)(iVar23 + -0x967 >> 0x1f);
              goto LAB_000237c4;
            }
            *(undefined2 *)(iVar19 + iVar22) = 0xe;
          }
          if (local_1fc != 0) {
            *(uint *)(iVar14 + iVar22 + 4) = *(uint *)(iVar14 + iVar22 + 4) | 1;
          }
          if (local_1f8 != 0) {
            *(uint *)(iVar14 + iVar22 + 4) = *(uint *)(iVar14 + iVar22 + 4) | 2;
          }
          if (local_1f4 != 0) {
            *(uint *)(iVar14 + iVar22 + 4) = *(uint *)(iVar14 + iVar22 + 4) | 4;
          }
          if (local_1f0 != 0) {
            *(uint *)(iVar14 + iVar22 + 4) = *(uint *)(iVar14 + iVar22 + 4) | 8;
          }
          if ((local_1ec != 0) && (local_1fc == 0)) {
            uVar16 = FUN_00027e90();
            *(char *)(iVar22 + piVar21[2] + 8) =
                 (char)(uint)((ulonglong)uVar16 * (ulonglong)DAT_0002384c >> 0x25);
          }
          iVar8 = iVar8 + 1;
          bVar1 = true;
        }
        uVar7 = FUN_00027798(uVar7,&local_234);
      }
      uVar10 = FUN_00027758(local_218);
      uVar7 = DAT_00023854;
      local_230 = FUN_00027760(local_218);
      while (iVar8 = FUN_0002776c(uVar10,local_230), iVar8 != 0) {
        uVar17 = FUN_00027758(uVar10);
        uVar18 = FUN_00027760(uVar10);
        FUN_000277b8(auStack_22c,2,uVar17,uVar18,uVar7);
        if (local_228 != 0) {
          piVar21[3] = piVar21[3] + 1;
        }
        uVar10 = FUN_00027798(uVar10,&local_230);
      }
      iVar8 = FUN_0001449c(piVar21[3] << 2);
      piVar21[4] = iVar8;
      if (iVar8 == 0) {
        return 1;
      }
      uVar10 = FUN_00027758(local_218);
      uVar7 = DAT_00023854;
      local_230 = FUN_00027760(local_218);
      iVar8 = 0;
      while (iVar15 = FUN_0002776c(uVar10,local_230), iVar15 != 0) {
        uVar17 = FUN_00027758(uVar10);
        uVar18 = FUN_00027760(uVar10);
        FUN_000277b8(auStack_22c,2,uVar17,uVar18,uVar7);
        if (local_228 != 0) {
          iVar15 = FUN_00027e90();
          *(int *)(piVar21[4] + iVar8 * 4) = iVar15;
          if ((*piVar21 == 0) && (200 < iVar15)) {
            *piVar21 = 1;
          }
          iVar8 = iVar8 + 1;
        }
        uVar10 = FUN_00027798(uVar10,&local_230);
      }
      uVar6 = FUN_00027798(uVar6,&local_238);
    }
  }
  return 1;
}



/* ===== FUN_00023858 @ 00023858 size=148 ===== */

int FUN_00023858(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  int local_24 [2];
  
  local_24[0] = -0xc;
  iVar1 = FUN_0002b10c();
  if ((iVar1 != 0) && (local_24[0] = thunk_FUN_0002d84c(param_2,param_3), -1 < local_24[0])) {
    local_24[0] = 1;
    FUN_0002b290(iVar1,3,DAT_000238ec,local_24);
    FUN_0002b1d0(iVar1,1,3,DAT_000238f0,local_24);
    FUN_0002b1d0(iVar1,4,3,DAT_000238f4,local_24);
    if (param_4 != 0) {
      FUN_0002b1d0(iVar1,0,3,param_4,param_5);
    }
    while (0 < local_24[0]) {
      FUN_0002e3d4(param_2,iVar1);
    }
  }
  FUN_0002b150(iVar1);
  FUN_0002c0d0(param_3);
  return local_24[0];
}



/* ===== FUN_000238f8 @ 000238f8 size=24 ===== */

void FUN_000238f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00023858(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x78),param_2,param_3,
               param_4,param_2,param_3);
  return;
}



/* ===== FUN_00023910 @ 00023910 size=120 ===== */

undefined4 FUN_00023910(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  *(undefined4 *)(param_2 + 8) = DAT_00023988;
  *(undefined4 *)(param_2 + 0x10) = 0;
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x11,0);
    local_1c[0] = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,local_1c);
    if ((iVar3 < 0) || (iVar3 = FUN_00027c50(iVar1,6,6,param_1 + 0x9e), iVar3 < 0)) {
      uVar2 = 0xffffff97;
    }
    else {
      uVar2 = FUN_000238f8(param_1,iVar1,DAT_0002398c,param_2);
    }
  }
  return uVar2;
}



/* ===== FUN_00023990 @ 00023990 size=110 ===== */

undefined4 FUN_00023990(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  
  param_2[3] = 9999;
  *param_2 = *(undefined4 *)(param_1 + 0xd4);
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0x300,0x32,0);
    local_14 = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_14);
    if (iVar3 < 0) {
      uVar2 = 0xffffff97;
    }
    else {
      uVar2 = FUN_000238f8(param_1,iVar1,DAT_00023a00,param_2);
    }
  }
  return uVar2;
}



/* ===== FUN_00023a2e @ 00023a2e size=94 ===== */

undefined4 FUN_00023a2e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x10,0);
    local_14 = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_14);
    if (iVar3 < 0) {
      uVar2 = 0xffffff97;
    }
    else {
      uVar2 = FUN_000238f8(param_1,iVar1,0,0);
    }
  }
  return uVar2;
}



/* ===== FUN_00023a8c @ 00023a8c size=120 ===== */

undefined4 FUN_00023a8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,6,0);
    local_1c = param_2;
    iVar3 = FUN_00027c50(iVar1,3,4,&local_1c);
    if ((-1 < iVar3) && (local_1c = param_3, iVar3 = FUN_00027c50(iVar1,5,4,&local_1c), -1 < iVar3))
    {
      uVar2 = FUN_000238f8(param_1,iVar1,0,0);
      return uVar2;
    }
    uVar2 = 0xffffff97;
  }
  return uVar2;
}



/* ===== FUN_00023b04 @ 00023b04 size=82 ===== */

void FUN_00023b04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,8,0);
    local_1c[0] = param_2;
    iVar3 = FUN_00027c50(iVar1,3,4,local_1c);
    if (-1 < iVar3) {
      FUN_000238f8(param_1,iVar1,0,0);
    }
  }
  return;
}



/* ===== FUN_00023b56 @ 00023b56 size=30 ===== */

undefined4 FUN_00023b56(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  uVar1 = if_nametoindex(param_3);
  if ((int)uVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00023b04(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00023b74 @ 00023b74 size=54 ===== */

void FUN_00023b74(int param_1)

{
  if (-1 < *(int *)(param_1 + 0xdc)) {
    FUN_00023b04();
    *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0xd8)) {
    FUN_000146ac();
    close(*(int *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00023baa @ 00023baa size=130 ===== */

int FUN_00023baa(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar4 = *param_1;
  if (((int)((uint)*(byte *)(iVar4 + 0xe4) << 0x1f) < 0) && (iVar1 = FUN_0002bbd0(), iVar1 != 0)) {
    uVar2 = FUN_00033eec(*(undefined4 *)(iVar4 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x38,0);
    local_18 = *(undefined4 *)(iVar4 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_18);
    if (-1 < iVar3) {
      local_18 = *(undefined4 *)(iVar4 + 0xe8);
      uStack_14 = *(undefined4 *)(iVar4 + 0xec);
      iVar3 = FUN_00027c50(iVar1,0x58,8,&local_18);
      if (-1 < iVar3) {
        iVar4 = FUN_000238f8(iVar4,iVar1,0,0);
        return -(uint)(iVar4 != 0);
      }
    }
  }
  return -1;
}



/* ===== FUN_00023c2c @ 00023c2c size=146 ===== */

undefined4 FUN_00023c2c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  iVar4 = *param_1;
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(iVar4 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x37,0);
    local_20._0_4_ = *(undefined4 *)(iVar4 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_20);
    if ((-1 < iVar3) &&
       (local_20._0_4_ = param_2, iVar3 = FUN_00027c50(iVar1,0x26,4,&local_20), -1 < iVar3)) {
      local_20 = CONCAT44(local_20._4_4_,param_3);
      iVar3 = FUN_00027c50(iVar1,0x57,4,&local_20);
      if (-1 < iVar3) {
        local_20 = 0;
        iVar1 = FUN_000238f8(iVar4,iVar1,DAT_00023cc0,&local_20);
        if (iVar1 == 0) {
          *(undefined4 *)(iVar4 + 0xe8) = (undefined4)local_20;
          *(undefined4 *)(iVar4 + 0xec) = local_20._4_4_;
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00023cc4 @ 00023cc4 size=184 ===== */

int FUN_00023cc4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24 [2];
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,2,0);
    local_24[0] = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,local_24);
    if ((-1 < iVar3) &&
       (local_24[0] = param_2, iVar3 = FUN_00027c50(iVar1,0x26,4,local_24), -1 < iVar3)) {
      if (param_3 != 0) {
        if (param_4 == -1) {
          local_24[0] = 2;
          iVar3 = FUN_00027c50(iVar1,0x27,4,local_24);
          if (iVar3 < 0) {
            return -1;
          }
        }
        else {
          if (param_4 == 1) {
            local_24[0] = 3;
          }
          else {
            local_24[0] = 1;
          }
          iVar3 = FUN_00027c50(iVar1,0x27,4,local_24);
          if (iVar3 < 0) {
            return -1;
          }
        }
      }
      iVar1 = FUN_000238f8(param_1,iVar1,0);
      return -(uint)(iVar1 != 0);
    }
  }
  return -1;
}



/* ===== FUN_00023df8 @ 00023df8 size=216 ===== */

int FUN_00023df8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x3b,0);
    local_28 = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_28);
    if ((((iVar3 < 0) ||
         (local_28 = param_2, iVar3 = FUN_00027c50(iVar1,0x26,4,&local_28), iVar3 < 0)) ||
        (local_28 = param_3, iVar3 = FUN_00027c50(iVar1,0x57,4,&local_28), iVar3 < 0)) ||
       ((iVar3 = FUN_00027c50(iVar1,0x6c,0,0), iVar3 < 0 ||
        (iVar3 = FUN_00027c50(iVar1,0x33,param_5,param_4), iVar3 < 0)))) {
      iVar3 = -1;
    }
    else {
      local_28 = 0;
      uStack_24 = 0;
      iVar3 = FUN_000238f8(param_1,iVar1,DAT_00023ed0,&local_28);
      if (iVar3 == 0) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_28;
          param_6[1] = uStack_24;
        }
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
      }
    }
    FUN_0002c0d0(iVar1);
    return iVar3;
  }
  return -1;
}



/* ===== FUN_00023ed4 @ 00023ed4 size=178 ===== */

undefined4
FUN_00023ed4(int param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
  FUN_00034344(iVar1,0,0,uVar2,0,0,param_3,0);
  local_24 = *(undefined4 *)(param_1 + 0x40);
  iVar3 = FUN_00027c50(iVar1,3,4,&local_24);
  if (-1 < iVar3) {
    local_24 = CONCAT22(local_24._2_2_,param_4);
    iVar3 = FUN_00027c50(iVar1,0x36,2,&local_24);
    if (((-1 < iVar3) && (iVar3 = FUN_00027c50(iVar1,6,6,param_2), -1 < iVar3)) &&
       ((param_5 == 0 || (iVar3 = FUN_00027c50(iVar1,0x5f,0,0), -1 < iVar3)))) {
      uVar2 = FUN_000238f8(param_1,iVar1,0);
      iVar1 = 0;
      goto LAB_00023f60;
    }
  }
  uVar2 = 0xffffffff;
LAB_00023f60:
  FUN_0002c0d0(iVar1);
  return uVar2;
}



/* ===== FUN_00023f86 @ 00023f86 size=106 ===== */

undefined4 FUN_00023f86(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x2c,0);
    local_14 = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_14);
    if (iVar3 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_000238f8(param_1,iVar1,0,0);
      iVar1 = 0;
    }
    FUN_0002c0d0(iVar1);
  }
  return uVar2;
}



/* ===== FUN_00023ff0 @ 00023ff0 size=60 ===== */

void FUN_00023ff0(int *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0x5c) & 0x20) == 0) {
    uVar2 = 0x30;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    if (*(int *)(iVar1 + 0xcc) == 1) {
      FUN_00023f86();
      return;
    }
    uVar2 = 0x27;
  }
  FUN_00023ed4(iVar1,param_2,uVar2,param_3,0,param_2);
  return;
}



/* ===== FUN_00024388 @ 00024388 size=174 ===== */

undefined4 FUN_00024388(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24 [2];
  
  iVar5 = *param_1;
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(iVar5 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x3f,0);
    local_24[0] = param_1[2];
    iVar3 = FUN_00027c50(iVar1,3,4,local_24);
    if (-1 < iVar3) {
      iVar3 = FUN_0002bbd0();
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      local_24[0] = param_2;
      iVar4 = FUN_00027c50(iVar3,1,4,local_24);
      if ((-1 < iVar4) &&
         (local_24[0] = param_3, iVar4 = FUN_00027c50(iVar3,2,4,local_24), -1 < iVar4)) {
        FUN_00027fec(iVar1,0x5e,iVar3);
        iVar1 = FUN_000238f8(iVar5,iVar1,0,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = 0;
      }
      FUN_0002c0d0(iVar3);
    }
    FUN_0002c0d0(iVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_00024556 @ 00024556 size=700 ===== */

int FUN_00024556(char *param_1,int *param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7,int param_8,undefined4 param_9,int param_10)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_2c [2];
  
  iVar6 = *param_2;
  uVar1 = if_nametoindex(param_1);
  iVar2 = FUN_0002bbd0();
  if (iVar2 == 0) {
    return -0xc;
  }
  if (param_3 == 0) {
    uVar3 = FUN_00033eec(*(undefined4 *)(iVar6 + 0x94));
    FUN_00034344(iVar2,0,0,uVar3,0,0,0xc,0);
  }
  else {
    uVar3 = FUN_00033eec(*(undefined4 *)(iVar6 + 0x94));
    FUN_00034344(iVar2,0,0,uVar3,0,0,0xb,0);
    iVar4 = FUN_00027c50(iVar2,7,param_10,param_9);
    if (iVar4 < 0) {
      return -0x69;
    }
    switch(param_3) {
    case 1:
      local_2c[0] = DAT_00024818;
      if (param_10 != 5) {
        local_2c[0] = DAT_0002481c;
      }
      break;
    case 2:
      local_2c[0] = DAT_00024820;
      break;
    case 3:
      local_2c[0] = DAT_00024824;
      break;
    case 4:
      local_2c[0] = DAT_00024828;
      break;
    default:
      FUN_0002c0d0(iVar2);
      return -1;
    }
    iVar4 = FUN_00027c50(iVar2,9,4,local_2c);
    if (iVar4 < 0) {
      return -0x69;
    }
  }
  if (((param_7 != 0) && (param_8 != 0)) &&
     (iVar4 = FUN_00027c50(iVar2,10,param_8,param_7), iVar4 < 0)) {
    return -0x69;
  }
  if (param_4 != 0) {
    iVar4 = FUN_00022cf8(param_4);
    if (iVar4 == 0) {
      iVar4 = FUN_00027c50(iVar2,6,6,param_4);
      if (iVar4 < 0) {
        return -0x69;
      }
      if (((param_3 != 1) && (param_5 != 0)) && (param_6 == 0)) {
        local_2c[0] = param_6;
        iVar4 = FUN_00027c50(iVar2,0x37,4,local_2c);
        if (iVar4 < 0) {
          return -0x69;
        }
      }
    }
    else {
      iVar4 = FUN_0002bbd0();
      if (iVar4 == 0) {
        return -0x69;
      }
      iVar5 = FUN_00027c50(iVar4,2,0);
      if (iVar5 < 0) {
        return -0x69;
      }
      iVar5 = FUN_00027fec(iVar2,0x6e,iVar4);
      FUN_0002c0d0(iVar4);
      if (iVar5 != 0) {
        return -0x69;
      }
    }
  }
  local_2c[0] = CONCAT31(local_2c[0]._1_3_,(char)param_5);
  iVar4 = FUN_00027c50(iVar2,8,1,local_2c);
  if (iVar4 < 0) {
    return -0x69;
  }
  local_2c[0] = uVar1;
  iVar4 = FUN_00027c50(iVar2,3,4,local_2c);
  if (-1 < iVar4) {
    iVar2 = FUN_000238f8(iVar6,iVar2,0);
    if ((iVar2 == -2) || (iVar2 == -0x43)) {
      if (param_3 != 0) {
        return iVar2;
      }
    }
    else {
      if (iVar2 != 0) {
        return iVar2;
      }
      if (((param_6 != 0) && (param_3 != 0)) &&
         ((*(int *)(iVar6 + 0xcc) != 3 ||
          ((param_4 == 0 || (iVar2 = FUN_00022cf8(param_4), iVar2 != 0)))))) {
        iVar2 = FUN_0002bbd0();
        if (iVar2 == 0) {
          return -0xc;
        }
        uVar3 = FUN_00033eec(*(undefined4 *)(iVar6 + 0x94));
        FUN_00034344(iVar2,0,0,uVar3,0,0,10,0);
        local_2c[0] = CONCAT31(local_2c[0]._1_3_,(char)param_5);
        iVar4 = FUN_00027c50(iVar2,8,1,local_2c);
        if ((-1 < iVar4) &&
           (local_2c[0] = uVar1, iVar4 = FUN_00027c50(iVar2,3,4,local_2c), -1 < iVar4)) {
          if (param_3 == 4) {
            uVar3 = 0x28;
          }
          else {
            uVar3 = 0xb;
          }
          iVar4 = FUN_00027c50(iVar2,uVar3,0,0);
          if (-1 < iVar4) {
            if (param_4 != 0) {
              iVar4 = FUN_00022cf8(param_4);
              if (iVar4 == 0) {
                iVar4 = FUN_0002bbd0();
                if (iVar4 == 0) {
                  return -0x69;
                }
                uVar3 = 1;
              }
              else {
                iVar4 = FUN_0002bbd0();
                if (iVar4 == 0) {
                  return -0x69;
                }
                uVar3 = 2;
              }
              iVar5 = FUN_00027c50(iVar4,uVar3,0,0);
              if (iVar5 < 0) {
                return -0x69;
              }
              iVar5 = FUN_00027fec(iVar2,0x6e,iVar4);
              FUN_0002c0d0(iVar4);
              if (iVar5 != 0) {
                return -0x69;
              }
            }
            iVar2 = FUN_000238f8(iVar6,iVar2,0);
            if (iVar2 == -2) {
              return 0;
            }
            return iVar2;
          }
        }
        return -0x69;
      }
    }
    return 0;
  }
  return -0x69;
}



/* ===== FUN_0002482c @ 0002482c size=114 ===== */

undefined4 FUN_0002482c(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  char local_14;
  char local_13;
  undefined1 local_12;
  
  iVar5 = *param_1;
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    local_14 = *param_2;
    local_13 = param_2[1];
    local_12 = 0;
    uVar2 = FUN_00033eec(*(undefined4 *)(iVar5 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x1b,0);
    sVar3 = strlen(&local_14);
    iVar4 = FUN_00027c50(iVar1,0x21,sVar3 + 1,&local_14);
    if ((iVar4 < 0) || (iVar1 = FUN_000238f8(iVar5,iVar1,0,0), uVar2 = 0, iVar1 != 0)) {
      uVar2 = 0xffffffea;
    }
  }
  return uVar2;
}



/* ===== FUN_0002489e @ 0002489e size=342 ===== */

uint FUN_0002489e(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_2c [2];
  
  iVar8 = *param_1;
  iVar1 = FUN_0002bbd0();
  iVar2 = FUN_0002bbd0();
  iVar3 = FUN_0002bbd0();
  if (((iVar1 == 0) || (iVar2 == 0)) || (iVar3 == 0)) {
    uVar7 = 0xffffffff;
    FUN_0002c0d0(iVar1);
    FUN_0002c0d0(iVar2);
    FUN_0002c0d0(iVar3);
  }
  else {
    uVar7 = 0;
    free(*(void **)(iVar8 + 0xfc));
    uVar4 = *(undefined4 *)(iVar8 + 0x94);
    *(undefined4 *)(iVar8 + 0xfc) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(iVar8 + 0x100) = *(undefined4 *)(param_2 + 0x34);
    uVar4 = FUN_00033eec(uVar4);
    FUN_00034344(iVar1,0,0,uVar4,0,0,0x21,0);
    local_2c[0] = *(int *)(iVar8 + 0x40);
    iVar5 = FUN_00027c50(iVar1,3,4,local_2c);
    if (-1 < iVar5) {
      do {
        if (*(uint *)(param_2 + 0x20) <= uVar7) {
          if (*(uint *)(param_2 + 0x20) != 0) {
            FUN_00027fec(iVar1,0x2d,iVar2);
          }
          if ((*(int *)(param_2 + 0x24) == 0) ||
             (iVar5 = FUN_00027c50(iVar1,0x2a,*(undefined4 *)(param_2 + 0x28)), -1 < iVar5)) {
            if (*(int *)(param_2 + 0x2c) == 0) goto LAB_0002494e;
            iVar5 = 0;
            goto LAB_000249da;
          }
          break;
        }
        iVar5 = FUN_00027c50(iVar2,uVar7 + 1,*(undefined4 *)(param_2 + 4 + uVar7 * 8),
                             *(undefined4 *)(param_2 + uVar7 * 8));
        uVar7 = uVar7 + 1;
      } while (-1 < iVar5);
LAB_000249a0:
      uVar7 = 0;
    }
LAB_000249a2:
    FUN_0002c0d0(iVar2);
    FUN_0002c0d0(iVar1);
    FUN_0002c0d0(iVar3);
  }
  return uVar7;
LAB_000249da:
  iVar6 = *(int *)(*(int *)(param_2 + 0x2c) + iVar5 * 4);
  if (iVar6 != 0) goto LAB_000249c6;
  FUN_00027fec(iVar1,0x2c,iVar3);
LAB_0002494e:
  uVar7 = FUN_000238f8(iVar8,iVar1,0);
  if (uVar7 == 0) {
    if (*(int *)(iVar8 + 0x74) == 0) {
      uVar4 = 10;
    }
    else {
      uVar4 = 0x1e;
    }
    FUN_00014758(DAT_000249f4,iVar8,*(undefined4 *)(iVar8 + 0x34));
    FUN_000146b2(uVar4,0,DAT_000249f4,iVar8,*(undefined4 *)(iVar8 + 0x34));
  }
  iVar1 = 0;
  goto LAB_000249a2;
LAB_000249c6:
  iVar5 = iVar5 + 1;
  local_2c[0] = iVar6;
  iVar6 = FUN_00027c50(iVar3,iVar5,4,local_2c);
  if (iVar6 < 0) goto LAB_000249a0;
  goto LAB_000249da;
}



/* ===== FUN_00024b94 @ 00024b94 size=158 ===== */

undefined4
FUN_00024b94(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24 [2];
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
  FUN_00034344(iVar1,0,0,uVar2,0,0,0x3a,0);
  local_24[0] = *(undefined4 *)(param_1 + 0x40);
  iVar3 = FUN_00027c50(iVar1,3,4,local_24);
  if (-1 < iVar3) {
    local_24[0] = CONCAT22(local_24[0]._2_2_,param_3);
    iVar3 = FUN_00027c50(iVar1,0x65,2,local_24);
    if ((-1 < iVar3) && (iVar3 = FUN_00027c50(iVar1,0x5b,param_5,param_4), -1 < iVar3)) {
      iVar3 = 0;
      uVar2 = FUN_00023858(*(undefined4 *)(param_1 + 0x90),param_2,iVar1,0,0);
      goto LAB_00024c1e;
    }
  }
  uVar2 = 0xffffffff;
  iVar3 = iVar1;
LAB_00024c1e:
  FUN_0002c0d0(iVar3);
  return uVar2;
}



/* ===== FUN_00024c32 @ 00024c32 size=174 ===== */

undefined4 FUN_00024c32(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (*(int *)(iVar3 + 0xcc) == 2) {
    if (param_2 == 0) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        return 0;
      }
      FUN_0002f748();
      FUN_000146ac();
      FUN_00028eac(*(undefined4 *)(iVar3 + 0x8c));
      FUN_0002f310(*(undefined4 *)(iVar3 + 0x80));
      *(undefined4 *)(iVar3 + 0x80) = 0;
      return 0;
    }
    if (*(int *)(iVar3 + 0x80) != 0) {
      return 0;
    }
    iVar1 = FUN_0002f2b0(*(undefined4 *)(iVar3 + 0x90));
    *(int *)(iVar3 + 0x80) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_0003419c();
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0003383c(*(undefined4 *)(iVar3 + 0x80),iVar3 + 0x8c), -1 < iVar1)) {
        iVar1 = FUN_00024b94(iVar3,*(undefined4 *)(iVar3 + 0x80),0x40,0,0);
        if (-1 < iVar1) {
          uVar2 = FUN_0002f748(*(undefined4 *)(iVar3 + 0x80));
          FUN_00014640(uVar2,DAT_00024ce0,iVar3,*(undefined4 *)(iVar3 + 0x80));
          return 0;
        }
        FUN_00028eac(*(undefined4 *)(iVar3 + 0x8c));
      }
      FUN_0002f310(*(undefined4 *)(iVar3 + 0x80));
      *(undefined4 *)(iVar3 + 0x80) = 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00024ce4 @ 00024ce4 size=26 ===== */

void FUN_00024ce4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x5c) << 0x1a < 0) {
    FUN_00023ed4(param_1,param_2,0x27,2,1,param_2,param_3);
  }
  return;
}



/* ===== FUN_00024cfe @ 00024cfe size=104 ===== */

int FUN_00024cfe(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_54 [2];
  undefined1 local_4c [4];
  undefined2 local_48 [2];
  iovec local_44;
  undefined4 uStack_3c;
  undefined4 local_38;
  msghdr local_34;
  
  puVar5 = DAT_00024d68;
  puVar1 = local_54;
  do {
    puVar6 = puVar1;
    puVar4 = puVar5;
    puVar5 = puVar4 + 2;
    uVar3 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar3;
    puVar1 = puVar6 + 2;
  } while (puVar5 != DAT_00024d68 + 2);
  uVar3 = *puVar5;
  *(undefined2 *)(puVar6 + 3) = *(undefined2 *)(puVar4 + 3);
  puVar6[2] = uVar3;
  local_44.iov_len = 0xe;
  local_34.msg_iov = &local_44;
  local_34.msg_name = (void *)0x0;
  local_34.msg_namelen = 0;
  local_34.msg_iovlen = 2;
  local_34.msg_control = (void *)0x0;
  local_34.msg_controllen = 0;
  local_34.msg_flags = 0;
  if (param_4 != 0) {
    local_4c[0] = 0xc;
  }
  local_44.iov_base = local_54;
  uStack_3c = param_2;
  local_38 = param_3;
  sVar2 = sendmsg(param_1,&local_34,0);
  return sVar2 >> 0x1f;
}



/* ===== FUN_00024d74 @ 00024d74 size=92 ===== */

void FUN_00024d74(int *param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = *param_1;
  uVar2 = (uint)*param_2;
  uVar3 = (uVar2 & 0xf) >> 2;
  if (*(int *)(iVar1 + 0xcc) == 2) {
    if (uVar3 == 0) {
      if ((uVar2 & 0xff) >> 4 == 5) {
        FUN_00023df8(iVar1,*(undefined4 *)(iVar1 + 0xf8),0,param_2,param_3,0,param_3);
        return;
      }
LAB_00024da6:
      if ((uVar2 & 0xff) >> 4 == 0xb) {
        if (param_2[0xc] == 1) {
          bVar4 = param_2[0xd] == 3;
        }
        else {
          bVar4 = false;
        }
        goto LAB_00024dbc;
      }
    }
  }
  else if (uVar3 == 0) goto LAB_00024da6;
  bVar4 = true;
LAB_00024dbc:
  FUN_00024cfe(*(undefined4 *)(iVar1 + 0xd8),param_2,param_3,bVar4);
  return;
}



/* ===== FUN_00024dd0 @ 00024dd0 size=148 ===== */

undefined4
FUN_00024dd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,void *param_7,size_t param_8)

{
  undefined1 *__ptr;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = *param_1;
  iVar3 = param_8 + 0x18;
  piVar4 = param_1;
  uVar1 = param_2;
  uVar5 = param_3;
  __ptr = (undefined1 *)FUN_0001449c(iVar3);
  if (__ptr == (undefined1 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(__ptr + 0x18,param_7,param_8);
    *__ptr = 0xd0;
    __ptr[1] = 0;
    *(undefined4 *)(__ptr + 4) = *param_4;
    *(undefined2 *)(__ptr + 8) = *(undefined2 *)(param_4 + 1);
    *(undefined4 *)(__ptr + 10) = *param_5;
    *(undefined2 *)(__ptr + 0xe) = *(undefined2 *)(param_5 + 1);
    *(undefined4 *)(__ptr + 0x10) = *param_6;
    *(undefined2 *)(__ptr + 0x14) = *(undefined2 *)(param_6 + 1);
    if (*(int *)(iVar2 + 0xcc) == 3) {
      uVar1 = FUN_00024d74(param_1,__ptr,iVar3,param_6,piVar4,uVar1);
    }
    else {
      uVar1 = FUN_00023df8(iVar2,param_2,param_3,__ptr,iVar3,iVar2 + 0xf0,uVar5);
    }
    free(__ptr);
  }
  return uVar1;
}



/* ===== FUN_00024e64 @ 00024e64 size=148 ===== */

undefined4 FUN_00024e64(int *param_1,int param_2,undefined4 *param_3,void *param_4,size_t param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *__ptr;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined2 local_2c;
  
  iVar4 = *param_1;
  iVar2 = FUN_00027138(*(undefined4 *)(iVar4 + 0x3c),param_1 + 3,&local_30);
  if ((-1 < iVar2) && (param_2 == 1)) {
    __ptr = malloc(param_5 + 0xe);
    if (__ptr != (undefined2 *)0x0) {
      *__ptr = 0x106;
      *(undefined4 *)(__ptr + 1) = local_30;
      uVar3 = *param_3;
      __ptr[3] = local_2c;
      uVar1 = *(undefined2 *)(param_3 + 1);
      *(undefined4 *)(__ptr + 4) = uVar3;
      __ptr[6] = uVar1;
      memcpy(__ptr + 7,param_4,param_5);
      uVar3 = FUN_00024dd0(param_1,*(undefined4 *)(iVar4 + 0xd4),0,iVar4 + 0x9e,&local_30,
                           iVar4 + 0x9e,__ptr,param_5 + 0xe);
      free(__ptr);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00024fc0 @ 00024fc0 size=156 ===== */

undefined4 FUN_00024fc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,0x39,0);
    local_1c = param_2;
    iVar3 = FUN_00027c50(iVar1,3,4,&local_1c);
    if ((((-1 < iVar3) && (iVar3 = FUN_00028090(iVar1,0x5a), iVar3 != 0)) &&
        (iVar4 = FUN_00028090(iVar1,0), iVar4 != 0)) &&
       (iVar5 = FUN_00027c50(iVar1,1,8,DAT_0002505c), -1 < iVar5)) {
      FUN_000281ec(iVar1,iVar4);
      FUN_000281ec(iVar1,iVar3);
      uVar2 = FUN_000238f8(param_1,iVar1,0,0);
      return uVar2;
    }
    FUN_0002c0d0(iVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_0002506a @ 0002506a size=236 ===== */

undefined4 FUN_0002506a(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar9;
  int iVar10;
  undefined4 local_2c;
  undefined4 uStack_28;
  int *piVar8;
  
  piVar7 = (int *)(param_1 + 0x2c);
  do {
    piVar8 = piVar7 + 1;
    if (*piVar7 != 0) {
      bVar1 = true;
      break;
    }
    bVar1 = false;
    piVar7 = piVar8;
  } while (piVar8 != (int *)(param_1 + 0x3c));
  if (*(int *)(param_1 + 0x70) == 2) {
    bVar1 = true;
  }
  if ((1 < *(uint *)(param_1 + 0x18)) || (uVar4 = 0, bVar1)) {
    iVar10 = param_1;
    local_2c = param_2;
    uStack_28 = param_3;
    iVar3 = FUN_00027c50(param_2,0x46,0,0,param_1);
    if ((iVar3 < 0) ||
       (iVar3 = FUN_00028090(param_2,0x51), uVar2 = DAT_0002515c, uVar4 = DAT_00025158, iVar3 == 0))
    {
LAB_000250a6:
      uVar4 = 0xffffff97;
    }
    else {
      iVar9 = 0;
      piVar7 = (int *)(param_1 + 0x2c);
      do {
        if (*piVar7 != 0) {
          iVar5 = FUN_00028090(param_2,iVar9);
          if ((iVar5 == 0) || (iVar6 = FUN_00027c50(param_2,1,piVar7[4],*piVar7,iVar10), iVar6 < 0))
          goto LAB_000250a6;
          if (piVar7[4] == 5) {
            local_2c = uVar2;
          }
          else {
            local_2c = uVar4;
          }
          iVar6 = FUN_00027c50(param_2,3,4,&local_2c);
          if (iVar6 < 0) goto LAB_000250a6;
          local_2c = CONCAT31(local_2c._1_3_,(char)iVar9);
          iVar6 = FUN_00027c50(param_2,2,1,&local_2c);
          if ((iVar6 < 0) ||
             ((*(int *)(param_1 + 0x4c) == iVar9 && (iVar6 = FUN_00027c50(param_2,5,0), iVar6 < 0)))
             ) goto LAB_000250a6;
          FUN_000281ec(param_2,iVar5);
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar9 != 4);
      FUN_000281ec(param_2,iVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== FUN_00025160 @ 00025160 size=188 ===== */

void FUN_00025160(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 *local_144;
  int aiStack_140 [9];
  int local_11c;
  undefined4 local_e0 [51];
  
  memset(&local_144,0,100);
  local_148 = param_2;
  if (*(int *)(param_3 + 0xb4) != 0) {
    uVar1 = FUN_00027758();
    local_14c = FUN_00027760(*(undefined4 *)(param_3 + 0xb4));
    while (iVar2 = FUN_0002776c(uVar1,local_14c), iVar4 = local_11c, iVar2 != 0) {
      iVar2 = FUN_00027758(uVar1);
      aiStack_140[(iVar4 + 1) * 2 + -1] = iVar2;
      iVar2 = FUN_00027760(uVar1);
      local_11c = local_11c + 1;
      bVar5 = local_11c == 4;
      aiStack_140[(iVar4 + 1) * 2] = iVar2;
      if (bVar5) break;
      uVar1 = FUN_00027798(uVar1,&local_14c);
    }
  }
  if (*(int *)(param_3 + 0xb0) != 0) {
    uVar1 = FUN_00027758();
    iVar4 = 0;
    local_14c = FUN_00027760(*(undefined4 *)(param_3 + 0xb0));
    while (iVar2 = FUN_0002776c(uVar1,local_14c), local_144 = local_e0, aiStack_140[0] = iVar4,
          iVar2 != 0) {
      uVar3 = FUN_00027e90(uVar1);
      local_e0[iVar4] = uVar3;
      iVar4 = iVar4 + 1;
      aiStack_140[0] = iVar4;
      if (iVar4 == 0x31) break;
      uVar1 = FUN_00027798(uVar1,&local_14c);
    }
  }
  FUN_0001ff44(*param_1,3,&local_148);
  return;
}



/* ===== FUN_0002521c @ 0002521c size=40 ===== */

void FUN_0002521c(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    free(*(void **)((int)*param_1 + uVar1 * 4));
  }
  free((void *)*param_1);
  free(param_1);
  return;
}



/* ===== FUN_00025244 @ 00025244 size=122 ===== */

int FUN_00025244(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int iStack_14;
  
  iVar1 = FUN_0001449c(8);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0002bbd0();
  if (iVar2 != 0) {
    uVar3 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar2,0,0,uVar3,0,0x300,0x20,0);
    local_18 = *(int *)(param_1 + 0x40);
    iVar4 = FUN_00027c50(iVar2,3,4,&local_18);
    if (iVar4 < 0) goto LAB_0002525e;
    local_18 = param_1;
    iStack_14 = iVar1;
    iVar2 = FUN_000238f8(param_1,iVar2,DAT_000252c0,&local_18);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  iVar2 = 0;
LAB_0002525e:
  FUN_0002c0d0(iVar2);
  FUN_0002521c(iVar1);
  return 0;
}



/* ===== FUN_00025558 @ 00025558 size=252 ===== */

uint FUN_00025558(int param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int local_24;
  
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
LAB_0002556e:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar1,0,0,uVar2,0,0,7,0);
    local_24 = *(int *)(param_1 + 0x40);
    iVar3 = FUN_00027c50(iVar1,3,4,&local_24);
    if (-1 < iVar3) {
      sVar4 = strlen(param_2);
      iVar3 = FUN_00027c50(iVar1,4,sVar4 + 1,param_2);
      if ((-1 < iVar3) &&
         (local_24 = param_3, iVar3 = FUN_00027c50(iVar1,5,4,&local_24), -1 < iVar3)) {
        if (param_3 != 6) {
LAB_000255e4:
          uVar6 = FUN_000238f8(param_1,iVar1,0);
          if (uVar6 != 0) {
            return uVar6;
          }
          uVar6 = if_nametoindex(param_2);
          if (0 < (int)uVar6) {
            if (param_4 == 0) {
              return uVar6;
            }
            if (param_3 == 6) {
              return uVar6;
            }
            iVar1 = FUN_00027184(*(undefined4 *)(param_1 + 0x3c),param_2,param_4);
            if (iVar1 == 0) {
              return uVar6;
            }
            FUN_00023b04(param_1,uVar6);
          }
          goto LAB_0002556e;
        }
        iVar3 = FUN_0002bbd0();
        if ((iVar3 != 0) && (iVar5 = FUN_00027c50(iVar3,5,0,0), -1 < iVar5)) {
          iVar5 = FUN_00027fec(iVar1,0x17,iVar3);
          FUN_0002c0d0(iVar3);
          if (iVar5 == 0) goto LAB_000255e4;
        }
      }
    }
    uVar6 = 0xffffff97;
  }
  return uVar6;
}



/* ===== FUN_00025654 @ 00025654 size=84 ===== */

int FUN_00025654(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00025558();
  if (iVar1 == -0x17) {
    uVar2 = if_nametoindex(param_2);
    if (uVar2 == 0) {
      return -0x17;
    }
    uVar2 = if_nametoindex(param_2);
    FUN_00023b04(param_1,uVar2);
    iVar1 = FUN_00025558(param_1,param_2,param_3,param_4);
  }
  if ((-1 < iVar1) && (*(int *)(param_1 + 0xe0) != 0)) {
    FUN_00024fc0(param_1,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000256a8 @ 000256a8 size=94 ===== */

undefined4 FUN_000256a8(int *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_stack_0000000c;
  
  iVar4 = *param_1;
  if (param_4 != (undefined4 *)0x0) {
    *in_stack_0000000c = *param_4;
    *(undefined2 *)(in_stack_0000000c + 1) = *(undefined2 *)(param_4 + 1);
  }
  if (param_2 < 6) {
    uVar3 = (uint)*(byte *)(DAT_00025708 + param_2 + 0x14);
  }
  else {
    uVar3 = 0xffffffff;
  }
  iVar1 = FUN_00025654(iVar4,param_3,uVar3,param_4);
  if (-1 < iVar1) {
    if ((param_4 != (undefined4 *)0x0) ||
       (iVar2 = FUN_00027138(*(undefined4 *)(iVar4 + 0x3c),param_1 + 3,in_stack_0000000c),
       -1 < iVar2)) {
      return 0;
    }
    FUN_00023b04(iVar4,iVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_0002570c @ 0002570c size=472 ===== */

int FUN_0002570c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *__s;
  char cVar4;
  char cVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_48;
  char acStack_44 [15];
  undefined1 local_35;
  sockaddr local_34;
  undefined2 uStack_24;
  char acStack_22 [2];
  
  iVar8 = *param_1;
  if (param_2 < 3) {
    iVar9 = (int)*(char *)(DAT_000258e4 + param_2 + 0x1a);
    iVar2 = FUN_00023a8c(iVar8,*(undefined4 *)(iVar8 + 0x40),iVar9);
    uVar1 = DAT_0002590c;
    if (iVar2 == 0) {
LAB_0002572e:
      *(int *)(iVar8 + 0xcc) = iVar9;
    }
    else if (*(int *)(iVar8 + 0xcc) != iVar9) {
      iVar10 = 10;
      iVar2 = -1;
      do {
        iVar3 = FUN_000270c8(*(undefined4 *)(iVar8 + 0x3c),param_1 + 3,0);
        if (iVar3 == 0) {
          iVar2 = FUN_00023a8c(iVar8,*(undefined4 *)(iVar8 + 0x40),iVar9);
          iVar3 = FUN_000270c8(*(undefined4 *)(iVar8 + 0x3c),param_1 + 3,1);
          if (iVar3 == 0) {
            if (iVar2 == 0) goto LAB_0002572e;
          }
          else {
            iVar2 = -1;
          }
        }
        FUN_00014220(0,uVar1);
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          return iVar2;
        }
      } while( true );
    }
    if (iVar9 == 3) {
      if (*(int *)(iVar8 + 0xdc) < 0) {
        snprintf(acStack_44,0x10,DAT_000258e8,iVar8 + 0x110);
        local_35 = 0;
        iVar2 = FUN_00025654(iVar8,acStack_44,6);
        *(int *)(iVar8 + 0xdc) = iVar2;
        if (-1 < iVar2) {
          iVar2 = FUN_000270c8(*(undefined4 *)(iVar8 + 0x3c),acStack_44,1);
          if (iVar2 == 0) {
            local_34.sa_family = 0x11;
            local_34.sa_data[0] = '\0';
            local_34.sa_data[1] = '\0';
            local_34.sa_data._6_2_ =
                 SUB42((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4) >> 0x10,
                       0);
            local_34.sa_data._8_2_ =
                 SUB42(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8),0);
            local_34.sa_data[10] = '\0';
            local_34.sa_data[0xb] = '\0';
            local_34.sa_data[0xc] = '\0';
            local_34.sa_data[0xd] = '\0';
            uStack_24 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            local_34.sa_data._2_2_ = SUB42(*(undefined4 *)(iVar8 + 0xdc),0);
            local_34.sa_data._4_2_ = SUB42((uint)*(undefined4 *)(iVar8 + 0xdc) >> 0x10,0);
            acStack_22 = (char  [2])local_34.sa_data._6_2_;
            iVar2 = socket(0x11,3,0x300);
            *(int *)(iVar8 + 0xd8) = iVar2;
            __s = DAT_000258fc;
            if (-1 < iVar2) {
              puVar7 = (ushort *)(DAT_000258ec + 0x158);
              for (uVar6 = (uint)*(ushort *)(DAT_000258ec + 0x240); uVar6 != 0; uVar6 = uVar6 - 1) {
                if ((*puVar7 & 7) == 5) {
                  if (*puVar7 == 5) {
                    if (*(int *)(puVar7 + 2) == 0xff) {
                      iVar9 = uVar6 - 2;
                    }
                    else {
                      if (*(int *)(puVar7 + 2) != 0xfe) goto LAB_00025862;
                      iVar9 = uVar6 - 3;
                    }
                    *(int *)(puVar7 + 2) = iVar9;
                  }
LAB_00025862:
                  cVar5 = (char)uVar6;
                  if ((char)puVar7[1] == -1) {
                    cVar4 = cVar5 + -2;
LAB_0002586a:
                    *(char *)(puVar7 + 1) = cVar4;
                  }
                  else if ((char)puVar7[1] == -2) {
                    cVar4 = cVar5 + -3;
                    goto LAB_0002586a;
                  }
                  if (*(char *)((int)puVar7 + 3) == -1) {
                    cVar5 = cVar5 + -2;
                  }
                  else {
                    if (*(char *)((int)puVar7 + 3) != -2) goto LAB_00025876;
                    cVar5 = cVar5 + -3;
                  }
                  *(char *)((int)puVar7 + 3) = cVar5;
                }
LAB_00025876:
                puVar7 = puVar7 + 4;
              }
              iVar2 = setsockopt(iVar2,1,0x1a,DAT_000258f0,8);
              if (iVar2 != 0) {
                perror(DAT_000258f4);
              }
              iVar2 = bind(*(int *)(iVar8 + 0xd8),&local_34,0x14);
              __s = DAT_000258f8;
              if (-1 < iVar2) {
                local_48 = 0x14;
                iVar2 = setsockopt(*(int *)(iVar8 + 0xd8),1,0xc,&local_48,4);
                __s = DAT_00025900;
                if (iVar2 == 0) {
                  iVar2 = FUN_00014640(*(undefined4 *)(iVar8 + 0xd8),DAT_00025904,iVar8,0);
                  if (iVar2 == 0) {
                    return 0;
                  }
                  puts(DAT_00025908);
                  goto LAB_00025842;
                }
              }
            }
            perror(__s);
          }
LAB_00025842:
          FUN_00023b74(iVar8);
        }
        goto LAB_00025768;
      }
    }
    else {
      FUN_00023b74(iVar8);
      *(byte *)((int)param_1 + 0x2d) = *(byte *)((int)param_1 + 0x2d) & 0xfe;
    }
    iVar8 = 0;
  }
  else {
LAB_00025768:
    iVar8 = -1;
  }
  return iVar8;
}



/* ===== FUN_00025910 @ 00025910 size=34 ===== */

undefined4 FUN_00025910(int *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*param_1 + 0xcc) == 3) {
    FUN_00023a2e();
    uVar1 = FUN_0002570c(param_1,0);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== FUN_00025932 @ 00025932 size=42 ===== */

void FUN_00025932(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_0002570c(param_1 + 0x104,2);
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  FUN_0001ff44(param_2,3,0,param_4);
  return;
}



/* ===== FUN_0002595c @ 0002595c size=576 ===== */

int FUN_0002595c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_40;
  int local_2c [2];
  
  iVar9 = *param_1;
  *(undefined4 *)(iVar9 + 0xa4) = 0;
  *(undefined4 *)(iVar9 + 0x98) = 0;
  *(undefined2 *)(iVar9 + 0x9c) = 0;
  if ((*(int *)(iVar9 + 0xcc) == 2) || (iVar8 = FUN_0002570c(), -1 < iVar8)) {
    iVar8 = -1;
    local_40 = 2;
    while (iVar1 = FUN_0002bbd0(), iVar1 != 0) {
      iVar7 = 0;
      uVar2 = FUN_00033eec(*(undefined4 *)(iVar9 + 0x94));
      FUN_00034344(iVar1,0,0,uVar2,0,0,0x25,0);
      piVar10 = param_2 + 7;
      do {
        if ((*piVar10 != 0) &&
           (FUN_00024556(param_1 + 3,param_1,1,0,iVar7,param_2[0xf] == iVar7,0,0,*piVar10,piVar10[4]
                        ), param_2[0xf] == iVar7)) {
          iVar5 = *piVar10;
          iVar6 = piVar10[4];
          iVar3 = FUN_00028090(iVar1,0x50);
          if ((iVar3 == 0) || (iVar4 = FUN_00027c50(iVar1,5,0,0), iVar4 < 0)) {
LAB_00025ade:
            FUN_0002c0d0(iVar1);
            return -1;
          }
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,(char)iVar7);
          iVar4 = FUN_00027c50(iVar1,2,1,local_2c);
          if (iVar4 < 0) goto LAB_00025ade;
          if (iVar6 == 5) {
            local_2c[0] = DAT_00025b9c;
            iVar4 = FUN_00027c50(iVar1,3,4,local_2c);
          }
          else {
            local_2c[0] = DAT_00025ba0;
            iVar4 = FUN_00027c50(iVar1,3,4,local_2c);
          }
          if ((iVar4 < 0) || (iVar5 = FUN_00027c50(iVar1,1,iVar6,iVar5), iVar5 < 0))
          goto LAB_00025ade;
          FUN_000281ec(iVar1,iVar3);
        }
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar7 != 4);
      local_2c[0] = *(int *)(iVar9 + 0x40);
      iVar7 = FUN_00027c50(iVar1,3,4,local_2c);
      if ((((iVar7 < 0) || ((param_2[1] != 0 && (iVar7 = FUN_00027c50(iVar1,6), iVar7 < 0)))) ||
          ((*param_2 != 0 &&
           (local_2c[0] = *param_2, iVar7 = FUN_00027c50(iVar1,0x26,4,local_2c), iVar7 < 0)))) ||
         (((param_2[2] != 0 && (iVar7 = FUN_00027c50(iVar1,0x34,param_2[3]), iVar7 < 0)) ||
          ((param_2[5] != 0 && (iVar7 = FUN_00027c50(iVar1,0x2a,param_2[6]), iVar7 < 0))))))
      goto LAB_00025af4;
      iVar7 = param_2[4];
      if (iVar7 << 0x1f < 0) {
        local_2c[0] = 0;
      }
      else if (iVar7 << 0x1e < 0) {
        local_2c[0] = 1;
      }
      else if (iVar7 << 0x1d < 0) {
        local_2c[0] = 3;
      }
      else {
        if (-1 < iVar7 << 0x1c) goto LAB_00025af4;
        local_2c[0] = 2;
      }
      iVar7 = FUN_00027c50(iVar1,0x35,4,local_2c);
      if ((iVar7 < 0) || ((param_2[0x10] != 0 && (iVar7 = FUN_00027c50(iVar1,0x5f,0), iVar7 < 0))))
      goto LAB_00025af4;
      iVar8 = FUN_000238f8(iVar9,iVar1,0);
      if ((iVar8 == 0) || ((iVar8 != -0x72 || (local_40 == 1)))) {
LAB_00025b50:
        iVar1 = 0;
LAB_00025af4:
        FUN_0002c0d0(iVar1);
        return iVar8;
      }
      iVar1 = 0;
      if (param_2[1] == 0) goto LAB_00025af4;
      if (param_2[0x10] != 0) goto LAB_00025b50;
      FUN_00023ff0(param_1,param_2[1],2);
      FUN_0002c0d0(0);
      local_40 = 1;
    }
  }
  return -1;
}



/* ===== FUN_00025c98 @ 00025c98 size=360 ===== */

undefined4 FUN_00025c98(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *__ifname;
  undefined4 local_40;
  undefined4 local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  undefined4 local_24;
  
  __ifname = (char *)(param_1 + 0x110);
  uVar2 = if_nametoindex(__ifname);
  *(uint *)(param_1 + 0x40) = uVar2;
  *(uint *)(param_1 + 0x10c) = uVar2;
  FUN_0002570c(param_1 + 0x104,0);
  iVar3 = FUN_000270c8(*(undefined4 *)(param_1 + 0x3c),__ifname,1);
  bVar1 = false;
  if (iVar3 != 0) {
    iVar3 = FUN_000273cc(*(undefined4 *)(param_1 + 0x4c));
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    bVar1 = true;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  FUN_00027030(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),1,5);
  iStack_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_3c = 0;
  local_24 = 5000;
  local_2c = 0;
  iStack_28 = iStack_38;
  iVar3 = FUN_0002bbd0();
  if (iVar3 != 0) {
    uVar4 = FUN_00033eec(*(undefined4 *)(param_1 + 0x94));
    FUN_00034344(iVar3,0,0,uVar4,0,0,1,0);
    local_40 = *(undefined4 *)(param_1 + 0x10c);
    iVar5 = FUN_00027c50(iVar3,3,4,&local_40);
    if (-1 < iVar5) {
      iVar3 = FUN_000238f8(param_1,iVar3,PTR_FUN_000233fa_1_00025e00,&local_3c);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x50) = 0xf;
        *(undefined4 *)(param_1 + 0x54) = 0xf;
        *(undefined4 *)(param_1 + 0x58) = 7;
        *(undefined4 *)(param_1 + 0x6c) = 1;
        *(undefined4 *)(param_1 + 0x60) = local_3c;
        if (iStack_38 != 0) {
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
        }
        if (local_30 == 0) {
          if (local_2c == 0) {
            return 0xffffffff;
          }
        }
        else {
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
        }
        if (iStack_28 != 0) {
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x8000;
        }
        uVar2 = *(uint *)(param_1 + 0x5c);
        *(uint *)(param_1 + 0x5c) = uVar2 | 0x4080;
        if (local_34 != 0) {
          *(uint *)(param_1 + 0x5c) = uVar2 | 0x4880;
        }
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x10000;
        *(undefined4 *)(param_1 + 100) = local_24;
        iVar3 = FUN_00027138(*(undefined4 *)(param_1 + 0x3c),__ifname,param_1 + 0xc);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        iVar3 = FUN_00024b94(param_1,*(undefined4 *)(param_1 + 0x7c),0xd0,PTR_DAT_00025e04,1);
        if (-1 < iVar3) {
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x60;
        }
        if (bVar1) {
          FUN_000146b2(0,0,PTR_LAB_00022eb6_1_00025e08,param_1,*(undefined4 *)(param_1 + 0x34));
          return 0;
        }
        return 0;
      }
      iVar3 = 0;
    }
    FUN_0002c0d0(iVar3);
  }
  return 0xffffffff;
}



/* ===== FUN_00025e0c @ 00025e0c size=236 ===== */

void FUN_00025e0c(int param_1,int param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x40)) {
    puVar1 = param_3;
    iVar2 = param_4;
    if (*(int *)(param_1 + 0x44) == 0) {
      return;
    }
    while( true ) {
      if (iVar2 < 4) {
        return;
      }
      uVar3 = (uint)*puVar1;
      if (uVar3 < 4) {
        return;
      }
      if (iVar2 < (int)uVar3) {
        return;
      }
      if (puVar1[1] == 3) break;
      uVar3 = uVar3 + 3 & 0xfffffffc;
      puVar1 = (ushort *)((int)puVar1 + uVar3);
      iVar2 = iVar2 - uVar3;
    }
    iVar2 = strcmp((char *)(puVar1 + 2),(char *)(param_1 + 0x110));
    if (iVar2 != 0) {
      return;
    }
    uVar3 = if_nametoindex((char *)(param_1 + 0x110));
    *(uint *)(param_1 + 0x10c) = uVar3;
    FUN_00025c98(param_1);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    if ((*(uint *)(param_2 + 8) & 1) != 0) goto LAB_00025e9e;
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_0001ff44(*(undefined4 *)(param_1 + 0x34),0x1e);
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_00025e9e;
  }
  if (*(int *)(param_2 + 8) << 0x1f < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_0001ff44(*(undefined4 *)(param_1 + 0x34),0x1d);
  }
LAB_00025e9e:
  if ((*(int *)(param_1 + 0x70) == 1) && ((DAT_00025ef8 & *(uint *)(param_2 + 8)) == 0x10000)) {
    FUN_00027030(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0xffffffff,6);
  }
  for (; ((3 < param_4 && (uVar3 = (uint)*param_3, 3 < uVar3)) && ((int)uVar3 <= param_4));
      param_3 = (ushort *)((int)param_3 + uVar3)) {
    if (param_3[1] == 3) {
      FUN_000232a2(param_1,param_3 + 2,uVar3 - 4,0);
    }
    else if (param_3[1] == 10) {
      FUN_00027e90(param_3);
    }
    uVar3 = *param_3 + 3 & 0xfffffffc;
    param_4 = param_4 - uVar3;
  }
  return;
}



/* ===== FUN_00025efc @ 00025efc size=114 ===== */

int FUN_00025efc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  
  local_14 = -2;
  local_18 = param_2;
  iVar1 = FUN_0002bbd0();
  if (iVar1 == 0) {
    iVar3 = -0xc;
  }
  else {
    uVar2 = FUN_000339e4(*(undefined4 *)(param_1 + 0x78),PTR_s_nlctrl_00025f70);
    FUN_00034344(iVar1,0,0,uVar2,0,0,3,0);
    iVar3 = FUN_00027c50(iVar1,2,8,PTR_s_nl80211_00025f74);
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_000238f8(param_1,iVar1,PTR_LAB_0002334a_1_00025f78,&local_18);
      if (iVar3 == 0) {
        iVar3 = local_14;
      }
      iVar1 = 0;
    }
    FUN_0002c0d0(iVar1);
  }
  return iVar3;
}



/* ===== FUN_00025f7c @ 00025f7c size=584 ===== */

undefined4 * FUN_00025f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 *__ptr;
  int iVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  char acStack_7c [92];
  
  __ptr = (undefined4 *)FUN_0001449c(0x138);
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *__ptr = param_3;
  __ptr[0xd] = param_1;
  __ptr[0x41] = __ptr;
  FUN_000144a4(__ptr + 0x44,param_2,0x11);
  __ptr[0x36] = 0xffffffff;
  __ptr[0x37] = 0xffffffff;
  __ptr[0xf] = 0xffffffff;
  iVar2 = FUN_0002b05c(0);
  __ptr[0x24] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_0002f2b0();
    __ptr[0x1e] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_0002f2b0(__ptr[0x24]);
      __ptr[0x1f] = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_0003419c(__ptr[0x1e]);
        if (((iVar2 == 0) && (iVar2 = FUN_0003419c(__ptr[0x1f]), iVar2 == 0)) &&
           (iVar2 = FUN_0003383c(__ptr[0x1e],__ptr + 0x21), -1 < iVar2)) {
          iVar2 = FUN_0003383c(__ptr[0x1f],__ptr + 0x22);
          if (-1 < iVar2) {
            iVar2 = FUN_00033918(__ptr[0x21],DAT_000261c4);
            __ptr[0x25] = iVar2;
            if (((iVar2 != 0) && (iVar2 = FUN_00025efc(__ptr,DAT_000261c8), -1 < iVar2)) &&
               ((iVar2 = FUN_0002f5d0(__ptr[0x1f]), -1 < iVar2 &&
                ((iVar2 = FUN_00025efc(__ptr,PTR_DAT_000261cc), -1 < iVar2 &&
                 (iVar2 = FUN_0002f5d0(__ptr[0x1f]), -1 < iVar2)))))) {
              iVar2 = FUN_00025efc(__ptr,PTR_s_regulatory_000261d0);
              if (-1 < iVar2) {
                FUN_0002f5d0(__ptr[0x1f]);
              }
              uVar3 = FUN_0002f748(__ptr[0x1f]);
              FUN_00014640(uVar3,PTR_LAB_00022de8_1_000261d4,__ptr,__ptr[0x1f]);
              puVar1 = PTR_s__sys_class_net__s_phy80211_name_000261d8;
              *(undefined1 *)((int)__ptr + 0x12) = 0;
              snprintf(acStack_7c,0x59,puVar1,__ptr + 0x44);
              iVar2 = open64(acStack_7c,0);
              if (-1 < iVar2) {
                sVar4 = read(iVar2,(char *)((int)__ptr + 0x12),0x1f);
                close(iVar2);
                if (-1 < sVar4) {
                  *(undefined1 *)((int)__ptr + sVar4 + 0x12) = 0;
                  pcVar5 = strchr((char *)((int)__ptr + 0x12),10);
                  if (pcVar5 != (char *)0x0) {
                    *pcVar5 = '\0';
                  }
                }
              }
              iVar2 = socket(2,2,0);
              __ptr[0xf] = iVar2;
              if (iVar2 < 0) {
                perror(PTR_s_socket_PF_INET_SOCK_DGRAM__000261dc);
              }
              else {
                puVar6 = (undefined4 *)FUN_0001449c(0xc);
                puVar1 = PTR_FUN_00025e0c_1_000261e0;
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = __ptr;
                  puVar6[1] = puVar1;
                  puVar6[2] = PTR_FUN_000232ee_1_000261e4;
                  iVar2 = FUN_00026fcc();
                  __ptr[0xe] = iVar2;
                  if (iVar2 == 0) {
                    free(puVar6);
                  }
                  else {
                    puVar6 = (undefined4 *)FUN_0001449c(0x1c);
                    if (puVar6 != (undefined4 *)0x0) {
                      *puVar6 = __ptr;
                      FUN_000144a4(puVar6 + 1,param_2,0x10);
                      puVar6[5] = PTR_LAB_00022d34_1_000261e8;
                      puVar6[6] = PTR_LAB_00022eaa_1_000261ec;
                      iVar2 = FUN_00027318(puVar6);
                      __ptr[0x13] = iVar2;
                      if (iVar2 == 0) {
                        free(puVar6);
                      }
                      iVar2 = FUN_00025c98(__ptr);
                      if (iVar2 == 0) {
                        piVar7 = (int *)*__ptr;
                        if (piVar7 == (int *)0x0) {
                          return __ptr + 0x41;
                        }
                        iVar2 = *piVar7;
                        __ptr[1] = iVar2;
                        __ptr[2] = piVar7;
                        *(undefined4 **)(iVar2 + 4) = __ptr + 1;
                        *piVar7 = (int)(__ptr + 1);
                        return __ptr + 0x41;
                      }
                    }
                  }
                }
              }
              FUN_000273a4(__ptr[0x13]);
              FUN_00026fa4(__ptr[0xe]);
              if (-1 < (int)__ptr[0xf]) {
                close(__ptr[0xf]);
              }
              thunk_FUN_0002ea3c(__ptr[0x25]);
              FUN_00028eac(__ptr[0x21]);
              FUN_0002f310(__ptr[0x1e]);
              FUN_0002b150(__ptr[0x24]);
              FUN_0002f748(__ptr[0x1f]);
              FUN_000146ac();
              goto LAB_00026112;
            }
            FUN_00028eac(__ptr[0x22]);
          }
          FUN_00028eac(__ptr[0x21]);
        }
        FUN_0002f310(__ptr[0x1f]);
      }
      FUN_0002f310(__ptr[0x1e]);
    }
    FUN_0002b150(__ptr[0x24]);
  }
LAB_00026112:
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== FUN_000261f4 @ 000261f4 size=1094 ===== */

int FUN_000261f4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_24;
  
  iVar9 = *param_1;
  if (param_2[10] == 2) {
    iVar1 = FUN_0002570c(iVar9 + 0x104);
    if ((iVar1 == 0) && (iVar1 = FUN_00023cc4(iVar9,param_2[3],0,0), iVar1 == 0)) {
      return 0;
    }
    FUN_00023b74(iVar9);
    return -1;
  }
  if (param_2[10] == 1) {
    iVar1 = FUN_0002570c(iVar9 + 0x104);
    if (iVar1 != 0) {
      return -1;
    }
    iVar1 = 2;
    iVar8 = -1;
    while( true ) {
      iVar2 = FUN_0002bbd0();
      if (iVar2 == 0) {
        return -1;
      }
      uVar3 = FUN_00033eec(*(undefined4 *)(iVar9 + 0x94));
      FUN_00034344(iVar2,0,0,uVar3,0,0,0x2b,0);
      local_24 = *(int *)(iVar9 + 0x40);
      iVar4 = FUN_00027c50(iVar2,3,4,&local_24);
      if ((((iVar4 < 0) || (param_2[1] == 0)) || (0x20 < (uint)param_2[2])) ||
         (iVar4 = FUN_00027c50(iVar2,0x34), iVar4 < 0)) break;
      memcpy((void *)(iVar9 + 0xa8),(void *)param_2[1],param_2[2]);
      *(int *)(iVar9 + 200) = param_2[2];
      local_24 = param_2[3];
      iVar4 = FUN_00027c50(iVar2,0x26,4,&local_24);
      if (((iVar4 < 0) || (iVar8 = FUN_0002506a(param_2,iVar2), iVar8 != 0)) ||
         ((param_2[4] != 0 && (iVar4 = FUN_00027c50(iVar2,0x2a,param_2[5]), iVar4 < 0)))) break;
      iVar8 = FUN_000238f8(iVar9,iVar2,0);
      if (((iVar8 == 0) || (iVar8 != -0x72)) || (iVar1 == 1)) goto LAB_000262e8;
      iVar1 = 1;
      FUN_00023f86(iVar9);
      FUN_0002c0d0(0);
    }
    goto LAB_000262fa;
  }
  if ((*(uint *)(iVar9 + 0x5c) & 0x20) == 0) {
    iVar1 = FUN_0002570c();
    if (iVar1 < 0) {
      return -1;
    }
    iVar2 = FUN_0002bbd0();
    if (iVar2 == 0) {
      return -1;
    }
    uVar3 = FUN_00033eec(*(undefined4 *)(iVar9 + 0x94));
    FUN_00034344(iVar2,0,0,uVar3,0,0,0x2e,0);
    local_24 = *(int *)(iVar9 + 0x40);
    iVar1 = FUN_00027c50(iVar2,3,4,&local_24);
    iVar8 = 0;
    if ((iVar1 < 0) || ((*param_2 != 0 && (iVar1 = FUN_00027c50(iVar2,6), iVar1 < 0))))
    goto LAB_000262fa;
    if ((param_2[3] == 0) ||
       (local_24 = param_2[3], iVar1 = FUN_00027c50(iVar2,0x26,4,&local_24), -1 < iVar1)) {
      if (param_2[1] != 0) {
        iVar1 = FUN_00027c50(iVar2,0x34,param_2[2]);
        if ((iVar1 < 0) || (0x20 < (uint)param_2[2])) goto LAB_0002638c;
        memcpy((void *)(iVar9 + 0xa8),(void *)param_2[1],param_2[2]);
        *(int *)(iVar9 + 200) = param_2[2];
      }
      if ((param_2[4] == 0) || (iVar1 = FUN_00027c50(iVar2,0x2a,param_2[5]), -1 < iVar1)) {
        uVar5 = param_2[9];
        uVar6 = uVar5 & 1;
        uVar7 = uVar6;
        if ((uVar5 & 2) != 0) {
          uVar7 = uVar6 + 1;
        }
        if ((uVar5 & 4) != 0) {
          uVar7 = uVar7 + 1;
        }
        if (uVar7 < 2) {
          iVar1 = 0;
          if (uVar6 == 0) {
            if ((uVar5 & 2) == 0) {
              if ((uVar5 & 4) == 0) {
                iVar8 = 0;
                if ((uVar5 & 8) == 0) goto LAB_000262fa;
                iVar1 = 2;
              }
              else {
                iVar1 = 3;
              }
            }
            else {
              iVar1 = 1;
            }
          }
          local_24 = iVar1;
          iVar1 = FUN_00027c50(iVar2,0x35,4,&local_24);
          if (iVar1 < 0) goto LAB_0002638c;
        }
        if (((char *)param_2[4] != (char *)0x0) && (param_2[5] != 0)) {
          if (*(char *)param_2[4] == '0') {
            local_24 = 2;
          }
          else {
            local_24 = 1;
          }
          iVar1 = FUN_00027c50(iVar2,0x4b,4,&local_24);
          if (iVar1 < 0) goto LAB_0002638c;
        }
        if (param_2[6] != 0) {
          uVar7 = param_2[6] - 1;
          local_24 = DAT_00026640;
          if (uVar7 < 4) {
            local_24 = *(int *)(DAT_0002663c + uVar7 * 4 + 0x20);
          }
          iVar1 = FUN_00027c50(iVar2,0x49,4,&local_24);
          if (iVar1 < 0) goto LAB_0002638c;
        }
        if (param_2[7] != 0) {
          uVar7 = param_2[7] - 1;
          local_24 = DAT_00026640;
          if (uVar7 < 4) {
            local_24 = *(int *)(DAT_00026644 + uVar7 * 4);
          }
          iVar1 = FUN_00027c50(iVar2,0x4a,4,&local_24);
          if (iVar1 < 0) goto LAB_0002638c;
        }
        if ((uint)param_2[8] < 2) {
          local_24 = DAT_00026648;
          if (param_2[8] != 0) {
            local_24 = DAT_00026640;
          }
          iVar1 = FUN_00027c50(iVar2,0x4c,4,&local_24);
          if (iVar1 < 0) goto LAB_0002638c;
        }
        iVar8 = FUN_0002506a(param_2,iVar2);
        if (iVar8 != 0) goto LAB_000262fa;
        iVar8 = FUN_000238f8(iVar9,iVar2,0,0);
LAB_000262e8:
        iVar2 = 0;
        goto LAB_000262fa;
      }
    }
LAB_0002638c:
    iVar8 = 0;
  }
  else {
    *(undefined4 *)(iVar9 + 0xa4) = 0;
    iVar2 = FUN_0002bbd0();
    if (iVar2 == 0) {
      return -1;
    }
    uVar3 = FUN_00033eec(*(undefined4 *)(iVar9 + 0x94));
    FUN_00034344(iVar2,0,0,uVar3,0,0,0x26,0);
    local_24 = *(int *)(iVar9 + 0x40);
    iVar1 = FUN_00027c50(iVar2,3,4,&local_24);
    if ((-1 < iVar1) && ((*param_2 == 0 || (iVar1 = FUN_00027c50(iVar2,6), -1 < iVar1)))) {
      iVar1 = 0;
      if (param_2[3] != 0) {
        local_24 = param_2[3];
        iVar1 = FUN_00027c50(iVar2,0x26,4,&local_24);
        if (iVar1 < 0) goto LAB_0002652c;
        iVar1 = param_2[3];
      }
      *(int *)(iVar9 + 0xd4) = iVar1;
      if (param_2[1] != 0) {
        iVar1 = FUN_00027c50(iVar2,0x34,param_2[2]);
        if ((iVar1 < 0) || (0x20 < (uint)param_2[2])) goto LAB_0002652c;
        memcpy((void *)(iVar9 + 0xa8),(void *)param_2[1],param_2[2]);
        *(int *)(iVar9 + 200) = param_2[2];
      }
      if ((param_2[4] == 0) || (iVar1 = FUN_00027c50(iVar2,0x2a,param_2[5]), -1 < iVar1)) {
        if (param_2[6] != 0) {
          uVar7 = param_2[6] - 1;
          local_24 = DAT_00026640;
          if (uVar7 < 4) {
            local_24 = *(int *)(DAT_00026650 + uVar7 * 4);
          }
          iVar1 = FUN_00027c50(iVar2,0x49,4,&local_24);
          if (iVar1 < 0) goto LAB_0002652c;
        }
        if (param_2[7] != 0) {
          uVar7 = param_2[7] - 1;
          local_24 = DAT_00026640;
          if (uVar7 < 4) {
            local_24 = *(int *)(DAT_0002664c + uVar7 * 4);
          }
          iVar1 = FUN_00027c50(iVar2,0x4a,4,&local_24);
          if (iVar1 < 0) goto LAB_0002652c;
        }
        iVar1 = FUN_00027c50(iVar2,0x44,0);
        if ((-1 < iVar1) &&
           ((param_2[0x1b] == 0 || (iVar1 = FUN_00027c50(iVar2,0x4f,6), -1 < iVar1)))) {
          iVar8 = FUN_000238f8(iVar9,iVar2,0);
          if (iVar8 != 0) {
            iVar9 = FUN_00025244(iVar9);
            iVar2 = 0;
            if (iVar9 == 0) goto LAB_000262fa;
            FUN_0002521c();
          }
          goto LAB_000262e8;
        }
      }
    }
LAB_0002652c:
    iVar8 = -1;
  }
LAB_000262fa:
  FUN_0002c0d0(iVar2);
  return iVar8;
}



/* ===== FUN_0002667e @ 0002667e size=316 ===== */

void FUN_0002667e(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  ssize_t sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_c68 [4];
  int local_c64;
  undefined4 local_c60;
  ushort *local_c5c;
  ushort *local_c48;
  undefined1 *local_c44;
  ushort *local_c40;
  uint local_c3c;
  uint local_c38;
  undefined1 auStack_c34 [84];
  ushort auStack_be0 [2];
  undefined1 auStack_bdc [3000];
  
  sVar3 = recv(param_1,auStack_be0,3000,0);
  if (sVar3 < 0) {
    perror(DAT_000267f8);
    return;
  }
  iVar4 = FUN_00026e20(auStack_c68,auStack_be0,sVar3);
  if (iVar4 != 0) {
    puts(DAT_000267fc);
    return;
  }
  bVar1 = false;
  bVar2 = false;
  puVar8 = (ushort *)0x0;
  uVar6 = 0;
  uVar9 = 0;
  while (iVar4 = FUN_00026e60(auStack_c68), iVar4 != -2) {
    if (iVar4 != 0) {
      printf(DAT_00026800,iVar4);
      return;
    }
    switch(local_c60) {
    case 1:
      if ((int)((uint)(byte)*local_c5c << 0x1b) < 0) {
        sVar3 = sVar3 + -4;
      }
      break;
    case 2:
      puVar8 = (ushort *)((uint)(byte)*local_c5c * 5);
      break;
    case 0xc:
      uVar9 = (uint)(byte)*local_c5c;
      break;
    case 0xe:
      bVar1 = true;
      break;
    case 0xf:
      bVar2 = true;
      uVar6 = *local_c5c & 1;
    }
  }
  if (bVar1) {
    if (bVar2) {
      return;
    }
  }
  else {
    uVar10 = (uint)*(ushort *)((int)auStack_be0 + local_c64);
    if (bVar2) {
      uVar5 = *(undefined4 *)(param_2 + 0x34);
      memset(auStack_c34,0,0x54);
      local_c44 = auStack_bdc + local_c64;
      local_c38 = uVar6 ^ 1;
      local_c48 = (ushort *)
                  (CONCAT22((ushort)((uVar10 << 0x18) >> 0x1c),(short)((int)uVar10 >> 2)) &
                  0xffff0003);
      uVar7 = 0x12;
      local_c40 = (ushort *)((int)auStack_be0 + local_c64);
      local_c3c = sVar3 - local_c64;
      goto LAB_00026790;
    }
  }
  uVar6 = (*(ushort *)((int)auStack_be0 + local_c64) & 0xf) >> 2;
  if ((uVar6 == 1) || (uVar6 == 2)) {
    memset(&local_c40,0,0x60);
    uVar7 = 0x13;
  }
  else {
    if (uVar6 != 0) {
      return;
    }
    memset(&local_c38,0,0x58);
    uVar7 = 0x14;
    local_c40 = puVar8;
    local_c3c = uVar9;
  }
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  local_c48 = (ushort *)((int)auStack_be0 + local_c64);
  local_c44 = (undefined1 *)(sVar3 - local_c64);
LAB_00026790:
  FUN_0001ff44(uVar5,uVar7,&local_c48);
  return;
}



/* ===== FUN_00026804 @ 00026804 size=1446 ===== */

undefined4 FUN_00026804(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  bool bVar15;
  longlong lVar16;
  undefined1 auStack_270 [12];
  int local_264;
  int local_260;
  undefined1 auStack_25c [8];
  ushort *local_254;
  int local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_23c;
  uint local_238;
  int local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 auStack_1e0 [12];
  int local_1d4;
  int local_1c8;
  int local_1c0;
  int local_148;
  int local_114;
  int local_108;
  int local_104;
  int local_dc;
  undefined4 local_c0;
  int local_ac;
  int iStack_a8;
  int local_80;
  int local_70;
  int local_68;
  
  FUN_0002c044();
  pbVar5 = (byte *)FUN_0002ba5c();
  uVar6 = FUN_0003432c(pbVar5,0);
  uVar7 = thunk_FUN_00034314(pbVar5,0);
  FUN_000277b8(auStack_1e0,0x6f,uVar6,uVar7,0);
  if ((local_1d4 != 0) && (iVar8 = FUN_00027e90(), *(int *)(param_2 + 0x40) != iVar8)) {
    return 1;
  }
  if ((*(int *)(param_2 + 0xd0) != 0) && (*pbVar5 - 0x22 < 2)) {
    FUN_0002570c(param_2 + 0x104,2);
    *(undefined4 *)(param_2 + 0xd0) = 0;
  }
  bVar1 = *pbVar5;
  switch(bVar1) {
  case 0x13:
    if (local_1c8 == 0) {
      return 1;
    }
    puVar9 = (undefined4 *)FUN_00027758();
    if (*(int *)(param_2 + 0xcc) != 1) {
      return 1;
    }
    memset(&local_248,0,0x68);
    local_248 = (ushort *)*puVar9;
    puVar13 = &local_248;
    uVar6 = 10;
    local_244 = (ushort *)CONCAT22(local_244._2_2_,*(undefined2 *)(puVar9 + 1));
    break;
  case 0x14:
    if (local_1c8 == 0) {
      return 1;
    }
    puVar9 = (undefined4 *)FUN_00027758();
    if (*(int *)(param_2 + 0xcc) != 1) {
      return 1;
    }
    memset(&local_248,0,0x68);
    local_248 = (ushort *)*puVar9;
    puVar13 = &local_248;
    uVar6 = 0x2c;
    local_244 = (ushort *)CONCAT22(local_244._2_2_,*(undefined2 *)(puVar9 + 1));
    break;
  default:
    goto switchD_00026850_caseD_15;
  case 0x22:
    *(undefined4 *)(param_2 + 0x74) = 1;
    FUN_00014758(DAT_00026c04,param_2,*(undefined4 *)(param_2 + 0x34));
    uVar6 = 0;
    goto LAB_000268fe;
  case 0x23:
    FUN_00014758(DAT_00026c04,param_2,*(undefined4 *)(param_2 + 0x34));
    uVar6 = 1;
LAB_000268fe:
    FUN_00025160(param_2 + 0x34,uVar6,auStack_1e0);
    return 1;
  case 0x24:
  case 0x2a:
    puVar13 = (undefined4 *)0x0;
    uVar6 = 0x1f;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x3b:
  case 0x3c:
  case 0x46:
  case 0x47:
    if ((local_dc != 0) && (local_1c8 != 0)) {
      iVar8 = FUN_00027760(local_1c8);
      if (iVar8 != 6) {
        return 1;
      }
      if (bVar1 == 0x25) {
        uVar6 = 0xe;
      }
      else {
        if (bVar1 != 0x26) {
          return 1;
        }
        uVar6 = 0xf;
      }
      memset(&local_248,0,0x68);
      puVar9 = (undefined4 *)FUN_00027758(local_1c8);
      puVar13 = &local_248;
      local_248 = (ushort *)*puVar9;
      local_244 = (ushort *)CONCAT22(local_244._2_2_,*(undefined2 *)(puVar9 + 1));
      break;
    }
    if (local_114 == 0) {
      return 1;
    }
    if (bVar1 == 0x28) {
      uVar6 = FUN_00027758(local_114);
      uVar7 = FUN_00027760(local_114);
      uVar14 = 1;
LAB_00026b38:
      FUN_00023144(param_2,uVar14,uVar6,uVar7);
      return 1;
    }
    if (bVar1 < 0x29) {
      if (bVar1 == 0x26) {
        iVar8 = FUN_00027758(local_114);
        uVar10 = FUN_00027760(local_114);
        if (uVar10 < 0x1e) {
          return 1;
        }
        sVar3 = *(short *)(iVar8 + 0x1a);
        if (sVar3 == 0) {
          *(undefined4 *)(param_2 + 0xa4) = 1;
          *(undefined4 *)(param_2 + 0x9e) = *(undefined4 *)(iVar8 + 10);
          *(undefined2 *)(param_2 + 0xa2) = *(undefined2 *)(iVar8 + 0xe);
          memset(&local_248,0,0x68);
          local_22c = *(undefined4 *)(param_2 + 0xd4);
          if (uVar10 != 0x1e) {
            local_23c = iVar8 + 0x1e;
            local_238 = uVar10 - 0x1e;
          }
          goto LAB_00026b1e;
        }
        memset(&local_244,0,100);
        local_248 = (ushort *)(iVar8 + 0x10);
        if (uVar10 != 0x1e) {
          local_240 = (ushort *)(uVar10 - 0x1e);
          local_244 = (ushort *)(iVar8 + 0x1e);
        }
        local_23c = CONCAT22(local_23c._2_2_,sVar3);
        goto LAB_00026ae8;
      }
      if (0x26 < bVar1) {
        uVar6 = FUN_00027758(local_114);
        uVar7 = FUN_00027760(local_114);
        uVar14 = 0xc;
        goto LAB_00026b38;
      }
      if (bVar1 != 0x25) {
        return 1;
      }
      iVar8 = FUN_00027758(local_114);
      uVar10 = FUN_00027760(local_114);
      if (uVar10 < 0x1e) {
        return 1;
      }
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(iVar8 + 10);
      *(undefined2 *)(param_2 + 0x9c) = *(undefined2 *)(iVar8 + 0xe);
      memset((void *)((int)&local_240 + 2),0,0x5e);
      local_248 = *(ushort **)(iVar8 + 10);
      bVar15 = uVar10 != 0x1e;
      uVar6 = 0xb;
      if (bVar15) {
        uVar10 = uVar10 - 0x1e;
      }
      local_244 = (ushort *)CONCAT22(*(undefined2 *)(iVar8 + 0x18),*(undefined2 *)(iVar8 + 0xe));
      if (bVar15) {
        local_23c = iVar8 + 0x1e;
        local_238 = uVar10;
      }
      local_240 = (ushort *)CONCAT22(local_240._2_2_,*(undefined2 *)(iVar8 + 0x1c));
      puVar13 = &local_248;
      break;
    }
    if (bVar1 == 0x3c) {
      puVar11 = (ushort *)FUN_00027758(local_114);
      iVar8 = FUN_00027760(local_114);
      if (local_80 == 0) {
        return 1;
      }
      lVar16 = FUN_00027f14(local_80);
      if (lVar16 != *(longlong *)(param_2 + 0xf0)) {
        return 1;
      }
      uVar2 = *puVar11;
      memset(&local_234,0,0x54);
      local_238 = (uint)(local_70 != 0);
      puVar13 = &local_248;
      local_248 = (ushort *)
                  CONCAT22((ushort)(((uint)uVar2 << 0x18) >> 0x1c),
                           (ushort)(((uint)uVar2 << 0x1c) >> 0x1e));
      uVar6 = 0x12;
      local_244 = puVar11 + 2;
      local_240 = puVar11;
      local_23c = iVar8;
      break;
    }
    if (0x3c < bVar1) {
      if (bVar1 == 0x46) {
        iVar8 = FUN_00027758(local_114);
        uVar10 = FUN_00027760(local_114);
        if (uVar10 < 0x18) {
          return 1;
        }
        memset(&local_248,0,0x68);
        local_248 = (ushort *)(iVar8 + 10);
        uVar6 = 0x22;
        if (uVar10 < 0x1a) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined2 *)(iVar8 + 0x18);
        }
        puVar13 = &local_248;
        local_240 = (ushort *)CONCAT22(local_240._2_2_,uVar4);
        local_244 = (ushort *)(iVar8 + 4);
      }
      else {
        if (bVar1 != 0x47) {
          return 1;
        }
        iVar8 = FUN_00027758(local_114);
        uVar10 = FUN_00027760(local_114);
        if (uVar10 < 0x18) {
          return 1;
        }
        memset(&local_248,0,0x68);
        local_248 = (ushort *)(iVar8 + 10);
        uVar6 = 0x23;
        if (uVar10 < 0x1a) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined2 *)(iVar8 + 0x18);
        }
        puVar13 = &local_248;
        local_240 = (ushort *)CONCAT22(local_240._2_2_,uVar4);
        local_244 = (ushort *)(iVar8 + 4);
      }
      break;
    }
    if (bVar1 != 0x3b) {
      return 1;
    }
    puVar11 = (ushort *)FUN_00027758(local_114);
    puVar12 = (ushort *)FUN_00027760(local_114);
    if (puVar12 < (ushort *)0x18) {
      return 1;
    }
    uVar2 = *puVar11;
    memset(&local_248,0,0x68);
    if (local_148 != 0) {
      local_230 = FUN_00027e90(local_148);
      *(undefined4 *)(param_2 + 0xf8) = local_230;
    }
    uVar7 = *(undefined4 *)(param_2 + 0x34);
    if ((uVar2 & 0xff) >> 4 == 0xd) {
      local_240 = puVar11 + 8;
      puVar13 = &local_248;
      uVar6 = 0x15;
      local_23c = CONCAT31(local_23c._1_3_,(char)puVar11[0xc]);
      local_238 = (int)puVar11 + 0x19;
      local_234 = ((int)puVar11 + (int)puVar12) - local_238;
      local_248 = puVar11 + 2;
      local_244 = puVar11 + 5;
    }
    else {
      puVar13 = &local_248;
      uVar6 = 0x14;
      local_248 = puVar11;
      local_244 = puVar12;
    }
    goto LAB_00026a5a;
  case 0x29:
    memset(&local_248,0,0x68);
    if (local_1c8 != 0) {
      local_244 = (ushort *)FUN_00027758();
    }
    if ((local_104 == 0) || (iVar8 = FUN_00027e90(), iVar8 == 1)) {
      local_248 = (ushort *)0x1;
    }
    if (local_1c0 != 0) {
      FUN_00027df0();
    }
    puVar13 = &local_248;
    uVar6 = 2;
    break;
  case 0x2b:
    if (local_1c8 == 0) {
      return 1;
    }
    puVar9 = (undefined4 *)FUN_00027758();
    puVar13 = (undefined4 *)0x0;
    *(undefined4 *)(param_2 + 0x9e) = *puVar9;
    *(undefined2 *)(param_2 + 0xa2) = *(undefined2 *)(puVar9 + 1);
    *(undefined4 *)(param_2 + 0xa4) = 1;
LAB_00026b20:
    uVar6 = 0;
    break;
  case 0x2e:
  case 0x2f:
    if ((*(uint *)(param_2 + 0x5c) & 0x20) != 0) {
      return 1;
    }
    memset(&local_248,0,0x68);
    if ((bVar1 != 0x2e) || (iVar8 = FUN_00027e40(local_c0), iVar8 == 0)) {
      *(undefined4 *)(param_2 + 0xa4) = 1;
      if (local_1c8 != 0) {
        puVar13 = (undefined4 *)FUN_00027758(local_1c8);
        *(undefined4 *)(param_2 + 0x9e) = *puVar13;
        *(undefined2 *)(param_2 + 0xa2) = *(undefined2 *)(puVar13 + 1);
      }
      if (local_ac != 0) {
        local_244 = (ushort *)FUN_00027758(local_ac);
        local_240 = (ushort *)FUN_00027760(local_ac);
      }
      if (iStack_a8 != 0) {
        local_23c = FUN_00027758(iStack_a8);
        local_238 = FUN_00027760(iStack_a8);
      }
LAB_00026b1e:
      puVar13 = &local_248;
      goto LAB_00026b20;
    }
    if (local_1c8 != 0) {
      local_248 = (ushort *)FUN_00027758(local_1c8);
    }
    if (iStack_a8 != 0) {
      local_244 = (ushort *)FUN_00027758(iStack_a8);
      local_240 = (ushort *)FUN_00027760(iStack_a8);
    }
    uVar4 = FUN_00027e40(local_c0);
    local_23c = CONCAT22(local_23c._2_2_,uVar4);
LAB_00026ae8:
    puVar13 = &local_248;
    uVar6 = 0xd;
    break;
  case 0x30:
    if ((*(uint *)(param_2 + 0x5c) & 0x20) != 0) {
      return 1;
    }
    *(undefined4 *)(param_2 + 0xa4) = 0;
    memset(&local_248,0,0x68);
    if (local_108 != 0) {
      uVar4 = FUN_00027e40();
      local_244 = (ushort *)CONCAT22(local_244._2_2_,uVar4);
    }
    puVar13 = &local_248;
    uVar6 = 1;
    break;
  case 0x37:
    uVar6 = 0;
    goto LAB_00026d20;
  case 0x38:
    uVar6 = 1;
LAB_00026d20:
    FUN_000231c8(param_2,uVar6,auStack_1e0);
    return 1;
  case 0x40:
    if (local_68 == 0) {
      return 1;
    }
    iVar8 = FUN_00028394(auStack_270,4,local_68,DAT_00026e1c);
    if (iVar8 != 0) {
      return 1;
    }
    memset(&local_248,0,0x68);
    if (local_260 == 0) {
      if (local_264 == 0) {
        return 1;
      }
      local_244 = (ushort *)FUN_00027e90();
      if ((local_244 != (ushort *)0x1) && (local_244 != (ushort *)0x0)) {
        return 1;
      }
      iVar8 = FUN_00023910(param_2,auStack_25c);
      if (iVar8 == 0) {
        local_240 = local_254;
        local_238 = local_24c;
      }
      iVar8 = FUN_00023990(param_2,auStack_25c);
      if (iVar8 == 0) {
        local_23c = local_250;
      }
      puVar13 = &local_248;
      uVar6 = 0x1c;
    }
    else {
      if (local_1c8 == 0) {
        return 1;
      }
      puVar9 = (undefined4 *)FUN_00027758();
      puVar13 = &local_248;
      uVar6 = 0x24;
      local_248 = (ushort *)*puVar9;
      local_244 = (ushort *)CONCAT22(local_244._2_2_,*(undefined2 *)(puVar9 + 1));
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0x34);
LAB_00026a5a:
  FUN_0001ff44(uVar7,uVar6,puVar13);
switchD_00026850_caseD_15:
  return 1;
}



/* ===== FUN_00026e20 @ 00026e20 size=64 ===== */

undefined4 FUN_00026e20(undefined4 *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if ((*param_2 == '\0') && (uVar3 = (uint)*(ushort *)(param_2 + 2), (int)uVar3 <= param_3)) {
    iVar1 = *(int *)(param_2 + 4);
    *param_1 = param_2;
    param_1[1] = uVar3;
    param_1[4] = 0;
    param_1[7] = iVar1;
    param_1[5] = param_2 + 8;
    param_1[3] = 0;
    if (-1 < iVar1) {
      return 0;
    }
    do {
      piVar2 = (int *)param_1[5] + 1;
      iVar1 = *(int *)param_1[5];
      param_1[5] = piVar2;
      if (-1 < iVar1) {
        return 0;
      }
    } while ((uint)((int)piVar2 - (int)param_2) <= uVar3);
  }
  return 0xffffffea;
}



/* ===== FUN_00026e60 @ 00026e60 size=142 ===== */

undefined4 FUN_00026e60(int *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = DAT_00026ef0;
  do {
    iVar6 = param_1[4];
    if (0x11 < iVar6) {
      return 0xfffffffe;
    }
    uVar8 = param_1[7] & 1;
    if (uVar8 == 0) {
      bVar3 = false;
    }
    else {
      bVar1 = *(byte *)(iVar2 + iVar6);
      uVar7 = (uint)(bVar1 >> 4);
      uVar4 = param_1[5] - *param_1 & uVar7 - 1;
      param_1[2] = iVar6;
      if (uVar4 != 0) {
        param_1[5] = param_1[5] + (uVar7 - uVar4);
      }
      param_1[3] = param_1[5];
      iVar5 = param_1[5] + (bVar1 & 0xf);
      param_1[5] = iVar5;
      if ((uint)param_1[1] < (uint)(iVar5 - *param_1)) {
        return 0xffffffea;
      }
      bVar3 = true;
    }
    param_1[4] = iVar6 + 1U;
    if ((iVar6 + 1U & 0x1f) == 0) {
      if (uVar8 == 0) {
        param_1[4] = 0x12;
      }
      else {
        iVar6 = *(int *)param_1[6];
        param_1[6] = (int)((int *)param_1[6] + 1);
        param_1[7] = iVar6;
      }
    }
    else {
      param_1[7] = (uint)param_1[7] >> 1;
    }
  } while (!bVar3);
  return 0;
}



/* ===== FUN_00026ef4 @ 00026ef4 size=42 ===== */

void FUN_00026ef4(undefined4 *param_1,code *UNRECOVERED_JUMPTABLE,int *param_3)

{
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (0xf < *param_3 - 0x10U)) {
                    /* WARNING: Could not recover jumptable at 0x00026f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1,param_3 + 4,param_3 + 8,*param_3 + -0x20);
    return;
  }
  return;
}



/* ===== FUN_00026f1e @ 00026f1e size=134 ===== */

void FUN_00026f1e(int param_1,int *param_2)

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
LAB_00026f90:
        FUN_00026ef4(param_2,uVar2,pcVar4);
      }
      else if ((short)*(uint *)((int)pcVar4 + 4) == 0x11) {
        uVar2 = *(undefined4 *)(*param_2 + 8);
        goto LAB_00026f90;
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



/* ===== FUN_00026fa4 @ 00026fa4 size=40 ===== */

void FUN_00026fa4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (-1 < (int)param_1[1]) {
      FUN_000146ac();
      close(param_1[1]);
    }
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_00026fcc @ 00026fcc size=96 ===== */

undefined4 * FUN_00026fcc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  sockaddr local_1c;
  
  puVar1 = (undefined4 *)FUN_0001449c(8);
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
        FUN_00014640(puVar1[1],DAT_0002702c,puVar1,0);
        return puVar1;
      }
    }
    FUN_00026fa4(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00027030 @ 00027030 size=144 ===== */

int FUN_00027030(int param_1,undefined4 param_2,int param_3,int param_4)

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
  uStack_3c = DAT_000270c0;
  local_24 = 0;
  uStack_18 = 0;
  local_38 = *DAT_000270c4 + 1;
  *DAT_000270c4 = local_38;
  local_2c = param_2;
  uStack_20 = uStack_30;
  uStack_14 = uStack_30;
  if (param_3 != -1) {
    puVar1 = (undefined2 *)FUN_00013ef4(&uStack_20);
    puVar1[1] = 0x11;
    *puVar1 = 5;
    *(char *)(puVar1 + 2) = (char)param_3;
    local_40 = (local_40 + 3 & 0xfffffffc) + 5;
  }
  if (param_4 != -1) {
    puVar1 = (undefined2 *)FUN_00013ef4((int)&local_40 + (local_40 + 3 & 0xfffffffc));
    puVar1[1] = 0x10;
    *puVar1 = 5;
    *(char *)(puVar1 + 2) = (char)param_4;
    local_40 = (local_40 + 3 & 0xfffffffc) + 5;
  }
  sVar2 = send(*(int *)(param_1 + 4),&local_40,local_40,0);
  return sVar2 >> 0x1f;
}



/* ===== FUN_000270c8 @ 000270c8 size=112 ===== */

int FUN_000270c8(int param_1,undefined4 param_2,int param_3)

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
    FUN_000144a4(&local_30,param_2,0x10);
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



/* ===== FUN_00027138 @ 00027138 size=76 ===== */

undefined4 FUN_00027138(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  short local_20;
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
  FUN_000144a4(&local_30,param_2,0x10);
  iVar1 = ioctl(param_1,0x8927,&local_30);
  if ((iVar1 == 0) && (local_20 == 1)) {
    *param_3 = CONCAT22(uStack_1c,uStack_1e);
    *(undefined2 *)(param_3 + 1) = uStack_1a;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00027184 @ 00027184 size=74 ===== */

int FUN_00027184(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
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
  FUN_000144a4(&local_30,param_2,0x10);
  uStack_1e = (undefined2)*param_3;
  uStack_1c = (undefined2)((uint)*param_3 >> 0x10);
  uStack_1a = *(undefined2 *)(param_3 + 1);
  local_20 = 1;
  iVar1 = ioctl(param_1,0x8924,&local_30);
  return -(uint)(iVar1 != 0);
}



/* ===== FUN_00027318 @ 00027318 size=130 ===== */

undefined4 * FUN_00027318(undefined4 param_1,uint param_2,undefined4 param_3)

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
  __ptr = (undefined4 *)FUN_0001449c(0xc);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = param_1;
    iVar1 = open64(DAT_0002739c,0);
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
        FUN_00014640(__ptr[1],DAT_000273a0,__ptr,0);
        return __ptr;
      }
      close(__ptr[1]);
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_000273a4 @ 000273a4 size=40 ===== */

void FUN_000273a4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (-1 < (int)param_1[1]) {
      FUN_000146ac();
      close(param_1[1]);
    }
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_000273cc @ 000273cc size=6 ===== */

undefined4 FUN_000273cc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00027414 @ 00027414 size=14 ===== */

undefined4 FUN_00027414(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x20);
  return 0;
}



/* ===== FUN_00027422 @ 00027422 size=98 ===== */

ssize_t FUN_00027422(int *param_1,char *param_2,uint param_3,void *param_4,size_t param_5)

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



/* ===== FUN_00027484 @ 00027484 size=228 ===== */

int * FUN_00027484(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
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
  
  __ptr = (int *)FUN_0001449c(0x30);
  if (__ptr != (int *)0x0) {
    uVar1 = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    FUN_000144a4(__ptr + 1,param_1,0x11);
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
      FUN_000144a4(&local_50,__ptr + 1,0x10);
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
           (iVar2 = ioctl(*__ptr,0x8927,&local_50), uVar3 = DAT_00027568, -1 < iVar2)) {
          __ptr[7] = CONCAT22(uStack_3c,uStack_3e);
          *(undefined2 *)(__ptr + 8) = uStack_3a;
          FUN_00014640(*__ptr,uVar3,__ptr,0);
          return __ptr;
        }
      }
      close(*__ptr);
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_0002756c @ 0002756c size=34 ===== */

void FUN_0002756c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (-1 < *param_1) {
      FUN_000146ac();
      close(*param_1);
    }
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0002758e @ 0002758e size=126 ===== */

undefined4 FUN_0002758e(int param_1,undefined4 param_2,uint param_3)

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
    FUN_000144a4(&local_38,param_1 + 4,0x10);
    iVar1 = ioctl(__fd,0x8915,&local_38);
    if (iVar1 < 0) {
      close(__fd);
    }
    else {
      close(__fd);
      psVar2 = (short *)FUN_00013ef4(&local_28);
      if (*psVar2 == 2) {
        pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)(psVar2 + 2));
        uVar4 = FUN_000144a4(param_2,pcVar3,param_3);
        if (param_3 <= uVar4) {
          return 0xffffffff;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0002760c @ 0002760c size=2 ===== */

void FUN_0002760c(void)

{
  return;
}



/* ===== FUN_00027610 @ 00027610 size=276 ===== */

undefined4 FUN_00027610(ushort *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < (int)(param_1[1] & 0xffff3fff)) {
    return 0;
  }
  iVar3 = (param_1[1] & 0xffff3fff) * 6;
  iVar5 = param_3 + iVar3;
  uVar2 = (uint)*(ushort *)(param_3 + iVar3);
  if (0xf < uVar2) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/attr.c",0xc9,"validate_nla");
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/attr.c",0xc9);
  }
  uVar4 = (uint)*(ushort *)(iVar5 + 2);
  uVar6 = *param_1 - 4;
  if (uVar4 == 0) {
    if (uVar2 != 0) {
      uVar4 = (uint)*(ushort *)(&DAT_000396e4 + uVar2 * 2);
      goto LAB_00027654;
    }
    uVar4 = (uint)*(ushort *)(iVar5 + 4);
    if (uVar4 == 0) {
      return 0;
    }
  }
  else {
LAB_00027654:
    if (uVar6 < uVar4) {
      return 0xfffffff8;
    }
    uVar4 = (uint)*(ushort *)(iVar5 + 4);
    if (uVar4 == 0) goto LAB_00027670;
  }
  if ((int)uVar4 < (int)uVar6) {
    return 0xfffffff8;
  }
LAB_00027670:
  if (uVar2 == 5) {
    if (*(char *)((int)param_1 + (*param_1 - 1)) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffff9;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00027738 @ 00027738 size=20 ===== */

int FUN_00027738(int param_1)

{
  return (param_1 + 7U & 0xfffffffc) - (param_1 + 4);
}



/* ===== FUN_0002774c @ 0002774c size=12 ===== */

ushort FUN_0002774c(int param_1)

{
  return *(ushort *)(param_1 + 2) & 0x3fff;
}



/* ===== FUN_00027758 @ 00027758 size=8 ===== */

int FUN_00027758(int param_1)

{
  return param_1 + 4;
}



/* ===== FUN_00027760 @ 00027760 size=12 ===== */

int FUN_00027760(ushort *param_1)

{
  return *param_1 - 4;
}



/* ===== FUN_0002776c @ 0002776c size=44 ===== */

bool FUN_0002776c(ushort *param_1,uint param_2)

{
  if ((3 < param_2) && (3 < *param_1)) {
    return (int)(uint)*param_1 <= (int)param_2;
  }
  return false;
}



/* ===== FUN_00027798 @ 00027798 size=32 ===== */

int FUN_00027798(ushort *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3 & 0xfffffffc;
  *param_2 = *param_2 - uVar1;
  return (int)param_1 + uVar1;
}



/* ===== FUN_000277b8 @ 000277b8 size=400 ===== */

int FUN_000277b8(void *param_1,int param_2,ushort *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  memset(param_1,0,(param_2 + 1) * 4);
  uVar1 = DAT_00027948;
  if (((3 < param_4) && (3 < *param_3)) && ((int)(uint)*param_3 <= (int)param_4)) {
    while( true ) {
      uVar4 = param_3[1] & 0xffff3fff;
      if ((int)uVar4 <= param_2) {
        if ((param_5 != 0) && (iVar3 = FUN_00027610(param_3,param_2,param_5), iVar3 < 0)) {
          return iVar3;
        }
        if ((*(int *)((int)param_1 + uVar4 * 4) != 0) && (0 < DAT_0004e88c)) {
          piVar2 = __errno_location();
          iVar3 = *piVar2;
          fprintf(stderr,
                  "DBG<1>%20s:%-4u %s: Attribute of type %#x found multiple times in message, previous attribute is being ignored.\n"
                  ,"lib/attr.c",0x108,uVar1,uVar4);
          *piVar2 = iVar3;
        }
        *(ushort **)((int)param_1 + uVar4 * 4) = param_3;
      }
      uVar4 = *param_3 + 3 & 0xfffffffc;
      param_4 = param_4 - uVar4;
      if (param_4 < 4) break;
      param_3 = (ushort *)((int)param_3 + uVar4);
      if ((*param_3 < 4) || ((int)param_4 < (int)(uint)*param_3)) break;
    }
  }
  if ((0 < (int)param_4) && (0 < DAT_0004e88c)) {
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    fprintf(stderr,"DBG<1>%20s:%-4u %s: netlink: %d bytes leftover after parsing attributes.\n",
            "lib/attr.c",0x10f,DAT_00027948,param_4);
    *piVar2 = iVar3;
    return 0;
  }
  return 0;
}



/* ===== FUN_00027a68 @ 00027a68 size=96 ===== */

uint FUN_00027a68(void *param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  
  uVar2 = *param_2 - 4;
  if ((uVar2 != 0) && (uVar1 = *param_2 - 5, *(char *)((int)(param_2 + 2) + uVar1) == '\0')) {
    uVar2 = uVar1;
  }
  if (param_3 != 0) {
    __n = uVar2;
    if (param_3 <= uVar2) {
      __n = param_3 - 1;
    }
    memset(param_1,0,param_3);
    memcpy(param_1,param_2 + 2,__n);
  }
  return uVar2;
}



/* ===== FUN_00027ae8 @ 00027ae8 size=56 ===== */

void FUN_00027ae8(ushort *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if (*param_1 - 4 != sVar1 + 1) {
    return;
  }
  memcmp(param_1 + 2,param_2,sVar1 + 1);
  return;
}



/* ===== FUN_00027b20 @ 00027b20 size=300 ===== */

undefined2 * FUN_00027b20(int param_1,undefined2 param_2,int param_3)

{
  ushort uVar1;
  FILE *__stream;
  undefined2 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  if (-1 < param_3) {
    uVar7 = param_3 + 7U & 0xfffffffc;
    uVar6 = (**(int **)(param_1 + 0x2c) + 3U & 0xfffffffc) + uVar7;
    if (uVar6 <= *(uint *)(param_1 + 0x30)) {
      puVar2 = (undefined2 *)FUN_0002ba64(*(int **)(param_1 + 0x2c));
      puVar2[1] = param_2;
      uVar3 = param_3 + 4;
      *puVar2 = (short)uVar3;
      if (param_3 != 0) {
        memset((void *)((int)puVar2 + (uVar3 & 0xffff)),0,uVar7 - uVar3);
      }
      iVar5 = DAT_0004e88c;
      puVar8 = *(uint **)(param_1 + 0x2c);
      *puVar8 = uVar6;
      if (iVar5 < 2) {
        return puVar2;
      }
      piVar4 = __errno_location();
      __stream = stderr;
      uVar1 = puVar2[1];
      iVar9 = *piVar4;
      iVar5 = FUN_0002ba5c(puVar8);
      fprintf(__stream,
              "DBG<2>%20s:%-4u %s: msg %p: attr <%p> %d: Reserved %d (%d) bytes at offset +%td nlmsg_len=%d\n"
              ,"lib/attr.c",0x1e1,DAT_00027c4c,param_1,puVar2,(uint)uVar1,uVar7,param_3,
              (int)puVar2 - iVar5,**(undefined4 **)(param_1 + 0x2c));
      *piVar4 = iVar9;
      return puVar2;
    }
  }
  return (undefined2 *)0x0;
}



/* ===== FUN_00027c50 @ 00027c50 size=220 ===== */

undefined4 FUN_00027c50(int param_1,undefined4 param_2,size_t param_3,void *param_4)

{
  ushort uVar1;
  FILE *__stream;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = FUN_00027b20();
  if (iVar2 == 0) {
    if ((int)param_3 < 0) {
      uVar5 = 0xfffffff9;
    }
    else {
      uVar5 = 0xfffffffb;
    }
    return uVar5;
  }
  if ((0 < (int)param_3) && (memcpy((void *)(iVar2 + 4),param_4,param_3), 1 < DAT_0004e88c)) {
    piVar3 = __errno_location();
    __stream = stderr;
    uVar1 = *(ushort *)(iVar2 + 2);
    iVar6 = *piVar3;
    iVar4 = FUN_0002ba5c(*(undefined4 *)(param_1 + 0x2c));
    fprintf(__stream,"DBG<2>%20s:%-4u %s: msg %p: attr <%p> %d: Wrote %d bytes at offset +%td\n",
            "lib/attr.c",0x204,DAT_00027d2c,param_1,iVar2,(uint)uVar1,param_3,iVar2 - iVar4);
    *piVar3 = iVar6;
    return 0;
  }
  return 0;
}



/* ===== FUN_00027d30 @ 00027d30 size=60 ===== */

void FUN_00027d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0002aba4(param_3);
  uVar2 = FUN_0002ab90(param_3);
  FUN_00027c50(param_1,param_2,uVar1,uVar2);
  return;
}



/* ===== FUN_00027d6c @ 00027d6c size=60 ===== */

void FUN_00027d6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_000327a4(param_3);
  uVar2 = FUN_0003279c(param_3);
  FUN_00027c50(param_1,param_2,uVar1,uVar2);
  return;
}



/* ===== FUN_00027da8 @ 00027da8 size=32 ===== */

void FUN_00027da8(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 local_9 [5];
  
  local_9[0] = param_3;
  FUN_00027c50(param_1,param_2,1,local_9);
  return;
}



/* ===== FUN_00027dd0 @ 00027dd0 size=32 ===== */

void FUN_00027dd0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 local_9 [5];
  
  local_9[0] = param_3;
  FUN_00027c50(param_1,param_2,1,local_9);
  return;
}



/* ===== FUN_00027df0 @ 00027df0 size=8 ===== */

undefined1 FUN_00027df0(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}



/* ===== FUN_00027df8 @ 00027df8 size=32 ===== */

void FUN_00027df8(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 local_a [3];
  
  local_a[0] = param_3;
  FUN_00027c50(param_1,param_2,2,local_a);
  return;
}



/* ===== FUN_00027e20 @ 00027e20 size=32 ===== */

void FUN_00027e20(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 local_a [3];
  
  local_a[0] = param_3;
  FUN_00027c50(param_1,param_2,2,local_a);
  return;
}



/* ===== FUN_00027e40 @ 00027e40 size=8 ===== */

undefined2 FUN_00027e40(int param_1)

{
  return *(undefined2 *)(param_1 + 4);
}



/* ===== FUN_00027e48 @ 00027e48 size=32 ===== */

void FUN_00027e48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c [2];
  
  local_c[0] = param_3;
  FUN_00027c50(param_1,param_2,4,local_c);
  return;
}



/* ===== FUN_00027e70 @ 00027e70 size=32 ===== */

void FUN_00027e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c [2];
  
  local_c[0] = param_3;
  FUN_00027c50(param_1,param_2,4,local_c);
  return;
}



/* ===== FUN_00027e90 @ 00027e90 size=8 ===== */

undefined4 FUN_00027e90(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== FUN_00027e98 @ 00027e98 size=32 ===== */

void FUN_00027e98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  FUN_00027c50(param_1,param_2,8,&local_10);
  return;
}



/* ===== FUN_00027ef4 @ 00027ef4 size=32 ===== */

void FUN_00027ef4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  FUN_00027c50(param_1,param_2,8,&local_10);
  return;
}



/* ===== FUN_00027f14 @ 00027f14 size=60 ===== */

void FUN_00027f14(ushort *param_1)

{
  if (param_1 == (ushort *)0x0) {
    return;
  }
  if (*param_1 - 4 < 8) {
    return;
  }
  return;
}



/* ===== FUN_00027f50 @ 00027f50 size=48 ===== */

void FUN_00027f50(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  FUN_00027c50(param_1,param_2,sVar1 + 1,param_3);
  return;
}



/* ===== FUN_00027f80 @ 00027f80 size=8 ===== */

int FUN_00027f80(int param_1)

{
  return param_1 + 4;
}



/* ===== FUN_00027fb8 @ 00027fb8 size=40 ===== */

void FUN_00027fb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = param_3;
  FUN_00027c50(param_1,param_2,8,&local_10);
  return;
}



/* ===== FUN_00027fec @ 00027fec size=160 ===== */

void FUN_00027fec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (1 < DAT_0004e88c) {
    piVar1 = __errno_location();
    iVar4 = *piVar1;
    fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: attr <> %d: adding msg %p as nested attribute\n",
            "lib/attr.c",0x378,DAT_0002808c,param_1,param_2,param_3);
    *piVar1 = iVar4;
  }
  uVar2 = FUN_0002ba78(*(undefined4 *)(param_3 + 0x2c));
  uVar3 = FUN_0002ba5c(*(undefined4 *)(param_3 + 0x2c));
  FUN_00027c50(param_1,param_2,uVar2,uVar3);
  return;
}



/* ===== FUN_00028090 @ 00028090 size=176 ===== */

int FUN_00028090(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0002ba64(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = FUN_00027b20(param_1,param_2,0);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else if (1 < DAT_0004e88c) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: attr <%p> %d: starting nesting\n","lib/attr.c",0x38e
            ,DAT_00028140,param_1,iVar1,(uint)*(ushort *)(iVar1 + 2));
    *piVar3 = iVar2;
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_00028144 @ 00028144 size=164 ===== */

void FUN_00028144(int param_1,int param_2)

{
  int iVar1;
  void *__s;
  int *piVar2;
  size_t __n;
  
  iVar1 = FUN_0002ba64(*(undefined4 *)(param_1 + 0x2c));
  __n = iVar1 - param_2;
  if ((int)__n < 0) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/attr.c",0x3d3,DAT_000281e8);
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/attr.c",0x3d3);
  }
  if (__n == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  *piVar2 = *piVar2 - __n;
  __s = (void *)FUN_0002ba64(piVar2);
  memset(__s,0,__n);
  return;
}



/* ===== FUN_000281ec @ 000281ec size=420 ===== */

undefined4 FUN_000281ec(int param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = FUN_0002ba64(*(undefined4 *)(param_1 + 0x2c));
  uVar4 = iVar1 - (int)param_2;
  bVar5 = 3 < uVar4;
  if (uVar4 != 4) {
    bVar5 = 0xffff < uVar4;
  }
  if (bVar5) {
    FUN_00028144(param_1,param_2,1);
    if (uVar4 != 4) {
      return 0xffffffde;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x2c);
    *param_2 = (ushort)uVar4;
    iVar1 = (*piVar3 + 3U & 0xfffffffc) - *piVar3;
    if (iVar1 != 0) {
      iVar2 = FUN_0002bd1c(param_1,iVar1);
      if (iVar2 == 0) {
        fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/attr.c",0x3b8,DAT_00028390);
                    /* WARNING: Subroutine does not return */
        __assert("0","lib/attr.c",0x3b8);
      }
      if (DAT_0004e88c < 2) {
        return 0;
      }
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: attr <%p> %d: added %zu bytes of padding\n",
              "lib/attr.c",0x3bb,DAT_00028390,param_1,param_2,(uint)param_2[1],iVar1);
      *piVar3 = iVar2;
    }
    if (1 < DAT_0004e88c) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: attr <%p> %d: closing nesting, len=%u\n",
              "lib/attr.c",0x3bf,DAT_00028390,param_1,param_2,(uint)param_2[1],(uint)*param_2);
      *piVar3 = iVar1;
    }
  }
  return 0;
}



/* ===== FUN_00028394 @ 00028394 size=32 ===== */

void FUN_00028394(undefined4 param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  FUN_000277b8(param_1,param_2,param_3 + 2,*param_3 - 4,param_4);
  return;
}



/* ===== FUN_000283b4 @ 000283b4 size=12 ===== */

uint FUN_000283b4(int param_1)

{
  return (uint)(int)*(short *)(param_1 + 2) >> 0x1f;
}



/* ===== FUN_000283c0 @ 000283c0 size=192 ===== */

undefined4 FUN_000283c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)(param_2 + 0x20);
  if (*(int *)(param_1 + 0x1c) == puVar4[2]) {
    UNRECOVERED_JUMPTABLE = (code *)puVar4[7];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (1 < DAT_0004e88c) {
        piVar1 = __errno_location();
        iVar5 = *piVar1;
        fprintf(stderr,"DBG<2>%20s:%-4u %s: Requesting update from kernel for cache %p <%s>\n",
                "lib/cache.c",0x28e,"nl_cache_request_full_dump",param_2,*puVar4);
        iVar3 = *(int *)(param_2 + 0x20);
        *piVar1 = iVar5;
        UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x1c);
      }
                    /* WARNING: Could not recover jumptable at 0x00028468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,param_1);
      return uVar2;
    }
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0xffffffe6;
  }
  return uVar2;
}



/* ===== FUN_00028480 @ 00028480 size=228 ===== */

int FUN_00028480(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_2 + 8) = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_00031848(), -1 < iVar1)) {
    iVar1 = DAT_0004e88c;
    piVar2 = *(int **)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 8);
    *piVar2 = param_2 + 0xc;
    iVar4 = iVar4 + 1;
    *(int **)(param_2 + 0x10) = piVar2;
    *(int *)(param_1 + 4) = param_2 + 0xc;
    *(int *)(param_2 + 0xc) = param_1;
    *(int *)(param_1 + 8) = iVar4;
    if (iVar1 < 3) {
      return 0;
    }
    piVar2 = __errno_location();
    iVar5 = *piVar2;
    if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
      pcVar3 = "unknown";
    }
    else {
      pcVar3 = (char *)**(undefined4 **)(param_1 + 0x20);
    }
    fprintf(stderr,"DBG<3>%20s:%-4u %s: Added object %p to cache %p <%s>, nitems %d\n","lib/cache.c"
            ,0x1c4,DAT_00028564,param_2,param_1,pcVar3,iVar4);
    iVar1 = 0;
    *piVar2 = iVar5;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return iVar1;
}



/* ===== FUN_00028568 @ 00028568 size=348 ===== */

int FUN_00028568(int param_1,int param_2,undefined4 param_3)

{
  FILE *__stream;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_28;
  undefined4 local_24;
  
  puVar5 = *(undefined4 **)(param_2 + 0x20);
  local_28 = puVar5;
  local_24 = param_3;
  if (1 < DAT_0004e88c) {
    piVar1 = __errno_location();
    iVar6 = *piVar1;
    if (puVar5 == (undefined4 *)0x0) {
      pcVar4 = "unknown";
    }
    else {
      pcVar4 = (char *)*puVar5;
    }
    fprintf(stderr,"DBG<2>%20s:%-4u %s: Picking up answer for cache %p <%s>\n","lib/cache.c",0x2b7,
            DAT_000286c4,param_2,pcVar4);
    *piVar1 = iVar6;
  }
  iVar6 = FUN_0002b10c(*(undefined4 *)(param_1 + 0x2c));
  if (iVar6 == 0) {
    iVar2 = -5;
  }
  else {
    FUN_0002b1d0(iVar6,0,3,&LAB_000291f0,&local_28);
    iVar2 = FUN_0002e3d4(param_1,iVar6);
    if ((iVar2 < 0) && (1 < DAT_0004e88c)) {
      piVar1 = __errno_location();
      __stream = stderr;
      if (*(undefined4 **)(param_2 + 0x20) == (undefined4 *)0x0) {
        pcVar4 = "unknown";
      }
      else {
        pcVar4 = (char *)**(undefined4 **)(param_2 + 0x20);
      }
      iVar7 = *piVar1;
      uVar3 = FUN_0002abe4(iVar2);
      fprintf(__stream,
              "DBG<2>%20s:%-4u %s: While picking up for %p <%s>, recvmsgs() returned %d: %s\n",
              "lib/cache.c",0x2c2,DAT_000286c4,param_2,pcVar4,iVar2,uVar3);
      *piVar1 = iVar7;
    }
    FUN_0002b150(iVar6);
  }
  return iVar2;
}



/* ===== FUN_0002880c @ 0002880c size=220 ===== */

void * FUN_0002880c(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  pvVar1 = calloc(1,0x24);
  if (pvVar1 != (void *)0x0) {
    iVar4 = *(int *)(param_1 + 0x4c);
    *(void **)pvVar1 = pvVar1;
    iVar4 = *(int *)(iVar4 + 0x2c);
    uVar5 = *(uint *)(param_1 + 0x10);
    *(void **)((int)pvVar1 + 4) = pvVar1;
    *(int *)((int)pvVar1 + 0x20) = param_1;
    *(undefined4 *)((int)pvVar1 + 0x14) = 1;
    *(uint *)((int)pvVar1 + 0x18) = *(uint *)((int)pvVar1 + 0x18) | uVar5;
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 == 0) {
        iVar4 = 0x400;
      }
      uVar2 = FUN_0003171c(iVar4);
      *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    }
    if (1 < DAT_0004e88c) {
      piVar3 = __errno_location();
      iVar4 = *piVar3;
      if (*(undefined4 **)((int)pvVar1 + 0x20) == (undefined4 *)0x0) {
        pcVar6 = "unknown";
      }
      else {
        pcVar6 = (char *)**(undefined4 **)((int)pvVar1 + 0x20);
      }
      fprintf(stderr,"DBG<2>%20s:%-4u %s: Allocated cache %p <%s>.\n","lib/cache.c",0xd4,
              DAT_000288e8,pvVar1,pcVar6);
      *piVar3 = iVar4;
    }
  }
  return pvVar1;
}



/* ===== FUN_000288ec @ 000288ec size=72 ===== */

undefined4 FUN_000288ec(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002a34c();
  if (iVar1 == 0) {
    return 0xffffffe8;
  }
  iVar2 = FUN_0002880c();
  FUN_0002a308(iVar1);
  if (iVar2 != 0) {
    *param_2 = iVar2;
    return 0;
  }
  return 0xfffffffb;
}



/* ===== FUN_00028934 @ 00028934 size=144 ===== */

void FUN_00028934(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0004e88c;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (2 < iVar4) {
    piVar1 = __errno_location();
    iVar4 = *piVar1;
    if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
      pcVar2 = "unknown";
    }
    else {
      pcVar2 = (char *)**(undefined4 **)(param_1 + 0x20);
    }
    fprintf(stderr,"DBG<3>%20s:%-4u %s: Incremented cache %p <%s> reference count to %d\n",
            "lib/cache.c",0x18c,DAT_000289c4,param_1,pcVar2,iVar3);
    *piVar1 = iVar4;
  }
  return;
}



/* ===== FUN_000289c8 @ 000289c8 size=236 ===== */

int FUN_000289c8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x4c) == *(int *)(param_2 + 4)) {
    if (*(int *)(param_2 + 0xc) == param_2 + 0xc) {
      FUN_0002e9b8(param_2);
    }
    else {
      if (2 < DAT_0004e88c) {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        fprintf(stderr,"DBG<3>%20s:%-4u %s: Object %p already in cache, cloning new object\n",
                "lib/cache.c",0x1e8,DAT_00028ab4,param_2);
        *piVar2 = iVar1;
      }
      param_2 = FUN_0002e858(param_2);
      if (param_2 == 0) {
        return -5;
      }
    }
    iVar1 = FUN_00028480(param_1,param_2);
    if (iVar1 < 0) {
      FUN_0002ea3c(param_2);
      return iVar1;
    }
  }
  else {
    iVar1 = -0x17;
  }
  return iVar1;
}



/* ===== FUN_00028ab8 @ 00028ab8 size=300 ===== */

int FUN_00028ab8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar1 = FUN_0002880c(param_1[8]);
    if (iVar1 != 0) {
      if (1 < DAT_0004e88c) {
        piVar2 = __errno_location();
        iVar4 = *piVar2;
        if ((undefined4 *)param_1[8] == (undefined4 *)0x0) {
          pcVar3 = "unknown";
        }
        else {
          pcVar3 = *(char **)param_1[8];
        }
        fprintf(stderr,
                "DBG<2>%20s:%-4u %s: Filling subset of cache %p <%s> with filter %p into %p\n",
                "lib/cache.c",0x137,DAT_00028be4,param_1,pcVar3,param_2,iVar1);
        *piVar2 = iVar4;
      }
      for (piVar2 = (int *)*param_1; param_1 != piVar2; piVar2 = (int *)*piVar2) {
        iVar4 = FUN_0002ed50(piVar2 + -3,param_2);
        if (iVar4 != 0) {
          FUN_000289c8(iVar1,piVar2 + -3);
        }
      }
    }
    return iVar1;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/cache.c",0x130,DAT_00028be4);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/cache.c",0x130);
}



/* ===== FUN_00028be8 @ 00028be8 size=172 ===== */

int FUN_00028be8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0002880c(param_1[8]);
  if (iVar1 != 0) {
    if (1 < DAT_0004e88c) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: Cloning %p into %p\n","lib/cache.c",0x15b,DAT_00028c94,
              param_1,iVar1);
      *piVar2 = iVar3;
    }
    for (piVar2 = (int *)*param_1; param_1 != piVar2; piVar2 = (int *)*piVar2) {
      FUN_000289c8(iVar1,piVar2 + -3);
    }
  }
  return iVar1;
}



/* ===== FUN_00028ca8 @ 00028ca8 size=332 ===== */

void FUN_00028ca8(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    if (((*(int *)(iVar4 + 0x1c) != 0) &&
        (iVar1 = FUN_000319bc(*(int *)(iVar4 + 0x1c),param_1), iVar1 < 0)) && (1 < DAT_0004e88c)) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      if (*(undefined4 **)(iVar4 + 0x20) == (undefined4 *)0x0) {
        pcVar3 = "unknown";
      }
      else {
        pcVar3 = (char *)**(undefined4 **)(iVar4 + 0x20);
      }
      fprintf(stderr,"DBG<2>%20s:%-4u %s: Failed to delete %p from cache %p <%s>.\n","lib/cache.c",
              0x233,DAT_00028df4,param_1,iVar4,pcVar3);
      *piVar2 = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    piVar2 = *(int **)(param_1 + 0x10);
    *(int **)(iVar1 + 4) = piVar2;
    *piVar2 = iVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_0002ea3c(param_1);
    iVar1 = DAT_0004e88c;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
    if (1 < iVar1) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      if (*(undefined4 **)(iVar4 + 0x20) == (undefined4 *)0x0) {
        pcVar3 = "unknown";
      }
      else {
        pcVar3 = (char *)**(undefined4 **)(iVar4 + 0x20);
      }
      fprintf(stderr,"DBG<2>%20s:%-4u %s: Deleted object %p from cache %p <%s>.\n","lib/cache.c",
              0x23c,DAT_00028df4,param_1,iVar4,pcVar3);
      *piVar2 = iVar1;
    }
  }
  return;
}



/* ===== FUN_00028df8 @ 00028df8 size=176 ===== */

void FUN_00028df8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  if (1 < DAT_0004e88c) {
    piVar3 = __errno_location();
    iVar5 = *piVar3;
    if ((undefined4 *)param_1[8] == (undefined4 *)0x0) {
      pcVar4 = "unknown";
    }
    else {
      pcVar4 = *(char **)param_1[8];
    }
    fprintf(stderr,"DBG<2>%20s:%-4u %s: Clearing cache %p <%s>...\n","lib/cache.c",0x172,
            DAT_00028ea8,param_1,pcVar4);
    *piVar3 = iVar5;
  }
  piVar2 = *(int **)*param_1;
  piVar3 = (undefined4 *)*param_1;
  while (piVar1 = piVar2, param_1 != piVar3) {
    FUN_00028ca8(piVar3 + -3);
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
  return;
}



/* ===== FUN_00028eac @ 00028eac size=308 ===== */

void FUN_00028eac(void *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0004e88c;
  if (param_1 != (void *)0x0) {
    iVar3 = *(int *)((int)param_1 + 0x14) + -1;
    *(int *)((int)param_1 + 0x14) = iVar3;
    if (2 < iVar4) {
      piVar1 = __errno_location();
      iVar4 = *piVar1;
      if (*(undefined4 **)((int)param_1 + 0x20) == (undefined4 *)0x0) {
        pcVar2 = "unknown";
      }
      else {
        pcVar2 = (char *)**(undefined4 **)((int)param_1 + 0x20);
      }
      fprintf(stderr,"DBG<3>%20s:%-4u %s: Decremented cache %p <%s> reference count, %d remaining\n"
              ,"lib/cache.c",0x1a0,DAT_00028fe0,param_1,pcVar2,iVar3);
      *piVar1 = iVar4;
      iVar3 = *(int *)((int)param_1 + 0x14);
    }
    if (iVar3 < 1) {
      FUN_00028df8(param_1);
      if (*(int *)((int)param_1 + 0x1c) != 0) {
        FUN_00031770();
      }
      if (1 < DAT_0004e88c) {
        piVar1 = __errno_location();
        iVar4 = *piVar1;
        if (*(undefined4 **)((int)param_1 + 0x20) == (undefined4 *)0x0) {
          pcVar2 = "unknown";
        }
        else {
          pcVar2 = (char *)**(undefined4 **)((int)param_1 + 0x20);
        }
        fprintf(stderr,"DBG<2>%20s:%-4u %s: Freeing cache %p <%s>...\n","lib/cache.c",0x17f,
                DAT_00028fe4,param_1,pcVar2);
        *piVar1 = iVar4;
      }
      free(param_1);
      return;
    }
  }
  return;
}



/* ===== FUN_00028fec @ 00028fec size=196 ===== */

undefined4 FUN_00028fec(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x4c) == *(int *)(param_2 + 4)) {
    if (2 < DAT_0004e88c) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      fprintf(stderr,"DBG<3>%20s:%-4u %s: Moving object %p from cache %p to cache %p\n",
              "lib/cache.c",0x211,DAT_000290b0,param_2,*(undefined4 *)(param_2 + 8),param_1);
      *piVar2 = iVar3;
    }
    FUN_0002e9b8(param_2);
    if (*(int *)(param_2 + 0xc) != param_2 + 0xc) {
      FUN_00028ca8(param_2);
    }
    uVar1 = FUN_00028480(param_1,param_2);
    return uVar1;
  }
  return 0xffffffe9;
}



/* ===== FUN_000290d4 @ 000290d4 size=68 ===== */

undefined4 FUN_000290d4(int param_1,int param_2)

{
  undefined4 uVar1;
  code *local_10;
  int local_c;
  
  local_10 = FUN_00029518;
  if (*(int *)(param_1 + 0x1c) == *(int *)(*(int *)(param_2 + 0x20) + 8)) {
    local_c = param_2;
    uVar1 = FUN_00028568(param_1,param_2,&local_10);
  }
  else {
    uVar1 = 0xffffffe6;
  }
  return uVar1;
}



/* ===== FUN_00029118 @ 00029118 size=68 ===== */

undefined4 FUN_00029118(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &LAB_00028c98;
  if (*(int *)(param_1 + 0x1c) == *(int *)(*(int *)(param_2 + 0x20) + 8)) {
    local_c = param_2;
    uVar1 = FUN_00028568(param_1,param_2,&local_10);
  }
  else {
    uVar1 = 0xffffffe6;
  }
  return uVar1;
}



/* ===== FUN_0002915c @ 0002915c size=148 ===== */

int FUN_0002915c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0002bab4(param_3,*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return -0x15;
  }
  uVar3 = *(uint *)(param_1 + 0x5c);
  iVar1 = param_1;
  do {
    if ((int)uVar3 < 0) {
      return -0x16;
    }
    while (uVar3 == *(ushort *)(param_3 + 4)) {
      iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_2,param_3,param_4);
      if (iVar2 != -10) {
        return iVar2;
      }
      uVar3 = *(uint *)(iVar1 + 0x68);
      iVar1 = iVar1 + 0xc;
      if ((int)uVar3 < 0) {
        return -0x16;
      }
    }
    uVar3 = *(uint *)(iVar1 + 0x68);
    iVar1 = iVar1 + 0xc;
  } while( true );
}



/* ===== FUN_0002921c @ 0002921c size=68 ===== */

void FUN_0002921c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *local_10;
  int local_c;
  
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  local_10 = &LAB_00028c98;
  local_c = param_1;
  uVar1 = FUN_0002c044(param_2);
  FUN_0002915c(uVar2,0,uVar1,&local_10);
  return;
}



/* ===== FUN_00029260 @ 00029260 size=480 ===== */

uint FUN_00029260(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_34;
  undefined1 *local_30;
  int local_2c;
  
  if (*(int *)(param_1 + 0x1c) != *(int *)(*(int *)(param_2 + 0x20) + 8)) {
    return 0xffffffe6;
  }
  FUN_00028df8(param_2);
  puVar8 = *(undefined4 **)(*(int *)(param_2 + 0x20) + 0x18);
  puVar1 = puVar8;
  do {
    local_34 = puVar1 + 2;
    if (((puVar8 != (undefined4 *)0x0) && (puVar1[1] != 0)) &&
       ((*(uint *)(param_2 + 0x18) & 1) != 0)) {
      *(undefined4 *)(param_2 + 0xc) = *puVar1;
    }
    while( true ) {
      uVar2 = FUN_000283c0(param_1,param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      puVar7 = *(undefined4 **)(param_2 + 0x20);
      if (1 < DAT_0004e88c) {
        piVar3 = __errno_location();
        iVar9 = *piVar3;
        if (puVar7 == (undefined4 *)0x0) {
          pcVar5 = "unknown";
        }
        else {
          pcVar5 = (char *)*puVar7;
        }
        if (puVar8 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar1;
        }
        fprintf(stderr,
                "DBG<2>%20s:%-4u %s: Updating cache %p <%s> for family %u, request sent, waiting for reply\n"
                ,"lib/cache.c",0x425,DAT_00029440,param_2,pcVar5,uVar4);
        puVar7 = *(undefined4 **)(param_2 + 0x20);
        *piVar3 = iVar9;
      }
      local_30 = &LAB_00028c98;
      if (*(int *)(param_1 + 0x1c) != puVar7[2]) {
        return 0xffffffe6;
      }
      local_2c = param_2;
      uVar2 = FUN_00028568(param_1,param_2,&local_30);
      if (uVar2 != 0xffffffdf) break;
      if (1 < DAT_0004e88c) {
        piVar3 = __errno_location();
        iVar9 = *piVar3;
        fprintf(stderr,"DBG<2>%20s:%-4u %s: Dump interrupted, restarting!\n","lib/cache.c",0x429,
                DAT_00029440);
        *piVar3 = iVar9;
      }
    }
    uVar6 = ~uVar2 >> 0x1f;
    if (puVar8 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    if (((uVar6 == 0) || (puVar8 = puVar8 + 2, puVar8 == (undefined4 *)0x0)) ||
       ((puVar1[3] == 0 || (puVar1 = local_34, (*(uint *)(param_2 + 0x18) & 1) == 0)))) {
      return uVar2;
    }
  } while( true );
}



/* ===== FUN_0002949c @ 0002949c size=124 ===== */

int FUN_0002949c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1[7] == 0) {
    iVar4 = 0;
    for (piVar3 = (int *)*param_1; param_1 != piVar3; piVar3 = (int *)*piVar3) {
      iVar2 = (int)(piVar3 + -3);
      iVar1 = FUN_0002ebd4(iVar2,param_2);
      if (iVar1 != 0) goto LAB_000294f4;
    }
  }
  else {
    iVar2 = FUN_000317d8(param_1[7]);
    if (iVar2 == 0) {
      return 0;
    }
LAB_000294f4:
    FUN_0002e9b8(iVar2);
    iVar4 = iVar2;
  }
  return iVar4;
}



/* ===== FUN_00029518 @ 00029518 size=92 ===== */

undefined4 FUN_00029518(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_0002949c(uVar3,param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_0002e710(iVar1,param_1);
    if (iVar2 == 0) {
      FUN_0002ea3c(iVar1);
      return 0;
    }
    FUN_00028ca8();
    FUN_0002ea3c(iVar1);
  }
  uVar3 = FUN_000289c8(uVar3,param_1);
  return uVar3;
}



/* ===== FUN_00029574 @ 00029574 size=812 ===== */

undefined4
FUN_00029574(undefined4 param_1,undefined4 param_2,int *param_3,code *param_4,code *param_5,
            undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (1 < *param_3 - 1U) {
    if (DAT_0004e88c < 2) {
      return 0;
    }
    piVar1 = __errno_location();
    iVar4 = *piVar1;
    fprintf(stderr,"DBG<2>%20s:%-4u %s: Unknown action associated to object %p\n","lib/cache.c",
            0x356,DAT_000298a0,param_2);
    *piVar1 = iVar4;
    return 0;
  }
  iVar4 = FUN_0002949c();
  if (iVar4 == 0) {
    if (*param_3 != 1) {
      return 0;
    }
    FUN_00028fec(param_1,param_2);
    if (param_5 != (code *)0x0) {
      (*param_5)(param_1,0,param_2,param_5,0,1,param_6);
      return 0;
    }
    if (param_4 == (code *)0x0) {
      return 0;
    }
    (*param_4)(param_1,param_2,1,param_6);
    return 0;
  }
  if (param_5 == (code *)0x0) {
    iVar3 = FUN_0002e710(iVar4,param_2);
    if (iVar3 == 0) {
      if (param_4 != (code *)0x0) {
        (*param_4)(param_1,iVar4,5,param_6);
      }
      goto LAB_0002969c;
    }
    FUN_0002ea3c(0);
    FUN_00028ca8(iVar4);
    iVar3 = *param_3;
    if (iVar3 == 2) {
      if (param_4 != (code *)0x0) {
        (*param_4)(param_1,iVar4,2,param_6);
      }
      goto LAB_0002982c;
    }
LAB_000297e0:
    if (iVar3 != 1) {
      return 0;
    }
    FUN_00028fec(param_1,param_2);
    if (param_5 == (code *)0x0 && param_4 == (code *)0x0) goto LAB_0002969c;
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    if (*(int *)(*(int *)(iVar4 + 4) + 0x28) != 0) {
      uVar2 = FUN_0002e858();
      uVar5 = FUN_0002ecc8(iVar4,param_2);
    }
    iVar3 = FUN_0002e710(iVar4,param_2);
    if (iVar3 == 0) {
      (*param_5)(param_1,uVar2,param_2,param_5,uVar5,5,param_6);
      FUN_0002ea3c(uVar2);
      goto LAB_0002969c;
    }
    FUN_0002ea3c(uVar2);
    FUN_00028ca8(iVar4);
    if (*param_3 == 2) {
      (*param_5)(param_1,iVar4,0,param_5,0,2,param_6);
LAB_0002982c:
      FUN_0002ea3c(iVar4);
      iVar3 = *param_3;
      goto LAB_000297e0;
    }
    if (*param_3 != 1) {
      return 0;
    }
    FUN_00028fec(param_1,param_2);
  }
  lVar6 = FUN_0002ecc8(iVar4,param_2);
  if (param_5 == (code *)0x0 || lVar6 == 0) {
    if (param_4 != (code *)0x0 && lVar6 != 0) {
      (*param_4)(param_1,param_2,5,param_6);
    }
  }
  else {
    (*param_5)(param_1,iVar4,param_2,param_5,lVar6,5,param_6);
  }
LAB_0002969c:
  FUN_0002ea3c(iVar4);
  return 0;
}



/* ===== FUN_000298a4 @ 000298a4 size=296 ===== */

undefined4 FUN_000298a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  if (puVar4[0x13] == *(int *)(param_2 + 4)) {
    if (-1 < (int)puVar4[0x17]) {
      if (*(int *)(param_2 + 0x14) == puVar4[0x17]) {
        iVar3 = 0x5c;
      }
      else {
        iVar3 = 0;
        puVar5 = puVar4;
        do {
          piVar2 = puVar5 + 0x1a;
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 3;
          if (*piVar2 < 0) goto LAB_00029910;
        } while (*piVar2 != *(int *)(param_2 + 0x14));
        iVar3 = iVar3 * 0xc + 0x5c;
      }
      uVar1 = FUN_00029574(param_1,param_2,(int)puVar4 + iVar3 + 4,param_3,0,param_4);
      return uVar1;
    }
LAB_00029910:
    if (2 < DAT_0004e88c) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      fprintf(stderr,"DBG<3>%20s:%-4u %s: Object %p does not seem to belong to cache %p <%s>\n",
              "lib/cache.c",0x36c,DAT_000299cc,param_2,param_1,*puVar4);
      *piVar2 = iVar3;
      return 0xffffffea;
    }
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0xffffffe9;
  }
  return uVar1;
}



/* ===== FUN_0002a2b0 @ 0002a2b0 size=72 ===== */

undefined4 * FUN_0002a2b0(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0004e7b4;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_1), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x14];
  }
  return puVar2;
}



/* ===== FUN_0002a308 @ 0002a308 size=16 ===== */

void FUN_0002a308(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* ===== FUN_0002a318 @ 0002a318 size=48 ===== */

undefined4 FUN_0002a318(undefined4 param_1)

{
  pthread_rwlock_t *__rwlock;
  undefined4 uVar1;
  
  __rwlock = DAT_0002a348;
  pthread_rwlock_rdlock(DAT_0002a348);
  uVar1 = FUN_0002a2b0(param_1);
  pthread_rwlock_unlock(__rwlock);
  return uVar1;
}



/* ===== FUN_0002a34c @ 0002a34c size=56 ===== */

int FUN_0002a34c(undefined4 param_1)

{
  pthread_rwlock_t *__rwlock;
  int iVar1;
  
  pthread_rwlock_wrlock(DAT_0002a384);
  iVar1 = FUN_0002a2b0(param_1);
  __rwlock = DAT_0002a384;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  pthread_rwlock_unlock(__rwlock);
  return iVar1;
}



/* ===== FUN_0002a388 @ 0002a388 size=132 ===== */

int FUN_0002a388(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0004e7b8);
  for (iVar4 = DAT_0004e7b4; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x50)) {
    if (param_1 == *(int *)(iVar4 + 8)) {
      iVar2 = *(int *)(iVar4 + 0x5c);
      iVar3 = iVar4;
      while (-1 < iVar2) {
        if (param_2 == iVar2) goto LAB_0002a3fc;
        piVar1 = (int *)(iVar3 + 0x68);
        iVar3 = iVar3 + 0xc;
        iVar2 = *piVar1;
      }
    }
  }
LAB_0002a3fc:
  pthread_rwlock_unlock(DAT_0002a40c);
  return iVar4;
}



/* ===== FUN_0002a410 @ 0002a410 size=144 ===== */

int FUN_0002a410(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7b8);
  iVar4 = DAT_0004e7b4;
  do {
    if (iVar4 == 0) {
LAB_0002a490:
      pthread_rwlock_unlock(DAT_0002a4a0);
      return iVar4;
    }
    if (param_1 == *(int *)(iVar4 + 8)) {
      iVar2 = *(int *)(iVar4 + 0x5c);
      iVar3 = iVar4;
      while (-1 < iVar2) {
        if (param_2 == iVar2) {
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          goto LAB_0002a490;
        }
        piVar1 = (int *)(iVar3 + 0x68);
        iVar3 = iVar3 + 0xc;
        iVar2 = *piVar1;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x50);
  } while( true );
}



/* ===== FUN_0002a4a4 @ 0002a4a4 size=96 ===== */

int FUN_0002a4a4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    return 0;
  }
  if (param_2 == *(int *)(param_1 + 0x5c)) {
    iVar3 = 0x5c;
  }
  else {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      piVar1 = (int *)(iVar3 + 0x68);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
      if (*piVar1 < 0) {
        return 0;
      }
    } while (*piVar1 != param_2);
    iVar3 = iVar2 * 0xc + 0x5c;
  }
  return param_1 + iVar3;
}



/* ===== FUN_0002a504 @ 0002a504 size=76 ===== */

void FUN_0002a504(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0004e7b8);
  for (iVar1 = DAT_0004e7b4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x50)) {
    (*param_1)(iVar1,param_2);
  }
  pthread_rwlock_unlock(DAT_0002a550);
  return;
}



/* ===== FUN_0002a6cc @ 0002a6cc size=236 ===== */

undefined4 FUN_0002a6cc(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_0004e7b4;
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7b8);
  if (param_1[5] == 0) {
    if (DAT_0004e7b4 == (undefined4 *)0x0) {
LAB_0002a724:
      uVar4 = 0xffffffe8;
    }
    else {
      puVar2 = DAT_0004e7b4;
      puVar3 = param_1;
      if (param_1 != DAT_0004e7b4) {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined4 *)puVar6[0x14];
          if (puVar2 == (undefined4 *)0x0) goto LAB_0002a724;
        } while (param_1 != puVar2);
        puVar6 = puVar6 + 0x14;
        puVar3 = puVar2;
      }
      if (0 < DAT_0004e88c) {
        piVar1 = __errno_location();
        iVar5 = *piVar1;
        fprintf(stderr,"DBG<1>%20s:%-4u %s: Unregistered cache operations %s\n","lib/cache_mngt.c",
                0x134,DAT_0002a7bc,*param_1);
        *piVar1 = iVar5;
      }
      uVar4 = 0;
      *puVar6 = puVar3[0x14];
    }
  }
  else {
    uVar4 = 0xffffffe7;
  }
  pthread_rwlock_unlock(DAT_0002a7b8);
  return uVar4;
}



/* ===== FUN_0002a7c0 @ 0002a7c0 size=204 ===== */

void FUN_0002a7c0(int param_1)

{
  int iVar1;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7b8);
  iVar1 = DAT_0004e7b4;
  while( true ) {
    if (iVar1 == 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/cache_mngt.c",0x154,DAT_0002a890);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/cache_mngt.c",0x154);
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x4c) == *(int *)(iVar1 + 0x4c)) break;
    iVar1 = *(int *)(iVar1 + 0x50);
  }
  FUN_00028934(param_1);
  if (*(int *)(iVar1 + 0x54) == 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  *(int *)(iVar1 + 0x54) = param_1;
  pthread_rwlock_unlock(DAT_0002a88c);
  return;
}



/* ===== FUN_0002a99c @ 0002a99c size=156 ===== */

int FUN_0002a99c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0002a34c();
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    if (*(int *)(iVar1 + 0x54) != 0) {
      return *(int *)(iVar1 + 0x54);
    }
  }
  if (DAT_0004e88c < 1) {
    return 0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fprintf(stderr,
          "DBG<1>%20s:%-4u %s: Application BUG: Your application must call nl_cache_mngt_provide() and\nprovide a valid %s cache to be used for internal lookups.\nSee the  API documentation for more details.\n"
          ,"lib/cache_mngt.c",0x1a0,DAT_0002aa38,param_1);
  *piVar2 = iVar1;
  return 0;
}



/* ===== FUN_0002aa58 @ 0002aa58 size=108 ===== */

size_t * FUN_0002aa58(void *param_1,size_t param_2)

{
  size_t *__ptr;
  void *__dest;
  
  __ptr = calloc(1,8);
  if (__ptr != (size_t *)0x0) {
    __dest = calloc(1,param_2);
    __ptr[1] = (size_t)__dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      __ptr = (size_t *)0x0;
    }
    else {
      *__ptr = param_2;
      if (param_1 != (void *)0x0) {
        memcpy(__dest,param_1,param_2);
      }
    }
  }
  return __ptr;
}



/* ===== FUN_0002aac4 @ 0002aac4 size=40 ===== */

void FUN_0002aac4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00027758();
  uVar2 = FUN_00027760(param_1);
  FUN_0002aa58(uVar1,uVar2);
  return;
}



/* ===== FUN_0002ab70 @ 0002ab70 size=32 ===== */

void FUN_0002ab70(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 4));
  }
  free(param_1);
  return;
}



/* ===== FUN_0002ab90 @ 0002ab90 size=20 ===== */

int FUN_0002ab90(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[1];
  }
  return iVar1;
}



/* ===== FUN_0002aba4 @ 0002aba4 size=8 ===== */

undefined4 FUN_0002aba4(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_0002abe4 @ 0002abe4 size=36 ===== */

char * FUN_0002abe4(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_1 < 0x23) {
    pcVar1 = (&PTR_s_Success_0003a384)[param_1];
  }
  else {
    pcVar1 = "Unspecific failure";
  }
  return pcVar1;
}



/* ===== FUN_0002ac78 @ 0002ac78 size=40 ===== */

int FUN_0002ac78(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_1 - 1U < 0x69) {
    iVar1 = (int)(char)(&DAT_0003a40f)[param_1];
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_0002aca0 @ 0002aca0 size=104 ===== */

void FUN_0002aca0(FILE *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [132];
  
  uVar1 = FUN_0002c2bc(*(undefined2 *)(param_2 + 1),auStack_b8,0x20);
  uVar3 = *param_2;
  uVar2 = FUN_0002c2f0(*(undefined2 *)((int)param_2 + 6),auStack_98,0x80);
  fprintf(param_1,"type=%s length=%u flags=<%s> sequence-nr=%u pid=%u",uVar1,uVar3,uVar2,param_2[2],
          param_2[3]);
  return;
}



/* ===== FUN_0002ad08 @ 0002ad08 size=88 ===== */

undefined4 FUN_0002ad08(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Error: Invalid message: ",1,0x1b,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 2;
}



/* ===== FUN_0002ad60 @ 0002ad60 size=88 ===== */

undefined4 FUN_0002ad60(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: ACK: ",1,0xf,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 2;
}



/* ===== FUN_0002adb8 @ 0002adb8 size=88 ===== */

undefined4 FUN_0002adb8(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: Skipped message: ",1,0x1b,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 1;
}



/* ===== FUN_0002ae10 @ 0002ae10 size=88 ===== */

undefined4 FUN_0002ae10(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Error: Netlink Overrun: ",1,0x1b,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 2;
}



/* ===== FUN_0002ae68 @ 0002ae68 size=88 ===== */

undefined4 FUN_0002ae68(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: End of multipart message block: ",1,0x2a,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 2;
}



/* ===== FUN_0002aec0 @ 0002aec0 size=88 ===== */

undefined4 FUN_0002aec0(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: Unhandled Valid message: ",1,0x23,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 0;
}



/* ===== FUN_0002af18 @ 0002af18 size=88 ===== */

undefined4 FUN_0002af18(undefined4 param_1,FILE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (FILE *)0x0) {
    param_2 = stdout;
  }
  fwrite("-- Warning: unhandled valid message: ",1,0x25,param_2);
  uVar1 = FUN_0002c044(param_1);
  FUN_0002aca0(param_2,uVar1);
  fputc(10,param_2);
  return 0;
}



/* ===== FUN_0002af70 @ 0002af70 size=68 ===== */

undefined4 FUN_0002af70(undefined4 param_1,FILE *param_2)

{
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: Sent Message:\n",1,0x18,param_2);
  FUN_0002c940(param_1,param_2);
  return 0;
}



/* ===== FUN_0002afb4 @ 0002afb4 size=68 ===== */

undefined4 FUN_0002afb4(undefined4 param_1,FILE *param_2)

{
  if (param_2 == (FILE *)0x0) {
    param_2 = stderr;
  }
  fwrite("-- Debug: Received Message:\n",1,0x1c,param_2);
  FUN_0002c940(param_1,param_2);
  return 0;
}



/* ===== FUN_0002aff8 @ 0002aff8 size=100 ===== */

int FUN_0002aff8(undefined4 param_1,int *param_2,FILE *param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  
  if (param_3 == (FILE *)0x0) {
    param_4 = &stderr;
  }
  if (param_3 == (FILE *)0x0) {
    param_3 = (FILE *)*param_4;
  }
  pcVar1 = strerror(-*param_2);
  fprintf(param_3,"-- Error received: %s\n-- Original message: ",pcVar1);
  FUN_0002aca0(param_3,param_2 + 1);
  fputc(10,param_3);
  iVar2 = FUN_0002ac78(*param_2);
  return -iVar2;
}



/* ===== FUN_0002b05c @ 0002b05c size=176 ===== */

undefined4 * FUN_0002b05c(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (3 < param_1) {
    return (undefined4 *)0x0;
  }
  puVar1 = calloc(1,0x74);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = 0;
  puVar1[0x1b] = 1;
  puVar1[0x1c] = 0xb;
  puVar3 = puVar1;
  do {
    if (param_1 == 3) {
      *puVar3 = 0;
      puVar3[0xb] = 0;
    }
    else {
      uVar4 = *(undefined4 *)(&DAT_0003a810 + iVar2 * 0x10 + param_1 * 4);
      puVar3[0xb] = 0;
      *puVar3 = uVar4;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb);
  if (param_1 == 3) {
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
  }
  else {
    puVar1[0x17] = 0;
    puVar1[0x16] = (&DAT_0003a8c0)[param_1];
  }
  return puVar1;
}



/* ===== FUN_0002b10c @ 0002b10c size=52 ===== */

void * FUN_0002b10c(void *param_1)

{
  void *__dest;
  
  __dest = (void *)FUN_0002b05c(0);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,0x74);
    *(undefined4 *)((int)__dest + 0x6c) = 1;
  }
  return __dest;
}



/* ===== FUN_0002b140 @ 0002b140 size=16 ===== */

void FUN_0002b140(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}



/* ===== FUN_0002b150 @ 0002b150 size=116 ===== */

void FUN_0002b150(void *param_1)

{
  int iVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x6c) + -1;
  *(int *)((int)param_1 + 0x6c) = iVar1;
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      return;
    }
    free(param_1);
    return;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/handlers.c",0x103,DAT_0002b1c4);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/handlers.c",0x103);
}



/* ===== FUN_0002b1d0 @ 0002b1d0 size=112 ===== */

undefined4 FUN_0002b1d0(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = 2 < param_3;
  bVar1 = param_3 == 3;
  if (param_3 < 4) {
    bVar2 = 9 < param_2;
    bVar1 = param_2 == 10;
  }
  if (!bVar2 || bVar1) {
    if (param_3 == 3) {
      *(undefined4 *)(param_1 + param_2 * 4) = param_4;
      *(undefined4 *)(param_1 + param_2 * 4 + 0x2c) = param_5;
      return 0;
    }
    *(undefined4 *)(param_1 + param_2 * 4) =
         *(undefined4 *)(&DAT_0003a810 + (param_2 * 4 + param_3) * 4);
    *(undefined4 *)(param_1 + param_2 * 4 + 0x2c) = param_5;
    return 0;
  }
  return 0xfffffff8;
}



/* ===== FUN_0002b240 @ 0002b240 size=80 ===== */

undefined4 FUN_0002b240(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  do {
    if (3 < param_2) {
      return 0xfffffff8;
    }
    if (param_2 == 3) {
      *param_1 = param_3;
      param_1[0xb] = param_4;
    }
    else {
      uVar2 = *(undefined4 *)(&DAT_0003a810 + iVar1 * 0x10 + param_2 * 4);
      param_1[0xb] = param_4;
      *param_1 = uVar2;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0xb);
  return 0;
}



/* ===== FUN_0002b290 @ 0002b290 size=64 ===== */

undefined4 FUN_0002b290(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    if (param_2 == 3) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x58) = param_3;
      *(undefined4 *)(param_1 + 0x5c) = param_4;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = param_4;
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x58) = (&DAT_0003a8c0)[param_2];
    }
  }
  else {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}



/* ===== FUN_0002b304 @ 0002b304 size=224 ===== */

undefined4 * FUN_0002b304(uint param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
  __ptr = calloc(1,0x38);
  if (__ptr != (undefined4 *)0x0) {
    __ptr[0xd] = 1;
    puVar1 = calloc(1,param_1);
    __ptr[0xb] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      __ptr[0xc] = param_1;
      iVar3 = DAT_0004e88c;
      *__ptr = 0xffffffff;
      *puVar1 = 0x10;
      if (iVar3 < 2) {
        return __ptr;
      }
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: Allocated new message, maxlen=%zu\n","lib/msg.c",
              0x11b,"__nlmsg_alloc",__ptr,param_1);
      *piVar2 = iVar3;
      return __ptr;
    }
  }
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== FUN_0002b3e4 @ 0002b3e4 size=1616 ===== */

void FUN_0002b3e4(FILE *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte bVar13;
  bool bVar14;
  undefined4 *local_70;
  char *local_50;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  
  iVar1 = (8 - (int)param_4) * 2;
  local_50 = " NESTED";
  local_44 = param_3;
  iVar2 = FUN_0002776c(param_2,param_3);
  do {
    if (iVar2 == 0) {
      if (local_44 != 0) {
        if (0 < (int)param_4) {
          puVar9 = (undefined4 *)0x0;
          do {
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            fwrite(&DAT_0003ab70,1,2,param_1);
          } while (param_4 != puVar9);
        }
        fprintf(param_1,"  [LEFTOVER] %d octets\n",local_44);
      }
      return;
    }
    iVar2 = FUN_00027760(param_2);
    if (0 < (int)param_4) {
      puVar9 = (undefined4 *)0x0;
      do {
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        fwrite(&DAT_0003ab70,1,2,param_1);
      } while (param_4 != puVar9);
    }
    if (*(short *)(param_2 + 2) == 0) {
      fprintf(param_1,"  [ATTR PADDING] %d octets\n",iVar2);
    }
    else {
      uVar4 = FUN_0002774c(param_2);
      iVar3 = FUN_000283b4(param_2);
      pcVar8 = local_50;
      if (iVar3 == 0) {
        pcVar8 = "";
      }
      fprintf(param_1,"  [ATTR %02d%s] %d octets\n",uVar4,pcVar8,iVar2);
    }
    iVar3 = FUN_000283b4(param_2);
    if (iVar3 == 0) {
      iVar3 = FUN_00027760(param_2);
      iVar5 = FUN_00027758(param_2);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_40 = 0;
      puVar9 = &local_40;
      if (0 < (int)param_4) {
        puVar9 = (undefined4 *)0x0;
      }
      uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
      uStack_30 = 0;
      uStack_2f = uStack_3c;
      if (0 < (int)param_4) {
        do {
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          fwrite(&DAT_0003ab70,1,2,param_1);
        } while (param_4 != puVar9);
      }
      fwrite(&DAT_0003abac,1,4,param_1);
      if (0 < iVar3) {
        pbVar12 = (byte *)(iVar5 + iVar3 + -1);
        pbVar10 = (byte *)(iVar5 + -1);
        iVar7 = 0;
        do {
          while( true ) {
            pbVar10 = pbVar10 + 1;
            bVar13 = *pbVar10;
            fprintf(param_1,"%02x ",(uint)bVar13);
            iVar6 = iVar7 + 1;
            if ((*(ushort *)(__ctype_b + (uint)bVar13 * 2) & 0x40) == 0) {
              bVar13 = 0x2e;
            }
            *(byte *)((int)&local_40 + iVar7) = bVar13;
            if (iVar6 < iVar1) break;
            fprintf(param_1,"%s\n",&local_40);
            if ((int)pbVar10 - iVar5 < iVar3 + -1) {
              if (0 < (int)param_4) {
                puVar9 = (undefined4 *)0x0;
                do {
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                  fwrite(&DAT_0003ab70,1,2,param_1);
                } while (param_4 != puVar9);
              }
              fwrite(&DAT_0003abac,1,4,param_1);
            }
            uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            iVar6 = 0;
            local_40 = 0;
            iVar7 = iVar6;
            uStack_2f = uStack_3c;
            if (pbVar12 == pbVar10) goto LAB_0002b718;
          }
          iVar7 = iVar6;
        } while (pbVar12 != pbVar10);
LAB_0002b718:
        if (iVar6 != 0) {
          if (0 < iVar1 - iVar6) {
            iVar3 = 0;
            do {
              iVar3 = iVar3 + 1;
              fwrite(&DAT_0003abbc,1,3,param_1);
            } while (iVar3 != iVar1 - iVar6);
          }
          fprintf(param_1,"%s\n",&local_40);
        }
      }
    }
    else {
      uVar4 = FUN_00027758(param_2);
      FUN_0002b3e4(param_1,uVar4,iVar2,(int)param_4 + 1);
    }
    iVar3 = FUN_00027738(iVar2);
    if (0 < iVar3) {
      if ((int)param_4 < 1) {
        fprintf(param_1,"  [PADDING] %d octets\n",iVar3);
        iVar5 = FUN_00027758(param_2);
        local_40 = 0;
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
        uStack_30 = 0;
        uStack_2f = uStack_3c;
      }
      else {
        puVar9 = (undefined4 *)0x0;
        do {
          puVar11 = puVar9;
          fwrite(&DAT_0003ab70,1,2,param_1);
          puVar9 = (undefined4 *)((int)puVar11 + 1);
        } while (param_4 != puVar9);
        fprintf(param_1,"  [PADDING] %d octets\n",iVar3);
        iVar5 = FUN_00027758(param_2);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar9 = (undefined4 *)0x0;
        local_40 = 0;
        uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
        uStack_30 = 0;
        uStack_2f = uStack_3c;
        do {
          fwrite(&DAT_0003ab70,1,2,param_1);
          bVar14 = puVar9 != puVar11;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        } while (bVar14);
      }
      local_70 = &local_40;
      fwrite(&DAT_0003abac,1,4,param_1);
      pbVar12 = (byte *)(iVar5 + iVar2 + -1);
      iVar5 = 0;
      iVar2 = 0;
      do {
        while( true ) {
          pbVar12 = pbVar12 + 1;
          bVar13 = *pbVar12;
          fprintf(param_1,"%02x ",(uint)bVar13);
          iVar7 = iVar2 + 1;
          if ((*(ushort *)(__ctype_b + (uint)bVar13 * 2) & 0x40) == 0) {
            bVar13 = 0x2e;
          }
          *(byte *)((int)&local_40 + iVar2) = bVar13;
          if (iVar7 < iVar1) break;
          fprintf(param_1,"%s\n",local_70);
          if (iVar5 < iVar3 + -1) {
            if (0 < (int)param_4) {
              puVar9 = (undefined4 *)0x0;
              do {
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                fwrite(&DAT_0003ab70,1,2,param_1);
              } while (param_4 != puVar9);
            }
            fwrite(&DAT_0003abac,1,4,param_1);
          }
          uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          iVar5 = iVar5 + 1;
          iVar7 = 0;
          local_40 = 0;
          iVar2 = iVar7;
          uStack_2f = uStack_3c;
          if (iVar3 == iVar5) goto LAB_0002b948;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar7;
      } while (iVar3 != iVar5);
LAB_0002b948:
      if (iVar7 != 0) {
        if (0 < iVar1 - iVar7) {
          iVar2 = 0;
          do {
            iVar2 = iVar2 + 1;
            fwrite(&DAT_0003abbc,1,3,param_1);
          } while (iVar2 != iVar1 - iVar7);
        }
        fprintf(param_1,"%s\n",local_70);
      }
    }
    param_2 = FUN_00027798(param_2,&local_44);
    iVar2 = FUN_0002776c(param_2,local_44);
  } while( true );
}



/* ===== FUN_0002ba34 @ 0002ba34 size=8 ===== */

int FUN_0002ba34(int param_1)

{
  return param_1 + 0x10;
}



/* ===== FUN_0002ba5c @ 0002ba5c size=8 ===== */

int FUN_0002ba5c(int param_1)

{
  return param_1 + 0x10;
}



/* ===== FUN_0002ba64 @ 0002ba64 size=20 ===== */

int FUN_0002ba64(int *param_1)

{
  return (int)param_1 + (*param_1 + 3U & 0xfffffffc);
}



/* ===== FUN_0002ba78 @ 0002ba78 size=12 ===== */

int FUN_0002ba78(int *param_1)

{
  return *param_1 + -0x10;
}



/* ===== FUN_0002bab4 @ 0002bab4 size=24 ===== */

bool FUN_0002bab4(uint *param_1,int param_2)

{
  return param_2 + 0x10U <= *param_1;
}



/* ===== FUN_0002bacc @ 0002bacc size=44 ===== */

bool FUN_0002bacc(uint *param_1,uint param_2)

{
  if ((0xf < (int)param_2) && (0xf < *param_1)) {
    return *param_1 <= param_2;
  }
  return false;
}



/* ===== FUN_0002baf8 @ 0002baf8 size=32 ===== */

int FUN_0002baf8(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3U & 0xfffffffc;
  *param_2 = *param_2 - uVar1;
  return (int)param_1 + uVar1;
}



/* ===== FUN_0002bb18 @ 0002bb18 size=76 ===== */

undefined4 FUN_0002bb18(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 + 0x10U <= *param_1) {
    uVar2 = param_2 + 3U & 0xfffffffc;
    uVar3 = (*param_1 - 0x10) - uVar2;
    uVar1 = FUN_000277b8(param_3,param_4,(int)param_1 + uVar2 + 0x10,uVar3 & ~((int)uVar3 >> 0x1f));
    return uVar1;
  }
  return 0xffffffeb;
}



/* ===== FUN_0002bbd0 @ 0002bbd0 size=16 ===== */

void FUN_0002bbd0(void)

{
  FUN_0002b304(DAT_0004e7d8);
  return;
}



/* ===== FUN_0002bbe4 @ 0002bbe4 size=76 ===== */

void FUN_0002bbe4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0002b304(DAT_0004e7d8);
  if (iVar2 == 0 || param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x2c);
  uVar1 = *(undefined2 *)(param_1 + 6);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(iVar2 + 6) = uVar1;
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  return;
}



/* ===== FUN_0002bc30 @ 0002bc30 size=152 ===== */

int FUN_0002bc30(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_20 = 0;
  _uStack_1c = CONCAT22(param_2,param_1);
  iVar1 = FUN_0002bbe4(&local_20);
  if ((iVar1 != 0) && (1 < DAT_0004e88c)) {
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: Allocated new simple message\n","lib/msg.c",0x165,
            DAT_0002bcc8,iVar1);
    *piVar2 = iVar3;
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002bce4 @ 0002bce4 size=56 ===== */

int FUN_0002bce4(size_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002b304(*param_1 + 3 & 0xfffffffc);
  if (iVar1 != 0) {
    memcpy(*(void **)(iVar1 + 0x2c),param_1,*param_1);
  }
  return iVar1;
}



/* ===== FUN_0002bd1c @ 0002bd1c size=272 ===== */

int FUN_0002bd1c(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  puVar5 = *(uint **)(param_1 + 0x2c);
  uVar2 = *puVar5;
  if (param_2 <= uVar6) {
    if (param_3 == 0) {
      if (uVar2 + param_2 <= uVar6) {
        *puVar5 = uVar2 + param_2;
        uVar3 = param_2;
LAB_0002bd64:
        if (1 < DAT_0004e88c) {
          piVar1 = __errno_location();
          iVar4 = *piVar1;
          fprintf(stderr,
                  "DBG<2>%20s:%-4u %s: msg %p: Reserved %zu (%zu) bytes, pad=%d, nlmsg_len=%d\n",
                  "lib/msg.c",0x1ad,DAT_0002be2c,param_1,uVar3,param_2,param_3,
                  **(undefined4 **)(param_1 + 0x2c));
          *piVar1 = iVar4;
        }
        return (int)puVar5 + uVar2;
      }
    }
    else {
      uVar3 = -param_3 & (param_3 + param_2) - 1;
      if (uVar2 + uVar3 <= uVar6) {
        *puVar5 = uVar2 + uVar3;
        if (param_2 < uVar3) {
          memset((void *)((int)puVar5 + param_2 + uVar2),0,uVar3 - param_2);
        }
        goto LAB_0002bd64;
      }
    }
  }
  return 0;
}



/* ===== FUN_0002be30 @ 0002be30 size=172 ===== */

undefined4 FUN_0002be30(undefined4 param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  void *__dest;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  __dest = (void *)FUN_0002bd1c(param_1,param_3,param_4);
  if (__dest == (void *)0x0) {
    uVar1 = 0xfffffffb;
  }
  else {
    memcpy(__dest,param_2,param_3);
    if (DAT_0004e88c < 2) {
      uVar1 = 0;
    }
    else {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: Appended %zu bytes with padding %d\n","lib/msg.c",
              0x1c7,DAT_0002bedc,param_1,param_3,param_4);
      uVar1 = 0;
      *piVar2 = iVar3;
    }
  }
  return uVar1;
}



/* ===== FUN_0002bf28 @ 0002bf28 size=280 ===== */

uint * FUN_0002bf28(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                   undefined4 param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = *(uint **)(param_1 + 0x2c);
  if (0xf < *puVar2) {
    *(short *)(puVar2 + 1) = (short)param_4;
    iVar3 = DAT_0004e88c;
    *(short *)((int)puVar2 + 6) = (short)param_6;
    puVar2[3] = param_2;
    puVar2[2] = param_3;
    if (1 < iVar3) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      fprintf(stderr,
              "DBG<2>%20s:%-4u %s: msg %p: Added netlink header type=%d, flags=%d, pid=%d, seq=%d\n"
              ,"lib/msg.c",0x20a,DAT_0002c040,param_1,param_4,param_6,param_2,param_3);
      *piVar1 = iVar3;
    }
    if ((0 < param_5) && (iVar3 = FUN_0002bd1c(param_1,param_5,4), iVar3 == 0)) {
      puVar2 = (uint *)0x0;
    }
    return puVar2;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/msg.c",0x201,DAT_0002c040);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/msg.c",0x201);
}



/* ===== FUN_0002c044 @ 0002c044 size=8 ===== */

undefined4 FUN_0002c044(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* ===== FUN_0002c0d0 @ 0002c0d0 size=320 ===== */

void FUN_0002c0d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0004e88c;
  if (param_1 != (void *)0x0) {
    iVar2 = *(int *)((int)param_1 + 0x34) + -1;
    *(int *)((int)param_1 + 0x34) = iVar2;
    if (3 < iVar3) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      fprintf(stderr,"DBG<4>%20s:%-4u %s: Returned message reference %p, %d remaining\n","lib/msg.c"
              ,0x239,DAT_0002c210,param_1,iVar2);
      *piVar1 = iVar3;
      iVar2 = *(int *)((int)param_1 + 0x34);
    }
    if (iVar2 < 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/msg.c",0x23c,DAT_0002c210);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/msg.c",0x23c);
    }
    if (iVar2 == 0) {
      free(*(void **)((int)param_1 + 0x2c));
      if (1 < DAT_0004e88c) {
        piVar1 = __errno_location();
        iVar3 = *piVar1;
        fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: Freed\n","lib/msg.c",0x240,DAT_0002c210,param_1)
        ;
        *piVar1 = iVar3;
      }
      free(param_1);
      return;
    }
  }
  return;
}



/* ===== FUN_0002c214 @ 0002c214 size=8 ===== */

void FUN_0002c214(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



/* ===== FUN_0002c22c @ 0002c22c size=32 ===== */

void FUN_0002c22c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



/* ===== FUN_0002c24c @ 0002c24c size=8 ===== */

int FUN_0002c24c(int param_1)

{
  return param_1 + 8;
}



/* ===== FUN_0002c274 @ 0002c274 size=8 ===== */

int FUN_0002c274(int param_1)

{
  return param_1 + 0x14;
}



/* ===== FUN_0002c27c @ 0002c27c size=44 ===== */

void FUN_0002c27c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return;
}



/* ===== FUN_0002c2a8 @ 0002c2a8 size=20 ===== */

int FUN_0002c2a8(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



/* ===== FUN_0002c2bc @ 0002c2bc size=32 ===== */

void FUN_0002c2bc(void)

{
  FUN_000311f0();
  return;
}



/* ===== FUN_0002c2f0 @ 0002c2f0 size=1152 ===== */

char * FUN_0002c2f0(uint param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char acStack_38 [32];
  
  memset(param_2,0,param_3);
  if ((param_1 & 1) != 0) {
    sVar1 = strlen(param_2);
    param_1 = param_1 & 0xfffffffe;
    strncat(param_2,"REQUEST",(param_3 - 1) - sVar1);
    uVar3 = param_1;
    if (param_1 != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      goto LAB_0002c318;
    }
    goto LAB_0002c508;
  }
LAB_0002c318:
  if ((param_1 & 2) != 0) {
    sVar1 = strlen(param_2);
    uVar4 = param_1 & 0xfffffffd;
    strncat(param_2,"MULTI",(param_3 - 1) - sVar1);
    uVar2 = uVar4;
    if (uVar4 != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      if ((param_1 & 4) != 0) goto LAB_0002c32c;
      uVar2 = param_1 & 8;
      goto LAB_0002c448;
    }
    goto LAB_0002c3cc;
  }
  uVar2 = param_1;
  if ((param_1 & 4) == 0) {
    uVar2 = param_1 & 8;
    uVar4 = param_1;
LAB_0002c448:
    param_1 = uVar4;
    uVar3 = uVar4;
    if (uVar2 != 0) {
      sVar1 = strlen(param_2);
      param_1 = uVar4 & 0xfffffff7;
      strncat(param_2,"ECHO",(param_3 - 1) - sVar1);
      uVar5 = param_1;
      if (param_1 != 0) {
        sVar1 = strlen(param_2);
        strncat(param_2,",",(param_3 - 1) - sVar1);
        goto LAB_0002c508;
      }
      goto LAB_0002c480;
    }
LAB_0002c508:
    uVar4 = param_1;
    uVar2 = param_1;
    if ((uVar3 & 0x100) == 0) {
LAB_0002c3cc:
      param_1 = uVar4;
      if ((uVar2 & 0x200) != 0) {
        sVar1 = strlen(param_2);
        strncat(param_2,"MATCH",(param_3 - 1) - sVar1);
        if ((uVar4 & 0xfffffdff) == 0) {
          return param_2;
        }
        sVar1 = strlen(param_2);
        strncat(param_2,",",(param_3 - 1) - sVar1);
        param_1 = uVar4 & 0xfffffdff;
      }
      goto LAB_0002c35c;
    }
    sVar1 = strlen(param_2);
    uVar5 = param_1 & 0xfffffeff;
    strncat(param_2,"ROOT",(param_3 - 1) - sVar1);
    uVar3 = uVar5;
    if (uVar5 != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      uVar4 = uVar5;
      goto LAB_0002c3cc;
    }
  }
  else {
LAB_0002c32c:
    sVar1 = strlen(param_2);
    uVar4 = uVar2 & 0xfffffffb;
    strncat(param_2,"ACK",(param_3 - 1) - sVar1);
    param_1 = uVar4;
    if (uVar4 != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      uVar2 = uVar2 & 8;
      goto LAB_0002c448;
    }
LAB_0002c35c:
    uVar5 = param_1;
    if ((uVar4 & 0x400) != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,"ATOMIC",(param_3 - 1) - sVar1);
      if ((param_1 & 0xfffffbff) == 0) {
        return param_2;
      }
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      uVar5 = param_1 & 0xfffffbff;
    }
LAB_0002c480:
    uVar3 = uVar5;
    if ((param_1 & 0x100) != 0) {
      sVar1 = strlen(param_2);
      strncat(param_2,"REPLACE",(param_3 - 1) - sVar1);
      if ((uVar5 & 0xfffffeff) == 0) {
        return param_2;
      }
      sVar1 = strlen(param_2);
      strncat(param_2,",",(param_3 - 1) - sVar1);
      uVar3 = uVar5 & 0xfffffeff;
    }
  }
  uVar4 = uVar3;
  if ((uVar5 & 0x200) != 0) {
    sVar1 = strlen(param_2);
    strncat(param_2,"EXCL",(param_3 - 1) - sVar1);
    if ((uVar3 & 0xfffffdff) == 0) {
      return param_2;
    }
    sVar1 = strlen(param_2);
    strncat(param_2,",",(param_3 - 1) - sVar1);
    uVar4 = uVar3 & 0xfffffdff;
  }
  if ((uVar3 & 0x400) == 0) {
    if ((uVar4 & 0x800) == 0) {
      if (uVar4 == 0) {
        return param_2;
      }
      goto LAB_0002c604;
    }
  }
  else {
    sVar1 = strlen(param_2);
    uVar3 = uVar4 & 0xfffffbff;
    strncat(param_2,"CREATE",(param_3 - 1) - sVar1);
    if (uVar3 == 0) {
      return param_2;
    }
    sVar1 = strlen(param_2);
    strncat(param_2,",",(param_3 - 1) - sVar1);
    uVar2 = uVar4 & 0x800;
    uVar4 = uVar3;
    if (uVar2 == 0) goto LAB_0002c604;
  }
  sVar1 = strlen(param_2);
  strncat(param_2,"APPEND",(param_3 - 1) - sVar1);
  if ((uVar4 & 0xfffff7ff) == 0) {
    return param_2;
  }
  sVar1 = strlen(param_2);
  strncat(param_2,",",(param_3 - 1) - sVar1);
  uVar4 = uVar4 & 0xfffff7ff;
LAB_0002c604:
  snprintf(acStack_38,0x20,"0x%x",uVar4);
  sVar1 = strlen(param_2);
  strncat(param_2,acStack_38,(param_3 - 1) - sVar1);
  return param_2;
}



/* ===== FUN_0002c770 @ 0002c770 size=340 ===== */

void FUN_0002c770(FILE *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_98 [132];
  
  fprintf(param_1,"    .nlmsg_len = %d\n",*param_3);
  puVar2 = (undefined4 *)FUN_0002a410(*param_2,*(undefined2 *)(param_3 + 1));
  if (puVar2 == (undefined4 *)0x0) {
    FUN_000311f0(*(undefined2 *)(param_3 + 1),acStack_98,0x80,DAT_0002c8c4,4);
  }
  else {
    iVar3 = FUN_0002a4a4(puVar2,*(undefined2 *)(param_3 + 1));
    if (iVar3 == 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/msg.c",0x32a,DAT_0002c8c8);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/msg.c",0x32a);
    }
    snprintf(acStack_98,0x80,"%s::%s",*puVar2,*(undefined4 *)(iVar3 + 8));
    FUN_0002a308(puVar2);
  }
  fprintf(param_1,"    .type = %d <%s>\n",(uint)*(ushort *)(param_3 + 1),acStack_98);
  uVar1 = *(ushort *)((int)param_3 + 6);
  uVar4 = FUN_0002c2f0((uint)uVar1,acStack_98,0x80);
  fprintf(param_1,"    .flags = %d <%s>\n",(uint)uVar1,uVar4);
  fprintf(param_1,"    .seq = %d\n",param_3[2]);
  fprintf(param_1,"    .port = %d\n",param_3[3]);
  return;
}



/* ===== FUN_0002c8cc @ 0002c8cc size=116 ===== */

undefined4 FUN_0002c8cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puStack_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puStack_20 = &LAB_0002b2e8;
  local_1c = (undefined4 *)0x0;
  local_18 = param_2;
  local_14 = param_3;
  iVar1 = FUN_0002a410(*param_1,*(undefined2 *)(param_1[0xb] + 4));
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    local_1c = &local_18;
    uVar2 = FUN_0002915c(iVar1,0,param_1[0xb],&puStack_20);
    FUN_0002a308(iVar1);
  }
  return uVar2;
}



/* ===== FUN_0002c940 @ 0002c940 size=1632 ===== */

void FUN_0002c940(int *param_1,FILE *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  byte *local_64;
  uint local_60;
  byte local_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  
  piVar11 = (int *)param_1[0xb];
  fwrite("--------------------------   BEGIN NETLINK MESSAGE ---------------------------\n",1,0x4f,
         param_2);
  fprintf(param_2,"  [NETLINK HEADER] %zu octets\n",0x10);
  FUN_0002c770(param_2,param_1,param_1[0xb]);
  if ((short)piVar11[1] == 2) {
    piVar11 = (int *)param_1[0xb];
    fprintf(param_2,"  [ERRORMSG] %zu octets\n",0x14);
    if (0x13 < *piVar11 - 0x10U) {
      iVar3 = piVar11[4];
      pcVar2 = strerror(-iVar3);
      fprintf(param_2,"    .error = %d \"%s\"\n",iVar3,pcVar2);
      fprintf(param_2,"  [ORIGINAL MESSAGE] %zu octets\n",0x10);
      iVar3 = FUN_0002bbe4(piVar11 + 5);
      FUN_0002c770(param_2,iVar3,*(undefined4 *)(iVar3 + 0x2c));
      FUN_0002c0d0(iVar3);
    }
    goto LAB_0002c9ac;
  }
  iVar3 = *piVar11;
  uVar6 = iVar3 - 0x10;
  if ((int)uVar6 < 1) goto LAB_0002c9ac;
  piVar15 = piVar11 + 4;
  iVar1 = FUN_0002a410(*param_1);
  if (iVar1 == 0) {
    local_60 = 0;
    if ((*param_1 == 0x10) && (3 < uVar6)) {
      fprintf(param_2,"  [GENERIC NETLINK HEADER] %zu octets\n",4);
      piVar15 = piVar11 + 5;
      fprintf(param_2,"    .cmd = %u\n",(uint)*(byte *)(piVar11 + 4));
      fprintf(param_2,"    .version = %u\n",(uint)*(byte *)((int)piVar11 + 0x11));
      fprintf(param_2,"    .unused = %#x\n",(uint)*(ushort *)((int)piVar11 + 0x12));
      uVar6 = iVar3 - 0x14;
      if (uVar6 == 0) goto LAB_0002c9ac;
      goto LAB_0002cedc;
    }
    fprintf(param_2,"  [PAYLOAD] %d octets\n",uVar6);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
    uStack_30 = 0;
    uStack_2f = uStack_3c;
    fwrite(&DAT_0003abac,1,4,param_2);
LAB_0002cb48:
    local_64 = local_40;
    iVar5 = 0;
    pbVar14 = (byte *)((int)piVar15 + -1);
    iVar3 = 0;
    iVar12 = 0;
    do {
      pbVar14 = pbVar14 + 1;
      bVar10 = *pbVar14;
      iVar5 = iVar5 + 1;
      fprintf(param_2,"%02x ",(uint)bVar10);
      if ((*(ushort *)(__ctype_b + (uint)bVar10 * 2) & 0x40) == 0) {
        bVar10 = 0x2e;
      }
      local_40[iVar3] = bVar10;
      iVar3 = iVar3 + 1;
      if (0xf < iVar5) {
        iVar5 = 0;
        fprintf(param_2,"%s\n",local_64);
        if (iVar12 < (int)(uVar6 - 1)) {
          fwrite(&DAT_0003abac,1,4,param_2);
        }
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_40[0] = 0;
        local_40[1] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        iVar3 = iVar5;
        uStack_2f = uStack_3c;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar6);
    if (iVar5 != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        fwrite(&DAT_0003abbc,1,3,param_2);
      } while (iVar3 != 0x10 - iVar5);
      fprintf(param_2,"%s\n",local_64);
    }
LAB_0002cc7c:
    if (local_60 == 0) {
      if (iVar1 == 0) goto LAB_0002c9ac;
    }
    else {
LAB_0002ca24:
      uVar6 = *(int *)(iVar1 + 4) + 3U & 0xfffffffc;
      uVar4 = (*piVar11 + -0x10) - uVar6;
      FUN_0002b3e4(param_2,(int)piVar11 + uVar6 + 0x10,uVar4 & ~((int)uVar4 >> 0x1f),0);
    }
  }
  else {
    uVar4 = (*piVar11 + -0x10) - (*(int *)(iVar1 + 4) + 3U & 0xfffffffc);
    local_60 = uVar4 & ~((int)uVar4 >> 0x1f);
    uVar7 = uVar6 - local_60;
    uVar6 = uVar7;
    if ((*param_1 == 0x10) && (3 < uVar7)) {
      fprintf(param_2,"  [GENERIC NETLINK HEADER] %zu octets\n",4);
      uVar6 = uVar7 - 4;
      fprintf(param_2,"    .cmd = %u\n",(uint)*(byte *)(piVar11 + 4));
      fprintf(param_2,"    .version = %u\n",(uint)*(byte *)((int)piVar11 + 0x11));
      piVar15 = piVar11 + 5;
      fprintf(param_2,"    .unused = %#x\n",(uint)*(ushort *)((int)piVar11 + 0x12));
      iVar3 = *(int *)(iVar1 + 4);
      iVar5 = iVar3 + -4;
      if (iVar5 <= (int)uVar6 && 0 < iVar5) {
        fprintf(param_2,"  [HEADER] %d octets\n",iVar5);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_40[0] = 0;
        local_40[1] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
        uStack_30 = 0;
        uStack_2f = uStack_3c;
        fwrite(&DAT_0003abac,1,4,param_2);
        pbVar14 = (byte *)((int)piVar11 + 0x13);
        iVar12 = 0;
        iVar13 = 0;
        iVar8 = 0;
        do {
          pbVar14 = pbVar14 + 1;
          bVar10 = *pbVar14;
          iVar13 = iVar13 + 1;
          fprintf(param_2,"%02x ",(uint)bVar10);
          iVar9 = iVar8 + 1;
          if ((*(ushort *)(__ctype_b + (uint)bVar10 * 2) & 0x40) == 0) {
            bVar10 = 0x2e;
          }
          local_40[iVar8] = bVar10;
          if (0xf < iVar13) {
            iVar9 = 0;
            fprintf(param_2,"%s\n",local_40);
            if (iVar12 < iVar3 + -5) {
              fwrite(&DAT_0003abac,1,4,param_2);
            }
            uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_40[0] = 0;
            local_40[1] = 0;
            local_40[2] = 0;
            local_40[3] = 0;
            iVar13 = iVar9;
            uStack_2f = uStack_3c;
          }
          iVar12 = iVar12 + 1;
          iVar8 = iVar9;
        } while (iVar12 < iVar5);
        if (iVar13 != 0) {
          iVar12 = 0;
          do {
            iVar12 = iVar12 + 1;
            fwrite(&DAT_0003abbc,1,3,param_2);
          } while (iVar12 != 0x10 - iVar13);
          fprintf(param_2,"%s\n",local_40);
        }
        uVar6 = uVar7 - iVar3;
        piVar15 = (int *)((int)piVar15 + iVar5);
      }
    }
    if (uVar6 != 0) {
LAB_0002cedc:
      fprintf(param_2,"  [PAYLOAD] %d octets\n",uVar6);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
      uStack_30 = 0;
      uStack_2f = uStack_3c;
      fwrite(&DAT_0003abac,1,4,param_2);
      if (0 < (int)uVar6) goto LAB_0002cb48;
      goto LAB_0002cc7c;
    }
    if (0 < (int)uVar4) goto LAB_0002ca24;
  }
  FUN_0002a308(iVar1);
LAB_0002c9ac:
  fwrite("---------------------------  END NETLINK MESSAGE   ---------------------------\n",1,0x4f,
         param_2);
  return;
}



/* ===== FUN_0002cfa8 @ 0002cfa8 size=56 ===== */

void FUN_0002cfa8(int param_1,undefined4 *param_2)

{
  code *local_10;
  undefined4 *local_c;
  
  local_10 = FUN_0002d000;
  local_c = param_2;
  (*(code *)*param_2)(0,param_1 + 8,*(undefined4 *)(param_1 + 0x2c),&local_10);
  return;
}



/* ===== FUN_0002d000 @ 0002d000 size=28 ===== */

undefined4 FUN_0002d000(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_0002e9b8();
  *(undefined4 *)(iVar1 + 4) = param_1;
  return 0;
}



/* ===== FUN_0002d448 @ 0002d448 size=44 ===== */

void FUN_0002d448(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x18)) {
    close(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* ===== FUN_0002d554 @ 0002d554 size=368 ===== */

ssize_t FUN_0002d554(int param_1,undefined4 param_2,msghdr *param_3)

{
  FILE *__stream;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x18) < 0) {
    sVar2 = -3;
  }
  else {
    FUN_0002c22c(param_2,param_1);
    iVar5 = *(int *)(param_1 + 0x2c);
    if (*(code **)(iVar5 + 0x18) != (code *)0x0) {
      *(undefined4 *)(iVar5 + 0x70) = 6;
      iVar1 = (**(code **)(iVar5 + 0x18))(param_2,*(undefined4 *)(iVar5 + 0x44));
      *(undefined4 *)(iVar5 + 0x70) = 0xb;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    sVar2 = sendmsg(*(int *)(param_1 + 0x18),param_3,0);
    iVar5 = DAT_0004e88c;
    if (sVar2 < 0) {
      piVar3 = __errno_location();
      __stream = stderr;
      iVar1 = *piVar3;
      if (3 < iVar5) {
        pcVar4 = strerror(iVar1);
        fprintf(__stream,"DBG<4>%20s:%-4u %s: nl_sendmsg(%p): sendmsg() failed with %d (%s)\n",
                "lib/nl.c",0x159,DAT_0002d6c4,param_1,iVar1,pcVar4);
        *piVar3 = iVar1;
      }
      iVar5 = FUN_0002ac78(iVar1);
      return -iVar5;
    }
    if (3 < DAT_0004e88c) {
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      fprintf(stderr,"DBG<4>%20s:%-4u %s: sent %d bytes\n","lib/nl.c",0x15d,DAT_0002d6c4,sVar2);
      *piVar3 = iVar5;
      return sVar2;
    }
  }
  return sVar2;
}



/* ===== FUN_0002d6c8 @ 0002d6c8 size=164 ===== */

void FUN_0002d6c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_1c = (undefined4 *)0x0;
  local_2c = (short *)(param_1 + 0xc);
  uStack_18 = 0;
  uStack_14 = 0;
  local_28 = 0xc;
  local_24 = param_3;
  local_20 = param_4;
  psVar1 = (short *)FUN_0002c274(param_2);
  if (*psVar1 == 0x10) {
    local_2c = psVar1;
  }
  puVar2 = (undefined4 *)FUN_0002c2a8(param_2);
  if (puVar2 != (undefined4 *)0x0) {
    local_1c = &local_44;
    uStack_18 = 0x18;
    local_44 = 0x18;
    local_40 = 1;
    uStack_3c = 2;
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
  }
  FUN_0002d554(param_1,param_2,&local_2c);
  return;
}



/* ===== FUN_0002d76c @ 0002d76c size=100 ===== */

void FUN_0002d76c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x2c) + 0x68);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    return;
  }
  local_18 = FUN_0002c044(param_2);
  puVar1 = (undefined4 *)FUN_0002c044(param_2);
  local_14 = *puVar1;
  FUN_0002d6c8(param_1,param_2,&local_18,1);
  return;
}



/* ===== FUN_0002d7d0 @ 0002d7d0 size=124 ===== */

void FUN_0002d7d0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = FUN_0002c044(param_2);
  if (*(int *)(iVar1 + 0xc) == 0) {
    uVar2 = FUN_0002f420(param_1);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    *(int *)(iVar1 + 8) = iVar6;
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (*param_2 == -1) {
    *param_2 = *(int *)(param_1 + 0x1c);
  }
  bVar7 = (uVar4 & 0x20) == 0;
  uVar5 = *(ushort *)(iVar1 + 6);
  uVar3 = uVar5 | 1;
  if (bVar7) {
    uVar5 = uVar5 | 5;
  }
  *(ushort *)(iVar1 + 6) = uVar3;
  if (bVar7) {
    *(ushort *)(iVar1 + 6) = uVar5;
  }
  return;
}



/* ===== FUN_0002d84c @ 0002d84c size=32 ===== */

void FUN_0002d84c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002d7d0();
  FUN_0002d76c(param_1,param_2);
  return;
}



/* ===== FUN_0002d86c @ 0002d86c size=132 ===== */

int FUN_0002d86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002bc30(param_2,param_3);
  if (iVar1 == 0) {
    iVar2 = -5;
  }
  else {
    if ((param_4 == 0 || param_5 == 0) ||
       (iVar2 = FUN_0002be30(iVar1,param_4,param_5,4), -1 < iVar2)) {
      FUN_0002d7d0(param_1,iVar1);
      iVar2 = FUN_0002d76c(param_1,iVar1);
    }
    FUN_0002c0d0(iVar1);
  }
  return iVar2;
}



/* ===== FUN_0002d8f0 @ 0002d8f0 size=1048 ===== */

uint FUN_0002d8f0(int param_1,void *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  FILE *__stream;
  int iVar2;
  void *pvVar3;
  cmsghdr *pcVar4;
  char *pcVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  size_t *psVar9;
  size_t sVar10;
  uint uVar11;
  iovec local_4c;
  msghdr local_44;
  
  local_44.msg_iov = &local_4c;
  local_44.msg_control = (cmsghdr *)0x0;
  local_44.msg_namelen = 0xc;
  local_44.msg_controllen = 0;
  local_44.msg_flags = 0;
  local_44.msg_iovlen = 1;
  if (param_2 == (void *)0x0 || param_3 == (undefined4 *)0x0) {
    return 0xfffffff9;
  }
  uVar11 = *(uint *)(param_1 + 0x28);
  sVar10 = *(size_t *)(param_1 + 0x30);
  local_44.msg_name = param_2;
  if ((uVar11 & 8) == 0) {
    iVar8 = 0;
    if ((uVar11 & 0x10) != 0) goto LAB_0002d958;
    if (sVar10 == 0) {
      iVar8 = 0x22;
      if (DAT_0004e7dc == 0) goto LAB_0002d960;
      goto LAB_0002d974;
    }
    if (DAT_0004e7dc == 0) goto LAB_0002d960;
  }
  else {
    iVar8 = 0x22;
LAB_0002d958:
    if (DAT_0004e7dc == 0) {
LAB_0002d960:
      iVar2 = getpagesize();
      DAT_0004e7dc = iVar2 << 2;
    }
    if (sVar10 == 0) {
LAB_0002d974:
      sVar10 = DAT_0004e7dc;
    }
  }
  local_4c.iov_len = sVar10;
  pvVar3 = malloc(sVar10);
  local_4c.iov_base = pvVar3;
  if (pvVar3 == (void *)0x0) {
LAB_0002dadc:
    uVar11 = 0xfffffffb;
  }
  else {
    pcVar4 = local_44.msg_control;
    uVar1 = DAT_0002dd08;
    if ((param_4 != (undefined4 *)0x0) && ((uVar11 & 2) != 0)) {
      local_44.msg_controllen = 0x18;
      local_44.msg_control = malloc(0x18);
      pcVar4 = local_44.msg_control;
      uVar1 = DAT_0002dd08;
      if (local_44.msg_control == (cmsghdr *)0x0) goto LAB_0002dadc;
    }
    do {
      while( true ) {
        while( true ) {
          local_44.msg_control = pcVar4;
          uVar11 = recvmsg(*(int *)(param_1 + 0x18),&local_44,iVar8);
          if (uVar11 == 0) goto LAB_0002db10;
          if (-1 < (int)uVar11) break;
          piVar6 = __errno_location();
          __stream = stderr;
          iVar2 = *piVar6;
          if (iVar2 != 4) {
            if (3 < DAT_0004e88c) {
              pcVar5 = strerror(iVar2);
              fprintf(__stream,"DBG<4>%20s:%-4u %s: nl_sendmsg(%p): nl_recv() failed with %d (%s)\n"
                      ,"lib/nl.c",0x2ca,DAT_0002dd08,param_1,iVar2,pcVar5);
              *piVar6 = iVar2;
            }
            iVar8 = FUN_0002ac78(iVar2);
            free(local_44.msg_control);
            uVar11 = -iVar8;
            pvVar3 = local_4c.iov_base;
            if (-1 < iVar8) goto LAB_0002dae0;
            psVar9 = (size_t *)0x0;
            goto LAB_0002db4c;
          }
          pcVar4 = local_44.msg_control;
          if (2 < DAT_0004e88c) {
            fprintf(stderr,"DBG<3>%20s:%-4u %s: recvmsg() returned EINTR, retrying\n","lib/nl.c",
                    0x2c5,uVar1);
            *piVar6 = 4;
            pcVar4 = local_44.msg_control;
          }
        }
        if ((local_44.msg_flags & 8U) != 0) break;
        if ((local_4c.iov_len < uVar11) || ((local_44.msg_flags & 0x20U) != 0)) {
          if (iVar8 == 0) {
            uVar11 = 0xffffffee;
            goto LAB_0002db10;
          }
          local_4c.iov_len = uVar11;
          pvVar3 = realloc(local_4c.iov_base,uVar11);
          if (pvVar3 == (void *)0x0) goto LAB_0002db0c;
          iVar8 = 0;
          local_4c.iov_base = pvVar3;
          pcVar4 = local_44.msg_control;
        }
        else {
          if (iVar8 == 0) {
            if (local_44.msg_namelen != 0xc) {
              uVar11 = 0xffffffed;
              free(local_44.msg_control);
              pvVar3 = local_4c.iov_base;
              goto LAB_0002dae0;
            }
            if (param_4 != (undefined4 *)0x0) {
              psVar9 = (size_t *)0x0;
              if ((*(uint *)(param_1 + 0x28) & 2) == 0) goto LAB_0002dca4;
              if (0xb < local_44.msg_controllen) {
                pcVar4 = local_44.msg_control;
                if (local_44.msg_control != (cmsghdr *)0x0) goto LAB_0002dc70;
                psVar9 = (size_t *)0x0;
                goto LAB_0002dca4;
              }
            }
            psVar9 = (size_t *)0x0;
            goto LAB_0002dca4;
          }
          iVar8 = 0;
          pcVar4 = local_44.msg_control;
        }
      }
      if (local_44.msg_controllen == 0) {
        if (3 < DAT_0004e88c) {
          piVar6 = __errno_location();
          iVar8 = *piVar6;
          fprintf(stderr,"DBG<4>%20s:%-4u %s: recvmsg(%p): Received unexpected control data",
                  "lib/nl.c",0x2d4,DAT_0002dd08,param_1);
          *piVar6 = iVar8;
        }
        uVar11 = 0xffffffee;
        free(local_44.msg_control);
        pvVar3 = local_4c.iov_base;
        goto LAB_0002dae0;
      }
      local_44.msg_controllen = local_44.msg_controllen << 1;
      pcVar4 = realloc(local_44.msg_control,local_44.msg_controllen);
    } while (pcVar4 != (cmsghdr *)0x0);
LAB_0002db0c:
    uVar11 = 0xfffffffb;
LAB_0002db10:
    free(local_44.msg_control);
    pvVar3 = local_4c.iov_base;
  }
LAB_0002dae0:
  psVar9 = (size_t *)0x0;
  free(pvVar3);
LAB_0002daec:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = psVar9;
  }
  return uVar11;
  while (pcVar4 = __cmsg_nxthdr(&local_44,pcVar4), pcVar4 != (cmsghdr *)0x0) {
LAB_0002dc70:
    if ((pcVar4->cmsg_level == 1) && (pcVar4->cmsg_type == 2)) {
      psVar9 = malloc(0xc);
      if (psVar9 != (size_t *)0x0) {
        sVar10 = pcVar4[1].cmsg_level;
        sVar7 = pcVar4[1].cmsg_type;
        *psVar9 = pcVar4[1].cmsg_len;
        psVar9[1] = sVar10;
        psVar9[2] = sVar7;
        goto LAB_0002dca4;
      }
      uVar11 = 0xfffffffb;
      free(local_44.msg_control);
      pvVar3 = local_4c.iov_base;
      goto LAB_0002dae0;
    }
  }
  psVar9 = (size_t *)0x0;
LAB_0002dca4:
  free(local_44.msg_control);
LAB_0002db4c:
  *param_3 = local_4c.iov_base;
  goto LAB_0002daec;
}



/* ===== FUN_0002dd0c @ 0002dd0c size=1732 ===== */

int FUN_0002dd0c(int param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  FILE *__stream;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  ushort uVar13;
  code *pcVar14;
  uint uVar15;
  int local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((code *)param_2[0x18] == (code *)0x0) {
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    iVar4 = 0;
    bVar2 = false;
    bVar3 = false;
    do {
      local_38 = (uint *)0x0;
      local_3c = local_38;
      if (2 < DAT_0004e88c) {
        piVar8 = __errno_location();
        iVar5 = *piVar8;
        fprintf(stderr,"DBG<3>%20s:%-4u %s: Attempting to read from %p\n","lib/nl.c",0x34a,
                DAT_0002e3d0,param_1);
        *piVar8 = iVar5;
      }
      if ((code *)param_2[0x19] == (code *)0x0) {
        iVar5 = FUN_0002d8f0(param_1,&local_34,&local_3c,&local_38);
      }
      else {
        iVar5 = (*(code *)param_2[0x19])();
      }
      if (iVar5 < 1) {
        return iVar5;
      }
      local_40 = iVar5;
      if (2 < DAT_0004e88c) {
        piVar8 = __errno_location();
        iVar6 = *piVar8;
        fprintf(stderr,"DBG<3>%20s:%-4u %s: recvmsgs(%p): Read %d bytes\n","lib/nl.c",0x353,
                DAT_0002e3d0,param_1,iVar5);
        *piVar8 = iVar6;
      }
      iVar5 = 0;
      puVar7 = local_3c;
      while (iVar6 = FUN_0002bacc(puVar7,local_40), iVar6 != 0) {
        if (2 < DAT_0004e88c) {
          piVar8 = __errno_location();
          iVar6 = *piVar8;
          fprintf(stderr,"DBG<3>%20s:%-4u %s: recvmsgs(%p): Processing valid message...\n",
                  "lib/nl.c",0x357,DAT_0002e3d0,param_1);
          *piVar8 = iVar6;
        }
        FUN_0002c0d0(iVar5);
        iVar5 = FUN_0002bce4(puVar7);
        if (iVar5 == 0) {
          iVar6 = -5;
          goto LAB_0002de78;
        }
        FUN_0002c214(iVar5,*(undefined4 *)(param_1 + 0x1c));
        FUN_0002c22c(iVar5,&local_34);
        if (local_38 != (uint *)0x0) {
          FUN_0002c27c(iVar5);
        }
        iVar4 = iVar4 + 1;
        if ((code *)param_2[5] == (code *)0x0) {
LAB_0002dea4:
          pcVar14 = (code *)param_2[8];
          if (pcVar14 == (code *)0x0) {
            if (((*(uint *)(param_1 + 0x28) & 0x20) == 0) &&
               (puVar7[2] != *(uint *)(param_1 + 0x24))) {
              pcVar14 = (code *)param_2[7];
              if (pcVar14 == (code *)0x0) {
                iVar6 = -0x10;
                goto LAB_0002de78;
              }
              iVar12 = 7;
              iVar6 = param_2[0x12];
              goto LAB_0002deb8;
            }
          }
          else {
            iVar6 = param_2[0x13];
            iVar12 = 8;
LAB_0002deb8:
            param_2[0x1c] = iVar12;
            iVar6 = (*pcVar14)(iVar5,iVar6);
            param_2[0x1c] = 0xb;
            if (iVar6 == 1) goto LAB_0002e088;
            if (iVar6 == 2) goto LAB_0002e020;
            if (iVar6 != 0) goto LAB_0002de78;
          }
          iVar6 = DAT_0004e88c;
          if ((ushort)puVar7[1] - 1 < 4) {
            iVar12 = *(int *)(param_1 + 0x24) + 1;
            *(int *)(param_1 + 0x24) = iVar12;
            if (2 < iVar6) {
              piVar8 = __errno_location();
              iVar6 = *piVar8;
              fprintf(stderr,
                      "DBG<3>%20s:%-4u %s: recvmsgs(%p): Increased expected sequence number to %d\n"
                      ,"lib/nl.c",0x387,DAT_0002e3d0,param_1,iVar12);
              *piVar8 = iVar6;
            }
          }
          uVar13 = *(ushort *)((int)puVar7 + 6);
          if ((uVar13 & 2) != 0) {
            bVar3 = true;
          }
          if ((uVar13 & 0x10) != 0) {
            if ((code *)param_2[10] == (code *)0x0) {
              bVar2 = true;
            }
            else {
              param_2[0x1c] = 10;
              iVar6 = (*(code *)param_2[10])(iVar5,param_2[0x15]);
              param_2[0x1c] = 0xb;
              if (iVar6 == 1) goto LAB_0002e088;
              if (iVar6 == 2) goto LAB_0002e020;
              if (iVar6 != 0) goto LAB_0002de78;
              uVar13 = *(ushort *)((int)puVar7 + 6);
            }
          }
          if (((uVar13 & 4) != 0) && ((code *)param_2[9] != (code *)0x0)) {
            param_2[0x1c] = 9;
            iVar6 = (*(code *)param_2[9])(iVar5,param_2[0x14]);
            param_2[0x1c] = 0xb;
            if (iVar6 == 1) goto LAB_0002e088;
            if (iVar6 == 2) goto LAB_0002e020;
            if (iVar6 != 0) goto LAB_0002de78;
          }
          sVar1 = (short)puVar7[1];
          if (sVar1 != 3) {
            if (sVar1 == 1) {
              pcVar14 = (code *)param_2[3];
              if (pcVar14 == (code *)0x0) goto LAB_0002e088;
              iVar12 = 3;
              iVar6 = param_2[0xe];
            }
            else if (sVar1 == 4) {
              pcVar14 = (code *)param_2[2];
              if (pcVar14 == (code *)0x0) {
                iVar6 = -0x11;
                goto LAB_0002de78;
              }
              iVar12 = 2;
              iVar6 = param_2[0xd];
            }
            else if (sVar1 == 2) {
              piVar8 = (int *)FUN_0002ba5c(puVar7);
              uVar15 = *puVar7;
              uVar9 = FUN_0002ba34(0x14);
              if (uVar15 < uVar9) {
                pcVar14 = (code *)param_2[7];
                if (pcVar14 == (code *)0x0) {
                  iVar6 = -0x12;
                  goto LAB_0002de78;
                }
                iVar12 = 7;
                iVar6 = param_2[0x12];
              }
              else {
                iVar6 = *piVar8;
                if (iVar6 != 0) {
                  if (3 < DAT_0004e88c) {
                    piVar10 = __errno_location();
                    __stream = stderr;
                    iVar6 = -iVar6;
                    iVar12 = *piVar10;
                    pcVar11 = strerror(iVar6);
                    fprintf(__stream,
                            "DBG<4>%20s:%-4u %s: recvmsgs(%p): RTNETLINK responded with %d (%s)\n",
                            "lib/nl.c",0x3d5,DAT_0002e3d0,param_1,iVar6,pcVar11);
                    *piVar10 = iVar12;
                  }
                  if ((code *)param_2[0x16] != (code *)0x0) {
                    iVar6 = (*(code *)param_2[0x16])(&local_34,piVar8,param_2[0x17]);
                    if (iVar6 < 0) goto LAB_0002de78;
                    if (iVar6 != 2) goto LAB_0002e088;
                  }
                  iVar6 = FUN_0002ac78(*piVar8);
                  FUN_0002c0d0(iVar5);
                  free(local_3c);
                  free(local_38);
                  if (!bVar2) {
                    if (iVar6 != 0) {
                      return -iVar6;
                    }
                    return iVar4;
                  }
                  goto LAB_0002de9c;
                }
                pcVar14 = (code *)param_2[4];
                if (pcVar14 == (code *)0x0) goto LAB_0002e088;
                iVar12 = 4;
                iVar6 = param_2[0xf];
              }
            }
            else {
              pcVar14 = (code *)*param_2;
              if (pcVar14 == (code *)0x0) goto LAB_0002e088;
              iVar6 = param_2[0xb];
              iVar12 = 0;
            }
            param_2[0x1c] = iVar12;
            iVar6 = (*pcVar14)(iVar5,iVar6);
            param_2[0x1c] = 0xb;
            if (-1 < iVar6) {
              if (iVar6 < 2) goto LAB_0002e088;
LAB_0002e010:
              if (iVar6 == 2) goto LAB_0002e020;
            }
LAB_0002de78:
            FUN_0002c0d0(iVar5);
            free(local_3c);
            free(local_38);
            if (!bVar2) {
              return iVar6;
            }
            goto LAB_0002de9c;
          }
          if ((code *)param_2[1] != (code *)0x0) {
            param_2[0x1c] = 1;
            iVar6 = (*(code *)param_2[1])(iVar5,param_2[0xc]);
            param_2[0x1c] = 0xb;
            if (iVar6 < 0) goto LAB_0002de78;
            if (1 < iVar6) goto LAB_0002e010;
          }
          bVar3 = false;
        }
        else {
          param_2[0x1c] = 5;
          iVar6 = (*(code *)param_2[5])(iVar5,param_2[0x10]);
          param_2[0x1c] = 0xb;
          if (iVar6 != 1) {
            if (iVar6 != 2) {
              if (iVar6 != 0) goto LAB_0002de78;
              goto LAB_0002dea4;
            }
            goto LAB_0002e020;
          }
        }
LAB_0002e088:
        puVar7 = (uint *)FUN_0002baf8(puVar7,&local_40);
      }
      FUN_0002c0d0(iVar5);
      free(local_3c);
      free(local_38);
      local_3c = (uint *)0x0;
    } while (bVar3);
    iVar5 = 0;
    local_38 = local_3c;
LAB_0002e020:
    FUN_0002c0d0(iVar5);
    free(local_3c);
    free(local_38);
    if (bVar2) {
LAB_0002de9c:
      iVar4 = -0x21;
    }
  }
  else {
    iVar4 = (*(code *)param_2[0x18])();
  }
  return iVar4;
}



/* ===== FUN_0002e3d4 @ 0002e3d4 size=16 ===== */

uint FUN_0002e3d4(void)

{
  uint uVar1;
  
  uVar1 = FUN_0002dd0c();
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== FUN_0002e3e4 @ 0002e3e4 size=20 ===== */

uint FUN_0002e3e4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0002dd0c(param_1,*(undefined4 *)(param_1 + 0x2c));
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== FUN_0002e3f8 @ 0002e3f8 size=100 ===== */

uint FUN_0002e3f8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0002b10c(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    FUN_0002b1d0(iVar1,4,3,&LAB_0002cfa0,0);
    uVar2 = FUN_0002dd0c(param_1,iVar1);
    uVar2 = uVar2 & (int)uVar2 >> 0x1f;
    FUN_0002b150(iVar1);
  }
  return uVar2;
}



/* ===== FUN_0002e45c @ 0002e45c size=84 ===== */

int FUN_0002e45c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0002d7d0();
  iVar1 = FUN_0002d76c(param_1,param_2);
  FUN_0002c0d0(param_2);
  if (-1 < iVar1) {
    if ((*(uint *)(param_1 + 0x28) & 0x20) == 0) {
      iVar1 = FUN_0002e3f8(param_1);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== thunk_FUN_0002d84c @ 0002e56c size=4 ===== */

void thunk_FUN_0002d84c(undefined4 param_1,undefined4 param_2)

{
  FUN_0002d7d0();
  FUN_0002d76c(param_1,param_2);
  return;
}



/* ===== FUN_0002e570 @ 0002e570 size=84 ===== */

void FUN_0002e570(void)

{
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0x27,"obj_ops");
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/object.c",0x27);
}



/* ===== FUN_0002e5c4 @ 0002e5c4 size=260 ===== */

undefined4 * FUN_0002e5c4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  if (*(size_t *)(param_1 + 4) < 0x28) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0x3b,DAT_0002e6c8);
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/object.c",0x3b);
  }
  puVar1 = calloc(1,*(size_t *)(param_1 + 4));
  if (puVar1 != (undefined4 *)0x0) {
    pcVar3 = *(code **)(param_1 + 0xc);
    *puVar1 = 1;
    puVar1[3] = puVar1 + 3;
    puVar1[4] = puVar1 + 3;
    puVar1[1] = param_1;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    if (3 < DAT_0004e88c) {
      piVar2 = __errno_location();
      iVar4 = *piVar2;
      fprintf(stderr,"DBG<4>%20s:%-4u %s: Allocated new object %p\n","lib/object.c",0x48,
              DAT_0002e6c8,puVar1);
      *piVar2 = iVar4;
      return puVar1;
    }
  }
  return puVar1;
}



/* ===== FUN_0002e6cc @ 0002e6cc size=68 ===== */

undefined4 FUN_0002e6cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0002a34c();
  if (iVar1 == 0) {
    return 0xfffffff6;
  }
  iVar2 = FUN_0002e5c4(*(undefined4 *)(iVar1 + 0x4c));
  *param_2 = iVar2;
  FUN_0002a308(iVar1);
  if (*param_2 == 0) {
    uVar3 = 0xfffffffb;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0002e710 @ 0002e710 size=44 ===== */

undefined4 FUN_0002e710(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0002e728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffff6;
}



/* ===== FUN_0002e73c @ 0002e73c size=280 ===== */

void FUN_0002e73c(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    if ((0 < *param_1) && (0 < DAT_0004e88c)) {
      piVar1 = __errno_location();
      iVar4 = *piVar1;
      fprintf(stderr,"DBG<1>%20s:%-4u %s: Warning: Freeing object in use...\n","lib/object.c",0xb4,
              DAT_0002e854);
      *piVar1 = iVar4;
    }
    if (param_1[2] != 0) {
      FUN_00028ca8(param_1);
    }
    pcVar2 = *(code **)(iVar3 + 0x10);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1);
    }
    if (DAT_0004e88c < 4) {
      free(param_1);
      return;
    }
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    fprintf(stderr,"DBG<4>%20s:%-4u %s: Freed object %p\n","lib/object.c",0xbc,DAT_0002e854,param_1)
    ;
    *piVar1 = iVar3;
    free(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e570();
}



/* ===== FUN_0002e858 @ 0002e858 size=348 ===== */

int FUN_0002e858(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  size_t __n;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  iVar1 = FUN_0002e5c4(iVar7);
  if (iVar1 == 0) {
    return 0;
  }
  __n = *(int *)(iVar7 + 4) - 0x28;
  if (-1 < (int)__n) {
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x14) = uVar5;
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    if (__n == 0) {
      pcVar6 = *(code **)(iVar7 + 0x14);
      if (pcVar6 == (code *)0x0) {
        return iVar1;
      }
    }
    else {
      memcpy((void *)(iVar1 + 0x28),(void *)(param_1 + 0x28),__n);
      pcVar6 = *(code **)(iVar7 + 0x14);
      if (pcVar6 == (code *)0x0) {
        if (*(int *)(iVar7 + 0x10) == 0) {
          return iVar1;
        }
        fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0x8e,DAT_0002e9b4);
                    /* WARNING: Subroutine does not return */
        __assert("0","lib/object.c",0x8e);
      }
    }
    iVar3 = (*pcVar6)(iVar1,param_1);
    iVar7 = iVar1;
    if (iVar3 < 0) {
      iVar7 = 0;
      FUN_0002e73c(iVar1);
    }
    return iVar7;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0x7f,DAT_0002e9b4);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/object.c",0x7f);
}



/* ===== FUN_0002e9b8 @ 0002e9b8 size=128 ===== */

void FUN_0002e9b8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0004e88c;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  if (iVar3 < 4) {
    return;
  }
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  fprintf(stderr,"DBG<4>%20s:%-4u %s: New reference to object %p, total %d\n","lib/object.c",0xd0,
          DAT_0002ea38,param_1,iVar2 + 1);
  *piVar1 = iVar3;
  return;
}



/* ===== FUN_0002ea3c @ 0002ea3c size=232 ===== */

void FUN_0002ea3c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0004e88c;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1 + -1;
    *param_1 = iVar2;
    if (3 < iVar3) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      fprintf(stderr,"DBG<4>%20s:%-4u %s: Returned object reference %p, %d remaining\n",
              "lib/object.c",0xde,DAT_0002eb24,param_1,iVar2);
      *piVar1 = iVar3;
      iVar2 = *param_1;
    }
    if (iVar2 < 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0xe1,DAT_0002eb24);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/object.c",0xe1);
    }
    if (iVar2 == 0) {
      FUN_0002e73c(param_1);
      return;
    }
  }
  return;
}



/* ===== FUN_0002eb68 @ 0002eb68 size=192 ===== */

void FUN_0002eb68(int param_1,uint *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((void *)param_2[8] != (void *)0x0) {
    memset((void *)param_2[8],0,param_2[9]);
  }
  if (2 < *param_2) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/utils.c",0x472,DAT_000316ec);
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/utils.c",0x472);
  }
  param_2[0xc] = 0;
  if (param_2[3] != 0) {
    param_2[10] = 1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + (*param_2 + 6) * 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00031698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== FUN_0002eb9c @ 0002eb9c size=56 ===== */

void FUN_0002eb9c(void)

{
  FUN_0002eb68();
  return;
}



/* ===== FUN_0002ebd4 @ 0002ebd4 size=244 ===== */

bool FUN_0002ebd4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 == 0) || (*(int *)(param_2 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  if (iVar3 != *(int *)(param_2 + 4)) {
    return false;
  }
  if (*(code **)(iVar3 + 0x34) == (code *)0x0) {
    uVar2 = *(uint *)(iVar3 + 8);
    uVar1 = *(uint *)(param_1 + 0x20);
    if (uVar2 != 0) goto LAB_0002ec3c;
  }
  else {
    uVar1 = (**(code **)(iVar3 + 0x34))();
    uVar2 = (**(code **)(iVar3 + 0x34))(param_2);
    if (uVar1 != uVar2) {
      return false;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
LAB_0002ec3c:
    if (uVar2 != 0xffffffff) goto LAB_0002ec44;
  }
  uVar2 = *(uint *)(param_2 + 0x20) & uVar1;
LAB_0002ec44:
  if (((uVar2 == (uVar1 & uVar2)) && (uVar2 == (*(uint *)(param_2 + 0x20) & uVar2))) &&
     (*(code **)(iVar3 + 0x24) != (code *)0x0)) {
    lVar4 = (**(code **)(iVar3 + 0x24))(param_1,param_2,uVar2,0,2);
    return lVar4 == 0;
  }
  return false;
}



/* ===== FUN_0002ecc8 @ 0002ecc8 size=108 ===== */

undefined4 FUN_0002ecc8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) || (*(int *)(param_2 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  if ((iVar2 == *(int *)(param_2 + 4)) && (*(code **)(iVar2 + 0x24) != (code *)0x0)) {
    uVar1 = (**(code **)(iVar2 + 0x24))(param_1,param_2,0xffffffff,0xffffffff,0);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== FUN_0002ed50 @ 0002ed50 size=108 ===== */

bool FUN_0002ed50(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(param_2 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  if ((iVar1 == *(int *)(param_2 + 4)) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
    lVar2 = (**(code **)(iVar1 + 0x24))
                      (param_1,param_2,*(undefined4 *)(param_2 + 0x20),
                       *(undefined4 *)(param_2 + 0x24),1);
    return lVar2 == 0;
  }
  return false;
}



/* ===== FUN_0002ee20 @ 0002ee20 size=44 ===== */

void FUN_0002ee20(int param_1,undefined4 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 4) + 0x2c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0002ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *param_2 = 0;
  return;
}



/* ===== FUN_0002ee70 @ 0002ee70 size=80 ===== */

void FUN_0002ee70(void)

{
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0x206,DAT_0002eec0);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/object.c",0x206);
}



/* ===== FUN_0002eed4 @ 0002eed4 size=44 ===== */

undefined4 FUN_0002eed4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e570();
  }
  if (*(code **)(iVar2 + 0x34) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0002eeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0x34))();
    return uVar1;
  }
  return *(undefined4 *)(iVar2 + 8);
}



/* ===== FUN_0002ef08 @ 0002ef08 size=92 ===== */

undefined2 * FUN_0002ef08(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  time_t tVar3;
  
  puVar1 = calloc(1,0x34);
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    uVar2 = FUN_0002b140(param_1);
    *puVar1 = 0x10;
    puVar1[6] = 0x10;
    *(undefined4 *)(puVar1 + 0x16) = uVar2;
    tVar3 = time((time_t *)0x0);
    *(undefined4 *)(puVar1 + 0x14) = 4;
    *(time_t *)(puVar1 + 0x10) = tVar3;
    *(time_t *)(puVar1 + 0x12) = tVar3;
  }
  return puVar1;
}



/* ===== FUN_0002ef64 @ 0002ef64 size=288 ===== */

int FUN_0002ef64(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = getpid();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7e0);
  if (DAT_0004e800 == 0) {
    uVar4 = time((time_t *)0x0);
    uVar4 = uVar4 ^ uVar4 >> 0x10 ^ 0x3047;
    DAT_0004e800 = (ushort)uVar4;
  }
  else {
    uVar4 = DAT_0004e800 + 0x4e2b;
    DAT_0004e800 = (ushort)uVar4;
  }
  uVar4 = uVar4 & 0xffff;
  uVar3 = uVar4 >> 5;
  iVar5 = 0;
  do {
    if (iVar5 == 0x1f) {
      if (DAT_0004e804 == 0xffffffff) break;
      uVar3 = 0;
      uVar6 = DAT_0004e804;
LAB_0002f018:
      iVar2 = 0x20;
      do {
        uVar4 = uVar4 + 0xd & 0x1f;
        if ((uVar6 >> uVar4 & 1) == 0) {
          (&DAT_0004e804)[uVar3] = uVar6 | 1 << uVar4;
          pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7e0);
          iVar5 = (uVar1 & 0x3fffff) + (uVar4 + uVar3 * 0x20) * 0x400000;
          if (iVar5 == 0) {
            iVar5 = 0x400;
          }
          return iVar5;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else {
      uVar3 = (int)(uVar3 + 6) % 0x1f + 1;
      uVar6 = (&DAT_0004e804)[uVar3];
      if ((&DAT_0004e804)[uVar3] != 0xffffffff) goto LAB_0002f018;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x20);
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7e0);
  return 0;
}



/* ===== FUN_0002f084 @ 0002f084 size=248 ===== */

void FUN_0002f084(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/socket.c",0x7f,"release_local_port");
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/socket.c",0x7f);
  }
  iVar1 = (int)(param_1 >> 0x16) >> 5;
  uVar2 = 1 << (param_1 >> 0x16 & 0x1f);
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7e0);
  uVar3 = (&DAT_0004e804)[iVar1] & uVar2;
  if (uVar3 == uVar2) {
    (&DAT_0004e804)[iVar1] = (&DAT_0004e804)[iVar1] & ~uVar3;
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7e0);
    return;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/socket.c",0x86,"release_local_port");
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/socket.c",0x86);
}



/* ===== FUN_0002f17c @ 0002f17c size=212 ===== */

void FUN_0002f17c(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + -4);
  iVar4 = 0;
  while (piVar3 = piVar3 + 1, *piVar3 == 0) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x20) {
      return;
    }
  }
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0004e7e0);
  puVar1 = (uint *)(param_1 + iVar4 * 4);
  puVar2 = (uint *)(DAT_0002f250 + iVar4 * 4);
  do {
    if ((*puVar1 & ~*puVar2) != 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/socket.c",0x94,DAT_0002f254);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/socket.c",0x94);
    }
    iVar4 = iVar4 + 1;
    *puVar2 = *puVar2 & ~*puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x20);
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0004e7e0);
  return;
}



/* ===== FUN_0002f258 @ 0002f258 size=32 ===== */

void FUN_0002f258(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 >> 0x16) >> 5;
  *(uint *)(param_1 + iVar1 * 4) = *(uint *)(param_1 + iVar1 * 4) | 1 << (param_2 >> 0x16 & 0x1f);
  return;
}



/* ===== FUN_0002f2b0 @ 0002f2b0 size=92 ===== */

void FUN_0002f2b0(int param_1)

{
  if (param_1 != 0) {
    FUN_0002ef08();
    return;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/socket.c",0xea,DAT_0002f30c);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/socket.c",0xea);
}



/* ===== FUN_0002f310 @ 0002f310 size=84 ===== */

void FUN_0002f310(void *param_1)

{
  uint uVar1;
  
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x18) < 0) {
      uVar1 = *(uint *)((int)param_1 + 0x28);
    }
    else {
      close(*(int *)((int)param_1 + 0x18));
      uVar1 = *(uint *)((int)param_1 + 0x28);
    }
    if ((uVar1 & 4) == 0) {
      FUN_0002f084(*(undefined4 *)((int)param_1 + 4));
    }
    FUN_0002b150(*(undefined4 *)((int)param_1 + 0x2c));
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0002f364 @ 0002f364 size=48 ===== */

void FUN_0002f364(int param_1)

{
  FUN_0002b1d0(*(undefined4 *)(param_1 + 0x2c),8,3,&LAB_0002ef00,0);
  return;
}



/* ===== FUN_0002f3c8 @ 0002f3c8 size=16 ===== */

bool FUN_0002f3c8(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



/* ===== FUN_0002f3d8 @ 0002f3d8 size=72 ===== */

int FUN_0002f3d8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    iVar1 = FUN_0002ef64();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffb;
      return iVar1;
    }
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
  return 0;
}



/* ===== FUN_0002f420 @ 0002f420 size=64 ===== */

int FUN_0002f420(int param_1)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_0002ef64();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 0x28) | 4;
      iVar2 = -1;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x28) & 0xfffffffb;
      iVar2 = extraout_r2;
    }
    *(uint *)(param_1 + 0x28) = uVar3;
    if (iVar1 == 0) {
      *(int *)(param_1 + 4) = iVar2;
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return *(int *)(param_1 + 4);
}



/* ===== FUN_0002f460 @ 0002f460 size=56 ===== */

void FUN_0002f460(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 4) == 0) {
    FUN_0002f084(*(undefined4 *)(param_1 + 4));
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 0x28) = uVar1 | 4;
  return;
}



/* ===== FUN_0002f5d0 @ 0002f5d0 size=316 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0002f5d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *local_24;
  int local_c [3];
  
  local_c[1] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == -1) {
    iVar1 = -3;
  }
  else {
    local_24 = local_c;
    if (param_2 == 0) {
      return 0;
    }
    local_c[0] = param_2;
    local_c[2] = param_4;
    if (param_2 < 0) {
      return -7;
    }
    while( true ) {
      local_24 = local_24 + 1;
      iVar2 = setsockopt(iVar1,0x10e,1,local_c,4);
      iVar1 = DAT_0004e88c;
      if (iVar2 < 0) break;
      local_c[0] = *local_24;
      if (local_c[0] == 0) {
        return 0;
      }
      if (local_c[0] < 0) {
        return -7;
      }
      iVar1 = *(int *)(param_1 + 0x18);
    }
    piVar3 = __errno_location();
    __stream = stderr;
    iVar2 = *piVar3;
    if (3 < iVar1) {
      pcVar4 = strerror(iVar2);
      fprintf(__stream,
              "DBG<4>%20s:%-4u %s: nl_socket_add_memberships(%p): setsockopt() failed with %d (%s)\n"
              ,"lib/socket.c",0x1c7,DAT_0002f5cc,param_1,iVar2,pcVar4);
      *piVar3 = iVar2;
    }
    iVar1 = FUN_0002ac78(iVar2);
    iVar1 = -iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002f748 @ 0002f748 size=8 ===== */

undefined4 FUN_0002f748(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== FUN_0002fcbc @ 0002fcbc size=8 ===== */

void FUN_0002fcbc(int param_1)

{
  FUN_0002b140(*(undefined4 *)(param_1 + 0x2c));
  return;
}



/* ===== FUN_0002fcc4 @ 0002fcc4 size=120 ===== */

void FUN_0002fcc4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_0002b150(*(undefined4 *)(param_1 + 0x2c));
    uVar1 = FUN_0002b140(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    return;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/socket.c",0x2f2,DAT_0002fd3c);
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/socket.c",0x2f2);
}



/* ===== FUN_0002fd50 @ 0002fd50 size=384 ===== */

int FUN_0002fd50(int param_1,int param_2,int param_3)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int local_20;
  int local_1c [2];
  
  local_1c[0] = param_2;
  if (param_2 < 1) {
    local_1c[0] = 0x8000;
  }
  local_20 = param_3;
  if (param_3 < 1) {
    local_20 = 0x8000;
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    return -3;
  }
  iVar2 = setsockopt(*(int *)(param_1 + 0x18),1,7,&local_20,4);
  iVar3 = DAT_0004e88c;
  if (iVar2 < 0) {
    piVar4 = __errno_location();
    pFVar1 = stderr;
    iVar2 = *piVar4;
    if (3 < iVar3) {
      pcVar5 = strerror(iVar2);
      fprintf(pFVar1,
              "DBG<4>%20s:%-4u %s: nl_socket_set_buffer_size(%p): setsockopt() failed with %d (%s)\n"
              ,"lib/socket.c",0x33d,DAT_0002fed0,param_1,iVar2,pcVar5);
      *piVar4 = iVar2;
    }
  }
  else {
    iVar2 = setsockopt(*(int *)(param_1 + 0x18),1,8,local_1c,4);
    iVar3 = DAT_0004e88c;
    if (-1 < iVar2) {
      return 0;
    }
    piVar4 = __errno_location();
    pFVar1 = stderr;
    iVar2 = *piVar4;
    if (3 < iVar3) {
      pcVar5 = strerror(iVar2);
      fprintf(pFVar1,
              "DBG<4>%20s:%-4u %s: nl_socket_set_buffer_size(%p): setsockopt() failed with %d (%s)\n"
              ,"lib/socket.c",0x345,DAT_0002fed0,param_1,iVar2,pcVar5);
      *piVar4 = iVar2;
    }
  }
  iVar3 = FUN_0002ac78(iVar2);
  return -iVar3;
}



/* ===== FUN_000300b0 @ 000300b0 size=552 ===== */

void FUN_000300b0(void)

{
  char *pcVar1;
  long lVar2;
  FILE *__stream;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  undefined4 local_1038;
  undefined4 local_1034;
  int local_1030;
  long local_102c;
  pthread_mutex_t local_1028;
  char acStack_1010 [4096];
  
  local_1028.__data.__count = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_1028.__data.__owner = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_1028.__data.__kind = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_1028.__data.__lock = 0;
  local_1028.__data.__nusers = 0;
  if ((DAT_0004e888 != 1) &&
     (local_1028.__data.field5_0x14 = (_union_13)local_1028.__data.__count,
     pthread_mutex_lock(&local_1028), DAT_0004e888 != 1)) {
    pcVar1 = getenv("HZ");
    if ((pcVar1 == (char *)0x0) ||
       (lVar2 = strtol(pcVar1,(char **)0x0,0), 0xfffffffd < lVar2 + 0x7fffffffU)) {
      lVar2 = sysconf(2);
    }
    DAT_0004e478 = lVar2;
    DAT_0004e47c = lVar2;
    pcVar1 = getenv("TICKS_PER_USEC");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = getenv("PROC_NET_PSCHED");
      if (pcVar1 == (char *)0x0) {
        pcVar1 = getenv("PROC_ROOT");
        if (pcVar1 == (char *)0x0) {
          strncpy(acStack_1010,"/proc/net/psched",0xffe);
        }
        else {
          snprintf(acStack_1010,0xfff,"%s/net/psched");
        }
      }
      else {
        snprintf(acStack_1010,0xfff,"%s");
      }
      __stream = fopen(acStack_1010,"re");
      if (__stream != (FILE *)0x0) {
        iVar3 = fscanf(__stream,"%08x %08x %08x %08x",&local_1038,&local_1034,&local_1030,
                       &local_102c);
        if (iVar3 != 4) {
          if (0 < DAT_0004e88c) {
            piVar4 = __errno_location();
            iVar3 = *piVar4;
            fprintf(stderr,
                    "DBG<1>%20s:%-4u %s: Fatal error: can not read psched settings from \"%s\". Try to set TICKS_PER_USEC, PROC_NET_PSCHED or PROC_ROOT environment variables\n"
                    ,"lib/utils.c",0x1e6,"get_psched_settings",acStack_1010);
            *piVar4 = iVar3;
          }
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        dVar6 = (double)VectorUnsignedToFloat(local_1038,(byte)(in_fpscr >> 0x16) & 3);
        if (local_1030 == 1000000) {
          DAT_0004e47c = local_102c;
        }
        dVar5 = (double)VectorUnsignedToFloat(local_1034,(byte)(in_fpscr >> 0x16) & 3);
        DAT_0004e480 = dVar6 / dVar5;
        fclose(__stream);
      }
    }
    else {
      DAT_0004e480 = strtod(pcVar1,(char **)0x0);
    }
    DAT_0004e888 = 1;
    pthread_mutex_unlock(&local_1028);
  }
  return;
}



/* ===== FUN_000302d8 @ 000302d8 size=188 ===== */

void FUN_000302d8(int param_1,char *param_2,__gnuc_va_list param_3)

{
  char *__src;
  int iVar1;
  size_t sVar2;
  char *__s;
  char *local_14 [2];
  
  if (*(FILE **)(param_1 + 0x1c) == (FILE *)0x0) {
    if ((*(int *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
      local_14[0] = (char *)0x0;
      iVar1 = vasprintf(local_14,param_2,param_3);
      __src = local_14[0];
      if (-1 < iVar1) {
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          __s = *(char **)(param_1 + 0x20);
          sVar2 = strlen(__s);
          strncat(__s,__src,(*(int *)(param_1 + 0x24) + -1) - sVar2);
        }
        else {
          (**(code **)(param_1 + 0x10))(param_1);
        }
        free(local_14[0]);
        return;
      }
    }
  }
  else {
    vfprintf(*(FILE **)(param_1 + 0x1c),param_2,param_3);
  }
  return;
}



/* ===== FUN_00030394 @ 00030394 size=320 ===== */

int FUN_00030394(char *param_1,code *param_2)

{
  byte *pbVar1;
  FILE *__stream;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte *local_a4;
  byte local_a0 [128];
  
  __stream = fopen(param_1,"re");
  if (__stream == (FILE *)0x0) {
    piVar6 = __errno_location();
    iVar5 = FUN_0002ac78(*piVar6);
    iVar5 = -iVar5;
  }
  else {
    do {
      do {
        pcVar2 = fgets((char *)local_a0,0x80,__stream);
        iVar5 = 0;
        if (pcVar2 == (char *)0x0) goto LAB_0003046c;
        uVar7 = local_a0[0] - 10 & 0xff;
      } while ((uVar7 < 0x1a) && ((~(0x2000009U >> uVar7) & 1) == 0));
      lVar3 = strtol((char *)local_a0,(char **)&local_a4,0);
      if (local_a4 == local_a0) {
LAB_00030490:
        fclose(__stream);
        return -7;
      }
      if (0xfffffffd < lVar3 + 0x7fffffffU) {
        fclose(__stream);
        return -8;
      }
      for (; pbVar1 = local_a4, *local_a4 == 9 || *local_a4 == 0x20; local_a4 = local_a4 + 1) {
      }
      sVar4 = strcspn((char *)local_a4,"#\r\n\t ");
      if (sVar4 == 0) goto LAB_00030490;
      pbVar1[sVar4] = 0;
      iVar5 = (*param_2)(lVar3,local_a4);
    } while (-1 < iVar5);
LAB_0003046c:
    fclose(__stream);
  }
  return iVar5;
}



/* ===== <EXTERNAL>::strerror @ 000304d4 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004e030)(__errnum);
  return pcVar1;
}



/* ===== FUN_000304d8 @ 000304d8 size=224 ===== */

undefined4 FUN_000304d8(uint param_1,uint param_2,undefined4 *param_3)

{
  double dVar1;
  bool bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  
  dVar1 = DAT_000305d0;
  dVar4 = DAT_000305b8;
  bVar2 = 0xfe < param_2;
  if (param_2 == 0xff) {
    bVar2 = 0xfffffffe < param_1;
  }
  if (bVar2 && (param_2 != 0xff || param_1 != 0xffffffff)) {
    *param_3 = &DAT_0003c858;
    dVar4 = (double)FUN_00034f18();
    return SUB84(dVar4 * DAT_000305c8,0);
  }
  if (param_2 != 0 || 0x3fffffff < param_1) {
    *param_3 = &DAT_0003c85c;
    dVar4 = (double)FUN_00034f18();
    return SUB84(dVar4 * DAT_000305c0,0);
  }
  dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  if (param_2 != 0 || 0xfffff < param_1) {
    *param_3 = &DAT_0003c860;
    return SUB84(dVar3 * dVar1,0);
  }
  if (param_2 == 0 && param_1 < 0x400) {
    *param_3 = &DAT_0003c868;
  }
  else {
    *param_3 = &DAT_0003c864;
    dVar3 = dVar3 * dVar4;
  }
  return SUB84(dVar3,0);
}



/* ===== FUN_000305d8 @ 000305d8 size=220 ===== */

undefined4 FUN_000305d8(uint param_1,uint param_2,undefined4 *param_3)

{
  double dVar1;
  bool bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  
  dVar1 = DAT_000306e8;
  dVar4 = DAT_000306d0;
  bVar2 = DAT_000306bc <= param_2;
  if (param_2 == DAT_000306bc) {
    bVar2 = DAT_000306b8 <= param_1;
  }
  if (bVar2 && (param_2 != DAT_000306bc || param_1 != DAT_000306b8)) {
    *param_3 = &DAT_0003c86c;
    dVar4 = (double)FUN_00034f18();
    return SUB84(dVar4 / DAT_000306e0,0);
  }
  bVar2 = DAT_000306c4 <= param_2;
  if (param_2 == DAT_000306c4) {
    bVar2 = DAT_000306c0 <= param_1;
  }
  if (bVar2 && (param_2 != DAT_000306c4 || param_1 != DAT_000306c0)) {
    *param_3 = &DAT_0003c874;
    dVar4 = (double)FUN_00034f18();
    return SUB84(dVar4 / DAT_000306d8,0);
  }
  bVar2 = DAT_000306cc <= param_2;
  dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  if (param_2 == DAT_000306cc) {
    bVar2 = DAT_000306c8 <= param_1;
  }
  if (bVar2 && (param_2 != DAT_000306cc || param_1 != DAT_000306c8)) {
    *param_3 = &DAT_0003c87c;
    return SUB84(dVar3 / dVar1,0);
  }
  if (param_2 == 0 && param_1 < 1000) {
    *param_3 = &DAT_0003c88c;
  }
  else {
    *param_3 = &DAT_0003c884;
    dVar3 = dVar3 / dVar4;
  }
  return SUB84(dVar3,0);
}



/* ===== FUN_00030a88 @ 00030a88 size=168 ===== */

undefined4 FUN_00030a88(char *param_1)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  char *local_14;
  
  dVar2 = strtod(param_1,&local_14);
  uVar3 = DAT_00030b40;
  if (local_14 != param_1) {
    if (1.0 < dVar2) {
      dVar2 = dVar2 / DAT_00030b30;
    }
    uVar3 = DAT_00030b44;
    if (((dVar2 <= 1.0) && (0.0 <= dVar2)) &&
       ((*local_14 == '\0' || (iVar1 = strcmp(local_14,"%"), uVar3 = DAT_00030b40, iVar1 == 0)))) {
      uVar3 = (int)(longlong)(dVar2 * DAT_00030b38 + 0.5);
    }
  }
  return uVar3;
}



/* ===== FUN_00030b60 @ 00030b60 size=24 ===== */

undefined4 FUN_00030b60(void)

{
  FUN_000300b0();
  return DAT_0004e47c;
}



/* ===== FUN_00030b78 @ 00030b78 size=52 ===== */

int FUN_00030b78(undefined4 param_1)

{
  uint in_fpscr;
  double dVar1;
  
  FUN_000300b0();
  dVar1 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return (uint)(0.0 < dVar1 * DAT_0004e480) * (int)(longlong)(dVar1 * DAT_0004e480);
}



/* ===== FUN_00030bac @ 00030bac size=52 ===== */

int FUN_00030bac(undefined4 param_1)

{
  uint in_fpscr;
  double dVar1;
  
  FUN_000300b0();
  dVar1 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return (uint)(0.0 < dVar1 / DAT_0004e480) * (int)(longlong)(dVar1 / DAT_0004e480);
}



/* ===== FUN_00030be0 @ 00030be0 size=380 ===== */

undefined4 FUN_00030be0(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *__s1;
  ulong uVar2;
  size_t __n;
  int iVar3;
  longlong lVar4;
  char *local_34 [2];
  
  lVar1 = 0;
  do {
    while( true ) {
      uVar2 = strtoul(param_1,local_34,0);
      __s1 = local_34[0];
      lVar4 = VectorShiftRight(CONCAT44(uVar2,uVar2),0x20);
      if (local_34[0] == param_1) {
        return 0xfffffff9;
      }
      if (*local_34[0] == '\0') {
        lVar1 = lVar1 + lVar4;
        goto LAB_00030c8c;
      }
      __n = strcspn(local_34[0]," \t");
      if (__n != 0) break;
      lVar1 = lVar4 + lVar1;
      param_1 = __s1;
    }
    iVar3 = strncasecmp(__s1,"sec",__n);
    if (iVar3 == 0) {
      lVar1 = (ulonglong)uVar2 * 1000 + lVar1;
    }
    else {
      iVar3 = strncasecmp(__s1,"min",__n);
      if (iVar3 == 0) {
        lVar1 = (ulonglong)uVar2 * 60000 + lVar1;
      }
      else {
        iVar3 = strncasecmp(__s1,"hour",__n);
        if (iVar3 == 0) {
          lVar1 = (ulonglong)uVar2 * 3600000 + lVar1;
        }
        else {
          iVar3 = strncasecmp(__s1,"day",__n);
          if (iVar3 != 0) {
            return 0xfffffff9;
          }
          lVar1 = (ulonglong)uVar2 * 86400000 + lVar1;
        }
      }
    }
    param_1 = __s1 + __n;
  } while (__s1[__n] != '\0');
LAB_00030c8c:
  *param_2 = lVar1;
  return 0;
}



/* ===== FUN_00030d5c @ 00030d5c size=528 ===== */

char * FUN_00030d5c(uint param_1,uint param_2,char *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  char *pcVar3;
  uint extraout_r3_02;
  uint uVar4;
  char *__s;
  bool bVar5;
  longlong lVar6;
  char *local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  uint uStack_2c;
  
  if (param_1 == 0 && param_2 == 0) {
    snprintf(param_3,param_4,"0msec");
    return param_3;
  }
  lVar6 = FUN_00035060(param_1,param_2,DAT_00030f70,DAT_00030f74);
  bVar5 = DAT_00030f7c <= param_2;
  if (param_2 == DAT_00030f7c) {
    bVar5 = DAT_00030f78 <= param_1;
  }
  local_50 = lVar6;
  if (bVar5 && (param_2 != DAT_00030f7c || param_1 != DAT_00030f78)) {
    FUN_00035060(param_1,param_2,DAT_00030f70,DAT_00030f74);
    param_1 = extraout_r2;
    param_2 = extraout_r3;
  }
  local_48 = FUN_00035060(param_1,param_2,3600000,0);
  bVar5 = DAT_00030f84 <= param_2;
  if (param_2 == DAT_00030f84) {
    bVar5 = DAT_00030f80 <= param_1;
  }
  if (bVar5 && (param_2 != DAT_00030f84 || param_1 != DAT_00030f80)) {
    FUN_00035060(param_1,param_2,3600000,0);
    param_1 = extraout_r2_00;
    param_2 = extraout_r3_00;
  }
  local_40 = FUN_00035060(param_1,param_2,60000,0);
  if (param_2 != 0 || 59999 < param_1) {
    FUN_00035060(param_1,param_2,60000,0);
    param_1 = extraout_r2_01;
    param_2 = extraout_r3_01;
  }
  local_38 = FUN_00035060(param_1,param_2,1000,0);
  if (param_2 != 0 || 999 < param_1) {
    FUN_00035060(param_1,param_2,1000,0);
    param_1 = extraout_r2_02;
    param_2 = extraout_r3_02;
  }
  iVar1 = DAT_00030f88;
  local_30 = param_1;
  uStack_2c = param_2;
  if (param_4 != 0) {
    local_54 = " ";
    uVar4 = 0;
    __s = param_3;
    while( true ) {
      if (lVar6 != 0) {
        pcVar3 = local_54;
        if (param_3 == __s) {
          pcVar3 = "";
        }
        iVar2 = snprintf(__s,param_4,"%s%llu%s",pcVar3,(int)lVar6,(int)((ulonglong)lVar6 >> 0x20),
                         *(undefined4 *)(iVar1 + uVar4 * 4));
        __s = __s + iVar2;
        param_4 = param_4 - iVar2;
      }
      uVar4 = uVar4 + 1;
      if (param_4 == 0 || 4 < uVar4) break;
      lVar6 = CONCAT44(*(undefined4 *)((int)&local_50 + uVar4 * 8 + 4),
                       *(undefined4 *)(&local_50 + uVar4));
    }
  }
  return param_3;
}



/* ===== FUN_00030f8c @ 00030f8c size=76 ===== */

char * FUN_00030f8c(char *param_1,char *param_2,size_t param_3)

{
  protoent *ppVar1;
  char *__format;
  
  ppVar1 = getprotobynumber((int)param_1);
  if (ppVar1 == (protoent *)0x0) {
    __format = "0x%x";
  }
  else {
    param_1 = ppVar1->p_name;
    __format = "%s";
  }
  snprintf(param_2,param_3,__format,param_1);
  return param_2;
}



/* ===== FUN_00030fd8 @ 00030fd8 size=88 ===== */

ulong FUN_00030fd8(char *param_1)

{
  protoent *ppVar1;
  ulong uVar2;
  char *local_c;
  
  ppVar1 = getprotobyname(param_1);
  if (ppVar1 == (protoent *)0x0) {
    uVar2 = strtoul(param_1,&local_c,0);
    if (uVar2 != 0xffffffff) {
      if (*local_c != '\0') {
        uVar2 = 0xfffffff4;
      }
      return uVar2;
    }
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = ppVar1->p_proto;
  }
  return uVar2;
}



/* ===== FUN_00031030 @ 00031030 size=172 ===== */

void FUN_00031030(int param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  char *__s;
  
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (0 < iVar2) {
    iVar3 = 0;
LAB_00031074:
    do {
      if (*(FILE **)(param_1 + 0x1c) == (FILE *)0x0) {
        __s = *(char **)(param_1 + 0x20);
        if (__s != (char *)0x0) {
          sVar1 = strlen(__s);
          iVar3 = iVar3 + 1;
          strncat(__s," ",(*(int *)(param_1 + 0x24) + -1) - sVar1);
          iVar2 = *(int *)(param_1 + 4);
          if (iVar2 <= iVar3) break;
          goto LAB_00031074;
        }
      }
      else {
        fputc(0x20,*(FILE **)(param_1 + 0x1c));
        iVar2 = *(int *)(param_1 + 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000310d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))(param_1,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_000310dc @ 000310dc size=44 ===== */

void FUN_000310dc(undefined4 param_1,undefined4 param_2)

{
  FUN_000302d8(param_1,param_2);
  return;
}



/* ===== FUN_00031108 @ 00031108 size=56 ===== */

void FUN_00031108(undefined4 param_1,undefined4 param_2)

{
  FUN_00031030();
  FUN_000302d8(param_1,param_2);
  return;
}



/* ===== FUN_00031140 @ 00031140 size=96 ===== */

undefined4 FUN_00031140(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = calloc(1,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xfffffffb;
  }
  else {
    *puVar1 = param_1;
    pcVar2 = strdup(param_2);
    puVar4 = *(undefined4 **)(param_3 + 4);
    uVar3 = 0;
    puVar1[1] = pcVar2;
    *puVar4 = puVar1 + 2;
    puVar1[3] = puVar4;
    *(undefined4 **)(param_3 + 4) = puVar1 + 2;
    puVar1[2] = param_3;
  }
  return uVar3;
}



/* ===== FUN_000311a0 @ 000311a0 size=80 ===== */

void FUN_000311a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)*param_1;
  piVar2 = (undefined4 *)*param_1;
  while (piVar1 = piVar3, param_1 != piVar2) {
    free((void *)piVar2[-1]);
    free(piVar2 + -2);
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  return;
}



/* ===== FUN_000311f0 @ 000311f0 size=156 ===== */

char * FUN_000311f0(int param_1,char *param_2,size_t param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_5 == 0) {
LAB_0003124c:
    snprintf(param_2,param_3,"0x%x",param_1);
    return param_2;
  }
  if (param_4[1] != param_1 >> 0x1f || *param_4 != param_1) {
    iVar3 = 0;
    piVar2 = param_4;
    do {
      iVar3 = iVar3 + 1;
      param_4 = piVar2 + 4;
      if (param_5 == iVar3) goto LAB_0003124c;
      piVar1 = piVar2 + 5;
      piVar2 = param_4;
    } while (*piVar1 != param_1 >> 0x1f || *param_4 != param_1);
  }
  snprintf(param_2,param_3,"%s",param_4[2]);
  return param_2;
}



/* ===== FUN_0003128c @ 0003128c size=32 ===== */

void FUN_0003128c(void)

{
  FUN_000311f0();
  return;
}



/* ===== FUN_000312b0 @ 000312b0 size=32 ===== */

void FUN_000312b0(void)

{
  FUN_000311f0();
  return;
}



/* ===== FUN_000312d4 @ 000312d4 size=32 ===== */

void FUN_000312d4(void)

{
  FUN_000311f0();
  return;
}



/* ===== FUN_0003137c @ 0003137c size=184 ===== */

char * FUN_0003137c(uint param_1,char *param_2,size_t param_3,int param_4,int param_5)

{
  size_t sVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  memset(param_2,0,param_3);
  if (param_5 != 0) {
    puVar2 = (undefined4 *)(param_4 + 8);
    puVar4 = puVar2 + param_5 * 4;
    uVar3 = param_1;
    do {
      while ((puVar2[-2] & uVar3) != 0 || (puVar2[-1] & (int)uVar3 >> 0x1f) != 0) {
        uVar3 = uVar3 & ~puVar2[-2];
        sVar1 = strlen(param_2);
        strncat(param_2,(char *)*puVar2,(param_3 - 1) - sVar1);
        if ((param_1 & uVar3) == 0) break;
        puVar2 = puVar2 + 4;
        sVar1 = strlen(param_2);
        strncat(param_2,",",(param_3 - 1) - sVar1);
        if (puVar2 == puVar4) {
          return param_2;
        }
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar4);
  }
  return param_2;
}



/* ===== FUN_000315a4 @ 000315a4 size=188 ===== */

uint FUN_000315a4(char *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  size_t __n;
  uint uVar6;
  char *__s;
  
  uVar6 = 0;
  do {
    if (*param_1 == ' ') {
      param_1 = param_1 + 1;
    }
    pcVar1 = strchr(param_1,0x2c);
    if (pcVar1 == (char *)0x0) {
      __n = strlen(param_1);
      if (param_3 == 0) {
        return uVar6;
      }
LAB_000315e8:
      uVar5 = 0;
      puVar4 = param_2;
      do {
        __s = (char *)puVar4[2];
        uVar5 = uVar5 + 1;
        sVar2 = strlen(__s);
        if ((sVar2 == __n) && (iVar3 = strncasecmp(__s,param_1,__n), iVar3 == 0)) {
          uVar6 = uVar6 | *puVar4;
        }
        puVar4 = puVar4 + 4;
      } while (uVar5 < param_3);
      if (pcVar1 == (char *)0x0) {
        return uVar6;
      }
    }
    else {
      __n = (int)pcVar1 - (int)param_1;
      if (param_3 != 0) goto LAB_000315e8;
    }
    param_1 = pcVar1 + 1;
  } while( true );
}



/* ===== FUN_0003171c @ 0003171c size=84 ===== */

size_t * FUN_0003171c(size_t param_1)

{
  size_t *__ptr;
  void *pvVar1;
  
  __ptr = calloc(1,8);
  if (__ptr != (size_t *)0x0) {
    pvVar1 = calloc(param_1,4);
    __ptr[1] = (size_t)pvVar1;
    if (pvVar1 == (void *)0x0) {
      free(__ptr);
      __ptr = (size_t *)0x0;
    }
    else {
      *__ptr = param_1;
    }
  }
  return __ptr;
}



/* ===== FUN_00031770 @ 00031770 size=104 ===== */

void FUN_00031770(int *param_1)

{
  void *pvVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  
  iVar2 = *param_1;
  pvVar1 = (void *)param_1[1];
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      __ptr = *(void **)((int)pvVar1 + iVar3 * 4);
      if (__ptr != (void *)0x0) {
        do {
          pvVar1 = *(void **)((int)__ptr + 0xc);
          FUN_0002ea3c(*(undefined4 *)((int)__ptr + 8));
          free(__ptr);
          __ptr = pvVar1;
        } while (pvVar1 != (void *)0x0);
        pvVar1 = (void *)param_1[1];
        iVar2 = *param_1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  free(pvVar1);
  free(param_1);
  return;
}



/* ===== FUN_000317d8 @ 000317d8 size=112 ===== */

undefined4 FUN_000317d8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_14 [2];
  
  FUN_0002ee20(param_2,local_14,*param_1);
  iVar2 = *(int *)(param_1[1] + local_14[0] * 4);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_0002ebd4(*(undefined4 *)(iVar2 + 8),param_2);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  return *(undefined4 *)(iVar2 + 8);
}



/* ===== FUN_00031848 @ 00031848 size=372 ===== */

undefined4 FUN_00031848(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_1c [2];
  
  FUN_0002ee20(param_2,local_1c,*param_1);
  iVar4 = *(int *)(param_1[1] + local_1c[0] * 4);
  while( true ) {
    if (iVar4 == 0) {
      if (4 < DAT_0004e88c) {
        piVar1 = __errno_location();
        iVar4 = *piVar1;
        fprintf(stderr,
                "DBG<5>%20s:%-4u %s: adding cache entry of obj %p in table %p, with hash 0x%x\n",
                "lib/hashtable.c",0x86,"nl_hash_table_add",param_2,param_1,local_1c[0]);
        *piVar1 = iVar4;
      }
      piVar1 = malloc(0x10);
      if (piVar1 == (int *)0x0) {
        uVar2 = 0xfffffffb;
      }
      else {
        FUN_0002e9b8(param_2);
        iVar3 = param_1[1];
        piVar1[1] = 4;
        uVar2 = 0;
        piVar1[2] = param_2;
        iVar4 = *(int *)(iVar3 + local_1c[0] * 4);
        *piVar1 = local_1c[0];
        piVar1[3] = iVar4;
        *(int **)(iVar3 + local_1c[0] * 4) = piVar1;
      }
      return uVar2;
    }
    iVar3 = FUN_0002ebd4(*(undefined4 *)(iVar4 + 8),param_2);
    if (iVar3 != 0) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  if (DAT_0004e88c < 2) {
    return 0xfffffffa;
  }
  piVar1 = __errno_location();
  iVar4 = *piVar1;
  fprintf(stderr,"DBG<2>%20s:%-4u %s: Warning: Add to hashtable found duplicate...\n",
          "lib/hashtable.c",0x7f,"nl_hash_table_add");
  *piVar1 = iVar4;
  return 0xfffffffa;
}



/* ===== FUN_000319bc @ 000319bc size=268 ===== */

undefined4 FUN_000319bc(undefined4 *param_1,undefined4 param_2)

{
  void *__ptr;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int local_24 [2];
  
  FUN_0002ee20(param_2,local_24,*param_1);
  pvVar4 = *(void **)(param_1[1] + local_24[0] * 4);
  pvVar1 = pvVar4;
  while( true ) {
    __ptr = pvVar4;
    if (__ptr == (void *)0x0) {
      return 0xfffffff4;
    }
    iVar2 = FUN_0002ebd4(*(undefined4 *)((int)__ptr + 8),param_2);
    if (iVar2 != 0) break;
    pvVar4 = *(void **)((int)__ptr + 0xc);
    pvVar1 = __ptr;
  }
  FUN_0002ea3c(param_2);
  if (4 < DAT_0004e88c) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    fprintf(stderr,
            "DBG<5>%20s:%-4u %s: deleting cache entry of obj %p in table %p, with hash 0x%x\n",
            "lib/hashtable.c",0xae,DAT_00031ac8,param_2,param_1,local_24[0]);
    *piVar3 = iVar2;
  }
  if (*(void **)(param_1[1] + local_24[0] * 4) == __ptr) {
    *(undefined4 *)(param_1[1] + local_24[0] * 4) = *(undefined4 *)((int)__ptr + 0xc);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)__ptr + 0xc);
  }
  free(__ptr);
  return 0;
}



/* ===== FUN_00031ad0 @ 00031ad0 size=108 ===== */

void FUN_00031ad0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x10) == 1) {
    free(param_1);
    return;
  }
  fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/addr.c",0xa3,"addr_destroy");
                    /* WARNING: Subroutine does not return */
  __assert("0","lib/addr.c",0xa3);
}



/* ===== FUN_00031b3c @ 00031b3c size=40 ===== */

void FUN_00031b3c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,param_1 + 0x14);
  if (pvVar1 != (void *)0x0) {
    *(int *)((int)pvVar1 + 4) = param_1;
    *(undefined4 *)((int)pvVar1 + 0x10) = 1;
  }
  return;
}



/* ===== FUN_00031b64 @ 00031b64 size=112 ===== */

int * FUN_00031b64(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = calloc(1,param_3 + 0x14);
  if (piVar1 != (int *)0x0) {
    piVar1[4] = 1;
    if (param_1 == 0x1c) {
      iVar2 = 0x14;
    }
    else {
      iVar2 = param_3 << 3;
    }
    piVar1[1] = param_3;
    *piVar1 = param_1;
    piVar1[2] = param_3;
    piVar1[3] = iVar2;
    if (param_3 != 0) {
      memcpy(piVar1 + 5,param_2,param_3);
      return piVar1;
    }
  }
  return piVar1;
}



/* ===== FUN_00031bd4 @ 00031bd4 size=48 ===== */

void FUN_00031bd4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00027758();
  uVar2 = FUN_00027760(param_1);
  FUN_00031b64(param_2,uVar1,uVar2);
  return;
}



/* ===== FUN_00031cb0 @ 00031cb0 size=48 ===== */

int FUN_00031cb0(int param_1,int param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 0x14),(void *)(param_2 + 0x14),param_3);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
  }
  return iVar1;
}



/* ===== FUN_00031fdc @ 00031fdc size=220 ===== */

undefined4 FUN_00031fdc(int *param_1,undefined2 *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    if (0xf < *param_3) {
      if (param_1[2] == 4) {
        *(int *)(param_2 + 2) = param_1[5];
      }
      else {
        if (param_1[2] != 0) {
          return 0xfffffff9;
        }
        *(undefined4 *)(param_2 + 2) = 0;
      }
      *param_2 = (short)*param_1;
      *param_3 = 0x10;
      return 0;
    }
  }
  else if ((*param_1 == 10) && (0x1b < *param_3)) {
    if (param_1[2] == 0x10) {
      iVar1 = param_1[6];
      iVar3 = param_1[7];
      iVar2 = param_1[8];
      *(int *)(param_2 + 4) = param_1[5];
      *(int *)(param_2 + 6) = iVar1;
      *(int *)(param_2 + 8) = iVar3;
      *(int *)(param_2 + 10) = iVar2;
    }
    else {
      if (param_1[2] != 0) {
        return 0xfffffff9;
      }
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
      ;
    }
    *param_2 = (short)*param_1;
    *param_3 = 0x1c;
    return 0;
  }
  return 0xfffffff9;
}



/* ===== FUN_000320b8 @ 000320b8 size=112 ===== */

void FUN_000320b8(undefined4 param_1,char *param_2,socklen_t param_3)

{
  int iVar1;
  socklen_t local_30;
  sockaddr asStack_2c [2];
  
  local_30 = 0x1c;
  iVar1 = FUN_00031fdc(param_1,asStack_2c,&local_30);
  if ((-1 < iVar1) &&
     (iVar1 = getnameinfo(asStack_2c,local_30,param_2,param_3,(char *)0x0,0,8), iVar1 < 0)) {
    FUN_0002ac78(iVar1);
  }
  return;
}



/* ===== FUN_00032138 @ 00032138 size=88 ===== */

undefined4 FUN_00032138(int param_1,void *param_2,uint param_3)

{
  void *__dest;
  
  if (*(uint *)(param_1 + 4) < param_3) {
    return 0xfffffff8;
  }
  *(uint *)(param_1 + 8) = param_3;
  __dest = memset((void *)(param_1 + 0x14),0,*(uint *)(param_1 + 4));
  if (param_3 == 0) {
    return 0;
  }
  memcpy(__dest,param_2,param_3);
  return 0;
}



/* ===== FUN_00032190 @ 00032190 size=1440 ===== */

undefined4 FUN_00032190(char *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *__s;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  size_t __size;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  byte *local_12c;
  undefined2 local_128;
  undefined1 local_123;
  
  __s = (byte *)strdup(param_1);
  if (__s == (byte *)0x0) {
LAB_00032418:
    uVar9 = 0xfffffffb;
  }
  else {
    if (param_2 == 0x1c) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar10 = strchr((char *)__s,0x2f);
      if (pcVar10 != (char *)0x0) {
        *pcVar10 = '\0';
      }
    }
    iVar2 = strcasecmp((char *)__s,"none");
    if (iVar2 == 0) goto switchD_00032200_caseD_1a;
    iVar2 = strcasecmp((char *)__s,"default");
    if (((iVar2 == 0) || (iVar2 = strcasecmp((char *)__s,"all"), iVar2 == 0)) ||
       (iVar2 = strcasecmp((char *)__s,"any"), iVar2 == 0)) {
      switch(param_2) {
      case 0:
      case 2:
        param_2 = 2;
        break;
      default:
        uVar9 = 0xfffffff5;
        goto LAB_000322d4;
      case 10:
        puVar4 = calloc(1,0x14);
        if (puVar4 == (uint *)0x0) goto LAB_00032418;
        puVar4[4] = 1;
        *puVar4 = 10;
        puVar4[1] = 0;
        goto joined_r0x000323fc;
      case 0x1a:
        break;
      }
switchD_00032200_caseD_1a:
      puVar4 = calloc(1,0x14);
      if (puVar4 == (uint *)0x0) goto LAB_00032418;
      *puVar4 = param_2;
      puVar4[4] = 1;
      puVar4[1] = 0;
joined_r0x000323fc:
      if (pcVar10 == (char *)0x0) {
        uVar3 = 0;
LAB_00032404:
        puVar4[3] = uVar3 << 3;
      }
      else {
LAB_000322a8:
        uVar3 = strtol(pcVar10 + 1,(char **)&local_12c,0);
        if (local_12c == (byte *)(pcVar10 + 1)) {
          uVar9 = 0xfffffff9;
          FUN_00031ad0(puVar4);
          goto LAB_000322d4;
        }
        puVar4[3] = uVar3;
      }
    }
    else {
      if ((param_2 & 0xfffffffd) != 0) {
        if (param_2 == 10 || param_2 == 0) {
          iVar2 = inet_pton(10,(char *)__s,&local_128);
          if (0 < iVar2) {
            __size = 0x24;
            uVar3 = 0x10;
            uVar11 = 0;
            uVar13 = 10;
            goto LAB_0003238c;
          }
          if (param_2 != 10) goto LAB_00032440;
        }
        else if (param_2 == 0x1a) {
          pcVar5 = strchr((char *)__s,0x3a);
          if ((pcVar5 != (char *)0x0) &&
             (iVar2 = sscanf((char *)__s,"%02x:%02x:%02x:%02x:%02x:%02x",local_140,local_13c,
                             local_138,local_134,local_130,&local_12c), iVar2 == 6)) {
LAB_000326d8:
            __size = 0x1a;
            uVar3 = 6;
            uVar13 = 0x1a;
            uVar11 = 0;
            local_128 = CONCAT11(local_13c[0],local_140[0]);
            local_123 = SUB41(local_12c,0);
            goto LAB_0003238c;
          }
        }
        else {
LAB_00032344:
          if (param_2 == 0 || param_2 == 0xc) {
LAB_000324a8:
            pcVar5 = strchr((char *)__s,0x2e);
            if ((pcVar5 == (char *)0x0) &&
               (pcVar5 = strchr((char *)__s,0x2c), pcVar5 == (char *)0x0)) {
              if (param_2 == 0x1c) {
LAB_00032360:
                uVar3 = FUN_00033210(0x1c,__s,&local_128,0x100);
                if ((int)uVar3 < 1) {
LAB_0003267c:
                  uVar9 = 0xfffffff9;
                  goto LAB_000322d4;
                }
                __size = uVar3 + 0x14;
                uVar11 = 0x14;
                uVar13 = 0x1c;
                goto LAB_0003238c;
              }
              if (param_2 == 0) {
LAB_000325fc:
                pcVar5 = strchr((char *)__s,0x3a);
                if (pcVar5 != (char *)0x0) {
                  pbVar14 = __s;
                  puVar12 = &local_128;
                  uVar3 = 0;
                  pbVar1 = local_12c;
                  do {
                    local_12c = pbVar1;
                    uVar11 = uVar3;
                    uVar3 = uVar11 + 1;
                    lVar7 = strtol((char *)pbVar14,(char **)&local_12c,0x10);
                    bVar15 = local_12c == pbVar14;
                    pbVar14 = local_12c + 1;
                    if ((bVar15) || (0xff < lVar7 || 0xff < uVar11)) goto LAB_0003267c;
                    *(char *)puVar12 = (char)lVar7;
                    puVar12 = (undefined2 *)((int)puVar12 + 1);
                    pbVar1 = pbVar14;
                  } while (*local_12c != 0);
                  __size = uVar11 + 0x15;
                  uVar11 = 0;
                  uVar13 = 0;
                  goto LAB_0003238c;
                }
              }
            }
            else {
              if ((*__s != 0) && (uVar3 = *__s - 0x30, uVar3 < 10)) {
                uVar11 = 0;
                iVar2 = 0;
                pbVar14 = __s;
                do {
                  iVar6 = iVar2;
                  pbVar14 = pbVar14 + 1;
                  iVar2 = iVar6 + 1;
                  uVar11 = uVar3 + uVar11 * 10;
                  uVar3 = *pbVar14 - 0x30;
                  uVar11 = uVar11 & 0xffff;
                  if (*pbVar14 == 0) break;
                } while (uVar3 < 10);
                if ((uVar11 < 0x40) && ((__s[iVar2] & 0xfd) == 0x2c)) {
                  iVar6 = iVar6 + 2;
                  pbVar14 = __s + iVar6;
                  if ((__s[iVar6] != 0) && (uVar3 = __s[iVar6] - 0x30, uVar3 < 10)) {
                    uVar13 = 0;
                    do {
                      pbVar14 = pbVar14 + 1;
                      uVar8 = uVar3 + uVar13 * 10;
                      uVar3 = *pbVar14 - 0x30;
                      uVar13 = uVar8 & 0xffff;
                      if (*pbVar14 == 0) break;
                    } while (uVar3 < 10);
                    if (uVar13 < 0x400) {
                      uVar3 = 2;
                      local_128 = (ushort)uVar8 | (ushort)(uVar11 << 10);
                      __size = 0x16;
                      uVar11 = 0;
                      uVar13 = 0xc;
                      goto LAB_0003238c;
                    }
                  }
                }
              }
              if (param_2 != 0xc) {
                if (param_2 != 0x1c) goto LAB_000325fc;
                goto LAB_00032360;
              }
            }
          }
          else if (param_2 == 0x1c) goto LAB_00032360;
        }
LAB_00032744:
        uVar9 = 0xffffffed;
        goto LAB_000322d4;
      }
      iVar2 = inet_pton(2,(char *)__s,&local_128);
      uVar11 = 0;
      if (iVar2 < 1) {
        if (param_2 != 2) {
          iVar2 = inet_pton(10,(char *)__s,&local_128);
          if (0 < iVar2) {
            __size = 0x24;
            uVar3 = 0x10;
            uVar13 = 10;
            goto LAB_0003238c;
          }
LAB_00032440:
          pcVar5 = strchr((char *)__s,0x3a);
          if (pcVar5 == (char *)0x0) goto LAB_00032344;
          iVar2 = sscanf((char *)__s,"%02x:%02x:%02x:%02x:%02x:%02x",local_140,local_13c,local_138,
                         local_134,local_130,&local_12c);
          if (iVar2 == 6) goto LAB_000326d8;
          if (param_2 != 0x1a) goto LAB_000324a8;
        }
        goto LAB_00032744;
      }
      __size = 0x18;
      uVar3 = 4;
      uVar13 = 2;
LAB_0003238c:
      puVar4 = calloc(1,__size);
      if (puVar4 == (uint *)0x0) goto LAB_00032418;
      puVar4[1] = uVar3;
      *puVar4 = uVar13;
      puVar4[4] = 1;
      FUN_00032138(puVar4,&local_128,uVar3);
      if (pcVar10 != (char *)0x0) goto LAB_000322a8;
      if (uVar11 == 0) goto LAB_00032404;
      puVar4[3] = uVar11;
    }
    *param_3 = puVar4;
    uVar9 = 0;
  }
LAB_000322d4:
  free(__s);
  return uVar9;
}



/* ===== FUN_0003279c @ 0003279c size=8 ===== */

int FUN_0003279c(int param_1)

{
  return param_1 + 0x14;
}



/* ===== FUN_000327a4 @ 000327a4 size=8 ===== */

undefined4 FUN_000327a4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_000327bc @ 000327bc size=820 ===== */

char * FUN_000327bc(int *param_1,char *param_2,socklen_t param_3)

{
  ushort uVar1;
  size_t sVar2;
  socklen_t sVar3;
  char cVar4;
  int iVar5;
  socklen_t sVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  char acStack_30 [16];
  
  if (param_1 == (int *)0x0) {
    snprintf(param_2,param_3,"none");
    return param_2;
  }
  iVar5 = param_1[2];
  if (iVar5 == 0) {
    snprintf(param_2,param_3,"none");
    goto LAB_000327f4;
  }
  switch(*param_1) {
  case 2:
    inet_ntop(2,param_1 + 5,param_2,param_3);
    break;
  default:
    snprintf(param_2,param_3,"%02x",(uint)*(byte *)(param_1 + 5));
    if (1 < (uint)param_1[2]) {
      piVar8 = param_1 + 5;
      do {
        snprintf(acStack_30,0x10,":%02x",(uint)*(byte *)((int)piVar8 + 1));
        sVar2 = strlen(param_2);
        strncat(param_2,acStack_30,(param_3 - 1) - sVar2);
        uVar7 = (int)piVar8 + (-0x12 - (int)param_1);
        piVar8 = (int *)((int)piVar8 + 1);
      } while (uVar7 < (uint)param_1[2]);
    }
    break;
  case 10:
    inet_ntop(10,param_1 + 5,param_2,param_3);
    break;
  case 0xc:
    if ((iVar5 == 2) && (param_3 != 0)) {
      uVar1 = *(ushort *)(param_1 + 5);
      uVar7 = (uint)(uVar1 >> 10);
      if (uVar7 < 10) {
        sVar6 = 1;
        iVar5 = 0;
        pcVar9 = param_2;
      }
      else {
        *param_2 = (char)(uVar7 / 10) + '0';
        if (param_3 == 1) break;
        uVar7 = uVar7 % 10;
        iVar5 = 1;
        sVar6 = 2;
        pcVar9 = param_2 + 1;
      }
      *pcVar9 = (char)uVar7 + '0';
      if (param_3 != sVar6) {
        sVar3 = iVar5 + 2;
        pcVar9 = param_2 + sVar3;
        param_2[sVar6] = '.';
        if (param_3 != sVar3) {
          uVar7 = uVar1 & 0x3ff;
          if (uVar7 < 1000) {
            if (99 < uVar7) {
              cVar4 = (char)((uint)((int)((ulonglong)uVar7 * 0x51eb851f >> 0x20) << 0xb) >> 0x10);
              goto LAB_000329b0;
            }
            if (9 < uVar7) {
              cVar4 = (char)((uint)((int)((ulonglong)uVar7 * 0xcccccccd >> 0x20) << 0xd) >> 0x10);
              goto LAB_000329f4;
            }
LAB_00032a28:
            *pcVar9 = (char)uVar7 + '0';
            if (param_3 != sVar3 + 1) {
              param_2[sVar3 + 1] = '\0';
            }
          }
          else {
            sVar3 = iVar5 + 3;
            *pcVar9 = '1';
            if (param_3 != sVar3) {
              pcVar9 = param_2 + sVar3;
              uVar7 = uVar7 % 1000;
              cVar4 = (char)((uint)((int)((ulonglong)uVar7 * 0x51eb851f >> 0x20) << 0xb) >> 0x10);
LAB_000329b0:
              sVar3 = sVar3 + 1;
              *pcVar9 = cVar4 + '0';
              if (param_3 != sVar3) {
                pcVar9 = param_2 + sVar3;
                uVar7 = uVar7 % 100;
                cVar4 = (char)((uint)((int)((ulonglong)uVar7 * 0xcccccccd >> 0x20) << 0xd) >> 0x10);
LAB_000329f4:
                sVar3 = sVar3 + 1;
                *pcVar9 = cVar4 + '0';
                if (param_3 != sVar3) {
                  pcVar9 = param_2 + sVar3;
                  uVar7 = uVar7 % 10;
                  goto LAB_00032a28;
                }
              }
            }
          }
        }
      }
      break;
    }
    goto LAB_00032804;
  case 0x1c:
    FUN_00033168(0x1c,param_1 + 5,param_2,param_3);
  }
LAB_000327f4:
  if (*param_1 != 0x1c) {
    iVar5 = param_1[2];
LAB_00032804:
    if (param_1[3] != iVar5 * 8) {
      snprintf(acStack_30,0x10,"/%u");
      sVar2 = strlen(param_2);
      strncat(param_2,acStack_30,(param_3 - 1) - sVar2);
    }
  }
  return param_2;
}



/* ===== FUN_00032b5c @ 00032b5c size=176 ===== */

undefined4 FUN_00032b5c(int *param_1,addrinfo **param_2)

{
  int iVar1;
  undefined4 uVar2;
  addrinfo local_5c;
  char acStack_3c [52];
  
  local_5c.ai_protocol = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_5c.ai_addrlen = *(socklen_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_5c.ai_addr = *(sockaddr **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c.ai_family = *param_1;
  local_5c.ai_socktype = 0;
  local_5c.ai_canonname = (char *)0x0;
  local_5c.ai_flags = 4;
  local_5c.ai_next = (addrinfo *)local_5c.ai_protocol;
  FUN_000327bc(param_1,acStack_3c,0x33);
  iVar1 = getaddrinfo(acStack_3c,(char *)0x0,&local_5c,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    switch(iVar1) {
    case -10:
      uVar2 = 0xfffffffb;
      break;
    case -9:
    case -6:
      uVar2 = 0xfffffff5;
      break;
    case -8:
      uVar2 = 0xfffffff6;
      break;
    case -7:
      uVar2 = 0xfffffffd;
      break;
    case -5:
    case -4:
      uVar2 = 0xffffffed;
      break;
    case -3:
      uVar2 = 0xfffffffc;
      break;
    case -2:
      uVar2 = 0xfffffff4;
      break;
    case -1:
      uVar2 = 0xfffffff9;
      break;
    default:
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00032c34 @ 00032c34 size=32 ===== */

void FUN_00032c34(void)

{
  FUN_000311f0();
  return;
}



/* ===== FUN_00033168 @ 00033168 size=168 ===== */

char * FUN_00033168(int param_1,int param_2,char *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  char *__s;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = param_4;
  piVar2 = __errno_location();
  if (param_1 != 0x1c) {
    *piVar2 = 0x16;
    return (char *)0x0;
  }
  puVar5 = (uint *)(param_2 + -4);
  *piVar2 = 0;
  __s = param_3;
  while( true ) {
    puVar5 = puVar5 + 1;
    uVar4 = *puVar5;
    uVar1 = (uVar4 >> 0x10 & 0xff) << 8;
    uVar4 = snprintf(__s,param_4,"%u",(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | uVar1) >> 0xc,
                     uVar6);
    pcVar3 = __s + uVar4;
    if (param_4 <= uVar4) {
      *piVar2 = 7;
      return (char *)0x0;
    }
    if ((uVar1 & 0x100) != 0) break;
    param_4 = param_4 - uVar4;
    __s = pcVar3;
    if (param_4 != 0) {
      __s = pcVar3 + 1;
      *pcVar3 = '/';
      param_4 = param_4 - 1;
    }
  }
  return param_3;
}



/* ===== FUN_00033210 @ 00033210 size=216 ===== */

int FUN_00033210(int param_1,char *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  char *local_24 [2];
  
  param_4 = param_4 >> 2;
  piVar1 = __errno_location();
  if (param_1 == 0x1c) {
    iVar4 = 0;
    puVar6 = (uint *)0x0;
    if (param_4 != 0) {
      puVar6 = param_3 + param_4;
    }
    *piVar1 = 0;
    if (param_4 != 0) {
      while( true ) {
        uVar2 = strtoul(param_2,local_24,0);
        uVar3 = (uVar2 & 0xf) << 0x14 | ((uVar2 & 0xfffff) >> 4 & 0xff) << 8 |
                (uVar2 & 0xfffff) >> 0xc;
        if ((0xfffff < uVar2) || (bVar7 = local_24[0] == param_2, param_2 = local_24[0] + 1, bVar7))
        break;
        puVar5 = param_3 + 1;
        *param_3 = uVar3;
        if (*local_24[0] == '\0') {
          *param_3 = uVar3 | 0x10000;
          return (iVar4 + 1) * 4;
        }
        iVar4 = iVar4 + 1;
        if ((*local_24[0] != '/') || (param_3 = puVar5, puVar6 == puVar5)) break;
      }
    }
    iVar4 = 0;
  }
  else {
    iVar4 = -1;
    *piVar1 = 0x61;
  }
  return iVar4;
}



/* ===== FUN_000332e8 @ 000332e8 size=280 ===== */

int FUN_000332e8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  int local_20;
  int local_1c;
  
  if (param_2 == 0) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/genl/ctrl.c",0x46,"parse_mcast_grps");
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/genl/ctrl.c",0x46);
  }
  uVar1 = FUN_00027758(param_2);
  local_28 = FUN_00027760(param_2);
  while( true ) {
    iVar5 = FUN_0002776c(uVar1,local_28);
    iVar2 = 0;
    if ((iVar5 == 0) || (iVar2 = FUN_00028394(auStack_24,2,uVar1,&DAT_0004e4bc), iVar2 < 0)) {
      return iVar2;
    }
    if (local_1c == 0) {
      return -0xe;
    }
    uVar3 = FUN_00027e90();
    if (local_20 == 0) break;
    uVar4 = FUN_00027f80();
    iVar2 = FUN_000340b0(param_1,uVar3,uVar4);
    if (iVar2 < 0) {
      return iVar2;
    }
    uVar1 = FUN_00027798(uVar1,&local_28);
  }
  return -0xe;
}



/* ===== FUN_00033400 @ 00033400 size=472 ===== */

int FUN_00033400(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  int local_28;
  int local_24;
  
  iVar2 = FUN_00033edc();
  if (iVar2 == 0) {
    iVar7 = -5;
  }
  else if ((*(int *)(*(int *)(param_3 + 0x10) + 8) == 0) ||
          (*(int *)(*(int *)(param_3 + 0x10) + 4) == 0)) {
LAB_000335c8:
    iVar7 = -0xe;
  }
  else {
    *(uint *)(iVar2 + 0x14) = (uint)*(ushort *)(*(int *)(param_3 + 4) + 4);
    uVar3 = FUN_00027e40();
    FUN_00033f10(iVar2,uVar3);
    uVar3 = FUN_00027f80(*(undefined4 *)(*(int *)(param_3 + 0x10) + 8));
    FUN_00033f54(iVar2,uVar3);
    iVar7 = *(int *)(param_3 + 0x10);
    if (*(int *)(iVar7 + 0xc) != 0) {
      uVar1 = FUN_00027e90();
      FUN_00033fa0(iVar2,uVar1);
      iVar7 = *(int *)(param_3 + 0x10);
    }
    if (*(int *)(iVar7 + 0x10) != 0) {
      uVar3 = FUN_00027e90();
      FUN_00033fe4(iVar2,uVar3);
      iVar7 = *(int *)(param_3 + 0x10);
    }
    if (*(int *)(iVar7 + 0x14) != 0) {
      uVar3 = FUN_00027e90();
      FUN_00034028(iVar2,uVar3);
      iVar7 = *(int *)(param_3 + 0x10);
    }
    iVar8 = *(int *)(iVar7 + 0x18);
    if (iVar8 != 0) {
      uVar4 = FUN_00027758(iVar8);
      local_30 = FUN_00027760(iVar8);
      uVar3 = DAT_000335d8;
      while( true ) {
        iVar7 = FUN_0002776c(uVar4,local_30);
        if (iVar7 == 0) break;
        iVar7 = FUN_00028394(auStack_2c,2,uVar4,uVar3);
        if (iVar7 < 0) goto LAB_000335b4;
        if (local_28 == 0) goto LAB_000335c8;
        uVar5 = FUN_00027e90();
        uVar6 = 0;
        if (local_24 != 0) {
          uVar6 = FUN_00027e90(local_24);
        }
        iVar7 = FUN_00034048(iVar2,uVar5,uVar6);
        if (iVar7 < 0) goto LAB_000335b4;
        uVar4 = FUN_00027798(uVar4,&local_30);
      }
      iVar7 = *(int *)(param_3 + 0x10);
    }
    if ((*(int *)(iVar7 + 0x1c) == 0) || (iVar7 = FUN_000332e8(iVar2), -1 < iVar7)) {
      iVar7 = (*(code *)*param_4)(iVar2,param_4);
    }
  }
LAB_000335b4:
  thunk_FUN_0002ea3c(iVar2);
  return iVar7;
}



/* ===== FUN_000335dc @ 000335dc size=44 ===== */

void FUN_000335dc(undefined4 param_1,undefined4 param_2)

{
  FUN_000341a4(param_2,0x10,3,1,0x300);
  return;
}



/* ===== FUN_00033608 @ 00033608 size=128 ===== */

undefined4 FUN_00033608(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  int local_24;
  int local_c;
  
  uVar1 = FUN_0002c044();
  iVar2 = FUN_0003427c(uVar1,0,auStack_28,7,DAT_00033688);
  if (iVar2 == 0) {
    if (local_24 != 0) {
      uVar1 = FUN_00027e40();
      FUN_00033f10(param_2,uVar1);
    }
    if ((local_c == 0) || (iVar2 = FUN_000332e8(param_2), -1 < iVar2)) {
      return 2;
    }
  }
  return 1;
}



/* ===== FUN_0003368c @ 0003368c size=428 ===== */

int FUN_0003368c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00033edc();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00033f54(iVar1,param_2);
  iVar2 = FUN_0002bbd0();
  if (iVar2 != 0) {
    iVar3 = FUN_0002fcbc(param_1);
    if (iVar3 != 0) {
      iVar4 = FUN_0002b10c();
      FUN_0002b150(iVar3);
      if (iVar4 != 0) {
        iVar3 = FUN_00034344(iVar2,0,0,0x10,0,0,3,1);
        if (iVar3 == 0) {
          fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/genl/ctrl.c",0x109,DAT_00033838);
                    /* WARNING: Subroutine does not return */
          __assert("0","lib/genl/ctrl.c",0x109);
        }
        iVar3 = FUN_00027f50(iVar2,2,param_2);
        if (((((-1 < iVar3) && (iVar3 = FUN_0002b1d0(iVar4,0,3,FUN_00033608,iVar1), -1 < iVar3)) &&
             (iVar3 = thunk_FUN_0002d84c(param_1,iVar2), -1 < iVar3)) &&
            ((iVar3 = FUN_0002e3d4(param_1,iVar4), -1 < iVar3 &&
             (((*(uint *)(param_1 + 0x28) & 0x20) != 0 ||
              (iVar3 = FUN_0002e3f8(param_1), -1 < iVar3)))))) &&
           (iVar3 = FUN_00033eec(iVar1), iVar3 != 0)) {
          FUN_0002c0d0(iVar2);
          FUN_0002b150(iVar4);
          return iVar1;
        }
        FUN_0002b150(iVar4);
      }
    }
    FUN_0002c0d0(iVar2);
  }
  thunk_FUN_0002ea3c(iVar1);
  return 0;
}



/* ===== FUN_0003383c @ 0003383c size=104 ===== */

int FUN_0003383c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002880c(DAT_0003384c);
  if (iVar1 == 0) {
    iVar2 = -5;
  }
  else if ((param_1 == 0) || (iVar2 = FUN_00029260(param_1,iVar1), -1 < iVar2)) {
    iVar2 = 0;
    *param_2 = iVar1;
  }
  else {
    FUN_00028eac(iVar1);
  }
  return iVar2;
}



/* ===== FUN_00033918 @ 00033918 size=196 ===== */

int FUN_00033918(int *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[8] != DAT_000339dc) {
    fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/genl/ctrl.c",0x189,DAT_000339e0);
                    /* WARNING: Subroutine does not return */
    __assert("0","lib/genl/ctrl.c",0x189);
  }
  piVar2 = (int *)*param_1;
  while( true ) {
    if (param_1 == piVar2) {
      return 0;
    }
    iVar1 = strcmp(param_2,(char *)((int)piVar2 + 0x1e));
    if (iVar1 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  FUN_0002e9b8(piVar2 + -3);
  return (int)(piVar2 + -3);
}



/* ===== FUN_000339e4 @ 000339e4 size=48 ===== */

undefined4 FUN_000339e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0003368c();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_00033eec();
    thunk_FUN_0002ea3c(iVar1);
  }
  return uVar2;
}



/* ===== FUN_00033aa0 @ 00033aa0 size=536 ===== */

uint FUN_00033aa0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_38;
  
  local_38 = param_3 & 1;
  if (local_38 != 0) {
    local_38 = (*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 1;
    if ((local_38 == 0) &&
       (local_38 = *(uint *)(param_1 + 0x20) & *(uint *)(param_2 + 0x20) & 1, local_38 != 0)) {
      local_38 = (uint)(*(short *)(param_1 + 0x28) != *(short *)(param_2 + 0x28));
    }
  }
  if ((param_3 & 4) != 0) {
    if ((((*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 4) != 0) ||
       (((*(uint *)(param_1 + 0x20) & *(uint *)(param_2 + 0x20) & 4) != 0 &&
        (*(int *)(param_1 + 0x3c) != *(int *)(param_2 + 0x3c))))) {
      local_38 = local_38 | 4;
    }
  }
  if ((param_3 & 8) != 0) {
    if ((((*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 8) != 0) ||
       (((*(uint *)(param_1 + 0x20) & *(uint *)(param_2 + 0x20) & 8) != 0 &&
        (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))))) {
      local_38 = local_38 | 8;
    }
  }
  if ((param_3 & 0x10) != 0) {
    if ((((*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 0x10) != 0) ||
       (((*(uint *)(param_1 + 0x20) & *(uint *)(param_2 + 0x20) & 0x10) != 0 &&
        (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44))))) {
      local_38 = local_38 | 0x10;
    }
  }
  if ((param_3 & 2) != 0) {
    if ((((*(uint *)(param_1 + 0x20) ^ *(uint *)(param_2 + 0x20)) & 2) != 0) ||
       (((*(uint *)(param_1 + 0x20) & *(uint *)(param_2 + 0x20) & 2) != 0 &&
        (iVar1 = strcmp((char *)(param_1 + 0x2a),(char *)(param_2 + 0x2a)), iVar1 != 0)))) {
      local_38 = local_38 | 2;
    }
  }
  return local_38;
}



/* ===== FUN_00033e50 @ 00033e50 size=140 ===== */

void FUN_00033e50(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x48);
  piVar2 = (int *)*piVar1;
  while (piVar5 = piVar2, (int *)(param_1 + 0x48) != piVar1) {
    piVar2 = (int *)piVar1[1];
    piVar5[1] = (int)piVar2;
    *piVar2 = (int)piVar5;
    free(piVar1 + -2);
    piVar2 = (int *)*piVar5;
    piVar1 = piVar5;
  }
  piVar5 = (int *)(param_1 + 0x50);
  piVar1 = (int *)*piVar5;
  piVar2 = (int *)*piVar1;
  if (piVar5 != piVar1) {
    do {
      piVar4 = piVar2;
      puVar3 = (undefined4 *)piVar1[1];
      piVar4[1] = (int)puVar3;
      *puVar3 = piVar4;
      free(piVar1 + -1);
      piVar2 = (int *)*piVar4;
      piVar1 = piVar4;
    } while (piVar4 != piVar5);
    return;
  }
  return;
}



/* ===== FUN_00033edc @ 00033edc size=12 ===== */

void FUN_00033edc(void)

{
  FUN_0002e5c4(&DAT_0004e60c);
  return;
}



/* ===== thunk_FUN_0002ea3c @ 00033ee8 size=4 ===== */

void thunk_FUN_0002ea3c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0004e88c;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1 + -1;
    *param_1 = iVar2;
    if (3 < iVar3) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      fprintf(stderr,"DBG<4>%20s:%-4u %s: Returned object reference %p, %d remaining\n",
              "lib/object.c",0xde,DAT_0002eb24,param_1,iVar2);
      *piVar1 = iVar3;
      iVar2 = *param_1;
    }
    if (iVar2 < 0) {
      fprintf(stderr,"BUG at file position %s:%d:%s\n","lib/object.c",0xe1,DAT_0002eb24);
                    /* WARNING: Subroutine does not return */
      __assert("0","lib/object.c",0xe1);
    }
    if (iVar2 == 0) {
      FUN_0002e73c(param_1);
      return;
    }
  }
  return;
}



/* ===== FUN_00033eec @ 00033eec size=36 ===== */

undefined2 FUN_00033eec(int param_1)

{
  undefined2 uVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x28);
  }
  return uVar1;
}



/* ===== FUN_00033f10 @ 00033f10 size=32 ===== */

void FUN_00033f10(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}



/* ===== FUN_00033f54 @ 00033f54 size=40 ===== */

void FUN_00033f54(int param_1,char *param_2)

{
  strncpy((char *)(param_1 + 0x2a),param_2,0xf);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}



/* ===== FUN_00033fa0 @ 00033fa0 size=32 ===== */

void FUN_00033fa0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}



/* ===== FUN_00033fe4 @ 00033fe4 size=32 ===== */

void FUN_00033fe4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}



/* ===== FUN_00034028 @ 00034028 size=32 ===== */

void FUN_00034028(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x10;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}



/* ===== FUN_00034048 @ 00034048 size=104 ===== */

undefined4 FUN_00034048(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = calloc(1,0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0x4c);
    *puVar1 = param_2;
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    puVar1[1] = param_3;
    *puVar4 = puVar1 + 2;
    puVar1[3] = puVar4;
    *(undefined4 **)(param_1 + 0x4c) = puVar1 + 2;
    puVar1[2] = param_1 + 0x48;
    *(uint *)(param_1 + 0x20) = uVar2 | 0x20;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    return 0;
  }
  return 0xfffffffb;
}



/* ===== FUN_000340b0 @ 000340b0 size=100 ===== */

undefined4 FUN_000340b0(int param_1,undefined4 param_2,char *param_3)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = calloc(1,0x20);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 0x1c) = param_2;
    strncpy((char *)((int)pvVar1 + 0xc),param_3,0xf);
    piVar2 = *(int **)(param_1 + 0x54);
    *piVar2 = (int)pvVar1 + 4;
    *(int **)((int)pvVar1 + 8) = piVar2;
    *(int *)(param_1 + 0x54) = (int)pvVar1 + 4;
    *(int *)((int)pvVar1 + 4) = param_1 + 0x50;
    return 0;
  }
  return 0xfffffffb;
}



/* ===== FUN_00034114 @ 00034114 size=136 ===== */

int FUN_00034114(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  for (piVar2 = *(int **)(param_2 + 0x48); (int *)(param_2 + 0x48) != piVar2;
      piVar2 = (int *)*piVar2) {
    iVar1 = FUN_00034048(param_1,piVar2[-2],piVar2[-1]);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  piVar2 = *(int **)(param_2 + 0x50);
  while( true ) {
    if ((int *)(param_2 + 0x50) == piVar2) {
      return 0;
    }
    iVar1 = FUN_000340b0(param_1,piVar2[6],piVar2 + 2);
    if (iVar1 < 0) break;
    piVar2 = (int *)*piVar2;
  }
  return iVar1;
}



/* ===== FUN_0003419c @ 0003419c size=1076 ===== */

int FUN_0003419c(sockaddr *param_1)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  sockaddr local_b4 [9];
  
  local_b4[0].sa_family = 0;
  local_b4[0].sa_data[0] = '\0';
  local_b4[0].sa_data[1] = '\0';
  local_b4[0].sa_data[2] = '\0';
  local_b4[0].sa_data[3] = '\0';
  local_b4[0].sa_data[4] = '\0';
  local_b4[0].sa_data[5] = '\0';
  local_b4[0].sa_data[6] = '\0';
  local_b4[0].sa_data[7] = '\0';
  local_b4[0].sa_data[8] = '\0';
  local_b4[0].sa_data[9] = '\0';
  if (*(int *)(param_1[1].sa_data + 6) != -1) {
    return -3;
  }
  iVar2 = socket(0x10,0x80003,0x10);
  *(int *)(param_1[1].sa_data + 6) = iVar2;
  if (iVar2 < 0) {
    piVar5 = __errno_location();
    pFVar1 = stderr;
    iVar2 = *piVar5;
    if (3 < DAT_0004e88c) {
      pcVar6 = strerror(iVar2);
      fprintf(pFVar1,"DBG<4>%20s:%-4u %s: nl_connect(%p): socket() failed with %d (%s)\n","lib/nl.c"
              ,0x7a,"nl_connect",param_1,iVar2,pcVar6);
      *piVar5 = iVar2;
    }
  }
  else {
    iVar2 = FUN_0002fd50(param_1,0);
    if (iVar2 < 0) goto LAB_0002d204;
    iVar2 = FUN_0002f3c8(param_1);
    if (iVar2 != 0) {
      pcVar6 = local_b4[0].sa_data + 10;
      memset(pcVar6,0,0x80);
      iVar2 = 6;
      do {
        iVar3 = FUN_0002f3d8(param_1,1);
        if (iVar3 == 0) {
          FUN_0002f17c(pcVar6);
          goto LAB_0002d150;
        }
        iVar4 = bind(*(int *)(param_1[1].sa_data + 6),param_1,0xc);
        if (iVar4 == 0) {
          FUN_0002f17c(pcVar6);
          goto LAB_0002d16c;
        }
        piVar5 = __errno_location();
        pFVar1 = stderr;
        iVar4 = *piVar5;
        if (iVar4 != 0x62) {
          if (3 < DAT_0004e88c) {
            pcVar7 = strerror(iVar4);
            fprintf(pFVar1,
                    "DBG<4>%20s:%-4u %s: nl_connect(%p): bind() for port %u failed with %d (%s)\n",
                    "lib/nl.c",0xa1,"nl_connect",param_1,iVar3,iVar4,pcVar7);
            *piVar5 = iVar4;
          }
          FUN_0002f17c(pcVar6);
          iVar2 = FUN_0002ac78(iVar4);
          iVar2 = -iVar2;
          goto LAB_0002d204;
        }
        if (3 < DAT_0004e88c) {
          fprintf(stderr,
                  "DBG<4>%20s:%-4u %s: nl_connect(%p): local port %u already in use. Retry.\n",
                  "lib/nl.c",0x9d,"nl_connect",param_1,iVar3);
          *piVar5 = 0x62;
        }
        FUN_0002f258(pcVar6,iVar3);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_0002f3d8(param_1,0);
      FUN_0002f17c(pcVar6);
    }
LAB_0002d150:
    iVar2 = bind(*(int *)(param_1[1].sa_data + 6),param_1,0xc);
    if (iVar2 == 0) {
LAB_0002d16c:
      local_b4[0].sa_data[10] = '\f';
      local_b4[0].sa_data[0xb] = '\0';
      local_b4[0].sa_data[0xc] = '\0';
      local_b4[0].sa_data[0xd] = '\0';
      iVar2 = getsockname(*(int *)(param_1[1].sa_data + 6),local_b4,
                          (socklen_t *)(local_b4[0].sa_data + 10));
      iVar3 = DAT_0004e88c;
      if (-1 < iVar2) {
        if (local_b4[0].sa_data._10_4_ == 0xc) {
          if (local_b4[0].sa_family == 0x10) {
            if (*(int *)(param_1->sa_data + 2) != local_b4[0].sa_data._2_4_) {
              FUN_0002f460(param_1);
            }
            param_1[1].sa_data[10] = '\x10';
            param_1[1].sa_data[0xb] = '\0';
            param_1[1].sa_data[0xc] = '\0';
            param_1[1].sa_data[0xd] = '\0';
            param_1->sa_family = local_b4[0].sa_family;
            param_1->sa_data[0] = (char)local_b4[0].sa_data._0_2_;
            param_1->sa_data[1] = SUB21(local_b4[0].sa_data._0_2_,1);
            *(undefined4 *)(param_1->sa_data + 2) = local_b4[0].sa_data._2_4_;
            *(undefined4 *)(param_1->sa_data + 6) = local_b4[0].sa_data._6_4_;
            return 0;
          }
          iVar2 = -0xb;
        }
        else {
          iVar2 = -0x13;
        }
        goto LAB_0002d204;
      }
      piVar5 = __errno_location();
      pFVar1 = stderr;
      iVar2 = *piVar5;
      if (3 < iVar3) {
        pcVar6 = strerror(iVar2);
        fprintf(pFVar1,"DBG<4>%20s:%-4u %s: nl_connect(%p): getsockname() failed with %d (%s)\n",
                "lib/nl.c",0xba,"nl_connect",param_1,iVar2,pcVar6);
        *piVar5 = iVar2;
      }
    }
    else {
      piVar5 = __errno_location();
      pFVar1 = stderr;
      iVar2 = *piVar5;
      if (3 < DAT_0004e88c) {
        pcVar6 = strerror(iVar2);
        fprintf(pFVar1,"DBG<4>%20s:%-4u %s: nl_connect(%p): bind() failed with %d (%s)\n","lib/nl.c"
                ,0xaf,"nl_connect",param_1,iVar2,pcVar6);
        *piVar5 = iVar2;
      }
    }
  }
  iVar2 = FUN_0002ac78(iVar2);
  iVar2 = -iVar2;
LAB_0002d204:
  if (*(int *)(param_1[1].sa_data + 6) == -1) {
    return iVar2;
  }
  close(*(int *)(param_1[1].sa_data + 6));
  param_1[1].sa_data[6] = -1;
  param_1[1].sa_data[7] = -1;
  param_1[1].sa_data[8] = -1;
  param_1[1].sa_data[9] = -1;
  return iVar2;
}



/* ===== FUN_000341a4 @ 000341a4 size=52 ===== */

void FUN_000341a4(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  
  local_a = 0;
  local_c = param_3;
  local_b = param_4;
  FUN_0002d86c(param_1,param_2,param_5,&local_c,4);
  return;
}



/* ===== FUN_000341d8 @ 000341d8 size=68 ===== */

bool FUN_000341d8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002bab4(param_1,4);
  if (iVar1 != 0) {
    iVar1 = FUN_0002ba5c(param_1);
    return (param_2 + 3U & 0xfffffffc) <= *(int *)(iVar1 + -0x10) - 0x14U;
  }
  return false;
}



/* ===== FUN_0003421c @ 0003421c size=248 ===== */

int FUN_0003421c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_000341d8();
  if (iVar1 == 0) {
    return -0x15;
  }
  iVar1 = FUN_0002ba5c(param_1);
  uVar4 = param_2 + 3U & 0xfffffffc;
  puVar2 = (ushort *)(iVar1 + uVar4 + 4);
  uVar4 = (-0x14 - uVar4) + *(int *)(iVar1 + -0x10);
  if (uVar4 < 4) {
    return 0;
  }
  uVar3 = (uint)*puVar2;
  if ((3 < uVar3) && ((int)uVar3 <= (int)uVar4)) {
    while( true ) {
      iVar1 = FUN_00027610(puVar2,param_3,param_4);
      uVar3 = uVar3 + 3 & 0xfffffffc;
      uVar4 = uVar4 - uVar3;
      if (iVar1 < 0) {
        return iVar1;
      }
      if (uVar4 < 4) break;
      puVar2 = (ushort *)((int)puVar2 + uVar3);
      uVar3 = (uint)*puVar2;
      if (uVar3 < 4) {
        return 0;
      }
      if ((int)uVar4 < (int)uVar3) {
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_0003427c @ 0003427c size=108 ===== */

undefined4 FUN_0003427c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_000341d8();
  if (iVar1 != 0) {
    iVar1 = FUN_0002ba5c(param_1);
    uVar3 = param_2 + 3U & 0xfffffffc;
    uVar2 = FUN_000277b8(param_3,param_4,iVar1 + uVar3 + 4,(-0x14 - uVar3) + *(int *)(iVar1 + -0x10)
                        );
    return uVar2;
  }
  return 0xffffffeb;
}



/* ===== thunk_FUN_0002ba5c @ 000342e8 size=4 ===== */

int thunk_FUN_0002ba5c(int param_1)

{
  return param_1 + 0x10;
}



/* ===== FUN_000342f8 @ 000342f8 size=8 ===== */

int FUN_000342f8(int param_1)

{
  return param_1 + 4;
}



/* ===== FUN_00034314 @ 00034314 size=24 ===== */

int FUN_00034314(int param_1,int param_2)

{
  return (*(int *)(param_1 + -0x10) + -0x14) - (param_2 + 3U & 0xfffffffc);
}



/* ===== FUN_0003432c @ 0003432c size=20 ===== */

int FUN_0003432c(int param_1,int param_2)

{
  return param_1 + (param_2 + 3U & 0xfffffffc) + 4;
}



/* ===== thunk_FUN_00034314 @ 00034340 size=4 ===== */

int thunk_FUN_00034314(int param_1,int param_2)

{
  return (*(int *)(param_1 + -0x10) + -0x14) - (param_2 + 3U & 0xfffffffc);
}



/* ===== FUN_00034344 @ 00034344 size=204 ===== */

int FUN_00034344(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  undefined4 local_24;
  
  local_24 = (uint)CONCAT11(in_stack_0000000c,in_stack_00000008);
  iVar1 = FUN_0002bf28();
  iVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_0002ba5c();
    *puVar2 = local_24;
    if (1 < DAT_0004e88c) {
      piVar4 = __errno_location();
      iVar3 = *piVar4;
      fprintf(stderr,"DBG<2>%20s:%-4u %s: msg %p: Added generic netlink header cmd=%d version=%d\n",
              "lib/genl/genl.c",0x16c,"genlmsg_put",param_1,(uint)in_stack_00000008,
              (uint)in_stack_0000000c);
      *piVar4 = iVar3;
    }
    iVar3 = FUN_0002ba5c(iVar1);
    iVar3 = iVar3 + 4;
  }
  return iVar3;
}



/* ===== FUN_00034418 @ 00034418 size=276 ===== */

int FUN_00034418(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint auStack_40 [2];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  byte *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  
  local_2c = (byte *)thunk_FUN_0002ba5c(param_2);
  puVar4 = (uint *)param_3[4];
  if (param_3[5] < 1) {
LAB_0003448c:
    iVar1 = -0x16;
  }
  else {
    if ((uint)*local_2c != *puVar4) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 5;
        if (param_3[5] == iVar1) goto LAB_0003448c;
      } while ((uint)*local_2c != *puVar4);
    }
    if (puVar4[3] != 0) {
      iVar1 = -(puVar4[2] * 4 + 0xb & 0xfffffff8);
      local_34 = param_1;
      local_30 = param_2;
      local_28 = FUN_000342f8(local_2c);
      iVar2 = *param_3;
      uVar3 = puVar4[2];
      local_24 = auStack_38 + iVar1;
      *(uint *)((int)auStack_40 + iVar1) = puVar4[4];
      iVar1 = FUN_0002bb18(param_2,iVar2 + 4,auStack_38 + iVar1,uVar3);
      if (-1 < iVar1) {
        iVar1 = (*(code *)puVar4[3])(param_4,puVar4,&local_34,param_5);
      }
      return iVar1;
    }
    iVar1 = -10;
  }
  return iVar1;
}



/* ===== FUN_0003452c @ 0003452c size=68 ===== */

undefined4 FUN_0003452c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00033918(param_1,*(undefined4 *)(param_2 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_00033eec();
    *(undefined4 *)(param_2 + 4) = uVar2;
    if (*(int *)(param_2 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x5c) = uVar2;
    }
    thunk_FUN_0002ea3c(iVar1);
    return 0;
  }
  return 0xfffffff4;
}



/* ===== FUN_000345f4 @ 000345f4 size=204 ===== */

char * FUN_000345f4(int param_1,int param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((undefined4 **)DAT_0004e644 != &DAT_0004e644) {
    iVar2 = DAT_0004e644[-5];
    puVar3 = DAT_0004e644;
    while (param_1 != iVar2) {
      puVar3 = (undefined4 *)*puVar3;
      if ((undefined4 **)puVar3 == &DAT_0004e644) goto LAB_00034640;
      iVar2 = puVar3[-5];
    }
    if (0 < (int)puVar3[-1]) {
      piVar1 = (int *)puVar3[-2];
      if (param_2 != *piVar1) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 5;
          if (iVar2 == puVar3[-1]) goto LAB_00034640;
        } while (*piVar1 != param_2);
      }
      strncpy(param_3,(char *)piVar1[1],param_4 - 1);
      return param_3;
    }
  }
LAB_00034640:
  strncpy(param_3,"unknown",param_4 - 1);
  return (char *)0x0;
}



/* ===== FUN_000346c0 @ 000346c0 size=224 ===== */

undefined4 FUN_000346c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *__s2;
  
  __s2 = *(char **)(param_1 + 8);
  if ((__s2 != (char *)0x0) && ((*(int *)(param_1 + 0x10) == 0 || (0 < *(int *)(param_1 + 0x14)))))
  {
    puVar4 = DAT_0004e644 + -6;
    puVar1 = DAT_0004e644;
    if (*(int *)(param_1 + 4) == 0) goto joined_r0x00034774;
    if ((undefined4 **)DAT_0004e644 != &DAT_0004e644) {
      iVar2 = DAT_0004e644[-5];
      puVar1 = puVar4;
      while( true ) {
        if (*(int *)(param_1 + 4) == iVar2) {
          return 0xfffffffa;
        }
        puVar3 = (undefined4 *)puVar1[6];
        puVar1 = puVar3 + -6;
        if ((undefined4 **)puVar3 == &DAT_0004e644) break;
        iVar2 = puVar3[-5];
      }
      do {
        iVar2 = strcmp((char *)puVar4[2],__s2);
        if (iVar2 == 0) {
          return 0xfffffffa;
        }
        puVar1 = puVar4 + 6;
        puVar4 = (undefined4 *)*puVar1 + -6;
        puVar1 = (undefined4 *)*puVar1;
joined_r0x00034774:
      } while ((undefined4 **)puVar1 != &DAT_0004e644);
    }
    *DAT_0004e648 = param_1 + 0x18;
    *(int **)(param_1 + 0x1c) = DAT_0004e648;
    DAT_0004e648 = (int *)(param_1 + 0x18);
    *(undefined4 ***)(param_1 + 0x18) = &DAT_0004e644;
    return 0;
  }
  return 0xfffffff9;
}



/* ===== FUN_000347b8 @ 000347b8 size=156 ===== */

undefined4 FUN_000347b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0002c044();
  iVar2 = FUN_000341d8(iVar1,0);
  if (iVar2 == 0) {
    return 0xfffffff9;
  }
  puVar4 = DAT_0004e644;
  if ((undefined4 **)DAT_0004e644 != &DAT_0004e644) {
    do {
      if ((uint)*(ushort *)(iVar1 + 4) == puVar4[-5]) {
        uVar3 = FUN_0002c24c(param_1);
        uVar3 = FUN_00034418(uVar3,iVar1,puVar4 + -6,0,param_2);
        return uVar3;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while ((undefined4 **)puVar4 != &DAT_0004e644);
  }
  return 0xffffffea;
}



/* ===== FUN_000348f8 @ 000348f8 size=64 ===== */

int FUN_000348f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14 [2];
  
  iVar1 = FUN_0003383c(param_1,local_14);
  if (-1 < iVar1) {
    iVar1 = FUN_0003452c(local_14[0],param_2);
    FUN_00028eac(local_14[0]);
  }
  return iVar1;
}



/* ===== FUN_000349a4 @ 000349a4 size=100 ===== */

int FUN_000349a4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_14;
  
  iVar2 = FUN_0003383c(param_1,&local_14);
  puVar1 = DAT_0004e644;
  if (-1 < iVar2) {
    for (; (undefined4 **)puVar1 != &DAT_0004e644; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = FUN_0003452c(local_14,puVar1 + -6);
    }
    FUN_00028eac(local_14);
  }
  return iVar2;
}



/* ===== FUN_00034ad0 @ 00034ad0 size=24 ===== */

ulonglong FUN_00034ad0(uint param_1,uint param_2)

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



/* ===== FUN_00034ad8 @ 00034ad8 size=196 ===== */

uint FUN_00034ad8(uint param_1,uint param_2)

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



/* ===== FUN_00034bac @ 00034bac size=32 ===== */

void FUN_00034bac(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00034ad8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00034f18 @ 00034f18 size=372 ===== */

ulonglong FUN_00034f18(uint param_1,uint param_2)

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
LAB_00034cf0:
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
  if ((param_2 & 0x100000) != 0) goto LAB_00034cf0;
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
      goto LAB_00034d70;
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
LAB_00034d70:
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



/* ===== FUN_00035060 @ 00035060 size=76 ===== */

void FUN_00035060(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000350ac();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000350ac @ 000350ac size=328 ===== */

undefined8 FUN_000350ac(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00035200 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0004f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0004f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0004f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getprotobyname @ 0004f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

protoent * getprotobyname(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 0004f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0004f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0004f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0004f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0004f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getnameinfo @ 0004f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 0004f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0004f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_unlock @ 0004f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0004f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 0004f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0004f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0004f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0004f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0004f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0004f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 0004f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_rdlock @ 0004f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0004f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0004f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 0004f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0004f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0004f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0004f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0004f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0004f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0004f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0004f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0004f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 0004f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0004f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0004f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 0004f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0004f0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0004f0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0004f0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0004f0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004f0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0004f0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004f0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpagesize @ 0004f0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 0004f0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0004f0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0004f0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0004f100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0004f104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_rwlock_wrlock @ 0004f108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getprotobynumber @ 0004f10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

protoent * getprotobynumber(int __proto)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0004f110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0004f114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::if_nametoindex @ 0004f118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint if_nametoindex(char *__ifname)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0004f11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_pton @ 0004f120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inet_pton(int __af,char *__cp,void *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0004f124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0004f128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0004f12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0004f130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004f134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0004f138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntop @ 0004f13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0004f140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 0004f144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 0004f148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0004f14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004f150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendmsg @ 0004f154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 0004f158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam @ 0004f15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004f160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvmsg @ 0004f164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0004f168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0004f16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0004f170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0004f174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004f178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004f17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0004f180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0004f184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0004f188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chown @ 0004f18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 0004f190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vasprintf @ 0004f194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004f198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0004f19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0004f1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getaddrinfo @ 0004f1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004f1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rmdir @ 0004f1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 0004f1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0004f1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004f1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0004f1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0004f1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0004f1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0004f1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0004f1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0004f1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0004f1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


