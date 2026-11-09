// logsave — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001071c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00010740 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0002200c)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 0001074c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010758 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022014)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010764 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00022018)(__s);
  return;
}



/* ===== <EXTERNAL>::dup2 @ 00010770 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_0002201c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 0001077c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00022020)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 00010788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022024)();
  return;
}



/* ===== <EXTERNAL>::pipe @ 00010794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00022028)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 000107a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002202c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::kill @ 000107ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00022030)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 000107b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_00022034)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000107c4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022038)();
  return;
}



/* ===== <EXTERNAL>::read @ 000107d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002203c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::realloc @ 000107dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00022040)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::fork @ 000107e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00022044)();
  return _Var1;
}



/* ===== <EXTERNAL>::sigaction @ 000107f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00022048)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 0001080c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00022050)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022054)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::time @ 00010824 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00022058)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010830 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002205c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 0001083c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00022060)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010848 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022064)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00022068)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002206c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 0001086c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00022070)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00022074)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::execvp @ 00010884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_00022078)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::setsid @ 00010890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_setsid_0002207c)();
  return _Var1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001089c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022080)();
  return;
}



/* ===== <EXTERNAL>::close @ 000108a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00022084)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000108b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022088)(__ptr);
  return;
}



/* ===== entry @ 000108c0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002204c)
            (DAT_000108f4,param_2,&stack0x00000004,DAT_000108f8,DAT_000108f0,param_1);
  return;
}



/* ===== FUN_000108fc @ 000108fc size=32 ===== */

void FUN_000108fc(void)

{
  if (DAT_00010920 == DAT_0001091c) {
    return;
  }
  if (DAT_00010924 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010924)();
  return;
}



/* ===== _FINI_0 @ 00010960 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001099c;
  if (*DAT_0001099c != '\0') {
    return;
  }
  FUN_000108fc();
  if (DAT_000109a0 != 0) {
    __deregister_frame_info(DAT_000109a4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000109a8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000109cc != 0) {
    __register_frame_info(DAT_000109d4,DAT_000109d0);
  }
  if ((DAT_00010958 - DAT_00010954 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001095c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001095c)();
  return;
}



/* ===== FUN_000109d8 @ 000109d8 size=40 ===== */

void FUN_000109d8(undefined4 param_1)

