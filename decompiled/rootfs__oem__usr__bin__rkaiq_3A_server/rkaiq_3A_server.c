// rkaiq_3A_server — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010ca4 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010cc8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002400c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010cd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00024010)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024014)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024018)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002401c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00010d04 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00024020)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00010d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00024024)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 00010d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_00024028)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd @ 00010d28 size=12 ===== */

void rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd_0002402c)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 00010d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00024030)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00010d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00024038)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002403c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::setlinebuf @ 00010d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00024044)(__stream);
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00024048)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002404c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00010d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00024050)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00024054)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 00010dac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00024058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002405c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00010dc4 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_00024060)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00010dd0 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_00024064)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00010ddc size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00024068)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010de8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002406c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024074)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00010e0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00024078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 00010e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002407c)(__status);
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00010e24 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00024080)();
  return;
}



/* ===== <EXTERNAL>::open64 @ 00010e30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00024084)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010e3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00024088)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010e48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002408c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00024090)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00024094)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010e6c size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00024098)();
  return;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00010e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002409c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::strdup @ 00010e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000240a0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::puts @ 00010e90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000240a4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00010e9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_000240a8)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010ea8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000240ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010eb4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000240b0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000240b4)(__th);
  return iVar1;
}



/* ===== entry @ 00010ecc size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024040)
            (DAT_00010f00,param_2,&stack0x00000004,DAT_00010f04,DAT_00010efc,param_1);
  return;
}



/* ===== FUN_00010f08 @ 00010f08 size=32 ===== */

void FUN_00010f08(void)

{
  if (DAT_00010f2c == DAT_00010f28) {
    return;
  }
  if (DAT_00010f30 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f30)();
  return;
}



/* ===== _FINI_0 @ 00010f6c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010fa8;
  if (*DAT_00010fa8 != '\0') {
    return;
  }
  FUN_00010f08();
  if (DAT_00010fac != 0) {
    __deregister_frame_info(DAT_00010fb0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010fb4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010fd8 != 0) {
    __register_frame_info(DAT_00010fe0,DAT_00010fdc);
  }
  if ((DAT_00010f64 - DAT_00010f60 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f68 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f68)();
  return;
}



/* ===== FUN_00010fe4 @ 00010fe4 size=180 ===== */

undefined4 FUN_00010fe4(undefined4 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  char *__src;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_00011098 + 0x11000;
  sVar1 = strlen(param_2);
  iVar2 = FUN_00011c6c(param_1,param_2,sVar1);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    __src = (char *)FUN_00011e08();
    if (__src == (char *)0x0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000110a0),(char *)(DAT_000110a4 + 0x1106c),
              param_2);
      uVar4 = 0xffffffff;
    }
    else {
      strncpy(param_3,__src,0x40);
      if (*(int *)(DAT_0001109c + 0x11040) == 0) {
        printf((char *)(DAT_000110a8 + 0x1108c),param_2,param_3);
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ===== FUN_000110ac @ 000110ac size=68 ===== */

int FUN_000110ac(int param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = ioctl(param_1,param_2,param_3);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return -1;
}



/* ===== FUN_000110f0 @ 000110f0 size=88 ===== */

void FUN_000110f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_98 [33];
  
  memset(local_98,0,0x80);
  do {
    do {
      iVar1 = FUN_000110ac(param_1,0x80805659,local_98);
    } while (iVar1 != 0);
  } while (local_98[0] != param_2);
  return;
}



/* ===== FUN_00011148 @ 00011148 size=808 ===== */

undefined4 FUN_00011148(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  FILE *__stream;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar8 = DAT_00011470 + 0x11160;
  pcVar5 = (char *)(param_1 + 0x40);
  iVar1 = open64(pcVar5,2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar8 + DAT_00011494);
    piVar6 = __errno_location();
    pcVar4 = strerror(*piVar6);
    fprintf(__stream,(char *)(DAT_000114d0 + 0x11460),pcVar5,pcVar4);
    return 0;
  }
  uVar2 = rk_aiq_uapi2_sysctl_init(param_1 + 0x100,DAT_00011474 + 0x11188,0);
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  if (*(int *)(DAT_00011478 + 0x1119c) != 0) {
    rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
  }
  iVar3 = rk_aiq_uapi2_sysctl_prepare
                    (*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(DAT_00011480 + 0x111c0),
                     *(undefined4 *)(DAT_0001147c + 0x111b4),0);
  if (iVar3 == 0) {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c = 0;
    local_30 = 0;
    local_40 = 0x8000001;
    uStack_2c = uStack_38;
    uStack_28 = uStack_34;
    iVar3 = FUN_000110ac(iVar1,0x4020565a,&local_40);
    if (iVar3 == 0) {
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_3c = 0;
      local_30 = 0;
      local_40 = 0x8000002;
      uStack_2c = uStack_38;
      uStack_28 = uStack_34;
      iVar3 = FUN_000110ac(iVar1,0x4020565a,&local_40);
      if (iVar3 != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00011494),(char *)(DAT_000114a0 + 0x112e0),
                pcVar5);
      }
      if (*(int *)(DAT_00011484 + 0x1124c) == 0) {
        printf((char *)(DAT_000114a4 + 0x112f8),pcVar5);
      }
      piVar7 = (int *)(DAT_00011488 + 0x11260);
      pcVar5 = (char *)(DAT_0001148c + 0x11268);
      piVar6 = (int *)(DAT_00011490 + 0x11270);
      while( true ) {
        if (*piVar7 == 0) {
          puts(pcVar5);
        }
        rk_aiq_uapi2_sysctl_start(*(undefined4 *)(param_1 + 0x144));
        if (*(int *)(param_1 + 0x144) == 0) break;
        if (*piVar6 == 0) {
          puts((char *)(DAT_000114ac + 0x1133c));
          if (*(int *)(DAT_000114b0 + 0x11348) == 0) {
            printf((char *)(DAT_000114b4 + 0x11360),param_1 + 0x120);
          }
        }
        FUN_000110f0(iVar1,0x8000001,0xffffffff);
        if (*(int *)(DAT_000114c4 + 0x113f4) == 0) {
          printf((char *)(DAT_000114b8 + 0x11378),param_1 + 0x120);
          if (*(int *)(DAT_000114bc + 0x11384) == 0) {
            printf((char *)(DAT_000114c0 + 0x1139c),param_1 + 0x120);
          }
        }
        FUN_000110f0(iVar1,0x8000002,0xffffffff);
        if (*(int *)(DAT_000114c8 + 0x11418) == 0) {
          printf((char *)(DAT_000114cc + 0x11430),param_1 + 0x120);
        }
        rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(param_1 + 0x144),0);
      }
      fwrite((void *)(DAT_000114a8 + 0x11328),1,0x1e,(FILE *)**(undefined4 **)(iVar8 + DAT_00011494)
            );
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00011494),(char *)(DAT_0001149c + 0x112bc),pcVar5)
    ;
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  fwrite((void *)(DAT_00011498 + 0x1129c),1,0x23,(FILE *)**(undefined4 **)(iVar8 + DAT_00011494));
                    /* WARNING: Subroutine does not return */
  exit(-1);
}



