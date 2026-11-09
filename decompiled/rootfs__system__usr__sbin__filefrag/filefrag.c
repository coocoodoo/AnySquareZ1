// filefrag — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000106e8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::ioctl @ 0001070c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002300c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023014)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::perror @ 00010730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00023018)(__s);
  return;
}



/* ===== <EXTERNAL>::strtoul @ 0001073c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002301c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fstatfs @ 00010748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatfs(int __fildes,statfs *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatfs_00023020)(__fildes);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023024)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00010760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00023028)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strnlen @ 0001076c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0002302c)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010778 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023030)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00010784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00023034)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010790 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023038)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 000107a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00023040)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000107b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023044)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::open64 @ 000107c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00023048)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000107cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002304c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fsync @ 000107d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_00023050)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 000107e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00023054)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000107f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023058)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000107fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002305c)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023060)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010814 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023064)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023068)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 0001082c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002306c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010838 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00023070)();
  return;
}



/* ===== entry @ 00010844 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002303c)
            (DAT_00010878,param_2,&stack0x00000004,DAT_0001087c,DAT_00010874,param_1);
  return;
}



/* ===== FUN_00010880 @ 00010880 size=32 ===== */

void FUN_00010880(void)

{
  if (DAT_000108a4 == DAT_000108a0) {
    return;
  }
  if (DAT_000108a8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000108a8)();
  return;
}



/* ===== _FINI_0 @ 000108e4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010920;
  if (*DAT_00010920 != '\0') {
    return;
  }
  FUN_00010880();
  if (DAT_00010924 != 0) {
    __deregister_frame_info(DAT_00010928);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001092c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010950 != 0) {
    __register_frame_info(DAT_00010958,DAT_00010954);
  }
  if ((DAT_000108dc - DAT_000108d8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000108e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000108e0)();
  return;
}



/* ===== FUN_0001095c @ 0001095c size=96 ===== */

int FUN_0001095c(int param_1)

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



/* ===== FUN_000109bc @ 000109bc size=124 ===== */

int FUN_000109bc(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = 0;
  lVar1 = FUN_00012958(param_1,param_2,10,0);
  while (uStack_14 = (undefined4)((ulonglong)lVar1 >> 0x20), local_18 = (undefined4)lVar1,
        lVar1 != 0) {
    local_c = local_c + 1;
    lVar1 = FUN_00012958(local_18,uStack_14,10,0);
  }
  return local_c;
}



/* ===== FUN_00010a38 @ 00010a38 size=80 ===== */