{
  printf("Usage: %s [-asv] logfile program\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00010a00 @ 00010a00 size=196 ===== */

int FUN_00010a00(int param_1,void *param_2,size_t param_3)

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



/* ===== FUN_00010ac4 @ 00010ac4 size=536 ===== */

void FUN_00010ac4(char *param_1,size_t param_2,uint param_3)

{
  bool bVar1;
  void *pvVar2;
  size_t local_28;
  int local_14;
  size_t local_10;
  char *local_c;
  
  local_28 = param_2;
  if (param_2 == 0) {
    local_28 = strlen(param_1);
  }
  if ((param_3 & 2) != 0) {
    local_c = param_1;
    for (local_10 = local_28; local_10 != 0; local_10 = local_10 - local_14) {
      bVar1 = false;
      for (local_14 = 0; local_14 < (int)local_10; local_14 = local_14 + 1) {
        if ((DAT_000220cc != 0) && ((local_c[local_14] == '\x01' || (local_c[local_14] == '\x02'))))
        {
          bVar1 = true;
          break;
        }
      }
      FUN_00010a00(1,local_c,local_14);
      if (bVar1) {
        local_14 = local_14 + 1;
      }
      local_c = local_c + local_14;
    }
  }
  if ((param_3 & 1) != 0) {
    if (DAT_00022094 < 1) {
      pvVar2 = realloc(DAT_000220c0,DAT_000220bc + local_28);
      if (pvVar2 != (void *)0x0) {
        DAT_000220c0 = pvVar2;
        memcpy((void *)((int)pvVar2 + DAT_000220bc),param_1,local_28);
        DAT_000220bc = DAT_000220bc + local_28;
      }
    }
    else {
      FUN_00010a00(DAT_00022094,param_1,local_28);
    }
  }
  return;
}



/* ===== FUN_00010cdc @ 00010cdc size=448 ===== */

ssize_t FUN_00010cdc(int param_1)

{
  char local_1014 [4096];
  char *local_14;
  int local_10;
  char *local_c;
  
  local_10 = read(param_1,local_1014,0xfff);
  if (0 < local_10) {
    if (DAT_000220c8 == 0) {
      FUN_00010ac4(local_1014,local_10,3);
    }
    else {
      FUN_00010ac4(local_1014,local_10,2);
      local_1014[local_10] = '\0';
      local_c = local_1014;
      while (*local_c != '\0') {
        if (DAT_000220cc == 0) {
          local_14 = strchr(local_c,1);
          if (local_14 != (char *)0x0) {
            *local_14 = '\0';
          }
          FUN_00010ac4(local_c,0,1);
          if (local_14 == (char *)0x0) {
            return local_10;
          }
          local_c = local_14 + 1;
          DAT_000220cc = 1;
        }
        else {
          local_c = strchr(local_c,2);
          if (local_c == (char *)0x0) {
            return 0;
          }
          local_c = local_c + 1;
          DAT_000220cc = 0;
        }
      }
    }
  }
  return local_10;
}



/* ===== FUN_00010e9c @ 00010e9c size=72 ===== */

void FUN_00010e9c(int param_1)

{
  if (0 < DAT_00022098) {
    kill(DAT_00022098,param_1);
  }
  return;
}



/* ===== FUN_00010ee4 @ 00010ee4 size=652 ===== */

uint FUN_00010ee4(char **param_1)

{
  int iVar1;
  __pid_t _Var2;
  code *local_80;
  ulong local_7c;
  char acStack_6c [80];
  uint local_1c;
  ulong local_18;
  ulong local_14;
  ulong local_10;
  uint local_c;
  
  iVar1 = pipe((int *)&local_18);
  if (iVar1 < 0) {
    perror("pipe");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  memset(&local_80,0,0x14);
  local_80 = FUN_00010e9c;
  sigaction(2,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(0xf,(sigaction *)&local_80,(sigaction *)0x0);
  local_7c = 0x10000000;
  local_10 = fork();
  if (-1 < (int)local_10) {
    if (local_10 != 0) {
      DAT_00022098 = local_10;
      close(local_14);
      while (_Var2 = waitpid(local_10,(int *)&local_1c,1), _Var2 == 0) {
        FUN_00010cdc(local_18);
      }
      DAT_00022098 = 0xffffffff;
      FUN_00010cdc(local_18);
      close(local_18);
      if ((local_1c & 0x7f) == 0) {
        local_c = (int)local_1c >> 8 & 0xff;
        if (local_c != 0) {
          FUN_00010ac4(*param_1,0,3);
          sprintf(acStack_6c," exited with status code %d\n",local_c);
          FUN_00010ac4(acStack_6c,0,3);
        }
      }
      else if ((local_1c & 0xffff) - 1 < 0xff) {
        FUN_00010ac4(*param_1,0,3);
        sprintf(acStack_6c,"died with signal %d\n",local_1c & 0x7f);
        FUN_00010ac4(acStack_6c,0,3);
        local_c = 1;
      }
      else {
        local_c = 0;
      }
      return local_c;
    }
    dup2(local_14,1);
    dup2(local_14,2);
    close(local_18);
    close(local_14);
    execvp(*param_1,param_1);
    perror(*param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  perror("vfork");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011170 @ 00011170 size=188 ===== */

undefined4 FUN_00011170(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  local_c = 0;
  while( true ) {
    while ((iVar2 = FUN_00010cdc(0), iVar2 == 0 ||
           ((iVar2 < 0 &&
            ((piVar3 = __errno_location(), *piVar3 == 0xb ||
             (piVar3 = __errno_location(), *piVar3 == 4))))))) {
      bVar1 = 3 < local_c;
      local_c = local_c + 1;
      if (bVar1) {
        return 0;
      }
    }
    if (iVar2 < 0) break;
    local_c = 0;
  }
  perror("read");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001122c @ 0001122c size=1116 ===== */

void FUN_0001122c(int param_1,char **param_2)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  time_t local_2c;
  __pid_t local_28;
  uint local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  char **local_10;
  int local_c;
  
  local_14 = 0x241;
  local_18 = 1;
  while (local_1c = getopt(param_1,param_2,"+asv"), local_1c != -1) {
    if (local_1c == 0x73) {
      DAT_000220c8 = 1;
    }
    else if (local_1c == 0x76) {
      DAT_000220c4 = DAT_000220c4 + 1;
      local_18 = local_18 | 2;
    }
    else if (local_1c == 0x61) {
      local_14 = local_14 & 0xfffffdff | 0x400;
    }
  }
  if ((param_1 == optind) || (param_1 == optind + 1)) {
    FUN_000109d8(*param_2);
  }
  local_20 = param_2[optind];
  optind = optind + 1;
  param_2 = param_2 + optind;
  DAT_00022094 = open(local_20,local_14,0x1a4,param_1 - optind,param_2,param_1 - optind);
  iVar2 = strcmp(*param_2,"-");
  local_24 = (uint)(iVar2 == 0);
  FUN_00010ac4("Log of ",0,local_18);
  ppcVar1 = param_2;
  if (local_24 == 0) {
    while (local_10 = ppcVar1, *local_10 != (char *)0x0) {
      FUN_00010ac4(*local_10,0,local_18);
      FUN_00010ac4(&DAT_00011728,0,local_18);
      ppcVar1 = local_10 + 1;
    }
  }
  else {
    FUN_00010ac4("stdin",0,local_18);
  }
  FUN_00010ac4(&DAT_0001172c,0,local_18);
  local_2c = time((time_t *)0x0);
  pcVar3 = ctime(&local_2c);
  FUN_00010ac4(pcVar3,0,local_18);
  FUN_00010ac4(&DAT_0001172c,0,local_18);
  if (local_24 == 0) {
    local_c = FUN_00010ee4(param_2);
  }
  else {
    local_c = FUN_00011170();
  }
  FUN_00010ac4(&DAT_0001172c,0,local_18);
  local_2c = time((time_t *)0x0);
  pcVar3 = ctime(&local_2c);
  FUN_00010ac4(pcVar3,0,local_18);
  FUN_00010ac4("----------------\n",0,local_18);
  if (DAT_000220c0 != (void *)0x0) {
    local_28 = fork();
    if (local_28 < 0) {
      perror("fork");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (local_28 != 0) {
      if (DAT_000220c4 != 0) {
        printf("Backgrounding to save %s later\n",local_20);
      }
                    /* WARNING: Subroutine does not return */
      exit(local_c);
    }
    setsid();
    while (DAT_00022094 < 0) {
      DAT_00022094 = open(local_20,local_14,0x1a4);
      sleep(1);
    }
    FUN_00010a00(DAT_00022094,DAT_000220c0,DAT_000220bc);
    free(DAT_000220c0);
  }
  if (-1 < DAT_00022094) {
    close(DAT_00022094);
  }
                    /* WARNING: Subroutine does not return */
  exit(local_c);
}



/* ===== _DT_FINI @ 00011688 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsid @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


