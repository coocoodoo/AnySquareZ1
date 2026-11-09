// uuidgen — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000109b4 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::waitpid @ 000109d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0002300c)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::ioctl @ 000109e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 000109f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00023014)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::random @ 000109fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00023018)();
  return lVar1;
}



/* ===== <EXTERNAL>::connect @ 00010a08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002301c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 00010a14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00023020)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::getpid @ 00010a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00023024)();
  return _Var1;
}



/* ===== <EXTERNAL>::fscanf @ 00010a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00023028)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002302c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::execl @ 00010a44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00023030)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023034)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getuid @ 00010a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00023038)();
  return _Var1;
}



/* ===== <EXTERNAL>::socket @ 00010a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0002303c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010a74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ftruncate @ 00010a80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ftruncate_00023044)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010a8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023048)();
  return;
}



/* ===== <EXTERNAL>::write @ 00010a98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002304c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010ab0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023054)();
  return;
}



/* ===== <EXTERNAL>::umask @ 00010abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_00023058)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::read @ 00010ac8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002305c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010ad4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00023060)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00010ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00023064)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::fork @ 00010aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00023068)();
  return _Var1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010b04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00023070)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010b10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00023074)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010b1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023078)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002307c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::getppid @ 00010b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getppid_00023080)();
  return _Var1;
}



/* ===== <EXTERNAL>::time @ 00010b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00023084)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00023088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 00010b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0002308c)(__seed);
  return;
}



/* ===== <EXTERNAL>::stat @ 00010b64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00023090)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023094)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00010b7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00023098)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::rewind @ 00010b88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
  (*(code *)PTR_rewind_0002309c)(__stream);
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000230a0)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010ba0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000230a4)(__status);
  return;
}



/* ===== <EXTERNAL>::open @ 00010bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000230a8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00010bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000230ac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::jrand48 @ 00010bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_jrand48_000230b0)(__xsubi);
  return lVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010bd0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000230b4)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000230b8)(__fd);
  return iVar1;
}



/* ===== entry @ 00010be8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002306c)
            (DAT_00010c1c,param_2,&stack0x00000004,DAT_00010c20,DAT_00010c18,param_1);
  return;
}



/* ===== FUN_00010c24 @ 00010c24 size=32 ===== */

void FUN_00010c24(void)

{
  if (DAT_00010c48 == DAT_00010c44) {
    return;
  }
  if (DAT_00010c4c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c4c)();
  return;
}



/* ===== _FINI_0 @ 00010c88 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010cc4;
  if (*DAT_00010cc4 != '\0') {
    return;
  }
  FUN_00010c24();
  if (DAT_00010cc8 != 0) {
    __deregister_frame_info(DAT_00010ccc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010cd0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010cf4 != 0) {
    __register_frame_info(DAT_00010cfc,DAT_00010cf8);
  }
  if ((DAT_00010c80 - DAT_00010c7c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010c84 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c84)();
  return;
}



/* ===== FUN_00010d00 @ 00010d00 size=56 ===== */

void FUN_00010d00(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [-r] [-t]\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00010e38 @ 00010e38 size=496 ===== */

int FUN_00010e38(void)

{
  __pid_t _Var1;
  __uid_t _Var2;
  int iVar3;
  timeval local_1c;
  uint local_14;
  
  if (DAT_000230c4 == -2) {
    gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
    DAT_000230c4 = open("/dev/urandom",0);
    if (DAT_000230c4 == -1) {
      DAT_000230c4 = open("/dev/random",0x800);
    }
    if (-1 < DAT_000230c4) {
      local_14 = fcntl(DAT_000230c4,1);
      if (-1 < (int)local_14) {
        fcntl(DAT_000230c4,2,local_14 | 1);
      }
    }
    _Var1 = getpid();
    _Var2 = getuid();
    srandom(_Var2 ^ _Var1 << 0x10 ^ local_1c.tv_sec ^ local_1c.tv_usec);
    _Var1 = getpid();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00011028) = (ushort)local_1c.tv_sec ^ (ushort)_Var1;
    _Var1 = getppid();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00011028 + 2) = (ushort)local_1c.tv_usec ^ (ushort)_Var1;
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar3 + DAT_00011028 + 4) =
         (ushort)((uint)local_1c.tv_usec >> 0x10) ^ (ushort)((uint)local_1c.tv_sec >> 0x10);
  }
  gettimeofday(&local_1c,(__timezone_ptr_t)0x0);
  for (local_14 = (local_1c.tv_usec ^ local_1c.tv_sec) & 0x1f; 0 < (int)local_14;
      local_14 = local_14 - 1) {
    random();
  }
  return DAT_000230c4;
}