int FUN_00010a38(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000126c0(param_1 + -1,param_2);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ===== FUN_00010a88 @ 00010a88 size=116 ===== */

int FUN_00010a88(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 local_10;
  int local_c;
  
  local_10 = param_2;
  local_c = ioctl(param_1,1,&local_10);
  if (local_c < 0) {
    piVar1 = __errno_location();
    local_c = -*piVar1;
  }
  else {
    *param_3 = local_10;
  }
  return local_c;
}



/* ===== FUN_00010afc @ 00010afc size=132 ===== */

void FUN_00010afc(void)

{
  printf(" ext: %*s %*s length: %*s flags:\n",DAT_0002307c * 2 + 3,"logical_offset:",
         DAT_00023080 * 2 + 3,"physical_offset:",DAT_00023080 + 1,"expected:");
  return;
}



/* ===== FUN_00010b80 @ 00010b80 size=108 ===== */

void FUN_00010b80(uint *param_1,uint param_2,char *param_3,char *param_4)

{
  if ((param_2 & *param_1) != 0) {
    strcat(param_3,param_4);
    *param_1 = *param_1 & ~param_2;
  }
  return;
}



/* ===== FUN_00010bec @ 00010bec size=1184 ===== */

void FUN_00010bec(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 int param_6)

{
  size_t sVar1;
  uint uVar2;
  bool bVar3;
  char acStack_154 [7];
  char cStack_14d;
  undefined4 local_14c;
  undefined1 auStack_148 [252];
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_2c;
  undefined8 local_28;
  
  local_14c = 0;
  memset(auStack_148,0,0xfc);
  if ((param_1[10] & 0x200) != 0) {
    param_5 = 0;
  }
  uStack_34 = param_1[5];
  local_38 = param_1[4] >> (param_5 & 0xff) | uStack_34 << (0x20 - param_5 & 0xff) |
             uStack_34 >> (param_5 - 0x20 & 0xff);
  uStack_34 = uStack_34 >> (param_5 & 0xff);
  uStack_3c = param_1[5] - (uint)(param_1[4] == 0);
  local_40 = param_1[4] - 1 >> (param_5 & 0xff) | uStack_3c << (0x20 - param_5 & 0xff) |
             uStack_3c >> (param_5 - 0x20 & 0xff);
  uStack_3c = uStack_3c >> (param_5 & 0xff);
  uStack_44 = param_1[1];
  local_48 = *param_1 >> (param_5 & 0xff) | uStack_44 << (0x20 - param_5 & 0xff) |
             uStack_44 >> (param_5 - 0x20 & 0xff);
  uStack_44 = uStack_44 >> (param_5 & 0xff);
  if ((param_1[10] & 2) == 0) {
    uVar2 = param_1[3];
    local_28 = CONCAT44(uVar2 >> (param_5 & 0xff),
                        param_1[2] >> (param_5 & 0xff) | uVar2 << (0x20 - param_5 & 0xff) |
                        uVar2 >> (param_5 - 0x20 & 0xff));
  }
  else {
    local_28 = 0;
  }
  if (param_3 == 0 && param_4 == 0) {
    sprintf((char *)&local_14c,"%.*s  ",DAT_00023080,"                   ");
  }
  else {
    if (DAT_00023084 == DAT_00023088) {
      uVar2 = 0x2ba8;
    }
    else {
      uVar2 = 0x2bb0;
    }
    sprintf((char *)&local_14c,(char *)(uVar2 | 0x10000),DAT_00023080,(char *)(uVar2 | 0x10000),
            param_3 >> (param_5 & 0xff) | param_4 << (0x20 - param_5 & 0xff) |
            param_4 >> (param_5 - 0x20 & 0xff),param_4 >> (param_5 & 0xff));
  }
  local_4c = param_1[10];
  FUN_00010b80(&local_4c,1,&local_14c,"last,");
  FUN_00010b80(&local_4c,2,&local_14c,"unknown_loc,");
  FUN_00010b80(&local_4c,4,&local_14c,"delalloc,");
  FUN_00010b80(&local_4c,8,&local_14c,"encoded,");
  FUN_00010b80(&local_4c,0x80,&local_14c,"encrypted,");
  FUN_00010b80(&local_4c,0x100,&local_14c,"not_aligned,");
  FUN_00010b80(&local_4c,0x200,&local_14c,"inline,");
  FUN_00010b80(&local_4c,0x400,&local_14c,"tail_packed,");
  FUN_00010b80(&local_4c,0x800,&local_14c,"unwritten,");
  FUN_00010b80(&local_4c,0x1000,&local_14c,"merged,");
  FUN_00010b80(&local_4c,0x2000,&local_14c,"shared,");
  for (local_2c = 1; (local_4c != 0 && (local_2c != 0)); local_2c = local_2c << 1) {
    if ((local_2c & local_4c) != 0) {
      sprintf(acStack_154,"%#04x,",local_2c);
      FUN_00010b80(&local_4c,local_2c,&local_14c,acStack_154);
    }
  }
  uVar2 = param_1[5] + param_1[1] + (uint)CARRY4(param_1[4],*param_1);
  bVar3 = *(uint *)(param_6 + 0x34) <= uVar2;
  if (uVar2 == *(uint *)(param_6 + 0x34)) {
    bVar3 = *(uint *)(param_6 + 0x30) <= param_1[4] + *param_1;
  }
  if (bVar3) {
    sVar1 = strlen((char *)&local_14c);
    *(undefined4 *)(auStack_148 + (sVar1 - 4)) = DAT_00012c5c;
    auStack_148[sVar1] = DAT_00012c60;
  }
  if ((char)local_14c != '\0') {
    sVar1 = strnlen((char *)&local_14c,0x100);
    (&cStack_14d)[sVar1] = '\0';
  }
  printf(DAT_00023084,param_2,DAT_0002307c,uStack_44,local_48,uStack_44,DAT_0002307c);
  return;
}



/* ===== FUN_0001108c @ 0001108c size=1200 ===== */

int FUN_0001108c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_4080;
  uint uStack_407c;
  uint local_4078;
  uint uStack_4074;
  uint local_4070;
  uint uStack_406c;
  int local_4048 [8];
  undefined1 auStack_4028 [16356];
  int local_44;
  undefined8 local_40;
  int local_34;
  undefined1 *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int iStack_c;
  
  local_2c = local_4048;
  local_30 = auStack_4028;
  uStack_407c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4078 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4074 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4080 = 0;
  local_4070 = 0;
  local_34 = 0x124;
  local_10 = 0;
  iStack_c = 0;
  local_40 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  memset(local_2c,0,0x20);
  if (DAT_000230c4 != 0) {
    local_14 = local_14 | 1;
  }
  uStack_406c = uStack_407c;
  if (DAT_000230c8 != 0) {
    local_14 = local_14 | 2;
  }
  do {
    local_2c[2] = -0xffffffff00000001;
    local_2c[3] = 3;
    local_2c[4] = local_14;
    local_2c[6] = local_34;
    local_44 = ioctl(param_1,0xc020660b,local_2c);
    if (local_44 < 0) {
      piVar1 = __errno_location();
      local_44 = -*piVar1;
      if (local_44 != -0x35) {
        return local_44;
      }
      if (DAT_000230cc != 0) {
        return -0x35;
      }
      fprintf(stderr,"FIEMAP failed with unknown flags %x\n",local_2c[4]);
      DAT_000230cc = 1;
      return local_44;
    }
    if (local_2c[5] == 0) break;
    if ((DAT_000230c0 != 0) && (local_1c == 0)) {
      FUN_00010afc();
      local_1c = 1;
    }
    for (local_18 = 0; local_18 < (uint)local_2c[5]; local_18 = local_18 + 1) {
      iVar4 = uStack_406c + uStack_4074 + (uint)CARRY4(local_4070,local_4078);
      local_40 = CONCAT44(iVar4,local_4070 + local_4078);
      uVar3 = *(uint *)(local_30 + local_18 * 0x38);
      uVar2 = local_4078 + uVar3;
      local_10 = uVar2 - local_4080;
      iStack_c = (uStack_4074 + *(uint *)((int)(local_30 + local_18 * 0x38) + 4) +
                 (uint)CARRY4(local_4078,uVar3)) - (uStack_407c + (uVar2 < local_4080));
      if (((*(int *)(local_30 + local_18 * 0x38) == 0 &&
            *(int *)((int)(local_30 + local_18 * 0x38) + 4) == 0) ||
          (iStack_c == *(int *)(local_30 + local_18 * 0x38 + 0xc) &&
           local_10 == *(int *)(local_30 + local_18 * 0x38 + 8))) ||
         (iVar4 == *(int *)(local_30 + local_18 * 0x38 + 0xc) &&
          local_4070 + local_4078 == *(int *)(local_30 + local_18 * 0x38 + 8))) {
        local_10 = 0;
        iStack_c = 0;
        if (local_20 == 0) {
          local_20 = 1;
        }
      }
      else {
        local_20 = local_20 + 1;
      }
      if (DAT_000230c0 != 0) {
        FUN_00010bec(local_30 + local_18 * 0x38,local_24,local_10,iStack_c,param_2,param_4);
      }
      if ((*(uint *)(local_30 + local_18 * 0x38 + 0x28) & 1) != 0) {
        local_28 = 1;
      }
      puVar5 = (uint *)(local_30 + local_18 * 0x38);
      local_4080 = *puVar5;
      uStack_407c = puVar5[1];
      local_4078 = puVar5[2];
      uStack_4074 = puVar5[3];
      local_4070 = puVar5[4];
      uStack_406c = puVar5[5];
      local_24 = local_24 + 1;
    }
    uVar2 = *(uint *)(local_30 + local_18 * 0x38 + -0x38);
    uVar3 = *(uint *)((int)(local_30 + local_18 * 0x38 + -0x38) + 4);
    uVar7 = *(undefined8 *)(local_30 + local_18 * 0x38 + -0x28);
    uVar6 = (uint)uVar7;
    *local_2c = uVar6 + uVar2;
    local_2c[1] = (int)((ulonglong)uVar7 >> 0x20) + uVar3 + (uint)CARRY4(uVar6,uVar2);
  } while (local_28 == 0);
  *param_3 = local_20;
  return 0;
}



