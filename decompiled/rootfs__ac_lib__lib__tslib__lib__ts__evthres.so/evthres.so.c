// evthres.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001055c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memmove @ 00010580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002200c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001058c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022010)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::puts @ 00010598 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022014)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000105a4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000105b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002201c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000105bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00022020)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000105c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022024)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000105d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022028)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000105e0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002202c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000105ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022030)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000105f8 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00022034)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010604 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022038)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010610 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002203c)();
  return;
}



/* ===== <EXTERNAL>::free @ 0001061c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022040)(__ptr);
  return;
}



/* ===== entry @ 00010628 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010674 + 0x10640 == DAT_00010670 + 0x10638) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010678 + 0x10648 + DAT_0001067c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000106e4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010758 + 0x10700;
  if (*(char *)(DAT_00010754 + 0x106f4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001075c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010760 + 0x10720));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010764) != 0) {
    __deregister_frame_info(DAT_00010768 + 0x10740);
  }
  *(undefined1 *)(DAT_0001076c + 0x10750) = 1;
  return;
}



/* ===== _INIT_0 @ 00010770 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000107a8 + 0x10780 + DAT_000107ac) != 0) {
    __register_frame_info(DAT_000107b4 + 0x107a0,DAT_000107b0 + 0x1079c);
  }
  if (((DAT_000106d8 + 0x10698) - (DAT_000106d4 + 0x10690) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000106dc + 0x106a0 + DAT_000106e0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== evthres_mod_init @ 000107b8 size=156 ===== */

void * evthres_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  void *pvVar2;
  
  __ptr = calloc(0x30,1);
  iVar1 = DAT_00010854;
  if (__ptr != (void *)0x0) {
    *(undefined4 *)((int)__ptr + 0x1c) = 1;
    *(int *)((int)__ptr + 0xc) = iVar1 + 0x107f0;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    *(undefined4 *)((int)__ptr + 0x20) = 0;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x107fc,1,param_2);
    if (iVar1 == 0) {
      if (*(int *)((int)__ptr + 0x14) == 0) {
        pvVar2 = malloc(100);
        *(undefined4 *)((int)__ptr + 0x10) = 5;
        *(void **)((int)__ptr + 0x14) = pvVar2;
        return __ptr;
      }
    }
    else {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_000108b0 @ 000108b0 size=1188 ===== */

int FUN_000108b0(int param_1,int *param_2,size_t param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar6;
  int iVar7;
  char *__s;
  size_t sVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  size_t __nmemb;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *puVar5;
  
  if (0 < param_4) {
    local_3c = 0;
    local_40 = 0;
    __s = (char *)(DAT_00010d54 + 0x108f0);
    piVar13 = param_2;
    do {
      if (0 < (int)param_3) {
        sVar8 = 0;
        local_44 = 0;
        do {
          iVar2 = sVar8 * 4;
          pvVar1 = (void *)(*piVar13 + sVar8 * 0x48);
          if ((((*(int *)(param_1 + 0x2c) == 0) ||
               (*(int *)(*(int *)(param_1 + 0x2c) + sVar8 * 4) != 0)) ||
              (*(int *)(param_1 + 0x28) == 0)) || (*(int *)(*(int *)(param_1 + 0x28) + iVar2) == 0))
          {
            *(ushort *)((int)pvVar1 + 0x46) = *(ushort *)((int)pvVar1 + 0x46) & 0xfffe;
          }
          else {
            pvVar3 = *(void **)(*(int *)(param_1 + 0x24) + iVar2);
            local_44 = local_44 + 1;
            memcpy(pvVar1,pvVar3,0x48);
            memmove(pvVar3,(void *)((int)pvVar3 + 0x48),*(int *)(param_1 + 0x10) * 0x48 - 0x48);
            memset((void *)(*(int *)(*(int *)(param_1 + 0x24) + iVar2) +
                           *(int *)(param_1 + 0x10) * 0x48 + -0x48),0,0x48);
            iVar7 = *piVar13;
            *(int *)(*(int *)(param_1 + 0x28) + iVar2) =
                 *(int *)(*(int *)(param_1 + 0x28) + iVar2) + -1;
            if (*(int *)(iVar7 + sVar8 * 0x48 + 8) == 0) {
              puts(__s);
            }
          }
          sVar8 = sVar8 + 1;
        } while (param_3 != sVar8);
        if (local_44 != 0) {
          local_3c = local_3c + 1;
        }
      }
      piVar13 = piVar13 + 1;
      local_40 = local_40 + 1;
    } while (param_4 != local_40);
    if (local_3c != 0) {
      return local_3c;
    }
  }
  pcVar10 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  if (pcVar10 == (code *)0x0) {
    return -0x26;
  }
  iVar2 = (*pcVar10)(*(int *)(param_1 + 4),param_2,param_3,param_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  pvVar1 = *(void **)(param_1 + 0x24);
  if (pvVar1 == (void *)0x0) {
LAB_00010a14:
    pvVar1 = malloc(param_3 << 2);
    *(void **)(param_1 + 0x24) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return -0xc;
    }
    if (0 < (int)param_3) {
      puVar12 = (undefined4 *)((int)pvVar1 + -4);
      __nmemb = *(size_t *)(param_1 + 0x10);
      sVar8 = 0;
      do {
        pvVar3 = calloc(__nmemb,0x48);
        puVar12 = puVar12 + 1;
        *puVar12 = pvVar3;
        if (pvVar3 == (void *)0x0) {
          if (sVar8 != 0) {
            iVar2 = 0;
            do {
              puVar12 = (undefined4 *)((int)pvVar1 + iVar2);
              iVar2 = iVar2 + 4;
              if ((void *)*puVar12 != (void *)0x0) {
                free((void *)*puVar12);
                pvVar1 = *(void **)(param_1 + 0x24);
              }
            } while (sVar8 * 4 != iVar2);
            if (pvVar1 == (void *)0x0) {
              return -0xc;
            }
          }
          free(pvVar1);
          return -0xc;
        }
        sVar8 = sVar8 + 1;
      } while (param_3 != sVar8);
    }
    *(size_t *)(param_1 + 0x20) = param_3;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 < (int)param_3) {
      if (0 < iVar7) {
        iVar11 = 0;
        do {
          pvVar3 = *(void **)((int)pvVar1 + iVar11 * 4);
          iVar11 = iVar11 + 1;
          if (pvVar3 != (void *)0x0) {
            free(pvVar3);
            iVar7 = *(int *)(param_1 + 0x20);
            pvVar1 = *(void **)(param_1 + 0x24);
          }
        } while (iVar11 < iVar7);
      }
      free(pvVar1);
      goto LAB_00010a14;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar1 = calloc(param_3,4);
    *(void **)(param_1 + 0x28) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return -0xc;
    }
    if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
      if ((int)param_3 <= *(int *)(param_1 + 0x20)) goto LAB_00010bc8;
      free(*(void **)(param_1 + 0x2c));
    }
  }
  else if (*(int *)(param_1 + 0x2c) != 0) goto LAB_00010bc8;
  puVar12 = calloc(param_3,4);
  *(undefined4 **)(param_1 + 0x2c) = puVar12;
  if (puVar12 == (undefined4 *)0x0) {
    return -0xc;
  }
  if (0 < (int)param_3) {
    puVar4 = puVar12;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = 1;
      puVar4 = puVar5;
    } while (puVar12 + param_3 != puVar5);
  }
