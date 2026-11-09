// input.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010554 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::ioctl @ 00010578 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002300c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023010)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010590 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00023014)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001059c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023018)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000105a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002301c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::calloc @ 000105b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00023020)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000105c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023024)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000105cc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023028)();
  return;
}



/* ===== <EXTERNAL>::read @ 000105d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002302c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000105e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 000105f0 size=12 ===== */

void tslib_parse_vars(void)

{
  (*(code *)PTR_tslib_parse_vars_00023034)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000105fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023038)();
  return piVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010608 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002303c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00023040)(__ptr);
  return;
}



/* ===== entry @ 00010620 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001066c + 0x10638 == DAT_00010668 + 0x10630) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010670 + 0x10640 + DAT_00010674);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000106dc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010750 + 0x106f8;
  if (*(char *)(DAT_0001074c + 0x106ec) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010754) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010758 + 0x10718));
  }
  entry();
  if (*(int *)(iVar1 + DAT_0001075c) != 0) {
    __deregister_frame_info(DAT_00010760 + 0x10738);
  }
  *(undefined1 *)(DAT_00010764 + 0x10748) = 1;
  return;
}



/* ===== _INIT_0 @ 00010768 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000107a0 + 0x10778 + DAT_000107a4) != 0) {
    __register_frame_info(DAT_000107ac + 0x10798,DAT_000107a8 + 0x10794);
  }
  if (((DAT_000106d0 + 0x10690) - (DAT_000106cc + 0x10688) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000106d4 + 0x10698 + DAT_000106d8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== input_mod_init @ 000107b0 size=156 ===== */

void * input_mod_init(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  __ptr = malloc(0x54);
  iVar1 = DAT_0001084c;
  if (__ptr != (void *)0x0) {
    iVar2 = DAT_0001084c + 0x107e4;
    *(undefined4 *)((int)__ptr + 0x10) = 0;
    *(int *)((int)__ptr + 0xc) = iVar2;
    *(undefined4 *)((int)__ptr + 0x14) = 0;
    *(undefined4 *)((int)__ptr + 0x18) = 0;
    *(undefined2 *)((int)__ptr + 0x1c) = 0;
    *(undefined4 *)((int)__ptr + 0x30) = 0;
    *(undefined4 *)((int)__ptr + 0x34) = 0;
    *(undefined4 *)((int)__ptr + 0x38) = 0;
    *(undefined4 *)((int)__ptr + 0x3c) = 0;
    *(undefined4 *)((int)__ptr + 0x40) = 0;
    *(undefined2 *)((int)__ptr + 0x48) = 0;
    *(undefined1 *)((int)__ptr + 0x4a) = 0;
    *(undefined2 *)((int)__ptr + 0x52) = 0;
    *(undefined4 *)((int)__ptr + 0x4c) = 0;
    *(undefined4 *)((int)__ptr + 0x44) = 0xfffffffe;
    iVar1 = tslib_parse_vars(__ptr,iVar1 + 0x107f0,1,param_2);
    if (iVar1 != 0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
  }
  return __ptr;
}



/* ===== FUN_00010850 @ 00010850 size=120 ===== */

undefined4 FUN_00010850(int param_1,char *param_2,int param_3)

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
    if (param_3 != 1) {
      return 0xffffffff;
    }
  }
  else {
    *piVar1 = iVar3;
    if (param_3 != 1) {
      return 0xffffffff;
    }
    if (uVar2 == 0) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 0;
}



/* ===== FUN_000108c8 @ 000108c8 size=200 ===== */

undefined4 FUN_000108c8(undefined4 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00010990 + 0x108e4;
  if ((*(char *)((int)param_1 + 0x1d) == '\x02') &&
     (iVar2 = ioctl(*(int *)*param_1,0x40044590,0), iVar2 != 0)) {
    fwrite((void *)(DAT_00010998 + 0x10988),1,0x2f,(FILE *)**(undefined4 **)(iVar1 + DAT_00010994));
  }
  iVar1 = param_1[0xf];
  __ptr_00 = (void *)param_1[0xc];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      __ptr = *(void **)((int)__ptr_00 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        __ptr_00 = (void *)param_1[0xc];
        iVar1 = param_1[0xf];
      }
    } while (iVar2 < iVar1);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    free((void *)param_1[0x13]);
  }
  free(param_1);
  return 0;
}