/* ===== FUN_0001153c @ 0001153c size=1404 ===== */

int FUN_0001153c(int param_1,undefined4 param_2,int *param_3,int param_4,uint param_5,int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r3;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_b4;
  uint local_b0;
  int iStack_ac;
  uint local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int iStack_2c;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_30 = 0;
  iStack_2c = 0;
  iVar5 = *(int *)(param_4 + 0x38);
  iVar4 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  local_34 = iVar4 >> 2;
  memset(&local_78,0,0x38);
  memset(&local_b0,0,0x38);
  if (DAT_00023124 != 0) {
    local_50 = 0x1000;
  }
  if (DAT_000230c4 != 0) {
    fsync(param_1);
  }
  local_1c = 0;
  local_28 = 0;
  *param_3 = 0;
  local_20 = 0;
  local_38 = 0;
  do {
    if (param_5 <= local_1c) {
      if ((DAT_00023124 != 0) && (*param_3 != 0)) {
        if (local_a0 != 0 || iStack_9c != 0) {
          local_30 = (local_78 - local_b0) + local_a8;
          iStack_2c = (iStack_74 - (iStack_ac + (uint)(local_78 < local_b0))) + iStack_a4 +
                      (uint)CARRY4(local_78 - local_b0,local_a8);
          if (iStack_2c == iStack_6c && local_30 == local_70) {
            local_30 = 0;
            iStack_2c = 0;
          }
        }
        FUN_00010bec(&local_78,*param_3 + -1,local_30,iStack_2c,param_2,param_4);
      }
      return local_38;
    }
    local_b4 = 0;
    if ((param_6 != 0) && (local_20 != 0)) {
      FUN_00012768(local_1c - 0xc,local_34);
      if (extraout_r1 == 0) {
        local_20 = local_20 + 1;
      }
      FUN_00012768((local_1c - local_34) + -0xc,local_34 * local_34);
      if (extraout_r1_00 == 0) {
        local_20 = local_20 + 1;
      }
      iVar4 = (int)local_34 >> 0x1f;
      uVar1 = (ulonglong)local_34 * (ulonglong)local_34;
      lVar2 = (ulonglong)local_34 * (uVar1 & 0xffffffff);
      FUN_00012958(((local_1c - local_34) - local_34 * local_34) + -0xc,0,(int)lVar2,
                   local_34 * (local_34 * iVar4 + local_34 * iVar4 + (int)(uVar1 >> 0x20)) +
                   (int)uVar1 * iVar4 + (int)((ulonglong)lVar2 >> 0x20));
      if (extraout_r2 == 0 && extraout_r3 == 0) {
        local_20 = local_20 + 1;
      }
    }
    local_3c = FUN_00010a88(param_1,local_1c,&local_b4);
    if (local_3c < 0) {
      return local_3c;
    }
    if (local_b4 != 0) {
      if ((*param_3 == 0) || (local_20 + 1 != local_b4)) {
LAB_000117b4:
        if ((*param_3 != 0) && (local_a0 != 0 || iStack_9c != 0)) {
          local_30 = (local_78 - local_b0) + local_a8;
          iStack_2c = (iStack_74 - (iStack_ac + (uint)(local_78 < local_b0))) + iStack_a4 +
                      (uint)CARRY4(local_78 - local_b0,local_a8);
          if (iStack_2c == iStack_6c && local_30 == local_70) {
            local_30 = 0;
            iStack_2c = 0;
          }
        }
        if ((DAT_00023124 != 0) && (*param_3 == 0)) {
          FUN_00010afc();
        }
        if ((DAT_00023124 != 0) && (*param_3 != 0)) {
          FUN_00010bec(&local_78,*param_3 + -1,local_30,iStack_2c,param_2,param_4);
        }
        if ((DAT_000230c0 != 0) && (local_30 != 0 || iStack_2c != 0)) {
          uVar7 = FUN_00012958(local_78,iStack_74,*(int *)(param_4 + 0x38),
                               *(int *)(param_4 + 0x38) >> 0x1f);
          uVar8 = FUN_00012958(local_70,iStack_6c,*(int *)(param_4 + 0x38),
                               *(int *)(param_4 + 0x38) >> 0x1f);
          uVar9 = FUN_00012958(local_30,iStack_2c,*(int *)(param_4 + 0x38),
                               *(int *)(param_4 + 0x38) >> 0x1f);
          uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
          printf("Discontinuity: Block %llu is at %llu (was %llu)\n",uVar3,(int)uVar7,
                 (int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),
                 (int)uVar9,uVar3);
        }
        local_b0 = local_78;
        iStack_ac = iStack_74;
        local_a8 = local_70;
        iStack_a4 = iStack_6c;
        local_a0 = (uint)local_68;
        iStack_9c = local_68._4_4_;
        uStack_98 = uStack_60;
        uStack_94 = uStack_5c;
        local_90 = local_58;
        uStack_8c = uStack_54;
        uStack_88 = local_50;
        uStack_84 = uStack_4c;
        local_80 = local_48;
        uStack_7c = uStack_44;
        *param_3 = *param_3 + 1;
        local_70 = local_b4 * *(int *)(param_4 + 0x38);
        iStack_6c = 0;
        local_78 = (uint)local_28;
        iStack_74 = local_28._4_4_;
        local_68 = 0;
      }
      else if (local_28._4_4_ != local_68._4_4_ + iStack_74 + (uint)CARRY4((uint)local_68,local_78)
               || (uint)local_28 != (uint)local_68 + local_78) goto LAB_000117b4;
      uVar6 = *(uint *)(param_4 + 0x38);
      local_68 = CONCAT44(((int)uVar6 >> 0x1f) + local_68._4_4_ + (uint)CARRY4(uVar6,(uint)local_68)
                          ,uVar6 + (uint)local_68);
      local_20 = local_b4;
    }
    local_1c = local_1c + 1;
    uVar6 = *(uint *)(param_4 + 0x38);
    local_28 = CONCAT44(((int)uVar6 >> 0x1f) + local_28._4_4_ + (uint)CARRY4(uVar6,(uint)local_28),
                        uVar6 + (uint)local_28);
  } while( true );
}