/* ===== FUN_0001102c @ 0001102c size=528 ===== */

void FUN_0001102c(byte *param_1,size_t param_2)

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
  local_24 = FUN_00010e38();
  local_1c = 0;
  local_20 = param_1;
  if (-1 < local_24) {
    do {
      while( true ) {
        if ((int)local_18 < 1) goto LAB_000110e8;
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
LAB_000110e8:
  local_20 = param_1;
  for (local_14 = 0; local_14 < (int)param_2; local_14 = local_14 + 1) {
    lVar3 = random();
    *local_20 = (byte)(lVar3 >> 7) ^ *local_20;
    local_20 = local_20 + 1;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  local_2c = *(undefined4 *)(iVar4 + DAT_0001123c);
  local_28 = (undefined2)((undefined4 *)(iVar4 + DAT_0001123c))[1];
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar2 = *(ushort *)(iVar4 + DAT_0001123c + 4);
  lVar3 = syscall(0xe0);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(ushort *)(iVar4 + DAT_0001123c + 4) = (ushort)lVar3 ^ uVar2;
  local_20 = param_1;
  for (local_14 = 0; local_14 < (int)param_2; local_14 = local_14 + 1) {
    lVar3 = jrand48((ushort *)&local_2c);
    *local_20 = (byte)(lVar3 >> 7) ^ *local_20;
    local_20 = local_20 + 1;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + DAT_0001123c) = local_2c;
  return;
}



/* ===== FUN_00011240 @ 00011240 size=484 ===== */

undefined4 FUN_00011240(void *param_1)

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



/* ===== FUN_00011424 @ 00011424 size=1984 ===== */

undefined4 FUN_00011424(int *param_1,int *param_2,undefined2 *param_3,int *param_4)

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
  if (*(int *)(iVar4 + DAT_00011bf0) == -2) {
    local_14 = umask(0);
    iVar4 = open("/var/lib/libuuid/clock.txt",0x42,0x1b0);
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_00011bf0) = iVar4;
    umask(local_14);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (-1 < *(int *)(iVar4 + DAT_00011bf0)) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      pFVar1 = fdopen(*(int *)(iVar4 + DAT_00011bf0),"r+");
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(FILE **)(iVar4 + DAT_00011bf4) = pFVar1;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (*(int *)(iVar4 + DAT_00011bf4) == 0) {
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        close(*(int *)(iVar4 + DAT_00011bf0));
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar4 + DAT_00011bf0) = 0xffffffff;
      }
    }
  }
  local_3c = 1;
  local_3a = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (-1 < *(int *)(iVar4 + DAT_00011bf0)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00011bf4));
    do {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar4 = fcntl(*(int *)(iVar4 + DAT_00011bf0),7,&local_3c);
      if (-1 < iVar4) goto LAB_000115d4;
      piVar2 = __errno_location();
    } while ((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    fclose(*(FILE **)(iVar4 + DAT_00011bf4));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + DAT_00011bf0) = 0xffffffff;
  }