LAB_00010bc8:
  if (iVar2 == 0) {
    return 0;
  }
  local_44 = 0;
  do {
    if (0 < (int)param_3) {
      sVar8 = 0;
      do {
        while( true ) {
          iVar7 = sVar8 * 0x48;
          if ((*(ushort *)(*param_2 + iVar7 + 0x46) & 1) != 0) break;
LAB_00010c88:
          sVar8 = sVar8 + 1;
          if (param_3 == sVar8) goto LAB_00010cd8;
        }
        iVar14 = *(int *)(param_1 + 0x2c);
        iVar11 = sVar8 * 4;
        iVar6 = *(int *)(*param_2 + iVar7 + 8);
        if (*(int *)(iVar14 + sVar8 * 4) != 0) {
          pvVar1 = *(void **)(*(int *)(param_1 + 0x24) + sVar8 * 4);
          if ((iVar6 == 0) &&
             (*(uint *)(*(int *)(param_1 + 0x28) + iVar11) < *(uint *)(param_1 + 0x10))) {
            *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar11) = 0;
            *(undefined4 *)(iVar14 + iVar11) = 1;
            memset(pvVar1,0,*(int *)(param_1 + 0x10) * 0x48);
            *(ushort *)(*param_2 + iVar7 + 0x46) = *(ushort *)(*param_2 + iVar7 + 0x46) & 0xfffe;
          }
          else {
            memmove(pvVar1,(void *)((int)pvVar1 + 0x48),*(uint *)(param_1 + 0x10) * 0x48 - 0x48);
            pvVar1 = (void *)(*param_2 + iVar7);
            memcpy((void *)(*(int *)(param_1 + 0x10) * 0x48 +
                            *(int *)(*(int *)(param_1 + 0x24) + iVar11) + -0x48),pvVar1,0x48);
            uVar9 = *(int *)(*(int *)(param_1 + 0x28) + iVar11) + 1;
            *(uint *)(*(int *)(param_1 + 0x28) + iVar11) = uVar9;
            if (uVar9 < *(uint *)(param_1 + 0x10)) {
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar11) = 1;
            }
            else {
              *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar11) = 0;
            }
            *(ushort *)((int)pvVar1 + 0x46) = *(ushort *)((int)pvVar1 + 0x46) & 0xfffe;
          }
          goto LAB_00010c88;
        }
        sVar8 = sVar8 + 1;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar14 + iVar11) = 1;
        }
      } while (param_3 != sVar8);
    }
