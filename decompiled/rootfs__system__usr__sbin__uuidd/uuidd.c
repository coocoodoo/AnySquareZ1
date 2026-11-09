// uuidd — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010d9c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0002500c)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::ioctl @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_00025014)();
  return _Var1;
}



/* ===== <EXTERNAL>::sysconf @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00025018)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002501c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::random @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00025020)();
  return lVar1;
}



/* ===== <EXTERNAL>::connect @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00025024)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00025028)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0002502c)();
  return _Var1;
}



/* ===== <EXTERNAL>::syscall @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00025030)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::getpid @ 00010e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00025034)();
  return _Var1;
}



/* ===== <EXTERNAL>::fscanf @ 00010e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00025038)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002503c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::execl @ 00010e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00025040)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00025044)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 00010e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0002504c)();
  return _Var1;
}



/* ===== <EXTERNAL>::socket @ 00010e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00025050)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00025054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ftruncate @ 00010ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ftruncate_00025058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002505c)();
  return;
}



/* ===== <EXTERNAL>::alarm @ 00010ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00025060)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00025064)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::accept @ 00010ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00025068)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002506c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::kill @ 00010ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00025074)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::bind @ 00010f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00025078)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f10 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002507c)();
  return;
}



/* ===== <EXTERNAL>::chdir @ 00010f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_00025080)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::umask @ 00010f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_00025084)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::signal @ 00010f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00025088)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00010f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002508c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00025090)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00010f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00025094)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::listen @ 00010f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00025098)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00010f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_0002509c)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::fork @ 00010f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_000250a0)();
  return _Var1;
}



/* ===== <EXTERNAL>::setresuid @ 00010f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setresuid(__uid_t __ruid,__uid_t __euid,__uid_t __suid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setresuid_000250a4)(__ruid);
  return iVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000250ac)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000250b0)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::setreuid @ 00010fb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setreuid(__uid_t __ruid,__uid_t __euid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setreuid_000250b4)(__ruid);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000250b8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000250bc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::getppid @ 00010fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getppid_000250c0)();
  return _Var1;
}



/* ===== <EXTERNAL>::time @ 00010fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_000250c4)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::dup @ 00010ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup_000250c8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000250cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 0001100c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_000250d0)(__seed);
  return;
}



/* ===== <EXTERNAL>::setresgid @ 00011018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setresgid(__gid_t __rgid,__gid_t __egid,__gid_t __sgid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setresgid_000250d4)(__rgid);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_000250d8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000250dc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 0001103c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000250e0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::rewind @ 00011048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
  (*(code *)PTR_rewind_000250e4)(__stream);
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250e8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000250ec)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001106c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000250f0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250f4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00011084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000250f8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::setsid @ 00011090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_setsid_000250fc)();
  return _Var1;
}



/* ===== <EXTERNAL>::fcntl @ 0001109c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_00025100)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::jrand48 @ 000110a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_jrand48_00025104)(__xsubi);
  return lVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000110b4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00025108)();
  return;
}



/* ===== <EXTERNAL>::close @ 000110c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002510c)(__fd);
  return iVar1;
}



/* ===== entry @ 000110d0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000250a8)
            (DAT_00011104,param_2,&stack0x00000004,DAT_00011108,DAT_00011100,param_1);
  return;
}



/* ===== FUN_0001110c @ 0001110c size=32 ===== */

void FUN_0001110c(void)

{
  if (DAT_00011130 == DAT_0001112c) {
    return;
  }
  if (DAT_00011134 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011134)();
  return;
}



/* ===== _FINI_0 @ 00011170 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000111ac;
  if (*DAT_000111ac != '\0') {
    return;
  }
  FUN_0001110c();
  if (DAT_000111b0 != 0) {
    __deregister_frame_info(DAT_000111b4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000111b8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000111dc != 0) {
    __register_frame_info(DAT_000111e4,DAT_000111e0);
  }
  if ((DAT_00011168 - DAT_00011164 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001116c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001116c)();
  return;
}



/* ===== FUN_000111e8 @ 000111e8 size=120 ===== */

