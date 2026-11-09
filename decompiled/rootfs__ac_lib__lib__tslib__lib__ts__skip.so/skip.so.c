// skip.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000104d8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memcpy @ 000104fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002200c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010508 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022010)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010514 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022014)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010520 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00022018)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 0001052c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002201c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010538 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022020)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010544 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022024)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00010550 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00022028)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 0001055c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002202c)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010568 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022030)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010574 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022034)(__ptr);
  return;
}



/* ===== entry @ 00010580 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000105cc + 0x10598 == DAT_000105c8 + 0x10590) {
    return;
  }
  pcVar1 = *(code **)(DAT_000105d0 + 0x105a0 + DAT_000105d4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001063c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000106b0 + 0x10658;
  if (*(char *)(DAT_000106ac + 0x1064c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000106b4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000106b8 + 0x10678));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000106bc) != 0) {
    __deregister_frame_info(DAT_000106c0 + 0x10698);
  }
  *(undefined1 *)(DAT_000106c4 + 0x106a8) = 1;
  return;
}



/* ===== _INIT_0 @ 000106c8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010700 + 0x106d8 + DAT_00010704) != 0) {
    __register_frame_info(DAT_0001070c + 0x106f8,DAT_00010708 + 0x106f4);
  }
  if (((DAT_00010630 + 0x105f0) - (DAT_0001062c + 0x105e8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010634 + 0x105f8 + DAT_00010638);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010710 @ 00010710 size=540 ===== */

int FUN_00010710(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  if (param_3 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      while( true ) {
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))
                          (*(int *)(param_1 + 4),&local_3c,1);
        if (iVar1 < 1) {
          return iVar5;
        }
        if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14)) break;
        iVar1 = iVar5;
        if (local_34 == 0) {
LAB_000107ac:
          *(int *)(param_1 + 0x14) = local_34;
          *(int *)(param_1 + 0x20) = local_34;
          *(int *)(param_1 + 0x38) = local_34;
          iVar5 = iVar1;
        }
        else {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        }
LAB_000107b8:
        if (param_3 <= iVar5) {
          return iVar5;
        }
      }
      if (local_34 == 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1c);
          puVar8 = (undefined4 *)(iVar5 * 0x14 + param_2);
          if (iVar1 != 0) {
            iVar7 = *(int *)(param_1 + 0x20);
            puVar6 = *(undefined4 **)(param_1 + 0x28);
            goto LAB_00010768;
          }
          *puVar8 = local_3c;
          puVar8[1] = uStack_38;
          puVar8[2] = 0;
          puVar8[3] = uStack_30;
          puVar8[4] = local_2c;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          iVar5 = iVar5 + 1;
        }
        goto LAB_000107b8;
      }
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        puVar8 = (undefined4 *)(iVar5 * 0x14 + param_2);
        *puVar8 = local_3c;
        puVar8[1] = uStack_38;
        puVar8[2] = local_34;
        puVar8[3] = uStack_30;
        puVar8[4] = local_2c;
        *(undefined4 *)(param_1 + 0x38) = 1;
        iVar5 = iVar5 + 1;
        goto LAB_000107b8;
      }
      iVar7 = *(int *)(param_1 + 0x20);
      puVar6 = *(undefined4 **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x38) == 0) {
        if (iVar7 < iVar1) {
          puVar6 = puVar6 + iVar7 * 5;
          *(int *)(param_1 + 0x20) = iVar7 + 1;
          *puVar6 = local_3c;
          puVar6[1] = uStack_38;
          puVar6[2] = local_34;
          puVar6[3] = uStack_30;
          puVar6[4] = local_2c;
          goto LAB_000107b8;
        }
        puVar8 = (undefined4 *)(iVar5 * 0x14 + param_2);
LAB_0001082c:
        iVar7 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        if (local_34 == 0) goto LAB_00010780;
LAB_0001083c:
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *puVar8 = *puVar6;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        puVar8[4] = puVar6[4];
      }
      else {
        puVar8 = (undefined4 *)(iVar5 * 0x14 + param_2);
LAB_00010768:
        if (iVar1 <= iVar7) goto LAB_0001082c;
        puVar6 = puVar6 + iVar7 * 5;
        if (local_34 != 0) goto LAB_0001083c;
LAB_00010780:
        puVar6[2] = local_34;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *puVar8 = *puVar6;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        puVar8[4] = puVar6[4];
        iVar1 = iVar5 + 1;
        if (local_34 == 0) goto LAB_000107ac;
      }
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x20) = iVar7 + 1;
      *puVar6 = local_3c;
      puVar6[1] = uStack_38;
      puVar6[2] = local_34;
      puVar6[3] = uStack_30;
      puVar6[4] = local_2c;
      *(undefined4 *)(param_1 + 0x38) = 1;
    } while (iVar5 < param_3);
  }
  return iVar5;
}