/* ===== FUN_0001099c @ 0001099c size=1012 ===== */

int FUN_0001099c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  short local_80;
  short local_7e;
  ushort local_7c;
  short local_7a;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  
  iVar4 = DAT_00010d90;
  piVar3 = (int *)*param_1;
  iVar1 = ioctl(*piVar3,0x80044501,&local_90);
  iVar4 = iVar4 + 0x109cc;
  if (iVar1 < 0) {
    fwrite((void *)(DAT_00010db0 + 0x10d10),1,0x39,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
    return -1;
  }
  if (local_90 < 0x10001) {
    fwrite((void *)(DAT_00010d9c + 0x10c1c),1,0x6b,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
  }
  iVar1 = ioctl(*piVar3,0x80044520,&local_8c);
  if ((iVar1 < 0) || ((local_8c & 8) == 0)) {
    fwrite((void *)(DAT_00010da8 + 0x10cc0),1,0x4a,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
    return -1;
  }
  iVar1 = ioctl(*piVar3,0x80084523,&local_88);
  if ((iVar1 < 0) || ((local_88 & 3) != 3)) {
    if ((local_84 & 0x600000) != 0x600000) {
      fwrite((void *)(DAT_00010dac + 0x10ce8),1,0x61,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94)
            );
      return -1;
    }
LAB_00010a3c:
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else if ((local_84 & 0x600000) == 0x600000) goto LAB_00010a3c;
  if ((local_8c & 2) != 0) {
    iVar1 = ioctl(*piVar3,0x80604521,auStack_78);
    if (iVar1 < 0) {
      fwrite((void *)(DAT_00010db8 + 0x10d5c),1,0x1e,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94)
            );
      return -1;
    }
    if (((local_50 & 0x400) == 0 && (local_58 & 0x10000) == 0) &&
       (*(char *)(param_1 + 0x12) == '\0')) {
      fwrite((void *)(DAT_00010da4 + 0x10c98),1,0x4c,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94)
            );
      return -1;
    }
  }
  if ((local_8c & 1) != 0) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  iVar1 = ioctl(*(int *)*param_1,0x80084502,&local_80);
  if (iVar1 < 0) {
    fwrite((void *)(DAT_00010db4 + 0x10d38),1,0x25,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
  }
  else if ((((local_80 == 3) && (local_7e == 0xeef)) &&
           ((uVar2 = (uint)local_7c, uVar2 == 1 || ((uVar2 != 0 && (uVar2 - 0x7200 < 2)))))) &&
          (local_7a == 0x210)) {
    *(undefined2 *)((int)param_1 + 0x52) = 2;
  }
  if ((local_88 & 0x1000000) == 0) {
    *(undefined1 *)((int)param_1 + 0x49) = 1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(bool *)((int)param_1 + 0x49) = (local_84 & 0x4000000) == 0;
  }
  iVar1 = ioctl(*piVar3,0x80044520,&local_80);
  if (iVar1 == -1) {
    fwrite((void *)(DAT_00010da0 + 0x10c40),1,0x13,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)((int)param_1 + 0x1d) != '\x01') goto LAB_00010adc;
LAB_00010c48:
    iVar1 = ioctl(*piVar3,0x40044590,1);
    if (iVar1 != 0) {
      fwrite((void *)(DAT_00010dbc + 0x10d84),1,0x2c,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94)
            );
      return -1;
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 2;
    if (*(char *)(param_1 + 0x12) == '\0') goto LAB_00010adc;
  }
  else {
    if ((local_84 & 0x2008000) == 0) {
      *(undefined1 *)((int)param_1 + 0x4a) = 1;
    }
    if (*(char *)((int)param_1 + 0x1d) == '\x01') goto LAB_00010c48;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    fwrite((void *)(DAT_00010d98 + 0x10b8c),1,0x36,(FILE *)**(undefined4 **)(iVar4 + DAT_00010d94));
    return -1;
  }
LAB_00010adc:
  return *piVar3;
}



/* ===== FUN_00010dc0 @ 00010dc0 size=2568 ===== */

