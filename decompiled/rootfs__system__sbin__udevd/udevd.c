// udevd — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00012e14 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 00012e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0004900c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00049010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00012e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00049014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 00012e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_00049018)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::inotify_init1 @ 00012e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_init1_0004901c)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_set_partitions_flags @ 00012e74 size=12 ===== */

void blkid_probe_set_partitions_flags(void)

{
  (*(code *)PTR_blkid_probe_set_partitions_flags_00049020)();
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00012e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00049024)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::ioctl @ 00012e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00049028)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00012e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_0004902c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00012ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00049030)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00012eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00049034)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::connect @ 00012ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00049038)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00012ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_0004903c)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00049040)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 00012ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_00049044)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00049048)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 00012efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0004904c)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00012f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00049050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012f14 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00049054)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00012f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00049058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 00012f2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0004905c)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::munmap @ 00012f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00049060)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getgrgid @ 00012f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_00049064)(__gid);
  return pgVar1;
}



/* ===== <EXTERNAL>::statfs64 @ 00012f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int statfs64(char *__file,statfs64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_statfs64_00049068)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00012f5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004906c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 00012f68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_00049070)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::bsearch @ 00012f74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_00049074)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::usleep @ 00012f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00049078)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_unref @ 00012f8c size=12 ===== */

void kmod_module_unref(void)

{
  (*(code *)PTR_kmod_module_unref_0004907c)();
  return;
}



/* ===== <EXTERNAL>::execve @ 00012f98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execve_00049080)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__libc_current_sigrtmax @ 00012fa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___libc_current_sigrtmax_00049084)();
  return iVar1;
}



/* ===== <EXTERNAL>::utimensat @ 00012fb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utimensat_00049088)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_get_value @ 00012fbc size=12 ===== */

void blkid_probe_get_value(void)

{
  (*(code *)PTR_blkid_probe_get_value_0004908c)();
  return;
}



/* ===== <EXTERNAL>::getpid @ 00012fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00049090)();
  return _Var1;
}



/* ===== <EXTERNAL>::blkid_probe_set_device @ 00012fd4 size=12 ===== */

void blkid_probe_set_device(void)

{
  (*(code *)PTR_blkid_probe_set_device_00049094)();
  return;
}



/* ===== <EXTERNAL>::qsort @ 00012fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00049098)(__base);
  return;
}



/* ===== <EXTERNAL>::fchown @ 00012fec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchown_0004909c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_do_safeprobe @ 00012ff8 size=12 ===== */

void blkid_do_safeprobe(void)

{
  (*(code *)PTR_blkid_do_safeprobe_000490a0)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 00013004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_000490a4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dirname @ 00013010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_dirname_000490a8)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 0001301c size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_000490ac)();
  return;
}



/* ===== <EXTERNAL>::prctl @ 00013028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_000490b0)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00013034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_000490b4)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00013040 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_000490b8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 0001304c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_000490bc)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00013058 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000490c0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dup2 @ 00013064 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_000490c4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__libc_current_sigrtmin @ 00013070 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___libc_current_sigrtmin_000490c8)();
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 0001307c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_000490cc)();
  return _Var1;
}



/* ===== <EXTERNAL>::kmod_unref @ 00013088 size=12 ===== */

void kmod_unref(void)

{
  (*(code *)PTR_kmod_unref_000490d0)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00013098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_000490d4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::blkid_probe_lookup_value @ 000130a4 size=12 ===== */

void blkid_probe_lookup_value(void)

{
  (*(code *)PTR_blkid_probe_lookup_value_000490d8)();
  return;
}



/* ===== <EXTERNAL>::isatty @ 000130b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_000490dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 000130bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_000490e0)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::openat64 @ 000130c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_openat64_000490e4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 000130e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_000490ec)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_load_resources @ 000130ec size=12 ===== */

void kmod_load_resources(void)

{
  (*(code *)PTR_kmod_load_resources_000490f0)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000130f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_000490f4)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::rmdir @ 00013104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_000490f8)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00013110 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_000490fc)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::lchown @ 0001311c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lchown_00049100)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::mkostemp64 @ 00013128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkostemp64(char *__template,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkostemp64_00049104)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::mempcpy @ 00013134 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mempcpy_00049108)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00013140 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0004910c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::realpath @ 0001314c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_00049110)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00013158 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_00049114)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::chown @ 00013164 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chown_00049118)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 00013170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0004911c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_do_fullprobe @ 0001317c size=12 ===== */

void blkid_do_fullprobe(void)

{
  (*(code *)PTR_blkid_do_fullprobe_00049120)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00013188 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_00049124)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00013194 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00049128)();
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 000131a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0004912c)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_filter_superblocks_usage @ 000131ac size=12 ===== */

void blkid_probe_filter_superblocks_usage(void)

{
  (*(code *)PTR_blkid_probe_filter_superblocks_usage_00049130)();
  return;
}



/* ===== <EXTERNAL>::chmod @ 000131b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_00049134)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 000131c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00049138)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 000131d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004913c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__tls_get_addr @ 000131dc size=12 ===== */

void __tls_get_addr(void)

{
  (*(code *)PTR___tls_get_addr_00049140)();
  return;
}



/* ===== <EXTERNAL>::strnlen @ 000131e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_00049144)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::accept @ 000131f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00049148)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_numof_values @ 00013200 size=12 ===== */

void blkid_probe_numof_values(void)

{
  (*(code *)PTR_blkid_probe_numof_values_0004914c)();
  return;
}



/* ===== <EXTERNAL>::rename @ 0001320c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_00049150)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00013218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00049154)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::basename @ 00013224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_basename_00049158)(__filename);
  return pcVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 00013230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_0004915c)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001323c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00049160)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::kmod_module_new_from_lookup @ 00013248 size=12 ===== */

void kmod_module_new_from_lookup(void)

{
  (*(code *)PTR_kmod_module_new_from_lookup_00049164)();
  return;
}



/* ===== <EXTERNAL>::write @ 00013254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00049168)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00013260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0004916c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::kill @ 0001326c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00049170)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 00013278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00049174)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::unlinkat @ 00013284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlinkat(int __fd,char *__name,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlinkat_00049178)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::signalfd @ 00013290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_signalfd_0004917c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001329c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00049180)();
  return;
}



/* ===== <EXTERNAL>::chdir @ 000132a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_00049184)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::setsockopt @ 000132b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00049188)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_is_wholedisk @ 000132c0 size=12 ===== */

void blkid_probe_is_wholedisk(void)

{
  (*(code *)PTR_blkid_probe_is_wholedisk_0004918c)();
  return;
}



/* ===== <EXTERNAL>::blkid_safe_string @ 000132cc size=12 ===== */

void blkid_safe_string(void)

{
  (*(code *)PTR_blkid_safe_string_00049190)();
  return;
}



/* ===== <EXTERNAL>::umask @ 000132d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_00049194)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::ferror @ 000132e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_00049198)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 000132f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0004919c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::rand @ 000132fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_000491a0)();
  return iVar1;
}



/* ===== <EXTERNAL>::flock @ 00013308 size=12 ===== */

void flock(void)

{
  (*(code *)PTR_flock_000491a4)();
  return;
}



/* ===== <EXTERNAL>::read @ 00013314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000491a8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 00013320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_rm_watch_000491ac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dirfd @ 0001332c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dirfd_000491b0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::get_current_dir_name @ 00013338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_get_current_dir_name_000491b4)();
  return pcVar1;
}



/* ===== <EXTERNAL>::blkid_encode_string @ 00013344 size=12 ===== */

void blkid_encode_string(void)

{
  (*(code *)PTR_blkid_encode_string_000491b8)();
  return;
}



/* ===== <EXTERNAL>::sendmsg @ 00013350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendmsg_000491bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001335c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000491c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 00013368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
  cmsghdr *pcVar1;
  
  pcVar1 = (cmsghdr *)(*(code *)PTR___cmsg_nxthdr_000491c4)(__mhdr);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00013374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000491c8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00013380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000491cc)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 0001338c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000491d0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00013398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_000491d4)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 000133a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_000491d8)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000133b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000491dc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::listen @ 000133bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_000491e0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 000133c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_000491e4)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::blkid_free_probe @ 000133d4 size=12 ===== */

void blkid_free_probe(void)

{
  (*(code *)PTR_blkid_free_probe_000491e8)();
  return;
}



/* ===== <EXTERNAL>::fork @ 000133e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_000491ec)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 000133ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000491f0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::lstat64 @ 000133f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_000491f4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_get_module @ 00013404 size=12 ===== */

void kmod_module_get_module(void)

{
  (*(code *)PTR_kmod_module_get_module_000491f8)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00013410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000491fc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 0001342c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00049204)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtoull @ 00013438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00049208)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::symlink @ 00013444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_symlink_0004920c)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 00013450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_00049210)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00013460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00049214)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 0001346c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_00049218)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::srand @ 00013478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0004921c)(__seed);
  return;
}



/* ===== <EXTERNAL>::kmod_module_probe_insert_module @ 00013484 size=12 ===== */

void kmod_module_probe_insert_module(void)

{
  (*(code *)PTR_kmod_module_probe_insert_module_00049220)();
  return;
}



/* ===== <EXTERNAL>::__sched_cpucount @ 00013490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __sched_cpucount(size_t __setsize,cpu_set_t *__setp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___sched_cpucount_00049224)(__setsize);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_enable_superblocks @ 0001349c size=12 ===== */

void blkid_probe_enable_superblocks(void)

{
  (*(code *)PTR_blkid_probe_enable_superblocks_00049228)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 000134a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0004922c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 000134b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00049230)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 000134c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00049234)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::poll @ 000134cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00049238)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::pipe2 @ 000134d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe2_0004923c)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000134e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00049240)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getpwuid @ 000134f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_00049244)(__uid);
  return ppVar1;
}



/* ===== <EXTERNAL>::blkid_probe_enable_partitions @ 00013500 size=12 ===== */

void blkid_probe_enable_partitions(void)

{
  (*(code *)PTR_blkid_probe_enable_partitions_00049248)();
  return;
}



/* ===== <EXTERNAL>::strsignal @ 0001350c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsignal(int __sig)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsignal_0004924c)(__sig);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpwnam @ 00013518 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwnam_00049250)(__name);
  return ppVar1;
}



/* ===== <EXTERNAL>::futimens @ 00013524 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int futimens(int __fd,timespec *__times)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_futimens_00049254)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fstatat64 @ 00013530 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatat64_00049258)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fgetc @ 0001353c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0004925c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00013548 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00049260)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 00013554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_00049264)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 00013560 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_00049268)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_probe_set_superblocks_flags @ 0001356c size=12 ===== */

void blkid_probe_set_superblocks_flags(void)

{
  (*(code *)PTR_blkid_probe_set_superblocks_flags_0004926c)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 00013578 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00049270)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::sched_getaffinity @ 00013584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_getaffinity(__pid_t __pid,size_t __cpusetsize,cpu_set_t *__cpuset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_getaffinity_00049274)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00013590 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00049278)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::kmod_module_unref_list @ 0001359c size=12 ===== */

void kmod_module_unref_list(void)

{
  (*(code *)PTR_kmod_module_unref_list_0004927c)();
  return;
}



/* ===== <EXTERNAL>::accept4 @ 000135a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept4(int __fd,sockaddr *__addr,socklen_t *__addr_len,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept4_00049280)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::inotify_add_watch @ 000135b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_add_watch_00049284)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_validate_resources @ 000135c0 size=12 ===== */

void kmod_validate_resources(void)

{
  (*(code *)PTR_kmod_validate_resources_00049288)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 000135cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0004928c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_probe_has_value @ 000135d8 size=12 ===== */

void blkid_probe_has_value(void)

{
  (*(code *)PTR_blkid_probe_has_value_00049290)();
  return;
}



/* ===== <EXTERNAL>::getsockopt @ 000135e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00049294)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::socketpair @ 000135f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socketpair_00049298)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::strftime @ 000135fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0004929c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::kmod_new @ 00013608 size=12 ===== */

void kmod_new(void)

{
  (*(code *)PTR_kmod_new_000492a0)();
  return;
}



/* ===== <EXTERNAL>::access @ 00013614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000492a4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::blkid_new_probe @ 00013620 size=12 ===== */

void blkid_new_probe(void)

{
  (*(code *)PTR_blkid_new_probe_000492a8)();
  return;
}



/* ===== <EXTERNAL>::kmod_list_next @ 0001362c size=12 ===== */

void kmod_list_next(void)

{
  (*(code *)PTR_kmod_list_next_000492ac)();
  return;
}



/* ===== <EXTERNAL>::readlinkat @ 00013638 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlinkat_000492b0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00013644 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000492b4)();
  return piVar1;
}



/* ===== <EXTERNAL>::getgrnam @ 00013650 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrnam_000492b8)(__name);
  return pgVar1;
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 00013660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_makedev_000492bc)(__major);
  return uVar1;
}



/* ===== <EXTERNAL>::atoi @ 0001366c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000492c0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 00013678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_000492c4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::_exit @ 00013684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_000492c8)(__status);
  return;
}



/* ===== <EXTERNAL>::ppoll @ 00013690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ppoll_000492cc)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 0001369c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_000492d0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 000136a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000492d4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::blkid_probe_get_fd @ 000136b4 size=12 ===== */

void blkid_probe_get_fd(void)

{
  (*(code *)PTR_blkid_probe_get_fd_000492d8)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 000136c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000492dc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000136cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000492e0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setsid @ 000136d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_setsid_000492e4)();
  return _Var1;
}



/* ===== <EXTERNAL>::closedir @ 000136e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000492e8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_set_log_fn @ 000136f0 size=12 ===== */

void kmod_set_log_fn(void)

{
  (*(code *)PTR_kmod_set_log_fn_000492ec)();
  return;
}



/* ===== <EXTERNAL>::vasprintf @ 000136fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_000492f0)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::recvmsg @ 00013708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvmsg_000492f4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00013714 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_000492f8)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00013720 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000492fc)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001372c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00049300)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::kmod_module_get_name @ 00013738 size=12 ===== */

void kmod_module_get_name(void)

{
  (*(code *)PTR_kmod_module_get_name_00049304)();
  return;
}



/* ===== <EXTERNAL>::strpbrk @ 00013744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strpbrk_00049308)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::raise @ 00013750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004930c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00013760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00049310)(__ptr);
  return;
}



/* ===== <EXTERNAL>::blkid_probe_get_size @ 0001376c size=12 ===== */

void blkid_probe_get_size(void)

{
  (*(code *)PTR_blkid_probe_get_size_00049314)();
  return;
}



/* ===== <EXTERNAL>::sigprocmask @ 00013778 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigprocmask_00049318)(__how);
  return iVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00013784 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0004931c)();
  return;
}



/* ===== <EXTERNAL>::getsockname @ 00013790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_00049320)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 0001379c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00049324)(__filename);
  return pFVar1;
}



/* ===== FUN_000137a8 @ 000137a8 size=5640 ===== */

/* WARNING: Type propagation algorithm not settling */

uint FUN_000137a8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  size_t *psVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  __uid_t _Var12;
  uint uVar13;
  ssize_t sVar14;
  void *__fd;
  int iVar15;
  __pid_t _Var16;
  FILE *__stream;
  void *pvVar17;
  int *piVar18;
  char *pcVar19;
  size_t sVar20;
  undefined4 uVar21;
  cmsghdr *pcVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  uint uVar27;
  uint __n;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  void *__fd_00;
  undefined1 *puVar31;
  uint uVar32;
  uint uVar33;
  int *piVar34;
  void *__fd_01;
  cmsghdr *pcVar35;
  uint uVar36;
  uint uVar37;
  bool bVar38;
  bool bVar39;
  __cpu_mask _Var40;
  __cpu_mask _Var41;
  undefined8 uVar42;
  longlong lVar43;
  void *local_660;
  undefined1 auStack_630 [4];
  undefined4 local_62c;
  undefined1 auStack_628 [12];
  ulong local_61c;
  epoll_event local_618;
  epoll_event local_608;
  epoll_event local_5f8;
  epoll_event local_5e8;
  epoll_event local_5d8;
  epoll_event local_5c8 [8];
  cmsghdr local_548;
  __cpu_mask local_53c;
  void *local_538;
  __cpu_mask _Stack_534;
  cpu_set_t local_438 [8];
  
  local_618._4_4_ = 0;
  local_618.events = 1;
  local_608._4_4_ = 0;
  local_608.events = 1;
  local_5f8._4_4_ = 0;
  local_5f8.events = 1;
  local_5e8._4_4_ = 0;
  local_5e8.events = 1;
  local_5d8._4_4_ = 0;
  local_5d8.events = 1;
  local_618.data.ptr = (void *)0x0;
  local_618.data.u64._4_4_ = 0;
  local_62c = 1;
  local_608.data.ptr = (void *)0x0;
  local_608.data.u64._4_4_ = 0;
  local_5f8.data.ptr = (void *)0x0;
  local_5f8.data.u64._4_4_ = 0;
  local_5e8.data.ptr = (void *)0x0;
  local_5e8.data.u64._4_4_ = 0;
  local_5d8.data.ptr = (void *)0x0;
  local_5d8.data.u64._4_4_ = 0;
  iVar8 = FUN_0002b38c();
  if (iVar8 != 0) {
    FUN_00022968(7);
    FUN_0002279c();
    uVar21 = DAT_00013b20;
    uVar28 = DAT_00013b1c;
    puVar6 = DAT_00013ac4;
    uVar23 = DAT_00013ab8;
    uVar30 = DAT_00013abc;
    if (param_1 < 0) {
      uVar28 = 0x426;
      uVar21 = DAT_00013ac0;
    }
    else {
      if (param_2 != 0) {
LAB_00013846:
        uVar33 = 0;
        iVar10 = getopt_long(param_1,param_2,uVar21,uVar28,0);
        puVar9 = DAT_00013ae4;
        if (iVar10 < 0) goto code_r0x0001385e;
        if (iVar10 == 99) goto LAB_00013944;
        if (iVar10 < 100) {
          if (iVar10 != 0x44) {
            if (0x44 < iVar10) goto LAB_000138f4;
            if (iVar10 == 0x3f) goto LAB_00013c1c;
LAB_000138e6:
            while( true ) {
              iVar10 = FUN_000229f4(DAT_00013adc,DAT_00013ab8,0x45c,DAT_00013abc);
LAB_000138f4:
              puVar9 = DAT_00013ae4;
              if (iVar10 == 0x4e) break;
              if (iVar10 == 0x56) {
                puts(DAT_00013ae0);
                goto LAB_00013a3c;
              }
            }
            pcVar19 = (char *)*puVar6;
            iVar10 = strcmp(pcVar19,DAT_00013b00);
            if (iVar10 == 0) {
              uVar33 = 1;
            }
            else {
              iVar10 = strcmp(pcVar19,DAT_00013b04);
              if (iVar10 == 0) {
                puVar9[0xb] = 0;
                goto LAB_00013846;
              }
              iVar10 = strcmp(pcVar19,DAT_00013b08);
              if (iVar10 != 0) {
                iVar10 = FUN_00022a68();
                if (2 < iVar10) {
                  FUN_00022900(3,0,DAT_00013ab8,0x44f,DAT_00013aec,DAT_00013b0c);
                }
                uVar33 = 0;
                goto LAB_00013a3c;
              }
              uVar33 = 0xffffffff;
            }
            puVar9[0xb] = uVar33;
            goto LAB_00013846;
          }
          *(undefined1 *)(DAT_00013ad0 + 0xf) = 1;
          goto LAB_00013846;
        }
        if (iVar10 != 0x65) {
          if (iVar10 < 0x65) {
            DAT_00013ad0[0xe] = 1;
          }
          else {
            if (iVar10 == 0x68) {
              printf(DAT_00013b14,*DAT_00013b10);
              goto LAB_00013a3c;
            }
            if (iVar10 != 0x74) goto LAB_000138e6;
            iVar10 = FUN_00024edc(*puVar6,DAT_00013ae4);
            if (iVar10 < 0) {
              iVar10 = FUN_00022a68();
              if (3 < iVar10) {
                uVar30 = *puVar6;
                uVar29 = 0x43e;
                uVar23 = DAT_00013ae8;
                goto LAB_0001396c;
              }
            }
            else {
              uVar33 = (uint)((ulonglong)*puVar9 * (ulonglong)DAT_00013afc);
              uVar13 = DAT_00013afc * puVar9[1] +
                       (int)((ulonglong)*puVar9 * (ulonglong)DAT_00013afc >> 0x20);
              *puVar9 = uVar33;
              puVar9[1] = uVar13;
              if (uVar13 == 0 && uVar33 < 3) {
                uVar42 = 1;
              }
              else {
                uVar42 = FUN_0002bfac(uVar33,uVar13,3,0);
              }
              *(undefined8 *)(puVar9 + 2) = uVar42;
            }
          }
          goto LAB_00013846;
        }
        iVar10 = FUN_00024e50(*puVar6,DAT_00013af4);
        if ((-1 < iVar10) || (iVar10 = FUN_00022a68(), iVar10 < 4)) goto LAB_00013846;
        uVar30 = *puVar6;
        uVar29 = 0x439;
        uVar23 = DAT_00013af8;
        goto LAB_0001396c;
      }
      uVar28 = 0x427;
      uVar21 = DAT_00013ad8;
    }
    goto LAB_00013834;
  }
  puVar9 = (uint *)__errno_location();
  uVar33 = *puVar9;
  iVar10 = FUN_00022a68();
  if (iVar10 < 3) goto LAB_00013f4c;
  uVar28 = 0x474;
  uVar21 = DAT_00013ab8;
  uVar23 = DAT_00013ab4;
  uVar30 = DAT_00013ab0;
  goto LAB_000138be;
LAB_00013944:
  iVar10 = FUN_00024d6e(*puVar6,DAT_00013ad0);
  if ((-1 < iVar10) || (iVar10 = FUN_00022a68(), iVar10 < 4)) goto LAB_00013846;
  uVar30 = *puVar6;
  uVar29 = 0x434;
  uVar23 = DAT_00013af0;
LAB_0001396c:
  FUN_00022900(4,0,DAT_00013ab8,uVar29,DAT_00013aec,uVar23,uVar30);
  goto LAB_00013846;
code_r0x0001385e:
  iVar10 = FUN_00026b04(DAT_00013ac8);
  if ((iVar10 < 0) && (iVar11 = FUN_00022a68(), 3 < iVar11)) {
    FUN_00022900(4,iVar10,DAT_00013ab8,0x481,DAT_00013ab4,DAT_00013acc);
  }
  piVar7 = DAT_00013ad0;
  if ((char)DAT_00013ad0[0xf] != '\0') {
    FUN_00022968(0);
    FUN_000229bc(7);
  }
  _Var12 = getuid();
  if (_Var12 == 0) {
    uVar13 = FUN_000237f2(DAT_00013d84);
    if ((int)uVar13 < 0) {
      iVar10 = FUN_00022a68();
      uVar33 = uVar13;
      if (iVar10 < 3) goto LAB_00013a3c;
      uVar30 = 0x48f;
      uVar28 = DAT_00013d8c;
      uVar21 = DAT_00013d90;
      uVar23 = DAT_00013d88;
LAB_00013b48:
      FUN_00022900(3,uVar13,uVar28,uVar30,uVar21,uVar23);
      goto LAB_00013a3c;
    }
    iVar10 = chdir(DAT_00013d94);
    if (-1 < iVar10) {
      umask(0x12);
      FUN_0002a07a(iVar8,DAT_00013d9c,1);
      iVar10 = mkdir(DAT_00013da0,0x1ed);
      if (iVar10 < 0) {
        puVar9 = (uint *)__errno_location();
        uVar33 = *puVar9;
        if (uVar33 != 0x11) {
          iVar10 = FUN_00022a68();
          if (iVar10 < 3) goto LAB_00013f4c;
          uVar28 = 0x4a0;
          uVar21 = DAT_00013ab8;
          uVar23 = DAT_00013d90;
          uVar30 = DAT_00013da4;
          goto LAB_000138be;
        }
      }
      FUN_00020494(0,0xffffffff);
      if (piVar7[0xe] != 0) {
        iVar10 = open64(DAT_00013da8,2);
        if (iVar10 < 0) {
          iVar10 = FUN_00022a68();
          if (2 < iVar10) {
            FUN_00022900(3,0,DAT_00013d8c,0x4b3,DAT_00013d90,DAT_00013dac);
          }
        }
        else {
          sVar14 = write(1,(void *)0x0,0);
          if (sVar14 < 0) {
            dup2(iVar10,1);
          }
          sVar14 = write(2,(void *)0x0,0);
          if (sVar14 < 0) {
            dup2(iVar10,2);
          }
          if (2 < iVar10) {
            close(iVar10);
          }
        }
      }
      iVar10 = FUN_0001bf70(iVar8);
      piVar7[3] = iVar10;
      if (iVar10 == 0) {
        iVar10 = FUN_00022a68();
        if (2 < iVar10) {
          uVar28 = 0x4ba;
          uVar30 = DAT_00013db0;
LAB_00013c4e:
          uVar33 = 0x16;
          uVar21 = DAT_00013d8c;
          uVar23 = DAT_00013d90;
          goto LAB_000138be;
        }
      }
      else {
        local_660 = (void *)FUN_0001bf8c();
        iVar10 = FUN_0002a538(iVar8,DAT_00013db4);
        piVar7[2] = iVar10;
        if (iVar10 == 0) {
          iVar10 = FUN_00022a68();
          if (2 < iVar10) {
            uVar28 = 0x4c1;
            uVar30 = DAT_00013db8;
            goto LAB_00013c4e;
          }
        }
        else {
          __fd = (void *)FUN_0002a8ac();
          iVar10 = FUN_0002a766(piVar7[2]);
          if (iVar10 < 0) {
            iVar10 = FUN_00022a68();
            if (2 < iVar10) {
              uVar28 = 0x4c7;
              uVar30 = DAT_00013dbc;
              goto LAB_00013c4e;
            }
          }
          else {
            iVar10 = FUN_0001bd9c(piVar7[3]);
            if (-1 < iVar10) {
              FUN_0002a824(piVar7[2],0x8000000);
              iVar10 = FUN_00022a68();
              if (5 < iVar10) {
                FUN_00022900(6,0,DAT_00013d8c,0x4d2,DAT_00013d90,DAT_00013dc4);
              }
              iVar10 = DAT_00013dc8;
              FUN_0001c470(iVar8);
              iVar11 = FUN_0001a120(iVar8,*(undefined4 *)(iVar10 + 0x2c));
              piVar7[6] = iVar11;
              if (iVar11 == 0) {
                iVar10 = FUN_00022a68();
                if (2 < iVar10) {
                  uVar28 = 0x4d8;
                  uVar23 = DAT_00013d90;
                  uVar30 = DAT_00013dcc;
LAB_00013d18:
                  uVar33 = 0xc;
                  uVar21 = DAT_00013d8c;
                  goto LAB_000138be;
                }
              }
              else {
                iVar11 = FUN_0001b928();
                if ((iVar11 < 0) && (iVar15 = FUN_00022a68(), 2 < iVar15)) {
                  FUN_00022900(3,iVar11,DAT_00013d8c,0x4de,DAT_00013d90,DAT_00013dd0);
                }
                if (piVar7[0xe] != 0) {
                  _Var16 = fork();
                  if (_Var16 == -1) {
                    puVar9 = (uint *)__errno_location();
                    uVar33 = *puVar9;
                    iVar10 = FUN_00022a68();
                    if (iVar10 < 3) goto LAB_00013f4c;
                    uVar28 = 0x4e8;
                    uVar21 = DAT_00013ab8;
                    uVar23 = DAT_00013d90;
                    uVar30 = DAT_00013dd4;
                    goto LAB_000138be;
                  }
                  if (_Var16 != 0) {
                    FUN_000237f6();
                    FUN_00022890();
                    /* WARNING: Subroutine does not return */
                    _exit(0);
                  }
                  setsid();
                  FUN_00020660(DAT_0001401c,DAT_00014018);
                }
                if (*piVar7 == 0) {
                  *piVar7 = 8;
                  iVar11 = sched_getaffinity(0,0x80,local_438);
                  if (iVar11 == 0) {
                    iVar11 = __sched_cpucount(0x80,local_438);
                    *piVar7 = *piVar7 + iVar11 * 2;
                  }
                }
                iVar11 = FUN_00022a68();
                if (6 < iVar11) {
                  FUN_00022900(7,0,DAT_00014020,0x4fe,DAT_00014028,DAT_00014024,*piVar7);
                }
                FUN_0002a04e(DAT_0001402c);
                __stream = fopen64(DAT_00014034,DAT_00014030);
                if (__stream != (FILE *)0x0) {
                  _Var16 = getpid();
                  fprintf(__stream,DAT_00014038,_Var16);
                  fclose(__stream);
                }
                if (((char)piVar7[0xf] == '\0') && (iVar11 = open64(DAT_0001403c,2), -1 < iVar11)) {
                  dup2(iVar11,0);
                  dup2(iVar11,1);
                  dup2(iVar11,2);
                  close(iVar11);
                }
                iVar11 = FUN_00017134(iVar8);
                *(int *)(iVar10 + 0x28) = iVar11;
                if (-1 < iVar11) {
                  inotify_add_watch(iVar11,DAT_00014044,0x2c8);
                  inotify_add_watch(iVar11,DAT_00014048,0x2c8);
                  iVar11 = access(DAT_0001404c,0);
                  if (iVar11 < 0) {
                    FUN_00022df6(DAT_0001404c,0x1ed);
                  }
                  inotify_add_watch(*(int *)(iVar10 + 0x28),DAT_0001404c,0x2c8);
                  FUN_000172c0(iVar8);
                  sigfillset((sigset_t *)auStack_628);
                  sigprocmask(2,(sigset_t *)auStack_628,DAT_00014050);
                  pvVar17 = (void *)signalfd(-1,(sigset_t *)auStack_628,DAT_00014054);
                  *(void **)(iVar10 + 0x18) = pvVar17;
                  if ((int)pvVar17 < 0) {
                    puVar9 = (uint *)__errno_location();
                    uVar33 = *puVar9;
                    iVar10 = FUN_00022a68();
                    if (iVar10 < 3) {
LAB_00013f4c:
                      uVar33 = ((int)uVar33 >> 0x1f) - (uVar33 ^ (int)uVar33 >> 0x1f);
                      goto LAB_00013a3c;
                    }
                    uVar28 = 0x52c;
                    uVar21 = DAT_00013ab8;
                    uVar23 = DAT_00014028;
                    uVar30 = DAT_00014058;
                  }
                  else {
                    iVar11 = socketpair(1,DAT_00014060,0,DAT_0001405c);
                    if (-1 < iVar11) {
                      __fd_00 = *(void **)(iVar10 + 0x20);
                      uVar33 = setsockopt((int)__fd_00,1,0x10,&local_62c,4);
                      if ((int)uVar33 < 0) {
                        puVar9 = (uint *)__errno_location();
                        uVar33 = *puVar9;
                        iVar8 = FUN_00022a68();
                        if (2 < iVar8) {
                          uVar33 = FUN_00022900(3,uVar33,DAT_00014020,0x539,DAT_00014028,
                                                DAT_00014068);
                          return uVar33;
                        }
                        return ((int)uVar33 >> 0x1f) - (uVar33 ^ (int)uVar33 >> 0x1f);
                      }
                      __fd_01 = *(void **)(iVar10 + 0x28);
                      local_618.data.fd = (int)local_660;
                      local_608.data.fd = (int)__fd_01;
                      local_5f8.data.fd = (int)pvVar17;
                      local_5e8.data.fd = (int)__fd;
                      local_5d8.data.fd = (int)__fd_00;
                      iVar11 = epoll_create1(0x80000);
                      *(int *)(iVar10 + 0x1c) = iVar11;
                      if (iVar11 < 0) {
                        iVar10 = FUN_00022a68();
                        if (iVar10 < 3) goto LAB_00013a3c;
                        puVar9 = (uint *)__errno_location();
                        uVar30 = 0x543;
                        uVar23 = DAT_0001406c;
                      }
                      else {
                        iVar10 = epoll_ctl(iVar11,1,(int)local_660,&local_618);
                        if ((((-1 < iVar10) &&
                             (iVar10 = epoll_ctl(iVar11,1,(int)__fd_01,&local_608), -1 < iVar10)) &&
                            (iVar10 = epoll_ctl(iVar11,1,(int)pvVar17,&local_5f8), -1 < iVar10)) &&
                           ((iVar10 = epoll_ctl(iVar11,1,(int)__fd,&local_5e8), -1 < iVar10 &&
                            (iVar10 = epoll_ctl(iVar11,1,(int)__fd_00,&local_5d8),
                            piVar7 = DAT_000141fc, -1 < iVar10)))) {
LAB_000140b8:
                          do {
                            puVar9 = DAT_00014200;
                            if (*(char *)((int)DAT_000141fc + 0x3d) == '\0') {
                              iVar10 = FUN_0002a054(DAT_00014200 + 4);
                              if (iVar10 == 0) {
                                iVar10 = 3000;
                              }
                              else {
                                iVar10 = 3000;
                                iVar11 = FUN_00021c78(*DAT_00014208);
                                if (iVar11 == 0) {
                                  iVar10 = -1;
                                }
                              }
                            }
                            else {
                              if (-1 < (int)local_660) {
                                epoll_ctl(DAT_00014200[7],2,(int)local_660,(epoll_event *)0x0);
                                local_660 = (void *)0xffffffff;
                              }
                              iVar10 = piVar7[2];
                              if (iVar10 != 0) {
                                epoll_ctl(puVar9[7],2,(int)__fd,(epoll_event *)0x0);
                                FUN_0002a872(iVar10);
                                piVar7[2] = 0;
                              }
                              uVar13 = puVar9[10];
                              if (-1 < (int)uVar13) {
                                epoll_ctl(puVar9[7],2,uVar13,(epoll_event *)0x0);
                                close(uVar13);
                                puVar9[10] = 0xffffffff;
                              }
                              FUN_0001541a(1);
                              FUN_000152c0();
                              iVar10 = FUN_0002a054(DAT_00014204);
                              if ((iVar10 != 0) &&
                                 (iVar10 = FUN_00021c78(*DAT_00014208), iVar10 == 0))
                              goto LAB_00013a3c;
                              iVar10 = 30000;
                            }
                            FUN_00015378();
                            iVar10 = epoll_wait(puVar9[7],local_5c8,8,iVar10);
                          } while (iVar10 < 0);
                          if (iVar10 == 0) {
                            if (*(char *)((int)piVar7 + 0x3d) != '\0') {
                              iVar10 = FUN_00022a68();
                              if (iVar10 < 3) goto LAB_00013a3c;
                              uVar30 = 0x587;
                              uVar13 = 0;
                              uVar28 = DAT_00014210;
                              uVar21 = DAT_00014214;
                              uVar23 = DAT_0001420c;
                              goto LAB_00013b48;
                            }
                            iVar10 = FUN_0002a054(DAT_000144c8);
                            if (iVar10 != 0) {
                              iVar10 = FUN_00022a68();
                              if (6 < iVar10) {
                                FUN_00022900(7,0,DAT_000144d0,0x58d,DAT_000144d4,DAT_000144cc);
                              }
                              FUN_000152c0();
                            }
                            uVar21 = DAT_000144d4;
                            uVar28 = DAT_000144d0;
                            local_438[0].__bits[0] = 0xfffffffe;
                            local_438[0].__bits[1] = 0;
                            iVar10 = FUN_000215c0(*DAT_000144d8,local_438);
                            while (iVar10 != 0) {
                              if (*(int *)(iVar10 + 0x18) == 1) {
                                iVar11 = *(int *)(iVar10 + 0x1c);
                                if (iVar11 == 0) {
                                  uVar28 = 0x599;
                                  uVar21 = DAT_00014508;
                                  uVar23 = DAT_000144d0;
                                  uVar30 = DAT_00014504;
                                  goto LAB_00013834;
                                }
                                lVar43 = FUN_00024758();
                                lVar43 = lVar43 - *(longlong *)(iVar11 + 0x50);
                                uVar13 = (uint)lVar43;
                                uVar36 = (uint)((ulonglong)lVar43 >> 0x20);
                                bVar39 = uVar36 <= puVar9[3];
                                if (puVar9[3] == uVar36) {
                                  bVar39 = uVar13 <= puVar9[2];
                                }
                                if (!bVar39) {
                                  bVar39 = uVar36 <= puVar9[1];
                                  if (puVar9[1] == uVar36) {
                                    bVar39 = uVar13 <= *puVar9;
                                  }
                                  if (bVar39) {
                                    if (*(char *)(iVar11 + 0x58) == '\0') {
                                      iVar15 = FUN_00022a68();
                                      if (3 < iVar15) {
                                        FUN_00022900(4,0,uVar28,0x5a5,uVar21,DAT_0001480c,
                                                     *(undefined4 *)(iVar10 + 0x10),
                                                     *(undefined4 *)(iVar11 + 0x30));
                                      }
                                      *(undefined1 *)(iVar11 + 0x58) = 1;
                                    }
                                  }
                                  else {
                                    iVar15 = FUN_00022a68();
                                    if (2 < iVar15) {
                                      FUN_00022900(3,0,uVar28,0x59f,uVar21,DAT_00014800,
                                                   *(undefined4 *)(iVar10 + 0x10),
                                                   *(undefined4 *)(iVar11 + 0x30));
                                    }
                                    kill(*(__pid_t *)(iVar10 + 0x10),9);
                                    *(undefined4 *)(iVar10 + 0x18) = 3;
                                    iVar10 = FUN_00022a68();
                                    if (2 < iVar10) {
                                      uVar42 = FUN_000271c4(*(undefined4 *)(iVar11 + 0xc));
                                      FUN_00022900(3,0,uVar28,0x5a3,uVar21,DAT_00014804,uVar42,
                                                   *(undefined4 *)(iVar11 + 0x30));
                                    }
                                  }
                                }
                              }
                              iVar10 = FUN_000215c0(*DAT_00014808,local_438,0);
                            }
                            bVar39 = false;
                            bVar1 = false;
                            bVar4 = false;
                            bVar2 = false;
                            bVar3 = false;
                          }
                          else {
                            iVar11 = 0;
                            puVar31 = (undefined1 *)local_5c8;
                            bVar39 = false;
                            bVar1 = false;
                            bVar4 = false;
                            bVar2 = false;
                            bVar3 = false;
                            do {
                              pvVar17 = *(void **)((int)puVar31 + 8);
                              if ((pvVar17 == __fd_00) && (*(int *)puVar31 << 0x1f < 0)) {
                                bVar39 = true;
                              }
                              else if ((pvVar17 == __fd) && (*(int *)puVar31 << 0x1f < 0)) {
                                bVar1 = true;
                              }
                              else if ((pvVar17 == (void *)puVar9[6]) &&
                                      (*(int *)puVar31 << 0x1f < 0)) {
                                bVar2 = true;
                              }
                              else if (pvVar17 == (void *)puVar9[10]) {
                                if ((*(uint *)puVar31 & 1) != 0) {
                                  bVar3 = true;
                                }
                              }
                              else if ((pvVar17 == local_660) && ((*(uint *)puVar31 & 1) != 0)) {
                                bVar4 = true;
                              }
                              iVar11 = iVar11 + 1;
                              puVar31 = puVar31 + 0x10;
                            } while (iVar10 != iVar11);
                          }
                          uVar42 = FUN_00024758(1);
                          iVar10 = DAT_000144dc;
                          uVar13 = (int)((ulonglong)uVar42 >> 0x20) - *(int *)(DAT_000144dc + 0x44);
                          uVar36 = (uint)((uint)uVar42 < *(uint *)(DAT_000144dc + 0x40));
                          bVar38 = uVar13 == uVar36;
                          if (uVar13 == uVar36) {
                            bVar38 = (uint)uVar42 - *(uint *)(DAT_000144dc + 0x40) <= DAT_000144e0;
                          }
                          if (!bVar38) {
                            iVar11 = FUN_0001a108(*(undefined4 *)(DAT_000144dc + 0x18));
                            if (iVar11 != 0) {
                              *(undefined1 *)(iVar10 + 0x48) = 1;
                            }
                            iVar10 = FUN_0001c4e4(iVar8);
                            if (iVar10 != 0) {
                              *(undefined1 *)(piVar7 + 0x12) = 1;
                            }
                            uVar42 = FUN_00024758(1);
                            *(undefined8 *)(piVar7 + 0x10) = uVar42;
                          }
                          if ((char)piVar7[0x12] != '\0') {
                            FUN_000152c0();
                            iVar10 = FUN_0001a0e0(piVar7[6]);
                            piVar7[6] = iVar10;
                            FUN_0001c4a8(iVar8);
                            *(undefined1 *)(piVar7 + 0x12) = 0;
                          }
                          if (bVar39) {
                            pvVar17 = (void *)0x0;
                            _Var40 = *(__cpu_mask *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                            iVar10 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                            _Var41 = *(__cpu_mask *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                            do {
                              while( true ) {
                                local_61c = 0;
                                auStack_628._8_4_ = auStack_630;
                                local_438[0].__bits[2] = (__cpu_mask)(auStack_628 + 8);
                                local_438[0].__bits[3] = 1;
                                local_438[0].__bits[5] = 0x18;
                                local_548.cmsg_len = (size_t)pvVar17;
                                local_548.cmsg_level = _Var40;
                                local_548.cmsg_type = iVar10;
                                local_53c = _Var41;
                                local_538 = pvVar17;
                                _Stack_534 = _Var40;
                                local_438[0].__bits[0] = (__cpu_mask)pvVar17;
                                local_438[0].__bits[1] = _Var40;
                                local_438[0].__bits[4] = (__cpu_mask)&local_548;
                                local_438[0].__bits[6] = _Var41;
                                sVar14 = recvmsg((int)__fd_00,(msghdr *)local_438,0x40);
                                if (sVar14 < 0) break;
                                if (sVar14 != 0) {
                                  iVar10 = FUN_00022a68();
                                  if (3 < iVar10) {
                                    FUN_00022900(4,5,DAT_00014814,0x28c,DAT_00014818,DAT_00014810,
                                                 sVar14);
                                  }
                                  goto LAB_0001434a;
                                }
                                pcVar22 = (cmsghdr *)0x0;
                                if (0xb < local_438[0].__bits[5]) {
                                  pcVar22 = (cmsghdr *)local_438[0].__bits[4];
                                }
                                pcVar35 = (cmsghdr *)0x0;
                                for (; pcVar22 != (cmsghdr *)0x0;
                                    pcVar22 = __cmsg_nxthdr((msghdr *)local_438,pcVar22)) {
                                  if (((pcVar22->cmsg_level == 1) && (pcVar22->cmsg_type == 2)) &&
                                     (pcVar22->cmsg_len == 0x18)) {
                                    pcVar35 = pcVar22 + 1;
                                  }
                                }
                                if ((pcVar35 == (cmsghdr *)0x0) || ((int)pcVar35->cmsg_len < 1)) {
                                  iVar11 = FUN_00022a68();
                                  if (3 < iVar11) {
                                    FUN_00022900(4,5,DAT_00014814,0x298,DAT_00014818,DAT_0001481c);
                                  }
                                }
                                else {
                                  iVar11 = FUN_00021898(*DAT_00014808);
                                  if (iVar11 == 0) {
                                    iVar11 = FUN_00022a68();
                                    if (6 < iVar11) {
                                      FUN_00022900(7,0,DAT_00014814,0x29f,DAT_00014818,DAT_00014820,
                                                   pcVar35->cmsg_len);
                                    }
                                  }
                                  else {
                                    if (*(int *)(iVar11 + 0x18) != 3) {
                                      *(undefined4 *)(iVar11 + 0x18) = 2;
                                    }
                                    if (*(int *)(iVar11 + 0x1c) != 0) {
                                      FUN_000153f4();
                                    }
                                  }
                                }
                              }
                              piVar18 = __errno_location();
                              iVar11 = *piVar18;
                            } while (iVar11 == 4);
                            if ((iVar11 != 0xb) && (iVar10 = FUN_00022a68(), 2 < iVar10)) {
                              FUN_00022900(3,iVar11,DAT_000144d0,0x289,DAT_000144e8,DAT_000144e4);
                            }
                          }
LAB_0001434a:
                          if ((bVar1) && (iVar10 = FUN_0002a8b8(piVar7[2]), iVar10 != 0)) {
                            FUN_00027f20(iVar10,0);
                            pvVar17 = calloc(1,0x60);
                            if (pvVar17 == (void *)0x0) {
                              FUN_0002723c(iVar10);
                            }
                            else {
                              uVar28 = FUN_00027228();
                              *(undefined4 *)((int)pvVar17 + 8) = uVar28;
                              *(int *)((int)pvVar17 + 0xc) = iVar10;
                              uVar28 = FUN_00028c50(iVar10);
                              *(undefined4 *)((int)pvVar17 + 0x10) = uVar28;
                              FUN_00028da2(uVar28,iVar10);
                              uVar42 = FUN_000271c4(iVar10);
                              *(undefined8 *)((int)pvVar17 + 0x28) = uVar42;
                              pcVar19 = (char *)FUN_000272ce(iVar10);
                              *(char **)((int)pvVar17 + 0x30) = pcVar19;
                              sVar20 = strlen(pcVar19);
                              *(size_t *)((int)pvVar17 + 0x34) = sVar20;
                              uVar28 = FUN_000271d6(iVar10);
                              *(undefined4 *)((int)pvVar17 + 0x38) = uVar28;
                              uVar42 = FUN_00027c94(iVar10);
                              *(undefined8 *)((int)pvVar17 + 0x40) = uVar42;
                              pcVar19 = (char *)FUN_00027d5c(iVar10);
                              iVar11 = strcmp(DAT_000144ec,pcVar19);
                              *(bool *)((int)pvVar17 + 0x4c) = iVar11 == 0;
                              uVar28 = FUN_00027c80(iVar10);
                              *(undefined4 *)((int)pvVar17 + 0x48) = uVar28;
                              iVar11 = FUN_00022a68();
                              if (6 < iVar11) {
                                uVar42 = FUN_000271c4(iVar10);
                                uVar28 = FUN_000273a8(iVar10);
                                uVar21 = FUN_00027d5c(iVar10);
                                FUN_00022900(7,0,DAT_000144d0,0x1ef,DAT_000144f4,DAT_000144f0,uVar42
                                             ,uVar28,uVar21);
                              }
                              uVar28 = DAT_000144c8;
                              *(undefined4 *)((int)pvVar17 + 0x18) = 1;
                              FUN_0002a05e(pvVar17,uVar28);
                            }
                          }
                          iVar10 = DAT_000144f8;
                          iVar11 = FUN_0002a054(DAT_000144f8 + 0x10);
                          if (iVar11 == 0) {
                            if (*(char *)((int)piVar7 + 0x3d) != '\0') {
                              if (bVar2) goto LAB_00014432;
                              goto LAB_000140b8;
                            }
                            if (*(char *)((int)piVar7 + 0x49) == '\0') {
                              FUN_0001c470(iVar8);
                              if (piVar7[6] == 0) {
                                iVar11 = FUN_0001a120(iVar8,*(undefined4 *)(iVar10 + 0x2c));
                                piVar7[6] = iVar11;
                                if (iVar11 == 0) goto LAB_0001442e;
                              }
                              for (piVar18 = *(int **)(iVar10 + 0x10);
                                  piVar18 != (int *)DAT_00014824; piVar18 = (int *)*piVar18) {
                                if (piVar18[6] == 1) {
                                  for (piVar34 = *(int **)(DAT_00014828 + 0x10);
                                      puVar6 = DAT_00014808, piVar34 != (int *)DAT_00014824;
                                      piVar34 = (int *)*piVar34) {
                                    uVar36 = piVar34[10];
                                    uVar37 = piVar34[0xb];
                                    uVar13 = piVar18[9];
                                    bVar39 = uVar13 <= uVar37;
                                    if (uVar37 == uVar13) {
                                      bVar39 = (uint)piVar18[8] <= uVar36;
                                    }
                                    if (bVar39) {
                                      if (uVar37 == uVar13 && uVar36 == piVar18[8])
                                      goto LAB_000147a4;
                                      bVar39 = (uint)piVar18[0xb] <= uVar37;
                                      if (uVar37 == piVar18[0xb]) {
                                        bVar39 = (uint)piVar18[10] <= uVar36;
                                      }
                                      if (!bVar39) {
                                        iVar10 = (int)*(ulonglong *)(piVar18 + 0x10);
                                        iVar11 = piVar18[0x11];
                                        uVar13 = gnu_dev_major(*(ulonglong *)(piVar18 + 0x10));
                                        if ((((uVar13 == 0) ||
                                             (iVar11 != piVar34[0x11] || iVar10 != piVar34[0x10]))
                                            || (*(char *)(piVar18 + 0x13) !=
                                                *(char *)(piVar34 + 0x13))) &&
                                           ((iVar15 = piVar18[0x12], iVar15 == 0 ||
                                            (iVar15 != piVar34[0x12])))) {
                                          pcVar19 = (char *)piVar34[0xc];
                                          if (((char *)piVar18[0xe] == (char *)0x0) ||
                                             (iVar24 = strcmp(pcVar19,(char *)piVar18[0xe]),
                                             iVar24 != 0)) {
                                            uVar32 = piVar18[0xd];
                                            uVar27 = piVar34[0xd];
                                            __n = uVar27;
                                            if (uVar32 <= uVar27) {
                                              __n = uVar32;
                                            }
                                            pvVar17 = (void *)piVar18[0xc];
                                            iVar24 = memcmp(pcVar19,pvVar17,__n);
                                            if (iVar24 != 0) goto LAB_000147fa;
                                            if (uVar32 == uVar27) {
                                              if ((uVar13 != 0) &&
                                                 ((iVar11 != piVar34[0x11] ||
                                                   iVar10 != piVar34[0x10] ||
                                                  (*(char *)(piVar18 + 0x13) !=
                                                   *(char *)(piVar34 + 0x13))))) goto LAB_000147fa;
                                              if (iVar15 != 0) {
                                                bVar39 = iVar15 == piVar34[0x12];
                                                goto LAB_000147f8;
                                              }
                                            }
                                            else if (*(char *)((int)pvVar17 + __n) != '/') {
                                              bVar39 = pcVar19[__n] == '/';
LAB_000147f8:
                                              if (!bVar39) goto LAB_000147fa;
                                            }
                                          }
                                          piVar18[8] = uVar36;
                                          piVar18[9] = uVar37;
                                        }
                                        goto LAB_000147a4;
                                      }
                                      break;
                                    }
LAB_000147fa:
                                  }
                                  local_438[0].__bits[0] = 0xfffffffe;
                                  local_438[0].__bits[1] = 0;
                                  iVar10 = FUN_000215c0(*DAT_00014808,local_438);
                                  uVar21 = DAT_00014830;
                                  uVar28 = DAT_0001482c;
                                  while (iVar10 != 0) {
                                    if (*(int *)(iVar10 + 0x18) == 2) {
                                      iVar11 = FUN_0002acb8(DAT_00014b24[2],
                                                            *(undefined4 *)(iVar10 + 0x14),
                                                            piVar18[3]);
                                      if (-1 < iVar11) {
                                        FUN_00015300(iVar10,piVar18);
                                        goto LAB_000147a4;
                                      }
                                      iVar15 = FUN_00022a68();
                                      if (2 < iVar15) {
                                        piVar34 = __errno_location();
                                        FUN_00022900(3,*piVar34,DAT_00014b28,0x1c8,uVar28,uVar21,
                                                     *(undefined4 *)(iVar10 + 0x10),iVar11);
                                      }
                                      kill(*(__pid_t *)(iVar10 + 0x10),9);
                                      *(undefined4 *)(iVar10 + 0x18) = 3;
                                    }
                                    iVar10 = FUN_000215c0(*DAT_00014b2c,local_438,0);
                                  }
                                  uVar13 = FUN_00021c78(*puVar6);
                                  if (uVar13 < *DAT_00014b24) {
                                    FUN_000154a8(piVar18);
                                  }
                                  else if ((1 < *DAT_00014b24) &&
                                          (iVar10 = FUN_00022a68(), 6 < iVar10)) {
                                    FUN_00022900(7,0,DAT_00014b28,0x1d3,DAT_00014b34,DAT_00014b30,
                                                 uVar13);
                                  }
                                }
LAB_000147a4:
                              }
                              goto LAB_0001442e;
                            }
                            if (bVar2) goto LAB_00014432;
                          }
                          else {
LAB_0001442e:
                            if (bVar2) {
LAB_00014432:
                              sVar14 = read(*(int *)(DAT_000144f8 + 0x18),local_438,0x80);
                              uVar28 = DAT_00014b38;
                              puVar6 = DAT_00014b2c;
                              if (sVar14 == 0x80) {
                                if ((void *)local_438[0].__bits[0] == (void *)0x2) {
LAB_0001493a:
                                  *(undefined1 *)((int)DAT_00014b24 + 0x3d) = 1;
                                }
                                else if (local_438[0].__bits[0] < (void *)0x3) {
                                  if ((void *)local_438[0].__bits[0] == (void *)0x1) {
                                    *(undefined1 *)(DAT_00014b24 + 0x12) = 1;
                                  }
                                }
                                else {
                                  if ((void *)local_438[0].__bits[0] == (void *)0xf)
                                  goto LAB_0001493a;
                                  if ((void *)local_438[0].__bits[0] == (void *)0x11) {
                                    while (_Var16 = waitpid(-1,(int *)&local_548,1), 0 < _Var16) {
                                      iVar10 = FUN_00021898(*puVar6,_Var16);
                                      pvVar17 = (void *)local_548.cmsg_len;
                                      if (iVar10 == 0) {
                                        iVar10 = FUN_00022a68();
                                        if (3 < iVar10) {
                                          FUN_00022900(4,0,DAT_00014b28,0x3ad,DAT_00014b40,
                                                       DAT_00014b3c,_Var16);
                                        }
                                      }
                                      else {
                                        uVar13 = local_548.cmsg_len & 0x7f;
                                        iVar11 = FUN_00022a68();
                                        if (uVar13 == 0) {
                                          pvVar17 = (void *)(((uint)pvVar17 & 0xffff) >> 8);
                                          if (pvVar17 != (void *)0x0) {
                                            if (3 < iVar11) {
                                              uVar21 = 0x3b5;
                                              uVar23 = DAT_00014b48;
LAB_000149f2:
                                              FUN_00022900(4,0,DAT_00014b28,uVar21,DAT_00014b40,
                                                           uVar23,_Var16,pvVar17);
                                              goto LAB_00014978;
                                            }
                                            goto LAB_00014986;
                                          }
                                          if (6 < iVar11) {
                                            FUN_00022900(7,0,DAT_00014b28,0x3b3,DAT_00014b40,
                                                         DAT_00014b44,_Var16);
                                            goto LAB_00014978;
                                          }
                                        }
                                        else {
                                          if (0xfe < ((uint)pvVar17 & 0xffff) - 1) {
                                            if (((uint)pvVar17 & 0xff) == 0x7f) {
                                              if (iVar11 < 6) break;
                                              uVar21 = 0x3ba;
                                              uVar28 = DAT_00014b50;
                                            }
                                            else {
                                              if (pvVar17 != (void *)0xffff) {
                                                if (3 < iVar11) {
                                                  uVar21 = 0x3c0;
                                                  uVar23 = DAT_00014b58;
                                                  goto LAB_000149f2;
                                                }
                                                goto LAB_00014978;
                                              }
                                              if (iVar11 < 6) break;
                                              uVar21 = 0x3bd;
                                              uVar28 = DAT_00014b54;
                                            }
                                            FUN_00022900(6,0,DAT_00014b28,uVar21,DAT_00014b40,uVar28
                                                         ,_Var16);
                                            break;
                                          }
                                          if (3 < iVar11) {
                                            pcVar19 = strsignal(uVar13);
                                            FUN_00022900(4,0,DAT_00014b28,0x3b8,DAT_00014b40,
                                                         DAT_00014b4c,_Var16,uVar13,pcVar19);
                                          }
LAB_00014978:
                                          if ((local_548.cmsg_len & 0x7f) != 0 ||
                                              (local_548.cmsg_len & 0xffff) >> 8 != 0) {
LAB_00014986:
                                            iVar11 = *(int *)(iVar10 + 0x1c);
                                            if (iVar11 != 0) {
                                              iVar15 = FUN_00022a68();
                                              if (2 < iVar15) {
                                                FUN_00022900(3,0,DAT_00014b28,0x3c5,DAT_00014b40,
                                                             uVar28,_Var16,
                                                             *(undefined4 *)(iVar11 + 0x30));
                                              }
                                              FUN_000270cc(*(undefined4 *)
                                                            (*(int *)(iVar10 + 0x1c) + 0xc));
                                              FUN_00026d90(*(undefined4 *)
                                                            (*(int *)(iVar10 + 0x1c) + 0xc),0);
                                              FUN_0002acb8(DAT_00014b24[2],0,
                                                           *(undefined4 *)
                                                            (*(int *)(iVar10 + 0x1c) + 0x10));
                                            }
                                          }
                                        }
                                        FUN_00015444(iVar10);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            if (*(char *)(DAT_000144dc + 0x3d) != '\0') goto LAB_000140b8;
                          }
                          if (bVar3) {
                            sVar14 = read(*(int *)(DAT_000144f8 + 0x28),&local_548,0x110);
                            if (sVar14 < 0) {
                              piVar18 = __errno_location();
                              iVar10 = *piVar18;
                              if (((iVar10 != 0xb) && (iVar10 != 4)) &&
                                 (iVar11 = FUN_00022a68(), 2 < iVar11)) {
                                FUN_00022900(3,iVar10,DAT_000144d0,0x385,DAT_00014500,DAT_000144fc);
                              }
                            }
                            else {
                              pcVar22 = &local_548;
                              psVar5 = &pcVar22->cmsg_len;
                              for (; pcVar22 < (cmsghdr *)((int)psVar5 + sVar14);
                                  pcVar22 = (cmsghdr *)
                                            ((int)&pcVar22[1].cmsg_level + pcVar22[1].cmsg_len)) {
                                iVar10 = FUN_000174bc(iVar8,pcVar22->cmsg_len);
                                if (iVar10 != 0) {
                                  iVar11 = FUN_00022a68();
                                  if (6 < iVar11) {
                                    iVar11 = pcVar22->cmsg_level;
                                    uVar28 = FUN_00027d06(iVar10);
                                    FUN_00022900(7,0,DAT_00014d7c,0x38f,DAT_00014d90,DAT_00014d8c,
                                                 iVar11,uVar28);
                                  }
                                  if (pcVar22->cmsg_level << 0x1c < 0) {
                                    uVar28 = FUN_00027d5c(iVar10);
                                    iVar11 = FUN_00024ad4(DAT_00014d94,uVar28);
                                    if (iVar11 != 0) {
                                      uVar28 = FUN_00027cb4(iVar10);
                                      iVar11 = FUN_00024ad4(DAT_00014d98,uVar28);
                                      if (iVar11 != 0) {
                                        uVar28 = FUN_00027390(iVar10);
                                        iVar11 = FUN_00015144(uVar28,DAT_00014d9c);
                                        if (iVar11 == 0) {
                                          uVar28 = FUN_00027228(iVar10);
                                          pcVar19 = (char *)FUN_00027d06(iVar10);
                                          iVar11 = open64(pcVar19,DAT_00014da0);
                                          uVar13 = 0;
                                          if (-1 < iVar11) {
                                            uVar13 = flock(iVar11,6);
                                            if (-1 < (int)uVar13) {
                                              uVar13 = ioctl(iVar11,0x125f,0);
                                            }
                                            close(iVar11);
                                            uVar13 = ~uVar13 >> 0x1f;
                                          }
                                          iVar11 = FUN_00029414(uVar28);
                                          if (iVar11 != 0) {
                                            iVar15 = FUN_000297ce(iVar11,iVar10);
                                            if (((-1 < iVar15) &&
                                                (iVar15 = FUN_00029708(iVar11,DAT_00014d94),
                                                -1 < iVar15)) &&
                                               (iVar15 = FUN_00029862(iVar11), -1 < iVar15)) {
                                              for (iVar15 = FUN_0002951e(iVar11); iVar15 != 0;
                                                  iVar15 = FUN_0002a210(iVar15)) {
                                                uVar21 = FUN_0002a278(iVar15);
                                                iVar24 = FUN_00027fd8(uVar28,uVar21);
                                                if (iVar24 != 0) {
                                                  uVar21 = FUN_00027cb4();
                                                  iVar25 = FUN_00024ad4(DAT_00014da4,uVar21);
                                                  if (iVar25 != 0) {
                                                    FUN_00015370(iVar24);
                                                    if (uVar13 != 0) goto LAB_00014d3c;
                                                    break;
                                                  }
                                                }
                                                FUN_00015370(iVar24);
                                              }
                                              iVar15 = FUN_00022a68();
                                              if (6 < iVar15) {
                                                uVar21 = FUN_00027d06(iVar10);
                                                FUN_00022900(7,0,DAT_00014d7c,0x35d,DAT_00014d80,
                                                             DAT_00014d78,uVar21);
                                              }
                                              uVar21 = FUN_000272d4(iVar10);
                                              FUN_0002449c(local_438,0x400,uVar21,DAT_00014d84,0);
                                              FUN_00020660(local_438,DAT_00014d88);
                                              for (iVar15 = FUN_0002951e(iVar11); iVar15 != 0;
                                                  iVar15 = FUN_0002a210(iVar15)) {
                                                uVar21 = FUN_0002a278(iVar15);
                                                iVar24 = FUN_00027fd8(uVar28,uVar21);
                                                if (iVar24 != 0) {
                                                  uVar21 = FUN_00027cb4();
                                                  iVar25 = FUN_00024ad4(DAT_00014b5c,uVar21);
                                                  if (iVar25 != 0) {
                                                    iVar25 = FUN_00022a68();
                                                    if (6 < iVar25) {
                                                      uVar21 = FUN_00027d06(iVar10);
                                                      uVar23 = FUN_00027d06(iVar24);
                                                      FUN_00022900(7,0,DAT_00014b28,0x36c,
                                                                   DAT_00014b64,DAT_00014b60,uVar21,
                                                                   uVar23);
                                                    }
                                                    uVar21 = FUN_000272d4(iVar24);
                                                    FUN_0002449c(local_438,0x400,uVar21,DAT_00014b68
                                                                 ,0);
                                                    FUN_00020660(local_438,DAT_00014b6c);
                                                  }
                                                }
                                                FUN_00015370(iVar24);
                                              }
                                            }
LAB_00014d3c:
                                            FUN_0002949e(iVar11);
                                          }
                                          goto LAB_00014bb6;
                                        }
                                      }
                                    }
                                    iVar11 = FUN_00022a68();
                                    if (6 < iVar11) {
                                      uVar28 = FUN_00027d06(iVar10);
                                      FUN_00022900(7,0,DAT_00014d7c,0x374,DAT_00014d80,DAT_00014d78,
                                                   uVar28);
                                    }
                                    uVar28 = FUN_000272d4(iVar10);
                                    FUN_0002449c(local_438,0x400,uVar28,DAT_00014d84,0);
                                    FUN_00020660(local_438,DAT_00014d88);
                                  }
                                  else if (pcVar22->cmsg_level << 0x10 < 0) {
                                    FUN_00017428(iVar8,iVar10);
                                  }
LAB_00014bb6:
                                  FUN_0002723c(iVar10);
                                }
                              }
                            }
                            goto LAB_000140b8;
                          }
                          if (!bVar4) goto LAB_000140b8;
                          if (*(int *)(DAT_00014da8 + 0xc) != 0) {
                            iVar10 = FUN_0001bf98();
                            if (iVar10 != 0) {
                              iVar11 = FUN_0001c210();
                              if (iVar11 != 0) {
                                iVar15 = FUN_0001c400();
                                if (-1 < iVar15) {
                                  iVar24 = FUN_00022a68();
                                  if (6 < iVar24) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x2cc,DAT_00015000,DAT_00014ff8,
                                                 iVar15);
                                  }
                                  FUN_000229bc(iVar15);
                                  FUN_000152c0();
                                }
                                iVar15 = FUN_0001c40e(iVar11);
                                if (0 < iVar15) {
                                  iVar15 = FUN_00022a68();
                                  if (6 < iVar15) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x2d2,DAT_00015000,DAT_00015004);
                                  }
                                  *(undefined1 *)((int)piVar7 + 0x49) = 1;
                                }
                                iVar15 = FUN_0001c41c(iVar11);
                                if (0 < iVar15) {
                                  iVar15 = FUN_00022a68();
                                  if (6 < iVar15) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x2d7,DAT_00015000,DAT_00015008);
                                  }
                                  *(undefined1 *)((int)piVar7 + 0x49) = 0;
                                }
                                iVar15 = FUN_0001c42a(iVar11);
                                if (0 < iVar15) {
                                  iVar15 = FUN_00022a68();
                                  if (6 < iVar15) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x2dc,DAT_00015000,DAT_0001500c);
                                  }
                                  *(undefined1 *)(piVar7 + 0x12) = 1;
                                }
                                pcVar19 = (char *)FUN_0001c438(iVar11);
                                if (pcVar19 != (char *)0x0) {
                                  pcVar19 = strdup(pcVar19);
                                  if (pcVar19 != (char *)0x0) {
                                    pcVar26 = strchr(pcVar19,0x3d);
                                    if (pcVar26 == (char *)0x0) {
                                      iVar15 = FUN_00022a68();
                                      if (2 < iVar15) {
                                        FUN_00022900(3,0,DAT_00014ffc,0x2f4,DAT_00015000,
                                                     DAT_00015028,pcVar19);
                                      }
                                    }
                                    else {
                                      *pcVar26 = '\0';
                                      if (pcVar26[1] == '\0') {
                                        iVar15 = FUN_00022a68();
                                        if (6 < iVar15) {
                                          FUN_00022900(7,0,DAT_00014ffc,0x2ed,DAT_00015000,
                                                       DAT_00015010,pcVar19);
                                        }
                                        pcVar26 = (char *)0x0;
                                      }
                                      else {
                                        iVar15 = FUN_00022a68();
                                        pcVar26 = pcVar26 + 1;
                                        if (6 < iVar15) {
                                          FUN_00022900(7,0,DAT_00014ffc,0x2f0,DAT_00015000,
                                                       DAT_00015024,pcVar19,pcVar26);
                                        }
                                      }
                                      FUN_0002a09c(DAT_00015014,pcVar19,pcVar26);
                                    }
                                    free(pcVar19);
                                  }
                                  FUN_000152c0();
                                }
                                iVar15 = FUN_0001c444(iVar11);
                                if (-1 < iVar15) {
                                  iVar24 = FUN_00022a68();
                                  if (6 < iVar24) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x2fd,DAT_00015000,DAT_00015018,
                                                 iVar15);
                                  }
                                  *piVar7 = iVar15;
                                }
                                iVar15 = FUN_0001c452(iVar11);
                                if (0 < iVar15) {
                                  iVar15 = FUN_00022a68();
                                  if (6 < iVar15) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x302,DAT_00015000,DAT_0001501c);
                                  }
                                  FUN_00015378();
                                }
                                iVar15 = FUN_0001c460(iVar11);
                                if (0 < iVar15) {
                                  iVar15 = FUN_00022a68();
                                  if (6 < iVar15) {
                                    FUN_00022900(7,0,DAT_00014ffc,0x30a,DAT_00015000,DAT_00015020);
                                  }
                                  *(undefined1 *)((int)piVar7 + 0x3d) = 1;
                                  iVar15 = FUN_0001c120(iVar10);
                                  piVar7[0x13] = iVar15;
                                }
                                FUN_0001c1f2(iVar11);
                              }
                              FUN_0001c12a(iVar10);
                            }
                            goto LAB_000140b8;
                          }
                          uVar28 = 0x2c0;
                          uVar21 = DAT_00014db0;
                          uVar23 = DAT_00014d7c;
                          uVar30 = DAT_00014dac;
LAB_00013834:
                    /* WARNING: Subroutine does not return */
                          FUN_0002291a(uVar21,uVar23,uVar28,uVar30);
                        }
                        iVar10 = FUN_00022a68();
                        if (iVar10 < 3) goto LAB_00013a3c;
                        puVar9 = (uint *)__errno_location();
                        uVar30 = 0x54b;
                        uVar23 = DAT_00014070;
                      }
                      uVar13 = *puVar9;
                      uVar28 = DAT_00014020;
                      uVar21 = DAT_00014028;
                      goto LAB_00013b48;
                    }
                    puVar9 = (uint *)__errno_location();
                    uVar33 = *puVar9;
                    iVar10 = FUN_00022a68();
                    if (iVar10 < 3) goto LAB_00013f4c;
                    uVar28 = 0x532;
                    uVar21 = DAT_00013ab8;
                    uVar23 = DAT_00014028;
                    uVar30 = DAT_00014064;
                  }
                  goto LAB_000138be;
                }
                iVar10 = FUN_00022a68();
                if (2 < iVar10) {
                  uVar28 = 0x516;
                  uVar23 = DAT_00014028;
                  uVar30 = DAT_00014040;
                  goto LAB_00013d18;
                }
              }
              uVar33 = 0xfffffff4;
              goto LAB_00013a3c;
            }
            iVar10 = FUN_00022a68();
            if (2 < iVar10) {
              uVar28 = 0x4cc;
              uVar30 = DAT_00013dc0;
              goto LAB_00013c4e;
            }
          }
        }
      }
LAB_00013c1c:
      uVar33 = 0xffffffea;
      goto LAB_00013a3c;
    }
    puVar9 = (uint *)__errno_location();
    uVar33 = *puVar9;
    iVar10 = FUN_00022a68();
    if (iVar10 < 3) goto LAB_00013f4c;
    uVar28 = 0x496;
    uVar21 = DAT_00013ab8;
    uVar23 = DAT_00013d90;
    uVar30 = DAT_00013d98;
  }
  else {
    iVar10 = FUN_00022a68();
    if (iVar10 < 3) {
      uVar33 = 0xffffffff;
      goto LAB_00013a3c;
    }
    uVar33 = 1;
    uVar28 = 0x489;
    uVar21 = DAT_00013ab8;
    uVar23 = DAT_00013ab4;
    uVar30 = DAT_00013ad4;
  }
LAB_000138be:
  uVar33 = FUN_00022900(3,uVar33,uVar21,uVar28,uVar23,uVar30);
LAB_00013a3c:
  puVar9 = DAT_00013ae4;
  piVar7 = DAT_00013ad0;
  FUN_0001bf78(DAT_00013ad0[3]);
  unlink(DAT_00013b18);
  if (-1 < (int)puVar9[7]) {
    close(puVar9[7]);
  }
  FUN_00015474();
  FUN_0001541a(0);
  FUN_0001a0e0(piVar7[6]);
  FUN_0001c4a8(iVar8);
  if (-1 < (int)puVar9[6]) {
    close(puVar9[6]);
  }
  if (-1 < (int)puVar9[8]) {
    close(puVar9[8]);
  }
  if (-1 < (int)puVar9[9]) {
    close(puVar9[9]);
  }
  FUN_0002a872(piVar7[2]);
  FUN_0001c12a(piVar7[0x13]);
  FUN_0001be64(piVar7[3]);
  FUN_000237f6();
  FUN_0002b572(iVar8);
  FUN_00022890();
  return uVar33 >> 0x1f;
}



/* ===== entry @ 0001502c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00049200)
            (DAT_00015060,param_2,&stack0x00000004,DAT_00015064,DAT_0001505c,param_1);
  return;
}



/* ===== FUN_00015068 @ 00015068 size=32 ===== */

void FUN_00015068(void)

{
  if (DAT_0001508c == DAT_00015088) {
    return;
  }
  if (DAT_00015090 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00015090)();
  return;
}



/* ===== _FINI_0 @ 000150cc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00015108;
  if (*DAT_00015108 != '\0') {
    return;
  }
  FUN_00015068();
  if (DAT_0001510c != 0) {
    __deregister_frame_info(DAT_00015110);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00015114 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00015138 != 0) {
    __register_frame_info(DAT_00015140,DAT_0001513c);
  }
  if ((DAT_000150c4 - DAT_000150c0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000150c8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000150bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000150c8)();
  return;
}



/* ===== FUN_00015144 @ 00015144 size=34 ===== */

char * FUN_00015144(char *param_1,char *param_2)

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



/* ===== FUN_00015166 @ 00015166 size=276 ===== */

undefined4 FUN_00015166(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *__s1;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00015284,DAT_00015280,0x3e1,DAT_0001527c);
  }
  if (param_2 != 0) {
    iVar2 = FUN_00015144(param_1,DAT_00015288,param_3,param_4,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      param_1 = param_1 + 3;
    }
    iVar2 = FUN_00015144(param_1,DAT_0001528c);
    if (iVar2 != 0) {
      __s1 = (char *)(param_1 + 5);
      iVar2 = strcmp(__s1,DAT_00015290);
      if (iVar2 == 0) {
        FUN_0002b0ec(param_2);
        FUN_000229bc();
      }
      else {
        iVar2 = strcmp(__s1,DAT_00015294);
        if (iVar2 == 0) {
          iVar2 = FUN_00024d6e(param_2,DAT_00015298);
          if (-1 < iVar2) {
            return 0;
          }
          iVar2 = FUN_00022a68();
          if (iVar2 < 4) {
            return 0;
          }
          uVar5 = 0x3f6;
          uVar7 = DAT_0001529c;
        }
        else {
          iVar2 = strcmp(__s1,DAT_000152a4);
          if (iVar2 == 0) {
            iVar2 = FUN_00024e50(param_2,DAT_000152a8);
            if (-1 < iVar2) {
              return 0;
            }
            iVar2 = FUN_00022a68();
            if (iVar2 < 4) {
              return 0;
            }
            uVar5 = 0x3fa;
            uVar7 = DAT_000152ac;
          }
          else {
            iVar2 = strcmp(__s1,DAT_000152b0);
            puVar1 = DAT_000152b4;
            if (iVar2 != 0) {
              return 0;
            }
            iVar2 = FUN_00024edc(param_2,DAT_000152b4);
            if (-1 < iVar2) {
              uVar3 = (uint)((ulonglong)*puVar1 * (ulonglong)DAT_000152bc);
              uVar4 = DAT_000152bc * puVar1[1] +
                      (int)((ulonglong)*puVar1 * (ulonglong)DAT_000152bc >> 0x20);
              *puVar1 = uVar3;
              puVar1[1] = uVar4;
              if (uVar4 == 0 && uVar3 < 3) {
                uVar6 = 1;
              }
              else {
                uVar6 = FUN_0002bfac(uVar3,uVar4,3,0);
              }
              *(undefined8 *)(puVar1 + 2) = uVar6;
              return 0;
            }
            iVar2 = FUN_00022a68();
            if (iVar2 < 4) {
              return 0;
            }
            uVar5 = 0x3fe;
            uVar7 = DAT_000152b8;
          }
        }
        FUN_00022900(4,0,DAT_00015280,uVar5,DAT_000152a0,uVar7,param_2);
      }
    }
  }
  return 0;
}



/* ===== FUN_000152c0 @ 000152c0 size=58 ===== */

void FUN_000152c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = DAT_000152fc;
  local_18 = 0xfffffffe;
  uStack_14 = 0;
  uStack_10 = param_3;
  iVar2 = FUN_000215c0(*DAT_000152fc,&local_18);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x18) != 3) {
      *(undefined4 *)(iVar2 + 0x18) = 3;
      kill(*(__pid_t *)(iVar2 + 0x10),0xf);
    }
    iVar2 = FUN_000215c0(*puVar1,&local_18,0);
  }
  return;
}



/* ===== FUN_00015300 @ 00015300 size=86 ===== */

void FUN_00015300(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0xcc;
    uVar1 = DAT_00015360;
  }
  else if (param_2 == 0) {
    uVar2 = 0xcd;
    uVar1 = DAT_00015364;
  }
  else if (*(int *)(param_2 + 0x14) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(int *)(param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_2 + 0x18) = 2;
      uVar3 = FUN_00024758();
      *(undefined1 *)(param_2 + 0x58) = 0;
      *(int *)(param_2 + 0x14) = param_1;
      *(undefined8 *)(param_2 + 0x50) = uVar3;
      return;
    }
    uVar2 = 0xcf;
    uVar1 = DAT_0001536c;
  }
  else {
    uVar2 = 0xce;
    uVar1 = DAT_00015368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(uVar1,DAT_0001535c,uVar2,DAT_00015358);
}



/* ===== FUN_00015370 @ 00015370 size=8 ===== */

void FUN_00015370(int param_1)

{
  if (param_1 != 0) {
    FUN_0002723c();
    return;
  }
  return;
}



/* ===== FUN_00015378 @ 00015378 size=100 ===== */

void FUN_00015378(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0002a054(DAT_000153dc);
  if (iVar1 == 0) {
    iVar1 = FUN_00025814(DAT_000153e0);
    if (-1 < iVar1) {
      return;
    }
    iVar2 = FUN_00022a68();
    if (iVar2 < 4) {
      return;
    }
    uVar4 = 0x2b1;
    uVar5 = DAT_000153e4;
  }
  else {
    iVar1 = unlink(DAT_000153e0);
    if (-1 < iVar1) {
      return;
    }
    piVar3 = __errno_location();
    if (*piVar3 == 2) {
      return;
    }
    iVar1 = FUN_00022a68();
    if (iVar1 < 4) {
      return;
    }
    iVar1 = 0;
    uVar4 = 0x2b5;
    uVar5 = DAT_000153f0;
  }
  FUN_00022900(4,iVar1,DAT_000153e8,uVar4,DAT_000153ec,uVar5);
  return;
}



/* ===== FUN_000153f4 @ 000153f4 size=40 ===== */

void FUN_000153f4(int param_1)

{
  FUN_0002a06a();
  FUN_0002723c(*(undefined4 *)(param_1 + 0xc));
  FUN_0002723c(*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c) = 0;
  }
  (*(code *)PTR_free_00049310)(param_1);
  return;
}



/* ===== FUN_0001541a @ 0001541a size=36 ===== */

void FUN_0001541a(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(DAT_00015440 + 0x10);
  puVar2 = (undefined4 *)*puVar1;
  puVar3 = (undefined4 *)*puVar2;
  while (puVar2 != puVar1) {
    if ((param_1 == 0) || (puVar2[6] == 1)) {
      FUN_000153f4();
    }
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  }
  return;
}



/* ===== FUN_00015444 @ 00015444 size=44 ===== */

void FUN_00015444(int param_1)

{
  FUN_0002191a(*DAT_00015470,*(undefined4 *)(param_1 + 0x10));
  FUN_0002a872(*(undefined4 *)(param_1 + 0x14));
  FUN_0002b572(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_000153f4();
  }
  (*(code *)PTR_free_00049310)(param_1);
  return;
}



/* ===== FUN_00015474 @ 00015474 size=48 ===== */

void FUN_00015474(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = DAT_000154a4;
  local_18 = 0xfffffffe;
  uStack_14 = 0;
  uStack_10 = param_3;
  while (iVar2 = FUN_000215c0(*puVar1,&local_18,0), iVar2 != 0) {
    FUN_00015444(iVar2);
  }
  FUN_00021668(*puVar1);
  *puVar1 = 0;
  return;
}



/* ===== FUN_000154a8 @ 000154a8 size=1292 ===== */

void FUN_000154a8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  __pid_t _Var3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  char *__file;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  ssize_t sVar12;
  int iVar13;
  undefined4 extraout_r1;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  epoll_event *peVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  void *unaff_r11;
  undefined8 uVar22;
  undefined1 auStack_118 [12];
  ulong local_10c;
  ulong uStack_108;
  ulong uStack_104;
  epoll_event local_100;
  epoll_event local_f0 [4];
  ulong local_b0 [33];
  
  iVar20 = *(int *)(param_1 + 8);
  iVar2 = FUN_0002a538(iVar20,0);
  iVar13 = DAT_000157d0;
  if (iVar2 == 0) {
    return;
  }
  FUN_0002a75c(iVar2,*(undefined4 *)(DAT_000157d0 + 8));
  FUN_0002a766(iVar2);
  _Var3 = fork();
  if (_Var3 == -1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    iVar13 = FUN_00022a68();
    if (2 < iVar13) {
      piVar10 = __errno_location();
      FUN_00022900(3,*piVar10,DAT_00015a10,0x1a8,DAT_00015a14,DAT_00015a18);
    }
LAB_00015944:
    FUN_0002a872(iVar2);
    return;
  }
  if (_Var3 != 0) {
    if (iVar20 == 0) {
      uVar15 = 0xae;
      uVar14 = DAT_00015a20;
    }
    else {
      if (1 < _Var3) {
        pvVar11 = calloc(1,0x20);
        pvVar7 = pvVar11;
        if (pvVar11 == (void *)0x0) {
          iVar13 = -0xc;
        }
        else {
          *(undefined4 *)((int)pvVar11 + 0xc) = 1;
          puVar1 = DAT_00015a28;
          uVar14 = FUN_0002b568(iVar20);
          *(undefined4 *)((int)pvVar11 + 8) = uVar14;
          FUN_0002a846(iVar2);
          uVar14 = FUN_0002a868(iVar2);
          *(__pid_t *)((int)pvVar11 + 0x10) = _Var3;
          *(undefined4 *)((int)pvVar11 + 0x14) = uVar14;
          iVar13 = FUN_0002160e(puVar1,0);
          if ((-1 < iVar13) && (iVar13 = FUN_00021716(*puVar1,_Var3,pvVar11), -1 < iVar13)) {
            iVar13 = 0;
            pvVar7 = (void *)0x0;
            unaff_r11 = pvVar11;
          }
        }
        free(pvVar7);
        if (iVar13 == 0) {
          FUN_00015300(unaff_r11,param_1);
          iVar13 = FUN_00022a68();
          if (6 < iVar13) {
            uVar22 = FUN_000271c4(*(undefined4 *)(param_1 + 0xc));
            FUN_00022900(7,0,DAT_00015a10,0x1b5,DAT_00015a14,DAT_00015a2c,uVar22,_Var3);
          }
        }
        goto LAB_00015944;
      }
      uVar15 = 0xb0;
      uVar14 = DAT_00015a24;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(uVar14,DAT_00015a10,uVar15,DAT_00015a1c);
  }
  iVar16 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00015474();
  puVar1 = DAT_000157d4;
  FUN_0001541a(0);
  FUN_0002a872(*(undefined4 *)(iVar13 + 8));
  FUN_0001be64(*(undefined4 *)(iVar13 + 0xc));
  close(puVar1[6]);
  close(puVar1[7]);
  close(puVar1[8]);
  sigfillset((sigset_t *)auStack_118);
  uVar4 = signalfd(-1,(sigset_t *)auStack_118,DAT_000157d8);
  puVar1[6] = uVar4;
  if ((int)uVar4 < 0) {
    puVar5 = (uint *)__errno_location();
    uVar19 = *puVar5;
    iVar2 = FUN_00022a68();
    if (iVar2 < 3) {
LAB_000157c0:
      uVar19 = ((int)uVar19 >> 0x1f) - (uVar19 ^ (int)uVar19 >> 0x1f);
      goto LAB_0001555c;
    }
    uVar14 = 0x104;
    uVar15 = DAT_000157dc;
  }
  else {
    iVar6 = epoll_create1(0x80000);
    puVar1[7] = iVar6;
    if (iVar6 < 0) {
      puVar5 = (uint *)__errno_location();
      uVar19 = *puVar5;
      iVar2 = FUN_00022a68();
      if (iVar2 < 3) goto LAB_000157c0;
      uVar14 = 0x10a;
      uVar15 = DAT_000157e8;
    }
    else {
      auStack_118._8_4_ = 1;
      local_10c = 0;
      uStack_104 = 0;
      uStack_108 = uVar4;
      pvVar7 = (void *)FUN_0002a8ac(iVar2);
      iVar21 = puVar1[7];
      local_100._4_4_ = 0;
      local_100.data.u64._4_4_ = 0;
      local_100.events = 1;
      local_100.data.fd = (int)pvVar7;
      iVar6 = epoll_ctl(iVar21,1,puVar1[6],(epoll_event *)(auStack_118 + 8));
      if ((-1 < iVar6) && (iVar6 = epoll_ctl(iVar21,1,(int)pvVar7,&local_100), -1 < iVar6)) {
        prctl(1,0xf);
        FUN_00020660(DAT_000157f4,DAT_000157f0);
LAB_00015644:
        iVar6 = FUN_00022a68();
        if (6 < iVar6) {
          uVar22 = FUN_000271c4(iVar16);
          FUN_00022900(7,0,DAT_000157e4,0x127,DAT_000157e0,DAT_000157f8,uVar22);
        }
        iVar6 = FUN_00015a30(iVar16);
        if (iVar6 == 0) {
          uVar19 = 0xfffffff4;
        }
        else {
          *(undefined4 *)(iVar6 + 0x68) = puVar1[6];
          if (0 < *(int *)(iVar13 + 4)) {
            *(int *)(iVar6 + 0x5c) = *(int *)(iVar13 + 4);
          }
          uVar14 = FUN_000273a8(iVar16);
          iVar21 = FUN_00024ad4(uVar14,DAT_000157fc);
          if (iVar21 == 0) {
            uVar14 = FUN_00027d5c(iVar16);
            iVar21 = FUN_00024ad4(DAT_00015800,uVar14);
            if (iVar21 == 0) goto LAB_00015820;
            uVar14 = FUN_00027390(iVar16);
            iVar21 = FUN_00015144(uVar14,DAT_00015804);
            if (iVar21 != 0) goto LAB_00015820;
            uVar14 = FUN_00027390(iVar16);
            iVar21 = FUN_00015144(uVar14,DAT_00015808);
            if (iVar21 != 0) goto LAB_00015820;
            uVar14 = FUN_00027cb4(iVar16);
            iVar8 = FUN_00024ad4(DAT_0001580c,uVar14);
            iVar21 = iVar16;
            if (iVar8 != 0) {
              iVar21 = FUN_000284c2(iVar16);
            }
            if (iVar21 == 0) goto LAB_00015820;
            __file = (char *)FUN_00027d06(iVar21);
            iVar8 = open64(__file,DAT_00015810);
            if ((iVar8 < 0) || (iVar9 = flock(iVar8,5), -1 < iVar9)) goto LAB_00015824;
            iVar9 = FUN_00022a68();
            if (6 < iVar9) {
              piVar10 = __errno_location();
              iVar9 = *piVar10;
              uVar14 = FUN_00027d06(iVar21);
              FUN_00022900(7,iVar9,DAT_000157e4,0x148,DAT_000157e0,DAT_00015814,uVar14);
            }
            FUN_00024ccc(iVar8);
          }
          else {
LAB_00015820:
            iVar8 = -1;
LAB_00015824:
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            uVar14 = DAT_00015a08;
            FUN_00016c20(iVar6);
            FUN_00017044(iVar6,extraout_r1,*puVar1,puVar1[1],puVar1[2],puVar1[3],DAT_00015a08,uVar15
                         ,uVar14);
            if (*(char *)(iVar6 + 0x75) != '\0') {
              FUN_00017190(iVar20,iVar16);
              FUN_00026e0e(iVar16);
            }
            FUN_00024ccc(iVar8);
            FUN_0002acb8(iVar2,0,iVar16);
          }
          iVar21 = FUN_00022a68();
          if (6 < iVar21) {
            uVar22 = FUN_000271c4(iVar16);
            FUN_00022900(7,0,DAT_000157e4,0x167,DAT_000157e0,DAT_00015818,uVar22);
          }
          uVar19 = FUN_00025aac(puVar1[9],local_b0,0);
          if (((int)uVar19 < 0) && (iVar21 = FUN_00022a68(), 2 < iVar21)) {
            uVar22 = FUN_000271c4(iVar16);
            FUN_00022900(3,uVar19,DAT_000157e4,0x16d,DAT_000157e0,DAT_0001581c,uVar22);
          }
          FUN_0002723c(iVar16);
          if (*(char *)(iVar6 + 0x74) == '\0') {
            FUN_00015a76(iVar6);
LAB_00015882:
            do {
              iVar16 = epoll_wait(puVar1[7],local_f0,4,-1);
              if (iVar16 < 0) {
                puVar5 = (uint *)__errno_location();
                uVar18 = *puVar5;
                if (uVar18 != 4) {
                  iVar2 = FUN_00022a68();
                  if (iVar2 < 3) {
                    uVar19 = ((int)uVar18 >> 0x1f) - (uVar18 ^ (int)uVar18 >> 0x1f);
                  }
                  else {
                    uVar19 = FUN_00022900(3,uVar18,DAT_00015a10,0x183,DAT_00015a14,DAT_00015a0c);
                  }
                  goto LAB_000157bc;
                }
                goto LAB_00015882;
              }
              peVar17 = local_f0;
              for (iVar6 = 0; iVar6 != iVar16; iVar6 = iVar6 + 1) {
                pvVar11 = (void *)(peVar17->data).fd;
                if ((pvVar11 == pvVar7) && ((int)(peVar17->events << 0x1f) < 0)) {
                  iVar16 = FUN_0002a8b8(iVar2);
                  if (iVar16 != 0) goto LAB_00015644;
                  break;
                }
                if ((((pvVar11 == (void *)puVar1[6]) && ((int)(peVar17->events << 0x1f) < 0)) &&
                    (sVar12 = read((int)pvVar11,local_b0,0x80), sVar12 == 0x80)) &&
                   (local_b0[0] == 0xf)) goto LAB_000157bc;
                peVar17 = peVar17 + 1;
              }
            } while( true );
          }
          FUN_00015a76(iVar6);
LAB_000157bc:
          iVar16 = 0;
        }
        goto LAB_0001555c;
      }
      puVar5 = (uint *)__errno_location();
      uVar19 = *puVar5;
      iVar2 = FUN_00022a68();
      if (iVar2 < 3) goto LAB_000157c0;
      uVar14 = 0x119;
      uVar15 = DAT_000157ec;
    }
  }
  uVar19 = FUN_00022900(3,uVar19,DAT_000157e4,uVar14,DAT_000157e0,uVar15);
LAB_0001555c:
  FUN_0002723c(iVar16);
  FUN_00024ccc(puVar1[6]);
  FUN_00024ccc(puVar1[7]);
  close(puVar1[10]);
  close(puVar1[9]);
  FUN_0001a0e0(*(undefined4 *)(iVar13 + 0x18));
  FUN_0001c4a8(iVar20);
  FUN_0002b572(iVar20);
  FUN_00022890();
                    /* WARNING: Subroutine does not return */
  _exit(uVar19 >> 0x1f);
}



/* ===== FUN_00015a30 @ 00015a30 size=70 ===== */

undefined4 * FUN_00015a30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00027228();
  puVar2 = calloc(1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = uVar1;
    FUN_0002a07a(uVar1,puVar2 + 0x10,0);
    FUN_0002a07a(uVar1,puVar2 + 9,0);
    puVar2[0x1a] = 0xffffffff;
    uVar3 = FUN_00024758(1);
    *(undefined8 *)(puVar2 + 0x18) = uVar3;
  }
  return puVar2;
}



/* ===== FUN_00015a76 @ 00015a76 size=44 ===== */

void FUN_00015a76(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_0002a226(param_1 + 0x40);
  FUN_0002a226(param_1 + 0x24);
  free(*(void **)(param_1 + 0x14));
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_00049310)(param_1);
  return;
}



/* ===== FUN_00015aa2 @ 00015aa2 size=1238 ===== */

uint FUN_00015aa2(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,char param_5)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *local_c4c;
  uint local_c48;
  byte *local_c30;
  char *local_c2c;
  char local_c28 [1024];
  byte local_828 [1024];
  byte abStack_428 [1028];
  
  iVar4 = DAT_00015fa0;
  iVar9 = DAT_00015f98 + 0x15abc;
  iVar11 = param_1[1];
  iVar7 = DAT_00015f9c + 0x15ace;
  pbVar10 = param_2;
  local_c30 = param_3;
  while (bVar1 = *pbVar10, bVar1 != 0) {
    pbVar16 = pbVar10;
    if (bVar1 == 0x24) {
      pbVar12 = pbVar10 + 1;
      pbVar16 = pbVar12;
      if (pbVar10[1] == 0x24) goto LAB_00015bcc;
      iVar13 = 0;
LAB_00015b00:
      pcVar8 = *(char **)(iVar13 * 0xc + iVar9);
      sVar2 = strlen(pcVar8);
      iVar3 = strncmp((char *)pbVar12,pcVar8,sVar2);
      if ((iVar3 != 0) || (pbVar16 = pbVar12 + sVar2, pbVar16 == (byte *)0x0)) goto LAB_00015bc2;
      iVar13 = *(int *)(iVar9 + iVar13 * 0xc + 8);
LAB_00015b36:
      if (*pbVar16 == 0x7b) {
        pbVar10 = pbVar16;
        while( true ) {
          uVar14 = (int)pbVar10 - (int)pbVar16;
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 == 0x7d) break;
          if (*pbVar10 == 0) {
            iVar4 = FUN_00022a68();
            if (2 < iVar4) {
              FUN_00022900(3,0,DAT_00015fa8 + 0x15c3e,0xb5,DAT_00015fb0 + 0x15c48,
                           DAT_00015fac + 0x15c42,param_2);
            }
            goto LAB_00015adc;
          }
        }
        if (0x3ff < uVar14) break;
        pcVar8 = local_c28;
        memcpy(pcVar8,pbVar16 + 1,uVar14);
        pcVar8[uVar14] = '\0';
        pbVar10 = pbVar16 + 1 + uVar14 + 1;
      }
      else {
        pcVar8 = (char *)0x0;
        pbVar10 = pbVar16;
      }
      if (iVar13 == 0xb) {
        if (param_1[5] != 0) {
          if ((pcVar8 == (char *)0x0) || (uVar6 = strtoul(pcVar8,&local_c2c,10), (int)uVar6 < 1)) {
            pbVar16 = (byte *)param_1[5];
LAB_00015f8c:
            param_4 = FUN_000243ec(&local_c30,param_4,pbVar16);
          }
          else {
            pbVar16 = local_828;
            FUN_0002448c(pbVar16,0x400,param_1[5]);
            iVar13 = **(int **)(iVar7 + DAT_00015fbc);
            do {
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) {
                pbVar16 = abStack_428;
                FUN_0002448c(pbVar16,0x400);
                if ((*local_c2c != '+') &&
                   (pcVar8 = strchr((char *)pbVar16,0x20), pcVar8 != (char *)0x0)) {
                  *pcVar8 = '\0';
                }
                goto LAB_00015f8c;
              }
              do {
                pbVar12 = pbVar16;
                if (*pbVar12 == 0) break;
                pbVar16 = pbVar12 + 1;
              } while ((*(ushort *)(iVar13 + (uint)*pbVar12 * 2) & 0x20) == 0);
              do {
                pbVar16 = pbVar12;
                pbVar12 = pbVar16 + 1;
              } while ((int)((uint)*(ushort *)(iVar13 + (uint)*pbVar16 * 2) << 0x1a) < 0);
            } while (*pbVar16 != 0);
            iVar13 = FUN_00022a68();
            if (2 < iVar13) {
              FUN_00022900(3,0,DAT_00015fc4 + 0x15d84,0x115,DAT_00015fc8 + 0x15d86,
                           DAT_00015fc0 + 0x15d7e);
            }
          }
        }
      }
      else {
        uVar14 = param_4;
        if (param_5 != '\0') {
          local_c4c = local_c30;
          local_c30 = local_828;
          uVar14 = 0x400;
          local_c48 = param_4;
        }
        switch(iVar13) {
        case 1:
          iVar13 = FUN_00027d06(iVar11);
          if (iVar13 != 0) {
            pbVar16 = (byte *)FUN_00027d06(iVar11);
            goto LAB_00015c66;
          }
          break;
        case 2:
          if (pcVar8 != (char *)0x0) {
            iVar13 = FUN_0002aec4(*param_1,pcVar8,abStack_428,0x200,1);
            if (iVar13 != 0) {
              pbVar16 = (byte *)FUN_000273b4(param_1[1],pcVar8);
              if ((pbVar16 == (byte *)0x0) &&
                 (((iVar13 = param_1[2], iVar13 == 0 || (iVar13 == param_1[1])) ||
                  (pbVar16 = (byte *)FUN_000273b4(iVar13,pcVar8), pbVar16 == (byte *)0x0)))) break;
              if (pbVar16 != abStack_428) {
                FUN_0002448c(abStack_428,0x200,pbVar16);
              }
            }
            sVar2 = strlen((char *)abStack_428);
            iVar13 = **(int **)(iVar7 + DAT_00015fbc);
            pbVar16 = abStack_428 + sVar2;
            while (sVar2 != 0) {
              pbVar16 = pbVar16 + -1;
              sVar2 = sVar2 - 1;
              if (-1 < (int)((uint)*(ushort *)(iVar13 + (uint)*pbVar16 * 2) << 0x1a)) break;
              *pbVar16 = 0;
            }
            iVar13 = FUN_0002b22c(abStack_428,DAT_00015fd8 + 0x15e3a);
            if ((0 < iVar13) && (iVar3 = FUN_00022a68(), 6 < iVar3)) {
              FUN_00022900(7,0,DAT_00015fe0 + 0x15e5a,0x147,DAT_00015fe4 + 0x15e5e,
                           DAT_00015fdc + 0x15e54,iVar13);
            }
            pbVar16 = abStack_428;
            goto LAB_00015c66;
          }
          iVar13 = FUN_00022a68();
          if (2 < iVar13) {
            FUN_00022900(3,0,DAT_00015fd0 + 0x15db4,300,DAT_00015fd4 + 0x15db6,
                         DAT_00015fcc + 0x15dae);
          }
          break;
        case 3:
          if (pcVar8 != (char *)0x0) {
            pbVar16 = (byte *)FUN_000289f0(param_1[1],pcVar8);
LAB_00015cc8:
            if (pbVar16 != (byte *)0x0) goto LAB_00015c66;
          }
          break;
        case 4:
          iVar13 = iVar11;
LAB_00015c9e:
          pbVar16 = (byte *)FUN_00027390(iVar13);
          goto LAB_00015c66;
        case 5:
          iVar13 = FUN_00027396(iVar11);
          if (iVar13 != 0) {
            pbVar16 = (byte *)FUN_00027396(iVar11);
            goto LAB_00015c66;
          }
          break;
        case 6:
          if (param_1[2] != 0) {
            pbVar16 = (byte *)FUN_000271da();
            goto LAB_00015cc8;
          }
          break;
        case 7:
          pbVar16 = (byte *)FUN_000272ce(iVar11);
          goto LAB_00015c66;
        case 8:
          iVar13 = param_1[2];
          if (param_1[2] != 0) goto LAB_00015c9e;
          break;
        case 9:
          uVar17 = FUN_00027c94(iVar11);
          uVar5 = gnu_dev_major(uVar17);
          pcVar8 = (char *)(DAT_00015fb4 + 0x15ce0);
          goto LAB_00015ce0;
        case 10:
          uVar17 = FUN_00027c94(iVar11);
          uVar5 = gnu_dev_minor(uVar17);
          pcVar8 = (char *)(DAT_00015fb8 + 0x15cfe);
LAB_00015ce0:
          pbVar16 = abStack_428;
          sprintf((char *)pbVar16,pcVar8,uVar5);
          goto LAB_00015c66;
        default:
          iVar3 = FUN_00022a68();
          if (2 < iVar3) {
            FUN_00022900(3,0,DAT_00015ff8 + 0x15f58,0x181,DAT_00015ffc + 0x15f5e,
                         DAT_00015ff4 + 0x15f52,iVar13);
          }
          break;
        case 0xc:
          iVar13 = FUN_000284c2(param_1[1]);
          if ((iVar13 != 0) && (iVar13 = FUN_00027d06(), iVar13 != 0)) {
            pbVar16 = (byte *)(iVar13 + 5);
            goto LAB_00015c66;
          }
          break;
        case 0xd:
          pbVar16 = (byte *)param_1[4];
          if (pbVar16 == (byte *)0x0) {
            iVar13 = FUN_00027d06(iVar11);
            if (iVar13 == 0) {
              pbVar16 = (byte *)FUN_00027390(iVar11);
            }
            else {
              iVar13 = FUN_00027d06(iVar11);
              pbVar16 = (byte *)(iVar13 + 5);
            }
          }
          goto LAB_00015c66;
        case 0xe:
          iVar13 = FUN_0002783c(iVar11);
          if (iVar13 != 0) {
            iVar3 = FUN_0002a278();
            iVar15 = DAT_00015fe8 + 0x15ee6;
            uVar14 = FUN_000243ec(&local_c30,uVar14,iVar3 + 5);
            for (iVar13 = FUN_0002a210(iVar13); iVar13 != 0; iVar13 = FUN_0002a210(iVar13)) {
              iVar3 = FUN_0002a278(iVar13);
              uVar14 = FUN_00024460(&local_c30,uVar14,iVar15,iVar3 + 5,0);
            }
          }
          break;
        case 0xf:
          pbVar16 = (byte *)(DAT_00015fec + 0x15f26);
          goto LAB_00015c66;
        case 0x10:
          pbVar16 = (byte *)(DAT_00015ff0 + 0x15f2c);
LAB_00015c66:
          uVar14 = FUN_000243ec(&local_c30,uVar14,pbVar16);
        }
        param_4 = uVar14;
        if (param_5 != '\0') {
          local_c30 = local_c4c;
          uVar5 = 0x400 - uVar14;
          if (local_c48 <= 0x400 - uVar14) {
            uVar5 = local_c48;
          }
          iVar13 = FUN_0002b1a0(local_828,local_c4c,uVar5);
          param_4 = local_c48 - iVar13;
          local_c30 = local_c30 + iVar13;
        }
      }
    }
    else {
      if (bVar1 == 0x25) {
        if (pbVar10[1] == 0x25) {
          pbVar16 = pbVar10 + 1;
        }
        else {
          iVar3 = 0;
          iVar13 = DAT_00015fa4 + 0x15bfe;
          do {
            if (*(byte *)(iVar13 + 4) == pbVar10[1]) {
              pbVar16 = pbVar10 + 2;
              iVar13 = *(int *)(iVar3 * 0xc + iVar4 + 0x15ada);
              goto LAB_00015b36;
            }
            iVar3 = iVar3 + 1;
            iVar13 = iVar13 + 0xc;
          } while (iVar3 != 0x12);
        }
      }
LAB_00015bcc:
      if (param_4 == 0) break;
      *local_c30 = *pbVar16;
      local_c30 = local_c30 + 1;
      param_4 = param_4 - 1;
      pbVar10 = pbVar16 + 1;
    }
  }
LAB_00015adc:
  *local_c30 = 0;
  return param_4;
LAB_00015bc2:
  iVar13 = iVar13 + 1;
  pbVar16 = pbVar10;
  if (iVar13 == 0x12) goto LAB_00015bcc;
  goto LAB_00015b00;
}



/* ===== FUN_00016000 @ 00016000 size=146 ===== */

undefined4 FUN_00016000(undefined4 param_1,char *param_2,int *param_3,undefined4 *param_4)

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
    pcVar1 = (char *)(DAT_00016094 + 0x16038);
    __delim = (char *)(DAT_00016098 + 0x1603c);
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



/* ===== FUN_0001609c @ 0001609c size=2628 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0001609c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                int param_6,undefined4 param_7,char **param_8,sigset_t *param_9,int param_10,
                uint param_11)

{
  longlong lVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  __pid_t __pid;
  size_t __n;
  char *pcVar6;
  ssize_t sVar7;
  __pid_t _Var8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  epoll_event *__events;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
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
  
  local_1aa8 = *(int *)(DAT_00016ae0 + 0x160ea);
  local_1a9c = *(int *)(DAT_00016ae0 + 0x160ee);
  local_1aa0 = local_1aa8;
  local_1aa4 = local_1a9c;
  FUN_0002448c(auStack_1838,0x400,param_7);
  FUN_00016000(*param_1,auStack_1838,0,local_1a38);
  if ((param_10 != 0) || (iVar3 = FUN_00022a68(), 5 < iVar3)) {
    iVar3 = pipe2(&local_1aa8,0x800);
    if (iVar3 == 0) {
      iVar3 = FUN_00022a68();
      if ((iVar3 < 6) || (iVar3 = pipe2(&local_1aa0,0x800), iVar3 == 0)) goto LAB_00016196;
      piVar4 = __errno_location();
      iVar14 = *piVar4;
      iVar5 = FUN_00022a68();
      iVar3 = -iVar14;
      if (iVar5 < 3) goto LAB_000163a0;
      iVar10 = DAT_00016af0 + 0x16184;
      iVar5 = DAT_00016af4 + 0x1618c;
      iVar11 = DAT_00016af8 + 0x161ae;
      uVar12 = 0x2de;
    }
    else {
      piVar4 = __errno_location();
      iVar14 = *piVar4;
      iVar5 = FUN_00022a68();
      iVar3 = -iVar14;
      if (iVar5 < 3) goto LAB_000163a0;
      iVar10 = DAT_00016ae4 + 0x16138;
      iVar5 = DAT_00016ae8 + 0x16140;
      iVar11 = DAT_00016aec + 0x16162;
      uVar12 = 0x2d7;
    }
LAB_0001614a:
    FUN_00022900(3,iVar14,iVar5,uVar12,iVar11,iVar10);
LAB_000163a0:
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
LAB_00016196:
  pcVar9 = local_1a38[0];
  if (*local_1a38[0] != '/') {
    FUN_0002449c(acStack_1438,0x400,DAT_00016afc + 0x161b2,local_1a38[0],0);
    iVar3 = access(acStack_1438,1);
    if (iVar3 != 0) {
      FUN_0002449c(acStack_1438,0x400,DAT_00016b00 + 0x161d8,local_1a38[0],0);
    }
    iVar3 = access(acStack_1438,1);
    pcVar9 = acStack_1438;
    if (iVar3 != 0) {
      FUN_0002449c(acStack_1438,0x400,DAT_00016b04 + 0x161f4,local_1a38[0],0);
    }
  }
  local_1a38[0] = pcVar9;
  __pid = fork();
  if (__pid == -1) {
    iVar5 = FUN_00022a68();
    iVar3 = -1;
    if (2 < iVar5) {
      piVar4 = __errno_location();
      FUN_00022900(3,*piVar4,DAT_00016b34 + 0x1638e,0x303,DAT_00016b38 + 0x163b2,
                   DAT_00016b30 + 0x16386,param_7);
    }
    goto LAB_000163a0;
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
        iVar5 = FUN_00022a68();
        if (2 < iVar5) {
          piVar4 = __errno_location();
          iVar14 = DAT_00016b3c + 0x1647c;
          iVar5 = DAT_00016b40 + 0x16484;
          iVar10 = DAT_00016b44 + 0x164c2;
          uVar12 = 0x1d9;
LAB_0001648c:
          iVar11 = *piVar4;
LAB_0001648e:
          FUN_00022900(3,iVar11,iVar5,uVar12,iVar10,iVar14);
        }
      }
      else if ((local_1ab4 < 0) || (iVar5 = epoll_ctl(iVar3,1,local_1ab4,&local_1a98), -1 < iVar5))
      {
        if ((local_1ab0 < 0) || (iVar5 = epoll_ctl(iVar3,1,local_1ab0,&local_1a88), -1 < iVar5)) {
          local_1ad4 = 0;
          iVar5 = DAT_00016bb4 + 0x1684a;
LAB_00016704:
          do {
            if ((local_1ab4 < 0) && (local_1ab0 < 0)) {
              if (param_10 != 0) {
                *(undefined1 *)(param_10 + local_1ad4) = 0;
              }
              goto LAB_00016494;
            }
            if (param_4 != 0 || param_3 != 0) {
              lVar19 = FUN_00024758(1);
              lVar16 = lVar19 - *(longlong *)(param_1 + 0x18);
              uVar13 = (uint)((ulonglong)lVar16 >> 0x20);
              bVar15 = param_4 <= uVar13;
              if (uVar13 == param_4) {
                bVar15 = param_3 <= (uint)lVar16;
              }
              if (!bVar15) {
                lVar19 = (*(longlong *)(param_1 + 0x18) + CONCAT44(param_4,param_3)) - lVar19;
                iVar14 = FUN_0002bfac((int)lVar19,(int)((ulonglong)lVar19 >> 0x20),1000,0);
                iVar14 = iVar14 + 1000;
                goto LAB_000165dc;
              }
              iVar5 = FUN_00022a68();
              if (2 < iVar5) {
                iVar14 = DAT_00016b64 + 0x1659e;
                iVar5 = DAT_00016b68 + 0x165a6;
                iVar10 = DAT_00016b6c + 0x165e6;
                uVar12 = 0x1f9;
LAB_000165b0:
                FUN_00022900(3,0,iVar5,uVar12,iVar10,iVar14,param_7);
              }
              goto LAB_00016494;
            }
            iVar14 = -1;
LAB_000165dc:
            __events = (epoll_event *)local_1a78;
            iVar14 = epoll_wait(iVar3,__events,4,iVar14);
            if (-1 < iVar14) {
              if (iVar14 == 0) {
                iVar5 = FUN_00022a68();
                if (2 < iVar5) {
                  iVar14 = DAT_00016b7c + 0x16642;
                  iVar5 = DAT_00016b80 + 0x1664a;
                  iVar10 = DAT_00016b84 + 0x1668a;
                  uVar12 = 0x208;
                  goto LAB_000165b0;
                }
                goto LAB_00016494;
              }
              local_1acc = 0;
              do {
                piVar4 = (__events->data).ptr;
                iVar10 = *piVar4;
                if (-1 < iVar10) {
                  if ((__events->events & 1) == 0) {
                    if ((int)(__events->events << 0x1b) < 0) {
                      iVar10 = epoll_ctl(iVar3,2,iVar10,(epoll_event *)0x0);
                      if (iVar10 < 0) {
                        iVar5 = FUN_00022a68();
                        if (iVar5 < 3) goto LAB_00016494;
                        piVar4 = __errno_location();
                        iVar14 = DAT_00016ba8 + 0x167ea;
                        iVar5 = DAT_00016bac + 0x167f0;
                        iVar10 = DAT_00016bb0 + 0x1682e;
                        uVar12 = 0x233;
                        goto LAB_0001648c;
                      }
                      *piVar4 = -1;
                    }
                  }
                  else {
                    __n = read(iVar10,local_1038,0xfff);
                    if (0 < (int)__n) {
                      *(undefined1 *)((int)local_1038 + __n) = 0;
                      if ((param_10 != 0) && (*piVar4 == local_1ab4)) {
                        if (local_1ad4 + __n < param_11) {
                          memcpy((void *)(local_1ad4 + param_10),local_1038,__n);
                          local_1ad4 = local_1ad4 + __n;
                        }
                        else {
                          iVar10 = FUN_00022a68();
                          if (2 < iVar10) {
                            FUN_00022900(3,0,DAT_00016b8c + 0x1674e,0x221,DAT_00016b94 + 0x167a0,
                                         DAT_00016b90 + 0x1675c,param_7,param_11);
                          }
                        }
                      }
                      if (-1 < local_1ab0) {
                        local_1aac = local_1038;
                        pcVar9 = (char *)(DAT_00016b88 + 0x166e8);
                        while (pcVar6 = strsep((char **)&local_1aac,pcVar9), pcVar6 != (char *)0x0)
                        {
                          if (((local_1aac != (int *)0x0) || (*pcVar6 != '\0')) &&
                             (iVar10 = FUN_00022a68(), 6 < iVar10)) {
                            if (*piVar4 == local_1ab4) {
                              iVar10 = DAT_00016ba4 + 0x167c2;
                            }
                            else {
                              iVar10 = DAT_00016b98 + 0x1679c;
                            }
                            FUN_00022900(7,0,DAT_00016ba0 + 0x167b0,0x22d,iVar5,
                                         DAT_00016b9c + 0x167aa,param_7,iVar10,pcVar6);
                          }
                        }
                      }
                    }
                  }
                }
                __events = __events + 1;
                local_1acc = local_1acc + 1;
              } while (local_1acc < iVar14);
              goto LAB_00016704;
            }
            piVar4 = __errno_location();
            iVar11 = *piVar4;
          } while (iVar11 == 4);
          iVar5 = FUN_00022a68();
          if (2 < iVar5) {
            iVar14 = DAT_00016b70 + 0x16612;
            iVar5 = DAT_00016b74 + 0x1661a;
            iVar10 = DAT_00016b78 + 0x16658;
            uVar12 = 0x205;
            goto LAB_0001648e;
          }
        }
        else {
          iVar5 = FUN_00022a68();
          if (2 < iVar5) {
            piVar4 = __errno_location();
            iVar14 = DAT_00016b58 + 0x16542;
            iVar5 = DAT_00016b5c + 0x1654a;
            iVar10 = DAT_00016b60 + 0x16588;
            uVar12 = 0x1e8;
            goto LAB_0001648c;
          }
        }
      }
      else {
        iVar5 = FUN_00022a68();
        if (2 < iVar5) {
          piVar4 = __errno_location();
          iVar14 = DAT_00016b4c + 0x164fe;
          iVar5 = DAT_00016b50 + 0x16506;
          iVar10 = DAT_00016b54 + 0x16544;
          uVar12 = 0x1e0;
          goto LAB_0001648c;
        }
      }
    }
LAB_00016494:
    FUN_00024ccc(iVar3);
    local_1a78._4_2_ = 1;
    local_1a78._0_4_ = param_1[0x1a];
    iVar3 = DAT_00016b48 + 0x164fb;
    uVar17 = VectorSub(CONCAT44(param_4,param_3),CONCAT44(param_6,param_5),8);
    do {
      while( true ) {
        while( true ) {
          if (__pid < 1) {
            iVar3 = 0;
            goto LAB_000163a0;
          }
          if (param_4 == 0 && param_3 == 0) {
            iVar5 = 0;
            iVar14 = -1;
          }
          else {
            lVar19 = FUN_00024758(1);
            lVar16 = *(longlong *)(param_1 + 0x18);
            uVar13 = (uint)((ulonglong)(lVar19 - lVar16) >> 0x20);
            bVar15 = param_4 <= uVar13;
            if (uVar13 == param_4) {
              bVar15 = param_3 <= (uint)(lVar19 - lVar16);
            }
            if (bVar15) {
              iVar5 = 0;
              iVar14 = 1000;
            }
            else {
              if (param_6 == 0 && param_5 == 0) {
                iVar5 = 0;
              }
              else {
                lVar1 = (lVar16 + CONCAT44(param_6,param_5)) - lVar19;
                iVar5 = FUN_0002bfac((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
                iVar5 = iVar5 + 1000;
              }
              uVar18 = VectorAdd(uVar17,lVar16,8);
              iVar14 = FUN_0002bfac((uint)uVar18 - (uint)lVar19,
                                    ((int)((ulonglong)uVar18 >> 0x20) -
                                    (int)((ulonglong)lVar19 >> 0x20)) -
                                    (uint)((uint)uVar18 < (uint)lVar19),1000,0);
              iVar14 = iVar14 + 1000;
            }
          }
          iVar5 = poll((pollfd *)local_1a78,1,iVar5);
          if (-1 < iVar5) break;
          piVar4 = __errno_location();
          iVar14 = *piVar4;
          if (iVar14 != 4) {
            iVar5 = FUN_00022a68();
            iVar3 = -iVar14;
            if (iVar5 < 3) goto LAB_000163a0;
            iVar10 = DAT_00016bb8 + 0x168c4;
            iVar5 = DAT_00016bbc + 0x168ca;
            iVar11 = DAT_00016bc0 + 0x16913;
            uVar12 = 0x264;
            goto LAB_0001614a;
          }
        }
        if (iVar5 == 0) break;
LAB_00016988:
        if (((int)((uint)(ushort)local_1a78._6_2_ << 0x1f) < 0) &&
           (sVar7 = read(param_1[0x1a],local_1038,0x80), sVar7 == 0x80)) {
          if (local_1038[0] == 0xf) {
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          else if ((local_1038[0] == 0x11) &&
                  (_Var8 = waitpid(__pid,(int *)&local_1a88,1), uVar2 = local_1a88.events,
                  -1 < _Var8)) {
            uVar13 = local_1a88.events & 0x7f;
            iVar3 = FUN_00022a68();
            if (uVar13 == 0) {
              if (6 < iVar3) {
                FUN_00022900(7,0,DAT_00016be8 + 0x169ea,0x289,DAT_00016bec + 0x16a39,
                             DAT_00016be4 + 0x169e4,param_7,__pid,(uVar2 & 0xffff) >> 8);
              }
              iVar3 = -(uint)((local_1a88.events >> 8 & 0xff) != 0);
            }
            else {
              if ((uVar2 & 0xffff) - 1 < 0xff) {
                if (2 < iVar3) {
                  pcVar9 = strsignal(uVar13);
                  FUN_00022900(3,0,DAT_00016bf4 + 0x16a38,0x28d,DAT_00016bf8 + 0x16a85,
                               DAT_00016bf0 + 0x16a32,param_7,__pid,uVar13,pcVar9);
                }
              }
              else if ((uVar2 & 0xff) == 0x7f) {
                if (2 < iVar3) {
                  iVar5 = DAT_00016bfc + 0x16a66;
                  iVar3 = DAT_00016c00 + 0x16a6c;
                  iVar14 = DAT_00016c04 + 0x16ab9;
                  uVar12 = 0x290;
LAB_00016a78:
                  FUN_00022900(3,0,iVar3,uVar12,iVar14,iVar5,param_7,__pid);
                }
              }
              else if (uVar2 == 0xffff) {
                if (2 < iVar3) {
                  iVar5 = DAT_00016c08 + 0x16a96;
                  iVar3 = DAT_00016c0c + 0x16a9c;
                  iVar14 = DAT_00016c10 + 0x16ae9;
                  uVar12 = 0x293;
                  goto LAB_00016a78;
                }
              }
              else if (2 < iVar3) {
                FUN_00022900(3,0,DAT_00016c18 + 0x16ac0,0x296,DAT_00016c1c + 0x16b0d,
                             DAT_00016c14 + 0x16aba,param_7,__pid,uVar2);
              }
              iVar3 = -1;
            }
            goto LAB_000163a0;
          }
        }
      }
      iVar5 = FUN_00022a68();
      if (3 < iVar5) {
        FUN_00022900(4,0,DAT_00016bc8 + 0x1690c,0x268,DAT_00016bcc + 0x16959,DAT_00016bc4 + 0x16906,
                     param_7,__pid);
      }
      iVar5 = poll((pollfd *)local_1a78,1,iVar14);
      if (-1 < iVar5) {
        if (iVar5 == 0) {
          iVar5 = FUN_00022a68();
          if (2 < iVar5) {
            FUN_00022900(3,0,DAT_00016be0 + 0x1697a,0x273,iVar3,DAT_00016bdc + 0x16970,param_7,__pid
                        );
          }
          kill(__pid,9);
        }
        goto LAB_00016988;
      }
      piVar4 = __errno_location();
      iVar14 = *piVar4;
    } while (iVar14 == 4);
    iVar5 = FUN_00022a68();
    iVar3 = -iVar14;
    if (iVar5 < 3) goto LAB_000163a0;
    iVar10 = DAT_00016bd0 + 0x1694a;
    iVar5 = DAT_00016bd4 + 0x16950;
    iVar11 = DAT_00016bd8 + 0x16999;
    uVar12 = 0x26f;
    goto LAB_0001614a;
  }
  if (-1 < local_1aa8) {
    close(local_1aa8);
    local_1aa8 = -1;
  }
  if (-1 < local_1aa0) {
    close(local_1aa0);
    local_1aa0 = -1;
  }
  iVar3 = FUN_00022a68();
  if (6 < iVar3) {
    FUN_00022900(7,0,DAT_00016b0c + 0x1625a,0x2fc,DAT_00016b10 + 0x1627e,DAT_00016b08 + 0x16252,
                 param_7);
  }
  iVar5 = local_1a9c;
  iVar3 = local_1aa4;
  iVar14 = open64((char *)(DAT_00016b14 + 0x16276),2);
  piVar4 = __errno_location();
  if (iVar14 < 0) {
    iVar10 = FUN_00022a68();
    if (2 < iVar10) {
      FUN_00022900(3,*piVar4,DAT_00016b28 + 0x16358,0x1a7,DAT_00016b2c + 0x1638b,
                   DAT_00016b24 + 0x16350);
    }
    if (-1 < iVar3) goto LAB_000162b4;
LAB_000162c2:
    if (iVar5 < 0) goto LAB_000162d6;
  }
  else {
    dup2(iVar14,0);
    if (-1 < iVar3) {
      if (-1 < iVar5) goto LAB_000162b4;
LAB_000162a8:
      dup2(iVar14,2);
      if (iVar3 < 0) goto LAB_000162d6;
LAB_000162b4:
      dup2(iVar3,1);
      FUN_00024ccc(iVar3);
      goto LAB_000162c2;
    }
    dup2(iVar14,1);
    if (iVar5 < 0) goto LAB_000162a8;
  }
  dup2(iVar5,2);
  FUN_00024ccc(iVar5);
LAB_000162d6:
  prctl(1,0xf);
  if (param_9 != (sigset_t *)0x0) {
    sigprocmask(2,param_9,(sigset_t *)0x0);
  }
  execve(local_1a38[0],local_1a38,param_8);
  iVar3 = FUN_00022a68();
  if (2 < iVar3) {
    FUN_00022900(3,*piVar4,DAT_00016b18 + 0x16312,0x1bd,DAT_00016b20 + 0x16351,
                 DAT_00016b1c + 0x16318,local_1a38[0],param_7);
  }
  FUN_00024ccc(iVar14);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}



/* ===== FUN_00016c20 @ 00016c20 size=958 ===== */

void FUN_00016c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *__s2;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar15 = param_1[1];
  iVar1 = FUN_00027d5c(uVar15);
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = (char *)FUN_000273a8(uVar15);
  iVar1 = strcmp(pcVar2,(char *)(DAT_00016fe0 + 0x16c4a));
  if (iVar1 == 0) {
    FUN_00027830();
    FUN_00026d90(uVar15,0,0);
    FUN_000270cc(uVar15);
    uVar18 = FUN_00027c94(uVar15);
    uVar3 = gnu_dev_major(uVar18);
    if (uVar3 != 0) {
      FUN_00017428(*param_1,uVar15);
    }
    FUN_0001a2ac(param_8,param_1,param_3,param_4,param_5,param_6,param_7,param_9);
    uVar18 = FUN_00027c94(uVar15);
    uVar3 = gnu_dev_major(uVar18);
    if (uVar3 == 0) {
      return;
    }
    FUN_00017fb4(uVar15);
    return;
  }
  iVar1 = FUN_00028c9e(uVar15);
  param_1[3] = iVar1;
  if (iVar1 != 0) {
    uVar18 = FUN_00027c94(uVar15);
    uVar3 = gnu_dev_major(uVar18);
    if (uVar3 != 0) {
      FUN_00017428(*param_1,param_1[3]);
    }
  }
  uVar18 = FUN_00027c94(uVar15);
  uVar3 = gnu_dev_major(uVar18);
  if (uVar3 == 0) {
    pcVar2 = (char *)FUN_000273a8(uVar15);
    iVar1 = strcmp(pcVar2,(char *)(DAT_00016fe4 + 0x16ce2));
    if (iVar1 == 0) {
      FUN_00028da2(uVar15,param_1[3]);
    }
  }
  FUN_0001a2ac(param_8,param_1,param_3,param_4,param_5,param_6,param_7,param_9);
  iVar1 = FUN_00027c80(uVar15);
  if (iVar1 < 1) goto LAB_00016df6;
  pcVar2 = (char *)FUN_000273a8(uVar15);
  iVar1 = strcmp(pcVar2,(char *)(DAT_00016fe8 + 0x16d1c));
  if ((iVar1 != 0) || (pcVar2 = (char *)param_1[4], pcVar2 == (char *)0x0)) goto LAB_00016df6;
  __s2 = (char *)FUN_00027390(uVar15);
  iVar1 = strcmp(pcVar2,__s2);
  if (iVar1 == 0) goto LAB_00016df6;
  puVar4 = (undefined4 *)FUN_00027390(param_1[1]);
  puVar17 = (undefined4 *)param_1[4];
  iVar1 = FUN_00022a68();
  if (6 < iVar1) {
    FUN_00022900(7,0,DAT_00016ff0 + 0x16d62,0x330,DAT_00016ff4 + 0x16dba,DAT_00016fec + 0x16d5c,
                 puVar4,puVar17);
  }
  iVar1 = socket(2,2,0);
  if (iVar1 < 0) {
    piVar5 = __errno_location();
    iVar16 = *piVar5;
    iVar1 = FUN_00022a68();
    if (iVar1 < 3) {
      if (0 < iVar16) {
        iVar16 = -iVar16;
      }
    }
    else {
      iVar16 = FUN_00022900(3,-iVar16,DAT_00016ffc + 0x16da6,0x334,DAT_00017000 + 0x16dfa,
                            DAT_00016ff8 + 0x16da0);
    }
  }
  else {
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_48 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_34 = uStack_44;
    uStack_2c = uStack_44;
    FUN_0002448c(&local_48,0x10,puVar4);
    FUN_0002448c(&local_38,0x10,puVar17);
    iVar16 = ioctl(iVar1,0x8923,&local_48);
    if (iVar16 < 0) {
      iVar10 = FUN_00022a68();
      if (2 < iVar10) {
        piVar5 = __errno_location();
        iVar13 = DAT_00017014 + 0x16f06;
        iVar11 = DAT_00017018 + 0x16f08;
        uVar7 = 3;
        iVar10 = -*piVar5;
        iVar14 = DAT_0001701c + 0x16f6a;
        uVar6 = 0x35e;
        puVar4 = &local_48;
        puVar17 = &local_38;
LAB_00016f1e:
        FUN_00022900(uVar7,iVar10,iVar11,uVar6,iVar14,iVar13,puVar4,puVar17);
      }
    }
    else {
      iVar10 = FUN_00022a68();
      if (6 < iVar10) {
        iVar10 = 0;
        uVar7 = 7;
        iVar13 = DAT_00017020 + 0x16f3e;
        iVar11 = DAT_00017024 + 0x16f44;
        iVar14 = DAT_00017028 + 0x16f9c;
        uVar6 = 0x360;
        goto LAB_00016f1e;
      }
    }
    close(iVar1);
  }
  if (iVar16 < 0) {
    iVar1 = FUN_00022a68();
    if (iVar1 < 4) goto LAB_00016df6;
    uVar6 = FUN_00027c80(uVar15);
    uVar7 = FUN_00027390(uVar15);
    uVar9 = param_1[4];
    iVar1 = DAT_00017004 + 0x16dda;
    iVar10 = DAT_00017008 + 0x16de2;
    iVar11 = DAT_0001700c + 0x16e5b;
    uVar12 = 0x3e5;
  }
  else {
    iVar16 = FUN_00028b78(uVar15,param_1[4]);
    if (-1 < iVar16) {
      iVar1 = FUN_00022a68();
      if (6 < iVar1) {
        uVar6 = FUN_000272ce(uVar15);
        FUN_00022900(7,0,DAT_0001703c + 0x16fb6,0x3ed,DAT_00017040 + 0x1702b,DAT_00017038 + 0x16fb0,
                     uVar6);
      }
      goto LAB_00016df6;
    }
    iVar1 = FUN_00022a68();
    if (iVar1 < 4) goto LAB_00016df6;
    uVar6 = FUN_00027c80(uVar15);
    uVar7 = FUN_00027390(uVar15);
    uVar9 = param_1[4];
    iVar1 = DAT_0001702c + 0x16f80;
    iVar10 = DAT_00017030 + 0x16f88;
    iVar11 = DAT_00017034 + 0x17001;
    uVar12 = 0x3eb;
  }
  FUN_00022900(4,iVar16,iVar1,uVar12,iVar11,iVar10,uVar6,uVar7,uVar9);
LAB_00016df6:
  uVar18 = FUN_00027c94(uVar15);
  uVar3 = gnu_dev_major(uVar18);
  if (uVar3 != 0) {
    if (param_1[3] != 0) {
      FUN_00017a7c(uVar15);
    }
    if (*(char *)((int)param_1 + 0x79) == '\0') {
      uVar6 = FUN_00027ce2(uVar15);
      param_1[7] = uVar6;
    }
    if (*(char *)((int)param_1 + 0x77) == '\0') {
      uVar6 = FUN_00027cf4(uVar15);
      param_1[8] = uVar6;
    }
    if (*(char *)((int)param_1 + 0x7b) == '\0') {
      iVar1 = FUN_00027cd0(uVar15);
      if (iVar1 == 0) {
        if (param_1[8] == 0) {
          uVar6 = 0x180;
        }
        else {
          uVar6 = 0x1b0;
        }
        param_1[6] = uVar6;
      }
      else {
        uVar6 = FUN_00027cd0(uVar15);
        param_1[6] = uVar6;
      }
    }
    pcVar2 = (char *)FUN_000273a8(uVar15);
    iVar1 = strcmp(pcVar2,(char *)(DAT_00017010 + 0x16e50));
    if (((iVar1 == 0) || (*(char *)((int)param_1 + 0x79) != '\0')) ||
       (*(char *)((int)param_1 + 0x77) != '\0')) {
      bVar8 = 1;
    }
    else {
      bVar8 = *(byte *)((int)param_1 + 0x7b);
    }
    FUN_00017b18(uVar15,bVar8 & 1,param_1[6],param_1[7],param_1[8],param_1 + 9);
  }
  FUN_00027f20(param_1[1],param_1[3]);
  FUN_00026d90(uVar15,param_1[3],1);
  FUN_00026e0e(uVar15);
  FUN_0002760c(uVar15);
  uVar15 = FUN_0002723c(param_1[3]);
  param_1[3] = uVar15;
  return;
}



/* ===== FUN_00017044 @ 00017044 size=228 ===== */

void FUN_00017044(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_438 [1028];
  
  iVar6 = DAT_0001712c + 0x17064;
  iVar5 = DAT_00017128 + 0x170ea;
  for (iVar1 = FUN_0002a1fc(param_1 + 0x40); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
    uVar2 = FUN_0002a278(iVar1);
    uVar3 = FUN_0002a284(iVar1);
    if (uVar3 < 9) {
      FUN_00015aa2(param_1,uVar2,auStack_438,0x400,0);
      FUN_0001c5b4(*(undefined4 *)(param_1 + 4),uVar3,auStack_438,0);
    }
    else {
      if (0 < *(int *)(param_1 + 0x5c)) {
        iVar4 = FUN_00022a68();
        if (6 < iVar4) {
          FUN_00022900(7,0,iVar6,0x42c,iVar5,DAT_00017130 + 0x170dc,auStack_438);
        }
        sleep(*(uint *)(param_1 + 0x5c));
      }
      FUN_00015aa2(param_1,uVar2,auStack_438,0x400,0);
      uVar7 = FUN_00028ae0(*(undefined4 *)(param_1 + 4));
      FUN_0001609c(param_1,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4,param_5,auStack_438,
                   (int)uVar7,param_6,0,0);
    }
  }
  return;
}



/* ===== FUN_00017134 @ 00017134 size=70 ===== */

undefined4 FUN_00017134(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = inotify_init1(0x80000);
  *(int *)(DAT_0001717c + 0x17144) = iVar1;
  if ((iVar1 < 0) && (iVar1 = FUN_00022a68(), 2 < iVar1)) {
    piVar2 = __errno_location();
    FUN_00022900(3,*piVar2,DAT_00017184 + 0x17162,0x2a,DAT_00017188 + 0x17164,DAT_00017180 + 0x1715c
                 ,param_3);
  }
  return *(undefined4 *)(DAT_0001718c + 0x17174);
}



/* ===== FUN_00017190 @ 00017190 size=254 ===== */

void FUN_00017190(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char acStack_410 [1024];
  
  if (-1 < *(int *)(DAT_00017290 + 0x17198)) {
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      uVar2 = FUN_00027d06(param_2);
      FUN_00022900(7,0,DAT_00017298 + 0x171c0,0x67,DAT_0001729c + 0x171d2,DAT_00017294 + 0x171ba,
                   uVar2);
    }
    piVar5 = (int *)(DAT_000172a0 + 0x171d6);
    iVar1 = *piVar5;
    pcVar3 = (char *)FUN_00027d06(param_2);
    iVar1 = inotify_add_watch(iVar1,pcVar3,8);
    if (iVar1 < 0) {
      iVar1 = FUN_00022a68();
      if (2 < iVar1) {
        piVar4 = __errno_location();
        iVar1 = *piVar5;
        iVar6 = *piVar4;
        uVar2 = FUN_00027d06(param_2);
        FUN_00022900(3,iVar6,DAT_000172a4 + 0x1720a,0x6b,DAT_000172ac + 0x1722a,
                     DAT_000172a8 + 0x17214,iVar1,uVar2,8);
      }
    }
    else {
      snprintf(acStack_410,0x400,(char *)(DAT_000172b0 + 0x17236),iVar1);
      FUN_00022d98(acStack_410,0x1ed);
      unlink(acStack_410);
      pcVar3 = (char *)FUN_00027e14(param_2);
      iVar6 = symlink(pcVar3,acStack_410);
      if ((iVar6 < 0) && (iVar6 = FUN_00022a68(), 2 < iVar6)) {
        piVar5 = __errno_location();
        FUN_00022900(3,*piVar5,DAT_000172b8 + 0x17274,0x74,DAT_000172bc + 0x17288,
                     DAT_000172b4 + 0x1726e,acStack_410);
      }
      FUN_00027686(param_2,iVar1);
    }
  }
  return;
}



/* ===== FUN_000172c0 @ 000172c0 size=306 ===== */

void FUN_000172c0(undefined4 param_1)

{
  int iVar1;
  DIR *__dirp;
  int *piVar2;
  dirent64 *pdVar3;
  ssize_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *__new;
  char acStack_420 [1024];
  
  if (*(int *)(DAT_000173f4 + 0x172ca) < 0) {
    return;
  }
  __new = (char *)(DAT_000173f8 + 0x172dc);
  iVar1 = rename((char *)(DAT_000173fc + 0x172de),__new);
  if (iVar1 == 0) {
    __dirp = opendir(__new);
    if (__dirp != (DIR *)0x0) {
      pdVar3 = readdir64(__dirp);
      iVar5 = DAT_00017410 + 0x1732a;
      iVar1 = DAT_0001740c + 0x17349;
      while (pdVar3 != (dirent64 *)0x0) {
        if (pdVar3->d_name[0] != '.') {
          iVar6 = dirfd(__dirp);
          sVar4 = readlinkat(iVar6,pdVar3->d_name,acStack_420,0x400);
          if ((0 < sVar4) && (sVar4 != 0x400)) {
            acStack_420[sVar4] = '\0';
            iVar6 = FUN_00028358(param_1,acStack_420);
            if (iVar6 != 0) {
              iVar7 = FUN_00022a68();
              if (6 < iVar7) {
                uVar8 = FUN_00027d06(iVar6);
                FUN_00022900(7,0,iVar5,0x50,iVar1,DAT_00017418 + 0x17396,uVar8);
              }
              FUN_00017190(param_1,iVar6);
              FUN_0002723c(iVar6);
            }
          }
          iVar6 = dirfd(__dirp);
          unlinkat(iVar6,pdVar3->d_name,0);
        }
        pdVar3 = readdir64(__dirp);
      }
      closedir(__dirp);
      rmdir((char *)(DAT_00017414 + 0x1733a));
      return;
    }
    iVar1 = FUN_00022a68();
    if (iVar1 < 3) {
      return;
    }
    piVar2 = __errno_location();
    iVar6 = DAT_00017400 + 0x17304;
    iVar5 = DAT_00017404 + 0x1730a;
    iVar7 = DAT_00017408 + 0x1732d;
    uVar8 = 0x3b;
    iVar1 = *piVar2;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if (iVar1 == 2) {
      return;
    }
    iVar5 = FUN_00022a68();
    if (iVar5 < 3) {
      return;
    }
    iVar6 = DAT_0001741c + 0x173e4;
    iVar5 = DAT_00017420 + 0x173ea;
    iVar7 = DAT_00017424 + 0x1740d;
    uVar8 = 0x5b;
  }
  FUN_00022900(3,iVar1,iVar5,uVar8,iVar7,iVar6);
  return;
}



/* ===== FUN_00017428 @ 00017428 size=124 ===== */

void FUN_00017428(undefined4 param_1,undefined4 param_2)

{
  int __wd;
  int iVar1;
  undefined4 uVar2;
  char acStack_410 [1028];
  
  if ((-1 < *(int *)(DAT_000174a4 + 0x17430)) && (__wd = FUN_00028b56(param_2), -1 < __wd)) {
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      uVar2 = FUN_00027d06(param_2);
      FUN_00022900(7,0,DAT_000174ac + 0x17462,0x84,DAT_000174b0 + 0x17498,DAT_000174a8 + 0x1745c,
                   uVar2);
    }
    inotify_rm_watch(*(int *)(DAT_000174b4 + 0x17478),__wd);
    snprintf(acStack_410,0x400,(char *)(DAT_000174b8 + 0x1748a),__wd);
    unlink(acStack_410);
    FUN_00027686(param_2,0xffffffff);
  }
  return;
}



/* ===== FUN_000174bc @ 000174bc size=86 ===== */

undefined4 FUN_000174bc(undefined4 param_1,int param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  char acStack_610 [512];
  char acStack_410 [1024];
  
  if ((-1 < *(int *)(DAT_00017514 + 0x174c6)) && (-1 < param_2)) {
    snprintf(acStack_410,0x400,(char *)(DAT_00017518 + 0x174ea),param_2);
    sVar1 = readlink(acStack_410,acStack_610,0x200);
    if ((0 < sVar1) && (sVar1 != 0x200)) {
      acStack_610[sVar1] = '\0';
      uVar2 = FUN_00028358(param_1,acStack_610);
      return uVar2;
    }
  }
  return 0;
}



/* ===== FUN_0001751c @ 0001751c size=660 ===== */

int FUN_0001751c(undefined4 param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_000177b0 + 0x1754e;
  pcVar11 = param_3 + iVar6;
  local_8b4 = __from;
  while( true ) {
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    if (cVar1 == '\0') break;
    pcVar11 = pcVar10;
    if (cVar1 == '/') {
      uVar5 = FUN_000243ec(&local_8b4,uVar5,iVar7);
    }
  }
  iVar2 = FUN_0002448c(local_8b4,uVar5,param_2 + iVar2);
  if (iVar2 == 0) {
    return -0x16;
  }
  iVar2 = lstat64(param_3,&sStack_8b0);
  if (iVar2 == 0) {
    if ((sStack_8b0.st_mode & 0xb000) == 0x2000) {
      iVar2 = FUN_00022a68();
      if (iVar2 < 3) goto LAB_00017590;
      iVar8 = DAT_000177b4 + 0x175c6;
      iVar7 = DAT_000177b8 + 0x175cc;
      iVar9 = DAT_000177bc + 0x175d2;
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
            iVar2 = FUN_00022a68();
            if (6 < iVar2) {
              FUN_00022900(7,0,DAT_000177c4 + 0x1762a,0x4f,DAT_000177c8 + 0x17630,
                           DAT_000177c0 + 0x17624,param_3,__from);
            }
            FUN_00022170(param_3,1,0);
            utimensat(-100,param_3,(timespec *)0x0,0x100);
            return 0;
          }
        }
      }
LAB_000176b8:
      iVar2 = FUN_00022a68();
      if (6 < iVar2) {
        FUN_00022900(7,0,DAT_000177dc + 0x176d2,0x66,DAT_000177e0 + 0x176d6,DAT_000177d8 + 0x176cc,
                     param_3);
      }
      param_2 = acStack_448;
      uVar5 = FUN_00027e14(param_1);
      FUN_0002449c(param_2,0x420,param_3,DAT_000177e4 + 0x176fa,uVar5,0);
      unlink(param_2);
      do {
        iVar2 = FUN_00022ba8(param_2,0x1ed);
        if ((iVar2 != 0) && (iVar2 != -2)) goto LAB_00017782;
        FUN_00023838(param_2,0xa000);
        iVar2 = symlink(__from,param_2);
        if (iVar2 == 0) {
          FUN_0002383c();
          goto LAB_0001772c;
        }
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        FUN_0002383c();
      } while (iVar2 == 2);
      if (iVar2 == 0) {
LAB_0001772c:
        iVar2 = rename(param_2,param_3);
        if (iVar2 != 0) {
          iVar6 = FUN_00022a68();
          if (2 < iVar6) {
            piVar4 = __errno_location();
            FUN_00022900(3,*piVar4,DAT_000177ec + 0x17756,0x79,DAT_000177f0 + 0x1775c,
                         DAT_000177e8 + 0x17750,param_2,param_3);
          }
          unlink(param_2);
          return iVar2;
        }
        goto LAB_00017590;
      }
      iVar2 = -iVar2;
LAB_00017782:
      iVar6 = FUN_00022a68();
      if (iVar6 < 3) {
        return iVar2;
      }
      piVar4 = __errno_location();
      iVar8 = DAT_000177f4 + 0x17798;
      iVar7 = DAT_000177f8 + 0x1779e;
      iVar9 = DAT_000177fc + 0x177a4;
      uVar5 = 0x74;
      iVar6 = *piVar4;
    }
    FUN_00022900(3,iVar6,iVar7,uVar5,iVar9,iVar8,__from,param_2);
  }
  else {
    iVar2 = FUN_00022a68();
    if (6 < iVar2) {
      FUN_00022900(7,0,DAT_000177d0 + 0x1766c,0x57,DAT_000177d4 + 0x17672,DAT_000177cc + 0x17666,
                   param_3,__from);
    }
    do {
      iVar2 = FUN_00022ba8(param_3,0x1ed);
      if ((iVar2 != 0) && (iVar2 != -2)) goto LAB_000176b8;
      FUN_00023838(param_3,0xa000);
      iVar2 = symlink(__from,param_3);
      if (iVar2 == 0) {
        FUN_0002383c();
        return 0;
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      FUN_0002383c();
    } while (iVar2 == 2);
    if (iVar2 != 0) goto LAB_000176b8;
LAB_00017590:
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00017800 @ 00017800 size=570 ===== */

void FUN_00017800(undefined4 param_1,char *param_2,int param_3)

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
  
  FUN_0002b12c(param_2 + 4,auStack_1428,0x400);
  FUN_0002449c(acStack_1028,0x400,DAT_00017a40 + 0x17832,auStack_1428,0);
  uVar1 = FUN_00027e14(param_1);
  FUN_0002449c(acStack_828,0x800,acStack_1028,DAT_00017a44 + 0x17850,uVar1,0);
  if ((param_3 == 0) && (iVar2 = unlink(acStack_828), iVar2 == 0)) {
    rmdir(acStack_1028);
  }
  uVar1 = FUN_00027228(param_1);
  if (param_3 == 0) {
    puVar12 = (undefined1 *)0x0;
    iVar2 = 0;
  }
  else {
    puVar12 = auStack_c28;
    iVar2 = FUN_00028b42(param_1);
    uVar3 = FUN_00027d06(param_1);
    FUN_0002448c(puVar12,0x400,uVar3);
  }
  __dirp = opendir(acStack_1028);
  if (__dirp != (DIR *)0x0) {
    iVar10 = DAT_00017a48 + 0x178aa;
    iVar11 = DAT_00017a4c + 0x178bd;
    while ((pdVar4 = readdir64(__dirp), pdVar4 != (dirent64 *)0x0 && (pdVar4->d_name[0] != '\0'))) {
      if (pdVar4->d_name[0] != '.') {
        iVar5 = FUN_00022a68();
        __s1 = pdVar4->d_name;
        if (6 < iVar5) {
          FUN_00022900(7,0,iVar10,0x9a,iVar11,DAT_00017a50 + 0x178e2,__s1,acStack_1028);
        }
        __s2 = (char *)FUN_00027e14(param_1);
        iVar5 = strcmp(__s1,__s2);
        if ((iVar5 != 0) && (iVar5 = FUN_00028358(uVar1,__s1), iVar5 != 0)) {
          iVar6 = FUN_00027d06();
          if ((iVar6 != 0) &&
             ((puVar12 == (undefined1 *)0x0 || (iVar8 = FUN_00028b42(iVar5), iVar2 < iVar8)))) {
            iVar2 = FUN_00022a68();
            if (6 < iVar2) {
              uVar3 = FUN_000272d4(iVar5);
              uVar7 = FUN_00028b42(iVar5);
              FUN_00022900(7,0,DAT_00017a58 + 0x1793e,0xa8,DAT_00017a5c + 0x1794f,
                           DAT_00017a54 + 0x17938,uVar3,uVar7,acStack_1028);
            }
            puVar12 = auStack_c28;
            iVar2 = FUN_00028b42(iVar5);
            FUN_0002448c(puVar12,0x400,iVar6);
          }
          FUN_0002723c(iVar5);
        }
      }
    }
    closedir(__dirp);
  }
  iVar2 = FUN_00022a68();
  if (puVar12 == (undefined1 *)0x0) {
    if (6 < iVar2) {
      FUN_00022900(7,0,DAT_00017a64 + 0x179a6,0xc6,DAT_00017a68 + 0x179cd,DAT_00017a60 + 0x179a0,
                   param_2);
    }
    iVar2 = unlink(param_2);
    if (iVar2 == 0) {
      FUN_00025174(param_2,DAT_00017a6c + 0x179c2);
    }
  }
  else {
    if (6 < iVar2) {
      FUN_00022900(7,0,DAT_00017a74 + 0x17a16,0xca,DAT_00017a78 + 0x17a3f,DAT_00017a70 + 0x17a10,
                   param_2,puVar12);
    }
    FUN_0001751c(param_1,puVar12,param_2);
  }
  iVar2 = DAT_00017a3c;
  if (param_3 != 0) {
    do {
      iVar10 = FUN_00022d98(acStack_828,0x1ed);
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



/* ===== FUN_00017a7c @ 00017a7c size=142 ===== */

void FUN_00017a7c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *__s1;
  int iVar2;
  undefined4 uVar3;
  char *__s2;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0002783c(param_2);
  iVar6 = DAT_00017b10 + 0x17a98;
  iVar5 = DAT_00017b0c + 0x17ac5;
  do {
    if (iVar1 == 0) {
      return;
    }
    __s1 = (char *)FUN_0002a278(iVar1);
    for (iVar2 = FUN_0002783c(param_1); iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
      __s2 = (char *)FUN_0002a278(iVar2);
      iVar4 = strcmp(__s1,__s2);
      if (iVar4 == 0) goto LAB_00017ae6;
    }
    iVar2 = FUN_00022a68();
    if (6 < iVar2) {
      uVar3 = FUN_000272ce(param_1);
      FUN_00022900(7,0,iVar6,0xf7,iVar5,DAT_00017b14 + 0x17ace,__s1,uVar3);
    }
    FUN_00017800(param_1,__s1,0);
LAB_00017ae6:
    iVar1 = FUN_0002a210(iVar1);
  } while( true );
}



/* ===== FUN_00017b18 @ 00017b18 size=1010 ===== */

void FUN_00017b18(undefined4 param_1,int param_2,uint param_3,__uid_t param_4,__gid_t param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *__s1;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int local_438;
  stat64 asStack_428 [9];
  
  iVar1 = FUN_00022a68();
  if (6 < iVar1) {
    uVar2 = FUN_00027d06(param_1);
    uVar3 = FUN_00027e14(param_1);
    FUN_00022900(7,0,DAT_00017f10 + 0x17b52,0x159,DAT_00017f14 + 0x17ba2,DAT_00017f0c + 0x17b4c,
                 uVar2,uVar3,param_3,param_4,param_5);
  }
  pcVar4 = (char *)FUN_00027d06(param_1);
  lVar17 = FUN_00027c94(param_1);
  pcVar5 = (char *)FUN_00027d5c(param_1);
  iVar1 = strcmp(pcVar5,(char *)(DAT_00017f18 + 0x17b88));
  if (iVar1 == 0) {
    param_3 = param_3 | 0x6000;
  }
  else {
    param_3 = param_3 | 0x2000;
  }
  iVar1 = lstat64(pcVar4,asStack_428);
  if (iVar1 == 0) {
    if ((((param_3 ^ asStack_428[0].st_mode) & 0xf000) != 0) ||
       (lVar17 != CONCAT44(asStack_428[0].st_rdev._4_4_,(undefined4)asStack_428[0].st_rdev))) {
      iVar1 = FUN_00022a68();
      if (iVar1 < 7) {
        return;
      }
      uVar2 = FUN_00027d06(param_1);
      uVar3 = FUN_00027e14(param_1);
      FUN_00022900(7,0,DAT_00017f38 + 0x17c94,0x113,DAT_00017f3c + 0x17cee,DAT_00017f34 + 0x17c8e,
                   uVar2,uVar3);
      return;
    }
    local_438 = 0;
    if (param_2 != 0) {
      iVar1 = FUN_00022a68();
      if (((((param_3 ^ asStack_428[0].st_mode) & 0x1ff) == 0) && (param_4 == asStack_428[0].st_uid)
          ) && (param_5 == asStack_428[0].st_gid)) {
        if (6 < iVar1) {
          FUN_00022900(7,0,DAT_00017f70 + 0x17dce,0x124,DAT_00017f74 + 0x17e2c,
                       DAT_00017f6c + 0x17dc8,pcVar4,param_3,param_4,param_5);
        }
      }
      else {
        if (6 < iVar1) {
          FUN_00022900(7,0,DAT_00017f44 + 0x17ce0,0x11c,DAT_00017f48 + 0x17d3e,
                       DAT_00017f40 + 0x17cda,pcVar4,param_3,param_4,param_5);
        }
        iVar1 = chmod(pcVar4,param_3);
        if ((iVar1 < 0) && (iVar1 = FUN_00022a68(), 3 < iVar1)) {
          piVar6 = __errno_location();
          FUN_00022900(4,*piVar6,DAT_00017f50 + 0x17d1a,0x11f,DAT_00017f54 + 0x17d78,
                       DAT_00017f4c + 0x17d14,pcVar4,param_3);
        }
        local_438 = chown(pcVar4,param_4,param_5);
        if ((local_438 < 0) && (iVar1 = FUN_00022a68(), 3 < iVar1)) {
          piVar6 = __errno_location();
          FUN_00022900(4,*piVar6,DAT_00017f5c + 0x17d58,0x122,DAT_00017f60 + 0x17db6,
                       DAT_00017f58 + 0x17d52,pcVar4,param_4,param_5);
        }
      }
      iVar1 = 0;
      iVar9 = FUN_0002a1fc(param_6);
      iVar16 = 0;
      pcVar5 = (char *)(DAT_00017f64 + 0x17d80);
      iVar13 = DAT_00017f68 + 0x17dde;
      for (; iVar9 != 0; iVar9 = FUN_0002a210(iVar9)) {
        __s1 = (char *)FUN_0002a278(iVar9);
        uVar2 = FUN_0002a27e(iVar9);
        iVar10 = strcmp(__s1,pcVar5);
        if (iVar10 == 0) {
          iVar10 = FUN_000237fc(pcVar4,uVar2);
          iVar16 = param_2;
          if (iVar10 < 0) {
            iVar11 = FUN_00022a68();
            if (2 < iVar11) {
              uVar12 = 3;
              iVar14 = DAT_00017f78 + 0x17e24;
              iVar11 = DAT_00017f7c + 0x17e2a;
              iVar15 = DAT_00017f80 + 0x17e88;
              uVar3 = 0x134;
LAB_00017e36:
              FUN_00022900(uVar12,iVar10,iVar11,uVar3,iVar15,iVar14,uVar2);
            }
          }
          else {
            iVar10 = FUN_00022a68();
            if (6 < iVar10) {
              uVar12 = 7;
              iVar14 = DAT_00017f84 + 0x17e50;
              iVar11 = DAT_00017f88 + 0x17e56;
              iVar15 = DAT_00017f8c + 0x17eb4;
              uVar3 = 0x136;
              iVar10 = 0;
              goto LAB_00017e36;
            }
          }
        }
        else {
          iVar10 = strcmp(__s1,(char *)(DAT_00017f90 + 0x17e6e));
          if (iVar10 == 0) {
            iVar10 = FUN_00023ee4(pcVar4,uVar2);
            iVar1 = param_2;
            if (iVar10 < 0) {
              iVar11 = FUN_00022a68();
              if (2 < iVar11) {
                uVar3 = 3;
                iVar14 = DAT_00017f94 + 0x17e94;
                iVar11 = DAT_00017f98 + 0x17e9a;
                iVar15 = DAT_00017f9c + 0x17ef8;
                uVar12 = 0x13d;
LAB_00017ea6:
                FUN_00022900(uVar3,iVar10,iVar11,uVar12,iVar15,iVar14,uVar2);
              }
            }
            else {
              iVar10 = FUN_00022a68();
              if (6 < iVar10) {
                uVar3 = 7;
                iVar14 = DAT_00017fa0 + 0x17ec0;
                iVar11 = DAT_00017fa4 + 0x17ec6;
                iVar15 = (int)&DAT_00017f24 + DAT_00017fa8;
                uVar12 = 0x13f;
                iVar10 = 0;
                goto LAB_00017ea6;
              }
            }
          }
          else {
            iVar10 = FUN_00022a68();
            if (2 < iVar10) {
              FUN_00022900(3,0,DAT_00017fac + 0x17ef0,0x142,iVar13,DAT_00017fb0 + 0x17ef4,__s1,uVar2
                          );
            }
          }
        }
      }
      if (iVar16 == 0) {
        FUN_000237f8(pcVar4,1,0);
      }
      if (iVar1 == 0) {
        FUN_00023ee4(pcVar4,0);
      }
    }
    utimensat(-100,pcVar4,(timespec *)0x0,0);
  }
  else {
    piVar6 = __errno_location();
    iVar16 = *piVar6;
    local_438 = -iVar16;
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      FUN_00022900(7,iVar16,DAT_00017f20 + 0x17bc6,0x10c,DAT_00017f24 + 0x17c22,
                   DAT_00017f1c + 0x17bc0,pcVar4);
    }
  }
  iVar1 = DAT_00017f28;
  if (-1 < local_438) {
    pcVar4 = (char *)FUN_00027d5c(param_1);
    pcVar5 = (char *)(iVar1 + 0x17be6);
    iVar1 = strcmp(pcVar4,pcVar5);
    if (iVar1 != 0) {
      pcVar5 = (char *)(DAT_00017f2c + 0x17bf2);
    }
    uVar18 = FUN_00027c94(param_1);
    uVar7 = gnu_dev_major(uVar18);
    uVar18 = FUN_00027c94(param_1);
    uVar8 = gnu_dev_minor(uVar18);
    snprintf((char *)asStack_428,0x400,(char *)(DAT_00017f30 + 0x17c12),pcVar5,uVar7,uVar8);
    uVar2 = FUN_00027d06(param_1);
    FUN_0001751c(param_1,uVar2,asStack_428);
    for (iVar1 = FUN_0002783c(param_1); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      uVar2 = FUN_0002a278(iVar1);
      FUN_00017800(param_1,uVar2,1);
    }
  }
  return;
}



/* ===== FUN_00017fb4 @ 00017fb4 size=118 ===== */

void FUN_00017fb4(undefined4 param_1)

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
  
  for (iVar2 = FUN_0002783c(); iVar1 = DAT_0001802c, iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
    uVar5 = FUN_0002a278(iVar2);
    FUN_00017800(param_1,uVar5,0);
  }
  __s1 = (char *)FUN_00027d5c(param_1);
  __s2 = (char *)(iVar1 + 0x17fd0);
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    __s2 = (char *)(DAT_00018030 + 0x17fdc);
  }
  uVar6 = FUN_00027c94(param_1);
  uVar3 = gnu_dev_major(uVar6);
  uVar6 = FUN_00027c94(param_1);
  uVar4 = gnu_dev_minor(uVar6);
  snprintf(acStack_410,0x400,(char *)(DAT_00018034 + 0x17ffe),__s2,uVar3,uVar4);
  unlink(acStack_410);
  return;
}



/* ===== FUN_00018038 @ 00018038 size=34 ===== */

char * FUN_00018038(char *param_1,char *param_2)

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



/* ===== FUN_0001805a @ 0001805a size=86 ===== */

undefined4 FUN_0001805a(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 <= *(int *)(param_1 + 0x18) + 1U) {
    uVar5 = uVar2;
    if (uVar2 < 8) {
      uVar5 = 8;
    }
    pvVar1 = realloc(*(void **)(param_1 + 0x14),(uVar2 + uVar5) * 0xc);
    if (pvVar1 == (void *)0x0) {
      return 0xffffffff;
    }
    *(void **)(param_1 + 0x14) = pvVar1;
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar5;
  }
  iVar4 = *(int *)(param_1 + 0x18) * 0xc;
  iVar3 = *(int *)(param_1 + 0x14) + iVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4) = *param_2;
  *(undefined4 *)(iVar3 + 4) = param_2[1];
  *(undefined4 *)(iVar3 + 8) = param_2[2];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 0;
}



/* ===== FUN_000180b0 @ 000180b0 size=248 ===== */

undefined4 FUN_000180b0(undefined4 param_1,byte *param_2)

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
  
  piVar7 = *(int **)(DAT_000181a8 + 0x180b8 + DAT_000181ac);
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
              iVar8 = FUN_00022a68();
              if (iVar8 < 7) {
                return 0xffffffff;
              }
              FUN_00022900(7,0,DAT_000181b4 + 0x18178,0x266,DAT_000181b8 + 0x1817e,
                           DAT_000181b0 + 0x18172,param_2);
              return 0xffffffff;
            }
            __s_00[sVar4] = 0;
            __s_00 = __s_00 + 1;
          }
          FUN_00027ed4(param_1,__s,__s_00);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000181bc @ 000181bc size=204 ===== */

undefined4 FUN_000181bc(int param_1,int param_2,char *param_3)

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
    param_3 = (char *)(DAT_00018290 + 0x181d8);
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
      goto LAB_00018224;
      pcVar4 = pcVar5 + 1;
    }
  case 1:
    iVar1 = strcmp(pcVar4,param_3);
    break;
  case 4:
    FUN_0002448c(acStack_418,0x400,pcVar4);
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
    goto LAB_000181f6;
  default:
    goto switchD_000181dc_default;
  }
  bVar6 = iVar1 == 0;
LAB_000181f6:
  if (bVar6) {
LAB_00018224:
    iVar1 = *(byte *)(param_2 + 1) - 1;
  }
  else {
switchD_000181dc_default:
    iVar1 = *(byte *)(param_2 + 1) - 2;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00018294 @ 00018294 size=242 ===== */

undefined4 FUN_00018294(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  char *__s;
  int *piVar11;
  undefined1 auStack_428 [511];
  byte abStack_229 [517];
  
  iVar10 = DAT_00018388 + 0x182b0;
  puVar7 = (undefined1 *)(**(int **)(param_1 + 0x20) + *(int *)(param_4 + 8));
  bVar1 = *(byte *)(param_4 + 3) >> 4;
  if (bVar1 == 2) {
    puVar8 = auStack_428;
    FUN_00015aa2(param_3,puVar7,puVar8,0x200,0);
  }
  else {
    if (bVar1 == 3) {
      pbVar2 = abStack_229 + 1;
      iVar6 = FUN_0002aec4(*param_3,puVar7,pbVar2,0x200,1);
      if (iVar6 != 0) {
        return 0xffffffff;
      }
      goto LAB_000182f0;
    }
    puVar8 = puVar7;
    if (bVar1 != 1) {
      return 0xffffffff;
    }
  }
  pbVar2 = (byte *)FUN_000273b4(param_2,puVar8);
  if (pbVar2 == (byte *)0x0) {
    return 0xffffffff;
  }
LAB_000182f0:
  sVar3 = strlen((char *)pbVar2);
  pbVar9 = pbVar2;
  if (sVar3 != 0) {
    piVar11 = *(int **)(iVar10 + DAT_0001838c);
    iVar10 = *piVar11;
    if ((int)((uint)*(ushort *)(iVar10 + (uint)pbVar2[sVar3 - 1] * 2) << 0x1a) < 0) {
      __s = (char *)(**(int **)(param_1 + 0x20) + *(int *)(param_4 + 4));
      sVar4 = strlen(__s);
      if ((sVar4 != 0) &&
         (-1 < (int)((uint)*(ushort *)(iVar10 + (uint)(byte)__s[sVar4 - 1] * 2) << 0x1a))) {
        pbVar9 = abStack_229 + 1;
        if (pbVar2 != pbVar9) {
          FUN_0002448c(pbVar9,0x200,pbVar2);
        }
        iVar10 = *piVar11;
        pbVar2 = pbVar9 + (sVar3 - 1);
        do {
          sVar3 = sVar3 - 1;
          if (-1 < (int)((uint)*(ushort *)(iVar10 + (uint)*pbVar2 * 2) << 0x1a)) break;
          *pbVar2 = 0;
          pbVar2 = pbVar2 + -1;
        } while (sVar3 != 0);
      }
    }
  }
  uVar5 = FUN_000181bc(param_1,param_4,pbVar9);
  return uVar5;
}



/* ===== FUN_00018390 @ 00018390 size=352 ===== */

int FUN_00018390(int *param_1,byte *param_2)

{
  byte bVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  int *__ptr;
  __compar_fn_t __compar;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  byte local_30 [20];
  
  __n = strlen((char *)param_2);
  piVar8 = (int *)param_1[2];
  if (piVar8 == (int *)0x0) {
    iVar10 = -0x16;
  }
  else if (__n == 0) {
    iVar10 = 0;
  }
  else {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + __n;
    __compar = (__compar_fn_t)(DAT_000241d4 + 0x240c4);
    pbVar9 = param_2 + __n;
    do {
      iVar10 = (*piVar8 + piVar8[1]) - __n;
      if ((param_2 == pbVar9) ||
         ((__n <= (uint)piVar8[1] &&
          (iVar2 = memcmp((void *)(*param_1 + iVar10),param_2,__n), iVar2 == 0)))) {
        param_1[6] = __n + param_1[6];
        param_1[7] = param_1[7] + 1;
        return iVar10;
      }
      pbVar9 = pbVar9 + -1;
      bVar1 = *pbVar9;
      local_30[0] = bVar1;
      pvVar3 = bsearch(local_30,(void *)piVar8[2],(uint)*(byte *)(piVar8 + 3),8,__compar);
    } while ((pvVar3 != (void *)0x0) &&
            (piVar8 = *(int **)((int)pvVar3 + 4), (uint)((int)(param_2 + __n) - (int)pbVar9) <= __n)
            );
    pvVar3 = realloc((void *)*param_1,__n + 1 + param_1[1]);
    if (pvVar3 != (void *)0x0) {
      iVar2 = param_1[1];
      *param_1 = (int)pvVar3;
      memcpy((void *)((int)pvVar3 + iVar2),param_2,__n);
      iVar10 = param_1[1];
      param_1[1] = iVar10 + __n + 1;
      *(undefined1 *)(*param_1 + iVar10 + __n) = 0;
      __ptr = calloc(1,0x10);
      if (__ptr != (int *)0x0) {
        *__ptr = iVar2;
        __ptr[1] = __n;
        pvVar3 = realloc((void *)piVar8[2],(*(byte *)(piVar8 + 3) + 1) * 8);
        if (pvVar3 != (void *)0x0) {
          iVar10 = 0;
          param_1[3] = param_1[3] + 1;
          piVar8[2] = (int)pvVar3;
          uVar5 = (uint)*(byte *)(piVar8 + 3);
          while (uVar6 = uVar5, iVar10 < (int)uVar6) {
            uVar5 = (int)(uVar6 + iVar10) >> 1;
            if ((int)((uint)*(byte *)((int)pvVar3 + uVar5 * 8) - (uint)bVar1) < 1) {
              iVar10 = uVar5 + 1;
              uVar5 = uVar6;
            }
          }
          iVar4 = (iVar10 + 1) * 8;
          iVar7 = iVar4 + -8;
          memmove((void *)((int)pvVar3 + iVar4),(void *)((int)pvVar3 + iVar7),
                  ((uint)*(byte *)(piVar8 + 3) - iVar10) * 8);
          iVar10 = piVar8[2];
          *(byte *)(iVar10 + iVar7) = bVar1;
          *(int **)(iVar10 + iVar7 + 4) = __ptr;
          *(char *)(piVar8 + 3) = (char)piVar8[3] + '\x01';
          return iVar2;
        }
        free(__ptr);
      }
    }
    iVar10 = -0xc;
  }
  return iVar10;
}



/* ===== FUN_000183aa @ 000183aa size=566 ===== */

undefined4 FUN_000183aa(int *param_1,uint param_2,undefined4 param_3,char *param_4,int *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar11 = param_1[0xc4];
  (param_1 + iVar11 * 3 + 4)[0] = 0;
  (param_1 + iVar11 * 3 + 4)[1] = 0;
  (param_1 + iVar11 * 3 + 5)[0] = 0;
  (param_1 + iVar11 * 3 + 5)[1] = 0;
  switch(param_2) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
  case 0x34:
    iVar3 = FUN_00018390(*(undefined4 *)(*param_1 + 0x20),param_4,0xc,*param_1,param_1,param_2,
                         param_3,param_4);
    param_1[iVar11 * 3 + 5] = iVar3;
    break;
  case 7:
  case 0xc:
  case 0xd:
  case 0x12:
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x31:
    iVar3 = FUN_00018390(*(undefined4 *)(*param_1 + 0x20),param_4,0xc,*param_1,param_1,param_2,
                         param_3,param_4);
    iVar9 = *param_1;
    param_1[iVar11 * 3 + 5] = iVar3;
    iVar3 = FUN_00018390(*(undefined4 *)(iVar9 + 0x20),param_5);
    param_1[iVar11 * 3 + 6] = iVar3;
    if (param_4 != (char *)0x0) goto LAB_00018426;
    goto LAB_00018474;
  case 0xe:
  case 0x14:
  case 0x1e:
    iVar11 = FUN_00022a68();
    if (2 < iVar11) {
      FUN_00022900(3,0,DAT_00018628 + 0x1858e,0x3bc,DAT_0001862c + 0x185ae,DAT_00018624 + 0x18588,
                   param_2);
    }
    goto LAB_00018572;
  case 0x15:
    iVar3 = FUN_00018390(*(undefined4 *)(*param_1 + 0x20),param_4,0xc,*param_1,param_1,param_2,
                         param_3,param_4);
    piVar10 = param_1 + iVar11 * 3;
    piVar10[5] = iVar3;
    if (param_5 != (int *)0x0) goto LAB_00018444;
    goto LAB_000184e8;
  case 0x19:
    iVar3 = FUN_00018390(*(undefined4 *)(*param_1 + 0x20),param_4,0xc,*param_1,param_1,param_2,
                         param_3,param_4);
    piVar10 = param_1 + iVar11 * 3;
    piVar10[5] = iVar3;
LAB_00018444:
    piVar10[6] = *param_5;
LAB_000184e8:
    if (param_4 != (char *)0x0) {
      param_5 = (int *)0x0;
      goto LAB_000184f0;
    }
    goto LAB_0001848e;
  case 0x22:
  case 0x23:
    param_1[iVar11 * 3 + 6] = *param_5;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
    param_1[iVar11 * 3 + 6] = *param_5;
    if ((param_4 != (char *)0x0) && (0x1e < param_2)) {
      param_5 = (int *)0x0;
      goto LAB_00018550;
    }
    goto LAB_0001848e;
  case 0x32:
  case 0x33:
    param_1[iVar11 * 3 + 6] = *param_5;
    iVar3 = FUN_00018390(*(undefined4 *)(*param_1 + 0x20),param_4,0xc,*param_1,param_1,param_2,
                         param_3,param_4);
    param_1[iVar11 * 3 + 5] = iVar3;
  }
  if (param_4 != (char *)0x0) {
    param_5 = (int *)0x0;
LAB_00018426:
    if (param_2 < 0x1e) {
LAB_000184f0:
      pcVar4 = strchr(param_4,0x7c);
      pcVar1 = strpbrk(param_4,(char *)(DAT_00018620 + 0x184fe));
      if (pcVar4 == (char *)0x0) {
        if (pcVar1 == (char *)0x0) {
          uVar8 = 1;
        }
        else {
          iVar3 = strcmp(param_4,(char *)(DAT_00018630 + 0x185a8));
          if (iVar3 == 0) {
            uVar8 = 5;
          }
          else {
            uVar8 = 2;
          }
        }
      }
      else if (pcVar1 == (char *)0x0) {
        uVar8 = 3;
      }
      else {
        uVar8 = 4;
      }
      *(undefined1 *)((int)param_1 + iVar11 * 0xc + 0x12) = uVar8;
    }
    else if (param_2 != 0x1e) {
LAB_00018550:
      if (*param_4 == '[') {
        bVar6 = 3;
        piVar10 = param_1 + iVar11 * 3;
        bVar7 = *(byte *)((int)piVar10 + 0x13);
      }
      else {
        pcVar4 = strchr(param_4,0x25);
        if ((pcVar4 == (char *)0x0) && (pcVar4 = strchr(param_4,0x24), pcVar4 == (char *)0x0)) {
          bVar6 = 1;
          piVar10 = param_1 + iVar11 * 3;
          bVar7 = *(byte *)((int)piVar10 + 0x13);
        }
        else {
          bVar6 = 2;
          piVar10 = param_1 + iVar11 * 3;
          bVar7 = *(byte *)((int)piVar10 + 0x13);
        }
      }
      *(byte *)((int)piVar10 + 0x13) = bVar7 & 0xf0 | bVar6;
    }
LAB_00018474:
    if (param_5 != (int *)0x0) {
      if ((char)*param_5 == '[') {
        cVar5 = '\x03';
        piVar10 = param_1 + iVar11 * 3;
        bVar7 = *(byte *)((int)piVar10 + 0x13);
      }
      else {
        pcVar4 = strchr((char *)param_5,0x25);
        if ((pcVar4 == (char *)0x0) &&
           (pcVar4 = strchr((char *)param_5,0x24), pcVar4 == (char *)0x0)) {
          cVar5 = '\x01';
          piVar10 = param_1 + iVar11 * 3;
          bVar7 = *(byte *)((int)piVar10 + 0x13);
        }
        else {
          cVar5 = '\x02';
          piVar10 = param_1 + iVar11 * 3;
          bVar7 = *(byte *)((int)piVar10 + 0x13);
        }
      }
      *(byte *)((int)piVar10 + 0x13) = bVar7 & 0xf | cVar5 << 4;
    }
  }
LAB_0001848e:
  *(char *)(param_1 + iVar11 * 3 + 4) = (char)param_2;
  *(char *)((int)param_1 + iVar11 * 0xc + 0x11) = (char)param_3;
  iVar11 = param_1[0xc4];
  param_1[0xc4] = iVar11 + 1U;
  if (iVar11 + 1U < 0x40) {
    uVar2 = 0;
  }
  else {
    iVar11 = FUN_00022a68();
    if (2 < iVar11) {
      FUN_00022900(3,0,DAT_00018618 + 0x184c4,0x3ef,DAT_0001861c + 0x184e2,DAT_00018614 + 0x184be);
    }
LAB_00018572:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00018634 @ 00018634 size=78 ===== */

char * FUN_00018634(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *__s;
  char *pcVar1;
  int iVar2;
  
  __s = strchr(param_1,0x7b);
  if (__s != (char *)0x0) {
    __s = __s + 1;
    pcVar1 = strchr(__s,0x7d);
    if (pcVar1 == (char *)0x0) {
      iVar2 = FUN_00022a68();
      __s = (char *)0x0;
      if (2 < iVar2) {
        FUN_00022900(3,0,DAT_00018688 + 0x18668,0x35b,DAT_0001868c + 0x18693,DAT_00018684 + 0x18662,
                     param_3);
      }
    }
    else {
      *pcVar1 = '\0';
    }
  }
  return __s;
}



/* ===== FUN_00018690 @ 00018690 size=5630 ===== */

int FUN_00018690(int param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  byte *pbVar8;
  size_t sVar9;
  void *pvVar10;
  char *pcVar11;
  byte *__s1;
  undefined4 uVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  undefined4 *puVar31;
  char **ppcVar32;
  byte **ppbVar33;
  int local_4384;
  char *local_434c;
  char *pcStack_4348;
  byte *local_4344;
  char *local_4340;
  int iStack_433c;
  undefined1 local_4338;
  byte local_4337;
  short local_4336;
  undefined4 local_4334;
  undefined2 local_4330;
  undefined2 local_432e;
  byte local_432c [768];
  undefined4 local_402c;
  byte local_4028 [16388];
  
  iVar21 = DAT_00018b88 + 0x186a6;
  __stream = fopen64(param_2,(char *)(DAT_00018b8c + 0x186ae));
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    if (*piVar3 != 2) {
      return -*piVar3;
    }
  }
  else {
    fileno(__stream);
    iVar4 = FUN_000258d4();
    if (iVar4 == 0) {
      iVar4 = FUN_00022a68();
      if (6 < iVar4) {
        FUN_00022900(7,0,DAT_00018b9c + 0x1872a,0x653,DAT_00018ba4 + 0x18773,DAT_00018ba0 + 0x18730,
                     param_2);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar5 = FUN_00018390(*(undefined4 *)(param_1 + 0x20),param_2);
      local_4384 = 0;
LAB_00018750:
      while( true ) {
        pcVar6 = fgets((char *)local_4028,0x4000,__stream);
        if (pcVar6 == (char *)0x0) break;
        local_4384 = local_4384 + 1;
        piVar3 = *(int **)(iVar21 + DAT_00018bb4);
        pbVar29 = local_4028;
        do {
          pbVar18 = pbVar29;
          pbVar29 = pbVar18 + 1;
        } while ((int)((uint)*(ushort *)(*piVar3 + (uint)*pbVar18 * 2) << 0x1a) < 0);
        if ((*pbVar18 != 0x23) && (sVar7 = strlen((char *)local_4028), 2 < sVar7)) {
          while (local_4028[sVar7 - 2] == 0x5c) {
            pbVar29 = local_4028 + (sVar7 - 2);
            pcVar6 = fgets((char *)pbVar29,0x4002 - sVar7,__stream);
            if ((pcVar6 == (char *)0x0) || (sVar9 = strlen((char *)pbVar29), sVar9 < 2)) break;
            local_4384 = local_4384 + 1;
            sVar7 = strlen((char *)local_4028);
          }
          if (sVar7 != 0x3fff) {
            memset(&iStack_433c,0,0x314);
            local_4338 = 1;
            if (uVar5 < 0xffff) {
              local_4330 = (undefined2)uVar5;
            }
            local_432e = (undefined2)local_4384;
            pcVar6 = (char *)(DAT_00018bb8 + 0x18860);
            pbVar29 = pbVar18;
            iStack_433c = param_1;
LAB_00018860:
            iVar16 = *piVar3;
            pbVar19 = pbVar29;
            if (*pbVar29 == 0) goto LAB_00018a2a;
            do {
              do {
                __s1 = pbVar19;
                uVar22 = (uint)*__s1;
                pbVar19 = __s1 + 1;
              } while ((int)((uint)*(ushort *)(iVar16 + uVar22 * 2) << 0x1a) < 0);
            } while (uVar22 == 0x2c);
            if (uVar22 == 0) goto LAB_00018a2a;
            do {
              pbVar20 = pbVar19;
              pbVar19 = pbVar20 + 1;
              uVar22 = (uint)*pbVar20;
              if (uVar22 == 0) goto LAB_00018a2a;
              pbVar8 = pbVar20;
            } while (((-1 < (int)((uint)*(ushort *)(iVar16 + uVar22 * 2) << 0x1a)) &&
                     (uVar22 != 0x3d)) &&
                    ((uVar22 = uVar22 - 0x21 & 0xff, 0x19 < uVar22 ||
                     ((-1 < (int)((DAT_00018b84 >> uVar22) << 0x1f) || (*pbVar19 != 0x3d))))));
            do {
              pbVar19 = pbVar8;
              uVar22 = (uint)*pbVar19;
              pbVar8 = pbVar19 + 1;
            } while ((int)((uint)*(ushort *)(iVar16 + uVar22 * 2) << 0x1a) < 0);
            if (uVar22 == 0) goto LAB_00018a2a;
            if (uVar22 == 0x3d) {
              if (pbVar19[1] == 0x3d) {
                pbVar19 = pbVar19 + 2;
                uVar22 = 1;
              }
              else {
                pbVar19 = pbVar19 + 1;
                uVar22 = 6;
              }
            }
            else if (uVar22 == 0x21) {
              if (pbVar19[1] != 0x3d) goto LAB_00018a2a;
              pbVar19 = pbVar19 + 2;
              uVar22 = 2;
            }
            else if (uVar22 == 0x2b) {
              if (pbVar19[1] != 0x3d) goto LAB_00018a2a;
              pbVar19 = pbVar19 + 2;
              uVar22 = 4;
            }
            else if (uVar22 == 0x2d) {
              if (pbVar19[1] != 0x3d) goto LAB_00018a2a;
              pbVar19 = pbVar19 + 2;
              uVar22 = 5;
            }
            else {
              if ((uVar22 != 0x3a) || (pbVar19[1] != 0x3d)) goto LAB_00018a2a;
              pbVar19 = pbVar19 + 2;
              uVar22 = 7;
            }
            *pbVar20 = 0;
            do {
              pbVar20 = pbVar19;
              pbVar19 = pbVar20 + 1;
              uVar2 = *(ushort *)(iVar16 + (uint)*pbVar20 * 2);
            } while ((uVar2 & 0x20) != 0);
            if ((*pbVar20 != 0x22) ||
               (pbVar8 = (byte *)strchr((char *)pbVar19,0x22), pbVar8 == (byte *)0x0))
            goto LAB_00018a2a;
            *pbVar8 = (byte)uVar2 & 0x20;
            iVar16 = strcmp((char *)__s1,pcVar6);
            if (iVar16 == 0) {
              if (uVar22 < 4) goto LAB_00018a1c;
              iVar16 = FUN_00022a68();
              if (iVar16 < 3) goto LAB_000190e2;
              iVar28 = DAT_00018bd8 + 0x189fa;
              iVar16 = DAT_00018bdc + 0x18a00;
              iVar17 = DAT_00018be0 + 0x18a48;
              uVar23 = 0x443;
            }
            else {
              iVar16 = strcmp((char *)__s1,(char *)(DAT_00018bbc + 0x1891c));
              if (iVar16 == 0) {
                if (uVar22 < 4) goto LAB_00018a1c;
                iVar16 = FUN_00022a68();
                if (2 < iVar16) {
                  iVar28 = DAT_00018bc0 + 0x1893c;
                  iVar16 = DAT_00018bc4 + 0x18942;
                  iVar17 = DAT_00018bc8 + 0x1898a;
                  uVar23 = 0x44c;
                  goto LAB_00018a08;
                }
                goto LAB_000190e2;
              }
              iVar16 = strcmp((char *)__s1,(char *)(DAT_00018c00 + 0x18b1a));
              if (iVar16 == 0) {
                if (uVar22 < 4) goto LAB_00018a1c;
                iVar16 = FUN_00022a68();
                if (2 < iVar16) {
                  iVar28 = DAT_00018c04 + 0x18b34;
                  iVar16 = DAT_00018c08 + 0x18b3a;
                  iVar17 = DAT_00018c0c + 0x18b82;
                  uVar23 = 0x455;
                  goto LAB_00018a08;
                }
                goto LAB_000190e2;
              }
              iVar16 = strcmp((char *)__s1,(char *)(DAT_00018c10 + 0x18b56));
              if (iVar16 == 0) {
                if (3 < uVar22) {
                  iVar16 = FUN_00022a68();
                  if (2 < iVar16) {
                    iVar28 = DAT_00018c14 + 0x18b74;
                    iVar16 = DAT_00018c18 + 0x18b7a;
                    iVar17 = DAT_00018c1c + 0x18bc2;
                    uVar23 = 0x45e;
                    goto LAB_00018a08;
                  }
                  goto LAB_000190e2;
                }
                iVar16 = strcmp((char *)pbVar19,(char *)(DAT_000197ec + 0x18c2a));
                iVar28 = strcmp((char *)pbVar19,(char *)(DAT_000197f0 + 0x18c34));
                if (iVar16 == 0) {
                  if (iVar28 != 0) {
                    iVar16 = strcmp((char *)pbVar19,(char *)(DAT_000197f8 + 0x18c60));
                    goto joined_r0x00018c62;
                  }
LAB_00018c64:
                  iVar16 = FUN_00022a68();
                  if (2 < iVar16) {
                    FUN_00022900(3,0,DAT_000197fc + 0x18c7c,0x467,DAT_00019804 + 0x18cd6,
                                 DAT_00019800 + 0x18c88,pbVar19,param_2,local_4384);
                  }
                }
                else {
                  if (iVar28 == 0) goto LAB_00018c64;
                  iVar16 = strcmp((char *)pbVar19,(char *)(DAT_000197f4 + 0x18c48));
joined_r0x00018c62:
                  if (iVar16 == 0) goto LAB_00018c64;
                }
LAB_00018a1c:
                FUN_000183aa(&iStack_433c);
LAB_00018a20:
                pbVar29 = pbVar8 + 1;
                if (pbVar29 == (byte *)0x0) goto LAB_00018a2a;
                goto LAB_00018860;
              }
              iVar16 = strcmp((char *)__s1,(char *)(DAT_0001980c + 0x18cb4));
              if (iVar16 == 0) {
                if (uVar22 < 4) goto LAB_00018a1c;
                iVar16 = FUN_00022a68();
                if (iVar16 < 3) goto LAB_000190e2;
                iVar28 = DAT_00019810 + 0x18cd2;
                iVar16 = DAT_00019814 + 0x18cda;
                iVar17 = DAT_00019818 + 0x18d22;
                uVar23 = 0x470;
              }
              else {
                iVar16 = FUN_00018038(__s1,DAT_0001981c + 0x18cf8);
                if (iVar16 == 0) {
                  iVar16 = FUN_00018038(__s1,DAT_00019838 + 0x18d72);
                  if (iVar16 == 0) {
                    iVar16 = FUN_00018038(__s1,DAT_00019854 + 0x18dec);
                    if (iVar16 == 0) {
                      iVar16 = strcmp((char *)__s1,(char *)(DAT_00019870 + 0x18e62));
                      if (iVar16 == 0) {
                        if (uVar22 < 4) goto LAB_00018a1c;
                        iVar16 = FUN_00022a68();
                        if (2 < iVar16) {
                          iVar28 = DAT_00019874 + 0x18e80;
                          iVar16 = DAT_00019878 + 0x18e88;
                          iVar17 = DAT_0001987c + 0x18ed0;
                          uVar23 = 0x4aa;
                          goto LAB_00018a08;
                        }
                        goto LAB_000190e2;
                      }
                      iVar16 = strcmp((char *)__s1,(char *)(DAT_00019880 + 0x18ea6));
                      if (iVar16 == 0) {
                        if (uVar22 < 4) goto LAB_00018a1c;
                        iVar16 = FUN_00022a68();
                        if (2 < iVar16) {
                          iVar28 = DAT_00019884 + 0x18ec4;
                          iVar16 = DAT_00019888 + 0x18ecc;
                          iVar17 = DAT_0001988c + 0x18f14;
                          uVar23 = 0x4b3;
                          goto LAB_00018a08;
                        }
                        goto LAB_000190e2;
                      }
                      iVar16 = strcmp((char *)__s1,(char *)(DAT_00019890 + 0x18eea));
                      if (iVar16 == 0) {
                        if (uVar22 < 4) goto LAB_00018a1c;
                        iVar16 = FUN_00022a68();
                        if (2 < iVar16) {
                          iVar28 = DAT_00019894 + 0x18f08;
                          iVar16 = DAT_00019898 + 0x18f10;
                          iVar17 = DAT_0001989c + 0x18f58;
                          uVar23 = 0x4bc;
                          goto LAB_00018a08;
                        }
                        goto LAB_000190e2;
                      }
                      iVar16 = FUN_00018038(__s1,DAT_000198a0 + 0x18f2e);
                      if (iVar16 == 0) {
                        iVar16 = strcmp((char *)__s1,(char *)(DAT_000198dc + 0x19026));
                        if (iVar16 == 0) {
                          if (uVar22 < 4) goto LAB_00018a1c;
                          iVar16 = FUN_00022a68();
                          if (2 < iVar16) {
                            iVar28 = DAT_000198e0 + 0x19042;
                            iVar16 = DAT_000198e4 + 0x1904a;
                            iVar17 = DAT_000198e8 + 0x19092;
                            uVar23 = 0x4d9;
                            goto LAB_00018a08;
                          }
                          goto LAB_000190e2;
                        }
                        iVar16 = FUN_00018038(__s1,DAT_000198ec + 0x19068);
                        if (iVar16 == 0) {
                          iVar16 = strcmp((char *)__s1,(char *)(DAT_00019924 + 0x1917e));
                          if (iVar16 == 0) goto LAB_00018a1c;
                          iVar16 = strcmp((char *)__s1,(char *)(DAT_00019928 + 0x1919e));
                          if (iVar16 == 0) {
                            if (uVar22 != 5) goto LAB_00018a1c;
                            iVar16 = FUN_00022a68();
                            if (2 < iVar16) {
                              iVar28 = DAT_0001992c + 0x191ba;
                              iVar16 = DAT_00019930 + 0x191c2;
                              iVar17 = DAT_00019934 + 0x1920a;
                              uVar23 = 0x513;
                              goto LAB_00018a08;
                            }
                            goto LAB_000190e2;
                          }
                          iVar16 = strcmp((char *)__s1,(char *)(DAT_00019938 + 0x191e2));
                          if (iVar16 == 0) {
                            if (uVar22 < 4) goto LAB_00018a1c;
                            iVar16 = FUN_00022a68();
                            if (2 < iVar16) {
                              iVar28 = DAT_0001993c + 0x19200;
                              iVar16 = DAT_00019940 + 0x19208;
                              iVar17 = DAT_00019944 + 0x19250;
                              uVar23 = 0x51c;
                              goto LAB_00018a08;
                            }
                            goto LAB_000190e2;
                          }
                          pcVar11 = (char *)FUN_00018038(__s1,DAT_00019948 + 0x1922a);
                          if (pcVar11 != (char *)0x0) {
                            pcVar11 = (char *)FUN_00018634(__s1 + 6);
                            if (pcVar11 == (char *)0x0) {
                              iVar16 = FUN_00022a68();
                              if (2 < iVar16) {
                                iVar16 = DAT_0001994c + 0x19254;
                                iVar28 = DAT_00019950 + 0x1925e;
                                iVar17 = DAT_00019954 + 0x192ac;
                                uVar23 = 0x526;
LAB_0001926c:
                                uVar12 = 3;
LAB_00019270:
                                FUN_00022900(uVar12,0,iVar16,uVar23,iVar17,iVar28,param_2,local_4384
                                            );
                              }
                              goto LAB_00018a20;
                            }
                            if (uVar22 != 5) {
                              iVar16 = strcmp(pcVar11,(char *)(DAT_00019964 + 0x192ae));
                              if (iVar16 == 0) {
                                if (((pbVar20[1] != 0x2f) &&
                                    (local_4340 = (char *)FUN_0001c56c(pbVar19),
                                    local_4340 < (char *)0x9)) &&
                                   (iVar16 = FUN_00022a68(), 6 < iVar16)) {
                                  FUN_00022900(7,0,DAT_00019968 + 0x192ec,0x535,
                                               DAT_00019970 + 0x19346,DAT_0001996c + 0x192f8,pbVar19
                                               ,param_2,local_4384);
                                }
                                goto LAB_00018a1c;
                              }
                              iVar16 = strcmp(pcVar11,(char *)(DAT_00019974 + 0x19330));
                              if (iVar16 == 0) {
                                local_4340 = (char *)FUN_0001c56c(pbVar19);
                                if (local_4340 < (char *)0x9) goto LAB_00018a1c;
                                iVar16 = FUN_00022a68();
                                if (2 < iVar16) {
                                  iVar16 = DAT_00019978 + 0x19366;
                                  iVar28 = DAT_0001997c + 0x19372;
                                  iVar17 = DAT_00019980 + 0x193c0;
                                  uVar23 = 0x541;
LAB_00019380:
                                  FUN_00022900(3,0,iVar16,uVar23,iVar17,iVar28,pbVar19,param_2,
                                               local_4384);
                                }
                              }
                              else {
                                iVar16 = strcmp(pcVar11,(char *)(DAT_00019984 + 0x19394));
                                if (((iVar16 == 0) ||
                                    (iVar16 = strcmp(pcVar11,(char *)(DAT_00019988 + 0x193ac)),
                                    iVar16 == 0)) ||
                                   ((iVar16 = strcmp(pcVar11,(char *)(DAT_0001998c + 0x193c4)),
                                    iVar16 == 0 ||
                                    (iVar16 = strcmp(pcVar11,(char *)(DAT_00019990 + 0x193dc)),
                                    iVar16 == 0)))) goto LAB_00018a1c;
                                iVar16 = FUN_00022a68();
                                if (2 < iVar16) {
                                  iVar16 = DAT_00019994 + 0x19400;
                                  iVar28 = DAT_00019998 + 0x1940a;
                                  iVar17 = DAT_0001999c + 0x19458;
                                  uVar23 = 0x54b;
                                  goto LAB_0001926c;
                                }
                              }
                              goto LAB_00018a20;
                            }
                            iVar16 = FUN_00022a68();
                            if (2 < iVar16) {
                              iVar28 = DAT_00019958 + 0x19292;
                              iVar16 = DAT_0001995c + 0x1929a;
                              iVar17 = DAT_00019960 + 0x192e2;
                              uVar23 = 0x52a;
                              goto LAB_00018a08;
                            }
                            goto LAB_000190e2;
                          }
                          iVar16 = FUN_00018038(__s1,DAT_000199a0 + 0x19424);
                          if (iVar16 == 0) {
                            iVar16 = FUN_00018038(__s1,DAT_000199b0 + 0x1948e);
                            if (iVar16 == 0) {
                              iVar16 = strcmp((char *)__s1,(char *)(DAT_000199e0 + 0x19582));
                              if ((iVar16 == 0) ||
                                 (iVar16 = strcmp((char *)__s1,(char *)(DAT_000199e4 + 0x19590)),
                                 iVar16 == 0)) {
                                if (uVar22 != 5) goto LAB_00018a1c;
                                iVar16 = FUN_00022a68();
                                if (iVar16 < 3) goto LAB_000190e2;
                                iVar28 = DAT_000199e8 + 0x195ae;
                                iVar16 = DAT_000199ec + 0x195b6;
                                iVar17 = DAT_000199f0 + 0x195fe;
                                uVar23 = 0x57d;
                              }
                              else {
                                iVar16 = strcmp((char *)__s1,(char *)(DAT_000199f4 + 0x195d6));
                                if (iVar16 == 0) {
                                  if (uVar22 != 5) {
                                    local_4334 = FUN_00018390(*(undefined4 *)(param_1 + 0x20),
                                                              pbVar19);
                                    goto LAB_00018a20;
                                  }
                                  iVar16 = FUN_00022a68();
                                  if (iVar16 < 3) goto LAB_000190e2;
                                  iVar28 = DAT_000199f8 + 0x195f4;
                                  iVar16 = DAT_000199fc + 0x195fc;
                                  iVar17 = DAT_00019a00 + 0x19644;
                                  uVar23 = 0x586;
                                }
                                else {
                                  iVar16 = strcmp((char *)__s1,(char *)(DAT_00019a04 + 0x1961e));
                                  if (iVar16 == 0) {
                                    if (uVar22 != 5) goto LAB_00018a1c;
                                    iVar16 = FUN_00022a68();
                                    if (iVar16 < 3) goto LAB_000190e2;
                                    iVar28 = DAT_00019a08 + 0x19638;
                                    iVar16 = DAT_00019a0c + 0x1963e;
                                    iVar17 = DAT_00019a10 + 0x19686;
                                    uVar23 = 0x58f;
                                  }
                                  else {
                                    iVar16 = FUN_00018038(__s1,DAT_00019a14 + 0x1965c);
                                    if (iVar16 == 0) {
                                      iVar16 = strcmp((char *)__s1,(char *)(DAT_00019a40 + 0x1972c))
                                      ;
                                      if (iVar16 == 0) {
                                        if (uVar22 != 5) goto LAB_0001969a;
                                        iVar16 = FUN_00022a68();
                                        if (2 < iVar16) {
                                          iVar28 = DAT_00019a44 + 0x19746;
                                          iVar16 = DAT_00019a48 + 0x1974c;
                                          iVar17 = DAT_00019a4c + 0x19794;
                                          uVar23 = 0x5b0;
                                          goto LAB_00018a08;
                                        }
                                        goto LAB_000190e2;
                                      }
                                      iVar16 = strcmp((char *)__s1,(char *)(DAT_00019a50 + 0x19776))
                                      ;
                                      if (iVar16 == 0) {
                                        if (uVar22 == 5) {
                                          iVar16 = FUN_00022a68();
                                          if (2 < iVar16) {
                                            iVar28 = DAT_00019a54 + 0x19794;
                                            iVar16 = DAT_00019a58 + 0x1979a;
                                            iVar17 = DAT_00019a5c + 0x197e2;
                                            uVar23 = 0x5c0;
                                            goto LAB_00018a08;
                                          }
                                          goto LAB_000190e2;
                                        }
                                        local_434c = (char *)strtoul((char *)pbVar19,&pcStack_4348,
                                                                     10);
                                        ppcVar32 = &local_434c;
                                        pcVar11 = local_434c;
                                        if (*pcStack_4348 == '\0') {
LAB_000197ce:
                                          local_434c = pcVar11;
                                          pbVar19 = (byte *)0x0;
                                          uVar23 = 0x27;
                                          goto LAB_000197d2;
                                        }
                                        if (0 < *(int *)(param_1 + 0x10)) {
                                          pcVar11 = strchr((char *)(DAT_00019fa0 + 0x19a74),
                                                           (uint)pbVar20[1]);
                                          if (pcVar11 == (char *)0x0) {
                                            iVar28 = *(int *)(param_1 + 0x28);
                                            local_4340 = (char *)0x0;
                                            local_4344 = pbVar19;
                                            for (iVar16 = 0; iVar16 != iVar28; iVar16 = iVar16 + 1)
                                            {
                                              iVar13 = *(int *)(param_1 + 0x24);
                                              iVar17 = strcmp((char *)(*(int *)(iVar13 + iVar16 * 8)
                                                                      + **(int **)(param_1 + 0x20)),
                                                              (char *)pbVar19);
                                              if (iVar17 == 0) {
                                                pcVar11 = *(char **)(iVar13 + iVar16 * 8 + 4);
                                                goto LAB_000197ce;
                                              }
                                            }
                                            iVar16 = FUN_00025b58(&local_4344,&local_4340,0,0,0);
                                            if (iVar16 < 0) {
                                              iVar28 = FUN_00022a68();
                                              if (iVar16 + 3U < 2) {
                                                if (2 < iVar28) {
                                                  iVar16 = 0;
                                                  iVar28 = DAT_00019fa4 + 0x19ace;
                                                  iVar17 = DAT_00019fa8 + 0x19ad4;
                                                  iVar13 = DAT_00019fac + 0x19b2b;
                                                  uVar23 = 0x1ea;
LAB_00019ae2:
                                                  FUN_00022900(3,iVar16,iVar28,uVar23,iVar13,iVar17,
                                                               local_4344);
                                                }
                                              }
                                              else if (2 < iVar28) {
                                                iVar28 = DAT_00019fb0 + 0x19b4e;
                                                iVar17 = DAT_00019fb4 + 0x19b54;
                                                iVar13 = DAT_00019fb8 + 0x19bab;
                                                uVar23 = 0x1ec;
                                                goto LAB_00019ae2;
                                              }
                                            }
                                            uVar30 = *(uint *)(param_1 + 0x2c);
                                            if (uVar30 <= *(int *)(param_1 + 0x28) + 1U) {
                                              uVar25 = uVar30;
                                              if (uVar30 == 0) {
                                                uVar25 = 8;
                                              }
                                              pvVar10 = realloc(*(void **)(param_1 + 0x24),
                                                                (uVar30 + uVar25) * 8);
                                              pcVar11 = local_4340;
                                              if (pvVar10 == (void *)0x0) goto LAB_000197ce;
                                              *(void **)(param_1 + 0x24) = pvVar10;
                                              *(uint *)(param_1 + 0x2c) =
                                                   uVar25 + *(int *)(param_1 + 0x2c);
                                            }
                                            uVar23 = *(undefined4 *)(param_1 + 0x20);
                                            *(char **)(*(int *)(param_1 + 0x24) +
                                                       *(int *)(param_1 + 0x28) * 8 + 4) =
                                                 local_4340;
                                            iVar16 = FUN_00018390(uVar23,local_4344);
                                            pcVar11 = local_4340;
                                            if (iVar16 != 0) {
                                              iVar28 = *(int *)(param_1 + 0x28);
                                              *(int *)(*(int *)(param_1 + 0x24) + iVar28 * 8) =
                                                   iVar16;
                                              *(int *)(param_1 + 0x28) = iVar28 + 1;
                                              pcVar11 = local_4340;
                                            }
                                            goto LAB_000197ce;
                                          }
LAB_00019b9a:
                                          ppcVar32 = (char **)0x0;
                                          uVar23 = 0x24;
                                          goto LAB_000197d2;
                                        }
                                        if (*(int *)(param_1 + 0x10) == 0) goto LAB_00019b9a;
                                      }
                                      else {
                                        iVar16 = strcmp((char *)__s1,
                                                        (char *)(DAT_00019fbc + 0x19bb0));
                                        if (iVar16 != 0) {
                                          iVar16 = strcmp((char *)__s1,
                                                          (char *)(DAT_00019fe8 + 0x19d3e));
                                          if (iVar16 == 0) {
                                            if (uVar22 != 5) {
                                              local_4344 = (byte *)strtol((char *)pbVar19,
                                                                          &local_4340,8);
                                              ppbVar33 = &local_4344;
                                              if (*local_4340 == '\0') {
                                                uVar23 = 0x29;
                                                pbVar19 = (byte *)0x0;
                                              }
                                              else {
                                                uVar23 = 0x26;
                                                ppbVar33 = (byte **)0x0;
                                              }
                                              FUN_000183aa(&iStack_433c,uVar23,uVar22,pbVar19,
                                                           ppbVar33);
                                              local_4337 = local_4337 | 1;
                                              goto LAB_00018a20;
                                            }
                                            iVar16 = FUN_00022a68();
                                            if (2 < iVar16) {
                                              iVar28 = DAT_00019fec + 0x19d5a;
                                              iVar16 = DAT_00019ff0 + 0x19d60;
                                              iVar17 = DAT_00019ff4 + 0x19da8;
                                              uVar23 = 0x5ec;
                                              goto LAB_00018a08;
                                            }
                                          }
                                          else {
                                            iVar16 = strcmp((char *)__s1,
                                                            (char *)(DAT_00019ff8 + 0x19db6));
                                            if (iVar16 == 0) {
                                              if (uVar22 != 5) {
                                                pcVar11 = strstr((char *)pbVar19,
                                                                 (char *)(DAT_0001a008 + 0x19df0));
                                                if (pcVar11 != (char *)0x0) {
                                                  local_4340 = (char *)atoi(pcVar11 + 0xe);
                                                  FUN_000183aa(&iStack_433c,0x23,uVar22,0,
                                                               &local_4340);
                                                }
                                                pcVar11 = strstr((char *)pbVar19,
                                                                 (char *)(DAT_0001a00c + 0x19e14));
                                                if (pcVar11 != (char *)0x0) {
                                                  iVar16 = FUN_00018038(pcVar11 + 0xe,
                                                                        DAT_0001a010 + 0x19e24);
                                                  if (iVar16 == 0) {
                                                    iVar16 = FUN_00018038(pcVar11 + 0xe,
                                                                          DAT_0001a020 + 0x19eac);
                                                    if (iVar16 == 0) goto LAB_00019e3a;
                                                    uVar23 = 0x20;
                                                  }
                                                  else {
                                                    uVar23 = 0x1f;
                                                  }
                                                  FUN_000183aa(&iStack_433c,uVar23,uVar22,0,0);
                                                }
LAB_00019e3a:
                                                pcVar11 = strstr((char *)pbVar19,
                                                                 (char *)(DAT_0001a014 + 0x19e42));
                                                if (pcVar11 != (char *)0x0) {
                                                  FUN_000183aa(&iStack_433c,0x21,uVar22,0,0);
                                                }
                                                pcVar11 = strstr((char *)pbVar19,
                                                                 (char *)(DAT_0001a018 + 0x19e5c));
                                                if (pcVar11 == (char *)0x0) {
                                                  pcVar11 = strstr((char *)pbVar19,
                                                                   (char *)(DAT_0001a024 + 0x19ec6))
                                                  ;
                                                  if (pcVar11 != (char *)0x0) {
                                                    local_4340 = (char *)0x1;
                                                    goto LAB_00019e6a;
                                                  }
                                                }
                                                else {
                                                  local_4340 = (char *)0x0;
LAB_00019e6a:
                                                  FUN_000183aa(&iStack_433c,0x22,uVar22,0,
                                                               &local_4340);
                                                }
                                                pcVar11 = strstr((char *)pbVar19,
                                                                 (char *)(DAT_0001a01c + 0x19e7c));
                                                if (pcVar11 != (char *)0x0) {
                                                  FUN_000183aa(&iStack_433c,0x2b,uVar22,
                                                               pcVar11 + 0xc,0);
                                                  local_4337 = local_4337 | 2;
                                                }
                                                goto LAB_00018a20;
                                              }
                                              iVar16 = FUN_00022a68();
                                              if (2 < iVar16) {
                                                iVar28 = DAT_00019ffc + 0x19dd6;
                                                iVar16 = DAT_0001a000 + 0x19ddc;
                                                iVar17 = DAT_0001a004 + 0x19e24;
                                                uVar23 = 0x5fd;
                                                goto LAB_00018a08;
                                              }
                                            }
                                            else {
                                              iVar16 = FUN_00022a68();
                                              if (2 < iVar16) {
                                                iVar16 = DAT_0001a028 + 0x19eec;
                                                iVar28 = DAT_0001a02c + 0x19ef6;
                                                iVar17 = DAT_0001a030 + 0x19f42;
                                                uVar23 = 0x62c;
LAB_0001916a:
                                                FUN_00022900(3,0,iVar16,uVar23,iVar17,iVar28,__s1,
                                                             param_2,local_4384);
                                              }
                                            }
                                          }
                                          goto LAB_000190e2;
                                        }
                                        if (uVar22 == 5) {
                                          iVar16 = FUN_00022a68();
                                          if (2 < iVar16) {
                                            iVar28 = DAT_00019fc0 + 0x19bce;
                                            iVar16 = DAT_00019fc4 + 0x19bd4;
                                            iVar17 = DAT_00019fc8 + 0x19c1c;
                                            uVar23 = 0x5d6;
                                            goto LAB_00018a08;
                                          }
                                          goto LAB_000190e2;
                                        }
                                        local_434c = (char *)strtoul((char *)pbVar19,&pcStack_4348,
                                                                     10);
                                        ppcVar32 = &local_434c;
                                        pcVar11 = local_434c;
                                        if (*pcStack_4348 == '\0') {
LAB_00019c04:
                                          local_434c = pcVar11;
                                          pbVar19 = (byte *)0x0;
                                          uVar23 = 0x28;
                                        }
                                        else {
                                          if (*(int *)(param_1 + 0x10) < 1) {
                                            if (*(int *)(param_1 + 0x10) != 0) goto LAB_000197da;
                                          }
                                          else {
                                            pcVar11 = strchr((char *)(DAT_00019fcc + 0x19c1c),
                                                             (uint)pbVar20[1]);
                                            if (pcVar11 == (char *)0x0) {
                                              iVar28 = *(int *)(param_1 + 0x34);
                                              local_4340 = (char *)0x0;
                                              local_4344 = pbVar19;
                                              for (iVar16 = 0; iVar16 != iVar28; iVar16 = iVar16 + 1
                                                  ) {
                                                iVar13 = *(int *)(param_1 + 0x30);
                                                iVar17 = strcmp((char *)(*(int *)(iVar13 + iVar16 * 
                                                  8) + **(int **)(param_1 + 0x20)),(char *)pbVar19);
                                                if (iVar17 == 0) {
                                                  pcVar11 = *(char **)(iVar13 + iVar16 * 8 + 4);
                                                  goto LAB_00019c04;
                                                }
                                              }
                                              iVar16 = FUN_00025c7c(&local_4344,&local_4340);
                                              if (iVar16 < 0) {
                                                iVar28 = FUN_00022a68();
                                                if (iVar16 + 3U < 2) {
                                                  if (2 < iVar28) {
                                                    iVar16 = 0;
                                                    iVar28 = DAT_00019fd0 + 0x19c68;
                                                    iVar17 = DAT_00019fd4 + 0x19c6c;
                                                    iVar13 = DAT_00019fd8 + 0x19cc9;
                                                    uVar23 = 0x219;
LAB_00019c78:
                                                    FUN_00022900(3,iVar16,iVar28,uVar23,iVar13,
                                                                 iVar17,local_4344);
                                                  }
                                                }
                                                else if (2 < iVar28) {
                                                  iVar28 = DAT_00019fdc + 0x19ce2;
                                                  iVar17 = DAT_00019fe0 + 0x19ce6;
                                                  iVar13 = DAT_00019fe4 + 0x19d43;
                                                  uVar23 = 0x21b;
                                                  goto LAB_00019c78;
                                                }
                                              }
                                              uVar30 = *(uint *)(param_1 + 0x38);
                                              if (uVar30 <= *(int *)(param_1 + 0x34) + 1U) {
                                                uVar25 = uVar30;
                                                if (uVar30 == 0) {
                                                  uVar25 = 8;
                                                }
                                                pvVar10 = realloc(*(void **)(param_1 + 0x30),
                                                                  (uVar30 + uVar25) * 8);
                                                pcVar11 = local_4340;
                                                if (pvVar10 == (void *)0x0) goto LAB_00019c04;
                                                *(void **)(param_1 + 0x30) = pvVar10;
                                                *(uint *)(param_1 + 0x38) =
                                                     uVar25 + *(int *)(param_1 + 0x38);
                                              }
                                              uVar23 = *(undefined4 *)(param_1 + 0x20);
                                              *(char **)(*(int *)(param_1 + 0x30) +
                                                         *(int *)(param_1 + 0x34) * 8 + 4) =
                                                   local_4340;
                                              iVar16 = FUN_00018390(uVar23,local_4344);
                                              pcVar11 = local_4340;
                                              if (iVar16 != 0) {
                                                iVar28 = *(int *)(param_1 + 0x34);
                                                *(int *)(*(int *)(param_1 + 0x30) + iVar28 * 8) =
                                                     iVar16;
                                                *(int *)(param_1 + 0x34) = iVar28 + 1;
                                                pcVar11 = local_4340;
                                              }
                                              goto LAB_00019c04;
                                            }
                                          }
                                          ppcVar32 = (char **)0x0;
                                          uVar23 = 0x25;
                                        }
LAB_000197d2:
                                        FUN_000183aa(&iStack_433c,uVar23,uVar22,pbVar19,ppcVar32);
                                      }
LAB_000197da:
                                      local_4337 = local_4337 | 1;
                                      goto LAB_00018a20;
                                    }
                                    if (uVar22 != 5) {
                                      if (uVar22 < 3) {
LAB_0001969a:
                                        FUN_000183aa(&iStack_433c);
                                        local_4337 = local_4337 | 1;
                                      }
                                      else {
                                        iVar16 = strcmp((char *)pbVar19,
                                                        (char *)(DAT_00019a24 + 0x196b6));
                                        if (iVar16 == 0) {
                                          iVar16 = FUN_00022a68();
                                          if (2 < iVar16) {
                                            iVar16 = DAT_00019a28 + 0x196ce;
                                            iVar28 = DAT_00019a2c + 0x196d6;
                                            iVar17 = DAT_00019a30 + 0x19722;
                                            uVar23 = 0x5a0;
                                            goto LAB_0001926c;
                                          }
                                        }
                                        else {
                                          if (pbVar20[1] != 0) goto LAB_0001969a;
                                          iVar16 = FUN_00022a68();
                                          if (6 < iVar16) {
                                            uVar12 = 7;
                                            iVar16 = DAT_00019a34 + 0x19702;
                                            iVar28 = DAT_00019a38 + 0x1970a;
                                            iVar17 = DAT_00019a3c + 0x19756;
                                            uVar23 = 0x5a5;
                                            goto LAB_00019270;
                                          }
                                        }
                                      }
                                      goto LAB_00018a20;
                                    }
                                    iVar16 = FUN_00022a68();
                                    if (iVar16 < 3) goto LAB_000190e2;
                                    iVar28 = DAT_00019a18 + 0x19678;
                                    iVar16 = DAT_00019a1c + 0x1967e;
                                    iVar17 = DAT_00019a20 + 0x196c6;
                                    uVar23 = 0x598;
                                  }
                                }
                              }
                            }
                            else {
                              pcVar11 = (char *)FUN_00018634(__s1 + 3);
                              if (pcVar11 == (char *)0x0) {
                                if (uVar22 != 5) {
LAB_00019538:
                                  local_4340 = (char *)0x9;
                                  goto LAB_00018a1c;
                                }
                              }
                              else if (uVar22 != 5) {
                                iVar16 = strcmp(pcVar11,(char *)(DAT_000199c0 + 0x194d8));
                                if (iVar16 == 0) {
                                  local_4340 = (char *)FUN_0001c56c(pbVar19);
                                  if (local_4340 < (char *)0x9) goto LAB_00018a1c;
                                  iVar16 = FUN_00022a68();
                                  if (2 < iVar16) {
                                    iVar16 = DAT_000199c4 + 0x1950e;
                                    iVar28 = DAT_000199c8 + 0x1951a;
                                    iVar17 = DAT_000199cc + 0x19568;
                                    uVar23 = 0x56f;
                                    goto LAB_00019380;
                                  }
                                }
                                else {
                                  iVar16 = strcmp(pcVar11,(char *)(DAT_000199d0 + 0x19534));
                                  if (iVar16 == 0) goto LAB_00019538;
                                  iVar16 = FUN_00022a68();
                                  if (2 < iVar16) {
                                    iVar16 = DAT_000199d4 + 0x1955e;
                                    iVar28 = DAT_000199d8 + 0x19568;
                                    iVar17 = DAT_000199dc + 0x195b6;
                                    uVar23 = 0x575;
                                    goto LAB_0001926c;
                                  }
                                }
                                goto LAB_00018a20;
                              }
                              iVar16 = FUN_00022a68();
                              if (iVar16 < 3) goto LAB_000190e2;
                              iVar28 = DAT_000199b4 + 0x194bc;
                              iVar16 = DAT_000199b8 + 0x194c4;
                              iVar17 = DAT_000199bc + 0x1950c;
                              uVar23 = 0x565;
                            }
                          }
                          else {
                            local_4340 = pcVar11;
                            if (uVar22 < 4) {
                              pcVar11 = (char *)FUN_00018634(__s1 + 4);
                              if (pcVar11 != (char *)0x0) {
                                local_4340 = (char *)strtol(pcVar11,(char **)0x0,8);
                              }
                              goto LAB_00018a1c;
                            }
                            iVar16 = FUN_00022a68();
                            if (iVar16 < 3) goto LAB_000190e2;
                            iVar28 = DAT_000199a4 + 0x1944a;
                            iVar16 = DAT_000199a8 + 0x19452;
                            iVar17 = DAT_000199ac + 0x1949a;
                            uVar23 = 0x553;
                          }
                        }
                        else {
                          __s1 = (byte *)FUN_00018634(__s1 + 3);
                          if (__s1 == (byte *)0x0) {
                            iVar16 = FUN_00022a68();
                            if (2 < iVar16) {
                              iVar28 = DAT_000198f0 + 0x1908e;
                              iVar16 = DAT_000198f4 + 0x19096;
                              iVar17 = DAT_000198f8 + 0x190de;
                              uVar23 = 0x4e3;
                              goto LAB_00018a08;
                            }
                            goto LAB_000190e2;
                          }
                          if (uVar22 != 5) {
                            if (uVar22 < 3) {
                              uVar23 = 7;
                            }
                            else {
                              iVar16 = 0;
                              puVar31 = (undefined4 *)(DAT_00019914 + 0x1911e);
                              do {
                                iVar28 = strcmp((char *)__s1,(char *)*puVar31);
                                if (iVar28 == 0) {
                                  iVar16 = FUN_00022a68();
                                  if (iVar16 < 3) goto LAB_000190e2;
                                  iVar16 = DAT_00019918 + 0x19150;
                                  iVar28 = DAT_0001991c + 0x1915c;
                                  iVar17 = DAT_00019920 + 0x191aa;
                                  uVar23 = 0x500;
                                  goto LAB_0001916a;
                                }
                                iVar16 = iVar16 + 1;
                                puVar31 = puVar31 + 1;
                              } while (iVar16 != 0xb);
                              uVar23 = 0x2d;
                            }
                            iVar16 = FUN_000183aa(&iStack_433c,uVar23,uVar22,pbVar19,__s1);
                            if (iVar16 == 0) goto LAB_00018a20;
                            goto LAB_000190e2;
                          }
                          iVar16 = FUN_00022a68();
                          if (iVar16 < 3) goto LAB_000190e2;
                          iVar28 = DAT_000198fc + 0x190b8;
                          iVar16 = DAT_00019900 + 0x190c0;
                          iVar17 = DAT_00019904 + 0x19108;
                          uVar23 = 0x4e7;
                        }
                      }
                      else {
                        if (3 < uVar22) {
                          iVar16 = FUN_00022a68();
                          if (2 < iVar16) {
                            iVar28 = DAT_000198a4 + 0x18f4e;
                            iVar16 = DAT_000198a8 + 0x18f56;
                            iVar17 = DAT_000198ac + 0x18f9e;
                            uVar23 = 0x4c5;
                            goto LAB_00018a08;
                          }
                          goto LAB_000190e2;
                        }
                        pcVar11 = (char *)FUN_00018634(__s1 + 5);
                        if (pcVar11 != (char *)0x0) {
                          iVar16 = FUN_00018038(pcVar11,DAT_000198bc + 0x18f9a);
                          if (iVar16 == 0) {
                            pcVar11 = strstr(pcVar11,(char *)(DAT_000198cc + 0x18fe8));
                            if ((pcVar11 != (char *)0x0) && (iVar16 = FUN_00022a68(), 2 < iVar16)) {
                              iVar16 = DAT_000198d0 + 0x19002;
                              iVar28 = DAT_000198d4 + 0x1900c;
                              iVar17 = DAT_000198d8 + 0x1905a;
                              uVar23 = 0x4d2;
                              goto LAB_00018fca;
                            }
                          }
                          else {
                            iVar16 = FUN_00022a68();
                            if (2 < iVar16) {
                              iVar16 = DAT_000198c0 + 0x18fb2;
                              iVar28 = DAT_000198c4 + 0x18fbc;
                              iVar17 = DAT_000198c8 + 0x1900a;
                              uVar23 = 0x4cf;
LAB_00018fca:
                              FUN_00022900(3,0,iVar16,uVar23,iVar17,iVar28,param_2,local_4384);
                            }
                          }
                          goto LAB_00018a1c;
                        }
                        iVar16 = FUN_00022a68();
                        if (iVar16 < 3) goto LAB_000190e2;
                        iVar28 = DAT_000198b0 + 0x18f80;
                        iVar16 = DAT_000198b4 + 0x18f88;
                        iVar17 = DAT_000198b8 + 0x18fd0;
                        uVar23 = 0x4ca;
                      }
                    }
                    else {
                      iVar16 = FUN_00018634(__s1 + 8);
                      if (iVar16 == 0) {
                        iVar16 = FUN_00022a68();
                        if (2 < iVar16) {
                          iVar28 = DAT_00019858 + 0x18e10;
                          iVar16 = DAT_0001985c + 0x18e18;
                          iVar17 = DAT_00019860 + 0x18e60;
                          uVar23 = 0x49c;
                          goto LAB_00018a08;
                        }
                        goto LAB_000190e2;
                      }
                      if (uVar22 != 5) goto LAB_00018a1c;
                      iVar16 = FUN_00022a68();
                      if (iVar16 < 3) goto LAB_000190e2;
                      iVar28 = DAT_00019864 + 0x18e3c;
                      iVar16 = DAT_00019868 + 0x18e44;
                      iVar17 = DAT_0001986c + 0x18e8c;
                      uVar23 = 0x4a0;
                    }
                  }
                  else {
                    iVar16 = FUN_00018634(__s1 + 6);
                    if (iVar16 == 0) {
                      iVar16 = FUN_00022a68();
                      if (iVar16 < 3) goto LAB_000190e2;
                      iVar28 = DAT_0001983c + 0x18d94;
                      iVar16 = DAT_00019840 + 0x18d9c;
                      iVar17 = DAT_00019844 + 0x18de4;
                      uVar23 = 0x48b;
                    }
                    else {
                      if (uVar22 != 5) goto LAB_00018a1c;
                      iVar16 = FUN_00022a68();
                      if (iVar16 < 3) goto LAB_000190e2;
                      iVar28 = DAT_00019848 + 0x18dc0;
                      iVar16 = DAT_0001984c + 0x18dc8;
                      iVar17 = DAT_00019850 + 0x18e10;
                      uVar23 = 0x48f;
                    }
                  }
                }
                else {
                  iVar16 = FUN_00018634(__s1 + 4);
                  if (iVar16 != 0) {
                    if (uVar22 != 5) goto LAB_00018a1c;
                    iVar16 = FUN_00022a68();
                    if (2 < iVar16) {
                      iVar28 = DAT_0001982c + 0x18d46;
                      iVar16 = DAT_00019830 + 0x18d4e;
                      iVar17 = DAT_00019834 + 0x18d96;
                      uVar23 = 0x47e;
                      goto LAB_00018a08;
                    }
                    goto LAB_000190e2;
                  }
                  iVar16 = FUN_00022a68();
                  if (iVar16 < 3) goto LAB_000190e2;
                  iVar28 = DAT_00019820 + 0x18d1a;
                  iVar16 = DAT_00019824 + 0x18d22;
                  iVar17 = DAT_00019828 + 0x18d6a;
                  uVar23 = 0x47a;
                }
              }
            }
LAB_00018a08:
            FUN_00022900(3,0,iVar16,uVar23,iVar17,iVar28);
            goto LAB_000190e2;
          }
          iVar16 = FUN_00022a68();
          if (2 < iVar16) {
            iVar16 = DAT_00018bcc + 0x1897c;
            iVar28 = DAT_00018bd0 + 0x18984;
            iVar17 = DAT_00018bd4 + 0x189c5;
            uVar23 = 0x675;
            goto LAB_00018990;
          }
        }
      }
      uVar5 = iVar4 + 1;
      iVar21 = DAT_00018ba8 + 0x187a9;
      iVar4 = DAT_00018bac + 0x18776;
LAB_00018774:
      uVar22 = *(uint *)(param_1 + 0x18);
      if (uVar5 < uVar22) {
        iVar16 = uVar5 * 0xc;
        uVar5 = uVar5 + 1;
        iVar28 = *(int *)(param_1 + 0x14) + iVar16;
        if (*(char *)(*(int *)(param_1 + 0x14) + iVar16) == '4') {
          iVar17 = **(int **)(param_1 + 0x20);
          pcVar6 = (char *)(*(int *)(iVar28 + 4) + iVar17);
          iVar16 = iVar28;
          for (uVar30 = uVar5; uVar22 != uVar30; uVar30 = uVar30 + 1) {
            if (((*(char *)(iVar16 + 0xc) == '\x01') && (*(int *)(iVar16 + 0x10) != 0)) &&
               (iVar13 = strcmp(pcVar6,(char *)(*(int *)(iVar16 + 0x10) + iVar17)), iVar13 == 0)) {
              *(uint *)(iVar28 + 8) = uVar30;
              goto LAB_00018774;
            }
            iVar16 = iVar16 + 0xc;
          }
          if ((*(int *)(iVar28 + 8) == 0) && (iVar16 = FUN_00022a68(), 2 < iVar16)) {
            FUN_00022900(3,0,iVar4,0x68c,iVar21,DAT_00018bb0 + 0x187bc,pcVar6,param_2);
          }
        }
        goto LAB_00018774;
      }
    }
    else {
      iVar21 = FUN_00022a68();
      if (6 < iVar21) {
        FUN_00022900(7,0,DAT_00018b90 + 0x186f0,0x650,DAT_00018b98 + 0x18739,DAT_00018b94 + 0x186f6,
                     param_2);
      }
    }
    fclose(__stream);
  }
  return 0;
LAB_00018a2a:
  do {
    pbVar19 = pbVar29;
    bVar15 = *pbVar19;
    pbVar29 = pbVar19 + 1;
  } while ((int)((uint)*(ushort *)(*piVar3 + (uint)bVar15 * 2) << 0x17) < 0);
  pcVar6 = strchr((char *)(DAT_00018be4 + 0x18a4a),(uint)bVar15);
  if (pcVar6 == (char *)0x0) {
    local_4340 = (char *)(CONCAT31((int3)((uint)local_4340 >> 8),bVar15) & 0xffff00ff);
    pvVar10 = (void *)FUN_00025538(&local_4340);
    iVar16 = FUN_00022a68();
    if (2 < iVar16) {
      FUN_00022900(3,0,DAT_00018be8 + 0x18a82,0x43a,DAT_00018bf0 + 0x18ad8,DAT_00018bec + 0x18a8c,
                   param_2,local_4384,pbVar19 + (1 - (int)pbVar18),pvVar10);
    }
    if ((*pbVar19 == 0x23) && (iVar16 = FUN_00022a68(), 2 < iVar16)) {
      FUN_00022900(3,0,DAT_00018bf8 + 0x18abc,0x43c,DAT_00018bfc + 0x18b04,DAT_00018bf4 + 0x18ab6);
    }
    free(pvVar10);
  }
  local_4336 = (short)local_402c + 1;
  iVar16 = FUN_0001805a(param_1,&local_4338);
  if (iVar16 == 0) {
    uVar22 = 0;
    uVar25 = local_402c;
    for (uVar30 = 0; uVar30 < local_402c; uVar30 = uVar30 + 1) {
      uVar27 = 0;
      bVar15 = 0;
      for (uVar24 = uVar22; uVar24 < uVar25; uVar24 = uVar24 + 1) {
        bVar1 = local_432c[uVar24 * 0xc];
        uVar26 = uVar27;
        bVar14 = bVar15;
        if (((bVar1 != 0) && (uVar26 = uVar24, bVar14 = bVar1, bVar15 != 0)) &&
           (uVar26 = uVar27, bVar14 = bVar15, bVar1 < bVar15)) {
          uVar26 = uVar24;
          bVar14 = bVar1;
        }
        uVar27 = uVar26;
        bVar15 = bVar14;
      }
      iVar16 = FUN_0001805a(param_1,&iStack_433c + uVar27 * 3 + 4);
      if (iVar16 != 0) goto LAB_000190e2;
      if (uVar22 == uVar27) {
        uVar22 = uVar22 + 1;
      }
      local_432c[uVar27 * 0xc] = 0;
      if (uVar25 == uVar27 + 1) {
        uVar25 = uVar27;
      }
    }
  }
  else {
LAB_000190e2:
    iVar16 = FUN_00022a68();
    if (2 < iVar16) {
      iVar16 = DAT_00019908 + 0x190f8;
      iVar28 = DAT_0001990c + 0x19102;
      iVar17 = DAT_00019910 + 0x19150;
      uVar23 = 0x63b;
LAB_00018990:
      FUN_00022900(3,0,iVar16,uVar23,iVar17,iVar28,param_2,local_4384);
    }
  }
  goto LAB_00018750;
}



/* ===== FUN_0001a034 @ 0001a034 size=162 ===== */

undefined4 FUN_0001a034(char *param_1)

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
  
  __needle = (char *)(DAT_0001a0d8 + 0x1a044);
  pcVar1 = strstr(param_1,__needle);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_0002448c(acStack_420,0x400,param_1);
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
        iVar5 = DAT_0001a0dc + 0x1a08e;
        while (pdVar3 != (dirent64 *)0x0) {
          if (pdVar3->d_name[0] != '.') {
            FUN_0002449c(param_1,0x400,acStack_420,iVar5,pdVar3->d_name,pcVar1 + 2,0);
            iVar4 = stat64(param_1,&sStack_488);
            if (iVar4 == 0) {
              uVar2 = 1;
              goto LAB_0001a0c4;
            }
          }
          pdVar3 = readdir64(__dirp);
        }
        uVar2 = 0;
LAB_0001a0c4:
        closedir(__dirp);
      }
    }
  }
  return uVar2;
}



/* ===== FUN_0001a0e0 @ 0001a0e0 size=40 ===== */

undefined4 FUN_0001a0e0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x14));
    FUN_0002406e(*(undefined4 *)((int)param_1 + 0x20));
    free(*(void **)((int)param_1 + 0x24));
    free(*(void **)((int)param_1 + 0x30));
    free(param_1);
  }
  return 0;
}



/* ===== FUN_0001a108 @ 0001a108 size=180 ===== */

/* WARNING: Removing unreachable block (ram,0x0002363e) */

undefined4 FUN_0001a108(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  stat64 sStack_90;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar2 = (uint *)(param_1 + 8);
  if (puVar2 != (uint *)0x0) {
    if ((undefined4 *)(DAT_0001a11c + 0x1a142) == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      iVar8 = DAT_0002365c + 0x235e2;
      iVar7 = DAT_00023658 + 0x23673;
      puVar4 = (undefined4 *)(DAT_0001a11c + 0x1a142);
      do {
        puVar5 = puVar4 + 1;
        if ((char *)*puVar4 == (char *)0x0) {
          return uVar6;
        }
        iVar1 = stat64((char *)*puVar4,&sStack_90);
        if (-1 < iVar1) {
          uVar10 = FUN_000246d8(&sStack_90.st_mtim);
          uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
          bVar9 = uVar3 <= *(uint *)(param_1 + 0xc);
          if (*(uint *)(param_1 + 0xc) == uVar3) {
            bVar9 = (uint)uVar10 <= *puVar2;
          }
          if (!bVar9) {
            iVar1 = FUN_00022a68();
            if (6 < iVar1) {
              FUN_00022900(7,0,iVar8,0x212,iVar7,DAT_00023660 + 0x23622,*puVar4);
            }
            uVar6 = 1;
            *(undefined8 *)puVar2 = uVar10;
          }
        }
        puVar4 = puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(DAT_00023654 + 0x235cc,DAT_00023650 + 0x235ca,0x200,DAT_0002364c + 0x23643);
}



/* ===== FUN_0001a120 @ 0001a120 size=360 ===== */

undefined4 * FUN_0001a120(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  puVar1 = calloc(1,0x40);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[4] = param_2;
    FUN_0002a07a(param_1,auStack_2c,1);
    pvVar2 = malloc(0x6000);
    puVar1[5] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar1[7] = 0x800;
      iVar4 = FUN_00024012();
      puVar1[8] = iVar4;
      if (iVar4 != 0) {
        FUN_0001a108(puVar1);
        iVar4 = FUN_00020350(&local_3c,DAT_0001a28c + 0x1a182,0,DAT_0001a288 + 0x1a1a8);
        piVar6 = local_3c;
        if (-1 < iVar4) {
          while ((piVar7 = local_3c, piVar6 != (int *)0x0 && (*piVar6 != 0))) {
            FUN_00018390(puVar1[8]);
            piVar6 = piVar6 + 1;
          }
          while ((piVar7 != (int *)0x0 && (*piVar7 != 0))) {
            FUN_00018690(puVar1);
            piVar7 = piVar7 + 1;
          }
          FUN_000241f0(local_3c);
          local_38 = 0x35;
          uStack_34 = 0;
          uStack_30 = 0;
          FUN_0001805a(puVar1);
          iVar4 = FUN_00022a68();
          if (6 < iVar4) {
            iVar8 = DAT_0001a29c + 0x1a202;
            iVar5 = DAT_0001a2a0 + 0x1a26b;
            FUN_00022900(7,0,iVar8,0x6c2,iVar5,DAT_0001a2a4 + 0x1a21a,puVar1[7] * 0xc,puVar1[7],0xc,
                         *(undefined4 *)(puVar1[8] + 4));
            iVar4 = FUN_00022a68();
            if (6 < iVar4) {
              iVar4 = puVar1[8];
              FUN_00022900(7,0,iVar8,0x6c7,iVar5,DAT_0001a2a8 + 0x1a24c,
                           *(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
                           *(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x18),
                           *(undefined4 *)(iVar4 + 0xc));
            }
          }
          FUN_0002405a(puVar1[8]);
          free((void *)puVar1[9]);
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          free((void *)puVar1[0xc]);
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          return puVar1;
        }
        iVar5 = FUN_00022a68();
        if (2 < iVar5) {
          FUN_00022900(3,iVar4,DAT_0001a294 + 0x1a1a2,0x6ae,DAT_0001a298 + 0x1a203,
                       DAT_0001a290 + 0x1a19c);
        }
      }
    }
    puVar3 = (undefined4 *)FUN_0001a0e0(puVar1);
  }
  return puVar3;
}



/* ===== FUN_0001a2ac @ 0001a2ac size=5122 ===== */

undefined4
FUN_0001a2ac(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
  
  iVar16 = DAT_0001a7b8 + 0x1a2d4;
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0xffffffff;
  }
  pcVar4 = (char *)FUN_000273a8(param_2[1]);
  local_48bc = strcmp(pcVar4,(char *)(DAT_0001a7bc + 0x1a2ea));
  if (local_48bc != 0) {
    uVar26 = FUN_00027c94(param_2[1]);
    uVar5 = gnu_dev_major(uVar26);
    if (uVar5 == 0) {
      iVar6 = FUN_00027c80(param_2[1]);
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
  iVar6 = DAT_0001a7c0 + 0x1a39a;
  pbVar15 = pbVar18;
LAB_0001a320:
  pbVar19 = pbVar15;
  bVar1 = *pbVar19;
  switch(bVar1) {
  case 0:
  case 0xe:
  case 0x14:
  case 0x1e:
    iVar13 = FUN_00022a68();
    if (2 < iVar13) {
      FUN_00022900(3,0,DAT_0001b920 + 0x1b892,0xa36,DAT_0001b924 + 0x1b912,DAT_0001b91c + 0x1b88c,
                   bVar1);
    }
    goto switchD_0001a6b4_default;
  case 1:
    pbVar18 = pbVar19;
    if (local_48bc == 0) {
      if ((int)((uint)pbVar19[1] << 0x1f) < 0) goto switchD_0001a6b4_default;
      local_48c0 = 0;
    }
    else {
      local_48c0 = 0;
    }
    break;
  case 2:
    iVar13 = FUN_000273a8(param_2[1]);
    goto LAB_0001a406;
  case 3:
    iVar13 = FUN_000272ce(param_2[1]);
    goto LAB_0001a406;
  case 4:
    iVar13 = FUN_00027390(param_2[1]);
    goto LAB_0001a406;
  case 5:
    for (iVar13 = FUN_0002783c(param_2[1]); iVar13 != 0; iVar13 = FUN_0002a210(iVar13)) {
      iVar12 = FUN_0002a278(iVar13);
      iVar12 = FUN_000181bc(param_1,pbVar19,iVar12 + 5);
      if (iVar12 == 0) goto switchD_0001a328_caseD_2b;
    }
    goto switchD_0001a6b4_default;
  case 6:
    iVar13 = param_2[4];
    goto LAB_0001a406;
  case 7:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = FUN_000289f0(param_2[1],iVar12);
    if (iVar13 == 0) {
      if (param_6 != 0) {
        uVar14 = FUN_0002a1fc(param_6);
        iVar13 = FUN_0002a25a(uVar14,iVar12);
        if ((iVar13 != 0) && (iVar13 = FUN_0002a27e(), iVar13 != 0)) goto LAB_0001a406;
      }
      iVar13 = DAT_0001a7c4 + 0x1a434;
    }
    goto LAB_0001a406;
  case 8:
    for (iVar13 = FUN_000278aa(param_2[1]); iVar13 != 0; iVar13 = FUN_0002a210(iVar13)) {
      iVar12 = **(int **)(param_1 + 0x20);
      iVar23 = *(int *)(pbVar19 + 4);
      pcVar4 = (char *)FUN_0002a278(iVar13);
      iVar12 = strcmp((char *)(iVar12 + iVar23),pcVar4);
      if (iVar12 == 0) goto switchD_0001a328_caseD_2b;
    }
    goto LAB_0001a45e;
  case 9:
    iVar13 = FUN_00027d5c(param_2[1]);
    goto LAB_0001a406;
  case 10:
    iVar13 = FUN_000271da(param_2[1]);
    goto LAB_0001a406;
  case 0xb:
    ppsVar9 = (stat64 **)local_4838;
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),ppsVar9,0x400);
    local_4038[0].st_dev._0_1_ = '\0';
    if (local_4838[0] != '/') {
      uVar14 = FUN_000272d4(param_2[1]);
      FUN_0002449c(local_4038,0x400,uVar14,0);
      ppsVar9 = local_4438;
      FUN_0002449c(ppsVar9,0x400,local_4038,DAT_0001a7c8 + 0x1a4ee);
    }
    iVar12 = 500;
    iVar13 = DAT_0001a7cc + 0x1a56c;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      local_48a8.tv_sec = 0;
      local_48a8.tv_nsec = DAT_0001a7b4;
      iVar23 = stat64((char *)ppsVar9,&sStack_48a0);
      if (iVar23 == 0) {
        iVar13 = FUN_00022a68();
        if (6 < iVar13) {
          FUN_00022900(7,0,DAT_0001a7d0 + 0x1a544,0x2c4,DAT_0001a7d8 + 0x1a5bc,
                       DAT_0001a7d4 + 0x1a548,ppsVar9,499 - iVar12);
        }
        goto switchD_0001a328_caseD_2b;
      }
      if (((char)local_4038[0].st_dev != '\0') &&
         (iVar23 = stat64((char *)local_4038,&sStack_48a0), iVar23 != 0)) {
        iVar13 = FUN_00022a68();
        if (iVar13 < 7) goto LAB_0001a45e;
        iVar13 = DAT_0001a7e0 + 0x1a588;
        uVar27 = CONCAT44(DAT_0001a7dc + 0x1a582,DAT_0001a7e4 + 0x1a5fa);
        uVar14 = 0x2c9;
        goto LAB_0001a592;
      }
      iVar23 = FUN_00022a68();
      if (6 < iVar23) {
        FUN_00022900(7,0,DAT_0001a7ec + 0x1a5ba,0x2cc,iVar13,DAT_0001a7e8 + 0x1a5b4,ppsVar9,0x14);
      }
      nanosleep(&local_48a8,(timespec *)0x0);
    }
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      iVar13 = DAT_0001a7f4 + 0x1a5ea;
      uVar27 = CONCAT44(DAT_0001a7f0 + 0x1a5e4,DAT_0001a7f8 + 0x1a65c);
      uVar14 = 0x2cf;
LAB_0001a592:
      FUN_00022900(7,0,iVar13,uVar14,uVar27,ppsVar9);
    }
    goto LAB_0001a45e;
  case 0xc:
    iVar13 = FUN_00018294(param_1,param_2[1],param_2,pbVar19);
    goto LAB_0001a602;
  case 0xd:
    local_4438[0] = (stat64 *)0x0;
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 8) + **(int **)(param_1 + 0x20),local_4038,0x400);
    FUN_000244cc(local_4038);
    iVar13 = FUN_000245c8(local_4038,local_4438);
    if (-1 < iVar13) {
      sVar7 = strlen((char *)local_4438[0]);
      while ((sVar7 != 0 &&
             (sVar7 = sVar7 - 1,
             (int)((uint)*(ushort *)
                          (**(int **)(iVar16 + DAT_0001a7fc) +
                          (uint)*(byte *)((int)local_4438[0] + sVar7) * 2) << 0x1a) < 0))) {
        *(undefined1 *)((int)local_4438[0] + sVar7) = 0;
      }
      iVar13 = FUN_000181bc(param_1,pbVar19);
      if (iVar13 == 0) {
        free(local_4438[0]);
        break;
      }
    }
    free(local_4438[0]);
    goto switchD_0001a6b4_default;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    for (pbVar15 = pbVar19; *pbVar15 - 0xf < 5; pbVar15 = pbVar15 + 0xc) {
    }
    param_2[2] = param_2[1];
    pbVar22 = pbVar19;
LAB_0001a69c:
    do {
      if (pbVar15 <= pbVar22) goto LAB_0001a320;
      switch(*pbVar22) {
      case 0xf:
        uVar14 = FUN_00027390(param_2[2]);
        break;
      case 0x10:
        uVar14 = FUN_00027d5c(param_2[2]);
        break;
      case 0x11:
        uVar14 = FUN_000271da(param_2[2]);
        break;
      case 0x12:
        iVar13 = FUN_00018294(param_1,param_2[2],param_2,pbVar22);
        goto LAB_0001a6ce;
      case 0x13:
        iVar13 = FUN_00028b1c(param_2[2],**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4));
        if (iVar13 == 0) {
          bVar25 = pbVar22[1] == 1;
        }
        else {
          bVar25 = pbVar22[1] == 2;
        }
        if (!bVar25) goto LAB_0001a6d0;
        goto LAB_0001a70c;
      default:
        goto switchD_0001a6b4_default;
      }
      iVar13 = FUN_000181bc(param_1,pbVar22,uVar14);
LAB_0001a6ce:
      if (iVar13 == 0) {
LAB_0001a6d0:
        pbVar22 = pbVar22 + 0xc;
        goto LAB_0001a69c;
      }
LAB_0001a70c:
      iVar13 = FUN_000284c2(param_2[2]);
      param_2[2] = iVar13;
      pbVar22 = pbVar19;
    } while (iVar13 != 0);
    goto switchD_0001a6b4_default;
  case 0x15:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400,0);
    iVar13 = FUN_0002aec4(*param_2,local_4438,local_4438,0x400);
    if ((iVar13 != 0) && (((uint)local_4438[0] & 0xff) != 0x2f)) {
      FUN_0002448c(local_4038,0x400,local_4438);
      uVar14 = FUN_000272d4(param_2[1]);
      FUN_0002449c(local_4438,0x400,uVar14,DAT_0001a800 + 0x1a77c);
    }
    FUN_0001a034(local_4438);
    iVar13 = stat64((char *)local_4438,local_4038);
    if ((iVar13 == 0) &&
       ((*(uint *)(pbVar19 + 8) == 0 || ((*(uint *)(pbVar19 + 8) & local_4038[0].st_mode) != 0)))) {
LAB_0001a7a4:
      bVar25 = pbVar19[1] == 2;
    }
    else {
      bVar25 = pbVar19[1] == 1;
    }
    if (!bVar25) break;
    goto switchD_0001a6b4_default;
  case 0x16:
    free((void *)param_2[5]);
    piVar11 = *(int **)(param_1 + 0x20);
    iVar13 = *(int *)(pbVar19 + 4);
    param_2[5] = 0;
    FUN_00015aa2(param_2,iVar13 + *piVar11,local_4438,0x400,0);
    uVar8 = FUN_00028ae0(param_2[1]);
    uVar27 = FUN_00022a68();
    uVar14 = (undefined4)((ulonglong)uVar27 >> 0x20);
    if (6 < (int)uVar27) {
      FUN_00022900(7,0,DAT_0001b4c0 + 0x1a864,0x858,DAT_0001b4c4 + 0x1a8e2,DAT_0001b4bc + 0x1a85c,
                   local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
      uVar14 = extraout_r1;
    }
    iVar13 = FUN_0001609c(param_2,uVar14,param_3,param_4,param_5,local_4438,uVar8,param_7,local_4038
                          ,0x4000);
    if (-1 < iVar13) {
      FUN_0002b17c(local_4038,10);
      if ((((local_48c0 & 0xfffffffd) == 0) &&
          (iVar13 = FUN_0002b22c(local_4038,DAT_0001b4c8 + 0x1a8bc), 0 < iVar13)) &&
         (iVar12 = FUN_00022a68(), 6 < iVar12)) {
        FUN_00022900(7,0,DAT_0001b4d0 + 0x1a8e2,0x864,DAT_0001b4d4 + 0x1a962,DAT_0001b4cc + 0x1a8da,
                     iVar13);
      }
      pcVar4 = strdup((char *)local_4038);
      param_2[5] = pcVar4;
      goto LAB_0001a7a4;
    }
    goto LAB_0001a45e;
  case 0x17:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400);
    uVar14 = param_2[1];
    pFVar10 = fopen64((char *)local_4438,(char *)(DAT_0001b4d8 + 0x1a926));
    if (pFVar10 == (FILE *)0x0) goto LAB_0001a45e;
    while (pcVar4 = fgets((char *)local_4038,0x4000,pFVar10), pcVar4 != (char *)0x0) {
      FUN_000180b0(uVar14,local_4038);
    }
LAB_0001a944:
    fclose(pFVar10);
    break;
  case 0x18:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400,0);
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      FUN_00022900(7,0,DAT_0001b4e0 + 0x1a9a4,0x87c,DAT_0001b4e4 + 0x1aa22,DAT_0001b4dc + 0x1a99c,
                   local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
    }
    uVar14 = param_2[1];
    psVar21 = local_4038;
    uVar27 = FUN_00028ae0(uVar14);
    iVar13 = FUN_0001609c(param_2,(int)((ulonglong)uVar27 >> 0x20),param_3,param_4,param_5,
                          local_4438,(int)uVar27,param_7,psVar21,0x4000);
    if (iVar13 < 0) goto LAB_0001a45e;
    do {
      pcVar4 = strchr((char *)psVar21,10);
      psVar24 = (stat64 *)0x0;
      if (pcVar4 != (char *)0x0) {
        psVar24 = (stat64 *)(pcVar4 + 1);
        *pcVar4 = '\0';
      }
      FUN_000180b0(uVar14,psVar21);
      psVar21 = psVar24;
    } while (psVar24 != (stat64 *)0x0);
    break;
  case 0x19:
    iVar13 = FUN_0001c55c(*(undefined4 *)(pbVar19 + 8));
    if (iVar13 != 0) {
      uVar20 = *(uint *)(pbVar19 + 8);
      uVar5 = 1 << (uVar20 & 0xff);
      if ((param_2[0x1b] & uVar5) != 0) {
        iVar13 = FUN_00022a68();
        if (6 < iVar13) {
          uVar14 = FUN_0001c54c(uVar20);
          FUN_00022900(7,0,DAT_0001b4e8 + 0x1aa4e,0x88c,DAT_0001b4f0 + 0x1aade,
                       DAT_0001b4ec + 0x1aa5a,uVar14,
                       **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                       *(undefined2 *)(pbVar18 + 10));
        }
        if ((1 << (*(uint *)(pbVar19 + 8) & 0xff) & param_2[0x1c]) != 0) goto LAB_0001a45e;
        break;
      }
      param_2[0x1b] = param_2[0x1b] | uVar5;
    }
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      uVar14 = FUN_0001c54c(*(undefined4 *)(pbVar19 + 8));
      FUN_00022900(7,0,DAT_0001b4f4 + 0x1aac2,0x89b,DAT_0001b4fc + 0x1ab52,DAT_0001b4f8 + 0x1aace,
                   uVar14,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                   *(undefined2 *)(pbVar18 + 10));
    }
    iVar13 = FUN_0001c5b4(param_2[1],*(undefined4 *)(pbVar19 + 8),local_4038,0);
    if (iVar13 != 0) {
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        uVar14 = FUN_0001c54c(*(undefined4 *)(pbVar19 + 8));
        FUN_00022900(7,0,DAT_0001b504 + 0x1ab18,0x8a0,DAT_0001b508 + 0x1ab96,DAT_0001b500 + 0x1ab10,
                     uVar14);
      }
      param_2[0x1c] = 1 << (*(uint *)(pbVar19 + 8) & 0xff) | param_2[0x1c];
      goto LAB_0001a45e;
    }
    break;
  case 0x1a:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4);
    ppsVar9 = (stat64 **)FUN_000289f0(param_2[3],iVar12);
    if (ppsVar9 != (stat64 **)0x0) goto LAB_0001ab4e;
    goto LAB_0001a45e;
  case 0x1b:
    pFVar10 = fopen64((char *)(DAT_0001b510 + 0x1ab66),(char *)(DAT_0001b50c + 0x1ab64));
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
LAB_0001abbc:
            pbVar15 = (byte *)(DAT_0001b518 + 0x1abc4);
          }
          else {
            uVar2 = *(ushort *)(**(int **)(iVar16 + DAT_0001b514) + uVar5 * 2);
            uVar3 = uVar2 & 0x20;
            if ((uVar2 & 0x20) != 0) goto LAB_0001abbc;
            if (uVar5 != 0x3d) goto LAB_0001abcc;
            pbVar15 = (byte *)(pcVar4 + sVar7 + 1);
            pbVar22 = pbVar15;
            do {
              pbVar17 = pbVar22;
              if (*pbVar17 == 0) break;
              pbVar22 = pbVar17 + 1;
            } while (-1 < (int)((uint)*(ushort *)
                                       (**(int **)(iVar16 + DAT_0001b514) + (uint)*pbVar17 * 2) <<
                               0x1a));
            *pbVar17 = 0;
          }
          FUN_00027ed4(param_2[1],__needle,pbVar15);
          uVar3 = 1;
        }
      }
LAB_0001abcc:
      fclose(pFVar10);
      if (uVar3 != 0) break;
    }
LAB_0001a45e:
    if (pbVar19[1] == 2) break;
    goto switchD_0001a6b4_default;
  case 0x1c:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    uVar14 = param_2[1];
    iVar13 = FUN_000284c2(uVar14);
    if (iVar13 == 0) goto LAB_0001a45e;
    for (iVar13 = FUN_000278c8(); iVar13 != 0; iVar13 = FUN_0002a210(iVar13)) {
      pcVar4 = (char *)FUN_0002a278(iVar13);
      uVar8 = FUN_0002a27e(iVar13);
      iVar12 = fnmatch((char *)local_4038,pcVar4,0);
      if (iVar12 == 0) {
        FUN_00027ed4(uVar14,pcVar4,uVar8);
      }
    }
    break;
  case 0x1d:
    iVar13 = param_2[5];
LAB_0001a406:
    iVar13 = FUN_000181bc(param_1,pbVar19,iVar13);
LAB_0001a602:
    if (iVar13 != 0) {
switchD_0001a6b4_default:
      pbVar15 = pbVar18 + (uint)*(ushort *)(pbVar18 + 2) * 0xc;
      goto LAB_0001a320;
    }
    break;
  case 0x1f:
    local_48c0 = 1;
    break;
  case 0x20:
    local_48c0 = 2;
    break;
  case 0x21:
    FUN_00028b70(param_2[1]);
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
    FUN_0002767e(param_2[1],*(undefined4 *)(pbVar19 + 8));
    break;
  case 0x24:
    local_4438[0] = local_4038;
    if (*(char *)((int)param_2 + 0x7a) == '\0') {
      iVar13 = *(int *)(pbVar19 + 4);
      if (pbVar19[1] == 7) {
        *(undefined1 *)((int)param_2 + 0x7a) = 1;
      }
      FUN_00015aa2(param_2,iVar13 + **(int **)(param_1 + 0x20),local_4038,0x200,0);
      *(undefined1 *)((int)param_2 + 0x79) = 1;
      iVar13 = FUN_00025b58(local_4438,param_2 + 7,0,0);
      if (iVar13 < 0) {
        iVar12 = FUN_00022a68();
        if (iVar13 + 3U < 2) {
          if (2 < iVar12) {
            iVar13 = 0;
            iVar12 = DAT_0001b520 + 0x1ad24;
            uVar27 = CONCAT44(DAT_0001b51c + 0x1ad1c,DAT_0001b524 + 0x1ada6);
            uVar14 = 0x908;
LAB_0001ad30:
            FUN_00022900(3,iVar13,iVar12,uVar14,uVar27,local_4038);
          }
        }
        else if (2 < iVar12) {
          iVar12 = DAT_0001b538 + 0x1ad96;
          uVar27 = CONCAT44(DAT_0001b534 + 0x1ad8e,DAT_0001b53c + 0x1ae18);
          uVar14 = 0x90a;
          goto LAB_0001ad30;
        }
        param_2[7] = 0;
      }
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        psVar21 = (stat64 *)param_2[7];
        iVar13 = DAT_0001b528 + 0x1ad62;
        uVar27 = CONCAT44(DAT_0001b52c + 0x1ad68,DAT_0001b530 + 0x1adec);
        uVar14 = 0x911;
LAB_0001ad76:
        uVar8 = 7;
        goto LAB_0001b2b8;
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
      FUN_00015aa2(param_2,iVar13 + **(int **)(param_1 + 0x20),local_4038,0x200);
      *(undefined1 *)((int)param_2 + 0x77) = 1;
      iVar13 = FUN_00025c7c(local_4438,param_2 + 8);
      if (iVar13 < 0) {
        iVar12 = FUN_00022a68();
        if (iVar13 + 3U < 2) {
          if (2 < iVar12) {
            iVar13 = 0;
            iVar12 = DAT_0001b544 + 0x1ae20;
            uVar27 = CONCAT44(DAT_0001b540 + 0x1ae18,DAT_0001b548 + 0x1aea0);
            uVar14 = 0x922;
LAB_0001ae2a:
            FUN_00022900(3,iVar13,iVar12,uVar14,uVar27,local_4038);
          }
        }
        else if (2 < iVar12) {
          iVar12 = DAT_0001b55c + 0x1ae8c;
          uVar27 = CONCAT44(DAT_0001b558 + 0x1ae84,DAT_0001b560 + 0x1af0c);
          uVar14 = 0x924;
          goto LAB_0001ae2a;
        }
        param_2[8] = 0;
      }
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        psVar21 = (stat64 *)param_2[8];
        iVar13 = DAT_0001b54c + 0x1ae5c;
        uVar27 = CONCAT44(DAT_0001b550 + 0x1ae62,DAT_0001b554 + 0x1aee6);
        uVar14 = 0x92b;
        goto LAB_0001ad76;
      }
    }
    break;
  case 0x26:
    if (*(char *)(param_2 + 0x1f) == '\0') {
      FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x200);
      psVar21 = (stat64 *)strtol((char *)local_4038,(char **)local_4438,8);
      if ((char)local_4438[0]->st_dev == '\0') {
        bVar1 = pbVar19[1];
        param_2[6] = psVar21;
        if (bVar1 == 7) {
          *(undefined1 *)(param_2 + 0x1f) = 1;
        }
        *(undefined1 *)((int)param_2 + 0x7b) = 1;
        iVar13 = FUN_00022a68();
        if (6 < iVar13) {
          pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
          ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
          iVar13 = DAT_0001b570 + 0x1af48;
          uVar27 = CONCAT44(DAT_0001b574 + 0x1af4a,DAT_0001b578 + 0x1afce);
          uVar14 = 0x942;
          goto LAB_0001ad76;
        }
      }
      else {
        iVar13 = FUN_00022a68();
        if (2 < iVar13) {
          iVar12 = DAT_0001b568 + 0x1aef4;
          uVar27 = CONCAT44(DAT_0001b564 + 0x1aeec,DAT_0001b56c + 0x1af76);
          uVar14 = 0x938;
          iVar13 = 0;
          goto LAB_0001af00;
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
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001b57c + 0x1afa4;
        uVar27 = CONCAT44(DAT_0001b580 + 0x1afa6,DAT_0001b584 + 0x1b02a);
        uVar14 = 0x94f;
        goto LAB_0001ad76;
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
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001b588 + 0x1b000;
        uVar27 = CONCAT44(DAT_0001b58c + 0x1b002,DAT_0001b590 + 0x1b086);
        uVar14 = 0x95b;
        goto LAB_0001ad76;
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
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001b594 + 0x1b05c;
        uVar27 = CONCAT44(DAT_0001b598 + 0x1b05e,DAT_0001b59c + 0x1b0e2);
        uVar14 = 0x967;
        goto LAB_0001ad76;
      }
    }
    break;
  case 0x2a:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4038,0x400);
    psVar21 = local_4038;
    if (pbVar19[1] - 6 < 2) {
      FUN_00027672(param_2[1]);
    }
    do {
      psVar24 = (stat64 *)((int)&psVar21->st_dev + 1);
      uVar5 = (uint)(byte)psVar21->st_dev;
      if (uVar5 == 0) goto LAB_0001b1d0;
      psVar21 = psVar24;
    } while ((((uVar5 & 0xffffffdf) - 0x41 < 0x1a) || (uVar5 - 0x30 < 10)) ||
            ((uVar5 == 0x2d || (uVar5 == 0x5f))));
    iVar13 = FUN_00022a68();
    if (2 < iVar13) {
      FUN_00022900(3,0,DAT_0001b5b4 + 0x1b1c4,0x99f,DAT_0001b5b8 + 0x1b242,DAT_0001b5b0 + 0x1b1be,
                   local_4038);
    }
LAB_0001b1d0:
    if (pbVar19[1] == 5) {
      FUN_00027644();
    }
    else {
      FUN_00027614(param_2[1],local_4038);
    }
    break;
  case 0x2c:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4);
    if (pbVar19[1] - 6 < 2) {
      FUN_0002a226(param_2 + 9);
    }
    FUN_0002a09c(param_2 + 9,iVar12,iVar13);
    iVar23 = FUN_00022a68();
    if (6 < iVar23) {
      FUN_00022900(7,0,DAT_0001b5a4 + 0x1b0d2,0x974,DAT_0001b5a8 + 0x1b150,DAT_0001b5a0 + 0x1b0ca,
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
      if ((pbVar19[1] == 4) && (iVar13 = FUN_000289f0(param_2[1],iVar12), iVar13 != 0)) {
        FUN_00015aa2(param_2,iVar23,local_4038,0x200,0);
        FUN_0002449c(local_4438,0x200,iVar13,DAT_0001b5ac + 0x1b13c);
      }
      else {
        FUN_00015aa2(param_2,iVar23,local_4438,0x200);
      }
      ppsVar9 = local_4438;
    }
LAB_0001ab4e:
    FUN_00027ed4(param_2[1],iVar12,ppsVar9);
    break;
  case 0x2e:
    if (*(char *)((int)param_2 + 0x7d) == '\0') {
      psVar21 = (stat64 *)(**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4));
      if (pbVar19[1] == 7) {
        *(undefined1 *)((int)param_2 + 0x7d) = 1;
      }
      FUN_00015aa2(param_2,psVar21,local_4038,0x400);
      if ((((local_48c0 & 0xfffffffd) == 0) &&
          (iVar13 = FUN_0002b22c(local_4038,DAT_0001b5bc + 0x1b230), 0 < iVar13)) &&
         (iVar12 = FUN_00022a68(), 6 < iVar12)) {
        FUN_00022900(7,0,DAT_0001b5c4 + 0x1b252,0x9b6,DAT_0001b5c8 + 0x1b2d4,DAT_0001b5c0 + 0x1b24c,
                     iVar13);
      }
      uVar26 = FUN_00027c94(param_2[1]);
      uVar5 = gnu_dev_major(uVar26);
      if (uVar5 != 0) {
        iVar13 = FUN_00027d06(param_2[1]);
        iVar13 = strcmp((char *)local_4038,(char *)(iVar13 + 5));
        if (iVar13 != 0) {
          iVar13 = FUN_00022a68();
          if (2 < iVar13) {
            pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
            ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
            iVar13 = DAT_0001b5d0 + 0x1b2ac;
            uVar27 = CONCAT44(DAT_0001b5cc + 0x1b2a6,DAT_0001b5d4 + 0x1b32a);
            uVar14 = 0x9bc;
            goto LAB_0001b2b4;
          }
          break;
        }
      }
      free((void *)param_2[4]);
      psVar21 = (stat64 *)strdup((char *)local_4038);
      param_2[4] = psVar21;
      iVar13 = FUN_00022a68();
      if (6 < iVar13) {
        pcVar4 = (char *)(uint)*(ushort *)(pbVar18 + 10);
        ppsVar9 = (stat64 **)(**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8));
        iVar13 = DAT_0001b5d8 + 0x1b2f8;
        uVar27 = CONCAT44(DAT_0001b5dc + 0x1b2fa,DAT_0001b5e0 + 0x1b37c);
        uVar14 = 0x9c4;
        goto LAB_0001ad76;
      }
    }
    break;
  case 0x2f:
    if (*(char *)((int)param_2 + 0x7e) == '\0') {
      uVar26 = FUN_00027c94(param_2[1]);
      uVar5 = gnu_dev_major(uVar26);
      if (uVar5 != 0) {
        if (pbVar19[1] == 7) {
          *(undefined1 *)((int)param_2 + 0x7e) = 1;
LAB_0001b32e:
          FUN_0002739c(param_2[1]);
        }
        else if (pbVar19[1] - 6 < 2) goto LAB_0001b32e;
        FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x400);
        if (local_48c0 == 0) {
          iVar13 = DAT_0001b5e4 + 0x1b36c;
LAB_0001b36a:
          iVar13 = FUN_0002b22c(local_4438,iVar13);
          if ((0 < iVar13) && (iVar12 = FUN_00022a68(), 6 < iVar12)) {
            FUN_00022900(7,0,DAT_0001b5ec + 0x1b390,0x9dd,DAT_0001b5f0 + 0x1b410,
                         DAT_0001b5e8 + 0x1b38a,iVar13);
          }
        }
        else if (local_48c0 == 2) {
          iVar13 = DAT_0001b608 + 0x1b442;
          goto LAB_0001b36a;
        }
        piVar11 = *(int **)(iVar16 + DAT_0001b514);
        ppsVar9 = local_4438;
        do {
          __s = ppsVar9;
          ppsVar9 = (stat64 **)((int)__s + 1);
        } while ((int)((uint)*(ushort *)(*piVar11 + (uint)*(byte *)__s * 2) << 0x1a) < 0);
        ppsVar9 = (stat64 **)strchr((char *)__s,0x20);
        iVar13 = DAT_0001b5f4 + 0x1b3ca;
        while (ppsVar9 != (stat64 **)0x0) {
          *(byte *)ppsVar9 = 0;
          iVar12 = FUN_00022a68();
          if (6 < iVar12) {
            FUN_00022900(7,0,iVar13,0x9e5,iVar6,DAT_0001b60c + 0x1b472,__s,
                         **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                         *(undefined2 *)(pbVar18 + 10));
          }
          FUN_0002449c(local_4038,0x400,DAT_0001b610 + 0x1b48e,__s);
          FUN_000275f2(param_2[1],local_4038);
          __s = ppsVar9;
          do {
            __s = (stat64 **)((int)__s + 1);
          } while ((int)((uint)*(ushort *)(*piVar11 + (uint)*(byte *)__s * 2) << 0x1a) < 0);
          ppsVar9 = (stat64 **)strchr((char *)__s,0x20);
        }
        if (*(byte *)__s != 0) {
          iVar13 = FUN_00022a68();
          if (6 < iVar13) {
            FUN_00022900(7,0,DAT_0001b5fc + 0x1b406,0x9ef,DAT_0001b600 + 0x1b484,
                         DAT_0001b5f8 + 0x1b400,__s,
                         **(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8),
                         *(undefined2 *)(pbVar18 + 10));
          }
          FUN_0002449c(local_4038,0x400,DAT_0001b604 + 0x1b422,__s);
          FUN_000275f2(param_2[1],local_4038);
        }
      }
    }
    break;
  case 0x30:
    iVar12 = **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 8);
    iVar13 = FUN_0002aec4(*param_2,iVar12,local_4038,0x400,0);
    if (iVar13 != 0) {
      uVar14 = FUN_000272d4(param_2[1]);
      FUN_0002449c(local_4038,0x400,uVar14,DAT_0001b8c8 + 0x1b64c,iVar12);
    }
    FUN_0001a034(local_4038);
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x200);
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      FUN_00022900(7,0,DAT_0001b8d0 + 0x1b6aa,0xa02,DAT_0001b8d4 + 0x1b728,DAT_0001b8cc + 0x1b6a4,
                   local_4038,local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8)
                   ,*(undefined2 *)(pbVar18 + 10));
    }
    pFVar10 = fopen64((char *)local_4038,(char *)(DAT_0001b8d8 + 0x1b6c2));
    if (pFVar10 != (FILE *)0x0) {
      iVar13 = fprintf(pFVar10,(char *)(DAT_0001b8dc + 0x1b6d2),local_4438);
      if ((iVar13 < 1) && (iVar13 = FUN_00022a68(), 2 < iVar13)) {
        piVar11 = __errno_location();
        FUN_00022900(3,*piVar11,DAT_0001b8e4 + 0x1b6f2,0xa06,DAT_0001b8e8 + 0x1b772,
                     DAT_0001b8e0 + 0x1b6ec,local_4038);
      }
      goto LAB_0001a944;
    }
    iVar13 = FUN_00022a68();
    if (2 < iVar13) {
      piVar11 = __errno_location();
      iVar12 = DAT_0001b8f0 + 0x1b726;
      uVar27 = CONCAT44(DAT_0001b8ec + 0x1b720,DAT_0001b8f4 + 0x1b7a6);
      uVar14 = 0xa09;
      iVar13 = *piVar11;
LAB_0001af00:
      FUN_00022900(3,iVar13,iVar12,uVar14,uVar27,local_4038);
    }
    break;
  case 0x31:
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 8) + **(int **)(param_1 + 0x20),local_4038,0x400,0);
    FUN_000244cc(local_4038);
    FUN_00015aa2(param_2,*(int *)(pbVar19 + 4) + **(int **)(param_1 + 0x20),local_4438,0x200);
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      FUN_00022900(7,0,DAT_0001b8fc + 0x1b7a4,0xa16,DAT_0001b900 + 0x1b822,DAT_0001b8f8 + 0x1b79e,
                   local_4038,local_4438,**(int **)(param_1 + 0x20) + (uint)*(ushort *)(pbVar18 + 8)
                   ,*(undefined2 *)(pbVar18 + 10));
    }
    ppsVar9 = local_4438;
    psVar21 = local_4038;
    iVar13 = FUN_00024504(psVar21,ppsVar9);
    if ((iVar13 < 0) && (iVar12 = FUN_00022a68(), 2 < iVar12)) {
      pcVar4 = strerror(-iVar13);
      iVar13 = DAT_0001b908 + 0x1b7e8;
      uVar27 = CONCAT44(DAT_0001b904 + 0x1b7e2,DAT_0001b90c + 0x1b868);
      uVar14 = 0xa19;
LAB_0001b2b4:
      uVar8 = 3;
LAB_0001b2b8:
      FUN_00022900(uVar8,0,iVar13,uVar14,uVar27,psVar21,ppsVar9,pcVar4);
    }
    break;
  case 0x32:
  case 0x33:
    if (pbVar19[1] - 6 < 2) {
      FUN_0002a226(param_2 + 0x10);
    }
    iVar13 = FUN_00022a68();
    if (6 < iVar13) {
      FUN_00022900(7,0,DAT_0001b914 + 0x1b83c,0xa25,DAT_0001b918 + 0x1b8ba,DAT_0001b910 + 0x1b836,
                   **(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4),
                   (uint)*(ushort *)(pbVar18 + 8) + **(int **)(param_1 + 0x20),
                   *(undefined2 *)(pbVar18 + 10));
    }
    uVar14 = FUN_0002a09c(param_2 + 0x10,**(int **)(param_1 + 0x20) + *(int *)(pbVar19 + 4),0);
    FUN_0002a290(uVar14,*(undefined4 *)(pbVar19 + 8));
    break;
  case 0x34:
    if (*(int *)(pbVar19 + 8) == 0) break;
    pbVar15 = (byte *)(*(int *)(pbVar19 + 8) * 0xc + *(int *)(param_1 + 0x14));
    goto LAB_0001a320;
  case 0x35:
    goto LAB_0001b8b6;
  }
switchD_0001a328_caseD_2b:
  pbVar15 = pbVar19 + 0xc;
  goto LAB_0001a320;
LAB_0001b8b6:
  return 0;
}



/* ===== FUN_0001b928 @ 0001b928 size=848 ===== */

int FUN_0001b928(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  __mode_t __mode;
  __gid_t __group;
  __uid_t __owner;
  void *__ptr;
  undefined4 uVar12;
  byte *local_cb8;
  int *local_cb0;
  int *local_c94;
  stat64 sStack_c90;
  char acStack_c28 [1024];
  undefined1 auStack_828 [1024];
  char acStack_428 [1028];
  
  pbVar6 = *(byte **)(param_1 + 0x14);
  iVar11 = 0;
  local_c94 = (int *)0x0;
  if (pbVar6 == (byte *)0x0) {
    iVar11 = 0;
LAB_0001b984:
    if (local_c94 != (int *)0x0) {
      FUN_000241f0();
    }
    return iVar11;
  }
  __mode = 0;
  __group = 0;
  iVar7 = DAT_0001bc78 + 0x1b952;
  __owner = 0;
  iVar8 = DAT_0001bc7c + 0x1b9f0;
  local_cb8 = pbVar6;
LAB_0001b95c:
  bVar1 = *pbVar6;
  if (bVar1 == 0x29) {
    __mode = *(__mode_t *)(pbVar6 + 8);
  }
  else {
    if (bVar1 < 0x2a) {
      if (bVar1 == 0x27) {
        __owner = *(__uid_t *)(pbVar6 + 8);
      }
      else if (bVar1 < 0x28) {
        if (bVar1 == 1) {
          local_cb8 = pbVar6;
          if (-1 < (int)((uint)pbVar6[1] << 0x1e)) goto LAB_0001b9e8;
          __mode = 0;
          FUN_000241f0(local_c94);
          local_c94 = (int *)0x0;
          __group = __mode;
          __owner = __mode;
        }
      }
      else {
        __group = *(__gid_t *)(pbVar6 + 8);
      }
      goto LAB_0001b96e;
    }
    if (bVar1 == 0x2b) {
      if (((__owner != 0 || __group != 0) || __mode != 0) || (local_c94 != (int *)0x0)) {
        FUN_0002449c(acStack_c28,0x400,iVar7,*(int *)(pbVar6 + 4) + **(int **)(param_1 + 0x20),0);
        iVar2 = stat64(acStack_c28,&sStack_c90);
        if ((iVar2 != 0) || ((sStack_c90.st_mode & 0xb000) != 0x2000)) goto LAB_0001b96e;
        if (local_c94 != (int *)0x0) {
          local_cb0 = local_c94;
          iVar2 = DAT_0001bc80 + 0x1ba40;
          iVar9 = DAT_0001bc84 + 0x1ba46;
          iVar10 = DAT_0001bc88 + 0x1ba4c;
          do {
            piVar4 = local_cb0 + 1;
            if (*local_cb0 == 0) break;
            uVar12 = 0;
            FUN_0002449c(auStack_828,0x400,iVar2,*local_cb0,iVar9,0);
            iVar11 = FUN_00022df6(auStack_828,0x1ed);
            if (iVar11 < 0) {
              iVar7 = FUN_00022a68();
              if (2 < iVar7) {
                iVar11 = FUN_00022900(3,iVar11,DAT_0001bc90 + 0x1ba98,0xa8b,DAT_0001bc94 + 0x1bb34,
                                      DAT_0001bc8c + 0x1ba92,auStack_828);
              }
              __ptr = (void *)0x0;
LAB_0001bb20:
              free(__ptr);
              goto LAB_0001b984;
            }
            __ptr = (void *)FUN_0002558c(**(int **)(param_1 + 0x20) + *(int *)(pbVar6 + 4),iVar10);
            FUN_0002449c(acStack_428,0x400,auStack_828,__ptr,0,uVar12);
            iVar11 = symlink(acStack_c28,acStack_428);
            if (iVar11 < 0) {
              puVar3 = (uint *)__errno_location();
              uVar5 = *puVar3;
              if (uVar5 != 0x11) {
                iVar11 = FUN_00022a68();
                if (iVar11 < 3) {
                  iVar11 = ((int)uVar5 >> 0x1f) - (uVar5 ^ (int)uVar5 >> 0x1f);
                }
                else {
                  iVar11 = FUN_00022900(3,uVar5,DAT_0001bc9c + 0x1bb0e,0xa93,DAT_0001bca0 + 0x1bbaa,
                                        DAT_0001bc98 + 0x1bb08,acStack_428,acStack_c28);
                }
                goto LAB_0001bb20;
              }
            }
            iVar11 = 0;
            free(__ptr);
            local_cb0 = piVar4;
          } while (piVar4 != (int *)0x0);
        }
        if (__mode == 0) {
          if (__owner == 0) {
            if (__group == 0) {
              __mode = 0;
              goto LAB_0001b96e;
            }
            __mode = 0x1b0;
          }
          else if (__group == 0) {
            __mode = 0x180;
          }
          else {
            __mode = 0x1b0;
          }
        }
        if ((sStack_c90.st_mode & 0x3ff) == __mode) {
LAB_0001bbde:
          if (((__owner != 0) && (sStack_c90.st_uid != __owner)) ||
             ((__group != 0 && (sStack_c90.st_gid != __group)))) {
            iVar11 = chown(acStack_c28,__owner,__group);
            if (iVar11 < 0) {
              iVar11 = FUN_00022a68();
              if (2 < iVar11) {
                FUN_00022900(3,0,DAT_0001bcc0 + 0x1bc20,0xaaf,(int)&DAT_0001bcbc + DAT_0001bcc4,
                             DAT_0001bcbc + 0x1bc1a,acStack_c28,__owner,__group);
              }
              goto LAB_0001bb9c;
            }
            iVar2 = FUN_00022a68();
            if (6 < iVar2) {
              FUN_00022900(7,0,DAT_0001bccc + 0x1bc50,0xab2,iVar8,DAT_0001bcc8 + 0x1bc4a,acStack_c28
                           ,__owner,__group);
            }
          }
          utimensat(-100,acStack_c28,(timespec *)0x0,0);
          goto LAB_0001b96e;
        }
        iVar11 = chmod(acStack_c28,__mode);
        if (-1 < iVar11) {
          iVar2 = FUN_00022a68();
          if (6 < iVar2) {
            FUN_00022900(7,0,DAT_0001bcb4 + 0x1bbce,0xaa9,DAT_0001bcb8 + 0x1bc6a,
                         DAT_0001bcb0 + 0x1bbc8,acStack_c28,__mode);
          }
          goto LAB_0001bbde;
        }
        iVar11 = FUN_00022a68();
        if (2 < iVar11) {
          FUN_00022900(3,0,DAT_0001bca8 + 0x1bb8c,0xaa6,DAT_0001bcac + 0x1bc28,
                       DAT_0001bca4 + 0x1bb86,acStack_c28,__mode);
        }
LAB_0001bb9c:
        piVar4 = __errno_location();
        iVar11 = -*piVar4;
        goto LAB_0001b984;
      }
LAB_0001b9e8:
      pbVar6 = local_cb8 + (uint)*(ushort *)(local_cb8 + 2) * 0xc;
      goto LAB_0001b95c;
    }
    if (0x2a < bVar1) {
      if (bVar1 != 0x35) goto LAB_0001b96e;
      goto LAB_0001b984;
    }
    iVar11 = FUN_0002435a(&local_c94,**(int **)(param_1 + 0x20) + *(int *)(pbVar6 + 4));
    if (iVar11 < 0) goto LAB_0001b984;
  }
LAB_0001b96e:
  pbVar6 = pbVar6 + 0xc;
  goto LAB_0001b95c;
}



/* ===== FUN_0001bcd0 @ 0001bcd0 size=194 ===== */

int FUN_0001bcd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

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
  strcpy(acStack_130,(char *)(DAT_0001bd98 + 0x1bcf4));
  local_120 = DAT_0001bd94;
  uStack_11c = param_2;
  uVar1 = param_3;
  if (param_4 != 0) {
    FUN_0002448c(local_118,0x100,param_4);
    uVar1 = local_118[0];
  }
  local_118[0] = uVar1;
  if (*(char *)(param_1 + 0x92) == '\0') {
    iVar2 = connect(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),*(socklen_t *)(param_1 + 0x8c)
                   );
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 0x92) = 1;
      goto LAB_0001bd3a;
    }
  }
  else {
LAB_0001bd3a:
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
      goto LAB_0001bd28;
    }
  }
  piVar3 = __errno_location();
  iVar2 = *piVar3;
LAB_0001bd28:
  return -iVar2;
}



/* ===== FUN_0001bd9c @ 0001bd9c size=172 ===== */

int FUN_0001bd9c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    iVar1 = bind(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),*(socklen_t *)(param_1 + 0x8c));
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      if (*piVar2 == 0x62) {
        unlink((char *)(param_1 + 0xe));
        iVar1 = bind(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),
                     *(socklen_t *)(param_1 + 0x8c));
        if (-1 < iVar1) goto LAB_0001be0c;
      }
      iVar3 = FUN_00022a68();
      iVar7 = *piVar2;
      iVar1 = -iVar7;
      if (iVar3 < 3) {
        return iVar1;
      }
      iVar4 = DAT_0001be48 + 0x1bddc;
      iVar3 = DAT_0001be4c + 0x1bde2;
      iVar5 = DAT_0001be50 + 0x1bde4;
      uVar6 = 0x7b;
    }
    else {
LAB_0001be0c:
      iVar1 = listen(*(int *)(param_1 + 8),0);
      if (-1 < iVar1) {
        *(undefined2 *)(param_1 + 0x90) = 0x101;
        goto LAB_0001be44;
      }
      piVar2 = __errno_location();
      iVar7 = *piVar2;
      iVar3 = FUN_00022a68();
      iVar1 = -iVar7;
      if (iVar3 < 3) {
        return iVar1;
      }
      iVar4 = DAT_0001be54 + 0x1be30;
      iVar3 = DAT_0001be58 + 0x1be36;
      iVar5 = DAT_0001be5c + 0x1be38;
      uVar6 = 0x82;
    }
    FUN_00022900(3,iVar7,iVar3,uVar6,iVar5,iVar4);
  }
  else {
LAB_0001be44:
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0001be64 @ 0001be64 size=34 ===== */

undefined4 FUN_0001be64(int *param_1)

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



/* ===== FUN_0001bf70 @ 0001bf70 size=210 ===== */

/* WARNING: Removing unreachable block (ram,0x0001beec) */

undefined4 * FUN_0001bf70(undefined4 param_1)

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
    iVar2 = socket(1,DAT_0001bf50,0);
    puVar1[2] = iVar2;
    if (iVar2 < 0) {
      iVar2 = FUN_00022a68();
      if (2 < iVar2) {
        piVar3 = __errno_location();
        FUN_00022900(3,*piVar3,DAT_0001bf58 + 0x1bed0,0x59,DAT_0001bf5c + 0x1beed,
                     DAT_0001bf54 + 0x1beca);
      }
      FUN_0001be64(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = setsockopt(puVar1[2],1,0x10,local_1c,4);
      if ((iVar2 < 0) && (iVar2 = FUN_00022a68(), 3 < iVar2)) {
        piVar3 = __errno_location();
        FUN_00022900(4,*piVar3,DAT_0001bf64 + 0x1bf20,99,DAT_0001bf68 + 0x1bf3d,
                     DAT_0001bf60 + 0x1bf1a);
      }
      iVar2 = DAT_0001bf6c;
      *(undefined2 *)(puVar1 + 3) = 1;
      FUN_0002448c((char *)((int)puVar1 + 0xe),0x6c,iVar2 + 0x1bf3e);
      sVar4 = strlen((char *)((int)puVar1 + 0xe));
      puVar1[0x23] = sVar4 + 2;
    }
  }
  return puVar1;
}



/* ===== FUN_0001bf78 @ 0001bf78 size=20 ===== */

undefined4 FUN_0001bf78(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x91) != '\0')) {
    unlink((char *)(param_1 + 0xe));
  }
  return 0;
}



/* ===== FUN_0001bf8c @ 0001bf8c size=12 ===== */

undefined4 FUN_0001bf8c(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0xffffffea;
}



/* ===== FUN_0001bf98 @ 0001bf98 size=338 ===== */

undefined4 * FUN_0001bf98(int *param_1)

{
  undefined4 *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  local_24 = 0;
  local_28 = 1;
  iStack_20 = 0;
  uStack_1c = 0;
  __ptr = malloc(0xc);
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *__ptr = 1;
  __ptr[1] = param_1;
  iVar1 = accept4(param_1[2],(sockaddr *)0x0,(socklen_t *)0x0,DAT_0001c0ec);
  __ptr[2] = iVar1;
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x5f)) {
      iVar1 = accept(param_1[2],(sockaddr *)0x0,(socklen_t *)0x0);
      if (-1 < iVar1) {
        fcntl64(iVar1,4,0x800);
        fcntl64(iVar1,2,1);
      }
      __ptr[2] = iVar1;
    }
  }
  if ((int)__ptr[2] < 0) {
    piVar2 = __errno_location();
    iVar6 = *piVar2;
    if ((iVar6 == 4) || (iVar1 = FUN_00022a68(), iVar1 < 3)) goto LAB_0001c038;
    iVar3 = DAT_0001c0f0 + 0x1c026;
    iVar1 = DAT_0001c0f4 + 0x1c02c;
    iVar4 = DAT_0001c0f8 + 0x1c05f;
    uVar5 = 0xd3;
  }
  else {
    iVar6 = FUN_000265a4(__ptr[2],&local_24);
    iVar1 = iStack_20;
    if (-1 < iVar6) {
      if (iStack_20 == 0) {
        iVar1 = setsockopt(__ptr[2],1,0x10,&local_28,4);
        if ((iVar1 < 0) && (iVar1 = FUN_00022a68(), 3 < iVar1)) {
          piVar2 = __errno_location();
          FUN_00022900(4,*piVar2,DAT_0001c118 + 0x1c0d4,0xe5,DAT_0001c11c + 0x1c107,
                       DAT_0001c114 + 0x1c0ce);
        }
        *param_1 = *param_1 + 1;
        return __ptr;
      }
      iVar6 = FUN_00022a68();
      if (2 < iVar6) {
        FUN_00022900(3,0,DAT_0001c10c + 0x1c098,0xde,DAT_0001c110 + 0x1c0cd,DAT_0001c108 + 0x1c092,
                     iVar1);
      }
      goto LAB_0001c038;
    }
    iVar1 = FUN_00022a68();
    if (iVar1 < 3) goto LAB_0001c038;
    iVar3 = DAT_0001c0fc + 0x1c06c;
    iVar1 = DAT_0001c100 + 0x1c072;
    iVar4 = DAT_0001c104 + 0x1c0a5;
    uVar5 = 0xda;
  }
  FUN_00022900(3,iVar6,iVar1,uVar5,iVar4,iVar3);
LAB_0001c038:
  if (-1 < (int)__ptr[2]) {
    close(__ptr[2]);
  }
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== FUN_0001c120 @ 0001c120 size=10 ===== */

void FUN_0001c120(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  return;
}



/* ===== FUN_0001c12a @ 0001c12a size=40 ===== */

undefined4 FUN_0001c12a(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      if (-1 < param_1[2]) {
        close(param_1[2]);
      }
      FUN_0001be64(param_1[1]);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0001c1a2 @ 0001c1a2 size=20 ===== */

void FUN_0001c1a2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001bcd0(param_1,5,0,param_2,param_3,param_2,param_3);
  return;
}



/* ===== FUN_0001c1f2 @ 0001c1f2 size=30 ===== */

undefined4 FUN_0001c1f2(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_0001c12a(param_1[1]);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0001c210 @ 0001c210 size=418 ===== */

undefined4 * FUN_0001c210(int param_1)

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
    FUN_0001c120(param_1);
    do {
      local_5c.fd = *(int *)(param_1 + 8);
      local_5c.events = 1;
      iVar2 = poll(&local_5c,1,10000);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          iVar2 = FUN_00022a68();
          if (iVar2 < 3) break;
          iVar6 = DAT_0001c3b8 + 0x1c29c;
          iVar2 = DAT_0001c3bc + 0x1c2a2;
          iVar7 = DAT_0001c3c0 + 0x1c2ee;
          uVar8 = 0x17d;
LAB_0001c2aa:
          iVar5 = 0;
        }
        else {
          if ((int)((uint)(ushort)local_5c.revents << 0x1f) < 0) {
            local_64.iov_base = puVar1 + 2;
            local_64.iov_len = 0x118;
            sVar4 = recvmsg(*(int *)(param_1 + 8),&local_3c,0);
            if (-1 < sVar4) {
              FUN_00026bb0(&local_3c);
              if (((local_3c.msg_controllen < 0xc) || (local_3c.msg_control == (undefined1 *)0x0))
                 || (*(int *)((int)local_3c.msg_control + 8) != 2)) {
                iVar2 = FUN_00022a68();
                if (2 < iVar2) {
                  iVar6 = DAT_0001c3dc + 0x1c346;
                  iVar2 = DAT_0001c3e0 + 0x1c34c;
                  iVar7 = DAT_0001c3e4 + 0x1c398;
                  uVar8 = 0x198;
                  goto LAB_0001c2aa;
                }
                break;
              }
              iVar2 = *(int *)((int)local_3c.msg_control + 0x10);
              if (iVar2 == 0) {
                iVar2 = puVar1[6];
                if (iVar2 == DAT_0001c3b4) {
                  return puVar1;
                }
                iVar6 = FUN_00022a68();
                if (iVar6 < 3) break;
                iVar7 = DAT_0001c3f4 + 0x1c3a0;
                iVar6 = DAT_0001c3f8 + 0x1c3a6;
                iVar5 = (int)&DAT_0001c3f4 + DAT_0001c3fc;
                uVar8 = 0x1a2;
              }
              else {
                iVar6 = FUN_00022a68();
                if (iVar6 < 3) break;
                iVar7 = DAT_0001c3e8 + 0x1c36a;
                iVar6 = DAT_0001c3ec + 0x1c370;
                iVar5 = DAT_0001c3f0 + 0x1c3be;
                uVar8 = 0x19d;
              }
              FUN_00022900(3,0,iVar6,uVar8,iVar5,iVar7,iVar2);
              break;
            }
            iVar2 = FUN_00022a68();
            if (iVar2 < 3) break;
            piVar3 = __errno_location();
            iVar6 = DAT_0001c3d0 + 0x1c310;
            iVar2 = DAT_0001c3d4 + 0x1c316;
            iVar7 = DAT_0001c3d8 + 0x1c362;
            uVar8 = 0x18e;
          }
          else {
            iVar2 = FUN_00022a68();
            if (iVar2 < 3) break;
            piVar3 = __errno_location();
            iVar6 = DAT_0001c3c4 + 0x1c2ca;
            iVar2 = DAT_0001c3c8 + 0x1c2d0;
            iVar7 = DAT_0001c3cc + 0x1c31c;
            uVar8 = 0x181;
          }
          iVar5 = *piVar3;
        }
        FUN_00022900(3,iVar5,iVar2,uVar8,iVar7,iVar6);
        break;
      }
      piVar3 = __errno_location();
    } while (*piVar3 == 4);
    FUN_0001c1f2(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0001c400 @ 0001c400 size=14 ===== */

undefined4 FUN_0001c400(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c40e @ 0001c40e size=14 ===== */

undefined4 FUN_0001c40e(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c41c @ 0001c41c size=14 ===== */

undefined4 FUN_0001c41c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c42a @ 0001c42a size=14 ===== */

undefined4 FUN_0001c42a(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 4) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c438 @ 0001c438 size=12 ===== */

int FUN_0001c438(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 5) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ===== FUN_0001c444 @ 0001c444 size=14 ===== */

undefined4 FUN_0001c444(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 6) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c452 @ 0001c452 size=14 ===== */

undefined4 FUN_0001c452(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 7) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c460 @ 0001c460 size=14 ===== */

undefined4 FUN_0001c460(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 8) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c470 @ 0001c470 size=44 ===== */

void FUN_0001c470(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(DAT_0001c49c + 0x1c478) == '\0') {
    iVar1 = 0;
    piVar2 = (int *)(DAT_0001c4a0 + 0x1c482);
    do {
      if (*(code **)(*piVar2 + 0xc) != (code *)0x0) {
        (**(code **)(*piVar2 + 0xc))(param_1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 9);
    *(undefined1 *)(DAT_0001c4a4 + 0x1c49a) = 1;
  }
  return;
}



/* ===== FUN_0001c4a8 @ 0001c4a8 size=46 ===== */

void FUN_0001c4a8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(DAT_0001c4d8 + 0x1c4b0) != '\0') {
    iVar1 = 0;
    piVar2 = (int *)(DAT_0001c4dc + 0x1c4bc);
    do {
      if (*(code **)(*piVar2 + 0x10) != (code *)0x0) {
        (**(code **)(*piVar2 + 0x10))(param_1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 9);
    *(undefined1 *)(DAT_0001c4e0 + 0x1c4d4) = 0;
  }
  return;
}



/* ===== FUN_0001c4e4 @ 0001c4e4 size=38 ===== */

int FUN_0001c4e4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(DAT_0001c50c + 0x1c4f0);
  while( true ) {
    if ((*(code **)(*piVar3 + 0x14) != (code *)0x0) &&
       (iVar1 = (**(code **)(*piVar3 + 0x14))(param_1), iVar1 != 0)) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (iVar2 == 9) {
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0001c54c @ 0001c54c size=12 ===== */

undefined4 FUN_0001c54c(int param_1)

{
  return **(undefined4 **)(DAT_0001c558 + 0x1c552 + param_1 * 4);
}



/* ===== FUN_0001c55c @ 0001c55c size=12 ===== */

undefined1 FUN_0001c55c(int param_1)

{
  return *(undefined1 *)(*(int *)(DAT_0001c568 + 0x1c562 + param_1 * 4) + 0x18);
}



/* ===== FUN_0001c56c @ 0001c56c size=68 ===== */

int FUN_0001c56c(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char acStack_410 [1024];
  
  FUN_0002448c(acStack_410,0x400,param_1);
  pcVar1 = strchr(acStack_410,0x20);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  iVar3 = 0;
  puVar4 = (undefined4 *)(DAT_0001c5b0 + 0x1c596);
  do {
    iVar2 = strcmp(*(char **)*puVar4,acStack_410);
    if (iVar2 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 9);
  return 9;
}



/* ===== FUN_0001c5b4 @ 0001c5b4 size=86 ===== */

void FUN_0001c5b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_624;
  undefined1 auStack_620 [512];
  undefined1 auStack_420 [1028];
  
  **(undefined4 **)(DAT_0001c60c + 0x1c5c8 + DAT_0001c610) = 0;
  FUN_0002448c(auStack_420,0x400);
  uVar1 = FUN_00027228(param_1);
  FUN_00016000(uVar1,auStack_420,&local_624,auStack_620);
  (**(code **)(*(int *)(DAT_0001c614 + 0x1c5f8 + param_2 * 4) + 4))
            (param_1,local_624,auStack_620,param_4);
  return;
}



/* ===== FUN_0001c618 @ 0001c618 size=34 ===== */

undefined4 FUN_0001c618(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00027ed4(param_1,param_3,param_4);
  if (param_2 != 0) {
    printf((char *)(DAT_0001c63c + 0x1c634),param_3,param_4);
  }
  return 0;
}



/* ===== FUN_0001c640 @ 0001c640 size=140 ===== */

undefined4 FUN_0001c640(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1020 [8];
  undefined1 auStack_1018 [4092];
  
  memset(auStack_1020,0,0x1000);
  if ((param_2 == 3) &&
     (iVar1 = strcmp(*(char **)(param_3 + 4),(char *)(DAT_0001c6d4 + 0x1c66c)), iVar1 == 0)) {
    iVar1 = open64((char *)(DAT_0001c6d8 + 0x1c67a),DAT_0001c6cc);
    if (-1 < iVar1) {
      FUN_0002448c(auStack_1018,0xff8,*(undefined4 *)(param_3 + 8));
      iVar2 = ioctl(iVar1,DAT_0001c6d0,auStack_1020);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          iVar2 = DAT_0001c6e4 + 0x1c6c4;
        }
        else {
          iVar2 = DAT_0001c6dc + 0x1c6a2;
        }
        FUN_0001c618(param_1,param_4,DAT_0001c6e0 + 0x1c6aa,iVar2);
        uVar3 = 0;
        goto LAB_0001c6ac;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  uVar3 = 1;
LAB_0001c6ac:
  FUN_00024ccc(iVar1);
  return uVar3;
}



/* ===== FUN_0001c6f8 @ 0001c6f8 size=16 ===== */

void FUN_0001c6f8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0001c708 + 0x1c700);
  uVar1 = FUN_00029cd0(*puVar2);
  *puVar2 = uVar1;
  return;
}



/* ===== FUN_0001c70c @ 0001c70c size=30 ===== */

undefined4 FUN_0001c70c(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0001c72c + 0x1c714);
  if (*piVar2 == 0) {
    iVar1 = FUN_00029d04();
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
  }
  return 0;
}



/* ===== FUN_0001c730 @ 0001c730 size=156 ===== */

int FUN_0001c730(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,undefined1 param_5)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *__name;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(DAT_0001c7cc + 0x1c744);
  iVar5 = *piVar6;
  if (iVar5 == 0) {
    iVar5 = -2;
  }
  else {
    if (param_2 == 0) {
      iVar1 = FUN_00029fd0(iVar5,param_3,0,iVar5,param_4);
    }
    else {
      __ptr = (void *)FUN_00025d30(param_2,param_3,0);
      if (__ptr == (void *)0x0) {
        return -0xc;
      }
      iVar1 = FUN_00029fd0(*piVar6,__ptr,0);
      free(__ptr);
    }
    iVar5 = 0;
    for (; iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      if (param_4 == (char *)0x0) {
LAB_0001c77a:
        uVar2 = FUN_0002a278(iVar1);
        uVar3 = FUN_0002a27e(iVar1);
        iVar4 = FUN_0001c618(param_1,param_5,uVar2,uVar3);
        if (iVar4 < 0) {
          return -0xc;
        }
        iVar5 = iVar5 + 1;
      }
      else {
        __name = (char *)FUN_0002a278(iVar1);
        iVar4 = fnmatch(param_4,__name,2);
        if (iVar4 == 0) goto LAB_0001c77a;
      }
    }
  }
  return iVar5;
}



/* ===== FUN_0001c7d0 @ 0001c7d0 size=416 ===== */

undefined4 FUN_0001c7d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  
  iVar8 = DAT_0001c970 + 0x1c7e4;
  if (*(int *)(DAT_0001c974 + 0x1c7e8) != 0) {
    uVar7 = 0;
    iVar9 = 0;
    iVar11 = DAT_0001c978 + 0x1c7fc;
    local_48 = (char *)0x0;
    iVar10 = DAT_0001c97c + 0x1c800;
    local_4c = 0;
    while (iVar1 = getopt_long(param_2,param_3,iVar10,iVar11,0), iVar1 != -1) {
      if (iVar1 == 0x66) {
        local_4c = **(undefined4 **)(iVar8 + DAT_0001c980);
      }
      else if (iVar1 < 0x67) {
        if (iVar1 == 100) {
          iVar9 = **(int **)(iVar8 + DAT_0001c980);
        }
      }
      else if (iVar1 == 0x70) {
        uVar7 = **(undefined4 **)(iVar8 + DAT_0001c980);
      }
      else if (iVar1 == 0x73) {
        local_48 = (char *)**(undefined4 **)(iVar8 + DAT_0001c980);
      }
    }
    iVar8 = *(int *)(param_3 + **(int **)(iVar8 + DAT_0001c984) * 4);
    if (iVar8 != 0) {
      iVar8 = FUN_0001c730(param_1,uVar7,iVar8,local_4c,param_4);
      if (0 < iVar8) {
        return 0;
      }
      return 1;
    }
    iVar8 = param_1;
    if (iVar9 != 0) {
      uVar2 = FUN_00027228(param_1);
      iVar8 = FUN_00028358(uVar2,iVar9);
      if (iVar8 == 0) {
        return 1;
      }
    }
    iVar9 = 0;
    iVar10 = DAT_0001c994 + 0x1c966;
    iVar11 = DAT_0001c998 + 0x1c96c;
    __s2 = (char *)(DAT_0001c99c + 0x1c96e);
    while ((iVar8 != 0 && (iVar9 == 0))) {
      pcVar3 = (char *)FUN_00027d5c(iVar8);
      if ((pcVar3 == (char *)0x0) ||
         ((local_48 != (char *)0x0 && (iVar9 = strcmp(pcVar3,local_48), iVar9 != 0)))) {
LAB_0001c896:
        iVar9 = 0;
      }
      else {
        pcVar4 = (char *)FUN_000289f0(iVar8,iVar10);
        iVar9 = strcmp(pcVar3,__s2);
        if (iVar9 == 0) {
          uVar2 = FUN_00027cb4(iVar8);
          iVar9 = FUN_00024ad4(uVar2,iVar11);
          if (iVar9 == 0) goto LAB_0001c94e;
          if (pcVar4 != (char *)0x0) goto LAB_0001c936;
          pcVar3 = (char *)FUN_000273b4(iVar8,DAT_0001c988 + 0x1c8ee);
          if ((((pcVar3 != (char *)0x0) &&
               (pcVar4 = (char *)FUN_000273b4(iVar8,DAT_0001c98c + 0x1c8fe), pcVar4 != (char *)0x0))
              && (lVar5 = strtol(pcVar3,(char **)0x0,0x10), 0 < lVar5)) &&
             (lVar6 = strtol(pcVar4,(char **)0x0,0x10), 0 < lVar6)) {
            pcVar4 = acStack_38;
            snprintf(pcVar4,0x10,(char *)(DAT_0001c990 + 0x1c930),lVar5,lVar6);
            goto LAB_0001c936;
          }
        }
        else {
LAB_0001c94e:
          if (pcVar4 == (char *)0x0) goto LAB_0001c896;
          iVar9 = 0;
LAB_0001c936:
          iVar1 = FUN_0001c730(param_1,uVar7,pcVar4,local_4c,param_4);
          if (0 < iVar1) {
            return 0;
          }
        }
      }
      iVar8 = FUN_000284c2(iVar8);
    }
  }
  return 1;
}



/* ===== FUN_0001c9a0 @ 0001c9a0 size=408 ===== */

void FUN_0001c9a0(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4,char param_5)

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
  
  iVar1 = FUN_000273b4();
  if (iVar1 == 0) {
    iVar1 = DAT_0001cb38 + 0x1c9c8;
  }
  snprintf(acStack_1028,0x1000,(char *)(DAT_0001cb3c + 0x1c9d2),iVar1);
  iVar1 = FUN_00022a68();
  if (6 < iVar1) {
    FUN_00022900(7,0,DAT_0001cb44 + 0x1c9f0,0x69,DAT_0001cb48 + 0x1c9f6,DAT_0001cb40 + 0x1c9ea,
                 param_2,acStack_1028);
  }
  iVar9 = DAT_0001cb50;
  iVar1 = DAT_0001cb4c;
  uVar7 = param_4 >> 2;
  memset(param_3,0,param_4);
  uVar8 = 0;
  iVar5 = DAT_0001cb54 + 0x1ca1c;
  while (pcVar2 = strrchr(acStack_1028,0x20), pcVar2 != (char *)0x0) {
    uVar3 = strtoul(pcVar2 + 1,(char **)0x0,0x10);
    if (uVar8 < uVar7) {
      *(ulong *)((int)param_3 + uVar8 * 4) = uVar3;
    }
    else {
      iVar4 = FUN_00022a68();
      if (6 < iVar4) {
        FUN_00022900(7,0,iVar1 + 0x1ca14,0x72,iVar9 + 0x1ca18,iVar5,param_2,uVar3);
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
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      FUN_00022900(7,0,DAT_0001cb6c + 0x1caea,0x7a,DAT_0001cb70 + 0x1caf0,DAT_0001cb68 + 0x1cae4,
                   param_2,uVar3);
    }
  }
  if (param_5 != '\0') {
    snprintf(acStack_1028,0x1000,(char *)(DAT_0001cb58 + 0x1ca4e),8);
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      FUN_00022900(7,0,DAT_0001cb60 + 0x1ca6a,0x80,DAT_0001cb64 + 0x1ca70,DAT_0001cb5c + 0x1ca64,
                   param_2);
    }
    piVar6 = (int *)((int)param_3 + uVar7 * 4);
    while (piVar6 = piVar6 + -1, *piVar6 == 0) {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
    }
    iVar1 = DAT_0001cb74 + 0x1cb36;
    iVar9 = (int)&DAT_0001cb38 + DAT_0001cb78;
    for (uVar8 = 0; uVar7 != uVar8; uVar8 = uVar8 + 1) {
      iVar5 = FUN_00022a68();
      if (6 < iVar5) {
        FUN_00022900(7,0,iVar1,0x87,iVar9,acStack_1028,uVar8 << 5,
                     *(undefined4 *)((int)param_3 + uVar8 * 4));
      }
    }
  }
  return;
}



/* ===== FUN_0001cb7c @ 0001cb7c size=1480 ===== */

undefined4 FUN_0001cb7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar7 = DAT_0001d14c + 0x1cb92;
  iVar10 = DAT_0001d150 + 0x1cb96;
  for (iVar16 = param_1; iVar16 != 0; iVar16 = FUN_000284ea(iVar16,iVar10,0)) {
    iVar1 = FUN_000273b4(iVar16,iVar7);
    if (iVar1 != 0) {
      FUN_0001c618(param_1,param_4,DAT_0001d158 + 0x1cbba,DAT_0001d154 + 0x1cbb8);
      FUN_0001c9a0(iVar16,iVar7,&local_e4,4,param_4);
      FUN_0001c9a0(iVar16,DAT_0001d15c + 0x1cbda,&local_d8,8,param_4);
      FUN_0001c9a0(iVar16,DAT_0001d160 + 0x1cbee,&local_e0,4,param_4);
      FUN_0001c9a0(iVar16,DAT_0001d164 + 0x1cc02,local_88,0x60,param_4);
      FUN_0001c9a0(iVar16,DAT_0001d168 + 0x1cc1a,&local_dc,4,param_4);
      uVar15 = local_d8 & 3;
      if (uVar15 == 3) {
        uVar5 = (local_d8 & 7) >> 2;
      }
      else {
        uVar5 = 0;
      }
      if (((-1 < local_e4 << 0x1e) && (uVar5 != 0)) || ((int)(local_dc << 0x19) < 0)) {
        uVar15 = 1;
        FUN_0001c618(param_1,param_4,DAT_0001d170 + 0x1cc62,DAT_0001d16c + 0x1cc5e);
        goto LAB_0001cc64;
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
      goto LAB_0001ccd2;
    }
  }
  goto LAB_0001cf84;
  while (uVar4 == 0) {
LAB_0001ccd2:
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
        if (bVar18) goto LAB_0001ce00;
        goto LAB_0001ce18;
      }
      if (uVar13 != 0) {
        uVar5 = 0;
        goto LAB_0001cdec;
      }
      uVar8 = 0;
LAB_0001ceca:
      uVar15 = 1;
      uVar4 = uVar13;
      goto LAB_0001ce2e;
    }
    if (uVar13 == 0) {
      uVar5 = 1;
LAB_0001cdec:
      uVar11 = uVar6;
      uVar8 = uVar6;
      uVar17 = uVar6;
      if (uVar6 != 0) {
        uVar4 = 0;
        uVar8 = uVar4;
        uVar17 = uVar4;
        uVar15 = uVar13;
        goto LAB_0001ce36;
      }
      goto LAB_0001ce62;
    }
    uVar8 = 0;
LAB_0001d126:
    if (uVar6 != 0) {
      uVar17 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar15 = uVar17;
      goto LAB_0001ce36;
    }
    uVar5 = 1;
    uVar17 = uVar6;
    uVar13 = uVar6;
  }
  else {
    if (uVar13 != 0) {
      if (uVar11 != 0) goto LAB_0001d126;
      uVar13 = 0;
      uVar17 = 0;
LAB_0001ce00:
      if ((uVar5 != 0) && ((local_dc & 1) == 0)) goto LAB_0001ceca;
      if (((local_dc | local_60 >> 10) & 1) != 0) {
        uVar17 = 1;
      }
    }
LAB_0001ce18:
    if (((uVar8 == 0) && (uVar4 != 0)) &&
       ((local_e4 << 0x1d < 0 && (local_e0 & 3) == 3 || (uVar15 != 3)))) {
      if (uVar6 != 0) {
        uVar15 = 0;
        goto LAB_0001ce32;
      }
      uVar5 = 0;
      uVar15 = uVar6;
LAB_0001ce4c:
      FUN_0001c618(param_1,param_4,DAT_0001d18c + 0x1ce5c,DAT_0001d188 + 0x1ce58);
      uVar11 = 1;
      uVar8 = uVar6;
      uVar13 = uVar15;
    }
    else {
      uVar15 = 0;
      uVar4 = uVar13;
LAB_0001ce2e:
      if (uVar6 == 0) {
        uVar5 = 0;
        uVar6 = uVar8;
      }
      else {
LAB_0001ce32:
        uVar5 = 0;
LAB_0001ce36:
        FUN_0001c618(param_1,param_4,DAT_0001d184 + 0x1ce44,DAT_0001d180 + 0x1ce42);
        uVar6 = uVar8;
      }
      uVar11 = 0;
      uVar8 = uVar6;
      uVar13 = uVar15;
      if (uVar4 != 0) goto LAB_0001ce4c;
    }
LAB_0001ce62:
    if (uVar13 != 0) {
      FUN_0001c618(param_1,param_4,DAT_0001d194 + 0x1ce72,DAT_0001d190 + 0x1ce70);
    }
    uVar6 = uVar11;
    if (uVar17 != 0) {
      FUN_0001c618(param_1,param_4,DAT_0001d19c + 0x1ce84,DAT_0001d198 + 0x1ce82);
    }
  }
  if (uVar8 != 0) {
    FUN_0001c618(param_1,param_4,DAT_0001d1a4 + 0x1ce96,DAT_0001d1a0 + 0x1ce94);
  }
  if (uVar5 != 0) {
    FUN_0001c618(param_1,param_4,DAT_0001d1ac + 0x1ceac,DAT_0001d1a8 + 0x1ceaa);
  }
  uVar15 = (uVar6 | uVar8 | uVar12 | uVar5 | uVar13 | uVar17) & 0xff;
LAB_0001cc64:
  iVar16 = -((local_e4 << 0x1e) >> 0x1f);
  if (iVar16 == 0) {
    iVar16 = FUN_00022a68();
    if (6 < iVar16) {
      FUN_00022900(7,0,DAT_0001d178 + 0x1cc92,0x113,DAT_0001d17c + 0x1cca1,DAT_0001d174 + 0x1cc8a);
    }
    if (uVar15 == 0) {
LAB_0001d0e0:
      if ((local_e4 << 0x1d < 0) && ((local_e0 & 0x140) != 0)) {
        iVar7 = DAT_0001d1f4 + 0x1d0fa;
        iVar16 = DAT_0001d1f8 + 0x1d0fc;
        goto LAB_0001cf66;
      }
    }
  }
  else {
    uVar5 = 0;
    iVar10 = 0;
    iVar1 = DAT_0001d1b0 + 0x1cf07;
    iVar7 = DAT_0001d1b4 + 0x1cf00;
    puVar14 = local_88;
    do {
      uVar5 = uVar5 | *puVar14;
      iVar2 = FUN_00022a68();
      if (6 < iVar2) {
        FUN_00022900(7,0,iVar7,0x11b,iVar1,DAT_0001d1b8 + 0x1cf2a,iVar10 << 5,uVar5 != 0);
      }
      iVar10 = iVar10 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar10 != 8);
    if (uVar5 == 0) {
      iVar10 = DAT_0001d1e8 + 0x1d066;
      puVar14 = (uint *)(DAT_0001d1e4 + 0x1d07c);
      iVar1 = DAT_0001d1ec + 0x1d07b;
      uVar5 = 0;
      iVar7 = 0;
      do {
        for (uVar6 = *puVar14; uVar12 = uVar5, uVar6 < puVar14[1]; uVar6 = uVar6 + 1) {
          uVar12 = local_88[uVar6 >> 5] >> (uVar6 & 0x1f) & 1;
          if (uVar12 != 0) {
            iVar2 = FUN_00022a68();
            if (6 < iVar2) {
              FUN_00022900(7,0,iVar10,0x123,iVar1,DAT_0001d1f0 + 0x1d0c0,uVar6);
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
      if (uVar12 != 0) goto LAB_0001cf40;
    }
    else {
LAB_0001cf40:
      bVar18 = true;
      FUN_0001c618(param_1,param_4,DAT_0001d1c0 + 0x1cf50,DAT_0001d1bc + 0x1cf4c);
    }
    if ((local_88[0] & 0xfffffffe) == 0xfffffffe) {
      iVar7 = DAT_0001d1c4 + 0x1cf66;
      iVar16 = DAT_0001d1c8 + 0x1cf68;
LAB_0001cf66:
      FUN_0001c618(param_1,param_4,iVar16,iVar7);
    }
    else if ((uVar15 == 0) && (!bVar18)) goto LAB_0001d0e0;
  }
  if (local_e4 << 0x1a < 0) {
    FUN_0001c618(param_1,param_4,DAT_0001d1d0 + 0x1cf82,DAT_0001d1cc + 0x1cf80);
  }
LAB_0001cf84:
  __file = (char *)FUN_00027d06(param_1);
  __s1 = (char *)FUN_00027390(param_1);
  if ((((__file != (char *)0x0) && (__s1 != (char *)0x0)) &&
      (iVar16 = strncmp(__s1,(char *)(DAT_0001d1d4 + 0x1cfa4),5), iVar16 == 0)) &&
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
    if (((-1 < iVar16) && (iVar7 = ioctl(iVar16,DAT_0001d144,&local_b8), -1 < iVar7)) &&
       ((iVar10 = ioctl(iVar16,DAT_0001d148,&local_a0), iVar7 = DAT_0001d1d8, -1 < iVar10 &&
        ((0 < iStack_a4 && (0 < iStack_8c)))))) {
      uVar3 = FUN_0002beb0(iStack_b0 - iStack_b4);
      snprintf(acStack_d0,0xc,(char *)(iVar7 + 0x1d00c),uVar3);
      uVar3 = FUN_0002beb0(iStack_98 - iStack_9c,iStack_8c);
      snprintf(acStack_c4,0xc,(char *)(iVar7 + 0x1d00c),uVar3);
      FUN_0001c618(param_1,param_4,DAT_0001d1dc + 0x1d03a,acStack_d0);
      FUN_0001c618(param_1,param_4,DAT_0001d1e0 + 0x1d048,acStack_c4);
    }
    FUN_00024ccc(iVar16);
  }
  return 0;
}



/* ===== FUN_0001d1fc @ 0001d1fc size=114 ===== */

byte FUN_0001d1fc(void)

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
  
  pcVar2 = (char *)FUN_000272d4();
  iVar4 = 0;
  if (pcVar2 != (char *)0x0) {
    sVar3 = strlen(pcVar2);
    iVar4 = sVar3 + 7;
  }
  iVar4 = -(iVar4 + 8U & 0xfffffff8);
  pcVar5 = acStack_50 + iVar4;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = stpcpy(acStack_50 + iVar4,pcVar2);
    iVar1 = DAT_0001d270;
    *(undefined4 *)pcVar2 = *(undefined4 *)(DAT_0001d270 + 0x1d22c);
    pcVar5 = pcVar2 + 7;
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(iVar1 + 0x1d230);
  }
  *pcVar5 = '\0';
  iVar4 = open64(acStack_50 + iVar4,0x80000);
  if ((iVar4 < 0) || (sVar6 = read(iVar4,acStack_50,0x40), sVar6 != 0x40)) {
    bVar7 = 0;
  }
  else {
    bVar7 = local_42 >> 7;
  }
  FUN_00024ccc(iVar4);
  return bVar7;
}



/* ===== FUN_0001d274 @ 0001d274 size=2032 ===== */

undefined4 FUN_0001d274(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001da64 + 0x1d296);
  if (pcVar1 == (char *)0x0) {
    return 1;
  }
  uVar2 = strtoul(pcVar1,(char **)0x0,0);
  if (uVar2 == 1) {
    local_2d4 = DAT_0001da74 + 0x1d2f4;
  }
  else {
    if (uVar2 != 0x100) {
      return 0;
    }
    local_2d4 = DAT_0001da68 + 0x1d2ba;
  }
  pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001da6c + 0x1d2c4);
  if (pcVar1 == (char *)0x0) {
    return 1;
  }
  pcVar3 = (char *)FUN_000273b4(param_1,DAT_0001da70 + 0x1d2d6);
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  iVar4 = strcmp(pcVar1,pcVar3);
  if (iVar4 != 0) {
    return 0;
  }
  pcVar1 = (char *)FUN_00027cb4(param_1);
  if (pcVar1 != (char *)0x0) {
    iVar4 = strcmp((char *)(DAT_0001da78 + 0x1d308),pcVar1);
    if (iVar4 == 0) {
      local_2d4 = DAT_0001daa8 + 0x1d44a;
    }
    else {
      iVar4 = strcmp((char *)(DAT_0001da7c + 0x1d31a),pcVar1);
      if (iVar4 == 0) {
        local_2d4 = DAT_0001da80 + 0x1d326;
      }
    }
  }
  pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001da84 + 0x1d330);
  if ((pcVar1 == (char *)0x0) || (uVar2 = strtoul(pcVar1,(char **)0x0,0), uVar2 != 0)) {
    if (local_292 != '\0') goto LAB_0001d33e;
  }
  else {
    pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001daac + 0x1d462);
    if (((pcVar1 != (char *)0x0) &&
        (iVar4 = sscanf(pcVar1,(char *)(DAT_0001dab0 + 0x1d494),&local_2ac,&local_2a8,&local_2a4,
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
LAB_0001d33e:
      uVar13 = (uint)local_293;
      snprintf((char *)local_228,0x10,(char *)(DAT_0001da88 + 0x1d350),local_2d4,(uint)local_298,
               (uint)local_297,(uint)local_296,(uint)local_295,(uint)local_294,uVar13);
      FUN_0001c618(param_1,param_4,DAT_0001da8c + 0x1d374,local_228);
      if ((local_292 != '\0') &&
         (iVar4 = memcmp(&local_298,(void *)(DAT_0001da90 + 0x1d388),3), iVar4 != 0)) {
        snprintf((char *)local_128,0x20,(char *)(DAT_0001da94 + 0x1d39e),(uint)local_298,
                 (uint)local_297,(uint)local_296,(uint)local_295,(uint)local_294,(uint)local_293,
                 uVar13);
        FUN_0001c730(param_1,0,local_128,0,param_4);
      }
    }
  }
  iVar4 = FUN_000284c2(param_1);
  if (iVar4 != 0) {
    uVar5 = FUN_00027d5c();
    iVar6 = FUN_00024ad4(DAT_0001da98 + 0x1d3de,uVar5);
    if (((iVar6 != 0) && (pcVar1 = (char *)FUN_00027390(iVar4), pcVar1 != (char *)0x0)) &&
       (sVar7 = strlen(pcVar1), sVar7 - 8 < 2)) {
      uVar13 = snprintf(acStack_238,0x10,(char *)(DAT_0001da9c + 0x1d408),pcVar1);
      if (uVar13 < 0x10) {
        local_29c = 5;
      }
      else if (local_29c != 5) goto LAB_0001d4e0;
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001daa0 + 0x1d426),local_2d4,acStack_238
                      );
      if (0xf < iVar4) {
        return 0;
      }
      iVar4 = DAT_0001daa4 + 0x1d43a;
      goto LAB_0001d438;
    }
  }
LAB_0001d4e0:
  local_290 = FUN_000284c2(param_1);
  if (local_290 == 0) {
    return 0;
  }
  uVar5 = FUN_00027d5c();
  iVar6 = DAT_0001dab4 + 0x1d4fc;
  iVar4 = FUN_00024ad4(iVar6,uVar5);
  if (iVar4 == 0) {
    local_290 = FUN_000284ea(param_1,iVar6,0);
    if (local_290 == 0) {
      return 0;
    }
  }
  else {
    local_29c = 1;
  }
  pcVar1 = (char *)FUN_000273b4(local_290,DAT_0001dab8 + 0x1d51c);
  if (((pcVar1 != (char *)0x0) ||
      (pcVar1 = (char *)FUN_000273b4(local_290,DAT_0001dabc + 0x1d52a), pcVar1 != (char *)0x0)) &&
     (uVar2 = strtoul(pcVar1,(char **)0x0,0), 0 < (int)uVar2)) {
    pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001dac0 + 0x1d546);
    iVar4 = 0;
    if (pcVar1 != (char *)0x0) {
      iVar4 = strtol(pcVar1,(char **)0x0,10);
    }
    local_128[0] = local_26c;
    iVar6 = FUN_0002442c(local_128,0x10,DAT_0001dac4 + 0x1d568,uVar2);
    if (iVar4 != 0) {
      iVar6 = FUN_0002442c(local_128,iVar6,DAT_0001dac8 + 0x1d57e,iVar4);
    }
    if (iVar6 == 0) {
      local_26c[0] = '\0';
    }
    local_25c = FUN_000273b4(local_290,DAT_0001dacc + 0x1d590);
  }
  uVar5 = FUN_00027228(local_290);
  pcVar1 = (char *)FUN_00027390(local_290);
  iVar4 = sscanf(pcVar1,(char *)(DAT_0001dad0 + 0x1d5c0),&local_2b8,&local_2b4,&local_2b0,&local_2ac
                );
  if (iVar4 == 4) {
    pcVar1 = (char *)FUN_000273b4(param_1,DAT_0001dad4 + 0x1d5d0);
    iVar4 = 0;
    if (pcVar1 != (char *)0x0) {
      iVar4 = strtol(pcVar1,(char **)0x0,10);
    }
    local_2a8 = local_27c;
    if (local_2b8 == 0) {
      uVar8 = 0x10;
    }
    else {
      uVar8 = FUN_0002442c(&local_2a8,0x10,DAT_0001dad8 + 0x1d5f8);
    }
    iVar6 = FUN_0002442c(&local_2a8,uVar8,DAT_0001dadc + 0x1d60c,local_2b4,local_2b0);
    uVar8 = local_2b0;
    if ((local_2ac != 0) || (iVar11 = FUN_0001d1fc(local_290), uVar8 = local_2b0, iVar11 != 0)) {
      iVar6 = FUN_0002442c(&local_2a8,iVar6,DAT_0001dae0 + 0x1d62e,local_2ac,uVar8);
      local_2b0 = uVar8;
    }
    if (iVar4 != 0) {
      iVar6 = FUN_0002442c(&local_2a8,iVar6,DAT_0001dae4 + 0x1d646,iVar4,local_2b0);
    }
    if (iVar6 == 0) {
      local_27c[0] = '\0';
    }
    iVar6 = FUN_00028164(uVar5,DAT_0001daec + 0x1d664,DAT_0001dae8 + 0x1d662);
    if (iVar6 == 0) {
LAB_0001d66c:
      __dirp = (DIR *)0x0;
    }
    else {
      uVar5 = FUN_000272d4();
      snprintf((char *)local_228,0x100,(char *)(DAT_0001db10 + 0x1d770),uVar5);
      __dirp = opendir((char *)local_228);
      if (__dirp == (DIR *)0x0) goto LAB_0001d66c;
      pdVar9 = readdir64(__dirp);
      pcVar1 = (char *)(DAT_0001db14 + 0x1d792);
      while (pdVar9 != (dirent64 *)0x0) {
        if (pdVar9->d_name[0] != '.') {
          lVar10 = strtol(pdVar9->d_name,&local_2a4,10);
          if ((*local_2a4 == '\0') && (0 < lVar10)) {
            snprintf((char *)local_128,0x100,pcVar1,local_228,pdVar9->d_name);
            iVar11 = FUN_000206d4(local_128,&local_2a0);
            pcVar3 = local_2a0;
            if (-1 < iVar11) {
              __s2 = (char *)FUN_00027390(local_290);
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
                  uVar5 = FUN_0002442c(&local_2a8,0x10,DAT_0001db24 + 0x1d880);
                }
                iVar11 = FUN_0002442c(&local_2a8,uVar5,DAT_0001db18 + 0x1d834,lVar10);
                if ((local_2ac != 0) || (iVar12 = FUN_0001d1fc(local_290), iVar12 != 0)) {
                  iVar11 = FUN_0002442c(&local_2a8,iVar11,DAT_0001db1c + 0x1d84e,local_2ac);
                }
                if (iVar4 != 0) {
                  iVar11 = FUN_0002442c(&local_2a8,iVar11,DAT_0001db20 + 0x1d864,iVar4);
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
    FUN_0002723c(iVar6);
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
  }
  if (local_29c == 1) {
    if (local_26c[0] != '\0') {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001daf0 + 0x1d69c),local_2d4,local_26c);
      if (iVar4 < 0x10) {
        FUN_0001c618(param_1,param_4,DAT_0001daf4 + 0x1d6b4,local_128);
      }
    }
    if (local_25c != 0) {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001daf8 + 0x1d6ca),local_2d4,local_25c);
      if (iVar4 < 0x10) {
        FUN_0001c618(param_1,param_4,DAT_0001dafc + 0x1d6e0,local_128);
      }
    }
    if (local_27c[0] != '\0') {
      iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db00 + 0x1d6f8),local_2d4,local_27c);
      if (iVar4 < 0x10) {
        FUN_0001c618(param_1,param_4,DAT_0001db04 + 0x1d710,local_128);
      }
    }
    if (local_28c[0] == '\0') {
      return 0;
    }
    iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db08 + 0x1d728),local_2d4,local_28c);
    if (0xf < iVar4) {
      return 0;
    }
    iVar4 = DAT_0001db0c + 0x1d73c;
  }
  else {
    iVar4 = FUN_000284ea(param_1,DAT_0001db2c + 0x1d89e,DAT_0001db28 + 0x1d89c);
    if (iVar4 != 0) {
      uVar5 = FUN_00027390();
      FUN_0002448c(local_128,0x100,uVar5);
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
            iVar6 = FUN_00024460(local_228,0x10,DAT_0001db30 + 0x1d920,pcVar1,0);
            iVar4 = strcmp(pcVar3,(char *)(DAT_0001db34 + 0x1d92e));
            if (iVar4 != 0) {
              iVar6 = FUN_00024460(local_228,0x10,DAT_0001db38 + 0x1d944,pcVar3,0);
            }
            iVar4 = strcmp(pcVar14,(char *)(DAT_0001db3c + 0x1d952));
            if (iVar4 != 0) {
              iVar6 = FUN_00024460(local_228,0x10,DAT_0001db40 + 0x1d962,pcVar14,0);
            }
            if (iVar6 != 0) {
              local_29c = 2;
              if ((local_27c[0] != '\0') &&
                 (iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db44 + 0x1d988),local_2d4
                                   ,local_27c,acStack_258), iVar4 < 0x10)) {
                FUN_0001c618(param_1,param_4,DAT_0001db48 + 0x1d9a0,local_128);
              }
              if (local_28c[0] == '\0') {
                return 0;
              }
              iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db4c + 0x1d9b4),local_2d4,
                               local_28c,acStack_258);
              if (0xf < iVar4) {
                return 0;
              }
              iVar4 = DAT_0001db50 + 0x1d9c8;
              goto LAB_0001d438;
            }
          }
        }
      }
    }
    iVar4 = FUN_000284ea(param_1,DAT_0001db54 + 0x1d9d8,0);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar1 = (char *)FUN_00027390();
    iVar4 = sscanf(pcVar1,(char *)(DAT_0001db58 + 0x1d9f4),local_128);
    if (iVar4 != 1) {
      return 0;
    }
    if (local_128[0] != (char *)0x0) {
      snprintf(acStack_248,0x10,(char *)(DAT_0001db5c + 0x1da08));
    }
    local_29c = 3;
    if ((local_27c[0] != '\0') &&
       (iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db60 + 0x1da20),local_2d4,local_27c
                         ,acStack_248), iVar4 < 0x10)) {
      FUN_0001c618(param_1,param_4,DAT_0001db64 + 0x1da3a,local_128);
    }
    if (local_28c[0] == '\0') {
      return 0;
    }
    iVar4 = snprintf((char *)local_128,0x10,(char *)(DAT_0001db68 + 0x1da4e),local_2d4,local_28c,
                     acStack_248);
    if (0xf < iVar4) {
      return 0;
    }
    iVar4 = (int)&DAT_0001da64 + DAT_0001db6c;
  }
LAB_0001d438:
  FUN_0001c618(param_1,param_4,iVar4,local_128);
  return 0;
}



/* ===== FUN_0001db70 @ 0001db70 size=46 ===== */

int FUN_0001db70(int param_1,char *param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  while (((iVar2 = param_1, iVar2 != 0 && (__s1 = (char *)FUN_00027d5c(iVar2), __s1 != (char *)0x0))
         && (iVar1 = strcmp(__s1,param_2), iVar1 == 0))) {
    param_1 = FUN_000284c2(iVar2);
    iVar3 = iVar2;
  }
  return iVar3;
}



/* ===== FUN_0001db9e @ 0001db9e size=34 ===== */

char * FUN_0001db9e(char *param_1,char *param_2)

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



/* ===== FUN_0001dbc0 @ 0001dbc0 size=78 ===== */

int FUN_0001dbc0(int *param_1,char *param_2,char *param_3,char *param_4)

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
      iVar1 = asprintf(&local_1c,(char *)(DAT_0001dc10 + 0x1dbe6),local_20,*param_1,piVar2,__arg);
      free(local_20);
      if (-1 < iVar1) {
        free((void *)*param_1);
        *param_1 = (int)local_1c;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_0001dc14 @ 0001dc14 size=50 ===== */

void FUN_0001dc14(undefined4 param_1,undefined4 param_2)

{
  char *__nptr;
  ulong uVar1;
  
  __nptr = (char *)FUN_00027396();
  uVar1 = strtoul(__nptr,(char **)0x0,10);
  if (uVar1 < 0x100) {
    FUN_0001dbc0(param_2,DAT_0001dc48 + 0x1dc36,uVar1);
    return;
  }
  FUN_0001dbc0(param_2,DAT_0001dc4c + 0x1dc42,uVar1 & 0xffff,uVar1 >> 0x10);
  return;
}



/* ===== FUN_0001dc50 @ 0001dc50 size=2318 ===== */

undefined4 FUN_0001dc50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar3 = FUN_000284ea(param_1,DAT_0001e560 + 0x1dc66);
  if (iVar3 == 0) {
    pcVar18 = (char *)(DAT_0001e6b0 + 0x1e516);
    iVar4 = DAT_0001e6b4 + 0x1e51c;
    bVar2 = false;
    bVar1 = false;
    for (iVar3 = param_1; iVar3 != 0; iVar3 = FUN_000284c2(iVar3)) {
      pcVar8 = (char *)FUN_00027d5c(iVar3);
      if (pcVar8 != (char *)0x0) {
        iVar5 = strcmp(pcVar8,pcVar18);
        if (iVar5 == 0) {
          if (local_23c != (void *)0x0) goto LAB_0001dd98;
          iVar5 = FUN_00027390(iVar3);
          iVar6 = FUN_0001db9e(iVar5,DAT_0001e58c + 0x1dd72);
          if (iVar6 == 0) {
LAB_0001ddd0:
            iVar6 = FUN_0001db9e(iVar5,DAT_0001e59c + 0x1ddda);
            if (iVar6 != 0) {
              uVar17 = (uint)*(byte *)(iVar5 + 2);
              pcVar8 = strchr((char *)(DAT_0001e5a0 + 0x1ddee),uVar17);
              if (pcVar8 != (char *)0x0) {
                iVar5 = DAT_0001e5a4 + 0x1ddfe;
                goto LAB_0001dd92;
              }
            }
          }
          else {
            uVar17 = (uint)*(byte *)(iVar5 + 3);
            pcVar8 = strchr((char *)(DAT_0001e590 + 0x1dd86),uVar17);
            if (pcVar8 == (char *)0x0) goto LAB_0001ddd0;
            iVar5 = DAT_0001e594 + 0x1dd94;
LAB_0001dd92:
            FUN_0001dbc0(&local_23c,iVar5,uVar17);
          }
        }
        else {
          pcVar22 = (char *)(DAT_0001e5a8 + 0x1de08);
          iVar6 = strcmp(pcVar8,pcVar22);
          iVar5 = iVar3;
          if (iVar6 == 0) {
            pcVar8 = (char *)FUN_00027cb4(iVar3);
            if ((pcVar8 != (char *)0x0) &&
               (iVar6 = strcmp(pcVar8,(char *)(DAT_0001e5ac + 0x1de22)), iVar6 == 0)) {
              pcVar8 = (char *)FUN_000273b4(iVar3,DAT_0001e5b0 + 0x1de30);
              if (pcVar8 != (char *)0x0) {
                iVar5 = FUN_0001db70(iVar3,pcVar22);
                FUN_0001dbc0(&local_23c,DAT_0001e5b4 + 0x1de48,pcVar8);
                goto LAB_0001de4e;
              }
              __haystack = (char *)FUN_000272d4(iVar3);
              pcVar9 = strstr(__haystack,(char *)(DAT_0001e5b8 + 0x1de62));
              if (pcVar9 == (char *)0x0) {
                pcVar8 = strstr(__haystack,(char *)(DAT_0001e5cc + 0x1dee6));
                if (pcVar8 != (char *)0x0) {
                  uVar7 = FUN_00027228(iVar3);
                  local_22c = pcVar9;
                  iVar6 = FUN_000284ea(iVar3,pcVar22,DAT_0001e5d0 + 0x1df04);
                  iVar5 = 0;
                  if ((iVar6 != 0) && (iVar6 = FUN_000284c2(), iVar6 != 0)) {
                    uVar10 = FUN_00027390();
                    iVar23 = DAT_0001e5d4 + 0x1df24;
                    iVar11 = FUN_00028164(uVar7,iVar23,uVar10);
                    if (iVar11 != 0) {
                      iVar5 = FUN_000284c2(iVar6);
                      if (iVar5 == 0) {
                        iVar3 = 0;
                        iVar5 = 0;
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = FUN_00027390();
                        uVar10 = FUN_00028164(uVar7,DAT_0001e5d8 + 0x1df4c,uVar10);
                        pcVar8 = (char *)FUN_000273b4(uVar10,DAT_0001e5dc + 0x1df5a);
                        if (pcVar8 == (char *)0x0) {
LAB_0001e092:
                          iVar3 = 0;
                          iVar5 = iVar3;
                        }
                        else {
                          iVar6 = strcmp(pcVar8,(char *)(DAT_0001e5e0 + 0x1df6e));
                          if (iVar6 == 0) {
                            iVar6 = FUN_000273b4(iVar11,DAT_0001e5f4 + 0x1e012);
                            if (iVar6 != 0) {
                              iVar5 = FUN_000284c2(iVar5);
                              if (iVar5 != 0) {
                                uVar12 = FUN_00027390();
                                iVar5 = FUN_00028164(uVar7,iVar23,uVar12);
                                if (iVar5 == 0) {
                                  iVar23 = 0;
                                }
                                else {
                                  iVar23 = FUN_000273b4(iVar5,DAT_0001e5f8 + 0x1e03e);
                                  if (iVar23 == 0) {
                                    iVar3 = 0;
                                    goto LAB_0001df9a;
                                  }
                                }
                                FUN_0001dc14(iVar3,&local_22c);
                                if (iVar23 == 0) {
                                  FUN_0001dbc0(&local_23c,DAT_0001e600 + 0x1e084,iVar6);
                                }
                                else {
                                  FUN_0001dbc0(&local_23c,DAT_0001e5fc + 0x1e06a,iVar23,iVar6,
                                               local_22c);
                                }
                                if (local_22c != (char *)0x0) {
                                  free(local_22c);
                                }
                                goto LAB_0001df9a;
                              }
                              goto LAB_0001e092;
                            }
LAB_0001df96:
                            iVar3 = 0;
                          }
                          else {
                            uVar7 = FUN_00027228(iVar3);
                            local_228[0] = (char *)0x0;
                            iVar5 = FUN_000284ea(iVar3,DAT_0001e5e8 + 0x1df8e,DAT_0001e5e4 + 0x1df8a
                                                );
                            if ((iVar5 == 0) || (iVar5 = FUN_000284c2(), iVar5 == 0))
                            goto LAB_0001df96;
                            uVar12 = FUN_00027390();
                            iVar5 = FUN_00028164(uVar7,iVar23,uVar12);
                            if (iVar5 == 0) goto LAB_0001df96;
                            iVar6 = FUN_000273b4(iVar5,DAT_0001e5ec + 0x1dfd6);
                            if (iVar6 == 0) {
                              iVar3 = 0;
                            }
                            else {
                              FUN_0001dc14(iVar3,local_228);
                              FUN_0001dbc0(&local_23c,DAT_0001e5f0 + 0x1dff0,iVar6,local_228[0]);
                              if (local_228[0] != (char *)0x0) {
                                free(local_228[0]);
                              }
                            }
                            FUN_0002723c(iVar5);
                          }
                          iVar5 = 0;
                        }
                      }
LAB_0001df9a:
                      FUN_0002723c(iVar11);
                      FUN_0002723c(iVar5);
                      FUN_0002723c(uVar10);
                      iVar5 = iVar3;
                    }
                  }
                  goto LAB_0001de4e;
                }
                pcVar8 = strstr(__haystack,(char *)(DAT_0001e604 + 0x1e0a0));
                iVar6 = DAT_0001e608;
                if (pcVar8 == (char *)0x0) {
                  pcVar8 = strstr(__haystack,(char *)(DAT_0001e628 + 0x1e1a8));
                  if (pcVar8 != (char *)0x0) goto LAB_0001e508;
                  pcVar22 = strstr(__haystack,(char *)(DAT_0001e62c + 0x1e1bc));
                  if (pcVar22 == (char *)0x0) {
                    iVar5 = FUN_000284ea(iVar3,DAT_0001e644 + 0x1e262,DAT_0001e640 + 0x1e260);
                    if (iVar5 != 0) {
                      pcVar8 = (char *)FUN_00027390(iVar3);
                      iVar3 = sscanf(pcVar8,(char *)(DAT_0001e648 + 0x1e28e),&local_238,&local_234,
                                     &local_230,&local_22c);
                      if (iVar3 == 4) {
                        pcVar8 = (char *)FUN_000272d4(iVar5);
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
                                     (iVar3 = FUN_0001db9e(pdVar15->d_name,iVar4), iVar3 != 0)))) &&
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
                                FUN_0001dbc0(&local_23c,DAT_0001e64c + 0x1e2ee,local_238,local_234,
                                             local_230,local_22c);
                              }
                            }
                          }
                          free(pcVar8);
                          goto LAB_0001de50;
                        }
                      }
                    }
                    iVar5 = 0;
                  }
                  else {
                    local_22c = pcVar8;
                    iVar6 = FUN_000284ea(iVar3,DAT_0001e634 + 0x1e1dc,DAT_0001e630 + 0x1e1d6);
                    iVar5 = 0;
                    if (((iVar6 != 0) && (iVar6 = FUN_000284c2(), iVar6 != 0)) &&
                       ((pcVar8 = (char *)FUN_000273b4(iVar6,DAT_0001e638 + 0x1e1ee),
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
                      FUN_0001dc14(iVar3,&local_22c);
                      FUN_0001dbc0(&local_23c,DAT_0001e63c + 0x1e246,local_228,local_22c);
                      free(local_22c);
                      iVar5 = iVar3;
                    }
                  }
                  goto LAB_0001de50;
                }
                uVar7 = FUN_00027228(iVar3);
                local_228[0] = (char *)0x0;
                iVar11 = iVar3;
                do {
                  iVar11 = FUN_000284c2(iVar11);
                  iVar5 = 0;
                  if (iVar11 == 0) goto LAB_0001de4e;
                  uVar10 = FUN_00027390();
                  iVar23 = FUN_0001db9e(uVar10,iVar6 + 0x1e0b6);
                } while (iVar23 == 0);
                uVar10 = FUN_00027390(iVar11);
                iVar6 = FUN_00028164(uVar7,DAT_0001e60c + 0x1e0e6,uVar10);
                if (iVar6 == 0) goto LAB_0001de4e;
                iVar5 = FUN_000273b4(iVar6,DAT_0001e610 + 0x1e0fc);
                if (iVar5 == 0) {
LAB_0001e102:
                  iVar11 = 0;
                  iVar3 = 0;
                }
                else {
                  uVar10 = FUN_00027396(iVar11);
                  iVar11 = asprintf((char **)&local_22c,(char *)(DAT_0001e614 + 0x1e120),uVar10);
                  if (iVar11 < 0) goto LAB_0001e102;
                  iVar11 = FUN_00028164(uVar7,DAT_0001e618 + 0x1e138,local_22c);
                  free(local_22c);
                  if (iVar11 == 0) goto LAB_0001e102;
                  iVar23 = FUN_000273b4(iVar11,DAT_0001e61c + 0x1e152);
                  iVar13 = FUN_000273b4(iVar11,DAT_0001e620 + 0x1e15c);
                  if (iVar23 == 0) {
                    iVar3 = 0;
                  }
                  else if (iVar13 == 0) {
                    iVar3 = 0;
                  }
                  else {
                    FUN_0001dc14(iVar3,local_228);
                    FUN_0001dbc0(&local_23c,DAT_0001e624 + 0x1e186,iVar23,iVar13,iVar5,local_228[0])
                    ;
                    if (local_228[0] != (char *)0x0) {
                      free(local_228[0]);
                    }
                  }
                }
                FUN_0002723c(iVar6);
LAB_0001decc:
                FUN_0002723c(iVar11);
                iVar5 = iVar3;
              }
              else {
                uVar7 = FUN_00027228(iVar3);
                local_228[0] = pcVar8;
                iVar6 = FUN_000284ea(iVar3,pcVar22,DAT_0001e5bc + 0x1de80);
                iVar5 = 0;
                if (iVar6 != 0) {
                  uVar10 = FUN_00027390();
                  iVar11 = FUN_00028164(uVar7,DAT_0001e5c0 + 0x1de94,uVar10);
                  if (iVar11 != 0) {
                    iVar5 = FUN_000273b4(iVar11,DAT_0001e5c4 + 0x1dea6);
                    if (iVar5 == 0) {
                      iVar3 = 0;
                    }
                    else {
                      FUN_0001dc14(iVar3,local_228);
                      FUN_0001dbc0(&local_23c,DAT_0001e5c8 + 0x1dec0,iVar5,local_228[0]);
                      if (local_228[0] != (char *)0x0) {
                        free(local_228[0]);
                      }
                    }
                    goto LAB_0001decc;
                  }
                }
              }
LAB_0001de4e:
              bVar1 = true;
            }
          }
          else {
            pcVar22 = (char *)(DAT_0001e650 + 0x1e354);
            iVar6 = strcmp(pcVar8,pcVar22);
            if (iVar6 == 0) {
              pcVar8 = (char *)FUN_00027390(iVar3);
              iVar5 = sscanf(pcVar8,(char *)(DAT_0001e654 + 0x1e36c),&local_22c,local_228);
              if (iVar5 == 2) {
                FUN_0001dbc0(&local_23c,DAT_0001e658 + 0x1e37e,local_228[0]);
                iVar5 = FUN_0001db70(iVar3,pcVar22);
              }
              else {
LAB_0001e508:
                iVar5 = 0;
              }
            }
            else {
              iVar6 = strcmp(pcVar8,(char *)(DAT_0001e65c + 0x1e394));
              if (iVar6 != 0) {
                iVar5 = strcmp(pcVar8,(char *)(DAT_0001e670 + 0x1e3f6));
                if (iVar5 == 0) {
                  pcVar8 = (char *)FUN_00027390(iVar3);
                  iVar5 = sscanf(pcVar8,(char *)(DAT_0001e674 + 0x1e40a),local_228);
                  if (iVar5 == 1) {
                    iVar5 = DAT_0001e678 + 0x1e418;
                    pcVar8 = local_228[0];
                    goto LAB_0001e3e6;
                  }
                  goto LAB_0001e508;
                }
                pcVar22 = (char *)(DAT_0001e67c + 0x1e422);
                iVar5 = strcmp(pcVar8,pcVar22);
                if (iVar5 == 0) {
                  uVar7 = FUN_00027396(iVar3);
                  FUN_0001dbc0(&local_23c,DAT_0001e680 + 0x1e434,uVar7);
                  iVar3 = FUN_0001db70(iVar3,pcVar22);
                  goto LAB_0001dd98;
                }
                pcVar22 = (char *)(DAT_0001e684 + 0x1e450);
                iVar5 = strcmp(pcVar8,pcVar22);
                if (iVar5 == 0) {
                  uVar7 = FUN_00027390(iVar3);
                  iVar5 = DAT_0001e688 + 0x1e462;
                }
                else {
                  iVar5 = strcmp(pcVar8,(char *)(DAT_0001e68c + 0x1e47e));
                  if (iVar5 == 0) {
                    uVar7 = FUN_00027390(iVar3);
                    FUN_0001dbc0(&local_23c,DAT_0001e690 + 0x1e48e,uVar7);
                    pcVar22 = (char *)(DAT_0001e694 + 0x1e49a);
LAB_0001e498:
                    iVar5 = FUN_0001db70(iVar3,pcVar22);
                    goto LAB_0001de4e;
                  }
                  pcVar22 = (char *)(DAT_0001e698 + 0x1e4ac);
                  iVar5 = strcmp(pcVar8,pcVar22);
                  if (iVar5 == 0) {
                    uVar7 = FUN_00027390(iVar3);
                    iVar5 = DAT_0001e69c + 0x1e4be;
                  }
                  else {
                    pcVar22 = (char *)(DAT_0001e6a0 + 0x1e4ca);
                    iVar5 = strcmp(pcVar8,pcVar22);
                    if (iVar5 != 0) {
                      pcVar22 = (char *)(DAT_0001e6a8 + 0x1e4e8);
                      iVar5 = strcmp(pcVar8,pcVar22);
                      if (iVar5 != 0) goto LAB_0001dd98;
                      uVar7 = FUN_00027390(iVar3);
                      FUN_0001dbc0(&local_23c,DAT_0001e6ac + 0x1e4fe,uVar7);
                      goto LAB_0001e498;
                    }
                    uVar7 = FUN_00027390(iVar3);
                    iVar5 = DAT_0001e6a4 + 0x1e4dc;
                  }
                }
                bVar1 = true;
                FUN_0001dbc0(&local_23c,iVar5,uVar7);
                iVar3 = FUN_0001db70(iVar3,pcVar22);
                goto LAB_0001dd98;
              }
              pcVar8 = (char *)FUN_00027cb4(iVar3);
              if ((pcVar8 != (char *)0x0) &&
                 ((iVar6 = strcmp(pcVar8,(char *)(DAT_0001e660 + 0x1e3ac)), iVar6 == 0 ||
                  (iVar6 = strcmp(pcVar8,(char *)(DAT_0001e664 + 0x1e3b8)), iVar6 == 0)))) {
                pcVar8 = (char *)FUN_00027390(iVar3);
                pcVar8 = strchr(pcVar8,0x2d);
                if (pcVar8 != (char *)0x0) {
                  iVar3 = FUN_0001db70(iVar3,DAT_0001e668 + 0x1e3dc);
                  iVar5 = DAT_0001e66c + 0x1e3e6;
                  pcVar8 = pcVar8 + 1;
LAB_0001e3e6:
                  FUN_0001dbc0(&local_23c,iVar5,pcVar8);
                  iVar5 = iVar3;
                }
              }
            }
          }
LAB_0001de50:
          bVar2 = true;
          iVar3 = iVar5;
        }
      }
LAB_0001dd98:
    }
    if (!bVar1) {
      free(local_23c);
      local_23c = (void *)0x0;
    }
    pcVar18 = (char *)FUN_00027d5c(param_1);
    iVar3 = strcmp(pcVar18,(char *)(DAT_0001e598 + 0x1ddbc));
    if ((iVar3 == 0) && (!bVar2)) {
      free(local_23c);
      local_23c = (void *)0x0;
    }
    goto LAB_0001dcdc;
  }
  iVar4 = FUN_000284ea(param_1,DAT_0001e568 + 0x1dc84,DAT_0001e564 + 0x1dc80);
  if (iVar4 == 0) {
LAB_0001dd36:
    uVar7 = FUN_00027390(iVar3);
    FUN_0001dbc0(&local_23c,DAT_0001e588 + 0x1dd44,uVar7);
  }
  else {
    iVar5 = FUN_000273b4(iVar4,DAT_0001e56c + 0x1dc94);
    iVar6 = FUN_000273b4(iVar4,DAT_0001e570 + 0x1dc9e);
    iVar4 = FUN_000273b4(iVar4,DAT_0001e574 + 0x1dcac);
    if (((iVar5 == 0) || (iVar4 == 0)) || (iVar6 == 0)) goto LAB_0001dd36;
    FUN_0001dbc0(&local_23c,DAT_0001e578 + 0x1dccc,iVar5,iVar6,iVar4);
  }
  FUN_0001db70(iVar3,DAT_0001e57c + 0x1dcda);
LAB_0001dcdc:
  if (local_23c == (void *)0x0) {
    uVar7 = 1;
  }
  else {
    pbVar21 = (byte *)((int)local_23c + -1);
    iVar3 = 0;
LAB_0001dcec:
    pbVar21 = pbVar21 + 1;
    uVar17 = (uint)*pbVar21;
    if (uVar17 != 0) {
      if (((9 < uVar17 - 0x30) && (0x19 < (uVar17 & 0xffffffdf) - 0x41)) && (uVar17 != 0x2d))
      goto LAB_0001e53c;
      *(byte *)((int)local_228 + iVar3) = *pbVar21;
      goto LAB_0001e536;
    }
    do {
      iVar4 = iVar3;
      if (iVar4 == 0) break;
      iVar3 = iVar4 + -1;
    } while (*(char *)((int)local_228 + iVar4 + -1) == '_');
    *(undefined1 *)((int)local_228 + iVar4) = 0;
    FUN_0001c618(param_1,param_4,DAT_0001e580 + 0x1dd12);
    FUN_0001c618(param_1,param_4,DAT_0001e584 + 0x1dd22,local_228);
    free(local_23c);
    uVar7 = 0;
  }
  return uVar7;
LAB_0001e53c:
  if ((iVar3 != 0) && (*(char *)((int)local_228 + iVar3 + -1) != '_')) {
    *(undefined1 *)((int)local_228 + iVar3) = 0x5f;
LAB_0001e536:
    iVar3 = iVar3 + 1;
  }
  goto LAB_0001dcec;
}



/* ===== FUN_0001e6b8 @ 0001e6b8 size=302 ===== */

int FUN_0001e6b8(undefined4 param_1,char *param_2)

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
  uVar2 = FUN_000272d4();
  iVar3 = asprintf(&pcStack_10048,(char *)(DAT_0001e7ec + 0x1e6da),uVar2);
  if (iVar3 < 0) {
    iVar3 = -1;
    iVar4 = FUN_00022a44(DAT_0001e7f4 + 0x1e6f4,0xa8,DAT_0001e7f0 + 0x1e6f2);
  }
  else {
    iVar3 = open64(pcStack_10048,0x80000);
    sVar1 = DAT_0001e7e8;
    if (iVar3 < 0) {
      piVar5 = __errno_location();
      iVar4 = *piVar5;
      iVar6 = FUN_00022a68();
      if (iVar6 < 7) {
        if (0 < iVar4) {
          iVar4 = -iVar4;
        }
      }
      else {
        iVar4 = FUN_00022900(7,iVar4,DAT_0001e7fc + 0x1e744,0xac,DAT_0001e800 + 0x1e746,
                             DAT_0001e7f8 + 0x1e73e);
      }
    }
    else {
      uVar7 = read(iVar3,abStack_1003c,DAT_0001e7e8);
      iVar4 = DAT_0001e804;
      if (((int)uVar7 < 0x12) || (uVar7 == sVar1)) {
        iVar4 = -5;
      }
      else {
        *param_2 = '\0';
        iVar6 = 0;
        do {
          if (0x1fd < uVar10 + 7) goto LAB_0001e788;
          uVar9 = (uint)abStack_1003c[iVar6];
          if (uVar9 < 3) break;
          iVar11 = iVar6 + uVar9;
          if (abStack_1003c[iVar6 + 1] == 4) {
            snprintf((char *)&uStack_10044,8,(char *)(iVar4 + 0x1e77e),(uint)abStack_10037[iVar6],
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
LAB_0001e788:
          param_2[uVar10] = ':';
          iVar4 = 0;
          param_2[uVar10 + 1] = '\0';
        }
      }
    }
  }
  FUN_00024ccc(iVar3);
  free(pcStack_10048);
  return iVar4;
}



/* ===== FUN_0001e808 @ 0001e808 size=2024 ===== */

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffbc8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0001e808(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_00027cb4(param_1);
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_00027cb4(param_1);
    iVar1 = strcmp(pcVar2,(char *)(DAT_0001f014 + 0x1e90e));
    if (iVar1 == 0) {
      FUN_0001e6b8(param_1,&local_238);
      local_898 = 0;
      local_890 = 0;
      iVar1 = param_1;
      goto LAB_0001e924;
    }
  }
  iVar1 = FUN_000284ea(param_1,DAT_0001f034 + 0x1e9a0,DAT_0001f030 + 0x1e99e);
  if (iVar1 == 0) {
    iVar1 = FUN_00022a68();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_000272d4(param_1);
    iVar3 = DAT_0001f038 + 0x1e9ce;
    iVar1 = DAT_0001f03c + 0x1e9d6;
    iVar4 = DAT_0001f040 + 0x1e9eb;
    uVar12 = 0x10a;
LAB_0001ea3c:
    FUN_00022900(7,0,iVar1,uVar12,iVar4,iVar3,uVar7);
    return 1;
  }
  local_890 = FUN_000273b4(iVar1,DAT_0001f044 + 0x1e9ec);
  local_898 = FUN_000273b4(iVar1,DAT_0001f048 + 0x1e9f6);
  pcVar2 = (char *)FUN_000273b4(iVar1,DAT_0001f04c + 0x1ea04);
  if (pcVar2 == (char *)0x0) {
    iVar1 = FUN_00022a68();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_00027390(param_1);
    iVar3 = DAT_0001f050 + 0x1ea2a;
    iVar1 = DAT_0001f054 + 0x1ea32;
    iVar4 = DAT_0001f058 + 0x1ea47;
    uVar12 = 0x114;
    goto LAB_0001ea3c;
  }
  uVar6 = strtoul(pcVar2,(char **)0x0,0x10);
  if (uVar6 == 8) {
    pcVar2 = (char *)FUN_000273b4(iVar1,DAT_0001f05c + 0x1ea5c);
    if (pcVar2 == (char *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = strtoul(pcVar2,local_538,0);
      if (pcVar2 == local_538[0]) {
        iVar3 = DAT_0001f094 + 0x1eb44;
      }
      else {
        switch(uVar9) {
        case 1:
          iVar3 = DAT_0001f098 + 0x1eb4c;
          break;
        case 2:
          iVar3 = DAT_0001f084 + 0x1eb24;
          break;
        case 3:
          iVar3 = DAT_0001f088 + 0x1eb2c;
          break;
        case 4:
          iVar3 = DAT_0001f08c + 0x1eb34;
          break;
        default:
          iVar3 = DAT_0001f060 + 0x1ea96;
          break;
        case 6:
          iVar3 = DAT_0001f090 + 0x1eb3c;
        }
      }
      FUN_0002448c(local_7b8,0x3f,iVar3);
    }
  }
  else {
    switch(uVar6) {
    case 1:
      pcVar2 = (char *)(DAT_0001f0b8 + 0x1ebb2);
      break;
    default:
      pcVar2 = (char *)(DAT_0001f09c + 0x1eb6c);
      break;
    case 3:
      pcVar2 = (char *)(DAT_0001f0a0 + 0x1eb82);
      break;
    case 6:
      pcVar2 = (char *)(DAT_0001f0a4 + 0x1eb8a);
      break;
    case 7:
      pcVar2 = (char *)(DAT_0001f0a8 + 0x1eb92);
      break;
    case 8:
      pcVar2 = (char *)(DAT_0001f0ac + 0x1eb9a);
      break;
    case 9:
      pcVar2 = (char *)(DAT_0001f0b0 + 0x1eba2);
      break;
    case 0xe:
      pcVar2 = (char *)(DAT_0001f0b4 + 0x1ebaa);
    }
    strncpy(local_7b8,pcVar2,0x3f);
    uVar9 = 0;
    uStack_77c = (uint3)(ushort)uStack_77c;
  }
  iVar3 = FUN_00022a68();
  if (6 < iVar3) {
    uVar7 = FUN_000272d4(iVar1);
    FUN_00022900(7,0,DAT_0001f068 + 0x1eac0,0x123,DAT_0001f06c + 0x1ead9,DAT_0001f064 + 0x1eab8,
                 uVar7,uVar6,uVar9);
  }
  iVar1 = FUN_000284ea(iVar1,DAT_0001f074 + 0x1eae4,DAT_0001f070 + 0x1eae2);
  if (iVar1 == 0) {
    iVar1 = FUN_00022a68();
    if (iVar1 < 7) {
      return 1;
    }
    uVar7 = FUN_000272d4(param_1);
    iVar3 = DAT_0001f078 + 0x1eb08;
    iVar1 = DAT_0001f07c + 0x1eb10;
    iVar4 = DAT_0001f080 + 0x1eb25;
    uVar12 = 0x129;
    goto LAB_0001ea3c;
  }
  FUN_0001e6b8(iVar1,&local_238);
  if ((uVar9 & 0xfffffffb) != 2) goto LAB_0001e924;
  iVar3 = FUN_000284ea(param_1,DAT_0001f0c0 + 0x1ebd6,DAT_0001f0bc + 0x1ebd4);
  if (iVar3 == 0) {
    iVar3 = FUN_00022a68();
    if (iVar3 < 7) goto LAB_0001e924;
    uVar12 = FUN_000272d4(param_1);
    iVar4 = DAT_0001f0c4 + 0x1ebf8;
    iVar3 = DAT_0001f0c8 + 0x1ec00;
    iVar5 = DAT_0001f0cc + 0x1ec15;
    uVar7 = 0x13a;
  }
  else {
    pcVar2 = (char *)FUN_00027390();
    iVar4 = sscanf(pcVar2,(char *)(DAT_0001f0d0 + 0x1ec30),auStack_888,auStack_884,&local_880,
                   &local_87c);
    if (iVar4 == 4) {
      iVar4 = FUN_000273b4(iVar3,DAT_0001f0e0 + 0x1ec70);
      if (iVar4 == 0) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) goto LAB_0001e924;
        uVar12 = FUN_00027390(iVar3);
        iVar4 = DAT_0001f0e4 + 0x1ec92;
        iVar3 = DAT_0001f0e8 + 0x1ec9a;
        iVar5 = DAT_0001f0ec + 0x1ecaf;
        uVar7 = 0x146;
      }
      else {
        thunk_FUN_0002b630(iVar4,auStack_738,0x100);
        FUN_0002b1a0(iVar4,local_878,0x3f);
        FUN_0002b22c(local_878,0);
        iVar4 = FUN_000273b4(iVar3,DAT_0001f0f0 + 0x1ecce);
        if (iVar4 == 0) {
          iVar4 = FUN_00022a68();
          if (iVar4 < 7) goto LAB_0001e924;
          uVar12 = FUN_00027390(iVar3);
          iVar4 = DAT_0001f0f4 + 0x1ecf0;
          iVar3 = DAT_0001f0f8 + 0x1ecf8;
          iVar5 = DAT_0001f0fc + 0x1ed0d;
          uVar7 = 0x150;
        }
        else {
          thunk_FUN_0002b630(iVar4,auStack_638,0x100);
          FUN_0002b1a0(iVar4,&local_838,0x3f);
          FUN_0002b22c(&local_838,0);
          pcVar2 = (char *)FUN_000273b4(iVar3,DAT_0001f100 + 0x1ed28);
          if (pcVar2 == (char *)0x0) {
            iVar4 = FUN_00022a68();
            if (iVar4 < 7) goto LAB_0001e924;
            uVar12 = FUN_00027390(iVar3);
            iVar4 = DAT_0001f104 + 0x1ed46;
            iVar3 = DAT_0001f108 + 0x1ed4c;
            iVar5 = DAT_0001f10c + 0x1ed61;
            uVar7 = 0x15a;
          }
          else {
            uVar6 = strtoul(pcVar2,local_538,0);
            if (pcVar2 == local_538[0]) {
              iVar4 = DAT_0001f130 + 0x1ede0;
            }
            else {
              switch(uVar6) {
              case 0:
              case 0xe:
                iVar4 = DAT_0001f110 + 0x1ed8a;
                break;
              case 1:
                iVar4 = DAT_0001f124 + 0x1edce;
                break;
              default:
                iVar4 = DAT_0001f134 + 0x1ede6;
                break;
              case 4:
              case 7:
              case 0xf:
                iVar4 = DAT_0001f128 + 0x1edd4;
                break;
              case 5:
                iVar4 = DAT_0001f12c + 0x1edda;
              }
            }
            FUN_0002448c(local_7b8,0x3f,iVar4);
            iVar4 = FUN_000273b4(iVar3,DAT_0001f114 + 0x1ed98);
            if (iVar4 != 0) {
              FUN_0002b1a0(iVar4,&local_7f8,0x3f);
              FUN_0002b22c(&local_7f8,0);
              sprintf(local_778,(char *)(DAT_0001f138 + 0x1ee06),local_880,local_87c);
              goto LAB_0001e924;
            }
            iVar4 = FUN_00022a68();
            if (iVar4 < 7) goto LAB_0001e924;
            uVar12 = FUN_00027390(iVar3);
            iVar4 = DAT_0001f118 + 0x1edb6;
            iVar3 = DAT_0001f11c + 0x1edbc;
            iVar5 = DAT_0001f120 + 0x1edd1;
            uVar7 = 0x162;
          }
        }
      }
    }
    else {
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) goto LAB_0001e924;
      uVar12 = FUN_00027390(iVar3);
      iVar4 = DAT_0001f0d4 + 0x1ec52;
      iVar3 = DAT_0001f0d8 + 0x1ec5a;
      iVar5 = DAT_0001f0dc + 0x1ec6f;
      uVar7 = 0x13e;
    }
  }
  FUN_00022900(7,0,iVar3,uVar7,iVar5,iVar4,uVar12);
LAB_0001e924:
  iVar3 = FUN_000273b4(iVar1,DAT_0001f018 + 0x1e92e);
  iVar4 = FUN_000273b4(iVar1,DAT_0001f01c + 0x1e938);
  if ((local_878[0] & 0xff) == 0) {
    iVar5 = FUN_000273b4(iVar1,DAT_0001f020 + 0x1e952);
    if ((iVar5 == 0) && (iVar5 = iVar3, iVar3 == 0)) {
      iVar1 = FUN_00022a68();
      if (iVar1 < 7) {
        return 1;
      }
      FUN_00022900(7,0,DAT_0001f028 + 0x1e982,0x17b,DAT_0001f02c + 0x1e997,DAT_0001f024 + 0x1e97a);
      return 1;
    }
    thunk_FUN_0002b630(iVar5,auStack_738,0x100);
    FUN_0002b1a0(iVar5,local_878,0x3f);
    FUN_0002b22c(local_878,0);
  }
  if ((char)local_838 == '\0') {
    iVar5 = FUN_000273b4(iVar1,DAT_0001f13c + 0x1ee38);
    if ((iVar5 == 0) && (iVar5 = iVar4, iVar4 == 0)) {
      return 1;
    }
    thunk_FUN_0002b630(iVar5,auStack_638,0x100);
    FUN_0002b1a0(iVar5,&local_838,0x3f);
    FUN_0002b22c(&local_838,0);
  }
  if (((local_7f8 & 0xff) == 0) && (iVar5 = FUN_000273b4(iVar1,DAT_0001f140 + 0x1ee7c), iVar5 != 0))
  {
    FUN_0002b1a0(iVar5,&local_7f8,0x3f);
    FUN_0002b22c(&local_7f8,0);
  }
  if (((char)local_438 == '\0') && (iVar1 = FUN_000273b4(iVar1,DAT_0001f144 + 0x1ee9e), iVar1 != 0))
  {
    pbVar8 = (byte *)(iVar1 + -1);
    while( true ) {
      pbVar8 = pbVar8 + 1;
      uVar9 = (uint)*pbVar8;
      if (uVar9 == 0) break;
      if ((0x5f < uVar9 - 0x20) || (uVar9 == 0x2c)) goto LAB_0001eed0;
    }
    FUN_0002b1a0(iVar1,&local_438,0x1ff);
    FUN_0002b22c(&local_438,0);
  }
LAB_0001eed0:
  local_87c = local_538;
  iVar1 = DAT_0001f148 + 0x1eee2;
  uVar12 = 0;
  uVar7 = FUN_00024460(&local_87c,0x100,local_878,iVar1,&local_838,0);
  if ((char)local_438 != '\0') {
    uVar7 = FUN_00024460(&local_87c,uVar7,iVar1,&local_438,0,uVar12);
  }
  if (local_778[0] != '\0') {
    FUN_00024460(&local_87c,uVar7,DAT_0001f14c + 0x1ef22,local_778,0,uVar12);
  }
  FUN_0001c618(param_1,param_4,DAT_0001f150 + 0x1ef30,local_878);
  FUN_0001c618(param_1,param_4,DAT_0001f154 + 0x1ef3c,auStack_738);
  FUN_0001c618(param_1,param_4,DAT_0001f158 + 0x1ef4a,iVar3);
  FUN_0001c618(param_1,param_4,DAT_0001f15c + 0x1ef58,&local_838);
  FUN_0001c618(param_1,param_4,DAT_0001f160 + 0x1ef66,auStack_638);
  FUN_0001c618(param_1,param_4,DAT_0001f164 + 0x1ef74,iVar4);
  FUN_0001c618(param_1,param_4,DAT_0001f168 + 0x1ef82,&local_7f8);
  FUN_0001c618(param_1,param_4,DAT_0001f16c + 0x1ef90,local_538);
  if ((char)local_438 != '\0') {
    FUN_0001c618(param_1,param_4,DAT_0001f170 + 0x1efa6,&local_438);
  }
  if (local_7b8[0] != '\0') {
    FUN_0001c618(param_1,param_4,DAT_0001f174 + 0x1efb8);
  }
  if (local_778[0] != '\0') {
    FUN_0001c618(param_1,param_4,DAT_0001f178 + 0x1efca);
  }
  FUN_0001c618(param_1,param_4,DAT_0001f180 + 0x1efda,DAT_0001f17c + 0x1efd8);
  if ((char)local_238 != '\0') {
    FUN_0001c618(param_1,param_4,DAT_0001f184 + 0x1efee);
  }
  if (local_890 != 0) {
    FUN_0001c618(param_1,param_4,DAT_0001f188 + 0x1effe);
  }
  if (local_898 != 0) {
    FUN_0001c618(param_1,param_4,DAT_0001f18c + 0x1f00e);
  }
  return 0;
}



/* ===== FUN_0001f190 @ 0001f190 size=546 ===== */

void FUN_0001f190(undefined4 param_1,undefined4 param_2,char *param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined local_118 [256];
  
  puVar3 = local_118;
  local_118[0] = 0;
  iVar1 = strcmp(param_3,(char *)(DAT_0001f3b4 + 0x1f1a2));
  if (iVar1 == 0) {
    puVar2 = (undefined *)(DAT_0001f3b8 + 0x1f1b8);
    puVar3 = param_4;
  }
  else {
    iVar1 = strcmp(param_3,(char *)(DAT_0001f3bc + 0x1f1cc));
    if (iVar1 == 0) {
      puVar2 = (undefined *)(DAT_0001f3c0 + 0x1f1d8);
      puVar3 = param_4;
    }
    else {
      iVar1 = strcmp(param_3,(char *)(DAT_0001f3c4 + 0x1f1e0));
      if (iVar1 == 0) {
        puVar2 = (undefined *)(DAT_0001f3c8 + 0x1f1ec);
        puVar3 = param_4;
      }
      else {
        iVar1 = strcmp(param_3,(char *)(DAT_0001f3cc + 0x1f1f4));
        if (iVar1 == 0) {
          blkid_safe_string(param_4,puVar3,0x100);
          FUN_0001c618(param_1,param_2,DAT_0001f3d0 + 0x1f20e,puVar3);
          blkid_encode_string(param_4,puVar3,0x100);
          puVar2 = (undefined *)(DAT_0001f3d4 + 0x1f226);
        }
        else {
          iVar1 = strcmp(param_3,(char *)(DAT_0001f3d8 + 0x1f22e));
          if (iVar1 == 0) {
            blkid_safe_string(param_4,puVar3,0x100);
            FUN_0001c618(param_1,param_2,DAT_0001f3dc + 0x1f248,puVar3);
            blkid_encode_string(param_4,puVar3,0x100);
            puVar2 = (undefined *)(DAT_0001f3e0 + 0x1f260);
          }
          else {
            iVar1 = strcmp(param_3,(char *)(DAT_0001f3e4 + 0x1f268));
            if (iVar1 == 0) {
              blkid_safe_string(param_4,puVar3,0x100);
              FUN_0001c618(param_1,param_2,DAT_0001f3e8 + 0x1f282,puVar3);
              blkid_encode_string(param_4,puVar3,0x100);
              puVar2 = (undefined *)(DAT_0001f3ec + 0x1f29a);
            }
            else {
              iVar1 = strcmp(param_3,(char *)(DAT_0001f3f0 + 0x1f2a2));
              if (iVar1 == 0) {
                puVar2 = (undefined *)(DAT_0001f3f4 + 0x1f2ae);
                puVar3 = param_4;
              }
              else {
                iVar1 = strcmp(param_3,(char *)(DAT_0001f3f8 + 0x1f2b6));
                if (iVar1 == 0) {
                  puVar2 = (undefined *)(DAT_0001f3fc + 0x1f2c2);
                  puVar3 = param_4;
                }
                else {
                  iVar1 = strcmp(param_3,(char *)(DAT_0001f400 + 0x1f2ca));
                  if (iVar1 == 0) {
                    blkid_encode_string(param_4,puVar3,0x100);
                    puVar2 = (undefined *)(DAT_0001f404 + 0x1f2e2);
                  }
                  else {
                    iVar1 = strcmp(param_3,(char *)(DAT_0001f408 + 0x1f2ea));
                    if (iVar1 == 0) {
                      blkid_encode_string(param_4,puVar3,0x100);
                      puVar2 = (undefined *)(DAT_0001f40c + 0x1f302);
                    }
                    else {
                      iVar1 = strncmp(param_3,(char *)(DAT_0001f410 + 0x1f30c),0xb);
                      if ((iVar1 == 0) && (param_3 != (char *)0xfffffff5)) {
                        FUN_0002449c(puVar3,0x100,DAT_0001f414 + 0x1f324,param_3,0);
                        puVar2 = puVar3;
                        puVar3 = param_4;
                      }
                      else {
                        iVar1 = strcmp(param_3,(char *)(DAT_0001f418 + 0x1f336));
                        if (iVar1 == 0) {
                          blkid_encode_string(param_4,puVar3,0x100);
                          puVar2 = (undefined *)(DAT_0001f41c + 0x1f34e);
                        }
                        else {
                          iVar1 = strcmp(param_3,(char *)(DAT_0001f420 + 0x1f356));
                          if (iVar1 == 0) {
                            blkid_encode_string(param_4,puVar3,0x100);
                            puVar2 = (undefined *)(DAT_0001f424 + 0x1f36e);
                          }
                          else {
                            iVar1 = strcmp(param_3,(char *)(DAT_0001f428 + 0x1f376));
                            if (iVar1 == 0) {
                              blkid_encode_string(param_4,puVar3,0x100);
                              puVar2 = (undefined *)(DAT_0001f42c + 0x1f38e);
                            }
                            else {
                              iVar1 = strcmp(param_3,(char *)(DAT_0001f430 + 0x1f396));
                              if (iVar1 != 0) {
                                return;
                              }
                              blkid_encode_string(param_4,puVar3,0x100);
                              puVar2 = &UNK_0001f3b2 + DAT_0001f434;
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
  FUN_0001c618(param_1,param_2,puVar2,puVar3);
  return;
}



/* ===== FUN_0001f438 @ 0001f438 size=626 ===== */

uint FUN_0001f438(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__file;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 local_a0;
  undefined4 local_9c;
  stat64 local_98;
  
  lVar11 = 0;
  iVar9 = DAT_0001f6ac + 0x1f458;
  iVar8 = DAT_0001f6b0 + 0x1f45c;
  iVar7 = DAT_0001f6b4 + 0x1f45e;
  bVar10 = false;
  local_9c = 0;
  while( true ) {
    iVar1 = getopt_long(param_2,param_3,iVar8,iVar9,0);
    if (iVar1 == -1) break;
    if (iVar1 == 0x52) {
      bVar10 = true;
    }
    else if (iVar1 == 0x6f) {
      uVar12 = strtoull((char *)**(undefined4 **)(iVar7 + DAT_0001f6b8),(char **)0x0,0);
      lVar11 = (uVar12 & 0xffffffff00000000) + (uVar12 & 0xffffffff);
    }
  }
  iVar8 = blkid_new_probe();
  iVar7 = -1;
  if (iVar8 == 0) goto LAB_0001f568;
  blkid_probe_set_superblocks_flags(iVar8,0x5ea);
  if (bVar10) {
    blkid_probe_filter_superblocks_usage(iVar8,1,4);
  }
  __file = (char *)FUN_00027d06(param_1);
  iVar7 = open64(__file,0x80000);
  if (iVar7 < 0) {
    puVar2 = (uint *)__errno_location();
    uVar6 = *puVar2;
    iVar8 = FUN_00022a68();
    if (iVar8 < 7) {
      uVar6 = ((int)uVar6 >> 0x1f) - (uVar6 ^ (int)uVar6 >> 0x1f);
    }
    else {
      uVar3 = FUN_00027d06(param_1);
      uVar6 = FUN_00022900(7,uVar6,DAT_0001f6c0 + 0x1f4ec,0xb8,DAT_0001f6c4 + 0x1f4ee,
                           DAT_0001f6bc + 0x1f4e6,uVar3);
    }
    uVar6 = uVar6 >> 0x1f;
    goto LAB_0001f62c;
  }
  iVar9 = blkid_probe_set_device(iVar8,iVar7,(int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0);
  if (-1 < iVar9) {
    iVar9 = FUN_00022a68();
    if (6 < iVar9) {
      uVar3 = FUN_00027d06(param_1);
      if (bVar10) {
        iVar9 = DAT_0001f6d8 + 0x1f572;
      }
      else {
        iVar9 = DAT_0001f6c8 + 0x1f534;
      }
      FUN_00022900(7,0,DAT_0001f6d0 + 0x1f548,0xc2,DAT_0001f6d4 + 0x1f54e,DAT_0001f6cc + 0x1f542,
                   uVar3,iVar9,lVar11);
    }
    iVar9 = blkid_probe_get_fd(iVar8);
    iVar9 = fstat64(iVar9,&local_98);
    if (iVar9 == 0) {
      blkid_probe_enable_partitions(iVar8,1);
      if ((local_98.st_mode & 0xf000) == 0x2000) {
LAB_0001f5c2:
        blkid_probe_set_partitions_flags(iVar8,4);
        blkid_probe_enable_superblocks(iVar8,1);
        iVar9 = blkid_do_safeprobe(iVar8);
        if (iVar9 < 0) goto LAB_0001f568;
      }
      else {
        uVar13 = blkid_probe_get_size(iVar8);
        iVar9 = (int)((ulonglong)uVar13 >> 0x20);
        bVar10 = 0x168000 < (uint)uVar13;
        if (((int)(-(uint)bVar10 - iVar9) < 0 !=
             (SBORROW4(0,iVar9) != SBORROW4(-iVar9,(uint)bVar10))) ||
           (iVar9 = blkid_probe_is_wholedisk(iVar8), iVar9 == 0)) goto LAB_0001f5c2;
        blkid_probe_enable_superblocks(iVar8,0);
        iVar9 = blkid_do_fullprobe(iVar8);
        if (iVar9 < 0) goto LAB_0001f568;
        iVar9 = blkid_probe_lookup_value(iVar8,DAT_0001f6dc + 0x1f5be,0,0);
        if (iVar9 != 0) goto LAB_0001f5c2;
      }
      iVar9 = blkid_probe_has_value(iVar8,DAT_0001f6e0 + 0x1f5e4);
      if (iVar9 == 0) {
        iVar1 = blkid_probe_numof_values(iVar8);
        for (iVar9 = 0; iVar9 < iVar1; iVar9 = iVar9 + 1) {
          iVar5 = blkid_probe_get_value(iVar8,iVar9,&local_98,&local_a0,0);
          if (iVar5 == 0) {
            FUN_0001f190(param_1,param_4,(undefined4)local_98.st_dev,local_a0);
          }
        }
        blkid_free_probe(iVar8);
        uVar6 = 0;
      }
      else {
        iVar8 = blkid_probe_lookup_value(iVar8,DAT_0001f6e4 + 0x1f5f8,&local_9c,0);
        if (iVar8 == 0) {
          iVar8 = FUN_00022a68();
          uVar3 = local_9c;
          uVar6 = 0;
          if (3 < iVar8) {
            uVar4 = FUN_00027d06(param_1);
            FUN_00022900(4,0,DAT_0001f6ec + 0x1f61e,0xca,DAT_0001f6f0 + 0x1f620,
                         DAT_0001f6e8 + 0x1f618,uVar3,uVar4);
          }
        }
        else {
          iVar8 = FUN_00022a68();
          if (3 < iVar8) {
            uVar3 = FUN_00027d06(param_1);
            FUN_00022900(4,0,DAT_0001f6f8 + 0x1f65c,0xcd,DAT_0001f6fc + 0x1f65e,
                         DAT_0001f6f4 + 0x1f656,uVar3);
          }
          uVar6 = 0;
        }
      }
      goto LAB_0001f62c;
    }
  }
LAB_0001f568:
  uVar6 = 1;
LAB_0001f62c:
  FUN_00024ccc(iVar7);
  return uVar6;
}



/* ===== FUN_0001f814 @ 0001f814 size=414 ===== */

undefined4 FUN_0001f814(undefined4 param_1,int param_2,undefined4 *param_3)

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
  
  FUN_00027228();
  if (*(int *)(DAT_0001f9b4 + 0x1f828) != 0) {
    if ((param_2 < 3) ||
       (iVar1 = strcmp((char *)param_3[1],(char *)(DAT_0001f9b8 + 0x1f840)), iVar1 != 0)) {
      iVar1 = FUN_00022a68();
      if (2 < iVar1) {
        FUN_00022900(3,0,DAT_0001f9fc + 0x1f99c,0x4e,(int)&DAT_0001f9e0 + DAT_0001fa04,
                     DAT_0001fa00 + 0x1f9a0,*param_3);
      }
      return 1;
    }
    piVar10 = param_3 + 1;
    iVar1 = DAT_0001f9bc + 0x1f89b;
    while( true ) {
      piVar10 = piVar10 + 1;
      iVar9 = *piVar10;
      if (iVar9 == 0) break;
      iVar2 = FUN_00022a68();
      if (6 < iVar2) {
        FUN_00022900(7,0,DAT_0001f9c0 + 0x1f876,0x53,DAT_0001f9c8 + 0x1f8ba,DAT_0001f9c4 + 0x1f87a,
                     param_3[1],iVar9);
      }
      local_2c[0] = 0;
      iVar2 = *piVar10;
      iVar9 = kmod_module_new_from_lookup(*(undefined4 *)(DAT_0001f9cc + 0x1f898),iVar2,local_2c);
      if (-1 < iVar9) {
        if ((local_2c[0] == 0) && (iVar9 = FUN_00022a68(), 6 < iVar9)) {
          FUN_00022900(7,0,DAT_0001f9d4 + 0x1f8c0,0x2e,DAT_0001f9d8 + 0x1f90b,DAT_0001f9d0 + 0x1f8ba
                       ,iVar2);
        }
        iVar2 = DAT_0001f9dc + 0x1f8d6;
        for (iVar9 = local_2c[0]; iVar9 != 0; iVar9 = kmod_list_next(local_2c[0],iVar9)) {
          uVar3 = kmod_module_get_module(iVar9);
          iVar4 = kmod_module_probe_insert_module(uVar3,0x20000,0,0,0,0);
          if (iVar4 == 0x20000) {
            iVar4 = FUN_00022a68();
            if (6 < iVar4) {
              uVar5 = kmod_module_get_name(uVar3);
              iVar7 = DAT_0001f9e0 + 0x1f916;
              uVar8 = 0x35;
              iVar4 = DAT_0001f9e4 + 0x1f91c;
              iVar6 = DAT_0001f9e8 + 0x1f965;
              goto LAB_0001f954;
            }
          }
          else {
            iVar6 = FUN_00022a68();
            if (iVar4 == 0) {
              if (6 < iVar6) {
                uVar5 = kmod_module_get_name(uVar3);
                iVar7 = DAT_0001f9ec + 0x1f946;
                uVar8 = 0x37;
                iVar4 = DAT_0001f9f0 + 0x1f94c;
                iVar6 = DAT_0001f9f4 + 0x1f995;
LAB_0001f954:
                FUN_00022900(7,0,iVar4,uVar8,iVar6,iVar7,uVar5);
              }
            }
            else if (6 < iVar6) {
              uVar5 = kmod_module_get_name(uVar3);
              iVar7 = DAT_0001f9f8 + 0x1f97e;
              uVar8 = 0x39;
              iVar4 = iVar2;
              iVar6 = iVar1;
              goto LAB_0001f954;
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



/* ===== FUN_000201ba @ 000201ba size=350 ===== */

int FUN_000201ba(undefined4 param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  DIR *__dirp;
  int *piVar5;
  dirent64 *pdVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *__dest;
  int aiStack_40 [4];
  int local_30;
  int local_2c;
  
  if (param_3 == (char *)0x0) {
    uVar9 = 0x2a;
    iVar10 = DAT_00020318 + 0x201d8;
    iVar8 = DAT_0002031c + 0x201da;
    iVar1 = DAT_00020320 + 0x201dc;
  }
  else {
    if (param_4 != 0) {
      if (param_2 == (char *)0x0) {
        param_2 = (char *)(DAT_00020330 + 0x201f8);
      }
      sVar2 = strlen(param_2);
      sVar3 = strlen(param_3);
      iVar1 = -(sVar3 + sVar2 + 8 & 0xfffffff8);
      __dest = (char *)((int)&local_30 + iVar1);
      pcVar4 = stpcpy(__dest,param_2);
      pcVar4 = stpcpy(pcVar4,param_3);
      *pcVar4 = '\0';
      __dirp = opendir(__dest);
      piVar5 = __errno_location();
      if (__dirp == (DIR *)0x0) {
        if (*piVar5 != 2) {
          return -*piVar5;
        }
        return 0;
      }
      local_2c = DAT_00020338 + 0x20242;
      local_30 = DAT_00020334 + 0x2024a;
LAB_0002024a:
      do {
        *piVar5 = 0;
        pdVar6 = readdir64(__dirp);
        if (pdVar6 == (dirent64 *)0x0) {
          iVar8 = 0;
          if (*piVar5 != 0) {
            iVar8 = -*piVar5;
          }
LAB_00020264:
          closedir(__dirp);
          return iVar8;
        }
        iVar8 = FUN_00025920(pdVar6,param_4);
      } while (iVar8 == 0);
      pcVar4 = (char *)FUN_00025d30(__dest,local_2c,pdVar6->d_name,0);
      if (pcVar4 == (char *)0x0) {
        iVar8 = -0xc;
        goto LAB_00020264;
      }
      pcVar7 = basename(pcVar4);
      iVar8 = FUN_00021716(param_1,pcVar7,pcVar4);
      if (iVar8 == -0x11) {
        iVar8 = FUN_00022a68();
        if (6 < iVar8) {
          *(int *)((int)aiStack_40 + iVar1 + 4) = DAT_0002033c + 0x202c6;
          iVar8 = DAT_00020340 + 0x202cc;
          *(char **)((int)aiStack_40 + iVar1 + 8) = pcVar4;
          *(int *)((int)aiStack_40 + iVar1) = DAT_00020344 + 0x202da;
          uVar9 = 0x4c;
LAB_000202d4:
          FUN_00022900(7,0,iVar8,uVar9);
        }
      }
      else {
        if (iVar8 < 0) {
          free(pcVar4);
          goto LAB_00020264;
        }
        if (iVar8 != 0) goto LAB_0002024a;
        iVar8 = FUN_00022a68();
        if (6 < iVar8) {
          *(int *)((int)aiStack_40 + iVar1 + 4) = DAT_00020348 + 0x20302;
          iVar10 = local_30;
          iVar8 = DAT_0002034c + 0x20308;
          *(char **)((int)aiStack_40 + iVar1 + 8) = pcVar4;
          *(int *)((int)aiStack_40 + iVar1) = iVar10;
          uVar9 = 0x52;
          goto LAB_000202d4;
        }
      }
      free(pcVar4);
      goto LAB_0002024a;
    }
    uVar9 = 0x2b;
    iVar10 = DAT_00020324 + 0x201ec;
    iVar8 = DAT_00020328 + 0x201ee;
    iVar1 = DAT_0002032c + 0x201f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar8,uVar9,iVar10);
}



/* ===== FUN_00020350 @ 00020350 size=274 ===== */

undefined4 FUN_00020350(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *__base;
  uint __nmemb;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  iVar8 = DAT_00020464 + 0x20362;
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0x89;
    iVar7 = DAT_00020468 + 0x20382;
    iVar5 = DAT_0002046c + 0x20372;
    iVar8 = DAT_00020470 + 0x20374;
  }
  else {
    if (param_2 != 0) {
      piVar1 = (int *)FUN_00024218(param_4);
      if (piVar1 == (int *)0x0) {
        uVar6 = 0xfffffff4;
      }
      else {
        iVar5 = FUN_00023270(piVar1,param_3);
        if ((iVar5 == 0) ||
           (iVar8 = FUN_000215fc(*(undefined4 *)(iVar8 + DAT_00020480)), iVar8 == 0)) {
          uVar6 = 0xfffffff4;
        }
        else {
          iVar7 = DAT_0002048c + 0x2042e;
          iVar5 = DAT_00020488 + 0x20455;
          piVar9 = piVar1;
          do {
            while( true ) {
              piVar10 = piVar9 + 1;
              if (*piVar9 == 0) goto LAB_00020410;
              iVar2 = FUN_000201ba(iVar8,param_3,*piVar9,param_2);
              if (iVar2 == -0xc) goto LAB_0002041a;
              if ((-1 < iVar2) || (iVar3 = FUN_00022a68(), iVar3 < 7)) break;
              iVar3 = *piVar9;
              pcVar4 = strerror(-iVar2);
              FUN_00022900(7,0,iVar7,0x78,iVar5,DAT_00020484 + 0x203f4,iVar3,pcVar4);
              piVar9 = piVar10;
            }
            piVar9 = piVar10;
          } while (piVar10 != (int *)0x0);
LAB_00020410:
          __base = (void *)FUN_00022004(iVar8);
          if (__base == (void *)0x0) {
LAB_0002041a:
            uVar6 = 0xfffffff4;
          }
          else {
            __nmemb = FUN_00021c78(iVar8);
            if (1 < __nmemb) {
              qsort(__base,__nmemb,4,(__compar_fn_t)(DAT_00020490 + 0x20446));
            }
            *param_1 = __base;
            uVar6 = 0;
          }
          FUN_00021668(iVar8);
        }
        FUN_000241f0(piVar1);
      }
      return uVar6;
    }
    uVar6 = 0x8a;
    iVar7 = DAT_00020474 + 0x20398;
    iVar5 = DAT_00020478 + 0x20388;
    iVar8 = DAT_0002047c + 0x2038a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar8,iVar5,uVar6,iVar7);
}



/* ===== FUN_00020494 @ 00020494 size=258 ===== */

undefined4 FUN_00020494(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *__file;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  char *__name;
  int iVar5;
  char *__s;
  int iVar6;
  char *__ptr;
  
  __name = (char *)(DAT_00020598 + 0x2049e);
  iVar6 = DAT_0002059c + 0x2052b;
  iVar5 = DAT_000205a0 + 0x204b6;
  __s = (char *)(DAT_00020598 + 0x204ab);
  do {
    if (*__name == '\0') {
      return 0;
    }
    if (*__name == '-') {
      __name = __name + 1;
      iVar1 = access(__name,0);
      if (-1 < iVar1) goto LAB_000204d2;
    }
    else {
LAB_000204d2:
      if (param_1 == 0) {
        __file = __s;
        __ptr = (char *)0x0;
      }
      else {
        __file = (char *)FUN_00023664(param_1,__s);
        __ptr = __file;
        if (__file == (char *)0x0) {
          return 0xfffffff4;
        }
      }
      iVar1 = FUN_000221f4(__name,__file);
      if ((iVar1 < 0) && (iVar2 = FUN_00022a68(), 6 < iVar2)) {
        FUN_00022900(7,iVar1,DAT_000205a8 + 0x2050e,0x43,DAT_000205ac + 0x20595,
                     DAT_000205a4 + 0x20508,__name,__file);
      }
      if ((((param_2 & param_3) != 0xffffffff) &&
          (iVar1 = lchown(__file,param_2,param_3), iVar1 < 0)) &&
         (iVar1 = FUN_00022a68(), 6 < iVar1)) {
        piVar3 = __errno_location();
        FUN_00022900(7,*piVar3,iVar5,0x47,iVar6,DAT_000205b0 + 0x20546,__file);
      }
      free(__ptr);
    }
    sVar4 = strlen(__s);
    __name = __s + sVar4 + 1;
    if (__s[sVar4 + 1] == '\0') {
      __s = __name;
      if (__name == (char *)0x0) {
        return 0;
      }
    }
    else {
      sVar4 = strlen(__name);
      __s = __name + sVar4 + 1;
    }
  } while( true );
}



/* ===== FUN_000205b4 @ 000205b4 size=142 ===== */

int FUN_000205b4(FILE *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_1 == (FILE *)0x0) {
    uVar4 = 0x1d;
    iVar5 = DAT_00020644 + 0x205c8;
    iVar3 = DAT_00020648 + 0x205ca;
    iVar1 = DAT_0002064c + 0x205cc;
  }
  else {
    if (param_2 != (char *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      fputs(param_2,param_1);
      iVar1 = FUN_00024af0(param_2,DAT_0002065c + 0x205fa);
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
    iVar5 = DAT_00020650 + 0x205dc;
    iVar3 = DAT_00020654 + 0x205de;
    iVar1 = DAT_00020658 + 0x205e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00020660 @ 00020660 size=86 ===== */

int FUN_00020660(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x31;
    iVar5 = DAT_000206b8 + 0x20686;
    iVar3 = DAT_000206bc + 0x20676;
    iVar1 = DAT_000206c0 + 0x20678;
  }
  else {
    if (param_2 != 0) {
      __stream = fopen64(param_1,(char *)(DAT_000206d0 + 0x20694));
      if (__stream == (FILE *)0x0) {
        piVar2 = __errno_location();
        iVar1 = -*piVar2;
      }
      else {
        iVar1 = FUN_000205b4(__stream,param_2);
        fclose(__stream);
      }
      return iVar1;
    }
    uVar4 = 0x32;
    iVar5 = DAT_000206c4 + 0x2069c;
    iVar3 = DAT_000206c8 + 0x2068c;
    iVar1 = DAT_000206cc + 0x2068e;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5,param_4);
}



/* ===== FUN_000206d4 @ 000206d4 size=154 ===== */

int FUN_000206d4(char *param_1,undefined4 *param_2)

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
    iVar6 = DAT_00020770 + 0x20710;
    iVar4 = DAT_00020774 + 0x206ee;
    iVar1 = DAT_00020778 + 0x206f0;
LAB_000206ee:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar1,iVar4,uVar5,iVar6);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0x3f;
    iVar6 = DAT_0002077c + 0x20726;
    iVar4 = DAT_00020780 + 0x20704;
    iVar1 = DAT_00020784 + 0x20706;
    goto LAB_000206ee;
  }
  __stream = fopen64(param_1,(char *)(DAT_00020788 + 0x2070c));
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
      goto LAB_00020744;
    }
    local_810[0] = '\0';
  }
  pcVar3 = strdup(local_810);
  if (pcVar3 == (char *)0x0) {
    iVar1 = -0xc;
  }
  else {
    FUN_000250a8();
    *param_2 = pcVar3;
    iVar1 = 0;
  }
LAB_00020744:
  fclose(__stream);
  return iVar1;
}



/* ===== FUN_0002078c @ 0002078c size=244 ===== */

int FUN_0002078c(FILE *param_1,undefined4 *param_2,int *param_3)

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
    iVar7 = DAT_00020880 + 0x207df;
    iVar5 = DAT_00020884 + 0x207aa;
    iVar1 = DAT_00020888 + 0x207ac;
LAB_000207aa:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar1,iVar5,uVar6,iVar7);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0x5c;
    iVar7 = DAT_0002088c + 0x207f5;
    iVar5 = DAT_00020890 + 0x207c0;
    iVar1 = DAT_00020894 + 0x207c2;
    goto LAB_000207aa;
  }
  iVar1 = fileno(param_1);
  iVar1 = fstat64(iVar1,&sStack_90);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
    pvVar8 = (void *)0x0;
    goto LAB_000207da;
  }
  if ((sStack_90.st_mode & 0xf000) == 0x8000) {
    if ((int)(-(uint)(0x400000 < (uint)sStack_90.st_size) - sStack_90.st_size._4_4_) < 0 ==
        (SBORROW4(0,sStack_90.st_size._4_4_) !=
        SBORROW4(-sStack_90.st_size._4_4_,(uint)(0x400000 < (uint)sStack_90.st_size)))) {
      uVar9 = (uint)sStack_90.st_size;
      if (sStack_90.st_size._4_4_ < (int)(uint)((uint)sStack_90.st_size == 0)) {
        uVar9 = 0x800;
      }
      goto LAB_00020812;
    }
    pvVar8 = (void *)0x0;
  }
  else {
    uVar9 = 0x800;
LAB_00020812:
    iVar1 = 0;
    pvVar8 = (void *)0x0;
    do {
      pvVar3 = realloc(pvVar8,uVar9 + 1);
      if (pvVar3 == (void *)0x0) {
        iVar1 = -0xc;
        goto LAB_000207da;
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
        goto LAB_000207da;
      }
      uVar9 = uVar9 * 2;
      iVar1 = iVar1 + sVar4;
    } while (uVar9 < 0x400001);
  }
  iVar1 = -7;
LAB_000207da:
  free(pvVar8);
  return iVar1;
}



/* ===== FUN_00020898 @ 00020898 size=90 ===== */

int FUN_00020898(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x98;
    iVar5 = DAT_000208f4 + 0x208f6;
    iVar3 = DAT_000208f8 + 0x208b0;
    iVar1 = DAT_000208fc + 0x208b2;
  }
  else {
    if (param_2 != 0) {
      __stream = fopen64(param_1,(char *)(DAT_0002090c + 0x208ce));
      if (__stream == (FILE *)0x0) {
        piVar2 = __errno_location();
        iVar1 = -*piVar2;
      }
      else {
        iVar1 = FUN_0002078c(__stream,param_2,param_3);
        fclose(__stream);
      }
      return iVar1;
    }
    uVar4 = 0x99;
    iVar5 = (int)&DAT_0002090c + DAT_00020900;
    iVar3 = DAT_00020904 + 0x208c6;
    iVar1 = DAT_00020908 + 0x208c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00020946 @ 00020946 size=28 ===== */

undefined4 FUN_00020946(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return *(undefined4 *)(FUN_00020968 + DAT_00020964 + (*(byte *)(param_1 + 0x27) & 3) * 0x10);
}



/* ===== FUN_00020968 @ 00020968 size=16 ===== */

uint FUN_00020968(int param_1)

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



/* ===== FUN_00020978 @ 00020978 size=50 ===== */

undefined4
FUN_00020978(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    puVar3 = (undefined4 *)(&UNK_000209aa + DAT_000209ac);
  }
  uVar1 = (**(code **)*param_1)(param_2,puVar3,iVar4,*(code **)*param_1,param_4);
  uVar2 = FUN_00020946(param_1);
  FUN_0002be90(uVar1,uVar2);
  return extraout_r1;
}



/* ===== FUN_000209b0 @ 000209b0 size=38 ===== */

int FUN_000209b0(int param_1)

{
  undefined8 uVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  else {
    param_1 = param_1 + 4;
  }
  uVar1 = FUN_00020946();
  return *(int *)(DAT_000209d8 + ((uint)((ulonglong)uVar1 >> 0x20) & 3) * 0x10 + 0x209cc) *
         (int)uVar1 + param_1;
}



/* ===== FUN_000209dc @ 000209dc size=28 ===== */

void FUN_000209dc(undefined4 param_1,int param_2,uint param_3)

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
  iVar1 = FUN_000209b0();
  *(undefined1 *)(iVar1 + param_2) = uVar2;
  return;
}



/* ===== FUN_000209f8 @ 000209f8 size=40 ===== */

uint FUN_000209f8(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_000209b0();
  uVar2 = FUN_00020946(param_1);
  while( true ) {
    if (uVar2 <= param_2) {
      return 0xffffffff;
    }
    if (*(char *)(iVar1 + param_2) != -1) break;
    param_2 = param_2 + 1;
  }
  return param_2;
}



/* ===== FUN_00020a20 @ 00020a20 size=28 ===== */

char * FUN_00020a20(char *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  sVar1 = strlen(param_1);
  FUN_00023878(&local_18,param_1,sVar1,param_2);
  return local_18;
}



/* ===== FUN_00020a3c @ 00020a3c size=26 ===== */

undefined4 FUN_00020a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_14 = param_1;
  local_10 = param_3;
  uStack_c = param_4;
  FUN_00023878(&local_10,&local_14,4,param_2,param_1);
  return local_10;
}



/* ===== FUN_00020a56 @ 00020a56 size=22 ===== */

undefined4 FUN_00020a56(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00023878(&local_10,param_1,8,param_2);
  return local_10;
}



/* ===== FUN_00020a70 @ 00020a70 size=46 ===== */

undefined4 FUN_00020a70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *extraout_r1;
  
  if (1 < (*(byte *)(param_1 + 0x27) & 3)) {
    if ((*(byte *)(param_1 + 0x27) & 3) == 2) {
      return *param_2;
    }
    FUN_000229f4(DAT_00020aa8 + 0x20a94,DAT_00020aa4 + 0x20a92,0x221,DAT_00020aa0 + 0x20a90,param_4)
    ;
    param_2 = extraout_r1;
  }
  return param_2[1];
}



/* ===== FUN_00020aac @ 00020aac size=78 ===== */

void FUN_00020aac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  size_t __n;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x27);
  if ((bVar1 & 4) == 0) {
    iVar3 = DAT_00020b04 + 0x20ada + (bVar1 & 3) * 0x10;
    iVar4 = *(int *)(iVar3 + 0xc);
    __n = iVar4 * *(int *)(iVar3 + 4);
    pvVar2 = memset((void *)(param_1 + 4),bVar1 & 4,__n);
    (*(code *)PTR_memset_00049214)((void *)((int)pvVar2 + __n),0xff,iVar4,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(DAT_00020b00 + 0x20ad0,DAT_00020afc + 0x20ace,0x301,DAT_00020af8 + 0x20ad6);
}



/* ===== FUN_00020b08 @ 00020b08 size=120 ===== */

int * FUN_00020b08(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = FUN_00025d98();
  iVar4 = DAT_00020b80 + 0x20b1c;
  if (uVar2 == 0) {
    piVar3 = calloc(*(size_t *)(DAT_00020b90 + 0x20b7a + param_2 * 0x10),1);
  }
  else {
    piVar3 = (int *)FUN_00022b6c(*(undefined4 *)(DAT_00020b84 + param_2 * 0x10 + 0x20b2c));
  }
  if (piVar3 != (int *)0x0) {
    *(byte *)((int)piVar3 + 0x27) =
         *(byte *)((int)piVar3 + 0x27) & 0xbc | (byte)param_2 & 3 | (byte)((uVar2 & 1) << 6);
    iVar1 = DAT_00020b8c;
    if (param_1 == 0) {
      param_1 = *(int *)(iVar4 + DAT_00020b88);
    }
    *piVar3 = param_1;
    if (param_2 == 1) {
      piVar3[10] = -1;
      piVar3[0xb] = -1;
    }
    FUN_00020aac(piVar3);
    if (*(char *)(iVar1 + 0x20b60) == '\0') {
      FUN_000237c8(iVar1 + 0x20b50,0x10);
      *(undefined1 *)(iVar1 + 0x20b60) = 1;
    }
  }
  return piVar3;
}



/* ===== FUN_00020bd8 @ 00020bd8 size=102 ===== */

void FUN_00020bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)((int)param_1 + 0x27);
  if ((int)(uVar4 << 0x1d) < 0) {
    uVar3 = 0x357;
    iVar5 = DAT_00020c38 + 0x20c31;
    iVar2 = DAT_00020c3c + 0x20bf6;
    iVar1 = DAT_00020c40 + 0x20bf8;
  }
  else {
    if ((*(byte *)((int)param_1 + 0x27) & 0x38) == 0) {
      if (-1 < (int)(uVar4 << 0x19)) {
        (*(code *)PTR_free_00049310)();
        return;
      }
      iVar1 = *(int *)(DAT_00020c50 + (uVar4 & 3) * 0x10 + 0x20c2a);
      *param_1 = *(undefined4 *)(iVar1 + 4);
      *(undefined4 **)(iVar1 + 4) = param_1;
      return;
    }
    uVar3 = 0x358;
    iVar5 = DAT_00020c44 + 0x20c4d;
    iVar2 = DAT_00020c48 + 0x20c12;
    iVar1 = DAT_00020c4c + 0x20c14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar2,uVar3,iVar5,param_4);
}



/* ===== FUN_00020c54 @ 00020c54 size=34 ===== */

int FUN_00020c54(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = param_1 + 4;
  }
  return *(int *)(DAT_00020c78 + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x20c6c) * param_2 + iVar1
  ;
}



/* ===== FUN_00020c7c @ 00020c7c size=40 ===== */

int FUN_00020c7c(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_00020c54();
  uVar2 = FUN_00020978(param_1,*puVar1);
  iVar4 = param_2 - uVar2;
  if (param_2 < uVar2) {
    iVar3 = FUN_00020946(param_1);
    iVar4 = iVar3 + iVar4;
  }
  return iVar4;
}



/* ===== FUN_00020ca4 @ 00020ca4 size=48 ===== */

int FUN_00020ca4(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  uint extraout_r2;
  
  if (param_3 < 0xfffffffc) {
    iVar1 = FUN_00020c54(param_1,param_3,param_3,param_4);
    return iVar1;
  }
  if (0xfffffffd < param_3) {
    FUN_000229f4(DAT_00020cdc + 0x20cca,DAT_00020cd8 + 0x20cc8,0x1b1,DAT_00020cd4 + 0x20d19);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
  }
  return param_2 + (param_3 + 4) * 0x10;
}



/* ===== FUN_00020ce0 @ 00020ce0 size=148 ===== */

void FUN_00020ce0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  void *__src;
  void *__dest;
  int iVar1;
  
  if (param_3 == param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00020d7c + 0x20d04,DAT_00020d78 + 0x20d02,0x1ee,DAT_00020d74 + 0x20d65,param_4)
    ;
  }
  __src = (void *)FUN_00020ca4();
  __dest = (void *)FUN_00020ca4(param_1,param_2,param_4);
  memcpy(__dest,__src,*(size_t *)(DAT_00020d80 + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x20d2a));
  if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
    if (*(int *)((int)__dest + 8) != -1) {
      iVar1 = FUN_00020ca4(param_1,param_2);
      *(int *)(iVar1 + 0xc) = param_4;
    }
    if (*(int *)((int)__dest + 0xc) != -1) {
      iVar1 = FUN_00020ca4(param_1,param_2);
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



/* ===== FUN_00020d84 @ 00020d84 size=130 ===== */

uint FUN_00020d84(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint extraout_r1;
  
  iVar1 = FUN_000209b0();
  uVar2 = FUN_00020946(param_1);
  if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00020e10 + 0x20db2,DAT_00020e0c + 0x20db0,0x4c2,DAT_00020e08 + 0x20e25);
  }
  uVar2 = 0;
  while( true ) {
    uVar3 = (uint)*(byte *)(iVar1 + param_2);
    if (uVar3 == 0xff) {
      return 0xffffffff;
    }
    if (0xfc < uVar3) {
      uVar3 = FUN_00020c7c(param_1,param_2);
    }
    if (uVar3 <= uVar2 && uVar2 != uVar3) break;
    if (uVar2 == uVar3) {
      puVar5 = (undefined4 *)FUN_00020c54(param_1,param_2);
      iVar6 = (**(code **)(*param_1 + 4))(*puVar5,param_3);
      if (iVar6 == 0) {
        return param_2;
      }
    }
    uVar2 = uVar2 + 1;
    uVar4 = FUN_00020946(param_1);
    FUN_0002be90(param_2 + 1,uVar4);
    param_2 = extraout_r1;
  }
  return 0xffffffff;
}



/* ===== FUN_00020e14 @ 00020e14 size=212 ===== */

bool FUN_00020e14(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_000209b0();
  uVar5 = 0;
  while( true ) {
    uVar4 = (uint)*(byte *)(iVar1 + param_2);
    uVar3 = uVar4 + 2 & 0xff;
    if (uVar3 < 2) break;
    if (uVar4 == 0xfd) {
      uVar4 = FUN_00020c7c(param_1,param_2);
      uVar3 = extraout_r3;
    }
    if (uVar4 < uVar5) {
      FUN_000209dc(param_1,param_2,uVar5,uVar3,param_4);
      FUN_00020ce0(param_1,param_3,param_2,0xfffffffd);
      FUN_00020ce0(param_1,param_3,0xfffffffc,param_2);
      FUN_00020ce0(param_1,param_3,0xfffffffd,0xfffffffc);
      uVar5 = uVar4;
    }
    uVar5 = uVar5 + 1;
    uVar2 = FUN_00020946(param_1);
    FUN_0002be90(param_2 + 1,uVar2);
    param_2 = extraout_r1;
  }
  if (uVar4 == 0xfe) {
    FUN_00020ce0(param_1,param_3,param_2,0xfffffffd);
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x27) << 0x1d;
  if ((int)uVar3 < 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (param_2 < uVar3) {
      *(uint *)(param_1 + 0x20) = param_2;
    }
  }
  FUN_000209dc(param_1,param_2,uVar5,uVar3,param_4);
  FUN_00020ce0(param_1,param_3,0xfffffffc,param_2);
  if (uVar4 == 0xfe) {
    FUN_00020ce0(param_1,param_3,0xfffffffd,0xfffffffc);
  }
  return uVar4 == 0xfe;
}



/* ===== FUN_00020ee8 @ 00020ee8 size=588 ===== */

undefined4 FUN_00020ee8(int param_1)

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
    iVar11 = DAT_00021134 + 0x20f8a;
    iVar5 = DAT_00021138 + 0x20f04;
    iVar2 = DAT_0002113c + 0x20f06;
LAB_00020f04:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar2,iVar5,uVar7,iVar11);
  }
  bVar1 = *(byte *)(param_1 + 0x27);
  uVar16 = FUN_00020968();
  uVar14 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar13 = bVar1 & 3;
  uVar6 = (uint)uVar16 + uVar14;
  if (!CARRY4((uint)uVar16,uVar14)) {
    if ((-1 < (int)((uint)bVar1 << 0x1d)) &&
       (uVar6 <= *(uint *)(DAT_00021140 + uVar13 * 0x10 + 0x20f32))) {
      return 0;
    }
    if (!CARRY4(uVar6 >> 2,uVar6)) {
      __n = *(size_t *)(DAT_00021144 + uVar13 * 0x10 + 0x20f42);
      uVar14 = __n + 1;
      if ((int)((ulonglong)uVar14 * (ulonglong)((uVar6 >> 2) + uVar6) >> 0x20) == 0) {
        uVar16 = FUN_00020946(param_1);
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
          iVar2 = DAT_0002114c;
          if ((*(char *)(DAT_00021148 + 0x20fdd) == '\0') ||
             ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0)) {
            FUN_000237c8(DAT_0002114c + 0x20ff2,0x10);
            *(undefined1 *)(iVar2 + 0x20ff1) = 1;
          }
          puVar12 = (undefined4 *)(DAT_00021150 + 0x21018);
          puVar4 = (undefined4 *)(param_1 + 8);
          puVar8 = (undefined4 *)(DAT_00021150 + 0x21008);
          do {
            puVar9 = puVar8 + 1;
            *puVar4 = *puVar8;
            puVar4 = puVar4 + 1;
            puVar8 = puVar9;
          } while (puVar9 != puVar12);
          *(void **)(param_1 + 4) = pvVar3;
          *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 4;
          uVar7 = FUN_0002bde8(__size,uVar14);
          *(undefined4 *)(param_1 + 0x1c) = uVar7;
          iVar2 = FUN_000209b0(param_1);
          pcVar15 = (char *)((int)pvVar3 + uVar6 * __n);
          for (uVar14 = 0; uVar14 != uVar6; uVar14 = uVar14 + 1) {
            cVar10 = *pcVar15;
            if (cVar10 == -2) {
              uVar7 = 0x482;
              iVar11 = DAT_00021160 + 0x2112c;
              iVar5 = DAT_00021164 + 0x210a6;
              iVar2 = DAT_00021168 + 0x210a8;
              goto LAB_00020f04;
            }
            if (cVar10 != -1) {
              cVar10 = -2;
            }
            *(char *)(iVar2 + uVar14) = cVar10;
            pcVar15 = pcVar15 + 1;
          }
          pvVar3 = (void *)FUN_00020c54(param_1,uVar6);
          iVar5 = FUN_00020946(param_1);
          memset(pvVar3,0,__n * (iVar5 - uVar6));
          iVar5 = FUN_00020946(param_1);
          memset((void *)(iVar2 + uVar6),0xff,iVar5 - uVar6);
          iVar5 = 0;
          for (uVar14 = 0; uVar14 != uVar6; uVar14 = uVar14 + 1) {
            if (*(char *)(iVar2 + uVar14) == -2) {
              puVar4 = (undefined4 *)FUN_00020c54(param_1,uVar14);
              uVar13 = FUN_00020978(param_1,*puVar4);
              if (uVar14 == uVar13) {
                iVar5 = iVar5 + 1;
                *(undefined1 *)(iVar2 + uVar14) = 0;
              }
              else {
                *(undefined1 *)(iVar2 + uVar14) = 0xff;
                FUN_00020ce0(param_1,local_48,uVar14,0xfffffffc);
                pvVar3 = (void *)FUN_00020c54(param_1,uVar14);
                memset(pvVar3,0,__n);
                while( true ) {
                  iVar5 = iVar5 + 1;
                  iVar11 = FUN_00020e14(param_1,uVar13,local_48);
                  if (iVar11 == 0) break;
                  uVar13 = FUN_00020978(param_1,local_48[0]);
                }
              }
            }
          }
          iVar2 = FUN_00020968(param_1);
          if (iVar2 == iVar5) {
            return 1;
          }
          uVar7 = 0x4b4;
          iVar11 = DAT_00021154 + 0x21110;
          iVar5 = DAT_00021158 + 0x2108a;
          iVar2 = DAT_0002115c + 0x2108c;
          goto LAB_00020f04;
        }
      }
    }
  }
  return 0xfffffff4;
}



/* ===== FUN_0002116c @ 0002116c size=248 ===== */

int FUN_0002116c(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00020946(param_1,param_4);
  if (param_2 < (uint)uVar6) {
    if ((int)((ulonglong)uVar6 >> 0x20) != 0) {
      iVar2 = FUN_00020ee8(param_1,1);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 != 0) {
        param_2 = FUN_00020978(param_1,*param_3);
      }
    }
    uVar4 = FUN_00020968(param_1);
    uVar6 = FUN_00020946(param_1,uVar4);
    if ((uint)((ulonglong)uVar6 >> 0x20) < (uint)uVar6) {
      if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
        iVar2 = *(int *)(param_1 + 0x2c);
        param_3[2] = 0xffffffff;
        param_3[3] = iVar2;
        if (iVar2 != -1) {
          iVar2 = FUN_00020c54(param_1);
          if (*(int *)(iVar2 + 8) != -1) {
            uVar4 = 0x419;
            iVar5 = DAT_0002127c + 0x212a1;
            iVar3 = DAT_00021280 + 0x2120c;
            iVar2 = DAT_00021284 + 0x2120e;
            goto LAB_00021190;
          }
          *(undefined4 *)(iVar2 + 8) = 0xfffffffc;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0xfffffffc;
        if (*(int *)(param_1 + 0x28) == -1) {
          *(undefined4 *)(param_1 + 0x28) = 0xfffffffc;
        }
      }
      iVar2 = FUN_00020e14(param_1,param_2,param_3);
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
      iVar5 = DAT_00021288 + 0x212d5;
      iVar3 = DAT_0002128c + 0x21240;
      iVar2 = DAT_00021290 + 0x21242;
    }
    else {
      uVar4 = 0x40d;
      iVar5 = DAT_00021270 + 0x21267;
      iVar3 = DAT_00021274 + 0x211d2;
      iVar2 = DAT_00021278 + 0x211d4;
    }
  }
  else {
    uVar4 = 0x402;
    iVar5 = DAT_00021264 + 0x21225;
    iVar3 = DAT_00021268 + 0x21190;
    iVar2 = DAT_0002126c + 0x21192;
  }
LAB_00021190:
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar2,iVar3,uVar4,iVar5);
}



/* ===== FUN_00021294 @ 00021294 size=362 ===== */

void FUN_00021294(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar2 = FUN_000209b0();
  if (*(char *)(iVar2 + param_2) == -1) {
    uVar5 = 0x22a;
    iVar6 = DAT_00021400 + 0x21367;
    iVar4 = DAT_00021404 + 0x212ba;
    iVar2 = DAT_00021408 + 0x212bc;
LAB_000212ba:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar2,iVar4,uVar5,iVar6,param_4);
  }
  uVar5 = FUN_00020946(param_1);
  iVar4 = param_2 + 1;
  while (FUN_0002be90(iVar4,uVar5), (byte)(*(char *)(iVar2 + extraout_r1) - 1U) < 0xfe) {
    if (extraout_r1 == param_2) {
      uVar5 = 0x23b;
      iVar6 = DAT_0002140c + 0x213a1;
      iVar4 = DAT_00021410 + 0x212f4;
      iVar2 = DAT_00021414 + 0x212f6;
      goto LAB_000212ba;
    }
    iVar4 = extraout_r1 + 1;
  }
  if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
    iVar4 = FUN_00020c54(param_1,param_2);
    iVar6 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar6 == -1) {
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
    }
    else {
      iVar3 = FUN_00020c54(param_1,iVar6);
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
    }
    if (*(int *)(iVar4 + 0xc) == -1) {
      *(int *)(param_1 + 0x28) = iVar6;
    }
    else {
      iVar4 = FUN_00020c54(param_1);
      *(int *)(iVar4 + 8) = iVar6;
    }
  }
  uVar5 = FUN_00020946(param_1);
  FUN_0002be90(param_2 + 1,uVar5);
  iVar4 = extraout_r1_00;
  do {
    iVar6 = iVar4;
    if (iVar6 == extraout_r1) {
      __s = (void *)FUN_00020c54(param_1,param_2);
      memset(__s,0,*(size_t *)(DAT_00021418 + (*(byte *)(param_1 + 0x27) & 3) * 0x10 + 0x21368));
      FUN_000209dc(param_1,param_2,0xffffffff);
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
        uVar7 = FUN_00020c7c(param_1,iVar6);
      }
      if (uVar7 == 0) {
        uVar5 = 0x251;
        iVar6 = DAT_0002141c + 0x2147d;
        iVar4 = DAT_00021420 + 0x213d0;
        iVar2 = DAT_00021424 + 0x213d2;
        goto LAB_000212ba;
      }
    }
    FUN_00020ce0(param_1,0,iVar6,param_2);
    FUN_000209dc(param_1,param_2,uVar7 - 1);
    uVar5 = FUN_00020946(param_1);
    FUN_0002be90(iVar6 + 1,uVar5);
    iVar4 = extraout_r1_01;
    param_2 = iVar6;
  } while( true );
}



/* ===== FUN_00021428 @ 00021428 size=308 ===== */

int FUN_00021428(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  
  if (param_1 == 0) goto LAB_00021430;
  bVar6 = *(byte *)(param_1 + 0x27) & 3;
  if (bVar6 == 1) {
    if (param_2 == (int *)0x0) {
      uVar5 = 0x260;
      puVar7 = (undefined *)(DAT_0002155c + 0x21519);
      iVar4 = DAT_00021560 + 0x2145a;
      iVar1 = DAT_00021564 + 0x2145c;
LAB_0002145a:
                    /* WARNING: Subroutine does not return */
      FUN_0002291a(iVar1,iVar4,uVar5,puVar7);
    }
    iVar1 = *param_2;
    if (iVar1 == -1) {
LAB_00021430:
      *param_2 = -1;
      return -1;
    }
    if (iVar1 + 2 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 + 1 == 0) goto LAB_00021430;
      piVar2 = (int *)FUN_00020c54(param_1,iVar1,0,iVar1 + 1,param_4);
    }
    else {
      piVar2 = (int *)FUN_00020c54(param_1,iVar1,iVar1 + 2,1,param_4);
      iVar4 = param_2[1];
      if (*piVar2 != iVar4) {
        iVar3 = FUN_00020946(param_1);
        FUN_0002be90(iVar1 + -1 + iVar3,iVar3);
        piVar2 = (int *)FUN_00020c54(param_1);
        iVar1 = extraout_r1;
        if (iVar4 != *piVar2) {
          uVar5 = 0x278;
          puVar7 = (undefined *)(DAT_00021568 + 0x21585);
          iVar4 = DAT_0002156c + 0x214c6;
          iVar1 = DAT_00021570 + 0x214c8;
          goto LAB_0002145a;
        }
      }
    }
    iVar4 = piVar2[2];
  }
  else {
    if (param_2 == (int *)0x0) {
      uVar5 = 0x292;
      puVar7 = &UNK_000215be + DAT_00021574;
      iVar4 = DAT_00021578 + 0x214dc;
      iVar1 = DAT_0002157c + 0x214de;
      goto LAB_0002145a;
    }
    iVar1 = *param_2;
    if (iVar1 == -1) goto LAB_00021430;
    if (iVar1 + 2 == 0) {
      if ((*(byte *)(param_1 + 0x27) & 4) == 0) {
        iVar1 = FUN_000209f8();
        *param_2 = iVar1;
      }
      else {
        iVar1 = FUN_000209f8(param_1,*(undefined4 *)(param_1 + 0x20));
        *param_2 = iVar1;
        *(int *)(param_1 + 0x20) = iVar1;
      }
      if (*param_2 == -1) goto LAB_00021430;
    }
    else {
      if (iVar1 == 0) {
        uVar5 = 0x2a4;
        puVar7 = &UNK_0002160a + DAT_00021580;
        iVar4 = DAT_00021584 + 0x21528;
        iVar1 = DAT_00021588 + 0x2152a;
        goto LAB_0002145a;
      }
      piVar2 = (int *)FUN_00020c54(param_1,iVar1,iVar1 + 2,bVar6,param_4);
      iVar4 = param_2[1];
      if (*piVar2 != iVar4) {
        *param_2 = iVar1 + -1;
        piVar2 = (int *)FUN_00020c54(param_1);
        if (iVar4 != *piVar2) {
          uVar5 = 0x2b0;
          puVar7 = (undefined *)(DAT_0002158c + 0x2163c);
          iVar4 = DAT_00021590 + 0x2155a;
          iVar1 = (int)&DAT_0002155c + DAT_00021594;
          goto LAB_0002145a;
        }
      }
    }
    iVar1 = *param_2;
    iVar4 = FUN_000209f8(param_1,iVar1 + 1);
  }
  *param_2 = iVar4;
  if (iVar4 != -1) {
    piVar2 = (int *)FUN_00020c54(param_1);
    param_2[1] = *piVar2;
  }
  return iVar1;
}



/* ===== FUN_000215c0 @ 000215c0 size=54 ===== */

undefined4 FUN_000215c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00021428();
  if (iVar1 == -1) {
    uVar2 = 0;
    if (param_3 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_3 = 0;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_00020c54(param_1,iVar1);
    uVar2 = FUN_00020a70(param_1,puVar3);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *puVar3;
    }
  }
  return uVar2;
}



/* ===== FUN_000215fc @ 000215fc size=6 ===== */

void FUN_000215fc(undefined4 param_1)

{
  FUN_00020b08(param_1,0);
  return;
}



/* ===== FUN_0002160e @ 0002160e size=62 ===== */

undefined4 FUN_0002160e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00020bd4 + 0x20bb0,DAT_00020bd0 + 0x20bae,0x33d,DAT_00020bcc + 0x20bcb);
  }
  if (*param_1 == 0) {
    iVar1 = FUN_00020b08(param_2,0,0,param_2,param_4);
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
    *param_1 = iVar1;
  }
  return 0;
}



/* ===== FUN_00021620 @ 00021620 size=72 ===== */

void FUN_00021620(int param_1)

{
  if (param_1 != 0) {
    if ((int)((uint)*(byte *)(param_1 + 0x27) << 0x1d) < 0) {
      free(*(void **)(param_1 + 4));
      *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfb;
    }
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 199;
    FUN_00020aac(param_1);
    if ((*(byte *)(param_1 + 0x27) & 3) == 1) {
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
  }
  return;
}



/* ===== FUN_00021668 @ 00021668 size=20 ===== */

undefined4 FUN_00021668(int param_1)

{
  if (param_1 != 0) {
    FUN_00021620();
    FUN_00020bd8(param_1);
  }
  return 0;
}



/* ===== FUN_0002167c @ 0002167c size=56 ===== */

void FUN_0002167c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__ptr;
  int iVar2;
  undefined4 extraout_r2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    iVar2 = 0;
    while( true ) {
      uVar3 = FUN_000209f8(param_1,iVar2);
      iVar2 = (int)uVar3;
      if (iVar2 == -1) break;
      uVar1 = FUN_00020c54(param_1,iVar2);
      __ptr = (void *)FUN_00020a70(param_1,uVar1);
      free(__ptr);
      iVar2 = iVar2 + 1;
    }
    FUN_00021620(param_1,(int)((ulonglong)uVar3 >> 0x20),extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== FUN_00021716 @ 00021716 size=98 ===== */

undefined4 FUN_00021716(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  int iStack_34;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if (iVar2 == -1) {
      local_38 = param_2;
      iStack_34 = param_3;
      uVar1 = FUN_0002116c(param_1,uVar1,&local_38,1);
    }
    else {
      iVar2 = FUN_00020c54(param_1,iVar2);
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
  FUN_0002291a(DAT_00021780 + 0x21738,DAT_0002177c + 0x21736,0x4dc,&UNK_00021838 + DAT_00021778);
}



/* ===== FUN_00021784 @ 00021784 size=76 ===== */

undefined4 FUN_00021784(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30 [8];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000217d8 + 0x217a4,DAT_000217d4 + 0x217a2,0x4f2,DAT_000217d0 + 0x218b0);
  }
  uVar1 = FUN_00020978();
  iVar2 = FUN_00020d84(param_1,uVar1,param_2);
  if (iVar2 == -1) {
    local_30[0] = param_2;
    uVar1 = FUN_0002116c(param_1,uVar1,local_30,1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00021898 @ 00021898 size=50 ===== */

undefined4 FUN_00021898(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if (iVar2 != -1) {
      uVar1 = FUN_00020c54(param_1,iVar2);
      uVar1 = FUN_00020a70(param_1,uVar1);
      return uVar1;
    }
  }
  return 0;
}



/* ===== FUN_000218ca @ 000218ca size=50 ===== */

undefined4 FUN_000218ca(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if (iVar2 != -1) {
      puVar3 = (undefined4 *)FUN_00020c54(param_1,iVar2);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *puVar3;
      }
      return puVar3[1];
    }
  }
  return 0;
}



/* ===== FUN_0002191a @ 0002191a size=62 ===== */

undefined4 FUN_0002191a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if (iVar2 != -1) {
      uVar1 = FUN_00020c54(param_1,iVar2);
      uVar1 = FUN_00020a70(param_1,uVar1);
      FUN_00021294(param_1,iVar2);
      return uVar1;
    }
  }
  return 0;
}



/* ===== FUN_00021958 @ 00021958 size=70 ===== */

undefined4 FUN_00021958(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if (iVar2 != -1) {
      puVar3 = (undefined4 *)FUN_00020c54(param_1,iVar2);
      uVar1 = puVar3[1];
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *puVar3;
      }
      FUN_00021294(param_1,iVar2);
      return uVar1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}



/* ===== FUN_00021c78 @ 00021c78 size=8 ===== */

void FUN_00021c78(int param_1)

{
  if (param_1 != 0) {
    FUN_00020968();
    return;
  }
  return;
}



/* ===== FUN_00021c88 @ 00021c88 size=92 ===== */

int FUN_00021c88(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    local_18 = param_1;
    uStack_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00021cec + 0x21ca6,DAT_00021ce8 + 0x21ca4,0x64d,&UNK_00021e1e + DAT_00021ce4);
  }
  local_18 = -2;
  uStack_14 = 0;
  do {
    iVar1 = FUN_00021428(param_2,&local_18);
    if (iVar1 == -1) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_00020c54(param_2,iVar1);
    iVar1 = FUN_00021716(param_1,*puVar2,puVar2[1]);
  } while ((-1 < iVar1) || (iVar1 == -0x11));
  return iVar1;
}



/* ===== FUN_00022004 @ 00022004 size=98 ===== */

undefined4 * FUN_00022004(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_00020968();
  uVar2 = iVar1 + 1;
  if (((uVar2 == 0) || (uVar2 >> 0x1e == 0)) &&
     (puVar4 = malloc(uVar2 * 4), puVar4 != (undefined4 *)0x0)) {
    local_20 = 0xfffffffe;
    uStack_1c = 0;
    iVar1 = FUN_00021428(param_1,&local_20);
    puVar5 = puVar4;
    while (iVar1 != -1) {
      uVar3 = FUN_00020c54(param_1,iVar1);
      uVar3 = FUN_00020a70(param_1,uVar3);
      *puVar5 = uVar3;
      iVar1 = FUN_00021428(param_1,&local_20);
      puVar5 = puVar5 + 1;
    }
    *puVar5 = 0;
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}



/* ===== FUN_00022066 @ 00022066 size=80 ===== */

undefined4 FUN_00022066(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000220c0 + 0x22084,DAT_000220bc + 0x22082,0x704,DAT_000220b8 + 0x2227c,param_4)
    ;
  }
  if (param_1 != 0) {
    uVar1 = FUN_00020978();
    iVar2 = FUN_00020d84(param_1,uVar1,param_2);
    if ((iVar2 != -1) && (iVar2 = FUN_00020c54(param_1,iVar2), *(int *)(iVar2 + 8) != -1)) {
      iVar2 = FUN_00020c54(param_1);
      return *(undefined4 *)(iVar2 + 4);
    }
  }
  return 0;
}



/* ===== FUN_00022170 @ 00022170 size=36 ===== */

uint FUN_00022170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_000237f8();
  uVar2 = FUN_00023fb8(param_1,param_2,param_3);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2 & (int)uVar2 >> 0x1f;
  }
  return uVar1;
}



/* ===== FUN_00022194 @ 00022194 size=84 ===== */

int FUN_00022194(char *param_1,__mode_t param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000221f0 + 0x221ac,DAT_000221ec + 0x221aa,0x28,DAT_000221e8 + 0x221a8);
  }
  iVar1 = FUN_00023838(param_1,0x4000);
  if (-1 < iVar1) {
    iVar2 = mkdir(param_1,param_2);
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar1 = -*piVar3;
    }
    FUN_0002383c();
    if (-1 < iVar1) {
      iVar1 = FUN_00023fb8(param_1,0);
      return iVar1;
    }
  }
  return iVar1;
}



/* ===== FUN_000221f4 @ 000221f4 size=108 ===== */

int FUN_000221f4(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x3c;
    iVar5 = DAT_00022260 + 0x22214;
    iVar3 = DAT_00022264 + 0x2220c;
    iVar1 = DAT_00022268 + 0x2220e;
  }
  else {
    if (param_2 != (char *)0x0) {
      iVar1 = FUN_00023838(param_2,0xa000);
      if (-1 < iVar1) {
        iVar3 = symlink(param_1,param_2);
        if (iVar3 < 0) {
          piVar2 = __errno_location();
          iVar1 = -*piVar2;
        }
        FUN_0002383c();
        if (-1 < iVar1) {
          iVar1 = FUN_00023fb8(param_2,0);
          return iVar1;
        }
      }
      return iVar1;
    }
    uVar4 = 0x3d;
    iVar5 = DAT_0002226c + 0x2222a;
    iVar3 = DAT_00022270 + 0x22222;
    iVar1 = DAT_00022274 + 0x22224;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00022278 @ 00022278 size=84 ===== */

int FUN_00022278(uint param_1)

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
    FUN_00026358(__fd,0x800000);
    getpid();
    FUN_000247f8(auStack_18);
    setsockopt(__fd,1,0x15,auStack_18,8);
  }
  return __fd;
}



/* ===== FUN_000222d0 @ 000222d0 size=42 ===== */

int FUN_000222d0(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_00022300 + 0x222d8);
  if (*piVar2 < 0) {
    iVar1 = open64((char *)(DAT_00022304 + 0x222e8),DAT_000222fc);
    *piVar2 = iVar1;
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
  }
  return 0;
}



/* ===== FUN_00022308 @ 00022308 size=46 ===== */

uint FUN_00022308(void)

{
  int iVar1;
  __pid_t _Var2;
  uint uVar3;
  
  iVar1 = DAT_0002233c;
  if (*(int *)(DAT_0002233c + 0x22314) < 0) {
    _Var2 = getpid();
    if (_Var2 == 1) {
      uVar3 = FUN_00024654(DAT_00022340 + 0x22324,DAT_00022338);
      *(uint *)(iVar1 + 0x22314) = uVar3;
      return uVar3 & (int)uVar3 >> 0x1f;
    }
    *(undefined4 *)(iVar1 + 0x22314) = 2;
  }
  return 0;
}



/* ===== FUN_00022344 @ 00022344 size=42 ===== */

void FUN_00022344(void)

{
  __pid_t _Var1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00022370 + 0x22350);
  if ((-1 < iVar2) && (_Var1 = getpid(), _Var1 == 1)) {
    if (2 < iVar2) {
      FUN_00024ccc(iVar2);
    }
    *(undefined4 *)((int)&DAT_00022370 + DAT_00022374) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00022378 @ 00022378 size=16 ===== */

void FUN_00022378(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_00022388 + 0x22380);
  uVar1 = FUN_00024ccc(*puVar2);
  *puVar2 = uVar1;
  return;
}



/* ===== FUN_0002238c @ 0002238c size=16 ===== */

void FUN_0002238c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0002239c;
  uVar2 = FUN_00024ccc(*(undefined4 *)((int)&DAT_0002239c + DAT_0002239c));
  *(undefined4 *)((int)&DAT_0002239c + iVar1) = uVar2;
  return;
}



/* ===== FUN_000223a0 @ 000223a0 size=928 ===== */

int FUN_000223a0(uint param_1,undefined4 param_2,undefined4 param_3,char *param_4)

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
  
  iVar1 = DAT_0002274c;
  iVar11 = DAT_00022744 + 0x223b0;
  if (*(int *)(DAT_00022748 + 0x223ba) == 9) {
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
      pcVar16 = (char *)(DAT_00022750 + 0x223e6);
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
      if (*(int *)(DAT_00022754 + 0x2240c) == 7) {
        FUN_000222d0();
      }
      iVar13 = DAT_00022758;
      pmVar19 = (msghdr *)0x0;
      pvVar20 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      piVar21 = *(iovec **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      sVar4 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      if (*(int *)(DAT_00022758 + 0x22420) - 5U < 2) {
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
        if (*(int *)(DAT_0002275c + 0x22458) < 0) goto LAB_0002258e;
        snprintf(acStack_e0,0xf,(char *)(DAT_00022760 + 0x22468),local_f4);
        local_d2 = 0;
        uVar22 = FUN_00024758(0);
        local_e4 = FUN_0002bfac((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00022740,0);
        __tp = localtime(&local_e4);
        if (__tp == (tm *)0x0) {
LAB_00022586:
          FUN_0002238c();
LAB_0002258a:
          FUN_000222d0();
          goto LAB_0002258e;
        }
        sVar5 = strftime((char *)&local_78,0x40,(char *)(DAT_00022764 + 0x2249c),__tp);
        if (sVar5 == 0) goto LAB_00022586;
        _Var6 = getpid();
        snprintf(acStack_d0,0x11,(char *)(DAT_00022768 + 0x224b2),_Var6);
        local_c0 = 0;
        local_a0.msg_name = acStack_e0;
        local_a0.msg_namelen = strlen(acStack_e0);
        local_a0.msg_iov = &local_78;
        local_a0.msg_iovlen = strlen((char *)&local_78);
        local_a0.msg_control = (void *)**(undefined4 **)(iVar11 + DAT_0002276c);
        local_a0.msg_controllen = strlen(local_a0.msg_control);
        local_a0.msg_flags = (int)acStack_d0;
        pvStack_84 = (void *)strlen(acStack_d0);
        local_80 = __s;
        pvStack_7c = (void *)strlen((char *)__s);
        iVar9 = DAT_00022770;
        if (*(char *)(iVar13 + 0x22424) != '\0') {
          pvStack_7c = (void *)((int)pvStack_7c + 1);
        }
LAB_00022504:
        while (uVar12 = sendmsg(*(int *)(iVar9 + 0x2250e),&local_bc,0x4000), -1 < (int)uVar12) {
          if ((*(char *)(iVar1 + 0x223e2) == '\0') ||
             (local_a0.msg_namelen + local_a0.msg_iovlen + local_a0.msg_controllen + (int)pvStack_84
              + (int)pvStack_7c <= uVar12)) goto LAB_00022524;
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
            if (iVar13 == 5) goto LAB_00022504;
          }
        }
        piVar7 = __errno_location();
        iVar13 = *piVar7;
        if (0 < iVar13) {
          if (iVar13 != 0xb) goto LAB_00022586;
          goto LAB_0002258a;
        }
        if (iVar13 == 0) goto LAB_0002258e;
        goto LAB_00022524;
      }
LAB_0002258e:
      if ((*(int *)(DAT_00022774 + 0x22594) - 6U < 3) || (*(int *)(DAT_00022774 + 0x22594) == 2)) {
        sStack_64 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        piVar7 = (int *)(DAT_00022778 + 0x225ac);
        local_68 = (msghdr *)0x0;
        local_60 = (msghdr *)0x0;
        local_58 = (msghdr *)0x0;
        if (*piVar7 < 0) goto LAB_00022654;
        local_78.iov_base = pmVar19;
        local_78.iov_len = (size_t)pvVar20;
        local_70 = piVar21;
        local_6c = sVar4;
        sStack_5c = sStack_64;
        sStack_54 = sStack_64;
        snprintf((char *)&local_bc,0xf,(char *)(DAT_0002277c + 0x225d0),local_f4);
        local_bc.msg_iovlen._0_3_ = (uint3)(ushort)local_bc.msg_iovlen;
        _Var6 = getpid();
        snprintf((char *)&local_a0,0x11,(char *)(DAT_00022780 + 0x225ec),_Var6);
        local_a0.msg_control = (void *)((uint)local_a0.msg_control & 0xffffff00);
        local_78.iov_base = &local_bc;
        local_78.iov_len = strlen((char *)&local_bc);
        local_70 = (iovec *)**(undefined4 **)(iVar11 + DAT_0002276c);
        local_6c = strlen((char *)local_70);
        local_68 = &local_a0;
        sStack_64 = strlen((char *)&local_a0);
        local_60 = __s;
        sStack_5c = strlen((char *)__s);
        local_58 = (msghdr *)(DAT_00022784 + 0x2262e);
        sStack_54 = 1;
        sVar8 = writev(*piVar7,&local_78,5);
        if (sVar8 < 0) {
          piVar7 = __errno_location();
          if (*piVar7 < 1) {
            if (*piVar7 != 0) goto LAB_00022524;
          }
          else {
            FUN_00022378();
            FUN_00022308();
          }
          goto LAB_00022654;
        }
LAB_00022524:
        iVar15 = iVar15 + 1;
        pmVar14 = local_68;
        pmVar19 = local_60;
        pmVar2 = local_58;
        pmVar3 = local_50;
      }
      else {
LAB_00022654:
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
        if (-1 < *(int *)(DAT_00022788 + 0x22664)) {
          bVar18 = *(int *)(DAT_0002278c + 0x22680) == 1;
          if (bVar18) {
            sprintf((char *)&local_a0,(char *)(DAT_00022790 + 0x22694),local_f4);
            local_78.iov_base = &local_a0;
            local_78.iov_len = strlen((char *)&local_a0);
          }
          uVar12 = (uint)bVar18;
          (&local_78)[uVar12].iov_base = __s;
          sVar4 = strlen((char *)__s);
          iVar13 = DAT_00022794;
          (&local_78)[uVar12].iov_len = sVar4;
          (&local_78)[uVar12 + 1].iov_base = (void *)(DAT_00022798 + 0x226d0);
          iVar9 = *(int *)(DAT_00022794 + 0x226d2);
          (&local_78)[uVar12 + 1].iov_len = 1;
          sVar8 = writev(iVar9,&local_78,uVar12 + 2);
          pmVar14 = local_68;
          pmVar19 = local_60;
          pmVar2 = local_58;
          pmVar3 = local_50;
          if (sVar8 < 0) {
            piVar7 = __errno_location();
            if ((*piVar7 == 5) && (_Var6 = getpid(), _Var6 == 1)) {
              FUN_00022344();
              FUN_00022308();
              pmVar14 = local_68;
              pmVar19 = local_60;
              pmVar2 = local_58;
              pmVar3 = local_50;
              if ((*(int *)(iVar13 + 0x226d2) < 0) ||
                 (sVar8 = writev(*(int *)(iVar13 + 0x226d2),&local_78,uVar12 + 2),
                 pmVar14 = local_68, pmVar19 = local_60, pmVar2 = local_58, pmVar3 = local_50,
                 -1 < sVar8)) goto LAB_00022526;
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
LAB_00022526:
      local_50 = pmVar3;
      local_58 = pmVar2;
      local_60 = pmVar19;
      local_68 = pmVar14;
    } while (param_4 != (char *)0x0);
  }
  return iVar15;
}



/* ===== FUN_0002279c @ 0002279c size=228 ===== */

int FUN_0002279c(void)

{
  __pid_t _Var1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  sockaddr *__addr;
  char *__s;
  
  iVar4 = DAT_00022888;
  iVar2 = DAT_00022880;
  iVar6 = *(int *)(DAT_00022880 + 0x227a6);
  if (iVar6 == 9) {
    FUN_0002238c();
    FUN_00022344();
    return 0;
  }
  if (iVar6 - 7U < 2) {
    _Var1 = getpid();
    if ((_Var1 != 1) && (iVar2 = isatty(2), 0 < iVar2)) goto LAB_00022876;
  }
  else if (iVar6 - 5U < 2) {
    if (-1 < *(int *)(DAT_00022888 + 0x22804)) {
LAB_00022868:
      iVar6 = 0;
      goto LAB_00022870;
    }
    iVar6 = FUN_00022278(2);
    *(int *)(iVar4 + 0x22804) = iVar6;
    if (-1 < iVar6) {
      __addr = (sockaddr *)(DAT_0002288c + 0x22814);
      __s = (char *)(DAT_0002288c + 0x22816);
      sVar3 = strlen(__s);
      iVar6 = connect(iVar6,__addr,sVar3 + 2);
      if (-1 < iVar6) {
        iVar6 = 0;
        *(undefined1 *)(iVar2 + 0x227aa) = 0;
        goto LAB_00022870;
      }
      FUN_00024ccc(*(undefined4 *)(iVar4 + 0x22804));
      iVar6 = FUN_00022278(1);
      *(int *)(iVar4 + 0x22804) = iVar6;
      if (-1 < iVar6) {
        sVar3 = strlen(__s);
        iVar4 = connect(iVar6,__addr,sVar3 + 2);
        if (-1 < iVar4) {
          *(undefined1 *)(iVar2 + 0x227aa) = 1;
          goto LAB_00022868;
        }
        piVar5 = __errno_location();
        iVar6 = -*piVar5;
      }
    }
    FUN_0002238c();
    if (-1 < iVar6) goto LAB_00022870;
  }
  if (((2 < *(int *)(DAT_00022884 + 0x227d8) - 6U) && (*(int *)(DAT_00022884 + 0x227d8) != 2)) ||
     (iVar6 = FUN_000222d0(), iVar6 < 0)) {
LAB_00022876:
    FUN_0002238c();
    iVar2 = FUN_00022308();
    return iVar2;
  }
  FUN_0002238c();
LAB_00022870:
  FUN_00022344();
  return iVar6;
}



/* ===== FUN_00022890 @ 00022890 size=18 ===== */

void FUN_00022890(void)

{
  FUN_0002238c();
  FUN_00022378();
  FUN_00022344();
  return;
}



/* ===== FUN_000228a2 @ 000228a2 size=88 ===== */

undefined4
FUN_000228a2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,__gnuc_va_list param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_820 [2047];
  undefined1 local_21;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  if (*(int *)(DAT_000228fc + 0x228ca) < (int)(param_1 & 7)) {
    uVar2 = 0;
  }
  else {
    vsnprintf(acStack_820,0x800,param_6,param_7);
    local_21 = 0;
    uVar2 = FUN_000223a0(param_1,param_3,param_4,acStack_820);
  }
  *piVar1 = iVar3;
  return uVar2;
}



/* ===== FUN_00022900 @ 00022900 size=26 ===== */

void FUN_00022900(void)

{
  FUN_000228a2();
  return;
}



/* ===== FUN_0002291a @ 0002291a size=66 ===== */

void FUN_0002291a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  
  iVar1 = DAT_00022960;
  if (1 < *(int *)(DAT_0002295c + 0x22932)) {
    __s = (char *)(DAT_00022960 + 0x22937);
    snprintf(__s,0x800,(char *)(DAT_00022964 + 0x2293e),param_1,param_2,param_3,param_4,param_4);
    *(undefined1 *)(iVar1 + 0x23136) = 0;
    FUN_000223a0(2,param_2,param_3,__s);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00022968 @ 00022968 size=56 ===== */

void FUN_00022968(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 < 0) {
    uVar3 = 0xdd;
    iVar4 = DAT_000229a0 + 0x229fa;
    iVar2 = DAT_000229a4 + 0x2297e;
    iVar1 = DAT_000229a8 + 0x22980;
  }
  else {
    if (param_1 < 10) {
      *(int *)(DAT_000229b8 + 0x2299e) = param_1;
      return;
    }
    uVar3 = 0xde;
    iVar4 = DAT_000229ac + 0x22a12;
    iVar2 = DAT_000229b0 + 0x22996;
    iVar1 = DAT_000229b4 + 0x22998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar2,uVar3,iVar4,param_4);
}



/* ===== FUN_000229bc @ 000229bc size=40 ===== */

void FUN_000229bc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 & 0xfffffff8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000229ec + 0x229da,DAT_000229e8 + 0x229d8,0xea,DAT_000229e4 + 0x22a63,param_4);
  }
  *(uint *)((int)&DAT_000229ec + DAT_000229f0 + 2) = param_1 & 7;
  return;
}



/* ===== FUN_000229f4 @ 000229f4 size=66 ===== */

void FUN_000229f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  
  iVar1 = DAT_00022a3c;
  if (1 < *(int *)(DAT_00022a38 + 0x22a0c)) {
    __s = (char *)(DAT_00022a3c + 0x22a11);
    snprintf(__s,0x800,(char *)(DAT_00022a40 + 0x22a18),param_1,param_2,param_3,param_4,param_4);
    *(undefined1 *)(iVar1 + 0x23210) = 0;
    FUN_000223a0(2,param_2,param_3,__s);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00022a44 @ 00022a44 size=32 ===== */

undefined4 FUN_00022a44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00022900(3,0xc,param_1,param_2,param_3,DAT_00022a64 + 0x22a4c,param_3);
  return 0xfffffff4;
}



/* ===== FUN_00022a68 @ 00022a68 size=8 ===== */

undefined4 FUN_00022a68(void)

{
  return *(undefined4 *)(&UNK_00022a7a + DAT_00022a70);
}



/* ===== FUN_00022ab8 @ 00022ab8 size=154 ===== */

int * FUN_00022ab8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_1[2];
  if (uVar9 < 4) {
    uVar4 = 0x27;
    iVar5 = DAT_00022b54 + 0x22ad0;
    iVar3 = DAT_00022b58 + 0x22ad2;
    iVar1 = DAT_00022b5c + 0x22ad4;
LAB_00022ad2:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
  }
  uVar8 = param_1[3];
  if (uVar8 == 0) {
    uVar4 = 0x28;
    iVar5 = DAT_00022b60 + 0x22ae6;
    iVar3 = DAT_00022b64 + 0x22ae8;
    iVar1 = DAT_00022b68 + 0x22aea;
    goto LAB_00022ad2;
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    param_1[1] = *piVar2;
    return piVar2;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 8) < uVar6) goto LAB_00022b3c;
  }
  uVar7 = uVar6 << 1;
  if (uVar6 << 1 < uVar8) {
    uVar7 = uVar8;
  }
  iVar3 = FUN_00024a8c();
  uVar8 = uVar9 * uVar7 + iVar3 + 0xb & -iVar3;
  iVar3 = FUN_0002bde8(uVar8 - 0xc,uVar9);
  piVar2 = malloc(uVar8);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar2 = iVar1;
  piVar2[1] = iVar3;
  piVar2[2] = 0;
  *param_1 = (int)piVar2;
LAB_00022b3c:
  iVar1 = *param_1;
  iVar3 = *(int *)(iVar1 + 8);
  *(int *)(iVar1 + 8) = iVar3 + 1;
  return (int *)(iVar3 * uVar9 + iVar1 + 0xc);
}



/* ===== FUN_00022b6c @ 00022b6c size=24 ===== */

void * FUN_00022b6c(int param_1)

{
  void *__s;
  
  __s = (void *)FUN_00022ab8();
  if (__s != (void *)0x0) {
    memset(__s,0,*(size_t *)(param_1 + 8));
  }
  return __s;
}



/* ===== FUN_00022b8c @ 00022b8c size=20 ===== */

void FUN_00022b8c(void)

{
  FUN_00022bc8();
  return;
}



/* ===== FUN_00022ba8 @ 00022ba8 size=24 ===== */

void FUN_00022ba8(undefined4 param_1,undefined4 param_2)

{
  FUN_00022c56(0,param_1,param_2);
  return;
}



/* ===== FUN_00022bc8 @ 00022bc8 size=142 ===== */

int FUN_00022bc8(char *param_1,uint param_2,__uid_t param_3,__gid_t param_4,code *param_5)

{
  int iVar1;
  int *piVar2;
  stat64 sStack_80;
  
  iVar1 = (*param_5)();
  if (((iVar1 < 0) || (iVar1 = FUN_000256ec(param_1,param_2,param_3,param_4), -1 < iVar1)) &&
     (iVar1 = lstat64(param_1,&sStack_80), -1 < iVar1)) {
    if (((((param_2 & 7) < (sStack_80.st_mode & 7)) ||
         ((param_2 & 0x38) < (sStack_80.st_mode & 0x38))) ||
        (((param_2 & 0x1c0) < (sStack_80.st_mode & 0x1c0) ||
         ((param_3 != 0xffffffff && (sStack_80.st_uid != param_3)))))) ||
       ((param_4 != 0xffffffff && (sStack_80.st_gid != param_4)))) {
      iVar1 = -0x11;
    }
    else if ((sStack_80.st_mode & 0xf000) == 0x4000) {
      iVar1 = 0;
    }
    else {
      iVar1 = -0x11;
    }
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== FUN_00022c56 @ 00022c56 size=292 ===== */

int FUN_00022c56(int param_1,char *param_2,undefined4 param_3,code *param_4)

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
  
  local_1034 = param_4;
  if (param_2 == (char *)0x0) {
    uVar7 = 0x39;
    iVar8 = DAT_00022d7c + 0x22c78;
    iVar6 = DAT_00022d80 + 0x22c7a;
    iVar1 = DAT_00022d84 + 0x22c7c;
LAB_00022c7a:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar1,iVar6,uVar7,iVar8);
  }
  if ((param_1 == 0) || (iVar1 = FUN_0002309a(param_2,param_1), iVar1 != 0)) {
    pcVar2 = strrchr(param_2,0x2f);
    if (pcVar2 == (char *)0x0) {
      return -0x16;
    }
    if (param_2 != pcVar2) {
      __n = (int)pcVar2 - (int)param_2;
      if (0x1000 < __n) {
        uVar7 = 0x48;
        iVar8 = DAT_00022d88 + 0x22cc2;
        iVar6 = DAT_00022d8c + 0x22cc4;
        iVar1 = DAT_00022d90 + 0x22cc6;
        goto LAB_00022c7a;
      }
      pvVar3 = memcpy(auStack_102c,param_2,__n);
      *(undefined1 *)((int)pvVar3 + __n) = 0;
      iVar1 = FUN_00026814(pvVar3,1);
      if (iVar1 < 1) {
        if (iVar1 != 0) {
          pcVar2 = (char *)(DAT_00022d94 + 0x22cf0);
          sVar4 = strspn(param_2,pcVar2);
          local_1038 = 0;
          __s = param_2 + sVar4;
          do {
            do {
              sVar4 = strlen(param_2);
              iVar1 = -(sVar4 + 8 & 0xfffffff8);
              sVar4 = strcspn(__s,pcVar2);
              local_103c = __s + sVar4;
              sVar4 = strspn(local_103c,pcVar2);
              __s = local_103c + sVar4;
              if (local_103c[sVar4] == '\0') {
                return 0;
              }
              local_103c = (char *)((int)local_103c - (int)param_2);
              memcpy(auStack_1040 + iVar1,param_2,(size_t)local_103c);
              auStack_1040[(int)local_103c + iVar1] = (char)local_1038;
            } while (((param_1 != 0) &&
                     (iVar6 = FUN_0002309a(param_1,auStack_1040 + iVar1), iVar6 != 0)) ||
                    (iVar1 = (*local_1034)(auStack_1040 + iVar1,param_3), -1 < iVar1));
            piVar5 = __errno_location();
          } while (*piVar5 == 0x11);
          return -*piVar5;
        }
        goto LAB_00022c8a;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00022c8a:
    iVar1 = -0x14;
  }
  return iVar1;
}



/* ===== FUN_00022d98 @ 00022d98 size=24 ===== */

void FUN_00022d98(undefined4 param_1,undefined4 param_2)

{
  FUN_00022c56(0,param_1,param_2);
  return;
}



/* ===== FUN_00022df6 @ 00022df6 size=86 ===== */

int FUN_00022df6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(DAT_00022e10 + 0x22e00 + DAT_00022e14);
  iVar1 = FUN_00022c56(0);
  if (-1 < iVar1) {
    iVar1 = (*pcVar3)(param_1,param_2);
    if ((iVar1 < 0) &&
       ((piVar2 = __errno_location(), *piVar2 != 0x11 ||
        (iVar1 = FUN_00026814(param_1,1), iVar1 < 1)))) {
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00022e18 @ 00022e18 size=186 ===== */

int FUN_00022e18(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *local_3c;
  char acStack_38 [36];
  
  local_3c = (char *)0x0;
  if ((param_3 == 0) || (*param_2 != '\0')) {
    iVar6 = openat64(param_1,param_2,DAT_00022ed4);
    if (-1 < iVar6) {
      snprintf(acStack_38,0x1e,(char *)(DAT_00022ee8 + 0x22ec8),iVar6);
      goto LAB_00022e3c;
    }
  }
  else {
    iVar6 = -1;
    snprintf(acStack_38,0x1e,(char *)(DAT_00022ed8 + 0x22e36),param_1);
LAB_00022e3c:
    iVar1 = FUN_00020898(acStack_38,&local_3c,0);
    pcVar5 = local_3c;
    if (iVar1 == -2) {
LAB_00022ecc:
      iVar1 = -0x5f;
      goto LAB_00022eaa;
    }
    if (-1 < iVar1) {
      iVar1 = strncmp(local_3c,(char *)(DAT_00022edc + 0x22e5a),7);
      if ((iVar1 != 0) || (pcVar4 = pcVar5 + 7, pcVar4 == (char *)0x0)) {
        pcVar4 = strstr(pcVar5,(char *)(DAT_00022ee0 + 0x22e6a));
        if (pcVar4 == (char *)0x0) goto LAB_00022ecc;
        pcVar4 = pcVar4 + 8;
      }
      pcVar5 = (char *)(DAT_00022ee4 + 0x22e7a);
      sVar2 = strspn(pcVar4,pcVar5);
      pcVar4 = pcVar4 + sVar2;
      sVar2 = strcspn(pcVar4,pcVar5);
      pcVar4[sVar2] = '\0';
      iVar1 = FUN_00024e50(pcVar4,param_4);
      goto LAB_00022eaa;
    }
  }
  piVar3 = __errno_location();
  iVar1 = -*piVar3;
LAB_00022eaa:
  FUN_00024ccc(iVar6);
  free(local_3c);
  return iVar1;
}



/* ===== FUN_00022eec @ 00022eec size=12 ===== */

bool FUN_00022eec(char *param_1)

{
  return *param_1 == '/';
}



/* ===== FUN_00022ef8 @ 00022ef8 size=16 ===== */

bool FUN_00022ef8(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,0x2f);
  return pcVar1 != (char *)0x0;
}



/* ===== FUN_0002309a @ 0002309a size=160 ===== */

char * FUN_0002309a(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

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
    iVar6 = DAT_0002313c + 0x230ea;
    iVar4 = DAT_00023140 + 0x230b4;
    iVar1 = DAT_00023144 + 0x230b6;
  }
  else {
    if (param_2 != (char *)0x0) {
      if ((*param_1 == '/') == (*param_2 == '/')) {
        __accept = (char *)(DAT_00023154 + 0x230ea);
        while( true ) {
          sVar2 = strspn(param_1,__accept);
          __s = param_1 + sVar2;
          sVar3 = strspn(param_2,__accept);
          __s_00 = param_2 + sVar3;
          if (param_2[sVar3] == '\0') break;
          if (param_1[sVar2] == '\0') goto LAB_00023132;
          sVar2 = strcspn(__s,__accept);
          sVar3 = strcspn(__s_00,__accept);
          if ((sVar2 != sVar3) || (iVar1 = memcmp(__s,__s_00,sVar2), iVar1 != 0)) goto LAB_00023132;
          param_1 = __s + sVar2;
          param_2 = __s_00 + sVar2;
        }
      }
      else {
LAB_00023132:
        __s = (char *)0x0;
      }
      return __s;
    }
    uVar5 = 0xfd;
    iVar6 = DAT_00023148 + 0x23100;
    iVar4 = DAT_0002314c + 0x230ca;
    iVar1 = DAT_00023150 + 0x230cc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6,param_4);
}



/* ===== FUN_00023158 @ 00023158 size=280 ===== */

int * FUN_00023158(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *__ptr;
  int *piVar4;
  char *pcVar5;
  char *__ptr_00;
  int iVar6;
  int iVar7;
  int *local_30;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      return param_1;
    }
    iVar6 = 0;
    iVar7 = 0;
    local_30 = param_1;
    do {
      piVar4 = local_30 + 1;
      pcVar5 = (char *)*local_30;
      if (pcVar5 == (char *)0x0) break;
      iVar1 = FUN_00022eec(pcVar5);
      if (iVar1 == 0) {
        free(pcVar5);
        __ptr_00 = (char *)0x0;
        iVar1 = iVar6;
LAB_00023192:
        iVar6 = iVar1;
        free(__ptr_00);
      }
      else {
        if (param_2 == 0) {
          __ptr_00 = (char *)0x0;
        }
        else {
          pcVar2 = (char *)FUN_00025154(param_2,pcVar5);
          __ptr_00 = pcVar5;
          pcVar5 = pcVar2;
          if (pcVar2 == (char *)0x0) goto LAB_00023192;
        }
        piVar3 = __errno_location();
        *piVar3 = 0;
        __ptr = realpath(pcVar5,(char *)0x0);
        pcVar2 = __ptr_00;
        if (__ptr == (char *)0x0) {
          if (*piVar3 != 2) {
            free(pcVar5);
            if ((*piVar3 != 0xc) && (*piVar3 != 0)) {
              iVar1 = iVar6;
            }
            goto LAB_00023192;
          }
          __ptr = pcVar5;
          if (param_2 != 0) {
            free(pcVar5);
            pcVar2 = (char *)0x0;
            __ptr = __ptr_00;
          }
        }
        else if (param_2 == 0) {
          free(pcVar5);
        }
        else {
          free(pcVar5);
          pcVar5 = (char *)FUN_0002309a(__ptr,param_2);
          if (pcVar5 == (char *)0x0) {
            free(__ptr);
            pcVar2 = (char *)0x0;
            __ptr = __ptr_00;
          }
          else {
            if ((*pcVar5 != '/') || (pcVar5 == (char *)0xffffffff)) {
              pcVar5 = pcVar5 + -1;
              *pcVar5 = '/';
            }
            pcVar5 = strdup(pcVar5);
            free(__ptr);
            __ptr = pcVar5;
            if (pcVar5 == (char *)0x0) goto LAB_00023192;
          }
        }
        param_1[iVar7] = (int)__ptr;
        free(pcVar2);
        iVar7 = iVar7 + 1;
      }
      local_30 = piVar4;
    } while (piVar4 != (int *)0x0);
    param_1[iVar7] = 0;
    if (iVar6 == 0) {
      return param_1;
    }
  }
  return (int *)0x0;
}



/* ===== FUN_00023270 @ 00023270 size=62 ===== */

int * FUN_00023270(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      return param_1;
    }
    iVar1 = FUN_00023158();
    piVar2 = param_1;
    if (iVar1 != 0) {
      while ((piVar2 != (int *)0x0 && (*piVar2 != 0))) {
        FUN_0002437a(piVar2 + 1);
        piVar2 = piVar2 + 1;
      }
      return param_1;
    }
  }
  return (int *)0x0;
}



/* ===== FUN_00023294 @ 00023294 size=212 ===== */

int FUN_00023294(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *__accept;
  char *__s;
  char *__s_00;
  
  if (param_1 == (char *)0x0) {
    uVar6 = 0x11f;
    iVar7 = DAT_00023368 + 0x232f6;
    iVar5 = DAT_0002336c + 0x232b0;
    iVar1 = DAT_00023370 + 0x232b2;
  }
  else {
    if (param_2 != (char *)0x0) {
      if (*param_1 == '/') {
        iVar1 = 1 - (uint)(*param_2 == '/');
      }
      else {
        iVar1 = -(uint)(*param_2 == '/');
      }
      if (iVar1 == 0) {
        __accept = (char *)(DAT_00023380 + 0x232e8);
        while( true ) {
          sVar2 = strspn(param_1,__accept);
          __s_00 = param_1 + sVar2;
          sVar3 = strspn(param_2,__accept);
          __s = param_2 + sVar3;
          if (param_1[sVar2] == '\0') break;
          if (param_2[sVar3] == '\0') {
            return 1;
          }
          sVar3 = strcspn(__s_00,__accept);
          sVar4 = strcspn(__s,__accept);
          sVar2 = sVar3;
          if (sVar4 <= sVar3) {
            sVar2 = sVar4;
          }
          iVar1 = memcmp(__s_00,__s,sVar2);
          if (iVar1 != 0) {
            return (uint)(0 < iVar1) + (iVar1 >> 0x1f);
          }
          if (sVar4 < sVar3) {
            iVar1 = 1 - (uint)(sVar3 < sVar4);
          }
          else {
            iVar1 = -(uint)(sVar3 < sVar4);
          }
          if (iVar1 != 0) {
            return iVar1;
          }
          param_1 = __s_00 + sVar3;
          param_2 = __s + sVar4;
        }
        iVar1 = -(uint)(param_2[sVar3] != '\0');
      }
      return iVar1;
    }
    uVar6 = 0x120;
    iVar7 = DAT_00023374 + 0x2330e;
    iVar5 = DAT_00023378 + 0x232c8;
    iVar1 = DAT_0002337c + 0x232ca;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar5,uVar6,iVar7,param_4);
}



/* ===== FUN_00023384 @ 00023384 size=14 ===== */

bool FUN_00023384(void)

{
  int iVar1;
  
  iVar1 = FUN_00023294();
  return iVar1 == 0;
}



/* ===== FUN_00023392 @ 00023392 size=378 ===== */

uint FUN_00023392(int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_200;
  int local_1fc;
  stat64 local_1f8;
  stat64 local_190;
  size_t local_128;
  int local_124;
  undefined1 auStack_120 [128];
  size_t local_a0;
  int local_9c;
  undefined1 auStack_98 [128];
  
  memset(&local_124,0,0x84);
  local_128 = 0x80;
  memset(&local_9c,0,0x84);
  local_a0 = 0x80;
  local_200 = -1;
  local_1fc = -1;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00023514 + 0x233da,DAT_00023510 + 0x233d8,0x17b,DAT_0002350c + 0x2342b);
  }
  lVar1 = syscall(0x172,param_1,DAT_00023518 + 0x233ec,&local_128,&local_200,0x1000);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    if (iVar3 == 0x26) {
LAB_00023474:
      uVar4 = FUN_00022e18(param_1,DAT_00023520 + 0x23482,0x1000,&local_200);
      if (uVar4 == 0xffffffa1) {
        bVar5 = true;
      }
      else {
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar4 = FUN_00022e18(param_1,DAT_00023524 + 0x2349a,0,&local_1fc);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if (local_200 != local_1fc) goto LAB_00023438;
        bVar5 = false;
      }
      iVar3 = fstatat64(param_1,(char *)(DAT_00023528 + 0x234ba),&local_1f8,0x1000);
      if ((-1 < iVar3) &&
         (iVar3 = fstatat64(param_1,(char *)(DAT_0002352c + 0x234da),&local_190,0), -1 < iVar3)) {
        if (local_1f8.st_dev._4_4_ == local_190.st_dev._4_4_ &&
            (int)local_1f8.st_dev == (int)local_190.st_dev) {
          if (local_1f8.st_ino._4_4_ != local_190.st_ino._4_4_ ||
              (int)local_1f8.st_ino != (int)local_190.st_ino) {
            return 0;
          }
        }
        else if (!bVar5) {
          return 0;
        }
        goto LAB_00023438;
      }
      piVar2 = __errno_location();
      iVar3 = *piVar2;
    }
    else if (iVar3 == 0x5f) {
      bVar5 = true;
      goto LAB_0002340e;
    }
LAB_00023406:
    uVar4 = -iVar3;
  }
  else {
    bVar5 = false;
LAB_0002340e:
    lVar1 = syscall(0x172,param_1,DAT_0002351c + 0x2341c,&local_a0,&local_1fc,0);
    if (lVar1 < 0) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      if (iVar3 != 0x5f) goto LAB_00023406;
      if (bVar5) goto LAB_00023474;
    }
    else if ((!bVar5) &&
            (((local_128 != local_a0 || (local_124 != local_9c)) ||
             (iVar3 = memcmp(auStack_120,auStack_98,local_128), iVar3 != 0)))) {
      return (uint)(local_200 != local_1fc);
    }
LAB_00023438:
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== FUN_00023664 @ 00023664 size=146 ===== */

char * FUN_00023664(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *__dest;
  char *pcVar6;
  char *pcVar7;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000236fc + 0x2367e,DAT_000236f8 + 0x2367c,0x226,DAT_000236f4 + 0x23721,param_4)
    ;
  }
  do {
    pcVar2 = param_2;
    cVar1 = *pcVar2;
    if (cVar1 != '/') break;
    param_2 = pcVar2 + 1;
  } while (pcVar2[1] == '/');
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar3 = FUN_00023384(param_1,DAT_00023700 + 0x2369e), iVar3 != 0)) {
    pcVar2 = (char *)(*(code *)PTR_strdup_00049204)(pcVar2);
    return pcVar2;
  }
  sVar4 = strlen(param_1);
  sVar5 = strlen(pcVar2);
  __dest = malloc(sVar5 + sVar4 + 2);
  if (__dest != (char *)0x0) {
    pcVar6 = stpcpy(__dest,param_1);
    do {
      pcVar7 = pcVar6;
      if (pcVar7 <= __dest) break;
      pcVar6 = pcVar7 + -1;
    } while (pcVar7[-1] == '/');
    pcVar6 = pcVar7;
    if (cVar1 != '/') {
      pcVar6 = pcVar7 + 1;
      *pcVar7 = '/';
    }
    strcpy(pcVar6,pcVar2);
  }
  return __dest;
}



/* ===== FUN_00023704 @ 00023704 size=144 ===== */

int FUN_00023704(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(DAT_00023798 + 0x23710);
  if (*piVar4 != 0) {
    lVar1 = syscall(0x180,param_1,param_2,1,param_4);
    if (param_2 == lVar1) {
      iVar3 = 0;
      *piVar4 = 1;
      iVar5 = -1;
      goto LAB_0002372e;
    }
    if (-1 < lVar1) {
      iVar5 = -1;
      iVar3 = -0x3d;
      goto LAB_0002372e;
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
        goto LAB_0002372e;
      }
      iVar5 = 1;
    }
    *piVar4 = iVar5;
  }
  iVar5 = open64((char *)(DAT_0002379c + 0x23752),DAT_00023794);
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
    iVar3 = FUN_00025a94(iVar5,param_1,param_2,1);
  }
LAB_0002372e:
  FUN_00024ccc(iVar5);
  return iVar3;
}



/* ===== FUN_000237a0 @ 000237a0 size=34 ===== */

void FUN_000237a0(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(DAT_000237c4 + 0x237a8);
  if (*pcVar3 == '\0') {
    uVar1 = FUN_00024758();
    uVar2 = syscall(0xe0);
    srand(uVar2 ^ uVar1);
    *pcVar3 = '\x01';
  }
  return;
}



/* ===== FUN_000237c8 @ 000237c8 size=36 ===== */

void FUN_000237c8(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00023704();
  if (iVar1 < 0) {
    FUN_000237a0();
    puVar2 = param_1 + param_2;
    for (; param_1 < puVar2; param_1 = param_1 + 1) {
      iVar1 = rand();
      *param_1 = (char)iVar1;
    }
  }
  return;
}



/* ===== FUN_000237f2 @ 000237f2 size=4 ===== */

undefined4 FUN_000237f2(void)

{
  return 0;
}



/* ===== FUN_000237f6 @ 000237f6 size=2 ===== */

void FUN_000237f6(void)

{
  return;
}



/* ===== FUN_000237f8 @ 000237f8 size=4 ===== */

undefined4 FUN_000237f8(void)

{
  return 0;
}



/* ===== FUN_000237fc @ 000237fc size=4 ===== */

undefined4 FUN_000237fc(void)

{
  return 0;
}



/* ===== FUN_00023838 @ 00023838 size=4 ===== */

undefined4 FUN_00023838(void)

{
  return 0;
}



/* ===== FUN_0002383c @ 0002383c size=2 ===== */

void FUN_0002383c(void)

{
  return;
}



/* ===== FUN_00023878 @ 00023878 size=1600 ===== */

void FUN_00023878(undefined1 *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

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
  local_a0 = uVar14 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._0_4_;
  local_9c = uVar2 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._4_4_;
  local_a8 = s_setybdetarenegylmodnaroduespemos_00023ec0._8_4_ ^ uVar1;
  local_a4 = s_setybdetarenegylmodnaroduespemos_00023ec0._12_4_ ^ uVar10;
  uVar14 = uVar14 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._16_4_;
  uVar2 = uVar2 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._20_4_;
  uVar1 = uVar1 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._24_4_;
  uVar10 = uVar10 ^ s_setybdetarenegylmodnaroduespemos_00023ec0._28_4_;
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



/* ===== FUN_00023ee4 @ 00023ee4 size=26 ===== */

undefined4 FUN_00023ee4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00023f08 + 0x23ef8,DAT_00023f04 + 0x23ef6,0x33,DAT_00023f00 + 0x23ef4,param_4);
  }
  return 0;
}



/* ===== FUN_00023fb8 @ 00023fb8 size=28 ===== */

undefined4 FUN_00023fb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00023fdc + 0x23fce,DAT_00023fd8 + 0x23fcc,0x9d,DAT_00023fd4 + 0x24032,param_4);
  }
  return 0;
}



/* ===== FUN_00023fe8 @ 00023fe8 size=42 ===== */

void FUN_00023fe8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(byte *)(param_1 + 0xc); uVar1 = uVar1 + 1) {
    FUN_00023fe8(*(undefined4 *)((int)*(void **)(param_1 + 8) + uVar1 * 8 + 4));
  }
  free(*(void **)(param_1 + 8));
  (*(code *)PTR_free_00049310)(param_1,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== FUN_00024012 @ 00024012 size=72 ===== */

undefined4 * FUN_00024012(void)

{
  undefined4 *__ptr;
  void *__ptr_00;
  void *pvVar1;
  
  __ptr = calloc(1,0x20);
  if (__ptr != (undefined4 *)0x0) {
    __ptr_00 = calloc(1,1);
    *__ptr = __ptr_00;
    if (__ptr_00 != (void *)0x0) {
      __ptr[1] = 1;
      pvVar1 = calloc(1,0x10);
      __ptr[2] = pvVar1;
      if (pvVar1 != (void *)0x0) {
        __ptr[3] = 1;
        return __ptr;
      }
    }
    free(__ptr_00);
    free((void *)__ptr[2]);
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0002405a @ 0002405a size=20 ===== */

void FUN_0002405a(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00023fe8();
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



/* ===== FUN_0002406e @ 0002406e size=32 ===== */

void FUN_0002406e(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_00023fe8();
  }
  free((void *)*param_1);
  (*(code *)PTR_free_00049310)(param_1);
  return;
}



/* ===== FUN_000241d8 @ 000241d8 size=24 ===== */

void FUN_000241d8(undefined4 *param_1)

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



/* ===== FUN_000241f0 @ 000241f0 size=18 ===== */

undefined4 FUN_000241f0(void *param_1)

{
  FUN_000241d8();
  free(param_1);
  return 0;
}



/* ===== FUN_00024202 @ 00024202 size=22 ===== */

int FUN_00024202(int param_1)

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



/* ===== FUN_00024218 @ 00024218 size=82 ===== */

undefined4 * FUN_00024218(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_00024202();
  uVar2 = iVar1 + 1;
  if (((uVar2 == 0) || (uVar2 >> 0x1e == 0)) &&
     (puVar5 = malloc(uVar2 * 4), puVar5 != (undefined4 *)0x0)) {
    puVar4 = puVar5;
    if (param_1 == 0) {
LAB_00024248:
      *puVar4 = 0;
    }
    else {
      puVar6 = (undefined4 *)(param_1 + -4);
      do {
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) goto LAB_00024248;
        pcVar3 = strdup((char *)*puVar6);
        *puVar4 = pcVar3;
        puVar4 = puVar4 + 1;
      } while (pcVar3 != (char *)0x0);
      FUN_000241f0(puVar5);
      puVar5 = (undefined4 *)0x0;
    }
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}



/* ===== FUN_0002426a @ 0002426a size=124 ===== */

undefined4 * FUN_0002426a(char *param_1,int *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_14;
  
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    local_14 = param_2;
    if (pcVar1 != (char *)0x0) {
      pcVar1 = (char *)0x1;
      local_14 = param_2;
    }
    while( true ) {
      piVar2 = local_14 + 1;
      iVar3 = *local_14;
      if (iVar3 == 0) break;
      local_14 = piVar2;
      if (iVar3 != -1) {
        pcVar1 = pcVar1 + 1;
      }
    }
  }
  pcVar1 = pcVar1 + 1;
  if (((pcVar1 == (char *)0x0) || ((uint)pcVar1 >> 0x1e == 0)) &&
     (puVar4 = malloc((int)pcVar1 * 4), puVar4 != (undefined4 *)0x0)) {
    iVar3 = 0;
    if (param_1 != (char *)0x0) {
      if (param_1 == (char *)0xffffffff) {
        iVar3 = 0;
      }
      else {
        pcVar1 = strdup(param_1);
        *puVar4 = pcVar1;
        if (pcVar1 == (char *)0x0) {
LAB_000242de:
          FUN_000241f0(puVar4);
          goto LAB_0002428c;
        }
        iVar3 = 1;
      }
      while( true ) {
        piVar2 = param_2 + 1;
        pcVar1 = (char *)*param_2;
        if (pcVar1 == (char *)0x0) break;
        param_2 = piVar2;
        if (pcVar1 != (char *)0xffffffff) {
          pcVar1 = strdup(pcVar1);
          puVar4[iVar3] = pcVar1;
          if (pcVar1 == (char *)0x0) goto LAB_000242de;
          iVar3 = iVar3 + 1;
        }
      }
    }
    puVar4[iVar3] = 0;
  }
  else {
LAB_0002428c:
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}



/* ===== FUN_00024300 @ 00024300 size=68 ===== */

undefined4 FUN_00024300(undefined4 *param_1,int param_2)

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
    uVar1 = FUN_00024202(pvVar3);
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



/* ===== FUN_0002435a @ 0002435a size=54 ===== */

int FUN_0002435a(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = 0;
  if (param_2 != (char *)0x0) {
    __ptr = strdup(param_2);
    if (__ptr != (char *)0x0) {
      iVar1 = FUN_00024300(param_1);
      if (iVar1 < 0) {
        free(__ptr);
      }
      return iVar1;
    }
    iVar1 = -0xc;
  }
  return iVar1;
}



/* ===== FUN_0002437a @ 0002437a size=72 ===== */

undefined4 * FUN_0002437a(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *__s1;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0002291a(DAT_000243cc + 0x243a8,DAT_000243c8 + 0x243a6,0xd7,DAT_000243c4 + 0x243a4);
    }
    puVar3 = param_1 + -1;
    puVar2 = param_1;
    while( true ) {
      puVar3 = puVar3 + 1;
      __s1 = (char *)*puVar3;
      if (__s1 == (char *)0x0) break;
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        free(__s1);
      }
      else {
        *puVar2 = __s1;
        puVar2 = puVar2 + 1;
      }
    }
    *puVar2 = 0;
  }
  return param_1;
}



/* ===== FUN_000243ec @ 000243ec size=64 ===== */

uint FUN_000243ec(undefined4 *param_1,uint param_2,char *param_3)

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



/* ===== FUN_0002442c @ 0002442c size=52 ===== */

int FUN_0002442c(int *param_1,size_t param_2,char *param_3,undefined4 param_4)

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



/* ===== FUN_00024460 @ 00024460 size=44 ===== */

void FUN_00024460(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
    param_2 = FUN_000243ec(param_1,param_2,param_3,piVar1,uVar2);
    param_3 = *local_14;
    piVar1 = local_14;
    local_14 = local_14 + 1;
  } while (param_3 != 0);
  return;
}



/* ===== FUN_0002448c @ 0002448c size=16 ===== */

void FUN_0002448c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  FUN_000243ec(&local_c);
  return;
}



/* ===== FUN_0002449c @ 0002449c size=46 ===== */

void FUN_0002449c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *local_18;
  undefined4 uStack_14;
  int local_4;
  
  local_18 = &local_4;
  uStack_14 = param_1;
  local_4 = param_4;
  do {
    param_2 = FUN_000243ec(&uStack_14,param_2,param_3);
    param_3 = *local_18;
    local_18 = local_18 + 1;
  } while (param_3 != 0);
  return;
}



/* ===== FUN_000244cc @ 000244cc size=50 ===== */

char * FUN_000244cc(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *__accept;
  
  __accept = (char *)(DAT_00024500 + 0x244d6);
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



/* ===== FUN_00024504 @ 00024504 size=154 ===== */

void FUN_00024504(char *param_1,int param_2)

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
    iVar7 = DAT_000245a0 + 0x2451c;
    iVar5 = DAT_000245a4 + 0x2451e;
    iVar2 = DAT_000245a8 + 0x24520;
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_00022a68();
      if (6 < iVar2) {
        FUN_00022900(7,0,DAT_000245bc + 0x2454e,0x41,DAT_000245c0 + 0x24561,DAT_000245b8 + 0x24548,
                     param_1,param_2);
      }
      sVar3 = strlen(param_1);
      uVar6 = *(undefined4 *)(DAT_000245c4 + 0x2456c);
      iVar2 = -(sVar3 + 0x12 & 0xfffffff8);
      *(undefined4 *)((int)&uStack_18 + iVar2) = *(undefined4 *)(DAT_000245c4 + 0x24568);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar6;
      uVar1 = *(undefined1 *)(DAT_000245c4 + 0x24572);
      *(undefined2 *)(&stack0xfffffff0 + iVar2) = *(undefined2 *)(DAT_000245c4 + 0x24570);
      (&stack0xfffffff2)[iVar2] = uVar1;
      pcVar4 = stpcpy(&stack0xfffffff2 + iVar2,param_1);
      *pcVar4 = '\0';
      FUN_00020660((undefined4 *)((int)&uStack_18 + iVar2),param_2);
      return;
    }
    uVar6 = 0x3f;
    iVar7 = DAT_000245ac + 0x24530;
    iVar5 = DAT_000245b0 + 0x24532;
    iVar2 = DAT_000245b4 + 0x24534;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar2,iVar5,uVar6,iVar7);
}



/* ===== FUN_000245c8 @ 000245c8 size=112 ===== */

void FUN_000245c8(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    iVar7 = DAT_00024638 + 0x245f8;
    iVar5 = DAT_0002463c + 0x245e2;
    iVar2 = DAT_00024640 + 0x245e4;
  }
  else {
    if (param_2 != 0) {
      sVar3 = strlen(param_1);
      uVar6 = *(undefined4 *)(DAT_00024650 + 0x24608);
      iVar2 = -(sVar3 + 0x12 & 0xfffffff8);
      *(undefined4 *)((int)&uStack_18 + iVar2) = *(undefined4 *)(DAT_00024650 + 0x24604);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar6;
      uVar1 = *(undefined1 *)(DAT_00024650 + 0x2460e);
      *(undefined2 *)(&stack0xfffffff0 + iVar2) = *(undefined2 *)(DAT_00024650 + 0x2460c);
      (&stack0xfffffff2)[iVar2] = uVar1;
      pcVar4 = stpcpy(&stack0xfffffff2 + iVar2,param_1);
      *pcVar4 = '\0';
      FUN_00020898((int)&uStack_18 + iVar2,param_2);
      return;
    }
    uVar6 = 0x4b;
    iVar7 = DAT_00024644 + 0x2460e;
    iVar5 = DAT_00024648 + 0x245f8;
    iVar2 = DAT_0002464c + 0x245fa;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar2,iVar5,uVar6,iVar7);
}



/* ===== FUN_00024654 @ 00024654 size=116 ===== */

int FUN_00024654(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2 << 0x19;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000246d0 + 0x2466e,DAT_000246cc + 0x2466c,0x39,DAT_000246c8 + 0x2466a);
  }
  iVar4 = 0x15;
  while (iVar2 = open64(param_1,param_2,0,iVar2,param_4), iVar2 < 0) {
    piVar1 = __errno_location();
    iVar2 = *piVar1;
    if (iVar2 != 5) goto LAB_0002468a;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return -5;
    }
    usleep(50000);
    iVar2 = extraout_r3;
  }
  iVar4 = isatty(iVar2);
  if (iVar4 < 0) {
    FUN_00024ccc(iVar2);
    piVar1 = __errno_location();
    iVar2 = *piVar1;
LAB_0002468a:
    iVar3 = -iVar2;
  }
  else {
    iVar3 = iVar2;
    if (iVar4 == 0) {
      iVar3 = -0x19;
      FUN_00024ccc(iVar2);
    }
  }
  return iVar3;
}



/* ===== FUN_000246d8 @ 000246d8 size=112 ===== */

longlong FUN_000246d8(uint *param_1)

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
    FUN_0002291a(DAT_00024754 + 0x246f0,DAT_00024750 + 0x246ee,0x26,DAT_0002474c + 0x246ec);
  }
  uVar3 = *param_1;
  uVar1 = param_1[1];
  if ((uVar1 & uVar3) != 0xffffffff) {
    lVar6 = FUN_0002bfac(uVar1,(int)uVar1 >> 0x1f,1000,0);
    uVar5 = VectorShiftRight(CONCAT44(uVar3,uVar3),0x20);
    uVar7 = FUN_0002bfac(~(uint)lVar6,~(uint)((ulonglong)lVar6 >> 0x20),DAT_00024748,0);
    uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar4 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar4 = (uint)uVar5 <= (uint)uVar7;
    }
    if (bVar4) {
      return (longlong)DAT_00024748 * (longlong)(int)uVar3 + lVar6;
    }
  }
  return -1;
}



/* ===== FUN_00024758 @ 00024758 size=42 ===== */

void FUN_00024758(clockid_t param_1,long param_2)

{
  int iVar1;
  timespec tStack_10;
  
  tStack_10.tv_sec = param_1;
  tStack_10.tv_nsec = param_2;
  iVar1 = clock_gettime(param_1,&tStack_10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002478c + 0x24776,DAT_00024788 + 0x24774,0x20,DAT_00024784 + 0x2477e);
  }
  FUN_000246d8(&tStack_10);
  return;
}



/* ===== FUN_00024790 @ 00024790 size=88 ===== */

undefined4 * FUN_00024790(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000247f4 + 0x247ac,DAT_000247f0 + 0x247aa,0x35,DAT_000247ec + 0x247b8);
  }
  if (param_4 == -1 && param_3 == -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002bfac(param_3,param_4,DAT_000247e8,0);
    uVar1 = DAT_000247e8;
    *param_1 = uVar2;
    FUN_0002bfac(param_3,param_4,uVar1,0);
    param_1[1] = extraout_r2 * 1000;
  }
  return param_1;
}



/* ===== FUN_000247f8 @ 000247f8 size=82 ===== */

undefined4 * FUN_000247f8(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00024858 + 0x24814,DAT_00024854 + 0x24812,0x43,DAT_00024850 + 0x2482f);
  }
  if (param_4 == -1 && param_3 == -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    uVar2 = FUN_0002bfac(param_3,param_4,DAT_0002484c,0);
    uVar1 = DAT_0002484c;
    *param_1 = uVar2;
    FUN_0002bfac(param_3,param_4,uVar1,0);
    param_1[1] = extraout_r2;
  }
  return param_1;
}



/* ===== FUN_0002485c @ 0002485c size=442 ===== */

char * FUN_0002485c(char *param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6)

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
    iVar8 = DAT_00024a20 + 0x248ab;
    iVar3 = DAT_00024a24 + 0x24880;
    iVar1 = DAT_00024a28 + 0x24882;
  }
  else {
    if (param_2 != 0) {
      if (param_4 == -1 && param_3 == -1) {
        pcVar4 = (char *)(DAT_00024a38 + 0x248aa);
      }
      else {
        if (param_3 != 0 || param_4 != 0) {
          bVar13 = false;
          puVar11 = (undefined4 *)(DAT_00024a3c + 0x248d4);
          iVar3 = 0;
          iVar1 = DAT_00024a40 + 0x248d8;
          __format = (char *)(DAT_00024a44 + 0x248de);
          pcVar4 = param_1;
          do {
            uVar10 = (uint)((ulonglong)lVar15 >> 0x20);
            uVar2 = (uint)lVar15;
            bVar12 = param_6 <= uVar10;
            if (uVar10 == param_6) {
              bVar12 = param_5 <= uVar2;
            }
            if ((!bVar12) && (bVar13)) goto LAB_000249be;
            uVar5 = puVar11[2];
            uVar7 = puVar11[3];
            uVar16 = *(undefined8 *)(puVar11 + 2);
            bVar12 = uVar7 <= uVar10;
            if (uVar10 == uVar7) {
              bVar12 = uVar5 <= uVar2;
            }
            if (bVar12) {
              if (param_2 < 2) {
LAB_000249be:
                *pcVar4 = '\0';
                return param_1;
              }
              uVar14 = FUN_0002bfac(uVar2,uVar10,uVar5,uVar7);
              lVar15 = CONCAT44(extraout_r3,extraout_r2);
              bVar13 = uVar10 <= DAT_00024a1c;
              if (DAT_00024a1c == uVar10) {
                bVar13 = uVar2 <= DAT_00024a18;
              }
              if ((bVar13) && (extraout_r3 != 0 || extraout_r2 != 0)) {
                iVar8 = 0;
                while( true ) {
                  iStack_44 = (int)((ulonglong)uVar16 >> 0x20);
                  local_48 = (uint)uVar16;
                  uVar16 = CONCAT44(param_6,param_5);
                  if (iStack_44 == 0 && local_48 < 2) break;
                  iVar8 = iVar8 + 1;
                  uVar16 = FUN_0002bfac(local_48,iStack_44,10,0);
                }
                while( true ) {
                  iVar9 = (int)((ulonglong)uVar16 >> 0x20);
                  uStack_3c = (undefined4)((ulonglong)lVar15 >> 0x20);
                  local_40 = (undefined4)lVar15;
                  if (iVar9 == 0 && (uint)uVar16 < 2) break;
                  iVar8 = iVar8 + -1;
                  lVar15 = FUN_0002bfac(local_40,uStack_3c,10,0);
                  uVar16 = FUN_0002bfac((uint)uVar16,iVar9,10,0);
                }
                if (iVar8 < 1) goto LAB_00024a0e;
                if (param_1 < pcVar4) {
                  iVar9 = DAT_00024a54 + 150000;
                }
                else {
                  iVar9 = DAT_00024a4c + 0x24978;
                }
                lVar15 = 0;
                uVar2 = snprintf(pcVar4,param_2,(char *)(DAT_00024a50 + 0x2499a),iVar9,uVar14,iVar8)
                ;
              }
              else {
LAB_00024a0e:
                iVar8 = iVar1;
                if (param_1 < pcVar4) {
                  iVar8 = DAT_00024a58 + 0x249f6;
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
            if ((iVar3 == 9) || (puVar11 = puVar11 + 4, lVar15 == 0)) goto LAB_000249be;
          } while( true );
        }
        pcVar4 = (char *)(DAT_00024a48 + 0x2493c);
      }
      strncpy(param_1,pcVar4,param_2 - 1);
      param_1[param_2 - 1] = '\0';
      return param_1;
    }
    uVar6 = 0x65;
    iVar8 = DAT_00024a2c + 0x248c1;
    iVar3 = DAT_00024a30 + 0x24896;
    iVar1 = DAT_00024a34 + 0x24898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar6,iVar8);
}



/* ===== FUN_00024a86 @ 00024a86 size=8 ===== */

void FUN_00024a86(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_malloc_000490d4)(param_2);
  return;
}



/* ===== FUN_00024a8c @ 00024a8c size=50 ===== */

void FUN_00024a8c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 in_r3;
  
  iVar2 = __tls_get_addr(DAT_00024ac0 + 0x24a94);
  iVar1 = DAT_00024ac4;
  if (*(int *)(iVar2 + DAT_00024ac4) == 0) {
    lVar3 = sysconf(0x1e);
    if (lVar3 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0002291a(DAT_00024ad0 + 0x24ab8,DAT_00024acc + 0x24ab6,0x57,DAT_00024ac8 + 0x24ab4,in_r3);
    }
    *(long *)(iVar2 + iVar1) = lVar3;
  }
  return;
}



/* ===== FUN_00024ad4 @ 00024ad4 size=28 ===== */

bool FUN_00024ad4(char *param_1,char *param_2)

{
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return false;
    }
    param_2 = (char *)strcmp(param_1,param_2);
  }
  return param_2 == (char *)0x0;
}



/* ===== FUN_00024af0 @ 00024af0 size=98 ===== */

char * FUN_00024af0(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x6d;
    iVar5 = DAT_00024b54 + 0x24b0e;
    iVar3 = DAT_00024b58 + 0x24b08;
    iVar1 = DAT_00024b5c + 0x24b0a;
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
    iVar5 = DAT_00024b60 + 0x24b24;
    iVar3 = DAT_00024b64 + 0x24b1e;
    iVar1 = DAT_00024b68 + 0x24b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_00024b6c @ 00024b6c size=220 ===== */

undefined4 FUN_00024b6c(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00024c50 + 0x24b86,DAT_00024c4c + 0x24b84,0x319,DAT_00024c48 + 0x24b93);
  }
  if (((((*param_1 == '.') || (iVar1 = strcmp(param_1,(char *)(DAT_00024c54 + 0x24b94)), iVar1 == 0)
        ) || (iVar1 = strcmp(param_1,(char *)(DAT_00024c58 + 0x24ba2)), iVar1 == 0)) ||
      ((((iVar1 = strcmp(param_1,(char *)(DAT_00024c5c + 0x24bb0)), iVar1 == 0 ||
         (iVar1 = FUN_00024af0(param_1,DAT_00024c60 + 0x24bbe), iVar1 != 0)) ||
        ((iVar1 = FUN_00024af0(param_1,DAT_00024c64 + 0x24bcc), iVar1 != 0 ||
         ((iVar1 = FUN_00024af0(param_1,DAT_00024c68 + 0x24bda), iVar1 != 0 ||
          (iVar1 = FUN_00024af0(param_1,DAT_00024c6c + 0x24be6), iVar1 != 0)))))) ||
       (iVar1 = FUN_00024af0(param_1,DAT_00024c70 + 0x24bf2), iVar1 != 0)))) ||
     ((((iVar1 = FUN_00024af0(param_1,DAT_00024c74 + 0x24bfe), iVar1 != 0 ||
        (iVar1 = FUN_00024af0(param_1,DAT_00024c78 + 0x24c0a), iVar1 != 0)) ||
       (iVar1 = FUN_00024af0(param_1,DAT_00024c7c + 0x24c16), iVar1 != 0)) ||
      ((iVar1 = FUN_00024af0(param_1,DAT_00024c80 + 0x24c22), iVar1 != 0 ||
       (iVar1 = FUN_00024af0(param_1,DAT_00024c84 + 0x24c2e), iVar1 != 0)))))) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00024af0(param_1,DAT_00024c88 + 0x24c3a);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_00024c8c @ 00024c8c size=52 ===== */

int FUN_00024c8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00024cc8 + 0x24ca4,DAT_00024cc4 + 0x24ca2,0xbf,DAT_00024cc0 + 0x24cca,param_4);
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



/* ===== FUN_00024ccc @ 00024ccc size=52 ===== */

undefined4 FUN_00024ccc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_1) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    iVar2 = FUN_00024c8c(param_1);
    if (iVar2 == -9) {
                    /* WARNING: Subroutine does not return */
      FUN_0002291a(DAT_00024d08 + 0x24cf6,DAT_00024d04 + 0x24cf4,0xe5,DAT_00024d00 + 0x24d29);
    }
    *piVar1 = iVar3;
  }
  return 0xffffffff;
}



/* ===== FUN_00024d0c @ 00024d0c size=50 ===== */

void FUN_00024d0c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0002291a(DAT_00024d48 + 0x24d32,DAT_00024d44 + 0x24d30,0xee,DAT_00024d40 + 0x24d70,param_4
                  );
    }
  }
  else {
    puVar1 = param_1 + param_2;
    for (; puVar1 != param_1; param_1 = param_1 + 1) {
      FUN_00024ccc(*param_1);
    }
  }
  return;
}



/* ===== FUN_00024d4c @ 00024d4c size=34 ===== */

int FUN_00024d4c(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = __errno_location();
  iVar4 = *piVar1;
  iVar2 = unlink(param_1);
  if (iVar2 < 0) {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = 0;
  }
  *piVar1 = iVar4;
  if (iVar2 < 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



/* ===== FUN_00024d6e @ 00024d6e size=114 ===== */

int FUN_00024d6e(char *param_1,ulong *param_2,undefined4 param_3)

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
    iVar6 = DAT_00024de0 + 0x24dd7;
    iVar4 = DAT_00024de4 + 0x24d8c;
    iVar1 = DAT_00024de8 + 0x24d8e;
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
    iVar6 = DAT_00024dec + 0x24def;
    iVar4 = DAT_00024df0 + 0x24da4;
    iVar1 = DAT_00024df4 + 0x24da6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6,param_1);
}



/* ===== FUN_00024df8 @ 00024df8 size=76 ===== */

int FUN_00024df8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00024e4c + 0x24e16,DAT_00024e48 + 0x24e14,0x104,DAT_00024e44 + 0x24e69);
  }
  iVar1 = FUN_00024d6e(param_1,&local_14,param_3,param_4,param_1);
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



/* ===== FUN_00024e50 @ 00024e50 size=114 ===== */

int FUN_00024e50(char *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_1c;
  undefined4 uStack_18;
  
  local_1c = (char *)0x0;
  uStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    uVar5 = 0x135;
    iVar6 = DAT_00024ec4 + 0x24ecd;
    iVar4 = DAT_00024ec8 + 0x24e6e;
    iVar1 = DAT_00024ecc + 0x24e70;
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
    iVar6 = DAT_00024ed0 + 0x24ee5;
    iVar4 = DAT_00024ed4 + 0x24e86;
    iVar1 = DAT_00024ed8 + 0x24e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6,param_1);
}



/* ===== FUN_00024edc @ 00024edc size=114 ===== */

int FUN_00024edc(char *param_1,ulonglong *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char *local_1c;
  undefined4 uStack_18;
  
  local_1c = (char *)0x0;
  uStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    uVar4 = 0x149;
    puVar5 = (undefined *)(DAT_00024f50 + 0x24f63);
    iVar3 = DAT_00024f54 + 0x24efa;
    iVar1 = DAT_00024f58 + 0x24efc;
  }
  else {
    if (param_2 != (ulonglong *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      uVar6 = strtoull(param_1,&local_1c,0);
      iVar1 = *piVar2;
      if ((((local_1c == (char *)0x0) || (local_1c == param_1)) || (*local_1c != '\0')) ||
         (iVar1 != 0)) {
        if (iVar1 == 0) {
          iVar1 = -0x16;
        }
        else {
          iVar1 = -iVar1;
        }
      }
      else {
        *param_2 = uVar6;
        iVar1 = 0;
      }
      return iVar1;
    }
    uVar4 = 0x14a;
    puVar5 = &UNK_00024f7b + DAT_00024f5c;
    iVar3 = DAT_00024f60 + 0x24f12;
    iVar1 = DAT_00024f64 + 0x24f14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,puVar5,param_1);
}



/* ===== FUN_000250a8 @ 000250a8 size=44 ===== */

char * FUN_000250a8(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000250dc + 0x250c2,DAT_000250d8 + 0x250c0,0x1a5,DAT_000250d4 + 0x25141);
  }
  sVar1 = strcspn(param_1,(char *)(DAT_000250e0 + 0x250ca));
  param_1[sVar1] = '\0';
  return param_1;
}



/* ===== FUN_00025154 @ 00025154 size=140 ===== */

void * FUN_00025154(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t __n;
  void *pvVar1;
  uint __n_00;
  
  if (param_2 == (char *)0x0) {
    __n_00 = 0;
  }
  else {
    __n_00 = strlen(param_2);
  }
  if (param_1 == (char *)0x0) {
    if (param_2 != (char *)0x0) {
      pvVar1 = (void *)(*(code *)PTR_strndup_00049044)(param_2,__n_00,__n_00,param_4);
      return pvVar1;
    }
    param_1 = (char *)(DAT_00025150 + 0x250f8);
  }
  else if (param_2 != (char *)0x0) {
    __n = strlen(param_1);
    if (~__n < __n_00) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_00024a86(1,__n_00 + __n + 1);
      if (pvVar1 != (void *)0x0) {
        memcpy(pvVar1,param_1,__n);
        memcpy((void *)((int)pvVar1 + __n),param_2,__n_00);
        *(undefined1 *)((int)pvVar1 + __n_00 + __n) = 0;
      }
    }
    return pvVar1;
  }
  pvVar1 = (void *)(*(code *)PTR_strdup_00049204)(param_1,param_2,__n_00,param_4);
  return pvVar1;
}



/* ===== FUN_00025174 @ 00025174 size=182 ===== */

int FUN_00025174(char *param_1,int param_2)

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
    iVar6 = DAT_0002522c + 0x2521d;
    iVar4 = DAT_00025230 + 0x25190;
    iVar1 = DAT_00025234 + 0x25192;
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
        iVar1 = FUN_0002309a(param_2,__path);
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
    iVar6 = DAT_00025238 + 0x25235;
    iVar4 = DAT_0002523c + 0x251a8;
    iVar1 = DAT_00025240 + 0x251aa;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_00025244 @ 00025244 size=16 ===== */

undefined1 FUN_00025244(uint param_1)

{
  return *(undefined1 *)(DAT_00025254 + (param_1 & 0xf) + 0x252ed);
}



/* ===== FUN_00025258 @ 00025258 size=42 ===== */

uint FUN_00025258(int param_1)

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



/* ===== FUN_00025282 @ 00025282 size=8 ===== */

int FUN_00025282(uint param_1)

{
  return (param_1 & 7) + 0x30;
}



/* ===== FUN_0002528a @ 0002528a size=208 ===== */

int FUN_0002528a(uint param_1,undefined1 *param_2)

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
LAB_00025348:
        *param_2 = 0x5c;
      }
      else {
        if (param_1 < 0x23) {
          if (param_1 == 0xc) {
            *param_2 = 0x5c;
            uVar1 = 0x66;
          }
          else {
            if (param_1 != 0xd) goto LAB_000252a0;
            *param_2 = 0x5c;
            uVar1 = 0x72;
          }
          goto LAB_00025312;
        }
        if (param_1 == 0x27) goto LAB_00025348;
        if (param_1 != 0x5c) goto LAB_000252a0;
        *param_2 = 0x5c;
      }
      puVar2 = param_2 + 2;
      param_2[1] = (char)param_1;
      goto LAB_00025314;
    }
    if (param_1 == 8) {
      *param_2 = 0x5c;
      uVar1 = 0x62;
    }
    else if (param_1 < 9) {
      if (param_1 != 7) {
LAB_000252a0:
        if (param_1 - 0x20 < 0x5f) {
          puVar2 = param_2 + 1;
          *param_2 = (char)param_1;
        }
        else {
          *param_2 = 0x5c;
          puVar2 = param_2 + 4;
          uVar1 = FUN_00025282(param_1 >> 6);
          param_2[1] = uVar1;
          uVar1 = FUN_00025282(param_1 >> 3);
          param_2[2] = uVar1;
          uVar1 = FUN_00025282(param_1);
          param_2[3] = uVar1;
        }
        goto LAB_00025314;
      }
      *param_2 = 0x5c;
      uVar1 = 0x61;
    }
    else if (param_1 == 9) {
      *param_2 = 0x5c;
      uVar1 = 0x74;
    }
    else {
      if (param_1 != 10) goto LAB_000252a0;
      *param_2 = 0x5c;
      uVar1 = 0x6e;
    }
  }
LAB_00025312:
  puVar2 = param_2 + 2;
  param_2[1] = uVar1;
LAB_00025314:
  return (int)puVar2 - (int)param_2;
}



/* ===== FUN_0002535a @ 0002535a size=14 ===== */

uint FUN_0002535a(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x30;
  if (7 < (uVar1 & 0xff)) {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_00025368 @ 00025368 size=440 ===== */

int FUN_00025368(byte *param_1,byte *param_2,uint *param_3)

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
    iVar6 = DAT_00025520 + 0x25433;
    iVar3 = DAT_00025524 + 0x25388;
    iVar1 = DAT_00025528 + 0x2538a;
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
              iVar1 = FUN_0002535a();
              if ((((iVar1 < 0) || (iVar3 = FUN_0002535a(param_1[1]), iVar3 < 0)) ||
                  (uVar2 = FUN_0002535a(param_1[2]), (int)uVar2 < 0)) ||
                 (((iVar1 == 0 && iVar3 == 0) && uVar2 == 0 ||
                  (uVar2 = uVar2 | iVar3 * 8 | iVar1 * 0x40, 0xff < uVar2)))) {
                return -0x16;
              }
LAB_00025474:
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
                iVar1 = FUN_00025258(*param_1);
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
              iVar1 = FUN_0002bafc(uVar2);
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
            goto LAB_0002547c;
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
              iVar1 = FUN_00025258(*param_1);
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
              iVar1 = FUN_00025258(param_1[1]);
              if (iVar1 < 0) {
                return -0x16;
              }
              uVar2 = FUN_00025258(param_1[2]);
              if ((int)uVar2 < 0) {
                return -0x16;
              }
              if (iVar1 == 0 && uVar2 == 0) {
                return -0x16;
              }
              uVar2 = uVar2 | iVar1 * 0x10;
              goto LAB_00025474;
            }
            bVar5 = 0xb;
          }
        }
      }
LAB_0002547c:
      *param_2 = bVar5;
      return 1;
    }
    uVar4 = 0x236;
    iVar6 = DAT_0002552c + 0x2544d;
    iVar3 = DAT_00025530 + 0x253a2;
    iVar1 = DAT_00025534 + 0x253a4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar6);
}



/* ===== FUN_00025538 @ 00025538 size=72 ===== */

undefined1 * FUN_00025538(char *param_1)

{
  size_t sVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00025588 + 0x25552,DAT_00025584 + 0x25550,0x220,DAT_00025580 + 0x25609);
  }
  sVar1 = strlen(param_1);
  puVar2 = (undefined1 *)FUN_00024a86(1,sVar1 * 4 + 1);
  if (puVar2 != (undefined1 *)0x0) {
    param_1 = param_1 + -1;
    puVar4 = puVar2;
    while( true ) {
      param_1 = param_1 + 1;
      if (*param_1 == '\0') break;
      iVar3 = FUN_0002528a(*param_1,puVar4);
      puVar4 = puVar4 + iVar3;
    }
    *puVar4 = 0;
  }
  return puVar2;
}



/* ===== FUN_0002558c @ 0002558c size=112 ===== */

byte * FUN_0002558c(char *param_1,char *param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  uint __c;
  byte *pbVar6;
  
  sVar2 = strlen(param_1);
  pbVar3 = (byte *)FUN_00024a86(1,sVar2 * 4 + 1);
  if (pbVar3 != (byte *)0x0) {
    pbVar6 = (byte *)(param_1 + -1);
    pbVar5 = pbVar3;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
      __c = (uint)bVar1;
      if (__c == 0) break;
      if (((__c - 0x20 < 0x5f) && (__c != 0x5c)) &&
         (pcVar4 = strchr(param_2,__c), pcVar4 == (char *)0x0)) {
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
      else {
        *pbVar5 = 0x5c;
        pbVar5[1] = 0x78;
        bVar1 = FUN_00025244(bVar1 >> 4);
        pbVar5[2] = bVar1;
        bVar1 = FUN_00025244(__c);
        pbVar5[3] = bVar1;
        pbVar5 = pbVar5 + 4;
      }
    }
    *pbVar5 = bVar1;
  }
  return pbVar3;
}



/* ===== FUN_000255fc @ 000255fc size=52 ===== */

undefined4 FUN_000255fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00025638 + 0x25616,DAT_00025634 + 0x25614,0x32e,DAT_00025630 + 0x256d5);
  }
  iVar1 = FUN_00024af0(param_1,DAT_0002563c + 0x2561e);
  if (iVar1 == 0) {
    uVar2 = FUN_00024b6c(param_1);
    return uVar2;
  }
  return 1;
}



/* ===== FUN_0002569e @ 0002569e size=64 ===== */

char * FUN_0002569e(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      FUN_0002291a(DAT_000256e8 + 0x256c4,DAT_000256e4 + 0x256c2,0x3b9,DAT_000256e0 + 0x2578f,
                   param_4);
    }
    if (__path != __s) {
      __s = strdup(__s);
      free(__path);
    }
  }
  return __s;
}



/* ===== FUN_000256ec @ 000256ec size=82 ===== */

int FUN_000256ec(char *param_1,__mode_t param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (char *)0x0) {
    if (((param_2 == 0xffffffff) || (iVar1 = chmod(param_1,param_2), -1 < iVar1)) &&
       (((param_3 & param_4) == 0xffffffff || (iVar1 = chown(param_1,param_3,param_4), -1 < iVar1)))
       ) {
      iVar1 = 0;
    }
    else {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(DAT_00025748 + 0x2570a,DAT_00025744 + 0x25708,0x3cc,DAT_00025740 + 0x257e4,param_4);
}



/* ===== FUN_0002574c @ 0002574c size=182 ===== */

int FUN_0002574c(char *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                __mode_t param_7)

{
  int __fd;
  int *piVar1;
  int iVar2;
  timespec *__times;
  __mode_t _Var3;
  timespec local_30;
  __time_t _Stack_28;
  long lStack_24;
  
  __times = &local_30;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00025810 + 0x25774,DAT_0002580c + 0x25772,0x3e1,DAT_00025808 + 0x2585e);
  }
  if (param_2 != 0) {
    FUN_00022d98(param_1,0x1ed);
  }
  _Var3 = param_7;
  if (param_7 == 0) {
    _Var3 = 0x1a4;
  }
  __fd = open64(param_1,DAT_00025804,_Var3);
  if (((-1 < __fd) && ((param_7 == 0 || (iVar2 = fchmod(__fd,param_7), -1 < iVar2)))) &&
     (((param_5 & param_6) == 0xffffffff || (iVar2 = fchown(__fd,param_5,param_6), -1 < iVar2)))) {
    if (param_4 == -1 && param_3 == -1) {
      __times = (timespec *)0x0;
    }
    else {
      FUN_00024790(&local_30);
      lStack_24 = local_30.tv_nsec;
      _Stack_28 = local_30.tv_sec;
    }
    iVar2 = futimens(__fd,__times);
    if (-1 < iVar2) {
      iVar2 = 0;
      goto LAB_0002579e;
    }
  }
  piVar1 = __errno_location();
  iVar2 = -*piVar1;
LAB_0002579e:
  FUN_00024ccc(__fd);
  return iVar2;
}



/* ===== FUN_00025814 @ 00025814 size=32 ===== */

void FUN_00025814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0002574c(param_1,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,param_4);
  return;
}



/* ===== FUN_00025834 @ 00025834 size=70 ===== */

bool FUN_00025834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x10) & 0xf000) == 0x8000) {
      if (*(int *)(param_1 + 0x34) < (int)(uint)(*(int *)(param_1 + 0x30) == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = (*(uint *)(param_1 + 0x10) & 0xb000) == 0x2000;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(DAT_00025884 + 0x2584c,DAT_00025880 + 0x2584a,0x409,DAT_0002587c + 0x25941,param_4);
}



/* ===== FUN_00025888 @ 00025888 size=62 ===== */

int FUN_00025888(char *param_1)

{
  int iVar1;
  int *piVar2;
  stat64 sStack_70;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000258d0 + 0x258a4,DAT_000258cc + 0x258a2,0x417,&UNK_000259a5 + DAT_000258c8);
  }
  iVar1 = stat64(param_1,&sStack_70);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = FUN_00025834(&sStack_70);
  }
  return iVar1;
}



/* ===== FUN_000258d4 @ 000258d4 size=64 ===== */

int FUN_000258d4(int param_1)

{
  int iVar1;
  int *piVar2;
  stat64 sStack_70;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002591c + 0x258f2,DAT_00025918 + 0x258f0,0x422,DAT_00025914 + 0x25a06);
  }
  iVar1 = fstat64(param_1,&sStack_70);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = FUN_00025834(&sStack_70);
  }
  return iVar1;
}



/* ===== FUN_00025920 @ 00025920 size=74 ===== */

undefined4 FUN_00025920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00025974 + 0x2593c,DAT_00025970 + 0x2593a,0x42b,DAT_0002596c + 0x25a61,param_4)
    ;
  }
  if ((*(byte *)(param_1 + 0x12) == 10) || ((*(byte *)(param_1 + 0x12) & 0xf7) == 0)) {
    iVar1 = FUN_00024b6c(param_1 + 0x13);
    if (iVar1 == 0) {
      iVar1 = FUN_00024af0(param_1 + 0x13,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_000259a6 @ 000259a6 size=70 ===== */

int FUN_000259a6(int param_1,ushort param_2,int param_3,int param_4)

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
    __timeout = (timespec *)FUN_00024790(&iStack_10);
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



/* ===== FUN_000259ec @ 000259ec size=142 ===== */

int FUN_000259ec(int param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 < 0) {
    uVar5 = 0x35e;
    iVar6 = (int)&DAT_00025b50 + DAT_00025a7c;
    iVar4 = DAT_00025a80 + 0x25a0e;
    iVar1 = DAT_00025a84 + 0x25a10;
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
        FUN_000259a6(param_1,1,0xffffffff,0xffffffff);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      return -iVar4;
    }
    uVar5 = 0x35f;
    iVar6 = DAT_00025a88 + 0x25b6a;
    iVar4 = DAT_00025a8c + 0x25a28;
    iVar1 = DAT_00025a90 + 0x25a2a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_00025a94 @ 00025a94 size=24 ===== */

int FUN_00025a94(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_000259ec();
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



/* ===== FUN_00025aac @ 00025aac size=148 ===== */

int FUN_00025aac(int param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 < 0) {
    uVar5 = 0x38f;
    iVar6 = DAT_00025b40 + 0x25c1a;
    iVar4 = DAT_00025b44 + 0x25ace;
    iVar1 = DAT_00025b48 + 0x25ad0;
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
            FUN_000259a6(param_1,4,0xffffffff,0xffffffff);
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
    iVar6 = DAT_00025b4c + 0x25c34;
    iVar4 = DAT_00025b50 + 0x25ae8;
    iVar1 = DAT_00025b54 + 0x25aea;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,iVar6);
}



/* ===== FUN_00025b58 @ 00025b58 size=248 ===== */

int FUN_00025b58(int *param_1,__uid_t *param_2,__gid_t *param_3,int *param_4,undefined4 *param_5)

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
    iVar6 = DAT_00025c50 + 0x25cd3;
    iVar4 = DAT_00025c54 + 0x25b7c;
    iVar1 = DAT_00025c58 + 0x25b7e;
LAB_00025b7c:
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(iVar1,iVar4,uVar5,iVar6,param_1);
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0x49c;
    iVar6 = DAT_00025c5c + 0x25cf5;
    iVar4 = DAT_00025c60 + 0x25b9e;
    iVar1 = DAT_00025c64 + 0x25ba0;
    goto LAB_00025b7c;
  }
  iVar1 = strcmp(pcVar7,(char *)(DAT_00025c68 + 0x25ba8));
  if ((iVar1 == 0) || (iVar1 = strcmp(pcVar7,(char *)(DAT_00025c6c + 0x25bb4)), iVar1 == 0)) {
    *param_1 = DAT_00025c70 + 0x25bbe;
    if (param_2 != (__uid_t *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (__gid_t *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = DAT_00025c74 + 0x25bd8;
    }
    if (param_5 != (undefined4 *)0x0) {
      pcVar7 = (char *)(DAT_00025c78 + 0x25be4);
LAB_00025be2:
      *param_5 = pcVar7;
    }
LAB_00025bda:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00024df8(pcVar7,&local_24);
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (iVar1 < 0) {
      ppVar3 = getpwnam((char *)*param_1);
      if (ppVar3 != (passwd *)0x0) goto LAB_00025c20;
    }
    else {
      ppVar3 = getpwuid((__uid_t)local_24);
      if (ppVar3 != (passwd *)0x0) {
        *param_1 = (int)ppVar3->pw_name;
LAB_00025c20:
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
          goto LAB_00025be2;
        }
        goto LAB_00025bda;
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



/* ===== FUN_00025c7c @ 00025c7c size=154 ===== */

int FUN_00025c7c(int *param_1,__gid_t *param_2,undefined4 param_3)

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
    FUN_0002291a(DAT_00025d20 + 0x25c9a,DAT_00025d1c + 0x25c98,0x4d9,&UNK_00025dfe + DAT_00025d18,0)
    ;
  }
  __s1 = (char *)*param_1;
  iVar1 = strcmp(__s1,(char *)(DAT_00025d24 + 0x25ca6));
  if ((iVar1 == 0) || (iVar1 = strcmp(__s1,(char *)(DAT_00025d28 + 0x25cb2)), iVar1 == 0)) {
    *param_1 = DAT_00025d2c + 0x25cbc;
    if (param_2 != (__gid_t *)0x0) {
      *param_2 = 0;
      return 0;
    }
LAB_00025cbe:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00024df8(__s1,&local_1c);
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (iVar1 < 0) {
      pgVar3 = getgrnam((char *)*param_1);
      if (pgVar3 != (group *)0x0) goto LAB_00025cfc;
    }
    else {
      pgVar3 = getgrgid((__gid_t)local_1c);
      if (pgVar3 != (group *)0x0) {
        *param_1 = (int)pgVar3->gr_name;
LAB_00025cfc:
        if (param_2 != (__gid_t *)0x0) {
          *param_2 = pgVar3->gr_gid;
        }
        goto LAB_00025cbe;
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



/* ===== FUN_00025d30 @ 00025d30 size=104 ===== */

char * FUN_00025d30(char *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

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
  pcVar3 = (char *)FUN_00024a86(1,uVar1 + 1,param_3,local_24,pcVar3);
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



/* ===== FUN_00025d98 @ 00025d98 size=64 ===== */

bool FUN_00025d98(void)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  long lVar4;
  undefined4 uVar5;
  
  iVar2 = __tls_get_addr(DAT_00025dd8 + 0x25da0);
  iVar1 = DAT_00025ddc;
  iVar2 = DAT_00025ddc + iVar2;
  if (*(int *)(iVar2 + 4) == 0) {
    _Var3 = getpid();
    lVar4 = syscall(0xe0);
    if (_Var3 == lVar4) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0xffffffff;
    }
    *(undefined4 *)(iVar2 + 4) = uVar5;
  }
  iVar2 = __tls_get_addr(DAT_00025de0 + 0x25dc8);
  return 0 < *(int *)(iVar2 + iVar1 + 4);
}



/* ===== FUN_0002604c @ 0002604c size=94 ===== */

uint FUN_0002604c(char *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint local_14;
  
  uVar2 = 0;
  local_14 = 0;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_000260b4 + 0x2606c,DAT_000260b0 + 0x2606a,0x575,&UNK_0002627a + DAT_000260ac,0)
    ;
  }
  puVar3 = (undefined4 *)(&UNK_00026100 + DAT_000260b8);
  while( true ) {
    if (((char *)*puVar3 != (char *)0x0) && (iVar1 = strcmp((char *)*puVar3,param_1), iVar1 == 0))
    break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    if (uVar2 == 8) {
      iVar1 = FUN_00024d6e(param_1,&local_14);
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



/* ===== FUN_00026358 @ 00026358 size=104 ===== */

int FUN_00026358(int param_1,uint param_2,uint param_3)

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



/* ===== FUN_000263c0 @ 000263c0 size=86 ===== */

uint FUN_000263c0(void)

{
  uint uVar1;
  int iVar2;
  statfs64 local_60;
  
  if (*(int *)(DAT_00026420 + 0x263c8) < 0) {
    iVar2 = access((char *)(DAT_00026424 + 0x263e2),0);
    if ((iVar2 < 0) || (iVar2 = statfs64((char *)(DAT_0002642c + 0x263fa),&local_60), iVar2 < 0)) {
      uVar1 = 0;
    }
    else if (local_60.f_type == DAT_00026418) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)(local_60.f_type == DAT_0002641c);
    }
    *(uint *)(DAT_00026428 + 0x263f0) = uVar1;
  }
  else if (*(int *)(DAT_00026420 + 0x263c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_00026430 @ 00026430 size=64 ===== */

undefined4 FUN_00026430(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (pcVar1 = strchr(param_1,0x2f), pcVar1 != (char *)0x0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = strcmp(param_1,(char *)(DAT_00026470 + 0x2644a));
    uVar4 = 0;
    if ((iVar2 != 0) &&
       (iVar2 = strcmp(param_1,(char *)(DAT_00026474 + 0x26456)), uVar4 = 0, iVar2 != 0)) {
      sVar3 = strlen(param_1);
      if (sVar3 < 0x1000) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ===== FUN_000264b8 @ 000264b8 size=124 ===== */

void * FUN_000264b8(undefined4 *param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0x62e;
    puVar6 = &UNK_00026760 + DAT_00026534;
    iVar4 = DAT_00026538 + 0x264da;
    iVar1 = DAT_0002653c + 0x264dc;
  }
  else {
    if (param_2 != (uint *)0x0) {
      if (*param_2 < param_3) {
        uVar3 = FUN_0002bde8(0x40,param_4);
        uVar7 = param_3 << 1;
        if (param_3 << 1 < uVar3) {
          uVar7 = uVar3;
        }
        uVar3 = uVar7 * param_4;
        if (param_4 * param_3 < uVar3 || param_4 * param_3 - uVar3 == 0) {
          pvVar2 = realloc((void *)*param_1,uVar3);
          if (pvVar2 != (void *)0x0) {
            *param_1 = pvVar2;
            *param_2 = uVar7;
          }
        }
        else {
          pvVar2 = (void *)0x0;
        }
      }
      else {
        pvVar2 = (void *)*param_1;
      }
      return pvVar2;
    }
    uVar5 = 0x62f;
    puVar6 = &UNK_0002677a + DAT_00026540;
    iVar4 = DAT_00026544 + 0x264f4;
    iVar1 = DAT_00026548 + 0x264f6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar4,uVar5,puVar6);
}



/* ===== FUN_0002654c @ 0002654c size=584 ===== */

/* WARNING: Removing unreachable block (ram,0x0002b88e) */
/* WARNING: Removing unreachable block (ram,0x0002b89c) */
/* WARNING: Removing unreachable block (ram,0x0002b8a0) */
/* WARNING: Removing unreachable block (ram,0x0002b91a) */
/* WARNING: Removing unreachable block (ram,0x0002b8a6) */
/* WARNING: Removing unreachable block (ram,0x0002b8f6) */
/* WARNING: Removing unreachable block (ram,0x0002b8fc) */
/* WARNING: Removing unreachable block (ram,0x0002b900) */
/* WARNING: Removing unreachable block (ram,0x0002b922) */
/* WARNING: Removing unreachable block (ram,0x0002b8ae) */
/* WARNING: Removing unreachable block (ram,0x0002b8b4) */
/* WARNING: Removing unreachable block (ram,0x0002b8c4) */
/* WARNING: Removing unreachable block (ram,0x0002b8ca) */
/* WARNING: Removing unreachable block (ram,0x0002b8ce) */
/* WARNING: Removing unreachable block (ram,0x0002b8dc) */
/* WARNING: Removing unreachable block (ram,0x0002b904) */
/* WARNING: Removing unreachable block (ram,0x0002b8e4) */
/* WARNING: Removing unreachable block (ram,0x0002b8f0) */
/* WARNING: Removing unreachable block (ram,0x0002b7b8) */
/* WARNING: Removing unreachable block (ram,0x0002b774) */

int FUN_0002654c(undefined4 *param_1)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char acStack_58 [32];
  void **local_38;
  int local_34;
  char *local_30;
  void *local_2c [3];
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002659c + 0x26568,DAT_00026598 + 0x26566,0x645,&UNK_000267fb + DAT_00026594);
  }
  iVar1 = FUN_00026c0c(0);
  if (iVar1 < 1) {
    iVar1 = FUN_000206d4(DAT_000265a0 + 0x26590,param_1);
    return iVar1;
  }
  iVar1 = 0;
  local_34 = 0;
  iVar5 = DAT_0002b944 + 0x2b756;
  local_30 = (char *)0x0;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002b950 + 0x2b76e,DAT_0002b94c + 0x2b76c,0x3a,DAT_0002b948 + 0x2b779);
  }
  sprintf(acStack_58,(char *)(DAT_0002b960 + 0x2b794),1);
  __stream = fopen64(acStack_58,(char *)(DAT_0002b964 + 0x2b7a0));
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    return -*piVar2;
  }
  local_38 = local_2c;
  local_2c[0] = (void *)0x0;
  do {
    if (__stream->_chain == (_IO_FILE *)0x0) {
      uVar6 = fgetc(__stream);
LAB_0002b824:
      if (uVar6 == 0xffffffff) {
        if (iVar1 != 0) {
          local_30[iVar1 + -1] = '\0';
        }
        if ((local_30 == (char *)0x0) || (*local_30 == '\0')) {
          local_2c[0] = (void *)0x0;
          free(local_30);
          if (local_34 == 0) {
            iVar1 = -2;
          }
          else {
            iVar1 = FUN_0002b6c4(1,local_2c);
            if (-1 < iVar1) {
              local_30 = (char *)FUN_00025d30(DAT_0002b974 + 0x2b86e,local_2c[0],
                                              DAT_0002b970 + 0x2b86a,0);
              if (local_30 != (char *)0x0) {
                free(local_2c[0]);
                goto LAB_0002b87c;
              }
              iVar1 = -0xc;
            }
          }
          free(local_2c[0]);
        }
        else {
LAB_0002b87c:
          iVar1 = 0;
          *param_1 = local_30;
        }
        goto LAB_0002b934;
      }
    }
    else {
      pbVar4 = (byte *)__stream->_IO_write_base;
      if (__stream->_IO_write_end <= pbVar4) {
        uVar6 = __fgetc_unlocked(__stream);
        goto LAB_0002b824;
      }
      __stream->_IO_write_base = (char *)(pbVar4 + 1);
      uVar6 = (uint)*pbVar4;
    }
    iVar3 = FUN_000264b8(&local_30,local_38,iVar1 + 2,1);
    if (iVar3 == 0) {
      free(local_30);
      iVar1 = -0xc;
LAB_0002b934:
      fclose(__stream);
      return iVar1;
    }
    if ((*(ushort *)(**(int **)(iVar5 + DAT_0002b96c) + uVar6 * 2) & 0x40) == 0) {
      uVar6 = 0x20;
    }
    local_30[iVar1] = (char)uVar6;
    iVar1 = iVar1 + 1;
  } while( true );
}



/* ===== FUN_000265a4 @ 000265a4 size=144 ===== */

int FUN_000265a4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  socklen_t local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = 0xc;
  if (param_1 < 0) {
    uVar4 = 0x679;
    iVar5 = DAT_00026634 + 0x2686a;
    iVar3 = DAT_00026638 + 0x265c8;
    iVar1 = DAT_0002663c + 0x265ca;
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar1 = getsockopt(param_1,1,0x11,&local_1c,&local_20);
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        iVar1 = -*piVar2;
      }
      else if (local_20 == 0xc) {
        if (((local_1c < 1) || (local_18 == -1)) || (local_14 == -1)) {
          iVar1 = -0x3d;
        }
        else {
          *param_2 = local_1c;
          param_2[1] = local_18;
          param_2[2] = local_14;
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -5;
      }
      return iVar1;
    }
    uVar4 = 0x67a;
    iVar5 = DAT_00026640 + 0x26884;
    iVar3 = DAT_00026644 + 0x265e2;
    iVar1 = DAT_00026648 + 0x265e4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar3,uVar4,iVar5);
}



/* ===== FUN_0002664c @ 0002664c size=70 ===== */

int FUN_0002664c(char *param_1,int param_2)

{
  __mode_t __mask;
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002669c + 0x2666a,DAT_00026698 + 0x26668,0x696,DAT_00026694 + 0x26916);
  }
  __mask = umask(0x3f);
  iVar1 = mkostemp64(param_1,param_2);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  umask(__mask);
  return iVar1;
}



/* ===== FUN_00026814 @ 00026814 size=56 ===== */

uint FUN_00026814(char *param_1,int param_2)

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



/* ===== FUN_0002684c @ 0002684c size=632 ===== */

undefined4 FUN_0002684c(int *param_1,int *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint __c;
  undefined4 uVar7;
  char *__s;
  char *__s_00;
  char *__s_01;
  byte local_35;
  void *local_34;
  undefined4 uStack_30;
  undefined4 local_2c [2];
  
  uVar7 = 0;
  local_34 = (void *)0x0;
  uStack_30 = 0;
  if (param_1 == (int *)0x0) {
    uVar7 = 0x6ed;
    iVar6 = DAT_00026ad4 + 0x26b4e;
    iVar5 = DAT_00026ad8 + 0x26874;
    iVar2 = DAT_00026adc + 0x26876;
  }
  else if (*param_1 == 0) {
    uVar7 = 0x6ee;
    iVar6 = DAT_00026ae0 + 0x26b6a;
    iVar5 = DAT_00026ae4 + 0x26890;
    iVar2 = DAT_00026ae8 + 0x26892;
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar2 = 0;
      __s = (char *)(DAT_00026af8 + 0x268bc);
      __s_00 = (char *)(DAT_00026afc + 0x268be);
      __s_01 = (char *)(DAT_00026b00 + 0x268c0);
      do {
        local_35 = *(byte *)*param_1;
        __c = (uint)local_35;
        switch(uVar7) {
        case 1:
          if (__c == 0) goto LAB_00026934;
LAB_000268f2:
          if (__c == 0x27) goto LAB_00026a0a;
          if (__c == 0x5c) {
            uVar7 = 2;
          }
          else {
            if (__c == 0x22) goto LAB_00026a74;
            pcVar3 = strchr(__s_00,__c);
            if (pcVar3 == (char *)0x0) {
              iVar5 = FUN_000264b8(&local_34,&uStack_30,iVar2 + 2,1);
              if (iVar5 == 0) goto LAB_00026ab2;
              goto LAB_00026924;
            }
            uVar7 = 7;
          }
          break;
        case 2:
          if (__c != 0) {
            iVar5 = FUN_000264b8(&local_34,&uStack_30,iVar2 + 7,1);
            if (iVar5 != 0) {
              if (param_3 << 0x1e < 0) {
                iVar5 = FUN_00025368(*param_1,&local_35,local_2c);
                if (-1 < iVar5) {
                  *param_1 = *param_1 + iVar5 + -1;
                  pbVar4 = (byte *)((int)local_34 + iVar2);
                  if (local_35 == 0) {
                    iVar5 = FUN_0002bbec(pbVar4,local_2c[0]);
                    iVar2 = iVar2 + iVar5;
                  }
                  else {
                    iVar2 = iVar2 + 1;
                    *pbVar4 = local_35;
                  }
                  goto LAB_0002698e;
                }
                goto LAB_0002694c;
              }
LAB_00026924:
              *(byte *)((int)local_34 + iVar2) = local_35;
              iVar2 = iVar2 + 1;
              goto LAB_0002698e;
            }
LAB_00026ab2:
            uVar7 = 0xfffffff4;
            goto LAB_00026ab6;
          }
LAB_00026948:
          if (-1 < param_3 << 0x1f) {
LAB_0002694c:
            uVar7 = 0xffffffea;
            goto LAB_00026ab6;
          }
LAB_00026934:
          pvVar1 = local_34;
          if (local_34 == (void *)0x0) {
            *param_2 = 0;
            uVar7 = 0;
          }
          else {
            *(undefined1 *)((int)local_34 + iVar2) = 0;
            uVar7 = 1;
            local_34 = (void *)0x0;
            *param_2 = (int)pvVar1;
          }
LAB_00026ab6:
          free(local_34);
          return uVar7;
        case 3:
          if (__c == 0) goto LAB_00026948;
          if (__c != 0x27) {
            if (__c == 0x5c) {
              uVar7 = 4;
            }
            else {
LAB_000269aa:
              iVar5 = FUN_000264b8(&local_34,&uStack_30,iVar2 + 2,1);
              if (iVar5 == 0) goto LAB_00026ab2;
              *(byte *)((int)local_34 + iVar2) = local_35;
              iVar2 = iVar2 + 1;
            }
            break;
          }
LAB_0002698e:
          uVar7 = 1;
          break;
        case 4:
          if (__c == 0) goto LAB_00026948;
          iVar5 = FUN_000264b8(&local_34,&uStack_30,iVar2 + 7,1);
          if (iVar5 == 0) goto LAB_00026ab2;
          if (param_3 << 0x1e < 0) {
            iVar5 = FUN_00025368(*param_1,&local_35,local_2c);
            if (iVar5 < 0) goto LAB_0002694c;
            *param_1 = *param_1 + iVar5 + -1;
            pbVar4 = (byte *)((int)local_34 + iVar2);
            if (local_35 == 0) {
              iVar5 = FUN_0002bbec(pbVar4,local_2c[0]);
              iVar2 = iVar2 + iVar5;
            }
            else {
              iVar2 = iVar2 + 1;
              *pbVar4 = local_35;
            }
          }
          else {
            *(byte *)((int)local_34 + iVar2) = local_35;
            iVar2 = iVar2 + 1;
          }
LAB_00026a0a:
          uVar7 = 3;
          break;
        case 5:
          if (__c == 0) goto LAB_0002694c;
          if (__c == 0x22) goto LAB_0002698e;
          if (__c != 0x5c) goto LAB_000269aa;
          uVar7 = 6;
          break;
        case 6:
          if (__c == 0) goto LAB_00026948;
          iVar5 = FUN_000264b8(&local_34,&uStack_30,iVar2 + 7,1);
          if (iVar5 == 0) goto LAB_00026ab2;
          if (param_3 << 0x1e < 0) {
            iVar5 = FUN_00025368(*param_1,&local_35,local_2c);
            if (iVar5 < 0) goto LAB_0002694c;
            *param_1 = *param_1 + iVar5 + -1;
            pbVar4 = (byte *)((int)local_34 + iVar2);
            if (local_35 == 0) {
              iVar5 = FUN_0002bbec(pbVar4,local_2c[0]);
              iVar2 = iVar2 + iVar5;
            }
            else {
              iVar2 = iVar2 + 1;
              *pbVar4 = local_35;
            }
          }
          else {
            *(byte *)((int)local_34 + iVar2) = local_35;
            iVar2 = iVar2 + 1;
          }
LAB_00026a74:
          uVar7 = 5;
          break;
        case 7:
          if ((__c == 0) || (pcVar3 = strchr(__s,__c), pcVar3 == (char *)0x0)) goto LAB_00026934;
          break;
        default:
          if (__c == 0) goto LAB_00026934;
          pcVar3 = strchr(__s_01,__c);
          if (pcVar3 == (char *)0x0) goto LAB_000268f2;
          uVar7 = 0;
        }
        *param_1 = *param_1 + 1;
      } while( true );
    }
    uVar7 = 0x6ef;
    iVar6 = DAT_00026aec + 0x26b82;
    iVar5 = DAT_00026af0 + 0x268a8;
    iVar2 = DAT_00026af4 + 0x268aa;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar2,iVar5,uVar7,iVar6);
}



/* ===== FUN_00026b04 @ 00026b04 size=156 ===== */

int FUN_00026b04(code *param_1,undefined4 param_2,void *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *__s2;
  void *local_24;
  void *local_20;
  char *local_1c;
  
  local_24 = (void *)0x0;
  local_20 = param_3;
  local_1c = param_4;
  if (param_1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00026ba8 + 0x26b26,DAT_00026ba4 + 0x26b24,0x652,DAT_00026ba0 + 0x26e11,0);
  }
  iVar1 = FUN_0002654c(&local_24);
  if (-1 < iVar1) {
    __s2 = (char *)(DAT_00026bac + 0x26b3e);
    local_20 = local_24;
    while( true ) {
      local_1c = (char *)0x0;
      iVar1 = FUN_0002684c(&local_20,&local_1c,1);
      if ((iVar1 < 0) || (iVar1 == 0)) break;
      iVar1 = FUN_000263c0();
      pcVar3 = local_1c;
      if ((iVar1 != 0) ||
         ((iVar1 = strncmp(local_1c,__s2,3), iVar1 != 0 || (pcVar3 == (char *)0xfffffffd)))) {
        pcVar2 = strchr(local_1c,0x3d);
        pcVar3 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          pcVar3 = pcVar2 + 1;
          *pcVar2 = '\0';
        }
        iVar1 = (*param_1)(local_1c,pcVar3);
        pcVar3 = local_1c;
        if (iVar1 < 0) break;
      }
      free(pcVar3);
    }
    free(local_1c);
  }
  free(local_24);
  return iVar1;
}



/* ===== FUN_00026bb0 @ 00026bb0 size=80 ===== */

void FUN_00026bb0(msghdr *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  cmsghdr *__cmsg;
  
  if (param_1 == (msghdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_00026c08 + 0x26bcc,DAT_00026c04 + 0x26bca,0x7ad,DAT_00026c00 + 0x26eca,param_4)
    ;
  }
  if (0xb < param_1->msg_controllen) {
    for (__cmsg = param_1->msg_control; __cmsg != (cmsghdr *)0x0;
        __cmsg = __cmsg_nxthdr(param_1,__cmsg)) {
      if ((__cmsg->cmsg_level == 1) && (__cmsg->cmsg_type == 1)) {
        FUN_00024d0c(__cmsg + 1,__cmsg->cmsg_len - 0xc >> 2);
      }
    }
  }
  return;
}



/* ===== FUN_00026c0c @ 00026c0c size=226 ===== */

int FUN_00026c0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  char *__s1;
  int iVar4;
  char *__s2;
  int iVar5;
  char *local_1c;
  undefined4 uStack_18;
  
  iVar1 = DAT_00026cf4;
  local_1c = (char *)0x0;
  uStack_18 = param_3;
  iVar2 = __tls_get_addr(DAT_00026cf0 + 0x26c1a);
  iVar5 = *(int *)(iVar2 + iVar1);
  if (-1 < iVar5) {
    if (param_1 != (int *)0x0) {
      *param_1 = *(int *)(iVar2 + DAT_00026cf8);
    }
    goto LAB_00026c2c;
  }
  iVar2 = access((char *)(DAT_00026d00 + 0x26c40),0);
  if ((iVar2 < 0) || (iVar2 = access((char *)(DAT_00026d08 + 0x26c7c),0), -1 < iVar2)) {
    _Var3 = getpid();
    if (_Var3 == 1) {
      __s1 = getenv((char *)(DAT_00026d04 + 0x26c54));
      if ((__s1 != (char *)0x0) && (*__s1 != '\0')) {
LAB_00026c90:
        __s2 = (char *)(DAT_00026d10 + 0x26c98);
        iVar2 = strcmp(__s1,__s2);
        if (iVar2 != 0) {
          __s2 = (char *)(DAT_00026d14 + 0x26ca6);
          iVar2 = strcmp(__s1,__s2);
          if (iVar2 != 0) {
            __s2 = (char *)(DAT_00026d18 + 0x26cb4);
            iVar2 = strcmp(__s1,__s2);
            if (iVar2 != 0) {
              iVar5 = 1;
              __s2 = (char *)(DAT_00026d1c + 0x26cc4);
              iVar2 = strcmp(__s1,__s2);
              if (iVar2 != 0) {
                __s2 = (char *)(DAT_00026d20 + 0x26cd2);
              }
              goto LAB_00026c5e;
            }
          }
        }
        iVar5 = 1;
        goto LAB_00026c5e;
      }
    }
    else {
      iVar5 = FUN_000206d4(DAT_00026d24 + 0x26cda,&local_1c);
      if (iVar5 != -2) {
        __s1 = local_1c;
        if (iVar5 < 0) goto LAB_00026c2c;
        goto LAB_00026c90;
      }
    }
    iVar5 = 0;
    __s2 = (char *)0x0;
  }
  else {
    iVar5 = 1;
    __s2 = (char *)(DAT_00026d0c + 0x26c8a);
  }
LAB_00026c5e:
  iVar4 = __tls_get_addr(DAT_00026cfc + 0x26c64);
  iVar2 = DAT_00026cf8;
  *(int *)(iVar1 + iVar4) = iVar5;
  *(char **)(iVar4 + iVar2) = __s2;
  if (param_1 != (int *)0x0) {
    *param_1 = (int)__s2;
  }
LAB_00026c2c:
  free(local_1c);
  return iVar5;
}



/* ===== FUN_00026d28 @ 00026d28 size=92 ===== */

void FUN_00026d28(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char acStack_410 [1024];
  
  iVar1 = FUN_00027e14();
  if (iVar1 != 0) {
    FUN_0002449c(acStack_410,0x400,DAT_00026d8c + 0x26d52,param_2,DAT_00026d88 + 0x26d4e,iVar1,0);
    if (param_3 == 0) {
      unlink(acStack_410);
    }
    else {
      FUN_00022d98(acStack_410,0x1ed);
      iVar1 = open64(acStack_410,DAT_00026d84,0x124);
      if (-1 < iVar1) {
        close(iVar1);
      }
    }
  }
  return;
}



/* ===== FUN_00026d90 @ 00026d90 size=126 ===== */

void FUN_00026d90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *__s2;
  int iVar2;
  char *__s1;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    for (iVar1 = FUN_000278aa(param_2); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      __s2 = (char *)FUN_0002a278(iVar1);
      for (iVar2 = FUN_000278aa(param_1); iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
        __s1 = (char *)FUN_0002a278(iVar2);
        iVar3 = strcmp(__s1,__s2);
        if (iVar3 == 0) goto LAB_00026dd6;
      }
      FUN_00026d28(param_2,__s2,0);
LAB_00026dd6:
    }
  }
  for (iVar1 = FUN_000278aa(param_1); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
    uVar4 = FUN_0002a278(iVar1);
    FUN_00026d28(param_1,uVar4,param_3);
  }
  return;
}



/* ===== FUN_00026e0e @ 00026e0e size=632 ===== */

int FUN_00026e0e(undefined4 param_1)

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
  
  iVar1 = FUN_00027e14();
  if (iVar1 == 0) {
    return -1;
  }
  iVar2 = FUN_0002783c(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_00028b42(param_1), iVar2 == 0)) {
    for (iVar2 = FUN_000278c8(param_1); iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
      iVar6 = FUN_0002a284(iVar2);
      if (iVar6 != 0) goto LAB_00026e36;
    }
    iVar2 = FUN_000278aa(param_1);
    if (iVar2 == 0) {
      uVar9 = FUN_00028b56(param_1);
      uVar9 = ~uVar9 >> 0x1f;
      goto LAB_00026e3a;
    }
  }
LAB_00026e36:
  uVar9 = 1;
LAB_00026e3a:
  FUN_0002449c(acStack_828,0x400,DAT_00027088 + 0x26e4a,iVar1,0);
  if (uVar9 == 0) {
    uVar10 = FUN_00027c94(param_1);
    uVar3 = gnu_dev_major(uVar10);
    if ((uVar3 == 0) && (iVar1 = FUN_00027c80(param_1), iVar1 == 0)) {
      unlink(acStack_828);
      return 0;
    }
  }
  FUN_0002449c(acStack_428,0x400,acStack_828,DAT_0002708c + 0x26eca,0);
  FUN_00022d98(acStack_428,0x1ed);
  __stream = fopen64(acStack_428,(char *)(DAT_00027090 + 0x26ede));
  if (__stream != (FILE *)0x0) {
    iVar1 = FUN_00028b6a(param_1);
    if (iVar1 != 0) {
      iVar1 = fileno(__stream);
      fchmod(iVar1,0x3a4);
    }
    if (uVar9 != 0) {
      uVar10 = FUN_00027c94(param_1);
      uVar3 = gnu_dev_major(uVar10);
      iVar1 = DAT_000270b0;
      if (uVar3 != 0) {
        iVar2 = FUN_0002783c(param_1);
        for (; iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
          iVar6 = FUN_0002a278(iVar2);
          fprintf(__stream,(char *)(iVar1 + 0x26fa4),iVar6 + 5);
        }
        iVar1 = FUN_00028b42(param_1);
        if (iVar1 != 0) {
          uVar5 = FUN_00028b42(param_1);
          fprintf(__stream,(char *)(DAT_000270b4 + 0x26fbc),uVar5);
        }
        iVar1 = FUN_00028b56(param_1);
        if (-1 < iVar1) {
          uVar5 = FUN_00028b56(param_1);
          fprintf(__stream,(char *)(DAT_000270b8 + 0x26fd8),uVar5);
        }
      }
      lVar11 = FUN_000273ae(param_1);
      if (lVar11 != 0) {
        uVar12 = FUN_000273ae(param_1);
        fprintf(__stream,(char *)(DAT_000270bc + 0x26ffc),(int)uVar12,
                (int)((ulonglong)uVar12 >> 0x20));
      }
      iVar1 = DAT_000270c0;
      iVar2 = FUN_000278c8(param_1);
      for (; iVar6 = DAT_000270c4, iVar2 != 0; iVar2 = FUN_0002a210(iVar2)) {
        iVar6 = FUN_0002a284(iVar2);
        if (iVar6 != 0) {
          uVar5 = FUN_0002a278(iVar2);
          uVar7 = FUN_0002a27e(iVar2);
          fprintf(__stream,(char *)(iVar1 + 0x2700c),uVar5,uVar7);
        }
      }
      iVar1 = FUN_000278aa(param_1);
      for (; iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
        uVar5 = FUN_0002a278(iVar1);
        fprintf(__stream,(char *)(iVar6 + 0x2701c),uVar5);
      }
    }
    fclose(__stream);
    iVar1 = rename(acStack_428,acStack_828);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      if (uVar9 == 0) {
        puVar8 = (undefined *)(DAT_000270a0 + 0x26f62);
      }
      else {
        puVar8 = &UNK_00027086 + DAT_000270c8;
      }
      uVar5 = FUN_000272ce(param_1);
      FUN_00022900(7,0,DAT_000270a8 + 0x26f76,0xae,DAT_000270ac + 0x26f7a,DAT_000270a4 + 0x26f70,
                   puVar8,acStack_828,uVar5);
    }
    return 0;
  }
  piVar4 = __errno_location();
  iVar2 = *piVar4;
  iVar1 = FUN_00022a68();
  if (6 < iVar1) {
    iVar1 = FUN_00022900(7,iVar2,DAT_00027098 + 0x26f04,0x85,DAT_0002709c + 0x26f0a,
                         DAT_00027094 + 0x26efe,acStack_428);
    return iVar1;
  }
  if (0 < iVar2) {
    return -iVar2;
  }
  return iVar2;
}



/* ===== FUN_000270cc @ 000270cc size=54 ===== */

undefined4 FUN_000270cc(void)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_410 [1028];
  
  iVar1 = FUN_00027e14();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0002449c(acStack_410,0x400,DAT_00027104 + 0x270e8,iVar1,0);
    unlink(acStack_410);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00027108 @ 00027108 size=32 ===== */

bool FUN_00027108(char *param_1)

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



/* ===== FUN_00027128 @ 00027128 size=34 ===== */

char * FUN_00027128(char *param_1,char *param_2)

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



/* ===== FUN_0002714a @ 0002714a size=122 ===== */

int * FUN_0002714a(int param_1)

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
      FUN_0002a07a(param_1,piVar1 + 0x13,1);
      FUN_0002a07a(param_1,piVar1 + 0x1a,1);
      FUN_0002a07a(param_1,piVar1 + 0x21,1);
      FUN_0002a07a(param_1,piVar1 + 0x28,0);
      FUN_0002a07a(param_1,piVar1 + 0x2f,1);
      piVar1[0x3f] = -1;
    }
  }
  return piVar1;
}



/* ===== FUN_000271c4 @ 000271c4 size=18 ===== */

undefined8 FUN_000271c4(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
  }
  return uVar1;
}



/* ===== FUN_000271d6 @ 000271d6 size=4 ===== */

undefined4 FUN_000271d6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ===== FUN_000271da @ 000271da size=66 ===== */

undefined4 FUN_000271da(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char acStack_210 [516];
  
  iVar1 = DAT_0002721c;
  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x10e) == '\0') {
      *(undefined1 *)((int)param_1 + 0x10e) = 1;
      iVar1 = FUN_0002aff8(*param_1,iVar1 + 0x271f8,param_1[2],acStack_210,0x200);
      if (0 < iVar1) {
        pcVar2 = strdup(acStack_210);
        param_1[0xc] = pcVar2;
      }
    }
    uVar3 = param_1[0xc];
  }
  return uVar3;
}



/* ===== FUN_00027220 @ 00027220 size=8 ===== */

void FUN_00027220(int param_1)

{
  *(undefined1 *)(param_1 + 0x10f) = 1;
  return;
}



/* ===== FUN_00027228 @ 00027228 size=6 ===== */

undefined4 FUN_00027228(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* ===== FUN_0002722e @ 0002722e size=14 ===== */

void FUN_0002722e(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  return;
}



/* ===== FUN_0002723c @ 0002723c size=146 ===== */

undefined4 FUN_0002723c(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 0xec) + -1;
    *(int *)((int)param_1 + 0xec) = iVar1;
    if (iVar1 < 1) {
      if (*(int *)((int)param_1 + 4) != 0) {
        FUN_0002723c();
      }
      free(*(void **)((int)param_1 + 8));
      free(*(void **)((int)param_1 + 0x10));
      free(*(void **)((int)param_1 + 0x18));
      free(*(void **)((int)param_1 + 0x28));
      free(*(void **)((int)param_1 + 0x2c));
      FUN_0002a226((int)param_1 + 0x4c);
      FUN_0002a226((int)param_1 + 0x68);
      FUN_0002a226((int)param_1 + 0x84);
      FUN_0002a226((int)param_1 + 0xa0);
      FUN_0002a226((int)param_1 + 0xbc);
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



/* ===== FUN_000272ce @ 000272ce size=6 ===== */

undefined4 FUN_000272ce(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_000272d4 @ 000272d4 size=6 ===== */

undefined4 FUN_000272d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_000272da @ 000272da size=178 ===== */

int FUN_000272da(int param_1)

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
    __name = (char *)FUN_000272d4();
    __dirp = opendir(__name);
    if (__dirp == (DIR *)0x0) {
      piVar1 = __errno_location();
      iVar5 = -*piVar1;
    }
    else {
      pdVar2 = readdir64(__dirp);
      iVar6 = DAT_0002738c + 0x27320;
      iVar5 = 0;
      while (pdVar2 != (dirent64 *)0x0) {
        if ((pdVar2->d_type & 0xfd) == 8) {
          uVar3 = FUN_000272d4(param_1);
          FUN_0002449c(acStack_428,0x400,uVar3,iVar6,pdVar2->d_name,0);
          iVar4 = lstat64(acStack_428,&sStack_490);
          if ((iVar4 == 0) && ((int)(sStack_490.st_mode << 0x17) < 0)) {
            FUN_0002a09c(param_1 + 0xa0,pdVar2->d_name,0);
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



/* ===== FUN_00027390 @ 00027390 size=6 ===== */

undefined4 FUN_00027390(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* ===== FUN_00027396 @ 00027396 size=6 ===== */

undefined4 FUN_00027396(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}



/* ===== FUN_0002739c @ 0002739c size=12 ===== */

void FUN_0002739c(int param_1)

{
  *(undefined1 *)(param_1 + 0x10b) = 0;
  FUN_0002a226();
  return;
}



/* ===== FUN_000273a8 @ 000273a8 size=6 ===== */

undefined4 FUN_000273a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  return uVar1;
}



/* ===== FUN_000273ae @ 000273ae size=6 ===== */

undefined8 FUN_000273ae(int param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* ===== FUN_000273b4 @ 000273b4 size=280 ===== */

undefined4 FUN_000273b4(undefined4 *param_1,char *param_2)

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
  uVar1 = FUN_0002a1fc(puVar4);
  iVar2 = FUN_0002a25a(uVar1,param_2);
  if (iVar2 == 0) {
    uVar1 = FUN_000272d4(param_1);
    FUN_0002449c(acStack_1420,0x400,uVar1,DAT_000274cc + 0x2740e,param_2,0);
    iVar2 = lstat64(acStack_1420,&sStack_1488);
    if (iVar2 != 0) {
      FUN_0002a09c(puVar4,param_2,0);
      return 0;
    }
    if ((sStack_1488.st_mode & 0xf000) == 0xa000) {
      iVar2 = strcmp(param_2,(char *)(DAT_000274d0 + 0x27440));
      if (((iVar2 != 0) && (iVar2 = strcmp(param_2,(char *)(DAT_000274d4 + 0x2744c)), iVar2 != 0))
         && (iVar2 = strcmp(param_2,(char *)(DAT_000274d8 + 0x27458)), iVar2 != 0)) {
        return 0;
      }
      iVar2 = FUN_0002aff8(*param_1,param_2,param_1[2],auStack_1020,0x1000);
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
      FUN_0002b17c(auStack_1020,10);
    }
    FUN_0002a09c(puVar4,param_2,auStack_1020);
  }
  uVar1 = FUN_0002a27e();
  return uVar1;
}



/* ===== FUN_000274dc @ 000274dc size=236 ===== */

int FUN_000274dc(int param_1,int param_2,char *param_3)

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
    uVar1 = FUN_000272d4(param_1);
    FUN_0002449c(acStack_428,0x400,uVar1,DAT_000275cc + 0x27520,param_2,0);
    iVar2 = lstat64(acStack_428,&sStack_490);
    if (iVar2 != 0) {
      FUN_0002a09c(param_1 + 0x84,param_2,0);
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
        FUN_0002b17c(param_3,10);
        iVar2 = open64(acStack_428,DAT_000275c8);
        if (-1 < iVar2) {
          sVar4 = write(iVar2,param_3,__n);
          close(iVar2);
          if (-1 < sVar4) {
            if ((int)__n <= sVar4) {
              FUN_0002a09c(param_1 + 0x84,param_2,param_3);
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



/* ===== FUN_000275f2 @ 000275f2 size=26 ===== */

undefined4 FUN_000275f2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x10b) = 0;
  iVar1 = FUN_0002a09c();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002760c @ 0002760c size=8 ===== */

void FUN_0002760c(int param_1)

{
  *(undefined1 *)(param_1 + 0x112) = 1;
  return;
}



/* ===== FUN_00027614 @ 00027614 size=48 ===== */

undefined4 FUN_00027614(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00027108(param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    *(undefined1 *)(param_1 + 0x10d) = 0;
    iVar1 = FUN_0002a09c(param_1 + 0xbc,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00027644 @ 00027644 size=46 ===== */

void FUN_00027644(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00027108(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_0002a1fc(param_1 + 0xbc);
    iVar1 = FUN_0002a25a(uVar2,param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x10d) = 0;
      FUN_0002a1ac();
      return;
    }
  }
  return;
}



/* ===== FUN_00027672 @ 00027672 size=12 ===== */

void FUN_00027672(int param_1)

{
  *(undefined1 *)(param_1 + 0x10d) = 0;
  FUN_0002a226();
  return;
}



/* ===== FUN_0002767e @ 0002767e size=8 ===== */

undefined4 FUN_0002767e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return 0;
}



/* ===== FUN_00027686 @ 00027686 size=8 ===== */

undefined4 FUN_00027686(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  return 0;
}



/* ===== FUN_0002768e @ 0002768e size=316 ===== */

int FUN_0002768e(int param_1)

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
  iVar1 = FUN_00027e14();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    FUN_0002449c(acStack_4420,0x400,DAT_00027818 + 0x276ba,iVar1,0);
    __stream = fopen64(acStack_4420,(char *)(DAT_0002781c + 0x276c8));
    iVar1 = DAT_0002782c;
    if (__stream != (FILE *)0x0) {
      *(undefined1 *)(param_1 + 0x112) = 1;
LAB_0002771a:
      do {
        pcVar3 = fgets(acStack_4021 + 1,0x4000,__stream);
        if ((pcVar3 == (char *)0x0) || (sVar4 = strlen(acStack_4021 + 1), sVar4 < 4)) {
          fclose(__stream);
          return 0;
        }
        acStack_4021[sVar4] = '\0';
        switch(acStack_4021[1]) {
        case 'E':
          goto switchD_00027756_caseD_45;
        case 'G':
          FUN_00027614(param_1,acStack_4021 + 3);
          goto LAB_0002771a;
        case 'I':
          uVar8 = strtoull(acStack_4021 + 3,(char **)0x0,10);
          uVar5 = (undefined4)(uVar8 >> 0x20);
          FUN_00027eec(param_1,uVar5,(int)uVar8,uVar5);
          goto LAB_0002771a;
        case 'L':
          iVar6 = atoi(acStack_4021 + 3);
          FUN_0002767e(param_1,iVar6);
          goto LAB_0002771a;
        case 'S':
          FUN_0002449c(acStack_4420,0x400,iVar1 + 0x2771c,acStack_4021 + 3,0);
          FUN_000275f2(param_1,acStack_4420);
          goto LAB_0002771a;
        case 'W':
          iVar6 = atoi(acStack_4021 + 3);
          FUN_00027686(param_1,iVar6);
          goto LAB_0002771a;
        }
      } while( true );
    }
    puVar2 = (uint *)__errno_location();
    uVar7 = *puVar2;
    iVar1 = FUN_00022a68();
    if (iVar1 < 7) {
      iVar1 = ((int)uVar7 >> 0x1f) - (uVar7 ^ (int)uVar7 >> 0x1f);
    }
    else {
      iVar1 = FUN_00022900(7,uVar7,DAT_00027824 + 0x276ee,0x269,DAT_00027828 + 0x276f2,
                           DAT_00027820 + 0x276e8,acStack_4420);
    }
  }
  return iVar1;
switchD_00027756_caseD_45:
  uVar5 = FUN_00027ad4(param_1,acStack_4021 + 3);
  FUN_0002a290(uVar5,1);
  goto LAB_0002771a;
}



/* ===== FUN_00027830 @ 00027830 size=12 ===== */

undefined4 FUN_00027830(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar1 = FUN_0002768e();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_0002783c @ 0002783c size=30 ===== */

void FUN_0002783c(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027830();
    }
    FUN_0002a1fc(param_1 + 0x4c);
    return;
  }
  return;
}



/* ===== FUN_0002785a @ 0002785a size=60 ===== */

undefined8 FUN_0002785a(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027830();
    }
    if ((*(int *)(param_1 + 0xe4) != 0 || *(int *)(param_1 + 0xe0) != 0) &&
       (lVar2 = FUN_00024758(1), lVar2 != 0)) {
      uVar1 = VectorSub(lVar2,*(undefined8 *)(param_1 + 0xe0),8);
      return uVar1;
    }
  }
  return 0;
}



/* ===== FUN_00027896 @ 00027896 size=20 ===== */

undefined1 FUN_00027896(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027830();
  }
  return *(undefined1 *)(param_1 + 0x112);
}



/* ===== FUN_000278aa @ 000278aa size=30 ===== */

void FUN_000278aa(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027830();
    }
    FUN_0002a1fc(param_1 + 0xbc);
    return;
  }
  return;
}



/* ===== FUN_000278c8 @ 000278c8 size=270 ===== */

undefined4 FUN_000278c8(int param_1)

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
      FUN_00027c74();
      FUN_00027830(param_1);
    }
    if (*(char *)(param_1 + 0x10b) == '\0') {
      *(undefined1 *)(param_1 + 0x10b) = 1;
      iVar1 = FUN_0002783c(param_1);
      iVar3 = DAT_000279d8;
      if (iVar1 != 0) {
        local_424 = auStack_420;
        uVar2 = FUN_0002a278();
        uVar2 = FUN_00024460(&local_424,0x400,uVar2,0);
        for (iVar1 = FUN_0002a210(iVar1); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
          uVar4 = FUN_0002a278(iVar1);
          uVar2 = FUN_00024460(&local_424,uVar2,iVar3 + 0x27918,uVar4,0);
        }
        FUN_000279ec(param_1,DAT_000279dc + 0x27934,auStack_420);
      }
    }
    if (*(char *)(param_1 + 0x10d) == '\0') {
      *(undefined1 *)(param_1 + 0x10d) = 1;
      iVar3 = FUN_000278aa(param_1);
      if (iVar3 != 0) {
        local_424 = auStack_420;
        uVar2 = FUN_00024460(&local_424,0x400,DAT_000279e0 + 0x27958,0);
        iVar1 = DAT_000279e4 + 0x2796c;
        for (iVar3 = FUN_000278aa(param_1); iVar3 != 0; iVar3 = FUN_0002a210(iVar3)) {
          uVar4 = FUN_0002a278(iVar3);
          uVar2 = FUN_00024460(&local_424,uVar2,uVar4,iVar1,0);
        }
        FUN_000279ec(param_1,DAT_000279e8 + 0x27980,auStack_420);
      }
    }
    uVar2 = FUN_0002a1fc(param_1 + 0x68);
  }
  return uVar2;
}



/* ===== FUN_000279ec @ 000279ec size=42 ===== */

undefined4 FUN_000279ec(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x10c) = 0;
  if (param_3 == 0) {
    uVar1 = FUN_000278c8();
    iVar2 = FUN_0002a25a(uVar1,param_2);
    if (iVar2 != 0) {
      FUN_0002a1ac();
    }
    return 0;
  }
  uVar1 = FUN_0002a09c(param_1 + 0x68,param_2,param_3,param_4);
  return uVar1;
}



/* ===== FUN_00027a16 @ 00027a16 size=50 ===== */

undefined4 FUN_00027a16(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  free(*(void **)(param_1 + 0x2c));
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x2c) = pcVar2;
  iVar1 = DAT_00027a48;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *(undefined1 *)(param_1 + 0x10a) = 1;
    FUN_000279ec(param_1,iVar1 + 0x27a3c,pcVar2,1,param_4);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00027a4c @ 00027a4c size=44 ===== */

undefined4 FUN_00027a4c(int param_1,undefined4 param_2)

{
  int iVar1;
  char acStack_30 [36];
  
  iVar1 = DAT_00027a78;
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  snprintf(acStack_30,0x20,(char *)(iVar1 + 0x27a60),param_2);
  FUN_000279ec(param_1,DAT_00027a7c + 0x27a70,acStack_30);
  return 0;
}



/* ===== FUN_00027a80 @ 00027a80 size=74 ===== */

undefined4 FUN_00027a80(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

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
    iVar1 = asprintf((char **)(param_1 + 0x18),(char *)(DAT_00027acc + 0x27a9e),param_2,
                     (uint)*param_2,param_4);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    FUN_000279ec(param_1,DAT_00027ad0 + 0x27ab4);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00027ad4 @ 00027ad4 size=60 ===== */

void FUN_00027ad4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char acStack_4010 [16388];
  
  FUN_0002448c(acStack_4010,0x4000,param_2);
  pcVar1 = strchr(acStack_4010,0x3d);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    pcVar2 = (char *)0x0;
    if (pcVar1[1] != '\0') {
      pcVar2 = pcVar1 + 1;
    }
    FUN_000279ec(param_1,acStack_4010,pcVar2);
  }
  return;
}



/* ===== FUN_00027b10 @ 00027b10 size=324 ===== */

int FUN_00027b10(int param_1)

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
  FUN_0002449c(acStack_4428,0x400,*(undefined4 *)(param_1 + 8),DAT_00027c54 + 0x27b26,0);
  __stream = fopen64(acStack_4428,(char *)(DAT_00027c58 + 0x27b3a));
  iVar2 = DAT_00027c60;
  iVar1 = DAT_00027c5c;
  if (__stream == (FILE *)0x0) {
    piVar3 = __errno_location();
    return -*piVar3;
  }
  __major = 0;
  *(undefined1 *)(param_1 + 0x111) = 1;
  iVar7 = DAT_00027c64 + 0x27b6c;
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
    iVar5 = FUN_00027128(acStack_4028,iVar7);
    if (iVar5 == 0) {
      iVar5 = FUN_00027128(acStack_4028,iVar1 + 0x27b66);
      if (iVar5 == 0) {
        iVar5 = FUN_00027128(acStack_4028,iVar2 + 0x27b6a);
        if (iVar5 == 0) {
          iVar5 = FUN_00027128(acStack_4028,DAT_00027c68 + 0x27bfe);
          if (iVar5 == 0) {
            iVar5 = FUN_00027128(acStack_4028,DAT_00027c6c + 0x27c22);
            if (iVar5 == 0) {
              iVar5 = FUN_00027128(acStack_4028,DAT_00027c70 + 0x27c40);
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
          FUN_00027ad4(param_1,acStack_4028);
        }
        else {
          FUN_00027a80(param_1,acStack_4020);
        }
      }
      else {
        uVar8 = strtoull(acStack_4020,(char **)0x0,10);
        FUN_00027a4c(param_1,(int)uVar8);
      }
    }
    else {
      FUN_00027a16(param_1,acStack_4020);
    }
  } while( true );
}



/* ===== FUN_00027c74 @ 00027c74 size=12 ===== */

undefined4 FUN_00027c74(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x111) == '\0') {
    uVar1 = FUN_00027b10();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_00027c80 @ 00027c80 size=20 ===== */

undefined4 FUN_00027c80(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027c74();
  }
  return *(undefined4 *)(param_1 + 0xf8);
}



/* ===== FUN_00027c94 @ 00027c94 size=34 ===== */

undefined8 FUN_00027c94(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027c74();
    }
    return *(undefined8 *)(param_1 + 0xf0);
  }
  uVar1 = (*(code *)PTR_gnu_dev_makedev_000492bc)(0,0);
  return uVar1;
}



/* ===== FUN_00027cb4 @ 00027cb4 size=28 ===== */

undefined4 FUN_00027cb4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10a) == '\0') {
      *(undefined1 *)(param_1 + 0x10a) = 1;
      FUN_00027c74();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}



/* ===== FUN_00027cd0 @ 00027cd0 size=18 ===== */

undefined4 FUN_00027cd0(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027c74();
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ===== FUN_00027ce2 @ 00027ce2 size=18 ===== */

undefined4 FUN_00027ce2(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027c74();
  }
  return *(undefined4 *)(param_1 + 0x20);
}



/* ===== FUN_00027cf4 @ 00027cf4 size=18 ===== */

undefined4 FUN_00027cf4(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027c74();
  }
  return *(undefined4 *)(param_1 + 0x24);
}



/* ===== FUN_00027d06 @ 00027d06 size=30 ===== */

int FUN_00027d06(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10f) == '\0') {
        FUN_00027c74();
      }
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  return iVar1;
}



/* ===== FUN_00027d24 @ 00027d24 size=50 ===== */

undefined4 FUN_00027d24(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  free(*(void **)(param_1 + 0x28));
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x28) = pcVar2;
  iVar1 = DAT_00027d58;
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0xfffffff4;
  }
  else {
    *(undefined1 *)(param_1 + 0x109) = 1;
    FUN_000279ec(param_1,iVar1 + 0x27d4a,pcVar2,1,param_4);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00027d5c @ 00027d5c size=148 ===== */

undefined4 FUN_00027d5c(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *__haystack;
  undefined1 auStack_210 [516];
  
  iVar1 = DAT_00027df0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x109) == '\0') {
    puVar3 = auStack_210;
    *(undefined1 *)((int)param_1 + 0x109) = 1;
    iVar1 = FUN_0002aff8(*param_1,iVar1 + 0x27d7a,param_1[2],puVar3,0x200);
    if (iVar1 < 1) {
      __haystack = (char *)param_1[3];
      iVar1 = FUN_00027128(__haystack,DAT_00027df4 + 0x27da8);
      if (iVar1 == 0) {
        pcVar2 = strstr(__haystack,(char *)(DAT_00027dfc + 0x27dba));
        if (pcVar2 == (char *)0x0) {
          iVar1 = FUN_00027128(__haystack,DAT_00027e04 + 0x27dcc);
          if (((iVar1 == 0) && (iVar1 = FUN_00027128(__haystack,DAT_00027e08 + 0x27dd8), iVar1 == 0)
              ) && (iVar1 = FUN_00027128(__haystack,DAT_00027e0c + 0x27de4), iVar1 == 0))
          goto LAB_00027d94;
          puVar3 = (undefined1 *)((int)&DAT_00027df0 + DAT_00027e10);
        }
        else {
          puVar3 = (undefined1 *)(DAT_00027e00 + 0x27dc4);
        }
      }
      else {
        puVar3 = (undefined1 *)(DAT_00027df8 + 0x27db2);
      }
    }
    FUN_00027d24(param_1,puVar3);
  }
LAB_00027d94:
  return param_1[10];
}



/* ===== FUN_00027e14 @ 00027e14 size=176 ===== */

undefined4 FUN_00027e14(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = FUN_00027d5c();
    if (iVar1 == 0) {
      return 0;
    }
    uVar6 = FUN_00027c94(param_1);
    uVar2 = gnu_dev_major(uVar6);
    if (uVar2 == 0) {
      iVar1 = FUN_00027c80(param_1);
      if (iVar1 < 1) {
        pcVar3 = strrchr(*(char **)(param_1 + 0xc),0x2f);
        if (pcVar3 == (char *)0x0) {
          return 0;
        }
        uVar5 = FUN_00027d5c(param_1);
        iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00027ed0 + 0x27eba),uVar5,pcVar3 + 1
                        );
      }
      else {
        uVar5 = FUN_00027c80(param_1);
        iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00027ecc + 0x27e94),uVar5);
      }
    }
    else {
      pcVar3 = (char *)FUN_00027d5c(param_1);
      iVar1 = strcmp(pcVar3,(char *)(DAT_00027ec4 + 0x27e3e));
      if (iVar1 == 0) {
        uVar5 = 0x62;
      }
      else {
        uVar5 = 99;
      }
      uVar6 = FUN_00027c94(param_1);
      uVar2 = gnu_dev_major(uVar6);
      uVar6 = FUN_00027c94(param_1);
      uVar4 = gnu_dev_minor(uVar6);
      iVar1 = asprintf((char **)(param_1 + 0x3c),(char *)(DAT_00027ec8 + 0x27e68),uVar5,uVar2,uVar4)
      ;
    }
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ===== FUN_00027ed4 @ 00027ed4 size=24 ===== */

undefined4 FUN_00027ed4(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000279ec();
  if (*param_2 != '.') {
    FUN_0002a290(uVar1,1);
  }
  return 0;
}



/* ===== FUN_00027eec @ 00027eec size=44 ===== */

void FUN_00027eec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char acStack_28 [28];
  
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe4) = param_4;
  snprintf(acStack_28,0x16,(char *)(DAT_00027f18 + 0x27f06),param_4,param_3,param_4);
  FUN_000279ec(param_1,DAT_00027f1c + 0x27f12,acStack_28);
  return;
}



/* ===== FUN_00027f20 @ 00027f20 size=36 ===== */

void FUN_00027f20(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xe4);
    uVar1 = *(uint *)(param_2 + 0xe0) | uVar2;
    uVar3 = CONCAT44(uVar1,*(uint *)(param_2 + 0xe0));
    if (uVar1 != 0) goto LAB_00027f30;
  }
  uVar3 = FUN_00024758(1);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
LAB_00027f30:
  FUN_00027eec(param_1,(int)((ulonglong)uVar3 >> 0x20),(int)uVar3,uVar2);
  return;
}



/* ===== FUN_00027f44 @ 00027f44 size=136 ===== */

uint FUN_00027f44(int param_1,char *param_2)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  free(*(void **)(param_1 + 8));
  pcVar2 = strdup(param_2);
  iVar6 = DAT_00027fcc + 0x27f5c;
  *(char **)(param_1 + 8) = pcVar2;
  iVar5 = DAT_00027fd0;
  if (pcVar2 != (char *)0x0) {
    *(char **)(param_1 + 0xc) = pcVar2 + 4;
    FUN_000279ec(param_1,iVar5 + 0x27f70);
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
      iVar6 = **(int **)(iVar6 + DAT_00027fd4);
      do {
        if (iVar5 == 0) {
LAB_00027fb0:
          *(undefined4 *)(param_1 + 0x14) = 0;
          return 0;
        }
        iVar5 = iVar5 + -1;
        uVar1 = *(ushort *)(iVar6 + (uint)*(byte *)(iVar4 + iVar5) * 2);
        if ((uVar1 & 8) == 0) {
          if (iVar5 != 0) {
            return uVar1 & 8;
          }
          goto LAB_00027fb0;
        }
        *(int *)(param_1 + 0x14) = iVar4 + iVar5;
      } while( true );
    }
  }
  return 0xfffffff4;
}



/* ===== FUN_00027fd8 @ 00027fd8 size=260 ===== */

int FUN_00027fd8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  stat64 sStack_880;
  char acStack_818 [4];
  undefined1 auStack_814 [1020];
  char acStack_418 [1024];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_00027128(param_2,DAT_000280dc + 0x28006);
    if (iVar2 == 0) {
      iVar2 = FUN_00022a68();
      if (6 < iVar2) {
        FUN_00022900(7,0,DAT_000280e4 + 0x28026,0x30b,DAT_000280e8 + 0x2803e,DAT_000280e0 + 0x28020,
                     param_2);
      }
      piVar1 = __errno_location();
      iVar2 = 0x16;
LAB_0002803a:
      *piVar1 = iVar2;
      return 0;
    }
    pcVar3 = strrchr((char *)(param_2 + 4),0x2f);
    if (((pcVar3 != (char *)0x0) && (pcVar3[1] != '\0')) && ((char *)(param_2 + 6) <= pcVar3)) {
      FUN_0002448c(acStack_818,0x400,param_2);
      FUN_0002b05c(param_1,acStack_818,0x400);
      iVar2 = FUN_00027128(auStack_814,DAT_000280ec + 0x2807c);
      if (iVar2 == 0) {
        iVar2 = stat64(acStack_818,&sStack_880);
        if (iVar2 != 0) {
          return 0;
        }
        if ((sStack_880.st_mode & 0xf000) != 0x4000) {
          piVar1 = __errno_location();
          iVar2 = 0x15;
          goto LAB_0002803a;
        }
      }
      else {
        FUN_0002449c(acStack_418,0x400,acStack_818,DAT_000280f0 + 0x28092,0);
        iVar2 = stat64(acStack_418,&sStack_880);
        if (iVar2 != 0) {
          return 0;
        }
      }
      iVar2 = FUN_0002714a(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_00027f44(iVar2,acStack_818);
      return iVar2;
    }
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 0;
}



/* ===== FUN_000280f4 @ 000280f4 size=100 ===== */

undefined4 FUN_000280f4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char acStack_410 [1024];
  
  if (param_2 == 0x62) {
    iVar5 = DAT_00028158 + 0x2811a;
  }
  else {
    if (param_2 != 99) {
      piVar1 = __errno_location();
      *piVar1 = 0x16;
      return 0;
    }
    iVar5 = (int)&DAT_00028158 + DAT_00028160;
  }
  uVar2 = gnu_dev_major(CONCAT44(param_4,param_3));
  uVar3 = gnu_dev_minor(CONCAT44(param_4,param_3));
  snprintf(acStack_410,0x400,(char *)(DAT_0002815c + 0x28140),iVar5,uVar2,uVar3);
  uVar4 = FUN_00027fd8(param_1,acStack_410);
  return uVar4;
}



/* ===== FUN_00028164 @ 00028164 size=438 ===== */

undefined4 FUN_00028164(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  stat64 sStack_688;
  char acStack_620 [512];
  char acStack_420 [1024];
  
  iVar1 = strcmp(param_2,(char *)(DAT_0002831c + 0x28178));
  if (iVar1 == 0) {
    FUN_0002449c(acStack_420,0x400,DAT_00028320 + 0x28194,param_3,0);
    iVar1 = stat64(acStack_420,&sStack_688);
    if (iVar1 == 0) goto LAB_00028310;
    FUN_0002449c(acStack_420,0x400,DAT_00028324 + 0x281b6,param_3,0);
    iVar1 = stat64(acStack_420,&sStack_688);
    if (iVar1 == 0) goto LAB_00028310;
    FUN_0002449c(acStack_420,0x400,DAT_00028328 + 0x281d8,param_3,0);
  }
  else {
    iVar1 = strcmp(param_2,(char *)(DAT_0002832c + 0x281fc));
    if (iVar1 == 0) {
      FUN_0002449c(acStack_420,0x400,DAT_00028330 + 0x28210,param_3,0);
    }
    else {
      iVar1 = strcmp(param_2,(char *)(DAT_00028334 + 0x28222));
      if (iVar1 == 0) {
        FUN_0002448c(acStack_620,0x200,param_3);
        pcVar2 = strchr(acStack_620,0x3a);
        iVar3 = DAT_0002833c;
        iVar1 = DAT_00028338;
        if (pcVar2 == (char *)0x0) {
          piVar4 = __errno_location();
          *piVar4 = 0x16;
          return 0;
        }
        *pcVar2 = '\0';
        FUN_0002449c(acStack_420,0x400,iVar3 + 0x28268,acStack_620,iVar1 + 0x28260,pcVar2 + 1,0);
        iVar3 = stat64(acStack_420,&sStack_688);
        if (iVar3 == 0) goto LAB_00028310;
        FUN_0002449c(acStack_420,0x400,DAT_00028340 + 0x2828c,acStack_620,iVar1 + 0x28260,pcVar2 + 1
                     ,0);
      }
      else {
        iVar3 = DAT_00028344 + 0x282b6;
        FUN_0002449c(acStack_420,0x400,DAT_00028348 + 0x282c2,param_2,iVar3,param_3,0);
        iVar1 = stat64(acStack_420,&sStack_688);
        if (iVar1 == 0) goto LAB_00028310;
        FUN_0002449c(acStack_420,0x400,DAT_0002834c + 0x282e4,param_2,iVar3,param_3,0);
        iVar1 = stat64(acStack_420,&sStack_688);
        if (iVar1 == 0) goto LAB_00028310;
        FUN_0002449c(acStack_420,0x400,DAT_00028354 + 0x28308,param_2,DAT_00028350 + 0x28300,param_3
                     ,0);
      }
    }
  }
  iVar1 = stat64(acStack_420,&sStack_688);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00028310:
  uVar5 = FUN_00027fd8(param_1,acStack_420);
  return uVar5;
}



/* ===== FUN_00028358 @ 00028358 size=274 ===== */

int FUN_00028358(undefined4 param_1,byte *param_2)

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
      iVar7 = sscanf((char *)param_2,(char *)(DAT_0002846c + 0x283b4),&local_41d,&local_41c,
                     &local_418);
      if (iVar7 != 3) {
        return 0;
      }
      uVar8 = gnu_dev_makedev(local_41c,local_418);
      iVar7 = FUN_000280f4(param_1,local_41d,(int)uVar8,(int)(uVar8 >> 0x20));
      return iVar7;
    }
    if (bVar1 == 0x2b) {
      FUN_0002448c(&local_418,0x400,param_2 + 1);
      pcVar6 = strchr((char *)&local_418,0x3a);
      if (pcVar6 == (char *)0x0) {
        piVar2 = __errno_location();
        *piVar2 = 0x16;
        return 0;
      }
      *pcVar6 = '\0';
      iVar7 = FUN_00028164(param_1,&local_418,pcVar6 + 1);
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
    iVar7 = FUN_00028164(param_1,DAT_00028470 + 0x2840c,&local_418);
    if (iVar7 == 0) {
      return 0;
    }
    uVar5 = FUN_00027c80();
    if (uVar5 == uVar3) {
      return iVar7;
    }
    FUN_0002723c(iVar7);
    piVar2 = __errno_location();
    iVar7 = 0x13;
    goto LAB_00028428;
  }
  piVar2 = __errno_location();
  iVar7 = 0x16;
LAB_00028428:
  *piVar2 = iVar7;
  return 0;
}



/* ===== FUN_00028474 @ 00028474 size=78 ===== */

int FUN_00028474(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_418 [5];
  char acStack_413 [2];
  char acStack_411 [1021];
  
  FUN_0002448c(auStack_418,0x400,param_1[2]);
  while ((pcVar1 = strrchr(acStack_413,0x2f), pcVar1 != (char *)0x0 && (acStack_411 <= pcVar1))) {
    *pcVar1 = '\0';
    iVar2 = FUN_00027fd8(*param_1,auStack_418);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 2;
  return 0;
}



/* ===== FUN_000284c2 @ 000284c2 size=40 ===== */

undefined4 FUN_000284c2(int param_1)

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
      uVar2 = FUN_00028474();
      *(undefined4 *)(param_1 + 4) = uVar2;
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}



/* ===== FUN_000284ea @ 000284ea size=88 ===== */

int FUN_000284ea(int param_1,char *param_2,char *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 == (char *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    while (param_1 = FUN_000284c2(param_1), param_1 != 0) {
      pcVar2 = (char *)FUN_00027d5c(param_1);
      if ((pcVar2 != (char *)0x0) && (iVar3 = strcmp(pcVar2,param_2), iVar3 == 0)) {
        if (param_3 == (char *)0x0) {
          return param_1;
        }
        pcVar2 = (char *)FUN_00027cb4(param_1);
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



/* ===== FUN_00028542 @ 00028542 size=44 ===== */

undefined4 FUN_00028542(int param_1,char *param_2)

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
    FUN_000279ec(param_1,DAT_00028570 + 0x28562,pcVar1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00028574 @ 00028574 size=744 ===== */

void FUN_00028574(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char local_418 [1028];
  
  iVar1 = FUN_00027128(param_2,DAT_0002885c + 0x28586);
  if (iVar1 == 0) {
    iVar1 = FUN_00027128(param_2,DAT_00028864 + 0x285b8);
    if (iVar1 == 0) {
      iVar1 = FUN_00027128(param_2,DAT_00028868 + 0x285d0);
      if (iVar1 == 0) {
        iVar1 = FUN_00027128(param_2,DAT_0002886c + 0x285e8);
        if (iVar1 == 0) {
          iVar1 = FUN_00027128(param_2,DAT_00028870 + 0x28602);
          if (iVar1 == 0) {
            iVar1 = FUN_00027128(param_2,DAT_00028874 + 0x2864a);
            if (iVar1 == 0) {
              iVar1 = FUN_00027128(param_2,DAT_00028878 + 0x2869a);
              if (iVar1 == 0) {
                iVar1 = FUN_00027128(param_2,DAT_0002887c + 0x286be);
                if (iVar1 == 0) {
                  iVar1 = FUN_00027128(param_2,DAT_00028884 + 0x286f2);
                  if (iVar1 != 0) {
                    FUN_00028542(param_1,param_2 + 7);
                    return;
                  }
                  iVar1 = FUN_00027128(param_2,DAT_00028888 + 0x28708);
                  if (iVar1 != 0) {
                    uVar6 = strtoull((char *)(param_2 + 6),(char **)0x0,10);
                    *(int *)(param_1 + 0x100) = (int)uVar6;
                    return;
                  }
                  iVar1 = FUN_00027128(param_2,DAT_0002888c + 0x28724);
                  if (iVar1 != 0) {
                    uVar6 = strtoull((char *)(param_2 + 6),(char **)0x0,10);
                    *(int *)(param_1 + 0x104) = (int)uVar6;
                    return;
                  }
                  iVar1 = FUN_00027128(param_2,DAT_00028890 + 0x28740);
                  if (iVar1 == 0) {
                    iVar1 = FUN_00027128(param_2,DAT_00028898 + 0x2876c);
                    if (iVar1 == 0) {
                      iVar1 = FUN_00027128(param_2,DAT_000288a4 + 0x287a2);
                      if (iVar1 != 0) {
                        uVar6 = strtoull((char *)(param_2 + 8),(char **)0x0,10);
                        FUN_00027a4c(param_1,(int)uVar6);
                        return;
                      }
                      iVar1 = FUN_00027128(param_2,DAT_000288a8 + 0x287c6);
                      if (iVar1 == 0) {
                        iVar1 = FUN_00027128(param_2,DAT_000288b4 + 0x287f8);
                        if (iVar1 == 0) {
                          iVar1 = FUN_00027128(param_2,DAT_000288c0 + 0x2882a);
                          if (iVar1 == 0) {
                            FUN_00027ad4(param_1,param_2);
                            return;
                          }
                          pcVar3 = local_418;
                          uVar4 = strtoul((char *)(param_2 + 7),(char **)0x0,10);
                          pcVar2 = (char *)(DAT_000288c4 + 0x28842);
                          *(ulong *)(param_1 + 0x24) = uVar4;
                          snprintf(pcVar3,0x20,pcVar2,uVar4);
                          iVar1 = DAT_000288c8 + 0x28852;
                        }
                        else {
                          pcVar3 = local_418;
                          uVar4 = strtoul((char *)(param_2 + 7),(char **)0x0,10);
                          pcVar2 = (char *)(DAT_000288b8 + 0x28812);
                          *(ulong *)(param_1 + 0x20) = uVar4;
                          snprintf(pcVar3,0x20,pcVar2,uVar4);
                          iVar1 = DAT_000288bc + 0x28822;
                        }
                      }
                      else {
                        pcVar3 = local_418;
                        uVar4 = strtoul((char *)(param_2 + 8),(char **)0x0,8);
                        pcVar2 = (char *)(DAT_000288ac + 0x287e0);
                        *(ulong *)(param_1 + 0x1c) = uVar4;
                        snprintf(pcVar3,0x20,pcVar2,uVar4);
                        iVar1 = DAT_000288b0 + 0x287f0;
                      }
                    }
                    else {
                      pcVar3 = local_418;
                      uVar6 = strtoull((char *)(param_2 + 7),(char **)0x0,10);
                      pcVar2 = (char *)(DAT_0002889c + 0x28784);
                      *(ulonglong *)(param_1 + 0xd8) = uVar6;
                      snprintf(pcVar3,0x20,pcVar2);
                      iVar1 = DAT_000288a0 + 0x2879a;
                    }
                  }
                  else {
                    free(*(void **)(param_1 + 0x38));
                    pcVar3 = strdup((char *)(param_2 + 0xc));
                    *(char **)(param_1 + 0x38) = pcVar3;
                    if (pcVar3 == (char *)0x0) {
                      return;
                    }
                    iVar1 = DAT_00028894 + 0x28764;
                  }
                }
                else {
                  free(*(void **)(param_1 + 0x30));
                  pcVar3 = strdup((char *)(param_2 + 7));
                  *(char **)(param_1 + 0x30) = pcVar3;
                  iVar1 = DAT_00028880;
                  if (pcVar3 == (char *)0x0) {
                    return;
                  }
                  *(undefined1 *)(param_1 + 0x10e) = 1;
                  iVar1 = iVar1 + 0x286e4;
                }
                FUN_000279ec(param_1,iVar1,pcVar3);
              }
              else {
                uVar6 = strtoull((char *)(param_2 + 0x13),(char **)0x0,10);
                uVar5 = (undefined4)(uVar6 >> 0x20);
                FUN_00027eec(param_1,uVar5,(int)uVar6,uVar5);
              }
            }
            else {
              FUN_0002448c(local_418,0x400,param_2 + 5);
              pcVar3 = strchr(local_418,0x3a);
              if (pcVar3 != (char *)0x0) {
                while ((pcVar2 = pcVar3 + 1, *pcVar2 != '\0' &&
                       (pcVar3 = strchr(pcVar2,0x3a), pcVar3 != (char *)0x0))) {
                  *pcVar3 = '\0';
                  FUN_00027614(param_1,pcVar2);
                }
              }
            }
          }
          else {
            FUN_0002448c(local_418,0x400,param_2 + 9);
            pcVar3 = local_418;
            while (pcVar2 = strchr(pcVar3,0x20), pcVar2 != (char *)0x0) {
              *pcVar2 = '\0';
              FUN_000275f2(param_1,pcVar3);
              pcVar3 = pcVar2 + 1;
            }
            if (*pcVar3 != '\0') {
              FUN_000275f2(param_1,pcVar3);
            }
          }
        }
        else {
          FUN_00027a80(param_1,param_2 + 8);
        }
      }
      else {
        FUN_00027a16(param_1,param_2 + 8);
      }
    }
    else {
      FUN_00027d24(param_1,param_2 + 10);
    }
  }
  else {
    FUN_0002449c(local_418,0x400,DAT_00028860 + 0x2859e,param_2 + 8,0);
    FUN_00027f44(param_1,local_418);
  }
  return;
}



/* ===== FUN_000288cc @ 000288cc size=94 ===== */

undefined4 FUN_000288cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char *__format;
  char acStack_38 [32];
  
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = param_4;
  uVar1 = gnu_dev_major(CONCAT44(param_4,param_3));
  __format = (char *)(DAT_0002892c + 0x288ee);
  snprintf(acStack_38,0x20,__format,uVar1);
  FUN_000279ec(param_1,DAT_00028930 + 0x28900,acStack_38);
  uVar1 = gnu_dev_minor(CONCAT44(param_4,param_3));
  snprintf(acStack_38,0x20,__format,uVar1);
  FUN_000279ec(param_1,DAT_00028934 + 0x28920,acStack_38);
  return 0;
}



/* ===== FUN_00028938 @ 00028938 size=60 ===== */

undefined4 FUN_00028938(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (0 < (int)*(uint *)(param_1 + 0x100)) {
    uVar2 = gnu_dev_makedev(*(uint *)(param_1 + 0x100),*(uint *)(param_1 + 0x104));
    uVar1 = (undefined4)(uVar2 >> 0x20);
    FUN_000288cc(param_1,uVar1,(int)uVar2,uVar1);
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



/* ===== FUN_000289f0 @ 000289f0 size=30 ===== */

undefined4 FUN_000289f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_000278c8();
    FUN_0002a25a(uVar1,param_2);
    uVar1 = FUN_0002a27e();
    return uVar1;
  }
  return 0;
}



/* ===== FUN_00028a0e @ 00028a0e size=206 ===== */

undefined4 FUN_00028a0e(int param_1)

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
LAB_00028a2e:
    uVar1 = 0xfffffff4;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      pvVar3 = malloc(0x200);
      *(void **)(param_1 + 0x40) = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00028a2e;
    }
    iVar2 = FUN_000278c8(param_1);
    iVar7 = DAT_00028adc + 0x28a52;
    iVar6 = 0x1000;
    iVar5 = 0;
    while (iVar2 != 0) {
      pcVar4 = (char *)FUN_0002a278(iVar2);
      iVar8 = iVar5;
      if (*pcVar4 != '.') {
        iVar8 = iVar5 + 1;
        *(void **)(*(int *)(param_1 + 0x40) + iVar5 * 4) = local_2c[0];
        if (0x7f < iVar5 + 2U) {
          return 0xffffffea;
        }
        uVar1 = FUN_0002a27e(iVar2);
        iVar6 = FUN_00024460(local_2c,iVar6,pcVar4,iVar7,uVar1,0);
        if (iVar6 == 0) {
          return 0xffffffea;
        }
        iVar6 = iVar6 + -1;
        local_2c[0] = (void *)((int)local_2c[0] + 1);
      }
      iVar2 = FUN_0002a210(iVar2);
      iVar5 = iVar8;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar5 * 4) = 0;
    *(int *)(param_1 + 0x48) = (int)local_2c[0] - *(int *)(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x10c) = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00028ae0 @ 00028ae0 size=26 ===== */

undefined4 FUN_00028ae0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x10c) == '\0') && (iVar2 = FUN_00028a0e(), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  return uVar1;
}



/* ===== FUN_00028afa @ 00028afa size=34 ===== */

undefined4 FUN_00028afa(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x10c) == '\0') && (iVar2 = FUN_00028a0e(), iVar2 != 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    *param_2 = *(undefined4 *)(param_1 + 0x44);
  }
  return uVar1;
}



/* ===== FUN_00028b1c @ 00028b1c size=38 ===== */

undefined4 FUN_00028b1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10f) == '\0') {
      FUN_00027830();
    }
    uVar1 = FUN_000278aa(param_1);
    iVar2 = FUN_0002a25a(uVar1,param_2);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== FUN_00028b42 @ 00028b42 size=20 ===== */

undefined4 FUN_00028b42(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027830();
  }
  return *(undefined4 *)(param_1 + 0xe8);
}



/* ===== FUN_00028b56 @ 00028b56 size=20 ===== */

undefined4 FUN_00028b56(int param_1)

{
  if (*(char *)(param_1 + 0x10f) == '\0') {
    FUN_00027830();
  }
  return *(undefined4 *)(param_1 + 0xfc);
}



/* ===== FUN_00028b6a @ 00028b6a size=6 ===== */

undefined1 FUN_00028b6a(int param_1)

{
  return *(undefined1 *)(param_1 + 0x114);
}



/* ===== FUN_00028b70 @ 00028b70 size=8 ===== */

void FUN_00028b70(int param_1)

{
  *(undefined1 *)(param_1 + 0x114) = 1;
  return;
}



/* ===== FUN_00028b78 @ 00028b78 size=204 ===== */

int FUN_00028b78(int param_1,int param_2)

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
    __ptr = (void *)FUN_0002569e(*(undefined4 *)(param_1 + 8));
    if (__ptr == (void *)0x0) {
      iVar2 = -0xc;
    }
    else {
      iVar3 = 0;
      local_34 = __ptr;
      iVar2 = 0;
      local_30 = DAT_00028c44 + 0x28bac;
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
      iVar2 = FUN_00027f44(param_1,acStack_38 + iVar2);
      if (-1 < iVar2) {
        iVar3 = DAT_00028c48 + 0x28c00;
        iVar2 = FUN_000289f0(param_1,iVar3);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          FUN_000279ec(param_1,DAT_00028c4c + 0x28c10,iVar2);
          FUN_000279ec(param_1,iVar3,param_2);
          iVar2 = 0;
        }
      }
    }
  }
  free(__ptr);
  return iVar2;
}



/* ===== FUN_00028c50 @ 00028c50 size=78 ===== */

int FUN_00028c50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0002714a(*param_1);
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
    }
    else {
      uVar3 = FUN_000272d4(param_1);
      FUN_00027f44(iVar1,uVar3);
      uVar3 = FUN_00027d5c(param_1);
      FUN_00027d24(iVar1,uVar3);
      uVar4 = FUN_00027c94(param_1);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      FUN_000288cc(iVar1,uVar3,(int)uVar4,uVar3);
    }
  }
  return iVar1;
}



/* ===== FUN_00028c9e @ 00028c9e size=24 ===== */

int FUN_00028c9e(void)

{
  int iVar1;
  
  iVar1 = FUN_00028c50();
  if (iVar1 != 0) {
    FUN_00027830();
    FUN_00027220(iVar1);
  }
  return iVar1;
}



/* ===== FUN_00028cb6 @ 00028cb6 size=140 ===== */

int FUN_00028cb6(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *__s;
  
  if ((param_2 != 0) && (0 < param_3)) {
    iVar2 = FUN_0002714a();
    if (iVar2 == 0) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      return 0;
    }
    FUN_00027220();
    iVar4 = 0;
    do {
      __s = (char *)(param_2 + iVar4);
      sVar3 = strlen(__s);
      if (sVar3 == 0) break;
      iVar4 = iVar4 + 1 + sVar3;
      FUN_00028574(iVar2,__s);
    } while (iVar4 < param_3);
    iVar4 = FUN_00028938(iVar2);
    if (-1 < iVar4) {
      return iVar2;
    }
    iVar4 = FUN_00022a68();
    if (6 < iVar4) {
      FUN_00022900(7,0,DAT_00028d48 + 0x28d2e,0x7fe,DAT_00028d4c + 0x28d82,DAT_00028d44 + 0x28d28);
    }
    FUN_0002723c(iVar2);
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 0;
}



/* ===== FUN_00028d50 @ 00028d50 size=82 ===== */

int FUN_00028d50(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = FUN_00027fd8();
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_00027c74();
    if (iVar3 < 0) {
      FUN_0002723c(iVar2);
      piVar1 = __errno_location();
      *piVar1 = -iVar3;
    }
    else {
      iVar3 = FUN_00028542(iVar2,param_3);
      if (-1 < iVar3) {
        return iVar2;
      }
      FUN_0002723c(iVar2);
      piVar1 = __errno_location();
      *piVar1 = -iVar3;
    }
  }
  return 0;
}



/* ===== FUN_00028da2 @ 00028da2 size=46 ===== */

void FUN_00028da2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (iVar1 = FUN_000278c8(param_2); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
    uVar2 = FUN_0002a278();
    uVar3 = FUN_0002a27e(iVar1);
    FUN_00027ed4(param_1,uVar2,uVar3);
  }
  return;
}



/* ===== FUN_00028dd0 @ 00028dd0 size=42 ===== */

int FUN_00028dd0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint __n;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  __n = uVar3;
  if (uVar2 <= uVar3) {
    __n = uVar2;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,__n);
  if (iVar1 == 0) {
    if (uVar2 < uVar3) {
      iVar1 = -1;
    }
    else if (uVar3 < uVar2) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00028dfa @ 00028dfa size=110 ===== */

undefined4 FUN_00028dfa(int param_1,char *param_2)

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



/* ===== FUN_00028e68 @ 00028e68 size=56 ===== */

undefined4 FUN_00028e68(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__pattern;
  int iVar3;
  
  iVar1 = FUN_0002a1fc(param_1 + 0x78);
  if (iVar1 == 0) {
LAB_00028e78:
    uVar2 = 1;
  }
  else {
    for (iVar1 = FUN_0002a1fc(param_1 + 0x78); uVar2 = 0, iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      __pattern = (char *)FUN_0002a278();
      iVar3 = fnmatch(__pattern,param_2,0);
      if (iVar3 == 0) goto LAB_00028e78;
    }
  }
  return uVar2;
}



/* ===== FUN_00028ea0 @ 00028ea0 size=132 ===== */

undefined4 FUN_00028ea0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__pattern;
  char *__pattern_00;
  int iVar3;
  char *__name;
  char *__name_00;
  int iVar4;
  
  iVar1 = FUN_0002a1fc(param_1 + 0x94);
  if (iVar1 == 0) {
LAB_00028eb2:
    uVar2 = 1;
  }
  else {
    for (iVar1 = FUN_0002a1fc(param_1 + 0x94); uVar2 = 0, iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      __pattern = (char *)FUN_0002a278();
      __pattern_00 = (char *)FUN_0002a27e(iVar1);
      for (iVar3 = FUN_000278c8(param_2); iVar3 != 0; iVar3 = FUN_0002a210(iVar3)) {
        __name = (char *)FUN_0002a278(iVar3);
        __name_00 = (char *)FUN_0002a27e(iVar3);
        iVar4 = fnmatch(__pattern,__name,0);
        if (iVar4 == 0) {
          if (__pattern_00 != (char *)0x0) {
            if (__name_00 == (char *)0x0) goto LAB_00028f02;
            __name_00 = (char *)fnmatch(__pattern_00,__name_00,0);
          }
          if (__name_00 == (char *)0x0) goto LAB_00028eb2;
        }
LAB_00028f02:
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00028f24 @ 00028f24 size=34 ===== */

bool FUN_00028f24(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  char *__name;
  int iVar2;
  
  __name = (char *)FUN_000273b4();
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



/* ===== FUN_00028f46 @ 00028f46 size=100 ===== */

undefined4 FUN_00028f46(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 != (char *)0x0) {
    for (iVar1 = FUN_0002a1fc(param_1 + 0x5c); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      pcVar2 = (char *)FUN_0002a278(iVar1);
      iVar3 = fnmatch(pcVar2,param_2,0);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_0002a1fc(param_1 + 0x40);
    if (iVar1 == 0) {
      return 1;
    }
    for (iVar1 = FUN_0002a1fc(param_1 + 0x40); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      pcVar2 = (char *)FUN_0002a278(iVar1);
      iVar3 = fnmatch(pcVar2,param_2,0);
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00028faa @ 00028faa size=116 ===== */

undefined4 FUN_00028faa(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  for (iVar1 = FUN_0002a1fc(param_1 + 0x24); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
    uVar2 = FUN_0002a278(iVar1);
    uVar3 = FUN_0002a27e(iVar1);
    iVar4 = FUN_00028f24(param_2,uVar2,uVar3);
    if (iVar4 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_0002a1fc(param_1 + 8);
  if (iVar1 != 0) {
    for (iVar1 = FUN_0002a1fc(param_1 + 8); iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
      uVar2 = FUN_0002a278(iVar1);
      uVar3 = FUN_0002a27e(iVar1);
      iVar4 = FUN_00028f24(param_2,uVar2,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ===== FUN_0002901e @ 0002901e size=106 ===== */

undefined4 FUN_0002901e(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00027fd8(*param_1);
  if (iVar1 == 0) {
    return 0xffffffed;
  }
  uVar2 = FUN_00027d5c();
  iVar3 = FUN_00028f46(param_1,uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_00027390(iVar1);
    iVar3 = FUN_00028e68(param_1,uVar2);
    if (((iVar3 != 0) && (iVar3 = FUN_00028ea0(param_1,iVar1), iVar3 != 0)) &&
       (iVar3 = FUN_00028faa(param_1,iVar1), iVar3 != 0)) {
      uVar2 = FUN_000272d4(iVar1);
      FUN_00028dfa(param_1,uVar2);
      uVar2 = 1;
      goto LAB_0002903c;
    }
  }
  uVar2 = 0;
LAB_0002903c:
  FUN_0002723c(iVar1);
  return uVar2;
}



/* ===== FUN_00029088 @ 00029088 size=136 ===== */

int FUN_00029088(undefined4 param_1,char *param_2,int param_3)

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
    __fmt = (char *)(DAT_00029110 + 0x290be);
    while (pdVar2 != (dirent64 *)0x0) {
      if (((pdVar2->d_name[0] != '.') && (pdVar2->d_type == '\x04')) &&
         (iVar3 = asprintf(&local_2c,__fmt,param_2,pdVar2->d_name,uVar4), -1 < iVar3)) {
        FUN_0002901e(param_1,local_2c);
        if (param_3 != 0) {
          FUN_00029088(param_1,local_2c,param_3 + -1);
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



/* ===== FUN_00029114 @ 00029114 size=52 ===== */

bool FUN_00029114(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *__s;
  size_t __n;
  int iVar2;
  
  pcVar1 = (char *)FUN_000272ce(param_2);
  __s = (char *)FUN_000272ce(*param_1);
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



/* ===== FUN_00029148 @ 00029148 size=354 ===== */

undefined4 FUN_00029148(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar1 = FUN_00024460(&local_82c,0x400,DAT_000292ac + 0x2916c,param_2,0);
  if (param_3 != 0) {
    uVar1 = FUN_00024460(&local_82c,uVar1,DAT_000292b0 + 0x2918a,param_3,0);
  }
  if (param_4 != 0) {
    FUN_00024460(&local_82c,uVar1,DAT_000292b4 + 0x2919c,param_4,0);
  }
  __dirp = opendir(acStack_828);
  if (__dirp == (DIR *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    pdVar2 = readdir64(__dirp);
    iVar7 = DAT_000292b8 + 0x291c0;
    while (pdVar2 != (dirent64 *)0x0) {
      if (pdVar2->d_name[0] != '.') {
        iVar3 = FUN_00028e68(param_1,pdVar2->d_name);
        if (iVar3 != 0) {
          FUN_0002449c(auStack_428,0x400,acStack_828,iVar7,pdVar2->d_name,0);
          iVar3 = FUN_00027fd8(*param_1,auStack_428);
          if (iVar3 != 0) {
            if ((*(char *)((int)param_1 + 0xf9) == '\0') || (iVar4 = FUN_00027896(), iVar4 != 0)) {
LAB_0002920a:
              if ((param_1[0x33] == 0) || (iVar4 = FUN_00029114(param_1 + 0x33,iVar3), iVar4 != 0))
              {
                iVar4 = FUN_0002a1fc(param_1 + 0x2c);
                if (iVar4 != 0) {
                  for (iVar4 = FUN_0002a1fc(param_1 + 0x2c); iVar4 != 0; iVar4 = FUN_0002a210(iVar4)
                      ) {
                    uVar1 = FUN_0002a278(iVar4);
                    iVar6 = FUN_00028b1c(iVar3,uVar1);
                    if (iVar6 == 0) goto LAB_0002925e;
                  }
                }
                iVar4 = FUN_00028ea0(param_1,iVar3);
                if ((iVar4 != 0) && (iVar4 = FUN_00028faa(param_1,iVar3), iVar4 != 0)) {
                  uVar1 = FUN_000272d4(iVar3);
                  FUN_00028dfa(param_1,uVar1);
                }
              }
            }
            else {
              __dev = FUN_00027c94(iVar3);
              uVar5 = gnu_dev_major(__dev);
              if ((uVar5 == 0) && (iVar4 = FUN_00027c80(iVar3), iVar4 < 1)) goto LAB_0002920a;
            }
LAB_0002925e:
            FUN_0002723c(iVar3);
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



/* ===== FUN_000292bc @ 000292bc size=124 ===== */

undefined4 FUN_000292bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char acStack_420 [1028];
  
  FUN_0002449c(acStack_420,0x400,DAT_00029338 + 0x292d4,param_2,0);
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
        iVar2 = FUN_00028f46(param_1,pcVar4);
        if (iVar2 != 0) {
          FUN_00029148(param_1,param_2,pdVar1->d_name,param_3);
        }
      }
    }
    closedir(__dirp);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0002933c @ 0002933c size=210 ===== */

void FUN_0002933c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  DIR *__dirp;
  dirent64 *pdVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_420 [1028];
  
  iVar1 = FUN_0002a1fc(param_1 + 0x2c);
  iVar6 = DAT_00029410 + 0x29358;
  for (; iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
    uVar2 = FUN_0002a278(iVar1);
    FUN_0002449c(acStack_420,0x400,iVar6,uVar2,0);
    __dirp = opendir(acStack_420);
    if (__dirp != (DIR *)0x0) {
      while (pdVar3 = readdir64(__dirp), pdVar3 != (dirent64 *)0x0) {
        if ((pdVar3->d_name[0] != '.') &&
           (iVar4 = FUN_00028358(*param_1,pdVar3->d_name), iVar4 != 0)) {
          uVar2 = FUN_00027d5c();
          iVar5 = FUN_00028f46(param_1,uVar2);
          if (iVar5 != 0) {
            uVar2 = FUN_00027390(iVar4);
            iVar5 = FUN_00028e68(param_1,uVar2);
            if (((iVar5 != 0) &&
                (((param_1[0x33] == 0 || (iVar5 = FUN_00029114(param_1 + 0x33,iVar4), iVar5 != 0))
                 && (iVar5 = FUN_00028ea0(param_1,iVar4), iVar5 != 0)))) &&
               (iVar5 = FUN_00028faa(param_1,iVar4), iVar5 != 0)) {
              uVar2 = FUN_000272d4(iVar4);
              FUN_00028dfa(param_1,uVar2);
            }
          }
          FUN_0002723c(iVar4);
        }
      }
      closedir(__dirp);
    }
  }
  return;
}



/* ===== FUN_00029414 @ 00029414 size=128 ===== */

int * FUN_00029414(int param_1)

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
      FUN_0002a07a(param_1,piVar1 + 2,0);
      FUN_0002a07a(param_1,piVar1 + 9,0);
      FUN_0002a07a(param_1,piVar1 + 0x10,1);
      FUN_0002a07a(param_1,piVar1 + 0x17,1);
      FUN_0002a07a(param_1,piVar1 + 0x1e,1);
      FUN_0002a07a(param_1,piVar1 + 0x25,0);
      FUN_0002a07a(param_1,piVar1 + 0x2c,1);
      FUN_0002a07a(param_1,piVar1 + 0x34,0);
    }
  }
  return piVar1;
}



/* ===== FUN_0002949e @ 0002949e size=122 ===== */

undefined4 FUN_0002949e(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4) + -1;
    *(int *)((int)param_1 + 4) = iVar1;
    if (iVar1 < 1) {
      FUN_0002a226((int)param_1 + 8);
      FUN_0002a226((int)param_1 + 0x24);
      FUN_0002a226((int)param_1 + 0x40);
      FUN_0002a226((int)param_1 + 0x5c);
      FUN_0002a226((int)param_1 + 0x78);
      FUN_0002a226((int)param_1 + 0x94);
      FUN_0002a226((int)param_1 + 0xb0);
      FUN_0002723c(*(undefined4 *)((int)param_1 + 0xcc));
      FUN_0002a226((int)param_1 + 0xd0);
      for (uVar2 = 0; uVar2 < *(uint *)((int)param_1 + 0xf0); uVar2 = uVar2 + 1) {
        free(*(void **)((int)*(void **)((int)param_1 + 0xec) + uVar2 * 8));
      }
      free(*(void **)((int)param_1 + 0xec));
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0002951e @ 0002951e size=458 ===== */

void FUN_0002951e(int param_1)

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
    FUN_0002a226(iVar10);
    if (1 < *(size_t *)(param_1 + 0xf0)) {
      if (*(void **)(param_1 + 0xec) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0002291a(DAT_000296f0 + 0x2955e,DAT_000296ec + 0x2955c,0x188,DAT_000296e8 + 0x2955a);
      }
      qsort(*(void **)(param_1 + 0xec),*(size_t *)(param_1 + 0xf0),8,
            (__compar_fn_t)(DAT_000296f4 + 0x29568));
    }
    uVar3 = *(uint *)(param_1 + 0xf0);
    pcVar5 = (char *)0x0;
    puVar12 = (undefined4 *)0x0;
    __needle = (char *)(DAT_000296f8 + 0x29580);
    __reject = (char *)(DAT_000296fc + 0x29586);
    __s2 = (char *)(DAT_00029700 + 0x2958c);
    uVar7 = 0xffffffff;
    for (uVar9 = 0; uVar9 != uVar3; uVar9 = uVar9 + 1) {
      iVar8 = *(int *)(param_1 + 0xec);
      puVar11 = (undefined4 *)(iVar8 + uVar9 * 8);
      __s1 = *(char **)(iVar8 + uVar9 * 8);
      uVar6 = uVar7;
      if (((puVar12 == (undefined4 *)0x0) || (puVar11[1] != puVar12[1])) ||
         (iVar2 = memcmp(__s1,(void *)*puVar12,puVar11[1]), iVar2 != 0)) {
        puVar12 = (undefined4 *)(DAT_00029704 + 0x29602);
        do {
          if ((char *)*puVar12 == (char *)0x0) {
            puVar12 = puVar11;
            if (uVar7 == 0xffffffff) {
              pcVar5 = strstr(__s1,__needle);
              if (pcVar5 == (char *)0x0) {
LAB_000296c2:
                pcVar5 = (char *)0x0;
              }
              else {
                sVar1 = strcspn(pcVar5 + 0xb,__reject);
                pcVar5 = pcVar5 + 0xb + sVar1;
                iVar2 = strncmp(pcVar5,__s2,9);
                if (iVar2 == 0) {
                  if (pcVar5 == (char *)0xfffffff7) goto LAB_000296c2;
                  pcVar5 = pcVar5 + (1 - (int)__s1);
                  uVar6 = uVar9;
                  if (pcVar5 != (char *)0x0) goto LAB_00029646;
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
                FUN_0002a09c(iVar10,pcVar4,0);
              }
            }
            FUN_0002a09c(iVar10,*(undefined4 *)(iVar8 + uVar9 * 8),0);
            uVar6 = uVar7;
            goto LAB_00029646;
          }
          pcVar4 = strstr(__s1 + 4,(char *)*puVar12);
          puVar12 = puVar12 + 1;
        } while (pcVar4 == (char *)0x0);
        FUN_00028dfa(param_1,__s1);
        puVar12 = (undefined4 *)(uVar9 * 8 + *(int *)(param_1 + 0xec));
      }
LAB_00029646:
      uVar7 = uVar6;
    }
    uVar9 = uVar3;
    if (-1 < (int)uVar7) {
      FUN_0002a09c(iVar10,*(undefined4 *)(*(int *)(param_1 + 0xec) + uVar7 * 8),0);
    }
    for (; uVar9 < *(uint *)(param_1 + 0xf0); uVar9 = uVar9 + 1) {
      iVar8 = *(int *)(param_1 + 0xec);
      FUN_0002a09c(iVar10,*(undefined4 *)(iVar8 + uVar9 * 8),0);
      free(*(void **)(iVar8 + uVar9 * 8));
    }
    *(uint *)(param_1 + 0xf0) = uVar3;
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) | 1;
  }
  FUN_0002a1fc(iVar10);
  return;
}



/* ===== FUN_00029708 @ 00029708 size=34 ===== */

undefined4 FUN_00029708(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else if ((param_2 == 0) ||
          (iVar2 = FUN_0002a09c(param_1 + 0x40,param_2,0,param_4,param_4), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff4;
  }
  return uVar1;
}



/* ===== FUN_000297ce @ 000297ce size=44 ===== */

undefined4 FUN_000297ce(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_0002723c();
    }
    uVar1 = FUN_0002722e(param_2);
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00029862 @ 00029862 size=126 ===== */

undefined4 FUN_00029862(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  stat64 sStack_78;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_0002a1fc(param_1 + 0xb0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        iVar1 = stat64((char *)(DAT_000298e0 + 0x298a8),&sStack_78);
        if (iVar1 == 0) {
          iVar1 = DAT_000298e4 + 0x298b6;
          iVar3 = DAT_000298e8 + 0x298b8;
        }
        else {
          FUN_000292bc(param_1,DAT_000298f0 + 0x298ce,DAT_000298ec + 0x298cc,0);
          iVar3 = DAT_000298f4 + 0x298da;
          iVar1 = 0;
        }
        FUN_000292bc(param_1,iVar3,iVar1,0);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_000272d4(*(int *)(param_1 + 0xcc));
        FUN_0002901e(param_1,uVar2);
        uVar2 = FUN_00029088(param_1,uVar2,0x100);
      }
    }
    else {
      uVar2 = FUN_0002933c(param_1);
    }
  }
  return uVar2;
}



/* ===== FUN_000298f8 @ 000298f8 size=116 ===== */

undefined4 FUN_000298f8(int param_1)

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
    iVar3 = DAT_0002996c + 0x29906;
    iVar1 = FUN_00028f46(param_1,iVar3);
    if (iVar1 != 0) {
      FUN_00029148(param_1,iVar3,0);
    }
    iVar1 = stat64((char *)(DAT_00029970 + 0x29920),&sStack_78);
    if (iVar1 == 0) {
      iVar1 = DAT_00029980 + 0x29966;
    }
    else {
      iVar1 = DAT_00029974 + 0x2992a;
    }
    iVar3 = FUN_00028f46(param_1,DAT_00029978 + 0x29930);
    if (iVar3 != 0) {
      FUN_00029148(param_1,iVar1,0);
    }
    iVar4 = DAT_0002997c + 0x29948;
    iVar3 = FUN_00028f46(param_1,iVar4);
    uVar2 = 0;
    if (iVar3 != 0) {
      FUN_000292bc(param_1,iVar1,iVar4,iVar4);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_0002998c @ 0002998c size=44 ===== */

int FUN_0002998c(int param_1,int param_2,undefined1 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined1 local_18 [16];
  
  local_18[0] = param_3;
  pvVar1 = bsearch(local_18,(void *)(param_2 + *(int *)(*(int *)(param_1 + 0x78) + 0x20)),
                   (uint)*(byte *)(param_2 + 8),*(size_t *)(*(int *)(param_1 + 0x78) + 0x28),
                   (__compar_fn_t)(DAT_000299b8 + 0x299a2));
  iVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x78) + *(int *)((int)pvVar1 + 8);
  }
  return iVar2;
}



/* ===== FUN_000299bc @ 000299bc size=20 ===== */

void FUN_000299bc(void)

{
  undefined4 in_r3;
  
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(DAT_000299d8 + 0x299ce,DAT_000299d4 + 0x299cc,0x5f,DAT_000299d0 + 0x299ca,in_r3);
}



/* ===== FUN_000299dc @ 000299dc size=20 ===== */

void FUN_000299dc(int param_1)

{
  int iVar1;
  int extraout_r3;
  
  iVar1 = *(int *)(param_1 + 0x804);
  if (iVar1 == 0) {
    param_1 = FUN_000299bc();
    iVar1 = extraout_r3;
  }
  *(int *)(param_1 + 0x804) = iVar1 + -1;
  return;
}



/* ===== FUN_000299f0 @ 000299f0 size=304 ===== */

int FUN_000299f0(int param_1,int *param_2,int param_3,char *param_4,char *param_5)

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
      iVar6 = FUN_000299f0(param_1,iVar5 + *(int *)((int)param_2 + uVar3 + 8),0,param_4,param_5,
                           piVar12,param_3);
      if (iVar6 < 0) {
        return iVar6;
      }
      iVar6 = *(int *)(param_4 + 0x804);
      if (iVar6 == 0) goto LAB_00029a98;
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
               (iVar5 = FUN_0002a09c(param_1 + 0x7c,iVar7 + iVar5 + 1,piVar2[2] + iVar7), iVar5 == 0
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
LAB_00029a98:
      FUN_000299bc();
      iVar6 = extraout_r3;
    }
    uVar9 = uVar9 + 1;
    *(int *)(param_4 + 0x804) = iVar6 + -1;
  } while( true );
}



/* ===== FUN_00029b20 @ 00029b20 size=422 ===== */

int FUN_00029b20(int param_1,int param_2)

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
          iVar12 = FUN_000299f0(param_1,piVar11,iVar8,auStack_828,pcVar6);
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
    iVar12 = FUN_0002998c(param_1,piVar11,0x2a);
    if (iVar12 != 0) {
      if (local_24 + 1 < 0x800) {
        puVar1 = auStack_828 + local_24;
        local_24 = local_24 + 1;
        *puVar1 = 0x2a;
      }
      iVar12 = FUN_000299f0(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_000299dc(auStack_828);
    }
    iVar12 = FUN_0002998c(param_1,piVar11,0x3f);
    if (iVar12 != 0) {
      if (local_24 + 1 < 0x800) {
        puVar1 = auStack_828 + local_24;
        local_24 = local_24 + 1;
        *puVar1 = 0x3f;
      }
      iVar12 = FUN_000299f0(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_000299dc(auStack_828);
    }
    iVar12 = FUN_0002998c(param_1,piVar11,0x5b);
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
      iVar12 = FUN_000299f0(param_1,iVar12,0,auStack_828,param_2 + iVar13);
      if (iVar12 < 0) {
        return iVar12;
      }
      FUN_000299dc(auStack_828);
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
           (iVar13 = FUN_0002a09c(param_1 + 0x7c,iVar8 + iVar13 + 1,piVar5[2] + iVar8), iVar13 == 0)
           ) {
          return -0xc;
        }
        iVar12 = iVar12 + 1;
      }
      return 0;
    }
    piVar11 = (int *)FUN_0002998c(param_1,piVar11);
    iVar12 = iVar13 + 1;
  } while( true );
}



/* ===== FUN_00029cd0 @ 00029cd0 size=52 ===== */

undefined4 FUN_00029cd0(void *param_1)

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
    FUN_0002a226((int)param_1 + 0x7c);
    free(param_1);
  }
  return 0;
}



/* ===== FUN_00029d04 @ 00029d04 size=560 ===== */

void * FUN_00029d04(undefined4 param_1)

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
  
  iVar7 = DAT_00029f34;
  local_28 = *(undefined4 *)(DAT_00029f34 + 0x29d20);
  uStack_24 = *(undefined4 *)(DAT_00029f34 + 0x29d24);
  pvVar1 = calloc(1,0x98);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  *(undefined4 *)((int)pvVar1 + 4) = 1;
  FUN_0002a07a(param_1,(int)pvVar1 + 0x7c,1);
  __stream = fopen64((char *)(DAT_00029f3c + 0x29d44),(char *)(DAT_00029f38 + 0x29d42));
  *(FILE **)((int)pvVar1 + 8) = __stream;
  if (__stream == (FILE *)0x0) {
    iVar2 = FUN_00022a68();
    if (iVar2 < 7) goto LAB_00029da8;
    iVar7 = iVar7 + 0x29d28;
    iVar2 = DAT_00029f40 + 0x29d5c;
    iVar5 = DAT_00029f44 + 0x29d60;
    uVar6 = 0x118;
LAB_00029d64:
    iVar4 = 0;
  }
  else {
    iVar2 = fileno(__stream);
    iVar2 = fstat64(iVar2,(stat64 *)((int)pvVar1 + 0x10));
    if ((iVar2 < 0) || (__len = *(uint *)((int)pvVar1 + 0x40), __len < 0x50)) {
      iVar7 = FUN_00022a68();
      if (iVar7 < 7) goto LAB_00029da8;
      piVar3 = __errno_location();
      iVar5 = DAT_00029f48 + 0x29d92;
      iVar2 = DAT_00029f4c + 0x29d98;
      iVar7 = DAT_00029f50 + 0x29dae;
      uVar6 = 0x11f;
    }
    else {
      iVar2 = fileno(*(FILE **)((int)pvVar1 + 8));
      __s1 = mmap64((void *)0x0,__len,1,1,iVar2,0);
      *(void **)((int)pvVar1 + 0x78) = __s1;
      if (__s1 != (void *)0xffffffff) {
        iVar2 = memcmp(__s1,&local_28,8);
        iVar5 = FUN_00022a68();
        if ((iVar2 == 0) &&
           (*(int *)((int)__s1 + 0x14) == 0 &&
            *(int *)((int)pvVar1 + 0x40) == *(int *)((int)__s1 + 0x10))) {
          if (iVar5 < 7) {
            return pvVar1;
          }
          iVar5 = DAT_00029f68 + 0x29e4c;
          FUN_00022900(7,0,iVar5,0x132,iVar7 + 0x29d28,DAT_00029f6c + 0x29e50);
          iVar2 = FUN_00022a68();
          if (iVar2 < 7) {
            return pvVar1;
          }
          FUN_00022900(7,0,iVar5,0x133,iVar7 + 0x29d28,DAT_00029f70 + 0x29e7a,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 8),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0xc));
          iVar7 = FUN_00022a68();
          if (iVar7 < 7) {
            return pvVar1;
          }
          iVar5 = DAT_00029f74 + 0x29ea0;
          iVar2 = DAT_00029f78 + 0x29eb8;
          FUN_00022900(7,0,iVar5,0x134,iVar2,DAT_00029f7c + 0x29eaa,
                       *(undefined4 *)((int)pvVar1 + 0x40),*(undefined4 *)((int)pvVar1 + 0x44));
          iVar7 = FUN_00022a68();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022900(7,0,iVar5,0x135,iVar2,DAT_00029f80 + 0x29ed4,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x18),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x1c));
          iVar7 = FUN_00022a68();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022900(7,0,iVar5,0x136,iVar2,DAT_00029f84 + 0x29efe,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x48),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x4c));
          iVar7 = FUN_00022a68();
          if (iVar7 < 7) {
            return pvVar1;
          }
          FUN_00022900(7,0,iVar5,0x137,iVar2,DAT_00029f88 + 0x29f28,
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x40),
                       *(undefined4 *)(*(int *)((int)pvVar1 + 0x78) + 0x44));
          return pvVar1;
        }
        if (iVar5 < 7) goto LAB_00029da8;
        iVar5 = DAT_00029f5c + 0x29e2c;
        iVar2 = DAT_00029f60 + 0x29e32;
        iVar7 = DAT_00029f64 + 0x29e48;
        uVar6 = 0x12d;
        goto LAB_00029d64;
      }
      iVar2 = FUN_00022a68();
      if (iVar2 < 7) goto LAB_00029da8;
      piVar3 = __errno_location();
      iVar7 = iVar7 + 0x29d28;
      iVar5 = DAT_00029f54 + 0x29df2;
      iVar2 = DAT_00029f58 + 0x29df8;
      uVar6 = 0x126;
    }
    iVar4 = *piVar3;
  }
  FUN_00022900(7,iVar4,iVar2,uVar6,iVar7,iVar5);
LAB_00029da8:
  FUN_00029cd0(pvVar1);
  return (void *)0x0;
}



/* ===== FUN_00029fd0 @ 00029fd0 size=66 ===== */

undefined4 FUN_00029fd0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    FUN_0002a226(param_1 + 0x7c);
    iVar2 = FUN_00029b20(param_1,param_2);
    if (-1 < iVar2) {
      uVar3 = FUN_0002a1fc(param_1 + 0x7c);
      return uVar3;
    }
    piVar1 = __errno_location();
    *piVar1 = -iVar2;
  }
  return 0;
}



/* ===== FUN_0002a014 @ 0002a014 size=58 ===== */

uint FUN_0002a014(int param_1,char *param_2)

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



/* ===== FUN_0002a04e @ 0002a04e size=6 ===== */

void FUN_0002a04e(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}



/* ===== FUN_0002a054 @ 0002a054 size=10 ===== */

bool FUN_0002a054(int *param_1)

{
  return (int *)*param_1 == param_1;
}



/* ===== FUN_0002a05e @ 0002a05e size=12 ===== */

void FUN_0002a05e(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  param_1[1] = (int)piVar1;
  *piVar1 = (int)param_1;
  return;
}



/* ===== FUN_0002a06a @ 0002a06a size=16 ===== */

void FUN_0002a06a(int *param_1)

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



/* ===== FUN_0002a07a @ 0002a07a size=34 ===== */

void FUN_0002a07a(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  param_2[1] = 0;
  param_2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2[5] = 0;
  param_2[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 6) = param_3;
  FUN_0002a04e(param_2 + 1);
  return;
}



/* ===== FUN_0002a09c @ 0002a09c size=272 ===== */

int * FUN_0002a09c(int param_1,char *param_2,char *param_3)

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
    uVar2 = FUN_0002a014();
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
  if (pcVar3 == (char *)0x0) goto LAB_0002a0fa;
  if (param_3 == (char *)0x0) {
LAB_0002a116:
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
LAB_0002a14c:
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
      goto LAB_0002a14c;
    }
    free((void *)piVar10[3]);
    pcVar3 = (char *)piVar10[4];
  }
  else {
    pcVar4 = strdup(param_3);
    piVar10[4] = (int)pcVar4;
    if (pcVar4 != (char *)0x0) goto LAB_0002a116;
  }
  free(pcVar3);
LAB_0002a0fa:
  free(piVar10);
  return (int *)0x0;
}



/* ===== FUN_0002a1ac @ 0002a1ac size=80 ===== */

void FUN_0002a1ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0xc);
  if ((iVar3 != 0) && (iVar1 = FUN_0002a014(iVar2,*(undefined4 *)(param_1 + 0xc)), -1 < iVar1)) {
    memmove((void *)(iVar3 + iVar1 * 4),(void *)(iVar1 * 4 + 4 + iVar3),
            ((*(int *)(iVar2 + 0x10) + 0x3fffffff) - iVar1) * 4);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
  }
  FUN_0002a06a(param_1);
  free(*(void **)(param_1 + 0xc));
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_00049310)(param_1);
  return;
}



/* ===== FUN_0002a1fc @ 0002a1fc size=20 ===== */

undefined4 FUN_0002a1fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0002a054(param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0002a210 @ 0002a210 size=22 ===== */

int FUN_0002a210(int *param_1)

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



/* ===== FUN_0002a226 @ 0002a226 size=52 ===== */

void FUN_0002a226(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  free(*(void **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = FUN_0002a1fc(param_1);
  iVar2 = FUN_0002a210();
  while (iVar3 = iVar2, iVar1 != 0) {
    FUN_0002a1ac(iVar1);
    iVar2 = FUN_0002a210(iVar3);
    iVar1 = iVar3;
  }
  return;
}



/* ===== FUN_0002a25a @ 0002a25a size=30 ===== */

undefined4 FUN_0002a25a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    uVar2 = 0;
    if (*(char *)(iVar3 + 0x18) != '\0') {
      iVar1 = FUN_0002a014(iVar3);
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



/* ===== FUN_0002a278 @ 0002a278 size=6 ===== */

undefined4 FUN_0002a278(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_0002a27e @ 0002a27e size=6 ===== */

undefined4 FUN_0002a27e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* ===== FUN_0002a284 @ 0002a284 size=12 ===== */

undefined4 FUN_0002a284(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 0xffffffea;
}



/* ===== FUN_0002a290 @ 0002a290 size=6 ===== */

void FUN_0002a290(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}



/* ===== FUN_0002a298 @ 0002a298 size=22 ===== */

void FUN_0002a298(int param_1,int *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(undefined2 *)(param_1 + iVar1 * 8) = param_3;
  *(undefined4 *)(param_1 + iVar1 * 8 + 4) = param_4;
  *param_2 = *param_2 + 1;
  return;
}



/* ===== FUN_0002a2ae @ 0002a2ae size=52 ===== */

void FUN_0002a2ae(int param_1)

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
  FUN_0002291a(DAT_0002a2ec + 0x2a2c6,DAT_0002a2e8 + 0x2a2c4,0x9b,DAT_0002a2e4 + 0x2a2c2);
}



/* ===== FUN_0002a2f0 @ 0002a2f0 size=236 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0002a2f0(void)

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
  lVar1 = syscall(0x172,0xffffff9c,DAT_0002a3dc + 0x2a31e,local_8b4 + 1,&local_8b8,0);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    iVar6 = *piVar2;
    if ((iVar6 != 0x5f) && (iVar3 = FUN_00022a68(), 6 < iVar3)) {
      FUN_00022900(7,iVar6,DAT_0002a3e4 + 0x2a348,0x79,DAT_0002a3e8 + 0x2a361,DAT_0002a3e0 + 0x2a342
                  );
      return 0;
    }
  }
  else {
    __stream = fopen64((char *)(DAT_0002a3f0 + 0x2a366),(char *)(DAT_0002a3ec + 0x2a364));
    if (__stream != (FILE *)0x0) {
      __format = (char *)(DAT_0002a3f4 + 0x2a37c);
      __needle = (char *)(DAT_0002a3f8 + 0x2a37e);
      __s2 = (char *)(DAT_0002a3fc + 0x2a380);
      do {
        do {
          pcVar4 = fgets(acStack_828,0x800,__stream);
          if (pcVar4 == (char *)0x0) {
            ferror(__stream);
            uVar5 = 0;
            goto LAB_0002a396;
          }
          iVar6 = sscanf(acStack_828,__format,local_8b4);
        } while (((iVar6 != 1) || (local_8b4[0] != local_8b8)) ||
                (pcVar4 = strstr(acStack_828,__needle), pcVar4 == (char *)0x0));
        iVar6 = strncmp(pcVar4 + 3,__s2,8);
        uVar5 = 1;
      } while (iVar6 != 0);
LAB_0002a396:
      fclose(__stream);
      return uVar5;
    }
  }
  return 0;
}



/* ===== FUN_0002a538 @ 0002a538 size=278 ===== */

/* WARNING: Removing unreachable block (ram,0x0002a4ee) */

int * FUN_0002a538(int param_1,char *param_2)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  if (param_2 != (char *)0x0) {
    iVar3 = strcmp(param_2,(char *)(DAT_0002a520 + 0x2a498));
    if (iVar3 != 0) {
      iVar3 = strcmp(param_2,(char *)(DAT_0002a534 + 0x2a4e4));
      if (iVar3 != 0) {
        return (int *)0x0;
      }
      iVar3 = 1;
      goto LAB_0002a41c;
    }
    iVar3 = access((char *)(DAT_0002a524 + 0x2a4a4),0);
    if ((-1 < iVar3) && (iVar3 = FUN_0002a2f0(), iVar3 != 0)) {
      iVar3 = 2;
      goto LAB_0002a41c;
    }
    iVar3 = FUN_00022a68();
    if (6 < iVar3) {
      FUN_00022900(7,0,DAT_0002a52c + 0x2a4c4,0xbe,DAT_0002a530 + 0x2a4ef,DAT_0002a528 + 0x2a4be);
    }
  }
  iVar3 = 0;
LAB_0002a41c:
  __ptr = calloc(1,0x1cc);
  if (__ptr != (int *)0x0) {
    *__ptr = param_1;
    __ptr[1] = 1;
    FUN_0002a07a(param_1,__ptr + 100,0);
    FUN_0002a07a(param_1,__ptr + 0x6b,1);
    iVar1 = socket(0x10,DAT_0002a510,0xf);
    __ptr[2] = iVar1;
    if (-1 < iVar1) {
      __ptr[5] = iVar3;
      *(undefined2 *)(__ptr + 3) = 0x10;
      *(undefined2 *)(__ptr + 0x43) = 0x10;
      __ptr[0x45] = 2;
      return __ptr;
    }
    iVar3 = FUN_00022a68();
    if (6 < iVar3) {
      piVar2 = __errno_location();
      FUN_00022900(7,*piVar2,DAT_0002a518 + 0x2a47a,0xce,DAT_0002a51c + 0x2a4a5,
                   DAT_0002a514 + 0x2a474);
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_0002a540 @ 0002a540 size=526 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0002a540(int param_1)

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
  iVar1 = FUN_0002a1fc(iVar8);
  iVar7 = param_1 + 0x1ac;
  if ((iVar1 != 0) || (iVar1 = FUN_0002a1fc(iVar7), iVar1 != 0)) {
    memset(&local_1028,0,0x1000);
    local_1028._0_2_ = 0x20;
    local_1024 = 8;
    local_1020 = 0x15;
    local_101e = 1;
    local_101c = DAT_0002a750;
    local_1034 = 2;
    FUN_0002a298(&local_1028,&local_1034,6,0xffffffff);
    iVar1 = FUN_0002a1fc(iVar7);
    if (iVar1 != 0) {
      cVar6 = '\0';
      iVar1 = FUN_0002a1fc(iVar7);
      while (iVar1 != 0) {
        cVar6 = cVar6 + '\x01';
        iVar1 = FUN_0002a210();
      }
      iVar1 = FUN_0002a1fc(iVar7);
      cVar6 = (cVar6 + -1) * '\x06' + '\x01';
      for (; iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
        FUN_0002a278(iVar1);
        uVar9 = FUN_0002b2d2();
        uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar10 = FUN_0002a298(&local_1028,&local_1034,0x20);
        uVar3 = FUN_0002a298((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x54,uVar5);
        *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = DAT_0002a758;
        (&local_1024)[local_1034 * 2] = uVar5;
        local_1034 = local_1034 + 1;
        uVar10 = FUN_0002a298(uVar3,&local_1034,0x20,0x24);
        FUN_0002a298((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x54,(int)uVar9);
        *(undefined2 *)((int)&local_1028 + local_1034 * 4 * 2) = 0x15;
        *(char *)((int)&local_1028 + local_1034 * 8 + 2U) = cVar6;
        cVar6 = cVar6 + -6;
        *(undefined1 *)((int)&local_1028 + local_1034 * 8 + 3U) = 0;
        (&local_1024)[local_1034 * 2] = (int)uVar9;
        local_1034 = local_1034 + 1;
      }
      FUN_0002a298(&local_1028,&local_1034,6,0);
    }
    iVar1 = FUN_0002a1fc(iVar8);
    uVar3 = DAT_0002a754;
    if (iVar1 != 0) {
      iVar1 = FUN_0002a1fc(iVar8);
      uVar5 = DAT_0002a758;
      for (; iVar1 != 0; iVar1 = FUN_0002a210(iVar1)) {
        FUN_0002a278(iVar1);
        uVar4 = FUN_0002b2bc();
        FUN_0002a298(&local_1028,&local_1034,0x20,0x18);
        iVar7 = FUN_0002a27e(iVar1);
        if (iVar7 == 0) {
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar3;
          (&local_1024)[local_1034 * 2] = uVar4;
        }
        else {
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar5;
          (&local_1024)[local_1034 * 2] = uVar4;
          local_1034 = local_1034 + 1;
          FUN_0002a298(&local_1028,&local_1034,0x20,0x1c);
          FUN_0002a27e(iVar1);
          uVar4 = FUN_0002b2bc();
          *(undefined4 *)((int)&local_1028 + local_1034 * 4 * 2) = uVar3;
          (&local_1024)[local_1034 * 2] = uVar4;
        }
        local_1034 = local_1034 + 1;
        FUN_0002a298(&local_1028,&local_1034,6,0xffffffff);
        if (0x1ff < local_1034 + 1U) {
          return -7;
        }
      }
      FUN_0002a298(&local_1028,&local_1034,6,0);
    }
    FUN_0002a298(&local_1028,&local_1034,6,0xffffffff);
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



/* ===== FUN_0002a75c @ 0002a75c size=10 ===== */

undefined4 FUN_0002a75c(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x10);
  return 0;
}



/* ===== FUN_0002a766 @ 0002a766 size=166 ===== */

int FUN_0002a766(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14 [2];
  
  local_14[0] = 1;
  FUN_0002a540();
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    iVar1 = bind(*(int *)(param_1 + 8),(sockaddr *)(param_1 + 0xc),0xc);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x1c8) = 1;
    }
    else if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = FUN_00022a68();
      if (6 < iVar1) {
        FUN_00022900(7,*piVar2,DAT_0002a810 + 0x2a7ca,0x19f,DAT_0002a814 + 0x2a816,
                     DAT_0002a80c + 0x2a7c4);
      }
      return -*piVar2;
    }
  }
  FUN_0002a2ae(param_1);
  iVar1 = setsockopt(*(int *)(param_1 + 8),1,0x10,local_14,4);
  if ((iVar1 < 0) && (iVar1 = FUN_00022a68(), 6 < iVar1)) {
    piVar2 = __errno_location();
    FUN_00022900(7,*piVar2,DAT_0002a81c + 0x2a7fa,0x1a6,FUN_0002a846 + DAT_0002a820,
                 DAT_0002a818 + 0x2a7f4);
  }
  return 0;
}



/* ===== FUN_0002a824 @ 0002a824 size=34 ===== */

int FUN_0002a824(int param_1,undefined4 param_2)

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



/* ===== FUN_0002a846 @ 0002a846 size=34 ===== */

int FUN_0002a846(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = close(*(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0002a868 @ 0002a868 size=10 ===== */

void FUN_0002a868(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}



/* ===== FUN_0002a872 @ 0002a872 size=52 ===== */

undefined4 FUN_0002a872(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)param_1 + 4) + -1;
    *(int *)((int)param_1 + 4) = iVar1;
    if (iVar1 < 1) {
      if (-1 < *(int *)((int)param_1 + 8)) {
        close(*(int *)((int)param_1 + 8));
      }
      FUN_0002a226((int)param_1 + 400);
      FUN_0002a226((int)param_1 + 0x1ac);
      free(param_1);
    }
  }
  return 0;
}



/* ===== FUN_0002a8ac @ 0002a8ac size=12 ===== */

undefined4 FUN_0002a8ac(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0xffffffea;
}



/* ===== FUN_0002a8b8 @ 0002a8b8 size=880 ===== */

int FUN_0002a8b8(undefined4 *param_1)

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
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002ac2c + 0x2a93c;
      iVar4 = DAT_0002ac30 + 0x2a942;
      iVar9 = DAT_0002ac34 + 0x2a9ac;
      uVar10 = 0x266;
LAB_0002a94a:
      FUN_00022900(7,0,iVar4,uVar10,iVar9,iVar8);
      return 0;
    }
    if (((int)uVar2 < 0x20) || ((mStack_20c4.msg_flags & 0x20U) != 0)) {
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002ac38 + 0x2a972;
      iVar4 = DAT_0002ac3c + 0x2a978;
      iVar9 = DAT_0002ac40 + 0x2a9e2;
      uVar10 = 0x26b;
LAB_0002a980:
      FUN_00022900(7,0,iVar4,uVar10,iVar9,iVar8);
      return 0;
    }
    if (local_20a0 == 0) {
      if ((param_1[0x24] == 0) || (param_1[0x24] != local_20a4)) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002ac44 + 0x2a9aa;
        iVar4 = DAT_0002ac48 + 0x2a9b0;
        iVar9 = DAT_0002ac4c + 0x2aa1a;
        uVar10 = 0x273;
        goto LAB_0002a980;
      }
    }
    else if ((local_20a0 == 1) && (local_20a4 != 0)) {
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) {
        return 0;
      }
      FUN_00022900(7,0,DAT_0002ac54 + 0x2a9e4,0x279,DAT_0002ac58 + 0x2aa4e,DAT_0002ac50 + 0x2a9de,
                   local_20a4);
      return 0;
    }
    if (((mStack_20c4.msg_controllen < 0xc) || (mStack_20c4.msg_control == (undefined1 *)0x0)) ||
       (*(int *)((int)mStack_20c4.msg_control + 8) != 2)) {
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002ac5c + 0x2aa14;
      iVar4 = DAT_0002ac60 + 0x2aa1a;
      iVar9 = DAT_0002ac64 + 0x2aa84;
      uVar10 = 0x280;
      goto LAB_0002a980;
    }
    iVar4 = *(int *)((int)mStack_20c4.msg_control + 0x10);
    if (iVar4 != 0) {
      iVar8 = FUN_00022a68();
      if (iVar8 < 7) {
        return 0;
      }
      FUN_00022900(7,0,DAT_0002ac6c + 0x2aa44,0x286,DAT_0002ac70 + 0x2aab0,DAT_0002ac68 + 0x2aa3e,
                   iVar4);
      return 0;
    }
    iVar4 = memcmp(acStack_2028,(void *)(DAT_0002ac74 + 0x2aa5e),8);
    if (iVar4 == 0) {
      if (local_2020 != DAT_0002ac28) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) {
          return 0;
        }
        iVar4 = DAT_0002ac78 + 0x2aa86;
        iVar8 = DAT_0002ac7c + 0x2aa8a;
        iVar9 = DAT_0002ac80 + 0x2aaf8;
        uVar10 = 0x28e;
        uVar11 = local_2020;
        uVar2 = DAT_0002ac28;
LAB_0002aa96:
        FUN_00022900(7,0,iVar4,uVar10,iVar9,iVar8,uVar11,uVar2);
        return 0;
      }
      uVar11 = local_2018 + 0x20;
      if (uVar2 < uVar11) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002ac84 + 0x2aabe;
        iVar4 = DAT_0002ac88 + 0x2aac4;
        iVar9 = DAT_0002ac8c + 0x2ab32;
        uVar10 = 0x293;
        goto LAB_0002aa96;
      }
      bVar1 = true;
      uVar11 = local_2018;
    }
    else {
      sVar5 = strlen(acStack_2028);
      uVar11 = sVar5 + 1;
      if ((uVar11 < 5) || ((int)uVar2 <= (int)uVar11)) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002ac9c + 0x2ab30;
        iVar4 = DAT_0002aca0 + 0x2ab36;
        iVar9 = DAT_0002aca4 + 0x2aba0;
        uVar10 = 0x29f;
        goto LAB_0002a980;
      }
      pcVar6 = strstr(acStack_2028,(char *)(DAT_0002aca8 + 0x2ab48));
      if (pcVar6 == (char *)0x0) {
        iVar4 = FUN_00022a68();
        if (iVar4 < 7) {
          return 0;
        }
        iVar8 = DAT_0002acac + 0x2ab62;
        iVar4 = DAT_0002acb0 + 0x2ab68;
        iVar9 = DAT_0002acb4 + 0x2abd2;
        uVar10 = 0x2a5;
        goto LAB_0002a94a;
      }
    }
    iVar4 = FUN_00028cb6(*param_1,acStack_2028 + uVar11,uVar2 - uVar11);
    if (iVar4 == 0) {
      iVar4 = FUN_00022a68();
      if (iVar4 < 7) {
        return 0;
      }
      iVar8 = DAT_0002ac90 + 0x2aafc;
      iVar4 = DAT_0002ac94 + 0x2ab02;
      iVar9 = DAT_0002ac98 + 0x2ab6c;
      uVar10 = 0x2ac;
      goto LAB_0002a94a;
    }
    if (bVar1) {
      FUN_0002760c();
    }
    iVar8 = FUN_0002a1fc(param_1 + 100);
    if (iVar8 == 0) {
LAB_0002abf0:
      iVar8 = FUN_0002a1fc(param_1 + 0x6b);
      if (iVar8 == 0) {
        return iVar4;
      }
      for (iVar8 = FUN_0002a1fc(param_1 + 0x6b); iVar8 != 0; iVar8 = FUN_0002a210(iVar8)) {
        uVar10 = FUN_0002a278(iVar8);
        iVar9 = FUN_00028b1c(iVar4,uVar10);
        if (iVar9 != 0) {
          return iVar4;
        }
      }
    }
    else {
      for (iVar8 = FUN_0002a1fc(param_1 + 100); iVar8 != 0; iVar8 = FUN_0002a210(iVar8)) {
        pcVar6 = (char *)FUN_0002a278(iVar8);
        pcVar7 = (char *)FUN_00027d5c(iVar4);
        iVar9 = strcmp(pcVar7,pcVar6);
        if ((iVar9 == 0) &&
           ((pcVar6 = (char *)FUN_0002a27e(iVar8), pcVar6 == (char *)0x0 ||
            ((pcVar7 = (char *)FUN_00027cb4(iVar4), pcVar7 != (char *)0x0 &&
             (iVar9 = strcmp(pcVar7,pcVar6), iVar9 == 0)))))) goto LAB_0002abf0;
      }
    }
    FUN_0002723c(iVar4);
    pStack_20e4.fd = param_1[2];
    pStack_20e4.events = 1;
    iVar4 = poll(&pStack_20e4,1,0);
    if (iVar4 < 1) {
      return 0;
    }
  } while( true );
}



/* ===== FUN_0002acb8 @ 0002acb8 size=376 ===== */

int FUN_0002acb8(int param_1,int param_2,undefined4 param_3)

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
  local_48 = *(undefined4 *)(DAT_0002ae34 + 0x2accc);
  uStack_44 = *(undefined4 *)(DAT_0002ae34 + 0x2acd0);
  local_38 = 0;
  local_40 = DAT_0002ae30;
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
  iVar1 = FUN_00028afa(param_3,&local_78);
  if (iVar1 < 0x20) {
    iVar1 = FUN_00022a68();
    if (6 < iVar1) {
      FUN_00022900(7,0,DAT_0002ae3c + 0x2ad2c,0x2dc,DAT_0002ae40 + 0x2adb2,DAT_0002ae38 + 0x2ad26);
    }
    iVar1 = -0x16;
  }
  else {
    FUN_00027d5c(param_3);
    uVar2 = FUN_0002b2bc();
    local_30 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
    iVar3 = FUN_00027cb4(param_3);
    if (iVar3 != 0) {
      uVar2 = FUN_0002b2bc();
      local_2c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
    }
    uVar5 = 0;
    iVar3 = FUN_000278aa(param_3);
    uVar2 = 0;
    for (; iVar3 != 0; iVar3 = FUN_0002a210(iVar3)) {
      FUN_0002a278(iVar3);
      uVar6 = FUN_0002b2d2();
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
        iVar1 = FUN_00022a68();
        if (6 < iVar1) {
          FUN_00022900(7,0,DAT_0002ae48 + 0x2adca,0x305,DAT_0002ae4c + 0x2ae52,
                       DAT_0002ae44 + 0x2adc4,param_1);
        }
        iVar1 = 0;
      }
      else {
        iVar1 = -*piVar4;
      }
    }
    else {
      iVar3 = FUN_00022a68();
      if (6 < iVar3) {
        FUN_00022900(7,0,DAT_0002ae54 + 0x2ae1e,0x30b,&UNK_0002aea8 + DAT_0002ae58,
                     DAT_0002ae50 + 0x2ae18,iVar1,param_1);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_0002aec4 @ 0002aec4 size=278 ===== */

undefined4
FUN_0002aec4(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4,int param_5)

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
  FUN_0002448c(&uStack_428,0x400,param_2);
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
  iVar2 = FUN_00028164(param_1,acStack_427,__s);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    local_42c = param_3;
    uVar6 = FUN_000272d4();
    uVar6 = FUN_00024460(&local_42c,param_4,uVar6,0);
    if (pcVar1 != (char *)0x0) {
      FUN_00024460(&local_42c,uVar6,DAT_0002afe8 + 0x2afac,pcVar1,0);
    }
    iVar3 = FUN_00022a68();
    if (iVar3 < 7) goto LAB_0002af78;
    iVar4 = DAT_0002afec + 0x2afbe;
    iVar3 = DAT_0002aff0 + 0x2afc4;
    iVar5 = DAT_0002aff4 + 0x2afca;
    uVar6 = 0x6c;
  }
  else {
    iVar3 = FUN_000273b4(iVar2,pcVar1);
    if (iVar3 == 0) {
      *param_3 = 0;
    }
    else {
      FUN_0002448c(param_3,param_4,iVar3);
    }
    iVar3 = FUN_00022a68();
    if (iVar3 < 7) goto LAB_0002af78;
    iVar4 = DAT_0002afdc + 0x2af5e;
    iVar3 = DAT_0002afe0 + 0x2af64;
    iVar5 = DAT_0002afe4 + 0x2af6a;
    uVar6 = 99;
  }
  FUN_00022900(7,0,iVar3,uVar6,iVar5,iVar4,acStack_427,__s,pcVar1,param_3);
LAB_0002af78:
  FUN_0002723c(iVar2);
  return 0;
}



/* ===== FUN_0002aff8 @ 0002aff8 size=94 ===== */

undefined4
FUN_0002aff8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ssize_t sVar1;
  char *pcVar2;
  undefined4 uVar3;
  char acStack_818 [1024];
  char acStack_418 [1028];
  
  FUN_0002449c(acStack_818,0x400,param_3,DAT_0002b058 + 0x2b014,param_2,0);
  sVar1 = readlink(acStack_818,acStack_418,0x400);
  if ((0 < sVar1) && (sVar1 != 0x400)) {
    acStack_418[sVar1] = '\0';
    pcVar2 = strrchr(acStack_418,0x2f);
    if (pcVar2 != (char *)0x0) {
      uVar3 = FUN_0002448c(param_4,param_5,pcVar2 + 1);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0002b05c @ 0002b05c size=134 ===== */

undefined4 FUN_0002b05c(undefined4 param_1,char *param_2,int param_3)

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
    pcVar5 = (char *)(DAT_0002b0e4 + 0x2b08c);
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
    FUN_0002449c(pcVar5,param_3 - ((int)pcVar5 - (int)param_2),DAT_0002b0e8 + 0x2b0c0,__s1,0);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0002b0ec @ 0002b0ec size=56 ===== */

ulong FUN_0002b0ec(char *param_1,byte *param_2,undefined4 param_3)

{
  ulong uVar1;
  byte *local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  uVar1 = strtoul(param_1,(char **)&local_14,10);
  if ((*local_14 != 0) &&
     (-1 < (int)((uint)*(ushort *)
                        (**(int **)(DAT_0002b124 + 0x2b102 + DAT_0002b128) + (uint)*local_14 * 2) <<
                0x1a))) {
    uVar1 = FUN_0002604c(param_1);
    return uVar1;
  }
  if (7 < uVar1) {
    uVar1 = 0xffffffde;
  }
  return uVar1;
}



/* ===== FUN_0002b12c @ 0002b12c size=72 ===== */

void FUN_0002b12c(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(param_1 + -1);
  puVar5 = (undefined4 *)(DAT_0002b174 + 0x2b13a);
  puVar6 = (undefined4 *)(DAT_0002b178 + 0x2b13c);
  uVar2 = 0;
LAB_0002b13a:
  do {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
LAB_0002b140:
      *(undefined1 *)(param_2 + uVar2) = 0;
      return;
    }
    if (cVar1 == '/') {
      if (param_3 <= uVar2 + 4) {
LAB_0002b170:
        uVar2 = 0;
        goto LAB_0002b140;
      }
      uVar3 = *puVar6;
LAB_0002b152:
      *(undefined4 *)(param_2 + uVar2) = uVar3;
      uVar2 = uVar2 + 4;
      goto LAB_0002b13a;
    }
    if (cVar1 == '\\') {
      if (uVar2 + 4 < param_3) {
        uVar3 = *puVar5;
        goto LAB_0002b152;
      }
      goto LAB_0002b170;
    }
    if (param_3 <= uVar2 + 1) goto LAB_0002b170;
    *(char *)(param_2 + uVar2) = cVar1;
    uVar2 = uVar2 + 1;
  } while( true );
}



/* ===== FUN_0002b17c @ 0002b17c size=36 ===== */

void FUN_0002b17c(char *param_1,uint param_2)

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



/* ===== FUN_0002b1a0 @ 0002b1a0 size=130 ===== */

void FUN_0002b1a0(char *param_1,int param_2,size_t param_3)

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
  piVar9 = *(int **)(DAT_0002b224 + 0x2b1b4 + DAT_0002b228);
  iVar3 = *piVar9;
  do {
    uVar4 = sVar2;
    if (uVar4 == 0) goto LAB_0002b21a;
    uVar1 = *(ushort *)(iVar3 + (uint)(byte)param_1[uVar4 - 1] * 2);
    sVar2 = uVar4 - 1;
    uVar6 = uVar1 & 0x20;
  } while ((uVar1 & 0x20) != 0);
  do {
    uVar8 = uVar6 + 1;
    uVar1 = *(ushort *)(iVar3 + (uint)(byte)param_1[uVar6] * 2);
    uVar5 = uVar1 & 0x20;
    if ((uVar1 & 0x20) == 0) goto LAB_0002b1dc;
    uVar6 = uVar8;
  } while (uVar4 != uVar8);
LAB_0002b21a:
  uVar5 = 0;
LAB_0002b20a:
  *(undefined1 *)(param_2 + uVar5) = 0;
  return;
LAB_0002b1dc:
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
  goto LAB_0002b20a;
}



/* ===== FUN_0002b22c @ 0002b22c size=130 ===== */

int FUN_0002b22c(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = DAT_0002b2b0 + 0x2b248;
  while( true ) {
    pbVar4 = (byte *)(param_1 + iVar3);
    if (*(char *)(param_1 + iVar3) == '\0') break;
    iVar1 = FUN_0002b5ec(*(char *)(param_1 + iVar3),param_2);
    if (iVar1 == 0) {
      if ((*pbVar4 == 0x5c) && (pbVar4[1] == 0x78)) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar1 = FUN_0002bcf2(pbVar4);
        if (iVar1 < 2) {
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
          if ((((int)((uint)*(ushort *)(**(int **)(iVar6 + DAT_0002b2b4) + (uint)*pbVar4 * 2) <<
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



/* ===== thunk_FUN_0002b630 @ 0002b2b8 size=4 ===== */

undefined4 thunk_FUN_0002b630(int param_1,int param_2,int param_3,undefined4 param_4)

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
    __format = (char *)(DAT_0002b6c0 + 0x2b654);
    for (iVar4 = 0; __src = (byte *)(param_1 + iVar4), *(char *)(param_1 + iVar4) != '\0';
        iVar4 = iVar4 + 1) {
      uVar1 = FUN_0002bcf2(__src);
      if ((int)uVar1 < 2) {
        if ((*__src == 0x5c) || (iVar2 = FUN_0002b5ec(*__src,0), iVar2 == 0)) {
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



/* ===== FUN_0002b2bc @ 0002b2bc size=98 ===== */

uint FUN_0002b2bc(byte *param_1)

{
  size_t sVar1;
  uint uVar2;
  size_t sVar3;
  
  sVar1 = strlen((char *)param_1);
  sVar3 = sVar1;
  for (; 3 < (int)sVar1; sVar1 = sVar1 - 4) {
    sVar3 = DAT_0002b5e8 * sVar3 ^
            DAT_0002b5e8 *
            (DAT_0002b5e8 * *(int *)param_1 ^ (uint)(DAT_0002b5e8 * *(int *)param_1) >> 0x18);
    param_1 = param_1 + 4;
  }
  if (sVar1 == 2) {
LAB_0002b5e0:
    sVar3 = sVar3 ^ (uint)param_1[1] << 8;
  }
  else {
    if (sVar1 == 3) {
      sVar3 = sVar3 ^ (uint)param_1[2] << 0x10;
      goto LAB_0002b5e0;
    }
    if (sVar1 != 1) goto LAB_0002b5b8;
  }
  sVar3 = DAT_0002b5e8 * (sVar3 ^ *param_1);
LAB_0002b5b8:
  uVar2 = DAT_0002b5e8 * (sVar3 ^ sVar3 >> 0xd);
  return uVar2 ^ uVar2 >> 0xf;
}



/* ===== FUN_0002b2d2 @ 0002b2d2 size=172 ===== */

undefined8 FUN_0002b2d2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0002b2bc();
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



/* ===== FUN_0002b38c @ 0002b38c size=418 ===== */

undefined4 * FUN_0002b38c(void)

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
  
  iVar9 = DAT_0002b530 + 0x2b3a0;
  puVar3 = calloc(1,0xc);
  iVar13 = DAT_0002b534;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 1;
    __stream = fopen64((char *)(DAT_0002b538 + 0x2b3b6),(char *)(iVar13 + 0x2b3b4));
    if (__stream != (FILE *)0x0) {
      iVar15 = 0;
      __s2 = (char *)(DAT_0002b55c + 0x2b520);
      iVar13 = DAT_0002b560 + 0x2b526;
      iVar14 = DAT_0002b564 + 0x2b52c;
LAB_0002b41e:
      pcVar5 = fgets((char *)abStack_4028,0x4000,__stream);
      if (pcVar5 != (char *)0x0) {
        iVar15 = iVar15 + 1;
        iVar16 = **(int **)(iVar9 + DAT_0002b53c);
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
            iVar16 = FUN_00022a68();
            if (6 < iVar16) {
              iVar10 = DAT_0002b540 + 0x2b40a;
              iVar16 = DAT_0002b544 + 0x2b410;
              iVar11 = DAT_0002b548 + 0x2b414;
              uVar12 = 0x7f;
LAB_0002b416:
              FUN_00022900(7,0,iVar16,uVar12,iVar11,iVar10,iVar15);
            }
            goto LAB_0002b41e;
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
                    iVar16 = FUN_00022a68();
                    if (6 < iVar16) {
                      iVar10 = DAT_0002b54c + 0x2b4b4;
                      iVar16 = DAT_0002b550 + 0x2b4ba;
                      iVar11 = DAT_0002b554 + 0x2b4be;
                      uVar12 = 0x9f;
                      goto LAB_0002b416;
                    }
                    goto LAB_0002b41e;
                  }
                  __s_00[sVar6] = 0;
                  __s_00 = __s_00 + 1;
                }
                iVar16 = strcmp((char *)__s,__s2);
                if (iVar16 == 0) {
                  iVar16 = FUN_0002b0ec(__s_00);
                  if (iVar16 < 0) {
                    iVar16 = FUN_00022a68();
                    if (6 < iVar16) {
                      FUN_00022900(7,0,iVar13,0xab,DAT_0002b558 + 0x2b50a,iVar14,iVar15,__s_00);
                    }
                  }
                  else {
                    FUN_000229bc();
                  }
                }
              }
            }
          }
        }
        goto LAB_0002b41e;
      }
      fclose(__stream);
    }
  }
  return puVar3;
}



/* ===== FUN_0002b568 @ 0002b568 size=10 ===== */

void FUN_0002b568(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  return;
}



/* ===== FUN_0002b572 @ 0002b572 size=28 ===== */

int * FUN_0002b572(int *param_1)

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



/* ===== FUN_0002b5ec @ 0002b5ec size=62 ===== */

undefined4 FUN_0002b5ec(uint param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (((param_1 - 0x30 < 10) || ((param_1 & 0xffffffdf) - 0x41 < 0x1a)) ||
     (pcVar1 = strchr((char *)(DAT_0002b62c + 0x2b60c),param_1), pcVar1 != (char *)0x0)) {
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



/* ===== FUN_0002b630 @ 0002b630 size=142 ===== */

undefined4 FUN_0002b630(int param_1,int param_2,int param_3,undefined4 param_4)

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
    __format = (char *)(DAT_0002b6c0 + 0x2b654);
    for (iVar4 = 0; __src = (byte *)(param_1 + iVar4), *(char *)(param_1 + iVar4) != '\0';
        iVar4 = iVar4 + 1) {
      uVar1 = FUN_0002bcf2(__src);
      if ((int)uVar1 < 2) {
        if ((*__src == 0x5c) || (iVar2 = FUN_0002b5ec(*__src,0), iVar2 == 0)) {
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



/* ===== FUN_0002b6c4 @ 0002b6c4 size=90 ===== */

int FUN_0002b6c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char acStack_28 [24];
  
  if (param_2 == 0) {
    uVar3 = 0x28;
    iVar4 = DAT_0002b720 + 0x2b6da;
    iVar2 = DAT_0002b724 + 0x2b6dc;
    iVar1 = DAT_0002b728 + 0x2b6de;
  }
  else {
    if (-1 < param_1) {
      if (param_1 == 0) {
        pcVar5 = &UNK_0002b71e + DAT_0002b73c;
      }
      else {
        pcVar5 = acStack_28;
        sprintf(acStack_28,(char *)(DAT_0002b738 + 0x2b700),param_1);
      }
      iVar1 = FUN_000206d4(pcVar5,param_2);
      if (iVar1 == -2) {
        iVar1 = -3;
      }
      return iVar1;
    }
    uVar3 = 0x29;
    iVar4 = DAT_0002b72c + 0x2b6f0;
    iVar2 = DAT_0002b730 + 0x2b6f2;
    iVar1 = DAT_0002b734 + 0x2b6f4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar1,iVar2,uVar3,iVar4);
}



/* ===== FUN_0002b97c @ 0002b97c size=238 ===== */

int FUN_0002b97c(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  char *__filename;
  uint uVar9;
  char acStack_48 [32];
  void *local_28;
  undefined4 uStack_24;
  
  local_28 = (void *)0x0;
  uStack_24 = 0;
  if (param_1 < 0) {
    uVar6 = 0x98;
    iVar7 = DAT_0002ba6c + 0x2b9c3;
    iVar4 = DAT_0002ba70 + 0x2b9a2;
    iVar2 = DAT_0002ba74 + 0x2b9a4;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      if (param_1 == 0) {
        __filename = (char *)(DAT_0002ba8c + 0x2b9fe);
      }
      else {
        __filename = acStack_48;
        sprintf(acStack_48,(char *)(DAT_0002ba84 + 0x2b9c6));
      }
      __stream = fopen64(__filename,(char *)(DAT_0002ba88 + 0x2b9d2));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
      }
      else {
        iVar2 = 0;
LAB_0002ba18:
        if (__stream->_chain == (_IO_FILE *)0x0) {
          uVar9 = fgetc(__stream);
LAB_0002ba46:
          pvVar1 = local_28;
          if (uVar9 == 0xffffffff) {
            iVar4 = 0;
            *(undefined1 *)((int)local_28 + iVar2) = 0;
            local_28 = (void *)0x0;
            *param_2 = pvVar1;
            goto LAB_0002b9e0;
          }
        }
        else {
          pbVar8 = (byte *)__stream->_IO_write_base;
          if (__stream->_IO_write_end <= pbVar8) {
            uVar9 = __fgetc_unlocked(__stream);
            goto LAB_0002ba46;
          }
          __stream->_IO_write_base = (char *)(pbVar8 + 1);
          uVar9 = (uint)*pbVar8;
        }
        iVar4 = FUN_000264b8(&local_28,&uStack_24,iVar2 + 5,1);
        if (iVar4 != 0) {
          puVar5 = (undefined1 *)((int)local_28 + iVar2);
          if (uVar9 == 0) {
            iVar2 = iVar2 + 1;
            *puVar5 = 10;
          }
          else {
            iVar4 = FUN_0002528a(uVar9 & 0xff);
            iVar2 = iVar2 + iVar4;
          }
          goto LAB_0002ba18;
        }
        iVar4 = -0xc;
      }
LAB_0002b9e0:
      free(local_28);
      if (__stream != (FILE *)0x0) {
        fclose(__stream);
      }
      return iVar4;
    }
    uVar6 = 0x99;
    iVar7 = DAT_0002ba78 + 0x2b9d9;
    iVar4 = DAT_0002ba7c + 0x2b9b8;
    iVar2 = DAT_0002ba80 + 0x2b9ba;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002291a(iVar2,iVar4,uVar6,iVar7);
}



/* ===== FUN_0002ba90 @ 0002ba90 size=94 ===== */

undefined4 FUN_0002ba90(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0002291a(DAT_0002baf8 + 0x2baa4,DAT_0002baf4 + 0x2baa2,0x53,DAT_0002baf0 + 0x2baa0,param_4);
}



/* ===== FUN_0002bafc @ 0002bafc size=48 ===== */

bool FUN_0002bafc(uint param_1)

{
  if (((param_1 < 0x110000) && ((param_1 & 0xfffff800) != 0xd800)) && (0x1f < param_1 - 0xfdd0)) {
    return (~param_1 & 0xfffe) != 0;
  }
  return false;
}



/* ===== FUN_0002bb2c @ 0002bb2c size=118 ===== */

uint FUN_0002bb2c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002bbb0 + 0x2bb44,DAT_0002bbac + 0x2bb42,0x6a,&BYTE_0002bb58 + DAT_0002bba8,
                 param_4);
  }
  iVar2 = FUN_0002ba90();
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
    goto LAB_0002bb5c;
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
LAB_0002bb5c:
  return 0xffffffea;
}



/* ===== FUN_0002bbec @ 0002bbec size=136 ===== */

undefined4 FUN_0002bbec(byte *param_1,uint param_2)

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



/* ===== FUN_0002bc74 @ 0002bc74 size=126 ===== */

undefined1 * FUN_0002bc74(ushort *param_1,uint param_2)

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
LAB_0002bc8e:
    puVar2 = puVar6;
    if (puVar2 < (ushort *)(param_2 + (int)param_1)) {
      puVar6 = puVar2 + 1;
      uVar4 = (uint)*puVar2;
      if ((uVar4 + 0x2800 & 0xffff) < 0x800) goto LAB_0002bcb6;
      goto LAB_0002bcaa;
    }
LAB_0002bcc6:
    *puVar5 = 0;
  }
  return puVar1;
LAB_0002bcb6:
  if (0x3ff < (uVar4 + 0x2400 & 0xffff)) {
    if ((ushort *)(param_2 + (int)param_1) <= puVar6) goto LAB_0002bcc6;
    if ((puVar2[1] + 0x2400 & 0xffff) < 0x400) {
      puVar6 = puVar2 + 2;
      uVar4 = (uint)puVar2[1] + uVar4 * 0x400 + 0xfca02400;
LAB_0002bcaa:
      iVar3 = FUN_0002bbec(puVar5,uVar4);
      puVar5 = puVar5 + iVar3;
    }
  }
  goto LAB_0002bc8e;
}



/* ===== FUN_0002bcf2 @ 0002bcf2 size=124 ===== */

int FUN_0002bcf2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002291a(DAT_0002bd78 + 0x2bd0c,DAT_0002bd74 + 0x2bd0a,0x122,DAT_0002bd70 + 0x2bd47,param_4)
    ;
  }
  iVar1 = FUN_0002ba90();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 1;
    }
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if (-1 < *(char *)(param_1 + iVar2)) {
        return -0x16;
      }
    }
    iVar2 = FUN_0002bb2c(param_1);
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
      if ((iVar1 == iVar2) && (iVar2 = FUN_0002bafc(), iVar2 != 0)) {
        return iVar1;
      }
    }
  }
  return -0x16;
}



/* ===== FUN_0002bde8 @ 0002bde8 size=168 ===== */

ulonglong FUN_0002bde8(uint param_1,uint param_2)

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



/* ===== FUN_0002be90 @ 0002be90 size=32 ===== */

void FUN_0002be90(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002bde8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002beb0 @ 0002beb0 size=220 ===== */

ulonglong FUN_0002beb0(uint param_1,uint param_2)

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



/* ===== FUN_0002bfac @ 0002bfac size=76 ===== */

void FUN_0002bfac(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0002bff8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002bff8 @ 0002bff8 size=328 ===== */

undefined8 FUN_0002bff8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 0002c140 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004a00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004a020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0004a024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004a028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0004a02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0004a030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 0004a034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0004a038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chdir @ 0004a03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0004a040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0004a044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvmsg @ 0004a048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0004a04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 0004a050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 0004a054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchown @ 0004a058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlinkat @ 0004a05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlinkat(int __fd,char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0004a060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsignal @ 0004a064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsignal(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid @ 0004a068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0004a06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmin @ 0004a070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0004a074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_superblocks_flags @ 0004a078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_superblocks_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0004a07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_unref_list @ 0004a080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_unref_list(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004a084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0004a088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0004a08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bsearch @ 0004a090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_new_from_lookup @ 0004a094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_new_from_lookup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_free_probe @ 0004a098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_free_probe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_current_dir_name @ 0004a09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chown @ 0004a0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirfd @ 0004a0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0004a0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_makedev @ 0004a0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong gnu_dev_makedev(uint __major,uint __minor)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004a0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::flock @ 0004a0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void flock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 0004a0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 0004a0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0004a0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0004a0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_unref @ 0004a0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 0004a0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatat64 @ 0004a0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0004a0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 0004a0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_new_probe @ 0004a0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_new_probe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004a0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004a0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0004a0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_safe_string @ 0004a0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_safe_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__sched_cpucount @ 0004a0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __sched_cpucount(size_t __setsize,cpu_set_t *__setp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004a0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0004a0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::symlink @ 0004a0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004a100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_enable_superblocks @ 0004a104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_enable_superblocks(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0004a108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_device @ 0004a10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 0004a110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0004a114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_init1 @ 0004a118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_size @ 0004a11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_enable_partitions @ 0004a120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_enable_partitions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0004a124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_value @ 0004a128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_get_name @ 0004a12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strpbrk @ 0004a130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 0004a134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirname @ 0004a138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * dirname(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0004a13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 0004a140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0004a144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0004a148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendmsg @ 0004a14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkostemp64 @ 0004a150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkostemp64(char *__template,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004a154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_add_watch @ 0004a158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0004a15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::futimens @ 0004a160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int futimens(int __fd,timespec *__times)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0004a164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0004a168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0004a16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0004a170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sched_getaffinity @ 0004a174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_getaffinity(__pid_t __pid,size_t __cpusetsize,cpu_set_t *__cpuset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ppoll @ 0004a178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0004a17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execve @ 0004a180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0004a184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0004a188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004a18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0004a190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_validate_resources @ 0004a194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_validate_resources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 0004a198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 0004a19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam @ 0004a1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

group * getgrnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 0004a1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept4 @ 0004a1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept4(int __fd,sockaddr *__addr,socklen_t *__addr_len,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0004a1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0004a1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0004a1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004a1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe2 @ 0004a1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0004a1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signalfd @ 0004a1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0004a1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stpcpy @ 0004a1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lchown @ 0004a1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_list_next @ 0004a1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_list_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_set_partitions_flags @ 0004a1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_set_partitions_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004a1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_get_module @ 0004a1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_get_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0004a1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_has_value @ 0004a1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_has_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_numof_values @ 0004a1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_numof_values(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_filter_superblocks_usage @ 0004a1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_filter_superblocks_usage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0004a1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openat64 @ 0004a1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004a1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0004a200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 0004a204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 0004a208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004a20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vasprintf @ 0004a210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0004a214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0004a218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0004a21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0004a220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0004a224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0004a228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_get_fd @ 0004a22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_get_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0004a230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004a234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_do_fullprobe @ 0004a238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_do_fullprobe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 0004a23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rmdir @ 0004a240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004a244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0004a248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004a24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 0004a250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0004a254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 0004a258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0004a25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 0004a260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_set_log_fn @ 0004a264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_set_log_fn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_lookup_value @ 0004a268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_lookup_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0004a26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid @ 0004a270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwnam @ 0004a274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

passwd * getpwnam(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 0004a278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_probe_is_wholedisk @ 0004a27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_probe_is_wholedisk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0004a280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlinkat @ 0004a284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlinkat(int __fd,char *__name,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004a288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0004a28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_encode_string @ 0004a290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_encode_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004a294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigprocmask @ 0004a298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::basename @ 0004a29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 0004a2a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 0004a2a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0004a2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0004a2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0004a2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_load_resources @ 0004a2b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_load_resources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0004a2b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::blkid_do_safeprobe @ 0004a2bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void blkid_do_safeprobe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0004a2c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_probe_insert_module @ 0004a2c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_probe_insert_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__libc_current_sigrtmax @ 0004a2c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __libc_current_sigrtmax(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004a2cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004a2d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0004a2d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0004a2d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004a2dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsid @ 0004a2e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0004a2e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srand @ 0004a2e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0004a2ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::utimensat @ 0004a2f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004a2f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::statfs64 @ 0004a2f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int statfs64(char *__file,statfs64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0004a2fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0004a300 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoll @ 0004a304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mempcpy @ 0004a308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004a30c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0004a310 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0004a314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_new @ 0004a318 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0004a31c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socketpair @ 0004a320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmod_module_unref @ 0004a324 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmod_module_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004a328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0004a32c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0004a330 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0004a334 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