LAB_000115d4:
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (-1 < *(int *)(iVar4 + DAT_00011bf0)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = fscanf(*(FILE **)(iVar4 + DAT_00011bf4),"clock: %04x tv: %lu %lu adj: %d\n",&local_40,
                   &local_44,&local_48,&local_4c);
    if (iVar4 == 4) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(ushort *)(iVar4 + DAT_00011bf8) = (ushort)((uint)(local_40 << 0x12) >> 0x12);
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011bfc) = local_44;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011bfc + 4) = local_48;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011c00) = local_4c;
    }
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if ((*(int *)(iVar4 + DAT_00011bfc) == 0) &&
     (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
     *(int *)(iVar4 + DAT_00011bfc + 4) == 0)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_0001102c(iVar4 + DAT_00011bf8,2);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(ushort *)(iVar5 + DAT_00011bf8) =
         (ushort)(((uint)*(ushort *)(iVar4 + DAT_00011bf8) << 0x12) >> 0x12);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    gettimeofday((timeval *)(iVar4 + DAT_00011bfc),(__timezone_ptr_t)0x0);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_00011bfc) = *(int *)(iVar4 + DAT_00011bfc) + -1;
  }
  do {
    gettimeofday(&local_2c,(__timezone_ptr_t)0x0);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if ((local_2c.tv_sec < *(int *)(iVar4 + DAT_00011bfc)) ||
       ((iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
        local_2c.tv_sec == *(uint *)(iVar4 + DAT_00011bfc) &&
        (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
        local_2c.tv_usec < *(int *)(iVar4 + DAT_00011bfc + 4))))) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(ushort *)(iVar5 + DAT_00011bf8) = *(short *)(iVar4 + DAT_00011bf8) + 1U & 0x3fff;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011c00) = 0;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      puVar6 = (uint *)(iVar4 + DAT_00011bfc);
      *puVar6 = local_2c.tv_sec;
      puVar6[1] = local_2c.tv_usec;
      goto LAB_00011864;
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if ((local_2c.tv_sec != *(uint *)(iVar4 + DAT_00011bfc)) ||
       (iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID(),
       local_2c.tv_usec != *(uint *)(iVar4 + DAT_00011bfc + 4))) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011c00) = 0;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      puVar6 = (uint *)(iVar4 + DAT_00011bfc);
      *puVar6 = local_2c.tv_sec;
      puVar6[1] = local_2c.tv_usec;
      goto LAB_00011864;
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  } while (9 < *(int *)(iVar4 + DAT_00011c00));
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar5 + DAT_00011c00) = *(int *)(iVar4 + DAT_00011c00) + 1;
LAB_00011864:
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar7 = local_2c.tv_usec * 10 + *(int *)(iVar4 + DAT_00011c00);
  uVar11 = (uint)((ulonglong)(uint)local_2c.tv_sec * 10000000);
  uVar3 = uVar11 + uVar7;
  local_20 = uVar3 + DAT_00011be8;
  iStack_1c = (local_2c.tv_sec >> 0x1f) * 10000000 +
              (int)((ulonglong)(uint)local_2c.tv_sec * 10000000 >> 0x20) + ((int)uVar7 >> 0x1f) +
              (uint)CARRY4(uVar11,uVar7) + DAT_00011bec + (uint)CARRY4(uVar3,DAT_00011be8);
  if ((param_4 != (int *)0x0) && (1 < *param_4)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar5 + DAT_00011c00) = *param_4 + -1 + *(int *)(iVar4 + DAT_00011c00);
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar8 + DAT_00011bfc + 4) =
         *(int *)(iVar4 + DAT_00011bfc + 4) + *(int *)(iVar5 + DAT_00011c00) / 10;
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar4 + DAT_00011c00) = *(int *)(iVar5 + DAT_00011c00) % 10;
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar8 + DAT_00011bfc) =
         *(int *)(iVar4 + DAT_00011bfc) + *(int *)(iVar5 + DAT_00011bfc + 4) / 1000000;
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar4 + DAT_00011bfc + 4) = *(int *)(iVar5 + DAT_00011bfc + 4) % 1000000;
  }
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (0 < *(int *)(iVar4 + DAT_00011bf0)) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00011bf4));
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar9 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    local_24 = fprintf(*(FILE **)(iVar5 + DAT_00011bf4),"clock: %04x tv: %016lu %08lu adj: %08d\n",
                       (uint)*(ushort *)(iVar8 + DAT_00011bf8),*(undefined4 *)(iVar9 + DAT_00011bfc)
                       ,*(undefined4 *)(iVar10 + DAT_00011bfc + 4),
                       *(undefined4 *)(iVar4 + DAT_00011c00));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    fflush(*(FILE **)(iVar4 + DAT_00011bf4));
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = ftruncate(*(int *)(iVar4 + DAT_00011bf0),local_24);
    if (iVar4 < 0) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fwrite("                   \n",1,0x14,*(FILE **)(iVar4 + DAT_00011bf4));
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fflush(*(FILE **)(iVar4 + DAT_00011bf4));
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    rewind(*(FILE **)(iVar4 + DAT_00011bf4));
    local_3c = 2;
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar4 = fcntl(*(int *)(iVar4 + DAT_00011bf0),6,&local_3c);
    if (iVar4 < 0) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      fclose(*(FILE **)(iVar4 + DAT_00011bf4));
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + DAT_00011bf0) = 0xffffffff;
    }
  }
  *param_1 = iStack_1c;
  *param_2 = local_20;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *param_3 = *(undefined2 *)(iVar4 + DAT_00011bf8);
  return 0;
}



/* ===== FUN_00011c04 @ 00011c04 size=292 ===== */

int FUN_00011c04(int param_1,void *param_2,size_t param_3)

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



/* ===== FUN_00011d28 @ 00011d28 size=112 ===== */

void FUN_00011d28(void)

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



/* ===== FUN_00011d98 @ 00011d98 size=908 ===== */