/* ===== FUN_000114d4 @ 000114d4 size=304 ===== */

uint FUN_000114d4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *__src;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_00011604 + 0x114e8;
  iVar6 = param_1 + 0x120;
  iVar1 = FUN_00012768(iVar6);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_000120f8(iVar1);
    if (uVar2 == 0) {
      uVar3 = FUN_00010fe4(iVar1,DAT_00011608 + 0x11520,param_1);
      uVar4 = FUN_00010fe4(iVar1,DAT_0001160c + 0x11538,param_1 + 0x40);
      uVar5 = FUN_00010fe4(iVar1,DAT_00011610 + 0x11550,param_1 + 0x80);
      uVar2 = FUN_00010fe4(iVar1,DAT_00011614 + 0x1156c,param_1 + 0xc0);
      uVar2 = uVar3 | uVar4 | uVar5 | uVar2;
      if (uVar2 == 0) {
        __src = (char *)rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd(param_1 + 0xc0);
        if ((__src == (char *)0x0) || (*__src == '\0')) {
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00011618),(char *)(DAT_00011620 + 0x115e8),
                  iVar6);
          FUN_000126d8(iVar1);
          uVar2 = 0xffffffea;
        }
        else {
          strcpy((char *)(param_1 + 0x100),__src);
          FUN_000126d8(iVar1);
        }
      }
      else {
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00011618),(char *)(DAT_0001161c + 0x115c0),
                iVar6);
        FUN_000126d8(iVar1);
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00011624 @ 00011624 size=280 ===== */

void FUN_00011624(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_24 [2];
  
  iVar4 = DAT_0001173c + 0x11640;
  iVar3 = DAT_00011740 + 0x11648;
  iVar2 = DAT_00011744 + 0x11650;
  piVar5 = (int *)(DAT_00011748 + 0x11658);
LAB_00011694:
  do {
    while( true ) {
      while( true ) {
        local_24[0] = 0;
        iVar1 = getopt_long(param_1,param_2,iVar2,iVar3,local_24);
        if (iVar1 == -1) {
          return;
        }
        if (iVar1 != 0x68) break;
        iVar1 = atoi((char *)**(undefined4 **)(iVar4 + DAT_00011754));
        *piVar5 = iVar1;
      }
      if (0x68 < iVar1) break;
      if (iVar1 == 0x3f) {
        fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_0001174c),(char *)(DAT_00011760 + 0x11728),
                *param_2);
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
LAB_00011660:
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_0001174c),(char *)(DAT_00011750 + 0x11678),iVar1
             );
    }
    if (iVar1 != 0x73) {
      if (iVar1 != 0x77) goto LAB_00011660;
      iVar1 = atoi((char *)**(undefined4 **)(iVar4 + DAT_00011754));
      *(int *)(DAT_00011758 + 0x116f8) = iVar1;
      goto LAB_00011694;
    }
    *(undefined4 *)(DAT_0001175c + 0x11708) = 1;
  } while( true );
}



/* ===== FUN_00011764 @ 00011764 size=492 ===== */

