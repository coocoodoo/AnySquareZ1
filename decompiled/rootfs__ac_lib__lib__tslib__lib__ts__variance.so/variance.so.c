// variance.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010474 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010498 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002200c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000104a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022010)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000104b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00022014)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022018)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104c8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002201c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000104d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022020)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000104e0 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00022024)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000104ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022028)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000104f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002202c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022030)(__ptr);
  return;
}



/* ===== entry @ 00010510 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001055c + 0x10528 == DAT_00010558 + 0x10520) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010560 + 0x10530 + DAT_00010564);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000105cc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010640 + 0x105e8;
  if (*(char *)(DAT_0001063c + 0x105dc) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010644) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010648 + 0x10608));
  }
  entry();
  if (*(int *)(iVar1 + DAT_0001064c) != 0) {
    __deregister_frame_info(DAT_00010650 + 0x10628);
  }
  *(undefined1 *)(DAT_00010654 + 0x10638) = 1;
  return;
}



/* ===== _INIT_0 @ 00010658 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010690 + 0x10668 + DAT_00010694) != 0) {
    __register_frame_info(DAT_0001069c + 0x10688,DAT_00010698 + 0x10684);
  }
  if (((DAT_000105c0 + 0x10580) - (DAT_000105bc + 0x10578) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000105c4 + 0x10588 + DAT_000105c8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000106a0 @ 000106a0 size=500 ===== */

int FUN_000106a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  
  if (param_3 < 1) {
    iVar5 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 0x28);
    iVar5 = 0;
    do {
      while ((*(uint *)(param_1 + 0x3c) & 8) == 0) {
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))
                          (*(int *)(param_1 + 4),&local_3c,1);
        if (iVar1 < 1) {
          return iVar5;
        }
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (local_34 == 0) goto LAB_000107bc;
LAB_000106f8:
        *(uint *)(param_1 + 0x3c) = uVar6 | 1;
        if ((uVar6 & 2) == 0) {
          *(int *)(param_1 + 0x14) = local_3c;
          *(int *)(param_1 + 0x18) = local_38;
          *(int *)(param_1 + 0x1c) = local_34;
          *(undefined4 *)(param_1 + 0x20) = uStack_30;
          *(int *)(param_1 + 0x24) = local_2c;
          *(uint *)(param_1 + 0x3c) = uVar6 | 3;
          goto LAB_00010744;
        }
        iVar1 = local_38 - *(int *)(param_1 + 0x18);
        iVar2 = local_3c - *(int *)(param_1 + 0x14);
        if (iVar2 * iVar2 + iVar1 * iVar1 <= *(int *)(param_1 + 0x10)) {
          *(uint *)(param_1 + 0x3c) = uVar6 & 0xfffffffb | 1;
          goto LAB_00010744;
        }
        if ((uVar6 & 4) == 0) {
          *(uint *)(param_1 + 0x3c) = uVar6 | 5;
        }
        else {
          *(int *)(param_1 + 0x14) = *piVar3;
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x34);
          piVar7 = (int *)(iVar5 * 0x14 + param_2);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x38);
          iVar1 = *(int *)(param_1 + 0x18);
          iVar2 = *(int *)(param_1 + 0x1c);
          iVar4 = *(int *)(param_1 + 0x20);
          iVar5 = iVar5 + 1;
          *piVar7 = *(int *)(param_1 + 0x14);
          piVar7[1] = iVar1;
          piVar7[2] = iVar2;
          piVar7[3] = iVar4;
          piVar7[4] = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x3c) = uVar6 & 0xfffffff3 | 9;
        }
        *piVar3 = local_3c;
        *(int *)(param_1 + 0x2c) = local_38;
        *(int *)(param_1 + 0x30) = local_34;
        *(undefined4 *)(param_1 + 0x34) = uStack_30;
        *(int *)(param_1 + 0x38) = local_2c;
        if (param_3 <= iVar5) {
          return iVar5;
        }
      }
      uVar6 = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
      local_3c = *piVar3;
      local_38 = *(int *)(param_1 + 0x2c);
      local_34 = *(int *)(param_1 + 0x30);
      uStack_30 = *(undefined4 *)(param_1 + 0x34);
      local_2c = *(int *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x3c) = uVar6;
      if (local_34 != 0) goto LAB_000106f8;
LAB_000107bc:
      *(int *)(param_1 + 0x14) = local_3c;
      *(int *)(param_1 + 0x18) = local_38;
      *(int *)(param_1 + 0x1c) = local_34;
      *(undefined4 *)(param_1 + 0x20) = uStack_30;
      *(int *)(param_1 + 0x24) = local_2c;
      *(uint *)(param_1 + 0x3c) = uVar6 & 0xfffffff0;
LAB_00010744:
      piVar7 = (int *)(iVar5 * 0x14 + param_2);
      iVar1 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = iVar5 + 1;
      *piVar7 = *(int *)(param_1 + 0x14);
      piVar7[1] = iVar1;
      piVar7[2] = iVar2;
      piVar7[3] = iVar4;
      piVar7[4] = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x14) = local_3c;
      *(int *)(param_1 + 0x18) = local_38;
      *(int *)(param_1 + 0x1c) = local_34;
      *(undefined4 *)(param_1 + 0x20) = uStack_30;
      *(int *)(param_1 + 0x24) = local_2c;
    } while (iVar5 < param_3);
  }
  return iVar5;
}



/* ===== variance_mod_init @ 00010894 size=140 ===== */

void * variance_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  
  __ptr = malloc(0x54);
  iVar1 = DAT_00010920;
  if (__ptr != (void *)0x0) {
    *(undefined2 *)((int)__ptr + 0x40) = 1;
    *(int *)((int)__ptr + 0xc) = iVar1 + 0x108c8;
    *(undefined4 *)((int)__ptr + 0x3c) = 0;
    *(undefined4 *)((int)__ptr + 0x44) = 0;
    *(undefined4 *)((int)__ptr + 0x10) = 0x1e;
    *(undefined4 *)((int)__ptr + 0x4c) = 0;
    *(undefined4 *)((int)__ptr + 0x48) = 0;
    *(undefined4 *)((int)__ptr + 0x50) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x108d4,1,param_2);
    if (iVar1 == 0) {
      *(int *)((int)__ptr + 0x10) = *(int *)((int)__ptr + 0x10) * *(int *)((int)__ptr + 0x10);
    }
    else {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010990 @ 00010990 size=100 ===== */

undefined4 FUN_00010990(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if (((uVar2 != 0xffffffff) || (*piVar1 != 0x22)) && (*piVar1 = iVar3, param_3 == 1)) {
    *(ulong *)(param_1 + 0x10) = uVar2;
    return 0;
  }
  return 0xffffffff;
}



/* ===== _fini @ 00010f40 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