undefined4 FUN_00011d98(int param_1,void *param_2,undefined4 *param_3)

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
  local_d0.sa_data[0] = s__var_lib_libuuid_request_00012af8[0];
  local_d0.sa_data[1] = s__var_lib_libuuid_request_00012af8[1];
  local_d0.sa_data[2] = s__var_lib_libuuid_request_00012af8[2];
  local_d0.sa_data[3] = s__var_lib_libuuid_request_00012af8[3];
  local_d0.sa_data[4] = s__var_lib_libuuid_request_00012af8[4];
  local_d0.sa_data[5] = s__var_lib_libuuid_request_00012af8[5];
  local_d0.sa_data[6] = s__var_lib_libuuid_request_00012af8[6];
  local_d0.sa_data[7] = s__var_lib_libuuid_request_00012af8[7];
  local_d0.sa_data[8] = s__var_lib_libuuid_request_00012af8[8];
  local_d0.sa_data[9] = s__var_lib_libuuid_request_00012af8[9];
  local_d0.sa_data[10] = s__var_lib_libuuid_request_00012af8[10];
  local_d0.sa_data[0xb] = s__var_lib_libuuid_request_00012af8[0xb];
  local_d0.sa_data[0xc] = s__var_lib_libuuid_request_00012af8[0xc];
  local_d0.sa_data[0xd] = s__var_lib_libuuid_request_00012af8[0xd];
  cStack_c0 = s__var_lib_libuuid_request_00012af8[0xe];
  cStack_bf = s__var_lib_libuuid_request_00012af8[0xf];
  local_be[0] = s__var_lib_libuuid_request_00012af8[0x10];
  local_be[1] = s__var_lib_libuuid_request_00012af8[0x11];
  local_be[2] = s__var_lib_libuuid_request_00012af8[0x12];
  local_be[3] = s__var_lib_libuuid_request_00012af8[0x13];
  local_ba[0] = s__var_lib_libuuid_request_00012af8[0x14];
  local_ba[1] = s__var_lib_libuuid_request_00012af8[0x15];
  local_ba[2] = s__var_lib_libuuid_request_00012af8[0x16];
  local_ba[3] = s__var_lib_libuuid_request_00012af8[0x17];
  local_b6 = s__var_lib_libuuid_request_00012af8[0x18];
  iVar2 = connect(local_14,&local_d0,0x6e);
  if (iVar2 < 0) {
    if (DAT_000230c8 == -2) {
      DAT_000230c8 = access(DAT_000230cc,1);
    }
    if (DAT_000230c8 == 0) {
      DAT_000230c8 = stat(DAT_000230cc,&sStack_128);
    }
    if ((DAT_000230c8 == 0) && ((sStack_128.st_mode & 0xc00) == 0)) {
      DAT_000230c8 = access("/var/lib/libuuid",2);
    }
    if ((DAT_000230c8 != 0) ||
       (iVar2 = DAT_000230f8 + 1, bVar1 = 4 < DAT_000230f8, DAT_000230f8 = iVar2, bVar1))
    goto LAB_0001210c;
    local_18 = fork();
    if (local_18 == 0) {
      FUN_00011d28();
      execl(DAT_000230cc,"uuidd",&DAT_00012b2c,&DAT_00012b28,0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    waitpid(local_18,(int *)0x0,0);
    iVar2 = connect(local_14,&local_d0,0x6e);
    if (iVar2 < 0) goto LAB_0001210c;
  }
  local_5c = (undefined1)param_1;
  local_c = 1;
  if (param_1 == 4) {
    local_5b = *param_3;
    local_c = 5;
    local_10 = local_10 + 4;
  }
  local_1c = write(local_14,&local_5c,local_c);
  if (((0 < local_1c) && (local_1c = FUN_00011c04(local_14,&local_60,4), -1 < local_1c)) &&
     (local_10 == local_60)) {
    local_1c = FUN_00011c04(local_14,&local_5c,local_60);
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
LAB_0001210c:
  close(local_14);
  return 0xffffffff;
}



/* ===== FUN_00012124 @ 00012124 size=272 ===== */

void FUN_00012124(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint local_1c;
  undefined1 auStack_18 [4];
  undefined2 local_14;
  ushort local_12;
  ushort local_10;
  uint local_e;
  undefined2 local_a;
  
  if (DAT_000230fc == 0) {
    iVar1 = FUN_00011240(&DAT_00023100);
    if (iVar1 < 1) {
      FUN_0001102c(&DAT_00023100,6);
      DAT_00023100 = DAT_00023100 | 1;
    }
    DAT_000230fc = 1;
  }
  FUN_00011424(&local_1c,auStack_18,&local_10,param_2);
  local_10 = ~((ushort)~(ushort)(((uint)local_10 << 0x11) >> 0x10) >> 1);
  local_14 = (undefined2)local_1c;
  local_12 = (ushort)(((local_1c >> 0x10) << 0x14) >> 0x14) | 0x1000;
  local_e = DAT_00023100;
  local_a = DAT_00023104;
  FUN_000125b4(auStack_18,param_1);
  return;
}



/* ===== FUN_00012234 @ 00012234 size=512 ===== */

void FUN_00012234(undefined4 param_1)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (0 < *(int *)(iVar2 + DAT_00012434)) {
    tVar1 = time((time_t *)0x0);
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar2 + DAT_00012438) + 1 < tVar1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + DAT_00012434) = 0;
    }
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (*(int *)(iVar2 + DAT_00012434) < 1) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + DAT_00012434) = 1000;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar2 = FUN_00011d98(4,param_1,iVar2 + DAT_00012434);
    if (iVar2 == 0) {
      tVar1 = time((time_t *)0x0);
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(time_t *)(iVar2 + DAT_00012438) = tVar1;
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      FUN_00012734(param_1,iVar2 + DAT_0001243c);
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(int *)(iVar3 + DAT_00012434) = *(int *)(iVar2 + DAT_00012434) + -1;
      return;
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + DAT_00012434) = 0;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (*(int *)(iVar2 + DAT_00012434) < 1) {
    FUN_00012124(param_1,0);
  }
  else {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar3 + DAT_0001243c) = *(int *)(iVar2 + DAT_0001243c) + 1;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar2 + DAT_0001243c) == 0) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(short *)(iVar3 + DAT_0001243c + 4) = *(short *)(iVar2 + DAT_0001243c + 4) + 1;
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (*(short *)(iVar2 + DAT_0001243c + 4) == 0) {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(short *)(iVar3 + DAT_0001243c + 6) = *(short *)(iVar2 + DAT_0001243c + 6) + 1;
      }
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(int *)(iVar3 + DAT_00012434) = *(int *)(iVar2 + DAT_00012434) + -1;
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_000125b4(iVar2 + DAT_0001243c,param_1);
  }
  return;
}