undefined4 FUN_00011764(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvVar7;
  FILE *__stream;
  int iVar8;
  int iVar9;
  char *__format;
  int iVar10;
  
  iVar10 = DAT_00011950 + 0x11780;
  setlinebuf((FILE *)**(undefined4 **)(iVar10 + DAT_00011954));
  FUN_00011624(param_1,param_2);
  iVar3 = DAT_00011958;
  pvVar7 = (void *)(DAT_00011958 + 0x117a4);
  iVar9 = 0;
  iVar8 = 0;
  __format = (char *)(DAT_0001195c + 0x117b8);
  pcVar4 = (char *)(DAT_00011960 + 0x117c4);
  pvVar5 = pvVar7;
  do {
    sprintf((char *)((int)pvVar5 + 0x120),__format,iVar8);
    iVar1 = FUN_000114d4(pvVar5);
    if (iVar1 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x140) = 1;
      iVar9 = iVar9 + 1;
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00011964),pcVar4,(char *)((int)pvVar5 + 0x120))
      ;
      *(undefined4 *)((int)pvVar5 + 0x140) = 0;
    }
    iVar8 = iVar8 + 1;
    pvVar5 = (void *)((int)pvVar5 + 0x14c);
  } while (iVar8 != 0x10);
  if (1 < iVar9) {
    *(undefined4 *)(DAT_00011968 + 0x11838) = 1;
  }
  iVar9 = 0;
  pvVar5 = pvVar7;
  do {
    if (*(int *)((int)pvVar5 + 0x140) != 0) {
      iVar8 = pthread_create((pthread_t *)((int)pvVar5 + 0x148),(pthread_attr_t *)0x0,
                             *(__start_routine **)(iVar10 + DAT_0001196c),pvVar5);
      if (iVar8 != 0) {
        iVar3 = DAT_00011970 + 0x1189c;
        *(undefined4 *)(iVar3 + iVar9 * 0x14c + 0x148) = 0;
        puVar6 = *(undefined4 **)(iVar10 + DAT_00011964);
        fprintf((FILE *)*puVar6,(char *)(DAT_00011974 + 0x118c8),iVar3 + iVar9 * 0x14c + 0x120);
        __stream = (FILE *)*puVar6;
        piVar2 = __errno_location();
        iVar9 = *piVar2;
        pcVar4 = strerror(iVar9);
        fprintf(__stream,(char *)(DAT_0001197c + 0x118fc),DAT_00011978 + 0x118f4,iVar9,pcVar4);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    iVar9 = iVar9 + 1;
    pvVar5 = (void *)((int)pvVar5 + 0x14c);
  } while (iVar9 != 0x10);
  do {
    if ((*(int *)((int)pvVar7 + 0x140) != 0) && (*(pthread_t *)((int)pvVar7 + 0x148) != 0)) {
      pthread_join(*(pthread_t *)((int)pvVar7 + 0x148),(void **)0x0);
    }
    pvVar7 = (void *)((int)pvVar7 + 0x14c);
  } while (pvVar7 != (void *)(iVar3 + 0x12c64));
  return 0;
}



/* ===== FUN_0001198c @ 0001198c size=132 ===== */

int FUN_0001198c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 == -1) {
    (*(code *)param_1[0x45])(param_1[0x46],"Opening media device %s\n",param_1[2]);
    iVar2 = open64((char *)param_1[2],2);
    *param_1 = iVar2;
    if (iVar2 < 0) {
      piVar1 = __errno_location();
      iVar2 = -*piVar1;
      (*(code *)param_1[0x45])
                (param_1[0x46],"%s: Can\'t open media device %s\n","media_device_open",param_1[2]);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00011a10 @ 00011a10 size=140 ===== */

int FUN_00011a10(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  
  uVar3 = *(uint *)(param_1 + 0x10c);
  if (uVar3 <= *(uint *)(param_1 + 0x110)) {
    pvVar1 = realloc(*(void **)(param_1 + 0x108),uVar3 * 0x38);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      uVar2 = 0;
      pvVar5 = pvVar1;
      do {
        *(void **)(*(int *)((int)pvVar5 + 8) + 8) = pvVar5;
        uVar2 = uVar2 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0x1c);
      } while (uVar2 < *(uint *)(param_1 + 0x110));
    }
    *(uint *)(param_1 + 0x10c) = uVar3 << 1;
    *(void **)(param_1 + 0x108) = pvVar1;
  }
  iVar4 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar4 + 1;
  return iVar4 * 0x1c + *(int *)(param_1 + 0x108);
}



/* ===== FUN_00011a9c @ 00011a9c size=280 ===== */

int FUN_00011a9c(int param_1)

