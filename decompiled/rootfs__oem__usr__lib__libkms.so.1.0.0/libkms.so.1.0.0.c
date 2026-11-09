// libkms.so.1.0.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000106c0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::snprintf @ 000106e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002200c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 000106f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00022010)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000106fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_00022014)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::readlink @ 00010708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_00022018)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010714 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002201c)();
  return;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00010720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_00022020)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 0001072c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00022024)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::drmIoctl @ 00010738 size=12 ===== */

void drmIoctl(void)

{
  (*(code *)PTR_drmIoctl_00022028)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00010744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002202c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00010750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001075c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022034)();
  return;
}



/* ===== <EXTERNAL>::drmGetCap @ 00010768 size=12 ===== */

void drmGetCap(void)

{
  (*(code *)PTR_drmGetCap_00022038)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 00010774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002203c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00010780 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022040)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 0001078c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00022044)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022048)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000107a4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002204c)();
  return;
}



/* ===== <EXTERNAL>::free @ 000107b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022050)(__ptr);
  return;
}



/* ===== entry @ 000107bc size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010808 + 0x107d4 == DAT_00010804 + 0x107cc) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001080c + 0x107dc + DAT_00010810);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00010878 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000108ec + 0x10894;
  if (*(char *)(DAT_000108e8 + 0x10888) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000108f0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000108f4 + 0x108b4));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000108f8) != 0) {
    __deregister_frame_info(DAT_000108fc + 0x108d4);
  }
  *(undefined1 *)(DAT_00010900 + 0x108e4) = 1;
  return;
}



/* ===== _INIT_0 @ 00010904 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_0001093c + 0x10914 + DAT_00010940) != 0) {
    __register_frame_info(DAT_00010948 + 0x10934,DAT_00010944 + 0x10930);
  }
  if (((DAT_0001086c + 0x1082c) - (DAT_00010868 + 0x10824) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010870 + 0x10834 + DAT_00010874);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_0001094c @ 0001094c size=256 ===== */

undefined4 FUN_0001094c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ssize_t sVar4;
  char *pcVar5;
  stat64 sStack_490;
  char local_428 [516];
  char local_224 [520];
  
  local_428[0] = '\0';
  local_428[1] = '\0';
  local_428[2] = '\0';
  local_428[3] = '\0';
  memset(local_428 + 4,0,0x1fd);
  local_224[0] = '\0';
  local_224[1] = '\0';
  local_224[2] = '\0';
  local_224[3] = '\0';
  memset(local_224 + 4,0,0x1fd);
  iVar1 = fstat64(param_1,&sStack_490);
  if ((iVar1 == 0) && ((sStack_490.st_mode & 0xf000) == 0x2000)) {
    uVar2 = gnu_dev_major(sStack_490.st_rdev);
    uVar3 = gnu_dev_minor(sStack_490.st_rdev);
    snprintf(local_428,0x200,(char *)(DAT_00010a4c + 0x10a08),uVar2,uVar3);
    sVar4 = readlink(local_428,local_224,0x200);
    if ((-1 < sVar4) && (pcVar5 = strrchr(local_224,0x2f), pcVar5 != (char *)0x0)) {
      pcVar5 = strdup(pcVar5 + 1);
      *param_2 = pcVar5;
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== FUN_00010a50 @ 00010a50 size=60 ===== */

int FUN_00010a50(undefined4 param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  void *local_c;
  
  uVar3 = param_1;
  local_c = param_2;
  iVar1 = FUN_00010cd4();
  iVar2 = 0;
  if ((iVar1 != 0) &&
     (iVar2 = FUN_0001094c(param_1,&local_c,extraout_r2,extraout_r3,uVar3), iVar2 == 0)) {
    free(local_c);
    iVar2 = -0x26;
  }
  return iVar2;
}



/* ===== FUN_00010ac0 @ 00010ac0 size=16 ===== */

undefined4 FUN_00010ac0(void *param_1)

{
  free(param_1);
  return 0;
}



/* ===== FUN_00010ad0 @ 00010ad0 size=204 ===== */

int FUN_00010ad0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 *param_6)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_5 + iVar2 * 4);
    if (iVar1 == 0) {
      __ptr = calloc(1,0x1c);
      if (__ptr == (int *)0x0) {
        iVar2 = -0xc;
      }
      else {
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_2c = 0;
        local_20 = 0;
        local_30 = 0x20;
        local_38 = param_3;
        uStack_34 = param_2;
        iStack_1c = iStack_28;
        iVar2 = drmIoctl(*(undefined4 *)(param_1 + 0x1c),DAT_00010b9c,&local_38);
        if (iVar2 == 0) {
          *__ptr = param_1;
          __ptr[5] = iStack_28;
          __ptr[2] = local_20;
          __ptr[4] = local_24;
          *param_6 = __ptr;
        }
        else {
          free(__ptr);
        }
      }
      return iVar2;
    }
    if (2 < iVar1 - 1U) break;
    iVar2 = iVar2 + 2;
  }
  return -0x16;
}



