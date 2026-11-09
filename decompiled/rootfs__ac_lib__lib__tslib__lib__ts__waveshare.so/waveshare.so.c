// waveshare.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000105a0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::ioctl @ 000105c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002100c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000105d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00021010)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_close @ 000105dc size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00021014)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000105e8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000105f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002101c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00021020)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001060c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021024)();
  return;
}



/* ===== <EXTERNAL>::ts_open @ 00010618 size=12 ===== */

void ts_open(void)

{
  (*(code *)PTR_ts_open_00021028)();
  return;
}



/* ===== <EXTERNAL>::read @ 00010624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002102c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010630 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00021030)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 0001063c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00021034)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00010648 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00021038)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002103c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00021040)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001066c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021044)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00021048)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002104c)(__ptr);
  return;
}



/* ===== entry @ 00010690 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000106dc + 0x106a8 == DAT_000106d8 + 0x106a0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000106e0 + 0x106b0 + DAT_000106e4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001074c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000107c0 + 0x10768;
  if (*(char *)(DAT_000107bc + 0x1075c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000107c4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000107c8 + 0x10788));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000107cc) != 0) {
    __deregister_frame_info(DAT_000107d0 + 0x107a8);
  }
  *(undefined1 *)(DAT_000107d4 + 0x107b8) = 1;
  return;
}



/* ===== _INIT_0 @ 000107d8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010810 + 0x107e8 + DAT_00010814) != 0) {
    __register_frame_info(DAT_0001081c + 0x10808,DAT_00010818 + 0x10804);
  }
  if (((DAT_00010740 + 0x10700) - (DAT_0001073c + 0x106f8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010744 + 0x10708 + DAT_00010748);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== waveshare_mod_init @ 00010820 size=112 ===== */

void * waveshare_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = malloc(0x1c);
  iVar1 = DAT_00010890;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_00010890 + 0x10854;
    *(undefined4 *)((int)__ptr + 0x10) = 0;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(undefined4 *)((int)__ptr + 0x18) = 0x19;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x10860,2,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010894 @ 00010894 size=44 ===== */

