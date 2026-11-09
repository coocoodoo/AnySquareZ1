// median.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010558 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memmove @ 0001057c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002200c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::qsort @ 00010588 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00022010)(__base);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010594 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022014)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000105a0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000105ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002201c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000105b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00022020)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000105c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022024)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000105dc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002202c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000105e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022030)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000105f4 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00022034)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022038)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001060c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002203c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022040)(__ptr);
  return;
}



/* ===== entry @ 00010624 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010670 + 0x1063c == DAT_0001066c + 0x10634) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010674 + 0x10644 + DAT_00010678);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000106e0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010754 + 0x106fc;
  if (*(char *)(DAT_00010750 + 0x106f0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010758) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001075c + 0x1071c));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010760) != 0) {
    __deregister_frame_info(DAT_00010764 + 0x1073c);
  }
  *(undefined1 *)(DAT_00010768 + 0x1074c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001076c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000107a4 + 0x1077c + DAT_000107a8) != 0) {
    __register_frame_info(DAT_000107b0 + 0x1079c,DAT_000107ac + 0x10798);
  }
  if (((DAT_000106d4 + 0x10694) - (DAT_000106d0 + 0x1068c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000106d8 + 0x1069c + DAT_000106dc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000107b4 @ 000107b4 size=24 ===== */

undefined4 FUN_000107b4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_000107cc @ 000107cc size=24 ===== */

undefined4 FUN_000107cc(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== median_mod_init @ 000107e4 size=180 ===== */

undefined4 * median_mod_init(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  __ptr = malloc(0x38);
  iVar2 = DAT_00010898;
  if (__ptr != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iVar4 = DAT_00010898 + 0x10818;
    *__ptr = 0;
    __ptr[1] = uVar1;
    __ptr[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    __ptr[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __ptr[0xc] = 0;
    __ptr[6] = 0;
    __ptr[7] = uVar1;
    __ptr[3] = iVar4;
    __ptr[8] = 0;
    __ptr[9] = uVar1;
    __ptr[0xd] = 0;
    __ptr[10] = 0;
    __ptr[0xb] = uVar1;
    __ptr[6] = 0;
    __ptr[8] = 0;
    __ptr[4] = 0;
    __ptr[5] = uVar1;
    __ptr[10] = 0;
    iVar2 = tslib_parse_vars(__ptr,iVar2 + 0x10824,1,param_2);
    if (iVar2 == 0) {
      if (__ptr[5] == 0) {
        pvVar3 = malloc(0x3c);
        __ptr[4] = 3;
        __ptr[5] = pvVar3;
        return __ptr;
      }
    }
    else {
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_0001089c @ 0001089c size=136 ===== */

undefined4 FUN_0001089c(void *param_1)

{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  int iVar2;
  
  free(*(void **)((int)param_1 + 0x14));
  iVar1 = *(int *)((int)param_1 + 0x28);
  __ptr_00 = *(void **)((int)param_1 + 0x18);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      __ptr = *(void **)((int)__ptr_00 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        __ptr_00 = *(void **)((int)param_1 + 0x18);
        iVar1 = *(int *)((int)param_1 + 0x28);
      }
    } while (iVar2 < iVar1);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (*(void **)((int)param_1 + 0x20) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x20));
  }
  free(*(void **)((int)param_1 + 0x30));
  free(*(void **)((int)param_1 + 0x34));
  free(param_1);
  return 0;
}



/* ===== FUN_00010e2c @ 00010e2c size=488 ===== */

int FUN_00010e2c(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  __compar_fn_t __compar;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  if (0 < iVar1) {
    iVar8 = 0;
    __compar = (__compar_fn_t)(DAT_00011014 + 0x10e68);
    do {
      iVar9 = param_2[2];
      memmove(*(void **)(param_1 + 0x14),(void *)((int)*(void **)(param_1 + 0x14) + 0x14),
              (*(int *)(param_1 + 0x10) + -1) * 0x14);
      iVar10 = *(int *)(param_1 + 0x10);
      puVar14 = *(undefined4 **)(param_1 + 0x14);
      uVar3 = param_2[1];
      uVar5 = param_2[2];
      uVar7 = param_2[3];
      puVar6 = puVar14 + iVar10 * 5;
      puVar6[-5] = *param_2;
      puVar6[-4] = uVar3;
      puVar6[-3] = uVar5;
      puVar6[-2] = uVar7;
      pvVar2 = *(void **)(param_1 + 0x30);
      puVar6[-1] = param_2[4];
      if (iVar10 == 0) {
        sVar4 = 0;
      }
      else {
        puVar11 = (undefined4 *)((int)pvVar2 + iVar10 * 4);
        do {
          puVar6 = puVar6 + -5;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar6;
        } while (puVar6 != puVar14);
        sVar4 = *(size_t *)(param_1 + 0x10);
      }
      qsort(pvVar2,sVar4,4,__compar);
      iVar10 = *(int *)(param_1 + 0x10);
      pvVar2 = *(void **)(param_1 + 0x30);
      *param_2 = *(undefined4 *)((int)pvVar2 + (iVar10 / 2) * 4);
      sVar4 = 0;
      if (iVar10 != 0) {
        iVar12 = *(int *)(param_1 + 0x14);
        puVar6 = (undefined4 *)((int)pvVar2 + iVar10 * 4);
        iVar10 = iVar10 * 0x14 + iVar12;
        do {
          puVar14 = (undefined4 *)(iVar10 + -0x10);
          iVar10 = iVar10 + -0x14;
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar14;
        } while (iVar12 != iVar10);
        sVar4 = *(size_t *)(param_1 + 0x10);
      }
      qsort(pvVar2,sVar4,4,__compar);
      iVar10 = *(int *)(param_1 + 0x10);
      param_2[1] = *(undefined4 *)(*(int *)(param_1 + 0x30) + (iVar10 / 2) * 4);
      if (iVar10 == 0) {
        pvVar2 = *(void **)(param_1 + 0x34);
        sVar4 = 0;
      }
      else {
        iVar13 = *(int *)(param_1 + 0x14);
        pvVar2 = *(void **)(param_1 + 0x34);
        iVar12 = iVar10 * 0x14 + iVar13;
        puVar6 = (undefined4 *)((int)pvVar2 + iVar10 * 4);
        do {
          puVar14 = (undefined4 *)(iVar12 + -0xc);
          iVar12 = iVar12 + -0x14;
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar14;
        } while (iVar13 != iVar12);
        sVar4 = *(size_t *)(param_1 + 0x10);
      }
      qsort(pvVar2,sVar4,4,(__compar_fn_t)(DAT_00011018 + 0x10f90));
      iVar10 = *(int *)(param_1 + 0x10);
      param_2[2] = *(undefined4 *)(*(int *)(param_1 + 0x34) + (iVar10 / 2) * 4);
      if (iVar9 == 0) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          memset(*(void **)(param_1 + 0x14),0,iVar10 * 0x14);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          param_2[2] = 0;
        }
      }
      else if (*(int *)(param_1 + 0x1c) == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 5;
    } while (iVar1 != iVar8);
  }
  return iVar1;
}



/* ===== _fini @ 000110e0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memmove @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


