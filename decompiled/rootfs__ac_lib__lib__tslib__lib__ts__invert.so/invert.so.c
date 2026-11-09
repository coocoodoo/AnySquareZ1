// invert.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001043c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010460 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002100c)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 0001046c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00021010)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::calloc @ 00010478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00021014)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010484 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021018)();
  return;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00010490 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_0002101c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 0001049c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021020)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000104a8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021024)();
  return;
}



/* ===== <EXTERNAL>::free @ 000104b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021028)(__ptr);
  return;
}



/* ===== entry @ 000104c0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001050c + 0x104d8 == DAT_00010508 + 0x104d0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010510 + 0x104e0 + DAT_00010514);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001057c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000105f0 + 0x10598;
  if (*(char *)(DAT_000105ec + 0x1058c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000105f4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000105f8 + 67000));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000105fc) != 0) {
    __deregister_frame_info(DAT_00010600 + 0x105d8);
  }
  *(undefined1 *)(DAT_00010604 + 0x105e8) = 1;
  return;
}



/* ===== _INIT_0 @ 00010608 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010640 + 0x10618 + DAT_00010644) != 0) {
    __register_frame_info(DAT_0001064c + 0x10638,DAT_00010648 + 0x10634);
  }
  if (((DAT_00010570 + 0x10530) - (DAT_0001056c + 0x10528) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010574 + 0x10538 + DAT_00010578);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== invert_mod_init @ 00010788 size=104 ===== */

void * invert_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = calloc(0x1c,1);
  iVar1 = DAT_000107f0;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_000107f0 + 0x107c0;
    *(undefined2 *)((int)__ptr + 0x18) = 0;
    *(int *)((int)__ptr + 0xc) = iVar2;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x107cc,2,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010804 @ 00010804 size=152 ===== */

undefined4 FUN_00010804(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  lVar2 = strtol(param_2,(char **)0x0,0);
  if (lVar2 == 0x7fffffff) {
    if (*piVar1 == 0x22) {
      return 0xffffffff;
    }
    *piVar1 = iVar3;
  }
  else {
    *piVar1 = iVar3;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      return 0xffffffff;
    }
    *(long *)(param_1 + 0x14) = lVar2;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return 0;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return 0;
}



/* ===== _fini @ 0001089c size=16 ===== */

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



/* ===== <EXTERNAL>::strtol @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


