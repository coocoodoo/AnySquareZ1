// dejitter.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010474 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010498 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002100c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000104a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00021010)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000104b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00021014)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00021018)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104c8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002101c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000104d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00021020)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000104e0 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00021024)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000104ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021028)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000104f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002102c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021030)(__ptr);
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



/* ===== FUN_000106a0 @ 000106a0 size=464 ===== */

int FUN_000106a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_2c;
  
  local_2c = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  if (local_2c < 1) {
    local_2c = 0;
  }
  else {
    param_2 = param_2 + 0x14;
    iVar6 = local_2c * 0x14 + param_2;
    iVar1 = DAT_00010870 + 0x106e8;
    do {
      iVar13 = *(int *)(param_2 + -0xc);
      if (iVar13 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x14);
        uVar5 = *(uint *)(param_1 + 0x18);
        iVar16 = *(int *)(param_2 + -0x14);
        iVar14 = *(int *)(param_2 + -0x10);
        if (iVar7 == 0) {
          iVar2 = uVar5 * 0xc + param_1;
          *(int *)(iVar2 + 0x1c) = iVar16;
          *(int *)(iVar2 + 0x20) = iVar14;
          *(int *)(iVar2 + 0x24) = iVar13;
LAB_00010700:
          iVar7 = iVar7 + 1;
          *(int *)(param_1 + 0x14) = iVar7;
          if (iVar7 != 1) goto LAB_000107ac;
        }
        else {
          iVar2 = (uVar5 - 1 & 3) * 0xc + param_1;
          iVar11 = iVar14 - *(int *)(iVar2 + 0x20);
          iVar2 = iVar16 - *(int *)(iVar2 + 0x1c);
          iVar3 = uVar5 * 0xc + param_1;
          if (*(int *)(param_1 + 0x10) < iVar2 * iVar2 + iVar11 * iVar11) {
            iVar7 = 0;
            *(int *)(iVar3 + 0x1c) = iVar16;
            *(int *)(iVar3 + 0x20) = iVar14;
            *(int *)(iVar3 + 0x24) = iVar13;
            goto LAB_00010700;
          }
          *(int *)(iVar3 + 0x1c) = iVar16;
          *(int *)(iVar3 + 0x20) = iVar14;
          *(int *)(iVar3 + 0x24) = iVar13;
          if (iVar7 < 4) goto LAB_00010700;
LAB_000107ac:
          iVar14 = iVar1 + (iVar7 + -2) * 5;
          if (iVar7 < 1) {
            uVar10 = 0;
            uVar12 = uVar10;
            uVar15 = uVar10;
          }
          else {
            uVar15 = 0;
            pbVar9 = (byte *)(iVar14 + -1);
            uVar10 = 0;
            uVar12 = 0;
            uVar8 = uVar5;
            while( true ) {
              iVar16 = uVar8 * 0xc + param_1;
              pbVar9 = pbVar9 + 1;
              uVar4 = (uint)*pbVar9;
              uVar8 = uVar8 - 1 & 3;
              uVar15 = iVar13 * uVar4 + uVar15;
              uVar12 = *(int *)(iVar16 + 0x1c) * uVar4 + uVar12;
              uVar10 = *(int *)(iVar16 + 0x20) * uVar4 + uVar10;
              if ((byte *)(iVar14 + iVar7 + -1) == pbVar9) break;
              iVar13 = *(int *)(uVar8 * 0xc + param_1 + 0x24);
            }
          }
          *(int *)(param_2 + -0x14) = (int)uVar12 >> *(sbyte *)(iVar14 + 4);
          *(int *)(param_2 + -0x10) = (int)uVar10 >> *(sbyte *)(iVar14 + 4);
          *(uint *)(param_2 + -0xc) = uVar15 >> *(sbyte *)(iVar14 + 4);
        }
        *(uint *)(param_1 + 0x18) = uVar5 + 1 & 3;
      }
      param_2 = param_2 + 0x14;
    } while (param_2 != iVar6);
  }
  return local_2c;
}



/* ===== dejitter_mod_init @ 00010874 size=152 ===== */

void * dejitter_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__s;
  int iVar1;
  
  __s = malloc(0x5c);
  if (__s != (void *)0x0) {
    memset(__s,0,0x4c);
    iVar1 = DAT_0001090c + 0x108bc;
    *(int *)((int)__s + 0xc) = DAT_0001090c + 0x108b0;
    *(undefined4 *)((int)__s + 0x18) = 0;
    *(undefined4 *)((int)__s + 0x54) = 0;
    *(undefined4 *)((int)__s + 0x10) = 100;
    *(undefined4 *)((int)__s + 0x4c) = 0;
    *(undefined4 *)((int)__s + 0x50) = 0;
    *(undefined4 *)((int)__s + 0x58) = 0;
    iVar1 = tslib_parse_vars(__s,iVar1,1,param_2);
    if (iVar1 == 0) {
      *(int *)((int)__s + 0x10) = *(int *)((int)__s + 0x10) * *(int *)((int)__s + 0x10);
    }
    else {
      free(__s);
      __s = (void *)0x0;
    }
  }
  return __s;
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



/* ===== _fini @ 00010d64 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


