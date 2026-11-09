// iir.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010478 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::puts @ 0001049c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002100c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000104a8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021010)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000104b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00021014)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000104c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00021018)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104cc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002101c)();
  return;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000104d8 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00021020)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000104e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021024)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000104f0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021028)();
  return;
}



/* ===== <EXTERNAL>::raise @ 000104fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002102c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010508 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021030)(__ptr);
  return;
}



/* ===== entry @ 00010514 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010560 + 0x1052c == DAT_0001055c + 0x10524) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010564 + 0x10534 + DAT_00010568);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000105d0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010644 + 0x105ec;
  if (*(char *)(DAT_00010640 + 0x105e0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010648) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001064c + 0x1060c));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010650) != 0) {
    __deregister_frame_info(DAT_00010654 + 0x1062c);
  }
  *(undefined1 *)(DAT_00010658 + 0x1063c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001065c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010694 + 0x1066c + DAT_00010698) != 0) {
    __register_frame_info(DAT_000106a0 + 0x1068c,DAT_0001069c + 0x10688);
  }
  if (((DAT_000105c4 + 0x10584) - (DAT_000105c0 + 0x1057c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000105c8 + 0x1058c + DAT_000105cc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000106a4 @ 000106a4 size=232 ===== */

int FUN_000106a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  if (0 < iVar1) {
    param_2 = param_2 + 0x14;
    iVar4 = 0;
    do {
      while (iVar2 = *(int *)(param_2 + -0x14), *(int *)(param_2 + -0xc) == 0) {
        *(int *)(param_1 + 0x20) = iVar2;
        iVar4 = iVar4 + 1;
        uVar3 = *(undefined4 *)(param_2 + -0x10);
        *(undefined1 *)(param_1 + 0x28) = 0;
        param_2 = param_2 + 0x14;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        if (iVar1 == iVar4) {
          return iVar1;
        }
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        *(int *)(param_1 + 0x20) = iVar2;
        uVar3 = *(undefined4 *)(param_2 + -0x10);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x10);
        iVar5 = *(int *)(param_1 + 0x14);
        uVar3 = FUN_00010b20((uVar6 - iVar5) * iVar2 +
                             *(int *)(param_1 + 0x20) * iVar5 + (uVar6 >> 1),uVar6,iVar2,
                             *(char *)(param_1 + 0x28),param_4);
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined4 *)(param_2 + -0x14) = uVar3;
        uVar3 = FUN_00010b20(*(int *)(param_2 + -0x10) * (uVar6 - iVar5) +
                             *(int *)(param_1 + 0x24) * iVar5 + (uVar6 >> 1),uVar6);
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        *(undefined4 *)(param_2 + -0x10) = uVar3;
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 0x14;
    } while (iVar1 != iVar4);
  }
  return iVar1;
}



/* ===== iir_mod_init @ 0001078c size=136 ===== */

void * iir_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = calloc(0x38,1);
  iVar1 = DAT_00010814;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_00010814 + 0x107c4;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined4 *)((int)__ptr + 0x10) = 0;
    *(undefined4 *)((int)__ptr + 0x18) = 0;
    *(undefined4 *)((int)__ptr + 0x1c) = 0;
    *(undefined4 *)((int)__ptr + 0x20) = 0;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    *(undefined4 *)((int)__ptr + 0x2c) = 0;
    *(undefined4 *)((int)__ptr + 0x30) = 0;
    *(undefined1 *)((int)__ptr + 0x28) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x107d0,2,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010818 @ 00010818 size=72 ===== */

undefined4 FUN_00010818(void *param_1)

{
  if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x2c));
  }
  if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x30));
  }
  if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x34));
  }
  free(param_1);
  return 0;
}



/* ===== FUN_00010860 @ 00010860 size=156 ===== */