{
  ssize_t sVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char acStack_4b8 [1024];
  char acStack_b8 [32];
  char acStack_98 [32];
  stat64 sStack_78;
  
  sprintf(acStack_b8,"/sys/dev/char/%u:%u",*(undefined4 *)(param_1 + 0x4c),
          *(undefined4 *)(param_1 + 0x50));
  sVar1 = readlink(acStack_b8,acStack_4b8,0x400);
  if (sVar1 < 0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
  else {
    acStack_4b8[sVar1] = '\0';
    pcVar2 = strrchr(acStack_4b8,0x2f);
    if (pcVar2 == (char *)0x0) {
      iVar3 = -0x16;
    }
    else {
      sprintf(acStack_98,"/dev/%s",pcVar2 + 1);
      iVar3 = stat64(acStack_98,&sStack_78);
      if (iVar3 < 0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
      }
      else {
        uVar4 = gnu_dev_major(sStack_78.st_rdev);
        if (uVar4 == *(uint *)(param_1 + 0x4c)) {
          uVar4 = gnu_dev_minor(sStack_78.st_rdev);
          if (uVar4 == *(uint *)(param_1 + 0x50)) {
            strcpy((char *)(param_1 + 0x114),acStack_98);
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_00011bb4 @ 00011bb4 size=64 ===== */

void FUN_00011bb4(void)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,300);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0xffffffff;
  puVar1[1] = 1;
  puVar1[0x45] = &LAB_00011980;
  puVar1[0x46] = 0;
  return;
}



/* ===== FUN_00011c6c @ 00011c6c size=140 ===== */

char * FUN_00011c6c(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 0x20) {
    iVar3 = *(int *)(param_1 + 0x110);
    if (iVar3 != 0) {
      __s1 = (char *)(*(int *)(param_1 + 0x10c) + 8);
      iVar2 = 0;
      do {
        iVar1 = strncmp(__s1,param_2,param_3);
        if ((iVar1 == 0) && (__s1[param_3] == '\0')) {
          return __s1 + -8;
        }
        iVar2 = iVar2 + 1;
        __s1 = __s1 + 0x138;
      } while (iVar2 != iVar3);
    }
    printf("media get entity by name: %s is null\n",param_2);
  }
  return (char *)0x0;
}



/* ===== FUN_00011cf8 @ 00011cf8 size=172 ===== */

int FUN_00011cf8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    return 0;
  }
  uVar5 = param_2 & 0x7fffffff;
  iVar1 = *(int *)(param_1 + 0x10c);
  uVar2 = ~param_2 >> 0x1f;
  if (uVar5 != *(uint *)(iVar1 + 4)) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    return iVar1;
  }
  uVar2 = param_2 >> 0x1f;
  if (*(uint *)(iVar1 + 4) <= uVar5) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    return iVar1;
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar1 + 0x138;
    iVar4 = iVar4 + 1;
    if (iVar4 == *(int *)(param_1 + 0x110)) {
      return 0;
    }
    uVar2 = ~param_2 >> 0x1f;
    if (*(uint *)(iVar1 + 0x13c) != uVar5) {
      uVar2 = 0;
    }
    if (uVar2 != 0) break;
    uVar2 = param_2 >> 0x1f;
    if (*(uint *)(iVar1 + 0x13c) <= uVar5) {
      uVar2 = 0;
    }
    iVar1 = iVar3;
    if (uVar2 != 0) {
      return iVar3;
    }
  }
  return iVar3;
}



/* ===== FUN_00011e08 @ 00011e08 size=28 ===== */

int FUN_00011e08(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x114) == '\0') {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0x114;
    }
    return param_1;
  }
  return 0;
}



/* ===== FUN_00011e88 @ 00011e88 size=440 ===== */