void FUN_000111e8(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [-d] [-p pidfile] [-s socketpath] [-T timeout]\n",param_1);
  fprintf(stderr,"       %s [-r|t] [-n num] [-s socketpath]\n",param_1);
  fprintf(stderr,"       %s -k\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011260 @ 00011260 size=32 ===== */

void FUN_00011260(char *param_1)

{
  perror(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011280 @ 00011280 size=220 ===== */

void FUN_00011280(void)

{
  __pid_t _Var1;
  __uid_t __ruid;
  int iVar2;
  
  _Var1 = fork();
  if (_Var1 == -1) {
    perror("fork");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (_Var1 != 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  close(0);
  close(1);
  close(2);
  open("/dev/null",2);
  open("/dev/null",2);
  open("/dev/null",2);
  chdir("/");
  setsid();
  __ruid = geteuid();
  iVar2 = setreuid(__ruid,__ruid);
  if (iVar2 < 0) {
    FUN_00011260("setreuid");
  }
  return;
}



/* ===== FUN_0001135c @ 0001135c size=292 ===== */

int FUN_0001135c(int param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  ssize_t sVar2;
  int *piVar3;
  size_t local_24;
  void *local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  memset(param_2,0,param_3);
  local_24 = param_3;
  local_20 = param_2;
  do {
    while( true ) {
      if (local_24 == 0) {
        return local_c;
      }
      sVar2 = read(param_1,local_20,local_24);
      if (sVar2 < 1) break;
      if (0 < sVar2) {
        local_10 = 0;
      }
      local_24 = local_24 - sVar2;
      local_20 = (void *)((int)local_20 + sVar2);
      local_c = local_c + sVar2;
    }
    piVar3 = __errno_location();
  } while ((((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 4)) || (sVar2 == 0)) &&
          (bVar1 = local_10 < 5, local_10 = local_10 + 1, bVar1));
  if (local_c == 0) {
    local_c = -1;
  }
  return local_c;
}



/* ===== FUN_00011480 @ 00011480 size=196 ===== */

int FUN_00011480(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  size_t local_1c;
  void *local_18;
  int local_c;
  
  local_c = 0;
  local_1c = param_3;
  local_18 = param_2;
  do {
    while( true ) {
      if (local_1c == 0) {
        return local_c;
      }
      sVar1 = write(param_1,local_18,local_1c);
      if (sVar1 < 0) break;
      local_1c = local_1c - sVar1;
      local_18 = (void *)((int)local_18 + sVar1);
      local_c = local_c + sVar1;
    }
    piVar2 = __errno_location();
  } while ((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4));
  return -1;
}



/* ===== FUN_00011544 @ 00011544 size=84 ===== */

void FUN_00011544(void)

{
  unlink(DAT_00025154);
  if (DAT_00025158 != (char *)0x0) {
    unlink(DAT_00025158);
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00011598 @ 00011598 size=896 ===== */

int FUN_00011598(char *param_1,int param_2,int *param_3,int param_4,int *param_5,undefined4 *param_6
                )

{
  int *piVar1;
  int iVar2;
  sockaddr local_90 [6];
  undefined1 local_23;
  int local_20;
  undefined1 local_1c;
  int local_1b;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = 0;
  if (((param_2 == 4) || (param_2 == 5)) && (param_5 == (int *)0x0)) {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = "bad arguments";
    }
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    local_14 = -1;
  }
  else {
    local_10 = socket(1,1,0);
    if (local_10 < 0) {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = "socket";
      }
      local_14 = -1;
    }
    else {
      local_90[0].sa_family = 1;
      strncpy(local_90[0].sa_data,param_1,0x6c);
      local_23 = 0;
      iVar2 = connect(local_10,local_90,0x6e);
      if (iVar2 < 0) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = "connect";
        }
        close(local_10);
        local_14 = -1;
      }
      else {
        if ((param_2 == 5) && (param_4 + -3 <= *param_5 * 0x10)) {
          iVar2 = param_4 + 0xb;
          if (-1 < param_4 + -4) {
            iVar2 = param_4 + -4;
          }
          *param_5 = iVar2 >> 4;
        }
        local_1c = (undefined1)param_2;
        local_c = 1;
        if ((param_2 == 4) || (param_2 == 5)) {
          local_1b = *param_5;
          local_c = 5;
        }
        local_14 = FUN_00011480(local_10,&local_1c,local_c);
        if (local_14 < local_c) {
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = "write";
          }
          close(local_10);
          local_14 = -1;
        }
        else {
          local_14 = FUN_0001135c(local_10,&local_20,4);
          if (local_14 < 0) {
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = "read count";
            }
            close(local_10);
            local_14 = -1;
          }
          else if ((local_20 < 0) || (param_4 < local_20)) {
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = "bad response length";
            }
            close(local_10);
            local_14 = -1;
          }
          else {
            local_14 = FUN_0001135c(local_10,param_3,local_20);
            if ((0 < local_14) && (param_2 == 4)) {
              if (local_20 < 0x14) {
                *param_5 = -1;
              }
              else {
                param_3[4] = *param_5;
              }
            }
            if ((0 < local_14) && (param_2 == 5)) {
              if (*param_5 < 4) {
                *param_5 = -1;
              }
              else {
                *param_3 = *param_5;
              }
            }
            close(local_10);
          }
        }
      }
    }
  }
  return local_14;
}



/* ===== FUN_00011918 @ 00011918 size=2600 ===== */

void FUN_00011918(char *param_1,char *param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  __pid_t _Var6;
  size_t sVar7;
  int local_564;
  undefined1 auStack_560 [39];
  byte local_539;
  int local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  int local_528;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128 [2];
  undefined2 local_120;
  undefined2 local_11e;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  sockaddr asStack_110 [7];
  sockaddr local_a0 [6];
  undefined1 local_33;
  ssize_t local_30;
  int local_2c;
  __mode_t local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  
  local_128[0] = 0;
  local_20 = open(param_2,0x42,0x1b4);
  pFVar2 = stderr;
  if (local_20 < 0) {
    if (param_5 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar2,"Failed to open/create %s: %s\n",param_2,pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_00025158 = (char *)0x0;
  DAT_00025154 = param_2;
  signal(0xe,FUN_00011544);
  alarm(0x1e);
  local_120 = 1;
  local_11e = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  while (iVar5 = fcntl(local_20,7,&local_120), iVar5 < 0) {
    piVar3 = __errno_location();
    if ((*piVar3 != 0xb) && (piVar3 = __errno_location(), pFVar2 = stderr, *piVar3 != 4)) {
      if (param_5 == 0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(pFVar2,"Failed to lock %s: %s\n",param_2,pcVar4);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  local_24 = FUN_00011598(param_1,0,&local_538,0x400,0,0);
  if (0 < local_24) {
    if (param_5 == 0) {
      printf("uuidd daemon already running at pid %s\n",&local_538);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  alarm(0);
  local_1c = socket(1,1,0);
  pFVar2 = stderr;
  if (local_1c < 0) {
    if (param_5 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar2,"Couldn\'t create unix stream socket: %s",pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  while ((param_3 == 0 && (local_1c < 3))) {
    local_1c = dup(local_1c);
    if (local_1c < 0) {
      perror("dup");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  local_a0[0].sa_family = 1;
  strncpy(local_a0[0].sa_data,param_1,0x6c);
  local_33 = 0;
  unlink(param_1);
  local_28 = umask(0);
  iVar5 = bind(local_1c,local_a0,0x6e);
  pFVar2 = stderr;
  if (iVar5 < 0) {
    if (param_5 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar2,"Couldn\'t bind unix socket %s: %s\n",param_1,pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  umask(local_28);
  iVar5 = listen(local_1c,5);
  pFVar2 = stderr;
  if (iVar5 < 0) {
    if (param_5 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar2,"Couldn\'t listen on unix socket %s: %s\n",param_1,pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_00025158 = param_1;
  if (param_3 == 0) {
    FUN_00011280();
  }
  signal(1,FUN_00011544);
  signal(2,FUN_00011544);
  signal(0xf,FUN_00011544);
  signal(0xe,FUN_00011544);
  signal(0xd,(__sighandler_t)0x1);
  _Var6 = getpid();
  sprintf((char *)&local_538,"%8d\n",_Var6);
  ftruncate(local_20,0);
  sVar7 = strlen((char *)&local_538);
  FUN_00011480(local_20,&local_538,sVar7);
  if (1 < local_20) {
    close(local_20);
  }
  do {
    while( true ) {
      local_128[1] = 0x6e;
      if (0 < (int)param_4) {
        alarm(param_4);
      }
      local_2c = accept(local_1c,asStack_110,(socklen_t *)(local_128 + 1));
      alarm(0);
      if (-1 < local_2c) break;
      piVar3 = __errno_location();
      if ((*piVar3 != 0xb) && (piVar3 = __errno_location(), *piVar3 != 4)) {
        perror("accept");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    local_30 = read(local_2c,&local_539,1);
    if (local_30 == 1) {
      if ((local_539 == 4) || (local_539 == 5)) {
        iVar5 = FUN_0001135c(local_2c,&local_564,4);
        if (iVar5 != 4) goto LAB_00012344;
        if (param_3 != 0) {
          printf("operation %d, incoming num = %d\n",(uint)local_539,local_564);
        }
      }
      else if (param_3 != 0) {
        printf("operation %d\n",(uint)local_539);
      }
      switch(local_539) {
      case 0:
        _Var6 = getpid();
        sprintf((char *)&local_538,"%d",_Var6);
        sVar7 = strlen((char *)&local_538);
        local_128[0] = sVar7 + 1;
        break;
      case 1:
        sprintf((char *)&local_538,"%d",5);
        sVar7 = strlen((char *)&local_538);
        local_128[0] = sVar7 + 1;
        break;
      case 2:
        local_564 = 1;
        FUN_00013d54(&local_138,&local_564);
        if (param_3 != 0) {
          FUN_00014614(&local_138,auStack_560);
          printf("Generated time UUID: %s\n",auStack_560);
        }
        local_538 = local_138;
        uStack_534 = uStack_134;
        uStack_530 = uStack_130;
        uStack_52c = uStack_12c;
        local_128[0] = 0x10;
        break;
      case 3:
        local_564 = 1;
        FUN_00014070(&local_138,&local_564);
        if (param_3 != 0) {
          FUN_00014614(&local_138,auStack_560);
          printf("Generated random UUID: %s\n",auStack_560);
        }
        local_538 = local_138;
        uStack_534 = uStack_134;
        uStack_530 = uStack_130;
        uStack_52c = uStack_12c;
        local_128[0] = 0x10;
        break;
      case 4:
        FUN_00013d54(&local_138,&local_564);
        if (param_3 != 0) {
          FUN_00014614(&local_138,auStack_560);
          if (local_564 == 1) {
            uVar1 = 0x48cc;
          }
          else {
            uVar1 = 0x48f8;
          }
          printf((char *)(uVar1 | 0x10000),auStack_560,local_564);
        }
        local_538 = local_138;
        uStack_534 = uStack_134;
        uStack_530 = uStack_130;
        uStack_52c = uStack_12c;
        local_528 = local_564;
        local_128[0] = 0x14;
        break;
      case 5:
        if (local_564 < 0) {
          local_564 = 1;
        }
        if (1000 < local_564) {
          local_564 = 1000;
        }
        if (0x3fc < local_564 * 0x10) {
          local_564 = 0x3f;
        }
        FUN_00014070(&uStack_534,&local_564);
        if (param_3 != 0) {
          printf("Generated %d UUID\'s:\n",local_564);
          local_14 = &uStack_534;
          for (local_18 = 0; local_18 < local_564; local_18 = local_18 + 1) {
            FUN_00014614(local_14,auStack_560);
            printf("\t%s\n",auStack_560);
            local_14 = local_14 + 4;
          }
        }
        local_128[0] = local_564 * 0x10 + 4;
        local_538 = local_564;
        break;
      default:
        if (param_3 != 0) {
          printf("Invalid operation %d\n",(uint)local_539);
        }
        goto LAB_00012344;
      }
      FUN_00011480(local_2c,local_128,4);
      FUN_00011480(local_2c,&local_538,local_128[0]);
    }
    else if (local_30 < 0) {
      perror("read");
    }
    else {
      printf("Error reading from client, len = %d\n",local_30);
    }
LAB_00012344:
    close(local_2c);
  } while( true );
}



/* ===== FUN_00012358 @ 00012358 size=1676 ===== */

undefined4 FUN_00012358(int param_1,char **param_2)

{
  uint uVar1;
  FILE *__stream;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  long local_48c;
  undefined1 auStack_488 [16];
  char *local_478;
  char acStack_474 [40];
  char acStack_44c [4];
  undefined1 auStack_448 [1020];
  undefined4 local_4c;
  __gid_t local_48;
  __uid_t local_44;
  int local_40;
  int local_3c;
  int local_38;
  long local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  char *local_18;
  char *local_14;
  
  local_14 = "/var/lib/libuuid/request";
  local_18 = "/var/lib/libuuid/uuidd.pid";
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_48c = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  while (local_40 = getopt(param_1,param_2,"dkn:qp:s:tT:r"), local_40 != -1) {
    switch(local_40) {
    case 0x54:
      local_34 = strtol(optarg,&local_478,0);
      if ((local_34 < 0) || (*local_478 != '\0')) {
        fprintf(stderr,"Bad number: %s\n",optarg);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      break;
    default:
      FUN_000111e8(*param_2);
      break;
    case 100:
      local_28 = local_28 + 1;
      local_3c = 1;
      break;
    case 0x6b:
      local_30 = local_30 + 1;
      local_3c = 1;
      break;
    case 0x6e:
      local_48c = strtol(optarg,&local_478,0);
      if ((local_48c < 0) || (*local_478 != '\0')) {
        fprintf(stderr,"Bad number: %s\n",optarg);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      break;
    case 0x70:
      local_18 = optarg;
      local_3c = 1;
      break;
    case 0x71:
      local_38 = local_38 + 1;
      break;
    case 0x72:
      local_2c = 3;
      local_3c = 1;
      break;
    case 0x73:
      local_14 = optarg;
      local_3c = 1;
      break;
    case 0x74:
      local_2c = 2;
      local_3c = 1;
    }
  }
  local_44 = getuid();
  if ((local_44 != 0) && (local_3c != 0)) {
    local_48 = getgid();
    iVar2 = setresgid(local_48,local_48,local_48);
    if (iVar2 < 0) {
      FUN_00011260("setresgid");
    }
    iVar2 = setresuid(local_44,local_44,local_44);
    if (iVar2 < 0) {
      FUN_00011260("setresuid");
    }
  }
  if ((local_48c == 0) || (local_2c == 0)) {
    if (local_2c == 0) {
      if (local_30 == 0) {
        FUN_00011918(local_14,local_18,local_28,local_34,local_38);
        return 0;
      }
      local_24 = FUN_00011598(local_14,0,acStack_44c,0x400,0,0);
      if ((0 < local_24) && (local_30 = atoi(acStack_44c), 0 < local_30)) {
        local_24 = kill(local_30,0xf);
        __stream = stderr;
        if (local_24 < 0) {
          if (local_38 == 0) {
            piVar3 = __errno_location();
            pcVar4 = strerror(*piVar3);
            fprintf(__stream,"Couldn\'t kill uuidd running at pid %d: %s\n",local_30,pcVar4);
          }
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        if (local_38 == 0) {
          printf("Killed uuidd running at pid %d\n",local_30);
        }
      }
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    local_24 = FUN_00011598(local_14,local_2c,auStack_488,0x10,0,&local_4c);
    if (local_24 < 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("Error calling uuidd daemon (%s): %s\n",local_4c,pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (local_24 == 0x10) {
      FUN_00014614(auStack_488,acStack_474);
      puts(acStack_474);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  else {
    local_24 = FUN_00011598(local_14,local_2c + 2,acStack_44c,0x400,&local_48c,&local_4c);
    if (local_24 < 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("Error calling uuidd daemon (%s): %s\n",local_4c,pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (local_2c == 2) {
      if (local_24 == 0x14) {
        FUN_00014614(acStack_44c,acStack_474);
        if (local_48c == 1) {
          uVar1 = 0x49f8;
        }
        else {
          uVar1 = 0x4a10;
        }
        printf((char *)(uVar1 | 0x10000),acStack_474,local_48c);
LAB_00012848:
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      puts("List of UUID\'s:");
      local_1c = auStack_448;
      if (local_24 == local_48c * 0x10 + 4) {
        for (local_20 = 0; local_20 < local_48c; local_20 = local_20 + 1) {
          FUN_00014614(local_1c,acStack_474);
          printf("\t%s\n",acStack_474);
          local_1c = local_1c + 0x10;
        }
        goto LAB_00012848;
      }
    }
  }
  printf("Unexpected reply length from server %d\n",local_24);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012a68 @ 00012a68 size=496 ===== */

int FUN_00012a68(void)

{
  __pid_t _Var1;
  __uid_t _Var2;
  int iVar3;
  timeval local_1c;
  uint local_14;
  
  if (DAT_00025118 == -2) {
    gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
    DAT_00025118 = open("/dev/urandom",0);
    if (DAT_00025118 == -1) {
      DAT_00025118 = open("/dev/random",0x800);
    }
    if (-1 < DAT_00025118) {
      local_14 = fcntl(DAT_00025118,1);
      if (-1 < (int)local_14) {
        fcntl(DAT_00025118,2,local_14 | 1);
      }
    }
    _Var1 = getpid();
    _Var2 = getuid();
    srandom(_Var2 ^ _Var1 << 0x10 ^ local_1c.tv_sec ^ local_1c.tv_usec);
    _Var1 = getpid();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00012c58) = (ushort)local_1c.tv_sec ^ (ushort)_Var1;
    _Var1 = getppid();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00012c58 + 2) = (ushort)local_1c.tv_usec ^ (ushort)_Var1;
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00012c58 + 4) =
         (ushort)((uint)local_1c.tv_usec >> 0x10) ^ (ushort)((uint)local_1c.tv_sec >> 0x10);
  }
  gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
  for (local_14 = (local_1c.tv_usec ^ local_1c.tv_sec) & 0x1f; 0 < (int)local_14;
      local_14 = local_14 - 1) {
    random();
  }
  return DAT_00025118;
}



/* ===== FUN_00012c5c @ 00012c5c size=528 ===== */

void FUN_00012c5c(byte *param_1,size_t param_2)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  size_t local_18;
  int local_14;
  
  local_18 = param_2;
  local_24 = FUN_00012a68();
  local_1c = 0;
  local_20 = param_1;
  if (-1 < local_24) {
    do {
      while( true ) {
        if ((int)local_18 < 1) goto LAB_00012d18;
        local_14 = read(local_24,local_20,local_18);
        if (local_14 < 1) break;
        local_18 = local_18 - local_14;
        local_20 = local_20 + local_14;
        local_1c = 0;
      }
      iVar4 = local_1c + 1;
      bVar1 = local_1c < 0x11;
      local_1c = iVar4;
    } while (bVar1);
  }
LAB_00012d18:
  local_20 = param_1;
  for (local_14 = 0; local_14 < (int)param_2; local_14 = local_14 + 1) {
    lVar3 = random();
    *local_20 = (byte)(lVar3 >> 7) ^ *local_20;
    local_20 = local_20 + 1;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  local_2c = *(undefined4 *)(iVar4 + DAT_00012e6c);
  local_28 = (undefined2)((undefined4 *)(iVar4 + DAT_00012e6c))[1];
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar2 = *(ushort *)(iVar4 + DAT_00012e6c + 4);
  lVar3 = syscall(0xe0);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(ushort *)(iVar4 + DAT_00012e6c + 4) = (ushort)lVar3 ^ uVar2;
  local_20 = param_1;
  for (local_14 = 0; local_14 < (int)param_2; local_14 = local_14 + 1) {
    lVar3 = jrand48((ushort *)&local_2c);
    *local_20 = (byte)(lVar3 >> 7) ^ *local_20;
    local_20 = local_20 + 1;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + DAT_00012e6c) = local_2c;
  return;
}



/* ===== FUN_00012e70 @ 00012e70 size=484 ===== */

undefined4 FUN_00012e70(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_444 [1024];
  int local_44;
  undefined1 *local_40;
  char acStack_3c [18];
  char local_2a;
  char local_29;
  char local_28;
  char local_27;
  char local_26;
  char local_25;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = socket(2,2,0);
  if (local_10 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    memset(auStack_444,0,0x400);
    local_44 = 0x400;
    local_40 = auStack_444;
    iVar1 = ioctl(local_10,0x8912,&local_44);
    if (iVar1 < 0) {
      close(local_10);
      uVar2 = 0xffffffff;
    }
    else {
      local_14 = local_44;
      for (local_c = 0; local_c < local_14; local_c = local_c + 0x20) {
        local_18 = local_40 + local_c;
        strncpy(acStack_3c,local_18,0x10);
        iVar1 = ioctl(local_10,0x8927,acStack_3c);
        if (((-1 < iVar1) &&
            ((((local_1c = &local_2a, local_2a != '\0' || (local_29 != '\0')) || (local_28 != '\0'))
             || (((local_27 != '\0' || (local_26 != '\0')) || (local_25 != '\0')))))) &&
           (param_1 != (void *)0x0)) {
          memcpy(param_1,local_1c,6);
          close(local_10);
          return 1;
        }
      }
      close(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== FUN_00013054 @ 00013054 size=1984 ===== */

undefined4 FUN_00013054(int *param_1,int *param_2,undefined2 *param_3,int *param_4)

{
  FILE *pFVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  timeval local_2c;
  __off_t local_24;
  int local_20;
  int iStack_1c;
  __mode_t local_14;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (*(int *)(iVar4 + DAT_00013820) == -2) {
    local_14 = umask(0);
    iVar4 = open("/var/lib/libuuid/clock.txt",0x42,0x1b0);
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_00013820) = iVar4;
    umask(local_14);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (-1 < *(int *)(iVar4 + DAT_00013820)) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      pFVar1 = fdopen(*(int *)(iVar4 + DAT_00013820),"r+");
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(FILE **)(iVar4 + DAT_00013824) = pFVar1;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (*(int *)(iVar4 + DAT_00013824) == 0) {
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        close(*(int *)(iVar4 + DAT_00013820));
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar4 + DAT_00013820) = 0xffffffff;
      }
    }
  }
  local_3c = 1;
  local_3a = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (-1 < *(int *)(iVar4 + DAT_00013820)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00013824));
    do {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar4 = fcntl(*(int *)(iVar4 + DAT_00013820),7,&local_3c);
      if (-1 < iVar4) goto LAB_00013204;
      piVar2 = __errno_location();
    } while ((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    fclose(*(FILE **)(iVar4 + DAT_00013824));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + DAT_00013820) = 0xffffffff;
  }
LAB_00013204:
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (-1 < *(int *)(iVar4 + DAT_00013820)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = fscanf(*(FILE **)(iVar4 + DAT_00013824),"clock: %04x tv: %lu %lu adj: %d\n",&local_40,
                   &local_44,&local_48,&local_4c);
    if (iVar4 == 4) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(ushort *)(iVar4 + DAT_00013828) = (ushort)((uint)(local_40 << 0x12) >> 0x12);
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_0001382c) = local_44;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_0001382c + 4) = local_48;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00013830) = local_4c;
    }
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if ((*(int *)(iVar4 + DAT_0001382c) == 0) &&
     (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
     *(int *)(iVar4 + DAT_0001382c + 4) == 0)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00012c5c(iVar4 + DAT_00013828,2);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar5 + DAT_00013828) =
         (ushort)(((uint)*(ushort *)(iVar4 + DAT_00013828) << 0x12) >> 0x12);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    gettimeofday((timeval *)(iVar4 + DAT_0001382c),(__timezone_ptr_t)0x0);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_0001382c) = *(int *)(iVar4 + DAT_0001382c) + -1;
  }
  do {
    gettimeofday(&local_2c,(__timezone_ptr_t)0x0);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if ((local_2c.tv_sec < *(int *)(iVar4 + DAT_0001382c)) ||
       ((iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
        local_2c.tv_sec == *(uint *)(iVar4 + DAT_0001382c) &&
        (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
        local_2c.tv_usec < *(int *)(iVar4 + DAT_0001382c + 4))))) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(ushort *)(iVar5 + DAT_00013828) = *(short *)(iVar4 + DAT_00013828) + 1U & 0x3fff;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00013830) = 0;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      puVar6 = (uint *)(iVar4 + DAT_0001382c);
      *puVar6 = local_2c.tv_sec;
      puVar6[1] = local_2c.tv_usec;
      goto LAB_00013494;
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if ((local_2c.tv_sec != *(uint *)(iVar4 + DAT_0001382c)) ||
       (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
       local_2c.tv_usec != *(uint *)(iVar4 + DAT_0001382c + 4))) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00013830) = 0;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      puVar6 = (uint *)(iVar4 + DAT_0001382c);
      *puVar6 = local_2c.tv_sec;
      puVar6[1] = local_2c.tv_usec;
      goto LAB_00013494;
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  } while (9 < *(int *)(iVar4 + DAT_00013830));
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar5 + DAT_00013830) = *(int *)(iVar4 + DAT_00013830) + 1;
LAB_00013494:
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar7 = local_2c.tv_usec * 10 + *(int *)(iVar4 + DAT_00013830);
  uVar11 = (uint)((ulonglong)(uint)local_2c.tv_sec * 10000000);
  uVar3 = uVar11 + uVar7;
  local_20 = uVar3 + DAT_00013818;
  iStack_1c = (local_2c.tv_sec >> 0x1f) * 10000000 +
              (int)((ulonglong)(uint)local_2c.tv_sec * 10000000 >> 0x20) + ((int)uVar7 >> 0x1f) +
              (uint)CARRY4(uVar11,uVar7) + DAT_0001381c + (uint)CARRY4(uVar3,DAT_00013818);
  if ((param_4 != (int *)0x0) && (1 < *param_4)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_00013830) = *param_4 + -1 + *(int *)(iVar4 + DAT_00013830);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar8 + DAT_0001382c + 4) =
         *(int *)(iVar4 + DAT_0001382c + 4) + *(int *)(iVar5 + DAT_00013830) / 10;
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar4 + DAT_00013830) = *(int *)(iVar5 + DAT_00013830) % 10;
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar8 + DAT_0001382c) =
         *(int *)(iVar4 + DAT_0001382c) + *(int *)(iVar5 + DAT_0001382c + 4) / 1000000;
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar4 + DAT_0001382c + 4) = *(int *)(iVar5 + DAT_0001382c + 4) % 1000000;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (0 < *(int *)(iVar4 + DAT_00013820)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00013824));
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar9 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    local_24 = fprintf(*(FILE **)(iVar5 + DAT_00013824),"clock: %04x tv: %016lu %08lu adj: %08d\n",
                       (uint)*(ushort *)(iVar8 + DAT_00013828),*(undefined4 *)(iVar9 + DAT_0001382c)
                       ,*(undefined4 *)(iVar10 + DAT_0001382c + 4),
                       *(undefined4 *)(iVar4 + DAT_00013830));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    fflush(*(FILE **)(iVar4 + DAT_00013824));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = ftruncate(*(int *)(iVar4 + DAT_00013820),local_24);
    if (iVar4 < 0) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fwrite("                   \n",1,0x14,*(FILE **)(iVar4 + DAT_00013824));
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fflush(*(FILE **)(iVar4 + DAT_00013824));
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00013824));
    local_3c = 2;
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = fcntl(*(int *)(iVar4 + DAT_00013820),6,&local_3c);
    if (iVar4 < 0) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fclose(*(FILE **)(iVar4 + DAT_00013824));
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00013820) = 0xffffffff;
    }
  }
  *param_1 = iStack_1c;
  *param_2 = local_20;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *param_3 = *(undefined2 *)(iVar4 + DAT_00013828);
  return 0;
}



/* ===== FUN_00013834 @ 00013834 size=292 ===== */

int FUN_00013834(int param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  ssize_t sVar2;
  int *piVar3;
  size_t local_24;
  void *local_20;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  memset(param_2,0,param_3);
  local_24 = param_3;
  local_20 = param_2;
  do {
    while( true ) {
      if (local_24 == 0) {
        return local_c;
      }
      sVar2 = read(param_1,local_20,local_24);
      if (sVar2 < 1) break;
      if (0 < sVar2) {
        local_10 = 0;
      }
      local_24 = local_24 - sVar2;
      local_20 = (void *)((int)local_20 + sVar2);
      local_c = local_c + sVar2;
    }
    piVar3 = __errno_location();
  } while ((((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 4)) || (sVar2 == 0)) &&
          (bVar1 = local_10 < 5, local_10 = local_10 + 1, bVar1));
  if (local_c == 0) {
    local_c = -1;
  }
  return local_c;
}



/* ===== FUN_00013958 @ 00013958 size=112 ===== */

void FUN_00013958(void)

{
  long lVar1;
  int local_c;
  
  lVar1 = sysconf(4);
  for (local_c = 0; local_c < lVar1; local_c = local_c + 1) {
    close(local_c);
    if (local_c < 3) {
      open("/dev/null",2);
    }
  }
  return;
}



/* ===== FUN_000139c8 @ 000139c8 size=908 ===== */

undefined4 FUN_000139c8(int param_1,void *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  stat sStack_128;
  sockaddr local_d0;
  char cStack_c0;
  char cStack_bf;
  char local_be [4];
  char local_ba [4];
  char local_b6;
  int local_60;
  undefined1 local_5c;
  undefined4 local_5b;
  undefined4 local_4c;
  ssize_t local_1c;
  __pid_t local_18;
  int local_14;
  int local_10;
  size_t local_c;
  
  local_60 = 0;
  local_10 = 0x10;
  local_14 = socket(1,1,0);
  if (local_14 < 0) {
    return 0xffffffff;
  }
  local_d0.sa_family = 1;
  local_d0.sa_data[0] = s__var_lib_libuuid_request_00014b5c[0];
  local_d0.sa_data[1] = s__var_lib_libuuid_request_00014b5c[1];
  local_d0.sa_data[2] = s__var_lib_libuuid_request_00014b5c[2];
  local_d0.sa_data[3] = s__var_lib_libuuid_request_00014b5c[3];
  local_d0.sa_data[4] = s__var_lib_libuuid_request_00014b5c[4];
  local_d0.sa_data[5] = s__var_lib_libuuid_request_00014b5c[5];
  local_d0.sa_data[6] = s__var_lib_libuuid_request_00014b5c[6];
  local_d0.sa_data[7] = s__var_lib_libuuid_request_00014b5c[7];
  local_d0.sa_data[8] = s__var_lib_libuuid_request_00014b5c[8];
  local_d0.sa_data[9] = s__var_lib_libuuid_request_00014b5c[9];
  local_d0.sa_data[10] = s__var_lib_libuuid_request_00014b5c[10];
  local_d0.sa_data[0xb] = s__var_lib_libuuid_request_00014b5c[0xb];
  local_d0.sa_data[0xc] = s__var_lib_libuuid_request_00014b5c[0xc];
  local_d0.sa_data[0xd] = s__var_lib_libuuid_request_00014b5c[0xd];
  cStack_c0 = s__var_lib_libuuid_request_00014b5c[0xe];
  cStack_bf = s__var_lib_libuuid_request_00014b5c[0xf];
  local_be[0] = s__var_lib_libuuid_request_00014b5c[0x10];
  local_be[1] = s__var_lib_libuuid_request_00014b5c[0x11];
  local_be[2] = s__var_lib_libuuid_request_00014b5c[0x12];
  local_be[3] = s__var_lib_libuuid_request_00014b5c[0x13];
  local_ba[0] = s__var_lib_libuuid_request_00014b5c[0x14];
  local_ba[1] = s__var_lib_libuuid_request_00014b5c[0x15];
  local_ba[2] = s__var_lib_libuuid_request_00014b5c[0x16];
  local_ba[3] = s__var_lib_libuuid_request_00014b5c[0x17];
  local_b6 = s__var_lib_libuuid_request_00014b5c[0x18];
  iVar2 = connect(local_14,&local_d0,0x6e);
  if (iVar2 < 0) {
    if (DAT_0002511c == -2) {
      DAT_0002511c = access(DAT_00025120,1);
    }
    if (DAT_0002511c == 0) {
      DAT_0002511c = stat(DAT_00025120,&sStack_128);
    }
    if ((DAT_0002511c == 0) && ((sStack_128.st_mode & 0xc00) == 0)) {
      DAT_0002511c = access("/var/lib/libuuid",2);
    }
    if ((DAT_0002511c != 0) ||
       (iVar2 = DAT_0002515c + 1, bVar1 = 4 < DAT_0002515c, DAT_0002515c = iVar2, bVar1))
    goto LAB_00013d3c;
    local_18 = fork();
    if (local_18 == 0) {
      FUN_00013958();
      execl(DAT_00025120,"uuidd",&DAT_00014b90,&DAT_00014b8c,0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    waitpid(local_18,(int *)0x0,0);
    iVar2 = connect(local_14,&local_d0,0x6e);
    if (iVar2 < 0) goto LAB_00013d3c;
  }
  local_5c = (undefined1)param_1;
  local_c = 1;
  if (param_1 == 4) {
    local_5b = *param_3;
    local_c = 5;
    local_10 = local_10 + 4;
  }
  local_1c = write(local_14,&local_5c,local_c);
  if (((0 < local_1c) && (local_1c = FUN_00013834(local_14,&local_60,4), -1 < local_1c)) &&
     (local_10 == local_60)) {
    local_1c = FUN_00013834(local_14,&local_5c,local_60);
    if (param_1 == 4) {
      local_4c = *param_3;
    }
    memcpy(param_2,&local_5c,0x10);
    close(local_14);
    if (local_1c == local_10) {
      return 0;
    }
    return 0xffffffff;
  }
LAB_00013d3c:
  close(local_14);
  return 0xffffffff;
}



/* ===== FUN_00013d54 @ 00013d54 size=272 ===== */

void FUN_00013d54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint local_1c;
  undefined1 auStack_18 [4];
  undefined2 local_14;
  ushort local_12;
  ushort local_10;
  uint local_e;
  undefined2 local_a;
  
  if (DAT_00025160 == 0) {
    iVar1 = FUN_00012e70(&DAT_00025164);
    if (iVar1 < 1) {
      FUN_00012c5c(&DAT_00025164,6);
      DAT_00025164 = DAT_00025164 | 1;
    }
    DAT_00025160 = 1;
  }
  FUN_00013054(&local_1c,auStack_18,&local_10,param_2);
  local_10 = ~((ushort)~(ushort)(((uint)local_10 << 0x11) >> 0x10) >> 1);
  local_14 = (undefined2)local_1c;
  local_12 = (ushort)(((local_1c >> 0x10) << 0x14) >> 0x14) | 0x1000;
  local_e = DAT_00025164;
  local_a = DAT_00025168;
  FUN_000141e4(auStack_18,param_1);
  return;
}



/* ===== FUN_00013e64 @ 00013e64 size=512 ===== */

void FUN_00013e64(undefined4 param_1)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (0 < *(int *)(iVar2 + DAT_00014064)) {
    tVar1 = time((time_t *)0x0);
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar2 + DAT_00014068) + 1 < tVar1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + DAT_00014064) = 0;
    }
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (*(int *)(iVar2 + DAT_00014064) < 1) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + DAT_00014064) = 1000;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar2 = FUN_000139c8(4,param_1,iVar2 + DAT_00014064);
    if (iVar2 == 0) {
      tVar1 = time((time_t *)0x0);
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(time_t *)(iVar2 + DAT_00014068) = tVar1;
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      FUN_00014364(param_1,iVar2 + DAT_0001406c);
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(int *)(iVar3 + DAT_00014064) = *(int *)(iVar2 + DAT_00014064) + -1;
      return;
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + DAT_00014064) = 0;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (*(int *)(iVar2 + DAT_00014064) < 1) {
    FUN_00013d54(param_1,0);
  }
  else {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar3 + DAT_0001406c) = *(int *)(iVar2 + DAT_0001406c) + 1;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar2 + DAT_0001406c) == 0) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(short *)(iVar3 + DAT_0001406c + 4) = *(short *)(iVar2 + DAT_0001406c + 4) + 1;
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (*(short *)(iVar2 + DAT_0001406c + 4) == 0) {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(short *)(iVar3 + DAT_0001406c + 6) = *(short *)(iVar2 + DAT_0001406c + 6) + 1;
      }
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar3 + DAT_00014064) = *(int *)(iVar2 + DAT_00014064) + -1;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_000141e4(iVar2 + DAT_0001406c,param_1);
  }
  return;
}



/* ===== FUN_00014070 @ 00014070 size=256 ===== */

void FUN_00014070(int param_1,int *param_2)

{
  int local_34;
  undefined1 auStack_30 [6];
  ushort local_2a;
  ushort local_28;
  undefined1 auStack_20 [16];
  int local_10;
  int local_c;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    local_10 = 1;
  }
  else {
    local_10 = *param_2;
  }
  local_34 = param_1;
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    FUN_00012c5c(auStack_20,0x10);
    FUN_00014364(auStack_20,auStack_30);
    local_28 = ~((ushort)~(ushort)((uint)((int)(short)(ushort)((uint)((int)(short)local_28 << 0x12)
                                                              >> 0x12) << 0x11) >> 0x10) >> 1);
    local_2a = (ushort)((uint)((int)(short)local_2a << 0x14) >> 0x14) | 0x4000;
    FUN_000141e4(auStack_30,local_34);
    local_34 = local_34 + 0x10;
  }
  return;
}