int FUN_00010dc0(undefined4 *param_1,int *param_2,size_t param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  void *__ptr;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  size_t sVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  iVar10 = param_1[0x11];
  iVar11 = DAT_000117c8 + 0x10de4;
  piVar7 = (int *)*param_1;
  if (*piVar7 != iVar10) {
    iVar10 = FUN_0001099c();
    param_1[0x11] = iVar10;
  }
  if (iVar10 == -1) {
    return -0x13;
  }
  pvVar12 = (void *)param_1[0xc];
  if (pvVar12 != (void *)0x0) {
    iVar10 = param_1[0xf];
    if (((int)param_3 <= (int)param_1[0xe]) && (param_4 <= iVar10)) goto LAB_00010ed8;
    if (0 < iVar10) {
      iVar16 = 0;
      do {
        __ptr = *(void **)((int)pvVar12 + iVar16 * 4);
        iVar16 = iVar16 + 1;
        if (__ptr != (void *)0x0) {
          free(__ptr);
          pvVar12 = (void *)param_1[0xc];
          iVar10 = param_1[0xf];
        }
      } while (iVar16 < iVar10);
    }
    free(pvVar12);
  }
  pvVar12 = malloc(param_4 * 4);
  param_1[0xc] = pvVar12;
  if (pvVar12 == (void *)0x0) {
    return -0xc;
  }
  if (0 < param_4) {
    puVar17 = (undefined4 *)((int)pvVar12 + -4);
    iVar10 = 0;
    do {
      pvVar12 = calloc(param_3,0x48);
      iVar10 = iVar10 + 1;
      puVar17 = puVar17 + 1;
      *puVar17 = pvVar12;
      if (pvVar12 == (void *)0x0) {
        return -0xc;
      }
    } while (param_4 != iVar10);
  }
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  if (*(char *)((int)param_1 + 0x4a) != '\0') {
    pvVar12 = calloc(param_3,4);
    param_1[0x13] = pvVar12;
    if (pvVar12 == (void *)0x0) {
      if (param_4 < 1) {
        return -0xc;
      }
      sVar15 = 0;
      do {
        puVar17 = (undefined4 *)(param_1[0xc] + sVar15);
        sVar15 = sVar15 + 4;
        free((void *)*puVar17);
      } while (param_4 * 4 != sVar15);
      return -0xc;
    }
  }
LAB_00010ed8:
  if (*(char *)((int)param_1 + 0x49) != '\0') {
    iVar10 = param_1[0xc];
    param_1[6] = 0xff;
    if ((iVar10 != 0) && (iVar16 = param_1[0xf], 0 < iVar16)) {
      iVar19 = param_1[0xe];
      iVar3 = 0;
      do {
        if (0 < iVar19) {
          iVar13 = *(int *)(iVar10 + iVar3 * 4);
          iVar8 = iVar19 * 0x48 + iVar13;
          do {
            *(undefined4 *)(iVar13 + 8) = 0xff;
            iVar13 = iVar13 + 0x48;
          } while (iVar8 != iVar13);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar16);
    }
  }
  if (param_4 < 1) {
    return 0;
  }
  iVar10 = 0;
  do {
    iVar16 = iVar10;
    if (0 < (int)param_3) {
      iVar3 = *(int *)(param_1[0xc] + iVar16 * 4);
      iVar10 = iVar3;
      do {
        *(undefined2 *)(iVar10 + 0x46) = 0;
        iVar19 = iVar10 + 0x48;
        *(undefined2 *)(iVar10 + 0x44) = 0xffff;
        iVar10 = iVar19;
      } while (param_3 * 0x48 + iVar3 != iVar19);
    }
    iVar10 = iVar16 + 1;
  } while (param_4 != iVar10);
  uVar22 = 0;
  uVar23 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar25 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  bVar21 = false;
  iVar3 = 0;
  do {
    param_1[8] = uVar22;
    param_1[9] = uVar23;
    param_1[10] = uVar24;
    param_1[0xb] = uVar25;
    sVar4 = read(*piVar7,param_1 + 8,0x10);
    if (sVar4 == -1) {
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar7 = __errno_location();
      iVar10 = *piVar7;
      if (0 < iVar10) {
        return -iVar10;
      }
      return iVar10;
    }
    if (sVar4 < 0x10) {
      if (iVar3 == 0) {
        return -1;
      }
      return iVar3;
    }
    sVar1 = *(short *)(param_1 + 10);
    if (sVar1 == 1) {
      if (*(short *)((int)param_1 + 0x2a) == 0x14a) {
        uVar6 = param_1[8];
        iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
        uVar9 = param_1[9];
        if (param_1[0xb] == 0) {
          bVar21 = true;
        }
        *(short *)(iVar19 + 0x44) = (short)param_1[0xb];
        *(undefined4 *)(iVar19 + 0x3c) = uVar6;
        *(undefined4 *)(iVar19 + 0x40) = uVar9;
        *(ushort *)(iVar19 + 0x46) = *(ushort *)(iVar19 + 0x46) | 1;
      }
      goto switchD_0001100c_default;
    }
    if (sVar1 == 0) {
      if (*(short *)((int)param_1 + 0x2a) == 0) {
        if (((bVar21) && (*(char *)((int)param_1 + 0x49) != '\0')) && (0 < (int)param_3)) {
          iVar8 = *(int *)(param_1[0xc] + iVar3 * 4);
          iVar19 = param_3 * 0x48 + iVar8;
          do {
            *(undefined4 *)(iVar8 + 8) = 0;
            iVar8 = iVar8 + 0x48;
          } while (iVar19 != iVar8);
        }
        iVar19 = param_1[0xd];
        if (*(char *)((int)param_1 + 0x4a) == '\0') {
          if ((int)param_3 <= iVar19) goto LAB_00011624;
        }
        else {
          if (iVar19 != 0) {
            iVar19 = iVar19 + -1;
            param_1[0xd] = iVar19;
          }
          if ((int)param_3 <= iVar19) {
LAB_00011624:
            fwrite((void *)(DAT_000117d8 + 0x1164c),1,0x18,
                   (FILE *)**(undefined4 **)(iVar11 + DAT_000117d0));
            return -1;
          }
          iVar8 = (int)*(char *)(param_1 + 0x14);
          if ((iVar19 < iVar8) && (0 < (int)param_3)) {
            sVar15 = 0;
            while( true ) {
              if (iVar8 <= (int)sVar15) {
                iVar8 = param_1[0x13];
                iVar19 = sVar15 * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
                uVar2 = *(ushort *)(iVar19 + 0x46);
                *(undefined4 *)(iVar19 + 8) = 0;
                *(undefined4 *)(iVar19 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar8 + sVar15 * 4) = 0;
                *(ushort *)(iVar19 + 0x46) = uVar2 | 1;
              }
              sVar15 = sVar15 + 1;
              if (param_3 == sVar15) break;
              iVar8 = (int)*(char *)(param_1 + 0x14);
            }
            iVar19 = param_1[0xd];
          }
        }
        *(char *)(param_1 + 0x14) = (char)iVar19;
        iVar19 = 0;
        piVar5 = param_2;
        do {
          if (0 < (int)param_3) {
            sVar15 = 0;
            do {
              iVar8 = sVar15 * 0x48;
              sVar15 = sVar15 + 1;
              memcpy((void *)(*piVar5 + iVar8),(void *)(*(int *)(param_1[0xc] + iVar19 * 4) + iVar8)
                     ,0x48);
            } while (param_3 != sVar15);
          }
          bVar21 = iVar19 != iVar16;
          piVar5 = piVar5 + 1;
          iVar19 = iVar19 + 1;
        } while (bVar21);
        bVar21 = false;
        iVar3 = iVar3 + 1;
        if (*(char *)((int)param_1 + 0x4a) != '\0') {
          param_1[0xd] = 0;
        }
      }
      else if ((*(short *)((int)param_1 + 0x2a) == 2) && (*(char *)((int)param_1 + 0x4a) != '\0')) {
        iVar8 = param_1[0xd];
        iVar20 = param_1[0x13];
        iVar13 = *(int *)(param_1[0xc] + iVar3 * 4);
        iVar19 = iVar8 * 0x48 + iVar13;
        uVar2 = *(ushort *)(iVar19 + 0x46);
        *(int *)(iVar19 + 0xc) = iVar8;
        if ((short)uVar2 < 1) {
          *(undefined4 *)(iVar19 + 8) = 0;
          *(undefined4 *)(iVar19 + 0x10) = 0xffffffff;
          *(undefined4 *)(iVar20 + iVar8 * 4) = 0;
          iVar8 = param_1[0xd];
          iVar19 = iVar8 * 0x48 + iVar13;
          uVar2 = *(ushort *)(iVar19 + 0x46);
        }
        else if (*(int *)(iVar20 + iVar8 * 4) == 0) {
          piVar5 = (int *)(DAT_000117cc + 70000);
          iVar14 = *piVar5 + 1;
          *(int *)(iVar19 + 0x10) = iVar14;
          *(undefined4 *)(iVar20 + iVar8 * 4) = 1;
          iVar8 = param_1[0xd];
          *piVar5 = iVar14;
          iVar19 = iVar8 * 0x48 + iVar13;
          uVar2 = *(ushort *)(iVar19 + 0x46);
        }
        iVar13 = iVar8;
        if (iVar8 < (int)param_3) {
          iVar13 = iVar8 + 1;
        }
        *(ushort *)(iVar19 + 0x46) = uVar2 | 1;
        if (iVar8 < (int)param_3) {
          param_1[0xd] = iVar13;
        }
      }
      goto switchD_0001100c_default;
    }
    if (sVar1 != 3) goto switchD_0001100c_default;
    switch(*(undefined2 *)((int)param_1 + 0x2a)) {
    case 0:
      puVar17 = (undefined4 *)(param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4));
      uVar2 = *(ushort *)((int)puVar17 + 0x46);
      if ((*(char *)(param_1 + 0x12) == '\0') || ((uVar2 & 1) == 0)) goto LAB_00011364;
      break;
    case 1:
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar2 = *(ushort *)(iVar19 + 0x46);
      if ((*(char *)(param_1 + 0x12) == '\0') || ((uVar2 & 1) == 0)) goto LAB_00011334;
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar2 = *(ushort *)(iVar19 + 0x46);
      if ((*(char *)(param_1 + 0x12) == '\0') || ((uVar2 & 1) == 0)) goto LAB_0001127c;
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      break;
    case 0x1c:
      break;
    case 0x1d:
      break;
    case 0x1e:
      break;
    case 0x1f:
      break;
    case 0x20:
      break;
    case 0x21:
      break;
    case 0x22:
      break;
    case 0x23:
      break;
    case 0x24:
      break;
    case 0x25:
      break;
    case 0x26:
      break;
    case 0x27:
      break;
    case 0x28:
      break;
    case 0x29:
      break;
    case 0x2a:
      break;
    case 0x2b:
      break;
    case 0x2c:
      break;
    case 0x2d:
      break;
    case 0x2e:
      break;
    case 0x2f:
      iVar19 = param_1[0xb];
      if (iVar19 < (int)param_3 && -1 < iVar19) {
        param_1[0xd] = iVar19;
        iVar8 = iVar19 * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
        *(int *)(iVar8 + 0xc) = iVar19;
        *(ushort *)(iVar8 + 0x46) = *(ushort *)(iVar8 + 0x46) | 1;
      }
      else {
        fwrite((void *)(DAT_000117d4 + 0x11478),1,0x33,
               (FILE *)**(undefined4 **)(iVar11 + DAT_000117d0));
        param_1[0xd] = param_3 - 1;
      }
      break;
    case 0x30:
      iVar19 = param_1[0xb];
      iVar8 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar8 + 0x3c) = param_1[8];
      *(int *)(iVar8 + 0x20) = iVar19;
      *(undefined4 *)(iVar8 + 0x40) = uVar6;
      *(ushort *)(iVar8 + 0x46) = *(ushort *)(iVar8 + 0x46) | 1;
      if (iVar19 == 0) {
        *(undefined4 *)(iVar8 + 8) = 0;
      }
      break;
    case 0x31:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x28) = param_1[0xb];
      goto LAB_000111e0;
    case 0x32:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x24) = param_1[0xb];
      goto LAB_000111e0;
    case 0x33:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x2c) = param_1[0xb];
      goto LAB_000111e0;
    case 0x34:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x30) = param_1[0xb];
      goto LAB_000111e0;
    case 0x35:
      puVar17 = (undefined4 *)(param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4));
      uVar2 = *(ushort *)((int)puVar17 + 0x46);
