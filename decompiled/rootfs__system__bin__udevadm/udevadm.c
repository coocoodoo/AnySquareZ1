// udevadm — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00012ec4 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 00012ee8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0004b00c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::putchar @ 00012ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0004b010)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0004b014)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00012f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0004b018)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 00012f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_0004b01c)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::inotify_init1 @ 00012f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_init1_0004b020)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_set_partitions_flags @ 00012f34 size=12 ===== */

void blkid_probe_set_partitions_flags(void)

{
  (*(code *)PTR_blkid_probe_set_partitions_flags_0004b024)();
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00012f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0004b028)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::ioctl @ 00012f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004b02c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00012f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_0004b030)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00012f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0004b034)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00012f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004b038)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopendir @ 00012f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * fdopendir(int __fd)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_fdopendir_0004b03c)(__fd);
  return pDVar1;
}



/* ===== <EXTERNAL>::connect @ 00012f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0004b040)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sigemptyset @ 00012f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_0004b044)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00012fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_0004b048)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004b04c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 00012fbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0004b050)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0004b054)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 00012fd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0004b058)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00012fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004b05c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012fec size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0004b060)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00012ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004b064)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 00013004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0004b068)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::munmap @ 00013010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0004b06c)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::ftello64 @ 0001301c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t ftello64(FILE *__stream)

{
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_ftello64_0004b070)(__stream);
  return _Var1;
}



/* ===== <EXTERNAL>::getgrgid @ 00013028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_0004b074)(__gid);
  return pgVar1;
}



/* ===== <EXTERNAL>::statfs64 @ 00013034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int statfs64(char *__file,statfs64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_statfs64_0004b078)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fchmod @ 0001304c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_0004b080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::bsearch @ 00013064 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_0004b088)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::usleep @ 00013070 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0004b08c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_unref @ 0001307c size=12 ===== */

void kmod_module_unref(void)

{
  (*(code *)PTR_kmod_module_unref_0004b090)();
  return;
}



/* ===== <EXTERNAL>::execve @ 00013088 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execve_0004b094)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::utimensat @ 000130a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utimensat_0004b09c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_get_value @ 000130ac size=12 ===== */

void blkid_probe_get_value(void)

{
  (*(code *)PTR_blkid_probe_get_value_0004b0a0)();
  return;
}



/* ===== <EXTERNAL>::getpid @ 000130b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0004b0a4)();
  return _Var1;
}



/* ===== <EXTERNAL>::blkid_probe_set_device @ 000130c4 size=12 ===== */

void blkid_probe_set_device(void)

{
  (*(code *)PTR_blkid_probe_set_device_0004b0a8)();
  return;
}



/* ===== <EXTERNAL>::qsort @ 000130d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0004b0ac)(__base);
  return;
}



/* ===== <EXTERNAL>::fchown @ 000130dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchown_0004b0b0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_do_safeprobe @ 000130e8 size=12 ===== */

void blkid_do_safeprobe(void)

{
  (*(code *)PTR_blkid_do_safeprobe_0004b0b4)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 000130f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004b0b8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dirname @ 00013100 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_dirname_0004b0bc)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 0001310c size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0004b0c0)();
  return;
}



/* ===== <EXTERNAL>::prctl @ 00013118 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0004b0c4)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00013124 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0004b0c8)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00013130 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004b0cc)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 0001313c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0004b0d0)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00013148 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0004b0d4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dup2 @ 00013154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_0004b0d8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 0001316c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0004b0e0)();
  return _Var1;
}



/* ===== <EXTERNAL>::kmod_unref @ 00013178 size=12 ===== */

void kmod_unref(void)

{
  (*(code *)PTR_kmod_unref_0004b0e4)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00013188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004b0e8)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::blkid_probe_lookup_value @ 00013194 size=12 ===== */

void blkid_probe_lookup_value(void)

{
  (*(code *)PTR_blkid_probe_lookup_value_0004b0ec)();
  return;
}



/* ===== <EXTERNAL>::isatty @ 000131a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0004b0f0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 000131ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0004b0f4)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::openat64 @ 000131b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_openat64_0004b0f8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoll @ 000131c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_0004b0fc)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 000131d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004b100)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_load_resources @ 000131dc size=12 ===== */

void kmod_load_resources(void)

{
  (*(code *)PTR_kmod_load_resources_0004b104)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000131e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0004b108)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::rmdir @ 000131f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_0004b10c)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00013200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0004b110)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::mkostemp64 @ 0001320c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkostemp64(char *__template,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkostemp64_0004b114)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::mempcpy @ 00013218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mempcpy_0004b118)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00013224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0004b11c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::realpath @ 00013230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0004b120)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00013248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0004b128)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::chown @ 00013254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chown_0004b12c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 00013260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0004b130)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_do_fullprobe @ 0001326c size=12 ===== */

void blkid_do_fullprobe(void)

{
  (*(code *)PTR_blkid_do_fullprobe_0004b134)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00013284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004b13c)();
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 00013290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0004b140)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_filter_superblocks_usage @ 0001329c size=12 ===== */

void blkid_probe_filter_superblocks_usage(void)

{
  (*(code *)PTR_blkid_probe_filter_superblocks_usage_0004b144)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 000132b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0004b14c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 000132c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004b150)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strnlen @ 000132d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0004b158)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_probe_numof_values @ 000132f0 size=12 ===== */

void blkid_probe_numof_values(void)

{
  (*(code *)PTR_blkid_probe_numof_values_0004b160)();
  return;
}



/* ===== <EXTERNAL>::rename @ 000132fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_0004b164)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00013308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0004b168)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::basename @ 00013314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_basename_0004b16c)(__filename);
  return pcVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 00013320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_0004b170)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001332c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0004b174)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::kmod_module_new_from_lookup @ 00013338 size=12 ===== */

void kmod_module_new_from_lookup(void)

{
  (*(code *)PTR_kmod_module_new_from_lookup_0004b178)();
  return;
}



/* ===== <EXTERNAL>::write @ 00013344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0004b17c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00013350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0004b180)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::kill @ 0001335c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_0004b184)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 00013368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0004b188)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::unlinkat @ 00013374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlinkat(int __fd,char *__name,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlinkat_0004b18c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::signalfd @ 00013380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_signalfd_0004b190)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001338c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004b194)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00013398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0004b198)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_is_wholedisk @ 000133a4 size=12 ===== */

void blkid_probe_is_wholedisk(void)

{
  (*(code *)PTR_blkid_probe_is_wholedisk_0004b19c)();
  return;
}



/* ===== <EXTERNAL>::blkid_safe_string @ 000133b0 size=12 ===== */

void blkid_safe_string(void)

{
  (*(code *)PTR_blkid_safe_string_0004b1a0)();
  return;
}



/* ===== <EXTERNAL>::ferror @ 000133c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_0004b1a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 000133d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0004b1ac)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::rand @ 000133e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0004b1b0)();
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 000133ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004b1b4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 000133f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_rm_watch_0004b1b8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dirfd @ 00013404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dirfd_0004b1bc)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::get_current_dir_name @ 00013410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_get_current_dir_name_0004b1c0)();
  return pcVar1;
}



/* ===== <EXTERNAL>::blkid_encode_string @ 0001341c size=12 ===== */

void blkid_encode_string(void)

{
  (*(code *)PTR_blkid_encode_string_0004b1c4)();
  return;
}



/* ===== <EXTERNAL>::sendmsg @ 00013428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendmsg_0004b1c8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00013434 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0004b1cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 00013440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
  cmsghdr *pcVar1;
  
  pcVar1 = (cmsghdr *)(*(code *)PTR___cmsg_nxthdr_0004b1d0)(__mhdr);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncpy @ 0001344c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0004b1d4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00013458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0004b1d8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00013464 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004b1dc)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00013470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0004b1e0)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 0001347c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_0004b1e4)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00013488 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004b1e8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::listen @ 00013494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0004b1ec)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_free_probe @ 000134ac size=12 ===== */

void blkid_free_probe(void)

{
  (*(code *)PTR_blkid_free_probe_0004b1f4)();
  return;
}



/* ===== <EXTERNAL>::fork @ 000134b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0004b1f8)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 000134c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0004b1fc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::lstat64 @ 000134d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_0004b200)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_get_module @ 000134dc size=12 ===== */

void kmod_module_get_module(void)

{
  (*(code *)PTR_kmod_module_get_module_0004b204)();
  return;
}



/* ===== <EXTERNAL>::sigaction @ 000134e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0004b208)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000134f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0004b20c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 00013510 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0004b214)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtoull @ 0001351c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_0004b218)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::symlink @ 00013528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_symlink_0004b21c)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 00013534 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_0004b220)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00013544 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004b224)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 00013550 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_0004b228)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::srand @ 0001355c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0004b22c)(__seed);
  return;
}



/* ===== <EXTERNAL>::kmod_module_probe_insert_module @ 00013568 size=12 ===== */

void kmod_module_probe_insert_module(void)

{
  (*(code *)PTR_kmod_module_probe_insert_module_0004b230)();
  return;
}



/* ===== <EXTERNAL>::blkid_probe_enable_superblocks @ 00013574 size=12 ===== */

void blkid_probe_enable_superblocks(void)

{
  (*(code *)PTR_blkid_probe_enable_superblocks_0004b234)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00013580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0004b238)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001358c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0004b23c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00013598 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0004b240)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::poll @ 000135a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0004b244)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::pipe2 @ 000135b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe2_0004b248)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000135c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0004b24c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 000135cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_0004b250)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::blkid_probe_enable_partitions @ 000135d8 size=12 ===== */

void blkid_probe_enable_partitions(void)

{
  (*(code *)PTR_blkid_probe_enable_partitions_0004b254)();
  return;
}



/* ===== <EXTERNAL>::strsignal @ 000135e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsignal(int __sig)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsignal_0004b258)(__sig);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpwnam @ 000135f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwnam_0004b25c)(__name);
  return ppVar1;
}



/* ===== <EXTERNAL>::fstatat64 @ 00013608 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatat64_0004b264)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fgetc @ 00013614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0004b268)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00013620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0004b26c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 0001362c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0004b270)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 00013638 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0004b274)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_probe_set_superblocks_flags @ 00013644 size=12 ===== */

void blkid_probe_set_superblocks_flags(void)

{
  (*(code *)PTR_blkid_probe_set_superblocks_flags_0004b278)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 00013650 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0004b27c)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strsep @ 0001365c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_0004b280)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::kmod_module_unref_list @ 00013668 size=12 ===== */

void kmod_module_unref_list(void)

{
  (*(code *)PTR_kmod_module_unref_list_0004b284)();
  return;
}



/* ===== <EXTERNAL>::accept4 @ 00013674 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept4(int __fd,sockaddr *__addr,socklen_t *__addr_len,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept4_0004b288)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::inotify_add_watch @ 00013680 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_add_watch_0004b28c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_validate_resources @ 0001368c size=12 ===== */

void kmod_validate_resources(void)

{
  (*(code *)PTR_kmod_validate_resources_0004b290)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00013698 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0004b294)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_has_value @ 000136a4 size=12 ===== */

void blkid_probe_has_value(void)

{
  (*(code *)PTR_blkid_probe_has_value_0004b298)();
  return;
}



/* ===== <EXTERNAL>::getsockopt @ 000136b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_0004b29c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strftime @ 000136bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0004b2a0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::kmod_new @ 000136c8 size=12 ===== */

void kmod_new(void)

{
  (*(code *)PTR_kmod_new_0004b2a4)();
  return;
}



/* ===== <EXTERNAL>::access @ 000136e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0004b2ac)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_new_probe @ 000136ec size=12 ===== */

void blkid_new_probe(void)

{
  (*(code *)PTR_blkid_new_probe_0004b2b0)();
  return;
}



/* ===== <EXTERNAL>::kmod_list_next @ 000136f8 size=12 ===== */

void kmod_list_next(void)

{
  (*(code *)PTR_kmod_list_next_0004b2b4)();
  return;
}



/* ===== <EXTERNAL>::readlinkat @ 00013704 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlinkat_0004b2b8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00013710 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004b2bc)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 0001371c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0004b2c0)(__status);
  return;
}



/* ===== <EXTERNAL>::getgrnam @ 00013728 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrnam_0004b2c4)(__name);
  return pgVar1;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 00013738 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_0004b2c8)(__major);
  return uVar1;
}



/* ===== <EXTERNAL>::atoi @ 00013744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0004b2cc)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 00013750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0004b2d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::_exit @ 0001375c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_0004b2d4)(__status);
  return;
}



/* ===== <EXTERNAL>::ppoll @ 00013768 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ppoll_0004b2d8)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 00013774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0004b2dc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00013780 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004b2e0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_probe_get_fd @ 0001378c size=12 ===== */

void blkid_probe_get_fd(void)

{
  (*(code *)PTR_blkid_probe_get_fd_0004b2e4)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00013798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0004b2e8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000137a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0004b2ec)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 000137b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0004b2f0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_set_log_fn @ 000137bc size=12 ===== */

void kmod_set_log_fn(void)

{
  (*(code *)PTR_kmod_set_log_fn_0004b2f4)();
  return;
}



/* ===== <EXTERNAL>::vasprintf @ 000137c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_0004b2f8)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::recvmsg @ 000137d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvmsg_0004b2fc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fseeko64 @ 000137e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko64(FILE *__stream,__off64_t __off,int __whence)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_fseeko64_0004b300)
                    (__stream,in_r1,(int)__off,(int)((ulonglong)__off >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::mkdir @ 000137ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0004b304)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000137f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004b308)();
  return;
}



/* ===== <EXTERNAL>::close @ 00013804 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004b30c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_get_name @ 00013810 size=12 ===== */

void kmod_module_get_name(void)

{
  (*(code *)PTR_kmod_module_get_name_0004b310)();
  return;
}



/* ===== <EXTERNAL>::strpbrk @ 0001381c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strpbrk_0004b314)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::raise @ 00013828 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004b318)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00013838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004b31c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::blkid_probe_get_size @ 00013844 size=12 ===== */

void blkid_probe_get_size(void)

{
  (*(code *)PTR_blkid_probe_get_size_0004b320)();
  return;
}



/* ===== <EXTERNAL>::sigprocmask @ 00013850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigprocmask_0004b324)(__how);
  return iVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001385c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0004b328)();
  return;
}



/* ===== <EXTERNAL>::getsockname @ 00013868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_0004b32c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00013874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0004b330)(__filename);
  return pFVar1;
}



/* ===== FUN_00013880 @ 00013880 size=260 ===== */

undefined4 FUN_00013880(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *__s2;
  
  iVar2 = FUN_0002bad0();
  if (iVar2 == 0) {
LAB_00013934:
    uVar5 = 1;
  }
  else {
    FUN_00022df8();
    FUN_00023e4e(DAT_00013984);
    uVar1 = DAT_000139ac;
    uVar5 = DAT_00013988;
    while (iVar3 = getopt_long(param_1,param_2,uVar5,uVar1,0), -1 < iVar3) {
      if (iVar3 != 100) {
        if (iVar3 == 0x68) {
          uVar5 = FUN_00013acc(iVar2,param_1,param_2);
        }
        else {
          if (iVar3 != 0x56) goto LAB_00013934;
          uVar5 = 0;
          puts(DAT_0001399c);
        }
        goto LAB_00013956;
      }
      FUN_00023018(7);
    }
    iVar3 = *DAT_0001398c;
    __s2 = *(char **)(param_2 + iVar3 * 4);
    if (__s2 != (char *)0x0) {
      iVar6 = 0;
      puVar7 = DAT_000139b0;
      do {
        puVar8 = (undefined4 *)*puVar7;
        iVar4 = strcmp((char *)*puVar8,__s2);
        if (iVar4 == 0) {
          *DAT_0001398c = 0;
          if (puVar8[3] != 0) {
            FUN_00023018(7);
          }
          iVar6 = FUN_000230c4();
          if (6 < iVar6) {
            FUN_00022f5c(7,0,DAT_00013990,0x4c,DAT_00013998,DAT_00013994,*puVar8);
          }
          uVar5 = (*(code *)puVar8[1])(iVar2,param_1 - iVar3,param_2 + iVar3 * 4);
          goto LAB_00013956;
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 10);
    }
    uVar5 = 2;
    fprintf((FILE *)*DAT_000139a8,DAT_000139a4,*DAT_000139a0);
  }
LAB_00013956:
  FUN_00023e52();
  FUN_0002bcb6(iVar2);
  FUN_00022eec();
  return uVar5;
}



/* ===== entry @ 000139b4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0004b210)
            (DAT_000139e8,param_2,&stack0x00000004,DAT_000139ec,DAT_000139e4,param_1);
  return;
}



/* ===== FUN_000139f0 @ 000139f0 size=32 ===== */

void FUN_000139f0(void)

{
  if (DAT_00013a14 == DAT_00013a10) {
    return;
  }
  if (DAT_00013a18 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013a18)();
  return;
}



/* ===== _FINI_0 @ 00013a54 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013a90;
  if (*DAT_00013a90 != '\0') {
    return;
  }
  FUN_000139f0();
  if (DAT_00013a94 != 0) {
    __deregister_frame_info(DAT_00013a98);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013a9c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013ac0 != 0) {
    __register_frame_info(DAT_00013ac8,DAT_00013ac4);
  }
  if ((DAT_00013a4c - DAT_00013a48 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013a50 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013a50)();
  return;
}



/* ===== FUN_00013acc @ 00013acc size=44 ===== */

undefined4 FUN_00013acc(void)

{
  char *__format;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  printf(DAT_00013afc,*DAT_00013af8);
  __format = DAT_00013b04;
  puVar2 = DAT_00013b00;
  do {
    if (((undefined4 *)*puVar2)[2] != 0) {
      printf(__format,*(undefined4 *)*puVar2);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 10);
  return 0;
}



/* ===== FUN_00013b18 @ 00013b18 size=142 ===== */

void FUN_00013b18(undefined4 param_1)

{
  char *__format;
  char *__format_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00027926();
  printf(DAT_00013ba4,uVar1);
  iVar2 = FUN_0002835e(param_1);
  if (iVar2 != 0) {
    printf(DAT_00013ba8,iVar2 + 5);
  }
  iVar2 = FUN_0002919a(param_1);
  if (iVar2 != 0) {
    printf(DAT_00013bac,iVar2);
  }
  __format = DAT_00013bb0;
  for (iVar2 = FUN_00027e94(param_1); __format_00 = DAT_00013bb4, iVar2 != 0;
      iVar2 = FUN_0002a868(iVar2)) {
    iVar3 = FUN_0002a8d0(iVar2);
    printf(__format,iVar3 + 5);
  }
  for (iVar2 = FUN_00027f20(param_1); iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
    uVar1 = FUN_0002a8d0(iVar2);
    uVar4 = FUN_0002a8d6(iVar2);
    printf(__format_00,uVar1,uVar4);
  }
  (*(code *)PTR_putchar_0004b010)(10);
  return;
}



/* ===== FUN_00013bb8 @ 00013bb8 size=134 ===== */

void FUN_00013bb8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char *__format;
  int iVar2;
  char *__s1;
  int iVar3;
  byte *__s;
  size_t sVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar2 = FUN_00027c28();
  __format = DAT_00013c44;
  piVar1 = DAT_00013c40;
  do {
    puVar7 = DAT_00013c48;
    if (iVar2 == 0) {
      (*(code *)PTR_putchar_0004b010)(10);
      return;
    }
    __s1 = (char *)FUN_0002a8d0(iVar2);
    iVar6 = 0;
    do {
      iVar3 = strcmp(__s1,(char *)*puVar7);
      if (iVar3 == 0) goto LAB_00013c26;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 != 7);
    __s = (byte *)FUN_00027a0c(param_1,__s1);
    if ((__s != (byte *)0x0) && (*__s != 0x2f)) {
      sVar4 = strlen((char *)__s);
      pbVar5 = __s + sVar4;
      do {
        if (__s == pbVar5) {
          printf(__format,param_2,__s1,__s);
          break;
        }
        pbVar5 = pbVar5 + -1;
      } while ((int)((uint)*(ushort *)(*piVar1 + (uint)*pbVar5 * 2) << 0x19) < 0);
    }
LAB_00013c26:
    iVar2 = FUN_0002a868(iVar2);
  } while( true );
}



/* ===== FUN_00013c4c @ 00013c4c size=162 ===== */

void FUN_00013c4c(DIR *param_1,uint param_2,int param_3)

{
  int __oflag;
  dirent64 *pdVar1;
  int iVar2;
  DIR *__dirp;
  char *__file;
  stat64 sStack_88;
  
  pdVar1 = readdir64(param_1);
  __oflag = DAT_00013cf0;
  while (pdVar1 != (dirent64 *)0x0) {
    if (pdVar1->d_name[0] != '.') {
      __file = pdVar1->d_name;
      iVar2 = dirfd(param_1);
      iVar2 = fstatat64(iVar2,__file,&sStack_88,0x100);
      if (iVar2 == 0) {
        if ((sStack_88.st_mode & param_2) == 0) {
          if ((sStack_88.st_mode & 0xf000) == 0x4000) {
            iVar2 = dirfd(param_1);
            iVar2 = openat64(iVar2,__file,__oflag);
            __dirp = fdopendir(iVar2);
            if ((__dirp != (DIR *)0x0) && (0 < param_3 + -1)) {
              FUN_00013c4c(__dirp,param_2);
            }
            iVar2 = dirfd(param_1);
            unlinkat(iVar2,__file,0x200);
            if (__dirp != (DIR *)0x0) {
              closedir(__dirp);
            }
          }
          else {
            iVar2 = dirfd(param_1);
            unlinkat(iVar2,__file,0);
          }
        }
      }
    }
    pdVar1 = readdir64(param_1);
  }
  return;
}



/* ===== FUN_00013cf4 @ 00013cf4 size=1200 ===== */

undefined4 FUN_00013cf4(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  DIR *pDVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  FILE *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  stat64 local_490;
  char acStack_428 [1028];
  
  piVar2 = DAT_00014054;
  iVar12 = 0;
  uVar14 = 4;
  iVar13 = 0;
  iVar15 = 0;
  bVar11 = false;
  bVar1 = false;
LAB_00013d12:
  iVar4 = getopt_long(param_2,param_3,DAT_00013fe4,DAT_00013fe8,0);
  if (iVar4 < 0) {
    if (iVar13 == 1) {
      if (iVar12 == 0) {
        iVar15 = *(int *)(param_3 + *DAT_00014228 * 4);
        if (iVar15 == 0) {
LAB_00013f88:
          pFVar10 = (FILE *)*DAT_00013ff8;
          pcVar6 = DAT_00014048;
LAB_0001410e:
          fputs(pcVar6,pFVar10);
          return 4;
        }
        iVar12 = FUN_000160d2(param_1,iVar15,0);
        if (iVar12 == 0) {
          pFVar10 = (FILE *)*DAT_0001422c;
          pcVar6 = DAT_00014230;
          goto LAB_0001410e;
        }
      }
      puts(DAT_00014240);
      uVar14 = FUN_00027926(iVar12);
      pcVar3 = DAT_00014268;
      pcVar6 = DAT_00014244;
      iVar15 = DAT_0001421c;
      printf(DAT_00014248,uVar14);
      uVar14 = FUN_000279e8(iVar12);
      printf(DAT_0001424c,uVar14);
      iVar13 = FUN_000283b4(iVar12);
      if (iVar13 == 0) {
        iVar13 = iVar15;
      }
      printf(DAT_00014250,iVar13);
      iVar13 = FUN_00027832(iVar12);
      if (iVar13 == 0) {
        iVar13 = iVar15;
      }
      printf(DAT_00014254,iVar13);
      FUN_00013bb8(iVar12,DAT_00014258);
      iVar13 = iVar12;
      while( true ) {
        iVar13 = FUN_00028b1a(iVar13);
        uVar14 = 0;
        if (iVar13 == 0) break;
        uVar14 = FUN_00027926();
        printf(pcVar3,uVar14);
        uVar14 = FUN_000279e8(iVar13);
        printf(pcVar6,uVar14);
        iVar4 = FUN_000283b4(iVar13);
        if (iVar4 == 0) {
          iVar4 = iVar15;
        }
        printf(DAT_0001425c,iVar4);
        iVar4 = FUN_00027832(iVar13);
        if (iVar4 == 0) {
          iVar4 = iVar15;
        }
        printf(DAT_00014260,iVar4);
        FUN_00013bb8(iVar13,DAT_00014264);
      }
      goto LAB_00013dac;
    }
    if (iVar13 == 2) {
      iVar13 = stat64(acStack_428,&local_490);
      if (iVar13 != 0) goto LAB_00013d6e;
      uVar8 = gnu_dev_major(local_490.st_dev);
      uVar9 = gnu_dev_minor(local_490.st_dev);
      uVar14 = 0;
      if (bVar1) {
        if (iVar15 == 0) {
          iVar15 = DAT_00014234;
        }
        printf(DAT_00014238,iVar15,uVar8,iVar15,uVar9);
      }
      else {
        printf(DAT_0001423c,uVar8,uVar9);
      }
      goto LAB_00013e70;
    }
    if (iVar12 == 0) {
      iVar12 = *(int *)(param_3 + *DAT_00013fec * 4);
      if (iVar12 == 0) {
        printf(DAT_00013ff4,*DAT_00013ff0);
        return 2;
      }
      iVar12 = FUN_000160d2(param_1,iVar12,0);
      if (iVar12 == 0) goto LAB_00013f88;
    }
    switch(uVar14) {
    case 1:
      pcVar6 = (char *)FUN_00027926();
      break;
    case 2:
      iVar15 = FUN_00027e94();
      pcVar6 = DAT_00014050;
      goto LAB_00013fd6;
    case 3:
      iVar13 = FUN_00027f20();
      pcVar3 = DAT_00014224;
      pcVar6 = DAT_00014220;
      if (iVar15 == 0) {
        iVar15 = DAT_0001421c;
      }
      while (uVar14 = 0, iVar13 != 0) {
        if (bVar1) {
          uVar14 = FUN_0002a8d0(iVar13);
          uVar7 = FUN_0002a8d6(iVar13);
          printf(pcVar3,iVar15,uVar14,uVar7);
        }
        else {
          uVar14 = FUN_0002a8d0(iVar13);
          uVar7 = FUN_0002a8d6(iVar13);
          printf(pcVar6,uVar14,uVar7);
        }
        iVar13 = FUN_0002a868(iVar13);
      }
      goto LAB_00013dac;
    case 4:
      FUN_00013b18();
      goto LAB_00013fe0;
    default:
      iVar15 = FUN_0002835e(iVar12);
      if (iVar15 == 0) {
        uVar14 = 5;
        fputs(DAT_0001404c,(FILE *)*DAT_00013ff8);
        goto LAB_00013dac;
      }
      if (!bVar11) {
        iVar15 = FUN_0002835e(iVar12);
        puts((char *)(iVar15 + 5));
        uVar14 = 0;
        goto LAB_00013dac;
      }
      pcVar6 = (char *)FUN_0002835e(iVar12);
    }
    puts(pcVar6);
    goto LAB_00013fe0;
  }
  if (iVar4 == 0x65) {
    iVar15 = FUN_00029a6c(param_1);
    if (iVar15 == 0) goto LAB_00013e80;
    FUN_00029eba();
    for (iVar13 = FUN_00029b76(iVar15); iVar13 != 0; iVar13 = FUN_0002a868(iVar13)) {
      uVar14 = FUN_0002a8d0(iVar13);
      iVar4 = FUN_00028630(param_1,uVar14);
      if (iVar4 != 0) {
        FUN_00013b18();
        FUN_00027894(iVar4);
      }
    }
    FUN_00029af6(iVar15);
    uVar14 = 0;
LAB_00013e70:
    if (iVar12 == 0) {
      return uVar14;
    }
    goto LAB_00013dac;
  }
  if (iVar4 < 0x66) {
    if (iVar4 == 0x61) {
      iVar13 = 1;
      goto LAB_00013d12;
    }
    if (iVar4 < 0x62) {
      if (iVar4 == 0x50) {
        iVar15 = *piVar2;
        goto LAB_00013d12;
      }
      if (iVar4 == 0x56) {
        puts(DAT_00014044);
        goto LAB_00013e80;
      }
    }
    else {
      if (iVar4 == 99) {
        unlink(DAT_0001402c);
        pDVar5 = opendir(DAT_00014030);
        if (pDVar5 != (DIR *)0x0) {
          FUN_00013c4c(pDVar5,0x200,1);
          closedir(pDVar5);
        }
        pDVar5 = opendir(DAT_00014034);
        if (pDVar5 != (DIR *)0x0) {
          FUN_00013c4c(pDVar5,0,2);
          closedir(pDVar5);
        }
        pDVar5 = opendir(DAT_00014038);
        if (pDVar5 != (DIR *)0x0) {
          FUN_00013c4c(pDVar5,0,2);
          closedir(pDVar5);
        }
        pDVar5 = opendir(DAT_0001403c);
        if (pDVar5 != (DIR *)0x0) {
          FUN_00013c4c(pDVar5,0,2);
          closedir(pDVar5);
        }
        pDVar5 = opendir(DAT_00014040);
        if (pDVar5 != (DIR *)0x0) {
          FUN_00013c4c(pDVar5,0,1);
          closedir(pDVar5);
        }
LAB_00013e80:
        uVar14 = 0;
        goto LAB_00013e70;
      }
      if (iVar4 == 100) {
        iVar13 = 2;
        FUN_00024ae4(acStack_428,0x400,*piVar2);
        goto LAB_00013d12;
      }
    }
  }
  else {
    if (iVar4 == 0x70) {
      if (iVar12 != 0) {
LAB_00013da0:
        uVar14 = 2;
        fputs(DAT_00013ffc,(FILE *)*DAT_00013ff8);
        goto LAB_00013dac;
      }
      iVar12 = FUN_000160d2(param_1,*piVar2,DAT_00014008);
      if (iVar12 == 0) {
        pFVar10 = (FILE *)*DAT_00013ff8;
        pcVar6 = DAT_0001400c;
LAB_00013dde:
        fputs(pcVar6,pFVar10);
        return 2;
      }
      goto LAB_00013d12;
    }
    if (iVar4 < 0x71) {
      if (iVar4 == 0x68) {
        printf(DAT_00013ff4,*DAT_00013ff0);
        goto LAB_00013e80;
      }
      if (iVar4 != 0x6e) goto LAB_00013d6e;
      if (iVar12 != 0) goto LAB_00013da0;
      iVar12 = FUN_000160d2(param_1,*piVar2,DAT_00014000);
      if (iVar12 == 0) {
        pFVar10 = (FILE *)*DAT_00013ff8;
        pcVar6 = DAT_00014004;
        goto LAB_00013dde;
      }
      goto LAB_00013d12;
    }
    if (iVar4 == 0x72) {
      bVar11 = true;
      goto LAB_00013d12;
    }
    if (iVar4 < 0x72) {
      pcVar6 = (char *)*piVar2;
      iVar13 = strcmp(pcVar6,DAT_00014010);
      if ((iVar13 == 0) || (iVar13 = strcmp(pcVar6,DAT_00014014), iVar13 == 0)) {
        uVar14 = 3;
      }
      else {
        iVar13 = strcmp(pcVar6,DAT_00014018);
        if (iVar13 == 0) {
          uVar14 = 0;
          iVar13 = 0;
          goto LAB_00013d12;
        }
        iVar13 = strcmp(pcVar6,DAT_0001401c);
        if (iVar13 == 0) {
          uVar14 = 2;
        }
        else {
          iVar13 = strcmp(pcVar6,DAT_00014020);
          if (iVar13 == 0) {
            uVar14 = 1;
          }
          else {
            iVar13 = strcmp(pcVar6,DAT_00014024);
            if (iVar13 != 0) {
              uVar14 = 3;
              fputs(DAT_00014028,(FILE *)*DAT_00013ff8);
              goto LAB_00013e70;
            }
            uVar14 = 4;
          }
        }
      }
      iVar13 = 0;
      goto LAB_00013d12;
    }
    if (iVar4 == 0x78) {
      bVar1 = true;
      goto LAB_00013d12;
    }
  }
LAB_00013d6e:
  uVar14 = 1;
  goto LAB_00013e70;
LAB_00013fd6:
  if (iVar15 == 0) {
LAB_00013fda:
    putchar(10);
LAB_00013fe0:
    uVar14 = 0;
LAB_00013dac:
    FUN_00027894(iVar12);
    return uVar14;
  }
  if (bVar11) {
    iVar13 = FUN_0002a8d0(iVar15);
  }
  else {
    iVar13 = FUN_0002a8d0(iVar15);
    iVar13 = iVar13 + 5;
  }
  printf(pcVar6,iVar13);
  iVar15 = FUN_0002a868(iVar15);
  if (iVar15 == 0) goto LAB_00013fda;
  putchar(0x20);
  goto LAB_00013fd6;
}



/* ===== FUN_0001426c @ 0001426c size=364 ===== */

undefined4 FUN_0001426c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  __uid_t _Var3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  char *__format;
  char *__s;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *local_2c [2];
  
  _Var3 = getuid();
  if (_Var3 == 0) {
    iVar4 = FUN_0001c6ec(param_1);
    uVar2 = DAT_00014408;
    puVar1 = DAT_000143e0;
    if (iVar4 == 0) {
      uVar9 = 2;
    }
    else {
      uVar9 = 1;
      iVar8 = 0x3c;
LAB_000142aa:
      iVar10 = iVar8;
      iVar5 = getopt_long(param_2,param_3,DAT_000143e4,uVar2,0);
      if (-1 < iVar5) {
        iVar8 = iVar10;
        if (iVar5 == 0x6c) {
          iVar5 = FUN_0002b830(*puVar1);
          if (iVar5 < 0) {
LAB_00014366:
            __s = (char *)*puVar1;
            __format = DAT_000143fc;
            goto LAB_000143a4;
          }
          uVar9 = FUN_0002b830(*puVar1);
          iVar5 = FUN_0001c8ce(iVar4,uVar9,iVar10);
        }
        else {
          if (0x6c < iVar5) {
            if (iVar5 == 0x70) {
              __s = (char *)*puVar1;
              pcVar7 = strchr(__s,0x3d);
              __format = DAT_00014400;
              if (pcVar7 != (char *)0x0) {
                iVar5 = FUN_0001c91e(iVar4,__s,iVar10);
                goto LAB_00014352;
              }
              goto LAB_000143a4;
            }
            if (iVar5 < 0x71) {
              if (iVar5 == 0x6d) {
                uVar6 = strtoul((char *)*puVar1,local_2c,0);
                if ((*local_2c[0] != '\0') || ((int)uVar6 < 1)) goto LAB_00014366;
                iVar5 = FUN_0001c932(iVar4,uVar6,iVar10);
                goto LAB_00014352;
              }
            }
            else {
              if (iVar5 == 0x73) {
                iVar5 = FUN_0001c8e2(iVar4,iVar10);
                goto LAB_00014352;
              }
              if ((iVar5 == 0x74) && (iVar8 = atoi((char *)*puVar1), iVar8 < 0)) {
                fputs(DAT_000143f8,(FILE *)*DAT_000143d8);
                iVar8 = iVar10;
              }
            }
            goto LAB_000142aa;
          }
          if (iVar5 == 0x53) {
            iVar5 = FUN_0001c8f6(iVar4,iVar10);
          }
          else {
            if (iVar5 < 0x54) {
              if (iVar5 == 0x52) {
                iVar5 = FUN_0001c90a(iVar4,iVar10);
                goto LAB_00014352;
              }
              goto LAB_000142aa;
            }
            if (iVar5 != 0x65) {
              if (iVar5 == 0x68) {
                printf(DAT_000143f4,*DAT_000143f0);
                uVar9 = 0;
              }
              goto LAB_000142aa;
            }
            iVar5 = FUN_0001c95a(iVar4,iVar10);
          }
        }
LAB_00014352:
        if (iVar5 < 0) {
          uVar9 = 2;
        }
        else {
          uVar9 = 0;
        }
        goto LAB_000142aa;
      }
      iVar8 = *DAT_000143e8;
      if (iVar8 < param_2) {
        __s = *(char **)(param_3 + iVar8 * 4);
        __format = DAT_000143ec;
LAB_000143a4:
        fprintf((FILE *)*DAT_000143d8,__format,__s);
      }
      else if (iVar8 == 1) {
        fputs(DAT_00014404,(FILE *)*DAT_000143d8);
      }
      FUN_0001c5e0(iVar4);
    }
  }
  else {
    uVar9 = 1;
    fputs(DAT_000143dc,(FILE *)*DAT_000143d8);
  }
  return uVar9;
}



/* ===== FUN_00014420 @ 00014420 size=138 ===== */

void FUN_00014420(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  char *__format;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  timespec local_28;
  
  clock_gettime(1,&local_28);
  lVar1 = (longlong)DAT_000144ac;
  uVar2 = FUN_00027a00(param_1);
  uVar3 = FUN_00027926(param_1);
  uVar4 = FUN_000283b4(param_1);
  printf(DAT_000144b0,param_2,local_28.tv_sec,
         (int)(local_28.tv_nsec * lVar1 >> 0x26) - (local_28.tv_nsec >> 0x1f),uVar2,uVar3,uVar4);
  __format = DAT_000144b4;
  if (param_3 != 0) {
    for (iVar5 = FUN_00027f20(param_1); iVar5 != 0; iVar5 = FUN_0002a868(iVar5)) {
      uVar2 = FUN_0002a8d0(iVar5);
      uVar3 = FUN_0002a8d6(iVar5);
      printf(__format,uVar2,uVar3);
    }
    putchar(10);
  }
  return;
}



/* ===== FUN_0001494c @ 0001494c size=134 ===== */

void FUN_0001494c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar3 = 0;
  for (iVar5 = 0; bVar1 = *(byte *)(param_2 + 8), iVar5 == 0 && uVar3 < bVar1;
      iVar5 = iVar5 + (uint)bVar6) {
    FUN_0001494c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + uVar3 * 8 + 4));
    bVar6 = 0xfffffffe < uVar3;
    uVar3 = uVar3 + 1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar3 + 0x18;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xffffffe7 < uVar3);
  for (uVar3 = 0; bVar1 != uVar3; uVar3 = uVar3 + 1) {
    uVar4 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar4 + 0x10;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xffffffef < uVar4);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = 0;
  for (iVar5 = 0; iVar5 == 0 && uVar4 < uVar3; iVar5 = iVar5 + (uint)bVar6) {
    uVar2 = *(uint *)(param_1 + 8);
    bVar6 = 0xfffffffe < uVar4;
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 8) = uVar2 + 0x10;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xffffffef < uVar2);
  }
  return;
}



/* ===== FUN_0001566c @ 0001566c size=486 ===== */

undefined4 FUN_0001566c(undefined4 param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  __uid_t _Var5;
  int iVar6;
  uint uVar7;
  int extraout_r3;
  undefined4 uVar8;
  char *pcVar9;
  FILE *__stream;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_34;
  pollfd local_30;
  
  uVar8 = DAT_00015894;
  puVar2 = PTR_s_adm_settle_00015854;
  puVar11 = PTR_s_adm_settle_00015854 + 0x18;
  pcVar9 = (char *)0x0;
  local_34 = 0x78;
  local_30.fd = -1;
  local_30.events = 0;
  local_30.revents = 0;
  while (iVar4 = getopt_long(param_2,param_3,uVar8,puVar11,0), -1 < iVar4) {
    if (iVar4 == 0x68) {
      printf(PTR_s__s_settle_OPTIONS_Wait_for_pendi_0001587c,
             *(undefined4 *)PTR_program_invocation_short_name_00015878);
      return 0;
    }
    if (0x68 < iVar4) goto LAB_000156da;
    if (iVar4 == 0x45) {
      pcVar9 = *(char **)PTR_optarg_00015870;
    }
    else {
      if (iVar4 == 0x65) {
LAB_000156e6:
        iVar6 = FUN_000230c4();
        if (iVar6 < 6) {
          return 1;
        }
        FUN_00022f5c(6,0,PTR_s_udevadm_settle_c_00015868,0x5d,puVar2,
                     PTR_s_Option___c_no_longer_supported__00015880,iVar4);
        return 1;
      }
      if (iVar4 == 0x3f) {
        return 1;
      }
      while( true ) {
        FUN_00023050(PTR_s_Unknown_argument_0001586c,PTR_s_udevadm_settle_c_00015868,100,
                     PTR_s_adm_settle_00015864);
        iVar4 = extraout_r3;
LAB_000156da:
        puVar3 = PTR_optarg_00015870;
        if (iVar4 == 0x73) goto LAB_000156e6;
        if (iVar4 == 0x74) break;
        if (iVar4 == 0x71) goto LAB_000156e6;
      }
      iVar4 = FUN_000253c6(*(undefined4 *)PTR_optarg_00015870,&local_34);
      if (iVar4 < 0) {
        uVar8 = *(undefined4 *)puVar3;
        __stream = *(FILE **)PTR_stderr_0001585c;
        pcVar9 = strerror(-iVar4);
        fprintf(__stream,PTR_s_Invalid_timeout_value___s____s_00015874,uVar8,pcVar9);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
  }
  if (*(int *)PTR_optind_00015858 < param_2) {
    fprintf(*(FILE **)PTR_stderr_0001585c,PTR_s_Extraneous_argument____s__00015860,
            *(undefined4 *)(param_3 + *(int *)PTR_optind_00015858 * 4));
    return 1;
  }
  lVar1 = FUN_00024db0(1);
  uVar10 = local_34;
  _Var5 = getuid();
  if ((_Var5 == 0) && (iVar4 = FUN_0001c6ec(param_1), iVar4 != 0)) {
    uVar7 = local_34;
    if (local_34 < 5) {
      uVar7 = 5;
    }
    iVar6 = FUN_0001c946(iVar4,uVar7);
    if (iVar6 < 0) {
      iVar6 = FUN_000230c4();
      if (6 < iVar6) {
        FUN_00022f5c(7,0,PTR_s_udevadm_settle_c_00015868,0x76,puVar2,
                     PTR_s_no_connection_to_daemon_00015884);
      }
      FUN_0001c5e0(iVar4);
      return 0;
    }
    FUN_0001c5e0(iVar4);
  }
  iVar4 = FUN_0002b51c(param_1);
  if (iVar4 == 0) {
    iVar4 = FUN_000230c4();
    if (2 < iVar4) {
      FUN_00022f5c(3,0,PTR_s_udevadm_settle_c_00015868,0x80,puVar2,
                   PTR_s_unable_to_get_udev_queue_00015888);
    }
    return 1;
  }
  local_30.events = 1;
  local_30.fd = FUN_0002b5ac();
  if (local_30.fd < 0) {
    iVar6 = FUN_000230c4();
    if (6 < iVar6) {
      FUN_00022f5c(7,0,PTR_s_udevadm_settle_c_00015868,0x87,puVar2,DAT_00015890);
    }
LAB_00015836:
    uVar8 = 0;
  }
  else {
    lVar1 = (ulonglong)DAT_0001588c * (ulonglong)uVar10 + lVar1;
    uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
    while( true ) {
      if (((pcVar9 != (char *)0x0) && (iVar6 = access(pcVar9,0), -1 < iVar6)) ||
         (iVar6 = FUN_0002b58c(iVar4), iVar6 != 0)) goto LAB_00015836;
      uVar13 = FUN_00024db0(1);
      uVar7 = (uint)((ulonglong)uVar13 >> 0x20);
      bVar12 = uVar10 <= uVar7;
      if (uVar7 == uVar10) {
        bVar12 = (uint)lVar1 <= (uint)uVar13;
      }
      if (bVar12) break;
      iVar6 = poll(&local_30,1,1000);
      if ((0 < iVar6) && ((int)(((uint)local_30._4_4_ >> 0x10) << 0x1f) < 0)) {
        FUN_0002b5f8(iVar4);
      }
    }
    uVar8 = 1;
  }
  FUN_0002b544(iVar4);
  return uVar8;
}



/* ===== FUN_000160b0 @ 000160b0 size=34 ===== */

char * FUN_000160b0(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  if (iVar1 == 0) {
    param_1 = param_1 + __n;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ===== FUN_000160d2 @ 000160d2 size=192 ===== */

undefined4 FUN_000160d2(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *__file;
  stat64 sStack_88;
  
  if (param_1 == 0) {
    uVar6 = 0x18;
    uVar5 = DAT_0001619c;
LAB_000160ea:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(uVar5,DAT_00016198,uVar6,DAT_00016194);
  }
  if (param_2 == (char *)0x0) {
    uVar6 = 0x19;
    uVar5 = DAT_000161a0;
    goto LAB_000160ea;
  }
  __file = param_2;
  if ((param_3 != (char *)0x0) && (iVar1 = FUN_000160b0(param_2,param_3), iVar1 == 0)) {
    sVar2 = strlen(param_3);
    sVar3 = strlen(param_2);
    iVar1 = -(sVar3 + sVar2 + 8 & 0xfffffff8);
    __file = (char *)((int)&sStack_88 + iVar1);
    pcVar4 = stpcpy((char *)((int)&sStack_88 + iVar1),param_3);
    pcVar4 = stpcpy(pcVar4,param_2);
    *pcVar4 = '\0';
  }
  iVar1 = FUN_000160b0(__file,DAT_000161a4);
  if (iVar1 == 0) {
    iVar1 = FUN_000160b0(__file,DAT_000161a8);
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = FUN_00028630(param_1,__file);
    return uVar5;
  }
  iVar1 = stat64(__file,&sStack_88);
  if (iVar1 < 0) {
LAB_00016178:
    uVar5 = 0;
  }
  else {
    if ((sStack_88.st_mode & 0xf000) == 0x6000) {
      uVar5 = 0x62;
    }
    else {
      if ((sStack_88.st_mode & 0xf000) != 0x2000) goto LAB_00016178;
      uVar5 = 99;
    }
    uVar5 = FUN_0002874c(param_1,uVar5,(undefined4)sStack_88.st_rdev,sStack_88.st_rdev._4_4_);
  }
  return uVar5;
}



/* ===== FUN_000161ac @ 000161ac size=70 ===== */

undefined4 * FUN_000161ac(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00027880();
  puVar2 = calloc(1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = uVar1;
    FUN_0002a6d2(uVar1,puVar2 + 0x10,0);
    FUN_0002a6d2(uVar1,puVar2 + 9,0);
    puVar2[0x1a] = 0xffffffff;
    uVar3 = FUN_00024db0(1);
    *(undefined8 *)(puVar2 + 0x18) = uVar3;
  }
  return puVar2;
}



/* ===== FUN_000161f2 @ 000161f2 size=44 ===== */

void FUN_000161f2(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_0002a87e(param_1 + 0x40);
  FUN_0002a87e(param_1 + 0x24);
  free(*(void **)(param_1 + 0x14));
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_0004b31c)(param_1);
  return;
}



/* ===== FUN_0001621e @ 0001621e size=1238 ===== */

uint FUN_0001621e(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,char param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined *puVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *local_c4c;
  uint local_c48;
  byte *local_c30;
  char *local_c2c;
  char local_c28 [1024];
  byte local_828 [1024];
  byte abStack_428 [1028];
  
  puVar4 = PTR_s_s_used_0003082d_0x45_0001671c;
  puVar3 = PTR_s____h_>type_00034daa_0xc_00016718;
  puVar2 = PTR_s_red_after__i_loops_00030879_0xf_00016714;
  iVar12 = param_1[1];
  pbVar11 = param_2;
  local_c30 = param_3;
  while (bVar1 = *pbVar11, bVar1 != 0) {
    pbVar16 = pbVar11;
    if (bVar1 == 0x24) {
      pbVar13 = pbVar11 + 1;
      pbVar16 = pbVar13;
      if (pbVar11[1] == 0x24) goto LAB_00016348;
      iVar14 = 0;
LAB_0001627c:
      pcVar9 = *(char **)(puVar2 + iVar14 * 0xc + 0x16238);
      sVar5 = strlen(pcVar9);
      iVar6 = strncmp((char *)pbVar13,pcVar9,sVar5);
      if ((iVar6 != 0) || (pbVar16 = pbVar13 + sVar5, pbVar16 == (byte *)0x0)) goto LAB_0001633e;
      iVar14 = *(int *)(puVar2 + iVar14 * 0xc + 0x16240);
LAB_000162b2:
      if (*pbVar16 == 0x7b) {
        pbVar11 = pbVar16;
        while( true ) {
          uVar15 = (int)pbVar11 - (int)pbVar16;
          pbVar11 = pbVar11 + 1;
          if (*pbVar11 == 0x7d) break;
          if (*pbVar11 == 0) {
            iVar12 = FUN_000230c4();
            if (2 < iVar12) {
              FUN_00022f5c(3,0,PTR_LAB_00018f28_1_00016724 + 0x163ba,0xb5,PTR_DAT_0001672c + 0x163c4
                           ,PTR_LAB_00016728 + 0x163be,param_2);
            }
            goto LAB_00016258;
          }
        }
        if (0x3ff < uVar15) break;
        pcVar9 = local_c28;
        memcpy(pcVar9,pbVar16 + 1,uVar15);
        pcVar9[uVar15] = '\0';
        pbVar11 = pbVar16 + 1 + uVar15 + 1;
      }
      else {
        pcVar9 = (char *)0x0;
        pbVar11 = pbVar16;
      }
      if (iVar14 == 0xb) {
        if (param_1[5] != 0) {
          if ((pcVar9 == (char *)0x0) || (uVar8 = strtoul(pcVar9,&local_c2c,10), (int)uVar8 < 1)) {
            pbVar16 = (byte *)param_1[5];
LAB_00016708:
            param_4 = FUN_00024a44(&local_c30,param_4,pbVar16);
          }
          else {
            pbVar16 = local_828;
            FUN_00024ae4(pbVar16,0x400,param_1[5]);
            iVar14 = **(int **)(puVar3 + DAT_00016738 + 0x1624a);
            do {
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) {
                pbVar16 = abStack_428;
                FUN_00024ae4(pbVar16,0x400);
                if ((*local_c2c != '+') &&
                   (pcVar9 = strchr((char *)pbVar16,0x20), pcVar9 != (char *)0x0)) {
                  *pcVar9 = '\0';
                }
                goto LAB_00016708;
              }
              do {
                pbVar13 = pbVar16;
                if (*pbVar13 == 0) break;
                pbVar16 = pbVar13 + 1;
              } while ((*(ushort *)(iVar14 + (uint)*pbVar13 * 2) & 0x20) == 0);
              do {
                pbVar16 = pbVar13;
                pbVar13 = pbVar16 + 1;
              } while ((int)((uint)*(ushort *)(iVar14 + (uint)*pbVar16 * 2) << 0x1a) < 0);
            } while (*pbVar16 != 0);
            iVar14 = FUN_000230c4();
            if (2 < iVar14) {
              FUN_00022f5c(3,0,PTR_LAB_00018de2_1_00016740 + 0x16500,0x115,
                           PTR_DAT_00016744 + 0x16502,PTR_DAT_0001673c + 0x164fa);
            }
          }
        }
      }
      else {
        uVar15 = param_4;
        if (param_5 != '\0') {
          local_c4c = local_c30;
          local_c30 = local_828;
          uVar15 = 0x400;
          local_c48 = param_4;
        }
        switch(iVar14) {
        case 1:
          iVar14 = FUN_0002835e(iVar12);
          if (iVar14 != 0) {
            pbVar16 = (byte *)FUN_0002835e(iVar12);
            goto LAB_000163e2;
          }
          break;
        case 2:
          if (pcVar9 != (char *)0x0) {
            iVar14 = FUN_0002b608(*param_1,pcVar9,abStack_428,0x200,1);
            if (iVar14 != 0) {
              pbVar16 = (byte *)FUN_00027a0c(param_1[1],pcVar9);
              if ((pbVar16 == (byte *)0x0) &&
                 (((iVar14 = param_1[2], iVar14 == 0 || (iVar14 == param_1[1])) ||
                  (pbVar16 = (byte *)FUN_00027a0c(iVar14,pcVar9), pbVar16 == (byte *)0x0)))) break;
              if (pbVar16 != abStack_428) {
                FUN_00024ae4(abStack_428,0x200,pbVar16);
              }
            }
            sVar5 = strlen((char *)abStack_428);
            iVar14 = **(int **)(puVar3 + DAT_00016738 + 0x1624a);
            pbVar16 = abStack_428 + sVar5;
            while (sVar5 != 0) {
              pbVar16 = pbVar16 + -1;
              sVar5 = sVar5 - 1;
              if (-1 < (int)((uint)*(ushort *)(iVar14 + (uint)*pbVar16 * 2) << 0x1a)) break;
              *pbVar16 = 0;
            }
            iVar14 = FUN_0002b970(abStack_428,PTR_DAT_00016754 + 0x165b6);
            if ((0 < iVar14) && (iVar6 = FUN_000230c4(), 6 < iVar6)) {
              FUN_00022f5c(7,0,PTR_LAB_00018d0c_1_0001675c + 0x165d6,0x147,
                           PTR_DAT_00016760 + 0x165da,PTR_DAT_00018d94_3_00016758 + 0x165d0,iVar14);
            }
            pbVar16 = abStack_428;
            goto LAB_000163e2;
          }
          iVar14 = FUN_000230c4();
          if (2 < iVar14) {
            FUN_00022f5c(3,0,PTR_DAT_0001674c + 0x16530,300,PTR_LAB_00016750 + 0x16532,
                         PTR_DAT_00016748 + 0x1652a);
          }
          break;
        case 3:
          if (pcVar9 != (char *)0x0) {
            pbVar16 = (byte *)FUN_00029048(param_1[1],pcVar9);
LAB_00016444:
            if (pbVar16 != (byte *)0x0) goto LAB_000163e2;
          }
          break;
        case 4:
          iVar14 = iVar12;
LAB_0001641a:
          pbVar16 = (byte *)FUN_000279e8(iVar14);
          goto LAB_000163e2;
        case 5:
          iVar14 = FUN_000279ee(iVar12);
          if (iVar14 != 0) {
            pbVar16 = (byte *)FUN_000279ee(iVar12);
            goto LAB_000163e2;
          }
          break;
        case 6:
          if (param_1[2] != 0) {
            pbVar16 = (byte *)FUN_00027832();
            goto LAB_00016444;
          }
          break;
        case 7:
          pbVar16 = (byte *)FUN_00027926(iVar12);
          goto LAB_000163e2;
        case 8:
          iVar14 = param_1[2];
          if (param_1[2] != 0) goto LAB_0001641a;
          break;
        case 9:
          uVar17 = FUN_000282ec(iVar12);
          uVar7 = gnu_dev_major(uVar17);
          pcVar9 = PTR_DAT_00016730 + 0x1645c;
          goto LAB_0001645c;
        case 10:
          uVar17 = FUN_000282ec(iVar12);
          uVar7 = gnu_dev_minor(uVar17);
          pcVar9 = PTR_DAT_00016734 + 0x1647a;
LAB_0001645c:
          pbVar16 = abStack_428;
          sprintf((char *)pbVar16,pcVar9,uVar7);
          goto LAB_000163e2;
        default:
          iVar6 = FUN_000230c4();
          if (2 < iVar6) {
            FUN_00022f5c(3,0,PTR_LAB_00018c0e_1_00016774 + 0x166d4,0x181,PTR_DAT_00016778 + 0x166da,
                         PTR_DAT_00016770 + 0x166ce,iVar14);
          }
          break;
        case 0xc:
          iVar14 = FUN_00028b1a(param_1[1]);
          if ((iVar14 != 0) && (iVar14 = FUN_0002835e(), iVar14 != 0)) {
            pbVar16 = (byte *)(iVar14 + 5);
            goto LAB_000163e2;
          }
          break;
        case 0xd:
          pbVar16 = (byte *)param_1[4];
          if (pbVar16 == (byte *)0x0) {
            iVar14 = FUN_0002835e(iVar12);
            if (iVar14 == 0) {
              pbVar16 = (byte *)FUN_000279e8(iVar12);
            }
            else {
              iVar14 = FUN_0002835e(iVar12);
              pbVar16 = (byte *)(iVar14 + 5);
            }
          }
          goto LAB_000163e2;
        case 0xe:
          iVar14 = FUN_00027e94(iVar12);
          if (iVar14 != 0) {
            iVar6 = FUN_0002a8d0();
            puVar10 = PTR_LAB_0001fb34_1_00016764 + 0x16662;
            uVar15 = FUN_00024a44(&local_c30,uVar15,iVar6 + 5);
            for (iVar14 = FUN_0002a868(iVar14); iVar14 != 0; iVar14 = FUN_0002a868(iVar14)) {
              iVar6 = FUN_0002a8d0(iVar14);
              uVar15 = FUN_00024ab8(&local_c30,uVar15,puVar10,iVar6 + 5,0);
            }
          }
          break;
        case 0xf:
          pbVar16 = PTR_LAB_00016310_2_00016768 + 0x166a2;
          goto LAB_000163e2;
        case 0x10:
          pbVar16 = PTR_LAB_000164d0_1_0001676c + 0x166a8;
LAB_000163e2:
          uVar15 = FUN_00024a44(&local_c30,uVar15,pbVar16);
        }
        param_4 = uVar15;
        if (param_5 != '\0') {
          local_c30 = local_c4c;
          uVar7 = 0x400 - uVar15;
          if (local_c48 <= 0x400 - uVar15) {
            uVar7 = local_c48;
          }
          iVar14 = FUN_0002b8e4(local_828,local_c4c,uVar7);
          param_4 = local_c48 - iVar14;
          local_c30 = local_c30 + iVar14;
        }
      }
    }
    else {
      if (bVar1 == 0x25) {
        if (pbVar11[1] == 0x25) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          iVar14 = 0;
          puVar10 = PTR_s_persist_00030743_3_00016720 + 0x1637a;
          do {
            if (puVar10[4] == pbVar11[1]) {
              pbVar16 = pbVar11 + 2;
              iVar14 = *(int *)(puVar4 + iVar14 * 0xc + 0x16256);
              goto LAB_000162b2;
            }
            iVar14 = iVar14 + 1;
            puVar10 = puVar10 + 0xc;
          } while (iVar14 != 0x12);
        }
      }
LAB_00016348:
      if (param_4 == 0) break;
      *local_c30 = *pbVar16;
      local_c30 = local_c30 + 1;
      param_4 = param_4 - 1;
      pbVar11 = pbVar16 + 1;
    }
  }
LAB_00016258:
  *local_c30 = 0;
  return param_4;
LAB_0001633e:
  iVar14 = iVar14 + 1;
  pbVar16 = pbVar11;
  if (iVar14 == 0x12) goto LAB_00016348;
  goto LAB_0001627c;
}



/* ===== FUN_0001677c @ 0001677c size=146 ===== */

undefined4 FUN_0001677c(undefined4 param_1,char *param_2,int *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *__delim;
  char *local_24;
  int *piStack_20;
  
  local_24 = param_2;
  piStack_20 = param_3;
  pcVar1 = strchr(param_2,0x20);
  if (pcVar1 == (char *)0x0) {
    *param_4 = param_2;
    iVar3 = 1;
  }
  else {
    pcVar1 = (char *)(DAT_00016810 + 0x167b4);
    __delim = (char *)(DAT_00016814 + 0x167b8);
    iVar3 = 0;
    local_24 = param_2;
    while ((local_24 != (char *)0x0 && (*local_24 != '\0'))) {
      if (*local_24 == '\'') {
        local_24 = local_24 + 1;
        pcVar2 = strsep(&local_24,__delim);
        param_4[iVar3] = pcVar2;
        if (local_24 != (char *)0x0) {
          for (; *local_24 == ' '; local_24 = local_24 + 1) {
          }
        }
      }
      else {
        pcVar2 = strsep(&local_24,pcVar1);
        param_4[iVar3] = pcVar2;
        if (local_24 != (char *)0x0) {
          for (; *local_24 == ' '; local_24 = local_24 + 1) {
          }
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  param_4[iVar3] = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  return 0;
}



/* ===== FUN_00016818 @ 00016818 size=2628 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00016818(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                int param_6,undefined4 param_7,char **param_8,sigset_t *param_9,int param_10,
                uint param_11)

{
  longlong lVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  __pid_t __pid;
  int iVar6;
  size_t __n;
  char *pcVar7;
  ssize_t sVar8;
  __pid_t _Var9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  epoll_event *__events;
  bool bVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  uint local_1ad4;
  int local_1acc;
  int local_1ab4;
  int local_1ab0;
  int *local_1aac;
  int local_1aa8;
  int local_1aa4;
  int local_1aa0;
  int local_1a9c;
  epoll_event local_1a98;
  epoll_event local_1a88;
  undefined1 local_1a78 [64];
  char *local_1a38 [128];
  undefined1 auStack_1838 [1024];
  char acStack_1438 [1024];
  int local_1038 [1025];
  
  local_1aa8 = *(int *)(PTR_LAB_0001725c + 0x16866);
  local_1a9c = *(int *)(PTR_LAB_0001725c + 0x1686a);
  local_1aa0 = local_1aa8;
  local_1aa4 = local_1a9c;
  FUN_00024ae4(auStack_1838,0x400,param_7);
  FUN_0001677c(*param_1,auStack_1838,0,local_1a38);
  if ((param_10 != 0) || (iVar3 = FUN_000230c4(), 5 < iVar3)) {
    iVar3 = pipe2(&local_1aa8,0x800);
    if (iVar3 == 0) {
      iVar3 = FUN_000230c4();
      if ((iVar3 < 6) || (iVar3 = pipe2(&local_1aa0,0x800), iVar3 == 0)) goto LAB_00016912;
      piVar4 = __errno_location();
      iVar16 = *piVar4;
      iVar5 = FUN_000230c4();
      iVar3 = -iVar16;
      if (iVar5 < 3) goto LAB_00016b1c;
      puVar12 = PTR_LAB_00018aa0_1_0001726c + 0x16900;
      puVar11 = PTR_LAB_000189d8_3_00017270 + 0x16908;
      puVar13 = PTR_DAT_00018934_2_00017274 + 0x1692a;
      uVar14 = 0x2de;
    }
    else {
      piVar4 = __errno_location();
      iVar16 = *piVar4;
      iVar5 = FUN_000230c4();
      iVar3 = -iVar16;
      if (iVar5 < 3) goto LAB_00016b1c;
      puVar12 = PTR_LAB_00018aec_1_00017260 + 0x168b4;
      puVar11 = PTR_LAB_00018a26_1_00017264 + 0x168bc;
      puVar13 = PTR_LAB_00017268 + 0x168de;
      uVar14 = 0x2d7;
    }
LAB_000168c6:
    FUN_00022f5c(3,iVar16,puVar11,uVar14,puVar13,puVar12);
LAB_00016b1c:
    if (-1 < local_1aa8) {
      close(local_1aa8);
    }
    if (-1 < local_1aa4) {
      close(local_1aa4);
    }
    if (-1 < local_1aa0) {
      close(local_1aa0);
    }
    if (-1 < local_1a9c) {
      close(local_1a9c);
    }
    return iVar3;
  }
LAB_00016912:
  pcVar10 = local_1a38[0];
  if (*local_1a38[0] != '/') {
    FUN_00024af4(acStack_1438,0x400,PTR_LAB_00018a80_3_00017278 + 0x1692e,local_1a38[0],0);
    iVar3 = access(acStack_1438,1);
    if (iVar3 != 0) {
      FUN_00024af4(acStack_1438,0x400,PTR_LAB_00018ab0_1_0001727c + 0x16954,local_1a38[0],0);
    }
    iVar3 = access(acStack_1438,1);
    pcVar10 = acStack_1438;
    if (iVar3 != 0) {
      FUN_00024af4(acStack_1438,0x400,PTR_LAB_00018a98_1_00017280 + 0x16970,local_1a38[0],0);
    }
  }
  local_1a38[0] = pcVar10;
  __pid = fork();
  if (__pid == -1) {
    iVar5 = FUN_000230c4();
    iVar3 = -1;
    if (2 < iVar5) {
      piVar4 = __errno_location();
      FUN_00022f5c(3,*piVar4,PTR_DAT_000172b0 + 0x16b0a,0x303,PTR_LAB_000172b4 + 0x16b2e,
                   PTR_LAB_000172ac + 0x16b02,param_7);
    }
    goto LAB_00016b1c;
  }
  if (__pid != 0) {
    if (-1 < local_1aa4) {
      close(local_1aa4);
      local_1aa4 = -1;
    }
    if (-1 < local_1a9c) {
      close(local_1a9c);
      local_1a9c = -1;
    }
    local_1a88.data.ptr = &local_1ab0;
    local_1a98._4_4_ = 0;
    local_1a98.data.ptr = &local_1ab4;
    local_1ab4 = local_1aa8;
    local_1a88._4_4_ = 0;
    local_1ab0 = local_1aa0;
    local_1a98.data.u64._4_4_ = 0;
    local_1a98.events = 1;
    local_1a88.data.u64._4_4_ = 0;
    local_1a88.events = 1;
    if ((local_1aa8 < 0) && (local_1aa0 < 0)) {
      iVar3 = -1;
    }
    else {
      iVar3 = epoll_create1(0x80000);
      if (iVar3 < 0) {
        iVar5 = FUN_000230c4();
        if (2 < iVar5) {
          piVar4 = __errno_location();
          puVar12 = PTR_LAB_000172b8 + 0x16bf8;
          puVar11 = PTR_DAT_000172bc + 0x16c00;
          puVar13 = PTR_DAT_000172c0 + 0x16c3e;
          uVar14 = 0x1d9;
LAB_00016c08:
          iVar5 = *piVar4;
LAB_00016c0a:
          FUN_00022f5c(3,iVar5,puVar11,uVar14,puVar13,puVar12);
        }
      }
      else if ((local_1ab4 < 0) || (iVar5 = epoll_ctl(iVar3,1,local_1ab4,&local_1a98), -1 < iVar5))
      {
        if ((local_1ab0 < 0) || (iVar5 = epoll_ctl(iVar3,1,local_1ab0,&local_1a88), -1 < iVar5)) {
          local_1ad4 = 0;
          puVar11 = PTR_DAT_00017330 + 0x16fc6;
LAB_00016e80:
          do {
            if ((local_1ab4 < 0) && (local_1ab0 < 0)) {
              if (param_10 != 0) {
                *(undefined1 *)(param_10 + local_1ad4) = 0;
              }
              goto LAB_00016c10;
            }
            if (param_4 != 0 || param_3 != 0) {
              lVar21 = FUN_00024db0(1);
              lVar18 = lVar21 - *(longlong *)(param_1 + 0x18);
              uVar15 = (uint)((ulonglong)lVar18 >> 0x20);
              bVar17 = param_4 <= uVar15;
              if (uVar15 == param_4) {
                bVar17 = param_3 <= (uint)lVar18;
              }
              if (!bVar17) {
                lVar21 = (*(longlong *)(param_1 + 0x18) + CONCAT44(param_4,param_3)) - lVar21;
                iVar5 = FUN_0002c6f0((int)lVar21,(int)((ulonglong)lVar21 >> 0x20),1000,0);
                iVar5 = iVar5 + 1000;
                goto LAB_00016d58;
              }
              iVar5 = FUN_000230c4();
              if (2 < iVar5) {
                puVar12 = PTR_DAT_000187a8_2_000172e0 + 0x16d1a;
                puVar11 = PTR_DAT_000172e4 + 0x16d22;
                puVar13 = PTR_DAT_000172e8 + 0x16d62;
                uVar14 = 0x1f9;
LAB_00016d2c:
                FUN_00022f5c(3,0,puVar11,uVar14,puVar13,puVar12,param_7);
              }
              goto LAB_00016c10;
            }
            iVar5 = -1;
LAB_00016d58:
            __events = (epoll_event *)local_1a78;
            iVar5 = epoll_wait(iVar3,__events,4,iVar5);
            if (-1 < iVar5) {
              if (iVar5 == 0) {
                iVar5 = FUN_000230c4();
                if (2 < iVar5) {
                  puVar12 = PTR_DAT_000172f8 + 0x16dbe;
                  puVar11 = PTR_DAT_000172fc + 0x16dc6;
                  puVar13 = PTR_DAT_00017300 + 0x16e06;
                  uVar14 = 0x208;
                  goto LAB_00016d2c;
                }
                goto LAB_00016c10;
              }
              local_1acc = 0;
              do {
                piVar4 = (__events->data).ptr;
                iVar16 = *piVar4;
                if (-1 < iVar16) {
                  if ((__events->events & 1) == 0) {
                    if ((int)(__events->events << 0x1b) < 0) {
                      iVar16 = epoll_ctl(iVar3,2,iVar16,(epoll_event *)0x0);
                      if (iVar16 < 0) {
                        iVar5 = FUN_000230c4();
                        if (iVar5 < 3) goto LAB_00016c10;
                        piVar4 = __errno_location();
                        puVar12 = PTR_DAT_00017324 + 0x16f66;
                        puVar11 = PTR_DAT_00017328 + 0x16f6c;
                        puVar13 = PTR_DAT_0001732c + 0x16faa;
                        uVar14 = 0x233;
                        goto LAB_00016c08;
                      }
                      *piVar4 = -1;
                    }
                  }
                  else {
                    __n = read(iVar16,local_1038,0xfff);
                    if (0 < (int)__n) {
                      *(undefined1 *)((int)local_1038 + __n) = 0;
                      if ((param_10 != 0) && (*piVar4 == local_1ab4)) {
                        if (local_1ad4 + __n < param_11) {
                          memcpy((void *)(local_1ad4 + param_10),local_1038,__n);
                          local_1ad4 = local_1ad4 + __n;
                        }
                        else {
                          iVar16 = FUN_000230c4();
                          if (2 < iVar16) {
                            FUN_00022f5c(3,0,PTR_LAB_00018418_1_00017308 + 0x16eca,0x221,
                                         PTR_DAT_00017310 + 0x16f1c,PTR_DAT_0001730c + 0x16ed8,
                                         param_7,param_11);
                          }
                        }
                      }
                      if (-1 < local_1ab0) {
                        local_1aac = local_1038;
                        pcVar10 = PTR_DAT_00017304 + 0x16e64;
                        while (pcVar7 = strsep((char **)&local_1aac,pcVar10), pcVar7 != (char *)0x0)
                        {
                          if (((local_1aac != (int *)0x0) || (*pcVar7 != '\0')) &&
                             (iVar16 = FUN_000230c4(), 6 < iVar16)) {
                            if (*piVar4 == local_1ab4) {
                              puVar12 = PTR_LAB_00016908_1_00017320 + 0x16f3e;
                            }
                            else {
                              puVar12 = PTR_DAT_00017314 + 0x16f18;
                            }
                            FUN_00022f5c(7,0,PTR_DAT_0001731c + 0x16f2c,0x22d,puVar11,
                                         PTR_DAT_00017318 + 0x16f26,param_7,puVar12,pcVar7);
                          }
                        }
                      }
                    }
                  }
                }
                __events = __events + 1;
                local_1acc = local_1acc + 1;
              } while (local_1acc < iVar5);
              goto LAB_00016e80;
            }
            piVar4 = __errno_location();
            iVar5 = *piVar4;
          } while (iVar5 == 4);
          iVar16 = FUN_000230c4();
          if (2 < iVar16) {
            puVar12 = PTR_LAB_00018742_1_000172ec + 0x16d8e;
            puVar11 = PTR_DAT_000172f0 + 0x16d96;
            puVar13 = PTR_DAT_000172f4 + 0x16dd4;
            uVar14 = 0x205;
            goto LAB_00016c0a;
          }
        }
        else {
          iVar5 = FUN_000230c4();
          if (2 < iVar5) {
            piVar4 = __errno_location();
            puVar12 = PTR_DAT_000172d4 + 0x16cbe;
            puVar11 = PTR_DAT_000172d8 + 0x16cc6;
            puVar13 = PTR_DAT_000172dc + 0x16d04;
            uVar14 = 0x1e8;
            goto LAB_00016c08;
          }
        }
      }
      else {
        iVar5 = FUN_000230c4();
        if (2 < iVar5) {
          piVar4 = __errno_location();
          puVar12 = PTR_DAT_000172c8 + 0x16c7a;
          puVar11 = PTR_DAT_000172cc + 0x16c82;
          puVar13 = PTR_DAT_000172d0 + 0x16cc0;
          uVar14 = 0x1e0;
          goto LAB_00016c08;
        }
      }
    }
LAB_00016c10:
    FUN_00025324(iVar3);
    local_1a78._4_2_ = 1;
    local_1a78._0_4_ = param_1[0x1a];
    puVar11 = PTR_DAT_000172c4 + 0x16c77;
    uVar19 = VectorSub(CONCAT44(param_4,param_3),CONCAT44(param_6,param_5),8);
    do {
      while( true ) {
        while( true ) {
          if (__pid < 1) {
            iVar3 = 0;
            goto LAB_00016b1c;
          }
          if (param_4 == 0 && param_3 == 0) {
            iVar3 = 0;
            iVar5 = -1;
          }
          else {
            lVar21 = FUN_00024db0(1);
            lVar18 = *(longlong *)(param_1 + 0x18);
            uVar15 = (uint)((ulonglong)(lVar21 - lVar18) >> 0x20);
            bVar17 = param_4 <= uVar15;
            if (uVar15 == param_4) {
              bVar17 = param_3 <= (uint)(lVar21 - lVar18);
            }
            if (bVar17) {
              iVar3 = 0;
              iVar5 = 1000;
            }
            else {
              if (param_6 == 0 && param_5 == 0) {
                iVar3 = 0;
              }
              else {
                lVar1 = (lVar18 + CONCAT44(param_6,param_5)) - lVar21;
                iVar3 = FUN_0002c6f0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
                iVar3 = iVar3 + 1000;
              }
              uVar20 = VectorAdd(uVar19,lVar18,8);
              iVar5 = FUN_0002c6f0((uint)uVar20 - (uint)lVar21,
                                   ((int)((ulonglong)uVar20 >> 0x20) -
                                   (int)((ulonglong)lVar21 >> 0x20)) -
                                   (uint)((uint)uVar20 < (uint)lVar21),1000,0);
              iVar5 = iVar5 + 1000;
            }
          }
          iVar3 = poll((pollfd *)local_1a78,1,iVar3);
          if (-1 < iVar3) break;
          piVar4 = __errno_location();
          iVar16 = *piVar4;
          if (iVar16 != 4) {
            iVar5 = FUN_000230c4();
            iVar3 = -iVar16;
            if (iVar5 < 3) goto LAB_00016b1c;
            puVar12 = PTR_DAT_00017334 + 0x17040;
            puVar11 = PTR_DAT_00017338 + 0x17046;
            puVar13 = PTR_DAT_0001733c + 0x1708f;
            uVar14 = 0x264;
            goto LAB_000168c6;
          }
        }
        if (iVar3 == 0) break;
LAB_00017104:
        if (((int)((uint)(ushort)local_1a78._6_2_ << 0x1f) < 0) &&
           (sVar8 = read(param_1[0x1a],local_1038,0x80), sVar8 == 0x80)) {
          if (local_1038[0] == 0xf) {
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          else if ((local_1038[0] == 0x11) &&
                  (_Var9 = waitpid(__pid,(int *)&local_1a88,1), uVar2 = local_1a88.events,
                  -1 < _Var9)) {
            uVar15 = local_1a88.events & 0x7f;
            iVar3 = FUN_000230c4();
            if (uVar15 == 0) {
              if (6 < iVar3) {
                FUN_00022f5c(7,0,PTR_LAB_0001817c_1_00017364 + 0x17166,0x289,
                             PTR_LAB_00017368 + 0x171b5,PTR_DAT_00017360 + 0x17160,param_7,__pid,
                             (uVar2 & 0xffff) >> 8);
              }
              iVar3 = -(uint)((local_1a88.events >> 8 & 0xff) != 0);
            }
            else {
              if ((uVar2 & 0xffff) - 1 < 0xff) {
                if (2 < iVar3) {
                  pcVar10 = strsignal(uVar15);
                  FUN_00022f5c(3,0,PTR_LAB_0001812e_1_00017370 + 0x171b4,0x28d,
                               PTR_LAB_00017374 + 0x17201,PTR_DAT_0001736c + 0x171ae,param_7,__pid,
                               uVar15,pcVar10);
                }
              }
              else if ((uVar2 & 0xff) == 0x7f) {
                if (2 < iVar3) {
                  puVar12 = PTR_DAT_00017378 + 0x171e2;
                  puVar11 = PTR_LAB_000180f8_3_0001737c + 0x171e8;
                  puVar13 = PTR_LAB_00017380 + 0x17235;
                  uVar14 = 0x290;
LAB_000171f4:
                  FUN_00022f5c(3,0,puVar11,uVar14,puVar13,puVar12,param_7,__pid);
                }
              }
              else if (uVar2 == 0xffff) {
                if (2 < iVar3) {
                  puVar12 = PTR_DAT_00017384 + 0x17212;
                  puVar11 = PTR_LAB_000180c8_3_00017388 + 0x17218;
                  puVar13 = PTR_LAB_0001738c + 0x17265;
                  uVar14 = 0x293;
                  goto LAB_000171f4;
                }
              }
              else if (2 < iVar3) {
                FUN_00022f5c(3,0,PTR_LAB_000180a6_1_00017394 + 0x1723c,0x296,
                             PTR_LAB_00017ffc_2_00017398 + 0x17289,PTR_DAT_00017390 + 0x17236,
                             param_7,__pid,uVar2);
              }
              iVar3 = -1;
            }
            goto LAB_00016b1c;
          }
        }
      }
      iVar3 = FUN_000230c4();
      if (3 < iVar3) {
        FUN_00022f5c(4,0,PTR_LAB_0001825a_1_00017344 + 0x17088,0x268,PTR_LAB_00017348 + 0x170d5,
                     PTR_DAT_00017340 + 0x17082,param_7,__pid);
      }
      iVar3 = poll((pollfd *)local_1a78,1,iVar5);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar3 = FUN_000230c4();
          if (2 < iVar3) {
            FUN_00022f5c(3,0,PTR_DAT_000181ec_1_0001735c + 0x170f6,0x273,puVar11,
                         PTR_DAT_00017358 + 0x170ec,param_7,__pid);
          }
          kill(__pid,9);
        }
        goto LAB_00017104;
      }
      piVar4 = __errno_location();
      iVar16 = *piVar4;
    } while (iVar16 == 4);
    iVar5 = FUN_000230c4();
    iVar3 = -iVar16;
    if (iVar5 < 3) goto LAB_00016b1c;
    puVar12 = PTR_s_KzD_DX3_0001734c + 0x170c6;
    puVar11 = PTR_DAT_00017350 + 0x170cc;
    puVar13 = PTR_LAB_00017354 + 0x17115;
    uVar14 = 0x26f;
    goto LAB_000168c6;
  }
  if (-1 < local_1aa8) {
    close(local_1aa8);
    local_1aa8 = -1;
  }
  if (-1 < local_1aa0) {
    close(local_1aa0);
    local_1aa0 = -1;
  }
  iVar3 = FUN_000230c4();
  if (6 < iVar3) {
    FUN_00022f5c(7,0,PTR_LAB_0001890c_1_00017288 + 0x169d6,0x2fc,PTR_LAB_0001728c + 0x169fa,
                 PTR_LAB_00017284 + 0x169ce,param_7);
  }
  iVar5 = local_1a9c;
  iVar3 = local_1aa4;
  iVar16 = open64(PTR_LAB_00017290 + 0x169f2,2);
  piVar4 = __errno_location();
  if (iVar16 < 0) {
    iVar6 = FUN_000230c4();
    if (2 < iVar6) {
      FUN_00022f5c(3,*piVar4,PTR_LAB_0001880e_1_000172a4 + 0x16ad4,0x1a7,
                   PTR_LAB_00018768_2_000172a8 + 0x16b07,PTR_BYTE_000172a0 + 0x16acc);
    }
    if (-1 < iVar3) goto LAB_00016a30;
LAB_00016a3e:
    if (iVar5 < 0) goto LAB_00016a52;
  }
  else {
    dup2(iVar16,0);
    if (-1 < iVar3) {
      if (-1 < iVar5) goto LAB_00016a30;
LAB_00016a24:
      dup2(iVar16,2);
      if (iVar3 < 0) goto LAB_00016a52;
LAB_00016a30:
      dup2(iVar3,1);
      FUN_00025324(iVar3);
      goto LAB_00016a3e;
    }
    dup2(iVar16,1);
    if (iVar5 < 0) goto LAB_00016a24;
  }
  dup2(iVar5,2);
  FUN_00025324(iVar5);
LAB_00016a52:
  prctl(1,0xf);
  if (param_9 != (sigset_t *)0x0) {
    sigprocmask(2,param_9,(sigset_t *)0x0);
  }
  execve(local_1a38[0],local_1a38,param_8);
  iVar3 = FUN_000230c4();
  if (2 < iVar3) {
    FUN_00022f5c(3,*piVar4,PTR_LAB_00018854_1_00017294 + 0x16a8e,0x1bd,PTR_LAB_0001729c + 0x16acd,
                 PTR_LAB_000189b0_2_00017298 + 0x16a94,local_1a38[0],param_7);
  }
  FUN_00025324(iVar16);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}



/* ===== FUN_00017c98 @ 00017c98 size=660 ===== */

int FUN_00017c98(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *__from;
  char *local_8b4;
  stat64 sStack_8b0;
  char local_848 [1024];
  char acStack_448 [1060];
  char *pcVar11;
  
  __from = local_848;
  iVar6 = 0;
  local_848[0] = '\0';
  iVar2 = 0;
  while( true ) {
    cVar1 = param_2[iVar6];
    if ((cVar1 == '\0') || (cVar1 != param_3[iVar6])) break;
    iVar6 = iVar6 + 1;
    if (cVar1 == '/') {
      iVar2 = iVar6;
    }
  }
  uVar5 = 0x400;
  iVar7 = DAT_00017f2c + 0x17cca;
  pcVar11 = param_3 + iVar6;
  local_8b4 = __from;
  while( true ) {
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    if (cVar1 == '\0') break;
    pcVar11 = pcVar10;
    if (cVar1 == '/') {
      uVar5 = FUN_00024a44(&local_8b4,uVar5,iVar7);
    }
  }
  iVar2 = FUN_00024ae4(local_8b4,uVar5,param_2 + iVar2);
  if (iVar2 == 0) {
    return -0x16;
  }
  iVar2 = lstat64(param_3,&sStack_8b0);
  if (iVar2 == 0) {
    if ((sStack_8b0.st_mode & 0xb000) == 0x2000) {
      iVar2 = FUN_000230c4();
      if (iVar2 < 3) goto LAB_00017d0c;
      iVar8 = DAT_00017f30 + 0x17d42;
      iVar7 = DAT_00017f34 + 0x17d48;
      iVar9 = DAT_00017f38 + 0x17d4e;
      uVar5 = 0x45;
      iVar6 = 0;
      iVar2 = 0;
      __from = param_3;
    }
    else {
      if ((sStack_8b0.st_mode & 0xf000) == 0xa000) {
        sVar3 = readlink(param_3,acStack_448,0x400);
        if (sVar3 - 1U < 0x3ff) {
          acStack_448[sVar3] = '\0';
          iVar2 = strcmp(__from,acStack_448);
          if (iVar2 == 0) {
            iVar2 = FUN_000230c4();
            if (6 < iVar2) {
              FUN_00022f5c(7,0,DAT_00017f40 + 0x17da6,0x4f,DAT_00017f44 + 0x17dac,
                           DAT_00017f3c + 0x17da0,param_3,__from);
            }
            FUN_000227cc(param_3,1,0);
            utimensat(-100,param_3,(timespec *)0x0,0x100);
            return 0;
          }
        }
      }
LAB_00017e34:
      iVar2 = FUN_000230c4();
      if (6 < iVar2) {
        FUN_00022f5c(7,0,DAT_00017f58 + 0x17e4e,0x66,DAT_00017f5c + 0x17e52,DAT_00017f54 + 0x17e48,
                     param_3);
      }
      param_2 = acStack_448;
      uVar5 = FUN_0002846c(param_1);
      FUN_00024af4(param_2,0x420,param_3,DAT_00017f60 + 0x17e76,uVar5,0);
      unlink(param_2);
      do {
        iVar2 = FUN_00023204(param_2,0x1ed);
        if ((iVar2 != 0) && (iVar2 != -2)) goto LAB_00017efe;
        FUN_00023e94(param_2,0xa000);
        iVar2 = symlink(__from,param_2);
        if (iVar2 == 0) {
          FUN_00023e98();
          goto LAB_00017ea8;
        }
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        FUN_00023e98();
      } while (iVar2 == 2);
      if (iVar2 == 0) {
LAB_00017ea8:
        iVar2 = rename(param_2,param_3);
        if (iVar2 != 0) {
          iVar6 = FUN_000230c4();
          if (2 < iVar6) {
            piVar4 = __errno_location();
            FUN_00022f5c(3,*piVar4,DAT_00017f68 + 0x17ed2,0x79,DAT_00017f6c + 0x17ed8,
                         DAT_00017f64 + 0x17ecc,param_2,param_3);
          }
          unlink(param_2);
          return iVar2;
        }
        goto LAB_00017d0c;
      }
      iVar2 = -iVar2;
LAB_00017efe:
      iVar6 = FUN_000230c4();
      if (iVar6 < 3) {
        return iVar2;
      }
      piVar4 = __errno_location();
      iVar8 = DAT_00017f70 + 0x17f14;
      iVar7 = DAT_00017f74 + 0x17f1a;
      iVar9 = DAT_00017f78 + 0x17f20;
      uVar5 = 0x74;
      iVar6 = *piVar4;
    }
    FUN_00022f5c(3,iVar6,iVar7,uVar5,iVar9,iVar8,__from,param_2);
  }
  else {
    iVar2 = FUN_000230c4();
    if (6 < iVar2) {
      FUN_00022f5c(7,0,DAT_00017f4c + 0x17de8,0x57,DAT_00017f50 + 0x17dee,DAT_00017f48 + 0x17de2,
                   param_3,__from);
    }
    do {
      iVar2 = FUN_00023204(param_3,0x1ed);
      if ((iVar2 != 0) && (iVar2 != -2)) goto LAB_00017e34;
      FUN_00023e94(param_3,0xa000);
      iVar2 = symlink(__from,param_3);
      if (iVar2 == 0) {
        FUN_00023e98();
        return 0;
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      FUN_00023e98();
    } while (iVar2 == 2);
    if (iVar2 != 0) goto LAB_00017e34;
LAB_00017d0c:
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00017f7c @ 00017f7c size=570 ===== */

void FUN_00017f7c(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  DIR *__dirp;
  dirent64 *pdVar4;
  int iVar5;
  char *__s2;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  char *__s1;
  undefined1 auStack_1428 [1024];
  char acStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  char acStack_828 [2052];
  
  FUN_0002b870(param_2 + 4,auStack_1428,0x400);
  FUN_00024af4(acStack_1028,0x400,DAT_000181bc + 0x17fae,auStack_1428,0);
  uVar1 = FUN_0002846c(param_1);
  FUN_00024af4(acStack_828,0x800,acStack_1028,DAT_000181c0 + 0x17fcc,uVar1,0);
  if ((param_3 == 0) && (iVar2 = unlink(acStack_828), iVar2 == 0)) {
    rmdir(acStack_1028);
  }
  uVar1 = FUN_00027880(param_1);
  if (param_3 == 0) {
    puVar12 = (undefined1 *)0x0;
    iVar2 = 0;
  }
  else {
    puVar12 = auStack_c28;
    iVar2 = FUN_0002919a(param_1);
    uVar3 = FUN_0002835e(param_1);
    FUN_00024ae4(puVar12,0x400,uVar3);
  }
  __dirp = opendir(acStack_1028);
  if (__dirp != (DIR *)0x0) {
    iVar10 = DAT_000181c4 + 0x18026;
    iVar11 = DAT_000181c8 + 0x18039;
    while ((pdVar4 = readdir64(__dirp), pdVar4 != (dirent64 *)0x0 && (pdVar4->d_name[0] != '\0'))) {
      if (pdVar4->d_name[0] != '.') {
        iVar5 = FUN_000230c4();
        __s1 = pdVar4->d_name;
        if (6 < iVar5) {
          FUN_00022f5c(7,0,iVar10,0x9a,iVar11,DAT_000181cc + 0x1805e,__s1,acStack_1028);
        }
        __s2 = (char *)FUN_0002846c(param_1);
        iVar5 = strcmp(__s1,__s2);
        if ((iVar5 != 0) && (iVar5 = FUN_000289b0(uVar1,__s1), iVar5 != 0)) {
          iVar6 = FUN_0002835e();
          if ((iVar6 != 0) &&
             ((puVar12 == (undefined1 *)0x0 || (iVar8 = FUN_0002919a(iVar5), iVar2 < iVar8)))) {
            iVar2 = FUN_000230c4();
            if (6 < iVar2) {
              uVar3 = FUN_0002792c(iVar5);
              uVar7 = FUN_0002919a(iVar5);
              FUN_00022f5c(7,0,DAT_000181d4 + 0x180ba,0xa8,DAT_000181d8 + 0x180cb,
                           DAT_000181d0 + 0x180b4,uVar3,uVar7,acStack_1028);
            }
            puVar12 = auStack_c28;
            iVar2 = FUN_0002919a(iVar5);
            FUN_00024ae4(puVar12,0x400,iVar6);
          }
          FUN_00027894(iVar5);
        }
      }
    }
    closedir(__dirp);
  }
  iVar2 = FUN_000230c4();
  if (puVar12 == (undefined1 *)0x0) {
    if (6 < iVar2) {
      FUN_00022f5c(7,0,DAT_000181e0 + 0x18122,0xc6,DAT_000181e4 + 0x18149,DAT_000181dc + 0x1811c,
                   param_2);
    }
    iVar2 = unlink(param_2);
    if (iVar2 == 0) {
      FUN_000257cc(param_2,DAT_000181e8 + 0x1813e);
    }
  }
  else {
    if (6 < iVar2) {
      FUN_00022f5c(7,0,DAT_000181f0 + 0x18192,0xca,DAT_000181f4 + 0x181bb,DAT_000181ec + 0x1818c,
                   param_2,puVar12);
    }
    FUN_00017c98(param_1,puVar12,param_2);
  }
  iVar2 = DAT_000181b8;
  if (param_3 != 0) {
    do {
      iVar10 = FUN_000233f4(acStack_828,0x1ed);
      if ((iVar10 != 0) && (iVar10 != -2)) {
        return;
      }
      iVar11 = open64(acStack_828,iVar2,0x124);
      if (iVar11 < 0) {
        piVar9 = __errno_location();
        iVar10 = -*piVar9;
      }
      else {
        close(iVar11);
      }
    } while (iVar10 == -2);
  }
  return;
}



/* ===== FUN_00018730 @ 00018730 size=118 ===== */

void FUN_00018730(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *__s2;
  ulonglong uVar6;
  char acStack_410 [1024];
  
  for (iVar2 = FUN_00027e94(); iVar1 = DAT_000187a8, iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
    uVar5 = FUN_0002a8d0(iVar2);
    FUN_00017f7c(param_1,uVar5,0);
  }
  __s1 = (char *)FUN_000283b4(param_1);
  __s2 = (char *)(iVar1 + 0x1874c);
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    __s2 = (char *)(DAT_000187ac + 0x18758);
  }
  uVar6 = FUN_000282ec(param_1);
  uVar3 = gnu_dev_major(uVar6);
  uVar6 = FUN_000282ec(param_1);
  uVar4 = gnu_dev_minor(uVar6);
  snprintf(acStack_410,0x400,(char *)(DAT_000187b0 + 0x1877a),__s2,uVar3,uVar4);
  unlink(acStack_410);
  return;
}



/* ===== FUN_0001882c @ 0001882c size=248 ===== */

undefined4 FUN_0001882c(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  byte *__s;
  uint uVar6;
  byte *__s_00;
  int *piVar7;
  int iVar8;
  
  piVar7 = *(int **)(DAT_00018924 + 0x18834 + DAT_00018928);
  pbVar3 = param_2;
  do {
    __s = pbVar3;
    uVar6 = (uint)*__s;
    uVar2 = *(ushort *)(*piVar7 + uVar6 * 2);
    pbVar3 = __s + 1;
  } while ((uVar2 & 0x20) != 0);
  if (((uVar6 != 0x23) && (uVar6 != 0)) &&
     (pbVar3 = (byte *)strchr((char *)__s,0x3d), pbVar3 != (byte *)0x0)) {
    *pbVar3 = (byte)uVar2 & 0x20;
    iVar8 = *piVar7;
    pbVar3 = pbVar3 + 1;
    do {
      __s_00 = pbVar3;
      pbVar3 = __s_00 + 1;
    } while ((int)((uint)*(ushort *)(iVar8 + (uint)*__s_00 * 2) << 0x1a) < 0);
    sVar4 = strlen((char *)__s);
    if (sVar4 != 0) {
      do {
        sVar5 = sVar4;
        sVar4 = sVar5 - 1;
        uVar2 = *(ushort *)(iVar8 + (uint)__s[sVar4] * 2);
      } while ((uVar2 & 0x20) != 0);
      __s[sVar5] = (byte)uVar2 & 0x20;
      sVar4 = strlen((char *)__s_00);
      if (sVar4 != 0) {
        do {
          sVar5 = sVar4;
          sVar4 = sVar5 - 1;
          uVar2 = *(ushort *)(*piVar7 + (uint)__s_00[sVar4] * 2);
        } while ((uVar2 & 0x20) != 0);
        __s_00[sVar5] = (byte)uVar2 & 0x20;
        if (sVar5 != 0) {
          bVar1 = *__s_00;
          if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
            if (__s_00[sVar4] != bVar1) {
              iVar8 = FUN_000230c4();
              if (iVar8 < 7) {
                return 0xffffffff;
              }
              FUN_00022f5c(7,0,DAT_00018930 + 0x188f4,0x266,DAT_00018934 + 0x188fa,
                           DAT_0001892c + 0x188ee,param_2);
              return 0xffffffff;
            }
            __s_00[sVar4] = 0;
            __s_00 = __s_00 + 1;
          }
          FUN_0002852c(param_1,__s,__s_00);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00018938 @ 00018938 size=204 ===== */

undefined4 FUN_00018938(int param_1,int param_2,char *param_3)

{
  int iVar1;
  size_t __n;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char acStack_418 [1024];
  
  pcVar4 = (char *)(**(int **)(param_1 + 0x20) + *(int *)(param_2 + 4));
  if (param_3 == (char *)0x0) {
    param_3 = (char *)(DAT_00018a0c + 0x18954);
  }
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
    return 0xffffffff;
  case 2:
    iVar1 = fnmatch(pcVar4,param_3,0);
    break;
  case 3:
    __n = strlen(param_3);
    while (pcVar5 = strchr(pcVar4,0x7c), pcVar5 != (char *)0x0) {
      if ((__n == (int)pcVar5 - (int)pcVar4) && (iVar1 = strncmp(pcVar4,param_3,__n), iVar1 == 0))
      goto LAB_000189a0;
      pcVar4 = pcVar5 + 1;
    }
  case 1:
    iVar1 = strcmp(pcVar4,param_3);
    break;
  case 4:
    FUN_00024ae4(acStack_418,0x400,pcVar4);
    pcVar4 = acStack_418;
    do {
      pcVar3 = strchr(pcVar4,0x7c);
      pcVar5 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        pcVar5 = pcVar3 + 1;
        *pcVar3 = '\0';
      }
      iVar1 = fnmatch(pcVar4,param_3,0);
    } while ((iVar1 != 0) && (pcVar4 = pcVar5, pcVar5 != (char *)0x0));
    break;
  case 5:
    bVar6 = *param_3 != '\0';
    goto LAB_00018972;
  default:
    goto switchD_00018958_default;
  }
  bVar6 = iVar1 == 0;
LAB_00018972:
  if (bVar6) {
LAB_000189a0:
    iVar1 = *(byte *)(param_2 + 1) - 1;
  }
  else {
switchD_00018958_default:
    iVar1 = *(byte *)(param_2 + 1) - 2;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00018a10 @ 00018a10 size=240 ===== */

void FUN_00018a10(int param_1,byte *param_2,undefined4 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  byte *__s;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *unaff_r6;
  int *piVar10;
  int iVar11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  undefined1 *unaff_pc;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined4 in_cr15;
  byte abStack_229 [517];
  
  iVar9 = DAT_00018b04 + 0x18a2c;
  pbVar7 = (byte *)(**(int **)(param_1 + 0x20) + *(int *)(param_4 + 8));
  uVar8 = (uint)(*(byte *)(param_4 + 3) >> 4);
  if (uVar8 == 2) goto LAB_00018a4e;
  if (uVar8 == 3) {
    __s = abStack_229 + 1;
    iVar5 = FUN_0002b608(*param_3,pbVar7,__s,0x200,1);
    uVar12 = iVar5 < 0;
    uVar13 = iVar5 == 0;
    uVar14 = true;
    param_2 = __s;
    in_r12 = extraout_r12_01;
    if ((bool)uVar13) goto LAB_00018a6c;
  }
  else {
    uVar14 = uVar8 != 0;
    uVar12 = (int)(uVar8 - 1) < 0;
    uVar13 = false;
    if (uVar8 == 1) goto LAB_00018a60;
  }
  do {
    param_3 = (undefined4 *)0xffffffff;
    while( true ) {
      if ((bool)uVar12) {
        coprocessor_store(2,in_cr15,in_r12 + -0x34);
      }
      if ((bool)uVar14 && !(bool)uVar13) {
        software_interrupt(0xf0e8bd);
      }
LAB_00018a4e:
      pbVar7 = unaff_r6;
      puVar1 = (undefined1 *)0x3c8;
      puVar2 = (undefined1 *)0x3d8;
      lVar16 = 8;
      puVar15 = unaff_pc;
      while( true ) {
        *puVar15 = *puVar1;
        puVar15[1] = *puVar2;
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined1 *)0x3d0;
      puVar2 = (undefined1 *)0x3e0;
      lVar16 = 8;
      while( true ) {
        *puVar15 = *puVar1;
        puVar15[1] = *puVar2;
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      unaff_pc = unaff_pc + (int)param_3;
      func_0xff856a58();
      unaff_r6 = pbVar7;
LAB_00018a60:
      __s = (byte *)FUN_00027a0c(param_2,pbVar7);
      uVar12 = (int)__s < 0;
      uVar13 = __s == (byte *)0x0;
      uVar14 = true;
      param_2 = __s;
      in_r12 = extraout_r12;
      if ((bool)uVar13) break;
LAB_00018a6c:
      uVar14 = 1;
      sVar4 = strlen((char *)__s);
      param_2 = __s;
      if (sVar4 != 0) {
        piVar10 = *(int **)(iVar9 + DAT_00018b08);
        iVar9 = sVar4 - 1;
        iVar11 = *piVar10;
        uVar3 = *(ushort *)(iVar11 + (uint)__s[iVar9] * 2);
        uVar14 = (uVar3 & 0x40) != 0;
        iVar5 = (uint)uVar3 << 0x1a;
        uVar12 = iVar5 < 0;
        uVar13 = iVar5 == 0;
        if ((bool)uVar12) {
          unaff_r6 = (byte *)(**(int **)(param_1 + 0x20) + *(int *)(param_4 + 4));
          sVar6 = strlen((char *)unaff_r6);
          if (sVar6 != 0) {
            uVar3 = *(ushort *)(iVar11 + (uint)(unaff_r6 + sVar6)[-1] * 2);
            uVar14 = (uVar3 & 0x40) != 0;
            iVar5 = (uint)uVar3 << 0x1a;
            uVar12 = iVar5 < 0;
            uVar13 = iVar5 == 0;
            unaff_r6 = unaff_r6 + sVar6;
            if (!(bool)uVar12) {
              param_2 = abStack_229 + 1;
              if (__s != param_2) {
                FUN_00024ae4(param_2,0x200,__s);
              }
              iVar5 = *piVar10;
              pbVar7 = param_2 + iVar9;
              do {
                sVar4 = sVar4 - 1;
                uVar3 = *(ushort *)(iVar5 + (uint)*pbVar7 * 2);
                uVar14 = (uVar3 & 0x40) != 0;
                iVar11 = (uint)uVar3 << 0x1a;
                uVar12 = iVar11 < 0;
                uVar13 = iVar11 == 0;
                unaff_r6 = param_2;
                if (!(bool)uVar12) break;
                *pbVar7 = 0;
                uVar12 = (int)sVar4 < 0;
                uVar13 = sVar4 == 0;
                uVar14 = 1;
                pbVar7 = pbVar7 + -1;
              } while (!(bool)uVar13);
            }
          }
        }
      }
      param_3 = (undefined4 *)FUN_00018938(param_1,param_4,param_2);
      in_r12 = extraout_r12_00;
    }
  } while( true );
}



/* ===== FUN_0001a7b0 @ 0001a7b0 size=162 ===== */

undefined4 FUN_0001a7b0(char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  DIR *__dirp;
  dirent64 *pdVar3;
  int iVar4;
  char *__needle;
  int iVar5;
  stat64 sStack_488;
  char acStack_420 [1028];
  
  __needle = (char *)(DAT_0001a854 + 0x1a7c0);
  pcVar1 = strstr(param_1,__needle);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_00024ae4(acStack_420,0x400,param_1);
    pcVar1 = strstr(acStack_420,__needle);
    if (pcVar1 == (char *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      *pcVar1 = '\0';
      __dirp = opendir(acStack_420);
      if (__dirp == (DIR *)0x0) {
        uVar2 = 0;
      }
      else {
        pdVar3 = readdir64(__dirp);
        iVar5 = DAT_0001a858 + 0x1a80a;
        while (pdVar3 != (dirent64 *)0x0) {
          if (pdVar3->d_name[0] != '.') {
            FUN_00024af4(param_1,0x400,acStack_420,iVar5,pdVar3->d_name,pcVar1 + 2,0);
            iVar4 = stat64(param_1,&sStack_488);
            if (iVar4 == 0) {
              uVar2 = 1;
              goto LAB_0001a840;
            }
          }
          pdVar3 = readdir64(__dirp);
        }
        uVar2 = 0;
LAB_0001a840:
        closedir(__dirp);
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0001a85c @ 0001a85c size=40 ===== */

undefined4 FUN_0001a85c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x14));
    FUN_000246c6(*(undefined4 *)((int)param_1 + 0x20));
    free(*(void **)((int)param_1 + 0x24));
    free(*(void **)((int)param_1 + 0x30));
    free(param_1);
  }
  return 0;
}



/* ===== FUN_0001aa28 @ 0001aa28 size=5122 ===== */

undefined4
FUN_0001aa28(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,int param_6,undefined4 param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  undefined4 uVar8;
  stat64 **ppsVar9;
  FILE *pFVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 extraout_r1;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  char *__needle;
  stat64 *psVar21;
  stat64 **__s;
  byte *pbVar22;
  int iVar23;
  stat64 *psVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  uint local_48c0;
  int local_48bc;
  timespec local_48a8;
  stat64 sStack_48a0;
  char local_4838 [1024];
  stat64 *local_4438 [256];
  stat64 local_4038 [157];
  
  iVar16 = DAT_0001af34 + 0x1aa50;
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0xffffffff;
  }
  pcVar4 = (char *)FUN_00027a00(param_2[1]);
  local_48bc = strcmp(pcVar4,(char *)(DAT_0001af38 + 0x1aa66));
  if (local_48bc != 0) {
    uVar26 = FUN_000282ec(param_2[1]);
    uVar5 = gnu_dev_major(uVar26);
    if (uVar5 == 0) {
      iVar6 = FUN_000282d8(param_2[1]);
      if (iVar6 < 1) {
        local_48bc = 0;
      }
      else {
        local_48bc = 1;
      }
    }
    else {
      local_48bc = 1;
    }
  }
  pbVar18 = *(byte **)(param_1 + 0x14);
  local_48c0 = 0;
  iVar6 = DAT_0001af3c + 0x1ab16;
  pbVar15 = pbVar18;
LAB_0001aa9c:
  pbVar19 = pbVar15;
  bVar1 = *pbVar19;
  switch(bVar1) {
  case 0:
  case 0xe:
  case 0x14:
  case 0x1e:
    iVar13 = FUN_000230c4();
    if (2 < iVar13) {
      FUN_00022f5c(3,0,DAT_0001c09c + 0x1c00e,0xa36,DAT_0001c0a0 + 0x1c08e,DAT_0001c098 + 0x1c008,
                   bVar1);
    }
    goto switchD_0001ae30_default;
  case 1:
    pbVar18 = pbVar19;
    if (local_48bc == 0) {
      if ((int)((uint)pbVar19[1] << 0x1f) < 0) goto switchD_0001ae30_default;
      local_48c0 = 0;
    }
    else {
      local_48c0 = 0;
    }
    break;
  case 2:
    iVar13 = FUN_00027a00(param_2[1]);
    goto LAB_0001ab82;
  case 3:
    iVar13 = FUN_00027926(param_2[1]);
    goto LAB_0001ab82;
  case 4:
    iVar13 = FUN_000279e8(param_2[1]);
    goto LAB_0001ab82;
  case 5:
    for (iVar13 = FUN_00027e94(param_2[1]); iVar13 != 0; iVar13 = FUN_0002a868(iVar13)) {
      iVar12 = FUN_0002a8d0(iVar13);
      iVar12 = FUN_00018938(param_1,pbVar19,iVar12 + 5);
      if (iVar12 == 0) goto switchD_0001aaa4_caseD_2b;
    }
    goto switchD_0001ae30_default;
  case 6:
    iVar13 = param_2[4];
    goto LAB_0001ab82;
  case 7:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = FUN_00029048(param_2[1],iVar12);
    if (iVar13 == 0) {
      if (param_6 != 0) {
        uVar14 = FUN_0002a854(param_6);
        iVar13 = FUN_0002a8b2(uVar14,iVar12);
        if ((iVar13 != 0) && (iVar13 = FUN_0002a8d6(), iVar13 != 0)) goto LAB_0001ab82;
      }
      iVar13 = DAT_0001af40 + 0x1abb0;
    }
    goto LAB_0001ab82;
  case 8:
    for (iVar13 = FUN_00027f02(param_2[1]); iVar13 != 0; iVar13 = FUN_0002a868(iVar13)) {
      iVar12 = **(int **)(param_1 + 0x20);
      iVar23 = *(int *)(pbVar19 + 4);
      pcVar4 = (char *)FUN_0002a8d0(iVar13);
      iVar12 = strcmp((char *)(iVar12 + iVar23),pcVar4);
      if (iVar12 == 0) goto switchD_0001aaa4_caseD_2b;
    }
    goto LAB_0001abda;
  case 9:
    iVar13 = FUN_000283b4(param_2[1]);
    goto LAB_0001ab82;
  case 10:
    iVar13 = FUN_00027832(param_2[1]);
    goto LAB_0001ab82;
  case 0xb:
    ppsVar9 = (stat64 **)local_4838;
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),ppsVar9,0x400);
    local_4038[0].st_dev._0_1_ = '\0';
    if (local_4838[0] != '/') {
      uVar14 = FUN_0002792c(param_2[1]);
      FUN_00024af4(local_4038,0x400,uVar14,0);
      ppsVar9 = local_4438;
      FUN_00024af4(ppsVar9,0x400,local_4038,DAT_0001af44 + 0x1ac6a);
    }
    iVar12 = 500;
    iVar13 = DAT_0001af48 + 0x1ace8;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      local_48a8.tv_sec = 0;
      local_48a8.tv_nsec = DAT_0001af30;
      iVar23 = stat64((char *)ppsVar9,&sStack_48a0);
      if (iVar23 == 0) {
        iVar13 = FUN_000230c4();
        if (6 < iVar13) {
          FUN_00022f5c(7,0,DAT_0001af4c + 0x1acc0,0x2c4,DAT_0001af54 + 0x1ad38,
                       DAT_0001af50 + 0x1acc4,ppsVar9,499 - iVar12);
        }
        goto switchD_0001aaa4_caseD_2b;
      }
      if (((char)local_4038[0].st_dev != '\0') &&
         (iVar23 = stat64((char *)local_4038,&sStack_48a0), iVar23 != 0)) {
        iVar13 = FUN_000230c4();
        if (iVar13 < 7) goto LAB_0001abda;
        iVar13 = DAT_0001af5c + 0x1ad04;
        uVar27 = CONCAT44(DAT_0001af58 + 0x1acfe,DAT_0001af60 + 0x1ad76);
        uVar14 = 0x2c9;
        goto LAB_0001ad0e;
      }
      iVar23 = FUN_000230c4();
      if (6 < iVar23) {
        FUN_00022f5c(7,0,DAT_0001af68 + 0x1ad36,0x2cc,iVar13,DAT_0001af64 + 0x1ad30,ppsVar9,0x14);
      }
      nanosleep(&local_48a8,(timespec *)0x0);
    }
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      iVar13 = DAT_0001af70 + 0x1ad66;
      uVar27 = CONCAT44(DAT_0001af6c + 0x1ad60,DAT_0001af74 + 0x1add8);
      uVar14 = 0x2cf;
LAB_0001ad0e:
      FUN_00022f5c(7,0,iVar13,uVar14,uVar27,ppsVar9);
    }
    goto LAB_0001abda;
  case 0xc:
    iVar13 = FUN_00018a10(param_1,param_2[1],param_2,pbVar19);
    goto LAB_0001ad7e;
  case 0xd:
    local_4438[0] = (stat64 *)0x0;
    FUN_0001621e(param_2,*(int *)(pbVar19 + 8) + **(int **)(param_1 + 0x20),local_4038,0x400);
    FUN_00024b24(local_4038);
    iVar13 = FUN_00024c20(local_4038,local_4438);
    if (-1 < iVar13) {
      sVar7 = strlen((char *)local_4438[0]);
      while ((sVar7 != 0 &&
             (sVar7 = sVar7 - 1,
             (int)((uint)*(ushort *)
                          (**(int **)(iVar16 + DAT_0001af78) +
                          (uint)*(byte *)((int)local_4438[0] + sVar7) * 2) << 0x1a) < 0))) {
        *(undefined1 *)((int)local_4438[0] + sVar7) = 0;
      }
      iVar13 = FUN_00018938(param_1,pbVar19);
      if (iVar13 == 0) {
        free(local_4438[0]);
        break;
      }
    }
    free(local_4438[0]);
    goto switchD_0001ae30_default;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    for (pbVar15 = pbVar19; *pbVar15 - 0xf < 5; pbVar15 = pbVar15 + 0xc) {
    }
    param_2[2] = param_2[1];
    pbVar22 = pbVar19;
LAB_0001ae18:
    do {
      if (pbVar15 <= pbVar22) goto LAB_0001aa9c;
      switch(*pbVar22) {
      case 0xf:
        uVar14 = FUN_000279e8(param_2[2]);
        break;
      case 0x10:
        uVar14 = FUN_000283b4(param_2[2]);
        break;
      case 0x11:
        uVar14 = FUN_00027832(param_2[2]);
        break;
      case 0x12:
        iVar13 = FUN_00018a10(param_1,param_2[2],param_2,pbVar22);
        goto LAB_0001ae4a;
      case 0x13:
        iVar13 = FUN_00029174(param_2[2],**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4));
        if (iVar13 == 0) {
          bVar25 = pbVar22[1] == 1;
        }
        else {
          bVar25 = pbVar22[1] == 2;
        }
        if (!bVar25) goto LAB_0001ae4c;
        goto LAB_0001ae88;
      default:
        goto switchD_0001ae30_default;
      }
      iVar13 = FUN_00018938(param_1,pbVar22,uVar14);
LAB_0001ae4a:
      if (iVar13 == 0) {
LAB_0001ae4c:
        pbVar22 = pbVar22 + 0xc;
        goto LAB_0001ae18;
      }
LAB_0001ae88:
      iVar13 = FUN_00028b1a(param_2[2]);
      param_2[2] = iVar13;
      pbVar22 = pbVar19;
    } while (iVar13 != 0);
    goto switchD_0001ae30_default;
  case 0x15:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400,0);
    iVar13 = FUN_0002b608(*param_2,local_4438,local_4438,0x400);
    if ((iVar13 != 0) && (((uint)local_4438[0] & 0xff) != 0x2f)) {
      FUN_00024ae4(local_4038,0x400,local_4438);
      uVar14 = FUN_0002792c(param_2[1]);
      FUN_00024af4(local_4438,0x400,uVar14,DAT_0001af7c + 0x1aef8);
    }
    FUN_0001a7b0(local_4438);
    iVar13 = stat64((char *)local_4438,local_4038);
    if ((iVar13 == 0) &&
       ((*(uint *)(pbVar19 + 8) == 0 || ((*(uint *)(pbVar19 + 8) & local_4038[0].st_mode) != 0)))) {
LAB_0001af20:
      bVar25 = pbVar19[1] == 2;
    }
    else {
      bVar25 = pbVar19[1] == 1;
    }
    if (!bVar25) break;
    goto switchD_0001ae30_default;
  case 0x16:
    free((void *)param_2[5]);
    piVar11 = *(int **)(param_1 + 0x20);
    iVar13 = *(int *)(pbVar19 + 4);
    param_2[5] = 0;
    FUN_0001621e(param_2,iVar13 + *piVar11,local_4438,0x400,0);
    uVar8 = FUN_00029138(param_2[1]);
    uVar27 = FUN_000230c4();
    uVar14 = (undefined4)((ulonglong)uVar27 >> 0x20);
    if (6 < (int)uVar27) {
      FUN_00022f5c(7,0,DAT_0001bc3c + 0x1afe0,0x858,DAT_0001bc40 + 0x1b05e,DAT_0001bc38 + 0x1afd8,
                   local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
      uVar14 = extraout_r1;
    }
    iVar13 = FUN_00016818(param_2,uVar14,param_3,param_4,param_5,local_4438,uVar8,param_7,local_4038
                          ,0x4000);
    if (-1 < iVar13) {
      FUN_0002b8c0(local_4038,10);
      if ((((local_48c0 & 0xfffffffd) == 0) &&
          (iVar13 = FUN_0002b970(local_4038,DAT_0001bc44 + 0x1b038), 0 < iVar13)) &&
         (iVar12 = FUN_000230c4(), 6 < iVar12)) {
        FUN_00022f5c(7,0,DAT_0001bc4c + 0x1b05e,0x864,DAT_0001bc50 + 0x1b0de,DAT_0001bc48 + 0x1b056,
                     iVar13);
      }
      pcVar4 = strdup((char *)local_4038);
      param_2[5] = pcVar4;
      goto LAB_0001af20;
    }
    goto LAB_0001abda;
  case 0x17:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400);
    uVar14 = param_2[1];
    pFVar10 = fopen64((char *)local_4438,(char *)(DAT_0001bc54 + 0x1b0a2));
    if (pFVar10 == (FILE *)0x0) goto LAB_0001abda;
    while (pcVar4 = fgets((char *)local_4038,0x4000,pFVar10), pcVar4 != (char *)0x0) {
      FUN_0001882c(uVar14,local_4038);
    }
LAB_0001b0c0:
    fclose(pFVar10);
    break;
  case 0x18:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400,0);
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      FUN_00022f5c(7,0,DAT_0001bc5c + 0x1b120,0x87c,DAT_0001bc60 + 0x1b19e,DAT_0001bc58 + 0x1b118,
                   local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
    }
    uVar14 = param_2[1];
    psVar21 = local_4038;
    uVar27 = FUN_00029138(uVar14);
    iVar13 = FUN_00016818(param_2,(int)((ulonglong)uVar27 >> 0x20),param_3,param_4,param_5,
                          local_4438,(int)uVar27,param_7,psVar21,0x4000);
    if (iVar13 < 0) goto LAB_0001abda;
    do {
      pcVar4 = strchr((char *)psVar21,10);
      psVar24 = (stat64 *)0x0;
      if (pcVar4 != (char *)0x0) {
        psVar24 = (stat64 *)(pcVar4 + 1);
        *pcVar4 = '\0';
      }
      FUN_0001882c(uVar14,psVar21);
      psVar21 = psVar24;
    } while (psVar24 != (stat64 *)0x0);
    break;
  case 0x19:
    iVar13 = FUN_0001ccd8(*(undefined4 *)(pbVar19 + 8));
    if (iVar13 != 0) {
      uVar20 = *(uint *)(pbVar19 + 8);
      uVar5 = 1 << (uVar20 & 0xff);
      if ((param_2[0x1b] & uVar5) != 0) {
        iVar13 = FUN_000230c4();
        if (6 < iVar13) {
          uVar14 = FUN_0001ccc8(uVar20);
          FUN_00022f5c(7,0,DAT_0001bc64 + 0x1b1ca,0x88c,DAT_0001bc6c + 0x1b25a,
                       DAT_0001bc68 + 0x1b1d6,uVar14,
                       **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                       *(undefined2 *)(pbVar18 + 10));
        }
        if ((1 << (*(uint *)(pbVar19 + 8) & 0xff) & param_2[0x1c]) != 0) goto LAB_0001abda;
        break;
      }
      param_2[0x1b] = param_2[0x1b] | uVar5;
    }
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      uVar14 = FUN_0001ccc8(*(undefined4 *)(pbVar19 + 8));
      FUN_00022f5c(7,0,DAT_0001bc70 + 0x1b23e,0x89b,DAT_0001bc78 + 0x1b2ce,DAT_0001bc74 + 0x1b24a,
                   uVar14,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
    }
    iVar13 = FUN_0001cd30(param_2[1],*(undefined4 *)(pbVar19 + 8),local_4038,0);
    if (iVar13 != 0) {
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        uVar14 = FUN_0001ccc8(*(undefined4 *)(pbVar19 + 8));
        FUN_00022f5c(7,0,DAT_0001bc80 + 0x1b294,0x8a0,DAT_0001bc84 + 0x1b312,DAT_0001bc7c + 0x1b28c,
                     uVar14);
      }
      param_2[0x1c] = 1 << (*(uint *)(pbVar19 + 8) & 0xff) | param_2[0x1c];
      goto LAB_0001abda;
    }
    break;
  case 0x1a:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4);
    ppsVar9 = (stat64 **)FUN_00029048(param_2[3],iVar12);
    if (ppsVar9 != (stat64 **)0x0) goto LAB_0001b2ca;
    goto LAB_0001abda;
  case 0x1b:
    pFVar10 = fopen64((char *)(DAT_0001bc8c + 0x1b2e2),(char *)(DAT_0001bc88 + 0x1b2e0));
    if (pFVar10 != (FILE *)0x0) {
      pcVar4 = fgets((char *)local_4038,0x1000,pFVar10);
      uVar3 = 0;
      if (pcVar4 != (char *)0x0) {
        __needle = (char *)(**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4));
        pcVar4 = strstr((char *)local_4038,__needle);
        if (pcVar4 == (char *)0x0) {
          uVar3 = 0;
        }
        else {
          sVar7 = strlen(__needle);
          uVar5 = (uint)(byte)pcVar4[sVar7];
          if (uVar5 == 0) {
LAB_0001b338:
            pbVar15 = (byte *)(DAT_0001bc94 + 0x1b340);
          }
          else {
            uVar2 = *(ushort *)(**(int **)(iVar16 + DAT_0001bc90) + uVar5 * 2);
            uVar3 = uVar2 & 0x20;
            if ((uVar2 & 0x20) != 0) goto LAB_0001b338;
            if (uVar5 != 0x3d) goto LAB_0001b348;
            pbVar15 = (byte *)(pcVar4 + sVar7 + 1);
            pbVar22 = pbVar15;
            do {
              pbVar17 = pbVar22;
              if (*pbVar17 == 0) break;
              pbVar22 = pbVar17 + 1;
            } while (-1 < (int)((uint)*(ushort *)
                                       (**(int **)(iVar16 + DAT_0001bc90) + (uint)*pbVar17 * 2) <<
                               0x1a));
            *pbVar17 = 0;
          }
          FUN_0002852c(param_2[1],__needle,pbVar15);
          uVar3 = 1;
        }
      }
LAB_0001b348:
      fclose(pFVar10);
      if (uVar3 != 0) break;
    }
LAB_0001abda:
    if (pbVar19[1] == 2) break;
    goto switchD_0001ae30_default;
  case 0x1c:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    uVar14 = param_2[1];
    iVar13 = FUN_00028b1a(uVar14);
    if (iVar13 == 0) goto LAB_0001abda;
    for (iVar13 = FUN_00027f20(); iVar13 != 0; iVar13 = FUN_0002a868(iVar13)) {
      pcVar4 = (char *)FUN_0002a8d0(iVar13);
      uVar8 = FUN_0002a8d6(iVar13);
      iVar12 = fnmatch((char *)local_4038,pcVar4,0);
      if (iVar12 == 0) {
        FUN_0002852c(uVar14,pcVar4,uVar8);
      }
    }
    break;
  case 0x1d:
    iVar13 = param_2[5];
LAB_0001ab82:
    iVar13 = FUN_00018938(param_1,pbVar19,iVar13);
LAB_0001ad7e:
    if (iVar13 != 0) {
switchD_0001ae30_default:
      pbVar15 = pbVar18 + (uint)*(ushort *)(pbVar18 + 2) * 0xc;
      goto LAB_0001aa9c;
    }
    break;
  case 0x1f:
    local_48c0 = 1;
    break;
  case 0x20:
    local_48c0 = 2;
    break;
  case 0x21:
    FUN_000291c8(param_2[1]);
    break;
  case 0x22:
    if (*(char *)((int)param_2 + 0x76) == '\0') {
      if (pbVar19[1] == 7) {
        *(undefined1 *)((int)param_2 + 0x76) = 1;
      }
      *(bool *)((int)param_2 + 0x75) = *(int *)(pbVar19 + 8) != 0;
    }
    break;
  case 0x23:
    FUN_00027cd6(param_2[1],*(undefined4 *)(pbVar19 + 8));
    break;
  case 0x24:
    local_4438[0] = local_4038;
    if (*(char *)((int)param_2 + 0x7a) == '\0') {
      iVar13 = *(int *)(pbVar19 + 4);
      if (pbVar19[1] == 7) {
        *(undefined1 *)((int)param_2 + 0x7a) = 1;
      }
      FUN_0001621e(param_2,iVar13 + **(int **)(param_1 + 0x20),local_4038,0x200,0);
      *(undefined1 *)((int)param_2 + 0x79) = 1;
      iVar13 = FUN_000261b0(local_4438,param_2 + 7,0,0);
      if (iVar13 < 0) {
        iVar12 = FUN_000230c4();
        if (iVar13 + 3U < 2) {
          if (2 < iVar12) {
            iVar13 = 0;
            iVar12 = DAT_0001bc9c + 0x1b4a0;
            uVar27 = CONCAT44(DAT_0001bc98 + 0x1b498,DAT_0001bca0 + 0x1b522);
            uVar14 = 0x908;
LAB_0001b4ac:
            FUN_00022f5c(3,iVar13,iVar12,uVar14,uVar27,local_4038);
          }
        }
        else if (2 < iVar12) {
          iVar12 = DAT_0001bcb4 + 0x1b512;
          uVar27 = CONCAT44(DAT_0001bcb0 + 0x1b50a,DAT_0001bcb8 + 0x1b594);
          uVar14 = 0x90a;
          goto LAB_0001b4ac;
        }
        param_2[7] = 0;
      }
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        psVar21 = (stat64 *)param_2[7];
        iVar13 = DAT_0001bca4 + 0x1b4de;
        uVar27 = CONCAT44(DAT_0001bca8 + 0x1b4e4,DAT_0001bcac + 0x1b568);
        uVar14 = 0x911;
LAB_0001b4f2:
        uVar8 = 7;
        goto LAB_0001ba34;
      }
    }
    break;
  case 0x25:
    local_4438[0] = local_4038;
    if (*(char *)(param_2 + 0x1e) == '\0') {
      iVar13 = *(int *)(pbVar19 + 4);
      if (pbVar19[1] == 7) {
        *(undefined1 *)(param_2 + 0x1e) = 1;
      }
      FUN_0001621e(param_2,iVar13 + **(int **)(param_1 + 0x20),local_4038,0x200);
      *(undefined1 *)((int)param_2 + 0x77) = 1;
      iVar13 = FUN_000262d4(local_4438,param_2 + 8);
      if (iVar13 < 0) {
        iVar12 = FUN_000230c4();
        if (iVar13 + 3U < 2) {
          if (2 < iVar12) {
            iVar13 = 0;
            iVar12 = DAT_0001bcc0 + 0x1b59c;
            uVar27 = CONCAT44(DAT_0001bcbc + 0x1b594,DAT_0001bcc4 + 0x1b61c);
            uVar14 = 0x922;
LAB_0001b5a6:
            FUN_00022f5c(3,iVar13,iVar12,uVar14,uVar27,local_4038);
          }
        }
        else if (2 < iVar12) {
          iVar12 = DAT_0001bcd8 + 0x1b608;
          uVar27 = CONCAT44(DAT_0001bcd4 + 0x1b600,DAT_0001bcdc + 0x1b688);
          uVar14 = 0x924;
          goto LAB_0001b5a6;
        }
        param_2[8] = 0;
      }
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        psVar21 = (stat64 *)param_2[8];
        iVar13 = DAT_0001bcc8 + 0x1b5d8;
        uVar27 = CONCAT44(DAT_0001bccc + 0x1b5de,DAT_0001bcd0 + 0x1b662);
        uVar14 = 0x92b;
        goto LAB_0001b4f2;
      }
    }
    break;
  case 0x26:
    if (*(char *)(param_2 + 0x1f) == '\0') {
      FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x200);
      psVar21 = (stat64 *)strtol((char *)local_4038,(char **)local_4438,8);
      if ((char)local_4438[0]->st_dev == '\0') {
        bVar1 = pbVar19[1];
        param_2[6] = psVar21;
        if (bVar1 == 7) {
          *(undefined1 *)(param_2 + 0x1f) = 1;
        }
        *(undefined1 *)((int)param_2 + 0x7b) = 1;
        iVar13 = FUN_000230c4();
        if (6 < iVar13) {
          pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
          ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
          iVar13 = DAT_0001bcec + 0x1b6c4;
          uVar27 = CONCAT44(DAT_0001bcf0 + 0x1b6c6,DAT_0001bcf4 + 0x1b74a);
          uVar14 = 0x942;
          goto LAB_0001b4f2;
        }
      }
      else {
        iVar13 = FUN_000230c4();
        if (2 < iVar13) {
          iVar12 = DAT_0001bce4 + 0x1b670;
          uVar27 = CONCAT44(DAT_0001bce0 + 0x1b668,DAT_0001bce8 + 0x1b6f2);
          uVar14 = 0x938;
          iVar13 = 0;
          goto LAB_0001b67c;
        }
      }
    }
    break;
  case 0x27:
    if (*(char *)((int)param_2 + 0x7a) == '\0') {
      psVar21 = *(stat64 **)(pbVar19 + 8);
      bVar1 = pbVar19[1];
      param_2[7] = psVar21;
      if (bVar1 == 7) {
        *(undefined1 *)((int)param_2 + 0x7a) = 1;
      }
      *(undefined1 *)((int)param_2 + 0x79) = 1;
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001bcf8 + 0x1b720;
        uVar27 = CONCAT44(DAT_0001bcfc + 0x1b722,DAT_0001bd00 + 0x1b7a6);
        uVar14 = 0x94f;
        goto LAB_0001b4f2;
      }
    }
    break;
  case 0x28:
    if (*(char *)(param_2 + 0x1e) == '\0') {
      psVar21 = *(stat64 **)(pbVar19 + 8);
      bVar1 = pbVar19[1];
      param_2[8] = psVar21;
      if (bVar1 == 7) {
        *(undefined1 *)(param_2 + 0x1e) = 1;
      }
      *(undefined1 *)((int)param_2 + 0x77) = 1;
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001bd04 + 0x1b77c;
        uVar27 = CONCAT44(DAT_0001bd08 + 0x1b77e,DAT_0001bd0c + 0x1b802);
        uVar14 = 0x95b;
        goto LAB_0001b4f2;
      }
    }
    break;
  case 0x29:
    if (*(char *)(param_2 + 0x1f) == '\0') {
      psVar21 = *(stat64 **)(pbVar19 + 8);
      bVar1 = pbVar19[1];
      param_2[6] = psVar21;
      if (bVar1 == 7) {
        *(undefined1 *)(param_2 + 0x1f) = 1;
      }
      *(undefined1 *)((int)param_2 + 0x7b) = 1;
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001bd10 + 0x1b7d8;
        uVar27 = CONCAT44(DAT_0001bd14 + 0x1b7da,DAT_0001bd18 + 0x1b85e);
        uVar14 = 0x967;
        goto LAB_0001b4f2;
      }
    }
    break;
  case 0x2a:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    psVar21 = local_4038;
    if (pbVar19[1] - 6 < 2) {
      FUN_00027cca(param_2[1]);
    }
    do {
      psVar24 = (stat64 *)((int)&psVar21->st_dev + 1);
      uVar5 = (uint)(byte)psVar21->st_dev;
      if (uVar5 == 0) goto LAB_0001b94c;
      psVar21 = psVar24;
    } while ((((uVar5 & 0xffffffdf) - 0x41 < 0x1a) || (uVar5 - 0x30 < 10)) ||
            ((uVar5 == 0x2d || (uVar5 == 0x5f))));
    iVar13 = FUN_000230c4();
    if (2 < iVar13) {
      FUN_00022f5c(3,0,DAT_0001bd30 + 0x1b940,0x99f,DAT_0001bd34 + 0x1b9be,DAT_0001bd2c + 0x1b93a,
                   local_4038);
    }
LAB_0001b94c:
    if (pbVar19[1] == 5) {
      FUN_00027c9c();
    }
    else {
      FUN_00027c6c(param_2[1],local_4038);
    }
    break;
  case 0x2c:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4);
    if (pbVar19[1] - 6 < 2) {
      FUN_0002a87e(param_2 + 9);
    }
    FUN_0002a6f4(param_2 + 9,iVar12,iVar13);
    iVar23 = FUN_000230c4();
    if (6 < iVar23) {
      FUN_00022f5c(7,0,DAT_0001bd20 + 0x1b84e,0x974,DAT_0001bd24 + 0x1b8cc,DAT_0001bd1c + 0x1b846,
                   iVar12,iVar13,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
    }
    break;
  case 0x2d:
    iVar13 = **(int **)(param_1 + 0x20);
    iVar23 = iVar13 + *(int *)(pbVar19 + 4);
    iVar12 = *(int *)(pbVar19 + 8) + iVar13;
    if (*(char *)(iVar13 + *(int *)(pbVar19 + 4)) == '\0') {
      if (pbVar19[1] == 4) break;
      ppsVar9 = (stat64 **)0x0;
    }
    else {
      if ((pbVar19[1] == 4) && (iVar13 = FUN_00029048(param_2[1],iVar12), iVar13 != 0)) {
        FUN_0001621e(param_2,iVar23,local_4038,0x200,0);
        FUN_00024af4(local_4438,0x200,iVar13,DAT_0001bd28 + 0x1b8b8);
      }
      else {
        FUN_0001621e(param_2,iVar23,local_4438,0x200);
      }
      ppsVar9 = local_4438;
    }
LAB_0001b2ca:
    FUN_0002852c(param_2[1],iVar12,ppsVar9);
    break;
  case 0x2e:
    if (*(char *)((int)param_2 + 0x7d) == '\0') {
      psVar21 = (stat64 *)(**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4));
      if (pbVar19[1] == 7) {
        *(undefined1 *)((int)param_2 + 0x7d) = 1;
      }
      FUN_0001621e(param_2,psVar21,local_4038,0x400);
      if ((((local_48c0 & 0xfffffffd) == 0) &&
          (iVar13 = FUN_0002b970(local_4038,DAT_0001bd38 + 0x1b9ac), 0 < iVar13)) &&
         (iVar12 = FUN_000230c4(), 6 < iVar12)) {
        FUN_00022f5c(7,0,DAT_0001bd40 + 0x1b9ce,0x9b6,DAT_0001bd44 + 0x1ba50,DAT_0001bd3c + 0x1b9c8,
                     iVar13);
      }
      uVar26 = FUN_000282ec(param_2[1]);
      uVar5 = gnu_dev_major(uVar26);
      if (uVar5 != 0) {
        iVar13 = FUN_0002835e(param_2[1]);
        iVar13 = strcmp((char *)local_4038,(char *)(iVar13 + 5));
        if (iVar13 != 0) {
          iVar13 = FUN_000230c4();
          if (2 < iVar13) {
            pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
            ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
            iVar13 = DAT_0001bd4c + 0x1ba28;
            uVar27 = CONCAT44(DAT_0001bd48 + 0x1ba22,DAT_0001bd50 + 0x1baa6);
            uVar14 = 0x9bc;
            goto LAB_0001ba30;
          }
          break;
        }
      }
      free((void *)param_2[4]);
      psVar21 = (stat64 *)strdup((char *)local_4038);
      param_2[4] = psVar21;
      iVar13 = FUN_000230c4();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001bd54 + 0x1ba74;
        uVar27 = CONCAT44(DAT_0001bd58 + 0x1ba76,DAT_0001bd5c + 0x1baf8);
        uVar14 = 0x9c4;
        goto LAB_0001b4f2;
      }
    }
    break;
  case 0x2f:
    if (*(char *)((int)param_2 + 0x7e) == '\0') {
      uVar26 = FUN_000282ec(param_2[1]);
      uVar5 = gnu_dev_major(uVar26);
      if (uVar5 != 0) {
        if (pbVar19[1] == 7) {
          *(undefined1 *)((int)param_2 + 0x7e) = 1;
LAB_0001baaa:
          FUN_000279f4(param_2[1]);
        }
        else if (pbVar19[1] - 6 < 2) goto LAB_0001baaa;
        FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400);
        if (local_48c0 == 0) {
          iVar13 = DAT_0001bd60 + 0x1bae8;
LAB_0001bae6:
          iVar13 = FUN_0002b970(local_4438,iVar13);
          if ((0 < iVar13) && (iVar12 = FUN_000230c4(), 6 < iVar12)) {
            FUN_00022f5c(7,0,DAT_0001bd68 + 0x1bb0c,0x9dd,DAT_0001bd6c + 0x1bb8c,
                         DAT_0001bd64 + 0x1bb06,iVar13);
          }
        }
        else if (local_48c0 == 2) {
          iVar13 = DAT_0001bd84 + 0x1bbbe;
          goto LAB_0001bae6;
        }
        piVar11 = *(int **)(iVar16 + DAT_0001bc90);
        ppsVar9 = local_4438;
        do {
          __s = ppsVar9;
          ppsVar9 = (stat64 **)((int)__s + 1);
        } while ((int)((uint)*(ushort *)(*piVar11 + (uint)*(byte *)__s * 2) << 0x1a) < 0);
        ppsVar9 = (stat64 **)strchr((char *)__s,0x20);
        iVar13 = DAT_0001bd70 + 0x1bb46;
        while (ppsVar9 != (stat64 **)0x0) {
          *(byte *)ppsVar9 = 0;
          iVar12 = FUN_000230c4();
          if (6 < iVar12) {
            FUN_00022f5c(7,0,iVar13,0x9e5,iVar6,DAT_0001bd88 + 0x1bbee,__s,
                         **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                         *(undefined2 *)(pbVar18 + 10));
          }
          FUN_00024af4(local_4038,0x400,DAT_0001bd8c + 0x1bc0a,__s);
          FUN_00027c4a(param_2[1],local_4038);
          __s = ppsVar9;
          do {
            __s = (stat64 **)((int)__s + 1);
          } while ((int)((uint)*(ushort *)(*piVar11 + (uint)*(byte *)__s * 2) << 0x1a) < 0);
          ppsVar9 = (stat64 **)strchr((char *)__s,0x20);
        }
        if (*(byte *)__s != 0) {
          iVar13 = FUN_000230c4();
          if (6 < iVar13) {
            FUN_00022f5c(7,0,DAT_0001bd78 + 0x1bb82,0x9ef,DAT_0001bd7c + 0x1bc00,
                         DAT_0001bd74 + 0x1bb7c,__s,
                         **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                         *(undefined2 *)(pbVar18 + 10));
          }
          FUN_00024af4(local_4038,0x400,DAT_0001bd80 + 0x1bb9e,__s);
          FUN_00027c4a(param_2[1],local_4038);
        }
      }
    }
    break;
  case 0x30:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = FUN_0002b608(*param_2,iVar12,local_4038,0x400,0);
    if (iVar13 != 0) {
      uVar14 = FUN_0002792c(param_2[1]);
      FUN_00024af4(local_4038,0x400,uVar14,DAT_0001c044 + 0x1bdc8,iVar12);
    }
    FUN_0001a7b0(local_4038);
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x200);
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      FUN_00022f5c(7,0,DAT_0001c04c + 0x1be26,0xa02,DAT_0001c050 + 0x1bea4,DAT_0001c048 + 0x1be20,
                   local_4038,local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8)
                   ,*(undefined2 *)(pbVar18 + 10));
    }
    pFVar10 = fopen64((char *)local_4038,(char *)(DAT_0001c054 + 0x1be3e));
    if (pFVar10 != (FILE *)0x0) {
      iVar13 = fprintf(pFVar10,(char *)(DAT_0001c058 + 0x1be4e),local_4438);
      if ((iVar13 < 1) && (iVar13 = FUN_000230c4(), 2 < iVar13)) {
        piVar11 = __errno_location();
        FUN_00022f5c(3,*piVar11,DAT_0001c060 + 0x1be6e,0xa06,DAT_0001c064 + 0x1beee,
                     DAT_0001c05c + 0x1be68,local_4038);
      }
      goto LAB_0001b0c0;
    }
    iVar13 = FUN_000230c4();
    if (2 < iVar13) {
      piVar11 = __errno_location();
      iVar12 = DAT_0001c06c + 0x1bea2;
      uVar27 = CONCAT44(DAT_0001c068 + 0x1be9c,DAT_0001c070 + 0x1bf22);
      uVar14 = 0xa09;
      iVar13 = *piVar11;
LAB_0001b67c:
      FUN_00022f5c(3,iVar13,iVar12,uVar14,uVar27,local_4038);
    }
    break;
  case 0x31:
    FUN_0001621e(param_2,*(int *)(pbVar19 + 8) + **(int **)(param_1 + 0x20),local_4038,0x400,0);
    FUN_00024b24(local_4038);
    FUN_0001621e(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x200);
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      FUN_00022f5c(7,0,DAT_0001c078 + 0x1bf20,0xa16,DAT_0001c07c + 0x1bf9e,DAT_0001c074 + 0x1bf1a,
                   local_4038,local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8)
                   ,*(undefined2 *)(pbVar18 + 10));
    }
    ppsVar9 = local_4438;
    psVar21 = local_4038;
    iVar13 = FUN_00024b5c(psVar21,ppsVar9);
    if ((iVar13 < 0) && (iVar12 = FUN_000230c4(), 2 < iVar12)) {
      pcVar4 = strerror(-iVar13);
      iVar13 = DAT_0001c084 + 0x1bf64;
      uVar27 = CONCAT44(DAT_0001c080 + 0x1bf5e,DAT_0001c088 + 0x1bfe4);
      uVar14 = 0xa19;
LAB_0001ba30:
      uVar8 = 3;
LAB_0001ba34:
      FUN_00022f5c(uVar8,0,iVar13,uVar14,uVar27,psVar21,ppsVar9,pcVar4);
    }
    break;
  case 0x32:
  case 0x33:
    if (pbVar19[1] - 6 < 2) {
      FUN_0002a87e(param_2 + 0x10);
    }
    iVar13 = FUN_000230c4();
    if (6 < iVar13) {
      FUN_00022f5c(7,0,DAT_0001c090 + 0x1bfb8,0xa25,DAT_0001c094 + 0x1c036,DAT_0001c08c + 0x1bfb2,
                   **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4),
                   (uint)*(ushort *)(pbVar18 + 8) + **(int **)(param_1 + 0x20),
                   *(undefined2 *)(pbVar18 + 10));
    }
    uVar14 = FUN_0002a6f4(param_2 + 0x10,**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4),0);
    FUN_0002a8e8(uVar14,*(undefined4 *)(pbVar19 + 8));
    break;
  case 0x34:
    if (*(int *)(pbVar19 + 8) == 0) break;
    pbVar15 = (byte *)(*(int *)(pbVar19 + 8) * 0xc + *(int *)(param_1 + 0x14));
    goto LAB_0001aa9c;
  case 0x35:
    goto LAB_0001c032;
  }
switchD_0001aaa4_caseD_2b:
  pbVar15 = pbVar19 + 0xc;
  goto LAB_0001aa9c;
LAB_0001c032:
  return 0;
}



/* ===== FUN_0001c44c @ 0001c44c size=194 ===== */

int FUN_0001c44c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ssize_t sVar4;
  pollfd local_138;
  char acStack_130 [16];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118 [64];
  
  memset(acStack_130,0,0x118);
  strcpy(acStack_130,(char *)(DAT_0001c514 + 0x1c470));
  local_120 = DAT_0001c510;
  uStack_11c = param_2;
  uVar1 = param_3;
  if (param_4 != 0) {
    FUN_00024ae4(local_118,0x100,param_4);
    uVar1 = local_118[0];
  }
  local_118[0] = uVar1;
  if (*(char *)(param_1 + 0x92) == '\0') {
    iVar2 = connect(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),*(socklen_t *)(param_1 + 0x8c)
                   );
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 0x92) = 1;
      goto LAB_0001c4b6;
    }
  }
  else {
LAB_0001c4b6:
    sVar4 = send(*(int *)(param_1 + 8),acStack_130,0x118,0);
    if (-1 < sVar4) {
      do {
        local_138.fd = *(int *)(param_1 + 8);
        local_138.events = 1;
        iVar2 = poll(&local_138,1,param_5 * 1000);
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            return -0x6e;
          }
          if ((local_138.revents & 8U) == 0) {
            return 0;
          }
          return -5;
        }
        piVar3 = __errno_location();
        iVar2 = *piVar3;
      } while (iVar2 == 4);
      goto LAB_0001c4a4;
    }
  }
  piVar3 = __errno_location();
  iVar2 = *piVar3;
LAB_0001c4a4:
  return -iVar2;
}



/* ===== FUN_0001c5e0 @ 0001c5e0 size=34 ===== */

undefined4 FUN_0001c5e0(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, *param_1 = iVar1 + -1, iVar1 + -1 == 0)) {
    if (-1 < param_1[2]) {
      close(param_1[2]);
    }
    free(param_1);
  }
  return 0;
}



/* ===== FUN_0001c6ec @ 0001c6ec size=210 ===== */

/* WARNING: Removing unreachable block (ram,0x0001c668) */

undefined4 * FUN_0001c6ec(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  puVar1 = calloc(1,0x94);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = param_1;
    iVar2 = socket(1,DAT_0001c6cc,0);
    puVar1[2] = iVar2;
    if (iVar2 < 0) {
      iVar2 = FUN_000230c4();
      if (2 < iVar2) {
        piVar3 = __errno_location();
        FUN_00022f5c(3,*piVar3,DAT_0001c6d4 + 0x1c64c,0x59,DAT_0001c6d8 + 0x1c669,
                     DAT_0001c6d0 + 0x1c646);
      }
      FUN_0001c5e0(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = setsockopt(puVar1[2],1,0x10,local_1c,4);
      if ((iVar2 < 0) && (iVar2 = FUN_000230c4(), 3 < iVar2)) {
        piVar3 = __errno_location();
        FUN_00022f5c(4,*piVar3,DAT_0001c6e0 + 0x1c69c,99,DAT_0001c6e4 + 0x1c6b9,
                     DAT_0001c6dc + 0x1c696);
      }
      iVar2 = DAT_0001c6e8;
      *(undefined2 *)(puVar1 + 3) = 1;
      FUN_00024ae4((char *)((int)puVar1 + 0xe),0x6c,iVar2 + 0x1c6ba);
      sVar4 = strlen((char *)((int)puVar1 + 0xe));
      puVar1[0x23] = sVar4 + 2;
    }
  }
  return puVar1;
}



/* ===== FUN_0001c89c @ 0001c89c size=10 ===== */

void FUN_0001c89c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  return;
}



/* ===== FUN_0001c8a6 @ 0001c8a6 size=40 ===== */

undefined4 FUN_0001c8a6(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      if (-1 < param_1[2]) {
        close(param_1[2]);
      }
      FUN_0001c5e0(param_1[1]);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0001c8ce @ 0001c8ce size=20 ===== */

void FUN_0001c8ce(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,1,param_2,0,param_3,param_2,param_3);
  return;
}



/* ===== FUN_0001c8e2 @ 0001c8e2 size=20 ===== */

void FUN_0001c8e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,2,0,0,param_2,param_2,param_3);
  return;
}



/* ===== FUN_0001c8f6 @ 0001c8f6 size=20 ===== */

void FUN_0001c8f6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,3,0,0,param_2,param_2,param_3);
  return;
}



/* ===== FUN_0001c90a @ 0001c90a size=20 ===== */

void FUN_0001c90a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,4,0,0,param_2,param_2,param_3);
  return;
}



/* ===== FUN_0001c91e @ 0001c91e size=20 ===== */

void FUN_0001c91e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,5,0,param_2,param_3,param_2,param_3);
  return;
}



/* ===== FUN_0001c932 @ 0001c932 size=20 ===== */

void FUN_0001c932(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,6,param_2,0,param_3,param_2,param_3);
  return;
}



/* ===== FUN_0001c946 @ 0001c946 size=20 ===== */

void FUN_0001c946(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,7,0,0,param_2,param_2,param_3);
  return;
}



/* ===== FUN_0001c95a @ 0001c95a size=20 ===== */

void FUN_0001c95a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001c44c(param_1,8,0,0,param_2,param_2,param_3);
  return;
}



/* ===== FUN_0001c96e @ 0001c96e size=30 ===== */

undefined4 FUN_0001c96e(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_0001c8a6(param_1[1]);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0001c98c @ 0001c98c size=418 ===== */

undefined4 * FUN_0001c98c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  ssize_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  iovec local_64;
  pollfd local_5c;
  undefined1 auStack_54 [24];
  msghdr local_3c;
  
  local_3c.msg_namelen = *(socklen_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c.msg_flags = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_3c.msg_name = (void *)0x0;
  local_3c.msg_iov = &local_64;
  local_3c.msg_iovlen = 1;
  local_3c.msg_control = auStack_54;
  local_3c.msg_controllen = 0x18;
  puVar1 = calloc(1,0x120);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = param_1;
    FUN_0001c89c(param_1);
    do {
      local_5c.fd = *(int *)(param_1 + 8);
      local_5c.events = 1;
      iVar2 = poll(&local_5c,1,10000);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          iVar2 = FUN_000230c4();
          if (iVar2 < 3) break;
          iVar6 = DAT_0001cb34 + 0x1ca18;
          iVar2 = DAT_0001cb38 + 0x1ca1e;
          iVar7 = DAT_0001cb3c + 0x1ca6a;
          uVar8 = 0x17d;
LAB_0001ca26:
          iVar5 = 0;
        }
        else {
          if ((int)((uint)(ushort)local_5c.revents << 0x1f) < 0) {
            local_64.iov_base = puVar1 + 2;
            local_64.iov_len = 0x118;
            sVar4 = recvmsg(*(int *)(param_1 + 8),&local_3c,0);
            if (-1 < sVar4) {
              FUN_00027208(&local_3c);
              if (((local_3c.msg_controllen < 0xc) || (local_3c.msg_control == (undefined1 *)0x0))
                 || (*(int *)((int)local_3c.msg_control + 8) != 2)) {
                iVar2 = FUN_000230c4();
                if (2 < iVar2) {
                  iVar6 = DAT_0001cb58 + 0x1cac2;
                  iVar2 = DAT_0001cb5c + 0x1cac8;
                  iVar7 = DAT_0001cb60 + 0x1cb14;
                  uVar8 = 0x198;
                  goto LAB_0001ca26;
                }
                break;
              }
              iVar2 = *(int *)((int)local_3c.msg_control + 0x10);
              if (iVar2 == 0) {
                iVar2 = puVar1[6];
                if (iVar2 == DAT_0001cb30) {
                  return puVar1;
                }
                iVar6 = FUN_000230c4();
                if (iVar6 < 3) break;
                iVar7 = DAT_0001cb70 + 0x1cb1c;
                iVar6 = DAT_0001cb74 + 0x1cb22;
                iVar5 = (int)&DAT_0001cb70 + DAT_0001cb78;
                uVar8 = 0x1a2;
              }
              else {
                iVar6 = FUN_000230c4();
                if (iVar6 < 3) break;
                iVar7 = DAT_0001cb64 + 0x1cae6;
                iVar6 = DAT_0001cb68 + 0x1caec;
                iVar5 = DAT_0001cb6c + 0x1cb3a;
                uVar8 = 0x19d;
              }
              FUN_00022f5c(3,0,iVar6,uVar8,iVar5,iVar7,iVar2);
              break;
            }
            iVar2 = FUN_000230c4();
            if (iVar2 < 3) break;
            piVar3 = __errno_location();
            iVar6 = DAT_0001cb4c + 0x1ca8c;
            iVar2 = DAT_0001cb50 + 0x1ca92;
            iVar7 = DAT_0001cb54 + 0x1cade;
            uVar8 = 0x18e;
          }
          else {
            iVar2 = FUN_000230c4();
            if (iVar2 < 3) break;
            piVar3 = __errno_location();
            iVar6 = DAT_0001cb40 + 0x1ca46;
            iVar2 = DAT_0001cb44 + 0x1ca4c;
            iVar7 = DAT_0001cb48 + 0x1ca98;
            uVar8 = 0x181;
          }
          iVar5 = *piVar3;
        }
        FUN_00022f5c(3,iVar5,iVar2,uVar8,iVar7,iVar6);
        break;
      }
      piVar3 = __errno_location();
    } while (*piVar3 == 4);
    FUN_0001c96e(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0001cbec @ 0001cbec size=44 ===== */

void FUN_0001cbec(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(DAT_0001cc18 + 0x1cbf4) == '\0') {
    iVar1 = 0;
    piVar2 = (int *)(DAT_0001cc1c + 0x1cbfe);
    do {
      if (*(code **)(*piVar2 + 0xc) != (code *)0x0) {
        (**(code **)(*piVar2 + 0xc))(param_1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 9);
    *(undefined1 *)(DAT_0001cc20 + 0x1cc16) = 1;
  }
  return;
}



/* ===== FUN_0001cc24 @ 0001cc24 size=46 ===== */

void FUN_0001cc24(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(DAT_0001cc54 + 0x1cc2c) != '\0') {
    iVar1 = 0;
    piVar2 = (int *)(DAT_0001cc58 + 0x1cc38);
    do {
      if (*(code **)(*piVar2 + 0x10) != (code *)0x0) {
        (**(code **)(*piVar2 + 0x10))(param_1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 9);
    *(undefined1 *)(DAT_0001cc5c + 0x1cc50) = 0;
  }
  return;
}



/* ===== FUN_0001ccc8 @ 0001ccc8 size=12 ===== */

undefined4 FUN_0001ccc8(int param_1)

{
  return **(undefined4 **)(DAT_0001ccd4 + 0x1ccce + param_1 * 4);
}



/* ===== FUN_0001ccd8 @ 0001ccd8 size=12 ===== */

undefined1 FUN_0001ccd8(int param_1)

{
  return *(undefined1 *)(*(int *)(DAT_0001cce4 + 0x1ccde + param_1 * 4) + 0x18);
}



/* ===== FUN_0001cd30 @ 0001cd30 size=86 ===== */

void FUN_0001cd30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_624;
  undefined1 auStack_620 [512];
  undefined1 auStack_420 [1028];
  
  **(undefined4 **)(DAT_0001cd88 + 0x1cd44 + DAT_0001cd8c) = 0;
  FUN_00024ae4(auStack_420,0x400);
  uVar1 = FUN_00027880(param_1);
  FUN_0001677c(uVar1,auStack_420,&local_624,auStack_620);
  (**(code **)(*(int *)(DAT_0001cd90 + 0x1cd74 + param_2 * 4) + 4))
            (param_1,local_624,auStack_620,param_4);
  return;
}



/* ===== FUN_0001cd94 @ 0001cd94 size=34 ===== */

undefined4 FUN_0001cd94(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0002852c(param_1,param_3,param_4);
  if (param_2 != 0) {
    printf((char *)(DAT_0001cdb8 + 0x1cdb0),param_3,param_4);
  }
  return 0;
}



/* ===== FUN_0001cdbc @ 0001cdbc size=140 ===== */

undefined4 FUN_0001cdbc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1020 [8];
  undefined1 auStack_1018 [4092];
  
  memset(auStack_1020,0,0x1000);
  if ((param_2 == 3) &&
     (iVar1 = strcmp(*(char **)(param_3 + 4),(char *)(DAT_0001ce50 + 0x1cde8)), iVar1 == 0)) {
    iVar1 = open64((char *)(DAT_0001ce54 + 0x1cdf6),DAT_0001ce48);
    if (-1 < iVar1) {
      FUN_00024ae4(auStack_1018,0xff8,*(undefined4 *)(param_3 + 8));
      iVar2 = ioctl(iVar1,DAT_0001ce4c,auStack_1020);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          iVar2 = DAT_0001ce60 + 0x1ce40;
        }
        else {
          iVar2 = DAT_0001ce58 + 0x1ce1e;
        }
        FUN_0001cd94(param_1,param_4,DAT_0001ce5c + 0x1ce26,iVar2);
        uVar3 = 0;
        goto LAB_0001ce28;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  uVar3 = 1;
LAB_0001ce28:
  FUN_00025324(iVar1);
  return uVar3;
}



/* ===== FUN_0001ce74 @ 0001ce74 size=16 ===== */

void FUN_0001ce74(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0001ce84 + 0x1ce7c);
  uVar1 = FUN_0002a328(*puVar2);
  *puVar2 = uVar1;
  return;
}



/* ===== FUN_0001ce88 @ 0001ce88 size=30 ===== */

undefined4 FUN_0001ce88(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0001cea8 + 0x1ce90);
  if (*piVar2 == 0) {
    iVar1 = FUN_0002a35c();
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
  }
  return 0;
}



/* ===== FUN_0001ceac @ 0001ceac size=156 ===== */

int FUN_0001ceac(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,undefined1 param_5)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *__name;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(DAT_0001cf48 + 0x1cec0);
  iVar5 = *piVar6;
  if (iVar5 == 0) {
    iVar5 = -2;
  }
  else {
    if (param_2 == 0) {
      iVar1 = FUN_0002a628(iVar5,param_3,0,iVar5,param_4);
    }
    else {
      __ptr = (void *)FUN_00026388(param_2,param_3,0);
      if (__ptr == (void *)0x0) {
        return -0xc;
      }
      iVar1 = FUN_0002a628(*piVar6,__ptr,0);
      free(__ptr);
    }
    iVar5 = 0;
    for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      if (param_4 == (char *)0x0) {
LAB_0001cef6:
        uVar2 = FUN_0002a8d0(iVar1);
        uVar3 = FUN_0002a8d6(iVar1);
        iVar4 = FUN_0001cd94(param_1,param_5,uVar2,uVar3);
        if (iVar4 < 0) {
          return -0xc;
        }
        iVar5 = iVar5 + 1;
      }
      else {
        __name = (char *)FUN_0002a8d0(iVar1);
        iVar4 = fnmatch(param_4,__name,2);
        if (iVar4 == 0) goto LAB_0001cef6;
      }
    }
  }
  return iVar5;
}



/* ===== FUN_0001cf4c @ 0001cf4c size=416 ===== */

undefined4 FUN_0001cf4c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *__s2;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_4c;
  char *local_48;
  char acStack_38 [20];
  
  iVar8 = DAT_0001d0ec + 0x1cf60;
  if (*(int *)(DAT_0001d0f0 + 0x1cf64) != 0) {
    uVar7 = 0;
    iVar9 = 0;
    iVar11 = DAT_0001d0f4 + 0x1cf78;
    local_48 = (char *)0x0;
    iVar10 = DAT_0001d0f8 + 0x1cf7c;
    local_4c = 0;
    while (iVar1 = getopt_long(param_2,param_3,iVar10,iVar11,0), iVar1 != -1) {
      if (iVar1 == 0x66) {
        local_4c = **(undefined4 **)(iVar8 + DAT_0001d0fc);
      }
      else if (iVar1 < 0x67) {
        if (iVar1 == 100) {
          iVar9 = **(int **)(iVar8 + DAT_0001d0fc);
        }
      }
      else if (iVar1 == 0x70) {
        uVar7 = **(undefined4 **)(iVar8 + DAT_0001d0fc);
      }
      else if (iVar1 == 0x73) {
        local_48 = (char *)**(undefined4 **)(iVar8 + DAT_0001d0fc);
      }
    }
    iVar8 = *(int *)(param_3 + **(int **)(iVar8 + DAT_0001d100) * 4);
    if (iVar8 != 0) {
      iVar8 = FUN_0001ceac(param_1,uVar7,iVar8,local_4c,param_4);
      if (0 < iVar8) {
        return 0;
      }
      return 1;
    }
    iVar8 = param_1;
    if (iVar9 != 0) {
      uVar2 = FUN_00027880(param_1);
      iVar8 = FUN_000289b0(uVar2,iVar9);
      if (iVar8 == 0) {
        return 1;
      }
    }
    iVar9 = 0;
    iVar10 = DAT_0001d110 + 0x1d0e2;
    iVar11 = DAT_0001d114 + 0x1d0e8;
    __s2 = (char *)(DAT_0001d118 + 0x1d0ea);
    while ((iVar8 != 0 && (iVar9 == 0))) {
      pcVar3 = (char *)FUN_000283b4(iVar8);
      if ((pcVar3 == (char *)0x0) ||
         ((local_48 != (char *)0x0 && (iVar9 = strcmp(pcVar3,local_48), iVar9 != 0)))) {
LAB_0001d012:
        iVar9 = 0;
      }
      else {
        pcVar4 = (char *)FUN_00029048(iVar8,iVar10);
        iVar9 = strcmp(pcVar3,__s2);
        if (iVar9 == 0) {
          uVar2 = FUN_0002830c(iVar8);
          iVar9 = FUN_0002512c(uVar2,iVar11);
          if (iVar9 == 0) goto LAB_0001d0ca;
          if (pcVar4 != (char *)0x0) goto LAB_0001d0b2;
          pcVar3 = (char *)FUN_00027a0c(iVar8,DAT_0001d104 + 0x1d06a);
          if ((((pcVar3 != (char *)0x0) &&
               (pcVar4 = (char *)FUN_00027a0c(iVar8,DAT_0001d108 + 0x1d07a), pcVar4 != (char *)0x0))
              && (lVar5 = strtol(pcVar3,(char **)0x0,0x10), 0 < lVar5)) &&
             (lVar6 = strtol(pcVar4,(char **)0x0,0x10), 0 < lVar6)) {
            pcVar4 = acStack_38;
            snprintf(pcVar4,0x10,(char *)(DAT_0001d10c + 0x1d0ac),lVar5,lVar6);
            goto LAB_0001d0b2;
          }
        }
        else {
LAB_0001d0ca:
          if (pcVar4 == (char *)0x0) goto LAB_0001d012;
          iVar9 = 0;
LAB_0001d0b2:
          iVar1 = FUN_0001ceac(param_1,uVar7,pcVar4,local_4c,param_4);
          if (0 < iVar1) {
            return 0;
          }
        }
      }
      iVar8 = FUN_00028b1a(iVar8);
    }
  }
  return 1;
}



/* ===== FUN_0001d11c @ 0001d11c size=408 ===== */

void FUN_0001d11c(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4,char param_5)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char acStack_1028 [4100];
  
  iVar1 = FUN_00027a0c();
  if (iVar1 == 0) {
    iVar1 = DAT_0001d2b4 + 0x1d144;
  }
  snprintf(acStack_1028,0x1000,(char *)(DAT_0001d2b8 + 0x1d14e),iVar1);
  iVar1 = FUN_000230c4();
  if (6 < iVar1) {
    FUN_00022f5c(7,0,DAT_0001d2c0 + 0x1d16c,0x69,DAT_0001d2c4 + 0x1d172,DAT_0001d2bc + 0x1d166,
                 param_2,acStack_1028);
  }
  iVar9 = DAT_0001d2cc;
  iVar1 = DAT_0001d2c8;
  uVar7 = param_4 >> 2;
  memset(param_3,0,param_4);
  uVar8 = 0;
  iVar5 = DAT_0001d2d0 + 0x1d198;
  while (pcVar2 = strrchr(acStack_1028,0x20), pcVar2 != (char *)0x0) {
    uVar3 = strtoul(pcVar2 + 1,(char **)0x0,0x10);
    if (uVar8 < uVar7) {
      *(ulong *)((int)param_3 + uVar8 * 4) = uVar3;
    }
    else {
      iVar4 = FUN_000230c4();
      if (6 < iVar4) {
        FUN_00022f5c(7,0,iVar1 + 0x1d190,0x72,iVar9 + 0x1d194,iVar5,param_2,uVar3);
      }
    }
    uVar8 = uVar8 + 1;
    *pcVar2 = '\0';
  }
  uVar3 = strtoul(acStack_1028,(char **)0x0,0x10);
  if (uVar8 < uVar7) {
    *(ulong *)((int)param_3 + uVar8 * 4) = uVar3;
  }
  else {
    iVar1 = FUN_000230c4();
    if (6 < iVar1) {
      FUN_00022f5c(7,0,DAT_0001d2e8 + 0x1d266,0x7a,DAT_0001d2ec + 0x1d26c,DAT_0001d2e4 + 0x1d260,
                   param_2,uVar3);
    }
  }
  if (param_5 != '\0') {
    snprintf(acStack_1028,0x1000,(char *)(DAT_0001d2d4 + 0x1d1ca),8);
    iVar1 = FUN_000230c4();
    if (6 < iVar1) {
      FUN_00022f5c(7,0,DAT_0001d2dc + 0x1d1e6,0x80,DAT_0001d2e0 + 0x1d1ec,DAT_0001d2d8 + 0x1d1e0,
                   param_2);
    }
    piVar6 = (int *)((int)param_3 + uVar7 * 4);
    while (piVar6 = piVar6 + -1, *piVar6 == 0) {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
    }
    iVar1 = DAT_0001d2f0 + 0x1d2b2;
    iVar9 = (int)&DAT_0001d2b4 + DAT_0001d2f4;
    for (uVar8 = 0; uVar7 != uVar8; uVar8 = uVar8 + 1) {
      iVar5 = FUN_000230c4();
      if (6 < iVar5) {
        FUN_00022f5c(7,0,iVar1,0x87,iVar9,acStack_1028,uVar8 << 5,
                     *(undefined4 *)((int)param_3 + uVar8 * 4));
      }
    }
  }
  return;
}



/* ===== FUN_0001d2f8 @ 0001d2f8 size=1480 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001d2f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__file;
  char *__s1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint extraout_r12;
  uint uVar17;
  bool bVar18;
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  char acStack_d0 [12];
  char acStack_c4 [12];
  undefined4 local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  undefined4 local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int iStack_8c;
  uint local_88 [8];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_44;
  
  iVar7 = DAT_0001d8c8 + 0x1d30e;
  iVar10 = DAT_0001d8cc + 0x1d312;
  for (iVar16 = param_1; iVar16 != 0; iVar16 = FUN_00028b42(iVar16,iVar10,0)) {
    iVar1 = FUN_00027a0c(iVar16,iVar7);
    if (iVar1 != 0) {
      FUN_0001cd94(param_1,param_4,DAT_0001d8d4 + 0x1d336,DAT_0001d8d0 + 0x1d334);
      FUN_0001d11c(iVar16,iVar7,&local_e4,4,param_4);
      FUN_0001d11c(iVar16,DAT_0001d8d8 + 0x1d356,&local_d8,8,param_4);
      FUN_0001d11c(iVar16,DAT_0001d8dc + 0x1d36a,&local_e0,4,param_4);
      FUN_0001d11c(iVar16,DAT_0001d8e0 + 0x1d37e,local_88,0x60,param_4);
      FUN_0001d11c(iVar16,_DAT_0001d8e4 + 0x1d396,&local_dc,4,param_4);
      uVar15 = local_d8 & 3;
      if (uVar15 == 3) {
        uVar5 = (local_d8 & 7) >> 2;
      }
      else {
        uVar5 = 0;
      }
      if (((-1 < local_e4 << 0x1e) && (uVar5 != 0)) || ((int)(local_dc << 0x19) < 0)) {
        uVar15 = 1;
        FUN_0001cd94(param_1,param_4,_LAB_0001d8ec + 0x1d3de,_LAB_0001d8e8 + 0x1d3da);
        goto LAB_0001d3e0;
      }
      uVar6 = -((int)(local_dc << 0x1a) >> 0x1f);
      uVar13 = 0x110;
      bVar18 = (local_60 & 0x20) != 0;
      uVar12 = uVar6 & 0xff;
      uVar5 = extraout_r12;
      if (bVar18) {
        uVar5 = ~local_60;
      }
      uVar11 = (local_60 | local_60 >> 0xb) & 1;
      if (bVar18) {
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 0;
      }
      goto LAB_0001d44e;
    }
  }
  goto LAB_0001d700;
  while (uVar4 == 0) {
LAB_0001d44e:
    uVar4 = uVar13 & 0x1f;
    uVar13 = uVar13 + 1;
    uVar4 = local_68 >> uVar4 & 1;
    if (uVar13 == 0x120) break;
  }
  if ((local_d4 & 0x600000) == 0x600000) {
    uVar13 = 0;
    if ((local_d4 & 0xc000) != 0xc000) {
      uVar13 = 1;
    }
  }
  else {
    uVar13 = 0;
  }
  local_dc = local_dc >> 1;
  if ((int)local_68 < 0) {
    uVar8 = 0;
  }
  else {
    uVar17 = 0x120;
    do {
      uVar8 = uVar17 & 0x1f;
      uVar17 = uVar17 + 1;
      uVar8 = local_64 >> uVar8 & 1;
      if (uVar17 == 0x140) break;
    } while (uVar8 == 0);
    uVar17 = 0x2c0;
    do {
      if (uVar8 != 0) break;
      uVar9 = uVar17 >> 5;
      uVar8 = uVar17 & 0x1f;
      uVar17 = uVar17 + 1;
      uVar8 = local_88[uVar9] >> uVar8 & 1;
    } while (uVar17 != 0x2e8);
    if (((uVar8 == 0) && (uVar8 = local_44 & 1, uVar8 == 0)) &&
       ((uVar8 = -((int)(local_44 << 0x1e) >> 0x1f), uVar8 == 0 &&
        (uVar8 = -((int)(local_44 << 0x1d) >> 0x1f), uVar8 == 0)))) {
      uVar8 = (local_44 & 0xf) >> 3;
    }
  }
  uVar17 = 3;
  do {
    if (uVar8 != 0) break;
    uVar8 = uVar17 & 0xff;
    uVar17 = uVar17 + 1;
    uVar8 = local_d8 >> uVar8 & 1;
  } while (uVar17 != 0x18);
  uVar17 = uVar13;
  if (uVar15 == 3) {
    if (uVar11 == 0) {
      if ((uVar5 == 0) || ((local_dc & 1) != 0)) {
        if (uVar4 == 0) {
          if ((int)((local_dc | local_60 >> 10) << 0x1f) < 0) {
            uVar17 = 1;
            uVar8 = 0;
          }
          else {
            uVar17 = 0;
          }
        }
        else {
          uVar8 = 0;
          uVar17 = 0;
        }
        bVar18 = uVar13 != 0;
        uVar13 = uVar4;
        if (bVar18) goto LAB_0001d57c;
        goto LAB_0001d594;
      }
      if (uVar13 != 0) {
        uVar5 = 0;
        goto LAB_0001d568;
      }
      uVar8 = 0;
LAB_0001d646:
      uVar15 = 1;
      uVar4 = uVar13;
      goto LAB_0001d5aa;
    }
    if (uVar13 == 0) {
      uVar5 = 1;
LAB_0001d568:
      uVar11 = uVar6;
      uVar8 = uVar6;
      uVar17 = uVar6;
      if (uVar6 != 0) {
        uVar4 = 0;
        uVar8 = uVar4;
        uVar17 = uVar4;
        uVar15 = uVar13;
        goto LAB_0001d5b2;
      }
      goto LAB_0001d5de;
    }
    uVar8 = 0;
LAB_0001d8a2:
    if (uVar6 != 0) {
      uVar17 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar15 = uVar17;
      goto LAB_0001d5b2;
    }
    uVar5 = 1;
    uVar17 = uVar6;
    uVar13 = uVar6;
  }
  else {
    if (uVar13 != 0) {
      if (uVar11 != 0) goto LAB_0001d8a2;
      uVar13 = 0;
      uVar17 = 0;
LAB_0001d57c:
      if ((uVar5 != 0) && ((local_dc & 1) == 0)) goto LAB_0001d646;
      if (((local_dc | local_60 >> 10) & 1) != 0) {
        uVar17 = 1;
      }
    }
LAB_0001d594:
    if (((uVar8 == 0) && (uVar4 != 0)) &&
       ((local_e4 << 0x1d < 0 && (local_e0 & 3) == 3 || (uVar15 != 3)))) {
      if (uVar6 != 0) {
        uVar15 = 0;
        goto LAB_0001d5ae;
      }
      uVar5 = 0;
      uVar15 = uVar6;
LAB_0001d5c8:
      FUN_0001cd94(param_1,param_4,_LAB_0001d908 + 0x1d5d8,_LAB_0001d904 + 0x1d5d4);
      uVar11 = 1;
      uVar8 = uVar6;
      uVar13 = uVar15;
    }
    else {
      uVar15 = 0;
      uVar4 = uVar13;
LAB_0001d5aa:
      if (uVar6 == 0) {
        uVar5 = 0;
        uVar6 = uVar8;
      }
      else {
LAB_0001d5ae:
        uVar5 = 0;
LAB_0001d5b2:
        FUN_0001cd94(param_1,param_4,_LAB_0001d900 + 0x1d5c0,_LAB_0001d8fc + 0x1d5be);
        uVar6 = uVar8;
      }
      uVar11 = 0;
      uVar8 = uVar6;
      uVar13 = uVar15;
      if (uVar4 != 0) goto LAB_0001d5c8;
    }
LAB_0001d5de:
    if (uVar13 != 0) {
      FUN_0001cd94(param_1,param_4,_LAB_0001d910 + 0x1d5ee,_LAB_0001d90c + 0x1d5ec);
    }
    uVar6 = uVar11;
    if (uVar17 != 0) {
      FUN_0001cd94(param_1,param_4,_LAB_0001d918 + 0x1d600,_LAB_0001d914 + 0x1d5fe);
    }
  }
  if (uVar8 != 0) {
    FUN_0001cd94(param_1,param_4,_LAB_0001d920 + 0x1d612,_LAB_0001d91c + 0x1d610);
  }
  if (uVar5 != 0) {
    FUN_0001cd94(param_1,param_4,_LAB_0001d928 + 0x1d628,_LAB_0001d924 + 0x1d626);
  }
  uVar15 = (uVar6 | uVar8 | uVar12 | uVar5 | uVar13 | uVar17) & 0xff;
LAB_0001d3e0:
  iVar16 = -((local_e4 << 0x1e) >> 0x1f);
  if (iVar16 == 0) {
    iVar16 = FUN_000230c4();
    if (6 < iVar16) {
      FUN_00022f5c(7,0,_LAB_0001d8f4 + 0x1d40e,0x113,_LAB_0001d8f8 + 0x1d41d,_LAB_0001d8f0 + 0x1d406
                  );
    }
    if (uVar15 == 0) {
LAB_0001d85c:
      if ((local_e4 << 0x1d < 0) && ((local_e0 & 0x140) != 0)) {
        iVar7 = _LAB_0001d970 + 0x1d876;
        iVar16 = _LAB_0001d974 + 0x1d878;
        goto LAB_0001d6e2;
      }
    }
  }
  else {
    uVar5 = 0;
    iVar10 = 0;
    iVar1 = _LAB_0001d92c + 0x1d683;
    iVar7 = _LAB_0001d930 + 0x1d67c;
    puVar14 = local_88;
    do {
      uVar5 = uVar5 | *puVar14;
      iVar2 = FUN_000230c4();
      if (6 < iVar2) {
        FUN_00022f5c(7,0,iVar7,0x11b,iVar1,_LAB_0001d934 + 0x1d6a6,iVar10 << 5,uVar5 != 0);
      }
      iVar10 = iVar10 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar10 != 8);
    if (uVar5 == 0) {
      iVar10 = _LAB_0001d964 + 0x1d7e2;
      puVar14 = (uint *)(_LAB_0001d960 + 0x1d7f8);
      iVar1 = _LAB_0001d968 + 0x1d7f7;
      uVar5 = 0;
      iVar7 = 0;
      do {
        for (uVar6 = *puVar14; uVar12 = uVar5, uVar6 < puVar14[1]; uVar6 = uVar6 + 1) {
          uVar12 = local_88[uVar6 >> 5] >> (uVar6 & 0x1f) & 1;
          if (uVar12 != 0) {
            iVar2 = FUN_000230c4();
            if (6 < iVar2) {
              FUN_00022f5c(7,0,iVar10,0x123,iVar1,_LAB_0001d96c + 0x1d83c,uVar6);
            }
            break;
          }
        }
        puVar14 = puVar14 + 2;
        bVar18 = iVar7 == 0;
        uVar5 = uVar12;
        iVar7 = iVar16;
      } while (bVar18);
      bVar18 = false;
      if (uVar12 != 0) goto LAB_0001d6bc;
    }
    else {
LAB_0001d6bc:
      bVar18 = true;
      FUN_0001cd94(param_1,param_4,_LAB_0001d93c + 0x1d6cc,_LAB_0001d938 + 0x1d6c8);
    }
    if ((local_88[0] & 0xfffffffe) == 0xfffffffe) {
      iVar7 = _LAB_0001d940 + 0x1d6e2;
      iVar16 = _LAB_0001d944 + 0x1d6e4;
LAB_0001d6e2:
      FUN_0001cd94(param_1,param_4,iVar16,iVar7);
    }
    else if ((uVar15 == 0) && (!bVar18)) goto LAB_0001d85c;
  }
  if (local_e4 << 0x1a < 0) {
    FUN_0001cd94(param_1,param_4,_LAB_0001d94c + 0x1d6fe,_LAB_0001d948 + 0x1d6fc);
  }
LAB_0001d700:
  __file = (char *)FUN_0002835e(param_1);
  __s1 = (char *)FUN_000279e8(param_1);
  if ((((__file != (char *)0x0) && (__s1 != (char *)0x0)) &&
      (iVar16 = strncmp(__s1,(char *)(_LAB_0001d950 + 0x1d720),5), iVar16 == 0)) &&
     (__s1 != (char *)0xfffffffb)) {
    iStack_b4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_b0 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    iStack_a4 = iStack_b4;
    iStack_9c = iStack_b4;
    iStack_98 = iStack_b0;
    uStack_94 = uStack_ac;
    iStack_8c = iStack_b4;
    iVar16 = open64(__file,0x80000);
    if (((-1 < iVar16) && (iVar7 = ioctl(iVar16,DAT_0001d8c0,&local_b8), -1 < iVar7)) &&
       ((iVar10 = ioctl(iVar16,DAT_0001d8c4,&local_a0), iVar7 = _LAB_0001d954, -1 < iVar10 &&
        ((0 < iStack_a4 && (0 < iStack_8c)))))) {
      uVar3 = FUN_0002c5f4(iStack_b0 - iStack_b4);
      snprintf(acStack_d0,0xc,(char *)(iVar7 + 0x1d788),uVar3);
      uVar3 = FUN_0002c5f4(iStack_98 - iStack_9c,iStack_8c);
      snprintf(acStack_c4,0xc,(char *)(iVar7 + 0x1d788),uVar3);
      FUN_0001cd94(param_1,param_4,_LAB_0001d958 + 0x1d7b6,acStack_d0);
      FUN_0001cd94(param_1,param_4,_LAB_0001d95c + 0x1d7c4,acStack_c4);
    }
    FUN_00025324(iVar16);
  }
  return 0;
}



/* ===== FUN_0001d978 @ 0001d978 size=114 ===== */

byte FUN_0001d978(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  ssize_t sVar6;
  byte bVar7;
  char acStack_50 [14];
  byte local_42;
  
  pcVar2 = (char *)FUN_0002792c();
  iVar4 = 0;
  if (pcVar2 != (char *)0x0) {
    sVar3 = strlen(pcVar2);
    iVar4 = sVar3 + 7;
  }
  iVar4 = -(iVar4 + 8U & 0xfffffff8);
  pcVar5 = acStack_50 + iVar4;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = stpcpy(acStack_50 + iVar4,pcVar2);
    iVar1 = DAT_0001d9ec;
    *(undefined4 *)pcVar2 = *(undefined4 *)(DAT_0001d9ec + 0x1d9a8);
    pcVar5 = pcVar2 + 7;
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(iVar1 + 0x1d9ac);
  }
  *pcVar5 = '\0';
  iVar4 = open64(acStack_50 + iVar4,0x80000);
  if ((iVar4 < 0) || (sVar6 = read(iVar4,acStack_50,0x40), sVar6 != 0x40)) {
    bVar7 = 0;
  }
  else {
    bVar7 = local_42 >> 7;
  }
  FUN_00025324(iVar4);
  return bVar7;
}



/* ===== FUN_0001d9f0 @ 0001d9f0 size=2032 ===== */

undefined4 FUN_0001d9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  undefined4 uVar8;
  dirent64 *pdVar9;
  long lVar10;
  int iVar11;
  char *__s2;
  int iVar12;
  uint uVar13;
  DIR *__dirp;
  char *pcVar14;
  int local_2d4;
  int local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  char *local_2a8;
  char *local_2a4;
  char *local_2a0;
  int local_29c;
  byte local_298;
  byte local_297;
  byte local_296;
  byte local_295;
  byte local_294;
  byte local_293;
  char local_292;
  int local_290;
  char local_28c [16];
  char local_27c [16];
  char local_26c [16];
  int local_25c;
  char acStack_258 [16];
  char acStack_248 [16];
  char acStack_238 [16];
  char *local_228 [64];
  char *local_128 [65];
  
  memset(&local_29c,0,0x74);
  pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e1e0 + 0x1da12);
  if (pcVar1 == (char *)0x0) {
    return 1;
  }
  uVar2 = strtoul(pcVar1,(char **)0x0,0);
  if (uVar2 == 1) {
    local_2d4 = DAT_0001e1f0 + 0x1da70;
  }
  else {
    if (uVar2 != 0x100) {
      return 0;
    }
    local_2d4 = DAT_0001e1e4 + 0x1da36;
  }
  pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e1e8 + 0x1da40);
  if (pcVar1 == (char *)0x0) {
    return 1;
  }
  pcVar3 = (char *)FUN_00027a0c(param_1,DAT_0001e1ec + 0x1da52);
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  iVar4 = strcmp(pcVar1,pcVar3);
  if (iVar4 != 0) {
    return 0;
  }
  pcVar1 = (char *)FUN_0002830c(param_1);
  if (pcVar1 != (char *)0x0) {
    iVar4 = strcmp((char *)(DAT_0001e1f4 + 0x1da84),pcVar1);
    if (iVar4 == 0) {
      local_2d4 = DAT_0001e224 + 0x1dbc6;
    }
    else {
      iVar4 = strcmp((char *)(DAT_0001e1f8 + 0x1da96),pcVar1);
      if (iVar4 == 0) {
        local_2d4 = DAT_0001e1fc + 0x1daa2;
      }
    }
  }
  pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e200 + 0x1daac);
  if ((pcVar1 == (char *)0x0) || (uVar2 = strtoul(pcVar1,(char **)0x0,0), uVar2 != 0)) {
    if (local_292 != '\0') goto LAB_0001daba;
  }
  else {
    pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e228 + 0x1dbde);
    if (((pcVar1 != (char *)0x0) &&
        (iVar4 = sscanf(pcVar1,(char *)(DAT_0001e22c + 0x1dc10),&local_2ac,&local_2a8,&local_2a4,
                        &local_2a0,local_228,local_128), iVar4 == 6)) &&
       (local_2a8 + local_2ac + (int)local_2a4 + (int)local_2a0 + (int)local_228[0] +
        (int)local_128[0] != (char *)0x0)) {
      local_296 = (byte)local_2a4;
      local_298 = (byte)local_2ac;
      local_297 = (byte)local_2a8;
      local_295 = (byte)local_2a0;
      local_294 = (byte)local_228[0];
      local_293 = (byte)local_128[0];
      local_292 = '\x01';
LAB_0001daba:
      uVar13 = (uint)local_293;
      snprintf((char *)local_228,0x10,(char *)(DAT_0001e204 + 0x1dacc),local_2d4,(uint)local_298,
               (uint)local_297,(uint)local_296,(uint)local_295,(uint)local_294,uVar13);
      FUN_0001cd94(param_1,param_4,DAT_0001e208 + 0x1daf0,local_228);
      if ((local_292 != '\0') &&
         (iVar4 = memcmp(&local_298,(void *)(DAT_0001e20c + 0x1db04),3), iVar4 != 0)) {
        snprintf((char *)local_128,0x20,(char *)(DAT_0001e210 + 0x1db1a),(uint)local_298,
                 (uint)local_297,(uint)local_296,(uint)local_295,(uint)local_294,(uint)local_293,
                 uVar13);
        FUN_0001ceac(param_1,0,local_128,0,param_4);
      }
    }
  }
  iVar4 = FUN_00028b1a(param_1);
  if (iVar4 != 0) {
    uVar5 = FUN_000283b4();
    iVar6 = FUN_0002512c(DAT_0001e214 + 0x1db5a,uVar5);
    if (((iVar6 != 0) && (pcVar1 = (char *)FUN_000279e8(iVar4), pcVar1 != (char *)0x0)) &&
       (sVar7 = strlen(pcVar1), sVar7 - 8 < 2)) {
      uVar13 = snprintf(acStack_238,0x10,(char *)(DAT_0001e218 + 0x1db84),pcVar1);
      if (uVar13 < 0x10) {
        local_29c = 5;
      }
      else if (local_29c != 5) goto LAB_0001dc5c;
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e21c + 0x1dba2),local_2d4,acStack_238
                      );
      if (0xf < iVar4) {
        return 0;
      }
      iVar4 = DAT_0001e220 + 0x1dbb6;
      goto LAB_0001dbb4;
    }
  }
LAB_0001dc5c:
  local_290 = FUN_00028b1a(param_1);
  if (local_290 == 0) {
    return 0;
  }
  uVar5 = FUN_000283b4();
  iVar6 = DAT_0001e230 + 0x1dc78;
  iVar4 = FUN_0002512c(iVar6,uVar5);
  if (iVar4 == 0) {
    local_290 = FUN_00028b42(param_1,iVar6,0);
    if (local_290 == 0) {
      return 0;
    }
  }
  else {
    local_29c = 1;
  }
  pcVar1 = (char *)FUN_00027a0c(local_290,DAT_0001e234 + 0x1dc98);
  if (((pcVar1 != (char *)0x0) ||
      (pcVar1 = (char *)FUN_00027a0c(local_290,DAT_0001e238 + 0x1dca6), pcVar1 != (char *)0x0)) &&
     (uVar2 = strtoul(pcVar1,(char **)0x0,0), 0 < (int)uVar2)) {
    pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e23c + 0x1dcc2);
    iVar4 = 0;
    if (pcVar1 != (char *)0x0) {
      iVar4 = strtol(pcVar1,(char **)0x0,10);
    }
    local_128[0] = local_26c;
    iVar6 = FUN_00024a84(local_128,0x10,DAT_0001e240 + 0x1dce4,uVar2);
    if (iVar4 != 0) {
      iVar6 = FUN_00024a84(local_128,iVar6,DAT_0001e244 + 0x1dcfa,iVar4);
    }
    if (iVar6 == 0) {
      local_26c[0] = '\0';
    }
    local_25c = FUN_00027a0c(local_290,DAT_0001e248 + 0x1dd0c);
  }
  uVar5 = FUN_00027880(local_290);
  pcVar1 = (char *)FUN_000279e8(local_290);
  iVar4 = sscanf(pcVar1,(char *)(DAT_0001e24c + 0x1dd3c),&local_2b8,&local_2b4,&local_2b0,&local_2ac
                );
  if (iVar4 == 4) {
    pcVar1 = (char *)FUN_00027a0c(param_1,DAT_0001e250 + 0x1dd4c);
    iVar4 = 0;
    if (pcVar1 != (char *)0x0) {
      iVar4 = strtol(pcVar1,(char **)0x0,10);
    }
    local_2a8 = local_27c;
    if (local_2b8 == 0) {
      uVar8 = 0x10;
    }
    else {
      uVar8 = FUN_00024a84(&local_2a8,0x10,DAT_0001e254 + 0x1dd74);
    }
    iVar6 = FUN_00024a84(&local_2a8,uVar8,DAT_0001e258 + 0x1dd88,local_2b4,local_2b0);
    uVar8 = local_2b0;
    if ((local_2ac != 0) || (iVar11 = FUN_0001d978(local_290), uVar8 = local_2b0, iVar11 != 0)) {
      iVar6 = FUN_00024a84(&local_2a8,iVar6,DAT_0001e25c + 0x1ddaa,local_2ac,uVar8);
      local_2b0 = uVar8;
    }
    if (iVar4 != 0) {
      iVar6 = FUN_00024a84(&local_2a8,iVar6,DAT_0001e260 + 0x1ddc2,iVar4,local_2b0);
    }
    if (iVar6 == 0) {
      local_27c[0] = '\0';
    }
    iVar6 = FUN_000287bc(uVar5,DAT_0001e268 + 0x1dde0,DAT_0001e264 + 0x1ddde);
    if (iVar6 == 0) {
LAB_0001dde8:
      __dirp = (DIR *)0x0;
    }
    else {
      uVar5 = FUN_0002792c();
      snprintf((char *)local_228,0x100,(char *)(DAT_0001e28c + 0x1deec),uVar5);
      __dirp = opendir((char *)local_228);
      if (__dirp == (DIR *)0x0) goto LAB_0001dde8;
      pdVar9 = readdir64(__dirp);
      pcVar1 = (char *)(DAT_0001e290 + 0x1df0e);
      while (pdVar9 != (dirent64 *)0x0) {
        if (pdVar9->d_name[0] != '.') {
          lVar10 = strtol(pdVar9->d_name,&local_2a4,10);
          if ((*local_2a4 == '\0') && (0 < lVar10)) {
            snprintf((char *)local_128,0x100,pcVar1,local_228,pdVar9->d_name);
            iVar11 = FUN_00020d30(local_128,&local_2a0);
            pcVar3 = local_2a0;
            if (-1 < iVar11) {
              __s2 = (char *)FUN_000279e8(local_290);
              pcVar14 = local_2a0;
              sVar7 = strlen(local_2a0);
              iVar11 = strncmp(pcVar3,__s2,sVar7);
              if (iVar11 != 0) {
                lVar10 = 0;
              }
              free(pcVar14);
              if (lVar10 != 0) {
                local_2a8 = local_28c;
                if (local_2b8 == 0) {
                  uVar5 = 0x10;
                }
                else {
                  uVar5 = FUN_00024a84(&local_2a8,0x10,DAT_0001e2a0 + 0x1dffc);
                }
                iVar11 = FUN_00024a84(&local_2a8,uVar5,DAT_0001e294 + 0x1dfb0,lVar10);
                if ((local_2ac != 0) || (iVar12 = FUN_0001d978(local_290), iVar12 != 0)) {
                  iVar11 = FUN_00024a84(&local_2a8,iVar11,DAT_0001e298 + 0x1dfca,local_2ac);
                }
                if (iVar4 != 0) {
                  iVar11 = FUN_00024a84(&local_2a8,iVar11,DAT_0001e29c + 0x1dfe0,iVar4);
                }
                if (iVar11 == 0) {
                  local_28c[0] = '\0';
                }
                break;
              }
            }
          }
        }
        pdVar9 = readdir64(__dirp);
      }
    }
    FUN_00027894(iVar6);
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
  }
  if (local_29c == 1) {
    if (local_26c[0] != '\0') {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e26c + 0x1de18),local_2d4,local_26c);
      if (iVar4 < 0x10) {
        FUN_0001cd94(param_1,param_4,DAT_0001e270 + 0x1de30,local_128);
      }
    }
    if (local_25c != 0) {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e274 + 0x1de46),local_2d4,local_25c);
      if (iVar4 < 0x10) {
        FUN_0001cd94(param_1,param_4,DAT_0001e278 + 0x1de5c,local_128);
      }
    }
    if (local_27c[0] != '\0') {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e27c + 0x1de74),local_2d4,local_27c);
      if (iVar4 < 0x10) {
        FUN_0001cd94(param_1,param_4,DAT_0001e280 + 0x1de8c,local_128);
      }
    }
    if (local_28c[0] == '\0') {
      return 0;
    }
    iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e284 + 0x1dea4),local_2d4,local_28c);
    if (0xf < iVar4) {
      return 0;
    }
    iVar4 = DAT_0001e288 + 0x1deb8;
  }
  else {
    iVar4 = FUN_00028b42(param_1,DAT_0001e2a8 + 0x1e01a,DAT_0001e2a4 + 0x1e018);
    if (iVar4 != 0) {
      uVar5 = FUN_000279e8();
      FUN_00024ae4(local_128,0x100,uVar5);
      local_228[0] = strchr((char *)local_128,0x2d);
      if (local_228[0] != (char *)0x0) {
        pcVar1 = local_228[0] + 1;
        local_228[0] = strchr(pcVar1,0x3a);
        if (local_228[0] != (char *)0x0) {
          pcVar3 = local_228[0] + 1;
          *local_228[0] = '\0';
          local_228[0] = strchr(pcVar3,0x2e);
          if (local_228[0] != (char *)0x0) {
            pcVar14 = local_228[0] + 1;
            *local_228[0] = '\0';
            local_228[0] = pcVar1;
            while (local_228[0] = strchr(local_228[0],0x2e), local_228[0] != (char *)0x0) {
              *local_228[0] = 'u';
            }
            local_228[0] = acStack_258;
            iVar6 = FUN_00024ab8(local_228,0x10,DAT_0001e2ac + 0x1e09c,pcVar1,0);
            iVar4 = strcmp(pcVar3,(char *)(DAT_0001e2b0 + 0x1e0aa));
            if (iVar4 != 0) {
              iVar6 = FUN_00024ab8(local_228,0x10,DAT_0001e2b4 + 0x1e0c0,pcVar3,0);
            }
            iVar4 = strcmp(pcVar14,(char *)(DAT_0001e2b8 + 0x1e0ce));
            if (iVar4 != 0) {
              iVar6 = FUN_00024ab8(local_228,0x10,DAT_0001e2bc + 0x1e0de,pcVar14,0);
            }
            if (iVar6 != 0) {
              local_29c = 2;
              if ((local_27c[0] != '\0') &&
                 (iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e2c0 + 0x1e104),local_2d4
                                   ,local_27c,acStack_258), iVar4 < 0x10)) {
                FUN_0001cd94(param_1,param_4,DAT_0001e2c4 + 0x1e11c,local_128);
              }
              if (local_28c[0] == '\0') {
                return 0;
              }
              iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e2c8 + 0x1e130),local_2d4,
                               local_28c,acStack_258);
              if (0xf < iVar4) {
                return 0;
              }
              iVar4 = DAT_0001e2cc + 0x1e144;
              goto LAB_0001dbb4;
            }
          }
        }
      }
    }
    iVar4 = FUN_00028b42(param_1,DAT_0001e2d0 + 0x1e154,0);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar1 = (char *)FUN_000279e8();
    iVar4 = sscanf(pcVar1,(char *)(DAT_0001e2d4 + 0x1e170),local_128);
    if (iVar4 != 1) {
      return 0;
    }
    if (local_128[0] != (char *)0x0) {
      snprintf(acStack_248,0x10,(char *)(DAT_0001e2d8 + 0x1e184));
    }
    local_29c = 3;
    if ((local_27c[0] != '\0') &&
       (iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e2dc + 0x1e19c),local_2d4,local_27c
                         ,acStack_248), iVar4 < 0x10)) {
      FUN_0001cd94(param_1,param_4,DAT_0001e2e0 + 0x1e1b6,local_128);
    }
    if (local_28c[0] == '\0') {
      return 0;
    }
    iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001e2e4 + 0x1e1ca),local_2d4,local_28c,
                     acStack_248);
    if (0xf < iVar4) {
      return 0;
    }
    iVar4 = (int)&DAT_0001e1e0 + DAT_0001e2e8;
  }
LAB_0001dbb4:
  FUN_0001cd94(param_1,param_4,iVar4,local_128);
  return 0;
}



/* ===== FUN_0001e2ec @ 0001e2ec size=46 ===== */

int FUN_0001e2ec(int param_1,char *param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  while (((iVar2 = param_1, iVar2 != 0 && (__s1 = (char *)FUN_000283b4(iVar2), __s1 != (char *)0x0))
         && (iVar1 = strcmp(__s1,param_2), iVar1 == 0))) {
    param_1 = FUN_00028b1a(iVar2);
    iVar3 = iVar2;
  }
  return iVar3;
}



/* ===== FUN_0001e31a @ 0001e31a size=34 ===== */

char * FUN_0001e31a(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  if (iVar1 == 0) {
    param_1 = param_1 + __n;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ===== FUN_0001e33c @ 0001e33c size=78 ===== */

int FUN_0001e33c(int *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  int *piVar2;
  char **__arg;
  char *local_20;
  char *local_1c;
  char *pcStack_8;
  char *pcStack_4;
  
  __arg = &pcStack_8;
  piVar2 = param_1;
  local_20 = param_3;
  local_1c = param_4;
  pcStack_8 = param_3;
  pcStack_4 = param_4;
  iVar1 = vasprintf(&local_20,param_2,__arg);
  if (-1 < iVar1) {
    if (*param_1 == 0) {
      *param_1 = (int)local_20;
    }
    else {
      iVar1 = asprintf(&local_1c,(char *)(DAT_0001e38c + 0x1e362),local_20,*param_1,piVar2,__arg);
      free(local_20);
      if (-1 < iVar1) {
        free((void *)*param_1);
        *param_1 = (int)local_1c;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_0001e390 @ 0001e390 size=50 ===== */

void FUN_0001e390(undefined4 param_1,undefined4 param_2)

{
  char *__nptr;
  ulong uVar1;
  
  __nptr = (char *)FUN_000279ee();
  uVar1 = strtoul(__nptr,(char **)0x0,10);
  if (uVar1 < 0x100) {
    FUN_0001e33c(param_2,DAT_0001e3c4 + 0x1e3b2,uVar1);
    return;
  }
  FUN_0001e33c(param_2,DAT_0001e3c8 + 0x1e3be,uVar1 & 0xffff,uVar1 >> 0x10);
  return;
}



/* ===== FUN_0001e3cc @ 0001e3cc size=2318 ===== */

undefined4 FUN_0001e3cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *__haystack;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  size_t sVar14;
  DIR *__dirp;
  dirent64 *pdVar15;
  ulong uVar16;
  uint uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  char *pcVar22;
  int iVar23;
  void *local_23c;
  int local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  char *local_228 [129];
  
  local_23c = (void *)0x0;
  iVar3 = FUN_00028b42(param_1,DAT_0001ecdc + 0x1e3e2);
  if (iVar3 == 0) {
    pcVar18 = (char *)(DAT_0001ee2c + 0x1ec92);
    iVar4 = DAT_0001ee30 + 0x1ec98;
    bVar2 = false;
    bVar1 = false;
    for (iVar3 = param_1; iVar3 != 0; iVar3 = FUN_00028b1a(iVar3)) {
      pcVar8 = (char *)FUN_000283b4(iVar3);
      if (pcVar8 != (char *)0x0) {
        iVar5 = strcmp(pcVar8,pcVar18);
        if (iVar5 == 0) {
          if (local_23c != (void *)0x0) goto LAB_0001e514;
          iVar5 = FUN_000279e8(iVar3);
          iVar6 = FUN_0001e31a(iVar5,DAT_0001ed08 + 0x1e4ee);
          if (iVar6 == 0) {
LAB_0001e54c:
            iVar6 = FUN_0001e31a(iVar5,DAT_0001ed18 + 0x1e556);
            if (iVar6 != 0) {
              uVar17 = (uint)*(byte *)(iVar5 + 2);
              pcVar8 = strchr((char *)(DAT_0001ed1c + 0x1e56a),uVar17);
              if (pcVar8 != (char *)0x0) {
                iVar5 = DAT_0001ed20 + 0x1e57a;
                goto LAB_0001e50e;
              }
            }
          }
          else {
            uVar17 = (uint)*(byte *)(iVar5 + 3);
            pcVar8 = strchr((char *)(DAT_0001ed0c + 0x1e502),uVar17);
            if (pcVar8 == (char *)0x0) goto LAB_0001e54c;
            iVar5 = DAT_0001ed10 + 0x1e510;
LAB_0001e50e:
            FUN_0001e33c(&local_23c,iVar5,uVar17);
          }
        }
        else {
          pcVar22 = (char *)(DAT_0001ed24 + 0x1e584);
          iVar6 = strcmp(pcVar8,pcVar22);
          iVar5 = iVar3;
          if (iVar6 == 0) {
            pcVar8 = (char *)FUN_0002830c(iVar3);
            if ((pcVar8 != (char *)0x0) &&
               (iVar6 = strcmp(pcVar8,(char *)(DAT_0001ed28 + 0x1e59e)), iVar6 == 0)) {
              pcVar8 = (char *)FUN_00027a0c(iVar3,DAT_0001ed2c + 0x1e5ac);
              if (pcVar8 != (char *)0x0) {
                iVar5 = FUN_0001e2ec(iVar3,pcVar22);
                FUN_0001e33c(&local_23c,DAT_0001ed30 + 0x1e5c4,pcVar8);
                goto LAB_0001e5ca;
              }
              __haystack = (char *)FUN_0002792c(iVar3);
              pcVar9 = strstr(__haystack,(char *)(DAT_0001ed34 + 0x1e5de));
              if (pcVar9 == (char *)0x0) {
                pcVar8 = strstr(__haystack,(char *)(DAT_0001ed48 + 0x1e662));
                if (pcVar8 != (char *)0x0) {
                  uVar7 = FUN_00027880(iVar3);
                  local_22c = pcVar9;
                  iVar6 = FUN_00028b42(iVar3,pcVar22,DAT_0001ed4c + 0x1e680);
                  iVar5 = 0;
                  if ((iVar6 != 0) && (iVar6 = FUN_00028b1a(), iVar6 != 0)) {
                    uVar10 = FUN_000279e8();
                    iVar23 = DAT_0001ed50 + 0x1e6a0;
                    iVar11 = FUN_000287bc(uVar7,iVar23,uVar10);
                    if (iVar11 != 0) {
                      iVar5 = FUN_00028b1a(iVar6);
                      if (iVar5 == 0) {
                        iVar3 = 0;
                        iVar5 = 0;
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = FUN_000279e8();
                        uVar10 = FUN_000287bc(uVar7,DAT_0001ed54 + 0x1e6c8,uVar10);
                        pcVar8 = (char *)FUN_00027a0c(uVar10,DAT_0001ed58 + 0x1e6d6);
                        if (pcVar8 == (char *)0x0) {
LAB_0001e80e:
                          iVar3 = 0;
                          iVar5 = iVar3;
                        }
                        else {
                          iVar6 = strcmp(pcVar8,(char *)(DAT_0001ed5c + 0x1e6ea));
                          if (iVar6 == 0) {
                            iVar6 = FUN_00027a0c(iVar11,DAT_0001ed70 + 0x1e78e);
                            if (iVar6 != 0) {
                              iVar5 = FUN_00028b1a(iVar5);
                              if (iVar5 != 0) {
                                uVar12 = FUN_000279e8();
                                iVar5 = FUN_000287bc(uVar7,iVar23,uVar12);
                                if (iVar5 == 0) {
                                  iVar23 = 0;
                                }
                                else {
                                  iVar23 = FUN_00027a0c(iVar5,DAT_0001ed74 + 0x1e7ba);
                                  if (iVar23 == 0) {
                                    iVar3 = 0;
                                    goto LAB_0001e716;
                                  }
                                }
                                FUN_0001e390(iVar3,&local_22c);
                                if (iVar23 == 0) {
                                  FUN_0001e33c(&local_23c,DAT_0001ed7c + 0x1e800,iVar6);
                                }
                                else {
                                  FUN_0001e33c(&local_23c,DAT_0001ed78 + 0x1e7e6,iVar23,iVar6,
                                               local_22c);
                                }
                                if (local_22c != (char *)0x0) {
                                  free(local_22c);
                                }
                                goto LAB_0001e716;
                              }
                              goto LAB_0001e80e;
                            }
LAB_0001e712:
                            iVar3 = 0;
                          }
                          else {
                            uVar7 = FUN_00027880(iVar3);
                            local_228[0] = (char *)0x0;
                            iVar5 = FUN_00028b42(iVar3,DAT_0001ed64 + 0x1e70a,DAT_0001ed60 + 0x1e706
                                                );
                            if ((iVar5 == 0) || (iVar5 = FUN_00028b1a(), iVar5 == 0))
                            goto LAB_0001e712;
                            uVar12 = FUN_000279e8();
                            iVar5 = FUN_000287bc(uVar7,iVar23,uVar12);
                            if (iVar5 == 0) goto LAB_0001e712;
                            iVar6 = FUN_00027a0c(iVar5,DAT_0001ed68 + 0x1e752);
                            if (iVar6 == 0) {
                              iVar3 = 0;
                            }
                            else {
                              FUN_0001e390(iVar3,local_228);
                              FUN_0001e33c(&local_23c,DAT_0001ed6c + 0x1e76c,iVar6,local_228[0]);
                              if (local_228[0] != (char *)0x0) {
                                free(local_228[0]);
                              }
                            }
                            FUN_00027894(iVar5);
                          }
                          iVar5 = 0;
                        }
                      }
LAB_0001e716:
                      FUN_00027894(iVar11);
                      FUN_00027894(iVar5);
                      FUN_00027894(uVar10);
                      iVar5 = iVar3;
                    }
                  }
                  goto LAB_0001e5ca;
                }
                pcVar8 = strstr(__haystack,(char *)(DAT_0001ed80 + 0x1e81c));
                iVar6 = DAT_0001ed84;
                if (pcVar8 == (char *)0x0) {
                  pcVar8 = strstr(__haystack,(char *)(DAT_0001eda4 + 0x1e924));
                  if (pcVar8 != (char *)0x0) goto LAB_0001ec84;
                  pcVar22 = strstr(__haystack,(char *)(DAT_0001eda8 + 0x1e938));
                  if (pcVar22 == (char *)0x0) {
                    iVar5 = FUN_00028b42(iVar3,DAT_0001edc0 + 0x1e9de,DAT_0001edbc + 0x1e9dc);
                    if (iVar5 != 0) {
                      pcVar8 = (char *)FUN_000279e8(iVar3);
                      iVar3 = sscanf(pcVar8,(char *)(DAT_0001edc4 + 0x1ea0a),&local_238,&local_234,
                                     &local_230,&local_22c);
                      if (iVar3 == 4) {
                        pcVar8 = (char *)FUN_0002792c(iVar5);
                        pcVar8 = strdup(pcVar8);
                        if (pcVar8 != (char *)0x0) {
                          pcVar22 = strrchr(pcVar8,0x2f);
                          if (pcVar22 != (char *)0x0) {
                            *pcVar22 = '\0';
                            __dirp = opendir(pcVar8);
                            if (__dirp != (DIR *)0x0) {
                              pdVar15 = readdir64(__dirp);
                              uVar19 = 0xffffffff;
                              while (pdVar15 != (dirent64 *)0x0) {
                                uVar20 = uVar19;
                                if (((pdVar15->d_name[0] != '.') &&
                                    (((pdVar15->d_type == '\x04' || (pdVar15->d_type == '\n')) &&
                                     (iVar3 = FUN_0001e31a(pdVar15->d_name,iVar4), iVar3 != 0)))) &&
                                   (((uVar16 = strtoul(pdVar15->d_name + 4,local_228,10),
                                     *local_228[0] == '\0' &&
                                     (uVar20 = uVar16, uVar19 != 0xffffffff)) &&
                                    ((int)uVar19 <= (int)uVar16)))) {
                                  uVar20 = uVar19;
                                }
                                pdVar15 = readdir64(__dirp);
                                uVar19 = uVar20;
                              }
                              closedir(__dirp);
                              if (uVar19 != 0xffffffff) {
                                local_238 = local_238 - uVar19;
                                FUN_0001e33c(&local_23c,DAT_0001edc8 + 0x1ea6a,local_238,local_234,
                                             local_230,local_22c);
                              }
                            }
                          }
                          free(pcVar8);
                          goto LAB_0001e5cc;
                        }
                      }
                    }
                    iVar5 = 0;
                  }
                  else {
                    local_22c = pcVar8;
                    iVar6 = FUN_00028b42(iVar3,DAT_0001edb0 + 0x1e958,DAT_0001edac + 0x1e952);
                    iVar5 = 0;
                    if (((iVar6 != 0) && (iVar6 = FUN_00028b1a(), iVar6 != 0)) &&
                       ((pcVar8 = (char *)FUN_00027a0c(iVar6,DAT_0001edb4 + 0x1e96a),
                        pcVar8 != (char *)0x0 &&
                        (((sVar14 = strlen(pcVar8), 0x24 < sVar14 && (*pcVar8 == '{')) &&
                         (pcVar8[0x24] == '}')))))) {
                      pcVar22 = pcVar8 + 0x23;
                      iVar5 = 0;
                      do {
                        pcVar8 = pcVar8 + 1;
                        if (*pcVar8 != '-') {
                          *(char *)((int)local_228 + iVar5) = *pcVar8;
                          iVar5 = iVar5 + 1;
                        }
                      } while (pcVar8 != pcVar22);
                      *(undefined1 *)((int)local_228 + iVar5) = 0;
                      FUN_0001e390(iVar3,&local_22c);
                      FUN_0001e33c(&local_23c,DAT_0001edb8 + 0x1e9c2,local_228,local_22c);
                      free(local_22c);
                      iVar5 = iVar3;
                    }
                  }
                  goto LAB_0001e5cc;
                }
                uVar7 = FUN_00027880(iVar3);
                local_228[0] = (char *)0x0;
                iVar11 = iVar3;
                do {
                  iVar11 = FUN_00028b1a(iVar11);
                  iVar5 = 0;
                  if (iVar11 == 0) goto LAB_0001e5ca;
                  uVar10 = FUN_000279e8();
                  iVar23 = FUN_0001e31a(uVar10,iVar6 + 0x1e832);
                } while (iVar23 == 0);
                uVar10 = FUN_000279e8(iVar11);
                iVar6 = FUN_000287bc(uVar7,DAT_0001ed88 + 0x1e862,uVar10);
                if (iVar6 == 0) goto LAB_0001e5ca;
                iVar5 = FUN_00027a0c(iVar6,DAT_0001ed8c + 0x1e878);
                if (iVar5 == 0) {
LAB_0001e87e:
                  iVar11 = 0;
                  iVar3 = 0;
                }
                else {
                  uVar10 = FUN_000279ee(iVar11);
                  iVar11 = asprintf((char **)&local_22c,(char *)(DAT_0001ed90 + 0x1e89c),uVar10);
                  if (iVar11 < 0) goto LAB_0001e87e;
                  iVar11 = FUN_000287bc(uVar7,DAT_0001ed94 + 0x1e8b4,local_22c);
                  free(local_22c);
                  if (iVar11 == 0) goto LAB_0001e87e;
                  iVar23 = FUN_00027a0c(iVar11,DAT_0001ed98 + 0x1e8ce);
                  iVar13 = FUN_00027a0c(iVar11,DAT_0001ed9c + 0x1e8d8);
                  if (iVar23 == 0) {
                    iVar3 = 0;
                  }
                  else if (iVar13 == 0) {
                    iVar3 = 0;
                  }
                  else {
                    FUN_0001e390(iVar3,local_228);
                    FUN_0001e33c(&local_23c,DAT_0001eda0 + 0x1e902,iVar23,iVar13,iVar5,local_228[0])
                    ;
                    if (local_228[0] != (char *)0x0) {
                      free(local_228[0]);
                    }
                  }
                }
                FUN_00027894(iVar6);
LAB_0001e648:
                FUN_00027894(iVar11);
                iVar5 = iVar3;
              }
              else {
                uVar7 = FUN_00027880(iVar3);
                local_228[0] = pcVar8;
                iVar6 = FUN_00028b42(iVar3,pcVar22,DAT_0001ed38 + 0x1e5fc);
                iVar5 = 0;
                if (iVar6 != 0) {
                  uVar10 = FUN_000279e8();
                  iVar11 = FUN_000287bc(uVar7,DAT_0001ed3c + 0x1e610,uVar10);
                  if (iVar11 != 0) {
                    iVar5 = FUN_00027a0c(iVar11,DAT_0001ed40 + 0x1e622);
                    if (iVar5 == 0) {
                      iVar3 = 0;
                    }
                    else {
                      FUN_0001e390(iVar3,local_228);
                      FUN_0001e33c(&local_23c,DAT_0001ed44 + 0x1e63c,iVar5,local_228[0]);
                      if (local_228[0] != (char *)0x0) {
                        free(local_228[0]);
                      }
                    }
                    goto LAB_0001e648;
                  }
                }
              }
LAB_0001e5ca:
              bVar1 = true;
            }
          }
          else {
            pcVar22 = (char *)(DAT_0001edcc + 0x1ead0);
            iVar6 = strcmp(pcVar8,pcVar22);
            if (iVar6 == 0) {
              pcVar8 = (char *)FUN_000279e8(iVar3);
              iVar5 = sscanf(pcVar8,(char *)(DAT_0001edd0 + 0x1eae8),&local_22c,local_228);
              if (iVar5 == 2) {
                FUN_0001e33c(&local_23c,DAT_0001edd4 + 0x1eafa,local_228[0]);
                iVar5 = FUN_0001e2ec(iVar3,pcVar22);
              }
              else {
LAB_0001ec84:
                iVar5 = 0;
              }
            }
            else {
              iVar6 = strcmp(pcVar8,(char *)(DAT_0001edd8 + 0x1eb10));
              if (iVar6 != 0) {
                iVar5 = strcmp(pcVar8,(char *)(DAT_0001edec + 0x1eb72));
                if (iVar5 == 0) {
                  pcVar8 = (char *)FUN_000279e8(iVar3);
                  iVar5 = sscanf(pcVar8,(char *)(DAT_0001edf0 + 0x1eb86),local_228);
                  if (iVar5 == 1) {
                    iVar5 = DAT_0001edf4 + 0x1eb94;
                    pcVar8 = local_228[0];
                    goto LAB_0001eb62;
                  }
                  goto LAB_0001ec84;
                }
                pcVar22 = (char *)(DAT_0001edf8 + 0x1eb9e);
                iVar5 = strcmp(pcVar8,pcVar22);
                if (iVar5 == 0) {
                  uVar7 = FUN_000279ee(iVar3);
                  FUN_0001e33c(&local_23c,DAT_0001edfc + 0x1ebb0,uVar7);
                  iVar3 = FUN_0001e2ec(iVar3,pcVar22);
                  goto LAB_0001e514;
                }
                pcVar22 = (char *)(DAT_0001ee00 + 0x1ebcc);
                iVar5 = strcmp(pcVar8,pcVar22);
                if (iVar5 == 0) {
                  uVar7 = FUN_000279e8(iVar3);
                  iVar5 = DAT_0001ee04 + 0x1ebde;
                }
                else {
                  iVar5 = strcmp(pcVar8,(char *)(DAT_0001ee08 + 0x1ebfa));
                  if (iVar5 == 0) {
                    uVar7 = FUN_000279e8(iVar3);
                    FUN_0001e33c(&local_23c,DAT_0001ee0c + 0x1ec0a,uVar7);
                    pcVar22 = (char *)(DAT_0001ee10 + 0x1ec16);
LAB_0001ec14:
                    iVar5 = FUN_0001e2ec(iVar3,pcVar22);
                    goto LAB_0001e5ca;
                  }
                  pcVar22 = (char *)(DAT_0001ee14 + 0x1ec28);
                  iVar5 = strcmp(pcVar8,pcVar22);
                  if (iVar5 == 0) {
                    uVar7 = FUN_000279e8(iVar3);
                    iVar5 = DAT_0001ee18 + 0x1ec3a;
                  }
                  else {
                    pcVar22 = (char *)(DAT_0001ee1c + 0x1ec46);
                    iVar5 = strcmp(pcVar8,pcVar22);
                    if (iVar5 != 0) {
                      pcVar22 = (char *)(DAT_0001ee24 + 0x1ec64);
                      iVar5 = strcmp(pcVar8,pcVar22);
                      if (iVar5 != 0) goto LAB_0001e514;
                      uVar7 = FUN_000279e8(iVar3);
                      FUN_0001e33c(&local_23c,DAT_0001ee28 + 0x1ec7a,uVar7);
                      goto LAB_0001ec14;
                    }
                    uVar7 = FUN_000279e8(iVar3);
                    iVar5 = DAT_0001ee20 + 0x1ec58;
                  }
                }
                bVar1 = true;
                FUN_0001e33c(&local_23c,iVar5,uVar7);
                iVar3 = FUN_0001e2ec(iVar3,pcVar22);
                goto LAB_0001e514;
              }
              pcVar8 = (char *)FUN_0002830c(iVar3);
              if ((pcVar8 != (char *)0x0) &&
                 ((iVar6 = strcmp(pcVar8,(char *)(DAT_0001eddc + 0x1eb28)), iVar6 == 0 ||
                  (iVar6 = strcmp(pcVar8,(char *)(DAT_0001ede0 + 0x1eb34)), iVar6 == 0)))) {
                pcVar8 = (char *)FUN_000279e8(iVar3);
                pcVar8 = strchr(pcVar8,0x2d);
                if (pcVar8 != (char *)0x0) {
                  iVar3 = FUN_0001e2ec(iVar3,DAT_0001ede4 + 0x1eb58);
                  iVar5 = DAT_0001ede8 + 0x1eb62;
                  pcVar8 = pcVar8 + 1;
LAB_0001eb62:
                  FUN_0001e33c(&local_23c,iVar5,pcVar8);
                  iVar5 = iVar3;
                }
              }
            }
          }
LAB_0001e5cc:
          bVar2 = true;
          iVar3 = iVar5;
        }
      }
LAB_0001e514:
    }
    if (!bVar1) {
      free(local_23c);
      local_23c = (void *)0x0;
    }
    pcVar18 = (char *)FUN_000283b4(param_1);
    iVar3 = strcmp(pcVar18,(char *)(DAT_0001ed14 + 0x1e538));
    if ((iVar3 == 0) && (!bVar2)) {
      free(local_23c);
      local_23c = (void *)0x0;
    }
    goto LAB_0001e458;
  }
  iVar4 = FUN_00028b42(param_1,DAT_0001ece4 + 0x1e400,DAT_0001ece0 + 0x1e3fc);
  if (iVar4 == 0) {
LAB_0001e4b2:
    uVar7 = FUN_000279e8(iVar3);
    FUN_0001e33c(&local_23c,DAT_0001ed04 + 0x1e4c0,uVar7);
  }
  else {
    iVar5 = FUN_00027a0c(iVar4,DAT_0001ece8 + 0x1e410);
    iVar6 = FUN_00027a0c(iVar4,DAT_0001ecec + 0x1e41a);
    iVar4 = FUN_00027a0c(iVar4,DAT_0001ecf0 + 0x1e428);
    if (((iVar5 == 0) || (iVar4 == 0)) || (iVar6 == 0)) goto LAB_0001e4b2;
    FUN_0001e33c(&local_23c,DAT_0001ecf4 + 0x1e448,iVar5,iVar6,iVar4);
  }
  FUN_0001e2ec(iVar3,DAT_0001ecf8 + 0x1e456);
LAB_0001e458:
  if (local_23c == (void *)0x0) {
    uVar7 = 1;
  }
  else {
    pbVar21 = (byte *)((int)local_23c + -1);
    iVar3 = 0;
LAB_0001e468:
    pbVar21 = pbVar21 + 1;
    uVar17 = (uint)*pbVar21;
    if (uVar17 != 0) {
      if (((9 < uVar17 - 0x30) && (0x19 < (uVar17 & 0xffffffdf) - 0x41)) && (uVar17 != 0x2d))
      goto LAB_0001ecb8;
      *(byte *)((int)local_228 + iVar3) = *pbVar21;
      goto LAB_0001ecb2;
    }
    do {
      iVar4 = iVar3;
      if (iVar4 == 0) break;
      iVar3 = iVar4 + -1;
    } while (*(char *)((int)local_228 + iVar4 + -1) == '_');
    *(undefined1 *)((int)local_228 + iVar4) = 0;
    FUN_0001cd94(param_1,param_4,DAT_0001ecfc + 0x1e48e);
    FUN_0001cd94(param_1,param_4,DAT_0001ed00 + 0x1e49e,local_228);
    free(local_23c);
    uVar7 = 0;
  }
  return uVar7;
LAB_0001ecb8:
  if ((iVar3 != 0) && (*(char *)((int)local_228 + iVar3 + -1) != '_')) {
    *(undefined1 *)((int)local_228 + iVar3) = 0x5f;
LAB_0001ecb2:
    iVar3 = iVar3 + 1;
  }
  goto LAB_0001e468;
}



/* ===== FUN_0001ee34 @ 0001ee34 size=302 ===== */

int FUN_0001ee34(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcStack_10048;
  undefined4 uStack_10044;
  undefined4 uStack_10040;
  byte abStack_1003c [5];
  byte abStack_10037 [65555];
  
  uVar10 = 0;
  pcStack_10048 = (char *)0x0;
  uVar2 = FUN_0002792c();
  iVar3 = asprintf(&pcStack_10048,(char *)(DAT_0001ef68 + 0x1ee56),uVar2);
  if (iVar3 < 0) {
    iVar3 = -1;
    iVar4 = FUN_000230a0(DAT_0001ef70 + 0x1ee70,0xa8,DAT_0001ef6c + 0x1ee6e);
  }
  else {
    iVar3 = open64(pcStack_10048,0x80000);
    sVar1 = DAT_0001ef64;
    if (iVar3 < 0) {
      piVar5 = __errno_location();
      iVar4 = *piVar5;
      iVar6 = FUN_000230c4();
      if (iVar6 < 7) {
        if (0 < iVar4) {
          iVar4 = -iVar4;
        }
      }
      else {
        iVar4 = FUN_00022f5c(7,iVar4,DAT_0001ef78 + 0x1eec0,0xac,DAT_0001ef7c + 0x1eec2,
                             DAT_0001ef74 + 0x1eeba);
      }
    }
    else {
      uVar7 = read(iVar3,abStack_1003c,DAT_0001ef64);
      iVar4 = DAT_0001ef80;
      if (((int)uVar7 < 0x12) || (uVar7 == sVar1)) {
        iVar4 = -5;
      }
      else {
        *param_2 = '\0';
        iVar6 = 0;
        do {
          if (0x1fd < uVar10 + 7) goto LAB_0001ef04;
          uVar9 = (uint)abStack_1003c[iVar6];
          if (uVar9 < 3) break;
          iVar11 = iVar6 + uVar9;
          if (abStack_1003c[iVar6 + 1] == 4) {
            snprintf((char *)&uStack_10044,8,(char *)(iVar4 + 0x1eefa),(uint)abStack_10037[iVar6],
                     (uint)abStack_10037[iVar6 + 1],(uint)abStack_10037[iVar6 + 2]);
            pcVar8 = strstr(param_2,(char *)&uStack_10044);
            if (pcVar8 == (char *)0x0) {
              *(undefined4 *)(param_2 + uVar10) = uStack_10044;
              *(undefined4 *)(param_2 + uVar10 + 4) = uStack_10040;
              uVar10 = uVar10 + 7;
            }
          }
          iVar6 = iVar11;
        } while (iVar11 + 9U < uVar7);
        iVar4 = 0;
        if (uVar10 != 0) {
LAB_0001ef04:
          param_2[uVar10] = ':';
          iVar4 = 0;
          param_2[uVar10 + 1] = '\0';
        }
      }
    }
  }
  FUN_00025324(iVar3);
  free(pcStack_10048);
  return iVar4;
}



/* ===== FUN_0001ef84 @ 0001ef84 size=2024 ===== */

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffbc8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0001ef84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_898;
  int local_890;
  undefined1 auStack_888 [4];
  undefined1 auStack_884 [4];
  undefined4 local_880;
  char **local_87c;
  uint local_878 [3];
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 local_864;
  undefined4 uStack_860;
  undefined4 local_85c;
  undefined4 uStack_858;
  undefined4 local_854;
  undefined4 uStack_850;
  undefined4 local_84c;
  undefined4 uStack_848;
  undefined4 local_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 local_824;
  undefined4 uStack_820;
  undefined4 local_81c;
  undefined4 uStack_818;
  undefined4 local_814;
  undefined4 uStack_810;
  undefined4 local_80c;
  undefined4 uStack_808;
  undefined4 local_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  uint local_7f8;
  undefined4 local_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 local_7e4;
  undefined4 uStack_7e0;
  undefined4 local_7dc;
  undefined4 uStack_7d8;
  undefined4 local_7d4;
  undefined4 uStack_7d0;
  undefined4 local_7cc;
  undefined4 uStack_7c8;
  undefined4 local_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  char local_7b8 [4];
  undefined4 local_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 local_7a4;
  undefined4 uStack_7a0;
  undefined4 local_79c;
  undefined4 uStack_798;
  undefined4 local_794;
  undefined4 uStack_790;
  undefined4 local_78c;
  undefined4 uStack_788;
  undefined4 local_784;
  undefined4 uStack_780;
  uint3 uStack_77c;
  undefined1 uStack_779;
  char local_778 [4];
  undefined4 local_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 local_764;
  undefined4 uStack_760;
  undefined4 local_75c;
  undefined4 uStack_758;
  undefined4 local_754;
  undefined4 uStack_750;
  undefined4 local_74c;
  undefined4 uStack_748;
  undefined4 local_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined1 auStack_738 [256];
  undefined1 auStack_638 [256];
  char *local_538 [64];
  undefined4 local_438;
  undefined1 auStack_434 [508];
  undefined4 local_238;
  undefined1 auStack_234 [528];
  
  uVar7 = 0;
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_878[1] = 0;
  local_838 = 0;
  local_844 = 0;
  local_878[0] = 0;
  local_834 = 0;
  local_438 = 0;
  local_804 = 0;
  local_864 = 0;
  local_85c = 0;
  local_854 = 0;
  local_84c = 0;
  uStack_840 = 0;
  local_824 = 0;
  local_81c = 0;
  local_814 = 0;
  local_80c = 0;
  uStack_800 = 0;
  local_878[2] = uVar12;
  uStack_86c = uVar10;
  uStack_868 = uVar11;
  uStack_860 = uVar12;
  uStack_858 = uVar12;
  uStack_850 = uVar12;
  uStack_848 = uVar12;
  uStack_83c = uVar12;
  uStack_830 = uVar12;
  uStack_82c = uVar10;
  uStack_828 = uVar11;
  uStack_820 = uVar12;
  uStack_818 = uVar12;
  uStack_810 = uVar12;
  uStack_808 = uVar12;
  uStack_7fc = uVar12;
  memset(auStack_434,0,0x1fc);
  local_238 = 0;
  memset(auStack_234,0,0x1fc);
  local_7f8 = 0;
  local_7b8[0] = '\0';
  local_7b8[1] = '\0';
  local_7b8[2] = '\0';
  local_7b8[3] = '\0';
  local_778[0] = '\0';
  local_778[1] = '\0';
  local_778[2] = '\0';
  local_778[3] = '\0';
  local_7f4 = uVar7;
  uStack_7f0 = uVar12;
  uStack_7ec = uVar10;
  uStack_7e8 = uVar11;
  local_7e4 = uVar7;
  uStack_7e0 = uVar12;
  local_7dc = uVar7;
  uStack_7d8 = uVar12;
  local_7d4 = uVar7;
  uStack_7d0 = uVar12;
  local_7cc = uVar7;
  uStack_7c8 = uVar12;
  local_7c4 = uVar7;
  uStack_7c0 = uVar7;
  uStack_7bc = uVar12;
  local_7b4 = uVar7;
  uStack_7b0 = uVar12;
  uStack_7ac = uVar10;
  uStack_7a8 = uVar11;
  local_7a4 = uVar7;
  uStack_7a0 = uVar12;
  local_79c = uVar7;
  uStack_798 = uVar12;
  local_794 = uVar7;
  uStack_790 = uVar12;
  local_78c = uVar7;
  uStack_788 = uVar12;
  local_784 = uVar7;
  uStack_780 = uVar7;
  _uStack_77c = uVar12;
  local_774 = uVar7;
  uStack_770 = uVar12;
  uStack_76c = uVar10;
  uStack_768 = uVar11;
  local_764 = uVar7;
  uStack_760 = uVar12;
  local_75c = uVar7;
  uStack_758 = uVar12;
  local_754 = uVar7;
  uStack_750 = uVar12;
  local_74c = uVar7;
  uStack_748 = uVar12;
  local_744 = uVar7;
  uStack_740 = uVar7;
  uStack_73c = uVar12;
  iVar1 = FUN_0002830c(param_1);
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_0002830c(param_1);
    iVar1 = strcmp(pcVar2,(char *)(DAT_0001f790 + 0x1f08a));
    if (iVar1 == 0) {
      FUN_0001ee34(param_1,&local_238);
      local_898 = 0;
      local_890 = 0;
      iVar1 = param_1;
      goto LAB_0001f0a0;
    }
  }
  iVar1 = FUN_00028b42(param_1,DAT_0001f7b0 + 0x1f11c,DAT_0001f7ac + 0x1f11a);
  if (iVar1 == 0) {
    iVar1 = FUN_000230c4();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_0002792c(param_1);
    iVar3 = DAT_0001f7b4 + 0x1f14a;
    iVar1 = DAT_0001f7b8 + 0x1f152;
    iVar4 = DAT_0001f7bc + 0x1f167;
    uVar12 = 0x10a;
LAB_0001f1b8:
    FUN_00022f5c(7,0,iVar1,uVar12,iVar4,iVar3,uVar7);
    return 1;
  }
  local_890 = FUN_00027a0c(iVar1,DAT_0001f7c0 + 0x1f168);
  local_898 = FUN_00027a0c(iVar1,DAT_0001f7c4 + 0x1f172);
  pcVar2 = (char *)FUN_00027a0c(iVar1,DAT_0001f7c8 + 0x1f180);
  if (pcVar2 == (char *)0x0) {
    iVar1 = FUN_000230c4();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_000279e8(param_1);
    iVar3 = DAT_0001f7cc + 0x1f1a6;
    iVar1 = DAT_0001f7d0 + 0x1f1ae;
    iVar4 = DAT_0001f7d4 + 0x1f1c3;
    uVar12 = 0x114;
    goto LAB_0001f1b8;
  }
  uVar6 = strtoul(pcVar2,(char **)0x0,0x10);
  if (uVar6 == 8) {
    pcVar2 = (char *)FUN_00027a0c(iVar1,DAT_0001f7d8 + 0x1f1d8);
    if (pcVar2 == (char *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = strtoul(pcVar2,local_538,0);
      if (pcVar2 == local_538[0]) {
        iVar3 = DAT_0001f810 + 0x1f2c0;
      }
      else {
        switch(uVar9) {
        case 1:
          iVar3 = DAT_0001f814 + 0x1f2c8;
          break;
        case 2:
          iVar3 = DAT_0001f800 + 0x1f2a0;
          break;
        case 3:
          iVar3 = DAT_0001f804 + 0x1f2a8;
          break;
        case 4:
          iVar3 = DAT_0001f808 + 0x1f2b0;
          break;
        default:
          iVar3 = DAT_0001f7dc + 0x1f212;
          break;
        case 6:
          iVar3 = DAT_0001f80c + 0x1f2b8;
        }
      }
      FUN_00024ae4(local_7b8,0x3f,iVar3);
    }
  }
  else {
    switch(uVar6) {
    case 1:
      pcVar2 = (char *)(DAT_0001f834 + 0x1f32e);
      break;
    default:
      pcVar2 = (char *)(DAT_0001f818 + 0x1f2e8);
      break;
    case 3:
      pcVar2 = (char *)(DAT_0001f81c + 0x1f2fe);
      break;
    case 6:
      pcVar2 = (char *)(DAT_0001f820 + 0x1f306);
      break;
    case 7:
      pcVar2 = PTR_s_epoll_ctl_0001f824 + 0x1f30e;
      break;
    case 8:
      pcVar2 = PTR_s_epoll_ctl_0001f828 + 0x1f316;
      break;
    case 9:
      pcVar2 = PTR_s_epoll_ctl_0001f82c + 0x1f31e;
      break;
    case 0xe:
      pcVar2 = (char *)(DAT_0001f830 + 0x1f326);
    }
    strncpy(local_7b8,pcVar2,0x3f);
    uVar9 = 0;
    uStack_77c = (uint3)(ushort)uStack_77c;
  }
  iVar3 = FUN_000230c4();
  if (6 < iVar3) {
    uVar7 = FUN_0002792c(iVar1);
    FUN_00022f5c(7,0,DAT_0001f7e4 + 0x1f23c,0x123,DAT_0001f7e8 + 0x1f255,DAT_0001f7e0 + 0x1f234,
                 uVar7,uVar6,uVar9);
  }
  iVar1 = FUN_00028b42(iVar1,DAT_0001f7f0 + 0x1f260,DAT_0001f7ec + 0x1f25e);
  if (iVar1 == 0) {
    iVar1 = FUN_000230c4();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_0002792c(param_1);
    iVar3 = DAT_0001f7f4 + 0x1f284;
    iVar1 = DAT_0001f7f8 + 0x1f28c;
    iVar4 = DAT_0001f7fc + 0x1f2a1;
    uVar12 = 0x129;
    goto LAB_0001f1b8;
  }
  FUN_0001ee34(iVar1,&local_238);
  if ((uVar9 & 0xfffffffb) != 2) goto LAB_0001f0a0;
  iVar3 = FUN_00028b42(param_1,DAT_0001f83c + 0x1f352,DAT_0001f838 + 0x1f350);
  if (iVar3 == 0) {
    iVar3 = FUN_000230c4();
    if (iVar3 < 7) goto LAB_0001f0a0;
    uVar12 = FUN_0002792c(param_1);
    iVar4 = DAT_0001f840 + 0x1f374;
    iVar3 = DAT_0001f844 + 0x1f37c;
    iVar5 = DAT_0001f848 + 0x1f391;
    uVar7 = 0x13a;
  }
  else {
    pcVar2 = (char *)FUN_000279e8();
    iVar4 = sscanf(pcVar2,(char *)(DAT_0001f84c + 0x1f3ac),auStack_888,auStack_884,&local_880,
                   &local_87c);
    if (iVar4 == 4) {
      iVar4 = FUN_00027a0c(iVar3,DAT_0001f85c + 0x1f3ec);
      if (iVar4 == 0) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) goto LAB_0001f0a0;
        uVar12 = FUN_000279e8(iVar3);
        iVar4 = DAT_0001f860 + 0x1f40e;
        iVar3 = DAT_0001f864 + 0x1f416;
        iVar5 = DAT_0001f868 + 0x1f42b;
        uVar7 = 0x146;
      }
      else {
        thunk_FUN_0002bd74(iVar4,auStack_738,0x100);
        FUN_0002b8e4(iVar4,local_878,0x3f);
        FUN_0002b970(local_878,0);
        iVar4 = FUN_00027a0c(iVar3,DAT_0001f86c + 0x1f44a);
        if (iVar4 == 0) {
          iVar4 = FUN_000230c4();
          if (iVar4 < 7) goto LAB_0001f0a0;
          uVar12 = FUN_000279e8(iVar3);
          iVar4 = DAT_0001f870 + 0x1f46c;
          iVar3 = DAT_0001f874 + 0x1f474;
          iVar5 = DAT_0001f878 + 0x1f489;
          uVar7 = 0x150;
        }
        else {
          thunk_FUN_0002bd74(iVar4,auStack_638,0x100);
          FUN_0002b8e4(iVar4,&local_838,0x3f);
          FUN_0002b970(&local_838,0);
          pcVar2 = (char *)FUN_00027a0c(iVar3,DAT_0001f87c + 0x1f4a4);
          if (pcVar2 == (char *)0x0) {
            iVar4 = FUN_000230c4();
            if (iVar4 < 7) goto LAB_0001f0a0;
            uVar12 = FUN_000279e8(iVar3);
            iVar4 = DAT_0001f880 + 0x1f4c2;
            iVar3 = DAT_0001f884 + 0x1f4c8;
            iVar5 = DAT_0001f888 + 0x1f4dd;
            uVar7 = 0x15a;
          }
          else {
            uVar6 = strtoul(pcVar2,local_538,0);
            if (pcVar2 == local_538[0]) {
              iVar4 = DAT_0001f8ac + 0x1f55c;
            }
            else {
              switch(uVar6) {
              case 0:
              case 0xe:
                iVar4 = DAT_0001f88c + 0x1f506;
                break;
              case 1:
                iVar4 = DAT_0001f8a0 + 0x1f54a;
                break;
              default:
                iVar4 = DAT_0001f8b0 + 0x1f562;
                break;
              case 4:
              case 7:
              case 0xf:
                iVar4 = DAT_0001f8a4 + 0x1f550;
                break;
              case 5:
                iVar4 = DAT_0001f8a8 + 0x1f556;
              }
            }
            FUN_00024ae4(local_7b8,0x3f,iVar4);
            iVar4 = FUN_00027a0c(iVar3,DAT_0001f890 + 0x1f514);
            if (iVar4 != 0) {
              FUN_0002b8e4(iVar4,&local_7f8,0x3f);
              FUN_0002b970(&local_7f8,0);
              sprintf(local_778,(char *)(DAT_0001f8b4 + 0x1f582),local_880,local_87c);
              goto LAB_0001f0a0;
            }
            iVar4 = FUN_000230c4();
            if (iVar4 < 7) goto LAB_0001f0a0;
            uVar12 = FUN_000279e8(iVar3);
            iVar4 = DAT_0001f894 + 0x1f532;
            iVar3 = DAT_0001f898 + 0x1f538;
            iVar5 = DAT_0001f89c + 0x1f54d;
            uVar7 = 0x162;
          }
        }
      }
    }
    else {
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) goto LAB_0001f0a0;
      uVar12 = FUN_000279e8(iVar3);
      iVar4 = DAT_0001f850 + 0x1f3ce;
      iVar3 = DAT_0001f854 + 0x1f3d6;
      iVar5 = DAT_0001f858 + 0x1f3eb;
      uVar7 = 0x13e;
    }
  }
  FUN_00022f5c(7,0,iVar3,uVar7,iVar5,iVar4,uVar12);
LAB_0001f0a0:
  iVar3 = FUN_00027a0c(iVar1,DAT_0001f794 + 0x1f0aa);
  iVar4 = FUN_00027a0c(iVar1,DAT_0001f798 + 0x1f0b4);
  if ((local_878[0] & 0xff) == 0) {
    iVar5 = FUN_00027a0c(iVar1,DAT_0001f79c + 0x1f0ce);
    if ((iVar5 == 0) && (iVar5 = iVar3, iVar3 == 0)) {
      iVar1 = FUN_000230c4();
      if (iVar1 < 7) {
        return 1;
      }
      FUN_00022f5c(7,0,DAT_0001f7a4 + 0x1f0fe,0x17b,DAT_0001f7a8 + 0x1f113,DAT_0001f7a0 + 0x1f0f6);
      return 1;
    }
    thunk_FUN_0002bd74(iVar5,auStack_738,0x100);
    FUN_0002b8e4(iVar5,local_878,0x3f);
    FUN_0002b970(local_878,0);
  }
  if ((char)local_838 == '\0') {
    iVar5 = FUN_00027a0c(iVar1,DAT_0001f8b8 + 0x1f5b4);
    if ((iVar5 == 0) && (iVar5 = iVar4, iVar4 == 0)) {
      return 1;
    }
    thunk_FUN_0002bd74(iVar5,auStack_638,0x100);
    FUN_0002b8e4(iVar5,&local_838,0x3f);
    FUN_0002b970(&local_838,0);
  }
  if (((local_7f8 & 0xff) == 0) && (iVar5 = FUN_00027a0c(iVar1,DAT_0001f8bc + 0x1f5f8), iVar5 != 0))
  {
    FUN_0002b8e4(iVar5,&local_7f8,0x3f);
    FUN_0002b970(&local_7f8,0);
  }
  if (((char)local_438 == '\0') && (iVar1 = FUN_00027a0c(iVar1,DAT_0001f8c0 + 0x1f61a), iVar1 != 0))
  {
    pbVar8 = (byte *)(iVar1 + -1);
    while( true ) {
      pbVar8 = pbVar8 + 1;
      uVar9 = (uint)*pbVar8;
      if (uVar9 == 0) break;
      if ((0x5f < uVar9 - 0x20) || (uVar9 == 0x2c)) goto LAB_0001f64c;
    }
    FUN_0002b8e4(iVar1,&local_438,0x1ff);
    FUN_0002b970(&local_438,0);
  }
LAB_0001f64c:
  local_87c = local_538;
  iVar1 = DAT_0001f8c4 + 0x1f65e;
  uVar12 = 0;
  uVar7 = FUN_00024ab8(&local_87c,0x100,local_878,iVar1,&local_838,0);
  if ((char)local_438 != '\0') {
    uVar7 = FUN_00024ab8(&local_87c,uVar7,iVar1,&local_438,0,uVar12);
  }
  if (local_778[0] != '\0') {
    FUN_00024ab8(&local_87c,uVar7,DAT_0001f8c8 + 0x1f69e,local_778,0,uVar12);
  }
  FUN_0001cd94(param_1,param_4,DAT_0001f8cc + 0x1f6ac,local_878);
  FUN_0001cd94(param_1,param_4,DAT_0001f8d0 + 0x1f6b8,auStack_738);
  FUN_0001cd94(param_1,param_4,DAT_0001f8d4 + 0x1f6c6,iVar3);
  FUN_0001cd94(param_1,param_4,DAT_0001f8d8 + 0x1f6d4,&local_838);
  FUN_0001cd94(param_1,param_4,DAT_0001f8dc + 0x1f6e2,auStack_638);
  FUN_0001cd94(param_1,param_4,DAT_0001f8e0 + 0x1f6f0,iVar4);
  FUN_0001cd94(param_1,param_4,DAT_0001f8e4 + 0x1f6fe,&local_7f8);
  FUN_0001cd94(param_1,param_4,DAT_0001f8e8 + 0x1f70c,local_538);
  if ((char)local_438 != '\0') {
    FUN_0001cd94(param_1,param_4,DAT_0001f8ec + 0x1f722,&local_438);
  }
  if (local_7b8[0] != '\0') {
    FUN_0001cd94(param_1,param_4,DAT_0001f8f0 + 0x1f734);
  }
  if (local_778[0] != '\0') {
    FUN_0001cd94(param_1,param_4,DAT_0001f8f4 + 0x1f746);
  }
  FUN_0001cd94(param_1,param_4,DAT_0001f8fc + 0x1f756,DAT_0001f8f8 + 0x1f754);
  if ((char)local_238 != '\0') {
    FUN_0001cd94(param_1,param_4,DAT_0001f900 + 0x1f76a);
  }
  if (local_890 != 0) {
    FUN_0001cd94(param_1,param_4,DAT_0001f904 + 0x1f77a);
  }
  if (local_898 != 0) {
    FUN_0001cd94(param_1,param_4,DAT_0001f908 + 0x1f78a);
  }
  return 0;
}



/* ===== FUN_0001f90c @ 0001f90c size=546 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001f90c(undefined4 param_1,undefined4 param_2,char *param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined local_118 [256];
  
  puVar3 = local_118;
  local_118[0] = 0;
  iVar1 = strcmp(param_3,(char *)(DAT_0001fb30 + 0x1f91e));
  if (iVar1 == 0) {
    puVar2 = (undefined *)(_LAB_0001fb34 + 0x1f934);
    puVar3 = param_4;
  }
  else {
    iVar1 = strcmp(param_3,(char *)(_LAB_0001fb38 + 0x1f948));
    if (iVar1 == 0) {
      puVar2 = (undefined *)(_LAB_0001fb3c + 0x1f954);
      puVar3 = param_4;
    }
    else {
      iVar1 = strcmp(param_3,(char *)(_LAB_0001fb40 + 0x1f95c));
      if (iVar1 == 0) {
        puVar2 = (undefined *)(_LAB_0001fb44 + 0x1f968);
        puVar3 = param_4;
      }
      else {
        iVar1 = strcmp(param_3,(char *)(_LAB_0001fb48 + 0x1f970));
        if (iVar1 == 0) {
          blkid_safe_string(param_4,puVar3,0x100);
          FUN_0001cd94(param_1,param_2,_LAB_0001fb4c + 0x1f98a,puVar3);
          blkid_encode_string(param_4,puVar3,0x100);
          puVar2 = (undefined *)(_LAB_0001fb50 + 0x1f9a2);
        }
        else {
          iVar1 = strcmp(param_3,(char *)(_LAB_0001fb54 + 0x1f9aa));
          if (iVar1 == 0) {
            blkid_safe_string(param_4,puVar3,0x100);
            FUN_0001cd94(param_1,param_2,_LAB_0001fb58 + 0x1f9c4,puVar3);
            blkid_encode_string(param_4,puVar3,0x100);
            puVar2 = (undefined *)(_LAB_0001fb5c + 0x1f9dc);
          }
          else {
            iVar1 = strcmp(param_3,(char *)(_LAB_0001fb60 + 0x1f9e4));
            if (iVar1 == 0) {
              blkid_safe_string(param_4,puVar3,0x100);
              FUN_0001cd94(param_1,param_2,_LAB_0001fb64 + 0x1f9fe,puVar3);
              blkid_encode_string(param_4,puVar3,0x100);
              puVar2 = (undefined *)(_LAB_0001fb68 + 0x1fa16);
            }
            else {
              iVar1 = strcmp(param_3,(char *)(_LAB_0001fb6c + 0x1fa1e));
              if (iVar1 == 0) {
                puVar2 = (undefined *)(_LAB_0001fb70 + 0x1fa2a);
                puVar3 = param_4;
              }
              else {
                iVar1 = strcmp(param_3,(char *)(_LAB_0001fb74 + 0x1fa32));
                if (iVar1 == 0) {
                  puVar2 = (undefined *)(_LAB_0001fb78 + 0x1fa3e);
                  puVar3 = param_4;
                }
                else {
                  iVar1 = strcmp(param_3,(char *)(_LAB_0001fb7c + 0x1fa46));
                  if (iVar1 == 0) {
                    blkid_encode_string(param_4,puVar3,0x100);
                    puVar2 = (undefined *)(_LAB_0001fb80 + 0x1fa5e);
                  }
                  else {
                    iVar1 = strcmp(param_3,(char *)(_LAB_0001fb84 + 0x1fa66));
                    if (iVar1 == 0) {
                      blkid_encode_string(param_4,puVar3,0x100);
                      puVar2 = (undefined *)(_LAB_0001fb88 + 0x1fa7e);
                    }
                    else {
                      iVar1 = strncmp(param_3,(char *)(_LAB_0001fb8c + 0x1fa88),0xb);
                      if ((iVar1 == 0) && (param_3 != (char *)0xfffffff5)) {
                        FUN_00024af4(puVar3,0x100,_LAB_0001fb90 + 0x1faa0,param_3,0);
                        puVar2 = puVar3;
                        puVar3 = param_4;
                      }
                      else {
                        iVar1 = strcmp(param_3,(char *)(_LAB_0001fb94 + 0x1fab2));
                        if (iVar1 == 0) {
                          blkid_encode_string(param_4,puVar3,0x100);
                          puVar2 = (undefined *)(_LAB_0001fb98 + 0x1faca);
                        }
                        else {
                          iVar1 = strcmp(param_3,(char *)(_LAB_0001fb9c + 0x1fad2));
                          if (iVar1 == 0) {
                            blkid_encode_string(param_4,puVar3,0x100);
                            puVar2 = (undefined *)(_LAB_0001fba0 + 0x1faea);
                          }
                          else {
                            iVar1 = strcmp(param_3,(char *)(_LAB_0001fba4 + 0x1faf2));
                            if (iVar1 == 0) {
                              blkid_encode_string(param_4,puVar3,0x100);
                              puVar2 = (undefined *)(_LAB_0001fba8 + 0x1fb0a);
                            }
                            else {
                              iVar1 = strcmp(param_3,(char *)(_LAB_0001fbac + 0x1fb12));
                              if (iVar1 != 0) {
                                return;
                              }
                              blkid_encode_string(param_4,puVar3,0x100);
                              puVar2 = &UNK_0001fb2e + _LAB_0001fbb0;
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
  FUN_0001cd94(param_1,param_2,puVar2,puVar3);
  return;
}



/* ===== FUN_0001ff90 @ 0001ff90 size=414 ===== */

undefined4 FUN_0001ff90(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int local_2c [2];
  
  FUN_00027880();
  if (*(int *)(DAT_00020130 + 0x1ffa4) != 0) {
    if ((param_2 < 3) ||
       (iVar1 = strcmp((char *)param_3[1],(char *)(DAT_00020134 + 0x1ffbc)), iVar1 != 0)) {
      iVar1 = FUN_000230c4();
      if (2 < iVar1) {
        FUN_00022f5c(3,0,DAT_00020178 + 0x20118,0x4e,(int)&DAT_0002015c + DAT_00020180,
                     DAT_0002017c + 0x2011c,*param_3);
      }
      return 1;
    }
    piVar10 = param_3 + 1;
    iVar1 = DAT_00020138 + 0x20017;
    while( true ) {
      piVar10 = piVar10 + 1;
      iVar9 = *piVar10;
      if (iVar9 == 0) break;
      iVar2 = FUN_000230c4();
      if (6 < iVar2) {
        FUN_00022f5c(7,0,DAT_0002013c + 0x1fff2,0x53,DAT_00020144 + 0x20036,DAT_00020140 + 0x1fff6,
                     param_3[1],iVar9);
      }
      local_2c[0] = 0;
      iVar2 = *piVar10;
      iVar9 = kmod_module_new_from_lookup(*(undefined4 *)(DAT_00020148 + 0x20014),iVar2,local_2c);
      if (-1 < iVar9) {
        if ((local_2c[0] == 0) && (iVar9 = FUN_000230c4(), 6 < iVar9)) {
          FUN_00022f5c(7,0,DAT_00020150 + 0x2003c,0x2e,DAT_00020154 + 0x20087,DAT_0002014c + 0x20036
                       ,iVar2);
        }
        iVar2 = DAT_00020158 + 0x20052;
        for (iVar9 = local_2c[0]; iVar9 != 0; iVar9 = kmod_list_next(local_2c[0],iVar9)) {
          uVar3 = kmod_module_get_module(iVar9);
          iVar4 = kmod_module_probe_insert_module(uVar3,0x20000,0,0,0,0);
          if (iVar4 == 0x20000) {
            iVar4 = FUN_000230c4();
            if (6 < iVar4) {
              uVar5 = kmod_module_get_name(uVar3);
              iVar7 = DAT_0002015c + 0x20092;
              uVar8 = 0x35;
              iVar4 = DAT_00020160 + 0x20098;
              iVar6 = DAT_00020164 + 0x200e1;
              goto LAB_000200d0;
            }
          }
          else {
            iVar6 = FUN_000230c4();
            if (iVar4 == 0) {
              if (6 < iVar6) {
                uVar5 = kmod_module_get_name(uVar3);
                iVar7 = DAT_00020168 + 0x200c2;
                uVar8 = 0x37;
                iVar4 = DAT_0002016c + 0x200c8;
                iVar6 = DAT_00020170 + 0x20111;
LAB_000200d0:
                FUN_00022f5c(7,0,iVar4,uVar8,iVar6,iVar7,uVar5);
              }
            }
            else if (6 < iVar6) {
              uVar5 = kmod_module_get_name(uVar3);
              iVar7 = DAT_00020174 + 0x200fa;
              uVar8 = 0x39;
              iVar4 = iVar2;
              iVar6 = iVar1;
              goto LAB_000200d0;
            }
          }
          kmod_module_unref(uVar3);
        }
        kmod_module_unref_list(local_2c[0]);
      }
    }
  }
  return 0;
}



/* ===== FUN_00020184 @ 00020184 size=50 ===== */

long * FUN_00020184(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long *local_14;
  undefined4 uStack_10;
  
  if (param_1 != (long *)0x0) {
    local_14 = param_2;
    uStack_10 = param_3;
    lVar1 = strtol((char *)param_1,(char **)&local_14,0);
    if (((char)*local_14 == '\0') || ((char)*local_14 == ':')) {
      if (local_14 != param_1) {
        *param_2 = lVar1;
      }
      if ((char)*local_14 == '\0') {
        return local_14;
      }
      return (long *)((int)local_14 + 1);
    }
  }
  return (long *)0x0;
}



/* ===== FUN_000201b6 @ 000201b6 size=62 ===== */

int FUN_000201b6(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)__errno_location();
  uVar3 = *puVar1;
  iVar2 = FUN_000230c4();
  if (iVar2 < 3) {
    iVar2 = ((int)uVar3 >> 0x1f) - (uVar3 ^ (int)uVar3 >> 0x1f);
  }
  else {
    iVar2 = FUN_00022f5c(3,uVar3,DAT_000201f8 + 0x201dc,0xb7,DAT_000201fc + 0x201e0,
                         DAT_000201f4 + 0x201d6,param_1);
  }
  return iVar2;
}



/* ===== FUN_00020200 @ 00020200 size=156 ===== */

int FUN_00020200(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2 - 1;
  if (uVar3 < 0x18) {
    switch(param_2) {
    case 1:
      break;
    default:
      param_2 = param_2 + (uint)*(ushort *)(DAT_000202ac + (uint)param_1[0xf] * 2 + 0x20234);
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      param_2 = param_2 + (uint)*(ushort *)(DAT_000202b0 + (uint)param_1[10] * 2 + 0x20242);
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      param_2 = param_2 + (uint)*(ushort *)(DAT_000202b4 + (uint)param_1[5] * 2 + 0x20260);
    case 3:
    case 4:
    case 5:
      param_2 = param_2 + (uint)*(ushort *)(DAT_000202b8 + (uint)param_1[2] * 2 + 0x20260);
    case 2:
      param_2 = param_2 + (uint)*(ushort *)(DAT_000202bc + (uint)param_1[1] * 2 + 0x2026c);
    }
    uVar3 = (uint)*(ushort *)(DAT_000202c0 + 0x20270 + (uint)param_1[uVar3] * 2 + 0xc) +
            (uint)*(ushort *)(DAT_000202c0 + 0x20270 + (uint)*param_1 * 2 + 0xc) + param_2;
    if (uVar3 < 0x653) {
      iVar4 = DAT_000202c4 + 0x2028c;
      pbVar2 = *(byte **)(iVar4 + uVar3 * 8);
      if (pbVar2 == (byte *)0x0) {
        return 0;
      }
      if (((uint)*pbVar2 == (uint)*param_1) &&
         (iVar1 = strcmp((char *)(param_1 + 1),(char *)(pbVar2 + 1)), iVar1 == 0)) {
        return iVar4 + uVar3 * 8;
      }
    }
  }
  return 0;
}



/* ===== FUN_000202c8 @ 000202c8 size=1380 ===== */

undefined4 FUN_000202c8(undefined4 param_1)

{
  char *__file;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  size_t sVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  uint uVar14;
  int __fd;
  uint local_203c;
  char *pcStack_2030;
  ulong *puStack_202c;
  ulong auStack_2028 [1024];
  ulong local_1028;
  ulong local_1024;
  undefined4 local_1020;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined4 local_1014 [1020];
  
  __file = (char *)FUN_0002835e();
  if (__file == (char *)0x0) {
    iVar1 = FUN_000230c4();
    if (2 < iVar1) {
      uVar2 = FUN_0002792c(param_1);
      FUN_00022f5c(3,0,DAT_000207ac + 0x20300,0xc5,DAT_000207b0 + 0x2051e,DAT_000207a8 + 0x202f8,
                   uVar2);
    }
    __fd = -1;
LAB_00020314:
    uVar2 = 1;
  }
  else {
    __fd = -1;
    iVar1 = FUN_00027f20(param_1);
    local_203c = 0;
    puVar10 = (undefined *)(DAT_000207b4 + 0x20574);
    for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      pcVar5 = (char *)FUN_0002a8d0(iVar1);
      iVar4 = strncmp(pcVar5,(char *)(DAT_000207e0 + 0x20422),0xd);
      if ((iVar4 == 0) && (pcVar5 + 0xd != (char *)0x0)) {
        uVar6 = strtoul(pcVar5 + 0xd,&pcStack_2030,0x10);
        if (*pcStack_2030 == '\0') {
          pcVar5 = (char *)FUN_0002a8d6(iVar1);
          if (*pcVar5 == '!') {
            auStack_2028[local_203c] = uVar6;
            if (local_203c < 0x3ff) {
              local_203c = local_203c + 1;
            }
            if (pcVar5[1] == '\0') goto LAB_00020592;
            pcVar5 = pcVar5 + 1;
          }
          if (((__fd == -1) && (__fd = open64(__file,DAT_0002079c), __fd < 0)) &&
             (__fd = FUN_000201b6(__file), __fd < 0)) goto LAB_00020314;
          sVar8 = strlen(pcVar5);
          iVar4 = FUN_00020200(pcVar5,sVar8);
          if (iVar4 == 0) {
            uVar13 = strtoul(pcVar5,(char **)&puStack_202c,0);
            if ((char)*puStack_202c != '\0') {
              iVar4 = FUN_000230c4();
              if (2 < iVar4) {
                iVar11 = DAT_00020808 + 0x2057c;
                iVar4 = DAT_0002080c + 0x20582;
                uVar2 = 0x56;
                iVar3 = 0;
                puVar12 = (undefined *)(DAT_00020810 + 0x207b3);
LAB_0002058c:
                uVar7 = 3;
                goto LAB_0002058e;
              }
              goto LAB_00020592;
            }
          }
          else {
            uVar13 = (ulong)*(ushort *)(iVar4 + 4);
          }
          local_1028 = uVar6;
          local_1024 = uVar13;
          iVar4 = FUN_000230c4();
          if (6 < iVar4) {
            FUN_00022f5c(7,0,DAT_000207f4 + 0x204fe,0x5f,DAT_000207f8 + 0x20731,
                         DAT_000207f0 + 0x204f8,uVar6,uVar6,uVar13,uVar13);
          }
          iVar4 = ioctl(__fd,DAT_000207a0,&local_1028);
          if ((iVar4 < 0) && (iVar4 = FUN_000230c4(), 2 < iVar4)) {
            piVar9 = __errno_location();
            FUN_00022f5c(3,*piVar9,DAT_000207fc + 0x20532,0x62,DAT_00020804 + 0x2076f,
                         DAT_00020800 + 0x2053c,__file,local_1028,local_1024);
          }
        }
        else {
          iVar4 = FUN_000230c4();
          if (3 < iVar4) {
            iVar11 = DAT_000207e4 + 0x20462;
            iVar4 = DAT_000207e8 + 0x20468;
            puVar12 = (undefined *)(DAT_000207ec + 0x20688);
            uVar2 = 0xd5;
LAB_00020472:
            iVar3 = 0;
            uVar7 = 4;
LAB_0002058e:
            FUN_00022f5c(uVar7,iVar3,iVar4,uVar2,puVar12,iVar11,pcVar5);
          }
        }
      }
      else {
        iVar4 = strncmp(pcVar5,(char *)(DAT_00020814 + 0x205a6),10);
        if ((iVar4 == 0) && (pcVar5 + 10 != (char *)0x0)) {
          uVar6 = strtoul(pcVar5 + 10,&pcStack_2030,0x10);
          if (*pcStack_2030 == '\0') {
            if (((__fd == -1) && (__fd = open64(__file,DAT_0002079c), __fd < 0)) &&
               (__fd = FUN_000201b6(__file), __fd < 0)) goto LAB_00020314;
            uVar2 = FUN_0002a8d6(iVar1);
            iVar4 = ioctl(__fd,uVar6 + 0x40 | 0x80184500,&local_1028);
            if (iVar4 < 0) {
              iVar4 = FUN_000230c4();
              if (2 < iVar4) {
                piVar9 = __errno_location();
                iVar11 = DAT_00020824 + 0x2064a;
                iVar4 = DAT_00020828 + 0x20650;
                puVar12 = (undefined *)(DAT_0002082c + 0x2088d);
                uVar2 = 0x81;
LAB_0002065a:
                iVar3 = *piVar9;
                pcVar5 = __file;
                goto LAB_0002058c;
              }
            }
            else {
              uVar7 = FUN_00020184(uVar2,&local_1024);
              uVar7 = FUN_00020184(uVar7,&local_1020);
              uVar7 = FUN_00020184(uVar7,local_1014);
              uVar7 = FUN_00020184(uVar7,&local_101c);
              iVar4 = FUN_00020184(uVar7,&local_1018);
              if (iVar4 == 0) {
                iVar4 = FUN_000230c4();
                if (2 < iVar4) {
                  iVar3 = DAT_00020830 + 0x206aa;
                  iVar4 = DAT_00020834 + 0x206b0;
                  puVar12 = (undefined *)(DAT_00020838 + 0x208ef);
                  uVar7 = 0x8b;
                  pcVar5 = __file;
LAB_000206bc:
                  FUN_00022f5c(3,0,iVar4,uVar7,puVar12,iVar3,uVar2,pcVar5);
                }
              }
              else {
                iVar4 = FUN_000230c4();
                if (6 < iVar4) {
                  FUN_00022f5c(7,0,DAT_0002083c + 0x206dc,0x92,&UNK_00020931 + DAT_00020844,
                               DAT_00020840 + 0x206f2,uVar6,local_1024,local_1020,local_1014[0],
                               local_101c,local_1018,__file);
                }
                iVar4 = ioctl(__fd,uVar6 + 0xc0 | DAT_000207a4,&local_1028);
                if ((iVar4 < 0) && (iVar4 = FUN_000230c4(), 2 < iVar4)) {
                  piVar9 = __errno_location();
                  iVar11 = DAT_00020848 + 0x20730;
                  iVar4 = DAT_0002084c + 0x20736;
                  puVar12 = &UNK_00020973 + DAT_00020850;
                  uVar2 = 0x95;
                  goto LAB_0002065a;
                }
              }
            }
          }
          else {
            iVar4 = FUN_000230c4();
            if (3 < iVar4) {
              iVar11 = DAT_00020818 + 0x205e0;
              iVar4 = DAT_0002081c + 0x205e6;
              puVar12 = (undefined *)(DAT_00020820 + 0x20806);
              uVar2 = 0xf4;
              goto LAB_00020472;
            }
          }
        }
        else {
          iVar4 = strcmp(pcVar5,(char *)(DAT_00020854 + 0x2074a));
          if (iVar4 == 0) {
            uVar2 = FUN_0002a8d6(iVar1);
            iVar4 = FUN_00028b42(param_1,DAT_00020858 + 0x20762,0);
            if (iVar4 == 0) {
              iVar4 = FUN_000230c4();
              if (3 < iVar4) {
                pcVar5 = (char *)FUN_0002835e(param_1);
                iVar11 = DAT_0002085c + 0x20788;
                iVar4 = DAT_00020860 + 0x2078e;
                puVar12 = &UNK_000209d6 + DAT_00020864;
                uVar2 = 0xa1;
                goto LAB_00020472;
              }
            }
            else {
              iVar3 = FUN_000254a8(uVar2,&puStack_202c);
              if (iVar3 < 0) {
                iVar4 = FUN_000230c4();
                if (2 < iVar4) {
                  pcVar5 = (char *)FUN_0002835e(param_1);
                  iVar3 = DAT_000208fc + 0x20894;
                  iVar4 = DAT_00020900 + 0x2089a;
                  puVar12 = &UNK_00020ae2 + DAT_00020904;
                  uVar7 = 0xa7;
                  goto LAB_000206bc;
                }
              }
              else {
                snprintf((char *)&local_1028,0xc,(char *)(DAT_00020908 + 0x208b8),puStack_202c);
                iVar3 = FUN_00027b34(iVar4,DAT_0002090c + 0x208c6,&local_1028);
                if ((iVar3 < 0) && (iVar11 = FUN_000230c4(), 2 < iVar11)) {
                  pcVar5 = (char *)FUN_0002835e(iVar4);
                  iVar11 = DAT_00020910 + 0x208ea;
                  iVar4 = DAT_00020914 + 0x208f0;
                  uVar2 = 0xaf;
                  puVar12 = puVar10;
                  goto LAB_0002058c;
                }
              }
            }
          }
        }
      }
LAB_00020592:
    }
    if (local_203c == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_00028b42(param_1,DAT_000207b8 + 0x2034c,0);
      if ((iVar1 != 0) &&
         (iVar3 = FUN_00027a0c(iVar1,DAT_000207bc + 0x2035c), iVar4 = DAT_000207c0, iVar3 != 0)) {
        puStack_202c = &local_1028;
        uVar2 = FUN_00024a44(&puStack_202c,0x1000,iVar3);
        uVar14 = 0;
        do {
          uVar2 = FUN_00024a84(&puStack_202c,uVar2,iVar4 + 0x20386,auStack_2028[uVar14]);
          uVar14 = uVar14 + 1;
        } while (local_203c != uVar14);
        iVar4 = FUN_000230c4();
        if (6 < iVar4) {
          FUN_00022f5c(7,0,DAT_000207c8 + 0x203ba,0x3d,DAT_000207cc + 0x2061f,DAT_000207c4 + 0x203b2
                       ,&local_1028);
        }
        iVar1 = FUN_00027b34(iVar1,DAT_000207d0 + 0x203d4,&local_1028);
        if ((iVar1 < 0) && (iVar4 = FUN_000230c4(), 2 < iVar4)) {
          FUN_00022f5c(3,iVar1,DAT_000207d8 + 0x203f4,0x40,DAT_000207dc + 0x20657,
                       DAT_000207d4 + 0x203ee);
        }
      }
      uVar2 = 0;
    }
  }
  FUN_00025324(__fd);
  return uVar2;
}



/* ===== FUN_00020c10 @ 00020c10 size=142 ===== */

int FUN_00020c10(FILE *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_1 == (FILE *)0x0) {
    uVar4 = 0x1d;
    iVar5 = DAT_00020ca0 + 0x20c24;
    iVar3 = DAT_00020ca4 + 0x20c26;
    iVar1 = DAT_00020ca8 + 0x20c28;
  }
  else {
    if (param_2 != (char *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      fputs(param_2,param_1);
      iVar1 = FUN_00025148(param_2,DAT_00020cb8 + 0x20c56);
      if (iVar1 == 0) {
        if (param_1->_chain == (_IO_FILE *)0x0) {
          fputc(10,param_1);
        }
        else {
          pcVar6 = param_1->_IO_write_base;
          if (pcVar6 < param_1->_IO_buf_base) {
            param_1->_IO_write_base = pcVar6 + 1;
            *pcVar6 = '\n';
          }
          else {
            __fputc_unlocked(10,param_1);
          }
        }
      }
      fflush(param_1);
      iVar3 = ferror(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        if (*piVar2 == 0) {
          iVar1 = -5;
        }
        else {
          iVar1 = -*piVar2;
        }
      }
      return iVar1;
    }
    uVar4 = 0x1e;
    iVar5 = DAT_00020cac + 0x20c38;
    iVar3 = DAT_00020cb0 + 0x20c3a;
    iVar1 = DAT_00020cb4 + 0x20c3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00020cbc @ 00020cbc size=86 ===== */

int FUN_00020cbc(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x31;
    iVar5 = DAT_00020d14 + 0x20ce2;
    iVar3 = DAT_00020d18 + 0x20cd2;
    iVar1 = DAT_00020d1c + 0x20cd4;
  }
  else {
    if (param_2 != 0) {
      __stream = fopen64(param_1,(char *)(DAT_00020d2c + 0x20cf0));
      if (__stream == (FILE *)0x0) {
        piVar2 = __errno_location();
        iVar1 = -*piVar2;
      }
      else {
        iVar1 = FUN_00020c10(__stream,param_2);
        fclose(__stream);
      }
      return iVar1;
    }
    uVar4 = 0x32;
    iVar5 = DAT_00020d20 + 0x20cf8;
    iVar3 = DAT_00020d24 + 0x20ce8;
    iVar1 = DAT_00020d28 + 0x20cea;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar5,param_4);
}



/* ===== FUN_00020d30 @ 00020d30 size=154 ===== */

int FUN_00020d30(char *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char local_810 [2048];
  
  if (param_1 == (char *)0x0) {
    uVar5 = 0x3e;
    iVar6 = DAT_00020dcc + 0x20d6c;
    iVar4 = DAT_00020dd0 + 0x20d4a;
    iVar1 = DAT_00020dd4 + 0x20d4c;
LAB_00020d4a:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar1,iVar4,uVar5,iVar6);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0x3f;
    iVar6 = DAT_00020dd8 + 0x20d82;
    iVar4 = DAT_00020ddc + 0x20d60;
    iVar1 = DAT_00020de0 + 0x20d62;
    goto LAB_00020d4a;
  }
  __stream = fopen64(param_1,(char *)(DAT_00020de4 + 0x20d68));
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    return -*piVar2;
  }
  pcVar3 = fgets(local_810,0x800,__stream);
  if (pcVar3 == (char *)0x0) {
    iVar1 = ferror(__stream);
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      if (*piVar2 == 0) {
        iVar1 = -5;
      }
      else {
        iVar1 = -*piVar2;
      }
      goto LAB_00020da0;
    }
    local_810[0] = '\0';
  }
  pcVar3 = strdup(local_810);
  if (pcVar3 == (char *)0x0) {
    iVar1 = -0xc;
  }
  else {
    FUN_00025700();
    *param_2 = pcVar3;
    iVar1 = 0;
  }
LAB_00020da0:
  fclose(__stream);
  return iVar1;
}



/* ===== FUN_00020de8 @ 00020de8 size=244 ===== */

int FUN_00020de8(FILE *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  stat64 sStack_90;
  
  if (param_1 == (FILE *)0x0) {
    uVar6 = 0x5b;
    iVar7 = DAT_00020edc + 0x20e3b;
    iVar5 = DAT_00020ee0 + 0x20e06;
    iVar1 = DAT_00020ee4 + 0x20e08;
LAB_00020e06:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar1,iVar5,uVar6,iVar7);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0x5c;
    iVar7 = DAT_00020ee8 + 0x20e51;
    iVar5 = DAT_00020eec + 0x20e1c;
    iVar1 = DAT_00020ef0 + 0x20e1e;
    goto LAB_00020e06;
  }
  iVar1 = fileno(param_1);
  iVar1 = fstat64(iVar1,&sStack_90);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
    pvVar8 = (void *)0x0;
    goto LAB_00020e36;
  }
  if ((sStack_90.st_mode & 0xf000) == 0x8000) {
    if ((int)(-(uint)(0x400000 < (uint)sStack_90.st_size) - sStack_90.st_size._4_4_) < 0 ==
        (SBORROW4(0,sStack_90.st_size._4_4_) !=
        SBORROW4(-sStack_90.st_size._4_4_,(uint)(0x400000 < (uint)sStack_90.st_size)))) {
      uVar9 = (uint)sStack_90.st_size;
      if (sStack_90.st_size._4_4_ < (int)(uint)((uint)sStack_90.st_size == 0)) {
        uVar9 = 0x800;
      }
      goto LAB_00020e6e;
    }
    pvVar8 = (void *)0x0;
  }
  else {
    uVar9 = 0x800;
LAB_00020e6e:
    iVar1 = 0;
    pvVar8 = (void *)0x0;
    do {
      pvVar3 = realloc(pvVar8,uVar9 + 1);
      if (pvVar3 == (void *)0x0) {
        iVar1 = -0xc;
        goto LAB_00020e36;
      }
      sVar4 = fread((undefined1 *)((int)pvVar3 + iVar1),1,uVar9 - iVar1,param_1);
      pvVar8 = pvVar3;
      if (sVar4 == 0) {
        iVar5 = ferror(param_1);
        if (iVar5 == 0) {
          *(undefined1 *)((int)pvVar3 + iVar1) = 0;
          *param_2 = pvVar3;
          if (param_3 != (int *)0x0) {
            *param_3 = iVar1;
          }
          iVar1 = 0;
          pvVar8 = (void *)0x0;
        }
        else {
          piVar2 = __errno_location();
          iVar1 = -*piVar2;
        }
        goto LAB_00020e36;
      }
      uVar9 = uVar9 * 2;
      iVar1 = iVar1 + sVar4;
    } while (uVar9 < 0x400001);
  }
  iVar1 = -7;
LAB_00020e36:
  free(pvVar8);
  return iVar1;
}



/* ===== FUN_00020ef4 @ 00020ef4 size=90 ===== */

int FUN_00020ef4(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x98;
    iVar5 = DAT_00020f50 + 0x20f52;
    iVar3 = DAT_00020f54 + 0x20f0c;
    iVar1 = DAT_00020f58 + 0x20f0e;
  }
  else {
    if (param_2 != 0) {
      __stream = fopen64(param_1,(char *)(DAT_00020f68 + 0x20f2a));
      if (__stream == (FILE *)0x0) {
        piVar2 = __errno_location();
        iVar1 = -*piVar2;
      }
      else {
        iVar1 = FUN_00020de8(__stream,param_2,param_3);
        fclose(__stream);
      }
      return iVar1;
    }
    uVar4 = 0x99;
    iVar5 = (int)&DAT_00020f68 + DAT_00020f5c;
    iVar3 = DAT_00020f60 + 0x20f22;
    iVar1 = DAT_00020f64 + 0x20f24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00020fa2 @ 00020fa2 size=28 ===== */

undefined4 FUN_00020fa2(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return *(undefined4 *)(FUN_00020fc4 + DAT_00020fc0 + (*(byte *)(param_1 + 0x27) & 3) * 0x10);
}



/* ===== FUN_00020fc4 @ 00020fc4 size=16 ===== */

uint FUN_00020fc4(int param_1)

{
  uint uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar1 = (*(byte *)(param_1 + 0x27) & 0x3f) >> 3;
  }
  return uVar1;
}



/* ===== FUN_00020fd4 @ 00020fd4 size=50 ===== */

undefined4
FUN_00020fd4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = (uint)*(byte *)((int)param_1 + 0x27) << 0x1d;
  if (iVar4 < 0) {
    puVar3 = param_1 + 2;
  }
  else {
    puVar3 = (undefined4 *)(&UNK_00021006 + DAT_00021008);
  }
  uVar1 = (**(code **)*param_1)(param_2,puVar3,iVar4,*(code **)*param_1,param_4);
  uVar2 = FUN_00020fa2(param_1);
  FUN_0002c5d4(uVar1,uVar2);
  return extraout_r1;
}



/* ===== FUN_0002100c @ 0002100c size=38 ===== */

int FUN_0002100c(int param_1)

{
  undefined8 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  else {
    param_1 = param_1 + 4;
  }
  uVar1 = FUN_00020fa2();
  return *(int *)(DAT_00021034 + ((uint)((ulonglong)uVar1 >> 0x20) & 3) * 0x10 + 0x21028) *
         (int)uVar1 + param_1;
}



/* ===== FUN_00021038 @ 00021038 size=28 ===== */

void FUN_00021038(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_3 == 0xffffffff) {
    uVar2 = 0xff;
  }
  else {
    if (0xfc < param_3) {
      param_3 = 0xfd;
    }
    uVar2 = (undefined1)param_3;
  }
  iVar1 = FUN_0002100c();
  *(undefined1 *)(iVar1 + param_2) = uVar2;
  return;
}



/* ===== FUN_00021054 @ 00021054 size=40 ===== */

uint FUN_00021054(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0002100c();
  uVar2 = FUN_00020fa2(param_1);
  while( true ) {
    if (uVar2 <= param_2) {
      return 0xffffffff;
    }
    if (*(char *)(iVar1 + param_2) != -1) break;
    param_2 = param_2 + 1;
  }
  return param_2;
}



/* ===== FUN_0002107c @ 0002107c size=28 ===== */

char * FUN_0002107c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  sVar1 = strlen(param_1);
  FUN_00023ed0(&local_18,param_1,sVar1,param_2);
  return local_18;
}



/* ===== FUN_00021098 @ 00021098 size=26 ===== */

undefined4 FUN_00021098(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_14 = param_1;
  local_10 = param_3;
  uStack_c = param_4;
  FUN_00023ed0(&local_10,&local_14,4,param_2,param_1);
  return local_10;
}



/* ===== FUN_000210b2 @ 000210b2 size=22 ===== */

undefined4 FUN_000210b2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00023ed0(&local_10,param_1,8,param_2);
  return local_10;
}



/* ===== FUN_000212b0 @ 000212b0 size=34 ===== */

int FUN_000212b0(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = param_1 + 4;
  }
  return *(int *)(DAT_000212d4 + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x212c8) * param_2 + iVar1
  ;
}



/* ===== FUN_000212d8 @ 000212d8 size=40 ===== */

int FUN_000212d8(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_000212b0();
  uVar2 = FUN_00020fd4(param_1,*puVar1);
  iVar4 = param_2 - uVar2;
  if (param_2 < uVar2) {
    iVar3 = FUN_00020fa2(param_1);
    iVar4 = iVar3 + iVar4;
  }
  return iVar4;
}



/* ===== FUN_00021300 @ 00021300 size=48 ===== */

int FUN_00021300(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  uint extraout_r2;
  
  if (param_3 < 0xfffffffc) {
    iVar1 = FUN_000212b0(param_1,param_3,param_3,param_4);
    return iVar1;
  }
  if (0xfffffffd < param_3) {
    FUN_00023050(DAT_00021338 + 0x21326,DAT_00021334 + 0x21324,0x1b1,DAT_00021330 + 0x21375);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
  }
  return param_2 + (param_3 + 4) * 0x10;
}



/* ===== FUN_0002133c @ 0002133c size=148 ===== */

void FUN_0002133c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  void *__src;
  void *__dest;
  int iVar1;
  
  if (param_3 == param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_000213d8 + 0x21360,DAT_000213d4 + 0x2135e,0x1ee,DAT_000213d0 + 0x213c1,param_4)
    ;
  }
  __src = (void *)FUN_00021300();
  __dest = (void *)FUN_00021300(param_1,param_2,param_4);
  memcpy(__dest,__src,*(size_t *)(DAT_000213dc + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x21386));
  if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
    if (*(int *)((int)__dest + 8) != -1) {
      iVar1 = FUN_00021300(param_1,param_2);
      *(int *)(iVar1 + 0xc) = param_4;
    }
    if (*(int *)((int)__dest + 0xc) != -1) {
      iVar1 = FUN_00021300(param_1,param_2);
      *(int *)(iVar1 + 8) = param_4;
    }
    if (*(int *)(param_1 + 0x28) == param_3) {
      *(int *)(param_1 + 0x28) = param_4;
    }
    if (*(int *)(param_1 + 0x2c) == param_3) {
      *(int *)(param_1 + 0x2c) = param_4;
    }
  }
  return;
}



/* ===== FUN_000213e0 @ 000213e0 size=130 ===== */

uint FUN_000213e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint extraout_r1;
  
  iVar1 = FUN_0002100c();
  uVar2 = FUN_00020fa2(param_1);
  if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_0002146c + 0x2140e,DAT_00021468 + 0x2140c,0x4c2,DAT_00021464 + 0x21481);
  }
  uVar2 = 0;
  while( true ) {
    uVar3 = (uint)*(byte *)(iVar1 + param_2);
    if (uVar3 == 0xff) {
      return 0xffffffff;
    }
    if (0xfc < uVar3) {
      uVar3 = FUN_000212d8(param_1,param_2);
    }
    if (uVar3 <= uVar2 && uVar2 != uVar3) break;
    if (uVar2 == uVar3) {
      puVar5 = (undefined4 *)FUN_000212b0(param_1,param_2);
      iVar6 = (**(code **)(*param_1 + 4))(*puVar5,param_3);
      if (iVar6 == 0) {
        return param_2;
      }
    }
    uVar2 = uVar2 + 1;
    uVar4 = FUN_00020fa2(param_1);
    FUN_0002c5d4(param_2 + 1,uVar4);
    param_2 = extraout_r1;
  }
  return 0xffffffff;
}



/* ===== FUN_00021470 @ 00021470 size=212 ===== */

bool FUN_00021470(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_0002100c();
  uVar5 = 0;
  while( true ) {
    uVar4 = (uint)*(byte *)(iVar1 + param_2);
    uVar3 = uVar4 + 2 & 0xff;
    if (uVar3 < 2) break;
    if (uVar4 == 0xfd) {
      uVar4 = FUN_000212d8(param_1,param_2);
      uVar3 = extraout_r3;
    }
    if (uVar4 < uVar5) {
      FUN_00021038(param_1,param_2,uVar5,uVar3,param_4);
      FUN_0002133c(param_1,param_3,param_2,0xfffffffd);
      FUN_0002133c(param_1,param_3,0xfffffffc,param_2);
      FUN_0002133c(param_1,param_3,0xfffffffd,0xfffffffc);
      uVar5 = uVar4;
    }
    uVar5 = uVar5 + 1;
    uVar2 = FUN_00020fa2(param_1);
    FUN_0002c5d4(param_2 + 1,uVar2);
    param_2 = extraout_r1;
  }
  if (uVar4 == 0xfe) {
    FUN_0002133c(param_1,param_3,param_2,0xfffffffd);
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x27) << 0x1d;
  if ((int)uVar3 < 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (param_2 < uVar3) {
      *(uint *)(param_1 + 0x20) = param_2;
    }
  }
  FUN_00021038(param_1,param_2,uVar5,uVar3,param_4);
  FUN_0002133c(param_1,param_3,0xfffffffc,param_2);
  if (uVar4 == 0xfe) {
    FUN_0002133c(param_1,param_3,0xfffffffd,0xfffffffc);
  }
  return uVar4 == 0xfe;
}



/* ===== FUN_00021544 @ 00021544 size=588 ===== */

undefined4 FUN_00021544(int param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char cVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  size_t __size;
  size_t __n;
  char *pcVar15;
  undefined8 uVar16;
  undefined4 local_48 [9];
  undefined4 *puVar9;
  
  if (param_1 == 0) {
    uVar7 = 0x43d;
    iVar11 = DAT_00021790 + 0x215e6;
    iVar5 = DAT_00021794 + 0x21560;
    iVar2 = DAT_00021798 + 0x21562;
LAB_00021560:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar2,iVar5,uVar7,iVar11);
  }
  bVar1 = *(byte *)(param_1 + 0x27);
  uVar16 = FUN_00020fc4();
  uVar14 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar13 = bVar1 & 3;
  uVar6 = (uint)uVar16 + uVar14;
  if (!CARRY4((uint)uVar16,uVar14)) {
    if ((-1 < (int)((uint)bVar1 << 0x1d)) &&
       (uVar6 <= *(uint *)(DAT_0002179c + uVar13 * 0x10 + 0x2158e))) {
      return 0;
    }
    if (!CARRY4(uVar6 >> 2,uVar6)) {
      __n = *(size_t *)(DAT_000217a0 + uVar13 * 0x10 + 0x2159e);
      uVar14 = __n + 1;
      if ((int)((ulonglong)uVar14 * (ulonglong)((uVar6 >> 2) + uVar6) >> 0x20) == 0) {
        uVar16 = FUN_00020fa2(param_1);
        uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
        uVar6 = (uint)uVar16;
        if (uVar13 <= uVar6) {
          return 0;
        }
        uVar13 = uVar14 * uVar13;
        if (uVar13 < 0x46) {
          uVar13 = 0x46;
        }
        __size = 1 << (0x20U - LZCOUNT(uVar13 - 1) & 0xff);
        if ((bVar1 & 4) == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = *(void **)(param_1 + 4);
        }
        pvVar3 = realloc(pvVar3,__size);
        if (pvVar3 != (void *)0x0) {
          if (-1 < (int)((uint)*(byte *)(param_1 + 0x27) << 0x1d)) {
            memcpy(pvVar3,(void *)(param_1 + 4),uVar6 * uVar14);
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(uint *)(param_1 + 0x18) = (*(byte *)(param_1 + 0x27) & 0x3f) >> 3;
            *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 199;
          }
          iVar2 = DAT_000217a8;
          if ((*(char *)(DAT_000217a4 + 0x21639) == '\0') ||
             ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0)) {
            FUN_00023e24(DAT_000217a8 + 0x2164e,0x10);
            *(undefined1 *)(iVar2 + 0x2164d) = 1;
          }
          puVar12 = (undefined4 *)(DAT_000217ac + 0x21674);
          puVar4 = (undefined4 *)(param_1 + 8);
          puVar8 = (undefined4 *)(DAT_000217ac + 0x21664);
          do {
            puVar9 = puVar8 + 1;
            *puVar4 = *puVar8;
            puVar4 = puVar4 + 1;
            puVar8 = puVar9;
          } while (puVar9 != puVar12);
          *(void **)(param_1 + 4) = pvVar3;
          *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 4;
          uVar7 = FUN_0002c52c(__size,uVar14);
          *(undefined4 *)(param_1 + 0x1c) = uVar7;
          iVar2 = FUN_0002100c(param_1);
          pcVar15 = (char *)((int)pvVar3 + uVar6 * __n);
          for (uVar14 = 0; uVar14 != uVar6; uVar14 = uVar14 + 1) {
            cVar10 = *pcVar15;
            if (cVar10 == -2) {
              uVar7 = 0x482;
              iVar11 = DAT_000217bc + 0x21788;
              iVar5 = DAT_000217c0 + 0x21702;
              iVar2 = DAT_000217c4 + 0x21704;
              goto LAB_00021560;
            }
            if (cVar10 != -1) {
              cVar10 = -2;
            }
            *(char *)(iVar2 + uVar14) = cVar10;
            pcVar15 = pcVar15 + 1;
          }
          pvVar3 = (void *)FUN_000212b0(param_1,uVar6);
          iVar5 = FUN_00020fa2(param_1);
          memset(pvVar3,0,__n * (iVar5 - uVar6));
          iVar5 = FUN_00020fa2(param_1);
          memset((void *)(iVar2 + uVar6),0xff,iVar5 - uVar6);
          iVar5 = 0;
          for (uVar14 = 0; uVar14 != uVar6; uVar14 = uVar14 + 1) {
            if (*(char *)(iVar2 + uVar14) == -2) {
              puVar4 = (undefined4 *)FUN_000212b0(param_1,uVar14);
              uVar13 = FUN_00020fd4(param_1,*puVar4);
              if (uVar14 == uVar13) {
                iVar5 = iVar5 + 1;
                *(undefined1 *)(iVar2 + uVar14) = 0;
              }
              else {
                *(undefined1 *)(iVar2 + uVar14) = 0xff;
                FUN_0002133c(param_1,local_48,uVar14,0xfffffffc);
                pvVar3 = (void *)FUN_000212b0(param_1,uVar14);
                memset(pvVar3,0,__n);
                while( true ) {
                  iVar5 = iVar5 + 1;
                  iVar11 = FUN_00021470(param_1,uVar13,local_48);
                  if (iVar11 == 0) break;
                  uVar13 = FUN_00020fd4(param_1,local_48[0]);
                }
              }
            }
          }
          iVar2 = FUN_00020fc4(param_1);
          if (iVar2 == iVar5) {
            return 1;
          }
          uVar7 = 0x4b4;
          iVar11 = DAT_000217b0 + 0x2176c;
          iVar5 = DAT_000217b4 + 0x216e6;
          iVar2 = DAT_000217b8 + 0x216e8;
          goto LAB_00021560;
        }
      }
    }
  }
  return 0xfffffff4;
}



/* ===== FUN_000217c8 @ 000217c8 size=248 ===== */

int FUN_000217c8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00020fa2(param_1,param_4);
  if (param_2 < (uint)uVar6) {
    if ((int)((ulonglong)uVar6 >> 0x20) != 0) {
      iVar2 = FUN_00021544(param_1,1);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 != 0) {
        param_2 = FUN_00020fd4(param_1,*param_3);
      }
    }
    uVar4 = FUN_00020fc4(param_1);
    uVar6 = FUN_00020fa2(param_1,uVar4);
    if ((uint)((ulonglong)uVar6 >> 0x20) < (uint)uVar6) {
      if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
        iVar2 = *(int *)(param_1 + 0x2c);
        param_3[2] = 0xffffffff;
        param_3[3] = iVar2;
        if (iVar2 != -1) {
          iVar2 = FUN_000212b0(param_1);
          if (*(int *)(iVar2 + 8) != -1) {
            uVar4 = 0x419;
            iVar5 = DAT_000218d8 + 0x218fd;
            iVar3 = DAT_000218dc + 0x21868;
            iVar2 = DAT_000218e0 + 0x2186a;
            goto LAB_000217ec;
          }
          *(undefined4 *)(iVar2 + 8) = 0xfffffffc;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0xfffffffc;
        if (*(int *)(param_1 + 0x28) == -1) {
          *(undefined4 *)(param_1 + 0x28) = 0xfffffffc;
        }
      }
      iVar2 = FUN_00021470(param_1,param_2,param_3);
      if (iVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 0x27);
        if ((int)((uint)bVar1 << 0x1d) < 0) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          *(byte *)(param_1 + 0x27) = bVar1 & 199 | (byte)((((bVar1 & 0x3f) >> 3) + 1 & 7) << 3);
        }
        return 1;
      }
      uVar4 = 0x422;
      iVar5 = DAT_000218e4 + 0x21931;
      iVar3 = DAT_000218e8 + 0x2189c;
      iVar2 = DAT_000218ec + 0x2189e;
    }
    else {
      uVar4 = 0x40d;
      iVar5 = DAT_000218cc + 0x218c3;
      iVar3 = DAT_000218d0 + 0x2182e;
      iVar2 = DAT_000218d4 + 0x21830;
    }
  }
  else {
    uVar4 = 0x402;
    iVar5 = DAT_000218c0 + 0x21881;
    iVar3 = DAT_000218c4 + 0x217ec;
    iVar2 = DAT_000218c8 + 0x217ee;
  }
LAB_000217ec:
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar2,iVar3,uVar4,iVar5);
}



/* ===== FUN_000218f0 @ 000218f0 size=362 ===== */

void FUN_000218f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *__s;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = FUN_0002100c();
  if (*(char *)(iVar2 + param_2) == -1) {
    uVar5 = 0x22a;
    iVar6 = DAT_00021a5c + 0x219c3;
    iVar4 = DAT_00021a60 + 0x21916;
    iVar2 = DAT_00021a64 + 0x21918;
LAB_00021916:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar2,iVar4,uVar5,iVar6,param_4);
  }
  uVar5 = FUN_00020fa2(param_1);
  iVar4 = param_2 + 1;
  while (FUN_0002c5d4(iVar4,uVar5), (byte)(*(char *)(iVar2 + extraout_r1) - 1U) < 0xfe) {
    if (extraout_r1 == param_2) {
      uVar5 = 0x23b;
      iVar6 = DAT_00021a68 + 0x219fd;
      iVar4 = DAT_00021a6c + 0x21950;
      iVar2 = DAT_00021a70 + 0x21952;
      goto LAB_00021916;
    }
    iVar4 = extraout_r1 + 1;
  }
  if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
    iVar4 = FUN_000212b0(param_1,param_2);
    iVar6 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar6 == -1) {
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
    }
    else {
      iVar3 = FUN_000212b0(param_1,iVar6);
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
    }
    if (*(int *)(iVar4 + 0xc) == -1) {
      *(int *)(param_1 + 0x28) = iVar6;
    }
    else {
      iVar4 = FUN_000212b0(param_1);
      *(int *)(iVar4 + 8) = iVar6;
    }
  }
  uVar5 = FUN_00020fa2(param_1);
  FUN_0002c5d4(param_2 + 1,uVar5);
  iVar4 = extraout_r1_00;
  do {
    iVar6 = iVar4;
    if (iVar6 == extraout_r1) {
      __s = (void *)FUN_000212b0(param_1,param_2);
      memset(__s,0,*(size_t *)(DAT_00021a74 + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x219c4));
      FUN_00021038(param_1,param_2,0xffffffff);
      bVar1 = *(byte *)(param_1 + 0x27);
      if ((int)((uint)bVar1 << 0x1d) < 0) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
      else {
        *(byte *)(param_1 + 0x27) = bVar1 & 199 | (byte)((((bVar1 & 0x3f) >> 3) + 7 & 7) << 3);
      }
      return;
    }
    uVar7 = (uint)*(byte *)(iVar2 + iVar6);
    if (uVar7 == 0xff) {
      uVar7 = 0xffffffff;
    }
    else {
      if (0xfc < uVar7) {
        uVar7 = FUN_000212d8(param_1,iVar6);
      }
      if (uVar7 == 0) {
        uVar5 = 0x251;
        iVar6 = DAT_00021a78 + 0x21ad9;
        iVar4 = DAT_00021a7c + 0x21a2c;
        iVar2 = DAT_00021a80 + 0x21a2e;
        goto LAB_00021916;
      }
    }
    FUN_0002133c(param_1,0,iVar6,param_2);
    FUN_00021038(param_1,param_2,uVar7 - 1);
    uVar5 = FUN_00020fa2(param_1);
    FUN_0002c5d4(iVar6 + 1,uVar5);
    iVar4 = extraout_r1_01;
    param_2 = iVar6;
  } while( true );
}



/* ===== FUN_00021a84 @ 00021a84 size=308 ===== */

int FUN_00021a84(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  
  if (param_1 == 0) goto LAB_00021a8c;
  bVar6 = *(byte *)(param_1 + 0x27) & 3;
  if (bVar6 == 1) {
    if (param_2 == (int *)0x0) {
      uVar5 = 0x260;
      puVar7 = (undefined *)(DAT_00021bb8 + 0x21b75);
      iVar4 = DAT_00021bbc + 0x21ab6;
      iVar1 = DAT_00021bc0 + 0x21ab8;
LAB_00021ab6:
                    /* WARNING: Subroutine does not return */
      FUN_00022f76(iVar1,iVar4,uVar5,puVar7);
    }
    iVar1 = *param_2;
    if (iVar1 == -1) {
LAB_00021a8c:
      *param_2 = -1;
      return -1;
    }
    if (iVar1 + 2 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 + 1 == 0) goto LAB_00021a8c;
      piVar2 = (int *)FUN_000212b0(param_1,iVar1,0,iVar1 + 1,param_4);
    }
    else {
      piVar2 = (int *)FUN_000212b0(param_1,iVar1,iVar1 + 2,1,param_4);
      iVar4 = param_2[1];
      if (*piVar2 != iVar4) {
        iVar3 = FUN_00020fa2(param_1);
        FUN_0002c5d4(iVar1 + -1 + iVar3,iVar3);
        piVar2 = (int *)FUN_000212b0(param_1);
        iVar1 = extraout_r1;
        if (iVar4 != *piVar2) {
          uVar5 = 0x278;
          puVar7 = (undefined *)(DAT_00021bc4 + 0x21be1);
          iVar4 = DAT_00021bc8 + 0x21b22;
          iVar1 = DAT_00021bcc + 0x21b24;
          goto LAB_00021ab6;
        }
      }
    }
    iVar4 = piVar2[2];
  }
  else {
    if (param_2 == (int *)0x0) {
      uVar5 = 0x292;
      puVar7 = &UNK_00021c1a + DAT_00021bd0;
      iVar4 = DAT_00021bd4 + 0x21b38;
      iVar1 = DAT_00021bd8 + 0x21b3a;
      goto LAB_00021ab6;
    }
    iVar1 = *param_2;
    if (iVar1 == -1) goto LAB_00021a8c;
    if (iVar1 + 2 == 0) {
      if ((*(byte *)(param_1 + 0x27) & 4) == 0) {
        iVar1 = FUN_00021054();
        *param_2 = iVar1;
      }
      else {
        iVar1 = FUN_00021054(param_1,*(undefined4 *)(param_1 + 0x20));
        *param_2 = iVar1;
        *(int *)(param_1 + 0x20) = iVar1;
      }
      if (*param_2 == -1) goto LAB_00021a8c;
    }
    else {
      if (iVar1 == 0) {
        uVar5 = 0x2a4;
        puVar7 = &UNK_00021c66 + DAT_00021bdc;
        iVar4 = DAT_00021be0 + 0x21b84;
        iVar1 = DAT_00021be4 + 0x21b86;
        goto LAB_00021ab6;
      }
      piVar2 = (int *)FUN_000212b0(param_1,iVar1,iVar1 + 2,bVar6,param_4);
      iVar4 = param_2[1];
      if (*piVar2 != iVar4) {
        *param_2 = iVar1 + -1;
        piVar2 = (int *)FUN_000212b0(param_1);
        if (iVar4 != *piVar2) {
          uVar5 = 0x2b0;
          puVar7 = &UNK_00021c98 + DAT_00021be8;
          iVar4 = DAT_00021bec + 0x21bb6;
          iVar1 = (int)&DAT_00021bb8 + DAT_00021bf0;
          goto LAB_00021ab6;
        }
      }
    }
    iVar1 = *param_2;
    iVar4 = FUN_00021054(param_1,iVar1 + 1);
  }
  *param_2 = iVar4;
  if (iVar4 != -1) {
    piVar2 = (int *)FUN_000212b0(param_1);
    param_2[1] = *piVar2;
  }
  return iVar1;
}



/* ===== FUN_00021d72 @ 00021d72 size=98 ===== */

undefined4 FUN_00021d72(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  int iStack_34;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020fd4();
    iVar2 = FUN_000213e0(param_1,uVar1,param_2);
    if (iVar2 == -1) {
      local_38 = param_2;
      iStack_34 = param_3;
      uVar1 = FUN_000217c8(param_1,uVar1,&local_38,1);
    }
    else {
      iVar2 = FUN_000212b0(param_1,iVar2);
      if (*(int *)(iVar2 + 4) == param_3) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffef;
      }
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(DAT_00021ddc + 0x21d94,DAT_00021dd8 + 0x21d92,0x4dc,&UNK_00021e94 + DAT_00021dd4);
}



/* ===== FUN_00021de0 @ 00021de0 size=76 ===== */

undefined4 FUN_00021de0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30 [8];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00021e34 + 0x21e00,DAT_00021e30 + 0x21dfe,0x4f2,&UNK_00021f0c + DAT_00021e2c);
  }
  uVar1 = FUN_00020fd4();
  iVar2 = FUN_000213e0(param_1,uVar1,param_2);
  if (iVar2 == -1) {
    local_30[0] = param_2;
    uVar1 = FUN_000217c8(param_1,uVar1,local_30,1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000222e4 @ 000222e4 size=92 ===== */

int FUN_000222e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    local_18 = param_1;
    uStack_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00022348 + 0x22302,DAT_00022344 + 0x22300,0x64d,&UNK_0002247a + DAT_00022340);
  }
  local_18 = -2;
  uStack_14 = 0;
  do {
    iVar1 = FUN_00021a84(param_2,&local_18);
    if (iVar1 == -1) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_000212b0(param_2,iVar1);
    iVar1 = FUN_00021d72(param_1,*puVar2,puVar2[1]);
  } while ((-1 < iVar1) || (iVar1 == -0x11));
  return iVar1;
}



/* ===== FUN_000227cc @ 000227cc size=36 ===== */

uint FUN_000227cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00023e54();
  uVar2 = FUN_00024610(param_1,param_2,param_3);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2 & (int)uVar2 >> 0x1f;
  }
  return uVar1;
}



/* ===== FUN_000227f0 @ 000227f0 size=84 ===== */

int FUN_000227f0(char *param_1,__mode_t param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_0002284c + 0x22808,DAT_00022848 + 0x22806,0x28,DAT_00022844 + 0x22804);
  }
  iVar1 = FUN_00023e94(param_1,0x4000);
  if (-1 < iVar1) {
    iVar2 = mkdir(param_1,param_2);
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar1 = -*piVar3;
    }
    FUN_00023e98();
    if (-1 < iVar1) {
      iVar1 = FUN_00024610(param_1,0);
      return iVar1;
    }
  }
  return iVar1;
}



/* ===== FUN_00022850 @ 00022850 size=108 ===== */

int FUN_00022850(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x3c;
    iVar5 = DAT_000228bc + 0x22870;
    iVar3 = DAT_000228c0 + 0x22868;
    iVar1 = DAT_000228c4 + 0x2286a;
  }
  else {
    if (param_2 != (char *)0x0) {
      iVar1 = FUN_00023e94(param_2,0xa000);
      if (-1 < iVar1) {
        iVar3 = symlink(param_1,param_2);
        if (iVar3 < 0) {
          piVar2 = __errno_location();
          iVar1 = -*piVar2;
        }
        FUN_00023e98();
        if (-1 < iVar1) {
          iVar1 = FUN_00024610(param_2,0);
          return iVar1;
        }
      }
      return iVar1;
    }
    uVar4 = 0x3d;
    iVar5 = DAT_000228c8 + 0x22886;
    iVar3 = DAT_000228cc + 0x2287e;
    iVar1 = DAT_000228d0 + 0x22880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_000228d4 @ 000228d4 size=84 ===== */

int FUN_000228d4(uint param_1)

{
  int __fd;
  int *piVar1;
  undefined1 auStack_18 [12];
  
  __fd = socket(1,param_1 | 0x80000,0);
  if (__fd < 0) {
    piVar1 = __errno_location();
    __fd = -*piVar1;
  }
  else {
    FUN_000269b0(__fd,0x800000);
    getpid();
    FUN_00024e50(auStack_18);
    setsockopt(__fd,1,0x15,auStack_18,8);
  }
  return __fd;
}



/* ===== FUN_0002292c @ 0002292c size=42 ===== */

int FUN_0002292c(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0002295c + 0x22934);
  if (*piVar2 < 0) {
    iVar1 = open64((char *)(DAT_00022960 + 0x22944),DAT_00022958);
    *piVar2 = iVar1;
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
  }
  return 0;
}



/* ===== FUN_00022964 @ 00022964 size=46 ===== */

uint FUN_00022964(void)

{
  int iVar1;
  __pid_t _Var2;
  uint uVar3;
  
  iVar1 = DAT_00022998;
  if (*(int *)(DAT_00022998 + 0x22970) < 0) {
    _Var2 = getpid();
    if (_Var2 == 1) {
      uVar3 = FUN_00024cac(DAT_0002299c + 0x22980,DAT_00022994);
      *(uint *)(iVar1 + 0x22970) = uVar3;
      return uVar3 & (int)uVar3 >> 0x1f;
    }
    *(undefined4 *)(iVar1 + 0x22970) = 2;
  }
  return 0;
}



/* ===== FUN_000229a0 @ 000229a0 size=42 ===== */

void FUN_000229a0(void)

{
  __pid_t _Var1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000229cc + 0x229ac);
  if ((-1 < iVar2) && (_Var1 = getpid(), _Var1 == 1)) {
    if (2 < iVar2) {
      FUN_00025324(iVar2);
    }
    *(undefined4 *)((int)&DAT_000229cc + DAT_000229d0) = 0xffffffff;
  }
  return;
}



/* ===== FUN_000229d4 @ 000229d4 size=16 ===== */

void FUN_000229d4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_000229e4 + 0x229dc);
  uVar1 = FUN_00025324(*puVar2);
  *puVar2 = uVar1;
  return;
}



/* ===== FUN_000229e8 @ 000229e8 size=16 ===== */

void FUN_000229e8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000229f8;
  uVar2 = FUN_00025324(*(undefined4 *)((int)&DAT_000229f8 + DAT_000229f8));
  *(undefined4 *)((int)&DAT_000229f8 + iVar1) = uVar2;
  return;
}



/* ===== FUN_000229fc @ 000229fc size=928 ===== */

int FUN_000229fc(uint param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  msghdr *pmVar2;
  msghdr *pmVar3;
  size_t sVar4;
  tm *__tp;
  size_t sVar5;
  __pid_t _Var6;
  int *piVar7;
  ssize_t sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  msghdr *pmVar14;
  int iVar15;
  msghdr *__s;
  char *pcVar16;
  uint uVar17;
  bool bVar18;
  msghdr *pmVar19;
  void *pvVar20;
  iovec *piVar21;
  undefined8 uVar22;
  uint local_f4;
  time_t local_e4;
  char acStack_e0 [14];
  undefined1 local_d2;
  char acStack_d0 [16];
  undefined1 local_c0;
  msghdr local_bc;
  msghdr local_a0;
  void *pvStack_84;
  msghdr *local_80;
  void *pvStack_7c;
  iovec local_78;
  iovec *local_70;
  size_t local_6c;
  msghdr *local_68;
  size_t sStack_64;
  msghdr *local_60;
  size_t sStack_5c;
  msghdr *local_58;
  size_t sStack_54;
  msghdr *local_50;
  size_t sStack_4c;
  
  iVar1 = DAT_00022da8;
  iVar11 = DAT_00022da0 + 0x22a0c;
  if (*(int *)(DAT_00022da4 + 0x22a16) == 9) {
    iVar15 = 0;
  }
  else {
    bVar18 = (param_1 & 0x3f8) == 0;
    uVar12 = param_1;
    if (bVar18) {
      uVar12 = param_1 & 7;
    }
    iVar15 = 0;
    local_f4 = param_1;
    if (bVar18) {
      local_f4 = uVar12 | 0x18;
    }
    do {
      pcVar16 = (char *)(DAT_00022dac + 0x22a42);
      sVar4 = strspn(param_4,pcVar16);
      __s = (msghdr *)(param_4 + sVar4);
      if (param_4[sVar4] == '\0') {
        return iVar15;
      }
      pcVar16 = strpbrk((char *)__s,pcVar16);
      param_4 = pcVar16;
      if (pcVar16 != (char *)0x0) {
        param_4 = pcVar16 + 1;
        *pcVar16 = '\0';
      }
      if (*(int *)(DAT_00022db0 + 0x22a68) == 7) {
        FUN_0002292c();
      }
      iVar13 = DAT_00022db4;
      pmVar19 = (msghdr *)0x0;
      pvVar20 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      piVar21 = *(iovec **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      sVar4 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      if (*(int *)(DAT_00022db4 + 0x22a7c) - 5U < 2) {
        local_bc.msg_iov = (iovec *)&local_a0;
        local_a0.msg_control = (char *)0x0;
        local_bc.msg_name = (void *)0x0;
        local_a0.msg_name = (char *)0x0;
        local_bc.msg_iovlen = 5;
        local_a0.msg_flags = 0;
        local_80 = (msghdr *)0x0;
        local_bc.msg_namelen = (socklen_t)pvVar20;
        local_bc.msg_control = pvVar20;
        local_bc.msg_controllen = (size_t)piVar21;
        local_bc.msg_flags = sVar4;
        local_a0.msg_namelen = (socklen_t)pvVar20;
        local_a0.msg_iov = piVar21;
        local_a0.msg_iovlen = sVar4;
        local_a0.msg_controllen = (size_t)pvVar20;
        pvStack_84 = pvVar20;
        pvStack_7c = pvVar20;
        if (*(int *)(DAT_00022db8 + 0x22ab4) < 0) goto LAB_00022bea;
        snprintf(acStack_e0,0xf,(char *)(DAT_00022dbc + 0x22ac4),local_f4);
        local_d2 = 0;
        uVar22 = FUN_00024db0(0);
        local_e4 = FUN_0002c6f0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00022d9c,0);
        __tp = localtime(&local_e4);
        if (__tp == (tm *)0x0) {
LAB_00022be2:
          FUN_000229e8();
LAB_00022be6:
          FUN_0002292c();
          goto LAB_00022bea;
        }
        sVar5 = strftime((char *)&local_78,0x40,(char *)(DAT_00022dc0 + 0x22af8),__tp);
        if (sVar5 == 0) goto LAB_00022be2;
        _Var6 = getpid();
        snprintf(acStack_d0,0x11,(char *)(DAT_00022dc4 + 0x22b0e),_Var6);
        local_c0 = 0;
        local_a0.msg_name = acStack_e0;
        local_a0.msg_namelen = strlen(acStack_e0);
        local_a0.msg_iov = &local_78;
        local_a0.msg_iovlen = strlen((char *)&local_78);
        local_a0.msg_control = (void *)**(undefined4 **)(iVar11 + DAT_00022dc8);
        local_a0.msg_controllen = strlen(local_a0.msg_control);
        local_a0.msg_flags = (int)acStack_d0;
        pvStack_84 = (void *)strlen(acStack_d0);
        local_80 = __s;
        pvStack_7c = (void *)strlen((char *)__s);
        iVar9 = DAT_00022dcc;
        if (*(char *)(iVar13 + 0x22a80) != '\0') {
          pvStack_7c = (void *)((int)pvStack_7c + 1);
        }
LAB_00022b60:
        while (uVar12 = sendmsg(*(int *)(iVar9 + 0x22b6a),&local_bc,0x4000), -1 < (int)uVar12) {
          if ((*(char *)(iVar1 + 0x22a3e) == '\0') ||
             (local_a0.msg_namelen + local_a0.msg_iovlen + local_a0.msg_controllen + (int)pvStack_84
              + (int)pvStack_7c <= uVar12)) goto LAB_00022b80;
          iVar13 = 0;
          pmVar14 = &local_a0;
          while (uVar12 != 0) {
            uVar10 = pmVar14->msg_namelen;
            iVar13 = iVar13 + 1;
            uVar17 = uVar10;
            if (uVar12 <= uVar10) {
              uVar17 = uVar12;
            }
            pmVar14->msg_namelen = uVar10 - uVar17;
            uVar12 = uVar12 - uVar17;
            pmVar14->msg_name = (void *)((int)pmVar14->msg_name + uVar17);
            pmVar14 = (msghdr *)&pmVar14->msg_iov;
            if (iVar13 == 5) goto LAB_00022b60;
          }
        }
        piVar7 = __errno_location();
        iVar13 = *piVar7;
        if (0 < iVar13) {
          if (iVar13 != 0xb) goto LAB_00022be2;
          goto LAB_00022be6;
        }
        if (iVar13 == 0) goto LAB_00022bea;
        goto LAB_00022b80;
      }
LAB_00022bea:
      if ((*(int *)(DAT_00022dd0 + 0x22bf0) - 6U < 3) || (*(int *)(DAT_00022dd0 + 0x22bf0) == 2)) {
        sStack_64 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        piVar7 = (int *)(DAT_00022dd4 + 0x22c08);
        local_68 = (msghdr *)0x0;
        local_60 = (msghdr *)0x0;
        local_58 = (msghdr *)0x0;
        if (*piVar7 < 0) goto LAB_00022cb0;
        local_78.iov_base = pmVar19;
        local_78.iov_len = (size_t)pvVar20;
        local_70 = piVar21;
        local_6c = sVar4;
        sStack_5c = sStack_64;
        sStack_54 = sStack_64;
        snprintf((char *)&local_bc,0xf,(char *)(DAT_00022dd8 + 0x22c2c),local_f4);
        local_bc.msg_iovlen._0_3_ = (uint3)(ushort)local_bc.msg_iovlen;
        _Var6 = getpid();
        snprintf((char *)&local_a0,0x11,(char *)(DAT_00022ddc + 0x22c48),_Var6);
        local_a0.msg_control = (void *)((uint)local_a0.msg_control & 0xffffff00);
        local_78.iov_base = &local_bc;
        local_78.iov_len = strlen((char *)&local_bc);
        local_70 = (iovec *)**(undefined4 **)(iVar11 + DAT_00022dc8);
        local_6c = strlen((char *)local_70);
        local_68 = &local_a0;
        sStack_64 = strlen((char *)&local_a0);
        local_60 = __s;
        sStack_5c = strlen((char *)__s);
        local_58 = (msghdr *)(DAT_00022de0 + 0x22c8a);
        sStack_54 = 1;
        sVar8 = writev(*piVar7,&local_78,5);
        if (sVar8 < 0) {
          piVar7 = __errno_location();
          if (*piVar7 < 1) {
            if (*piVar7 != 0) goto LAB_00022b80;
          }
          else {
            FUN_000229d4();
            FUN_00022964();
          }
          goto LAB_00022cb0;
        }
LAB_00022b80:
        iVar15 = iVar15 + 1;
        pmVar14 = local_68;
        pmVar19 = local_60;
        pmVar2 = local_58;
        pmVar3 = local_50;
      }
      else {
LAB_00022cb0:
        pmVar14 = (msghdr *)0x0;
        sStack_64 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_68 = (msghdr *)0x0;
        local_60 = (msghdr *)0x0;
        local_58 = (msghdr *)0x0;
        local_50 = (msghdr *)0x0;
        local_78.iov_base = pmVar19;
        local_78.iov_len = (size_t)pvVar20;
        local_70 = piVar21;
        local_6c = sVar4;
        pmVar19 = pmVar14;
        sStack_5c = sStack_64;
        pmVar2 = pmVar14;
        sStack_54 = sStack_64;
        pmVar3 = pmVar14;
        sStack_4c = sStack_64;
        if (-1 < *(int *)(DAT_00022de4 + 0x22cc0)) {
          bVar18 = *(int *)(DAT_00022de8 + 0x22cdc) == 1;
          if (bVar18) {
            sprintf((char *)&local_a0,(char *)(DAT_00022dec + 0x22cf0),local_f4);
            local_78.iov_base = &local_a0;
            local_78.iov_len = strlen((char *)&local_a0);
          }
          uVar12 = (uint)bVar18;
          (&local_78)[uVar12].iov_base = __s;
          sVar4 = strlen((char *)__s);
          iVar13 = DAT_00022df0;
          (&local_78)[uVar12].iov_len = sVar4;
          (&local_78)[uVar12 + 1].iov_base = (void *)(DAT_00022df4 + 0x22d2c);
          iVar9 = *(int *)(DAT_00022df0 + 0x22d2e);
          (&local_78)[uVar12 + 1].iov_len = 1;
          sVar8 = writev(iVar9,&local_78,uVar12 + 2);
          pmVar14 = local_68;
          pmVar19 = local_60;
          pmVar2 = local_58;
          pmVar3 = local_50;
          if (sVar8 < 0) {
            piVar7 = __errno_location();
            if ((*piVar7 == 5) && (_Var6 = getpid(), _Var6 == 1)) {
              FUN_000229a0();
              FUN_00022964();
              pmVar14 = local_68;
              pmVar19 = local_60;
              pmVar2 = local_58;
              pmVar3 = local_50;
              if ((*(int *)(iVar13 + 0x22d2e) < 0) ||
                 (sVar8 = writev(*(int *)(iVar13 + 0x22d2e),&local_78,uVar12 + 2),
                 pmVar14 = local_68, pmVar19 = local_60, pmVar2 = local_58, pmVar3 = local_50,
                 -1 < sVar8)) goto LAB_00022b82;
            }
            pmVar14 = local_68;
            pmVar19 = local_60;
            pmVar2 = local_58;
            pmVar3 = local_50;
            if (-*piVar7 < 0) {
              return -*piVar7;
            }
          }
        }
      }
LAB_00022b82:
      local_50 = pmVar3;
      local_58 = pmVar2;
      local_60 = pmVar19;
      local_68 = pmVar14;
    } while (param_4 != (char *)0x0);
  }
  return iVar15;
}



/* ===== FUN_00022df8 @ 00022df8 size=228 ===== */

int FUN_00022df8(void)

{
  __pid_t _Var1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  sockaddr *__addr;
  char *__s;
  
  iVar4 = DAT_00022ee4;
  iVar2 = DAT_00022edc;
  iVar6 = *(int *)(DAT_00022edc + 0x22e02);
  if (iVar6 == 9) {
    FUN_000229e8();
    FUN_000229a0();
    return 0;
  }
  if (iVar6 - 7U < 2) {
    _Var1 = getpid();
    if ((_Var1 != 1) && (iVar2 = isatty(2), 0 < iVar2)) goto LAB_00022ed2;
  }
  else if (iVar6 - 5U < 2) {
    if (-1 < *(int *)(DAT_00022ee4 + 0x22e60)) {
LAB_00022ec4:
      iVar6 = 0;
      goto LAB_00022ecc;
    }
    iVar6 = FUN_000228d4(2);
    *(int *)(iVar4 + 0x22e60) = iVar6;
    if (-1 < iVar6) {
      __addr = (sockaddr *)(DAT_00022ee8 + 0x22e70);
      __s = (char *)(DAT_00022ee8 + 0x22e72);
      sVar3 = strlen(__s);
      iVar6 = connect(iVar6,__addr,sVar3 + 2);
      if (-1 < iVar6) {
        iVar6 = 0;
        *(undefined1 *)(iVar2 + 0x22e06) = 0;
        goto LAB_00022ecc;
      }
      FUN_00025324(*(undefined4 *)(iVar4 + 0x22e60));
      iVar6 = FUN_000228d4(1);
      *(int *)(iVar4 + 0x22e60) = iVar6;
      if (-1 < iVar6) {
        sVar3 = strlen(__s);
        iVar4 = connect(iVar6,__addr,sVar3 + 2);
        if (-1 < iVar4) {
          *(undefined1 *)(iVar2 + 0x22e06) = 1;
          goto LAB_00022ec4;
        }
        piVar5 = __errno_location();
        iVar6 = -*piVar5;
      }
    }
    FUN_000229e8();
    if (-1 < iVar6) goto LAB_00022ecc;
  }
  if (((2 < *(int *)(DAT_00022ee0 + 0x22e34) - 6U) && (*(int *)(DAT_00022ee0 + 0x22e34) != 2)) ||
     (iVar6 = FUN_0002292c(), iVar6 < 0)) {
LAB_00022ed2:
    FUN_000229e8();
    iVar2 = FUN_00022964();
    return iVar2;
  }
  FUN_000229e8();
LAB_00022ecc:
  FUN_000229a0();
  return iVar6;
}



/* ===== FUN_00022eec @ 00022eec size=18 ===== */

void FUN_00022eec(void)

{
  FUN_000229e8();
  FUN_000229d4();
  FUN_000229a0();
  return;
}



/* ===== FUN_00022efe @ 00022efe size=88 ===== */

undefined4
FUN_00022efe(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,__gnuc_va_list param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_820 [2047];
  undefined1 local_21;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  if (*(int *)(DAT_00022f58 + 0x22f26) < (int)(param_1 & 7)) {
    uVar2 = 0;
  }
  else {
    vsnprintf(acStack_820,0x800,param_6,param_7);
    local_21 = 0;
    uVar2 = FUN_000229fc(param_1,param_3,param_4,acStack_820);
  }
  *piVar1 = iVar3;
  return uVar2;
}



/* ===== FUN_00022f5c @ 00022f5c size=26 ===== */

void FUN_00022f5c(void)

{
  FUN_00022efe();
  return;
}



/* ===== FUN_00022f76 @ 00022f76 size=66 ===== */

void FUN_00022f76(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  
  iVar1 = DAT_00022fbc;
  if (1 < *(int *)(DAT_00022fb8 + 0x22f8e)) {
    __s = (char *)(DAT_00022fbc + 0x22f93);
    snprintf(__s,0x800,(char *)(DAT_00022fc0 + 0x22f9a),param_1,param_2,param_3,param_4,param_4);
    *(undefined1 *)(iVar1 + 0x23792) = 0;
    FUN_000229fc(2,param_2,param_3,__s);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00023018 @ 00023018 size=40 ===== */

void FUN_00023018(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 & 0xfffffff8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00023048 + 0x23036,DAT_00023044 + 0x23034,0xea,DAT_00023040 + 0x230bf,param_4);
  }
  *(uint *)((int)&DAT_00023048 + DAT_0002304c + 2) = param_1 & 7;
  return;
}



/* ===== FUN_00023050 @ 00023050 size=66 ===== */

void FUN_00023050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  
  iVar1 = DAT_00023098;
  if (1 < *(int *)(DAT_00023094 + 0x23068)) {
    __s = (char *)(DAT_00023098 + 0x2306d);
    snprintf(__s,0x800,(char *)(DAT_0002309c + 0x23074),param_1,param_2,param_3,param_4,param_4);
    (&UNK_0002386c)[iVar1] = 0;
    FUN_000229fc(2,param_2,param_3,__s);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_000230a0 @ 000230a0 size=32 ===== */

undefined4 FUN_000230a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00022f5c(3,0xc,param_1,param_2,param_3,DAT_000230c0 + 0x230a8,param_3);
  return 0xfffffff4;
}



/* ===== FUN_000230c4 @ 000230c4 size=8 ===== */

undefined4 FUN_000230c4(void)

{
  return *(undefined4 *)(&UNK_000230d6 + DAT_000230cc);
}



/* ===== FUN_00023204 @ 00023204 size=316 ===== */

/* WARNING: Removing unreachable block (ram,0x000232dc) */
/* WARNING: Removing unreachable block (ram,0x000233a6) */

int FUN_00023204(char *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint __n;
  char *__s;
  undefined1 auStack_1040 [4];
  char *local_103c;
  undefined4 local_1038;
  code *local_1034;
  undefined1 auStack_102c [4104];
  
  local_1034 = *(code **)(DAT_0002321c + 0x2320e + DAT_00023220);
  if (param_1 == (char *)0x0) {
    uVar7 = 0x39;
    iVar8 = DAT_000233d8 + 0x232d4;
    iVar6 = DAT_000233dc + 0x232d6;
    iVar1 = DAT_000233e0 + 0x232d8;
LAB_000232d6:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar1,iVar6,uVar7,iVar8);
  }
  pcVar2 = strrchr(param_1,0x2f);
  if (pcVar2 == (char *)0x0) {
    iVar1 = -0x16;
  }
  else {
    if (param_1 != pcVar2) {
      __n = (int)pcVar2 - (int)param_1;
      if (0x1000 < __n) {
        uVar7 = 0x48;
        iVar8 = DAT_000233e4 + 0x2331e;
        iVar6 = DAT_000233e8 + 0x23320;
        iVar1 = DAT_000233ec + 0x23322;
        goto LAB_000232d6;
      }
      pvVar3 = memcpy(auStack_102c,param_1,__n);
      *(undefined1 *)((int)pvVar3 + __n) = 0;
      iVar1 = FUN_00026e6c(pvVar3,1);
      if (iVar1 < 1) {
        if (iVar1 == 0) {
          return -0x14;
        }
        pcVar2 = (char *)(DAT_000233f0 + 0x2334c);
        sVar4 = strspn(param_1,pcVar2);
        local_1038 = 0;
        __s = param_1 + sVar4;
        do {
          do {
            sVar4 = strlen(param_1);
            iVar1 = -(sVar4 + 8 & 0xfffffff8);
            sVar4 = strcspn(__s,pcVar2);
            local_103c = __s + sVar4;
            sVar4 = strspn(local_103c,pcVar2);
            __s = local_103c + sVar4;
            if (local_103c[sVar4] == '\0') {
              return 0;
            }
            local_103c = (char *)((int)local_103c - (int)param_1);
            memcpy(auStack_1040 + iVar1,param_1,(size_t)local_103c);
            auStack_1040[(int)local_103c + iVar1] = (char)local_1038;
            iVar1 = (*local_1034)(auStack_1040 + iVar1,param_2);
          } while (-1 < iVar1);
          piVar5 = __errno_location();
        } while (*piVar5 == 0x11);
        return -*piVar5;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000233f4 @ 000233f4 size=24 ===== */

/* WARNING: Removing unreachable block (ram,0x000232dc) */
/* WARNING: Removing unreachable block (ram,0x000233a6) */

int FUN_000233f4(char *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint __n;
  char *__s;
  undefined1 auStack_1040 [4];
  char *pcStack_103c;
  undefined4 uStack_1038;
  code *pcStack_1034;
  undefined1 auStack_102c [4104];
  
  pcStack_1034 = *(code **)(DAT_0002340c + 0x233fe + DAT_00023410);
  if (param_1 == (char *)0x0) {
    uVar7 = 0x39;
    iVar8 = DAT_000233d8 + 0x232d4;
    iVar6 = DAT_000233dc + 0x232d6;
    iVar1 = DAT_000233e0 + 0x232d8;
LAB_000232d6:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar1,iVar6,uVar7,iVar8);
  }
  pcVar2 = strrchr(param_1,0x2f);
  if (pcVar2 == (char *)0x0) {
    iVar1 = -0x16;
  }
  else {
    if (param_1 != pcVar2) {
      __n = (int)pcVar2 - (int)param_1;
      if (0x1000 < __n) {
        uVar7 = 0x48;
        iVar8 = DAT_000233e4 + 0x2331e;
        iVar6 = DAT_000233e8 + 0x23320;
        iVar1 = DAT_000233ec + 0x23322;
        goto LAB_000232d6;
      }
      pvVar3 = memcpy(auStack_102c,param_1,__n);
      *(undefined1 *)((int)pvVar3 + __n) = 0;
      iVar1 = FUN_00026e6c(pvVar3,1);
      if (iVar1 < 1) {
        if (iVar1 == 0) {
          return -0x14;
        }
        pcVar2 = (char *)(DAT_000233f0 + 0x2334c);
        sVar4 = strspn(param_1,pcVar2);
        uStack_1038 = 0;
        __s = param_1 + sVar4;
        do {
          do {
            sVar4 = strlen(param_1);
            iVar1 = -(sVar4 + 8 & 0xfffffff8);
            sVar4 = strcspn(__s,pcVar2);
            pcStack_103c = __s + sVar4;
            sVar4 = strspn(pcStack_103c,pcVar2);
            __s = pcStack_103c + sVar4;
            if (pcStack_103c[sVar4] == '\0') {
              return 0;
            }
            pcStack_103c = (char *)((int)pcStack_103c - (int)param_1);
            memcpy(auStack_1040 + iVar1,param_1,(size_t)pcStack_103c);
            auStack_1040[(int)pcStack_103c + iVar1] = (char)uStack_1038;
            iVar1 = (*pcStack_1034)(auStack_1040 + iVar1,param_2);
          } while (-1 < iVar1);
          piVar5 = __errno_location();
        } while (*piVar5 == 0x11);
        return -*piVar5;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000236f6 @ 000236f6 size=160 ===== */

char * FUN_000236f6(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *__s;
  char *__accept;
  char *__s_00;
  
  if (param_1 == (char *)0x0) {
    uVar5 = 0xfc;
    iVar6 = DAT_00023798 + 0x23746;
    iVar4 = DAT_0002379c + 0x23710;
    iVar1 = DAT_000237a0 + 0x23712;
  }
  else {
    if (param_2 != (char *)0x0) {
      if ((*param_1 == '/') == (*param_2 == '/')) {
        __accept = (char *)(DAT_000237b0 + 0x23746);
        while( true ) {
          sVar2 = strspn(param_1,__accept);
          __s = param_1 + sVar2;
          sVar3 = strspn(param_2,__accept);
          __s_00 = param_2 + sVar3;
          if (param_2[sVar3] == '\0') break;
          if (param_1[sVar2] == '\0') goto LAB_0002378e;
          sVar2 = strcspn(__s,__accept);
          sVar3 = strcspn(__s_00,__accept);
          if ((sVar2 != sVar3) || (iVar1 = memcmp(__s,__s_00,sVar2), iVar1 != 0)) goto LAB_0002378e;
          param_1 = __s + sVar2;
          param_2 = __s_00 + sVar2;
        }
      }
      else {
LAB_0002378e:
        __s = (char *)0x0;
      }
      return __s;
    }
    uVar5 = 0xfd;
    iVar6 = DAT_000237a4 + 0x2375c;
    iVar4 = DAT_000237a8 + 0x23726;
    iVar1 = DAT_000237ac + 0x23728;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,iVar6,param_4);
}



/* ===== FUN_00023d60 @ 00023d60 size=144 ===== */

int FUN_00023d60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(DAT_00023df4 + 0x23d6c);
  if (*piVar4 != 0) {
    lVar1 = syscall(0x180,param_1,param_2,1,param_4);
    if (param_2 == lVar1) {
      iVar3 = 0;
      *piVar4 = 1;
      iVar5 = -1;
      goto LAB_00023d8a;
    }
    if (-1 < lVar1) {
      iVar5 = -1;
      iVar3 = -0x3d;
      goto LAB_00023d8a;
    }
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    if (iVar3 == 0x26) {
      iVar5 = 0;
    }
    else {
      if (iVar3 != 0xb) {
        iVar3 = -iVar3;
        iVar5 = -1;
        goto LAB_00023d8a;
      }
      iVar5 = 1;
    }
    *piVar4 = iVar5;
  }
  iVar5 = open64((char *)(DAT_00023df8 + 0x23dae),DAT_00023df0);
  if (iVar5 < 0) {
    piVar4 = __errno_location();
    if (*piVar4 == 2) {
      iVar3 = -0x26;
    }
    else {
      iVar3 = -*piVar4;
    }
  }
  else {
    iVar3 = FUN_000260ec(iVar5,param_1,param_2,1);
  }
LAB_00023d8a:
  FUN_00025324(iVar5);
  return iVar3;
}



/* ===== FUN_00023dfc @ 00023dfc size=34 ===== */

void FUN_00023dfc(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(DAT_00023e20 + 0x23e04);
  if (*pcVar3 == '\0') {
    uVar1 = FUN_00024db0();
    uVar2 = syscall(0xe0);
    srand(uVar2 ^ uVar1);
    *pcVar3 = '\x01';
  }
  return;
}



/* ===== FUN_00023e24 @ 00023e24 size=36 ===== */

void FUN_00023e24(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00023d60();
  if (iVar1 < 0) {
    FUN_00023dfc();
    puVar2 = param_1 + param_2;
    for (; param_1 < puVar2; param_1 = param_1 + 1) {
      iVar1 = rand();
      *param_1 = (char)iVar1;
    }
  }
  return;
}



/* ===== FUN_00023e4e @ 00023e4e size=4 ===== */

undefined4 FUN_00023e4e(void)

{
  return 0;
}



/* ===== FUN_00023e52 @ 00023e52 size=2 ===== */

void FUN_00023e52(void)

{
  return;
}



/* ===== FUN_00023e54 @ 00023e54 size=4 ===== */

undefined4 FUN_00023e54(void)

{
  return 0;
}



/* ===== FUN_00023e94 @ 00023e94 size=4 ===== */

undefined4 FUN_00023e94(void)

{
  return 0;
}



/* ===== FUN_00023e98 @ 00023e98 size=2 ===== */

void FUN_00023e98(void)

{
  return;
}



/* ===== FUN_00023ed0 @ 00023ed0 size=1600 ===== */

void FUN_00023ed0(undefined1 *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  
  uVar10 = (uint)((ulonglong)*param_4 >> 0x20);
  uVar1 = (uint)*param_4;
  uVar16 = param_3 << 0x18;
  uVar15 = 0;
  uVar2 = (uint)((ulonglong)param_4[1] >> 0x20);
  uVar14 = (uint)param_4[1];
  local_a0 = uVar14 ^ s_setybdetarenegylmodnaroduespemos_00024518._0_4_;
  local_9c = uVar2 ^ s_setybdetarenegylmodnaroduespemos_00024518._4_4_;
  local_a8 = s_setybdetarenegylmodnaroduespemos_00024518._8_4_ ^ uVar1;
  local_a4 = s_setybdetarenegylmodnaroduespemos_00024518._12_4_ ^ uVar10;
  uVar14 = uVar14 ^ s_setybdetarenegylmodnaroduespemos_00024518._16_4_;
  uVar2 = uVar2 ^ s_setybdetarenegylmodnaroduespemos_00024518._20_4_;
  uVar1 = uVar1 ^ s_setybdetarenegylmodnaroduespemos_00024518._24_4_;
  uVar10 = uVar10 ^ s_setybdetarenegylmodnaroduespemos_00024518._28_4_;
  puVar6 = param_2;
  while( true ) {
    uVar8 = uVar1 + uVar14;
    uVar10 = uVar10 + uVar2 + CARRY4(uVar1,uVar14);
    uVar13 = (uVar2 << 0xd | uVar14 >> 0x13) ^ uVar10;
    uVar12 = (uVar14 << 0xd | uVar2 >> 0x13) ^ uVar8;
    uVar2 = uVar13 << 0x11 | uVar12 >> 0xf;
    uVar14 = uVar12 << 0x11 | uVar13 >> 0xf;
    if (puVar6 == (undefined8 *)((int)param_2 + (param_3 & 0xfffffff8))) break;
    uVar17 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar11 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar1 = (uint)uVar17;
    local_a0 = local_a0 ^ uVar1;
    local_9c = local_9c ^ uVar11;
    uVar3 = local_a8 + local_a0;
    local_a4 = local_a4 + local_9c + CARRY4(local_a8,local_a0);
    uVar4 = (local_a0 << 0x10 | local_9c >> 0x10) ^ uVar3;
    uVar5 = (local_9c << 0x10 | local_a0 >> 0x10) ^ local_a4;
    uVar7 = uVar10 + uVar4;
    uVar8 = uVar8 + uVar5 + CARRY4(uVar10,uVar4);
    uVar9 = (uVar4 << 0x15 | uVar5 >> 0xb) ^ uVar7;
    uVar4 = (uVar5 << 0x15 | uVar4 >> 0xb) ^ uVar8;
    uVar10 = local_a4 + uVar13 + (uint)CARRY4(uVar3,uVar12);
    uVar14 = uVar14 ^ uVar3 + uVar12;
    uVar2 = uVar2 ^ uVar10;
    uVar5 = uVar8 + uVar2 + (uint)CARRY4(uVar7,uVar14);
    uVar8 = (uVar14 << 0xd | uVar2 >> 0x13) ^ uVar7 + uVar14;
    uVar13 = (uVar2 << 0xd | uVar14 >> 0x13) ^ uVar5;
    uVar2 = uVar10 + uVar9;
    local_a8 = uVar3 + uVar12 + uVar4 + (uint)CARRY4(uVar10,uVar9);
    uVar12 = (uVar9 << 0x10 | uVar4 >> 0x10) ^ uVar2;
    uVar3 = (uVar4 << 0x10 | uVar9 >> 0x10) ^ local_a8;
    uVar10 = uVar7 + uVar14 + uVar3 + (uint)CARRY4(uVar5,uVar12);
    local_a0 = (uVar12 << 0x15 | uVar3 >> 0xb) ^ uVar5 + uVar12;
    local_9c = (uVar3 << 0x15 | uVar12 >> 0xb) ^ uVar10;
    local_a4 = uVar2 + uVar8;
    local_a8 = local_a8 + uVar13 + CARRY4(uVar2,uVar8);
    uVar14 = (uVar8 << 0x11 | uVar13 >> 0xf) ^ local_a4;
    uVar2 = (uVar13 << 0x11 | uVar8 >> 0xf) ^ local_a8;
    uVar1 = uVar1 ^ uVar5 + uVar12;
    uVar10 = uVar11 ^ uVar10;
  }
  uVar1 = param_3 >> 3;
  switch(param_3 & 7) {
  case 7:
    uVar16 = uVar16 | (uint)*(byte *)((int)param_2 + uVar1 * 8 + 6) << 0x10;
  case 6:
    uVar16 = uVar16 | (uint)*(byte *)((int)param_2 + uVar1 * 8 + 5) << 8;
  case 5:
    uVar16 = uVar16 | *(byte *)((int)param_2 + uVar1 * 8 + 4);
  case 4:
    uVar15 = (uint)*(byte *)((int)param_2 + uVar1 * 8 + 3) << 0x18;
  case 3:
    uVar15 = uVar15 | (uint)*(byte *)((int)param_2 + uVar1 * 8 + 2) << 0x10;
  case 2:
    uVar15 = uVar15 | (uint)*(byte *)((int)param_2 + uVar1 * 8 + 1) << 8;
  case 1:
    uVar15 = uVar15 | *(byte *)(param_2 + uVar1);
  default:
    local_9c = local_9c ^ uVar16;
    local_a0 = local_a0 ^ uVar15;
    uVar5 = local_a8 + local_a0;
    uVar7 = local_a4 + local_9c + (uint)CARRY4(local_a8,local_a0);
    uVar11 = (local_9c << 0x10 | local_a0 >> 0x10) ^ uVar7;
    uVar9 = (local_a0 << 0x10 | local_9c >> 0x10) ^ uVar5;
    uVar1 = uVar9 + uVar10;
    uVar3 = uVar11 + uVar8 + CARRY4(uVar9,uVar10);
    uVar4 = (uVar11 << 0x15 | uVar9 >> 0xb) ^ uVar3;
    uVar10 = (uVar9 << 0x15 | uVar11 >> 0xb) ^ uVar1;
    uVar7 = uVar7 + uVar13 + CARRY4(uVar5,uVar12);
    uVar14 = uVar14 ^ uVar5 + uVar12;
    uVar2 = uVar2 ^ uVar7;
    uVar3 = uVar3 + uVar2 + CARRY4(uVar1,uVar14);
    uVar8 = uVar1 + uVar14 ^ (uVar14 << 0xd | uVar2 >> 0x13);
    uVar2 = uVar3 ^ (uVar2 << 0xd | uVar14 >> 0x13);
    uVar13 = uVar10 + uVar7;
    uVar12 = uVar4 + uVar5 + uVar12 + (uint)CARRY4(uVar10,uVar7);
    uVar7 = uVar13 ^ (uVar10 << 0x10 | uVar4 >> 0x10);
    uVar10 = uVar12 ^ (uVar4 << 0x10 | uVar10 >> 0x10);
    uVar9 = uVar1 + uVar14 + uVar10 + CARRY4(uVar3,uVar7);
    uVar4 = uVar9 ^ (uVar10 << 0x15 | uVar7 >> 0xb);
    uVar1 = uVar3 + uVar7 ^ (uVar7 << 0x15 | uVar10 >> 0xb);
    uVar12 = uVar2 + uVar12 + (uint)CARRY4(uVar8,uVar13);
    uVar5 = uVar12 ^ (uVar2 << 0x11 | uVar8 >> 0xf);
    uVar14 = uVar8 + uVar13 ^ (uVar8 << 0x11 | uVar2 >> 0xf);
    uVar15 = uVar3 + uVar7 ^ uVar15;
    uVar10 = uVar14 + uVar15;
    uVar12 = uVar12 ^ 0xff;
    uVar15 = uVar5 + (uVar9 ^ uVar16) + (uint)CARRY4(uVar14,uVar15);
    uVar3 = uVar15 ^ (uVar5 << 0xd | uVar14 >> 0x13);
    uVar2 = uVar10 ^ (uVar14 << 0xd | uVar5 >> 0x13);
    uVar16 = uVar12 + uVar1;
    uVar12 = uVar8 + uVar13 + uVar4 + CARRY4(uVar12,uVar1);
    uVar14 = uVar16 ^ (uVar1 << 0x10 | uVar4 >> 0x10);
    uVar13 = uVar12 ^ (uVar4 << 0x10 | uVar1 >> 0x10);
    uVar1 = uVar15 + uVar14;
    uVar10 = uVar10 + uVar13 + CARRY4(uVar15,uVar14);
    uVar8 = (uVar14 << 0x15 | uVar13 >> 0xb) ^ uVar1;
    uVar13 = (uVar13 << 0x15 | uVar14 >> 0xb) ^ uVar10;
    uVar4 = uVar3 + uVar12 + CARRY4(uVar2,uVar16);
    uVar14 = (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar4;
    uVar12 = (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar2 + uVar16;
    uVar10 = uVar10 + uVar14 + CARRY4(uVar1,uVar12);
    uVar15 = (uVar14 << 0xd | uVar12 >> 0x13) ^ uVar10;
    uVar14 = (uVar12 << 0xd | uVar14 >> 0x13) ^ uVar1 + uVar12;
    uVar3 = uVar8 + uVar4;
    uVar4 = uVar13 + uVar2 + uVar16 + (uint)CARRY4(uVar8,uVar4);
    uVar16 = (uVar13 << 0x10 | uVar8 >> 0x10) ^ uVar4;
    uVar2 = (uVar8 << 0x10 | uVar13 >> 0x10) ^ uVar3;
    uVar13 = uVar10 + uVar2;
    uVar12 = uVar1 + uVar12 + uVar16 + CARRY4(uVar10,uVar2);
    uVar10 = (uVar16 << 0x15 | uVar2 >> 0xb) ^ uVar12;
    uVar1 = (uVar2 << 0x15 | uVar16 >> 0xb) ^ uVar13;
    uVar2 = uVar15 + uVar4 + CARRY4(uVar14,uVar3);
    uVar16 = uVar2 ^ (uVar15 << 0x11 | uVar14 >> 0xf);
    uVar15 = uVar14 + uVar3 ^ (uVar14 << 0x11 | uVar15 >> 0xf);
    uVar12 = uVar12 + uVar16 + CARRY4(uVar13,uVar15);
    uVar4 = uVar1 + uVar2;
    uVar8 = (uVar16 << 0xd | uVar15 >> 0x13) ^ uVar12;
    uVar7 = uVar10 + uVar14 + uVar3 + (uint)CARRY4(uVar1,uVar2);
    uVar2 = (uVar15 << 0xd | uVar16 >> 0x13) ^ uVar13 + uVar15;
    uVar14 = (uVar10 << 0x10 | uVar1 >> 0x10) ^ uVar7;
    uVar1 = (uVar1 << 0x10 | uVar10 >> 0x10) ^ uVar4;
    uVar3 = uVar12 + uVar1;
    uVar12 = uVar13 + uVar15 + uVar14 + CARRY4(uVar12,uVar1);
    uVar15 = (uVar14 << 0x15 | uVar1 >> 0xb) ^ uVar12;
    uVar1 = (uVar1 << 0x15 | uVar14 >> 0xb) ^ uVar3;
    uVar16 = uVar8 + uVar7 + CARRY4(uVar2,uVar4);
    uVar10 = uVar16 ^ (uVar8 << 0x11 | uVar2 >> 0xf);
    uVar14 = uVar2 + uVar4 ^ (uVar2 << 0x11 | uVar8 >> 0xf);
    uVar8 = (uVar10 << 0xd | uVar14 >> 0x13) ^ uVar12 + uVar10 + CARRY4(uVar3,uVar14);
    uVar10 = (uVar14 << 0xd | uVar10 >> 0x13) ^ uVar3 + uVar14;
    uVar14 = uVar1 + uVar16;
    uVar2 = uVar15 + uVar2 + uVar4 + (uint)CARRY4(uVar1,uVar16);
    uVar16 = uVar2 ^ (uVar15 << 0x10 | uVar1 >> 0x10);
    uVar15 = uVar14 ^ (uVar1 << 0x10 | uVar15 >> 0x10);
    uVar1 = uVar8 + uVar2 + CARRY4(uVar10,uVar14);
    uVar2 = (uVar16 << 0x15 | uVar15 >> 0xb) ^ uVar1 ^ (uVar8 << 0x11 | uVar10 >> 0xf) ^
            uVar10 + uVar14;
    uVar1 = (uVar15 << 0x15 | uVar16 >> 0xb) ^ uVar10 + uVar14 ^ (uVar10 << 0x11 | uVar8 >> 0xf) ^
            uVar1;
    param_1[4] = (char)uVar2;
    *param_1 = (char)uVar1;
    param_1[1] = (char)(uVar1 >> 8);
    param_1[3] = (char)(uVar1 >> 0x18);
    param_1[2] = (char)(uVar1 >> 0x10);
    param_1[5] = (char)(uVar2 >> 8);
    param_1[6] = (char)(uVar2 >> 0x10);
    param_1[7] = (char)(uVar2 >> 0x18);
    return;
  }
}



/* ===== FUN_00024610 @ 00024610 size=28 ===== */

undefined4 FUN_00024610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024634 + 0x24626,DAT_00024630 + 0x24624,0x9d,&UNK_0002468a + DAT_0002462c,
                 param_4);
  }
  return 0;
}



/* ===== FUN_00024640 @ 00024640 size=44 ===== */

void FUN_00024640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(byte *)(param_1 + 0xc); uVar1 = uVar1 + 1) {
    FUN_00024640(*(undefined4 *)((int)*(void **)(param_1 + 8) + uVar1 * 8 + 4));
  }
  free(*(void **)(param_1 + 8));
  (*(code *)PTR_free_0004b31c)(param_1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== FUN_000246c6 @ 000246c6 size=32 ===== */

void FUN_000246c6(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_00024640();
  }
  free((void *)*param_1);
  (*(code *)PTR_free_0004b31c)(param_1);
  return;
}



/* ===== FUN_00024830 @ 00024830 size=24 ===== */

void FUN_00024830(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + -1;
    while( true ) {
      puVar1 = puVar1 + 1;
      if ((void *)*puVar1 == (void *)0x0) break;
      free((void *)*puVar1);
    }
    *param_1 = 0;
  }
  return;
}



/* ===== FUN_00024848 @ 00024848 size=18 ===== */

undefined4 FUN_00024848(void *param_1)

{
  FUN_00024830();
  free(param_1);
  return 0;
}



/* ===== FUN_0002485a @ 0002485a size=22 ===== */

int FUN_0002485a(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    for (iVar1 = 0; *(int *)(param_1 + iVar1 * 4) != 0; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}



/* ===== FUN_00024870 @ 00024870 size=82 ===== */

undefined4 * FUN_00024870(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_0002485a();
  uVar2 = iVar1 + 1;
  if (((uVar2 == 0) || (uVar2 >> 0x1e == 0)) &&
     (puVar5 = malloc(uVar2 * 4), puVar5 != (undefined4 *)0x0)) {
    puVar4 = puVar5;
    if (param_1 == 0) {
LAB_000248a0:
      *puVar4 = 0;
    }
    else {
      puVar6 = (undefined4 *)(param_1 + -4);
      do {
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) goto LAB_000248a0;
        pcVar3 = strdup((char *)*puVar6);
        *puVar4 = pcVar3;
        puVar4 = puVar4 + 1;
      } while (pcVar3 != (char *)0x0);
      FUN_00024848(puVar5);
      puVar5 = (undefined4 *)0x0;
    }
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}



/* ===== FUN_00024958 @ 00024958 size=68 ===== */

undefined4 FUN_00024958(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  size_t __size;
  void *pvVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = (void *)*param_1;
    uVar1 = FUN_0002485a(pvVar3);
    if ((uVar1 < 0xfffffffe) && (uVar1 + 2 >> 0x1e == 0)) {
      __size = (uVar1 + 2) * 4;
      pvVar3 = realloc(pvVar3,__size);
      if (pvVar3 != (void *)0x0) {
        *(int *)((int)pvVar3 + (__size - 8)) = param_2;
        *(undefined4 *)((int)pvVar3 + (__size - 4)) = 0;
        *param_1 = pvVar3;
        return 0;
      }
    }
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}



/* ===== FUN_0002499c @ 0002499c size=22 ===== */

int FUN_0002499c(undefined4 param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00024958();
  if (iVar1 < 0) {
    free(param_2);
  }
  return iVar1;
}



/* ===== FUN_00024a44 @ 00024a44 size=64 ===== */

uint FUN_00024a44(undefined4 *param_1,uint param_2,char *param_3)

{
  size_t __n;
  void *pvVar1;
  
  __n = strlen(param_3);
  if (__n < param_2) {
    if (__n != 0) {
      pvVar1 = mempcpy((void *)*param_1,param_3,__n);
      param_2 = param_2 - __n;
      *param_1 = pvVar1;
    }
  }
  else {
    if (1 < param_2) {
      pvVar1 = mempcpy((void *)*param_1,param_3,param_2 - 1);
      *param_1 = pvVar1;
    }
    param_2 = 0;
  }
  *(undefined1 *)*param_1 = 0;
  return param_2;
}



/* ===== FUN_00024a84 @ 00024a84 size=52 ===== */

int FUN_00024a84(int *param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  sVar1 = vsnprintf((char *)*param_1,param_2,param_3,&uStack_4);
  iVar3 = *param_1;
  if ((int)sVar1 < (int)param_2) {
    iVar2 = param_2 - sVar1;
    param_2 = sVar1;
  }
  else {
    iVar2 = 0;
  }
  *param_1 = (int)(iVar3 + param_2);
  *(undefined1 *)(iVar3 + param_2) = 0;
  return iVar2;
}



/* ===== FUN_00024ab8 @ 00024ab8 size=44 ===== */

void FUN_00024ab8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_14;
  int local_4;
  
  piVar1 = &local_4;
  uVar2 = param_1;
  local_14 = &local_4;
  local_4 = param_4;
  do {
    param_2 = FUN_00024a44(param_1,param_2,param_3,piVar1,uVar2);
    param_3 = *local_14;
    piVar1 = local_14;
    local_14 = local_14 + 1;
  } while (param_3 != 0);
  return;
}



/* ===== FUN_00024ae4 @ 00024ae4 size=16 ===== */

void FUN_00024ae4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  FUN_00024a44(&local_c);
  return;
}



/* ===== FUN_00024af4 @ 00024af4 size=46 ===== */

void FUN_00024af4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *local_18;
  undefined4 uStack_14;
  int local_4;
  
  local_18 = &local_4;
  uStack_14 = param_1;
  local_4 = param_4;
  do {
    param_2 = FUN_00024a44(&uStack_14,param_2,param_3);
    param_3 = *local_18;
    local_18 = local_18 + 1;
  } while (param_3 != 0);
  return;
}



/* ===== FUN_00024b24 @ 00024b24 size=50 ===== */

char * FUN_00024b24(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *__accept;
  
  __accept = (char *)(DAT_00024b58 + 0x24b2e);
  pcVar1 = strpbrk(param_1,__accept);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '/')) {
    do {
      if (*pcVar1 == '.') {
        cVar2 = '/';
      }
      else {
        cVar2 = '.';
      }
      *pcVar1 = cVar2;
      pcVar1 = strpbrk(pcVar1 + 1,__accept);
    } while (pcVar1 != (char *)0x0);
  }
  return param_1;
}



/* ===== FUN_00024b5c @ 00024b5c size=154 ===== */

void FUN_00024b5c(char *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_18;
  
  if (param_1 == (char *)0x0) {
    uVar6 = 0x3e;
    iVar7 = DAT_00024bf8 + 0x24b74;
    iVar5 = DAT_00024bfc + 0x24b76;
    iVar2 = DAT_00024c00 + 0x24b78;
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_000230c4();
      if (6 < iVar2) {
        FUN_00022f5c(7,0,DAT_00024c14 + 0x24ba6,0x41,DAT_00024c18 + 0x24bb9,DAT_00024c10 + 0x24ba0,
                     param_1,param_2);
      }
      sVar3 = strlen(param_1);
      uVar6 = *(undefined4 *)(DAT_00024c1c + 0x24bc4);
      iVar2 = -(sVar3 + 0x12 & 0xfffffff8);
      *(undefined4 *)((int)&uStack_18 + iVar2) = *(undefined4 *)(DAT_00024c1c + 0x24bc0);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar6;
      uVar1 = *(undefined1 *)(DAT_00024c1c + 0x24bca);
      *(undefined2 *)(&stack0xfffffff0 + iVar2) = *(undefined2 *)(DAT_00024c1c + 0x24bc8);
      (&stack0xfffffff2)[iVar2] = uVar1;
      pcVar4 = stpcpy(&stack0xfffffff2 + iVar2,param_1);
      *pcVar4 = '\0';
      FUN_00020cbc((undefined4 *)((int)&uStack_18 + iVar2),param_2);
      return;
    }
    uVar6 = 0x3f;
    iVar7 = DAT_00024c04 + 0x24b88;
    iVar5 = DAT_00024c08 + 0x24b8a;
    iVar2 = DAT_00024c0c + 0x24b8c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar2,iVar5,uVar6,iVar7);
}



/* ===== FUN_00024c20 @ 00024c20 size=112 ===== */

void FUN_00024c20(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (param_1 == (char *)0x0) {
    uVar6 = 0x4a;
    iVar7 = DAT_00024c90 + 0x24c50;
    iVar5 = DAT_00024c94 + 0x24c3a;
    iVar2 = DAT_00024c98 + 0x24c3c;
  }
  else {
    if (param_2 != 0) {
      sVar3 = strlen(param_1);
      uVar6 = *(undefined4 *)(DAT_00024ca8 + 0x24c60);
      iVar2 = -(sVar3 + 0x12 & 0xfffffff8);
      *(undefined4 *)((int)&uStack_18 + iVar2) = *(undefined4 *)(DAT_00024ca8 + 0x24c5c);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar6;
      uVar1 = *(undefined1 *)(DAT_00024ca8 + 0x24c66);
      *(undefined2 *)(&stack0xfffffff0 + iVar2) = *(undefined2 *)(DAT_00024ca8 + 0x24c64);
      (&stack0xfffffff2)[iVar2] = uVar1;
      pcVar4 = stpcpy(&stack0xfffffff2 + iVar2,param_1);
      *pcVar4 = '\0';
      FUN_00020ef4((int)&uStack_18 + iVar2,param_2);
      return;
    }
    uVar6 = 0x4b;
    iVar7 = DAT_00024c9c + 0x24c66;
    iVar5 = DAT_00024ca0 + 0x24c50;
    iVar2 = DAT_00024ca4 + 0x24c52;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar2,iVar5,uVar6,iVar7);
}



/* ===== FUN_00024cac @ 00024cac size=116 ===== */

int FUN_00024cac(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2 << 0x19;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024d28 + 0x24cc6,DAT_00024d24 + 0x24cc4,0x39,DAT_00024d20 + 0x24cc2);
  }
  iVar4 = 0x15;
  while (iVar2 = open64(param_1,param_2,0,iVar2,param_4), iVar2 < 0) {
    piVar1 = __errno_location();
    iVar2 = *piVar1;
    if (iVar2 != 5) goto LAB_00024ce2;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return -5;
    }
    usleep(50000);
    iVar2 = extraout_r3;
  }
  iVar4 = isatty(iVar2);
  if (iVar4 < 0) {
    FUN_00025324(iVar2);
    piVar1 = __errno_location();
    iVar2 = *piVar1;
LAB_00024ce2:
    iVar3 = -iVar2;
  }
  else {
    iVar3 = iVar2;
    if (iVar4 == 0) {
      iVar3 = -0x19;
      FUN_00025324(iVar2);
    }
  }
  return iVar3;
}



/* ===== FUN_00024d30 @ 00024d30 size=112 ===== */

longlong FUN_00024d30(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024dac + 0x24d48,DAT_00024da8 + 0x24d46,0x26,DAT_00024da4 + 0x24d44);
  }
  uVar3 = *param_1;
  uVar1 = param_1[1];
  if ((uVar1 & uVar3) != 0xffffffff) {
    lVar6 = FUN_0002c6f0(uVar1,(int)uVar1 >> 0x1f,1000,0);
    uVar5 = VectorShiftRight(CONCAT44(uVar3,uVar3),0x20);
    uVar7 = FUN_0002c6f0(~(uint)lVar6,~(uint)((ulonglong)lVar6 >> 0x20),DAT_00024da0,0);
    uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar4 = (uint)uVar5 <= (uint)uVar7;
    }
    if (bVar4) {
      return (longlong)DAT_00024da0 * (longlong)(int)uVar3 + lVar6;
    }
  }
  return -1;
}



/* ===== FUN_00024db0 @ 00024db0 size=42 ===== */

void FUN_00024db0(clockid_t param_1,long param_2)

{
  int iVar1;
  timespec tStack_10;
  
  tStack_10.tv_sec = param_1;
  tStack_10.tv_nsec = param_2;
  iVar1 = clock_gettime(param_1,&tStack_10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024de4 + 0x24dce,DAT_00024de0 + 0x24dcc,0x20,DAT_00024ddc + 0x24dd6);
  }
  FUN_00024d30(&tStack_10);
  return;
}



/* ===== FUN_00024de8 @ 00024de8 size=88 ===== */

undefined4 * FUN_00024de8(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024e4c + 0x24e04,DAT_00024e48 + 0x24e02,0x35,DAT_00024e44 + 0x24e10);
  }
  if (param_4 == -1 && param_3 == -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002c6f0(param_3,param_4,DAT_00024e40,0);
    uVar1 = DAT_00024e40;
    *param_1 = uVar2;
    FUN_0002c6f0(param_3,param_4,uVar1,0);
    param_1[1] = extraout_r2 * 1000;
  }
  return param_1;
}



/* ===== FUN_00024e50 @ 00024e50 size=82 ===== */

undefined4 * FUN_00024e50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00024eb0 + 0x24e6c,DAT_00024eac + 0x24e6a,0x43,DAT_00024ea8 + 0x24e87);
  }
  if (param_4 == -1 && param_3 == -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002c6f0(param_3,param_4,DAT_00024ea4,0);
    uVar1 = DAT_00024ea4;
    *param_1 = uVar2;
    FUN_0002c6f0(param_3,param_4,uVar1,0);
    param_1[1] = extraout_r2;
  }
  return param_1;
}



/* ===== FUN_00024eb4 @ 00024eb4 size=442 ===== */

char * FUN_00024eb4(char *param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  char *__format;
  uint uVar7;
  int extraout_r2;
  int iVar8;
  int extraout_r3;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  lVar15 = CONCAT44(param_4,param_3);
  if (param_1 == (char *)0x0) {
    uVar6 = 100;
    iVar8 = DAT_00025078 + 0x24f03;
    iVar3 = DAT_0002507c + 0x24ed8;
    iVar1 = DAT_00025080 + 0x24eda;
  }
  else {
    if (param_2 != 0) {
      if (param_4 == -1 && param_3 == -1) {
        pcVar4 = (char *)(DAT_00025090 + 0x24f02);
      }
      else {
        if (param_3 != 0 || param_4 != 0) {
          bVar13 = false;
          puVar11 = (undefined4 *)(DAT_00025094 + 0x24f2c);
          iVar3 = 0;
          iVar1 = DAT_00025098 + 0x24f30;
          __format = (char *)(DAT_0002509c + 0x24f36);
          pcVar4 = param_1;
          do {
            uVar10 = (uint)((ulonglong)lVar15 >> 0x20);
            uVar2 = (uint)lVar15;
            bVar12 = param_6 <= uVar10;
            if (uVar10 == param_6) {
              bVar12 = param_5 <= uVar2;
            }
            if ((!bVar12) && (bVar13)) goto LAB_00025016;
            uVar5 = puVar11[2];
            uVar7 = puVar11[3];
            uVar16 = *(undefined8 *)(puVar11 + 2);
            bVar12 = uVar7 <= uVar10;
            if (uVar10 == uVar7) {
              bVar12 = uVar5 <= uVar2;
            }
            if (bVar12) {
              if (param_2 < 2) {
LAB_00025016:
                *pcVar4 = '\0';
                return param_1;
              }
              uVar14 = FUN_0002c6f0(uVar2,uVar10,uVar5,uVar7);
              lVar15 = CONCAT44(extraout_r3,extraout_r2);
              bVar13 = uVar10 <= DAT_00025074;
              if (DAT_00025074 == uVar10) {
                bVar13 = uVar2 <= DAT_00025070;
              }
              if ((bVar13) && (extraout_r3 != 0 || extraout_r2 != 0)) {
                iVar8 = 0;
                while( true ) {
                  iStack_44 = (int)((ulonglong)uVar16 >> 0x20);
                  local_48 = (uint)uVar16;
                  uVar16 = CONCAT44(param_6,param_5);
                  if (iStack_44 == 0 && local_48 < 2) break;
                  iVar8 = iVar8 + 1;
                  uVar16 = FUN_0002c6f0(local_48,iStack_44,10,0);
                }
                while( true ) {
                  iVar9 = (int)((ulonglong)uVar16 >> 0x20);
                  uStack_3c = (undefined4)((ulonglong)lVar15 >> 0x20);
                  local_40 = (undefined4)lVar15;
                  if (iVar9 == 0 && (uint)uVar16 < 2) break;
                  iVar8 = iVar8 + -1;
                  lVar15 = FUN_0002c6f0(local_40,uStack_3c,10,0);
                  uVar16 = FUN_0002c6f0((uint)uVar16,iVar9,10,0);
                }
                if (iVar8 < 1) goto LAB_00025066;
                if (param_1 < pcVar4) {
                  iVar9 = DAT_000250ac + 0x25048;
                }
                else {
                  iVar9 = DAT_000250a4 + 0x24fd0;
                }
                lVar15 = 0;
                uVar2 = snprintf(pcVar4,param_2,(char *)(DAT_000250a8 + 0x24ff2),iVar9,uVar14,iVar8)
                ;
              }
              else {
LAB_00025066:
                iVar8 = iVar1;
                if (param_1 < pcVar4) {
                  iVar8 = DAT_000250b0 + 0x2504e;
                }
                uVar2 = snprintf(pcVar4,param_2,__format,iVar8,uVar14,*puVar11);
              }
              bVar13 = true;
              if (param_2 <= uVar2) {
                uVar2 = param_2;
              }
              param_2 = param_2 - uVar2;
              pcVar4 = pcVar4 + uVar2;
            }
            iVar3 = iVar3 + 1;
            if ((iVar3 == 9) || (puVar11 = puVar11 + 4, lVar15 == 0)) goto LAB_00025016;
          } while( true );
        }
        pcVar4 = (char *)(DAT_000250a0 + 0x24f94);
      }
      strncpy(param_1,pcVar4,param_2 - 1);
      param_1[param_2 - 1] = '\0';
      return param_1;
    }
    uVar6 = 0x65;
    iVar8 = DAT_00025084 + 0x24f19;
    iVar3 = DAT_00025088 + 0x24eee;
    iVar1 = DAT_0002508c + 0x24ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar6,iVar8);
}



/* ===== FUN_000250de @ 000250de size=8 ===== */

void FUN_000250de(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_malloc_0004b0e8)(param_2);
  return;
}



/* ===== FUN_0002512c @ 0002512c size=28 ===== */

bool FUN_0002512c(char *param_1,char *param_2)

{
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return false;
    }
    param_2 = (char *)strcmp(param_1,param_2);
  }
  return param_2 == (char *)0x0;
}



/* ===== FUN_00025148 @ 00025148 size=98 ===== */

char * FUN_00025148(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x6d;
    iVar5 = DAT_000251ac + 0x25166;
    iVar3 = DAT_000251b0 + 0x25160;
    iVar1 = DAT_000251b4 + 0x25162;
  }
  else {
    if (param_2 != (char *)0x0) {
      sVar2 = strlen(param_1);
      __n = strlen(param_2);
      if (__n == 0) {
        param_1 = param_1 + sVar2;
      }
      else if (sVar2 < __n) {
        param_1 = (char *)0x0;
      }
      else {
        param_1 = param_1 + (sVar2 - __n);
        iVar1 = memcmp(param_1,param_2,__n);
        if (iVar1 != 0) {
          param_1 = (char *)0x0;
        }
      }
      return param_1;
    }
    uVar4 = 0x6e;
    iVar5 = DAT_000251b8 + 0x2517c;
    iVar3 = DAT_000251bc + 0x25176;
    iVar1 = DAT_000251c0 + 0x25178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_000251c4 @ 000251c4 size=220 ===== */

undefined4 FUN_000251c4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_000252a8 + 0x251de,DAT_000252a4 + 0x251dc,0x319,DAT_000252a0 + 0x251eb);
  }
  if (((((*param_1 == '.') || (iVar1 = strcmp(param_1,(char *)(DAT_000252ac + 0x251ec)), iVar1 == 0)
        ) || (iVar1 = strcmp(param_1,(char *)(DAT_000252b0 + 0x251fa)), iVar1 == 0)) ||
      ((((iVar1 = strcmp(param_1,(char *)(DAT_000252b4 + 0x25208)), iVar1 == 0 ||
         (iVar1 = FUN_00025148(param_1,DAT_000252b8 + 0x25216), iVar1 != 0)) ||
        ((iVar1 = FUN_00025148(param_1,DAT_000252bc + 0x25224), iVar1 != 0 ||
         ((iVar1 = FUN_00025148(param_1,DAT_000252c0 + 0x25232), iVar1 != 0 ||
          (iVar1 = FUN_00025148(param_1,DAT_000252c4 + 0x2523e), iVar1 != 0)))))) ||
       (iVar1 = FUN_00025148(param_1,DAT_000252c8 + 0x2524a), iVar1 != 0)))) ||
     ((((iVar1 = FUN_00025148(param_1,DAT_000252cc + 0x25256), iVar1 != 0 ||
        (iVar1 = FUN_00025148(param_1,DAT_000252d0 + 0x25262), iVar1 != 0)) ||
       (iVar1 = FUN_00025148(param_1,DAT_000252d4 + 0x2526e), iVar1 != 0)) ||
      ((iVar1 = FUN_00025148(param_1,DAT_000252d8 + 0x2527a), iVar1 != 0 ||
       (iVar1 = FUN_00025148(param_1,DAT_000252dc + 0x25286), iVar1 != 0)))))) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00025148(param_1,DAT_000252e0 + 0x25292);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_000252e4 @ 000252e4 size=52 ===== */

int FUN_000252e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00025320 + 0x252fc,DAT_0002531c + 0x252fa,0xbf,DAT_00025318 + 0x25322,param_4);
  }
  iVar1 = close(param_1);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 4) {
      return -*piVar2;
    }
  }
  return 0;
}



/* ===== FUN_00025324 @ 00025324 size=52 ===== */

undefined4 FUN_00025324(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_1) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    iVar2 = FUN_000252e4(param_1);
    if (iVar2 == -9) {
                    /* WARNING: Subroutine does not return */
      FUN_00022f76(DAT_00025360 + 0x2534e,DAT_0002535c + 0x2534c,0xe5,DAT_00025358 + 0x25381);
    }
    *piVar1 = iVar3;
  }
  return 0xffffffff;
}



/* ===== FUN_00025364 @ 00025364 size=50 ===== */

void FUN_00025364(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00022f76(DAT_000253a0 + 0x2538a,DAT_0002539c + 0x25388,0xee,DAT_00025398 + 0x253c8,param_4
                  );
    }
  }
  else {
    puVar1 = param_1 + param_2;
    for (; puVar1 != param_1; param_1 = param_1 + 1) {
      FUN_00025324(*param_1);
    }
  }
  return;
}



/* ===== FUN_000253c6 @ 000253c6 size=114 ===== */

int FUN_000253c6(char *param_1,ulong *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_1c;
  undefined4 uStack_18;
  
  local_1c = (char *)0x0;
  uStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    uVar5 = 0x121;
    iVar6 = DAT_00025438 + 0x2542f;
    iVar4 = DAT_0002543c + 0x253e4;
    iVar1 = DAT_00025440 + 0x253e6;
  }
  else {
    if (param_2 != (ulong *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      uVar3 = strtoul(param_1,&local_1c,0);
      iVar1 = *piVar2;
      if ((((local_1c == (char *)0x0) || (local_1c == param_1)) || (*local_1c != '\0')) ||
         (iVar1 != 0)) {
        if (iVar1 < 1) {
          iVar1 = -0x16;
        }
        else {
          iVar1 = -iVar1;
        }
      }
      else {
        *param_2 = uVar3;
        iVar1 = 0;
      }
      return iVar1;
    }
    uVar5 = 0x122;
    iVar6 = DAT_00025444 + 0x25447;
    iVar4 = DAT_00025448 + 0x253fc;
    iVar1 = DAT_0002544c + 0x253fe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,iVar6,param_1);
}



/* ===== FUN_00025450 @ 00025450 size=76 ===== */

int FUN_00025450(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_000254a4 + 0x2546e,DAT_000254a0 + 0x2546c,0x104,DAT_0002549c + 0x254c1);
  }
  iVar1 = FUN_000253c6(param_1,&local_14,param_3,param_4,param_1);
  if (-1 < iVar1) {
    if ((local_14 == -1) || (local_14 == 0xffff)) {
      iVar1 = -6;
    }
    else if (param_2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      *param_2 = local_14;
    }
  }
  return iVar1;
}



/* ===== FUN_000254a8 @ 000254a8 size=114 ===== */

int FUN_000254a8(char *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  char *local_1c;
  undefined4 uStack_18;
  
  local_1c = (char *)0x0;
  uStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    uVar5 = 0x135;
    puVar6 = (undefined *)(DAT_0002551c + 0x25525);
    iVar4 = DAT_00025520 + 0x254c6;
    iVar1 = DAT_00025524 + 0x254c8;
  }
  else {
    if (param_2 != (long *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      lVar3 = strtol(param_1,&local_1c,0);
      iVar1 = *piVar2;
      if ((((local_1c == (char *)0x0) || (local_1c == param_1)) || (*local_1c != '\0')) ||
         (iVar1 != 0)) {
        if (iVar1 < 1) {
          iVar1 = -0x16;
        }
        else {
          iVar1 = -iVar1;
        }
      }
      else {
        *param_2 = lVar3;
        iVar1 = 0;
      }
      return iVar1;
    }
    uVar5 = 0x136;
    puVar6 = &UNK_0002553d + DAT_00025528;
    iVar4 = DAT_0002552c + 0x254de;
    iVar1 = DAT_00025530 + 0x254e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,puVar6,param_1);
}



/* ===== FUN_00025700 @ 00025700 size=44 ===== */

char * FUN_00025700(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00025734 + 0x2571a,DAT_00025730 + 0x25718,0x1a5,&UNK_00025799 + DAT_0002572c);
  }
  sVar1 = strcspn(param_1,(char *)(DAT_00025738 + 0x25722));
  param_1[sVar1] = '\0';
  return param_1;
}



/* ===== FUN_000257cc @ 000257cc size=182 ===== */

int FUN_000257cc(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  char *__path;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  
  if (param_1 == (char *)0x0) {
    uVar5 = 0x1d2;
    iVar6 = DAT_00025884 + 0x25875;
    iVar4 = DAT_00025888 + 0x257e8;
    iVar1 = DAT_0002588c + 0x257ea;
  }
  else {
    if (param_2 != 0) {
      sVar2 = strlen(param_1);
      do {
        if (sVar2 == 0) {
          return 0;
        }
        sVar7 = sVar2 - 1;
        __n = sVar2;
        sVar2 = sVar7;
      } while (param_1[sVar7] == '/');
      while( true ) {
        while (sVar2 = __n - 1, param_1[sVar2] != '/') {
          __n = sVar2;
          if (sVar2 == 0) {
            return 0;
          }
        }
        while (sVar2 = __n - 1, param_1[sVar2] == '/') {
          __n = sVar2;
          if (sVar2 == 0) {
            return 0;
          }
        }
        __path = strndup(param_1,__n);
        if (__path == (char *)0x0) break;
        iVar1 = FUN_000236f6(param_2,__path);
        if (iVar1 != 0) {
          free(__path);
          return 0;
        }
        iVar1 = rmdir(__path);
        free(__path);
        if (iVar1 < 0) {
          piVar3 = __errno_location();
          if (*piVar3 != 2) {
            return -*piVar3;
          }
        }
      }
      return -0xc;
    }
    uVar5 = 0x1d3;
    iVar6 = DAT_00025890 + 0x2588d;
    iVar4 = DAT_00025894 + 0x25800;
    iVar1 = DAT_00025898 + 0x25802;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_000258b0 @ 000258b0 size=42 ===== */

uint FUN_000258b0(int param_1)

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
      uVar1 = 0xffffffea;
    }
    return uVar1;
  }
  return param_1 - 0x57;
}



/* ===== FUN_000258da @ 000258da size=8 ===== */

int FUN_000258da(uint param_1)

{
  return (param_1 & 7) + 0x30;
}



/* ===== FUN_000258e2 @ 000258e2 size=208 ===== */

int FUN_000258e2(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_1 == 0xb) {
    *param_2 = 0x5c;
    uVar1 = 0x76;
  }
  else {
    if (0xb < param_1) {
      if (param_1 == 0x22) {
LAB_000259a0:
        *param_2 = 0x5c;
      }
      else {
        if (param_1 < 0x23) {
          if (param_1 == 0xc) {
            *param_2 = 0x5c;
            uVar1 = 0x66;
          }
          else {
            if (param_1 != 0xd) goto LAB_000258f8;
            *param_2 = 0x5c;
            uVar1 = 0x72;
          }
          goto LAB_0002596a;
        }
        if (param_1 == 0x27) goto LAB_000259a0;
        if (param_1 != 0x5c) goto LAB_000258f8;
        *param_2 = 0x5c;
      }
      puVar2 = param_2 + 2;
      param_2[1] = (char)param_1;
      goto LAB_0002596c;
    }
    if (param_1 == 8) {
      *param_2 = 0x5c;
      uVar1 = 0x62;
    }
    else if (param_1 < 9) {
      if (param_1 != 7) {
LAB_000258f8:
        if (param_1 - 0x20 < 0x5f) {
          puVar2 = param_2 + 1;
          *param_2 = (char)param_1;
        }
        else {
          *param_2 = 0x5c;
          puVar2 = param_2 + 4;
          uVar1 = FUN_000258da(param_1 >> 6);
          param_2[1] = uVar1;
          uVar1 = FUN_000258da(param_1 >> 3);
          param_2[2] = uVar1;
          uVar1 = FUN_000258da(param_1);
          param_2[3] = uVar1;
        }
        goto LAB_0002596c;
      }
      *param_2 = 0x5c;
      uVar1 = 0x61;
    }
    else if (param_1 == 9) {
      *param_2 = 0x5c;
      uVar1 = 0x74;
    }
    else {
      if (param_1 != 10) goto LAB_000258f8;
      *param_2 = 0x5c;
      uVar1 = 0x6e;
    }
  }
LAB_0002596a:
  puVar2 = param_2 + 2;
  param_2[1] = uVar1;
LAB_0002596c:
  return (int)puVar2 - (int)param_2;
}



/* ===== FUN_000259b2 @ 000259b2 size=14 ===== */

uint FUN_000259b2(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x30;
  if (7 < (uVar1 & 0xff)) {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_000259c0 @ 000259c0 size=440 ===== */

int FUN_000259c0(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  if (param_1 == (byte *)0x0) {
    uVar4 = 0x235;
    iVar6 = DAT_00025b78 + 0x25a8b;
    iVar3 = DAT_00025b7c + 0x259e0;
    iVar1 = DAT_00025b80 + 0x259e2;
  }
  else {
    bVar5 = *param_1;
    if (bVar5 != 0) {
      if (bVar5 == 0x62) {
        bVar5 = 8;
      }
      else {
        if (bVar5 < 99) {
          if (bVar5 < 0x38) {
            if (0x2f < bVar5) {
              iVar1 = FUN_000259b2();
              if ((((iVar1 < 0) || (iVar3 = FUN_000259b2(param_1[1]), iVar3 < 0)) ||
                  (uVar2 = FUN_000259b2(param_1[2]), (int)uVar2 < 0)) ||
                 (((iVar1 == 0 && iVar3 == 0) && uVar2 == 0 ||
                  (uVar2 = uVar2 | iVar3 * 8 | iVar1 * 0x40, 0xff < uVar2)))) {
                return -0x16;
              }
LAB_00025acc:
              *param_2 = (byte)uVar2;
              return 3;
            }
            if ((bVar5 != 0x22) && (bVar5 != 0x27)) {
              return -0x16;
            }
          }
          else if (bVar5 != 0x5c) {
            if (bVar5 != 0x61) {
              if (bVar5 != 0x55) {
                return -0x16;
              }
              pbVar8 = param_1 + 8;
              piVar7 = local_38;
              do {
                param_1 = param_1 + 1;
                iVar1 = FUN_000258b0(*param_1);
                *piVar7 = iVar1;
                if (iVar1 < 0) {
                  return iVar1;
                }
                piVar7 = piVar7 + 1;
              } while (param_1 != pbVar8);
              uVar2 = local_38[1] << 0x18 | local_38[0] << 0x1c | local_1c | local_38[2] << 0x14 |
                      local_38[3] << 0x10 | local_28 << 0xc | local_24 << 8 | local_20 << 4;
              if (uVar2 == 0) {
                return -0x16;
              }
              iVar1 = FUN_0002c240(uVar2);
              if (iVar1 == 0) {
                return -0x16;
              }
              if (uVar2 < 0x80) {
                *param_2 = (byte)uVar2;
                return 9;
              }
              *param_2 = 0;
              *param_3 = uVar2;
              return 9;
            }
            bVar5 = 7;
            goto LAB_00025ad4;
          }
          *param_2 = bVar5;
          return 1;
        }
        if (bVar5 == 0x73) {
          bVar5 = 0x20;
        }
        else if (bVar5 < 0x74) {
          if (bVar5 == 0x6e) {
            bVar5 = 10;
          }
          else if (bVar5 == 0x72) {
            bVar5 = 0xd;
          }
          else {
            if (bVar5 != 0x66) {
              return -0x16;
            }
            bVar5 = 0xc;
          }
        }
        else {
          if (bVar5 == 0x75) {
            pbVar8 = param_1 + 4;
            piVar7 = local_38;
            do {
              param_1 = param_1 + 1;
              iVar1 = FUN_000258b0(*param_1);
              *piVar7 = iVar1;
              if (iVar1 < 0) {
                return iVar1;
              }
              piVar7 = piVar7 + 1;
            } while (param_1 != pbVar8);
            uVar2 = local_38[1] << 8 | local_38[0] << 0xc | local_38[3] | local_38[2] << 4;
            if (uVar2 == 0) {
              return -0x16;
            }
            if (uVar2 < 0x80) {
              *param_2 = (byte)uVar2;
              return 5;
            }
            *param_2 = 0;
            *param_3 = uVar2;
            return 5;
          }
          if (bVar5 < 0x75) {
            bVar5 = 9;
          }
          else {
            if (bVar5 != 0x76) {
              if (bVar5 != 0x78) {
                return -0x16;
              }
              iVar1 = FUN_000258b0(param_1[1]);
              if (iVar1 < 0) {
                return -0x16;
              }
              uVar2 = FUN_000258b0(param_1[2]);
              if ((int)uVar2 < 0) {
                return -0x16;
              }
              if (iVar1 == 0 && uVar2 == 0) {
                return -0x16;
              }
              uVar2 = uVar2 | iVar1 * 0x10;
              goto LAB_00025acc;
            }
            bVar5 = 0xb;
          }
        }
      }
LAB_00025ad4:
      *param_2 = bVar5;
      return 1;
    }
    uVar4 = 0x236;
    iVar6 = DAT_00025b84 + 0x25aa5;
    iVar3 = DAT_00025b88 + 0x259fa;
    iVar1 = DAT_00025b8c + 0x259fc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar3,uVar4,iVar6);
}



/* ===== FUN_00025b90 @ 00025b90 size=72 ===== */

undefined1 * FUN_00025b90(char *param_1)

{
  size_t sVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00025be0 + 0x25baa,DAT_00025bdc + 0x25ba8,0x220,&UNK_00025c61 + DAT_00025bd8);
  }
  sVar1 = strlen(param_1);
  puVar2 = (undefined1 *)FUN_000250de(1,sVar1 * 4 + 1);
  if (puVar2 != (undefined1 *)0x0) {
    param_1 = param_1 + -1;
    puVar4 = puVar2;
    while( true ) {
      param_1 = param_1 + 1;
      if (*param_1 == '\0') break;
      iVar3 = FUN_000258e2(*param_1,puVar4);
      puVar4 = puVar4 + iVar3;
    }
    *puVar4 = 0;
  }
  return puVar2;
}



/* ===== FUN_00025cf6 @ 00025cf6 size=64 ===== */

char * FUN_00025cf6(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *__path;
  char *__s;
  
  __path = strdup(param_1);
  if (__path == (char *)0x0) {
    __s = (char *)0x0;
  }
  else {
    __s = dirname(__path);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00022f76(DAT_00025d40 + 0x25d1c,DAT_00025d3c + 0x25d1a,0x3b9,&UNK_00025de7 + DAT_00025d38,
                   param_4);
    }
    if (__path != __s) {
      __s = strdup(__s);
      free(__path);
    }
  }
  return __s;
}



/* ===== FUN_00025ffe @ 00025ffe size=70 ===== */

int FUN_00025ffe(int param_1,ushort param_2,int param_3,int param_4)

{
  timespec *__timeout;
  int iVar1;
  int *piVar2;
  int iVar3;
  pollfd local_18;
  int iStack_10;
  int iStack_c;
  
  local_18.revents = 0;
  local_18.events = param_2;
  local_18.fd = param_1;
  iStack_10 = param_3;
  iStack_c = param_4;
  if (param_4 == -1 && param_3 == -1) {
    __timeout = (timespec *)0x0;
  }
  else {
    __timeout = (timespec *)FUN_00024de8(&iStack_10);
  }
  iVar1 = ppoll(&local_18,1,__timeout,(__sigset_t *)0x0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (int)local_18.revents;
    }
  }
  return iVar3;
}



/* ===== FUN_00026044 @ 00026044 size=142 ===== */

int FUN_00026044(int param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 < 0) {
    uVar5 = 0x35e;
    iVar6 = (int)&DAT_000261a8 + DAT_000260d4;
    iVar4 = DAT_000260d8 + 0x26066;
    iVar1 = DAT_000260dc + 0x26068;
  }
  else {
    if (param_2 != (void *)0x0) {
      iVar1 = 0;
      while( true ) {
        do {
          while( true ) {
            if (param_3 == 0) {
              return iVar1;
            }
            sVar2 = read(param_1,param_2,param_3);
            if (sVar2 < 0) break;
            if (sVar2 == 0) {
              return iVar1;
            }
            param_2 = (void *)((int)param_2 + sVar2);
            param_3 = param_3 - sVar2;
            iVar1 = iVar1 + sVar2;
          }
          piVar3 = __errno_location();
          iVar4 = *piVar3;
        } while (iVar4 == 4);
        if ((iVar4 != 0xb) || (param_4 == 0)) break;
        FUN_00025ffe(param_1,1,0xffffffff,0xffffffff);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      return -iVar4;
    }
    uVar5 = 0x35f;
    iVar6 = DAT_000260e0 + 0x261c2;
    iVar4 = DAT_000260e4 + 0x26080;
    iVar1 = DAT_000260e8 + 0x26082;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_000260ec @ 000260ec size=24 ===== */

int FUN_000260ec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00026044();
  if (-1 < iVar1) {
    if (param_3 == iVar1) {
      iVar1 = 0;
    }
    else {
      iVar1 = -5;
    }
  }
  return iVar1;
}



/* ===== FUN_00026104 @ 00026104 size=148 ===== */

int FUN_00026104(int param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 < 0) {
    uVar5 = 0x38f;
    iVar6 = DAT_00026198 + 0x26272;
    iVar4 = DAT_0002619c + 0x26126;
    iVar1 = DAT_000261a0 + 0x26128;
  }
  else {
    if (param_2 != (void *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      do {
        sVar3 = write(param_1,param_2,param_3);
        if (sVar3 < 0) {
          iVar1 = *piVar2;
          if (iVar1 != 4) {
            if ((iVar1 != 0xb) || (param_4 == 0)) {
              return -iVar1;
            }
            FUN_00025ffe(param_1,4,0xffffffff,0xffffffff);
          }
        }
        else {
          if ((param_3 != 0) && (sVar3 == 0)) {
            return -5;
          }
          param_2 = (void *)((int)param_2 + sVar3);
          param_3 = param_3 - sVar3;
        }
        if (param_3 == 0) {
          return 0;
        }
      } while( true );
    }
    uVar5 = 0x390;
    iVar6 = DAT_000261a4 + 0x2628c;
    iVar4 = DAT_000261a8 + 0x26140;
    iVar1 = DAT_000261ac + 0x26142;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_000261b0 @ 000261b0 size=248 ===== */

int FUN_000261b0(int *param_1,__uid_t *param_2,__gid_t *param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  passwd *ppVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  __uid_t *local_24;
  
  local_24 = param_2;
  if (param_1 == (int *)0x0) {
    uVar5 = 0x49b;
    iVar6 = DAT_000262a8 + 0x2632b;
    iVar4 = DAT_000262ac + 0x261d4;
    iVar1 = DAT_000262b0 + 0x261d6;
LAB_000261d4:
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(iVar1,iVar4,uVar5,iVar6,param_1);
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0x49c;
    iVar6 = DAT_000262b4 + 0x2634d;
    iVar4 = DAT_000262b8 + 0x261f6;
    iVar1 = DAT_000262bc + 0x261f8;
    goto LAB_000261d4;
  }
  iVar1 = strcmp(pcVar7,(char *)(DAT_000262c0 + 0x26200));
  if ((iVar1 == 0) || (iVar1 = strcmp(pcVar7,(char *)(DAT_000262c4 + 0x2620c)), iVar1 == 0)) {
    *param_1 = DAT_000262c8 + 0x26216;
    if (param_2 != (__uid_t *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (__gid_t *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = DAT_000262cc + 0x26230;
    }
    if (param_5 != (undefined4 *)0x0) {
      pcVar7 = (char *)(DAT_000262d0 + 0x2623c);
LAB_0002623a:
      *param_5 = pcVar7;
    }
LAB_00026232:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00025450(pcVar7,&local_24);
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (iVar1 < 0) {
      ppVar3 = getpwnam((char *)*param_1);
      if (ppVar3 != (passwd *)0x0) goto LAB_00026278;
    }
    else {
      ppVar3 = getpwuid((__uid_t)local_24);
      if (ppVar3 != (passwd *)0x0) {
        *param_1 = (int)ppVar3->pw_name;
LAB_00026278:
        if (param_2 != (__uid_t *)0x0) {
          *param_2 = ppVar3->pw_uid;
        }
        if (param_3 != (__gid_t *)0x0) {
          *param_3 = ppVar3->pw_gid;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (int)ppVar3->pw_dir;
        }
        if (param_5 != (undefined4 *)0x0) {
          pcVar7 = ppVar3->pw_shell;
          goto LAB_0002623a;
        }
        goto LAB_00026232;
      }
    }
    if (*piVar2 < 1) {
      iVar1 = -3;
    }
    else {
      iVar1 = -*piVar2;
    }
  }
  return iVar1;
}



/* ===== FUN_000262d4 @ 000262d4 size=154 ===== */

int FUN_000262d4(int *param_1,__gid_t *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  group *pgVar3;
  char *__s1;
  __gid_t *local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00026378 + 0x262f2,DAT_00026374 + 0x262f0,0x4d9,&UNK_00026456 + DAT_00026370,0)
    ;
  }
  __s1 = (char *)*param_1;
  iVar1 = strcmp(__s1,(char *)(DAT_0002637c + 0x262fe));
  if ((iVar1 == 0) || (iVar1 = strcmp(__s1,(char *)(DAT_00026380 + 0x2630a)), iVar1 == 0)) {
    *param_1 = DAT_00026384 + 0x26314;
    if (param_2 != (__gid_t *)0x0) {
      *param_2 = 0;
      return 0;
    }
LAB_00026316:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00025450(__s1,&local_1c);
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (iVar1 < 0) {
      pgVar3 = getgrnam((char *)*param_1);
      if (pgVar3 != (group *)0x0) goto LAB_00026354;
    }
    else {
      pgVar3 = getgrgid((__gid_t)local_1c);
      if (pgVar3 != (group *)0x0) {
        *param_1 = (int)pgVar3->gr_name;
LAB_00026354:
        if (param_2 != (__gid_t *)0x0) {
          *param_2 = pgVar3->gr_gid;
        }
        goto LAB_00026316;
      }
    }
    if (*piVar2 < 1) {
      iVar1 = -3;
    }
    else {
      iVar1 = -*piVar2;
    }
  }
  return iVar1;
}



/* ===== FUN_00026388 @ 00026388 size=104 ===== */

char * FUN_00026388(char *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  undefined4 *local_24;
  undefined4 local_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  pcVar3 = param_1;
  local_c = param_2;
  puStack_8 = param_3;
  puStack_4 = param_4;
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
    local_24 = param_4;
  }
  else {
    uVar1 = strlen(param_1);
    local_24 = &local_c;
    while( true ) {
      param_3 = local_24 + 1;
      if ((char *)*local_24 == (char *)0x0) break;
      sVar2 = strlen((char *)*local_24);
      if (~uVar1 < sVar2) {
        return (char *)0x0;
      }
      uVar1 = uVar1 + sVar2;
      local_24 = param_3;
    }
  }
  pcVar3 = (char *)FUN_000250de(1,uVar1 + 1,param_3,local_24,pcVar3);
  if (pcVar3 != (char *)0x0) {
    if (param_1 == (char *)0x0) {
      *pcVar3 = '\0';
    }
    else {
      __dest = stpcpy(pcVar3,param_1);
      local_24 = &local_c;
      while( true ) {
        if ((char *)*local_24 == (char *)0x0) break;
        __dest = stpcpy(__dest,(char *)*local_24);
        local_24 = local_24 + 1;
      }
    }
  }
  return pcVar3;
}



/* ===== FUN_000266a4 @ 000266a4 size=94 ===== */

uint FUN_000266a4(char *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint local_14;
  
  uVar2 = 0;
  local_14 = 0;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_0002670c + 0x266c4,DAT_00026708 + 0x266c2,0x575,&UNK_000268d2 + DAT_00026704,0)
    ;
  }
  puVar3 = (undefined4 *)(&UNK_00026758 + DAT_00026710);
  while( true ) {
    if (((char *)*puVar3 != (char *)0x0) && (iVar1 = strcmp((char *)*puVar3,param_1), iVar1 == 0))
    break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (uVar2 == 8) {
      iVar1 = FUN_000253c6(param_1,&local_14);
      if (iVar1 < 0) {
        local_14 = 0xffffffff;
      }
      else if (7 < local_14) {
        local_14 = 0xffffffff;
      }
      return local_14;
    }
  }
  return uVar2;
}



/* ===== FUN_000269b0 @ 000269b0 size=104 ===== */

int FUN_000269b0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  socklen_t local_14;
  
  local_14 = 4;
  local_18 = param_3;
  iVar1 = getsockopt(param_1,1,7,&local_18,&local_14);
  if (((iVar1 < 0) || (local_14 != 4)) || (local_18 < param_2 << 1)) {
    local_18 = param_2;
    iVar1 = setsockopt(param_1,1,0x20,&local_18,4);
    if ((iVar1 < 0) && (iVar1 = setsockopt(param_1,1,7,&local_18,4), iVar1 < 0)) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00026a18 @ 00026a18 size=86 ===== */

uint FUN_00026a18(void)

{
  uint uVar1;
  int iVar2;
  statfs64 local_60;
  
  if (*(int *)(DAT_00026a78 + 0x26a20) < 0) {
    iVar2 = access((char *)(DAT_00026a7c + 0x26a3a),0);
    if ((iVar2 < 0) || (iVar2 = statfs64((char *)(DAT_00026a84 + 0x26a52),&local_60), iVar2 < 0)) {
      uVar1 = 0;
    }
    else if (local_60.f_type == DAT_00026a70) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)(local_60.f_type == DAT_00026a74);
    }
    *(uint *)(DAT_00026a80 + 0x26a48) = uVar1;
  }
  else if (*(int *)(DAT_00026a78 + 0x26a20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_00026e6c @ 00026e6c size=56 ===== */

uint FUN_00026e6c(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  stat64 sStack_70;
  
  if (param_2 == 0) {
    iVar1 = lstat64(param_1,&sStack_70);
  }
  else {
    iVar1 = stat64(param_1,&sStack_70);
  }
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    uVar3 = -*piVar2;
  }
  else {
    uVar3 = (uint)((sStack_70.st_mode & 0xf000) == 0x4000);
  }
  return uVar3;
}



/* ===== FUN_00027208 @ 00027208 size=80 ===== */

void FUN_00027208(msghdr *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  cmsghdr *__cmsg;
  
  if (param_1 == (msghdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_00027260 + 0x27224,DAT_0002725c + 0x27222,0x7ad,DAT_00027258 + 0x27522,param_4)
    ;
  }
  if (0xb < param_1->msg_controllen) {
    for (__cmsg = param_1->msg_control; __cmsg != (cmsghdr *)0x0;
        __cmsg = __cmsg_nxthdr(param_1,__cmsg)) {
      if ((__cmsg->cmsg_level == 1) && (__cmsg->cmsg_type == 1)) {
        FUN_00025364(__cmsg + 1,__cmsg->cmsg_len - 0xc >> 2);
      }
    }
  }
  return;
}



/* ===== FUN_00027380 @ 00027380 size=92 ===== */

void FUN_00027380(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char acStack_410 [1024];
  
  iVar1 = FUN_0002846c();
  if (iVar1 != 0) {
    FUN_00024af4(acStack_410,0x400,DAT_000273e4 + 0x273aa,param_2,DAT_000273e0 + 0x273a6,iVar1,0);
    if (param_3 == 0) {
      unlink(acStack_410);
    }
    else {
      FUN_000233f4(acStack_410,0x1ed);
      iVar1 = open64(acStack_410,DAT_000273dc,0x124);
      if (-1 < iVar1) {
        close(iVar1);
      }
    }
  }
  return;
}



/* ===== FUN_000273e8 @ 000273e8 size=126 ===== */

void FUN_000273e8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *__s2;
  int iVar2;
  char *__s1;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    for (iVar1 = FUN_00027f02(param_2); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      __s2 = (char *)FUN_0002a8d0(iVar1);
      for (iVar2 = FUN_00027f02(param_1); iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
        __s1 = (char *)FUN_0002a8d0(iVar2);
        iVar3 = strcmp(__s1,__s2);
        if (iVar3 == 0) goto LAB_0002742e;
      }
      FUN_00027380(param_2,__s2,0);
LAB_0002742e:
    }
  }
  for (iVar1 = FUN_00027f02(param_1); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
    uVar4 = FUN_0002a8d0(iVar1);
    FUN_00027380(param_1,uVar4,param_3);
  }
  return;
}



/* ===== FUN_00027466 @ 00027466 size=632 ===== */

int FUN_00027466(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FILE *__stream;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  char acStack_828 [1024];
  char acStack_428 [1028];
  
  iVar1 = FUN_0002846c();
  if (iVar1 == 0) {
    return -1;
  }
  iVar2 = FUN_00027e94(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_0002919a(param_1), iVar2 == 0)) {
    for (iVar2 = FUN_00027f20(param_1); iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
      iVar6 = FUN_0002a8dc(iVar2);
      if (iVar6 != 0) goto LAB_0002748e;
    }
    iVar2 = FUN_00027f02(param_1);
    if (iVar2 == 0) {
      uVar9 = FUN_000291ae(param_1);
      uVar9 = ~uVar9 >> 0x1f;
      goto LAB_00027492;
    }
  }
LAB_0002748e:
  uVar9 = 1;
LAB_00027492:
  FUN_00024af4(acStack_828,0x400,DAT_000276e0 + 0x274a2,iVar1,0);
  if (uVar9 == 0) {
    uVar10 = FUN_000282ec(param_1);
    uVar3 = gnu_dev_major(uVar10);
    if ((uVar3 == 0) && (iVar1 = FUN_000282d8(param_1), iVar1 == 0)) {
      unlink(acStack_828);
      return 0;
    }
  }
  FUN_00024af4(acStack_428,0x400,acStack_828,DAT_000276e4 + 0x27522,0);
  FUN_000233f4(acStack_428,0x1ed);
  __stream = fopen64(acStack_428,(char *)(DAT_000276e8 + 0x27536));
  if (__stream != (FILE *)0x0) {
    iVar1 = FUN_000291c2(param_1);
    if (iVar1 != 0) {
      iVar1 = fileno(__stream);
      fchmod(iVar1,0x3a4);
    }
    if (uVar9 != 0) {
      uVar10 = FUN_000282ec(param_1);
      uVar3 = gnu_dev_major(uVar10);
      iVar1 = DAT_00027708;
      if (uVar3 != 0) {
        iVar2 = FUN_00027e94(param_1);
        for (; iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
          iVar6 = FUN_0002a8d0(iVar2);
          fprintf(__stream,(char *)(iVar1 + 0x275fc),iVar6 + 5);
        }
        iVar1 = FUN_0002919a(param_1);
        if (iVar1 != 0) {
          uVar5 = FUN_0002919a(param_1);
          fprintf(__stream,(char *)(DAT_0002770c + 0x27614),uVar5);
        }
        iVar1 = FUN_000291ae(param_1);
        if (-1 < iVar1) {
          uVar5 = FUN_000291ae(param_1);
          fprintf(__stream,(char *)(DAT_00027710 + 0x27630),uVar5);
        }
      }
      lVar11 = FUN_00027a06(param_1);
      if (lVar11 != 0) {
        uVar12 = FUN_00027a06(param_1);
        fprintf(__stream,(char *)(DAT_00027714 + 0x27654),(int)uVar12,
                (int)((ulonglong)uVar12 >> 0x20));
      }
      iVar1 = DAT_00027718;
      iVar2 = FUN_00027f20(param_1);
      for (; iVar6 = DAT_0002771c, iVar2 != 0; iVar2 = FUN_0002a868(iVar2)) {
        iVar6 = FUN_0002a8dc(iVar2);
        if (iVar6 != 0) {
          uVar5 = FUN_0002a8d0(iVar2);
          uVar7 = FUN_0002a8d6(iVar2);
          fprintf(__stream,(char *)(iVar1 + 0x27664),uVar5,uVar7);
        }
      }
      iVar1 = FUN_00027f02(param_1);
      for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
        uVar5 = FUN_0002a8d0(iVar1);
        fprintf(__stream,(char *)(iVar6 + 0x27674),uVar5);
      }
    }
    fclose(__stream);
    iVar1 = rename(acStack_428,acStack_828);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = FUN_000230c4();
    if (6 < iVar1) {
      if (uVar9 == 0) {
        puVar8 = (undefined *)(DAT_000276f8 + 0x275ba);
      }
      else {
        puVar8 = &UNK_000276de + DAT_00027720;
      }
      uVar5 = FUN_00027926(param_1);
      FUN_00022f5c(7,0,DAT_00027700 + 0x275ce,0xae,DAT_00027704 + 0x275d2,DAT_000276fc + 0x275c8,
                   puVar8,acStack_828,uVar5);
    }
    return 0;
  }
  piVar4 = __errno_location();
  iVar2 = *piVar4;
  iVar1 = FUN_000230c4();
  if (6 < iVar1) {
    iVar1 = FUN_00022f5c(7,iVar2,DAT_000276f0 + 0x2755c,0x85,DAT_000276f4 + 0x27562,
                         DAT_000276ec + 0x27556,acStack_428);
    return iVar1;
  }
  if (0 < iVar2) {
    return -iVar2;
  }
  return iVar2;
}



/* ===== FUN_00027760 @ 00027760 size=32 ===== */

bool FUN_00027760(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strchr(param_1,0x20);
    bVar1 = pcVar2 == (char *)0x0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* ===== FUN_00027780 @ 00027780 size=34 ===== */

char * FUN_00027780(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  if (iVar1 == 0) {
    param_1 = param_1 + __n;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ===== FUN_000277a2 @ 000277a2 size=122 ===== */

int * FUN_000277a2(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,0x118);
    if (piVar1 == (int *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
    }
    else {
      piVar1[0x3b] = 1;
      *piVar1 = param_1;
      FUN_0002a6d2(param_1,piVar1 + 0x13,1);
      FUN_0002a6d2(param_1,piVar1 + 0x1a,1);
      FUN_0002a6d2(param_1,piVar1 + 0x21,1);
      FUN_0002a6d2(param_1,piVar1 + 0x28,0);
      FUN_0002a6d2(param_1,piVar1 + 0x2f,1);
      piVar1[0x3f] = -1;
    }
  }
  return piVar1;
}



/* ===== FUN_00027832 @ 00027832 size=66 ===== */

undefined4 FUN_00027832(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char acStack_210 [516];
  
  iVar1 = DAT_00027874;
  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x10e) == '\0') {
      *(undefined1 *)((int)param_1 + 0x10e) = 1;
      iVar1 = FUN_0002b73c(*param_1,iVar1 + 0x27850,param_1[2],acStack_210,0x200);
      if (0 < iVar1) {
        pcVar2 = strdup(acStack_210);
        param_1[0xc] = pcVar2;
      }
    }
    uVar3 = param_1[0xc];
  }
  return uVar3;
}



/* ===== FUN_00027878 @ 00027878 size=8 ===== */

void FUN_00027878(int param_1)

{
  *(undefined1 *)(param_1 + 0x10f) = 1;
  return;
}



/* ===== FUN_00027880 @ 00027880 size=6 ===== */

undefined4 FUN_00027880(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* ===== FUN_00027894 @ 00027894 size=146 ===== */

undefined4 FUN_00027894(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 0xec) + -1;
    *(int *)((int)param_1 + 0xec) = iVar1;
    if (iVar1 < 1) {
      if (*(int *)((int)param_1 + 4) != 0) {
        FUN_00027894();
      }
      free(*(void **)((int)param_1 + 8));
      free(*(void **)((int)param_1 + 0x10));
      free(*(void **)((int)param_1 + 0x18));
      free(*(void **)((int)param_1 + 0x28));
      free(*(void **)((int)param_1 + 0x2c));
      FUN_0002a87e((int)param_1 + 0x4c);
      FUN_0002a87e((int)param_1 + 0x68);
      FUN_0002a87e((int)param_1 + 0x84);
      FUN_0002a87e((int)param_1 + 0xa0);
      FUN_0002a87e((int)param_1 + 0xbc);
      free(*(void **)((int)param_1 + 0x34));
      free(*(void **)((int)param_1 + 0x30));
      free(*(void **)((int)param_1 + 0x38));
      free(*(void **)((int)param_1 + 0x3c));
      free(*(void **)((int)param_1 + 0x40));
      free(*(void **)((int)param_1 + 0x44));
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_00027926 @ 00027926 size=6 ===== */

undefined4 FUN_00027926(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_0002792c @ 0002792c size=6 ===== */

undefined4 FUN_0002792c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00027932 @ 00027932 size=178 ===== */

int FUN_00027932(int param_1)

{
  char *__name;
  DIR *__dirp;
  int *piVar1;
  dirent64 *pdVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  stat64 sStack_490;
  char acStack_428 [1028];
  
  if (param_1 == 0) {
    iVar5 = -0x16;
  }
  else if (*(char *)(param_1 + 0x113) == '\0') {
    __name = (char *)FUN_0002792c();
    __dirp = opendir(__name);
    if (__dirp == (DIR *)0x0) {
      piVar1 = __errno_location();
      iVar5 = -*piVar1;
    }
    else {
      pdVar2 = readdir64(__dirp);
      iVar6 = DAT_000279e4 + 0x27978;
      iVar5 = 0;
      while (pdVar2 != (dirent64 *)0x0) {
        if ((pdVar2->d_type & 0xfd) == 8) {
          uVar3 = FUN_0002792c(param_1);
          FUN_00024af4(acStack_428,0x400,uVar3,iVar6,pdVar2->d_name,0);
          iVar4 = lstat64(acStack_428,&sStack_490);
          if ((iVar4 == 0) && ((int)(sStack_490.st_mode << 0x17) < 0)) {
            FUN_0002a6f4(param_1 + 0xa0,pdVar2->d_name,0);
            iVar5 = iVar5 + 1;
          }
        }
        pdVar2 = readdir64(__dirp);
      }
      closedir(__dirp);
      *(undefined1 *)(param_1 + 0x113) = 1;
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}



/* ===== FUN_000279e8 @ 000279e8 size=6 ===== */

undefined4 FUN_000279e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* ===== FUN_000279ee @ 000279ee size=6 ===== */

undefined4 FUN_000279ee(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}



/* ===== FUN_000279f4 @ 000279f4 size=12 ===== */

void FUN_000279f4(int param_1)

{
  *(undefined1 *)(param_1 + 0x10b) = 0;
  FUN_0002a87e();
  return;
}



/* ===== FUN_00027a00 @ 00027a00 size=6 ===== */

undefined4 FUN_00027a00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  return uVar1;
}



/* ===== FUN_00027a06 @ 00027a06 size=6 ===== */

undefined8 FUN_00027a06(int param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* ===== FUN_00027a0c @ 00027a0c size=280 ===== */

undefined4 FUN_00027a0c(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  stat64 sStack_1488;
  char acStack_1420 [1024];
  undefined1 auStack_1020 [4100];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  puVar4 = param_1 + 0x21;
  uVar1 = FUN_0002a854(puVar4);
  iVar2 = FUN_0002a8b2(uVar1,param_2);
  if (iVar2 == 0) {
    uVar1 = FUN_0002792c(param_1);
    FUN_00024af4(acStack_1420,0x400,uVar1,DAT_00027b24 + 0x27a66,param_2,0);
    iVar2 = lstat64(acStack_1420,&sStack_1488);
    if (iVar2 != 0) {
      FUN_0002a6f4(puVar4,param_2,0);
      return 0;
    }
    if ((sStack_1488.st_mode & 0xf000) == 0xa000) {
      iVar2 = strcmp(param_2,(char *)(DAT_00027b28 + 0x27a98));
      if (((iVar2 != 0) && (iVar2 = strcmp(param_2,(char *)(DAT_00027b2c + 0x27aa4)), iVar2 != 0))
         && (iVar2 = strcmp(param_2,(char *)(DAT_00027b30 + 0x27ab0)), iVar2 != 0)) {
        return 0;
      }
      iVar2 = FUN_0002b73c(*param_1,param_2,param_1[2],auStack_1020,0x1000);
      if (iVar2 < 0) {
        return 0;
      }
    }
    else {
      if ((((sStack_1488.st_mode & 0xf000) == 0x4000) || (-1 < (int)(sStack_1488.st_mode << 0x17)))
         || (iVar2 = open64(acStack_1420,0x80000), iVar2 < 0)) {
        return 0;
      }
      sVar3 = read(iVar2,auStack_1020,0x1000);
      close(iVar2);
      if (sVar3 < 0) {
        return 0;
      }
      if (sVar3 == 0x1000) {
        return 0;
      }
      auStack_1020[sVar3] = 0;
      FUN_0002b8c0(auStack_1020,10);
    }
    FUN_0002a6f4(puVar4,param_2,auStack_1020);
  }
  uVar1 = FUN_0002a8d6();
  return uVar1;
}



/* ===== FUN_00027b34 @ 00027b34 size=236 ===== */

int FUN_00027b34(int param_1,int param_2,char *param_3)

{
  size_t __n;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ssize_t sVar4;
  stat64 sStack_490;
  char acStack_428 [1028];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(param_3);
    }
    uVar1 = FUN_0002792c(param_1);
    FUN_00024af4(acStack_428,0x400,uVar1,DAT_00027c24 + 0x27b78,param_2,0);
    iVar2 = lstat64(acStack_428,&sStack_490);
    if (iVar2 != 0) {
      FUN_0002a6f4(param_1 + 0x84,param_2,0);
      return -6;
    }
    if ((sStack_490.st_mode & 0xf000) != 0xa000) {
      if ((sStack_490.st_mode & 0xf000) == 0x4000) {
        return -0x15;
      }
      if (-1 < (int)(sStack_490.st_mode << 0x17)) {
        return -0xd;
      }
      if ((int)__n < 0x1001) {
        FUN_0002b8c0(param_3,10);
        iVar2 = open64(acStack_428,DAT_00027c20);
        if (-1 < iVar2) {
          sVar4 = write(iVar2,param_3,__n);
          close(iVar2);
          if (-1 < sVar4) {
            if ((int)__n <= sVar4) {
              FUN_0002a6f4(param_1 + 0x84,param_2,param_3);
              return 0;
            }
            return -5;
          }
        }
        piVar3 = __errno_location();
        return -*piVar3;
      }
    }
  }
  return -0x16;
}



/* ===== FUN_00027c28 @ 00027c28 size=34 ===== */

undefined4 FUN_00027c28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x113) == '\0') &&
     (uVar2 = FUN_00027932(), param_2 = (undefined4)((ulonglong)uVar2 >> 0x20),
     param_3 = extraout_r2, (int)uVar2 < 0)) {
    return 0;
  }
  uVar1 = FUN_0002a854(param_1 + 0xa0,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00027c4a @ 00027c4a size=26 ===== */

undefined4 FUN_00027c4a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x10b) = 0;
  iVar1 = FUN_0002a6f4();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00027c64 @ 00027c64 size=8 ===== */

void FUN_00027c64(int param_1)

{
  *(undefined1 *)(param_1 + 0x112) = 1;
  return;
}



/* ===== FUN_00027c6c @ 00027c6c size=48 ===== */

undefined4 FUN_00027c6c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00027760(param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    *(undefined1 *)(param_1 + 0x10d) = 0;
    iVar1 = FUN_0002a6f4(param_1 + 0xbc,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00027c9c @ 00027c9c size=46 ===== */

void FUN_00027c9c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00027760(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_0002a854(param_1 + 0xbc);
    iVar1 = FUN_0002a8b2(uVar2,param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x10d) = 0;
      FUN_0002a804();
      return;
    }
  }
  return;
}



/* ===== FUN_00027cca @ 00027cca size=12 ===== */

void FUN_00027cca(int param_1)

{
  *(undefined1 *)(param_1 + 0x10d) = 0;
  FUN_0002a87e();
  return;
}



/* ===== FUN_00027cd6 @ 00027cd6 size=8 ===== */

undefined4 FUN_00027cd6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return 0;
}



/* ===== FUN_00027cde @ 00027cde size=8 ===== */

undefined4 FUN_00027cde(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  return 0;
}



/* ===== FUN_00027ce6 @ 00027ce6 size=316 ===== */

int FUN_00027ce6(int param_1)

{
  int iVar1;
  FILE *__stream;
  uint *puVar2;
  char *pcVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char acStack_4420 [1023];
  char acStack_4021 [16385];
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  iVar1 = FUN_0002846c();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    FUN_00024af4(acStack_4420,0x400,DAT_00027e70 + 0x27d12,iVar1,0);
    __stream = fopen64(acStack_4420,(char *)(DAT_00027e74 + 0x27d20));
    iVar1 = DAT_00027e84;
    if (__stream != (FILE *)0x0) {
      *(undefined1 *)(param_1 + 0x112) = 1;
LAB_00027d72:
      do {
        pcVar3 = fgets(acStack_4021 + 1,0x4000,__stream);
        if ((pcVar3 == (char *)0x0) || (sVar4 = strlen(acStack_4021 + 1), sVar4 < 4)) {
          fclose(__stream);
          return 0;
        }
        acStack_4021[sVar4] = '\0';
        switch(acStack_4021[1]) {
        case 'E':
          goto switchD_00027dae_caseD_45;
        case 'G':
          FUN_00027c6c(param_1,acStack_4021 + 3);
          goto LAB_00027d72;
        case 'I':
          uVar8 = strtoull(acStack_4021 + 3,(char **)0x0,10);
          uVar5 = (undefined4)(uVar8 >> 0x20);
          FUN_00028544(param_1,uVar5,(int)uVar8,uVar5);
          goto LAB_00027d72;
        case 'L':
          iVar6 = atoi(acStack_4021 + 3);
          FUN_00027cd6(param_1,iVar6);
          goto LAB_00027d72;
        case 'S':
          FUN_00024af4(acStack_4420,0x400,iVar1 + 0x27d74,acStack_4021 + 3,0);
          FUN_00027c4a(param_1,acStack_4420);
          goto LAB_00027d72;
        case 'W':
          iVar6 = atoi(acStack_4021 + 3);
          FUN_00027cde(param_1,iVar6);
          goto LAB_00027d72;
        }
      } while( true );
    }
    puVar2 = (uint *)__errno_location();
    uVar7 = *puVar2;
    iVar1 = FUN_000230c4();
    if (iVar1 < 7) {
      iVar1 = ((int)uVar7 >> 0x1f) - (uVar7 ^ (int)uVar7 >> 0x1f);
    }
    else {
      iVar1 = FUN_00022f5c(7,uVar7,DAT_00027e7c + 0x27d46,0x269,DAT_00027e80 + 0x27d4a,
                           DAT_00027e78 + 0x27d40,acStack_4420);
    }
  }
  return iVar1;
switchD_00027dae_caseD_45:
  uVar5 = FUN_0002812c(param_1,acStack_4021 + 3);
  FUN_0002a8e8(uVar5,1);
  goto LAB_00027d72;
}



/* ===== FUN_00027e88 @ 00027e88 size=12 ===== */

undefined4 FUN_00027e88(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar1 = FUN_00027ce6();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_00027e94 @ 00027e94 size=30 ===== */

void FUN_00027e94(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027e88();
    }
    FUN_0002a854(param_1 + 0x4c);
    return;
  }
  return;
}



/* ===== FUN_00027eb2 @ 00027eb2 size=60 ===== */

undefined8 FUN_00027eb2(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027e88();
    }
    if ((*(int *)(param_1 + 0xe4) != 0 || *(int *)(param_1 + 0xe0) != 0) &&
       (lVar2 = FUN_00024db0(1), lVar2 != 0)) {
      uVar1 = VectorSub(lVar2,*(undefined8 *)(param_1 + 0xe0),8);
      return uVar1;
    }
  }
  return 0;
}



/* ===== FUN_00027eee @ 00027eee size=20 ===== */

undefined1 FUN_00027eee(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027e88();
  }
  return *(undefined1 *)(param_1 + 0x112);
}



/* ===== FUN_00027f02 @ 00027f02 size=30 ===== */

void FUN_00027f02(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027e88();
    }
    FUN_0002a854(param_1 + 0xbc);
    return;
  }
  return;
}



/* ===== FUN_00027f20 @ 00027f20 size=270 ===== */

undefined4 FUN_00027f20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *local_424;
  undefined1 auStack_420 [1024];
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_000282cc();
      FUN_00027e88(param_1);
    }
    if (*(char *)(param_1 + 0x10b) == '\0') {
      *(undefined1 *)(param_1 + 0x10b) = 1;
      iVar1 = FUN_00027e94(param_1);
      iVar3 = DAT_00028030;
      if (iVar1 != 0) {
        local_424 = auStack_420;
        uVar2 = FUN_0002a8d0();
        uVar2 = FUN_00024ab8(&local_424,0x400,uVar2,0);
        for (iVar1 = FUN_0002a868(iVar1); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
          uVar4 = FUN_0002a8d0(iVar1);
          uVar2 = FUN_00024ab8(&local_424,uVar2,iVar3 + 0x27f70,uVar4,0);
        }
        FUN_00028044(param_1,DAT_00028034 + 0x27f8c,auStack_420);
      }
    }
    if (*(char *)(param_1 + 0x10d) == '\0') {
      *(undefined1 *)(param_1 + 0x10d) = 1;
      iVar3 = FUN_00027f02(param_1);
      if (iVar3 != 0) {
        local_424 = auStack_420;
        uVar2 = FUN_00024ab8(&local_424,0x400,DAT_00028038 + 0x27fb0,0);
        iVar1 = DAT_0002803c + 0x27fc4;
        for (iVar3 = FUN_00027f02(param_1); iVar3 != 0; iVar3 = FUN_0002a868(iVar3)) {
          uVar4 = FUN_0002a8d0(iVar3);
          uVar2 = FUN_00024ab8(&local_424,uVar2,uVar4,iVar1,0);
        }
        FUN_00028044(param_1,DAT_00028040 + 0x27fd8,auStack_420);
      }
    }
    uVar2 = FUN_0002a854(param_1 + 0x68);
  }
  return uVar2;
}



/* ===== FUN_00028044 @ 00028044 size=42 ===== */

undefined4 FUN_00028044(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x10c) = 0;
  if (param_3 == 0) {
    uVar1 = FUN_00027f20();
    iVar2 = FUN_0002a8b2(uVar1,param_2);
    if (iVar2 != 0) {
      FUN_0002a804();
    }
    return 0;
  }
  uVar1 = FUN_0002a6f4(param_1 + 0x68,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_0002806e @ 0002806e size=50 ===== */

undefined4 FUN_0002806e(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  free(*(void **)(param_1 + 0x2c));
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x2c) = pcVar2;
  iVar1 = DAT_000280a0;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *(undefined1 *)(param_1 + 0x10a) = 1;
    FUN_00028044(param_1,iVar1 + 0x28094,pcVar2,1,param_4);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000280a4 @ 000280a4 size=44 ===== */

undefined4 FUN_000280a4(int param_1,undefined4 param_2)

{
  int iVar1;
  char acStack_30 [36];
  
  iVar1 = DAT_000280d0;
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  snprintf(acStack_30,0x20,(char *)(iVar1 + 0x280b8),param_2);
  FUN_00028044(param_1,DAT_000280d4 + 0x280c8,acStack_30);
  return 0;
}



/* ===== FUN_000280d8 @ 000280d8 size=74 ===== */

undefined4 FUN_000280d8(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  free(*(void **)(param_1 + 0x18));
  if (*param_2 == 0x2f) {
    pcVar3 = strdup((char *)param_2);
    *(char **)(param_1 + 0x18) = pcVar3;
  }
  else {
    iVar1 = asprintf((char **)(param_1 + 0x18),(char *)(DAT_00028124 + 0x280f6),param_2,
                     (uint)*param_2,param_4);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    FUN_00028044(param_1,DAT_00028128 + 0x2810c);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002812c @ 0002812c size=60 ===== */

void FUN_0002812c(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char acStack_4010 [16388];
  
  FUN_00024ae4(acStack_4010,0x4000,param_2);
  pcVar1 = strchr(acStack_4010,0x3d);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    pcVar2 = (char *)0x0;
    if (pcVar1[1] != '\0') {
      pcVar2 = pcVar1 + 1;
    }
    FUN_00028044(param_1,acStack_4010,pcVar2);
  }
  return;
}



/* ===== FUN_00028168 @ 00028168 size=324 ===== */

int FUN_00028168(int param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint __minor;
  uint __major;
  ulonglong uVar8;
  char acStack_4428 [1024];
  char acStack_4028 [6];
  char acStack_4022 [2];
  char acStack_4020 [16380];
  
  __minor = 0;
  FUN_00024af4(acStack_4428,0x400,*(undefined4 *)(param_1 + 8),DAT_000282ac + 0x2817e,0);
  __stream = fopen64(acStack_4428,(char *)(DAT_000282b0 + 0x28192));
  iVar2 = DAT_000282b8;
  iVar1 = DAT_000282b4;
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    return -*piVar3;
  }
  __major = 0;
  *(undefined1 *)(param_1 + 0x111) = 1;
  iVar7 = DAT_000282bc + 0x281c4;
  do {
    do {
      pcVar4 = fgets(acStack_4028,0x4000,__stream);
      if (pcVar4 == (char *)0x0) {
        uVar8 = gnu_dev_makedev(__major,__minor);
        *(ulonglong *)(param_1 + 0xf0) = uVar8;
        fclose(__stream);
        return 0;
      }
      pcVar4 = strchr(acStack_4028,10);
    } while (pcVar4 == (char *)0x0);
    *pcVar4 = '\0';
    iVar5 = FUN_00027780(acStack_4028,iVar7);
    if (iVar5 == 0) {
      iVar5 = FUN_00027780(acStack_4028,iVar1 + 0x281be);
      if (iVar5 == 0) {
        iVar5 = FUN_00027780(acStack_4028,iVar2 + 0x281c2);
        if (iVar5 == 0) {
          iVar5 = FUN_00027780(acStack_4028,DAT_000282c0 + 0x28256);
          if (iVar5 == 0) {
            iVar5 = FUN_00027780(acStack_4028,DAT_000282c4 + 0x2827a);
            if (iVar5 == 0) {
              iVar5 = FUN_00027780(acStack_4028,DAT_000282c8 + 0x28298);
              if (iVar5 != 0) {
                uVar6 = strtoul(acStack_4020,(char **)0x0,8);
                *(ulong *)(param_1 + 0x1c) = uVar6;
              }
            }
            else {
              uVar8 = strtoull(acStack_4022,(char **)0x0,10);
              __minor = (uint)uVar8;
            }
          }
          else {
            uVar8 = strtoull(acStack_4022,(char **)0x0,10);
            __major = (uint)uVar8;
          }
          FUN_0002812c(param_1,acStack_4028);
        }
        else {
          FUN_000280d8(param_1,acStack_4020);
        }
      }
      else {
        uVar8 = strtoull(acStack_4020,(char **)0x0,10);
        FUN_000280a4(param_1,(int)uVar8);
      }
    }
    else {
      FUN_0002806e(param_1,acStack_4020);
    }
  } while( true );
}



/* ===== FUN_000282cc @ 000282cc size=12 ===== */

undefined4 FUN_000282cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x111) == '\0') {
    uVar1 = FUN_00028168();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_000282d8 @ 000282d8 size=20 ===== */

undefined4 FUN_000282d8(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_000282cc();
  }
  return *(undefined4 *)(param_1 + 0xf8);
}



/* ===== FUN_000282ec @ 000282ec size=34 ===== */

undefined8 FUN_000282ec(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_000282cc();
    }
    return *(undefined8 *)(param_1 + 0xf0);
  }
  uVar1 = (*(code *)PTR_gnu_dev_makedev_0004b2c8)(0,0);
  return uVar1;
}



/* ===== FUN_0002830c @ 0002830c size=28 ===== */

undefined4 FUN_0002830c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10a) == '\0') {
      *(undefined1 *)(param_1 + 0x10a) = 1;
      FUN_000282cc();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}



/* ===== FUN_0002835e @ 0002835e size=30 ===== */

int FUN_0002835e(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10f) == '\0') {
        FUN_000282cc();
      }
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  return iVar1;
}



/* ===== FUN_0002837c @ 0002837c size=50 ===== */

undefined4 FUN_0002837c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  free(*(void **)(param_1 + 0x28));
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x28) = pcVar2;
  iVar1 = DAT_000283b0;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *(undefined1 *)(param_1 + 0x109) = 1;
    FUN_00028044(param_1,iVar1 + 0x283a2,pcVar2,1,param_4);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000283b4 @ 000283b4 size=148 ===== */

undefined4 FUN_000283b4(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *__haystack;
  undefined1 auStack_210 [516];
  
  iVar1 = DAT_00028448;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x109) == '\0') {
    puVar3 = auStack_210;
    *(undefined1 *)((int)param_1 + 0x109) = 1;
    iVar1 = FUN_0002b73c(*param_1,iVar1 + 0x283d2,param_1[2],puVar3,0x200);
    if (iVar1 < 1) {
      __haystack = (char *)param_1[3];
      iVar1 = FUN_00027780(__haystack,DAT_0002844c + 0x28400);
      if (iVar1 == 0) {
        pcVar2 = strstr(__haystack,(char *)(DAT_00028454 + 0x28412));
        if (pcVar2 == (char *)0x0) {
          iVar1 = FUN_00027780(__haystack,DAT_0002845c + 0x28424);
          if (((iVar1 == 0) && (iVar1 = FUN_00027780(__haystack,DAT_00028460 + 0x28430), iVar1 == 0)
              ) && (iVar1 = FUN_00027780(__haystack,DAT_00028464 + 0x2843c), iVar1 == 0))
          goto LAB_000283ec;
          puVar3 = (undefined1 *)((int)&DAT_00028448 + DAT_00028468);
        }
        else {
          puVar3 = (undefined1 *)(DAT_00028458 + 0x2841c);
        }
      }
      else {
        puVar3 = (undefined1 *)(DAT_00028450 + 0x2840a);
      }
    }
    FUN_0002837c(param_1,puVar3);
  }
LAB_000283ec:
  return param_1[10];
}



/* ===== FUN_0002846c @ 0002846c size=176 ===== */

undefined4 FUN_0002846c(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = FUN_000283b4();
    if (iVar1 == 0) {
      return 0;
    }
    uVar6 = FUN_000282ec(param_1);
    uVar2 = gnu_dev_major(uVar6);
    if (uVar2 == 0) {
      iVar1 = FUN_000282d8(param_1);
      if (iVar1 < 1) {
        pcVar3 = strrchr(*(char **)(param_1 + 0xc),0x2f);
        if (pcVar3 == (char *)0x0) {
          return 0;
        }
        uVar5 = FUN_000283b4(param_1);
        iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00028528 + 0x28512),uVar5,pcVar3 + 1
                        );
      }
      else {
        uVar5 = FUN_000282d8(param_1);
        iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00028524 + 0x284ec),uVar5);
      }
    }
    else {
      pcVar3 = (char *)FUN_000283b4(param_1);
      iVar1 = strcmp(pcVar3,(char *)(DAT_0002851c + 0x28496));
      if (iVar1 == 0) {
        uVar5 = 0x62;
      }
      else {
        uVar5 = 99;
      }
      uVar6 = FUN_000282ec(param_1);
      uVar2 = gnu_dev_major(uVar6);
      uVar6 = FUN_000282ec(param_1);
      uVar4 = gnu_dev_minor(uVar6);
      iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00028520 + 0x284c0),uVar5,uVar2,uVar4)
      ;
    }
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ===== FUN_0002852c @ 0002852c size=24 ===== */

undefined4 FUN_0002852c(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028044();
  if (*param_2 != '.') {
    FUN_0002a8e8(uVar1,1);
  }
  return 0;
}



/* ===== FUN_00028544 @ 00028544 size=44 ===== */

void FUN_00028544(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char acStack_28 [28];
  
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe4) = param_4;
  snprintf(acStack_28,0x16,(char *)(DAT_00028570 + 0x2855e),param_4,param_3,param_4);
  FUN_00028044(param_1,DAT_00028574 + 0x2856a,acStack_28);
  return;
}



/* ===== FUN_00028578 @ 00028578 size=36 ===== */

void FUN_00028578(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xe4);
    uVar1 = *(uint *)(param_2 + 0xe0) | uVar2;
    uVar3 = CONCAT44(uVar1,*(uint *)(param_2 + 0xe0));
    if (uVar1 != 0) goto LAB_00028588;
  }
  uVar3 = FUN_00024db0(1);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
LAB_00028588:
  FUN_00028544(param_1,(int)((ulonglong)uVar3 >> 0x20),(int)uVar3,uVar2);
  return;
}



/* ===== FUN_0002859c @ 0002859c size=136 ===== */

uint FUN_0002859c(int param_1,char *param_2)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  free(*(void **)(param_1 + 8));
  pcVar2 = strdup(param_2);
  iVar6 = DAT_00028624 + 0x285b4;
  *(char **)(param_1 + 8) = pcVar2;
  iVar5 = DAT_00028628;
  if (pcVar2 != (char *)0x0) {
    *(char **)(param_1 + 0xc) = pcVar2 + 4;
    FUN_00028044(param_1,iVar5 + 0x285c8);
    pcVar2 = strrchr(*(char **)(param_1 + 8),0x2f);
    if (pcVar2 == (char *)0x0) {
      return 0xffffffea;
    }
    pcVar2 = strdup(pcVar2 + 1);
    *(char **)(param_1 + 0x10) = pcVar2;
    if (pcVar2 != (char *)0x0) {
      iVar5 = 0;
      while( true ) {
        iVar4 = *(int *)(param_1 + 0x10);
        puVar3 = (undefined1 *)(iVar4 + iVar5);
        pcVar2 = (char *)(iVar4 + iVar5);
        if (*pcVar2 == '\0') break;
        iVar5 = iVar5 + 1;
        if (*pcVar2 == '!') {
          *puVar3 = 0x2f;
        }
      }
      iVar6 = **(int **)(iVar6 + DAT_0002862c);
      do {
        if (iVar5 == 0) {
LAB_00028608:
          *(undefined4 *)(param_1 + 0x14) = 0;
          return 0;
        }
        iVar5 = iVar5 + -1;
        uVar1 = *(ushort *)(iVar6 + (uint)*(byte *)(iVar4 + iVar5) * 2);
        if ((uVar1 & 8) == 0) {
          if (iVar5 != 0) {
            return uVar1 & 8;
          }
          goto LAB_00028608;
        }
        *(int *)(param_1 + 0x14) = iVar4 + iVar5;
      } while( true );
    }
  }
  return 0xfffffff4;
}



/* ===== FUN_00028630 @ 00028630 size=260 ===== */

int FUN_00028630(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  stat64 sStack_880;
  char acStack_818 [4];
  undefined1 auStack_814 [1020];
  char acStack_418 [1024];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_00027780(param_2,DAT_00028734 + 0x2865e);
    if (iVar2 == 0) {
      iVar2 = FUN_000230c4();
      if (6 < iVar2) {
        FUN_00022f5c(7,0,DAT_0002873c + 0x2867e,0x30b,DAT_00028740 + 0x28696,DAT_00028738 + 0x28678,
                     param_2);
      }
      piVar1 = __errno_location();
      iVar2 = 0x16;
LAB_00028692:
      *piVar1 = iVar2;
      return 0;
    }
    pcVar3 = strrchr((char *)(param_2 + 4),0x2f);
    if (((pcVar3 != (char *)0x0) && (pcVar3[1] != '\0')) && ((char *)(param_2 + 6) <= pcVar3)) {
      FUN_00024ae4(acStack_818,0x400,param_2);
      FUN_0002b7a0(param_1,acStack_818,0x400);
      iVar2 = FUN_00027780(auStack_814,DAT_00028744 + 0x286d4);
      if (iVar2 == 0) {
        iVar2 = stat64(acStack_818,&sStack_880);
        if (iVar2 != 0) {
          return 0;
        }
        if ((sStack_880.st_mode & 0xf000) != 0x4000) {
          piVar1 = __errno_location();
          iVar2 = 0x15;
          goto LAB_00028692;
        }
      }
      else {
        FUN_00024af4(acStack_418,0x400,acStack_818,DAT_00028748 + 0x286ea,0);
        iVar2 = stat64(acStack_418,&sStack_880);
        if (iVar2 != 0) {
          return 0;
        }
      }
      iVar2 = FUN_000277a2(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_0002859c(iVar2,acStack_818);
      return iVar2;
    }
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 0;
}



/* ===== FUN_0002874c @ 0002874c size=100 ===== */

undefined4 FUN_0002874c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char acStack_410 [1024];
  
  if (param_2 == 0x62) {
    iVar5 = DAT_000287b0 + 0x28772;
  }
  else {
    if (param_2 != 99) {
      piVar1 = __errno_location();
      *piVar1 = 0x16;
      return 0;
    }
    iVar5 = (int)&DAT_000287b0 + DAT_000287b8;
  }
  uVar2 = gnu_dev_major(CONCAT44(param_4,param_3));
  uVar3 = gnu_dev_minor(CONCAT44(param_4,param_3));
  snprintf(acStack_410,0x400,(char *)(DAT_000287b4 + 0x28798),iVar5,uVar2,uVar3);
  uVar4 = FUN_00028630(param_1,acStack_410);
  return uVar4;
}



/* ===== FUN_000287bc @ 000287bc size=438 ===== */

undefined4 FUN_000287bc(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  stat64 sStack_688;
  char acStack_620 [512];
  char acStack_420 [1024];
  
  iVar1 = strcmp(param_2,(char *)(DAT_00028974 + 0x287d0));
  if (iVar1 == 0) {
    FUN_00024af4(acStack_420,0x400,DAT_00028978 + 0x287ec,param_3,0);
    iVar1 = stat64(acStack_420,&sStack_688);
    if (iVar1 == 0) goto LAB_00028968;
    FUN_00024af4(acStack_420,0x400,DAT_0002897c + 0x2880e,param_3,0);
    iVar1 = stat64(acStack_420,&sStack_688);
    if (iVar1 == 0) goto LAB_00028968;
    FUN_00024af4(acStack_420,0x400,DAT_00028980 + 0x28830,param_3,0);
  }
  else {
    iVar1 = strcmp(param_2,(char *)(DAT_00028984 + 0x28854));
    if (iVar1 == 0) {
      FUN_00024af4(acStack_420,0x400,DAT_00028988 + 0x28868,param_3,0);
    }
    else {
      iVar1 = strcmp(param_2,(char *)(DAT_0002898c + 0x2887a));
      if (iVar1 == 0) {
        FUN_00024ae4(acStack_620,0x200,param_3);
        pcVar2 = strchr(acStack_620,0x3a);
        iVar3 = DAT_00028994;
        iVar1 = DAT_00028990;
        if (pcVar2 == (char *)0x0) {
          piVar4 = __errno_location();
          *piVar4 = 0x16;
          return 0;
        }
        *pcVar2 = '\0';
        FUN_00024af4(acStack_420,0x400,iVar3 + 0x288c0,acStack_620,iVar1 + 0x288b8,pcVar2 + 1,0);
        iVar3 = stat64(acStack_420,&sStack_688);
        if (iVar3 == 0) goto LAB_00028968;
        FUN_00024af4(acStack_420,0x400,DAT_00028998 + 0x288e4,acStack_620,iVar1 + 0x288b8,pcVar2 + 1
                     ,0);
      }
      else {
        iVar3 = DAT_0002899c + 0x2890e;
        FUN_00024af4(acStack_420,0x400,DAT_000289a0 + 0x2891a,param_2,iVar3,param_3,0);
        iVar1 = stat64(acStack_420,&sStack_688);
        if (iVar1 == 0) goto LAB_00028968;
        FUN_00024af4(acStack_420,0x400,DAT_000289a4 + 0x2893c,param_2,iVar3,param_3,0);
        iVar1 = stat64(acStack_420,&sStack_688);
        if (iVar1 == 0) goto LAB_00028968;
        FUN_00024af4(acStack_420,0x400,DAT_000289ac + 0x28960,param_2,DAT_000289a8 + 0x28958,param_3
                     ,0);
      }
    }
  }
  iVar1 = stat64(acStack_420,&sStack_688);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00028968:
  uVar5 = FUN_00028630(param_1,acStack_420);
  return uVar5;
}



/* ===== FUN_000289b0 @ 000289b0 size=274 ===== */

int FUN_000289b0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_41d;
  uint local_41c;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  ulong local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  
  bVar1 = *param_2;
  if (bVar1 < 100) {
    if (0x61 < bVar1) {
      iVar7 = sscanf((char *)param_2,(char *)(DAT_00028ac4 + 0x28a0c),&local_41d,&local_41c,
                     &local_418);
      if (iVar7 != 3) {
        return 0;
      }
      uVar8 = gnu_dev_makedev(local_41c,local_418);
      iVar7 = FUN_0002874c(param_1,local_41d,(int)uVar8,(int)(uVar8 >> 0x20));
      return iVar7;
    }
    if (bVar1 == 0x2b) {
      FUN_00024ae4(&local_418,0x400,param_2 + 1);
      pcVar6 = strchr((char *)&local_418,0x3a);
      if (pcVar6 == (char *)0x0) {
        piVar2 = __errno_location();
        *piVar2 = 0x16;
        return 0;
      }
      *pcVar6 = '\0';
      iVar7 = FUN_000287bc(param_1,&local_418,pcVar6 + 1);
      return iVar7;
    }
  }
  else if ((bVar1 == 0x6e) &&
          (uVar3 = strtoul((char *)(param_2 + 1),(char **)0x0,10), 0 < (int)uVar3)) {
    iVar7 = socket(2,2,0);
    if (iVar7 < 0) {
      return 0;
    }
    uStack_414 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_410 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_40c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_418 = 0;
    local_400 = 0;
    local_408 = uVar3;
    uStack_404 = uStack_414;
    uStack_3fc = uStack_414;
    iVar4 = ioctl(iVar7,0x8910,&local_418);
    if (iVar4 != 0) {
      close(iVar7);
      return 0;
    }
    close(iVar7);
    iVar7 = FUN_000287bc(param_1,DAT_00028ac8 + 0x28a64,&local_418);
    if (iVar7 == 0) {
      return 0;
    }
    uVar5 = FUN_000282d8();
    if (uVar5 == uVar3) {
      return iVar7;
    }
    FUN_00027894(iVar7);
    piVar2 = __errno_location();
    iVar7 = 0x13;
    goto LAB_00028a80;
  }
  piVar2 = __errno_location();
  iVar7 = 0x16;
LAB_00028a80:
  *piVar2 = iVar7;
  return 0;
}



/* ===== FUN_00028acc @ 00028acc size=78 ===== */

int FUN_00028acc(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_418 [5];
  char acStack_413 [2];
  char acStack_411 [1021];
  
  FUN_00024ae4(auStack_418,0x400,param_1[2]);
  while ((pcVar1 = strrchr(acStack_413,0x2f), pcVar1 != (char *)0x0 && (acStack_411 <= pcVar1))) {
    *pcVar1 = '\0';
    iVar2 = FUN_00028630(*param_1,auStack_418);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 2;
  return 0;
}



/* ===== FUN_00028b1a @ 00028b1a size=40 ===== */

undefined4 FUN_00028b1a(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x108) == '\0') {
      *(undefined1 *)(param_1 + 0x108) = 1;
      uVar2 = FUN_00028acc();
      *(undefined4 *)(param_1 + 4) = uVar2;
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}



/* ===== FUN_00028b42 @ 00028b42 size=88 ===== */

int FUN_00028b42(int param_1,char *param_2,char *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 == (char *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    while (param_1 = FUN_00028b1a(param_1), param_1 != 0) {
      pcVar2 = (char *)FUN_000283b4(param_1);
      if ((pcVar2 != (char *)0x0) && (iVar3 = strcmp(pcVar2,param_2), iVar3 == 0)) {
        if (param_3 == (char *)0x0) {
          return param_1;
        }
        pcVar2 = (char *)FUN_0002830c(param_1);
        if ((pcVar2 != (char *)0x0) && (iVar3 = strcmp(pcVar2,param_3), iVar3 == 0)) {
          return param_1;
        }
      }
    }
    piVar1 = __errno_location();
    *piVar1 = 2;
  }
  return 0;
}



/* ===== FUN_00028b9a @ 00028b9a size=44 ===== */

undefined4 FUN_00028b9a(int param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  free(*(void **)(param_1 + 0x34));
  pcVar1 = strdup(param_2);
  *(char **)(param_1 + 0x34) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    FUN_00028044(param_1,DAT_00028bc8 + 0x28bba,pcVar1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00028bcc @ 00028bcc size=744 ===== */

void FUN_00028bcc(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char local_418 [1028];
  
  iVar1 = FUN_00027780(param_2,DAT_00028eb4 + 0x28bde);
  if (iVar1 == 0) {
    iVar1 = FUN_00027780(param_2,DAT_00028ebc + 0x28c10);
    if (iVar1 == 0) {
      iVar1 = FUN_00027780(param_2,DAT_00028ec0 + 0x28c28);
      if (iVar1 == 0) {
        iVar1 = FUN_00027780(param_2,DAT_00028ec4 + 0x28c40);
        if (iVar1 == 0) {
          iVar1 = FUN_00027780(param_2,DAT_00028ec8 + 0x28c5a);
          if (iVar1 == 0) {
            iVar1 = FUN_00027780(param_2,DAT_00028ecc + 0x28ca2);
            if (iVar1 == 0) {
              iVar1 = FUN_00027780(param_2,DAT_00028ed0 + 0x28cf2);
              if (iVar1 == 0) {
                iVar1 = FUN_00027780(param_2,DAT_00028ed4 + 0x28d16);
                if (iVar1 == 0) {
                  iVar1 = FUN_00027780(param_2,DAT_00028edc + 0x28d4a);
                  if (iVar1 != 0) {
                    FUN_00028b9a(param_1,param_2 + 7);
                    return;
                  }
                  iVar1 = FUN_00027780(param_2,DAT_00028ee0 + 0x28d60);
                  if (iVar1 != 0) {
                    uVar6 = strtoull((char *)(param_2 + 6),(char **)0x0,10);
                    *(int *)(param_1 + 0x100) = (int)uVar6;
                    return;
                  }
                  iVar1 = FUN_00027780(param_2,DAT_00028ee4 + 0x28d7c);
                  if (iVar1 != 0) {
                    uVar6 = strtoull((char *)(param_2 + 6),(char **)0x0,10);
                    *(int *)(param_1 + 0x104) = (int)uVar6;
                    return;
                  }
                  iVar1 = FUN_00027780(param_2,DAT_00028ee8 + 0x28d98);
                  if (iVar1 == 0) {
                    iVar1 = FUN_00027780(param_2,DAT_00028ef0 + 0x28dc4);
                    if (iVar1 == 0) {
                      iVar1 = FUN_00027780(param_2,DAT_00028efc + 0x28dfa);
                      if (iVar1 != 0) {
                        uVar6 = strtoull((char *)(param_2 + 8),(char **)0x0,10);
                        FUN_000280a4(param_1,(int)uVar6);
                        return;
                      }
                      iVar1 = FUN_00027780(param_2,DAT_00028f00 + 0x28e1e);
                      if (iVar1 == 0) {
                        iVar1 = FUN_00027780(param_2,DAT_00028f0c + 0x28e50);
                        if (iVar1 == 0) {
                          iVar1 = FUN_00027780(param_2,DAT_00028f18 + 0x28e82);
                          if (iVar1 == 0) {
                            FUN_0002812c(param_1,param_2);
                            return;
                          }
                          pcVar3 = local_418;
                          uVar4 = strtoul((char *)(param_2 + 7),(char **)0x0,10);
                          pcVar2 = (char *)(DAT_00028f1c + 0x28e9a);
                          *(ulong *)(param_1 + 0x24) = uVar4;
                          snprintf(pcVar3,0x20,pcVar2,uVar4);
                          iVar1 = DAT_00028f20 + 0x28eaa;
                        }
                        else {
                          pcVar3 = local_418;
                          uVar4 = strtoul((char *)(param_2 + 7),(char **)0x0,10);
                          pcVar2 = (char *)(DAT_00028f10 + 0x28e6a);
                          *(ulong *)(param_1 + 0x20) = uVar4;
                          snprintf(pcVar3,0x20,pcVar2,uVar4);
                          iVar1 = DAT_00028f14 + 0x28e7a;
                        }
                      }
                      else {
                        pcVar3 = local_418;
                        uVar4 = strtoul((char *)(param_2 + 8),(char **)0x0,8);
                        pcVar2 = (char *)(DAT_00028f04 + 0x28e38);
                        *(ulong *)(param_1 + 0x1c) = uVar4;
                        snprintf(pcVar3,0x20,pcVar2,uVar4);
                        iVar1 = DAT_00028f08 + 0x28e48;
                      }
                    }
                    else {
                      pcVar3 = local_418;
                      uVar6 = strtoull((char *)(param_2 + 7),(char **)0x0,10);
                      pcVar2 = (char *)(DAT_00028ef4 + 0x28ddc);
                      *(ulonglong *)(param_1 + 0xd8) = uVar6;
                      snprintf(pcVar3,0x20,pcVar2);
                      iVar1 = DAT_00028ef8 + 0x28df2;
                    }
                  }
                  else {
                    free(*(void **)(param_1 + 0x38));
                    pcVar3 = strdup((char *)(param_2 + 0xc));
                    *(char **)(param_1 + 0x38) = pcVar3;
                    if (pcVar3 == (char *)0x0) {
                      return;
                    }
                    iVar1 = DAT_00028eec + 0x28dbc;
                  }
                }
                else {
                  free(*(void **)(param_1 + 0x30));
                  pcVar3 = strdup((char *)(param_2 + 7));
                  *(char **)(param_1 + 0x30) = pcVar3;
                  iVar1 = DAT_00028ed8;
                  if (pcVar3 == (char *)0x0) {
                    return;
                  }
                  *(undefined1 *)(param_1 + 0x10e) = 1;
                  iVar1 = iVar1 + 0x28d3c;
                }
                FUN_00028044(param_1,iVar1,pcVar3);
              }
              else {
                uVar6 = strtoull((char *)(param_2 + 0x13),(char **)0x0,10);
                uVar5 = (undefined4)(uVar6 >> 0x20);
                FUN_00028544(param_1,uVar5,(int)uVar6,uVar5);
              }
            }
            else {
              FUN_00024ae4(local_418,0x400,param_2 + 5);
              pcVar3 = strchr(local_418,0x3a);
              if (pcVar3 != (char *)0x0) {
                while ((pcVar2 = pcVar3 + 1, *pcVar2 != '\0' &&
                       (pcVar3 = strchr(pcVar2,0x3a), pcVar3 != (char *)0x0))) {
                  *pcVar3 = '\0';
                  FUN_00027c6c(param_1,pcVar2);
                }
              }
            }
          }
          else {
            FUN_00024ae4(local_418,0x400,param_2 + 9);
            pcVar3 = local_418;
            while (pcVar2 = strchr(pcVar3,0x20), pcVar2 != (char *)0x0) {
              *pcVar2 = '\0';
              FUN_00027c4a(param_1,pcVar3);
              pcVar3 = pcVar2 + 1;
            }
            if (*pcVar3 != '\0') {
              FUN_00027c4a(param_1,pcVar3);
            }
          }
        }
        else {
          FUN_000280d8(param_1,param_2 + 8);
        }
      }
      else {
        FUN_0002806e(param_1,param_2 + 8);
      }
    }
    else {
      FUN_0002837c(param_1,param_2 + 10);
    }
  }
  else {
    FUN_00024af4(local_418,0x400,DAT_00028eb8 + 0x28bf6,param_2 + 8,0);
    FUN_0002859c(param_1,local_418);
  }
  return;
}



/* ===== FUN_00028f24 @ 00028f24 size=94 ===== */

undefined4 FUN_00028f24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char *__format;
  char acStack_38 [32];
  
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = param_4;
  uVar1 = gnu_dev_major(CONCAT44(param_4,param_3));
  __format = (char *)(DAT_00028f84 + 0x28f46);
  snprintf(acStack_38,0x20,__format,uVar1);
  FUN_00028044(param_1,DAT_00028f88 + 0x28f58,acStack_38);
  uVar1 = gnu_dev_minor(CONCAT44(param_4,param_3));
  snprintf(acStack_38,0x20,__format,uVar1);
  FUN_00028044(param_1,DAT_00028f8c + 0x28f78,acStack_38);
  return 0;
}



/* ===== FUN_00028f90 @ 00028f90 size=60 ===== */

undefined4 FUN_00028f90(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (0 < (int)*(uint *)(param_1 + 0x100)) {
    uVar2 = gnu_dev_makedev(*(uint *)(param_1 + 0x100),*(uint *)(param_1 + 0x104));
    uVar1 = (undefined4)(uVar2 >> 0x20);
    FUN_00028f24(param_1,uVar1,(int)uVar2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00029048 @ 00029048 size=30 ===== */

undefined4 FUN_00029048(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_00027f20();
    FUN_0002a8b2(uVar1,param_2);
    uVar1 = FUN_0002a8d6();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_00029066 @ 00029066 size=206 ===== */

undefined4 FUN_00029066(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_2c [2];
  
  free(*(void **)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_2c[0] = malloc(0x1000);
  *(void **)(param_1 + 0x44) = local_2c[0];
  if (local_2c[0] == (void *)0x0) {
LAB_00029086:
    uVar1 = 0xfffffff4;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      pvVar3 = malloc(0x200);
      *(void **)(param_1 + 0x40) = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00029086;
    }
    iVar2 = FUN_00027f20(param_1);
    iVar7 = DAT_00029134 + 0x290aa;
    iVar6 = 0x1000;
    iVar5 = 0;
    while (iVar2 != 0) {
      pcVar4 = (char *)FUN_0002a8d0(iVar2);
      iVar8 = iVar5;
      if (*pcVar4 != '.') {
        iVar8 = iVar5 + 1;
        *(void **)(*(int *)(param_1 + 0x40) + iVar5 * 4) = local_2c[0];
        if (0x7f < iVar5 + 2U) {
          return 0xffffffea;
        }
        uVar1 = FUN_0002a8d6(iVar2);
        iVar6 = FUN_00024ab8(local_2c,iVar6,pcVar4,iVar7,uVar1,0);
        if (iVar6 == 0) {
          return 0xffffffea;
        }
        iVar6 = iVar6 + -1;
        local_2c[0] = (void *)((int)local_2c[0] + 1);
      }
      iVar2 = FUN_0002a868(iVar2);
      iVar5 = iVar8;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar5 * 4) = 0;
    *(int *)(param_1 + 0x48) = (int)local_2c[0] - *(int *)(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x10c) = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00029138 @ 00029138 size=26 ===== */

undefined4 FUN_00029138(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x10c) == '\0') && (iVar2 = FUN_00029066(), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  return uVar1;
}



/* ===== FUN_00029152 @ 00029152 size=34 ===== */

undefined4 FUN_00029152(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x10c) == '\0') && (iVar2 = FUN_00029066(), iVar2 != 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    *param_2 = *(undefined4 *)(param_1 + 0x44);
  }
  return uVar1;
}



/* ===== FUN_00029174 @ 00029174 size=38 ===== */

undefined4 FUN_00029174(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027e88();
    }
    uVar1 = FUN_00027f02(param_1);
    iVar2 = FUN_0002a8b2(uVar1,param_2);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== FUN_0002919a @ 0002919a size=20 ===== */

undefined4 FUN_0002919a(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027e88();
  }
  return *(undefined4 *)(param_1 + 0xe8);
}



/* ===== FUN_000291ae @ 000291ae size=20 ===== */

undefined4 FUN_000291ae(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027e88();
  }
  return *(undefined4 *)(param_1 + 0xfc);
}



/* ===== FUN_000291c2 @ 000291c2 size=6 ===== */

undefined1 FUN_000291c2(int param_1)

{
  return *(undefined1 *)(param_1 + 0x114);
}



/* ===== FUN_000291c8 @ 000291c8 size=8 ===== */

void FUN_000291c8(int param_1)

{
  *(undefined1 *)(param_1 + 0x114) = 1;
  return;
}



/* ===== FUN_000291d0 @ 000291d0 size=204 ===== */

int FUN_000291d0(int param_1,int param_2)

{
  void *__ptr;
  size_t sVar1;
  char *__dest;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  char acStack_38 [4];
  void *local_34;
  int local_30;
  int iStack_2c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    __ptr = (void *)0x0;
    iVar2 = -0x16;
  }
  else {
    __ptr = (void *)FUN_00025cf6(*(undefined4 *)(param_1 + 8));
    if (__ptr == (void *)0x0) {
      iVar2 = -0xc;
    }
    else {
      iVar3 = 0;
      local_34 = __ptr;
      iVar2 = 0;
      local_30 = DAT_0002929c + 0x29204;
      iStack_2c = param_2;
      ppvVar4 = &local_34;
      do {
        if (*ppvVar4 == (char *)0x0) break;
        sVar1 = strlen(*ppvVar4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + sVar1;
        ppvVar4 = ppvVar4 + 1;
      } while (iVar3 != 3);
      iVar2 = -(iVar2 + 8U & 0xfffffff8);
      __dest = acStack_38 + iVar2;
      iVar3 = 0;
      ppvVar4 = &local_34;
      do {
        if (*ppvVar4 == (char *)0x0) break;
        iVar3 = iVar3 + 1;
        __dest = stpcpy(__dest,*ppvVar4);
        ppvVar4 = ppvVar4 + 1;
      } while (iVar3 != 3);
      *__dest = '\0';
      iVar2 = FUN_0002859c(param_1,acStack_38 + iVar2);
      if (-1 < iVar2) {
        iVar3 = DAT_000292a0 + 0x29258;
        iVar2 = FUN_00029048(param_1,iVar3);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          FUN_00028044(param_1,DAT_000292a4 + 0x29268,iVar2);
          FUN_00028044(param_1,iVar3,param_2);
          iVar2 = 0;
        }
      }
    }
  }
  free(__ptr);
  return iVar2;
}



/* ===== FUN_0002930e @ 0002930e size=140 ===== */

int FUN_0002930e(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *__s;
  
  if ((param_2 != 0) && (0 < param_3)) {
    iVar2 = FUN_000277a2();
    if (iVar2 == 0) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      return 0;
    }
    FUN_00027878();
    iVar4 = 0;
    do {
      __s = (char *)(param_2 + iVar4);
      sVar3 = strlen(__s);
      if (sVar3 == 0) break;
      iVar4 = iVar4 + 1 + sVar3;
      FUN_00028bcc(iVar2,__s);
    } while (iVar4 < param_3);
    iVar4 = FUN_00028f90(iVar2);
    if (-1 < iVar4) {
      return iVar2;
    }
    iVar4 = FUN_000230c4();
    if (6 < iVar4) {
      FUN_00022f5c(7,0,DAT_000293a0 + 0x29386,0x7fe,DAT_000293a4 + 0x293da,DAT_0002939c + 0x29380);
    }
    FUN_00027894(iVar2);
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 0;
}



/* ===== FUN_000293a8 @ 000293a8 size=82 ===== */

int FUN_000293a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = FUN_00028630();
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_000282cc();
    if (iVar3 < 0) {
      FUN_00027894(iVar2);
      piVar1 = __errno_location();
      *piVar1 = -iVar3;
    }
    else {
      iVar3 = FUN_00028b9a(iVar2,param_3);
      if (-1 < iVar3) {
        return iVar2;
      }
      FUN_00027894(iVar2);
      piVar1 = __errno_location();
      *piVar1 = -iVar3;
    }
  }
  return 0;
}



/* ===== FUN_00029452 @ 00029452 size=110 ===== */

undefined4 FUN_00029452(int param_1,char *param_2)

{
  void *pvVar1;
  char *__s;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0xf4);
  if (uVar3 <= *(uint *)(param_1 + 0xf0)) {
    uVar5 = uVar3;
    if (uVar3 < 0x400) {
      uVar5 = 0x400;
    }
    pvVar1 = realloc(*(void **)(param_1 + 0xec),(uVar3 + uVar5) * 8);
    if (pvVar1 == (void *)0x0) {
      return 0xfffffff4;
    }
    *(void **)(param_1 + 0xec) = pvVar1;
    *(uint *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + uVar5;
  }
  __s = strdup(param_2);
  if (__s == (char *)0x0) {
    return 0xfffffff4;
  }
  iVar4 = *(int *)(param_1 + 0xec);
  iVar6 = *(int *)(param_1 + 0xf0);
  *(char **)(iVar4 + iVar6 * 8) = __s;
  sVar2 = strlen(__s);
  *(size_t *)(iVar4 + iVar6 * 8 + 4) = sVar2;
  *(int *)(param_1 + 0xf0) = iVar6 + 1;
  *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xfe;
  return 0;
}



/* ===== FUN_000294c0 @ 000294c0 size=56 ===== */

undefined4 FUN_000294c0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__pattern;
  int iVar3;
  
  iVar1 = FUN_0002a854(param_1 + 0x78);
  if (iVar1 == 0) {
LAB_000294d0:
    uVar2 = 1;
  }
  else {
    for (iVar1 = FUN_0002a854(param_1 + 0x78); uVar2 = 0, iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      __pattern = (char *)FUN_0002a8d0();
      iVar3 = fnmatch(__pattern,param_2,0);
      if (iVar3 == 0) goto LAB_000294d0;
    }
  }
  return uVar2;
}



/* ===== FUN_000294f8 @ 000294f8 size=132 ===== */

undefined4 FUN_000294f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__pattern;
  char *__pattern_00;
  int iVar3;
  char *__name;
  char *__name_00;
  int iVar4;
  
  iVar1 = FUN_0002a854(param_1 + 0x94);
  if (iVar1 == 0) {
LAB_0002950a:
    uVar2 = 1;
  }
  else {
    for (iVar1 = FUN_0002a854(param_1 + 0x94); uVar2 = 0, iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      __pattern = (char *)FUN_0002a8d0();
      __pattern_00 = (char *)FUN_0002a8d6(iVar1);
      for (iVar3 = FUN_00027f20(param_2); iVar3 != 0; iVar3 = FUN_0002a868(iVar3)) {
        __name = (char *)FUN_0002a8d0(iVar3);
        __name_00 = (char *)FUN_0002a8d6(iVar3);
        iVar4 = fnmatch(__pattern,__name,0);
        if (iVar4 == 0) {
          if (__pattern_00 != (char *)0x0) {
            if (__name_00 == (char *)0x0) goto LAB_0002955a;
            __name_00 = (char *)fnmatch(__pattern_00,__name_00,0);
          }
          if (__name_00 == (char *)0x0) goto LAB_0002950a;
        }
LAB_0002955a:
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0002957c @ 0002957c size=34 ===== */

bool FUN_0002957c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  char *__name;
  int iVar2;
  
  __name = (char *)FUN_00027a0c();
  bVar1 = false;
  if (__name != (char *)0x0) {
    if (param_3 == (char *)0x0) {
      bVar1 = true;
    }
    else {
      iVar2 = fnmatch(param_3,__name,0);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}



/* ===== FUN_0002959e @ 0002959e size=100 ===== */

undefined4 FUN_0002959e(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 != (char *)0x0) {
    for (iVar1 = FUN_0002a854(param_1 + 0x5c); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      pcVar2 = (char *)FUN_0002a8d0(iVar1);
      iVar3 = fnmatch(pcVar2,param_2,0);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_0002a854(param_1 + 0x40);
    if (iVar1 == 0) {
      return 1;
    }
    for (iVar1 = FUN_0002a854(param_1 + 0x40); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      pcVar2 = (char *)FUN_0002a8d0(iVar1);
      iVar3 = fnmatch(pcVar2,param_2,0);
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00029602 @ 00029602 size=116 ===== */

undefined4 FUN_00029602(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  for (iVar1 = FUN_0002a854(param_1 + 0x24); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
    uVar2 = FUN_0002a8d0(iVar1);
    uVar3 = FUN_0002a8d6(iVar1);
    iVar4 = FUN_0002957c(param_2,uVar2,uVar3);
    if (iVar4 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_0002a854(param_1 + 8);
  if (iVar1 != 0) {
    for (iVar1 = FUN_0002a854(param_1 + 8); iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
      uVar2 = FUN_0002a8d0(iVar1);
      uVar3 = FUN_0002a8d6(iVar1);
      iVar4 = FUN_0002957c(param_2,uVar2,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ===== FUN_00029676 @ 00029676 size=106 ===== */

undefined4 FUN_00029676(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00028630(*param_1);
  if (iVar1 == 0) {
    return 0xffffffed;
  }
  uVar2 = FUN_000283b4();
  iVar3 = FUN_0002959e(param_1,uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_000279e8(iVar1);
    iVar3 = FUN_000294c0(param_1,uVar2);
    if (((iVar3 != 0) && (iVar3 = FUN_000294f8(param_1,iVar1), iVar3 != 0)) &&
       (iVar3 = FUN_00029602(param_1,iVar1), iVar3 != 0)) {
      uVar2 = FUN_0002792c(iVar1);
      FUN_00029452(param_1,uVar2);
      uVar2 = 1;
      goto LAB_00029694;
    }
  }
  uVar2 = 0;
LAB_00029694:
  FUN_00027894(iVar1);
  return uVar2;
}



/* ===== FUN_000296e0 @ 000296e0 size=136 ===== */

int FUN_000296e0(undefined4 param_1,char *param_2,int param_3)

{
  DIR *__dirp;
  int *piVar1;
  dirent64 *pdVar2;
  int iVar3;
  char *__fmt;
  undefined4 uVar4;
  char *local_2c;
  int iStack_28;
  
  uVar4 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  __dirp = opendir(param_2);
  if (__dirp == (DIR *)0x0) {
    piVar1 = __errno_location();
    iVar3 = -*piVar1;
  }
  else {
    pdVar2 = readdir64(__dirp);
    __fmt = (char *)(DAT_00029768 + 0x29716);
    while (pdVar2 != (dirent64 *)0x0) {
      if (((pdVar2->d_name[0] != '.') && (pdVar2->d_type == '\x04')) &&
         (iVar3 = asprintf(&local_2c,__fmt,param_2,pdVar2->d_name,uVar4), -1 < iVar3)) {
        FUN_00029676(param_1,local_2c);
        if (param_3 != 0) {
          FUN_000296e0(param_1,local_2c,param_3 + -1);
        }
        free(local_2c);
      }
      pdVar2 = readdir64(__dirp);
    }
    closedir(__dirp);
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_0002976c @ 0002976c size=52 ===== */

bool FUN_0002976c(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *__s;
  size_t __n;
  int iVar2;
  
  pcVar1 = (char *)FUN_00027926(param_2);
  __s = (char *)FUN_00027926(*param_1);
  __n = strlen(__s);
  iVar2 = strncmp(pcVar1,__s,__n);
  if (iVar2 == 0) {
    pcVar1 = pcVar1 + __n;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1 != (char *)0x0;
}



/* ===== FUN_000297a0 @ 000297a0 size=354 ===== */

undefined4 FUN_000297a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  DIR *__dirp;
  dirent64 *pdVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong __dev;
  char *local_82c;
  char acStack_828 [1024];
  undefined1 auStack_428 [1028];
  
  local_82c = acStack_828;
  uVar1 = FUN_00024ab8(&local_82c,0x400,DAT_00029904 + 0x297c4,param_2,0);
  if (param_3 != 0) {
    uVar1 = FUN_00024ab8(&local_82c,uVar1,DAT_00029908 + 0x297e2,param_3,0);
  }
  if (param_4 != 0) {
    FUN_00024ab8(&local_82c,uVar1,DAT_0002990c + 0x297f4,param_4,0);
  }
  __dirp = opendir(acStack_828);
  if (__dirp == (DIR *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    pdVar2 = readdir64(__dirp);
    iVar7 = DAT_00029910 + 0x29818;
    while (pdVar2 != (dirent64 *)0x0) {
      if (pdVar2->d_name[0] != '.') {
        iVar3 = FUN_000294c0(param_1,pdVar2->d_name);
        if (iVar3 != 0) {
          FUN_00024af4(auStack_428,0x400,acStack_828,iVar7,pdVar2->d_name,0);
          iVar3 = FUN_00028630(*param_1,auStack_428);
          if (iVar3 != 0) {
            if ((*(char *)((int)param_1 + 0xf9) == '\0') || (iVar4 = FUN_00027eee(), iVar4 != 0)) {
LAB_00029862:
              if ((param_1[0x33] == 0) || (iVar4 = FUN_0002976c(param_1 + 0x33,iVar3), iVar4 != 0))
              {
                iVar4 = FUN_0002a854(param_1 + 0x2c);
                if (iVar4 != 0) {
                  for (iVar4 = FUN_0002a854(param_1 + 0x2c); iVar4 != 0; iVar4 = FUN_0002a868(iVar4)
                      ) {
                    uVar1 = FUN_0002a8d0(iVar4);
                    iVar6 = FUN_00029174(iVar3,uVar1);
                    if (iVar6 == 0) goto LAB_000298b6;
                  }
                }
                iVar4 = FUN_000294f8(param_1,iVar3);
                if ((iVar4 != 0) && (iVar4 = FUN_00029602(param_1,iVar3), iVar4 != 0)) {
                  uVar1 = FUN_0002792c(iVar3);
                  FUN_00029452(param_1,uVar1);
                }
              }
            }
            else {
              __dev = FUN_000282ec(iVar3);
              uVar5 = gnu_dev_major(__dev);
              if ((uVar5 == 0) && (iVar4 = FUN_000282d8(iVar3), iVar4 < 1)) goto LAB_00029862;
            }
LAB_000298b6:
            FUN_00027894(iVar3);
          }
        }
      }
      pdVar2 = readdir64(__dirp);
    }
    closedir(__dirp);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00029914 @ 00029914 size=124 ===== */

undefined4 FUN_00029914(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char acStack_420 [1028];
  
  FUN_00024af4(acStack_420,0x400,DAT_00029990 + 0x2992c,param_2,0);
  __dirp = opendir(acStack_420);
  if (__dirp == (DIR *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    while (pdVar1 = readdir64(__dirp), pdVar1 != (dirent64 *)0x0) {
      if (pdVar1->d_name[0] != '.') {
        pcVar4 = param_4;
        if (param_4 == (char *)0x0) {
          pcVar4 = pdVar1->d_name;
        }
        iVar2 = FUN_0002959e(param_1,pcVar4);
        if (iVar2 != 0) {
          FUN_000297a0(param_1,param_2,pdVar1->d_name,param_3);
        }
      }
    }
    closedir(__dirp);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00029994 @ 00029994 size=210 ===== */

void FUN_00029994(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  DIR *__dirp;
  dirent64 *pdVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_420 [1028];
  
  iVar1 = FUN_0002a854(param_1 + 0x2c);
  iVar6 = DAT_00029a68 + 0x299b0;
  for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
    uVar2 = FUN_0002a8d0(iVar1);
    FUN_00024af4(acStack_420,0x400,iVar6,uVar2,0);
    __dirp = opendir(acStack_420);
    if (__dirp != (DIR *)0x0) {
      while (pdVar3 = readdir64(__dirp), pdVar3 != (dirent64 *)0x0) {
        if ((pdVar3->d_name[0] != '.') &&
           (iVar4 = FUN_000289b0(*param_1,pdVar3->d_name), iVar4 != 0)) {
          uVar2 = FUN_000283b4();
          iVar5 = FUN_0002959e(param_1,uVar2);
          if (iVar5 != 0) {
            uVar2 = FUN_000279e8(iVar4);
            iVar5 = FUN_000294c0(param_1,uVar2);
            if (((iVar5 != 0) &&
                (((param_1[0x33] == 0 || (iVar5 = FUN_0002976c(param_1 + 0x33,iVar4), iVar5 != 0))
                 && (iVar5 = FUN_000294f8(param_1,iVar4), iVar5 != 0)))) &&
               (iVar5 = FUN_00029602(param_1,iVar4), iVar5 != 0)) {
              uVar2 = FUN_0002792c(iVar4);
              FUN_00029452(param_1,uVar2);
            }
          }
          FUN_00027894(iVar4);
        }
      }
      closedir(__dirp);
    }
  }
  return;
}



/* ===== FUN_00029a6c @ 00029a6c size=128 ===== */

int * FUN_00029a6c(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,0xfc);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = 1;
      *piVar1 = param_1;
      FUN_0002a6d2(param_1,piVar1 + 2,0);
      FUN_0002a6d2(param_1,piVar1 + 9,0);
      FUN_0002a6d2(param_1,piVar1 + 0x10,1);
      FUN_0002a6d2(param_1,piVar1 + 0x17,1);
      FUN_0002a6d2(param_1,piVar1 + 0x1e,1);
      FUN_0002a6d2(param_1,piVar1 + 0x25,0);
      FUN_0002a6d2(param_1,piVar1 + 0x2c,1);
      FUN_0002a6d2(param_1,piVar1 + 0x34,0);
    }
  }
  return piVar1;
}



/* ===== FUN_00029af6 @ 00029af6 size=122 ===== */

undefined4 FUN_00029af6(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4) + -1;
    *(int *)((int)param_1 + 4) = iVar1;
    if (iVar1 < 1) {
      FUN_0002a87e((int)param_1 + 8);
      FUN_0002a87e((int)param_1 + 0x24);
      FUN_0002a87e((int)param_1 + 0x40);
      FUN_0002a87e((int)param_1 + 0x5c);
      FUN_0002a87e((int)param_1 + 0x78);
      FUN_0002a87e((int)param_1 + 0x94);
      FUN_0002a87e((int)param_1 + 0xb0);
      FUN_00027894(*(undefined4 *)((int)param_1 + 0xcc));
      FUN_0002a87e((int)param_1 + 0xd0);
      for (uVar2 = 0; uVar2 < *(uint *)((int)param_1 + 0xf0); uVar2 = uVar2 + 1) {
        free(*(void **)((int)*(void **)((int)param_1 + 0xec) + uVar2 * 8));
      }
      free(*(void **)((int)param_1 + 0xec));
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_00029b76 @ 00029b76 size=458 ===== */

void FUN_00029b76(int param_1)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  char *__needle;
  char *__reject;
  char *__s2;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *__s1;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if (param_1 == 0) {
    return;
  }
  iVar10 = param_1 + 0xd0;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xf8) << 0x1f)) {
    FUN_0002a87e(iVar10);
    if (1 < *(size_t *)(param_1 + 0xf0)) {
      if (*(void **)(param_1 + 0xec) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00022f76(DAT_00029d48 + 0x29bb6,DAT_00029d44 + 0x29bb4,0x188,DAT_00029d40 + 0x29bb2);
      }
      qsort(*(void **)(param_1 + 0xec),*(size_t *)(param_1 + 0xf0),8,
            (__compar_fn_t)(DAT_00029d4c + 0x29bc0));
    }
    uVar3 = *(uint *)(param_1 + 0xf0);
    pcVar5 = (char *)0x0;
    puVar12 = (undefined4 *)0x0;
    __needle = (char *)(DAT_00029d50 + 0x29bd8);
    __reject = (char *)(DAT_00029d54 + 0x29bde);
    __s2 = (char *)(DAT_00029d58 + 0x29be4);
    uVar7 = 0xffffffff;
    for (uVar9 = 0; uVar9 != uVar3; uVar9 = uVar9 + 1) {
      iVar8 = *(int *)(param_1 + 0xec);
      puVar11 = (undefined4 *)(iVar8 + uVar9 * 8);
      __s1 = *(char **)(iVar8 + uVar9 * 8);
      uVar6 = uVar7;
      if (((puVar12 == (undefined4 *)0x0) || (puVar11[1] != puVar12[1])) ||
         (iVar2 = memcmp(__s1,(void *)*puVar12,puVar11[1]), iVar2 != 0)) {
        puVar12 = (undefined4 *)(DAT_00029d5c + 0x29c5a);
        do {
          if ((char *)*puVar12 == (char *)0x0) {
            puVar12 = puVar11;
            if (uVar7 == 0xffffffff) {
              pcVar5 = strstr(__s1,__needle);
              if (pcVar5 == (char *)0x0) {
LAB_00029d1a:
                pcVar5 = (char *)0x0;
              }
              else {
                sVar1 = strcspn(pcVar5 + 0xb,__reject);
                pcVar5 = pcVar5 + 0xb + sVar1;
                iVar2 = strncmp(pcVar5,__s2,9);
                if (iVar2 == 0) {
                  if (pcVar5 == (char *)0xfffffff7) goto LAB_00029d1a;
                  pcVar5 = pcVar5 + (1 - (int)__s1);
                  uVar6 = uVar9;
                  if (pcVar5 != (char *)0x0) goto LAB_00029c9e;
                }
                else {
                  pcVar5 = (char *)0x0;
                }
              }
            }
            else if (-1 < (int)uVar7) {
              pcVar4 = *(char **)(iVar8 + uVar7 * 8);
              iVar2 = strncmp(__s1,pcVar4,(size_t)pcVar5);
              if (iVar2 != 0) {
                uVar7 = 0xffffffff;
                FUN_0002a6f4(iVar10,pcVar4,0);
              }
            }
            FUN_0002a6f4(iVar10,*(undefined4 *)(iVar8 + uVar9 * 8),0);
            uVar6 = uVar7;
            goto LAB_00029c9e;
          }
          pcVar4 = strstr(__s1 + 4,(char *)*puVar12);
          puVar12 = puVar12 + 1;
        } while (pcVar4 == (char *)0x0);
        FUN_00029452(param_1,__s1);
        puVar12 = (undefined4 *)(uVar9 * 8 + *(int *)(param_1 + 0xec));
      }
LAB_00029c9e:
      uVar7 = uVar6;
    }
    uVar9 = uVar3;
    if (-1 < (int)uVar7) {
      FUN_0002a6f4(iVar10,*(undefined4 *)(*(int *)(param_1 + 0xec) + uVar7 * 8),0);
    }
    for (; uVar9 < *(uint *)(param_1 + 0xf0); uVar9 = uVar9 + 1) {
      iVar8 = *(int *)(param_1 + 0xec);
      FUN_0002a6f4(iVar10,*(undefined4 *)(iVar8 + uVar9 * 8),0);
      free(*(void **)(iVar8 + uVar9 * 8));
    }
    *(uint *)(param_1 + 0xf0) = uVar3;
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) | 1;
  }
  FUN_0002a854(iVar10);
  return;
}



/* ===== FUN_00029eba @ 00029eba size=126 ===== */

undefined4 FUN_00029eba(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  stat64 sStack_78;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0002a854(param_1 + 0xb0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        iVar1 = stat64((char *)(DAT_00029f38 + 0x29f00),&sStack_78);
        if (iVar1 == 0) {
          iVar1 = DAT_00029f3c + 0x29f0e;
          iVar3 = DAT_00029f40 + 0x29f10;
        }
        else {
          FUN_00029914(param_1,DAT_00029f48 + 0x29f26,DAT_00029f44 + 0x29f24,0);
          iVar3 = DAT_00029f4c + 0x29f32;
          iVar1 = 0;
        }
        FUN_00029914(param_1,iVar3,iVar1,0);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0002792c(*(int *)(param_1 + 0xcc));
        FUN_00029676(param_1,uVar2);
        uVar2 = FUN_000296e0(param_1,uVar2,0x100);
      }
    }
    else {
      uVar2 = FUN_00029994(param_1);
    }
  }
  return uVar2;
}



/* ===== FUN_00029f50 @ 00029f50 size=116 ===== */

undefined4 FUN_00029f50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  stat64 sStack_78;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = DAT_00029fc4 + 0x29f5e;
    iVar1 = FUN_0002959e(param_1,iVar3);
    if (iVar1 != 0) {
      FUN_000297a0(param_1,iVar3,0);
    }
    iVar1 = stat64((char *)(DAT_00029fc8 + 0x29f78),&sStack_78);
    if (iVar1 == 0) {
      iVar1 = DAT_00029fd8 + 0x29fbe;
    }
    else {
      iVar1 = DAT_00029fcc + 0x29f82;
    }
    iVar3 = FUN_0002959e(param_1,DAT_00029fd0 + 0x29f88);
    if (iVar3 != 0) {
      FUN_000297a0(param_1,iVar1,0);
    }
    iVar4 = DAT_00029fd4 + 0x29fa0;
    iVar3 = FUN_0002959e(param_1,iVar4);
    uVar2 = 0;
    if (iVar3 != 0) {
      FUN_00029914(param_1,iVar1,iVar4,iVar4);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00029fe4 @ 00029fe4 size=44 ===== */

int FUN_00029fe4(int param_1,int param_2,undefined1 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined1 local_18 [16];
  
  local_18[0] = param_3;
  pvVar1 = bsearch(local_18,(void *)(param_2 + *(int *)(*(int *)(param_1 + 0x78) + 0x20)),
                   (uint)*(byte *)(param_2 + 8),*(size_t *)(*(int *)(param_1 + 0x78) + 0x28),
                   (__compar_fn_t)(DAT_0002a010 + 0x29ffa));
  iVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x78) + *(int *)((int)pvVar1 + 8);
  }
  return iVar2;
}



/* ===== FUN_0002a014 @ 0002a014 size=20 ===== */

void FUN_0002a014(void)

{
  undefined4 in_r3;
  
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(DAT_0002a030 + 0x2a026,DAT_0002a02c + 0x2a024,0x5f,DAT_0002a028 + 0x2a022,in_r3);
}



/* ===== FUN_0002a034 @ 0002a034 size=20 ===== */

void FUN_0002a034(int param_1)

{
  int iVar1;
  int extraout_r3;
  
  iVar1 = *(int *)(param_1 + 0x804);
  if (iVar1 == 0) {
    param_1 = FUN_0002a014();
    iVar1 = extraout_r3;
  }
  *(int *)(param_1 + 0x804) = iVar1 + -1;
  return;
}



/* ===== FUN_0002a048 @ 0002a048 size=304 ===== */

int FUN_0002a048(int param_1,int *param_2,int param_3,char *param_4,char *param_5)

{
  size_t __n;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  int *piVar12;
  
  pcVar8 = (char *)(*param_2 + param_3 + *(int *)(param_1 + 0x78));
  piVar12 = param_2;
  __n = strlen(pcVar8);
  if (__n + *(int *)(param_4 + 0x804) < 0x800) {
    memcpy(param_4 + *(int *)(param_4 + 0x804),pcVar8,__n);
    *(size_t *)(param_4 + 0x804) = *(int *)(param_4 + 0x804) + __n;
  }
  uVar9 = 0;
  do {
    iVar6 = *(int *)(param_4 + 0x804);
    if (uVar9 < *(byte *)(param_2 + 2)) {
      iVar5 = *(int *)(param_1 + 0x78);
      uVar1 = iVar6 + 1;
      uVar3 = *(int *)(iVar5 + 0x20) + uVar9 * 0x10;
      uVar4 = uVar3;
      if (uVar1 < 0x800) {
        uVar4 = (uint)*(byte *)((int)param_2 + uVar3);
        *(uint *)(param_4 + 0x804) = uVar1;
      }
      if (uVar1 < 0x800) {
        param_4[iVar6] = (char)uVar4;
      }
      iVar6 = FUN_0002a048(param_1,iVar5 + *(int *)((int)param_2 + uVar3 + 8),0,param_4,param_5,
                           piVar12,param_3);
      if (iVar6 < 0) {
        return iVar6;
      }
      iVar6 = *(int *)(param_4 + 0x804);
      if (iVar6 == 0) goto LAB_0002a0f0;
    }
    else {
      if (param_2[4] != 0 || param_2[5] != 0) {
        pcVar8 = (char *)0x0;
        if (iVar6 + 1U < 0x800) {
          param_4[iVar6] = '\0';
          pcVar8 = param_4;
        }
        iVar6 = fnmatch(pcVar8,param_5,0);
        if (iVar6 == 0) {
          iVar6 = 0;
          while( true ) {
            uVar11 = VectorShiftRight(CONCAT44(iVar6,iVar6),0x20);
            uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
            param_5 = (char *)uVar11;
            bVar10 = (uint)param_2[5] <= uVar9;
            if (uVar9 == param_2[5]) {
              bVar10 = (char *)param_2[4] <= param_5;
            }
            if (bVar10) break;
            iVar7 = *(int *)(param_1 + 0x78);
            piVar2 = (int *)(*(int *)(iVar7 + 0x28) * (uint)*(byte *)(param_2 + 2) +
                             *(int *)(iVar7 + 0x20) + iVar6 * 0x10 + (int)param_2);
            iVar5 = *piVar2;
            if ((*(char *)(iVar7 + iVar5) == ' ') &&
               (iVar5 = FUN_0002a6f4(param_1 + 0x7c,iVar7 + iVar5 + 1,piVar2[2] + iVar7), iVar5 == 0
               )) {
              return -0xc;
            }
            iVar6 = iVar6 + 1;
          }
        }
      }
      if (__n <= *(uint *)(param_4 + 0x804)) {
        *(uint *)(param_4 + 0x804) = *(uint *)(param_4 + 0x804) - __n;
        return 0;
      }
LAB_0002a0f0:
      FUN_0002a014();
      iVar6 = extraout_r3;
    }
    uVar9 = uVar9 + 1;
    *(int *)(param_4 + 0x804) = iVar6 + -1;
  } while( true );
}



/* ===== FUN_0002a178 @ 0002a178 size=422 ===== */

int FUN_0002a178(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auStack_828 [2048];
  undefined4 local_28;
  uint local_24;
  
  iVar12 = 0;
  local_28 = 0;
  local_24 = 0;
  piVar11 = (int *)(*(int *)(param_1 + 0x78) + *(int *)(*(int *)(param_1 + 0x78) + 0x38));
  do {
    if (piVar11 == (int *)0x0) {
      return 0;
    }
    iVar13 = iVar12;
    if (*piVar11 != 0 || piVar11[1] != 0) {
      pcVar6 = (char *)(param_2 + iVar12);
      iVar8 = 0;
      pcVar4 = (char *)(*(int *)(param_1 + 0x78) + *piVar11);
      while( true ) {
        cVar3 = *pcVar4;
        iVar13 = iVar12 + iVar8;
        if (cVar3 == '\0') break;
        if (((cVar3 == '*') || (cVar3 == '?')) || (cVar3 == '[')) {
          iVar12 = FUN_0002a048(param_1,piVar11,iVar8,auStack_828,pcVar6);
          return iVar12;
        }
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        if (cVar2 != cVar3) {
          return 0;
        }
        iVar8 = iVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    iVar12 = FUN_00029fe4(param_1,piVar11,0x2a);
    if (iVar12 != 0) {
      if (local_24 + 1 < 0x800) {
        puVar1 = auStack_828 + local_24;
        local_24 = local_24 + 1;
        *puVar1 = 0x2a;
      }
      iVar12 = FUN_0002a048(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_0002a034(auStack_828);
    }
    iVar12 = FUN_00029fe4(param_1,piVar11,0x3f);
    if (iVar12 != 0) {
      if (local_24 + 1 < 0x800) {
        puVar1 = auStack_828 + local_24;
        local_24 = local_24 + 1;
        *puVar1 = 0x3f;
      }
      iVar12 = FUN_0002a048(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_0002a034(auStack_828);
    }
    iVar12 = FUN_00029fe4(param_1,piVar11,0x5b);
    uVar7 = local_24;
    if (iVar12 != 0) {
      uVar9 = local_24 + 1;
      uVar10 = uVar9;
      if (uVar9 < 0x800) {
        uVar10 = 0x5b;
        local_24 = uVar9;
      }
      if (uVar9 < 0x800) {
        auStack_828[uVar7] = (char)uVar10;
      }
      iVar12 = FUN_0002a048(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_0002a034(auStack_828);
    }
    if (*(char *)(param_2 + iVar13) == '\0') {
      iVar12 = 0;
      while( true ) {
        uVar15 = VectorShiftRight(CONCAT44(iVar12,iVar12),0x20);
        uVar7 = (uint)((ulonglong)uVar15 >> 0x20);
        bVar14 = (uint)piVar11[5] <= uVar7;
        if (uVar7 == piVar11[5]) {
          bVar14 = (uint)piVar11[4] <= (uint)uVar15;
        }
        if (bVar14) break;
        iVar8 = *(int *)(param_1 + 0x78);
        piVar5 = (int *)(*(int *)(iVar8 + 0x28) * (uint)*(byte *)(piVar11 + 2) +
                         *(int *)(iVar8 + 0x20) + iVar12 * 0x10 + (int)piVar11);
        iVar13 = *piVar5;
        if ((*(char *)(iVar8 + iVar13) == ' ') &&
           (iVar13 = FUN_0002a6f4(param_1 + 0x7c,iVar8 + iVar13 + 1,piVar5[2] + iVar8), iVar13 == 0)
           ) {
          return -0xc;
        }
        iVar12 = iVar12 + 1;
      }
      return 0;
    }
    piVar11 = (int *)FUN_00029fe4(param_1,piVar11);
    iVar12 = iVar13 + 1;
  } while( true );
}



/* ===== FUN_0002a328 @ 0002a328 size=52 ===== */

undefined4 FUN_0002a328(void *param_1)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = *(int *)((int)param_1 + 4) + -1, *(int *)((int)param_1 + 4) = iVar1, iVar1 < 1)) {
    if (*(void **)((int)param_1 + 0x78) != (void *)0x0) {
      munmap(*(void **)((int)param_1 + 0x78),*(size_t *)((int)param_1 + 0x40));
    }
    if (*(FILE **)((int)param_1 + 8) != (FILE *)0x0) {
      fclose(*(FILE **)((int)param_1 + 8));
    }
    FUN_0002a87e((int)param_1 + 0x7c);
    free(param_1);
  }
  return 0;
}



/* ===== FUN_0002a35c @ 0002a35c size=560 ===== */

void * FUN_0002a35c(undefined4 param_1)

{
  void *pvVar1;
  FILE *__stream;
  int iVar2;
  int *piVar3;
  void *__s1;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint __len;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar7 = DAT_0002a58c;
  local_28 = *(undefined4 *)(DAT_0002a58c + 0x2a378);
  uStack_24 = *(undefined4 *)(DAT_0002a58c + 0x2a37c);
  pvVar1 = calloc(1,0x98);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  *(undefined4 *)((int)pvVar1 + 4) = 1;
  FUN_0002a6d2(param_1,(int)pvVar1 + 0x7c,1);
  __stream = fopen64((char *)(DAT_0002a594 + 0x2a39c),(char *)(DAT_0002a590 + 0x2a39a));
  *(FILE **)((int)pvVar1 + 8) = __stream;
  if (__stream == (FILE *)0x0) {
    iVar2 = FUN_000230c4();
    if (iVar2 < 7) goto LAB_0002a400;
    iVar7 = iVar7 + 0x2a380;
    iVar2 = DAT_0002a598 + 0x2a3b4;
    iVar5 = DAT_0002a59c + 0x2a3b8;
    uVar6 = 0x118;
LAB_0002a3bc:
    iVar4 = 0;
  }
  else {
    iVar2 = fileno(__stream);
    iVar2 = fstat64(iVar2,(stat64 *)((int)pvVar1 + 0x10));
    if ((iVar2 < 0) || (__len = *(uint *)((int)pvVar1 + 0x40), __len < 0x50)) {
      iVar7 = FUN_000230c4();
      if (iVar7 < 7) goto LAB_0002a400;
      piVar3 = __errno_location();
      iVar5 = DAT_0002a5a0 + 0x2a3ea;
      iVar2 = DAT_0002a5a4 + 0x2a3f0;
      iVar7 = DAT_0002a5a8 + 0x2a406;
      uVar6 = 0x11f;
    }
    else {
      iVar2 = fileno(*(FILE **)((int)pvVar1 + 8));
      __s1 = mmap64((void *)0x0,__len,1,1,iVar2,0);
      *(void **)((int)pvVar1 + 0x78) = __s1;
      if (__s1 != (void *)0xffffffff) {
        iVar2 = memcmp(__s1,&local_28,8);
        iVar5 = FUN_000230c4();
        if ((iVar2 == 0) &&
           (*(int *)((int)__s1 + 0x14) == 0 &&
            *(int *)((int)pvVar1 + 0x40) == *(int *)((int)__s1 + 0x10))) {
          if (iVar5 < 7) {
            return pvVar1;
          }
          iVar5 = DAT_0002a5c0 + 0x2a4a4;
          FUN_00022f5c(7,0,iVar5,0x132,iVar7 + 0x2a380,DAT_0002a5c4 + 0x2a4a8);
          iVar2 = FUN_000230c4();
          if (iVar2 < 7) {
            return pvVar1;
          }
          FUN_00022f5c(7,0,iVar5,0x133,iVar7 + 0x2a380,DAT_0002a5c8 + 0x2a4d2,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 8),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0xc));
          iVar7 = FUN_000230c4();
          if (iVar7 < 7) {
            return pvVar1;
          }
          iVar5 = DAT_0002a5cc + 0x2a4f8;
          iVar2 = DAT_0002a5d0 + 0x2a510;
          FUN_00022f5c(7,0,iVar5,0x134,iVar2,DAT_0002a5d4 + 0x2a502,
                       *(undefined4 *)((int)pvVar1 + 0x40),*(undefined4 *)((int)pvVar1 + 0x44));
          iVar7 = FUN_000230c4();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022f5c(7,0,iVar5,0x135,iVar2,DAT_0002a5d8 + 0x2a52c,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x18),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x1c));
          iVar7 = FUN_000230c4();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022f5c(7,0,iVar5,0x136,iVar2,DAT_0002a5dc + 0x2a556,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x48),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x4c));
          iVar7 = FUN_000230c4();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022f5c(7,0,iVar5,0x137,iVar2,DAT_0002a5e0 + 0x2a580,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x40),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x44));
          return pvVar1;
        }
        if (iVar5 < 7) goto LAB_0002a400;
        iVar5 = DAT_0002a5b4 + 0x2a484;
        iVar2 = DAT_0002a5b8 + 0x2a48a;
        iVar7 = DAT_0002a5bc + 0x2a4a0;
        uVar6 = 0x12d;
        goto LAB_0002a3bc;
      }
      iVar2 = FUN_000230c4();
      if (iVar2 < 7) goto LAB_0002a400;
      piVar3 = __errno_location();
      iVar7 = iVar7 + 0x2a380;
      iVar5 = DAT_0002a5ac + 0x2a44a;
      iVar2 = DAT_0002a5b0 + 0x2a450;
      uVar6 = 0x126;
    }
    iVar4 = *piVar3;
  }
  FUN_00022f5c(7,iVar4,iVar2,uVar6,iVar7,iVar5);
LAB_0002a400:
  FUN_0002a328(pvVar1);
  return (void *)0x0;
}



/* ===== FUN_0002a628 @ 0002a628 size=66 ===== */

undefined4 FUN_0002a628(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    FUN_0002a87e(param_1 + 0x7c);
    iVar2 = FUN_0002a178(param_1,param_2);
    if (-1 < iVar2) {
      uVar3 = FUN_0002a854(param_1 + 0x7c);
      return uVar3;
    }
    piVar1 = __errno_location();
    *piVar1 = -iVar2;
  }
  return 0;
}



/* ===== FUN_0002a66c @ 0002a66c size=58 ===== */

uint FUN_0002a66c(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar2 = *(uint *)(param_1 + 0x10);
  while( true ) {
    do {
      uVar4 = uVar2;
      if (uVar4 <= uVar3) {
        return ~uVar3;
      }
      uVar2 = uVar4 + uVar3 >> 1;
      iVar1 = strcmp(param_2,*(char **)(*(int *)(*(int *)(param_1 + 0xc) + uVar2 * 4) + 0xc));
    } while (iVar1 < 0);
    if (iVar1 == 0) break;
    uVar3 = uVar2 + 1;
    uVar2 = uVar4;
  }
  return uVar2;
}



/* ===== FUN_0002a6ac @ 0002a6ac size=10 ===== */

bool FUN_0002a6ac(int *param_1)

{
  return (int *)*param_1 == param_1;
}



/* ===== FUN_0002a6c2 @ 0002a6c2 size=16 ===== */

void FUN_0002a6c2(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== FUN_0002a6d2 @ 0002a6d2 size=40 ===== */

void FUN_0002a6d2(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_2 + 1;
  *puVar1 = 0;
  param_2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[5] = 0;
  param_2[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 6) = param_3;
  *puVar1 = puVar1;
  param_2[2] = puVar1;
  return;
}



/* ===== FUN_0002a6f4 @ 0002a6f4 size=272 ===== */

int * FUN_0002a6f4(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0002a66c();
    if (-1 < (int)uVar2) {
      piVar10 = *(int **)(*(int *)(param_1 + 0xc) + uVar2 * 4);
      free((void *)piVar10[4]);
      if (param_3 == (char *)0x0) {
        piVar10[4] = 0;
        return piVar10;
      }
      pcVar3 = strdup(param_3);
      piVar10[4] = (int)pcVar3;
      if (pcVar3 == (char *)0x0) {
        return (int *)0x0;
      }
      return piVar10;
    }
  }
  piVar10 = calloc(1,0x18);
  if (piVar10 == (int *)0x0) {
    return (int *)0x0;
  }
  pcVar3 = strdup(param_2);
  piVar10[3] = (int)pcVar3;
  if (pcVar3 == (char *)0x0) goto LAB_0002a752;
  if (param_3 == (char *)0x0) {
LAB_0002a76e:
    if (cVar1 == '\0') {
      puVar8 = *(undefined4 **)(param_1 + 8);
      *(int **)(param_1 + 8) = piVar10;
      *piVar10 = param_1 + 4;
      piVar10[1] = (int)puVar8;
      *puVar8 = piVar10;
      piVar10[2] = param_1;
      return piVar10;
    }
    uVar7 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x10) < uVar7) {
LAB_0002a7a4:
      uVar7 = *(uint *)(param_1 + 0x10);
      uVar11 = ~uVar2;
      iVar6 = *(int *)(param_1 + 0xc);
      if (uVar11 < uVar7) {
        iVar9 = *(int *)(iVar6 + uVar11 * 4);
        puVar8 = *(undefined4 **)(iVar9 + 4);
        *(int **)(iVar9 + 4) = piVar10;
        *piVar10 = iVar9;
        piVar10[1] = (int)puVar8;
        iVar9 = *(int *)(iVar9 + 8);
        *puVar8 = piVar10;
        piVar10[2] = iVar9;
      }
      else {
        puVar8 = *(undefined4 **)(param_1 + 8);
        *(int **)(param_1 + 8) = piVar10;
        *piVar10 = param_1 + 4;
        piVar10[1] = (int)puVar8;
        *puVar8 = piVar10;
        piVar10[2] = param_1;
      }
      memmove((void *)(uVar2 * -4 + iVar6),(void *)(iVar6 + uVar11 * 4),(uVar7 - uVar11) * 4);
      *(int **)(*(int *)(param_1 + 0xc) + uVar11 * 4) = piVar10;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return piVar10;
    }
    uVar11 = uVar7;
    if (uVar7 == 0) {
      uVar11 = 0x40;
    }
    pvVar5 = realloc(*(void **)(param_1 + 0xc),(uVar7 + uVar11) * 4);
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0xc) = pvVar5;
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar11;
      goto LAB_0002a7a4;
    }
    free((void *)piVar10[3]);
    pcVar3 = (char *)piVar10[4];
  }
  else {
    pcVar4 = strdup(param_3);
    piVar10[4] = (int)pcVar4;
    if (pcVar4 != (char *)0x0) goto LAB_0002a76e;
  }
  free(pcVar3);
LAB_0002a752:
  free(piVar10);
  return (int *)0x0;
}



/* ===== FUN_0002a804 @ 0002a804 size=80 ===== */

void FUN_0002a804(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0xc);
  if ((iVar3 != 0) && (iVar1 = FUN_0002a66c(iVar2,*(undefined4 *)(param_1 + 0xc)), -1 < iVar1)) {
    memmove((void *)(iVar3 + iVar1 * 4),(void *)(iVar1 * 4 + 4 + iVar3),
            ((*(int *)(iVar2 + 0x10) + 0x3fffffff) - iVar1) * 4);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
  }
  FUN_0002a6c2(param_1);
  free(*(void **)(param_1 + 0xc));
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_0004b31c)(param_1);
  return;
}



/* ===== FUN_0002a854 @ 0002a854 size=20 ===== */

undefined4 FUN_0002a854(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002a6ac(param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002a868 @ 0002a868 size=22 ===== */

int FUN_0002a868(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == param_1[2] + 4) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0002a87e @ 0002a87e size=52 ===== */

void FUN_0002a87e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  free(*(void **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = FUN_0002a854(param_1);
  iVar2 = FUN_0002a868();
  while (iVar3 = iVar2, iVar1 != 0) {
    FUN_0002a804(iVar1);
    iVar2 = FUN_0002a868(iVar3);
    iVar1 = iVar3;
  }
  return;
}



/* ===== FUN_0002a8b2 @ 0002a8b2 size=30 ===== */

undefined4 FUN_0002a8b2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    uVar2 = 0;
    if (*(char *)(iVar3 + 0x18) != '\0') {
      iVar1 = FUN_0002a66c(iVar3);
      if (iVar1 < 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar1 * 4);
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0002a8d0 @ 0002a8d0 size=6 ===== */

undefined4 FUN_0002a8d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_0002a8d6 @ 0002a8d6 size=6 ===== */

undefined4 FUN_0002a8d6(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* ===== FUN_0002a8dc @ 0002a8dc size=12 ===== */

undefined4 FUN_0002a8dc(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 0xffffffea;
}



/* ===== FUN_0002a8e8 @ 0002a8e8 size=6 ===== */

void FUN_0002a8e8(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}



/* ===== FUN_0002a8f0 @ 0002a8f0 size=22 ===== */

void FUN_0002a8f0(int param_1,int *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(undefined2 *)(param_1 + iVar1 * 8) = param_3;
  *(undefined4 *)(param_1 + iVar1 * 8 + 4) = param_4;
  *param_2 = *param_2 + 1;
  return;
}



/* ===== FUN_0002a906 @ 0002a906 size=52 ===== */

void FUN_0002a906(int param_1)

{
  int iVar1;
  socklen_t local_8c;
  sockaddr asStack_88 [8];
  
  if (param_1 != 0) {
    local_8c = 0xc;
    iVar1 = getsockname(*(int *)(param_1 + 8),asStack_88,&local_8c);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x10) = asStack_88[0].sa_data._2_4_;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(DAT_0002a944 + 0x2a91e,DAT_0002a940 + 0x2a91c,0x9b,DAT_0002a93c + 0x2a91a);
}



/* ===== FUN_0002a948 @ 0002a948 size=236 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0002a948(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *__s2;
  char *__format;
  char *__needle;
  int local_8b8;
  int local_8b4 [2];
  undefined1 auStack_8ac [132];
  char acStack_828 [2052];
  
  memset(auStack_8ac,0,0x84);
  local_8b4[1] = 0x80;
  lVar1 = syscall(0x172,0xffffff9c,DAT_0002aa34 + 0x2a976,local_8b4 + 1,&local_8b8,0);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    iVar6 = *piVar2;
    if ((iVar6 != 0x5f) && (iVar3 = FUN_000230c4(), 6 < iVar3)) {
      FUN_00022f5c(7,iVar6,DAT_0002aa3c + 0x2a9a0,0x79,DAT_0002aa40 + 0x2a9b9,DAT_0002aa38 + 0x2a99a
                  );
      return 0;
    }
  }
  else {
    __stream = fopen64((char *)(DAT_0002aa48 + 0x2a9be),(char *)(DAT_0002aa44 + 0x2a9bc));
    if (__stream != (FILE *)0x0) {
      __format = (char *)(DAT_0002aa4c + 0x2a9d4);
      __needle = (char *)(DAT_0002aa50 + 0x2a9d6);
      __s2 = (char *)(DAT_0002aa54 + 0x2a9d8);
      do {
        do {
          pcVar4 = fgets(acStack_828,0x800,__stream);
          if (pcVar4 == (char *)0x0) {
            ferror(__stream);
            uVar5 = 0;
            goto LAB_0002a9ee;
          }
          iVar6 = sscanf(acStack_828,__format,local_8b4);
        } while (((iVar6 != 1) || (local_8b4[0] != local_8b8)) ||
                (pcVar4 = strstr(acStack_828,__needle), pcVar4 == (char *)0x0));
        iVar6 = strncmp(pcVar4 + 3,__s2,8);
        uVar5 = 1;
      } while (iVar6 != 0);
LAB_0002a9ee:
      fclose(__stream);
      return uVar5;
    }
  }
  return 0;
}



/* ===== FUN_0002ab90 @ 0002ab90 size=278 ===== */

/* WARNING: Removing unreachable block (ram,0x0002ab46) */

int * FUN_0002ab90(int param_1,char *param_2)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  if (param_2 != (char *)0x0) {
    iVar3 = strcmp(param_2,(char *)(DAT_0002ab78 + 0x2aaf0));
    if (iVar3 != 0) {
      iVar3 = strcmp(param_2,(char *)(DAT_0002ab8c + 0x2ab3c));
      if (iVar3 != 0) {
        return (int *)0x0;
      }
      iVar3 = 1;
      goto LAB_0002aa74;
    }
    iVar3 = access((char *)(DAT_0002ab7c + 0x2aafc),0);
    if ((-1 < iVar3) && (iVar3 = FUN_0002a948(), iVar3 != 0)) {
      iVar3 = 2;
      goto LAB_0002aa74;
    }
    iVar3 = FUN_000230c4();
    if (6 < iVar3) {
      FUN_00022f5c(7,0,DAT_0002ab84 + 0x2ab1c,0xbe,DAT_0002ab88 + 0x2ab47,DAT_0002ab80 + 0x2ab16);
    }
  }
  iVar3 = 0;
LAB_0002aa74:
  __ptr = calloc(1,0x1cc);
  if (__ptr != (int *)0x0) {
    *__ptr = param_1;
    __ptr[1] = 1;
    FUN_0002a6d2(param_1,__ptr + 100,0);
    FUN_0002a6d2(param_1,__ptr + 0x6b,1);
    iVar1 = socket(0x10,DAT_0002ab68,0xf);
    __ptr[2] = iVar1;
    if (-1 < iVar1) {
      __ptr[5] = iVar3;
      *(undefined2 *)(__ptr + 3) = 0x10;
      *(undefined2 *)(__ptr + 0x43) = 0x10;
      __ptr[0x45] = 2;
      return __ptr;
    }
    iVar3 = FUN_000230c4();
    if (6 < iVar3) {
      piVar2 = __errno_location();
      FUN_00022f5c(7,*piVar2,DAT_0002ab70 + 0x2aad2,0xce,DAT_0002ab74 + 0x2aafd,
                   DAT_0002ab6c + 0x2aacc);
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_0002ab98 @ 0002ab98 size=526 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0002ab98(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_1034;
  undefined2 uStack_1030;
  undefined2 uStack_102e;
  undefined2 *local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined2 local_1020;
  undefined1 local_101e;
  undefined4 local_101c;
  
  iVar8 = param_1 + 400;
  iVar1 = FUN_0002a854(iVar8);
  iVar7 = param_1 + 0x1ac;
  if ((iVar1 != 0) || (iVar1 = FUN_0002a854(iVar7), iVar1 != 0)) {
    memset(&local_1028,0,0x1000);
    local_1028._0_2_ = 0x20;
    local_1024 = 8;
    local_1020 = 0x15;
    local_101e = 1;
    local_101c = DAT_0002ada8;
    local_1034 = 2;
    FUN_0002a8f0(&local_1028,&local_1034,6,0xffffffff);
    iVar1 = FUN_0002a854(iVar7);
    if (iVar1 != 0) {
      cVar6 = '\0';
      iVar1 = FUN_0002a854(iVar7);
      while (iVar1 != 0) {
        cVar6 = cVar6 + '\x01';
        iVar1 = FUN_0002a868();
      }
      iVar1 = FUN_0002a854(iVar7);
      cVar6 = (cVar6 + -1) * '\x06' + '\x01';
      for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
        FUN_0002a8d0(iVar1);
        uVar9 = FUN_0002ba16();
        uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar10 = FUN_0002a8f0(&local_1028,&local_1034,0x20);
        uVar3 = FUN_0002a8f0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x54,uVar5);
        *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = DAT_0002adb0;
        (&local_1024)[local_1034 * 2] = uVar5;
        local_1034 = local_1034 + 1;
        uVar10 = FUN_0002a8f0(uVar3,&local_1034,0x20,0x24);
        FUN_0002a8f0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x54,(int)uVar9);
        *(undefined2 *)((int)&local_1028 + local_1034 * 4 * 2) = 0x15;
        *(char *)((int)&local_1028 + local_1034 * 8 + 2U) = cVar6;
        cVar6 = cVar6 + -6;
        *(undefined1 *)((int)&local_1028 + local_1034 * 8 + 3U) = 0;
        (&local_1024)[local_1034 * 2] = (int)uVar9;
        local_1034 = local_1034 + 1;
      }
      FUN_0002a8f0(&local_1028,&local_1034,6,0);
    }
    iVar1 = FUN_0002a854(iVar8);
    uVar3 = DAT_0002adac;
    if (iVar1 != 0) {
      iVar1 = FUN_0002a854(iVar8);
      uVar5 = DAT_0002adb0;
      for (; iVar1 != 0; iVar1 = FUN_0002a868(iVar1)) {
        FUN_0002a8d0(iVar1);
        uVar4 = FUN_0002ba00();
        FUN_0002a8f0(&local_1028,&local_1034,0x20,0x18);
        iVar7 = FUN_0002a8d6(iVar1);
        if (iVar7 == 0) {
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar3;
          (&local_1024)[local_1034 * 2] = uVar4;
        }
        else {
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar5;
          (&local_1024)[local_1034 * 2] = uVar4;
          local_1034 = local_1034 + 1;
          FUN_0002a8f0(&local_1028,&local_1034,0x20,0x1c);
          FUN_0002a8d6(iVar1);
          uVar4 = FUN_0002ba00();
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar3;
          (&local_1024)[local_1034 * 2] = uVar4;
        }
        local_1034 = local_1034 + 1;
        FUN_0002a8f0(&local_1028,&local_1034,6,0xffffffff);
        if (0x1ff < local_1034 + 1U) {
          return -7;
        }
      }
      FUN_0002a8f0(&local_1028,&local_1034,6,0);
    }
    FUN_0002a8f0(&local_1028,&local_1034,6,0xffffffff);
    uStack_102e = 0;
    uStack_1030 = (undefined2)local_1034;
    local_102c = (undefined2 *)&local_1028;
    iVar1 = setsockopt(*(int *)(param_1 + 8),1,0x1a,&uStack_1030,8);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
  }
  return 0;
}



/* ===== FUN_0002adbe @ 0002adbe size=166 ===== */

int FUN_0002adbe(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14 [2];
  
  local_14[0] = 1;
  FUN_0002ab98();
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    iVar1 = bind(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),0xc);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x1c8) = 1;
    }
    else if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = FUN_000230c4();
      if (6 < iVar1) {
        FUN_00022f5c(7,*piVar2,DAT_0002ae68 + 0x2ae22,0x19f,DAT_0002ae6c + 0x2ae6e,
                     DAT_0002ae64 + 0x2ae1c);
      }
      return -*piVar2;
    }
  }
  FUN_0002a906(param_1);
  iVar1 = setsockopt(*(int *)(param_1 + 8),1,0x10,local_14,4);
  if ((iVar1 < 0) && (iVar1 = FUN_000230c4(), 6 < iVar1)) {
    piVar2 = __errno_location();
    FUN_00022f5c(7,*piVar2,DAT_0002ae74 + 0x2ae52,0x1a6,&UNK_0002ae9e + DAT_0002ae78,
                 DAT_0002ae70 + 0x2ae4c);
  }
  return 0;
}



/* ===== FUN_0002ae7c @ 0002ae7c size=34 ===== */

int FUN_0002ae7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    local_c = param_2;
    iVar1 = setsockopt(*(int *)(param_1 + 8),1,0x21,&local_c,4);
  }
  return iVar1;
}



/* ===== FUN_0002aeca @ 0002aeca size=52 ===== */

undefined4 FUN_0002aeca(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4) + -1;
    *(int *)((int)param_1 + 4) = iVar1;
    if (iVar1 < 1) {
      if (-1 < *(int *)((int)param_1 + 8)) {
        close(*(int *)((int)param_1 + 8));
      }
      FUN_0002a87e((int)param_1 + 400);
      FUN_0002a87e((int)param_1 + 0x1ac);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0002af04 @ 0002af04 size=12 ===== */

undefined4 FUN_0002af04(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0xffffffea;
}



/* ===== FUN_0002af10 @ 0002af10 size=880 ===== */

int FUN_0002af10(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  iovec local_20ec;
  pollfd pStack_20e4;
  undefined1 auStack_20dc [24];
  msghdr mStack_20c4;
  undefined1 auStack_20a8 [4];
  int local_20a4;
  int local_20a0;
  char acStack_2028 [8];
  uint local_2020;
  uint local_2018;
  
  bVar1 = false;
  do {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    mStack_20c4.msg_name = auStack_20a8;
    local_20ec.iov_len = 0x2000;
    mStack_20c4.msg_iovlen = 1;
    mStack_20c4.msg_control = auStack_20dc;
    mStack_20c4.msg_flags = 0;
    mStack_20c4.msg_controllen = 0x18;
    mStack_20c4.msg_namelen = 0x80;
    local_20ec.iov_base = acStack_2028;
    mStack_20c4.msg_iov = &local_20ec;
    uVar2 = recvmsg(param_1[2],&mStack_20c4,0);
    if ((int)uVar2 < 0) {
      piVar3 = __errno_location();
      if (*piVar3 == 4) {
        return 0;
      }
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002b284 + 0x2af94;
      iVar4 = DAT_0002b288 + 0x2af9a;
      iVar9 = DAT_0002b28c + 0x2b004;
      uVar10 = 0x266;
LAB_0002afa2:
      FUN_00022f5c(7,0,iVar4,uVar10,iVar9,iVar8);
      return 0;
    }
    if (((int)uVar2 < 0x20) || ((mStack_20c4.msg_flags & 0x20U) != 0)) {
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002b290 + 0x2afca;
      iVar4 = DAT_0002b294 + 0x2afd0;
      iVar9 = DAT_0002b298 + 0x2b03a;
      uVar10 = 0x26b;
LAB_0002afd8:
      FUN_00022f5c(7,0,iVar4,uVar10,iVar9,iVar8);
      return 0;
    }
    if (local_20a0 == 0) {
      if ((param_1[0x24] == 0) || (param_1[0x24] != local_20a4)) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002b29c + 0x2b002;
        iVar4 = DAT_0002b2a0 + 0x2b008;
        iVar9 = DAT_0002b2a4 + 0x2b072;
        uVar10 = 0x273;
        goto LAB_0002afd8;
      }
    }
    else if ((local_20a0 == 1) && (local_20a4 != 0)) {
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) {
        return 0;
      }
      FUN_00022f5c(7,0,DAT_0002b2ac + 0x2b03c,0x279,DAT_0002b2b0 + 0x2b0a6,DAT_0002b2a8 + 0x2b036,
                   local_20a4);
      return 0;
    }
    if (((mStack_20c4.msg_controllen < 0xc) || (mStack_20c4.msg_control == (undefined1 *)0x0)) ||
       (*(int *)((int)mStack_20c4.msg_control + 8) != 2)) {
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002b2b4 + 0x2b06c;
      iVar4 = DAT_0002b2b8 + 0x2b072;
      iVar9 = DAT_0002b2bc + 0x2b0dc;
      uVar10 = 0x280;
      goto LAB_0002afd8;
    }
    iVar4 = *(int *)((int)mStack_20c4.msg_control + 0x10);
    if (iVar4 != 0) {
      iVar8 = FUN_000230c4();
      if (iVar8 < 7) {
        return 0;
      }
      FUN_00022f5c(7,0,DAT_0002b2c4 + 0x2b09c,0x286,DAT_0002b2c8 + 0x2b108,DAT_0002b2c0 + 0x2b096,
                   iVar4);
      return 0;
    }
    iVar4 = memcmp(acStack_2028,(void *)(DAT_0002b2cc + 0x2b0b6),8);
    if (iVar4 == 0) {
      if (local_2020 != DAT_0002b280) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) {
          return 0;
        }
        iVar4 = DAT_0002b2d0 + 0x2b0de;
        iVar8 = DAT_0002b2d4 + 0x2b0e2;
        iVar9 = DAT_0002b2d8 + 0x2b150;
        uVar10 = 0x28e;
        uVar11 = local_2020;
        uVar2 = DAT_0002b280;
LAB_0002b0ee:
        FUN_00022f5c(7,0,iVar4,uVar10,iVar9,iVar8,uVar11,uVar2);
        return 0;
      }
      uVar11 = local_2018 + 0x20;
      if (uVar2 < uVar11) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002b2dc + 0x2b116;
        iVar4 = DAT_0002b2e0 + 0x2b11c;
        iVar9 = DAT_0002b2e4 + 0x2b18a;
        uVar10 = 0x293;
        goto LAB_0002b0ee;
      }
      bVar1 = true;
      uVar11 = local_2018;
    }
    else {
      sVar5 = strlen(acStack_2028);
      uVar11 = sVar5 + 1;
      if ((uVar11 < 5) || ((int)uVar2 <= (int)uVar11)) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002b2f4 + 0x2b188;
        iVar4 = DAT_0002b2f8 + 0x2b18e;
        iVar9 = DAT_0002b2fc + 0x2b1f8;
        uVar10 = 0x29f;
        goto LAB_0002afd8;
      }
      pcVar6 = strstr(acStack_2028,(char *)(DAT_0002b300 + 0x2b1a0));
      if (pcVar6 == (char *)0x0) {
        iVar4 = FUN_000230c4();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002b304 + 0x2b1ba;
        iVar4 = DAT_0002b308 + 0x2b1c0;
        iVar9 = DAT_0002b30c + 0x2b22a;
        uVar10 = 0x2a5;
        goto LAB_0002afa2;
      }
    }
    iVar4 = FUN_0002930e(*param_1,acStack_2028 + uVar11,uVar2 - uVar11);
    if (iVar4 == 0) {
      iVar4 = FUN_000230c4();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002b2e8 + 0x2b154;
      iVar4 = DAT_0002b2ec + 0x2b15a;
      iVar9 = DAT_0002b2f0 + 0x2b1c4;
      uVar10 = 0x2ac;
      goto LAB_0002afa2;
    }
    if (bVar1) {
      FUN_00027c64();
    }
    iVar8 = FUN_0002a854(param_1 + 100);
    if (iVar8 == 0) {
LAB_0002b248:
      iVar8 = FUN_0002a854(param_1 + 0x6b);
      if (iVar8 == 0) {
        return iVar4;
      }
      for (iVar8 = FUN_0002a854(param_1 + 0x6b); iVar8 != 0; iVar8 = FUN_0002a868(iVar8)) {
        uVar10 = FUN_0002a8d0(iVar8);
        iVar9 = FUN_00029174(iVar4,uVar10);
        if (iVar9 != 0) {
          return iVar4;
        }
      }
    }
    else {
      for (iVar8 = FUN_0002a854(param_1 + 100); iVar8 != 0; iVar8 = FUN_0002a868(iVar8)) {
        pcVar6 = (char *)FUN_0002a8d0(iVar8);
        pcVar7 = (char *)FUN_000283b4(iVar4);
        iVar9 = strcmp(pcVar7,pcVar6);
        if ((iVar9 == 0) &&
           ((pcVar6 = (char *)FUN_0002a8d6(iVar8), pcVar6 == (char *)0x0 ||
            ((pcVar7 = (char *)FUN_0002830c(iVar4), pcVar7 != (char *)0x0 &&
             (iVar9 = strcmp(pcVar7,pcVar6), iVar9 == 0)))))) goto LAB_0002b248;
      }
    }
    FUN_00027894(iVar4);
    pStack_20e4.fd = param_1[2];
    pStack_20e4.events = 1;
    iVar4 = poll(&pStack_20e4,1,0);
    if (iVar4 < 1) {
      return 0;
    }
  } while( true );
}



/* ===== FUN_0002b310 @ 0002b310 size=376 ===== */

int FUN_0002b310(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_78;
  iovec local_74;
  undefined4 local_6c;
  void *pvStack_68;
  msghdr local_64;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  size_t local_38;
  void *pvStack_34;
  size_t local_30;
  uint local_2c;
  uint local_28;
  void *pvStack_24;
  
  pvStack_68 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_64.msg_controllen = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_64.msg_flags = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48 = *(undefined4 *)(DAT_0002b48c + 0x2b324);
  uStack_44 = *(undefined4 *)(DAT_0002b48c + 0x2b328);
  local_38 = 0;
  local_40 = DAT_0002b488;
  uStack_3c = 0x28;
  local_74.iov_base = &local_48;
  local_74.iov_len = 0x28;
  local_64.msg_name = (void *)0x0;
  local_28 = 0;
  local_64.msg_iov = &local_74;
  local_6c = 0;
  local_64.msg_iovlen = 2;
  local_64.msg_namelen = (socklen_t)pvStack_68;
  local_64.msg_control = pvStack_68;
  pvStack_34 = pvStack_68;
  local_30 = local_64.msg_controllen;
  local_2c = local_64.msg_flags;
  pvStack_24 = pvStack_68;
  iVar1 = FUN_00029152(param_3,&local_78);
  if (iVar1 < 0x20) {
    iVar1 = FUN_000230c4();
    if (6 < iVar1) {
      FUN_00022f5c(7,0,DAT_0002b494 + 0x2b384,0x2dc,DAT_0002b498 + 0x2b40a,DAT_0002b490 + 0x2b37e);
    }
    iVar1 = -0x16;
  }
  else {
    FUN_000283b4(param_3);
    uVar2 = FUN_0002ba00();
    local_30 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
    iVar3 = FUN_0002830c(param_3);
    if (iVar3 != 0) {
      uVar2 = FUN_0002ba00();
      local_2c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
    }
    uVar5 = 0;
    iVar3 = FUN_00027f02(param_3);
    uVar2 = 0;
    for (; iVar3 != 0; iVar3 = FUN_0002a868(iVar3)) {
      FUN_0002a8d0(iVar3);
      uVar6 = FUN_0002ba16();
      uVar2 = uVar2 | (uint)uVar6;
      uVar5 = uVar5 | (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (uVar2 != 0 || uVar5 != 0) {
      local_28 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
      pvStack_24 = (void *)(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                            (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
    }
    local_38 = local_74.iov_len;
    local_6c = local_78;
    if (param_2 == 0) {
      local_64.msg_name = (void *)(param_1 + 0x10c);
    }
    else {
      local_64.msg_name = (void *)(param_2 + 0xc);
    }
    local_64.msg_namelen = 0xc;
    pvStack_68 = (void *)iVar1;
    pvStack_34 = (void *)iVar1;
    iVar1 = sendmsg(*(int *)(param_1 + 8),&local_64,0);
    if (iVar1 < 0) {
      piVar4 = __errno_location();
      if ((param_2 == 0) && (*piVar4 == 0x6f)) {
        iVar1 = FUN_000230c4();
        if (6 < iVar1) {
          FUN_00022f5c(7,0,DAT_0002b4a0 + 0x2b422,0x305,DAT_0002b4a4 + 0x2b4aa,
                       DAT_0002b49c + 0x2b41c,param_1);
        }
        iVar1 = 0;
      }
      else {
        iVar1 = -*piVar4;
      }
    }
    else {
      iVar3 = FUN_000230c4();
      if (6 < iVar3) {
        FUN_00022f5c(7,0,DAT_0002b4ac + 0x2b476,0x30b,&UNK_0002b500 + DAT_0002b4b0,
                     DAT_0002b4a8 + 0x2b470,iVar1,param_1);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_0002b4b4 @ 0002b4b4 size=32 ===== */

undefined4 FUN_0002b4b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0002a6f4(param_1 + 400);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_0002b4d4 @ 0002b4d4 size=34 ===== */

undefined4 FUN_0002b4d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0002a6f4(param_1 + 0x1ac,param_2,0,param_4,param_4);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_0002b51c @ 0002b51c size=30 ===== */

void FUN_0002b51c(int param_1)

{
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = calloc(1,0xc), piVar1 != (int *)0x0)) {
    *piVar1 = param_1;
    piVar1[1] = 1;
    piVar1[2] = -1;
  }
  return;
}



/* ===== FUN_0002b544 @ 0002b544 size=32 ===== */

undefined4 FUN_0002b544(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4) + -1;
    *(int *)((int)param_1 + 4) = iVar1;
    if (iVar1 < 1) {
      FUN_00025324(*(undefined4 *)((int)param_1 + 8));
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0002b58c @ 0002b58c size=16 ===== */

uint FUN_0002b58c(void)

{
  uint uVar1;
  
  uVar1 = access((char *)(DAT_0002b59c + 0x2b596),0);
  return uVar1 >> 0x1f;
}



/* ===== FUN_0002b5ac @ 0002b5ac size=72 ===== */

int FUN_0002b5ac(int param_1)

{
  int *piVar1;
  int iVar2;
  int __fd;
  
  __fd = *(int *)(param_1 + 8);
  if (__fd < 0) {
    __fd = inotify_init1(0x80000);
    if (__fd < 0) {
      piVar1 = __errno_location();
      __fd = -*piVar1;
    }
    else {
      iVar2 = inotify_add_watch(__fd,(char *)(DAT_0002b5f4 + 0x2b5d8),0x200);
      if (iVar2 < 0) {
        piVar1 = __errno_location();
        iVar2 = *piVar1;
        close(__fd);
        __fd = -iVar2;
      }
      else {
        *(int *)(param_1 + 8) = __fd;
      }
    }
  }
  return __fd;
}



/* ===== FUN_0002b5f8 @ 0002b5f8 size=110 ===== */

int FUN_0002b5f8(int param_1)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  int __fd;
  pollfd local_818;
  undefined1 auStack_810 [2048];
  
  __fd = *(int *)(param_1 + 8);
  if (__fd < 0) {
    return -0x16;
  }
  local_818.revents = 0;
  local_818.events = 1;
  local_818.fd = __fd;
  do {
    while( true ) {
      while( true ) {
        iVar1 = poll(&local_818,1,0);
        if (-1 < iVar1) break;
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        if (iVar1 != 4) goto LAB_00025cc6;
      }
      if (iVar1 == 0) {
        return 0;
      }
      sVar3 = read(__fd,auStack_810,0x800);
      if (sVar3 < 0) break;
      if (sVar3 == 0) {
        return 0;
      }
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  } while (iVar1 == 4);
  if (iVar1 == 0xb) {
    return 0;
  }
LAB_00025cc6:
  return -iVar1;
}



/* ===== FUN_0002b608 @ 0002b608 size=278 ===== */

undefined4
FUN_0002b608(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *__s;
  undefined1 *local_42c;
  undefined1 uStack_428;
  char acStack_427 [1027];
  
  if (*param_2 != '[') {
    return 0xffffffff;
  }
  FUN_00024ae4(&uStack_428,0x400,param_2);
  pcVar1 = strchr(acStack_427,0x2f);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  __s = pcVar1 + 1;
  *pcVar1 = '\0';
  pcVar1 = strchr(__s,0x5d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  *pcVar1 = '\0';
  if (pcVar1[1] == '/') {
    pcVar1 = pcVar1 + 2;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  if (*pcVar1 == '\0') {
    if (param_5 != 0) {
      return 0xffffffff;
    }
    pcVar1 = (char *)0x0;
  }
  iVar2 = FUN_000287bc(param_1,acStack_427,__s);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    local_42c = param_3;
    uVar6 = FUN_0002792c();
    uVar6 = FUN_00024ab8(&local_42c,param_4,uVar6,0);
    if (pcVar1 != (char *)0x0) {
      FUN_00024ab8(&local_42c,uVar6,DAT_0002b72c + 0x2b6f0,pcVar1,0);
    }
    iVar3 = FUN_000230c4();
    if (iVar3 < 7) goto LAB_0002b6bc;
    iVar4 = DAT_0002b730 + 0x2b702;
    iVar3 = DAT_0002b734 + 0x2b708;
    iVar5 = DAT_0002b738 + 0x2b70e;
    uVar6 = 0x6c;
  }
  else {
    iVar3 = FUN_00027a0c(iVar2,pcVar1);
    if (iVar3 == 0) {
      *param_3 = 0;
    }
    else {
      FUN_00024ae4(param_3,param_4,iVar3);
    }
    iVar3 = FUN_000230c4();
    if (iVar3 < 7) goto LAB_0002b6bc;
    iVar4 = DAT_0002b720 + 0x2b6a2;
    iVar3 = DAT_0002b724 + 0x2b6a8;
    iVar5 = DAT_0002b728 + 0x2b6ae;
    uVar6 = 99;
  }
  FUN_00022f5c(7,0,iVar3,uVar6,iVar5,iVar4,acStack_427,__s,pcVar1,param_3);
LAB_0002b6bc:
  FUN_00027894(iVar2);
  return 0;
}



/* ===== FUN_0002b73c @ 0002b73c size=94 ===== */

undefined4
FUN_0002b73c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ssize_t sVar1;
  char *pcVar2;
  undefined4 uVar3;
  char acStack_818 [1024];
  char acStack_418 [1028];
  
  FUN_00024af4(acStack_818,0x400,param_3,DAT_0002b79c + 0x2b758,param_2,0);
  sVar1 = readlink(acStack_818,acStack_418,0x400);
  if ((0 < sVar1) && (sVar1 != 0x400)) {
    acStack_418[sVar1] = '\0';
    pcVar2 = strrchr(acStack_418,0x2f);
    if (pcVar2 != (char *)0x0) {
      uVar3 = FUN_00024ae4(param_4,param_5,pcVar2 + 1);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0002b7a0 @ 0002b7a0 size=134 ===== */

undefined4 FUN_0002b7a0(undefined4 param_1,char *param_2,int param_3)

{
  ssize_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  int iVar4;
  char *pcVar5;
  char acStack_420 [1024];
  
  sVar1 = readlink(param_2,acStack_420,0x400);
  if ((sVar1 < 1) || (sVar1 == 0x400)) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    acStack_420[sVar1] = '\0';
    pcVar5 = (char *)(DAT_0002b828 + 0x2b7d0);
    __s1 = acStack_420;
    while ((iVar2 = strncmp(__s1,pcVar5,3), iVar2 == 0 && (__s1 + 3 != (char *)0x0))) {
      iVar4 = iVar4 + 1;
      __s1 = __s1 + 3;
    }
    iVar2 = 0;
    do {
      pcVar5 = strrchr(param_2,0x2f);
      if (pcVar5 == (char *)0x0) {
        return 0xffffffea;
      }
      iVar2 = iVar2 + 1;
      *pcVar5 = '\0';
    } while (iVar2 <= iVar4);
    FUN_00024af4(pcVar5,param_3 - ((int)pcVar5 - (int)param_2),DAT_0002b82c + 0x2b804,__s1,0);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0002b830 @ 0002b830 size=56 ===== */

ulong FUN_0002b830(char *param_1,byte *param_2,undefined4 param_3)

{
  ulong uVar1;
  byte *local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  uVar1 = strtoul(param_1,(char **)&local_14,10);
  if ((*local_14 != 0) &&
     (-1 < (int)((uint)*(ushort *)
                        (**(int **)(DAT_0002b868 + 0x2b846 + DAT_0002b86c) + (uint)*local_14 * 2) <<
                0x1a))) {
    uVar1 = FUN_000266a4(param_1);
    return uVar1;
  }
  if (7 < uVar1) {
    uVar1 = 0xffffffde;
  }
  return uVar1;
}



/* ===== FUN_0002b870 @ 0002b870 size=72 ===== */

void FUN_0002b870(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(param_1 + -1);
  puVar5 = (undefined4 *)(DAT_0002b8b8 + 0x2b87e);
  puVar6 = (undefined4 *)(DAT_0002b8bc + 0x2b880);
  uVar2 = 0;
LAB_0002b87e:
  do {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
LAB_0002b884:
      *(undefined1 *)(param_2 + uVar2) = 0;
      return;
    }
    if (cVar1 == '/') {
      if (param_3 <= uVar2 + 4) {
LAB_0002b8b4:
        uVar2 = 0;
        goto LAB_0002b884;
      }
      uVar3 = *puVar6;
LAB_0002b896:
      *(undefined4 *)(param_2 + uVar2) = uVar3;
      uVar2 = uVar2 + 4;
      goto LAB_0002b87e;
    }
    if (cVar1 == '\\') {
      if (uVar2 + 4 < param_3) {
        uVar3 = *puVar5;
        goto LAB_0002b896;
      }
      goto LAB_0002b8b4;
    }
    if (param_3 <= uVar2 + 1) goto LAB_0002b8b4;
    *(char *)(param_2 + uVar2) = cVar1;
    uVar2 = uVar2 + 1;
  } while( true );
}



/* ===== FUN_0002b8c0 @ 0002b8c0 size=36 ===== */

void FUN_0002b8c0(char *param_1,uint param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    pcVar2 = param_1 + sVar1;
    while ((pcVar2 != param_1 && ((byte)pcVar2[-1] == param_2))) {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '\0';
    }
  }
  return;
}



/* ===== FUN_0002b8e4 @ 0002b8e4 size=130 ===== */

void FUN_0002b8e4(char *param_1,int param_2,size_t param_3)

{
  ushort uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  sVar2 = strnlen(param_1,param_3);
  piVar9 = *(int **)(DAT_0002b968 + 0x2b8f8 + DAT_0002b96c);
  iVar3 = *piVar9;
  do {
    uVar4 = sVar2;
    if (uVar4 == 0) goto LAB_0002b95e;
    uVar1 = *(ushort *)(iVar3 + (uint)(byte)param_1[uVar4 - 1] * 2);
    sVar2 = uVar4 - 1;
    uVar6 = uVar1 & 0x20;
  } while ((uVar1 & 0x20) != 0);
  do {
    uVar8 = uVar6 + 1;
    uVar1 = *(ushort *)(iVar3 + (uint)(byte)param_1[uVar6] * 2);
    uVar5 = uVar1 & 0x20;
    if ((uVar1 & 0x20) == 0) goto LAB_0002b920;
    uVar6 = uVar8;
  } while (uVar4 != uVar8);
LAB_0002b95e:
  uVar5 = 0;
LAB_0002b94e:
  *(undefined1 *)(param_2 + uVar5) = 0;
  return;
LAB_0002b920:
  do {
    iVar3 = *piVar9;
    uVar8 = uVar5;
    uVar7 = uVar6;
    if ((int)((uint)*(ushort *)(iVar3 + (uint)(byte)param_1[uVar6] * 2) << 0x1a) < 0) {
      do {
        uVar6 = uVar6 + 1;
      } while ((int)((uint)*(ushort *)(iVar3 + (uint)(byte)param_1[uVar6] * 2) << 0x1a) < 0);
      *(undefined1 *)(param_2 + uVar5) = 0x5f;
      uVar8 = uVar5 + 1;
      uVar7 = uVar6;
    }
    uVar6 = uVar7 + 1;
    uVar5 = uVar8 + 1;
    *(char *)(param_2 + uVar8) = param_1[uVar7];
  } while (uVar6 < uVar4);
  goto LAB_0002b94e;
}



/* ===== FUN_0002b970 @ 0002b970 size=130 ===== */

int FUN_0002b970(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = DAT_0002b9f4 + 0x2b98c;
  while( true ) {
    pbVar4 = (byte *)(param_1 + iVar3);
    if (*(char *)(param_1 + iVar3) == '\0') break;
    iVar1 = FUN_0002bd30(*(char *)(param_1 + iVar3),param_2);
    if (iVar1 == 0) {
      if ((*pbVar4 == 0x5c) && (pbVar4[1] == 0x78)) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar1 = FUN_0002c436(pbVar4);
        if (iVar1 < 2) {
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
          if ((((int)((uint)*(ushort *)(**(int **)(iVar6 + DAT_0002b9f8) + (uint)*pbVar4 * 2) <<
                     0x1a) < 0) && (param_2 != (char *)0x0)) &&
             (pcVar2 = strchr(param_2,0x20), pcVar2 != (char *)0x0)) {
            *pbVar4 = 0x20;
          }
          else {
            *pbVar4 = 0x5f;
          }
        }
        else {
          iVar3 = iVar3 + iVar1;
        }
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar5;
}



/* ===== thunk_FUN_0002bd74 @ 0002b9fc size=4 ===== */

undefined4 thunk_FUN_0002bd74(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *__s;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *__src;
  char *__format;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = 0;
    __format = (char *)(DAT_0002be04 + 0x2bd98);
    for (iVar4 = 0; __src = (byte *)(param_1 + iVar4), *(char *)(param_1 + iVar4) != '\0';
        iVar4 = iVar4 + 1) {
      uVar1 = FUN_0002c436(__src);
      if ((int)uVar1 < 2) {
        if ((*__src == 0x5c) || (iVar2 = FUN_0002bd30(*__src,0), iVar2 == 0)) {
          uVar1 = param_3 - iVar3;
          if (uVar1 < 4) {
            return 0xffffffea;
          }
          __s = (char *)(param_2 + iVar3);
          iVar3 = iVar3 + 4;
          sprintf(__s,__format,(uint)*__src,uVar1,param_4);
        }
        else {
          if (iVar3 == param_3) {
            return 0xffffffea;
          }
          *(byte *)(param_2 + iVar3) = *__src;
          iVar3 = iVar3 + 1;
        }
      }
      else {
        if ((uint)(param_3 - iVar3) < uVar1) {
          return 0xffffffea;
        }
        memcpy((void *)(param_2 + iVar3),__src,uVar1);
        iVar3 = iVar3 + uVar1;
        iVar4 = iVar4 + -1 + uVar1;
      }
    }
    if (iVar3 != param_3) {
      *(undefined1 *)(param_2 + iVar3) = 0;
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== FUN_0002ba00 @ 0002ba00 size=98 ===== */

uint FUN_0002ba00(byte *param_1)

{
  size_t sVar1;
  uint uVar2;
  size_t sVar3;
  
  sVar1 = strlen((char *)param_1);
  sVar3 = sVar1;
  for (; 3 < (int)sVar1; sVar1 = sVar1 - 4) {
    sVar3 = DAT_0002bd2c * sVar3 ^
            DAT_0002bd2c *
            (DAT_0002bd2c * *(int *)param_1 ^ (uint)(DAT_0002bd2c * *(int *)param_1) >> 0x18);
    param_1 = param_1 + 4;
  }
  if (sVar1 == 2) {
LAB_0002bd24:
    sVar3 = sVar3 ^ (uint)param_1[1] << 8;
  }
  else {
    if (sVar1 == 3) {
      sVar3 = sVar3 ^ (uint)param_1[2] << 0x10;
      goto LAB_0002bd24;
    }
    if (sVar1 != 1) goto LAB_0002bcfc;
  }
  sVar3 = DAT_0002bd2c * (sVar3 ^ *param_1);
LAB_0002bcfc:
  uVar2 = DAT_0002bd2c * (sVar3 ^ sVar3 >> 0xd);
  return uVar2 ^ uVar2 >> 0xf;
}



/* ===== FUN_0002ba16 @ 0002ba16 size=172 ===== */

undefined8 FUN_0002ba16(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0002ba00();
  uVar2 = (uVar1 & 0xfff) >> 6;
  uVar3 = (uVar1 & 0x3ffff) >> 0xc;
  uVar4 = uVar1 & 0x3f;
  uVar1 = (uVar1 & 0xffffff) >> 0x12;
  return CONCAT44(0 << uVar1 | 1 << (uVar1 - 0x20 & 0xff) | 1U >> (0x20 - uVar1 & 0xff) |
                  0 << uVar2 | 1 << (uVar2 - 0x20 & 0xff) | 1U >> (0x20 - uVar2 & 0xff) |
                  0 << uVar3 | 1 << (uVar3 - 0x20 & 0xff) | 1U >> (0x20 - uVar3 & 0xff) |
                  0 << uVar4 | 1 << (uVar4 - 0x20 & 0xff) | 1U >> (0x20 - uVar4 & 0xff),
                  1 << uVar1 | 1 << uVar2 | 1 << uVar3 | 1 << uVar4);
}



/* ===== FUN_0002bad0 @ 0002bad0 size=418 ===== */

undefined4 * FUN_0002bad0(void)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  FILE *__stream;
  byte *__s;
  byte *pbVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *__s2;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *__s_00;
  byte abStack_4028 [16388];
  
  iVar9 = DAT_0002bc74 + 0x2bae4;
  puVar3 = calloc(1,0xc);
  iVar13 = DAT_0002bc78;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 1;
    __stream = fopen64((char *)(DAT_0002bc7c + 0x2bafa),(char *)(iVar13 + 0x2baf8));
    if (__stream != (FILE *)0x0) {
      iVar15 = 0;
      __s2 = (char *)(DAT_0002bca0 + 0x2bc64);
      iVar13 = DAT_0002bca4 + 0x2bc6a;
      iVar14 = DAT_0002bca8 + 0x2bc70;
LAB_0002bb62:
      pcVar5 = fgets((char *)abStack_4028,0x4000,__stream);
      if (pcVar5 != (char *)0x0) {
        iVar15 = iVar15 + 1;
        iVar16 = **(int **)(iVar9 + DAT_0002bc80);
        pbVar4 = abStack_4028;
        do {
          __s = pbVar4;
          uVar8 = (uint)*__s;
          uVar2 = *(ushort *)(iVar16 + uVar8 * 2);
          pbVar4 = __s + 1;
        } while ((uVar2 & 0x20) != 0);
        if ((uVar8 != 0x23) && (uVar8 != 0)) {
          pbVar4 = (byte *)strchr((char *)__s,0x3d);
          if (pbVar4 == (byte *)0x0) {
            iVar16 = FUN_000230c4();
            if (6 < iVar16) {
              iVar10 = DAT_0002bc84 + 0x2bb4e;
              iVar16 = DAT_0002bc88 + 0x2bb54;
              iVar11 = DAT_0002bc8c + 0x2bb58;
              uVar12 = 0x7f;
LAB_0002bb5a:
              FUN_00022f5c(7,0,iVar16,uVar12,iVar11,iVar10,iVar15);
            }
            goto LAB_0002bb62;
          }
          *pbVar4 = (byte)uVar2 & 0x20;
          pbVar4 = pbVar4 + 1;
          do {
            __s_00 = pbVar4;
            pbVar4 = __s_00 + 1;
          } while ((int)((uint)*(ushort *)(iVar16 + (uint)*__s_00 * 2) << 0x1a) < 0);
          sVar6 = strlen((char *)__s);
          if (sVar6 != 0) {
            do {
              sVar7 = sVar6;
              sVar6 = sVar7 - 1;
              uVar2 = *(ushort *)(iVar16 + (uint)__s[sVar6] * 2);
            } while ((uVar2 & 0x20) != 0);
            __s[sVar7] = (byte)uVar2 & 0x20;
            sVar6 = strlen((char *)__s_00);
            if (sVar6 != 0) {
              do {
                sVar7 = sVar6;
                sVar6 = sVar7 - 1;
                uVar2 = *(ushort *)(iVar16 + (uint)__s_00[sVar6] * 2);
              } while ((uVar2 & 0x20) != 0);
              __s_00[sVar7] = (byte)uVar2 & 0x20;
              if (sVar7 != 0) {
                bVar1 = *__s_00;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  if (__s_00[sVar6] != bVar1) {
                    iVar16 = FUN_000230c4();
                    if (6 < iVar16) {
                      iVar10 = DAT_0002bc90 + 0x2bbf8;
                      iVar16 = DAT_0002bc94 + 0x2bbfe;
                      iVar11 = DAT_0002bc98 + 0x2bc02;
                      uVar12 = 0x9f;
                      goto LAB_0002bb5a;
                    }
                    goto LAB_0002bb62;
                  }
                  __s_00[sVar6] = 0;
                  __s_00 = __s_00 + 1;
                }
                iVar16 = strcmp((char *)__s,__s2);
                if (iVar16 == 0) {
                  iVar16 = FUN_0002b830(__s_00);
                  if (iVar16 < 0) {
                    iVar16 = FUN_000230c4();
                    if (6 < iVar16) {
                      FUN_00022f5c(7,0,iVar13,0xab,DAT_0002bc9c + 0x2bc4e,iVar14,iVar15,__s_00);
                    }
                  }
                  else {
                    FUN_00023018();
                  }
                }
              }
            }
          }
        }
        goto LAB_0002bb62;
      }
      fclose(__stream);
    }
  }
  return puVar3;
}



/* ===== FUN_0002bcb6 @ 0002bcb6 size=28 ===== */

int * FUN_0002bcb6(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 + -1 < 1) {
      free(param_1);
      param_1 = (int *)0x0;
    }
    else {
      *param_1 = *param_1 + -1;
    }
  }
  return param_1;
}



/* ===== FUN_0002bd30 @ 0002bd30 size=62 ===== */

undefined4 FUN_0002bd30(uint param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (((param_1 - 0x30 < 10) || ((param_1 & 0xffffffdf) - 0x41 < 0x1a)) ||
     (pcVar1 = strchr((char *)(DAT_0002bd70 + 0x2bd50),param_1), pcVar1 != (char *)0x0)) {
    uVar2 = 1;
  }
  else if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = strchr(param_2,param_1);
    uVar2 = 0;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_0002bd74 @ 0002bd74 size=142 ===== */

undefined4 FUN_0002bd74(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *__s;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *__src;
  char *__format;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = 0;
    __format = (char *)(DAT_0002be04 + 0x2bd98);
    for (iVar4 = 0; __src = (byte *)(param_1 + iVar4), *(char *)(param_1 + iVar4) != '\0';
        iVar4 = iVar4 + 1) {
      uVar1 = FUN_0002c436(__src);
      if ((int)uVar1 < 2) {
        if ((*__src == 0x5c) || (iVar2 = FUN_0002bd30(*__src,0), iVar2 == 0)) {
          uVar1 = param_3 - iVar3;
          if (uVar1 < 4) {
            return 0xffffffea;
          }
          __s = (char *)(param_2 + iVar3);
          iVar3 = iVar3 + 4;
          sprintf(__s,__format,(uint)*__src,uVar1,param_4);
        }
        else {
          if (iVar3 == param_3) {
            return 0xffffffea;
          }
          *(byte *)(param_2 + iVar3) = *__src;
          iVar3 = iVar3 + 1;
        }
      }
      else {
        if ((uint)(param_3 - iVar3) < uVar1) {
          return 0xffffffea;
        }
        memcpy((void *)(param_2 + iVar3),__src,uVar1);
        iVar3 = iVar3 + uVar1;
        iVar4 = iVar4 + -1 + uVar1;
      }
    }
    if (iVar3 != param_3) {
      *(undefined1 *)(param_2 + iVar3) = 0;
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== FUN_0002c1d4 @ 0002c1d4 size=94 ===== */

undefined4 FUN_0002c1d4(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    if ((int)((uint)bVar1 << 0x18) < 0) {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar2 = 2;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        uVar2 = 3;
      }
      else if ((bVar1 & 0xf8) == 0xf0) {
        uVar2 = 4;
      }
      else if ((bVar1 & 0xfc) == 0xf8) {
        uVar2 = 5;
      }
      else if ((bVar1 & 0xfe) == 0xfc) {
        uVar2 = 6;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022f76(DAT_0002c23c + 0x2c1e8,DAT_0002c238 + 0x2c1e6,0x53,DAT_0002c234 + 0x2c1e4,param_4);
}



/* ===== FUN_0002c240 @ 0002c240 size=48 ===== */

bool FUN_0002c240(uint param_1)

{
  if (((param_1 < 0x110000) && ((param_1 & 0xfffff800) != 0xd800)) && (0x1f < param_1 - 0xfdd0)) {
    return (~param_1 & 0xfffe) != 0;
  }
  return false;
}



/* ===== FUN_0002c270 @ 0002c270 size=118 ===== */

uint FUN_0002c270(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_0002c2f4 + 0x2c288,DAT_0002c2f0 + 0x2c286,0x6a,&BYTE_0002c29c + DAT_0002c2ec,
                 param_4);
  }
  iVar2 = FUN_0002c1d4();
  switch(iVar2) {
  case 1:
    return (uint)*param_1;
  case 2:
    uVar4 = *param_1 & 0x1f;
    break;
  case 3:
    uVar4 = *param_1 & 0xf;
    break;
  case 4:
    uVar4 = *param_1 & 7;
    break;
  case 5:
    uVar4 = *param_1 & 3;
    break;
  case 6:
    uVar4 = *param_1 & 1;
    break;
  default:
    goto LAB_0002c2a0;
  }
  iVar3 = 1;
  while( true ) {
    if (iVar2 <= iVar3) {
      return uVar4;
    }
    pbVar1 = param_1 + iVar3;
    if ((*pbVar1 & 0xc0) != 0x80) break;
    iVar3 = iVar3 + 1;
    uVar4 = *pbVar1 & 0x3f | uVar4 << 6;
  }
LAB_0002c2a0:
  return 0xffffffea;
}



/* ===== FUN_0002c330 @ 0002c330 size=136 ===== */

undefined4 FUN_0002c330(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    if (param_1 != (byte *)0x0) {
      *param_1 = bVar1;
    }
    return 1;
  }
  if (param_2 < 0x800) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(param_2 >> 6) | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
    }
    return 2;
  }
  if (param_2 < 0x10000) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
      param_1[1] = (byte)((param_2 << 0x14) >> 0x1a) | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
    }
    return 3;
  }
  if (param_2 < 0x200000) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
      param_1[1] = (byte)((param_2 << 0xe) >> 0x1a) | 0x80;
      param_1[2] = (byte)((param_2 << 0x14) >> 0x1a) | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
    }
    return 4;
  }
  return 0;
}



/* ===== FUN_0002c3b8 @ 0002c3b8 size=126 ===== */

undefined1 * FUN_0002c3b8(ushort *param_1,uint param_2)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  
  puVar1 = malloc((param_2 & 0x3fffffff) * 2 + 1);
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = param_1;
    puVar5 = puVar1;
LAB_0002c3d2:
    puVar2 = puVar6;
    if (puVar2 < (ushort *)(param_2 + (int)param_1)) {
      puVar6 = puVar2 + 1;
      uVar4 = (uint)*puVar2;
      if ((uVar4 + 0x2800 & 0xffff) < 0x800) goto LAB_0002c3fa;
      goto LAB_0002c3ee;
    }
LAB_0002c40a:
    *puVar5 = 0;
  }
  return puVar1;
LAB_0002c3fa:
  if (0x3ff < (uVar4 + 0x2400 & 0xffff)) {
    if ((ushort *)(param_2 + (int)param_1) <= puVar6) goto LAB_0002c40a;
    if ((puVar2[1] + 0x2400 & 0xffff) < 0x400) {
      puVar6 = puVar2 + 2;
      uVar4 = (uint)puVar2[1] + uVar4 * 0x400 + 0xfca02400;
LAB_0002c3ee:
      iVar3 = FUN_0002c330(puVar5,uVar4);
      puVar5 = puVar5 + iVar3;
    }
  }
  goto LAB_0002c3d2;
}



/* ===== FUN_0002c436 @ 0002c436 size=124 ===== */

int FUN_0002c436(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00022f76(DAT_0002c4bc + 0x2c450,DAT_0002c4b8 + 0x2c44e,0x122,DAT_0002c4b4 + 0x2c48b,param_4)
    ;
  }
  iVar1 = FUN_0002c1d4();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 1;
    }
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (-1 < *(char *)(param_1 + iVar2)) {
        return -0x16;
      }
    }
    iVar2 = FUN_0002c270(param_1);
    if (0x7f < iVar2) {
      if (iVar2 < 0x800) {
        iVar2 = 2;
      }
      else if (iVar2 < 0x10000) {
        iVar2 = 3;
      }
      else if (iVar2 < 0x200000) {
        iVar2 = 4;
      }
      else if (iVar2 < 0x4000000) {
        iVar2 = 5;
      }
      else {
        iVar2 = 6;
      }
      if ((iVar1 == iVar2) && (iVar2 = FUN_0002c240(), iVar2 != 0)) {
        return iVar1;
      }
    }
  }
  return -0x16;
}



/* ===== FUN_0002c52c @ 0002c52c size=168 ===== */

ulonglong FUN_0002c52c(uint param_1,uint param_2)

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



/* ===== FUN_0002c5d4 @ 0002c5d4 size=32 ===== */

void FUN_0002c5d4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002c52c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002c5f4 @ 0002c5f4 size=220 ===== */

ulonglong FUN_0002c5f4(uint param_1,uint param_2)

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



/* ===== FUN_0002c6f0 @ 0002c6f0 size=76 ===== */

void FUN_0002c6f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0002c73c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002c73c @ 0002c73c size=328 ===== */

undefined8 FUN_0002c73c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0002c884 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0004c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0004c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0004c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 0004c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0004c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0004c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopendir @ 0004c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * fdopendir(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftello64 @ 0004c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t ftello64(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0004c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvmsg @ 0004c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0004c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 0004c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 0004c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchown @ 0004c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlinkat @ 0004c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0004c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsignal @ 0004c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsignal(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid @ 0004c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0004c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmin @ 0004c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0004c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_superblocks_flags @ 0004c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_superblocks_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0004c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_unref_list @ 0004c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_unref_list(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0004c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0004c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bsearch @ 0004c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_new_from_lookup @ 0004c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_new_from_lookup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_free_probe @ 0004c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_free_probe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_current_dir_name @ 0004c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chown @ 0004c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirfd @ 0004c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0004c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0004c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 0004c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 0004c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0004c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0004c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_unref @ 0004c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 0004c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatat64 @ 0004c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0004c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 0004c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_new_probe @ 0004c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_new_probe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0004c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_safe_string @ 0004c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_safe_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0004c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::symlink @ 0004c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_enable_superblocks @ 0004c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_enable_superblocks(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0004c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_device @ 0004c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 0004c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0004c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_init1 @ 0004c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseeko64 @ 0004c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko64(FILE *__stream,__off64_t __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_size @ 0004c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_enable_partitions @ 0004c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_enable_partitions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0004c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_value @ 0004c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_get_name @ 0004c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strpbrk @ 0004c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaddset @ 0004c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaddset(sigset_t *__set,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 0004c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirname @ 0004c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0004c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 0004c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0004c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0004c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendmsg @ 0004c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkostemp64 @ 0004c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkostemp64(char *__template,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0004c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_add_watch @ 0004c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0004c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::futimens @ 0004c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int futimens(int __fd,timespec *__times)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0004c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0004c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0004c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0004c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ppoll @ 0004c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0004c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execve @ 0004c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0004c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0004c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0004c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_validate_resources @ 0004c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_validate_resources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 0004c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 0004c194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam @ 0004c198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 0004c19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept4 @ 0004c1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept4(int __fd,sockaddr *__addr,socklen_t *__addr_len,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0004c1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0004c1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0004c1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004c1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe2 @ 0004c1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0004c1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signalfd @ 0004c1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0004c1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stpcpy @ 0004c1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_list_next @ 0004c1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_list_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_partitions_flags @ 0004c1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_partitions_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004c1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_get_module @ 0004c1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_get_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0004c1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0004c1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_has_value @ 0004c1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_has_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_numof_values @ 0004c1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_numof_values(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_filter_superblocks_usage @ 0004c1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_filter_superblocks_usage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0004c1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openat64 @ 0004c1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004c1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0004c1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 0004c1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 0004c200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004c204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vasprintf @ 0004c208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0004c20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0004c210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0004c214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0004c218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0004c21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0004c220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0004c224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0004c228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0004c22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_fd @ 0004c230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0004c234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004c238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_do_fullprobe @ 0004c23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_do_fullprobe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 0004c240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rmdir @ 0004c244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004c248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0004c24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004c250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 0004c254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0004c258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 0004c25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0004c260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 0004c264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_set_log_fn @ 0004c268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_set_log_fn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_lookup_value @ 0004c26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_lookup_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0004c270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 0004c274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwnam @ 0004c278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 0004c27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_is_wholedisk @ 0004c280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_is_wholedisk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0004c284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlinkat @ 0004c288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlinkat(int __fd,char *__name,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004c28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0004c290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_encode_string @ 0004c294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_encode_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004c298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigprocmask @ 0004c29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::basename @ 0004c2a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 0004c2a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 0004c2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0004c2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0004c2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0004c2b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_load_resources @ 0004c2b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_load_resources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0004c2bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_do_safeprobe @ 0004c2c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_do_safeprobe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0004c2c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_probe_insert_module @ 0004c2c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_probe_insert_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmax @ 0004c2cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004c2d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004c2d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0004c2d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0004c2dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004c2e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0004c2e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srand @ 0004c2e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0004c2ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::utimensat @ 0004c2f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004c2f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::statfs64 @ 0004c2f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int statfs64(char *__file,statfs64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0004c2fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0004c300 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoll @ 0004c304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mempcpy @ 0004c308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004c30c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0004c310 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0004c314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_new @ 0004c318 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0004c31c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_unref @ 0004c320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004c324 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0004c328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0004c32c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigemptyset @ 0004c330 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0004c334 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


