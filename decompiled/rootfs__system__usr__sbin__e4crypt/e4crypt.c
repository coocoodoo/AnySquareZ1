// e4crypt — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010b10 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002700c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00027010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00027014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00027018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010b64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002701c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::syscall @ 00010b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00027020)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010b7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00027024)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010b88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002702c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010ba0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00027030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00027034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00027038)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 00010bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002703c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00010bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00027040)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027044)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010be8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00027048)();
  return;
}



/* ===== <EXTERNAL>::memchr @ 00010bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_0002704c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00027050)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00027054)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 00010c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00027058)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002705c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00010c30 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_00027060)();
  return;
}



/* ===== <EXTERNAL>::sigaction @ 00010c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00027064)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::endmntent @ 00010c48 size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_00027068)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00027070)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00027074)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00027078)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002707c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00027080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00010c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00027084)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00010ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00027088)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getmntent @ 00010cb4 size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_0002708c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027090)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00027094)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00027098)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002709c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000270a0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000270a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000270a8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__assert @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_000270ac)(__assertion);
  return;
}



/* ===== <EXTERNAL>::fputs @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000270b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsetattr @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_000270b4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010d38 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000270b8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000270bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000270c0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010d5c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_000270c4)();
  return;
}



/* ===== entry @ 00010d68 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002706c)
            (DAT_00010d9c,param_2,&stack0x00000004,DAT_00010da0,DAT_00010d98,param_1);
  return;
}



/* ===== FUN_00010da4 @ 00010da4 size=32 ===== */

void FUN_00010da4(void)

{
  if (DAT_00010dc8 == DAT_00010dc4) {
    return;
  }
  if (DAT_00010dcc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010dcc)();
  return;
}



/* ===== _FINI_0 @ 00010e08 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010e44;
  if (*DAT_00010e44 != '\0') {
    return;
  }
  FUN_00010da4();
  if (DAT_00010e48 != 0) {
    __deregister_frame_info(DAT_00010e4c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010e50 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e74 != 0) {
    __register_frame_info(DAT_00010e7c,DAT_00010e78);
  }
  if ((DAT_00010e00 - DAT_00010dfc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010e04 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010e04)();
  return;
}



/* ===== FUN_00010e80 @ 00010e80 size=164 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_00010e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  
  lVar1 = syscall(0x137,param_1,param_2,param_3,param_4,param_5);
  return lVar1;
}



/* ===== FUN_00010f24 @ 00010f24 size=80 ===== */

long FUN_00010f24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  
  lVar1 = syscall(0x135,param_1,param_2,param_3,param_4,param_5);
  return lVar1;
}



/* ===== FUN_00010f74 @ 00010f74 size=96 ===== */

int FUN_00010f74(int param_1)

{
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = 0;
  while (local_14 = param_1 >> 1, local_14 != 0) {
    local_c = local_c + 1;
    param_1 = local_14;
  }
  return local_c;
}



/* ===== FUN_00010fd4 @ 00010fd4 size=324 ===== */

void FUN_00010fd4(int param_1,int param_2,int param_3)