/* ===== skip_mod_init @ 0001092c size=216 ===== */

undefined8 * skip_mod_init(undefined4 param_1,undefined4 param_2)

{
  undefined8 *__ptr;
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  __ptr = malloc(0x40);
  if (__ptr != (undefined8 *)0x0) {
    iVar3 = DAT_00010a04 + 0x10960;
    iVar2 = DAT_00010a04 + 0x1096c;
    *__ptr = 0;
    *(int *)((int)__ptr + 0xc) = iVar3;
    *(undefined4 *)(__ptr + 2) = 1;
    *(undefined8 *)((int)__ptr + 4) = 0;
    *(undefined4 *)((int)__ptr + 0x1c) = 1;
    *(undefined4 *)(__ptr + 5) = 0;
    *(undefined4 *)((int)__ptr + 0x2c) = 0;
    *(undefined4 *)(__ptr + 6) = 0;
    *(undefined4 *)((int)__ptr + 0x34) = 0;
    *(undefined4 *)(__ptr + 3) = 0;
    *(undefined4 *)((int)__ptr + 0x24) = 0;
    *(undefined4 *)((int)__ptr + 0x3c) = 0;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(undefined4 *)(__ptr + 4) = 0;
    *(undefined4 *)(__ptr + 7) = 0;
    iVar2 = tslib_parse_vars(__ptr,iVar2,2,param_2);
    if (iVar2 == 0) {
      if (*(int *)((int)__ptr + 0x1c) != 0) {
        pvVar1 = malloc(*(int *)((int)__ptr + 0x1c) * 0x14);
        *(void **)(__ptr + 5) = pvVar1;
        if (pvVar1 == (void *)0x0) {
          free(__ptr);
          __ptr = (undefined8 *)0x0;
        }
      }
    }
    else {
      free(__ptr);
      __ptr = (undefined8 *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010a08 @ 00010a08 size=220 ===== */

undefined4 FUN_00010a08(void *param_1)

{
  void *__ptr;
  undefined4 *__ptr_00;
  int iVar1;
  void *__ptr_01;
  int iVar2;
  
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x18));
  }
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x3c));
  }
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x28));
  }
  __ptr_01 = *(void **)((int)param_1 + 0x2c);
  if (__ptr_01 == (void *)0x0) {
LAB_00010ac4:
    __ptr_00 = *(undefined4 **)((int)param_1 + 0x30);
    if (__ptr_00 == (undefined4 *)0x0) goto LAB_00010ad4;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x1c);
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        __ptr = *(void **)((int)__ptr_01 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        if (__ptr != (void *)0x0) {
          free(__ptr);
          __ptr_01 = *(void **)((int)param_1 + 0x2c);
          iVar1 = *(int *)((int)param_1 + 0x1c);
        }
      } while (iVar2 < iVar1);
    }
    free(__ptr_01);
    if (*(int *)((int)param_1 + 0x2c) == 0) goto LAB_00010ac4;
    __ptr_00 = *(undefined4 **)((int)param_1 + 0x30);
    if (__ptr_00 == (undefined4 *)0x0) goto LAB_00010ad4;
    if ((void *)*__ptr_00 != (void *)0x0) {
      free((void *)*__ptr_00);
      goto LAB_00010ac4;
    }
  }
  free(__ptr_00);
LAB_00010ad4:
  free(param_1);
  return 0;
}



/* ===== FUN_00010ae4 @ 00010ae4 size=128 ===== */

undefined4 FUN_00010ae4(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  
  piVar1 = __errno_location();
  iVar3 = *piVar1;
  uVar2 = strtoul(param_2,(char **)0x0,0);
  if (uVar2 == 0xffffffff) {
    if (*piVar1 == 0x22) {
      return 0xffffffff;
    }
    *piVar1 = iVar3;
  }
  else {
    *piVar1 = iVar3;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      *(ulong *)(param_1 + 0x1c) = uVar2;
      return 0;
    }
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x10) = uVar2;
  return 0;
}