LAB_00010cd8:
    param_2 = param_2 + 1;
    local_44 = local_44 + 1;
    if (iVar2 == local_44) {
      return iVar2;
    }
  } while( true );
}



/* ===== FUN_00010d58 @ 00010d58 size=520 ===== */

int FUN_00010d58(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t __n;
  undefined4 *puVar4;
  code *pcVar5;
  void *__s;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (0 < param_3) {
    iVar9 = 0;
    uVar2 = 0;
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar8 = 0;
    do {
      while ((*(int *)(param_1 + 0x1c) == 0 && (*(int *)(param_1 + 0x18) != 0))) {
        puVar4 = *(undefined4 **)(param_1 + 0x14);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 1;
        uVar1 = puVar4[2];
        uVar3 = puVar4[3];
        uVar11 = puVar4[1];
        *param_2 = *puVar4;
        param_2[3] = uVar3;
        param_2[1] = uVar11;
        param_2[2] = uVar1;
        param_2[4] = puVar4[4];
        memmove(*(void **)(param_1 + 0x14),(void *)((int)*(void **)(param_1 + 0x14) + 0x14),
                *(int *)(param_1 + 0x10) * 0x14 - 0x14);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 0x14 + -0x14);
        *puVar4 = uVar2;
        puVar4[1] = uVar12;
        puVar4[2] = uVar13;
        puVar4[3] = uVar14;
        puVar4[3] = uVar2;
        puVar4[4] = uVar12;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        if (param_3 == iVar8) goto LAB_00010e30;
      }
      iVar8 = iVar8 + 1;
      param_2[2] = 0;
    } while (param_3 != iVar8);
LAB_00010e30:
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  pcVar5 = (code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc);
  if (pcVar5 == (code *)0x0) {
    iVar8 = -0x26;
  }
  else {
    iVar9 = (*pcVar5)(*(int *)(param_1 + 4),param_2,param_3);
    iVar8 = iVar9;
    if (0 < iVar9) {
      iVar8 = 0;
      puVar4 = param_2;
      do {
        while (*(int *)(param_1 + 0x1c) != 0) {
          __s = *(void **)(param_1 + 0x14);
          __n = *(uint *)(param_1 + 0x10) * 0x14;
          if ((puVar4[2] == 0) && (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x10))) {
            *(undefined4 *)(param_1 + 0x18) = 0;
            memset(__s,0,__n);
          }
          else {
            memmove(__s,(void *)((int)__s + 0x14),__n - 0x14);
            uVar13 = param_2[1];
            uVar12 = param_2[2];
            uVar2 = param_2[3];
            iVar6 = *(int *)(param_1 + 0x10) * 0x14 + -0x14;
            iVar10 = *(int *)(param_1 + 0x14) + iVar6;
            *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar6) = *param_2;
            *(undefined4 *)(iVar10 + 4) = uVar13;
            *(undefined4 *)(iVar10 + 8) = uVar12;
            *(undefined4 *)(iVar10 + 0xc) = uVar2;
            *(undefined4 *)(iVar10 + 0x10) = param_2[4];
            uVar7 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar7;
            *(uint *)(param_1 + 0x1c) = (uint)(uVar7 < *(uint *)(param_1 + 0x10));
          }
          iVar9 = iVar9 + -1;
          puVar4 = puVar4 + 5;
          if (iVar9 == 0) {
            return iVar8;
          }
        }
        iVar8 = iVar8 + 1;
        puVar4 = puVar4 + 5;
        if (param_2[2] == 0) {
          *(undefined4 *)(param_1 + 0x1c) = 1;
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return iVar8;
}



/* ===== FUN_00010f60 @ 00010f60 size=132 ===== */

undefined4 FUN_00010f60(int param_1,char *param_2)

{
  int *piVar1;
  ulong uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = __errno_location();
  iVar5 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if (uVar2 < 500) {
    *piVar1 = iVar5;
    pvVar3 = malloc(uVar2 * 0x14);
    uVar4 = 0;
    *(ulong *)(param_1 + 0x10) = uVar2;
    *(void **)(param_1 + 0x14) = pvVar3;
  }
  else {
    fprintf((FILE *)**(undefined4 **)(DAT_00010fe4 + 0x10f94 + DAT_00010fe8),
            (char *)(DAT_00010fec + 0x10fd8),500);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== _fini @ 00010ff0 size=16 ===== */

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



/* ===== <EXTERNAL>::memcpy @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

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