int FUN_00011e88(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_0001198c();
  if (-1 < iVar1) {
    iVar1 = *param_2;
    iVar7 = *(int *)(iVar1 + 0x110);
    if (iVar7 != 0) {
      puVar5 = *(undefined4 **)(iVar1 + 0x108);
      iVar4 = 0;
      do {
        if ((((*(int *)*puVar5 == iVar1) && (((int *)*puVar5)[1] == param_2[1])) &&
            (*(int *)puVar5[1] == *param_3)) && (((int *)puVar5[1])[1] == param_3[1])) {
          if (iVar7 != iVar4) {
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_44 = 0;
            local_34 = 0;
            uStack_28 = 0;
            local_54 = *(undefined4 *)(iVar1 + 4);
            _uStack_50 = CONCAT22((short)((uint)uStack_30 >> 0x10),(short)param_2[1]);
            local_4c = 2;
            uStack_40 = *(undefined4 *)(*param_3 + 4);
            local_3c = param_3[1] & 0xffff;
            uStack_38 = 1;
            local_2c = puVar5[3] & 2 | param_4;
            uStack_24 = uStack_30;
            iVar1 = ioctl(*param_1,0xc0347c03,&local_54);
            if (iVar1 == -1) {
              piVar2 = __errno_location();
              iVar1 = -*piVar2;
              pcVar6 = (code *)param_1[0x45];
              iVar7 = param_1[0x46];
              pcVar3 = strerror(*piVar2);
              (*pcVar6)(iVar7,"%s: Unable to setup link (%s)\n","media_setup_link",pcVar3);
            }
            else {
              puVar5[3] = local_2c;
              *(uint *)(puVar5[2] + 0xc) = local_2c;
              iVar1 = 0;
            }
            goto LAB_00011fbc;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 7;
      } while (iVar4 != iVar7);
    }
    (*(code *)param_1[0x45])(param_1[0x46],"%s: Link not found\n","media_setup_link");
    iVar1 = -2;
  }
LAB_00011fbc:
  if (*param_1 != -1) {
    close(*param_1);
    *param_1 = -1;
  }
  return iVar1;
}



/* ===== FUN_000120f8 @ 000120f8 size=1392 ===== */

int FUN_000120f8(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *__s;
  code *pcVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_74;
  uint local_70;
  int local_6c;
  undefined4 local_54;
  void *pvStack_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1[0x43] == 0) {
    local_74 = FUN_0001198c();
    if (-1 < local_74) {
      iVar1 = ioctl(*param_1,0xc1007c00,param_1 + 3);
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        local_74 = -*piVar2;
        pcVar12 = (code *)param_1[0x45];
        iVar1 = param_1[0x46];
        iVar13 = param_1[2];
        pcVar5 = strerror(*piVar2);
        (*pcVar12)(iVar1,"%s: Unable to retrieve media device information for device %s (%s)\n",
                   "media_device_enumerate",iVar13,pcVar5);
      }
      else {
        (*(code *)param_1[0x45])(param_1[0x46],"Enumerating entities\n");
        uVar15 = 0;
        while( true ) {
          pvVar3 = realloc((void *)param_1[0x43],param_1[0x44] * 0x138 + 0x138);
          param_1[0x43] = (int)pvVar3;
          iVar1 = param_1[0x44];
          __s = (void *)((int)pvVar3 + iVar1 * 0x138);
          memset(__s,0,0x138);
          *(undefined4 *)((int)__s + 0x134) = 0xffffffff;
          *(uint *)((int)__s + 4) = uVar15 | 0x80000000;
          *(int **)((int)pvVar3 + iVar1 * 0x138) = param_1;
          iVar1 = ioctl(*param_1,0xc1007c01);
          if (iVar1 < 0) break;
          iVar1 = (uint)*(ushort *)((int)__s + 0x3a) + (uint)*(ushort *)((int)__s + 0x38);
          *(int *)((int)__s + 0x10c) = iVar1;
          pvVar3 = malloc((uint)*(ushort *)((int)__s + 0x38) * 0x18);
          *(void **)((int)__s + 0x104) = pvVar3;
          pvVar4 = malloc(iVar1 * 0x1c);
          *(void **)((int)__s + 0x108) = pvVar4;
          if (pvVar3 == (void *)0x0 || pvVar4 == (void *)0x0) {
            local_74 = -0xc;
            goto LAB_00012380;
          }
          param_1[0x44] = param_1[0x44] + 1;
          if ((*(uint *)((int)__s + 0x30) & 1) != 0) {
            switch(*(undefined4 *)((int)__s + 0x28)) {
            case 0x10001:
              param_1[0x47] = (int)__s;
              break;
            case 0x10002:
              param_1[0x48] = (int)__s;
              break;
            case 0x10003:
              param_1[0x49] = (int)__s;
              break;
            case 0x10004:
              param_1[0x4a] = (int)__s;
            }
          }
          if (((*(uint *)((int)__s + 0x28) & 0xff0000) - 0x10000 & 0xfffeffff) == 0) {
            FUN_00011a9c(__s);
          }
          uVar15 = *(uint *)((int)__s + 4);
        }
        piVar2 = __errno_location();
        local_74 = *piVar2;
        if ((local_74 == 0x16) || (local_74 < 1)) {
          (*(code *)param_1[0x45])(param_1[0x46],"Found %u entities\n",param_1[0x44]);
          (*(code *)param_1[0x45])(param_1[0x46],"Enumerating pads and links\n");
          if (param_1[0x44] == 0) {
            local_74 = 0;
          }
          else {
            local_6c = 0;
            local_74 = 0;
            local_70 = 1;
            uVar17 = 0;
            uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uVar20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            do {
              iVar13 = param_1[0x43] + local_6c;
              local_54 = *(undefined4 *)(iVar13 + 4);
              pvStack_50 = (void *)uVar18;
              local_4c = (void *)uVar19;
              local_48 = uVar17;
              uStack_44 = uVar18;
              uStack_40 = uVar19;
              uStack_3c = uVar20;
              pvStack_50 = calloc((uint)*(ushort *)(iVar13 + 0x38),0x14);
              local_4c = calloc((uint)*(ushort *)(iVar13 + 0x3a),0x34);
              iVar1 = ioctl(*param_1,0xc01c7c02,&local_54);
              if (iVar1 < 0) {
                local_74 = -*piVar2;
                pcVar12 = (code *)param_1[0x45];
                iVar1 = param_1[0x46];
                pcVar5 = strerror(*piVar2);
                (*pcVar12)(iVar1,"%s: Unable to enumerate pads and links (%s).\n","media_enum_links"
                           ,pcVar5);
                free(pvStack_50);
                free(local_4c);
                break;
              }
              if (*(short *)(iVar13 + 0x38) != 0) {
                uVar10 = 0;
                uVar15 = uVar10;
                uVar11 = uVar10;
                do {
                  *(int *)(*(int *)(iVar13 + 0x104) + uVar15) = iVar13;
                  *(uint *)(*(int *)(iVar13 + 0x104) + uVar15 + 4) =
                       (uint)*(ushort *)((int)pvStack_50 + uVar11 + 4);
                  *(undefined4 *)(*(int *)(iVar13 + 0x104) + uVar15 + 8) =
                       *(undefined4 *)((int)pvStack_50 + uVar11 + 8);
                  uVar10 = uVar10 + 1;
                  uVar15 = uVar15 + 0x18;
                  uVar11 = uVar11 + 0x14;
                } while (uVar10 < *(ushort *)(iVar13 + 0x38));
              }
              if (*(short *)(iVar13 + 0x3a) != 0) {
                uVar15 = 0;
                do {
                  pvVar3 = local_4c;
                  iVar9 = uVar15 * 0x34;
                  uVar14 = *(undefined4 *)((int)local_4c + iVar9);
                  iVar1 = FUN_00011cf8(param_1,uVar14);
                  uVar16 = *(undefined4 *)((int)pvVar3 + iVar9 + 0x14);
                  iVar8 = FUN_00011cf8(param_1,uVar16);
                  if (iVar8 == 0 || iVar1 == 0) {
                    (*(code *)param_1[0x45])
                              (param_1[0x46],
                               "WARNING entity %u link %u from %u/%u to %u/%u is invalid!\n",
                               local_70,uVar15,uVar14,*(undefined2 *)((int)pvVar3 + iVar9 + 4),
                               uVar16,*(undefined2 *)((int)pvVar3 + iVar9 + 0x18));
                    local_74 = -0x16;
                  }
                  else {
                    piVar6 = (int *)FUN_00011a10(iVar1);
                    *piVar6 = (uint)*(ushort *)((int)pvVar3 + iVar9 + 4) * 0x18 +
                              *(int *)(iVar1 + 0x104);
                    piVar6[1] = (uint)*(ushort *)((int)pvVar3 + iVar9 + 0x18) * 0x18 +
                                *(int *)(iVar8 + 0x104);
                    piVar6[3] = *(int *)((int)pvVar3 + iVar9 + 0x28);
                    piVar7 = (int *)FUN_00011a10(iVar8);
                    *piVar7 = (uint)*(ushort *)((int)pvVar3 + iVar9 + 4) * 0x18 +
                              *(int *)(iVar1 + 0x104);
                    piVar7[1] = (uint)*(ushort *)((int)pvVar3 + iVar9 + 0x18) * 0x18 +
                                *(int *)(iVar8 + 0x104);
                    piVar7[3] = *(int *)((int)pvVar3 + iVar9 + 0x28);
                    piVar6[2] = (int)piVar7;
                    piVar7[2] = (int)piVar6;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < *(ushort *)(iVar13 + 0x3a));
              }
              free(pvStack_50);
              free(local_4c);
              local_70 = local_70 + 1;
              local_6c = local_6c + 0x138;
            } while (local_70 <= (uint)param_1[0x44]);
            if (local_74 < 0) {
              (*(code *)param_1[0x45])
                        (param_1[0x46],"%s: Unable to enumerate pads and linksfor device %s\n",
                         "media_device_enumerate",param_1[2]);
            }
            else {
              local_74 = 0;
            }
          }
        }
        else {
          local_74 = -local_74;
LAB_00012380:
          pcVar12 = (code *)param_1[0x45];
          iVar1 = param_1[0x46];
          iVar13 = param_1[2];
          pcVar5 = strerror(-local_74);
          (*pcVar12)(iVar1,"%s: Unable to enumerate entities for device %s (%s)\n",
                     "media_device_enumerate",iVar13,pcVar5);
        }
      }
      if (*param_1 != -1) {
        close(*param_1);
        *param_1 = -1;
      }
    }
  }
  else {
    local_74 = 0;
  }
  return local_74;
}



/* ===== FUN_0001269c @ 0001269c size=44 ===== */

int FUN_0001269c(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00011bb4();
  if (iVar1 != 0) {
    memcpy((void *)(iVar1 + 0xc),param_1,0x100);
  }
  return iVar1;
}



/* ===== FUN_000126d8 @ 000126d8 size=144 ===== */

void FUN_000126d8(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (0 < iVar1) {
    return;
  }
  if (*(int *)((int)param_1 + 0x110) != 0) {
    iVar1 = 0;
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)param_1 + 0x10c) + iVar1;
      free(*(void **)(iVar2 + 0x104));
      free(*(void **)(iVar2 + 0x108));
      if (*(int *)(iVar2 + 0x134) != -1) {
        close(*(int *)(iVar2 + 0x134));
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x138;
    } while (uVar3 < *(uint *)((int)param_1 + 0x110));
  }
  free(*(void **)((int)param_1 + 0x10c));
  free(*(void **)((int)param_1 + 8));
  free(param_1);
  return;
}



