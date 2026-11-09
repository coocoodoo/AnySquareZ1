// lowpass.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010484 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memcpy @ 000104a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002100c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000104b4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021010)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 000104c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00021014)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00021018)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 000104d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_0002101c)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
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



/* ===== FUN_000106b0 @ 000106b0 size=432 ===== */

int FUN_000106b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  
  if (param_3 < 1) {
    iVar4 = 0;
  }
  else {
    piVar5 = (int *)(param_1 + 0x24);
    iVar4 = 0;
    do {
      while( true ) {
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))
                          (*(int *)(param_1 + 4),&local_3c,1);
        if (iVar1 < 1) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        uVar6 = *(uint *)(param_1 + 0x48);
        if (local_34 != 0) break;
        *(uint *)(param_1 + 0x48) = uVar6 | 1;
        *param_2 = local_3c;
        param_2[1] = local_38;
        param_2[2] = 0;
        param_2[3] = iStack_30;
        param_2[4] = local_2c;
LAB_000106f4:
        param_2 = param_2 + 5;
        if (iVar4 == param_3) {
          return iVar4;
        }
      }
      if ((uVar6 & 1) == 0) {
        iVar1 = local_3c - *(int *)(param_1 + 0x10);
        *piVar5 = local_3c;
        *(int *)(param_1 + 0x28) = local_38;
        *(int *)(param_1 + 0x2c) = local_34;
        *(int *)(param_1 + 0x30) = iStack_30;
        *(int *)(param_1 + 0x34) = local_2c;
        uVar6 = (uint)*(byte *)(param_1 + 0x50);
        if (((int)uVar6 < iVar1) || (fVar7 = DAT_00010860, -iVar1 != uVar6 && iVar1 <= (int)-uVar6))
        {
          fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        }
        iVar1 = local_38 - *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x24) =
             (int)(*(float *)(param_1 + 0x44) * fVar7) + *(int *)(param_1 + 0x10);
        if (((int)uVar6 < iVar1) || (fVar7 = DAT_00010860, -iVar1 != uVar6 && iVar1 <= (int)-uVar6))
        {
          fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        }
        *(int *)(param_1 + 0x28) =
             (int)(*(float *)(param_1 + 0x44) * fVar7) + *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x10) = *piVar5;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x34);
        iVar1 = *(int *)(param_1 + 0x28);
        iVar2 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x30);
        *param_2 = *piVar5;
        param_2[1] = iVar1;
        param_2[2] = iVar2;
        param_2[3] = iVar3;
        param_2[4] = *(int *)(param_1 + 0x34);
        goto LAB_000106f4;
      }
      *(uint *)(param_1 + 0x48) = uVar6 & 0xfffffffe;
      *(int *)(param_1 + 0x10) = local_3c;
      *(int *)(param_1 + 0x14) = local_38;
      *(int *)(param_1 + 0x18) = local_34;
      *(int *)(param_1 + 0x1c) = iStack_30;
      *(int *)(param_1 + 0x20) = local_2c;
      *param_2 = local_3c;
      param_2[1] = local_38;
      param_2[2] = local_34;
      param_2[3] = iStack_30;
      param_2[4] = local_2c;
      param_2 = param_2 + 5;
    } while (iVar4 != param_3);
  }
  return iVar4;
}



/* ===== lowpass_mod_init @ 00010864 size=140 ===== */

void * lowpass_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = calloc(0x54,1);
  iVar1 = DAT_000108f0;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_000108f0 + 0x1089c;
    *(undefined1 *)((int)__ptr + 0x50) = 2;
    *(undefined4 *)((int)__ptr + 0x44) = 0x3ecccccd;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined4 *)((int)__ptr + 0x48) = 1;
    *(undefined4 *)((int)__ptr + 0x40) = 0;
    *(undefined4 *)((int)__ptr + 0x38) = 0;
    *(undefined4 *)((int)__ptr + 0x3c) = 0;
    *(undefined4 *)((int)__ptr + 0x4c) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x108a8,2,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_000108f4 @ 000108f4 size=72 ===== */

undefined4 FUN_000108f4(void *param_1)

{
  if (*(void **)((int)param_1 + 0x38) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x38));
  }
  if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x3c));
  }
  if (*(void **)((int)param_1 + 0x4c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x4c));
  }
  free(param_1);
  return 0;
}



/* ===== FUN_0001093c @ 0001093c size=92 ===== */

undefined4 FUN_0001093c(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = __errno_location();
  iVar4 = *piVar1;
  lVar2 = strtol(param_2,(char **)0x0,0);
  if ((*piVar1 == 0x22) || (*piVar1 = iVar4, param_3 != 1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    *(char *)(param_1 + 0x50) = (char)lVar2;
  }
  return uVar3;
}



/* ===== FUN_00010998 @ 00010998 size=104 ===== */

undefined4 FUN_00010998(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  
  piVar1 = __errno_location();
  iVar2 = *piVar1;
  dVar3 = strtod(param_2,(char **)0x0);
  if (((dVar3 <= 1.0) && (0.0 <= dVar3)) && (*piVar1 = iVar2, param_3 == 1)) {
    *(float *)(param_1 + 0x44) = (float)dVar3;
    return 0;
  }
  return 0xffffffff;
}



/* ===== _fini @ 00010ca8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

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



/* ===== <EXTERNAL>::strtol @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

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



/* ===== <EXTERNAL>::strtod @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

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