LAB_00011364:
      uVar18 = param_1[0xb];
      uVar6 = param_1[8];
      uVar9 = param_1[9];
      *(ushort *)((int)puVar17 + 0x46) = uVar2 | 1;
      *puVar17 = uVar18;
      puVar17[0xf] = uVar6;
      puVar17[0x10] = uVar9;
      break;
    case 0x36:
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar2 = *(ushort *)(iVar19 + 0x46);
LAB_00011334:
      uVar18 = param_1[0xb];
      uVar6 = param_1[8];
      uVar9 = param_1[9];
      *(ushort *)(iVar19 + 0x46) = uVar2 | 1;
      *(undefined4 *)(iVar19 + 4) = uVar18;
      *(undefined4 *)(iVar19 + 0x3c) = uVar6;
      *(undefined4 *)(iVar19 + 0x40) = uVar9;
      break;
    case 0x37:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x14) = param_1[0xb];
      goto LAB_000111e0;
    case 0x38:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x38) = param_1[0xb];
      goto LAB_000111e0;
    case 0x39:
      iVar19 = param_1[0xb];
      iVar8 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar8 + 0x3c) = param_1[8];
      *(int *)(iVar8 + 0x10) = iVar19;
      *(undefined4 *)(iVar8 + 0x40) = uVar6;
      *(ushort *)(iVar8 + 0x46) = *(ushort *)(iVar8 + 0x46) | 1;
      if (iVar19 == -1) {
LAB_000112d8:
        *(undefined4 *)(iVar8 + 8) = 0;
      }
      break;
    case 0x3a:
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar2 = *(ushort *)(iVar19 + 0x46);
LAB_0001127c:
      uVar18 = param_1[0xb];
      uVar6 = param_1[8];
      uVar9 = param_1[9];
      *(ushort *)(iVar19 + 0x46) = uVar2 | 1;
      *(undefined4 *)(iVar19 + 8) = uVar18;
      *(undefined4 *)(iVar19 + 0x3c) = uVar6;
      *(undefined4 *)(iVar19 + 0x40) = uVar9;
      break;
    case 0x3b:
      sVar1 = *(short *)((int)param_1 + 0x52);
      iVar19 = param_1[0xb];
      uVar6 = param_1[9];
      iVar8 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      *(undefined4 *)(iVar8 + 0x3c) = param_1[8];
      *(int *)(iVar8 + 0x34) = iVar19;
      *(undefined4 *)(iVar8 + 0x40) = uVar6;
      *(ushort *)(iVar8 + 0x46) = *(ushort *)(iVar8 + 0x46) | 1;
      if (sVar1 == 2) {
        if (0 < iVar19) goto LAB_000112d8;
        *(undefined4 *)(iVar8 + 8) = 0xff;
      }
      break;
    case 0x3c:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x18) = param_1[0xb];
      goto LAB_000111e0;
    case 0x3d:
      uVar9 = param_1[8];
      iVar19 = param_1[0xd] * 0x48 + *(int *)(param_1[0xc] + iVar3 * 4);
      uVar6 = param_1[9];
      *(undefined4 *)(iVar19 + 0x1c) = param_1[0xb];
