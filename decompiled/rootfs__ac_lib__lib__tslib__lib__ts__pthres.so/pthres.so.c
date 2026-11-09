// pthres.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010484 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memmove @ 000104a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002100c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000104b4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021010)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000104c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00021014)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000104cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00021018)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002101c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104e4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021020)();
  return;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000104f0 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00021024)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000104fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021028)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010508 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002102c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010514 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021030)(__ptr);
  return;
}



/* ===== entry @ 00010520 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001056c + 0x10538 == DAT_00010568 + 0x10530) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010570 + 0x10540 + DAT_00010574);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000105dc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010650 + 0x105f8;
  if (*(char *)(DAT_0001064c + 0x105ec) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010654) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010658 + 0x10618));
  }
  entry();
  if (*(int *)(iVar1 + DAT_0001065c) != 0) {
    __deregister_frame_info(DAT_00010660 + 0x10638);
  }
  *(undefined1 *)(DAT_00010664 + 0x10648) = 1;
  return;
}



/* ===== _INIT_0 @ 00010668 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000106a0 + 0x10678 + DAT_000106a4) != 0) {
    __register_frame_info(DAT_000106ac + 0x10698,DAT_000106a8 + 0x10694);
  }
  if (((DAT_000105d0 + 0x10590) - (DAT_000105cc + 0x10588) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000105d4 + 0x10598 + DAT_000105d8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== pthres_mod_init @ 000106b0 size=128 ===== */

void * pthres_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = malloc(0x28);
  iVar1 = DAT_00010730;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_00010730 + 0x106e4;
    *(undefined4 *)((int)__ptr + 0x10) = 1;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined4 *)((int)__ptr + 0x14) = 0x7fffffff;
    *(undefined4 *)((int)__ptr + 0x18) = 0;
    *(undefined4 *)((int)__ptr + 0x1c) = 0;
    *(undefined4 *)((int)__ptr + 0x20) = 0;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x106f0,2,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010734 @ 00010734 size=72 ===== */

undefined4 FUN_00010734(void *param_1)

{
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x18));
  }
  if (*(void **)((int)param_1 + 0x1c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x1c));
  }
  if (*(void **)((int)param_1 + 0x20) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x20));
  }
  free(param_1);
  return 0;
}



/* ===== FUN_0001077c @ 0001077c size=112 ===== */

undefined4 FUN_0001077c(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = __errno_location();
  iVar4 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if ((uVar2 == 0xffffffff) && (*piVar1 == 0x22)) {
    uVar3 = 0xffffffff;
  }
  else {
    *piVar1 = iVar4;
    if (param_3 == 0) {
      *(ulong *)(param_1 + 0x10) = uVar2;
      uVar3 = 0;
    }
    else if (param_3 == 1) {
      *(ulong *)(param_1 + 0x14) = uVar2;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== FUN_000107ec @ 000107ec size=416 ===== */

int FUN_000107ec(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    if ((int)param_3 <= *(int *)(param_1 + 0x24)) goto LAB_00010818;
    free(*(void **)(param_1 + 0x18));
  }
  pvVar1 = calloc(param_3,4);
  *(void **)(param_1 + 0x18) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return -0xc;
  }
  *(size_t *)(param_1 + 0x24) = param_3;
LAB_00010818:
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar1 = calloc(param_3,4);
    *(void **)(param_1 + 0x1c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return -0xc;
    }
    *(size_t *)(param_1 + 0x24) = param_3;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar1 = calloc(param_3,4);
    *(void **)(param_1 + 0x20) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return -0xc;
    }
    *(size_t *)(param_1 + 0x24) = param_3;
  }
  pcVar6 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  if (pcVar6 == (code *)0x0) {
    return -0x26;
  }
  iVar2 = (*pcVar6)(*(int *)(param_1 + 4),param_2,param_3,param_4);
  if (iVar2 < 1) {
    return iVar2;
  }
  iVar7 = 0;
  do {
    if (0 < (int)param_3) {
      sVar4 = 0;
      puVar5 = *(undefined4 **)(param_2 + iVar7 * 4);
      do {
        while ((*(ushort *)((int)puVar5 + 0x46) & 1) == 0) {
LAB_000108e4:
          sVar4 = sVar4 + 1;
          puVar5 = puVar5 + 0x12;
          if (param_3 == sVar4) goto LAB_0001094c;
        }
        if ((uint)puVar5[2] < *(uint *)(param_1 + 0x10)) {
          if (*(int *)(*(int *)(param_1 + 0x20) + sVar4 * 4) == 0) {
            *(undefined2 *)((int)puVar5 + 0x46) = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x18);
            iVar3 = *(int *)(param_1 + 0x1c);
            *(undefined4 *)(*(int *)(param_1 + 0x20) + sVar4 * 4) = 0;
            puVar5[2] = 0;
            *puVar5 = *(undefined4 *)(iVar8 + sVar4 * 4);
            puVar5[1] = *(undefined4 *)(iVar3 + sVar4 * 4);
          }
          goto LAB_000108e4;
        }
        if (*(uint *)(param_1 + 0x14) < (uint)puVar5[2]) {
          *(undefined2 *)((int)puVar5 + 0x46) = 0;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x18);
          iVar3 = *(int *)(param_1 + 0x1c);
          *(undefined4 *)(*(int *)(param_1 + 0x20) + sVar4 * 4) = 1;
          *(undefined4 *)(iVar8 + sVar4 * 4) = *puVar5;
          *(undefined4 *)(iVar3 + sVar4 * 4) = puVar5[1];
        }
        sVar4 = sVar4 + 1;
        puVar5 = puVar5 + 0x12;
      } while (param_3 != sVar4);
    }
LAB_0001094c:
    iVar7 = iVar7 + 1;
    if (iVar2 == iVar7) {
      return iVar2;
    }
  } while( true );
}



/* ===== FUN_0001098c @ 0001098c size=224 ===== */

int FUN_0001098c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  iVar3 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  iVar2 = DAT_00010a70;
  iVar1 = DAT_00010a6c;
  if ((iVar3 < 0) || (iVar3 == 0)) {
    return iVar3;
  }
  iVar7 = 0;
  iVar8 = 0;
  puVar10 = (undefined4 *)(DAT_00010a6c + 0x109d4);
  piVar9 = (int *)(DAT_00010a70 + 0x109dc);
  do {
    if ((uint)param_2[2] < *(uint *)(param_1 + 0x10)) {
      if (*piVar9 == 0) goto LAB_00010a28;
      uVar4 = *(undefined4 *)(iVar2 + 0x109e0);
      uVar5 = *(undefined4 *)(iVar2 + 0x109e4);
      *piVar9 = 0;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = 0;
LAB_00010a08:
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 5;
    }
    else {
      if ((uint)param_2[2] <= *(uint *)(param_1 + 0x14)) {
        uVar4 = *param_2;
        uVar5 = param_2[1];
        *puVar10 = 1;
        *(undefined4 *)(iVar1 + 0x109d8) = uVar4;
        *(undefined4 *)(iVar1 + 0x109dc) = uVar5;
        goto LAB_00010a08;
      }
LAB_00010a28:
      iVar6 = (iVar3 - iVar8) + -1;
      if (iVar6 < 1) {
        return iVar8;
      }
      memmove(param_2,param_2 + 5,iVar6 * 0x14);
    }
    iVar7 = iVar7 + 1;
    if (iVar3 == iVar7) {
      return iVar8;
    }
  } while( true );
}



/* ===== _fini @ 00010a74 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memmove @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

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