/* ===== FUN_00014170 @ 00014170 size=52 ===== */

void FUN_00014170(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = 1;
  FUN_00014070(param_1,&local_c);
  return;
}



/* ===== FUN_000141a4 @ 000141a4 size=64 ===== */

void FUN_000141a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00012a68();
  if (iVar1 < 0) {
    FUN_00013e64(param_1);
  }
  else {
    FUN_00014170(param_1);
  }
  return;
}



/* ===== FUN_000141e4 @ 000141e4 size=384 ===== */

void FUN_000141e4(undefined4 *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  param_2[3] = (char)uVar2;
  param_2[2] = (char)((uint)uVar2 >> 8);
  param_2[1] = (char)((uint)uVar2 >> 0x10);
  *param_2 = (char)((uint)uVar2 >> 0x18);
  uVar1 = *(undefined2 *)(param_1 + 1);
  param_2[5] = (char)uVar1;
  param_2[4] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)((int)param_1 + 6);
  param_2[7] = (char)uVar1;
  param_2[6] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_1 + 2);
  param_2[9] = (char)uVar1;
  param_2[8] = (char)((ushort)uVar1 >> 8);
  memcpy(param_2 + 10,(void *)((int)param_1 + 10),6);
  return;
}



/* ===== FUN_00014364 @ 00014364 size=396 ===== */