/* ===== FUN_00011ab8 @ 00011ab8 size=1848 ===== */

int FUN_00011ab8(char *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  FILE *__stream;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint local_b8;
  int local_b4;
  stat64 local_b0;
  FILE *local_44;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  local_20 = 1;
  local_b4 = 1;
  local_24 = -1;
  local_28 = 0;
  local_2c = 0;
  local_30 = open64(param_1,0);
  if (local_30 < 0) {
    piVar4 = __errno_location();
    local_2c = -*piVar4;
    perror("open");
    return local_2c;
  }
  iVar5 = fstat64(local_30,&local_b0);
  if (iVar5 < 0) {
    piVar4 = __errno_location();
    local_2c = -*piVar4;
    perror("stat");
  }
  else {
    if (local_b0.st_dev._4_4_ != DAT_000230d4 || (int)local_b0.st_dev != DAT_000230d0) {
      iVar5 = fstatfs(local_30,(statfs *)&DAT_000230d8);
      if (iVar5 < 0) {
        piVar4 = __errno_location();
        local_2c = -*piVar4;
        perror("fstatfs");
        goto LAB_000121d8;
      }
      iVar5 = ioctl(local_30,2,&DAT_00023118);
      if (iVar5 < 0) {
        DAT_00023118 = DAT_000230dc;
      }
      if (DAT_000230c0 != 0) {
        printf("Filesystem type is: %lx\n",DAT_000230d8);
      }
    }
    local_b0.st_blksize = DAT_00023118;
    if ((((DAT_000230d8 == 0xef51) || (DAT_000230d8 == 0xef52)) || (DAT_000230d8 == 0xef53)) &&
       ((iVar5 = ioctl(local_30,0x80046601,&local_b8), iVar5 == 0 && ((local_b8 & 0x80000) == 0))))
    {
      local_28 = 1;
    }
    if (local_28 != 0) {
      local_34 = FUN_00010a38(DAT_000230e0,DAT_00023118 << 3);
      if ((DAT_000230c0 != 0) &&
         (local_b0.st_dev._4_4_ != DAT_000230d4 || (int)local_b0.st_dev != DAT_000230d0)) {
        printf("Filesystem cylinder groups approximately %ld\n",local_34);
      }
      iVar5 = DAT_00023118 * 8;
      iVar6 = FUN_000126c0(DAT_000230ec >> 3,local_34);
      local_20 = (iVar5 - iVar6) + -3;
    }
    DAT_000230d0 = (int)local_b0.st_dev;
    DAT_000230d4 = local_b0.st_dev._4_4_;
    local_38 = FUN_000109bc(DAT_000230e0,0);
    if (DAT_00023080 < local_38) {
      DAT_00023080 = local_38;
    }
    local_40 = FUN_00012884(DAT_00023118 + (uint)local_b0.st_size + -1,
                            (local_b0.st_size._4_4_ +
                            (uint)CARRY4(DAT_00023118,(uint)local_b0.st_size)) -
                            (uint)(DAT_00023118 + (uint)local_b0.st_size == 0),DAT_00023118,0);
    if (DAT_00023120 == 0) {
      local_1c = FUN_0001095c(DAT_00023118);
      uVar3 = local_40;
    }
    else {
      local_1c = FUN_0001095c(DAT_00023120);
      uVar3 = local_40;
    }
    local_40._4_4_ = (int)(uVar3 >> 0x20);
    local_40._0_4_ = (undefined4)uVar3;
    local_38 = FUN_000109bc((undefined4)local_40,local_40._4_4_);
    local_40 = uVar3;
    if (DAT_0002307c < local_38) {
      DAT_0002307c = local_38;
    }
    if (DAT_000230c0 != 0) {
      lVar2 = (ulonglong)DAT_00023118 * (local_40 & 0xffffffff);
      uVar8 = DAT_00023118 * local_40._4_4_ + (int)((ulonglong)lVar2 >> 0x20);
      if (local_40 == 1) {
        uVar1 = 0x2d24;
      }
      else {
        uVar1 = 0x2d28;
      }
      printf("File size of %s is %llu (%llu block%s of %d bytes)\n",param_1,(uint)local_b0.st_size,
             local_b0.st_size._4_4_,
             (uint)lVar2 >> (local_1c & 0xff) | uVar8 << (0x20 - local_1c & 0xff) |
             uVar8 >> (local_1c - 0x20 & 0xff),uVar8 >> (local_1c & 0xff),uVar1 | 0x10000,
             1 << (local_1c & 0xff));
    }
    if (DAT_0002311c == 0) {
      local_2c = FUN_0001108c(local_30,local_1c,&local_b4,&local_b0);
      local_24 = 0;
    }
    if ((DAT_0002311c != 0) || (local_2c < 0)) {
      local_24 = FUN_0001153c(local_30,local_1c,&local_b4,&local_b0,(undefined4)local_40,local_28);
      __stream = stderr;
      if (local_24 < 0) {
        if ((local_24 == -0x16) || (local_24 == -0x19)) {
          fprintf(stderr,"%s: FIBMAP unsupported\n",param_1);
        }
        else if (local_24 == -1) {
          fprintf(stderr,"%s: FIBMAP requires root privileges\n",param_1);
        }
        else {
          pcVar7 = strerror(local_24);
          fprintf(__stream,"%s: FIBMAP error: %s",param_1,pcVar7);
        }
        local_2c = local_24;
        goto LAB_000121d8;
      }
      local_2c = 0;
      local_24 = FUN_00012788(local_24,local_20);
      local_24 = local_24 + 1;
    }
    if (local_b4 == 1) {
      printf("%s: 1 extent found",param_1);
    }
    else {
      printf("%s: %d extents found",param_1,local_b4);
    }
    if (((local_28 == 0) || (local_24 == 0)) || (local_b4 <= local_24)) {
      local_44 = stdout;
      if (stdout->_chain == (_IO_FILE *)0x0) {
        fputc(10,stdout);
      }
      else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
        pcVar7 = stdout->_IO_write_base;
        stdout->_IO_write_base = pcVar7 + 1;
        *pcVar7 = '\n';
      }
      else {
        __fputc_unlocked(10,stdout);
      }
    }
    else {
      if (local_24 < 2) {
        uVar8 = 0x2d24;
      }
      else {
        uVar8 = 0x2d28;
      }
      printf(", perfection would be %d extent%s\n",local_24,uVar8 | 0x10000);
    }
  }