/* ===== FUN_00010b64 @ 00010b64 size=1812 ===== */

int FUN_00010b64(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  size_t sVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;
  int *local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int *local_38;
  int local_34;
  
  puVar7 = *(undefined4 **)(param_1 + 0x30);
  if (puVar7 == (undefined4 *)0x0) {
LAB_00010bb0:
    puVar7 = malloc(4);
    *(undefined4 **)(param_1 + 0x30) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      return -0xc;
    }
    pvVar2 = calloc(param_3,0x48);
    *puVar7 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      free(puVar7);
      return -0xc;
    }
    *(size_t *)(param_1 + 0x34) = param_3;
  }
  else {
    pvVar2 = (void *)*puVar7;
    if (*(int *)(param_1 + 0x34) < (int)param_3) {
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
        puVar7 = *(undefined4 **)(param_1 + 0x30);
      }
      free(puVar7);
      goto LAB_00010bb0;
    }
  }
  memset(pvVar2,0,param_3 * 0x48);
  pvVar2 = *(void **)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x34) < (int)param_3) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (pvVar2 != (void *)0x0) {
      if (0 < iVar3) {
        iVar14 = 0;
        do {
          pvVar5 = *(void **)((int)pvVar2 + iVar14 * 4);
          iVar14 = iVar14 + 1;
          if (pvVar5 != (void *)0x0) {
            free(pvVar5);
            pvVar2 = *(void **)(param_1 + 0x2c);
            iVar3 = *(int *)(param_1 + 0x1c);
          }
        } while (iVar14 < iVar3);
      }
      free(pvVar2);
LAB_00010e80:
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    pvVar2 = malloc(iVar3 << 2);
    *(void **)(param_1 + 0x2c) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      free((void *)**(undefined4 **)(param_1 + 0x30));
      free(*(void **)(param_1 + 0x30));
      return -0xc;
    }
    if (iVar3 < 1) {
      pvVar2 = calloc(param_3,4);
      *(void **)(param_1 + 0x18) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        pvVar5 = calloc(param_3,4);
        *(void **)(param_1 + 0x24) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          free(pvVar2);
        }
        else {
          pvVar6 = calloc(param_3,4);
          *(void **)(param_1 + 0x3c) = pvVar6;
          if (pvVar6 != (void *)0x0) {
LAB_0001111c:
            *(size_t *)(param_1 + 0x34) = param_3;
            goto LAB_00010c14;
          }
          free(pvVar2);
          free(pvVar5);
        }
      }
    }
    else {
      puVar7 = (undefined4 *)((int)pvVar2 + -4);
      iVar14 = 0;
      do {
        pvVar5 = calloc(param_3,0x48);
        puVar7 = puVar7 + 1;
        *puVar7 = pvVar5;
        if (pvVar5 == (void *)0x0) {
          if (iVar14 != 0) {
            iVar3 = 0;
            do {
              puVar7 = (undefined4 *)((int)pvVar2 + iVar3);
              iVar3 = iVar3 + 4;
              free((void *)*puVar7);
              pvVar2 = *(void **)(param_1 + 0x2c);
            } while (iVar14 * 4 != iVar3);
          }
          goto LAB_00010f00;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar3);
      pvVar5 = calloc(param_3,4);
      *(void **)(param_1 + 0x18) = pvVar5;
      iVar3 = 0;
      if (pvVar5 == (void *)0x0) {
        while( true ) {
          iVar14 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          free(*(void **)((int)pvVar2 + iVar14));
          if (*(int *)(param_1 + 0x1c) <= iVar3) break;
          pvVar2 = *(void **)(param_1 + 0x2c);
        }
      }
      else {
        pvVar6 = calloc(param_3,4);
        *(void **)(param_1 + 0x24) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          free(pvVar5);
          iVar3 = 0;
          while( true ) {
            iVar14 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            free(*(void **)((int)pvVar2 + iVar14));
            if (*(int *)(param_1 + 0x1c) <= iVar3) break;
            pvVar2 = *(void **)(param_1 + 0x2c);
          }
        }
        else {
          pvVar2 = calloc(param_3,4);
          *(void **)(param_1 + 0x3c) = pvVar2;
          if (pvVar2 != (void *)0x0) goto LAB_0001111c;
          free(pvVar5);
          free(pvVar6);
          iVar3 = 0;
          do {
            iVar14 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            free(*(void **)(*(int *)(param_1 + 0x2c) + iVar14));
          } while (iVar3 < *(int *)(param_1 + 0x1c));
        }
      }
    }
    pvVar2 = *(void **)(param_1 + 0x2c);