void FUN_00014364(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_000144f0 @ 000144f0 size=172 ===== */

void FUN_000144f0(undefined4 param_1,char *param_2,char *param_3)

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
  
  FUN_00014364(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_0001459c @ 0001459c size=60 ===== */

void FUN_0001459c(undefined4 param_1,undefined4 param_2)

{
  FUN_000144f0(param_1,param_2,DAT_00025124);
  return;
}



/* ===== FUN_000145d8 @ 000145d8 size=60 ===== */

void FUN_000145d8(undefined4 param_1,undefined4 param_2)

{
  FUN_000144f0(param_1,param_2,DAT_00025128);
  return;
}



/* ===== FUN_00014614 @ 00014614 size=60 ===== */

void FUN_00014614(undefined4 param_1,undefined4 param_2)

{
  FUN_000144f0(param_1,param_2,DAT_00025124);
  return;
}



/* ===== _DT_FINI @ 00014650 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 00026008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setresuid @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setresuid(__uid_t __ruid,__uid_t __euid,__uid_t __suid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execl @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewind @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getppid @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setreuid @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setreuid(__uid_t __ruid,__uid_t __euid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsid @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jrand48 @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate @ 000260e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 000260e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup @ 000260f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 000260f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chdir @ 000260f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setresgid @ 000260fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setresgid(__gid_t __rgid,__gid_t __egid,__gid_t __sgid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00026100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


