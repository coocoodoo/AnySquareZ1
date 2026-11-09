// debounce.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010478 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memmove @ 0001049c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002100c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000104a8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021010)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000104b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00021014)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000104c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00021018)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002101c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104d8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021020)();
  return;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000104e4 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00021024)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000104f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021028)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000104fc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002102c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010508 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021030)(__ptr);
  return;
}



/* ===== entry @ 00010518 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010564 + 0x10530 == DAT_00010560 + 0x10528) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010568 + 0x10538 + DAT_0001056c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000105d4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010648 + 0x105f0;
  if (*(char *)(DAT_00010644 + 0x105e4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001064c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010650 + 0x10610));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010654) != 0) {
    __deregister_frame_info(DAT_00010658 + 0x10630);
  }
  *(undefined1 *)(DAT_0001065c + 0x10640) = 1;
  return;
}



/* ===== _INIT_0 @ 00010660 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010698 + 0x10670 + DAT_0001069c) != 0) {
    __register_frame_info(DAT_000106a4 + 0x10690,DAT_000106a0 + 0x1068c);
  }
  if (((DAT_000105c8 + 0x10588) - (DAT_000105c4 + 0x10580) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000105cc + 0x10590 + DAT_000105d0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== debounce_mod_init @ 000106a8 size=128 ===== */

void * debounce_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = malloc(0x38);
  iVar1 = DAT_00010728;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_00010728 + 0x106dc;
    *(undefined4 *)((int)__ptr + 0x10) = 0;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined8 *)((int)__ptr + 0x18) = 0;
    *(undefined4 *)((int)__ptr + 0x20) = 0;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    *(undefined4 *)((int)__ptr + 0x28) = 0;
    *(undefined4 *)((int)__ptr + 0x2c) = 0;
    *(undefined4 *)((int)__ptr + 0x30) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x106e8,1,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_0001072c @ 0001072c size=56 ===== */

undefined4 FUN_0001072c(void *param_1)

{
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x28));
  }
  free(param_1);
  return 0;
}



/* ===== FUN_00010764 @ 00010764 size=96 ===== */

undefined4 FUN_00010764(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = __errno_location();
  iVar4 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if (((uVar2 == 0xffffffff) && (*piVar1 == 0x22)) || (*piVar1 = iVar4, param_3 != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar2;
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000107c4 @ 000107c4 size=548 ===== */

int FUN_000107c4(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  double dVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  int local_40;
  int local_38;
  
  if (*(void **)(param_1 + 0x30) == (void *)0x0) {
LAB_000109b0:
    pvVar2 = calloc(param_3,4);
    *(void **)(param_1 + 0x30) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(size_t *)(param_1 + 0x2c) = param_3;
      goto LAB_000107f8;
    }
LAB_000109d0:
    local_38 = -0xc;
  }
  else {
    if (*(int *)(param_1 + 0x2c) < (int)param_3) {
      free(*(void **)(param_1 + 0x30));
      goto LAB_000109b0;
    }
LAB_000107f8:
    if (*(int *)(param_1 + 0x24) == 0) {
      pvVar2 = calloc(param_3,8);
      *(void **)(param_1 + 0x24) = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_000109d0;
      *(size_t *)(param_1 + 0x2c) = param_3;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      pvVar2 = calloc(param_3,4);
      *(void **)(param_1 + 0x28) = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_000109d0;
      *(size_t *)(param_1 + 0x2c) = param_3;
    }
    pcVar5 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    if (pcVar5 == (code *)0x0) {
      local_38 = -0x26;
    }
    else {
      local_38 = (*pcVar5)(*(int *)(param_1 + 4),param_2,param_3,param_4);
      dVar1 = DAT_000109e8;
      if ((-1 < local_38) && (local_38 != 0)) {
        local_40 = 0;
        do {
          if (0 < (int)param_3) {
            iVar6 = 0;
            iVar7 = *(int *)(param_2 + local_40 * 4);
            do {
              if ((*(ushort *)(iVar7 + 0x46) & 1) != 0) {
                dVar12 = (double)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x3c),
                                                     (byte)(in_fpscr >> 0x16) & 3);
                dVar11 = (double)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x40),
                                                     (byte)(in_fpscr >> 0x16) & 3);
                dVar11 = dVar11 + dVar12 * dVar1;
                uVar13 = FUN_00010ae0(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20));
                iVar3 = *(int *)(param_1 + 0x24);
                iVar10 = *(int *)(iVar7 + 8);
                iVar4 = *(int *)(iVar3 + iVar6 * 2);
                iVar9 = *(int *)(param_1 + 0x30);
                iVar8 = *(int *)(param_1 + 0x28);
                *(undefined4 *)(iVar9 + iVar6) = 1;
                if (iVar10 == 0) {
                  *(undefined4 *)(iVar9 + iVar6) = 2;
                  *(int *)(iVar3 + iVar6 * 2) = (int)uVar13;
                  *(int *)(iVar3 + iVar6 * 2 + 4) = (int)((ulonglong)uVar13 >> 0x20);
                }
                else if (*(int *)(iVar8 + iVar6) == 0) {
                  *(undefined4 *)(iVar9 + iVar6) = 0;
                }
                *(int *)(iVar8 + iVar6) = iVar10;
                if ((uint)(((int)uVar13 - iVar4) / 1000) < *(uint *)(param_1 + 0x10)) {
                  *(undefined2 *)(iVar7 + 0x46) = 0;
                }
              }
              iVar6 = iVar6 + 4;
              iVar7 = iVar7 + 0x48;
            } while (iVar6 != param_3 * 4);
          }
          local_40 = local_40 + 1;
        } while (local_38 != local_40);
      }
    }
  }
  return local_38;
}



/* ===== FUN_000109f0 @ 000109f0 size=228 ===== */

int FUN_000109f0(int param_1,void *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  dVar1 = DAT_00010ad8;
  if ((-1 < iVar2) && (iVar2 != 0)) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      dVar9 = (double)VectorSignedToFloat(*(undefined4 *)((int)param_2 + 0xc),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar8 = (double)VectorSignedToFloat(*(undefined4 *)((int)param_2 + 0x10),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar8 = dVar8 + dVar9 * dVar1;
      uVar10 = FUN_00010ae0(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
      iVar4 = *(int *)(param_1 + 0x18);
      iVar3 = (iVar2 - iVar5) + -1;
      iVar7 = *(int *)((int)param_2 + 8);
      if (iVar7 == 0) {
        *(undefined8 *)(param_1 + 0x18) = uVar10;
      }
      *(int *)(param_1 + 0x20) = iVar7;
      if ((uint)(((int)uVar10 - iVar4) / 1000) < *(uint *)(param_1 + 0x10)) {
        if (iVar3 < 1) {
          return iVar5;
        }
        memmove(param_2,(void *)((int)param_2 + 0x14),iVar3 * 0x14);
      }
      else {
        iVar5 = iVar5 + 1;
        param_2 = (void *)((int)param_2 + 0x14);
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
    return iVar5;
  }
  return iVar2;
}



/* ===== FUN_00010ae0 @ 00010ae0 size=44 ===== */

int FUN_00010ae0(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_00010b10();
    return iVar1;
  }
  iVar1 = FUN_00010b10(param_1,param_2 ^ 0x80000000);
  return -iVar1;
}



/* ===== FUN_00010b10 @ 00010b10 size=72 ===== */

undefined8 FUN_00010b10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * DAT_00010b58;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) + -dVar2 * DAT_00010b60;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== _fini @ 00010b68 size=16 ===== */

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