/* ===== FUN_00012440 @ 00012440 size=256 ===== */

void FUN_00012440(int param_1,int *param_2)

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
    FUN_0001102c(auStack_20,0x10);
    FUN_00012734(auStack_20,auStack_30);
    local_28 = ~((ushort)~(ushort)((uint)((int)(short)(ushort)((uint)((int)(short)local_28 << 0x12)
                                                              >> 0x12) << 0x11) >> 0x10) >> 1);
    local_2a = (ushort)((uint)((int)(short)local_2a << 0x14) >> 0x14) | 0x4000;
    FUN_000125b4(auStack_30,local_34);
    local_34 = local_34 + 0x10;
  }
  return;
}



/* ===== FUN_00012540 @ 00012540 size=52 ===== */

void FUN_00012540(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = 1;
  FUN_00012440(param_1,&local_c);
  return;
}



/* ===== FUN_00012574 @ 00012574 size=64 ===== */

void FUN_00012574(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010e38();
  if (iVar1 < 0) {
    FUN_00012234(param_1);
  }
  else {
    FUN_00012540(param_1);
  }
  return;
}



/* ===== FUN_000125b4 @ 000125b4 size=384 ===== */

void FUN_000125b4(undefined4 *param_1,undefined1 *param_2)

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



/* ===== FUN_00012734 @ 00012734 size=396 ===== */

void FUN_00012734(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_000128c0 @ 000128c0 size=172 ===== */

void FUN_000128c0(undefined4 param_1,char *param_2,char *param_3)

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
  
  FUN_00012734(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_0001296c @ 0001296c size=60 ===== */

void FUN_0001296c(undefined4 param_1,undefined4 param_2)

{
  FUN_000128c0(param_1,param_2,DAT_000230d0);
  return;
}



/* ===== FUN_000129a8 @ 000129a8 size=60 ===== */

void FUN_000129a8(undefined4 param_1,undefined4 param_2)

{
  FUN_000128c0(param_1,param_2,DAT_000230d4);
  return;
}



/* ===== FUN_000129e4 @ 000129e4 size=60 ===== */

void FUN_000129e4(undefined4 param_1,undefined4 param_2)

{
  FUN_000128c0(param_1,param_2,DAT_000230d0);
  return;
}



/* ===== _DT_FINI @ 00012a20 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execl @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewind @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getppid @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getppid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jrand48 @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long jrand48(ushort *__xsubi)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