LAB_00010f00:
    local_44 = -0xc;
    free(pvVar2);
    free((void *)**(undefined4 **)(param_1 + 0x30));
    free(*(void **)(param_1 + 0x30));
  }
  else {
    if (pvVar2 == (void *)0x0) goto LAB_00010e80;
LAB_00010c14:
    pcVar10 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    if (pcVar10 != (code *)0x0) {
      iVar3 = (*pcVar10)(*(int *)(param_1 + 4),param_2,param_3,param_4);
      if ((iVar3 < 0) || (iVar3 == 0)) {
        return iVar3;
      }
      piVar13 = (int *)(param_2 + -4);
      local_34 = 0;
      local_44 = 0;
      do {
        piVar13 = piVar13 + 1;
        memcpy((void *)**(undefined4 **)(param_1 + 0x30),(void *)*piVar13,param_3 * 0x48);
        if (0 < (int)param_3) {
          sVar11 = 0;
          iVar14 = 0;
          do {
            while( true ) {
              iVar12 = sVar11 * 0x48;
              pvVar2 = (void *)(**(int **)(param_1 + 0x30) + iVar12);
              uVar1 = *(ushort *)((int)pvVar2 + 0x46);
              if ((uVar1 & 1) != 0) break;
LAB_00010d80:
              sVar11 = sVar11 + 1;
              if (param_3 == sVar11) goto LAB_00010f78;
            }
            iVar8 = *(int *)(param_1 + 0x18);
            iVar9 = sVar11 * 4;
            iVar4 = *(int *)(iVar8 + sVar11 * 4);
            if (*(int *)(param_1 + 0x10) <= iVar4) {
              iVar4 = *(int *)((int)pvVar2 + 8);
              iVar16 = *(int *)(param_1 + 0x3c);
              iVar15 = *(int *)(iVar16 + sVar11 * 4);
              if (iVar4 == 0) {
                if (iVar15 == 0) {
                  iVar12 = *(int *)(param_1 + 0x24);
                  *(undefined4 *)(iVar8 + iVar9) = 0;
                  *(undefined4 *)(iVar12 + iVar9) = 0;
                  *(undefined4 *)(iVar16 + iVar9) = 0;
                  goto LAB_00010d80;
                }
                if (*(int *)(param_1 + 0x1c) != 0) {
                  local_38 = (int *)(*(int *)(param_1 + 0x24) + iVar9);
                  local_40 = *(int *)(*(int *)(param_1 + 0x24) + iVar9);
                  piVar17 = *(int **)(param_1 + 0x2c);
                  local_3c = (void *)(*piVar13 + iVar12);
                  local_48 = piVar17;
                  if (local_40 < *(int *)(param_1 + 0x1c)) goto LAB_00010cdc;
                  goto LAB_00010e20;
                }
              }
              else {
                iVar8 = *(int *)(param_1 + 0x1c);
                if (iVar8 != 0) {
                  local_38 = (int *)(*(int *)(param_1 + 0x24) + iVar9);
                  piVar17 = *(int **)(param_1 + 0x2c);
                  local_40 = *(int *)(*(int *)(param_1 + 0x24) + iVar9);
                  local_3c = (void *)(*piVar13 + iVar12);
                  local_48 = piVar17;
                  if (iVar15 == 0) {
                    if (local_40 < iVar8) {
                      iVar4 = piVar17[local_40];
                      *(ushort *)((int)pvVar2 + 0x46) = uVar1 | 1;
                      *(undefined2 *)((int)pvVar2 + 0x44) = 1;
                      *(undefined2 *)((int)local_3c + 0x46) = 0;
                      memcpy((void *)(iVar4 + iVar12),pvVar2,0x48);
                      *(int *)(*(int *)(param_1 + 0x24) + iVar9) =
                           *(int *)(*(int *)(param_1 + 0x24) + iVar9) + 1;
                      goto LAB_00010d80;
                    }
LAB_00010e20:
                    *local_38 = 0;
                    iVar4 = *(int *)((int)pvVar2 + 8);
                    piVar17 = local_48;
                  }
                  else {
                    if (iVar8 <= local_40) goto LAB_00010e20;
LAB_00010cdc:
                    local_48 = piVar17 + local_40;
                  }
                  pvVar2 = (void *)(*local_48 + iVar12);
                  if (iVar4 == 0) {
                    *(undefined4 *)((int)pvVar2 + 8) = 0;
                    iVar8 = piVar17[*local_38];
                    *(undefined4 *)(iVar8 + iVar12 + 0x10) = 0xffffffff;
                    iVar4 = *local_38;
                    *(undefined2 *)(iVar8 + iVar12 + 0x44) = 0;
                    pvVar2 = (void *)(piVar17[iVar4] + iVar12);
                    *(ushort *)((int)pvVar2 + 0x46) = *(ushort *)((int)pvVar2 + 0x46) | 1;
                  }
                  memcpy(local_3c,pvVar2,0x48);
                  bVar18 = iVar14 == 0;
                  iVar4 = *(int *)(param_1 + 0x24);
                  iVar14 = iVar14 + 1;
                  if (bVar18) {
                    local_44 = local_44 + 1;
                  }
                  pvVar2 = (void *)(**(int **)(param_1 + 0x30) + iVar12);
                  if (*(int *)((int)pvVar2 + 8) == 0) {
                    iVar12 = *(int *)(param_1 + 0x3c);
                    *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar9) = 0;
                    *(undefined4 *)(iVar4 + iVar9) = 0;
                    *(undefined4 *)(iVar12 + iVar9) = 0;
                  }
                  else {
                    memcpy((void *)(*(int *)(*(int *)(param_1 + 0x2c) + *(int *)(iVar4 + iVar9) * 4)
                                   + iVar12),pvVar2,0x48);
                    iVar12 = *(int *)(param_1 + 0x24);
                    *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar9) = 1;
                    *(int *)(iVar12 + iVar9) = *(int *)(iVar12 + iVar9) + 1;
                  }
                  goto LAB_00010d80;
                }
                if (iVar15 == 0) {
                  *(ushort *)((int)pvVar2 + 0x46) = uVar1 | 1;
                  *(undefined2 *)((int)pvVar2 + 0x44) = 1;
                }
              }
              memcpy((void *)(*piVar13 + iVar12),pvVar2,0x48);
              iVar4 = *(int *)(param_1 + 0x3c);
              if (iVar14 == 0) {
                local_44 = local_44 + 1;
              }
              iVar14 = iVar14 + 1;
              iVar8 = **(int **)(param_1 + 0x30);
              *(undefined4 *)(iVar4 + iVar9) = 1;
              if (*(int *)(iVar8 + iVar12 + 8) == 0) {
                iVar12 = *(int *)(param_1 + 0x24);
                *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar9) = 0;
                *(undefined4 *)(iVar12 + iVar9) = 0;
                *(undefined4 *)(iVar4 + iVar9) = 0;
              }
              goto LAB_00010d80;
            }
            *(int *)(iVar8 + sVar11 * 4) = iVar4 + 1;
            sVar11 = sVar11 + 1;
            if (*(int *)((int)pvVar2 + 8) == 0) {
              iVar15 = *(int *)(param_1 + 0x24);
              iVar4 = *(int *)(param_1 + 0x3c);
              *(undefined4 *)(iVar8 + iVar9) = 0;
              *(undefined4 *)(iVar15 + iVar9) = 0;
              *(undefined4 *)(iVar4 + iVar9) = 0;
            }
            iVar9 = *piVar13;
            *(undefined2 *)((int)pvVar2 + 0x46) = 0;
            *(undefined2 *)(iVar9 + iVar12 + 0x46) = 0;
          } while (param_3 != sVar11);
        }
LAB_00010f78:
        local_34 = local_34 + 1;
        if (iVar3 == local_34) {
          return local_44;
        }
        if (iVar3 <= local_44) {
          return local_44;
        }
      } while( true );
    }
    local_44 = -0x26;
  }
  return local_44;
}



/* ===== _fini @ 00011278 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