{
  stat sStack_70;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 1;
  local_c = param_3;
  do {
    if (param_1 <= local_c) {
      if (local_10 != 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_14 = access(*(char **)(param_2 + local_c * 4),2);
    if ((local_14 == 0) &&
       (local_14 = stat(*(char **)(param_2 + local_c * 4),&sStack_70), -1 < local_14)) {
      if ((sStack_70.st_mode & 0xf000) != 0x4000) {
        fprintf(stderr,"%s is not a directory\n",*(undefined4 *)(param_2 + local_c * 4));
        goto LAB_0001103c;
      }
    }
    else {
LAB_0001103c:
      perror(*(char **)(param_2 + local_c * 4));
      local_10 = 0;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_00011118 @ 00011118 size=360 ===== */

undefined4 FUN_00011118(int param_1,uint param_2,int param_3,uint param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint local_c;
  
  if ((param_2 & 1) == 0) {
    for (local_c = 0; local_c < param_2; local_c = local_c + 2) {
      pvVar1 = memchr(DAT_000270d0,(uint)*(byte *)(param_1 + local_c),0x10);
      if (pvVar1 == (void *)0x0) {
        return 0xffffffea;
      }
      pvVar2 = memchr(DAT_000270d0,(uint)*(byte *)(param_1 + local_c + 1),0x10);
      if (pvVar2 == (void *)0x0) {
        return 0xffffffea;
      }
      if (param_4 <= local_c >> 1) {
        return 0xffffffea;
      }
      *(char *)(param_3 + (local_c >> 1)) =
           (char)pvVar1 * '\x10' + (char)DAT_000270d0 * -0x11 + (char)pvVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== FUN_00011280 @ 00011280 size=176 ===== */

undefined4 * FUN_00011280(void *param_1,size_t param_2)

{
  int iVar1;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = DAT_0002751c;
  while( true ) {
    if (DAT_00027520 <= local_c) {
      return (undefined4 *)0x0;
    }
    if ((param_2 == local_10[0x18]) &&
       (iVar1 = memcmp((void *)*local_10,param_1,param_2), iVar1 == 0)) break;
    local_c = local_c + 1;
    local_10 = local_10 + 0x19;
  }
  return local_10;
}



/* ===== FUN_00011330 @ 00011330 size=352 ===== */

void FUN_00011330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00011280(param_1,param_2);
  if (iVar1 == 0) {
    if (DAT_00027514 <= DAT_00027520) {
      DAT_00027514 = DAT_00027520 + 10;
      DAT_0002751c = realloc(DAT_0002751c,DAT_00027514 * 100);
      if (DAT_0002751c == (void *)0x0) {
        fwrite("Couldn\'t allocate salt list\n",1,0x1c,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    *(undefined4 *)((int)DAT_0002751c + DAT_00027520 * 100) = param_1;
    *(undefined4 *)((int)DAT_0002751c + DAT_00027520 * 100 + 0x60) = param_2;
    DAT_00027520 = DAT_00027520 + 1;
  }
  return;
}



/* ===== FUN_00011490 @ 00011490 size=136 ===== */

void FUN_00011490(void)

{
  if (DAT_0002751c != (void *)0x0) {
    memset(DAT_0002751c,0,DAT_00027514 * 100);
    free(DAT_0002751c);
    DAT_0002751c = (void *)0x0;
  }
  memset(&DAT_00027114,0,0x400);
  return;
}



/* ===== FUN_00011518 @ 00011518 size=36 ===== */

void FUN_00011518(void)

{
  FUN_00011490();
                    /* WARNING: Subroutine does not return */
  exit(-1);
}



/* ===== FUN_0001153c @ 0001153c size=464 ===== */

void FUN_0001153c(void)

{
  code *local_1c;
  ulong local_18;
  
  memset(&local_1c,0,0x14);
  local_1c = FUN_00011518;
  local_18 = 4;
  sigaction(1,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(2,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(3,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(8,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(4,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(7,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0xb,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(6,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0xd,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0xe,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0xf,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(10,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0xc,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x1d,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x1b,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x1f,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(5,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x1a,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x18,(sigaction *)&local_1c,(sigaction *)0x0);
  sigaction(0x19,(sigaction *)&local_1c,(sigaction *)0x0);
  return;
}



/* ===== FUN_0001170c @ 0001170c size=1028 ===== */

void FUN_0001170c(byte *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  undefined1 auStack_174 [80];
  char acStack_124 [256];
  void *local_24;
  int local_20;
  void *local_1c;
  void *local_18;
  size_t local_14;
  int local_10;
  byte *local_c;
  
  local_14 = 0;
  local_c = param_1;
  if ((param_2 & 2) == 0) {
    iVar3 = strncmp((char *)param_1,"s:",2);
    if (iVar3 == 0) {
      local_c = local_c + 2;
      local_14 = strlen((char *)local_c);
      if (0xff < (int)local_14) goto LAB_00011a6c;
      strncpy(acStack_124,(char *)local_c,0x100);
      goto LAB_00011a94;
    }
    if (*local_c != 0x2f) {
      iVar3 = strncmp((char *)local_c,"f:",2);
      if (iVar3 != 0) {
        iVar3 = strncmp((char *)local_c,"0x",2);
        if (iVar3 == 0) {
          local_c = local_c + 2;
          sVar5 = strlen((char *)local_c);
          if ((sVar5 & 1) != 0) {
LAB_00011a6c:
            fprintf(stderr,"Invalid salt: %s\n",param_1);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          while (*local_c != 0) {
            if (0xff < (int)local_14) goto LAB_00011a6c;
            bVar2 = *local_c;
            local_c = local_c + 1;
            local_18 = memchr(DAT_000270d0,(uint)bVar2,0x10);
            bVar2 = *local_c;
            local_c = local_c + 1;
            local_1c = memchr(DAT_000270d0,(uint)bVar2,0x10);
            if ((local_18 == (void *)0x0) || (local_1c == (void *)0x0)) goto LAB_00011a6c;
            pcVar1 = acStack_124 + local_14;
            local_14 = local_14 + 1;
            *pcVar1 = (char)local_18 * '\x10' + (char)DAT_000270d0 * -0x11 + (char)local_1c;
          }
        }
        else {
          iVar3 = FUN_00013450(local_c,acStack_124);
          if (iVar3 != 0) goto LAB_00011a6c;
          local_14 = 0x10;
        }
        goto LAB_00011a94;
      }
      local_c = local_c + 2;
    }
  }
  local_10 = open((char *)local_c,0x4000);
  if ((local_10 == -1) && (piVar4 = __errno_location(), *piVar4 == 0x14)) {
    local_10 = open((char *)local_c,0);
  }
  if (local_10 == -1) {
    perror((char *)local_c);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = ioctl(local_10,0x40106614,acStack_124);
  close(local_10);
  if (local_20 < 0) {
    if ((param_2 & 1) != 0) {
      return;
    }
    perror("EXT4_IOC_GET_ENCRYPTION_PWSALT");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((DAT_00027518 & 1) != 0) {
    FUN_000137b4(acStack_124,auStack_174);
    printf("%s has pw salt %s\n",local_c,auStack_174);
  }
  local_14 = 0x10;
LAB_00011a94:
  local_24 = malloc(local_14);
  if (local_24 != (void *)0x0) {
    memcpy(local_24,acStack_124,local_14);
    FUN_00011330(local_24,local_14);
    return;
  }
  fwrite("Couldn\'t allocate salt\n",1,0x17,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011b10 @ 00011b10 size=644 ===== */

void FUN_00011b10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auStack_34 [16];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((((param_2 != 4) && (param_2 != 8)) && (param_2 != 0x10)) && (param_2 != 0x20)) {
    fprintf(stderr,"Invalid padding %d\n",param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = param_5;
  do {
    if (param_3 <= local_10) {
      return;
    }
    local_14 = open(*(char **)(param_4 + local_10 * 4),0x4000);
    if (local_14 == -1) {
      perror(*(char **)(param_4 + local_10 * 4));
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar1 = param_1;
    if (param_1 == 0) {
      iVar1 = ioctl(local_14,0x40106614,auStack_34);
      if (iVar1 < 0) {
        perror("EXT4_IOC_GET_ENCRYPTION_PWSALT");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_c = FUN_00011280(auStack_34,0x10);
      iVar1 = local_c;
      if (local_c == 0) {
        fwrite("Couldn\'t find salt!?!\n",1,0x16,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    local_c = iVar1;
    local_24 = 0;
    local_23 = 1;
    local_22 = 4;
    local_21 = FUN_00010f74(param_2 >> 2);
    local_20 = *(undefined4 *)(local_c + 0x15);
    uStack_1c = *(undefined4 *)(local_c + 0x19);
    local_18 = ioctl(local_14,0x800c6613,&local_24);
    close(local_14);
    if (local_18 == 0) {
      printf("Key with descriptor [%s] applied to %s.\n",local_c + 4,
             *(undefined4 *)(param_4 + local_10 * 4));
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      printf("Error [%s] setting policy.\nThe key descriptor [%s] may not match the existing encryption context for directory [%s].\n"
             ,pcVar3,local_c + 4,*(undefined4 *)(param_4 + local_10 * 4));
    }
    local_10 = local_10 + 1;
  } while( true );
}



/* ===== FUN_00011d94 @ 00011d94 size=840 ===== */

void FUN_00011d94(char *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_9f4 [256];
  undefined1 auStack_8f4 [1024];
  undefined4 local_4f4 [19];
  undefined4 uStack_4a8;
  undefined4 local_4a4;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  undefined4 uStack_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 local_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 local_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined1 auStack_434 [1024];
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  size_t local_24;
  uint local_20;
  uint local_1c;
  
  local_24 = strlen(param_1);
  memset(&local_474,0,0x440);
  local_4f4[0x11] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4f4[0x12] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4f4[0x10] = 0;
  local_4a4 = 0;
  local_49c = 0;
  local_494 = 0;
  local_48c = 0;
  local_484 = 0;
  local_47c = 0;
  local_4f4[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4f4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_4f4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4f4[0] = 0;
  local_4f4[4] = 0;
  local_4f4[6] = 0;
  local_4f4[8] = 0;
  local_4f4[10] = 0;
  local_4f4[0xc] = 0;
  local_4f4[0xe] = 0;
  local_4f4[5] = local_4f4[1];
  local_4f4[7] = local_4f4[1];
  local_4f4[9] = local_4f4[1];
  local_4f4[0xb] = local_4f4[1];
  local_4f4[0xd] = local_4f4[1];
  local_4f4[0xf] = local_4f4[1];
  uStack_4a0 = local_4f4[0x11];
  uStack_498 = local_4f4[0x11];
  uStack_490 = local_4f4[0x11];
  uStack_488 = local_4f4[0x11];
  uStack_480 = local_4f4[0x11];
  uStack_478 = local_4f4[0x11];
  memset(auStack_9f4,0,0x500);
  local_28 = local_24 + 0x40;
  local_2c = local_24 + 0x100;
  local_30 = local_4f4;
  local_34 = local_4f4 + 0x10;
  if (0x400 < local_24) {
    printf("Passphrase size is %zd; max is %d.\n",local_24,0x400);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (0x100 < (uint)param_2[0x18]) {
    printf("Salt size is %zd; max is %d.\n",param_2[0x18],0x100);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  memcpy(auStack_9f4,(void *)*param_2,param_2[0x18]);
  memcpy(auStack_8f4,param_1,local_24);
  memcpy(auStack_434,param_1,local_24);
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
    if (local_1c == 0) {
      FUN_00015758(auStack_9f4,local_2c,local_4f4 + 0x10);
    }
    else {
      local_474 = local_4f4[0x10];
      uStack_470 = local_4f4[0x11];
      uStack_46c = local_4f4[0x12];
      uStack_468 = uStack_4a8;
      local_464 = local_4a4;
      uStack_460 = uStack_4a0;
      uStack_45c = local_49c;
      uStack_458 = uStack_498;
      local_454 = local_494;
      uStack_450 = uStack_490;
      uStack_44c = local_48c;
      uStack_448 = uStack_488;
      local_444 = local_484;
      uStack_440 = uStack_480;
      uStack_43c = local_47c;
      uStack_438 = uStack_478;
      FUN_00015758(&local_474,local_28,local_4f4 + 0x10);
    }
    for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
      local_30[local_20] = local_34[local_20] ^ local_30[local_20];
    }
  }
  puVar4 = local_4f4;
  do {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_4 = *puVar4;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    puVar4 = puVar4 + 4;
    param_4 = param_4 + 4;
  } while (puVar4 != local_4f4 + 0x10);
  return;
}



/* ===== FUN_000120dc @ 000120dc size=160 ===== */

int FUN_000120dc(tcflag_t *param_1)

{
  termios local_48;
  int local_c;
  
  local_c = 0;
  local_c = tcgetattr(0,&local_48);
  if (local_c == 0) {
    *param_1 = local_48.c_iflag;
    param_1[1] = local_48.c_oflag;
    param_1[2] = local_48.c_cflag;
    param_1[3] = local_48.c_lflag;
    param_1[4] = local_48._16_4_;
    param_1[5] = local_48.c_cc._3_4_;
    param_1[6] = local_48.c_cc._7_4_;
    param_1[7] = local_48.c_cc._11_4_;
    param_1[8] = local_48.c_cc._15_4_;
    param_1[9] = local_48.c_cc._19_4_;
    param_1[10] = local_48.c_cc._23_4_;
    param_1[0xb] = local_48.c_cc._27_4_;
    param_1[0xc] = local_48._48_4_;
    param_1[0xd] = local_48.c_ispeed;
    param_1[0xe] = local_48.c_ospeed;
    local_48.c_lflag = local_48.c_lflag & 0xfffffff7;
    local_c = tcsetattr(0,0,&local_48);
  }
  return local_c;
}



/* ===== FUN_0001217c @ 0001217c size=240 ===== */

void FUN_0001217c(char *param_1,int param_2)

{
  termios tStack_48;
  char *local_c;
  
  if (param_2 < 1) {
    __assert("len > 0","e4crypt.c",0x1d9);
  }
  FUN_000120dc(&tStack_48);
  local_c = fgets(param_1,param_2,stdin);
  tcsetattr(0,0,&tStack_48);
  putchar(10);
  if (local_c == (char *)0x0) {
    puts("Aborting.");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_c = strrchr(param_1,10);
  if (local_c == (char *)0x0) {
    local_c = param_1 + param_2 + -1;
  }
  *local_c = '\0';
  return;
}



/* ===== FUN_0001226c @ 0001226c size=260 ===== */

ulong FUN_0001226c(char *param_1)

{
  int iVar1;
  char *local_10;
  uint local_c;
  
  if (param_1 == (char *)0x0) {
    local_c = 0xfffffffd;
  }
  else {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      iVar1 = strcmp(param_1,&UNK_000159b0 + local_c * 0xc);
      if (iVar1 == 0) {
        return *(ulong *)(&DAT_000159b8 + local_c * 0xc);
      }
    }
    local_c = strtoul(param_1,&local_10,10);
    if (*local_10 == '\0') {
      iVar1 = FUN_00010e80(6,local_c,0,0);
      if (iVar1 < 0) {
        local_c = 0;
      }
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00012370 @ 00012370 size=200 ===== */

void FUN_00012370(int param_1)

{
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  int local_c;
  
  FUN_00015758(param_1 + 0x1d,0x40,auStack_4c);
  FUN_00015758(auStack_4c,0x40,auStack_8c);
  memcpy((void *)(param_1 + 0x15),auStack_8c,8);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    sprintf((char *)(param_1 + local_c * 2 + 4),"%02x",(uint)*(byte *)(param_1 + local_c + 0x15));
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



/* ===== FUN_00012438 @ 00012438 size=700 ===== */

void FUN_00012438(undefined4 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char acStack_78 [24];
  undefined4 local_60;
  undefined4 local_5c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_14 = FUN_0001226c(param_1);
  if (local_14 == 0) {
    printf("Invalid keyring [%s].\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sprintf(acStack_78,"%s%s","ext4:",param_2 + 4);
  local_18 = FUN_00010e80(10,local_14,"logon",acStack_78,0);
  if (local_18 == -1) {
    piVar1 = __errno_location();
    if (*piVar1 != 0x7e) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("keyctl_search failed: %s\n",pcVar2);
      piVar1 = __errno_location();
      if (*piVar1 == -0x16) {
        printf("Keyring [%s] is not available.\n",param_1);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_60 = 1;
    puVar5 = (undefined4 *)(param_2 + 0x1d);
    puVar7 = local_5c;
    do {
      uVar3 = puVar5[1];
      uVar4 = puVar5[2];
      uVar6 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar6;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar5 != (undefined4 *)(param_2 + 0x5d));
    local_1c = 0x40;
    if ((local_14 == -3) && (local_14 = FUN_00010e80(0,0xfffffffd,0), local_14 < 0)) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("Error getting session keyring ID: %s\n",pcVar2);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = FUN_00010f24("logon",acStack_78,&local_60,0x48,local_14);
    if (local_18 == -1) {
      piVar1 = __errno_location();
      if (*piVar1 == 0x7a) {
        puts("Error adding key to keyring; quota exceeded");
      }
      else {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("Error adding key with key descriptor [%s]: %s\n",param_2 + 4,pcVar2);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((DAT_00027518 & 2) == 0) {
      printf("Added key with descriptor [%s]\n",param_2 + 4);
    }
  }
  else if ((DAT_00027518 & 2) == 0) {
    printf("Key with descriptor [%s] already exists\n",param_2 + 4);
  }
  return;
}



/* ===== FUN_000126f4 @ 000126f4 size=188 ===== */

void FUN_000126f4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = setmntent("/etc/mtab",&DAT_00015b3c);
  while ((iVar1 != 0 && (iVar3 = getmntent(iVar1), iVar3 != 0))) {
    iVar2 = strcmp(*(char **)(iVar3 + 8),"ext4");
    if ((iVar2 == 0) && (iVar2 = access(*(char **)(iVar3 + 4),4), iVar2 == 0)) {
      FUN_0001170c(*(undefined4 *)(iVar3 + 4),1);
    }
  }
  endmntent(iVar1);
  return;
}



/* ===== FUN_000127b0 @ 000127b0 size=760 ===== */

void FUN_000127b0(int param_1,char **param_2,int param_3)

{
  int iVar1;
  uint local_1c;
  int local_18;
  int local_14;
  char *local_10;
  int local_c;
  
  local_10 = (char *)0x0;
  local_18 = 4;
  while (iVar1 = getopt(param_1,param_2,"k:S:p:vq"), iVar1 != -1) {
    switch(iVar1) {
    default:
      fprintf(stderr,"Unrecognized option: %c\n",iVar1);
    case 0x3f:
      fwrite("USAGE:\n  ",1,9,stderr);
      fputs(*(char **)(param_3 + 0xc),stderr);
                    /* WARNING: Subroutine does not return */
      exit(1);
    case 0x53:
      FUN_0001170c(optarg,0);
      break;
    case 0x6b:
      local_10 = optarg;
      break;
    case 0x70:
      local_18 = atoi(optarg);
      break;
    case 0x71:
      DAT_00027518 = DAT_00027518 | 2;
      break;
    case 0x76:
      DAT_00027518 = DAT_00027518 | 1;
    }
  }
  if (DAT_00027520 == 0) {
    FUN_000126f4();
  }
  if (DAT_00027520 == 0) {
    fwrite("No salt values available\n",1,0x19,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_00010fd4(param_1,param_2,optind);
  for (local_14 = optind; local_14 < param_1; local_14 = local_14 + 1) {
    FUN_0001170c(param_2[local_14],2);
  }
  printf("Enter passphrase (echo disabled): ");
  FUN_0001217c(&DAT_00027114,0x400);
  local_c = DAT_0002751c;
  for (local_1c = 0; local_1c < DAT_00027520; local_1c = local_1c + 1) {
    FUN_00011d94(&DAT_00027114,local_c,0xffff,local_c + 0x1d);
    FUN_00012370(local_c);
    FUN_00012438(local_10,local_c);
    local_c = local_c + 100;
  }
  if (param_1 != optind) {
    FUN_00011b10(0,local_18,param_1,param_2,optind);
  }
  FUN_00011490();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00012da0 @ 00012da0 size=716 ===== */

void FUN_00012da0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  stat sStack_88;
  undefined1 auStack_30 [4];
  byte abStack_2c [8];
  FILE *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1 < 2) {
    fwrite("Missing required argument(s).\n\n",1,0x1f,stderr);
    fwrite("USAGE:\n  ",1,9,stderr);
    fputs(*(char **)(param_3 + 0xc),stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_14 = 1;
  do {
    if (param_1 <= local_14) {
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    iVar1 = stat(*(char **)(param_2 + local_14 * 4),&sStack_88);
    if (iVar1 < 0) {
      perror(*(char **)(param_2 + local_14 * 4));
    }
    else {
      if ((sStack_88.st_mode & 0xf000) == 0x4000) {
        iVar1 = 0x4000;
      }
      else {
        iVar1 = 0;
      }
      local_1c = open(*(char **)(param_2 + local_14 * 4),iVar1);
      if (local_1c == -1) {
        perror(*(char **)(param_2 + local_14 * 4));
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = ioctl(local_1c,0x400c6615,auStack_30);
      close(local_1c);
      if (local_20 == 0) {
        printf("%s: ",*(undefined4 *)(param_2 + local_14 * 4));
        for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
          printf("%02x",(uint)abStack_2c[local_18]);
        }
        local_24 = stdout;
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar3 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar3 + 1;
          *pcVar3 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + local_14 * 4);
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        printf("Error getting policy for %s: %s\n",uVar4,pcVar3);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001306c @ 0001306c size=228 ===== */

void FUN_0001306c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (1 < param_1) {
    fwrite("Excess arguments\n\n",1,0x12,stderr);
    fputs(*(char **)(param_3 + 0xc),stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar1 = FUN_00010e80(1,0);
  if (iVar1 < 0) {
    perror("KEYCTL_JOIN_SESSION_KEYRING");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar2 = FUN_00010e80(0x12,0);
  if (iVar2 < 0) {
    perror("KEYCTL_SESSION_TO_PARENT");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  printf("Switched invoking process to new session keyring %ld\n",iVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00013150 @ 00013150 size=520 ===== */

void FUN_00013150(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *local_c;
  
  if (1 < param_1) {
    for (local_c = &DAT_000161c0; *local_c != 0; local_c = local_c + 5) {
      if (((local_c[4] & 1U) == 0) &&
         (iVar1 = strcmp((char *)*local_c,*(char **)(param_2 + 4)), iVar1 == 0)) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
          pcVar2 = stdout->_IO_write_base;
          stdout->_IO_write_base = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __fputc_unlocked(10,stdout);
        }
        fwrite("USAGE:\n  ",1,9,stdout);
        fputs((char *)local_c[3],stdout);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    printf("Unknown command: %s\n\n",*(undefined4 *)(param_2 + 4));
  }
  fwrite("Available commands:\n",1,0x14,stdout);
  for (local_c = &DAT_000161c0; *local_c != 0; local_c = local_c + 5) {
    if ((local_c[4] & 1U) == 0) {
      printf("  %-20s %s\n",*local_c,local_c[2]);
    }
  }
  puts("\nTo get more information on a command, type \'e4crypt help cmd\'");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00013358 @ 00013358 size=248 ===== */

undefined4 FUN_00013358(int param_1,int param_2)

{
  int iVar1;
  int *local_c;
  
  if (param_1 < 2) {
    FUN_00013150(param_1,param_2,&DAT_000161c0);
  }
  FUN_0001153c();
  local_c = &DAT_000161c0;
  while( true ) {
    if (*local_c == 0) {
      printf("Unknown command: %s\n\n",*(undefined4 *)(param_2 + 4));
      FUN_00013150(1,param_2,&DAT_000161c0);
      return 0;
    }
    iVar1 = strcmp((char *)*local_c,*(char **)(param_2 + 4));
    if (iVar1 == 0) break;
    local_c = local_c + 5;
  }
  (*(code *)local_c[1])(param_1 + -1,param_2 + 4,local_c);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00013450 @ 00013450 size=576 ===== */

undefined4 FUN_00013450(byte *param_1,undefined4 param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte local_24;
  byte local_23;
  undefined1 local_22;
  ulong local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined1 auStack_16 [6];
  byte *local_10;
  int local_c;
  
  sVar1 = strlen((char *)param_1);
  if (sVar1 == 0x24) {
    local_10 = param_1;
    for (local_c = 0; local_c < 0x25; local_c = local_c + 1) {
      if ((((local_c == 8) || (local_c == 0xd)) || (local_c == 0x12)) || (local_c == 0x17)) {
        if (*local_10 != 0x2d) {
          return 0xffffffff;
        }
      }
      else if (((local_c != 0x24) || (*local_10 != 0)) &&
              ((*(ushort *)(__ctype_b + (uint)*local_10 * 2) & 0x10) == 0)) {
        return 0xffffffff;
      }
      local_10 = local_10 + 1;
    }
    local_20 = strtoul((char *)param_1,(char **)0x0,0x10);
    uVar2 = strtoul((char *)(param_1 + 9),(char **)0x0,0x10);
    local_1c = (undefined2)uVar2;
    uVar2 = strtoul((char *)(param_1 + 0xe),(char **)0x0,0x10);
    local_1a = (undefined2)uVar2;
    uVar2 = strtoul((char *)(param_1 + 0x13),(char **)0x0,0x10);
    local_18 = (undefined2)uVar2;
    local_10 = param_1 + 0x18;
    local_22 = 0;
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      pbVar3 = local_10 + 1;
      local_24 = *local_10;
      local_10 = local_10 + 2;
      local_23 = *pbVar3;
      uVar2 = strtoul((char *)&local_24,(char **)0x0,0x10);
      auStack_16[local_c] = (char)uVar2;
    }
    FUN_000137f0(&local_20,param_2);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_00013690 @ 00013690 size=172 ===== */

void FUN_00013690(undefined4 param_1,char *param_2,char *param_3)

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
  
  FUN_00013970(param_1,&local_30);
  sprintf(param_2,param_3,local_30,(uint)local_2c,(uint)local_2a,(uint)(local_28 >> 8),
          local_28 & 0xff,(uint)local_26,(uint)local_25,(uint)local_24,(uint)local_23,(uint)local_22
          ,(uint)local_21);
  return;
}



/* ===== FUN_0001373c @ 0001373c size=60 ===== */

void FUN_0001373c(undefined4 param_1,undefined4 param_2)

{
  FUN_00013690(param_1,param_2,DAT_000270d4);
  return;
}



/* ===== FUN_00013778 @ 00013778 size=60 ===== */

void FUN_00013778(undefined4 param_1,undefined4 param_2)

{
  FUN_00013690(param_1,param_2,DAT_000270d8);
  return;
}



/* ===== FUN_000137b4 @ 000137b4 size=60 ===== */

void FUN_000137b4(undefined4 param_1,undefined4 param_2)

{
  FUN_00013690(param_1,param_2,DAT_000270d4);
  return;
}



/* ===== FUN_000137f0 @ 000137f0 size=384 ===== */

void FUN_000137f0(undefined4 *param_1,undefined1 *param_2)

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



/* ===== FUN_00013970 @ 00013970 size=396 ===== */

void FUN_00013970(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *(ushort *)(param_2 + 1) = CONCAT11(param_1[4],param_1[5]);
  *(ushort *)((int)param_2 + 6) = CONCAT11(param_1[6],param_1[7]);
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[8],param_1[9]);
  memcpy((void *)((int)param_2 + 10),param_1 + 10,6);
  return;
}



/* ===== FUN_00013b00 @ 00013b00 size=5624 ===== */

void FUN_00013b00(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_2f8 [181];
  int local_24;
  
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    puVar15 = (uint *)(param_1 + (local_24 + 1) * 8);
    uVar5 = puVar15[1];
    local_2f8[local_24 * 2 + 0xa0] = *puVar15;
    local_2f8[local_24 * 2 + 0xa1] = uVar5;
  }
  for (local_24 = 0; local_24 < 0x10; local_24 = local_24 + 1) {
    bVar1 = *(byte *)(param_2 + local_24 * 8);
    bVar2 = *(byte *)(param_2 + local_24 * 8 + 1);
    bVar3 = *(byte *)(param_2 + local_24 * 8 + 2);
    bVar4 = *(byte *)(param_2 + local_24 * 8 + 3);
    local_2f8[local_24 * 2] =
         (uint)*(byte *)(param_2 + local_24 * 8 + 4) << 0x18 |
         (uint)*(byte *)(param_2 + local_24 * 8 + 5) << 0x10 |
         (uint)*(byte *)(param_2 + local_24 * 8 + 6) << 8 |
         (uint)*(byte *)(param_2 + local_24 * 8 + 7);
    local_2f8[local_24 * 2 + 1] =
         (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
  }
  for (local_24 = 0x10; local_24 < 0x50; local_24 = local_24 + 1) {
    uVar19 = local_2f8[(local_24 + -2) * 2];
    uVar18 = local_2f8[(local_24 + -2) * 2 + 1];
    uVar20 = local_2f8[(local_24 + -2) * 2];
    uVar25 = local_2f8[(local_24 + -2) * 2 + 1];
    uVar8 = local_2f8[(local_24 + -2) * 2 + 1];
    uVar5 = (uVar18 << 0xd | uVar19 >> 0x13) ^ (uVar25 >> 0x1d | uVar20 << 3) ^
            (local_2f8[(local_24 + -2) * 2] >> 6 | uVar8 << 0x1a);
    uVar17 = local_2f8[(local_24 + -7) * 2];
    uVar9 = local_2f8[(local_24 + -7) * 2 + 1];
    uVar16 = uVar5 + uVar17;
    uVar21 = local_2f8[(local_24 + -0xf) * 2];
    uVar10 = local_2f8[(local_24 + -0xf) * 2 + 1];
    uVar22 = local_2f8[(local_24 + -0xf) * 2];
    uVar11 = local_2f8[(local_24 + -0xf) * 2 + 1];
    uVar12 = local_2f8[(local_24 + -0xf) * 2 + 1];
    uVar23 = (local_2f8[(local_24 + -0xf) * 2] >> 7 | uVar12 << 0x19) ^
             (uVar10 << 0x1f | uVar21 >> 1) ^ (uVar11 << 0x18 | uVar22 >> 8);
    uVar6 = uVar16 + uVar23;
    uVar24 = local_2f8[(local_24 + -0x10) * 2];
    uVar13 = local_2f8[(local_24 + -0x10) * 2 + 1];
    local_2f8[local_24 * 2] = uVar6 + uVar24;
    local_2f8[local_24 * 2 + 1] =
         ((uVar19 << 0xd | uVar18 >> 0x13) ^ (uVar20 >> 0x1d | uVar25 << 3) ^ uVar8 >> 6) + uVar9 +
         (uint)CARRY4(uVar5,uVar17) +
         (uVar12 >> 7 ^ (uVar21 << 0x1f | uVar10 >> 1) ^ (uVar22 << 0x18 | uVar11 >> 8)) +
         (uint)CARRY4(uVar16,uVar23) + uVar13 + (uint)CARRY4(uVar6,uVar24);
  }
  for (local_24 = 0; local_24 < 0x50; local_24 = local_24 + 8) {
    uVar6 = (local_2f8[0xa9] >> 9 | local_2f8[0xa8] << 0x17) ^
            (local_2f8[0xa9] << 0x12 | local_2f8[0xa8] >> 0xe) ^
            (local_2f8[0xa9] << 0xe | local_2f8[0xa8] >> 0x12);
    uVar21 = local_2f8[0xae] + uVar6;
    uVar19 = (local_2f8[0xac] ^ local_2f8[0xaa]) & local_2f8[0xa8] ^ local_2f8[0xac];
    uVar17 = uVar21 + uVar19;
    uVar5 = uVar17 + *(uint *)(&DAT_00016330 + local_24 * 8);
    uVar20 = local_2f8[local_24 * 2] + uVar5;
    iVar14 = local_2f8[local_24 * 2 + 1] +
             local_2f8[0xaf] +
             ((local_2f8[0xa8] >> 9 | local_2f8[0xa9] << 0x17) ^
             (local_2f8[0xa8] << 0x12 | local_2f8[0xa9] >> 0xe) ^
             (local_2f8[0xa8] << 0xe | local_2f8[0xa9] >> 0x12)) +
             (uint)CARRY4(local_2f8[0xae],uVar6) +
             ((local_2f8[0xad] ^ local_2f8[0xab]) & local_2f8[0xa9] ^ local_2f8[0xad]) +
             (uint)CARRY4(uVar21,uVar19) + *(int *)(&DAT_00016334 + local_24 * 8) +
             (uint)CARRY4(uVar17,*(uint *)(&DAT_00016330 + local_24 * 8)) +
             (uint)CARRY4(local_2f8[local_24 * 2],uVar5);
    uVar6 = (local_2f8[0xa1] >> 7 | local_2f8[0xa0] << 0x19) ^
            (local_2f8[0xa1] << 4 | local_2f8[0xa0] >> 0x1c) ^
            (local_2f8[0xa1] >> 2 | local_2f8[0xa0] << 0x1e);
    uVar5 = local_2f8[0xa2] & local_2f8[0xa0] |
            (local_2f8[0xa0] | local_2f8[0xa2]) & local_2f8[0xa4];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar17 = uVar20 + local_2f8[0xa6];
    local_2f8[0xa7] = iVar14 + local_2f8[0xa7] + (uint)CARRY4(uVar20,local_2f8[0xa6]);
    local_2f8[0xa6] = uVar17;
    local_2f8[0xae] = local_2f8[0xb0] + uVar20;
    local_2f8[0xaf] =
         (local_2f8[0xa3] & local_2f8[0xa1] | (local_2f8[0xa1] | local_2f8[0xa3]) & local_2f8[0xa5])
         + ((local_2f8[0xa0] >> 7 | local_2f8[0xa1] << 0x19) ^
           (local_2f8[0xa0] << 4 | local_2f8[0xa1] >> 0x1c) ^
           (local_2f8[0xa0] >> 2 | local_2f8[0xa1] << 0x1e)) + (uint)CARRY4(uVar5,uVar6) + iVar14 +
         (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xa7] >> 9 | uVar17 * 0x800000) ^
            (local_2f8[0xa7] * 0x40000 | uVar17 >> 0xe) ^
            (local_2f8[0xa7] * 0x4000 | uVar17 >> 0x12);
    uVar22 = local_2f8[0xac] + uVar6;
    uVar19 = (local_2f8[0xaa] ^ local_2f8[0xa8]) & uVar17 ^ local_2f8[0xaa];
    uVar21 = uVar22 + uVar19;
    iVar14 = (local_24 + 1) * 8;
    uVar5 = uVar21 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 1) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 1) * 2 + 1] +
             local_2f8[0xad] +
             ((uVar17 >> 9 | local_2f8[0xa7] * 0x800000) ^
             (uVar17 * 0x40000 | local_2f8[0xa7] >> 0xe) ^
             (uVar17 * 0x4000 | local_2f8[0xa7] >> 0x12)) + (uint)CARRY4(local_2f8[0xac],uVar6) +
             ((local_2f8[0xab] ^ local_2f8[0xa9]) & local_2f8[0xa7] ^ local_2f8[0xab]) +
             (uint)CARRY4(uVar22,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar21,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 1) * 2],uVar5);
    uVar6 = (local_2f8[0xaf] >> 7 | local_2f8[0xae] * 0x2000000) ^
            (local_2f8[0xaf] * 0x10 | local_2f8[0xae] >> 0x1c) ^
            (local_2f8[0xaf] >> 2 | local_2f8[0xae] * 0x40000000);
    uVar5 = local_2f8[0xa0] & local_2f8[0xae] |
            (local_2f8[0xae] | local_2f8[0xa0]) & local_2f8[0xa2];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar21 = uVar20 + local_2f8[0xa4];
    local_2f8[0xa5] = iVar14 + local_2f8[0xa5] + (uint)CARRY4(uVar20,local_2f8[0xa4]);
    local_2f8[0xa4] = uVar21;
    local_2f8[0xac] = local_2f8[0xb0] + uVar20;
    local_2f8[0xad] =
         (local_2f8[0xa1] & local_2f8[0xaf] | (local_2f8[0xaf] | local_2f8[0xa1]) & local_2f8[0xa3])
         + ((local_2f8[0xae] >> 7 | local_2f8[0xaf] * 0x2000000) ^
           (local_2f8[0xae] * 0x10 | local_2f8[0xaf] >> 0x1c) ^
           (local_2f8[0xae] >> 2 | local_2f8[0xaf] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xa5] >> 9 | uVar21 * 0x800000) ^
            (local_2f8[0xa5] * 0x40000 | uVar21 >> 0xe) ^
            (local_2f8[0xa5] * 0x4000 | uVar21 >> 0x12);
    uVar23 = local_2f8[0xaa] + uVar6;
    uVar19 = (local_2f8[0xa8] ^ uVar17) & uVar21 ^ local_2f8[0xa8];
    uVar22 = uVar23 + uVar19;
    iVar14 = (local_24 + 2) * 8;
    uVar5 = uVar22 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 2) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 2) * 2 + 1] +
             local_2f8[0xab] +
             ((uVar21 >> 9 | local_2f8[0xa5] * 0x800000) ^
             (uVar21 * 0x40000 | local_2f8[0xa5] >> 0xe) ^
             (uVar21 * 0x4000 | local_2f8[0xa5] >> 0x12)) + (uint)CARRY4(local_2f8[0xaa],uVar6) +
             ((local_2f8[0xa9] ^ local_2f8[0xa7]) & local_2f8[0xa5] ^ local_2f8[0xa9]) +
             (uint)CARRY4(uVar23,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar22,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 2) * 2],uVar5);
    uVar6 = (local_2f8[0xad] >> 7 | local_2f8[0xac] * 0x2000000) ^
            (local_2f8[0xad] * 0x10 | local_2f8[0xac] >> 0x1c) ^
            (local_2f8[0xad] >> 2 | local_2f8[0xac] * 0x40000000);
    uVar5 = local_2f8[0xae] & local_2f8[0xac] |
            (local_2f8[0xac] | local_2f8[0xae]) & local_2f8[0xa0];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar22 = uVar20 + local_2f8[0xa2];
    local_2f8[0xa3] = iVar14 + local_2f8[0xa3] + (uint)CARRY4(uVar20,local_2f8[0xa2]);
    local_2f8[0xa2] = uVar22;
    local_2f8[0xaa] = local_2f8[0xb0] + uVar20;
    local_2f8[0xab] =
         (local_2f8[0xaf] & local_2f8[0xad] | (local_2f8[0xad] | local_2f8[0xaf]) & local_2f8[0xa1])
         + ((local_2f8[0xac] >> 7 | local_2f8[0xad] * 0x2000000) ^
           (local_2f8[0xac] * 0x10 | local_2f8[0xad] >> 0x1c) ^
           (local_2f8[0xac] >> 2 | local_2f8[0xad] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xa3] >> 9 | uVar22 * 0x800000) ^
            (local_2f8[0xa3] * 0x40000 | uVar22 >> 0xe) ^
            (local_2f8[0xa3] * 0x4000 | uVar22 >> 0x12);
    uVar24 = local_2f8[0xa8] + uVar6;
    uVar19 = (uVar17 ^ uVar21) & uVar22 ^ uVar17;
    uVar23 = uVar24 + uVar19;
    iVar14 = (local_24 + 3) * 8;
    uVar5 = uVar23 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 3) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 3) * 2 + 1] +
             local_2f8[0xa9] +
             ((uVar22 >> 9 | local_2f8[0xa3] * 0x800000) ^
             (uVar22 * 0x40000 | local_2f8[0xa3] >> 0xe) ^
             (uVar22 * 0x4000 | local_2f8[0xa3] >> 0x12)) + (uint)CARRY4(local_2f8[0xa8],uVar6) +
             ((local_2f8[0xa7] ^ local_2f8[0xa5]) & local_2f8[0xa3] ^ local_2f8[0xa7]) +
             (uint)CARRY4(uVar24,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar23,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 3) * 2],uVar5);
    uVar6 = (local_2f8[0xab] >> 7 | local_2f8[0xaa] * 0x2000000) ^
            (local_2f8[0xab] * 0x10 | local_2f8[0xaa] >> 0x1c) ^
            (local_2f8[0xab] >> 2 | local_2f8[0xaa] * 0x40000000);
    uVar5 = local_2f8[0xac] & local_2f8[0xaa] |
            (local_2f8[0xaa] | local_2f8[0xac]) & local_2f8[0xae];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar23 = uVar20 + local_2f8[0xa0];
    local_2f8[0xa1] = iVar14 + local_2f8[0xa1] + (uint)CARRY4(uVar20,local_2f8[0xa0]);
    local_2f8[0xa0] = uVar23;
    uVar24 = local_2f8[0xb0] + uVar20;
    local_2f8[0xa9] =
         (local_2f8[0xad] & local_2f8[0xab] | (local_2f8[0xab] | local_2f8[0xad]) & local_2f8[0xaf])
         + ((local_2f8[0xaa] >> 7 | local_2f8[0xab] * 0x2000000) ^
           (local_2f8[0xaa] * 0x10 | local_2f8[0xab] >> 0x1c) ^
           (local_2f8[0xaa] >> 2 | local_2f8[0xab] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    local_2f8[0xa8] = uVar24;
    uVar6 = (local_2f8[0xa1] >> 9 | uVar23 * 0x800000) ^
            (local_2f8[0xa1] * 0x40000 | uVar23 >> 0xe) ^
            (local_2f8[0xa1] * 0x4000 | uVar23 >> 0x12);
    uVar25 = uVar17 + uVar6;
    uVar19 = (uVar21 ^ uVar22) & uVar23 ^ uVar21;
    uVar18 = uVar25 + uVar19;
    iVar14 = (local_24 + 4) * 8;
    uVar5 = uVar18 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 4) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 4) * 2 + 1] +
             local_2f8[0xa7] +
             ((uVar23 >> 9 | local_2f8[0xa1] * 0x800000) ^
             (uVar23 * 0x40000 | local_2f8[0xa1] >> 0xe) ^
             (uVar23 * 0x4000 | local_2f8[0xa1] >> 0x12)) + (uint)CARRY4(uVar17,uVar6) +
             ((local_2f8[0xa5] ^ local_2f8[0xa3]) & local_2f8[0xa1] ^ local_2f8[0xa5]) +
             (uint)CARRY4(uVar25,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar18,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 4) * 2],uVar5);
    uVar6 = (local_2f8[0xa9] >> 7 | uVar24 * 0x2000000) ^
            (local_2f8[0xa9] * 0x10 | uVar24 >> 0x1c) ^ (local_2f8[0xa9] >> 2 | uVar24 * 0x40000000)
    ;
    uVar5 = local_2f8[0xaa] & uVar24 | (uVar24 | local_2f8[0xaa]) & local_2f8[0xac];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar17 = uVar20 + local_2f8[0xae];
    local_2f8[0xaf] = iVar14 + local_2f8[0xaf] + (uint)CARRY4(uVar20,local_2f8[0xae]);
    local_2f8[0xae] = uVar17;
    local_2f8[0xa6] = local_2f8[0xb0] + uVar20;
    local_2f8[0xa7] =
         (local_2f8[0xab] & local_2f8[0xa9] | (local_2f8[0xa9] | local_2f8[0xab]) & local_2f8[0xad])
         + ((uVar24 >> 7 | local_2f8[0xa9] * 0x2000000) ^
           (uVar24 * 0x10 | local_2f8[0xa9] >> 0x1c) ^ (uVar24 >> 2 | local_2f8[0xa9] * 0x40000000))
         + (uint)CARRY4(uVar5,uVar6) + iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xaf] >> 9 | uVar17 * 0x800000) ^
            (local_2f8[0xaf] * 0x40000 | uVar17 >> 0xe) ^
            (local_2f8[0xaf] * 0x4000 | uVar17 >> 0x12);
    uVar25 = uVar21 + uVar6;
    uVar19 = (uVar22 ^ uVar23) & uVar17 ^ uVar22;
    uVar18 = uVar25 + uVar19;
    iVar14 = (local_24 + 5) * 8;
    uVar5 = uVar18 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 5) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 5) * 2 + 1] +
             local_2f8[0xa5] +
             ((uVar17 >> 9 | local_2f8[0xaf] * 0x800000) ^
             (uVar17 * 0x40000 | local_2f8[0xaf] >> 0xe) ^
             (uVar17 * 0x4000 | local_2f8[0xaf] >> 0x12)) + (uint)CARRY4(uVar21,uVar6) +
             ((local_2f8[0xa3] ^ local_2f8[0xa1]) & local_2f8[0xaf] ^ local_2f8[0xa3]) +
             (uint)CARRY4(uVar25,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar18,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 5) * 2],uVar5);
    uVar6 = (local_2f8[0xa7] >> 7 | local_2f8[0xa6] * 0x2000000) ^
            (local_2f8[0xa7] * 0x10 | local_2f8[0xa6] >> 0x1c) ^
            (local_2f8[0xa7] >> 2 | local_2f8[0xa6] * 0x40000000);
    uVar5 = uVar24 & local_2f8[0xa6] | (local_2f8[0xa6] | uVar24) & local_2f8[0xaa];
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar21 = uVar20 + local_2f8[0xac];
    local_2f8[0xad] = iVar14 + local_2f8[0xad] + (uint)CARRY4(uVar20,local_2f8[0xac]);
    local_2f8[0xac] = uVar21;
    local_2f8[0xa4] = local_2f8[0xb0] + uVar20;
    local_2f8[0xa5] =
         (local_2f8[0xa9] & local_2f8[0xa7] | (local_2f8[0xa7] | local_2f8[0xa9]) & local_2f8[0xab])
         + ((local_2f8[0xa6] >> 7 | local_2f8[0xa7] * 0x2000000) ^
           (local_2f8[0xa6] * 0x10 | local_2f8[0xa7] >> 0x1c) ^
           (local_2f8[0xa6] >> 2 | local_2f8[0xa7] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xad] >> 9 | uVar21 * 0x800000) ^
            (local_2f8[0xad] * 0x40000 | uVar21 >> 0xe) ^
            (local_2f8[0xad] * 0x4000 | uVar21 >> 0x12);
    uVar25 = uVar22 + uVar6;
    uVar19 = (uVar23 ^ uVar17) & uVar21 ^ uVar23;
    uVar18 = uVar25 + uVar19;
    iVar14 = (local_24 + 6) * 8;
    uVar5 = uVar18 + *(uint *)(&DAT_00016330 + iVar14);
    uVar20 = local_2f8[(local_24 + 6) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 6) * 2 + 1] +
             local_2f8[0xa3] +
             ((uVar21 >> 9 | local_2f8[0xad] * 0x800000) ^
             (uVar21 * 0x40000 | local_2f8[0xad] >> 0xe) ^
             (uVar21 * 0x4000 | local_2f8[0xad] >> 0x12)) + (uint)CARRY4(uVar22,uVar6) +
             ((local_2f8[0xa1] ^ local_2f8[0xaf]) & local_2f8[0xad] ^ local_2f8[0xa1]) +
             (uint)CARRY4(uVar25,uVar19) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar18,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 6) * 2],uVar5);
    uVar6 = (local_2f8[0xa5] >> 7 | local_2f8[0xa4] * 0x2000000) ^
            (local_2f8[0xa5] * 0x10 | local_2f8[0xa4] >> 0x1c) ^
            (local_2f8[0xa5] >> 2 | local_2f8[0xa4] * 0x40000000);
    uVar5 = local_2f8[0xa6] & local_2f8[0xa4] | (local_2f8[0xa4] | local_2f8[0xa6]) & uVar24;
    local_2f8[0xb0] = uVar5 + uVar6;
    uVar22 = uVar20 + local_2f8[0xaa];
    local_2f8[0xab] = iVar14 + local_2f8[0xab] + (uint)CARRY4(uVar20,local_2f8[0xaa]);
    local_2f8[0xaa] = uVar22;
    local_2f8[0xa2] = local_2f8[0xb0] + uVar20;
    local_2f8[0xa3] =
         (local_2f8[0xa7] & local_2f8[0xa5] | (local_2f8[0xa5] | local_2f8[0xa7]) & local_2f8[0xa9])
         + ((local_2f8[0xa4] >> 7 | local_2f8[0xa5] * 0x2000000) ^
           (local_2f8[0xa4] * 0x10 | local_2f8[0xa5] >> 0x1c) ^
           (local_2f8[0xa4] >> 2 | local_2f8[0xa5] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar20);
    uVar6 = (local_2f8[0xab] >> 9 | uVar22 * 0x800000) ^
            (local_2f8[0xab] * 0x40000 | uVar22 >> 0xe) ^
            (local_2f8[0xab] * 0x4000 | uVar22 >> 0x12);
    uVar18 = uVar23 + uVar6;
    uVar17 = (uVar17 ^ uVar21) & uVar22 ^ uVar17;
    uVar20 = uVar18 + uVar17;
    iVar14 = (local_24 + 7) * 8;
    uVar5 = uVar20 + *(uint *)(&DAT_00016330 + iVar14);
    uVar19 = local_2f8[(local_24 + 7) * 2] + uVar5;
    iVar14 = local_2f8[(local_24 + 7) * 2 + 1] +
             local_2f8[0xa1] +
             ((uVar22 >> 9 | local_2f8[0xab] * 0x800000) ^
             (uVar22 * 0x40000 | local_2f8[0xab] >> 0xe) ^
             (uVar22 * 0x4000 | local_2f8[0xab] >> 0x12)) + (uint)CARRY4(uVar23,uVar6) +
             ((local_2f8[0xaf] ^ local_2f8[0xad]) & local_2f8[0xab] ^ local_2f8[0xaf]) +
             (uint)CARRY4(uVar18,uVar17) + *(int *)(&DAT_00016334 + iVar14) +
             (uint)CARRY4(uVar20,*(uint *)(&DAT_00016330 + iVar14)) +
             (uint)CARRY4(local_2f8[(local_24 + 7) * 2],uVar5);
    uVar6 = (local_2f8[0xa3] >> 7 | local_2f8[0xa2] * 0x2000000) ^
            (local_2f8[0xa3] * 0x10 | local_2f8[0xa2] >> 0x1c) ^
            (local_2f8[0xa3] >> 2 | local_2f8[0xa2] * 0x40000000);
    uVar5 = local_2f8[0xa4] & local_2f8[0xa2] |
            (local_2f8[0xa2] | local_2f8[0xa4]) & local_2f8[0xa6];
    local_2f8[0xb0] = uVar5 + uVar6;
    local_2f8[0xa8] = uVar19 + uVar24;
    local_2f8[0xa9] = iVar14 + local_2f8[0xa9] + (uint)CARRY4(uVar19,uVar24);
    local_2f8[0xa0] = local_2f8[0xb0] + uVar19;
    local_2f8[0xa1] =
         (local_2f8[0xa5] & local_2f8[0xa3] | (local_2f8[0xa3] | local_2f8[0xa5]) & local_2f8[0xa7])
         + ((local_2f8[0xa2] >> 7 | local_2f8[0xa3] * 0x2000000) ^
           (local_2f8[0xa2] * 0x10 | local_2f8[0xa3] >> 0x1c) ^
           (local_2f8[0xa2] >> 2 | local_2f8[0xa3] * 0x40000000)) + (uint)CARRY4(uVar5,uVar6) +
         iVar14 + (uint)CARRY4(local_2f8[0xb0],uVar19);
  }
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    puVar15 = (uint *)(param_1 + (local_24 + 1) * 8);
    uVar5 = *puVar15;
    uVar6 = puVar15[1];
    uVar19 = local_2f8[local_24 * 2 + 0xa0];
    uVar20 = local_2f8[local_24 * 2 + 0xa1];
    piVar7 = (int *)(param_1 + (local_24 + 1) * 8);
    *piVar7 = uVar19 + uVar5;
    piVar7[1] = uVar20 + uVar6 + (uint)CARRY4(uVar19,uVar5);
  }
  return;
}



/* ===== FUN_000150f8 @ 000150f8 size=184 ===== */

void FUN_000150f8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  uVar1 = DAT_000151b4;
  *(undefined4 *)(param_1 + 1) = DAT_000151b0;
  *(undefined4 *)((int)param_1 + 0xc) = uVar1;
  uVar1 = DAT_000151bc;
  *(undefined4 *)(param_1 + 2) = DAT_000151b8;
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  uVar1 = DAT_000151c4;
  *(undefined4 *)(param_1 + 3) = DAT_000151c0;
  *(undefined4 *)((int)param_1 + 0x1c) = uVar1;
  uVar1 = DAT_000151cc;
  *(undefined4 *)(param_1 + 4) = DAT_000151c8;
  *(undefined4 *)((int)param_1 + 0x24) = uVar1;
  uVar1 = DAT_000151d4;
  *(undefined4 *)(param_1 + 5) = DAT_000151d0;
  *(undefined4 *)((int)param_1 + 0x2c) = uVar1;
  uVar1 = DAT_000151dc;
  *(undefined4 *)(param_1 + 6) = DAT_000151d8;
  *(undefined4 *)((int)param_1 + 0x34) = uVar1;
  uVar1 = DAT_000151e4;
  *(undefined4 *)(param_1 + 7) = DAT_000151e0;
  *(undefined4 *)((int)param_1 + 0x3c) = uVar1;
  uVar1 = DAT_000151ec;
  *(undefined4 *)(param_1 + 8) = DAT_000151e8;
  *(undefined4 *)((int)param_1 + 0x44) = uVar1;
  return;
}



/* ===== FUN_000151f0 @ 000151f0 size=1044 ===== */

void FUN_000151f0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int local_c;
  
  uVar1 = *param_1;
  uVar2 = VectorShiftRight(CONCAT44(param_1[0x12] << 3,param_1[0x12] << 3),0x20);
  *param_1 = (uint)uVar2 + uVar1;
  param_1[1] = (int)((ulonglong)uVar2 >> 0x20) + param_1[1] + (uint)CARRY4((uint)uVar2,uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 + 1;
  *(undefined1 *)((int)param_1 + uVar1 + 0x4c) = 0x80;
  if (0x70 < param_1[0x12]) {
    while (param_1[0x12] < 0x80) {
      uVar1 = param_1[0x12];
      param_1[0x12] = uVar1 + 1;
      *(undefined1 *)((int)param_1 + uVar1 + 0x4c) = 0;
    }
    FUN_00013b00(param_1,param_1 + 0x13);
    param_1[0x12] = 0;
  }
  while (param_1[0x12] < 0x78) {
    uVar1 = param_1[0x12];
    param_1[0x12] = uVar1 + 1;
    *(undefined1 *)((int)param_1 + uVar1 + 0x4c) = 0;
  }
  *(char *)(param_1 + 0x31) = (char)(param_1[1] >> 0x18);
  *(char *)((int)param_1 + 0xc5) = (char)(param_1[1] >> 0x10);
  *(char *)((int)param_1 + 0xc6) = (char)(param_1[1] >> 8);
  *(char *)((int)param_1 + 199) = (char)param_1[1];
  *(char *)(param_1 + 0x32) = (char)(*param_1 >> 0x18);
  *(char *)((int)param_1 + 0xc9) = (char)(*param_1 >> 0x10);
  *(char *)((int)param_1 + 0xca) = (char)(*param_1 >> 8);
  *(char *)((int)param_1 + 0xcb) = (char)*param_1;
  FUN_00013b00(param_1,param_1 + 0x13);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(char *)(param_2 + local_c * 8) = (char)(param_1[(local_c + 1) * 2 + 1] >> 0x18);
    *(char *)(param_2 + local_c * 8 + 1) = (char)(param_1[(local_c + 1) * 2 + 1] >> 0x10);
    *(char *)(param_2 + local_c * 8 + 2) = (char)(param_1[(local_c + 1) * 2 + 1] >> 8);
    *(char *)(param_2 + local_c * 8 + 3) = (char)param_1[(local_c + 1) * 2 + 1];
    *(char *)(param_2 + local_c * 8 + 4) = (char)(param_1[(local_c + 1) * 2] >> 0x18);
    *(char *)(param_2 + local_c * 8 + 5) = (char)(param_1[(local_c + 1) * 2] >> 0x10);
    *(char *)(param_2 + local_c * 8 + 6) = (char)(param_1[(local_c + 1) * 2] >> 8);
    *(char *)(param_2 + local_c * 8 + 7) = (char)param_1[(local_c + 1) * 2];
  }
  return;
}



/* ===== FUN_00015604 @ 00015604 size=340 ===== */

void FUN_00015604(uint *param_1,void *param_2,uint param_3)

{
  size_t __n;
  uint uVar1;
  uint local_1c;
  void *local_18;
  
  local_1c = param_3;
  local_18 = param_2;
  while (local_1c != 0) {
    if ((param_1[0x12] == 0) && (0x7f < local_1c)) {
      FUN_00013b00(param_1,local_18);
      uVar1 = *param_1;
      *param_1 = uVar1 + 0x400;
      param_1[1] = param_1[1] + (uint)(0xfffffbff < uVar1);
      local_18 = (void *)((int)local_18 + 0x80);
      local_1c = local_1c - 0x80;
    }
    else {
      __n = local_1c;
      if (0x80 - param_1[0x12] <= local_1c) {
        __n = 0x80 - param_1[0x12];
      }
      memcpy((void *)((int)param_1 + param_1[0x12] + 0x4c),local_18,__n);
      param_1[0x12] = param_1[0x12] + __n;
      local_18 = (void *)((int)local_18 + __n);
      local_1c = local_1c - __n;
      if (param_1[0x12] == 0x80) {
        FUN_00013b00(param_1,param_1 + 0x13);
        uVar1 = *param_1;
        *param_1 = uVar1 + 0x400;
        param_1[1] = param_1[1] + (uint)(0xfffffbff < uVar1);
        param_1[0x12] = 0;
      }
    }
  }
  return;
}



/* ===== FUN_00015758 @ 00015758 size=84 ===== */

void FUN_00015758(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_d8 [208];
  
  FUN_000150f8(auStack_d8);
  FUN_00015604(auStack_d8,param_1,param_2);
  FUN_000151f0(auStack_d8,param_3);
  return;
}



/* ===== _DT_FINI @ 000157ac size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00028000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00028004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00028008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 00028024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00028028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