LAB_000111e0:
      *(undefined4 *)(iVar19 + 0x3c) = uVar9;
      *(undefined4 *)(iVar19 + 0x40) = uVar6;
      *(ushort *)(iVar19 + 0x46) = *(ushort *)(iVar19 + 0x46) | 1;
    }
switchD_0001100c_default:
    if (iVar3 == iVar10) {
      return iVar10;
    }
    if (iVar10 <= iVar3) {
      return iVar3;
    }
  } while( true );
}



/* ===== FUN_000117dc @ 000117dc size=1400 ===== */

int FUN_000117dc(undefined4 *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int extraout_r2;
  int iVar7;
  int iVar8;
  char *__format;
  void *__ptr;
  void *__ptr_00;
  int iVar9;
  int *piVar10;
  int *__buf;
  size_t __nbytes;
  int iVar11;
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  int local_2c;
  
  piVar10 = (int *)*param_1;
  iVar7 = param_1[0x11];
  iVar5 = DAT_00011d54 + 0x11804;
  if (*piVar10 != iVar7) {
    iVar7 = FUN_0001099c();
    param_1[0x11] = iVar7;
  }
  if (iVar7 == -1) {
    iVar7 = -0x13;
  }
  else {
    if (*(char *)((int)param_1 + 0x49) != '\0') {
      iVar7 = param_1[0xc];
      param_1[6] = 0xff;
      if ((iVar7 != 0) && (iVar11 = param_1[0xf], 0 < iVar11)) {
        iVar9 = param_1[0xe];
        iVar2 = 0;
        do {
          if (0 < iVar9) {
            iVar8 = *(int *)(iVar7 + iVar2 * 4);
            iVar6 = iVar9 * 0x48 + iVar8;
            do {
              *(undefined4 *)(iVar8 + 8) = 0xff;
              iVar8 = iVar8 + 0x48;
            } while (iVar6 != iVar8);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar11);
      }
    }
    if (*(char *)(param_1 + 7) == '\0') {
      iVar7 = 0;
      if (0 < param_3) {
        __nbytes = 0x10;
        __format = (char *)(DAT_00011d58 + 0x11a08);
        __ptr = (void *)(DAT_00011d5c + 0x11a18);
        __ptr_00 = (void *)(DAT_00011d60 + 0x11a24);
        __buf = &local_38;
        do {
          sVar3 = read(*piVar10,__buf,__nbytes);
          if (sVar3 == -1) {
            piVar4 = __errno_location();
            if (*piVar4 != 4) {
              return iVar7;
            }
          }
          else if (sVar3 < 0x10) {
            __nbytes = __nbytes - sVar3;
            __buf = (int *)((int)__buf + sVar3);
          }
          else if (local_30 == 3) {
            if (local_2e == 1) {
              if (local_2c == 0) {
                fwrite(__ptr,1,0x15,(FILE *)**(undefined4 **)(iVar5 + DAT_00011d64));
                goto LAB_00011a7c;
              }
              iVar11 = param_1[6];
              *param_2 = param_1[4];
              param_1[5] = local_2c;
              param_2[1] = local_2c;
              param_2[2] = iVar11;
            }
            else if (local_2e == 0) {
              if (local_2c == 0) {
                fwrite(__ptr_00,1,0x15,(FILE *)**(undefined4 **)(iVar5 + DAT_00011d64));
                goto LAB_00011a7c;
              }
              iVar11 = param_1[5];
              iVar2 = param_1[6];
              param_1[4] = local_2c;
              *param_2 = local_2c;
              param_2[1] = iVar11;
              param_2[2] = iVar2;
            }
            else if (local_2e == 0x18) {
              iVar11 = param_1[5];
              *param_2 = param_1[4];
              param_2[1] = iVar11;
              param_1[6] = local_2c;
              param_2[2] = local_2c;
            }
            iVar7 = iVar7 + 1;
            param_2[3] = local_38;
            param_2[4] = local_34;
            __buf = &local_38;
            param_2 = param_2 + 5;
          }
          else if (local_30 == 1) {
            if (((local_2e == 0x110) || (__buf = &local_38, local_2e == 0x14a)) &&
               (__buf = &local_38, local_2c == 0)) {
              iVar7 = iVar7 + 1;
              *param_2 = 0;
              param_2[1] = 0;
              param_2[2] = 0;
              param_2[3] = local_38;
              param_2[4] = local_34;
              param_2 = param_2 + 5;
            }
          }
          else {
            fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00011d64),__format);
            __buf = &local_38;
          }
LAB_00011a7c:
        } while (iVar7 < param_3);
      }
    }
    else if (param_3 < 1) {
      iVar7 = 0;
    }
    else {
      bVar1 = false;
      iVar7 = 0;
      do {
        sVar3 = read(*piVar10,&local_38,0x10);
        if (sVar3 < 0x10) {
          return -1;
        }
        if (local_30 == 1) {
          if (((local_2e == 0x110) || (local_2e == 0x14a)) && (local_2c == 0)) {
            bVar1 = true;
          }
          goto switchD_000118f8_default;
        }
        if (local_30 == 0) {
          if (local_2e == 0) {
            if (bVar1) {
              *param_2 = 0;
              param_2[1] = 0;
              param_2[2] = 0;
              iVar5 = 0;
              iVar11 = extraout_r1;
              iVar2 = extraout_r2;
            }
            else {
              iVar11 = param_1[4];
              iVar2 = param_1[5];
              iVar5 = param_1[6];
            }
            iVar7 = iVar7 + 1;
            if (!bVar1) {
              *param_2 = iVar11;
              param_2[1] = iVar2;
              param_2[2] = iVar5;
            }
            param_2[3] = local_38;
            param_2[4] = local_34;
            param_2 = param_2 + 5;
            bVar1 = false;
          }
          else if ((local_2e == 2) && (*(char *)((int)param_1 + 0x4a) != '\0')) {
            if (*(char *)((int)param_1 + 0x4a) == '\x01') {
              bVar1 = true;
            }
            else {
              *(undefined1 *)((int)param_1 + 0x4a) = 1;
            }
          }
          goto switchD_000118f8_default;
        }
        if (local_30 != 3) goto switchD_000118f8_default;
        if (*(short *)((int)param_1 + 0x52) == 2) {
          if (local_2e == 1) goto LAB_00011c14;
          if (local_2e == 0) goto LAB_00011c20;
          if (local_2e == 0x18) goto LAB_00011a90;
          if (local_2e == 0x3b) {
            if (0 < local_2c) goto LAB_00011b88;
            param_1[6] = 0xff;
          }
          goto switchD_000118f8_default;
        }
        switch(local_2e) {
        case 0:
LAB_00011c20:
          param_1[4] = local_2c;
          break;
        case 1:
LAB_00011c14:
          param_1[5] = local_2c;
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
          break;
        case 10:
          break;
        case 0xb:
          break;
        case 0xc:
          break;
        case 0xd:
          break;
        case 0xe:
          break;
        case 0xf:
          break;
        case 0x10:
          break;
        case 0x11:
          break;
        case 0x12:
          break;
        case 0x13:
          break;
        case 0x14:
          break;
        case 0x15:
          break;
        case 0x16:
          break;
        case 0x17:
          break;
        case 0x18:
          goto LAB_00011a90;
        case 0x19:
          break;
        case 0x1a:
          break;
        case 0x1b:
          break;
        case 0x1c:
          break;
        case 0x1d:
          break;
        case 0x1e:
          break;
        case 0x1f:
          break;
        case 0x20:
          break;
        case 0x21:
          break;
        case 0x22:
          break;
        case 0x23:
          break;
        case 0x24:
          break;
        case 0x25:
          break;
        case 0x26:
          break;
        case 0x27:
          break;
        case 0x28:
          break;
        case 0x29:
          break;
        case 0x2a:
          break;
        case 0x2b:
          break;
        case 0x2c:
          break;
        case 0x2d:
          break;
        case 0x2e:
          break;
        case 0x2f:
          break;
        case 0x30:
          if (local_2c == 0) {
LAB_00011b88:
            param_1[6] = 0;
          }
          break;
        case 0x31:
          break;
        case 0x32:
          break;
        case 0x33:
          break;
        case 0x34:
          break;
        case 0x35:
          param_1[4] = local_2c;
          *(char *)((int)param_1 + 0x4a) = *(char *)((int)param_1 + 0x4a) + '\x01';
          break;
        case 0x36:
          param_1[5] = local_2c;
          *(char *)((int)param_1 + 0x4a) = *(char *)((int)param_1 + 0x4a) + '\x01';
          break;
        case 0x37:
          break;
        case 0x38:
          break;
        case 0x39:
          if (local_2c == -1) goto LAB_00011b88;
          break;
        case 0x3a:
LAB_00011a90:
          param_1[6] = local_2c;
        }
switchD_000118f8_default:
      } while (iVar7 < param_3);
    }
  }
  return iVar7;
}



/* ===== _fini @ 00011d68 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_parse_vars @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_parse_vars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