/* ===== FUN_00012768 @ 00012768 size=68 ===== */

int FUN_00012768(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00011bb4();
  if (iVar1 != 0) {
    pcVar2 = strdup(param_1);
    *(char **)(iVar1 + 8) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      FUN_000126d8(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_000127ac @ 000127ac size=376 ===== */

undefined4 FUN_000127ac(int param_1,int param_2,char *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *__s;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  pvVar1 = realloc(*(void **)(param_1 + 0x10c),*(int *)(param_1 + 0x110) * 0x138 + 0x138);
  if (pvVar1 == (void *)0x0) {
    return 0xfffffff4;
  }
  *(void **)(param_1 + 0x10c) = pvVar1;
  iVar5 = *(int *)(param_1 + 0x110) + 1;
  *(int *)(param_1 + 0x110) = iVar5;
  iVar5 = iVar5 * 0x138 + -0x138;
  __s = (void *)((int)pvVar1 + iVar5);
  memset(__s,0,0x138);
  *(undefined4 *)((int)__s + 0x134) = 0xffffffff;
  *(int *)((int)pvVar1 + iVar5) = param_1;
  strncpy((char *)((int)__s + 0x114),param_3,0x20);
  *(undefined1 *)((int)__s + 0x133) = 0;
  *(undefined4 *)((int)__s + 4) = 0;
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)__s + 0x28) = uVar6;
  *(undefined4 *)((int)__s + 0x30) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)__s + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)__s + 0xc) = uVar2;
  *(undefined4 *)((int)__s + 0x10) = uVar3;
  *(undefined4 *)((int)__s + 0x14) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((int)__s + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((int)__s + 0x1c) = uVar2;
  *(undefined4 *)((int)__s + 0x20) = uVar3;
  *(undefined4 *)((int)__s + 0x24) = uVar4;
  switch(uVar6) {
  case 0x10001:
    puVar7 = (undefined4 *)(param_1 + 0x11c);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)((int)__s + 0x4c) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((int)__s + 0x50) = uVar2;
    break;
  case 0x10002:
    puVar7 = (undefined4 *)(param_1 + 0x120);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)((int)__s + 0x4c) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((int)__s + 0x50) = uVar2;
    break;
  case 0x10003:
    puVar7 = (undefined4 *)(param_1 + 0x124);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((int)__s + 0x4c) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((int)__s + 0x50) = uVar2;
    *(undefined4 *)((int)__s + 0x54) = uVar3;
    break;
  case 0x10004:
    puVar7 = (undefined4 *)(param_1 + 0x128);
    *(undefined4 *)((int)__s + 0x4c) = *(undefined4 *)(param_2 + 0x48);
    break;
  default:
    if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
      return 0;
    }
    *(undefined4 *)((int)__s + 0x30) = 1;
    return 0;
  }
  if ((*(uint *)(param_2 + 0x2c) & 1) != 0) {
    *(undefined4 *)((int)__s + 0x30) = 1;
    *puVar7 = __s;
    return 0;
  }
  return 0;
}