undefined4 FUN_00010894(int param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = atoi(param_2);
  bVar3 = iVar1 == 0;
  if (-1 < iVar1) {
    bVar3 = param_3 == 1;
  }
  if (bVar3) {
    *(int *)(param_1 + 0x18) = iVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000108c0 @ 000108c0 size=464 ===== */

int FUN_000108c0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  ssize_t sVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  char *__format;
  int local_298;
  int *local_294;
  int local_290;
  ulong local_28c;
  undefined1 auStack_288 [4];
  short local_284;
  short sStack_282;
  stat sStack_280;
  char acStack_228 [516];
  
  local_294 = (int *)*param_1;
  local_298 = param_2;
  local_290 = param_4;
  if (*(short *)(DAT_00010a90 + 0x108e0) == 1) {
    iVar5 = param_1[4];
    iVar7 = 0;
    *(short *)(DAT_00010a90 + 0x108e0) = 0;
    if ((0 < iVar5) && (0 < (int)param_1[5])) {
      __format = (char *)(DAT_00010a94 + 0x1092c);
      local_28c = 0x80084803;
      do {
        snprintf(acStack_228,0x200,__format,iVar7);
        iVar5 = stat(acStack_228,&sStack_280);
        if ((-1 < iVar5) && (piVar3 = (int *)ts_open(acStack_228), piVar3 != (int *)0x0)) {
          iVar5 = ioctl(*piVar3,local_28c,auStack_288);
          piVar2 = local_294;
          if ((-1 < iVar5) && ((param_1[4] == (int)local_284 && (param_1[5] == (int)sStack_282)))) {
            close(*local_294);
            *piVar2 = *piVar3;
            ts_close(piVar3);
            break;
          }
          ts_close(piVar3);
        }
        iVar7 = iVar7 + 1;
        if (iVar7 == 0x40) {
          return -1;
        }
      } while( true );
    }
  }
  iVar5 = -(local_290 * param_1[6] + 7U & 0xfffffff8);
  puVar8 = (undefined1 *)((int)&local_298 + iVar5);
  sVar4 = read(*local_294,(void *)((int)&local_298 + iVar5),local_290 * param_1[6]);
  if (sVar4 < 1) {
    return -1;
  }
  if ((int)param_1[6] <= sVar4) {
    puVar9 = (undefined4 *)(local_298 + -4);
    do {
      puVar9 = puVar9 + 1;
      puVar6 = (uint *)*puVar9;
      puVar6[2] = (uint)(byte)puVar8[1];
      *puVar6 = (*(ushort *)(puVar8 + 2) & 0xff) << 8 | (uint)(*(ushort *)(puVar8 + 2) >> 8);
      uVar1 = *(ushort *)(puVar8 + 4);
      *(ushort *)((int)puVar6 + 0x46) = *(ushort *)((int)puVar6 + 0x46) | 1;
      puVar6[1] = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
      gettimeofday((timeval *)(puVar6 + 0xf),(__timezone_ptr_t)0x0);
      iVar5 = param_1[6];
      sVar4 = sVar4 - iVar5;
      puVar8 = puVar8 + iVar5;
    } while (iVar5 <= sVar4);
  }
  return local_290;
}



/* ===== FUN_00010a98 @ 00010a98 size=448 ===== */

int FUN_00010a98(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  ssize_t sVar5;
  int iVar6;
  int iVar7;
  timeval *__tv;
  undefined1 *puVar8;
  char *__format;
  int local_298;
  int *local_294;
  int local_290;
  ulong local_28c;
  undefined1 auStack_288 [4];
  short local_284;
  short local_282;
  stat sStack_280;
  char acStack_228 [516];
  
  local_294 = (int *)*param_1;
  local_298 = param_2;
  local_290 = param_3;
  if (*(short *)(DAT_00010c58 + 0x10aba) == 1) {
    iVar6 = param_1[4];
    iVar7 = 0;
    *(undefined2 *)(DAT_00010c58 + 0x10aba) = 0;
    if ((0 < iVar6) && (0 < (int)param_1[5])) {
      __format = (char *)(DAT_00010c5c + 0x10b04);
      local_28c = 0x80084803;
      do {
        snprintf(acStack_228,0x200,__format,iVar7);
        iVar6 = stat(acStack_228,&sStack_280);
        if ((-1 < iVar6) && (piVar4 = (int *)ts_open(acStack_228), piVar4 != (int *)0x0)) {
          iVar6 = ioctl(*piVar4,local_28c,auStack_288);
          piVar3 = local_294;
          if ((-1 < iVar6) && ((param_1[4] == (int)local_284 && (param_1[5] == (int)local_282)))) {
            close(*local_294);
            *piVar3 = *piVar4;
            ts_close(piVar4);
            break;
          }
          ts_close(piVar4);
        }
        iVar7 = iVar7 + 1;
        if (iVar7 == 0x40) {
          return -1;
        }
      } while( true );
    }
  }
  iVar6 = -(local_290 * param_1[6] + 7U & 0xfffffff8);
  puVar8 = (undefined1 *)((int)&local_298 + iVar6);
  sVar5 = read(*local_294,(void *)((int)&local_298 + iVar6),local_290 * param_1[6]);
  if (sVar5 < 1) {
    return -1;
  }
  if ((int)param_1[6] <= sVar5) {
    __tv = (timeval *)(local_298 + 0xc);
    do {
      uVar2 = *(ushort *)(puVar8 + 4);
      bVar1 = puVar8[1];
      __tv[-2].tv_usec =
           (*(ushort *)(puVar8 + 2) & 0xff) << 8 | (uint)(*(ushort *)(puVar8 + 2) >> 8);
      __tv[-1].tv_usec = (uint)bVar1;
      __tv[-1].tv_sec = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
      gettimeofday(__tv,(__timezone_ptr_t)0x0);
      iVar6 = param_1[6];
      __tv = (timeval *)&__tv[2].tv_usec;
      sVar5 = sVar5 - iVar6;
      puVar8 = puVar8 + iVar6;
    } while (iVar6 <= sVar5);
  }
  return local_290;
}



/* ===== FUN_00010c60 @ 00010c60 size=120 ===== */

undefined4 FUN_00010c60(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  if (param_3 == 1 && 8 < sVar1) {
    param_2[9] = '\0';
    param_2[4] = '\0';
    lVar2 = strtol(param_2,(char **)0x0,0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    lVar2 = strtol(param_2 + 5,(char **)0x0,0x10);
    *(long *)(param_1 + 0x14) = lVar2;
    return 0;
  }
  return 0;
}



/* ===== _fini @ 00010cd8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_open @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00022048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