/* ===== FUN_00010ba0 @ 00010ba0 size=108 ===== */

int FUN_00010ba0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_14;
  undefined4 uStack_10;
  
  piVar2 = param_1;
  uStack_10 = param_3;
  if ((void *)param_1[1] != (void *)0x0) {
    local_14 = param_2;
    munmap((void *)param_1[1],param_1[2]);
    param_1[1] = 0;
  }
  local_14 = param_1[5];
  iVar1 = drmIoctl(*(undefined4 *)(*param_1 + 0x1c),DAT_00010c0c,&local_14,*param_1,piVar2);
  if (iVar1 == 0) {
    free(param_1);
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== FUN_00010cd4 @ 00010cd4 size=196 ===== */

undefined4 FUN_00010cd4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = drmGetCap(param_1,param_2,1,0,&local_18,param_2);
  if (iVar1 == 0) {
    if ((int)local_18 != 0 || local_18._4_4_ != 0) {
      piVar2 = calloc(1,0x20);
      iVar1 = DAT_00010d98;
      if (piVar2 != (int *)0x0) {
        piVar2[7] = param_1;
        piVar2[2] = iVar1 + 0x10d38;
        iVar1 = DAT_00010d9c;
        *param_2 = piVar2;
        piVar2[4] = iVar1 + 0x10d48;
        piVar2[5] = DAT_00010da0 + 0x10d54;
        piVar2[3] = DAT_00010da4 + 0x10d60;
        piVar2[6] = DAT_00010da8 + 0x10d6c;
        *piVar2 = DAT_00010dac + 0x10d78;
        piVar2[1] = DAT_00010db0 + 0x10d84;
        return 0;
      }
      return 0xfffffff4;
    }
  }
  return 0xffffffea;
}



/* ===== kms_create @ 00010db4 size=4 ===== */

int kms_create(undefined4 param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  void *pvStack_c;
  
  uVar3 = param_1;
  pvStack_c = param_2;
  iVar1 = FUN_00010cd4();
  iVar2 = 0;
  if ((iVar1 != 0) &&
     (iVar2 = FUN_0001094c(param_1,&pvStack_c,extraout_r2,extraout_r3,uVar3), iVar2 == 0)) {
    free(pvStack_c);
    iVar2 = -0x26;
  }
  return iVar2;
}



/* ===== kms_get_prop @ 00010db8 size=24 ===== */

undefined4 kms_get_prop(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*param_1)();
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== kms_destroy @ 00010dd0 size=52 ===== */

undefined4 kms_destroy(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    return 0;
  }
  return 0;
}



/* ===== kms_bo_create @ 00010e04 size=156 ===== */

undefined4 kms_bo_create(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = 1;
  iVar6 = 0;
  iVar8 = 0;
  for (piVar4 = param_2; iVar3 = *piVar4, iVar3 != 0; piVar4 = piVar4 + 2) {
    iVar5 = piVar4[1];
    iVar7 = iVar6;
    iVar9 = iVar5;
    if (((iVar3 != 2) && (iVar7 = iVar5, iVar9 = iVar8, iVar3 != 3)) &&
       (iVar2 = iVar5, iVar7 = iVar6, iVar3 != 1)) goto LAB_00010e98;
    iVar6 = iVar7;
    iVar8 = iVar9;
  }
  if ((iVar6 == 0 || iVar8 == 0) || ((iVar2 == 2 && (iVar6 != 0x40 || iVar8 != 0x40)))) {
LAB_00010e98:
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = (**(code **)(param_1 + 8))(param_1,iVar8,iVar6,iVar2,param_2,param_3);
  }
  return uVar1;
}



/* ===== kms_bo_get_prop @ 00010ea0 size=48 ===== */

undefined4 kms_bo_get_prop(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    if (param_2 != 5) {
      return 0xffffffea;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  *param_3 = uVar1;
  return 0;
}



/* ===== kms_bo_map @ 00010ed0 size=12 ===== */

void kms_bo_map(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* ===== kms_bo_unmap @ 00010edc size=12 ===== */

void kms_bo_unmap(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}



/* ===== kms_bo_destroy @ 00010ee8 size=44 ===== */

void kms_bo_destroy(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  return;
}



/* ===== _fini @ 00010f14 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmIoctl @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmIoctl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmGetCap @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmGetCap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