LAB_000121d8:
  close(local_30);
  return local_2c;
}



/* ===== FUN_000121f0 @ 000121f0 size=56 ===== */

void FUN_000121f0(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [-b{blocksize}] [-BeksvxX] file ...\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000126c0 @ 000126c0 size=168 ===== */

ulonglong FUN_000126c0(uint param_1,uint param_2)

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



/* ===== FUN_00012768 @ 00012768 size=32 ===== */

void FUN_00012768(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000126c0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00012788 @ 00012788 size=220 ===== */

ulonglong FUN_00012788(uint param_1,uint param_2)

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



/* ===== FUN_00012884 @ 00012884 size=212 ===== */

undefined8 FUN_00012884(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (param_4 == 0 && param_3 == 0) {
    if (param_2 < 0) {
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
    }
    local_8 = param_2;
    iVar1 = raise(8);
    return CONCAT44(local_8,iVar1);
  }
  if (-1 < param_2) {
    if (param_4 < 0) {
      uVar2 = FUN_000129a4(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_000129a4();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_000129a4(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_000129a4(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_00012958 @ 00012958 size=76 ===== */

void FUN_00012958(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000129a4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000129a4 @ 000129a4 size=328 ===== */

undefined8 FUN_000129a4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00012aec size=16 ===== */

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



/* ===== <EXTERNAL>::memset @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatfs @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatfs(int __fildes,statfs *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