/* ===== FUN_00012934 @ 00012934 size=728 ===== */

int FUN_00012934(int param_1,byte *param_2,byte **param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_1c;
  
  if (param_3 == (byte **)0x0) {
    param_3 = &local_1c;
  }
  uVar5 = (uint)*param_2;
  uVar1 = *(ushort *)(__ctype_b + uVar5 * 2);
  while ((uVar1 & 0x20) != 0) {
    param_2 = param_2 + 1;
    uVar5 = (uint)*param_2;
    uVar1 = *(ushort *)(__ctype_b + uVar5 * 2);
  }
  if (uVar5 == 0x27 || uVar5 == 0x22) {
    pbVar6 = param_2 + 1;
    bVar4 = param_2[1];
    bVar7 = bVar4 != 0x22;
    local_1c = pbVar6;
    if (bVar4 != 0x27 && (bVar4 != 0 && bVar7)) {
      do {
        local_1c = local_1c + 1;
        bVar4 = *local_1c;
        bVar7 = bVar4 != 0x22;
      } while (bVar4 != 0x27 && (bVar4 != 0 && bVar7));
    }
    if (bVar4 == 0x27) {
      bVar7 = false;
    }
    if (bVar7) {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"missing matching \'\"\'\n");
      *param_3 = local_1c;
      return 0;
    }
    iVar2 = FUN_00011c6c(param_1,pbVar6,local_1c + (-1 - (int)param_2));
    if (iVar2 == 0) {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"no such entity \"%.*s\"\n",
                 local_1c + (-1 - (int)param_2),pbVar6);
      *param_3 = pbVar6;
      return 0;
    }
    local_1c = local_1c + 1;
  }
  else {
    uVar3 = strtoul((char *)param_2,(char **)&local_1c,10);
    iVar2 = FUN_00011cf8(param_1,uVar3);
    if (iVar2 == 0) {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"no such entity %d\n",uVar3);
      *param_3 = param_2;
      return 0;
    }
  }
  uVar5 = (uint)*local_1c;
  uVar1 = *(ushort *)(__ctype_b + uVar5 * 2);
  while ((uVar1 & 0x20) != 0) {
    local_1c = local_1c + 1;
    uVar5 = (uint)*local_1c;
    uVar1 = *(ushort *)(__ctype_b + uVar5 * 2);
  }
  if (uVar5 == 0x3a) {
    pbVar6 = local_1c + 1;
    uVar1 = *(ushort *)(__ctype_b + (uint)local_1c[1] * 2);
    while ((uVar1 & 0x20) != 0) {
      pbVar6 = pbVar6 + 1;
      uVar1 = *(ushort *)(__ctype_b + (uint)*pbVar6 * 2);
    }
    uVar3 = strtoul((char *)pbVar6,(char **)&local_1c,10);
    if (uVar3 < *(ushort *)(iVar2 + 0x38)) {
      uVar1 = *(ushort *)(__ctype_b + (uint)*local_1c * 2);
      while ((uVar1 & 0x20) != 0) {
        local_1c = local_1c + 1;
        uVar1 = *(ushort *)(__ctype_b + (uint)*local_1c * 2);
      }
      *param_3 = local_1c;
      iVar2 = uVar3 * 0x18 + *(int *)(iVar2 + 0x104);
    }
    else {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),
                 "No pad \'%d\' on entity \"%s\". Maximum pad number is %d\n",uVar3,iVar2 + 8,
                 *(ushort *)(iVar2 + 0x38) - 1);
      *param_3 = pbVar6;
      iVar2 = 0;
    }
  }
  else {
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \':\'\n");
    *param_3 = local_1c;
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00012c0c @ 00012c0c size=284 ===== */

undefined4 * FUN_00012c0c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_1c [2];
  
  piVar1 = (int *)FUN_00012934(param_1,param_2,local_1c);
  if (piVar1 == (int *)0x0) {
    *param_3 = local_1c[0];
  }
  else if ((*local_1c[0] == '-') && (local_1c[0][1] == '>')) {
    piVar2 = (int *)FUN_00012934(param_1,local_1c[0] + 2,local_1c);
    if (piVar2 == (int *)0x0) {
      *param_3 = local_1c[0];
    }
    else {
      *param_3 = local_1c[0];
      iVar4 = *piVar1;
      if (*(int *)(iVar4 + 0x110) != 0) {
        puVar5 = *(undefined4 **)(iVar4 + 0x108);
        iVar3 = 0;
        do {
          if (((int *)*puVar5 == piVar1) && ((int *)puVar5[1] == piVar2)) {
            return puVar5;
          }
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 7;
        } while (iVar3 != *(int *)(iVar4 + 0x110));
      }
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"No link between \"%s\":%d and \"%s\":%d\n",
                 iVar4 + 8,piVar1[1],*piVar2 + 8,piVar2[1]);
    }
  }
  else {
    *param_3 = local_1c[0];
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'->\'\n");
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00012d28 @ 00012d28 size=380 ===== */

undefined4 FUN_00012d28(int param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *local_1c;
  
  piVar2 = (int *)FUN_00012c0c(param_1,param_2,&local_1c);
  if (piVar2 == (int *)0x0) {
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),"%s: Unable to parse link\n",
               "media_parse_setup_link");
    *param_3 = local_1c;
    uVar4 = 0xffffffea;
  }
  else if (*local_1c == 0x5b) {
    uVar3 = strtoul((char *)(local_1c + 1),(char **)&local_1c,10);
    uVar6 = (uint)*local_1c;
    uVar1 = *(ushort *)(__ctype_b + uVar6 * 2);
    while ((uVar1 & 0x20) != 0) {
      local_1c = local_1c + 1;
      uVar6 = (uint)*local_1c;
      uVar1 = *(ushort *)(__ctype_b + uVar6 * 2);
    }
    pbVar5 = local_1c + 1;
    if (uVar6 == 0x5d) {
      uVar1 = *(ushort *)(__ctype_b + (uint)local_1c[1] * 2);
      while ((uVar1 & 0x20) != 0) {
        pbVar5 = pbVar5 + 1;
        uVar1 = *(ushort *)(__ctype_b + (uint)*pbVar5 * 2);
      }
      *param_3 = pbVar5;
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"Setting up link %u:%u -> %u:%u [%u]\n",
                 *(undefined4 *)(*(int *)*piVar2 + 4),((int *)*piVar2)[1],
                 *(undefined4 *)(*(int *)piVar2[1] + 4),((int *)piVar2[1])[1],uVar3);
      uVar4 = FUN_00011e88(param_1,*piVar2,piVar2[1],uVar3);
    }
    else {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"Unable to parse link flags: expected \']\'.\n");
      *param_3 = local_1c;
      uVar4 = 0xffffffea;
    }
  }
  else {
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),"Unable to parse link flags: expected \'[\'.\n");
    *param_3 = local_1c;
    uVar4 = 0xffffffea;
  }
  return uVar4;
}



/* ===== FUN_00012ea4 @ 00012ea4 size=116 ===== */

void FUN_00012ea4(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = (param_3 - (int)param_2) + 1;
  sVar1 = strlen(param_2);
  if (sVar1 < uVar2) {
    uVar2 = sVar1;
  }
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"\n");
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118)," %s\n",param_2);
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118)," %*s\n",uVar2,&DAT_00013710);
  return;
}



/* ===== FUN_00012f18 @ 00012f18 size=100 ===== */

int FUN_00012f18(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *local_14;
  
  do {
    iVar1 = FUN_00012d28(param_1,param_2,&local_14);
    if (iVar1 < 0) {
      FUN_00012ea4(param_1,param_2,local_14);
      return iVar1;
    }
    param_2 = local_14 + 1;
  } while (*local_14 == ',');
  if (*local_14 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== _DT_FINI @ 00012f7c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

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



/* ===== <EXTERNAL>::free @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_getBindedSnsEntNmByVd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