undefined4 FUN_00010860(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if ((uVar2 != 0xffffffff) || (*piVar1 != 0x22)) {
    *piVar1 = iVar3;
    if (param_3 == 1) {
      *(ulong *)(param_1 + 0x14) = uVar2;
      return 0;
    }
    if (param_3 == 2) {
      *(ulong *)(param_1 + 0x10) = uVar2;
      if (uVar2 != 0) {
        return 0;
      }
      puts((char *)(DAT_000108fc + 0x108ec));
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010900 @ 00010900 size=544 ===== */

int FUN_00010900(int param_1,int *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  size_t sVar9;
  size_t sVar10;
  int iVar11;
  int iVar12;
  int local_30;
  int local_2c;
  
  if (*(void **)(param_1 + 0x2c) == (void *)0x0) {
LAB_00010a9c:
    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
      free(*(void **)(param_1 + 0x30));
    }
    if (*(void **)(param_1 + 0x34) != (void *)0x0) {
      free(*(void **)(param_1 + 0x34));
    }
    pvVar3 = calloc(param_3,4);
    *(void **)(param_1 + 0x2c) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      pvVar3 = calloc(param_3,4);
      *(void **)(param_1 + 0x30) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        pvVar3 = calloc(param_3,1);
        *(void **)(param_1 + 0x34) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          *(size_t *)(param_1 + 0x18) = param_3;
          goto LAB_00010930;
        }
      }
    }
    local_2c = -0xc;
  }
  else {
    if (*(int *)(param_1 + 0x18) < (int)param_3) {
      free(*(void **)(param_1 + 0x2c));
      goto LAB_00010a9c;
    }
LAB_00010930:
    pcVar7 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    if (pcVar7 == (code *)0x0) {
      local_2c = -0x26;
    }
    else {
      local_2c = (*pcVar7)(*(int *)(param_1 + 4),param_2,param_3,param_4);
      if (0 < local_2c) {
        local_30 = 0;
        do {
          if (0 < (int)param_3) {
            sVar9 = 0;
            sVar10 = sVar9;
            do {
              while( true ) {
                iVar1 = sVar9 * 4;
                puVar8 = (undefined4 *)(*param_2 + sVar10);
                if ((*(ushort *)((int)puVar8 + 0x46) & 1) != 0) break;
LAB_000109f0:
                sVar9 = sVar9 + 1;
                sVar10 = sVar10 + 0x48;
                if (param_3 == sVar9) goto LAB_00010a58;
              }
              iVar5 = *(int *)(param_1 + 0x34);
              iVar6 = *(int *)(*param_2 + sVar10);
              iVar12 = *(int *)(param_1 + 0x2c);
              iVar11 = *(int *)(param_1 + 0x30);
              if (puVar8[2] != 0) {
                if (*(char *)(iVar5 + sVar9) == '\0') {
                  *(int *)(iVar12 + iVar1) = iVar6;
                  *(undefined4 *)(iVar11 + iVar1) = puVar8[1];
                  *(undefined1 *)(iVar5 + sVar9) = 1;
                }
                else {
                  uVar2 = FUN_00010b20(*(int *)(iVar12 + iVar1) * *(int *)(param_1 + 0x14) +
                                       iVar6 * (*(uint *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)
                                               ) + (*(uint *)(param_1 + 0x10) >> 1));
                  *(undefined4 *)(iVar12 + iVar1) = uVar2;
                  uVar4 = *(uint *)(param_1 + 0x10);
                  iVar5 = *(int *)(param_1 + 0x14);
                  *puVar8 = uVar2;
                  uVar2 = FUN_00010b20(*(int *)(iVar11 + iVar1) * iVar5 +
                                       puVar8[1] * (uVar4 - iVar5) + (uVar4 >> 1));
                  *(undefined4 *)(iVar11 + iVar1) = uVar2;
                  puVar8[1] = uVar2;
                }
                goto LAB_000109f0;
              }
              *(int *)(iVar12 + sVar9 * 4) = iVar6;
              sVar10 = sVar10 + 0x48;
              *(undefined4 *)(iVar11 + sVar9 * 4) = puVar8[1];
              *(undefined1 *)(iVar5 + sVar9) = 0;
              sVar9 = sVar9 + 1;
            } while (param_3 != sVar9);
          }
LAB_00010a58:
          param_2 = param_2 + 1;
          local_30 = local_30 + 1;
        } while (local_2c != local_30);
      }
    }
  }
  return local_2c;
}



/* ===== FUN_00010b20 @ 00010b20 size=184 ===== */

ulonglong FUN_00010b20(uint param_1,uint param_2)

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



/* ===== _fini @ 00010bf8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::puts @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

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



/* ===== <EXTERNAL>::tslib_parse_vars @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

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


