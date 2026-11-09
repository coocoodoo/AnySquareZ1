// libz.so.1 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011a60 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== deflate @ 00011a90 size=12 ===== */

void deflate(void)

{
  (*(code *)PTR_deflate_00032010)();
  return;
}



/* ===== gzseek64 @ 00011a9c size=12 ===== */

void gzseek64(void)

{
  (*(code *)PTR_gzseek64_00032014)();
  return;
}



/* ===== gzgetc @ 00011aa8 size=12 ===== */

void gzgetc(void)

{
  (*(code *)PTR_gzgetc_00032018)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011ab4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003201c)(__errnum);
  return pcVar1;
}



/* ===== inflateReset2 @ 00011ac0 size=12 ===== */

void inflateReset2(void)

{
  (*(code *)PTR_inflateReset2_00032020)();
  return;
}



/* ===== deflateResetKeep @ 00011acc size=12 ===== */

void deflateResetKeep(void)

{
  (*(code *)PTR_deflateResetKeep_00032024)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011ad8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00032028)(__s);
  return iVar1;
}



/* ===== inflate @ 00011ae4 size=12 ===== */

void inflate(void)

{
  (*(code *)PTR_inflate_0003202c)();
  return;
}



/* ===== gztell64 @ 00011af0 size=12 ===== */

void gztell64(void)

{
  (*(code *)PTR_gztell64_00032030)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011afc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00032034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011b08 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00032038)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003203c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00032040)(__s);
  return iVar1;
}



/* ===== gzoffset64 @ 00011b2c size=12 ===== */

void gzoffset64(void)

{
  (*(code *)PTR_gzoffset64_00032044)();
  return;
}



/* ===== inflateInit_ @ 00011b44 size=12 ===== */

void inflateInit_(void)

{
  (*(code *)PTR_inflateInit__0003204c)();
  return;
}



/* ===== <EXTERNAL>::write @ 00011b50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00032050)(__fd);
  return sVar1;
}



/* ===== deflateInit_ @ 00011b5c size=12 ===== */

void deflateInit_(void)

{
  (*(code *)PTR_deflateInit__00032054)();
  return;
}



/* ===== adler32 @ 00011b68 size=12 ===== */

void adler32(void)

{
  (*(code *)PTR_adler32_00032058)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011b74 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003205c)();
  return;
}



/* ===== crc32_z @ 00011b80 size=12 ===== */

void crc32_z(void)

{
  (*(code *)PTR_crc32_z_00032060)();
  return;
}



/* ===== <EXTERNAL>::memchr @ 00011b8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00032064)(__s);
  return pvVar1;
}



/* ===== crc32 @ 00011b98 size=12 ===== */

void crc32(void)

{
  (*(code *)PTR_crc32_00032068)();
  return;
}



/* ===== <EXTERNAL>::read @ 00011ba4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0003206c)(__fd);
  return sVar1;
}



/* ===== deflateInit2_ @ 00011bb0 size=12 ===== */

void deflateInit2_(void)

{
  (*(code *)PTR_deflateInit2__00032070)();
  return;
}



/* ===== inflateReset @ 00011bc8 size=12 ===== */

void inflateReset(void)

{
  (*(code *)PTR_inflateReset_00032078)();
  return;
}



/* ===== deflateReset @ 00011bd4 size=12 ===== */

void deflateReset(void)

{
  (*(code *)PTR_deflateReset_0003207c)();
  return;
}



/* ===== gzvprintf @ 00011be0 size=12 ===== */

void gzvprintf(void)

{
  (*(code *)PTR_gzvprintf_00032080)();
  return;
}



/* ===== compress2 @ 00011bec size=12 ===== */

void compress2(void)

{
  (*(code *)PTR_compress2_00032084)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00011bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00032088)(__s);
  return pvVar1;
}



/* ===== uncompress2 @ 00011c04 size=12 ===== */

void uncompress2(void)

{
  (*(code *)PTR_uncompress2_0003208c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00032090)();
  return piVar1;
}



/* ===== adler32_z @ 00011c1c size=12 ===== */

void adler32_z(void)

{
  (*(code *)PTR_adler32_z_00032094)();
  return;
}



/* ===== deflateParams @ 00011c28 size=12 ===== */

void deflateParams(void)

{
  (*(code *)PTR_deflateParams_00032098)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003209c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00011c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_000320a0)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 00011c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000320a4)(__file);
  return iVar1;
}



/* ===== gzrewind @ 00011c58 size=12 ===== */

void gzrewind(void)

{
  (*(code *)PTR_gzrewind_000320a8)();
  return;
}



/* ===== inflateEnd @ 00011c64 size=12 ===== */

void inflateEnd(void)

{
  (*(code *)PTR_inflateEnd_000320ac)();
  return;
}



/* ===== inflateInit2_ @ 00011c70 size=12 ===== */

void inflateInit2_(void)

{
  (*(code *)PTR_inflateInit2__000320b0)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011c7c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000320b4)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000320b8)(__fd);
  return iVar1;
}



/* ===== deflateEnd @ 00011c94 size=12 ===== */

void deflateEnd(void)

{
  (*(code *)PTR_deflateEnd_000320bc)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000320c0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000320c4)(__ptr);
  return;
}



/* ===== entry @ 00011cb8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011d04 + 0x11cd0 == DAT_00011d00 + 0x11cc8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011d08 + 0x11cd8 + DAT_00011d0c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011d74 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011de8 + 0x11d90;
  if (*(char *)(DAT_00011de4 + 0x11d84) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011dec) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011df0 + 0x11db0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011df4) != 0) {
    __deregister_frame_info(DAT_00011df8 + 0x11dd0);
  }
  *(undefined1 *)(DAT_00011dfc + 0x11de0) = 1;
  return;
}



/* ===== _INIT_0 @ 00011e00 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011e38 + 0x11e10 + DAT_00011e3c) != 0) {
    __register_frame_info(DAT_00011e44 + 0x11e30,DAT_00011e40 + 0x11e2c);
  }
  if (((DAT_00011d68 + 73000) - (DAT_00011d64 + 0x11d20) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011d6c + 0x11d30 + DAT_00011d70);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011e48 @ 00011e48 size=168 ===== */

uint FUN_00011e48(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 < 0) {
    return 0xffffffff;
  }
  FUN_0001cbb0(param_3,param_4,0xfff1,0);
  uVar3 = (param_1 & 0xffff) * extraout_r2;
  iVar1 = (param_1 & 0xffff) + (param_2 & 0xffff);
  uVar4 = uVar3 % 0xfff1;
  if (iVar1 == 0) {
    uVar3 = 0xfff0;
  }
  iVar2 = (((param_2 >> 0x10) + (param_1 >> 0x10)) - extraout_r2) + uVar4;
  uVar4 = iVar2 + 0xfff1;
  if ((iVar1 != 0) && (uVar3 = iVar1 - 1, 0xfff0 < uVar3)) {
    uVar3 = iVar1 - 0xfff2;
  }
  if (DAT_00011ef0 < uVar4) {
    uVar4 = iVar2 - 0xfff1;
  }
  if (0xfff0 < uVar4) {
    uVar4 = uVar4 - 0xfff1;
  }
  return uVar3 | uVar4 << 0x10;
}



/* ===== adler32_z @ 00011ef4 size=800 ===== */

uint adler32_z(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar19 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = *param_2 + param_1;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar19 = param_1 + uVar19;
    if (0xfff0 < uVar19) {
      uVar19 = uVar19 - 0xfff1;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
    if (0xf < param_3) {
      param_2 = param_2 + 0x15c0;
      while (pbVar10 = param_2 + -0x15c0, 0x15af < param_3) {
        param_3 = param_3 - 0x15b0;
        pbVar10 = param_2 + -0x15b0;
        do {
          pbVar11 = pbVar10 + 0x10;
          iVar8 = pbVar10[-0x10] + param_1;
          iVar18 = (uint)pbVar10[-0xf] + iVar8;
          iVar17 = (uint)pbVar10[-0xe] + iVar18;
          iVar1 = (uint)pbVar10[-0xd] + iVar17;
          iVar2 = (uint)pbVar10[-0xc] + iVar1;
          iVar3 = (uint)pbVar10[-0xb] + iVar2;
          iVar4 = (uint)pbVar10[-10] + iVar3;
          iVar5 = (uint)pbVar10[-9] + iVar4;
          iVar6 = (uint)pbVar10[-8] + iVar5;
          iVar7 = (uint)pbVar10[-7] + iVar6;
          iVar16 = (uint)pbVar10[-6] + iVar7;
          iVar15 = (uint)pbVar10[-5] + iVar16;
          iVar14 = (uint)pbVar10[-4] + iVar15;
          iVar13 = (uint)pbVar10[-3] + iVar14;
          iVar12 = (uint)pbVar10[-2] + iVar13;
          param_1 = (uint)pbVar10[-1] + iVar12;
          uVar19 = uVar19 + iVar8 + iVar18 + iVar17 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6
                            + iVar7 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + param_1;
          pbVar10 = pbVar11;
        } while (param_2 != pbVar11);
        param_1 = param_1 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
        param_2 = param_2 + 0x15b0;
      }
      uVar9 = param_3;
      pbVar11 = pbVar10;
      if (param_3 != 0) {
        for (; 0xf < uVar9; uVar9 = uVar9 - 0x10) {
          iVar1 = *pbVar11 + param_1;
          iVar12 = (uint)pbVar11[1] + iVar1;
          iVar2 = (uint)pbVar11[2] + iVar12;
          iVar3 = (uint)pbVar11[3] + iVar2;
          iVar13 = (uint)pbVar11[4] + iVar3;
          iVar14 = (uint)pbVar11[5] + iVar13;
          iVar4 = (uint)pbVar11[6] + iVar14;
          iVar5 = (uint)pbVar11[7] + iVar4;
          iVar15 = (uint)pbVar11[8] + iVar5;
          iVar16 = (uint)pbVar11[9] + iVar15;
          iVar6 = (uint)pbVar11[10] + iVar16;
          iVar7 = (uint)pbVar11[0xb] + iVar6;
          iVar17 = (uint)pbVar11[0xc] + iVar7;
          iVar18 = (uint)pbVar11[0xd] + iVar17;
          iVar8 = (uint)pbVar11[0xe] + iVar18;
          param_1 = (uint)pbVar11[0xf] + iVar8;
          uVar19 = iVar1 + iVar12 + uVar19 + iVar2 + iVar3 + iVar13 + iVar14 + iVar4 + iVar5 +
                   iVar15 + iVar16 + iVar6 + iVar7 + iVar17 + iVar18 + iVar8 + param_1;
          pbVar11 = pbVar11 + 0x10;
        }
        for (pbVar11 = pbVar10 + (param_3 & 0xfffffff0); pbVar11 != pbVar10 + param_3;
            pbVar11 = pbVar11 + 1) {
          param_1 = param_1 + *pbVar11;
          uVar19 = uVar19 + param_1;
        }
        param_1 = param_1 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
      }
      return param_1 | uVar19 << 0x10;
    }
    pbVar10 = param_2 + param_3;
    for (; param_2 != pbVar10; param_2 = param_2 + 1) {
      param_1 = param_1 + *param_2;
      uVar19 = uVar19 + param_1;
    }
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar19 = uVar19 % 0xfff1;
  }
  return param_1 | uVar19 << 0x10;
}



/* ===== adler32 @ 00012214 size=4 ===== */

void adler32(void)

{
  (*(code *)PTR_adler32_z_00032094)();
  return;
}



/* ===== adler32_combine @ 00012218 size=4 ===== */

uint adler32_combine(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 < 0) {
    return 0xffffffff;
  }
  FUN_0001cbb0(param_3,param_4,0xfff1,0);
  uVar3 = (param_1 & 0xffff) * extraout_r2;
  iVar1 = (param_1 & 0xffff) + (param_2 & 0xffff);
  uVar4 = uVar3 % 0xfff1;
  if (iVar1 == 0) {
    uVar3 = 0xfff0;
  }
  iVar2 = (((param_2 >> 0x10) + (param_1 >> 0x10)) - extraout_r2) + uVar4;
  uVar4 = iVar2 + 0xfff1;
  if ((iVar1 != 0) && (uVar3 = iVar1 - 1, 0xfff0 < uVar3)) {
    uVar3 = iVar1 - 0xfff2;
  }
  if (DAT_00011ef0 < uVar4) {
    uVar4 = iVar2 - 0xfff1;
  }
  if (0xfff0 < uVar4) {
    uVar4 = uVar4 - 0xfff1;
  }
  return uVar3 | uVar4 << 0x10;
}



/* ===== adler32_combine64 @ 0001221c size=4 ===== */

uint adler32_combine64(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 < 0) {
    return 0xffffffff;
  }
  FUN_0001cbb0(param_3,param_4,0xfff1,0);
  uVar3 = (param_1 & 0xffff) * extraout_r2;
  iVar1 = (param_1 & 0xffff) + (param_2 & 0xffff);
  uVar4 = uVar3 % 0xfff1;
  if (iVar1 == 0) {
    uVar3 = 0xfff0;
  }
  iVar2 = (((param_2 >> 0x10) + (param_1 >> 0x10)) - extraout_r2) + uVar4;
  uVar4 = iVar2 + 0xfff1;
  if ((iVar1 != 0) && (uVar3 = iVar1 - 1, 0xfff0 < uVar3)) {
    uVar3 = iVar1 - 0xfff2;
  }
  if (DAT_00011ef0 < uVar4) {
    uVar4 = iVar2 - 0xfff1;
  }
  if (0xfff0 < uVar4) {
    uVar4 = uVar4 - 0xfff1;
  }
  return uVar3 | uVar4 << 0x10;
}



/* ===== FUN_00012220 @ 00012220 size=44 ===== */

uint FUN_00012220(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  while (puVar2 = param_1, param_2 != 0) {
    uVar1 = param_2 & 1;
    param_1 = puVar2 + 1;
    param_2 = param_2 >> 1;
    if (uVar1 != 0) {
      uVar3 = uVar3 ^ *puVar2;
    }
  }
  return uVar3;
}



/* ===== FUN_0001224c @ 0001224c size=48 ===== */

void FUN_0001224c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_00012220(param_2,*(undefined4 *)(param_2 + iVar2 * 4));
    *(undefined4 *)(param_1 + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x20);
  return;
}



/* ===== FUN_0001227c @ 0001227c size=252 ===== */

uint FUN_0001227c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_128 [128];
  int local_a8 [33];
  
  if ((int)(uint)(param_3 == 0) <= (int)param_4) {
    iVar1 = 1;
    local_a8[0] = DAT_00012378;
    iVar2 = 1;
    do {
      local_a8[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 << 1;
    } while (iVar2 != 0x20);
    FUN_0001224c(auStack_128,local_a8);
    FUN_0001224c(local_a8,auStack_128);
    do {
      FUN_0001224c(auStack_128,local_a8);
      if ((param_3 & 1) != 0) {
        param_1 = FUN_00012220(auStack_128,param_1);
      }
      if ((param_3 >> 1 == 0 && (param_4 & 1) == 0) && (int)param_4 >> 1 == 0) break;
      FUN_0001224c(local_a8,auStack_128);
      if ((param_3 >> 1 & 1) != 0) {
        param_1 = FUN_00012220(local_a8,param_1);
      }
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      param_4 = (int)param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    param_1 = param_1 ^ param_2;
  }
  return param_1;
}



/* ===== get_crc_table @ 0001237c size=12 ===== */

int get_crc_table(void)

{
  return (int)&DAT_00012388 + DAT_00012388;
}



/* ===== crc32_z @ 0001238c size=808 ===== */

uint crc32_z(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar4;
  uint uVar5;
  uint *puVar3;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = ~param_1;
  if (param_3 == 0) {
    return param_1;
  }
  while (((uint)param_2 & 3) != 0) {
    param_3 = param_3 - 1;
    uVar1 = *(uint *)(DAT_000126b4 + 0x123a8 + (((byte)*param_2 ^ uVar1) & 0xff) * 4) ^ uVar1 >> 8;
    param_2 = (uint *)((int)param_2 + 1);
    if (param_3 == 0) goto LAB_00012450;
  }
  iVar4 = DAT_000126b8 + 0x123ec;
  puVar3 = param_2;
  for (uVar5 = param_3; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
    uVar1 = uVar1 ^ *puVar3;
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[1] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[2] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[3] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[4] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[5] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[6] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ puVar3[7] ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
    puVar3 = puVar3 + 8;
  }
  param_2 = param_2 + (param_3 >> 5) * 8;
  param_3 = (param_3 >> 5) * -0x20 + param_3;
  iVar4 = DAT_000126bc + 0x12410;
  uVar5 = param_3 >> 2;
  puVar3 = param_2 + uVar5;
  for (; puVar3 != param_2; param_2 = param_2 + 1) {
    uVar1 = *param_2 ^ uVar1;
    uVar1 = *(uint *)(iVar4 + ((uVar1 & 0xff) + 0x300) * 4) ^ *(uint *)(iVar4 + (uVar1 >> 0x18) * 4)
            ^ *(uint *)(iVar4 + (((uVar1 & 0xffff) >> 8) + 0x200) * 4) ^
            *(uint *)(iVar4 + (((uVar1 & 0xffffff) >> 0x10) + 0x100) * 4);
  }
  iVar4 = uVar5 * -4 + param_3;
  if (iVar4 != 0) {
    puVar3 = param_2;
    do {
      puVar2 = (uint *)((int)puVar3 + 1);
      uVar1 = *(uint *)(DAT_000126c0 + 0x12438 + (((byte)*puVar3 ^ uVar1) & 0xff) * 4) ^ uVar1 >> 8;
      puVar3 = puVar2;
    } while ((uint *)((int)param_2 + iVar4) != puVar2);
  }
LAB_00012450:
  return ~uVar1;
}



/* ===== crc32 @ 000126c4 size=4 ===== */

void crc32(void)

{
  (*(code *)PTR_crc32_z_00032060)();
  return;
}



/* ===== crc32_combine @ 000126c8 size=4 ===== */

uint crc32_combine(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_128 [128];
  int aiStack_a8 [33];
  
  if ((int)(uint)(param_3 == 0) <= (int)param_4) {
    iVar1 = 1;
    aiStack_a8[0] = DAT_00012378;
    iVar2 = 1;
    do {
      aiStack_a8[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 << 1;
    } while (iVar2 != 0x20);
    FUN_0001224c(auStack_128,aiStack_a8);
    FUN_0001224c(aiStack_a8,auStack_128);
    do {
      FUN_0001224c(auStack_128,aiStack_a8);
      if ((param_3 & 1) != 0) {
        param_1 = FUN_00012220(auStack_128,param_1);
      }
      if ((param_3 >> 1 == 0 && (param_4 & 1) == 0) && (int)param_4 >> 1 == 0) break;
      FUN_0001224c(aiStack_a8,auStack_128);
      if ((param_3 >> 1 & 1) != 0) {
        param_1 = FUN_00012220(aiStack_a8,param_1);
      }
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      param_4 = (int)param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    param_1 = param_1 ^ param_2;
  }
  return param_1;
}



/* ===== crc32_combine64 @ 000126cc size=4 ===== */

uint crc32_combine64(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_128 [128];
  int aiStack_a8 [33];
  
  if ((int)(uint)(param_3 == 0) <= (int)param_4) {
    iVar1 = 1;
    aiStack_a8[0] = DAT_00012378;
    iVar2 = 1;
    do {
      aiStack_a8[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 << 1;
    } while (iVar2 != 0x20);
    FUN_0001224c(auStack_128,aiStack_a8);
    FUN_0001224c(aiStack_a8,auStack_128);
    do {
      FUN_0001224c(auStack_128,aiStack_a8);
      if ((param_3 & 1) != 0) {
        param_1 = FUN_00012220(auStack_128,param_1);
      }
      if ((param_3 >> 1 == 0 && (param_4 & 1) == 0) && (int)param_4 >> 1 == 0) break;
      FUN_0001224c(aiStack_a8,auStack_128);
      if ((param_3 >> 1 & 1) != 0) {
        param_1 = FUN_00012220(aiStack_a8,param_1);
      }
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      param_4 = (int)param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    param_1 = param_1 ^ param_2;
  }
  return param_1;
}



/* ===== FUN_000126d0 @ 000126d0 size=96 ===== */

void FUN_000126d0(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x4c);
  uVar3 = *(uint *)(param_1 + 0x2c);
  puVar2 = (ushort *)(*(int *)(param_1 + 0x44) + iVar5 * 2);
  do {
    puVar2 = puVar2 + -1;
    if (*puVar2 < uVar3) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar2 - (short)uVar3;
    }
    iVar5 = iVar5 + -1;
    *puVar2 = uVar4;
  } while (iVar5 != 0);
  puVar2 = (ushort *)(*(int *)(param_1 + 0x40) + uVar3 * 2);
  uVar1 = uVar3;
  do {
    puVar2 = puVar2 + -1;
    if (*puVar2 < uVar3) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar2 - (short)uVar3;
    }
    uVar1 = uVar1 - 1;
    *puVar2 = uVar4;
  } while (uVar1 != 0);
  return;
}



/* ===== FUN_00012730 @ 00012730 size=48 ===== */

void FUN_00012730(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)param_2;
  return;
}



/* ===== FUN_00012760 @ 00012760 size=544 ===== */

uint FUN_00012760(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint unaff_r4;
  uint uVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  bool bVar13;
  uint local_3c;
  
  uVar3 = *(uint *)(param_1 + 0x6c);
  iVar10 = *(int *)(param_1 + 0x38);
  local_3c = *(uint *)(param_1 + 0x7c);
  uVar9 = *(int *)(param_1 + 0x2c) - 0x106;
  pcVar12 = (char *)(iVar10 + uVar3);
  if (uVar9 < uVar3) {
    unaff_r4 = uVar3 + 0x104;
  }
  uVar6 = *(uint *)(param_1 + 0x78);
  if (uVar9 < uVar3) {
    unaff_r4 = (unaff_r4 + 2) - *(int *)(param_1 + 0x2c);
  }
  pcVar4 = (char *)(iVar10 + uVar3 + 0x102);
  if (uVar3 <= uVar9) {
    unaff_r4 = 0;
  }
  cVar1 = pcVar12[uVar6 - 1];
  bVar13 = *(uint *)(param_1 + 0x8c) <= uVar6;
  cVar11 = pcVar12[uVar6];
  uVar3 = uVar6;
  if (bVar13) {
    uVar3 = local_3c;
  }
  uVar9 = *(uint *)(param_1 + 0x74);
  if (bVar13) {
    local_3c = uVar3 >> 2;
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  if (uVar9 <= *(uint *)(param_1 + 0x90)) {
    uVar3 = uVar9;
  }
  do {
    pcVar5 = (char *)(iVar10 + param_2);
    if ((((pcVar5[uVar6] == cVar11) && (pcVar5[uVar6 - 1] == cVar1)) && (*pcVar5 == *pcVar12)) &&
       (pcVar5[1] == pcVar12[1])) {
      pcVar7 = pcVar12 + 2;
      pcVar5 = pcVar5 + 2;
      do {
        if (pcVar7[1] != pcVar5[1]) {
          pcVar7 = pcVar7 + 1;
          break;
        }
        if (pcVar7[2] != pcVar5[2]) {
          pcVar7 = pcVar7 + 2;
          break;
        }
        if (pcVar7[3] != pcVar5[3]) {
          pcVar7 = pcVar7 + 3;
          break;
        }
        if (pcVar7[4] != pcVar5[4]) {
          pcVar7 = pcVar7 + 4;
          break;
        }
        if (pcVar7[5] != pcVar5[5]) {
          pcVar7 = pcVar7 + 5;
          break;
        }
        if (pcVar7[6] != pcVar5[6]) {
          pcVar7 = pcVar7 + 6;
          break;
        }
        if (pcVar7[7] != pcVar5[7]) {
          pcVar7 = pcVar7 + 7;
          break;
        }
        pcVar7 = pcVar7 + 8;
        pcVar5 = pcVar5 + 8;
      } while (pcVar7 < pcVar4 && *pcVar7 == *pcVar5);
      iVar2 = -((int)pcVar4 - (int)pcVar7);
      uVar8 = iVar2 + 0x102;
      if ((int)uVar6 < (int)uVar8) {
        *(uint *)(param_1 + 0x70) = param_2;
        if ((int)uVar3 <= (int)uVar8) {
LAB_000128d0:
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          return uVar8;
        }
        cVar11 = pcVar12[uVar8];
        cVar1 = pcVar12[iVar2 + 0x101];
        uVar6 = uVar8;
      }
    }
    uVar8 = uVar6;
    param_2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0x40) + (param_2 & *(uint *)(param_1 + 0x34)) * 2);
    if ((param_2 <= unaff_r4) || (local_3c = local_3c - 1, uVar6 = uVar8, local_3c == 0))
    goto LAB_000128d0;
  } while( true );
}



/* ===== FUN_00012980 @ 00012980 size=156 ===== */

size_t FUN_00012980(int *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  uint __n;
  uint uVar3;
  
  uVar3 = param_1[1];
  __n = uVar3;
  if (param_3 <= uVar3) {
    __n = param_3;
  }
  if (__n == 0) {
    return 0;
  }
  param_1[1] = uVar3 - __n;
  pvVar1 = memcpy(param_2,(void *)*param_1,__n);
  if (*(int *)(param_1[7] + 0x18) == 1) {
    iVar2 = adler32(param_1[0xc],pvVar1,__n);
  }
  else {
    if (*(int *)(param_1[7] + 0x18) != 2) goto LAB_000129e0;
    iVar2 = crc32(param_1[0xc],pvVar1,__n);
  }
  param_1[0xc] = iVar2;
LAB_000129e0:
  *param_1 = *param_1 + __n;
  param_1[2] = param_1[2] + __n;
  return __n;
}



/* ===== FUN_00012a1c @ 00012a1c size=536 ===== */

void FUN_00012a1c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar5 = param_1[0xb];
  while( true ) {
    uVar10 = param_1[0x1b];
    iVar7 = param_1[0xf] - (param_1[0x1d] + uVar10);
    if ((iVar5 + param_1[0xb]) - 0x106U <= uVar10) {
      iVar7 = iVar7 + iVar5;
      memcpy((void *)param_1[0xe],(void *)(param_1[0xe] + iVar5),
             (param_1[0x1d] + iVar5 + uVar10) - param_1[0xf]);
      param_1[0x1c] = param_1[0x1c] - iVar5;
      param_1[0x1b] = param_1[0x1b] - iVar5;
      param_1[0x17] = param_1[0x17] - iVar5;
      FUN_000126d0(param_1);
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    iVar7 = FUN_00012980(*param_1,param_1[0xe] + param_1[0x1b] + param_1[0x1d],iVar7,
                         param_1[0x1b] + param_1[0x1d],param_4);
    uVar10 = iVar7 + param_1[0x1d];
    param_1[0x1d] = uVar10;
    if (2 < uVar10 + param_1[0x5ad]) {
      iVar7 = param_1[0xe];
      uVar6 = param_1[0x16];
      uVar4 = param_1[0x1b] - param_1[0x5ad];
      uVar8 = param_1[0x15];
      pbVar2 = (byte *)(iVar7 + uVar4);
      uVar11 = (uint)*pbVar2;
      param_1[0x12] = uVar11;
      param_1[0x12] = ((uint)pbVar2[1] ^ uVar11 << (uVar6 & 0xff)) & uVar8;
      do {
        if (param_1[0x5ad] == 0) break;
        iVar3 = param_1[0x5ad] + -1;
        iVar9 = param_1[0x11];
        uVar11 = ((uint)*(byte *)(iVar7 + 2 + uVar4) ^ param_1[0x12] << (uVar6 & 0xff)) & uVar8;
        param_1[0x12] = uVar11;
        iVar1 = uVar11 * 2;
        *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar4) * 2) = *(undefined2 *)(iVar9 + iVar1)
        ;
        *(short *)(iVar9 + iVar1) = (short)uVar4;
        uVar4 = uVar4 + 1;
        param_1[0x5ad] = iVar3;
      } while (2 < uVar10 + iVar3);
    }
    if ((0x105 < uVar10) || (*(int *)(*param_1 + 4) == 0)) break;
  }
  uVar10 = param_1[0x5b0];
  uVar4 = param_1[0xf];
  if (uVar4 <= uVar10) {
    return;
  }
  uVar6 = param_1[0x1b] + param_1[0x1d];
  if (uVar10 < uVar6) {
    uVar4 = uVar4 - uVar6;
    if (0x101 < uVar4) {
      uVar4 = 0x102;
    }
    iVar5 = uVar6 + uVar4;
    memset((void *)(param_1[0xe] + uVar6),0,uVar4);
  }
  else {
    if (uVar6 + 0x102 <= uVar10) {
      return;
    }
    uVar6 = (uVar6 - uVar10) + 0x102;
    if (uVar4 - uVar10 < uVar6) {
      uVar6 = uVar4 - uVar10;
    }
    memset((void *)(param_1[0xe] + uVar10),0,uVar6);
    iVar5 = param_1[0x5b0] + uVar6;
  }
  param_1[0x5b0] = iVar5;
  return;
}



/* ===== FUN_00012c34 @ 00012c34 size=136 ===== */

void FUN_00012c34(int param_1)

{
  uint __n;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  thunk_FUN_0001a07c(iVar2);
  __n = *(uint *)(iVar2 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    __n = *(uint *)(param_1 + 0x10);
  }
  if (__n != 0) {
    memcpy(*(void **)(param_1 + 0xc),*(void **)(iVar2 + 0x10),__n);
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + __n;
    *(uint *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + __n;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + __n;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - __n;
    iVar1 = *(int *)(iVar2 + 0x14) - __n;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
    return;
  }
  return;
}



/* ===== FUN_00012cbc @ 00012cbc size=1236 ===== */

bool FUN_00012cbc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar11 = DAT_00013190 + 0x12cd8;
LAB_00012cd4:
  do {
    if ((uint)param_1[0x1d] < 0x106) {
      FUN_00012a1c(param_1);
      if ((uint)param_1[0x1d] < 0x106) {
        if (param_2 == 0) {
          return false;
        }
        if (param_1[0x1d] == 0) {
          if (param_1[0x1a] != 0) {
            iVar11 = param_1[0x5a8];
            bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b] + -1);
            *(undefined2 *)(param_1[0x5a9] + iVar11 * 2) = 0;
            param_1[0x5a8] = iVar11 + 1;
            *(byte *)(param_1[0x5a6] + iVar11) = bVar1;
            *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
            param_1[0x1a] = 0;
          }
          uVar4 = param_1[0x1b];
          uVar8 = uVar4;
          if (1 < uVar4) {
            uVar8 = 2;
          }
          param_1[0x5ad] = uVar8;
          if (param_2 == 4) {
            iVar11 = param_1[0x17];
            if (iVar11 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = param_1[0xe] + iVar11;
            }
            FUN_0001a378(param_1,iVar5,uVar4 - iVar11,1);
            param_1[0x17] = param_1[0x1b];
            FUN_00012c34(*param_1);
            if (*(int *)(*param_1 + 0x10) == 0) {
              uVar3 = 2;
            }
            else {
              uVar3 = 3;
            }
            return (bool)uVar3;
          }
          if (param_1[0x5a8] != 0) {
            iVar11 = param_1[0x17];
            if (iVar11 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = param_1[0xe] + iVar11;
            }
            FUN_0001a378(param_1,iVar5,uVar4 - iVar11,0);
            param_1[0x17] = param_1[0x1b];
            FUN_00012c34(*param_1);
            return *(int *)(*param_1 + 0x10) != 0;
          }
          return true;
        }
      }
    }
    uVar8 = param_1[0x1b];
    if ((uint)param_1[0x1d] < 3) {
      uVar4 = 0;
    }
    else {
      iVar13 = param_1[0x11];
      uVar4 = ((uint)*(byte *)(param_1[0xe] + uVar8 + 2) ^ param_1[0x12] << (param_1[0x16] & 0xffU))
              & param_1[0x15];
      param_1[0x12] = uVar4;
      iVar5 = uVar4 * 2;
      uVar2 = *(ushort *)(iVar13 + iVar5);
      uVar4 = (uint)uVar2;
      *(ushort *)(param_1[0x10] + (param_1[0xd] & uVar8) * 2) = uVar2;
      *(short *)(iVar13 + iVar5) = (short)uVar8;
    }
    uVar10 = param_1[0x18];
    param_1[0x19] = param_1[0x1c];
    param_1[0x1e] = uVar10;
    param_1[0x18] = 2;
    if (((uVar4 != 0) && (uVar10 < (uint)param_1[0x20])) && (uVar8 - uVar4 <= param_1[0xb] - 0x106U)
       ) {
      uVar8 = FUN_00012760(param_1);
      param_1[0x18] = uVar8;
      if ((uVar8 < 6) &&
         ((param_1[0x22] == 1 || ((uVar8 == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c])))))
         )) {
        param_1[0x18] = 2;
      }
    }
    uVar8 = param_1[0x1e];
    iVar5 = param_1[0x1b];
    if ((uVar8 < 3) || (uVar8 < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1a] = 1;
        param_1[0x1b] = iVar5 + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        goto LAB_00012cd4;
      }
      iVar13 = 0;
      iVar6 = param_1[0x5a8];
      bVar1 = *(byte *)(param_1[0xe] + iVar5 + -1);
      *(undefined2 *)(param_1[0x5a9] + iVar6 * 2) = 0;
      param_1[0x5a8] = iVar6 + 1;
      *(byte *)(param_1[0x5a6] + iVar6) = bVar1;
      *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a7] + -1) {
        iVar5 = param_1[0x17];
        if (-1 < iVar5) {
          iVar13 = param_1[0xe] + iVar5;
        }
        FUN_0001a378(param_1,iVar13,param_1[0x1b] - iVar5,0,param_4);
        param_1[0x17] = param_1[0x1b];
        FUN_00012c34(*param_1);
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] + -1;
    }
    else {
      iVar13 = param_1[0x1d];
      iVar6 = param_1[0x5a8];
      uVar4 = (iVar5 - param_1[0x19] & 0xffffU) - 2 & 0xffff;
      *(short *)(param_1[0x5a9] + iVar6 * 2) = (short)(iVar5 - param_1[0x19]) + -1;
      param_1[0x5a8] = iVar6 + 1;
      *(char *)(param_1[0x5a6] + iVar6) = (char)(uVar8 - 3);
      bVar1 = *(byte *)(iVar11 + (uVar8 - 3 & 0xff));
      *(short *)(param_1 + bVar1 + 0x126) = (short)param_1[bVar1 + 0x126] + 1;
      if (uVar4 < 0x100) {
        bVar1 = *(byte *)(DAT_00013194 + 0x12e5c + uVar4);
      }
      else {
        bVar1 = *(byte *)(DAT_00013198 + (uVar4 >> 7) + 0x1315c);
      }
      *(short *)(param_1 + bVar1 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
      iVar6 = param_1[0x5a7];
      iVar14 = param_1[0x5a8];
      param_1[0x1d] = (param_1[0x1d] + 1) - param_1[0x1e];
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        iVar9 = param_1[0x1b];
        uVar8 = iVar9 + 1;
        param_1[0x1b] = uVar8;
        if (uVar8 <= (iVar5 + iVar13) - 3U) {
          iVar12 = param_1[0x11];
          uVar4 = ((uint)*(byte *)(param_1[0xe] + iVar9 + 3) ^
                  param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
          param_1[0x12] = uVar4;
          iVar7 = uVar4 * 2;
          *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar8) * 2) =
               *(undefined2 *)(iVar12 + iVar7);
          *(short *)(iVar12 + iVar7) = (short)uVar8;
        }
        iVar7 = param_1[0x1e];
        param_1[0x1e] = iVar7 + -1;
      } while (iVar7 + -1 != 0);
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      param_1[0x1b] = iVar9 + 2;
      if (iVar14 != iVar6 + -1) goto LAB_00012cd4;
      iVar13 = param_1[0x17];
      iVar5 = 0;
      if (-1 < iVar13) {
        iVar5 = param_1[0xe] + iVar13;
      }
      FUN_0001a378(param_1,iVar5,(iVar9 + 2) - iVar13,0,param_4);
      param_1[0x17] = param_1[0x1b];
      FUN_00012c34(*param_1);
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return false;
    }
  } while( true );
}



/* ===== FUN_0001319c @ 0001319c size=1004 ===== */

bool FUN_0001319c(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r9;
  uint uVar13;
  int iVar14;
  
  piVar9 = param_1;
  do {
    iVar10 = DAT_00013588 + 0x131b8;
    do {
      if ((uint)param_1[0x1d] < 0x106) {
        FUN_00012a1c(param_1);
        if ((uint)param_1[0x1d] < 0x106) {
          if (param_2 == 0) {
            return false;
          }
          if (param_1[0x1d] == 0) {
            uVar11 = param_1[0x1b];
            uVar8 = uVar11;
            if (1 < uVar11) {
              uVar8 = 2;
            }
            param_1[0x5ad] = uVar8;
            if (param_2 != 4) {
              if (param_1[0x5a8] == 0) {
                return true;
              }
              iVar4 = param_1[0x17];
              iVar10 = 0;
              if (-1 < iVar4) {
                iVar10 = param_1[0xe] + iVar4;
              }
              FUN_0001a378(param_1,iVar10,uVar11 - iVar4,0);
              param_1[0x17] = param_1[0x1b];
              FUN_00012c34(*param_1);
              return *(int *)(*param_1 + 0x10) != 0;
            }
            iVar4 = param_1[0x17];
            iVar10 = 0;
            if (-1 < iVar4) {
              iVar10 = param_1[0xe] + iVar4;
            }
            FUN_0001a378(param_1,iVar10,uVar11 - iVar4,1);
            param_1[0x17] = param_1[0x1b];
            FUN_00012c34(*param_1);
            if (*(int *)(*param_1 + 0x10) == 0) {
              return (bool)2;
            }
            return (bool)3;
          }
        }
      }
      if (2 < (uint)param_1[0x1d]) {
        uVar8 = param_1[0x1b];
        iVar6 = param_1[0x11];
        uVar11 = ((uint)*(byte *)(param_1[0xe] + uVar8 + 2) ^
                 param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
        param_1[0x12] = uVar11;
        iVar4 = uVar11 * 2;
        uVar2 = *(ushort *)(iVar6 + iVar4);
        *(ushort *)(param_1[0x10] + (param_1[0xd] & uVar8) * 2) = uVar2;
        *(short *)(iVar6 + iVar4) = (short)uVar8;
        if ((uVar2 != 0) && (uVar8 - uVar2 <= param_1[0xb] - 0x106U)) {
          iVar4 = FUN_00012760(param_1);
          param_1[0x18] = iVar4;
        }
      }
      iVar6 = param_1[0x5a8];
      iVar4 = param_1[0x5a6];
      if ((uint)param_1[0x18] < 3) {
        bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b]);
        *(undefined2 *)(param_1[0x5a9] + iVar6 * 2) = 0;
        param_1[0x5a8] = iVar6 + 1;
        *(byte *)(iVar4 + iVar6) = bVar1;
        *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        bVar3 = param_1[0x5a7] + -1 == param_1[0x5a8];
        param_1[0x1b] = param_1[0x1b] + 1;
      }
      else {
        uVar8 = param_1[0x18] - 3;
        uVar11 = param_1[0x1b] - param_1[0x1c];
        *(short *)(param_1[0x5a9] + iVar6 * 2) = (short)uVar11;
        param_1[0x5a8] = iVar6 + 1;
        uVar11 = (uVar11 & 0xffff) - 1 & 0xffff;
        *(char *)(iVar4 + iVar6) = (char)uVar8;
        bVar1 = *(byte *)(iVar10 + (uVar8 & 0xff));
        *(short *)(param_1 + bVar1 + 0x126) = (short)param_1[bVar1 + 0x126] + 1;
        if (uVar11 < 0x100) {
          bVar1 = *(byte *)(DAT_0001358c + 0x13250 + uVar11);
        }
        else {
          bVar1 = *(byte *)(DAT_00013590 + (uVar11 >> 7) + 0x135a8);
        }
        *(short *)(param_1 + bVar1 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
        iVar4 = param_1[0x1d];
        uVar8 = param_1[0x18];
        if (uVar8 <= (uint)param_1[0x20]) {
          unaff_r9 = 1;
        }
        param_1[0x1d] = iVar4 - uVar8;
        if ((uint)param_1[0x20] < uVar8) {
          unaff_r9 = 0;
        }
        iVar14 = param_1[0x1b];
        iVar6 = param_1[0xe];
        if (iVar4 - uVar8 < 3) {
          unaff_r9 = 0;
        }
        uVar12 = param_1[0x16];
        bVar3 = param_1[0x5a7] + -1 == param_1[0x5a8];
        uVar11 = param_1[0x15];
        if (unaff_r9 == 0) {
          param_1[0x1b] = uVar8 + iVar14;
          param_1[0x18] = 0;
          pbVar7 = (byte *)(iVar6 + uVar8 + iVar14);
          uVar8 = (uint)*pbVar7;
          param_1[0x12] = uVar8;
          param_1[0x12] = uVar11 & ((uint)pbVar7[1] ^ uVar8 << (uVar12 & 0xff));
        }
        else {
          unaff_r9 = param_1[0x11];
          param_1[0x18] = uVar8 - 1;
          iVar4 = param_1[0x10];
          piVar9 = (int *)param_1[0xd];
          do {
            iVar5 = param_1[0x1b];
            uVar13 = iVar5 + 1;
            param_1[0x1b] = uVar13;
            uVar8 = ((uint)*(byte *)(iVar6 + iVar5 + 3) ^ param_1[0x12] << (uVar12 & 0xff)) & uVar11
            ;
            param_1[0x12] = uVar8;
            iVar14 = uVar8 * 2;
            *(undefined2 *)(iVar4 + (uVar13 & (uint)piVar9) * 2) =
                 *(undefined2 *)(unaff_r9 + iVar14);
            *(short *)(unaff_r9 + iVar14) = (short)uVar13;
            iVar14 = param_1[0x18];
            param_1[0x18] = iVar14 + -1;
          } while (iVar14 + -1 != 0);
          param_1[0x1b] = iVar5 + 2;
        }
      }
    } while (!bVar3);
    iVar4 = param_1[0x17];
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1[0xe] + iVar4;
    }
    FUN_0001a378(param_1,iVar6,param_1[0x1b] - iVar4,0,piVar9,iVar10,param_3);
    param_1[0x17] = param_1[0x1b];
    FUN_00012c34(*param_1);
    if (*(int *)(*param_1 + 0x10) == 0) {
      return false;
    }
  } while( true );
}



/* ===== FUN_00013594 @ 00013594 size=1148 ===== */

undefined4 FUN_00013594(int *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  void *__dest;
  uint uVar2;
  size_t __n;
  int iVar3;
  size_t __n_00;
  uint uVar4;
  uint uVar5;
  size_t __n_01;
  uint __n_02;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  
  uVar2 = param_1[3] - 5U;
  if ((uint)param_1[0xb] <= param_1[3] - 5U) {
    uVar2 = param_1[0xb];
  }
  iVar8 = *(int *)(*param_1 + 4);
  piVar10 = param_1;
  do {
    uVar4 = *(uint *)(*param_1 + 0x10);
    uVar5 = param_1[0x5af] + 0x2a >> 3;
    if (uVar4 < uVar5) {
LAB_000139a4:
      bVar9 = false;
      goto LAB_00013774;
    }
    uVar4 = uVar4 - uVar5;
    __n_02 = param_1[0x1b] - param_1[0x17];
    uVar7 = __n_02 + *(int *)(*param_1 + 4);
    uVar5 = 0xffff;
    if (uVar7 < 0xffff) {
      uVar5 = uVar7;
    }
    if (uVar4 <= uVar5) {
      uVar5 = uVar4;
    }
    if ((uVar5 < uVar2) && (uVar5 == 0 && param_2 != 4 || (param_2 == 0 || uVar7 != uVar5)))
    goto LAB_000139a4;
    bVar9 = uVar7 == uVar5;
    FUN_0001a170(param_1,0,0,param_2 == 4 && bVar9,piVar10,uVar2,param_3);
    *(byte *)(param_1[2] + param_1[5] + -4) = (byte)uVar5;
    bVar1 = (byte)(uVar5 >> 8);
    *(byte *)(param_1[2] + param_1[5] + -3) = bVar1;
    *(byte *)(param_1[2] + param_1[5] + -2) = ~(byte)uVar5;
    *(byte *)(param_1[2] + param_1[5] + -1) = ~bVar1;
    FUN_00012c34(*param_1);
    if (__n_02 != 0) {
      if (uVar5 <= __n_02) {
        __n_02 = uVar5;
      }
      uVar5 = uVar5 - __n_02;
      memcpy(*(void **)(*param_1 + 0xc),(void *)(param_1[0xe] + param_1[0x17]),__n_02);
      iVar3 = *param_1;
      *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + __n_02;
      *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - __n_02;
      *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + __n_02;
      param_1[0x17] = param_1[0x17] + __n_02;
    }
    if (uVar5 != 0) {
      FUN_00012980(*param_1,*(undefined4 *)(*param_1 + 0xc),uVar5);
      iVar3 = *param_1;
      *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar5;
      *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar5;
      *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar5;
    }
  } while (param_2 != 4 || !bVar9);
  bVar9 = true;
LAB_00013774:
  iVar3 = ((int *)*param_1)[1];
  __n_01 = iVar8 - iVar3;
  if (__n_01 != 0) {
    __n_00 = param_1[0xb];
    __dest = (void *)param_1[0xe];
    if (__n_01 < __n_00) {
      if ((uint)(param_1[0xf] - param_1[0x1b]) <= __n_01) {
        __n = param_1[0x1b] - __n_00;
        param_1[0x1b] = __n;
        memcpy(__dest,(void *)((int)__dest + __n_00),__n);
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
      }
      memcpy((void *)(param_1[0xe] + param_1[0x1b]),(void *)(*(int *)*param_1 + (iVar3 - iVar8)),
             __n_01);
      iVar8 = param_1[0x1b] + __n_01;
    }
    else {
      param_1[0x5ac] = 2;
      memcpy(__dest,(void *)(*(int *)*param_1 - __n_00),__n_00);
      iVar8 = param_1[0xb];
    }
    param_1[0x1b] = iVar8;
    param_1[0x17] = param_1[0x1b];
    uVar2 = param_1[0xb] - param_1[0x5ad];
    if (__n_01 < uVar2) {
      uVar2 = __n_01;
    }
    param_1[0x5ad] = param_1[0x5ad] + uVar2;
  }
  uVar2 = param_1[0x1b];
  if ((uint)param_1[0x5b0] < uVar2) {
    param_1[0x5b0] = uVar2;
  }
  if (bVar9) {
    uVar6 = 3;
  }
  else if ((((param_2 & 0xfffffffb) == 0) || (*(uint *)(*param_1 + 4) != 0)) ||
          (uVar2 != param_1[0x17])) {
    uVar5 = (param_1[0xf] + -1) - uVar2;
    if (uVar5 < *(uint *)(*param_1 + 4)) {
      iVar8 = param_1[0xb];
      if (iVar8 <= param_1[0x17]) {
        param_1[0x17] = param_1[0x17] - iVar8;
        param_1[0x1b] = uVar2 - iVar8;
        memcpy((void *)param_1[0xe],(void *)(param_1[0xe] + iVar8),uVar2 - iVar8);
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar5 = uVar5 + param_1[0xb];
      }
    }
    uVar2 = *(uint *)(*param_1 + 4);
    if (uVar2 <= uVar5) {
      uVar5 = uVar2;
    }
    if (uVar5 != 0) {
      FUN_00012980(*param_1,param_1[0xe] + param_1[0x1b],uVar5);
      param_1[0x1b] = param_1[0x1b] + uVar5;
    }
    uVar2 = param_1[0x1b];
    if ((uint)param_1[0x5b0] < uVar2) {
      param_1[0x5b0] = uVar2;
    }
    uVar4 = param_1[3] - (param_1[0x5af] + 0x2a >> 3);
    uVar5 = 0xffff;
    if (uVar4 < 0xffff) {
      uVar5 = uVar4;
    }
    uVar2 = uVar2 - param_1[0x17];
    uVar4 = param_1[0xb];
    if (uVar5 < (uint)param_1[0xb]) {
      uVar4 = uVar5;
    }
    uVar6 = 0;
    if (uVar2 < uVar4) {
      if (param_2 == 0 || uVar2 == 0 && param_2 != 4) {
        return 0;
      }
      bVar9 = uVar5 == uVar2;
      if (uVar2 <= uVar5) {
        bVar9 = *(int *)(*param_1 + 4) == 0;
      }
      if (!bVar9) {
        return 0;
      }
    }
    uVar4 = uVar2;
    if (uVar5 < uVar2) {
      uVar4 = uVar5;
    }
    if (param_2 == 4) {
      bVar9 = uVar2 <= uVar5;
      if (*(int *)(*param_1 + 4) != 0) {
        bVar9 = false;
      }
    }
    else {
      bVar9 = false;
    }
    FUN_0001a170(param_1,param_1[0xe] + param_1[0x17],uVar4,bVar9);
    param_1[0x17] = param_1[0x17] + uVar4;
    FUN_00012c34(*param_1);
    if (bVar9 != false) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



/* ===== FUN_00013a10 @ 00013a10 size=160 ===== */

uint FUN_00013a10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((piVar3 = *(int **)(param_1 + 0x1c), piVar3 != (int *)0x0 && (param_1 == *piVar3)))) {
    iVar2 = piVar3[1];
    uVar4 = (uint)(iVar2 != 0x2a && iVar2 != 0x45);
    if (iVar2 - 0x5bU < 0x17) {
      uVar1 = ~(DAT_00013ab0 >> (iVar2 - 0x5bU & 0xff)) & 1;
    }
    else {
      uVar1 = 1;
    }
    if (iVar2 == 0x29a) {
      uVar4 = 0;
    }
    return uVar1 & uVar4 & (iVar2 - 0x39U & 0xffffffef) != 0;
  }
  return 1;
}



/* ===== deflateSetDictionary @ 00013ab4 size=440 ===== */

undefined4 deflateSetDictionary(int *param_1,int param_2,uint param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  void *__s;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  
  piVar15 = param_1;
  iVar3 = param_2;
  uVar5 = param_3;
  iVar2 = FUN_00013a10();
  if (param_2 != 0 && iVar2 == 0) {
    iVar2 = param_1[7];
    iVar9 = *(int *)(iVar2 + 0x18);
    if ((iVar9 != 2) &&
       (((iVar9 != 1 || (*(int *)(iVar2 + 4) == 0x2a)) && (*(int *)(iVar2 + 0x74) == 0)))) {
      if (iVar9 == 1) {
        iVar3 = adler32(param_1[0xc],param_2,param_3,0,piVar15,iVar3,uVar5);
        param_1[0xc] = iVar3;
      }
      *(undefined4 *)(iVar2 + 0x18) = 0;
      uVar5 = param_3;
      if (*(uint *)(iVar2 + 0x2c) <= param_3) {
        if (iVar9 == 0) {
          __s = *(void **)(iVar2 + 0x44);
          __n = (*(int *)(iVar2 + 0x4c) + 0x7fffffff) * 2;
          *(undefined2 *)((int)__s + __n) = 0;
          memset(__s,0,__n);
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x5c) = 0;
          *(undefined4 *)(iVar2 + 0x16b4) = 0;
        }
        uVar5 = *(uint *)(iVar2 + 0x2c);
        param_2 = param_2 + (param_3 - uVar5);
      }
      iVar3 = param_1[1];
      param_1[1] = uVar5;
      iVar6 = *param_1;
      *param_1 = param_2;
      while( true ) {
        FUN_00012a1c(iVar2);
        uVar7 = *(uint *)(iVar2 + 0x74);
        uVar5 = *(uint *)(iVar2 + 0x6c);
        iVar4 = uVar7 + uVar5;
        if (uVar7 < 3) break;
        iVar13 = *(int *)(iVar2 + 0x38);
        uVar12 = *(uint *)(iVar2 + 0x58);
        uVar11 = *(uint *)(iVar2 + 0x54);
        iVar14 = *(int *)(iVar2 + 0x44);
        iVar10 = *(int *)(iVar2 + 0x40);
        uVar7 = *(uint *)(iVar2 + 0x34);
        do {
          uVar8 = ((uint)*(byte *)(iVar13 + 2 + uVar5) ^ *(int *)(iVar2 + 0x48) << (uVar12 & 0xff))
                  & uVar11;
          *(uint *)(iVar2 + 0x48) = uVar8;
          iVar1 = uVar8 * 2;
          *(undefined2 *)(iVar10 + (uVar7 & uVar5) * 2) = *(undefined2 *)(iVar14 + iVar1);
          *(short *)(iVar14 + iVar1) = (short)uVar5;
          uVar5 = uVar5 + 1;
        } while (uVar5 != iVar4 - 2U);
        *(uint *)(iVar2 + 0x6c) = uVar5;
        *(undefined4 *)(iVar2 + 0x74) = 2;
      }
      *(int *)(iVar2 + 0x6c) = iVar4;
      *(int *)(iVar2 + 0x5c) = iVar4;
      *(uint *)(iVar2 + 0x16b4) = uVar7;
      *(undefined4 *)(iVar2 + 0x78) = 2;
      *(undefined4 *)(iVar2 + 0x60) = 2;
      *(undefined4 *)(iVar2 + 0x74) = 0;
      *(undefined4 *)(iVar2 + 0x68) = 0;
      *param_1 = iVar6;
      param_1[1] = iVar3;
      *(int *)(iVar2 + 0x18) = iVar9;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateGetDictionary @ 00013c6c size=112 ===== */

undefined4 deflateGetDictionary(int param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint __n;
  undefined4 uVar3;
  
  iVar1 = FUN_00013a10();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar2 = *(int *)(iVar1 + 0x6c) + *(int *)(iVar1 + 0x74);
    __n = *(uint *)(iVar1 + 0x2c);
    if (uVar2 < *(uint *)(iVar1 + 0x2c)) {
      __n = uVar2;
    }
    if (param_2 != (void *)0x0 && __n != 0) {
      memcpy(param_2,(void *)(*(int *)(iVar1 + 0x38) + (uVar2 - __n)),__n);
    }
    uVar3 = 0;
    if (param_3 != (size_t *)0x0) {
      *param_3 = __n;
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



/* ===== deflateResetKeep @ 00013cdc size=168 ===== */

undefined4 deflateResetKeep(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00013a10();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x2c) = 2;
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    iVar2 = *(int *)(iVar1 + 0x18);
    if (iVar2 == 2) {
      uVar3 = 0x39;
    }
    else if (iVar2 == 0) {
      uVar3 = 0x71;
    }
    else {
      uVar3 = 0x2a;
    }
    *(undefined4 *)(iVar1 + 4) = uVar3;
    if (iVar2 == 2) {
      uVar3 = crc32();
    }
    else {
      uVar3 = adler32(0,0);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_0001a118(iVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



/* ===== deflateReset @ 00013d84 size=168 ===== */

int deflateReset(int param_1)

{
  size_t __n;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *__s;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = deflateResetKeep();
  if (iVar3 == 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
    __s = *(void **)(iVar6 + 0x44);
    __n = (*(int *)(iVar6 + 0x4c) + 0x7fffffff) * 2;
    *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x2c) << 1;
    *(undefined2 *)((int)__s + __n) = 0;
    memset(__s,0,__n);
    iVar5 = *(int *)(iVar6 + 0x84) * 0xc;
    iVar4 = DAT_00013e2c + 0x13ddc + iVar5;
    uVar1 = *(ushort *)(iVar4 + 2);
    *(uint *)(iVar6 + 0x8c) = (uint)*(ushort *)(DAT_00013e2c + 0x13ddc + iVar5);
    uVar2 = *(ushort *)(iVar4 + 4);
    *(uint *)(iVar6 + 0x80) = (uint)uVar1;
    *(uint *)(iVar6 + 0x90) = (uint)uVar2;
    uVar1 = *(ushort *)(iVar4 + 6);
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    *(uint *)(iVar6 + 0x7c) = (uint)uVar1;
    *(undefined4 *)(iVar6 + 0x5c) = 0;
    *(undefined4 *)(iVar6 + 0x74) = 0;
    *(undefined4 *)(iVar6 + 0x16b4) = 0;
    *(undefined4 *)(iVar6 + 0x78) = 2;
    *(undefined4 *)(iVar6 + 0x60) = 2;
    *(undefined4 *)(iVar6 + 0x68) = 0;
    *(undefined4 *)(iVar6 + 0x48) = 0;
  }
  return iVar3;
}



/* ===== deflateSetHeader @ 00013e30 size=56 ===== */

undefined4 deflateSetHeader(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00013a10();
  if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 2)) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c) = param_2;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== deflatePending @ 00013e68 size=76 ===== */

undefined4 deflatePending(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00013a10();
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x16bc);
  }
  return 0;
}



/* ===== deflatePrime @ 00013eb4 size=152 ===== */

undefined4 deflatePrime(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = FUN_00013a10();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(uint *)(iVar1 + 0x16a4) < *(int *)(iVar1 + 0x10) + 2U) {
      uVar4 = 0xfffffffb;
    }
    else {
      do {
        uVar3 = *(uint *)(iVar1 + 0x16bc);
        uVar5 = 0x10 - uVar3;
        if ((int)param_2 < (int)(0x10 - uVar3)) {
          uVar5 = param_2;
        }
        uVar2 = (1 << (uVar5 & 0xff)) - 1U & param_3;
        param_3 = (int)param_3 >> (uVar5 & 0xff);
        *(ushort *)(iVar1 + 0x16b8) =
             *(ushort *)(iVar1 + 0x16b8) | (ushort)(uVar2 << (uVar3 & 0xff));
        *(uint *)(iVar1 + 0x16bc) = uVar3 + uVar5;
        thunk_FUN_0001a07c(iVar1);
        param_2 = param_2 - uVar5;
        uVar4 = 0;
      } while (param_2 != 0);
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}



/* ===== deflateTune @ 00013f4c size=60 ===== */

undefined4
deflateTune(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00013a10();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0x80) = param_3;
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x7c) = param_5;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== deflateBound @ 00013f88 size=272 ===== */

int deflateBound(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = (param_2 + 7 >> 3) + (param_2 + 0x3f >> 6) + param_2;
  iVar1 = FUN_00013a10();
  if (iVar1 != 0) {
    return iVar5 + 0xb;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(iVar1 + 0x18);
  if (iVar3 == 1) {
    if (*(int *)(iVar1 + 0x6c) == 0) {
      iVar3 = 6;
    }
    else {
      iVar3 = 10;
    }
  }
  else if (iVar3 == 2) {
    iVar4 = *(int *)(iVar1 + 0x1c);
    if (iVar4 == 0) {
      iVar3 = 0x12;
    }
    else {
      if (*(int *)(iVar4 + 0x10) == 0) {
        iVar3 = 0x12;
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x14) + 0x14;
      }
      bVar6 = *(char **)(iVar4 + 0x1c) == (char *)0x0;
      pcVar2 = *(char **)(iVar4 + 0x1c);
      while (!bVar6) {
        iVar3 = iVar3 + 1;
        bVar6 = *pcVar2 == '\0';
        pcVar2 = pcVar2 + 1;
      }
      bVar6 = *(char **)(iVar4 + 0x24) == (char *)0x0;
      pcVar2 = *(char **)(iVar4 + 0x24);
      while (!bVar6) {
        iVar3 = iVar3 + 1;
        bVar6 = *pcVar2 == '\0';
        pcVar2 = pcVar2 + 1;
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        iVar3 = iVar3 + 2;
      }
    }
  }
  else if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 6;
  }
  if ((*(int *)(iVar1 + 0x30) == 0xf) && (*(int *)(iVar1 + 0x50) == 0xf)) {
    return param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + iVar3;
  }
  return iVar5 + 5 + iVar3;
}



/* ===== deflate @ 00014098 size=3896 ===== */

uint deflate(int *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  char cVar10;
  int *piVar11;
  uint uVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  int *piVar18;
  size_t sVar19;
  byte *pbVar20;
  char cVar21;
  char cVar22;
  int iVar23;
  
  iVar15 = DAT_00014fd0;
  piVar11 = param_1;
  uVar7 = param_2;
  iVar5 = FUN_00013a10();
  if ((iVar5 != 0) || (5 < param_2)) {
    return 0xfffffffe;
  }
  piVar18 = (int *)param_1[7];
  if ((param_1[3] == 0) ||
     (((iVar5 = param_1[1], iVar5 != 0 && (*param_1 == 0)) || (piVar18[1] == 0x29a && param_2 != 4))
     )) {
    param_1[6] = *(int *)(*(int *)(iVar15 + 0x140b4 + DAT_00014fd4) + 0x10);
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
LAB_00014130:
    param_1[6] = *(int *)(*(int *)(iVar15 + 0x140b4 + DAT_00014fd4) + 0x1c);
    return 0xfffffffb;
  }
  iVar6 = piVar18[10];
  piVar18[10] = param_2;
  if (piVar18[5] == 0) {
    if (iVar5 == 0) {
      if (param_2 == 5) {
        iVar5 = 9;
      }
      else {
        iVar5 = 0;
      }
      if (iVar6 < 5) {
        iVar23 = 0;
      }
      else {
        iVar23 = 9;
      }
      if ((int)(param_2 * 2 - iVar5) <= iVar6 * 2 - iVar23 && param_2 != 4) goto LAB_00014130;
    }
  }
  else {
    FUN_00012c34(param_1);
    if (param_1[4] == 0) goto LAB_00014178;
  }
  if (piVar18[1] == 0x29a) {
    if (param_1[1] != 0) goto LAB_00014130;
LAB_000141dc:
    iVar15 = piVar18[1];
    if (iVar15 == 0x45) goto LAB_00014630;
    if (iVar15 == 0x49) goto LAB_000146cc;
    if (iVar15 == 0x5b) goto LAB_000147a8;
    if (iVar15 == 0x67) goto LAB_0001487c;
  }
  else {
    if (piVar18[1] == 0x2a) {
      if ((piVar18[0x22] < 2) && (iVar15 = piVar18[0x21], 1 < iVar15)) {
        if (iVar15 < 6) {
          iVar15 = 1;
        }
        else if (iVar15 == 6) {
          iVar15 = 2;
        }
        else {
          iVar15 = 3;
        }
      }
      else {
        iVar15 = 0;
      }
      uVar17 = piVar18[0xc] * 0x1000 - 0x7800U | iVar15 << 6;
      if (piVar18[0x1b] != 0) {
        uVar17 = uVar17 | 0x20;
      }
      uVar9 = FUN_00012730(piVar18,(uVar17 / 0x1f) * 0x1f + 0x1f,0x29a,0x1f,piVar11,uVar7,param_3);
      if (piVar18[0x1b] != 0) {
        uVar9 = FUN_00012730(uVar9,*(undefined2 *)((int)param_1 + 0x32));
        FUN_00012730(uVar9,(short)param_1[0xc]);
      }
      iVar15 = adler32(0,0);
      param_1[0xc] = iVar15;
      piVar18[1] = 0x71;
      FUN_00012c34(param_1);
      if (piVar18[5] != 0) goto LAB_00014178;
    }
    if (piVar18[1] != 0x39) goto LAB_000141dc;
    iVar15 = crc32(0,0);
    iVar6 = piVar18[5];
    iVar5 = piVar18[2];
    param_1[0xc] = iVar15;
    piVar18[5] = iVar6 + 1;
    *(undefined1 *)(iVar5 + iVar6) = 0x1f;
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(undefined1 *)(piVar18[2] + iVar15) = 0x8b;
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(undefined1 *)(piVar18[2] + iVar15) = 8;
    piVar11 = (int *)piVar18[7];
    iVar15 = piVar18[5];
    if (piVar11 == (int *)0x0) {
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 0;
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 0;
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 0;
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 0;
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 0;
      if (piVar18[0x21] == 9) {
        cVar14 = '\x02';
      }
      else {
        cVar14 = (1 < piVar18[0x22] || piVar18[0x21] < 2) << 2;
      }
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(char *)(piVar18[2] + iVar15) = cVar14;
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(undefined1 *)(piVar18[2] + iVar15) = 3;
      piVar18[1] = 0x71;
      FUN_00012c34(param_1);
      if (piVar18[5] != 0) goto LAB_00014178;
      goto LAB_000141dc;
    }
    if (piVar11[0xb] == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x02';
    }
    if (*piVar11 != 0) {
      cVar14 = cVar14 + '\x01';
    }
    if (piVar11[4] == 0) {
      cVar21 = '\0';
    }
    else {
      cVar21 = '\x04';
    }
    if (piVar11[7] == 0) {
      cVar22 = '\0';
    }
    else {
      cVar22 = '\b';
    }
    if (piVar11[9] == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x10';
    }
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = cVar14 + cVar21 + cVar22 + cVar10;
    uVar9 = *(undefined4 *)(piVar18[7] + 4);
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar9;
    iVar15 = piVar18[5];
    uVar9 = *(undefined4 *)(piVar18[7] + 4);
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)((uint)uVar9 >> 8);
    uVar3 = *(undefined2 *)(piVar18[7] + 6);
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar3;
    uVar2 = *(undefined1 *)(piVar18[7] + 7);
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(undefined1 *)(piVar18[2] + iVar15) = uVar2;
    if (piVar18[0x21] == 9) {
      cVar14 = '\x02';
    }
    else {
      cVar14 = (1 < piVar18[0x22] || piVar18[0x21] < 2) << 2;
    }
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = cVar14;
    uVar9 = *(undefined4 *)(piVar18[7] + 0xc);
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar9;
    if (*(int *)(piVar18[7] + 0x10) != 0) {
      uVar9 = *(undefined4 *)(piVar18[7] + 0x14);
      iVar15 = piVar18[5];
      piVar18[5] = iVar15 + 1;
      *(char *)(piVar18[2] + iVar15) = (char)uVar9;
      iVar15 = piVar18[5];
      uVar9 = *(undefined4 *)(piVar18[7] + 0x14);
      piVar18[5] = iVar15 + 1;
      *(char *)(piVar18[2] + iVar15) = (char)((uint)uVar9 >> 8);
    }
    if (*(int *)(piVar18[7] + 0x2c) != 0) {
      iVar15 = crc32(param_1[0xc],piVar18[2],piVar18[5]);
      param_1[0xc] = iVar15;
    }
    piVar18[8] = 0;
    piVar18[1] = 0x45;
LAB_00014630:
    if (*(int *)(piVar18[7] + 0x10) != 0) {
      uVar7 = piVar18[5];
      sVar19 = (uint)*(ushort *)(piVar18[7] + 0x14) - piVar18[8];
      while( true ) {
        iVar15 = piVar18[5];
        uVar17 = piVar18[3];
        pvVar8 = (void *)(*(int *)(piVar18[7] + 0x10) + piVar18[8]);
        if (iVar15 + sVar19 <= uVar17) break;
        memcpy((void *)(piVar18[2] + iVar15),pvVar8,uVar17 - iVar15);
        uVar12 = piVar18[3];
        iVar5 = *(int *)(piVar18[7] + 0x2c);
        piVar18[5] = uVar12;
        if (iVar5 != 0 && uVar7 < uVar12) {
          iVar5 = crc32(param_1[0xc],piVar18[2] + uVar7,uVar12 - uVar7);
          param_1[0xc] = iVar5;
        }
        piVar18[8] = piVar18[8] + (uVar17 - iVar15);
        FUN_00012c34(param_1);
        if (piVar18[5] != 0) goto LAB_00014178;
        sVar19 = sVar19 + (iVar15 - uVar17);
        uVar7 = 0;
      }
      memcpy((void *)(piVar18[2] + iVar15),pvVar8,sVar19);
      uVar17 = sVar19 + piVar18[5];
      iVar15 = *(int *)(piVar18[7] + 0x2c);
      piVar18[5] = uVar17;
      if (iVar15 != 0 && uVar7 < uVar17) {
        iVar15 = crc32(param_1[0xc],piVar18[2] + uVar7,uVar17 - uVar7);
        param_1[0xc] = iVar15;
      }
      piVar18[8] = 0;
    }
    piVar18[1] = 0x49;
LAB_000146cc:
    if (*(int *)(piVar18[7] + 0x1c) != 0) {
      uVar7 = piVar18[5];
      do {
        uVar17 = piVar18[5];
        if (uVar17 == piVar18[3]) {
          if (*(int *)(piVar18[7] + 0x2c) != 0 && uVar7 < uVar17) {
            iVar15 = crc32(param_1[0xc],piVar18[2] + uVar7,uVar17 - uVar7);
            param_1[0xc] = iVar15;
          }
          FUN_00012c34(param_1);
          uVar7 = piVar18[5];
          if (uVar7 != 0) goto LAB_00014178;
        }
        iVar15 = *(int *)(piVar18[7] + 0x1c);
        iVar5 = piVar18[8];
        piVar18[8] = iVar5 + 1;
        cVar14 = *(char *)(iVar15 + iVar5);
        iVar15 = piVar18[5];
        piVar18[5] = iVar15 + 1;
        *(char *)(piVar18[2] + iVar15) = cVar14;
      } while (cVar14 != '\0');
      if ((*(int *)(piVar18[7] + 0x2c) != 0) && (uVar7 < (uint)piVar18[5])) {
        iVar15 = crc32(param_1[0xc],piVar18[2] + uVar7,piVar18[5] - uVar7);
        param_1[0xc] = iVar15;
      }
      piVar18[8] = 0;
    }
    piVar18[1] = 0x5b;
LAB_000147a8:
    if (*(int *)(piVar18[7] + 0x24) != 0) {
      uVar7 = piVar18[5];
      do {
        uVar17 = piVar18[5];
        if (uVar17 == piVar18[3]) {
          if (*(int *)(piVar18[7] + 0x2c) != 0 && uVar7 < uVar17) {
            iVar15 = crc32(param_1[0xc],piVar18[2] + uVar7,uVar17 - uVar7);
            param_1[0xc] = iVar15;
          }
          FUN_00012c34(param_1);
          uVar7 = piVar18[5];
          if (uVar7 != 0) goto LAB_00014178;
        }
        iVar15 = *(int *)(piVar18[7] + 0x24);
        iVar5 = piVar18[8];
        piVar18[8] = iVar5 + 1;
        cVar14 = *(char *)(iVar15 + iVar5);
        iVar15 = piVar18[5];
        piVar18[5] = iVar15 + 1;
        *(char *)(piVar18[2] + iVar15) = cVar14;
      } while (cVar14 != '\0');
      if ((*(int *)(piVar18[7] + 0x2c) != 0) && (uVar7 < (uint)piVar18[5])) {
        iVar15 = crc32(param_1[0xc],piVar18[2] + uVar7,piVar18[5] - uVar7);
        param_1[0xc] = iVar15;
      }
    }
    piVar18[1] = 0x67;
LAB_0001487c:
    if (*(int *)(piVar18[7] + 0x2c) != 0) {
      if (((uint)piVar18[3] < piVar18[5] + 2U) && (FUN_00012c34(param_1), piVar18[5] != 0))
      goto LAB_00014178;
      iVar5 = piVar18[5];
      iVar15 = param_1[0xc];
      piVar18[5] = iVar5 + 1;
      *(char *)(piVar18[2] + iVar5) = (char)iVar15;
      iVar15 = piVar18[5];
      iVar5 = param_1[0xc];
      piVar18[5] = iVar15 + 1;
      *(char *)(piVar18[2] + iVar15) = (char)((uint)iVar5 >> 8);
      iVar15 = crc32(0,0);
      param_1[0xc] = iVar15;
    }
    piVar18[1] = 0x71;
    FUN_00012c34(param_1);
    if (piVar18[5] != 0) goto LAB_00014178;
  }
  if ((param_1[1] == 0) && (piVar18[0x1d] == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    if (piVar18[1] == 0x29a) goto LAB_00014e4c;
  }
  if (piVar18[0x21] == 0) {
    uVar7 = FUN_00013594(piVar18,param_2);
  }
  else {
    if (piVar18[0x22] == 2) {
      do {
        do {
          if ((piVar18[0x1d] == 0) && (FUN_00012a1c(piVar18), piVar18[0x1d] == 0)) {
            if (param_2 != 0) goto LAB_00014c44;
            goto LAB_000149cc;
          }
          piVar18[0x18] = 0;
          bVar1 = *(byte *)(piVar18[0xe] + piVar18[0x1b]);
          iVar15 = piVar18[0x5a8];
          *(undefined2 *)(piVar18[0x5a9] + iVar15 * 2) = 0;
          piVar18[0x5a8] = iVar15 + 1;
          *(byte *)(piVar18[0x5a6] + iVar15) = bVar1;
          *(short *)(piVar18 + bVar1 + 0x25) = (short)piVar18[bVar1 + 0x25] + 1;
          piVar18[0x1d] = piVar18[0x1d] + -1;
          iVar15 = piVar18[0x1b];
          piVar18[0x1b] = iVar15 + 1;
        } while (piVar18[0x5a8] != piVar18[0x5a7] + -1);
        iVar5 = piVar18[0x17];
        if (iVar5 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piVar18[0xe] + iVar5;
        }
        FUN_0001a378(piVar18,iVar6,(iVar15 + 1) - iVar5,0);
        piVar18[0x17] = piVar18[0x1b];
        FUN_00012c34(*piVar18);
      } while (*(int *)(*piVar18 + 0x10) != 0);
    }
    else {
      if (piVar18[0x22] != 3) {
        uVar7 = (**(code **)(piVar18[0x21] * 0xc + DAT_00014fe0 + 0x14e18))(piVar18,param_2);
        goto LAB_00014248;
      }
      pbVar20 = (byte *)(DAT_00014fd8 + 0x14af8);
      iVar15 = DAT_00014fdc + 0x14afc;
      do {
        do {
          if ((uint)piVar18[0x1d] < 0x103) {
            FUN_00012a1c(piVar18);
            if ((uint)piVar18[0x1d] < 0x103) {
              if (param_2 == 0) goto LAB_000149cc;
              if (piVar18[0x1d] == 0) goto LAB_00014c44;
            }
          }
          uVar7 = piVar18[0x1d];
          piVar18[0x18] = 0;
          if ((2 < uVar7) && (iVar5 = piVar18[0x1b], iVar5 != 0)) {
            iVar23 = piVar18[0xe];
            iVar6 = iVar23 + iVar5 + -1;
            cVar14 = *(char *)(iVar23 + iVar5 + -1);
            if ((*(char *)(iVar6 + 1) == cVar14) &&
               ((*(char *)(iVar6 + 2) == cVar14 && (*(char *)(iVar6 + 3) == cVar14)))) {
              pcVar16 = (char *)(iVar6 + 3);
              pcVar13 = (char *)(iVar23 + iVar5 + 0x102);
              do {
                if (pcVar16[1] != cVar14) {
                  pcVar16 = pcVar16 + 1;
                  break;
                }
                if (pcVar16[2] != cVar14) {
                  pcVar16 = pcVar16 + 2;
                  break;
                }
                if (pcVar16[3] != cVar14) {
                  pcVar16 = pcVar16 + 3;
                  break;
                }
                if (pcVar16[4] != cVar14) {
                  pcVar16 = pcVar16 + 4;
                  break;
                }
                if (pcVar16[5] != cVar14) {
                  pcVar16 = pcVar16 + 5;
                  break;
                }
                if (pcVar16[6] != cVar14) {
                  pcVar16 = pcVar16 + 6;
                  break;
                }
                if (pcVar16[7] != cVar14) {
                  pcVar16 = pcVar16 + 7;
                  break;
                }
                pcVar16 = pcVar16 + 8;
              } while (pcVar16 < pcVar13 && *pcVar16 == cVar14);
              uVar17 = 0x102 - ((int)pcVar13 - (int)pcVar16);
              if (uVar7 < uVar17) {
                piVar18[0x18] = uVar7;
              }
              else {
                piVar18[0x18] = uVar17;
              }
            }
          }
          iVar6 = piVar18[0x5a8];
          iVar5 = piVar18[0x5a6];
          if ((uint)piVar18[0x18] < 3) {
            bVar1 = *(byte *)(piVar18[0xe] + piVar18[0x1b]);
            *(undefined2 *)(piVar18[0x5a9] + iVar6 * 2) = 0;
            piVar18[0x5a8] = iVar6 + 1;
            *(byte *)(iVar5 + iVar6) = bVar1;
            *(short *)(piVar18 + bVar1 + 0x25) = (short)piVar18[bVar1 + 0x25] + 1;
            piVar18[0x1d] = piVar18[0x1d] + -1;
            bVar4 = piVar18[0x5a7] + -1 == piVar18[0x5a8];
            piVar18[0x1b] = piVar18[0x1b] + 1;
          }
          else {
            uVar7 = piVar18[0x18] - 3;
            *(undefined2 *)(piVar18[0x5a9] + iVar6 * 2) = 1;
            piVar18[0x5a8] = iVar6 + 1;
            *(char *)(iVar5 + iVar6) = (char)uVar7;
            bVar1 = *(byte *)(iVar15 + (uVar7 & 0xff));
            *(short *)(piVar18 + bVar1 + 0x126) = (short)piVar18[bVar1 + 0x126] + 1;
            *(short *)(piVar18 + *pbVar20 + 0x262) = (short)piVar18[*pbVar20 + 0x262] + 1;
            bVar4 = piVar18[0x5a7] + -1 == piVar18[0x5a8];
            piVar18[0x1b] = piVar18[0x1b] + piVar18[0x18];
            piVar18[0x1d] = piVar18[0x1d] - piVar18[0x18];
            piVar18[0x18] = 0;
          }
        } while (!bVar4);
        iVar5 = piVar18[0x17];
        if (iVar5 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piVar18[0xe] + iVar5;
        }
        FUN_0001a378(piVar18,iVar6,piVar18[0x1b] - iVar5,0);
        piVar18[0x17] = piVar18[0x1b];
        FUN_00012c34(*piVar18);
      } while (*(int *)(*piVar18 + 0x10) != 0);
    }
LAB_000149cc:
    uVar7 = 0;
  }
LAB_00014248:
  if (uVar7 - 2 < 2) {
    piVar18[1] = 0x29a;
  }
  if ((uVar7 & 0xfffffffd) == 0) {
    if (param_1[4] != 0) {
      return 0;
    }
LAB_00014178:
    piVar18[10] = -1;
    return 0;
  }
  if (uVar7 == 1) {
    if (param_2 == 1) {
      FUN_0001a294(piVar18);
    }
    else if ((param_2 != 5) && (FUN_0001a170(piVar18,0,0), param_2 == 3)) {
      pvVar8 = (void *)piVar18[0x11];
      sVar19 = (piVar18[0x13] + 0x7fffffff) * 2;
      *(undefined2 *)((int)pvVar8 + sVar19) = 0;
      memset(pvVar8,0,sVar19);
      if (piVar18[0x1d] == 0) {
        piVar18[0x1b] = 0;
        piVar18[0x17] = 0;
        piVar18[0x5ad] = 0;
      }
    }
    FUN_00012c34(param_1);
    if (param_1[4] == 0) goto LAB_00014178;
  }
LAB_00014e4c:
  if (param_2 != 4) {
    return 0;
  }
  if (piVar18[6] < 1) {
    return 1;
  }
  uVar7 = param_1[0xc];
  if (piVar18[6] == 2) {
    iVar15 = piVar18[5];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar7;
    iVar15 = piVar18[5];
    iVar5 = param_1[0xc];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)((uint)iVar5 >> 8);
    iVar15 = piVar18[5];
    uVar3 = *(undefined2 *)((int)param_1 + 0x32);
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar3;
    iVar15 = piVar18[5];
    uVar2 = *(undefined1 *)((int)param_1 + 0x33);
    piVar18[5] = iVar15 + 1;
    *(undefined1 *)(piVar18[2] + iVar15) = uVar2;
    iVar5 = piVar18[5];
    iVar15 = param_1[2];
    piVar18[5] = iVar5 + 1;
    *(char *)(piVar18[2] + iVar5) = (char)iVar15;
    iVar15 = piVar18[5];
    iVar5 = param_1[2];
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)((uint)iVar5 >> 8);
    iVar15 = piVar18[5];
    uVar3 = *(undefined2 *)((int)param_1 + 10);
    piVar18[5] = iVar15 + 1;
    *(char *)(piVar18[2] + iVar15) = (char)uVar3;
    iVar15 = piVar18[5];
    uVar2 = *(undefined1 *)((int)param_1 + 0xb);
    piVar18[5] = iVar15 + 1;
    *(undefined1 *)(piVar18[2] + iVar15) = uVar2;
  }
  else {
    uVar9 = FUN_00012730(piVar18,uVar7 >> 0x10);
    FUN_00012730(uVar9,(short)param_1[0xc]);
  }
  FUN_00012c34(param_1);
  if (0 < piVar18[6]) {
    piVar18[6] = -piVar18[6];
  }
  return (uint)(piVar18[5] == 0);
LAB_00014c44:
  iVar15 = 0;
  piVar18[0x5ad] = 0;
  if (param_2 == 4) {
    iVar5 = piVar18[0x17];
    if (-1 < iVar5) {
      iVar15 = piVar18[0xe] + iVar5;
    }
    FUN_0001a378(piVar18,iVar15,piVar18[0x1b] - iVar5,1);
    piVar18[0x17] = piVar18[0x1b];
    FUN_00012c34(*piVar18);
    if (*(int *)(*piVar18 + 0x10) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
  }
  else if (piVar18[0x5a8] == 0) {
    uVar7 = 1;
  }
  else {
    iVar5 = piVar18[0x17];
    if (-1 < iVar5) {
      iVar15 = piVar18[0xe] + iVar5;
    }
    FUN_0001a378(piVar18,iVar15,piVar18[0x1b] - iVar5,0);
    piVar18[0x17] = piVar18[0x1b];
    FUN_00012c34(*piVar18);
    uVar7 = (uint)(*(int *)(*piVar18 + 0x10) != 0);
  }
  goto LAB_00014248;
}



/* ===== deflateParams @ 00014fe4 size=348 ===== */

undefined4 deflateParams(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = FUN_00013a10();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (param_2 == 0xffffffff) {
      param_2 = 6;
    }
    bVar7 = 3 < param_3;
    bVar6 = param_3 == 4;
    if (param_3 < 5) {
      bVar7 = 8 < param_2;
      bVar6 = param_2 == 9;
    }
    if (!bVar7 || bVar6) {
      if (((*(uint *)(iVar3 + 0x88) != param_3) ||
          (*(int *)(param_2 * 0xc + DAT_00015140 + 0x15044 + 8) !=
           *(int *)(*(int *)(iVar3 + 0x84) * 0xc + DAT_00015140 + 0x15044 + 8))) &&
         (*(int *)(iVar3 + 0x16c0) != 0)) {
        iVar4 = deflate(param_1,5);
        if (iVar4 == -2) {
          return 0xfffffffe;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          return 0xfffffffb;
        }
      }
      if (*(uint *)(iVar3 + 0x84) != param_2) {
        if ((*(uint *)(iVar3 + 0x84) == 0) && (*(int *)(iVar3 + 0x16b0) != 0)) {
          if (*(int *)(iVar3 + 0x16b0) == 1) {
            FUN_000126d0(iVar3);
          }
          else {
            *(undefined2 *)(*(int *)(iVar3 + 0x44) + *(int *)(iVar3 + 0x4c) * 2 + -2) = 0;
          }
          memset(*(void **)(iVar3 + 0x44),0,(*(int *)(iVar3 + 0x4c) + 0x7fffffff) * 2);
          *(undefined4 *)(iVar3 + 0x16b0) = 0;
        }
        iVar4 = DAT_00015144;
        *(uint *)(iVar3 + 0x84) = param_2;
        iVar5 = iVar4 + 0x15100 + param_2 * 0xc;
        uVar1 = *(ushort *)(iVar5 + 2);
        *(uint *)(iVar3 + 0x8c) = (uint)*(ushort *)(iVar4 + 0x15100 + param_2 * 0xc);
        uVar2 = *(ushort *)(iVar5 + 4);
        *(uint *)(iVar3 + 0x80) = (uint)uVar1;
        *(uint *)(iVar3 + 0x90) = (uint)uVar2;
        *(uint *)(iVar3 + 0x7c) = (uint)*(ushort *)(iVar5 + 6);
      }
      *(uint *)(iVar3 + 0x88) = param_3;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateEnd @ 00015148 size=180 ===== */

undefined4 deflateEnd(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00013a10();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    if (*(int *)(*(int *)(param_1 + 0x1c) + 8) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x44) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x40) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = 0;
    if (iVar1 == 0x71) {
      uVar2 = 0xfffffffd;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== deflateInit2_ @ 000151fc size=652 ===== */

undefined4
deflateInit2_(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar7 = DAT_00015488 + 0x15220;
  if ((param_7 == (char *)0x0) || (param_8 != 0x38 || *param_7 != '1')) {
    uVar2 = 0xfffffffa;
  }
  else {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar6 = DAT_0001548c;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(int *)(param_1 + 0x20) = iVar6 + 0x1527c;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(param_1 + 0x24) = DAT_00015490 + 0x15290;
      }
      if (param_2 == 0xffffffff) {
        param_2 = 6;
      }
      if ((int)param_4 < 0) {
        param_4 = -param_4;
        iVar6 = 0;
      }
      else if ((int)param_4 < 0x10) {
        iVar6 = 1;
      }
      else {
        param_4 = param_4 - 0x10;
        iVar6 = 2;
      }
      if (param_5 - 1U < 9) {
        bVar8 = param_4 - 8 == 7;
        if (param_4 - 8 < 8) {
          bVar8 = param_3 == 8;
        }
        if (bVar8) {
          bVar9 = 3 < param_6;
          bVar8 = param_6 == 4;
          if (param_6 < 5) {
            bVar9 = 8 < param_2;
            bVar8 = param_2 == 9;
          }
          if ((!bVar9 || bVar8) && (iVar6 == 1 || param_4 != 8)) {
            if (param_4 == 8) {
              param_4 = 9;
            }
            piVar3 = (int *)(**(code **)(param_1 + 0x20))
                                      (*(undefined4 *)(param_1 + 0x28),1,0x16c4,
                                       *(code **)(param_1 + 0x20),param_1,param_6,param_3);
            if (piVar3 != (int *)0x0) {
              *(int **)(param_1 + 0x1c) = piVar3;
              piVar3[6] = iVar6;
              piVar3[0x14] = param_5 + 7U;
              iVar6 = 1 << (param_4 & 0xff);
              iVar1 = 1 << (param_5 + 7U & 0xff);
              piVar3[1] = 0x2a;
              piVar3[0x13] = iVar1;
              piVar3[0xd] = iVar6 + -1;
              piVar3[0x15] = iVar1 + -1;
              piVar3[0xc] = param_4;
              piVar3[0xb] = iVar6;
              piVar3[0x16] = (param_5 + 9U) / 3;
              *piVar3 = param_1;
              pcVar4 = *(code **)(param_1 + 0x20);
              piVar3[7] = 0;
              iVar6 = (*pcVar4)(*(undefined4 *)(param_1 + 0x28),iVar6,2);
              piVar3[0xe] = iVar6;
              iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0xb],2);
              piVar3[0x10] = iVar6;
              iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0x13],2);
              piVar3[0x11] = iVar6;
              pcVar4 = *(code **)(param_1 + 0x20);
              iVar6 = 1 << (param_5 + 6U & 0xff);
              piVar3[0x5b0] = 0;
              piVar3[0x5a7] = iVar6;
              iVar6 = (*pcVar4)(*(undefined4 *)(param_1 + 0x28),iVar6,4);
              uVar5 = piVar3[0x5a7];
              piVar3[2] = iVar6;
              piVar3[3] = uVar5 << 2;
              if (((piVar3[0xe] != 0) && (piVar3[0x10] != 0)) && (iVar6 != 0 && piVar3[0x11] != 0))
              {
                piVar3[0x5a6] = iVar6 + uVar5 * 3;
                piVar3[0x5a9] = iVar6 + (uVar5 & 0xfffffffe);
                piVar3[0x22] = param_6;
                piVar3[0x21] = param_2;
                *(undefined1 *)(piVar3 + 9) = 8;
                uVar2 = deflateReset(param_1);
                return uVar2;
              }
              piVar3[1] = 0x29a;
              *(undefined4 *)(param_1 + 0x18) =
                   *(undefined4 *)(*(int *)(iVar7 + DAT_00015494) + 0x18);
              deflateEnd(param_1);
            }
            return 0xfffffffc;
          }
        }
      }
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== deflateInit_ @ 00015498 size=36 ===== */

void deflateInit_(void)

{
  deflateInit2_();
  return;
}



/* ===== deflateCopy @ 000154bc size=472 ===== */

undefined4 deflateCopy(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *__dest;
  undefined4 *puVar2;
  undefined4 *puVar4;
  code *pcVar5;
  void *__src;
  undefined4 *puVar3;
  
  iVar1 = FUN_00013a10(param_2);
  if (iVar1 != 0 || param_1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  __src = (void *)param_2[7];
  puVar2 = param_2;
  puVar4 = param_1;
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != param_2 + 0xe);
  __dest = (int *)(*(code *)param_1[8])(param_1[10],1,0x16c4);
  if (__dest != (int *)0x0) {
    param_1[7] = __dest;
    memcpy(__dest,__src,0x16c4);
    pcVar5 = (code *)param_1[8];
    *__dest = (int)param_1;
    iVar1 = (*pcVar5)(param_1[10],__dest[0xb],2);
    __dest[0xe] = iVar1;
    iVar1 = (*(code *)param_1[8])(param_1[10],__dest[0xb],2);
    __dest[0x10] = iVar1;
    iVar1 = (*(code *)param_1[8])(param_1[10],__dest[0x13],2);
    __dest[0x11] = iVar1;
    iVar1 = (*(code *)param_1[8])(param_1[10],__dest[0x5a7],4);
    __dest[2] = iVar1;
    if ((((void *)__dest[0xe] != (void *)0x0) && (__dest[0x10] != 0)) &&
       (__dest[0x11] != 0 && iVar1 != 0)) {
      memcpy((void *)__dest[0xe],*(void **)((int)__src + 0x38),__dest[0xb] << 1);
      memcpy((void *)__dest[0x10],*(void **)((int)__src + 0x40),__dest[0xb] << 1);
      memcpy((void *)__dest[0x11],*(void **)((int)__src + 0x44),__dest[0x13] << 1);
      memcpy((void *)__dest[2],*(void **)((int)__src + 8),__dest[3]);
      __dest[4] = __dest[2] + (*(int *)((int)__src + 0x10) - *(int *)((int)__src + 8));
      __dest[0x5a6] = __dest[2] + __dest[0x5a7] * 3;
      __dest[0x5a9] = iVar1 + (__dest[0x5a7] & 0xfffffffeU);
      __dest[0x2c6] = (int)(__dest + 0x25);
      __dest[0x2c9] = (int)(__dest + 0x262);
      __dest[0x2cc] = (int)(__dest + 0x29f);
      return 0;
    }
    deflateEnd(param_1);
  }
  return 0xfffffffc;
}



/* ===== inflateBackInit_ @ 00015694 size=240 ===== */

undefined4 inflateBackInit_(int param_1,uint param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  
  if (param_4 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_5 != 0x38 || *param_4 != '1') {
    return 0xfffffffa;
  }
  if ((param_1 == 0 || param_3 == 0) || (7 < param_2 - 8)) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = DAT_00015784;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x20) = iVar1 + 0x156f8;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(int *)(param_1 + 0x24) = DAT_00015788 + 0x1570c;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bd0);
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(uint *)(iVar1 + 0x28) = param_2;
  *(int *)(iVar1 + 0x38) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 0x8000;
  *(int *)(iVar1 + 0x2c) = 1 << (param_2 & 0xff);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return 0;
}



/* ===== inflateBack @ 0001578c size=3428 ===== */

undefined4
inflateBack(undefined4 *param_1,code *param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *__dest;
  undefined1 *puVar21;
  bool bVar22;
  bool bVar23;
  byte *local_2c [2];
  
  if ((param_1 == (undefined4 *)0x0) || (iVar16 = param_1[7], iVar16 == 0)) {
    return 0xfffffffe;
  }
  local_2c[0] = (byte *)*param_1;
  uVar18 = 0;
  uVar17 = 0;
  uVar19 = 0;
  if (local_2c[0] != (byte *)0x0) {
    uVar19 = param_1[1];
  }
  iVar11 = DAT_000164f0 + 0x16054;
  __dest = *(undefined1 **)(iVar16 + 0x38);
  uVar20 = *(uint *)(iVar16 + 0x2c);
  param_1[6] = 0;
  *(undefined4 *)(iVar16 + 4) = 0x3f3f;
  *(undefined4 *)(iVar16 + 8) = 0;
  *(undefined4 *)(iVar16 + 0x30) = 0;
LAB_000157fc:
  switch(*(undefined4 *)(iVar16 + 4)) {
  case 0x3f3f:
    if (*(int *)(iVar16 + 8) != 0) {
      uVar6 = uVar18 & 7;
      uVar18 = uVar18 & 0xfffffff8;
      uVar17 = uVar17 >> uVar6;
      uVar4 = 0x3f50;
      goto LAB_000158f4;
    }
    for (; uVar18 < 3; uVar18 = uVar18 + 8) {
      if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
      uVar19 = uVar19 - 1;
      uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
      local_2c[0] = local_2c[0] + 1;
    }
    *(uint *)(iVar16 + 8) = uVar17 & 1;
    iVar3 = DAT_000164f8;
    uVar6 = (uVar17 & 7) >> 1;
    if (uVar6 == 2) {
      uVar4 = 0x3f44;
    }
    else if (uVar6 == 3) {
      param_1[6] = DAT_000164fc + 0x159c0;
      uVar4 = 0x3f51;
    }
    else if (uVar6 == 1) {
      *(undefined4 *)(iVar16 + 0x58) = 9;
      *(int *)(iVar16 + 0x50) = iVar3 + 0x15990;
      *(int *)(iVar16 + 0x54) = iVar3 + 0x16190;
      *(undefined4 *)(iVar16 + 0x5c) = 5;
      uVar4 = 0x3f48;
    }
    else {
      uVar4 = 0x3f41;
    }
    *(undefined4 *)(iVar16 + 4) = uVar4;
    uVar18 = uVar18 - 3;
    uVar17 = uVar17 >> 3;
    goto LAB_000157fc;
  case 0x3f40:
    goto switchD_0001580c_default;
  case 0x3f41:
    uVar17 = uVar17 >> (uVar18 & 7);
    for (uVar18 = uVar18 & 0xfffffff8; uVar18 < 0x20; uVar18 = uVar18 + 8) {
      if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
      uVar19 = uVar19 - 1;
      uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
      local_2c[0] = local_2c[0] + 1;
    }
    if ((uVar17 & 0xffff) != (uVar17 >> 0x10 ^ 0xffff)) {
      iVar3 = DAT_00016500 + 0x15a04;
      goto LAB_00015a00;
    }
    *(uint *)(iVar16 + 0x44) = uVar17 & 0xffff;
    while (uVar17 = *(uint *)(iVar16 + 0x44), uVar17 != 0) {
      if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
      if (uVar20 == 0) {
        uVar20 = *(uint *)(iVar16 + 0x2c);
        __dest = *(undefined1 **)(iVar16 + 0x38);
        *(uint *)(iVar16 + 0x30) = uVar20;
        iVar3 = (*param_4)(param_5,__dest,uVar20);
        if (iVar3 != 0) goto LAB_00015924;
      }
      if (uVar19 <= uVar17) {
        uVar17 = uVar19;
      }
      if (uVar20 <= uVar17) {
        uVar17 = uVar20;
      }
      uVar19 = uVar19 - uVar17;
      uVar20 = uVar20 - uVar17;
      memcpy(__dest,local_2c[0],uVar17);
      __dest = __dest + uVar17;
      local_2c[0] = local_2c[0] + uVar17;
      *(uint *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) - uVar17;
    }
    *(undefined4 *)(iVar16 + 4) = 0x3f3f;
    uVar17 = 0;
    uVar18 = 0;
    goto LAB_000157fc;
  case 0x3f42:
    goto switchD_0001580c_default;
  case 0x3f43:
    goto switchD_0001580c_default;
  case 0x3f44:
    break;
  case 0x3f45:
    goto switchD_0001580c_default;
  case 0x3f46:
    goto switchD_0001580c_default;
  case 0x3f47:
    goto switchD_0001580c_default;
  case 0x3f48:
    goto LAB_00015fc4;
  case 0x3f49:
    goto switchD_0001580c_default;
  case 0x3f4a:
    goto switchD_0001580c_default;
  case 0x3f4b:
    goto switchD_0001580c_default;
  case 0x3f4c:
    goto switchD_0001580c_default;
  case 0x3f4d:
    goto switchD_0001580c_default;
  case 0x3f4e:
    goto switchD_0001580c_default;
  case 0x3f4f:
    goto switchD_0001580c_default;
  case 0x3f50:
    if (uVar20 < *(uint *)(iVar16 + 0x2c)) {
      iVar16 = (*param_4)(param_5,*(undefined4 *)(iVar16 + 0x38),*(uint *)(iVar16 + 0x2c) - uVar20);
      if (iVar16 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0xfffffffb;
      }
    }
    else {
      uVar4 = 1;
    }
    goto LAB_000158c4;
  case 0x3f51:
    uVar4 = 0xfffffffd;
    goto LAB_000158c4;
  default:
    goto switchD_0001580c_default;
  }
  for (; uVar18 < 0xe; uVar18 = uVar18 + 8) {
    if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
    uVar19 = uVar19 - 1;
    uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
    local_2c[0] = local_2c[0] + 1;
  }
  uVar6 = (uVar17 & 0x1f) + 0x101;
  *(uint *)(iVar16 + 0x60) = ((uVar17 & 0x3fff) >> 10) + 4;
  uVar2 = ((uVar17 & 0x3ff) >> 5) + 1;
  *(uint *)(iVar16 + 0x68) = uVar2;
  *(uint *)(iVar16 + 100) = uVar6;
  uVar18 = uVar18 - 0xe;
  bVar23 = 0x11d < uVar6;
  bVar22 = uVar6 == 0x11e;
  if (uVar6 < 0x11f) {
    bVar23 = 0x1d < uVar2;
    bVar22 = uVar2 == 0x1e;
  }
  uVar17 = uVar17 >> 0xe;
  if (bVar23 && !bVar22) {
    iVar3 = DAT_000164f4 + 0x158c0;
    goto LAB_00015a00;
  }
  *(undefined4 *)(iVar16 + 0x6c) = 0;
  do {
    for (; uVar18 < 3; uVar18 = uVar18 + 8) {
      if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
      uVar19 = uVar19 - 1;
      uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
      local_2c[0] = local_2c[0] + 1;
    }
    iVar3 = *(int *)(iVar16 + 0x6c);
    uVar18 = uVar18 - 3;
    uVar6 = iVar3 + 1;
    *(uint *)(iVar16 + 0x6c) = uVar6;
    uVar1 = (ushort)uVar17;
    uVar17 = uVar17 >> 3;
    *(ushort *)(iVar16 + (uint)*(ushort *)(iVar11 + iVar3 * 2) * 2 + 0x74) = uVar1 & 7;
  } while (uVar6 < *(uint *)(iVar16 + 0x60));
  iVar3 = DAT_00016504 + 0x16420;
  while (uVar6 = *(uint *)(iVar16 + 0x6c), uVar6 < 0x13) {
    *(uint *)(iVar16 + 0x6c) = uVar6 + 1;
    *(undefined2 *)(iVar16 + (*(ushort *)(iVar3 + uVar6 * 2) + 0x38) * 2 + 4) = 0;
  }
  iVar12 = iVar16 + 0x534;
  *(int *)(iVar16 + 0x70) = iVar12;
  *(int *)(iVar16 + 0x50) = iVar12;
  *(undefined4 *)(iVar16 + 0x58) = 7;
  iVar13 = iVar16 + 0x2f4;
  iVar3 = FUN_00018a6c(0,iVar16 + 0x74,0x13,iVar16 + 0x70,iVar16 + 0x58,iVar13);
  if (iVar3 != 0) {
    iVar3 = DAT_00016508 + 0x15c1c;
    goto LAB_00015a00;
  }
  *(undefined4 *)(iVar16 + 0x6c) = 0;
  while (*(uint *)(iVar16 + 0x6c) < (uint)(*(int *)(iVar16 + 0x68) + *(int *)(iVar16 + 100))) {
    while( true ) {
      iVar3 = *(int *)(iVar16 + 0x50) + (uVar17 & ~(-1 << (*(uint *)(iVar16 + 0x58) & 0xff))) * 4;
      uVar6 = (uint)*(byte *)(iVar3 + 1);
      if (uVar6 <= uVar18) break;
      if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0)) goto LAB_0001591c;
      uVar19 = uVar19 - 1;
      uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
      uVar18 = uVar18 + 8;
      local_2c[0] = local_2c[0] + 1;
    }
    uVar1 = *(ushort *)(iVar3 + 2);
    if (uVar1 < 0x10) {
      iVar3 = *(int *)(iVar16 + 0x6c);
      uVar17 = uVar17 >> uVar6;
      uVar18 = uVar18 - uVar6;
      *(int *)(iVar16 + 0x6c) = iVar3 + 1;
      *(ushort *)(iVar16 + iVar3 * 2 + 0x74) = uVar1;
    }
    else {
      if (uVar1 == 0x10) {
        for (; uVar18 < uVar6 + 2; uVar18 = uVar18 + 8) {
          if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
          goto LAB_0001591c;
          uVar19 = uVar19 - 1;
          uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        uVar17 = uVar17 >> uVar6;
        uVar18 = uVar18 - uVar6;
        if (*(int *)(iVar16 + 0x6c) != 0) {
          iVar3 = (uVar17 & 3) + 3;
          uVar18 = uVar18 - 2;
          uVar5 = *(undefined2 *)(iVar16 + *(int *)(iVar16 + 0x6c) * 2 + 0x72);
          uVar17 = uVar17 >> 2;
          goto LAB_00015e2c;
        }
        iVar3 = DAT_0001650c + 0x15dd8;
LAB_00015dd4:
        param_1[6] = iVar3;
        *(undefined4 *)(iVar16 + 4) = 0x3f51;
        break;
      }
      if (uVar1 == 0x11) {
        for (; uVar18 < uVar6 + 3; uVar18 = uVar18 + 8) {
          if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
          goto LAB_0001591c;
          uVar19 = uVar19 - 1;
          uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        iVar3 = (uVar17 >> uVar6 & 7) + 3;
        uVar18 = (uVar18 - uVar6) - 3;
        uVar17 = (uVar17 >> uVar6) >> 3;
      }
      else {
        for (; uVar18 < uVar6 + 7; uVar18 = uVar18 + 8) {
          if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
          goto LAB_0001591c;
          uVar19 = uVar19 - 1;
          uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        iVar3 = (uVar17 >> uVar6 & 0x7f) + 0xb;
        uVar18 = (uVar18 - uVar6) - 7;
        uVar17 = (uVar17 >> uVar6) >> 7;
      }
      uVar5 = 0;
LAB_00015e2c:
      if ((uint)(*(int *)(iVar16 + 100) + *(int *)(iVar16 + 0x68)) <
          (uint)(iVar3 + *(int *)(iVar16 + 0x6c))) {
        iVar3 = DAT_00016514 + 0x15e54;
        goto LAB_00015dd4;
      }
      while( true ) {
        iVar14 = *(int *)(iVar16 + 0x6c);
        iVar3 = iVar3 + -1;
        if (iVar3 == -1) break;
        *(int *)(iVar16 + 0x6c) = iVar14 + 1;
        *(undefined2 *)(iVar16 + iVar14 * 2 + 0x74) = uVar5;
      }
    }
  }
  if (*(int *)(iVar16 + 4) == 0x3f51) goto LAB_000157fc;
  if (*(short *)(iVar16 + 0x274) == 0) {
    iVar3 = DAT_00016510 + 0x15e0c;
  }
  else {
    *(int *)(iVar16 + 0x70) = iVar12;
    *(int *)(iVar16 + 0x50) = iVar12;
    *(undefined4 *)(iVar16 + 0x58) = 9;
    iVar3 = FUN_00018a6c(1,iVar16 + 0x74,*(undefined4 *)(iVar16 + 100),iVar16 + 0x70,iVar16 + 0x58,
                         iVar13);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x70);
      *(undefined4 *)(iVar16 + 0x5c) = 6;
      iVar3 = FUN_00018a6c(2,iVar16 + 0x74 + *(int *)(iVar16 + 100) * 2,
                           *(undefined4 *)(iVar16 + 0x68),iVar16 + 0x70,iVar16 + 0x5c,iVar13);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar16 + 4) = 0x3f48;
LAB_00015fc4:
        bVar23 = 4 < uVar19;
        bVar22 = uVar19 == 5;
        if (5 < uVar19) {
          bVar23 = 0x100 < uVar20;
          bVar22 = uVar20 == 0x101;
        }
        if (bVar23 && !bVar22) {
          uVar6 = *(uint *)(iVar16 + 0x2c);
          *param_1 = local_2c[0];
          param_1[1] = uVar19;
          uVar19 = *(uint *)(iVar16 + 0x30);
          param_1[4] = uVar20;
          bVar22 = uVar19 < uVar6;
          if (bVar22) {
            uVar20 = uVar6 - uVar20;
          }
          param_1[3] = __dest;
          *(uint *)(iVar16 + 0x3c) = uVar17;
          *(uint *)(iVar16 + 0x40) = uVar18;
          if (bVar22) {
            *(uint *)(iVar16 + 0x30) = uVar20;
          }
          FUN_0001656c(param_1);
          local_2c[0] = (byte *)*param_1;
          __dest = (undefined1 *)param_1[3];
          uVar20 = param_1[4];
          uVar19 = param_1[1];
          uVar17 = *(uint *)(iVar16 + 0x3c);
          uVar18 = *(uint *)(iVar16 + 0x40);
          goto LAB_000157fc;
        }
        while( true ) {
          pbVar7 = (byte *)(*(int *)(iVar16 + 0x50) +
                           (uVar17 & ~(-1 << (*(uint *)(iVar16 + 0x58) & 0xff))) * 4);
          uVar6 = (uint)pbVar7[1];
          if (uVar6 <= uVar18) break;
          if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
          goto LAB_0001591c;
          uVar19 = uVar19 - 1;
          uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
          uVar18 = uVar18 + 8;
          local_2c[0] = local_2c[0] + 1;
        }
        uVar9 = (uint)*pbVar7;
        uVar15 = (uint)*(ushort *)(pbVar7 + 2);
        uVar2 = uVar6;
        if ((uVar9 != 0) && ((*pbVar7 & 0xf0) == 0)) {
          while( true ) {
            pbVar7 = (byte *)(*(int *)(iVar16 + 0x50) +
                             (uVar15 + ((~(-1 << (uVar9 + uVar6 & 0xff)) & uVar17) >> uVar6)) * 4);
            uVar2 = (uint)pbVar7[1];
            if (uVar2 + uVar6 <= uVar18) break;
            if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
            goto LAB_0001591c;
            uVar19 = uVar19 - 1;
            uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
            uVar18 = uVar18 + 8;
            local_2c[0] = local_2c[0] + 1;
          }
          uVar9 = (uint)*pbVar7;
          uVar15 = (uint)*(ushort *)(pbVar7 + 2);
          uVar17 = uVar17 >> uVar6;
          uVar18 = uVar18 - uVar6;
        }
        uVar18 = uVar18 - uVar2;
        uVar17 = uVar17 >> uVar2;
        *(uint *)(iVar16 + 0x44) = uVar15;
        if (uVar9 != 0) {
          if ((uVar9 & 0x20) == 0) {
            if ((uVar9 & 0x40) == 0) {
              *(uint *)(iVar16 + 0x4c) = uVar9 & 0xf;
              if ((uVar9 & 0xf) != 0) {
                for (; uVar6 = *(uint *)(iVar16 + 0x4c), uVar18 < uVar6; uVar18 = uVar18 + 8) {
                  if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
                  goto LAB_0001591c;
                  uVar19 = uVar19 - 1;
                  uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
                  local_2c[0] = local_2c[0] + 1;
                }
                uVar18 = uVar18 - uVar6;
                uVar2 = uVar17 & ~(-1 << (uVar6 & 0xff));
                uVar17 = uVar17 >> (uVar6 & 0xff);
                *(uint *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + uVar2;
              }
              while( true ) {
                pbVar7 = (byte *)(*(int *)(iVar16 + 0x54) +
                                 (uVar17 & ~(-1 << (*(uint *)(iVar16 + 0x5c) & 0xff))) * 4);
                uVar6 = (uint)pbVar7[1];
                if (uVar6 <= uVar18) break;
                if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
                goto LAB_0001591c;
                uVar19 = uVar19 - 1;
                uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
                uVar18 = uVar18 + 8;
                local_2c[0] = local_2c[0] + 1;
              }
              uVar9 = (uint)*pbVar7;
              uVar15 = (uint)*(ushort *)(pbVar7 + 2);
              uVar2 = uVar6;
              if ((*pbVar7 & 0xf0) == 0) {
                while( true ) {
                  pbVar7 = (byte *)(*(int *)(iVar16 + 0x54) +
                                   (uVar15 + ((~(-1 << (uVar9 + uVar6 & 0xff)) & uVar17) >> uVar6))
                                   * 4);
                  uVar2 = (uint)pbVar7[1];
                  if (uVar2 + uVar6 <= uVar18) break;
                  if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
                  goto LAB_0001591c;
                  uVar19 = uVar19 - 1;
                  uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
                  uVar18 = uVar18 + 8;
                  local_2c[0] = local_2c[0] + 1;
                }
                uVar9 = (uint)*pbVar7;
                uVar15 = (uint)*(ushort *)(pbVar7 + 2);
                uVar17 = uVar17 >> uVar6;
                uVar18 = uVar18 - uVar6;
              }
              uVar18 = uVar18 - uVar2;
              uVar17 = uVar17 >> uVar2;
              if ((uVar9 & 0x40) == 0) {
                *(uint *)(iVar16 + 0x48) = uVar15;
                *(uint *)(iVar16 + 0x4c) = uVar9 & 0xf;
                if ((uVar9 & 0xf) != 0) {
                  for (; uVar6 = *(uint *)(iVar16 + 0x4c), uVar18 < uVar6; uVar18 = uVar18 + 8) {
                    if ((uVar19 == 0) && (uVar19 = (*param_2)(param_3,local_2c), uVar19 == 0))
                    goto LAB_0001591c;
                    uVar19 = uVar19 - 1;
                    uVar17 = uVar17 + ((uint)*local_2c[0] << (uVar18 & 0xff));
                    local_2c[0] = local_2c[0] + 1;
                  }
                  uVar18 = uVar18 - uVar6;
                  uVar2 = uVar17 & ~(-1 << (uVar6 & 0xff));
                  uVar17 = uVar17 >> (uVar6 & 0xff);
                  *(uint *)(iVar16 + 0x48) = *(int *)(iVar16 + 0x48) + uVar2;
                }
                uVar6 = uVar20;
                if (*(uint *)(iVar16 + 0x2c) <= *(uint *)(iVar16 + 0x30)) {
                  uVar6 = 0;
                }
                if (*(uint *)(iVar16 + 0x48) <= *(uint *)(iVar16 + 0x2c) - uVar6) {
                  do {
                    if (uVar20 == 0) {
                      uVar20 = *(uint *)(iVar16 + 0x2c);
                      __dest = *(undefined1 **)(iVar16 + 0x38);
                      *(uint *)(iVar16 + 0x30) = uVar20;
                      iVar3 = (*param_4)(param_5,__dest,uVar20);
                      if (iVar3 != 0) goto LAB_00015924;
                    }
                    iVar3 = *(int *)(iVar16 + 0x48);
                    uVar6 = *(int *)(iVar16 + 0x2c) - iVar3;
                    if (uVar6 < uVar20) {
                      iVar3 = iVar3 - *(int *)(iVar16 + 0x2c);
                    }
                    uVar2 = *(uint *)(iVar16 + 0x44);
                    if (uVar6 < uVar20) {
                      uVar9 = iVar3 + uVar20;
                    }
                    else {
                      uVar6 = -iVar3;
                      uVar9 = uVar20;
                    }
                    if (uVar2 < uVar9) {
                      uVar9 = uVar2;
                    }
                    *(uint *)(iVar16 + 0x44) = uVar2 - uVar9;
                    puVar8 = __dest + -1;
                    uVar20 = uVar20 - uVar9;
                    puVar21 = __dest + uVar6;
                    do {
                      puVar10 = puVar21 + 1;
                      puVar8 = puVar8 + 1;
                      *puVar8 = *puVar21;
                      puVar21 = puVar10;
                    } while (puVar10 != __dest + uVar6 + uVar9);
                    __dest = __dest + uVar9;
                  } while (*(int *)(iVar16 + 0x44) != 0);
                  goto LAB_000157fc;
                }
                iVar3 = DAT_00016528 + 0x163ac;
              }
              else {
                iVar3 = DAT_00016524 + 0x16364;
              }
            }
            else {
              iVar3 = DAT_00016520 + 0x161c0;
            }
LAB_00015a00:
            param_1[6] = iVar3;
            uVar4 = 0x3f51;
          }
          else {
            uVar4 = 0x3f3f;
          }
LAB_000158f4:
          *(undefined4 *)(iVar16 + 4) = uVar4;
          goto LAB_000157fc;
        }
        puVar21 = __dest;
        if (uVar20 == 0) {
          uVar20 = *(uint *)(iVar16 + 0x2c);
          puVar21 = *(undefined1 **)(iVar16 + 0x38);
          *(uint *)(iVar16 + 0x30) = uVar20;
          iVar3 = (*param_4)(param_5,puVar21,uVar20);
          if (iVar3 != 0) goto LAB_00015924;
        }
        uVar20 = uVar20 - 1;
        __dest = puVar21 + 1;
        *puVar21 = (char)*(undefined4 *)(iVar16 + 0x44);
        *(undefined4 *)(iVar16 + 4) = 0x3f48;
        goto LAB_000157fc;
      }
      iVar3 = DAT_0001651c + 0x15fbc;
    }
    else {
      iVar3 = DAT_00016518 + 0x15f70;
    }
  }
  param_1[6] = iVar3;
  *(undefined4 *)(iVar16 + 4) = 0x3f51;
  goto LAB_000157fc;
LAB_0001591c:
  uVar19 = 0;
  local_2c[0] = (byte *)0x0;
LAB_00015924:
  uVar4 = 0xfffffffb;
  goto LAB_000158c4;
switchD_0001580c_default:
  uVar4 = 0xfffffffe;
LAB_000158c4:
  *param_1 = local_2c[0];
  param_1[1] = uVar19;
  return uVar4;
}



/* ===== inflateBackEnd @ 0001652c size=64 ===== */

undefined4 inflateBackEnd(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== FUN_0001656c @ 0001656c size=1264 ===== */

void FUN_0001656c(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  pbVar10 = (byte *)*param_1;
  iVar23 = param_1[4];
  pbVar11 = pbVar10 + param_1[1] + -5;
  puVar12 = (undefined1 *)param_1[3];
  iVar18 = param_1[7];
  iVar24 = *(int *)(iVar18 + 0x50);
  puVar5 = puVar12 + iVar23 + -0x101;
  iVar25 = *(int *)(iVar18 + 0x54);
  uVar30 = *(uint *)(iVar18 + 0x58);
  iVar6 = *(int *)(iVar18 + 0x2c);
  uVar7 = *(uint *)(iVar18 + 0x30);
  uVar31 = *(uint *)(iVar18 + 0x5c);
  uVar22 = *(uint *)(iVar18 + 0x34);
  puVar8 = *(undefined1 **)(iVar18 + 0x38);
  uVar15 = *(uint *)(iVar18 + 0x3c);
  uVar9 = *(uint *)(iVar18 + 0x40);
  puVar13 = puVar12;
LAB_00016620:
  if (uVar9 < 0xf) {
    bVar2 = *pbVar10;
    uVar32 = uVar9 + 8;
    pbVar1 = pbVar10 + 1;
    pbVar10 = pbVar10 + 2;
    uVar26 = uVar9 & 0xff;
    uVar9 = uVar9 + 0x10;
    uVar15 = uVar15 + ((uint)bVar2 << uVar26) + ((uint)*pbVar1 << (uVar32 & 0xff));
  }
  uVar26 = ~(-1 << (uVar30 & 0xff)) & uVar15;
  iVar16 = iVar24 + uVar26 * 4;
  bVar2 = *(byte *)(iVar24 + uVar26 * 4);
  bVar3 = *(byte *)(iVar16 + 1);
  uVar4 = *(ushort *)(iVar16 + 2);
  while( true ) {
    uVar32 = (uint)bVar2;
    uVar26 = (uint)uVar4;
    uVar9 = uVar9 - bVar3;
    uVar15 = uVar15 >> (uint)bVar3;
    if (uVar32 == 0) break;
    puVar14 = puVar13;
    if ((bVar2 & 0x10) != 0) {
      uVar32 = uVar32 & 0xf;
      if ((bVar2 & 0xf) != 0) {
        if (uVar9 < uVar32) {
          uVar15 = uVar15 + ((uint)*pbVar10 << (uVar9 & 0xff));
          uVar9 = uVar9 + 8;
          pbVar10 = pbVar10 + 1;
        }
        uVar9 = uVar9 - uVar32;
        uVar26 = uVar26 + (uVar15 & ~(-1 << uVar32));
        uVar15 = uVar15 >> uVar32;
      }
      if (uVar9 < 0xf) {
        bVar2 = *pbVar10;
        uVar17 = uVar9 + 8;
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 2;
        uVar32 = uVar9 & 0xff;
        uVar9 = uVar9 + 0x10;
        uVar15 = uVar15 + ((uint)bVar2 << uVar32) + ((uint)*pbVar1 << (uVar17 & 0xff));
      }
      uVar32 = ~(-1 << (uVar31 & 0xff)) & uVar15;
      iVar16 = iVar25 + uVar32 * 4;
      bVar2 = *(byte *)(iVar25 + uVar32 * 4);
      bVar3 = *(byte *)(iVar16 + 1);
      uVar4 = *(ushort *)(iVar16 + 2);
      goto LAB_00016710;
    }
    if ((bVar2 & 0x40) != 0) {
      if ((bVar2 & 0x20) != 0) {
        uVar27 = 0x3f3f;
        goto LAB_000167a8;
      }
      iVar6 = (int)&DAT_00016a5c + DAT_00016a64;
      goto LAB_000167a0;
    }
    iVar16 = (uVar15 & ~(-1 << uVar32)) + uVar26;
    iVar21 = iVar24 + iVar16 * 4;
    bVar2 = *(byte *)(iVar24 + iVar16 * 4);
    bVar3 = *(byte *)(iVar21 + 1);
    uVar4 = *(ushort *)(iVar21 + 2);
  }
  puVar14 = puVar13 + 1;
  *puVar13 = (char)uVar4;
  goto LAB_00016678;
LAB_00016710:
  uVar9 = uVar9 - bVar3;
  uVar15 = uVar15 >> (uint)bVar3;
  if ((bVar2 & 0x10) != 0) goto code_r0x00016720;
  if ((bVar2 & 0x40) != 0) {
    iVar6 = DAT_00016a60 + 0x16a18;
    goto LAB_000167a0;
  }
  iVar16 = (uVar15 & ~(-1 << (uint)bVar2)) + (uint)uVar4;
  iVar21 = iVar25 + iVar16 * 4;
  bVar2 = *(byte *)(iVar25 + iVar16 * 4);
  bVar3 = *(byte *)(iVar21 + 1);
  uVar4 = *(ushort *)(iVar21 + 2);
  goto LAB_00016710;
code_r0x00016720:
  uVar32 = bVar2 & 0xf;
  if (uVar9 < uVar32) {
    uVar15 = uVar15 + ((uint)*pbVar10 << (uVar9 & 0xff));
    uVar17 = uVar9 + 8;
    if (uVar17 < uVar32) {
      pbVar1 = pbVar10 + 1;
      uVar9 = uVar9 + 0x10;
      pbVar10 = pbVar10 + 2;
      uVar15 = uVar15 + ((uint)*pbVar1 << (uVar17 & 0xff));
    }
    else {
      pbVar10 = pbVar10 + 1;
      uVar9 = uVar17;
    }
  }
  uVar9 = uVar9 - uVar32;
  uVar17 = uVar15 & ~(-1 << uVar32);
  uVar15 = uVar15 >> uVar32;
  uVar17 = uVar17 + uVar4;
  uVar32 = (int)puVar13 - (int)(puVar12 + (iVar23 - param_2));
  if (uVar17 <= uVar32) {
    puVar28 = puVar13 + -uVar17;
    do {
      puVar29 = puVar28;
      puVar20 = puVar13;
      uVar26 = uVar26 - 3;
      *puVar20 = *puVar29;
      puVar14 = puVar20 + 3;
      puVar20[1] = puVar29[1];
      puVar20[2] = puVar29[2];
      puVar13 = puVar14;
      puVar28 = puVar29 + 3;
    } while (2 < uVar26);
    if (uVar26 != 0) {
      puVar20[3] = puVar29[3];
      if (uVar26 == 2) {
        puVar14 = puVar20 + 5;
        puVar20[4] = puVar29[4];
      }
      else {
        puVar14 = puVar20 + 4;
      }
    }
    goto LAB_00016678;
  }
  uVar19 = uVar17 - uVar32;
  if ((uVar7 < uVar19) && (*(int *)(iVar18 + 0x1bc4) != 0)) {
    iVar6 = DAT_00016a5c + 0x167a4;
LAB_000167a0:
    param_1[6] = iVar6;
    uVar27 = 0x3f51;
LAB_000167a8:
    *(undefined4 *)(iVar18 + 4) = uVar27;
    goto LAB_000167ac;
  }
  iVar16 = uVar32 - uVar17;
  if (uVar22 == 0) {
    puVar28 = puVar8 + iVar6 + iVar16;
    if (uVar19 < uVar26) {
      uVar26 = uVar26 + iVar16;
      puVar20 = puVar13 + -1;
      puVar14 = puVar28;
      do {
        puVar29 = puVar14 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar14;
        puVar14 = puVar29;
      } while (puVar29 != puVar28 + uVar19);
LAB_00016858:
      puVar14 = puVar13 + uVar19;
      puVar28 = puVar13 + uVar19 + -uVar17;
    }
  }
  else if (uVar22 < uVar19) {
    puVar28 = puVar8 + iVar6 + uVar22 + iVar16;
    uVar32 = uVar19 - uVar22;
    if (uVar32 < uVar26) {
      uVar26 = uVar26 + uVar22 + iVar16;
      puVar20 = puVar13 + -1;
      puVar14 = puVar28;
      do {
        puVar29 = puVar14 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar14;
        puVar14 = puVar29;
      } while (puVar29 != puVar28 + uVar32);
      puVar14 = puVar13 + uVar32;
      puVar28 = puVar8;
      if (uVar22 < uVar26) {
        uVar26 = uVar26 - uVar22;
        puVar14 = puVar14 + -1;
        do {
          puVar20 = puVar28 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar28;
          puVar28 = puVar20;
        } while (puVar20 != puVar8 + uVar22);
        goto LAB_00016858;
      }
    }
  }
  else {
    puVar28 = puVar8 + uVar22 + iVar16;
    if (uVar19 < uVar26) {
      uVar26 = uVar26 + iVar16;
      puVar20 = puVar13 + -1;
      puVar14 = puVar28;
      do {
        puVar29 = puVar14 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar14;
        puVar14 = puVar29;
      } while (puVar29 != puVar28 + uVar19);
      goto LAB_00016858;
    }
  }
  while( true ) {
    if (uVar26 < 3) break;
    uVar26 = uVar26 - 3;
    *puVar14 = *puVar28;
    puVar14[1] = puVar28[1];
    puVar14[2] = puVar28[2];
    puVar14 = puVar14 + 3;
    puVar28 = puVar28 + 3;
  }
  if (uVar26 != 0) {
    *puVar14 = *puVar28;
    if (uVar26 == 2) {
      puVar14[1] = puVar28[1];
      puVar14 = puVar14 + 2;
    }
    else {
      puVar14 = puVar14 + 1;
    }
  }
LAB_00016678:
  puVar13 = puVar14;
  if (pbVar11 <= pbVar10 || puVar5 <= puVar14) {
LAB_000167ac:
    pbVar10 = pbVar10 + -(uVar9 >> 3);
    *param_1 = pbVar10;
    param_1[3] = puVar14;
    if (pbVar10 < pbVar11) {
      iVar6 = (int)pbVar11 - (int)pbVar10;
    }
    else {
      iVar6 = -((int)pbVar10 - (int)pbVar11);
    }
    param_1[1] = iVar6 + 5;
    if (puVar14 < puVar5) {
      iVar6 = (int)puVar5 - (int)puVar14;
    }
    else {
      iVar6 = -((int)puVar14 - (int)puVar5);
    }
    param_1[4] = iVar6 + 0x101;
    *(uint *)(iVar18 + 0x3c) = uVar15 & ~(-1 << (uVar9 & 7));
    *(uint *)(iVar18 + 0x40) = uVar9 & 7;
    return;
  }
  goto LAB_00016620;
}



/* ===== FUN_00016a68 @ 00016a68 size=100 ===== */

void FUN_00016a68(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  uVar1 = 0;
  bVar4 = 2 < uVar2;
  if (uVar2 < 4) {
    bVar4 = param_3 == 0;
  }
  if (bVar4) {
    *param_1 = uVar2;
    return;
  }
  do {
    if (uVar2 < 2) {
      cVar3 = '\0';
    }
    else {
      cVar3 = -1;
    }
    if (*(char *)(param_2 + uVar1) == cVar3) {
      uVar2 = uVar2 + 1;
    }
    else if (*(char *)(param_2 + uVar1) == '\0') {
      uVar2 = 4 - uVar2;
    }
    else {
      uVar2 = 0;
    }
    uVar1 = uVar1 + 1;
    bVar4 = 2 < uVar2;
    if (uVar2 < 4) {
      bVar4 = param_3 <= uVar1;
    }
  } while (!bVar4);
  *param_1 = uVar2;
  return;
}



/* ===== FUN_00016acc @ 00016acc size=288 ===== */

undefined4 FUN_00016acc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint __n;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar6 + 0x38) == 0) {
    iVar1 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar6 + 0x28) & 0xff),1);
    *(int *)(iVar6 + 0x38) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar6 + 0x2c) == 0) {
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(int *)(iVar6 + 0x2c) = 1 << (*(uint *)(iVar6 + 0x28) & 0xff);
    *(undefined4 *)(iVar6 + 0x30) = 0;
  }
  sVar3 = *(size_t *)(iVar6 + 0x2c);
  if (param_3 < sVar3) {
    uVar4 = sVar3 - *(int *)(iVar6 + 0x34);
    __n = param_3;
    if (uVar4 <= param_3) {
      __n = uVar4;
    }
    memcpy((void *)((int)*(void **)(iVar6 + 0x38) + *(int *)(iVar6 + 0x34)),
           (void *)(param_2 - param_3),__n);
    sVar3 = param_3 - __n;
    if (sVar3 == 0) {
      uVar2 = *(uint *)(iVar6 + 0x2c);
      uVar4 = __n + *(int *)(iVar6 + 0x34);
      uVar5 = *(uint *)(iVar6 + 0x30);
      if (uVar4 == uVar2) {
        uVar4 = 0;
      }
      if (uVar5 < uVar2) {
        __n = uVar5 + __n;
      }
      *(uint *)(iVar6 + 0x34) = uVar4;
      if (uVar5 < uVar2) {
        *(uint *)(iVar6 + 0x30) = __n;
      }
    }
    else {
      memcpy(*(void **)(iVar6 + 0x38),(void *)(param_2 + (__n - param_3)),sVar3);
      *(size_t *)(iVar6 + 0x34) = sVar3;
      *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar6 + 0x2c);
    }
  }
  else {
    memcpy(*(void **)(iVar6 + 0x38),(void *)(param_2 - sVar3),sVar3);
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar6 + 0x2c);
  }
  return 0;
}



/* ===== FUN_00016bec @ 00016bec size=92 ===== */

bool FUN_00016bec(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (param_1 == *piVar1)))) {
    return 0x1f < piVar1[1] - 0x3f34U;
  }
  return true;
}



/* ===== inflateResetKeep @ 00016c48 size=148 ===== */

undefined4 inflateResetKeep(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00016bec(param_1,param_1);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    return 0xfffffffe;
  }
  iVar3 = *(int *)(iVar2 + 0x1c);
  uVar1 = *(uint *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  if (uVar1 != 0) {
    *(uint *)(iVar2 + 0x30) = uVar1 & 1;
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 4) = 0x3f34;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0x8000;
  iVar2 = iVar3 + 0x534;
  *(int *)(iVar3 + 0x70) = iVar2;
  *(int *)(iVar3 + 0x54) = iVar2;
  *(int *)(iVar3 + 0x50) = iVar2;
  *(undefined4 *)(iVar3 + 0x1bc4) = 1;
  *(undefined4 *)(iVar3 + 0x1bc8) = 0xffffffff;
  return 0;
}



/* ===== inflateReset @ 00016cdc size=68 ===== */

undefined4 inflateReset(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00016bec(param_1,param_1);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    iVar3 = *(int *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
                    /* WARNING: Could not recover jumptable at 0x00011bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_inflateResetKeep_00032074)(iVar2);
    return uVar1;
  }
  return 0xfffffffe;
}



/* ===== inflateReset2 @ 00016d14 size=148 ===== */

undefined4 inflateReset2(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = FUN_00016bec();
  uVar2 = (uint)((ulonglong)lVar5 >> 0x20);
  if ((int)lVar5 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (lVar5 < 0) {
      uVar2 = -uVar2;
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)uVar2 >> 4) + 5;
      if (lVar5 < 0x3000000000) {
        uVar2 = uVar2 & 0xf;
      }
    }
    if (uVar2 == 0 || uVar2 - 8 < 8) {
      if ((*(int *)(iVar3 + 0x38) != 0) && (uVar2 != *(uint *)(iVar3 + 0x28))) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
      *(int *)(iVar3 + 0xc) = iVar4;
      *(uint *)(iVar3 + 0x28) = uVar2;
      uVar1 = inflateReset(param_1);
      return uVar1;
    }
  }
  return 0xfffffffe;
}



/* ===== inflateInit2_ @ 00016da8 size=220 ===== */

int inflateInit2_(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 == (char *)0x0) || (param_4 != 0x38 || *param_3 != '1')) {
    iVar2 = -6;
  }
  else if (param_1 == 0) {
    iVar2 = -2;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = DAT_00016e84;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x20) = iVar2 + 0x16df8;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x24) = DAT_00016e88 + 0x16e0c;
    }
    piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bd0);
    if (piVar1 == (int *)0x0) {
      iVar2 = -4;
    }
    else {
      *(int **)(param_1 + 0x1c) = piVar1;
      *piVar1 = param_1;
      piVar1[0xe] = 0;
      piVar1[1] = 0x3f34;
      iVar2 = inflateReset2(param_1,param_2);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  return iVar2;
}



/* ===== inflateInit_ @ 00016e8c size=16 ===== */

void inflateInit_(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}



/* ===== inflatePrime @ 00016e9c size=108 ===== */

undefined4 inflatePrime(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = FUN_00016bec();
  uVar1 = (uint)((ulonglong)lVar5 >> 0x20);
  if ((int)lVar5 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (lVar5 < 0) {
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      return 0;
    }
    if (lVar5 < 0x1100000000) {
      uVar2 = *(uint *)(iVar3 + 0x40);
      uVar4 = uVar1 + uVar2;
      if (uVar4 < 0x21) {
        *(uint *)(iVar3 + 0x40) = uVar4;
        *(uint *)(iVar3 + 0x3c) =
             *(int *)(iVar3 + 0x3c) + ((param_3 & ~(-1 << (uVar1 & 0xff))) << (uVar2 & 0xff));
        return 0;
      }
    }
  }
  return 0xfffffffe;
}



/* ===== inflate @ 00016f08 size=5576 ===== */

/* WARNING: Type propagation algorithm not settling */

int inflate(undefined4 *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  size_t __n;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *__src;
  undefined2 uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  int iVar29;
  undefined1 *local_4c;
  uint local_48;
  uint local_2c [2];
  undefined1 *puVar18;
  
  iVar3 = FUN_00016bec();
  if ((iVar3 == 0) && (local_4c = (undefined1 *)param_1[3], local_4c != (undefined1 *)0x0)) {
    __src = (byte *)*param_1;
    uVar14 = param_1[1];
    if ((__src != (byte *)0x0) || (uVar14 == 0)) {
      iVar3 = param_1[7];
      uVar24 = param_1[4];
      uVar19 = *(uint *)(iVar3 + 0x3c);
      if (*(int *)(iVar3 + 4) == 0x3f3f) {
        *(undefined4 *)(iVar3 + 4) = 0x3f40;
      }
      iVar29 = 0;
      iVar15 = DAT_00017f54 + 0x17810;
      uVar22 = *(uint *)(iVar3 + 0x40);
      uVar23 = uVar14;
      local_48 = uVar24;
LAB_00016f98:
      switch(*(undefined4 *)(iVar3 + 4)) {
      case 0x3f34:
        uVar9 = *(uint *)(iVar3 + 0xc);
        if (uVar9 == 0) {
          iVar20 = 0x3f40;
          goto LAB_00017120;
        }
        for (; uVar22 < 0x10; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        if (((uint)(uVar19 == 0x8b1f) & uVar9 >> 1) != 0) {
          iVar20 = *(int *)(iVar3 + 0x28);
          bVar27 = iVar20 == 0;
          if (bVar27) {
            iVar20 = 0xf;
          }
          uVar19 = 0;
          if (bVar27) {
            *(int *)(iVar3 + 0x28) = iVar20;
          }
          uVar4 = crc32(0,0);
          uVar5 = DAT_00017f58;
          *(undefined4 *)(iVar3 + 0x1c) = uVar4;
          local_2c[0] = CONCAT22(local_2c[0]._2_2_,(short)uVar5);
          uVar5 = crc32(uVar4,local_2c,2);
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          *(undefined4 *)(iVar3 + 4) = 0x3f35;
          uVar22 = 0;
          goto LAB_00016f98;
        }
        *(undefined4 *)(iVar3 + 0x14) = 0;
        if (*(int *)(iVar3 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x30) = 0xffffffff;
        }
        if (((uVar9 & 1) == 0) ||
           (uVar9 = (uVar19 & 0xff) * 0x100 + (uVar19 >> 8), uVar9 != (uVar9 / 0x1f) * 0x1f)) {
          iVar20 = DAT_00017f5c + 0x1711c;
        }
        else {
          if ((uVar19 & 0xf) == 8) {
            uVar22 = uVar22 - 4;
            uVar19 = uVar19 >> 4;
            uVar9 = (uVar19 & 0xf) + 8;
            if (*(uint *)(iVar3 + 0x28) == 0) {
              *(uint *)(iVar3 + 0x28) = uVar9;
              if (uVar9 < 0x10) {
LAB_00017180:
                *(int *)(iVar3 + 0x18) = 1 << uVar9;
                uVar5 = adler32(0,0);
                *(undefined4 *)(iVar3 + 0x1c) = uVar5;
                uVar22 = uVar19 & 0x200;
                param_1[0xc] = uVar5;
                uVar5 = 0x3f3d;
                uVar19 = 0;
                if (uVar22 == 0) {
                  uVar5 = 0x3f3f;
                }
                *(undefined4 *)(iVar3 + 4) = uVar5;
                uVar22 = uVar19;
                goto LAB_00016f98;
              }
            }
            else if ((uVar9 < 0x10) && (uVar9 <= *(uint *)(iVar3 + 0x28))) goto LAB_00017180;
            iVar20 = DAT_00017f64 + 0x17170;
            break;
          }
          iVar20 = DAT_00017f60 + 0x1713c;
        }
        break;
      case 0x3f35:
        for (; uVar22 < 0x10; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        *(uint *)(iVar3 + 0x14) = uVar19;
        if ((uVar19 & 0xff) == 8) {
          if ((uVar19 & 0xe000) == 0) {
            if (*(uint **)(iVar3 + 0x24) != (uint *)0x0) {
              **(uint **)(iVar3 + 0x24) = (uVar19 & 0x1ff) >> 8;
            }
            if (((uVar19 & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
              local_2c[0] = CONCAT22(local_2c[0]._2_2_,(short)uVar19);
              uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),local_2c,2);
              *(undefined4 *)(iVar3 + 0x1c) = uVar5;
            }
            uVar22 = 0;
            *(undefined4 *)(iVar3 + 4) = 0x3f36;
            uVar19 = 0;
            goto LAB_00017258;
          }
          iVar20 = DAT_00017f6c + 0x1720c;
        }
        else {
          iVar20 = DAT_00017f68 + 0x171fc;
        }
        break;
      case 0x3f36:
LAB_00017258:
        for (; uVar22 < 0x20; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        if (*(int *)(iVar3 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar3 + 0x24) + 4) = uVar19;
        }
        if (((*(uint *)(iVar3 + 0x14) & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
          local_2c[0] = uVar19;
          uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),local_2c,4);
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
        }
        uVar22 = 0;
        *(undefined4 *)(iVar3 + 4) = 0x3f37;
        uVar19 = 0;
        goto LAB_000172ac;
      case 0x3f37:
LAB_000172ac:
        for (; uVar22 < 0x10; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        iVar20 = *(int *)(iVar3 + 0x24);
        if (iVar20 != 0) {
          *(uint *)(iVar20 + 8) = uVar19 & 0xff;
          *(uint *)(iVar20 + 0xc) = uVar19 >> 8;
        }
        if (((*(uint *)(iVar3 + 0x14) & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
          local_2c[0] = CONCAT22(local_2c[0]._2_2_,(short)uVar19);
          uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),local_2c,2);
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
        }
        uVar22 = 0;
        *(undefined4 *)(iVar3 + 4) = 0x3f38;
        uVar19 = 0;
LAB_0001730c:
        uVar9 = *(uint *)(iVar3 + 0x14);
        if ((uVar9 & 0x400) == 0) {
          if (*(int *)(iVar3 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x10) = 0;
          }
        }
        else {
          for (; uVar22 < 0x10; uVar22 = uVar22 + 8) {
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            __src = __src + 1;
          }
          *(uint *)(iVar3 + 0x44) = uVar19;
          if (*(int *)(iVar3 + 0x24) != 0) {
            *(uint *)(*(int *)(iVar3 + 0x24) + 0x14) = uVar19;
          }
          if (((uVar9 & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
            local_2c[0] = CONCAT22(local_2c[0]._2_2_,(short)uVar19);
            uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),local_2c,2);
            *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          }
          uVar19 = 0;
          uVar22 = uVar19;
        }
        *(undefined4 *)(iVar3 + 4) = 0x3f39;
LAB_000173d0:
        if ((*(uint *)(iVar3 + 0x14) & 0x400) != 0) {
          uVar13 = *(uint *)(iVar3 + 0x44);
          uVar9 = uVar23;
          if (uVar13 <= uVar23) {
            uVar9 = uVar13;
          }
          if (uVar9 != 0) {
            iVar20 = *(int *)(iVar3 + 0x24);
            if ((iVar20 != 0) && (*(int *)(iVar20 + 0x10) != 0)) {
              iVar21 = *(int *)(iVar20 + 0x14) - uVar13;
              __n = uVar9;
              if (*(uint *)(iVar20 + 0x18) < iVar21 + uVar9) {
                __n = (*(uint *)(iVar20 + 0x18) + uVar13) - *(int *)(iVar20 + 0x14);
              }
              memcpy((void *)(*(int *)(iVar20 + 0x10) + iVar21),__src,__n);
            }
            if (((*(uint *)(iVar3 + 0x14) & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
              uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),__src,uVar9);
              *(undefined4 *)(iVar3 + 0x1c) = uVar5;
            }
            uVar23 = uVar23 - uVar9;
            __src = __src + uVar9;
            *(uint *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) - uVar9;
          }
          if (*(int *)(iVar3 + 0x44) != 0) goto LAB_00017540;
        }
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 4) = 0x3f3a;
LAB_00017494:
        if ((*(uint *)(iVar3 + 0x14) & 0x800) == 0) {
          if (*(int *)(iVar3 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x1c) = 0;
          }
        }
        else {
          if (uVar23 == 0) goto LAB_00017540;
          pbVar12 = __src + -1;
          uVar9 = 0;
          do {
            iVar20 = *(int *)(iVar3 + 0x24);
            uVar9 = uVar9 + 1;
            pbVar12 = pbVar12 + 1;
            bVar1 = *pbVar12;
            if (((iVar20 != 0) && (iVar21 = *(int *)(iVar20 + 0x1c), iVar21 != 0)) &&
               (uVar13 = *(uint *)(iVar3 + 0x44), uVar13 < *(uint *)(iVar20 + 0x20))) {
              *(uint *)(iVar3 + 0x44) = uVar13 + 1;
              *(byte *)(iVar21 + uVar13) = bVar1;
            }
          } while ((bVar1 == 0 || uVar9 <= uVar23) && (bVar1 != 0 && uVar23 != uVar9));
          if (((*(uint *)(iVar3 + 0x14) & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
            uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),__src,uVar9);
            *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          }
          uVar23 = uVar23 - uVar9;
          __src = __src + uVar9;
          if (bVar1 != 0) goto LAB_00017540;
        }
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 4) = 0x3f3b;
LAB_000176e0:
        if ((*(uint *)(iVar3 + 0x14) & 0x1000) == 0) {
          if (*(int *)(iVar3 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x24) = 0;
          }
        }
        else {
          if (uVar23 == 0) goto LAB_00017540;
          pbVar12 = __src + -1;
          uVar9 = 0;
          do {
            iVar20 = *(int *)(iVar3 + 0x24);
            uVar9 = uVar9 + 1;
            pbVar12 = pbVar12 + 1;
            bVar1 = *pbVar12;
            if (((iVar20 != 0) && (iVar21 = *(int *)(iVar20 + 0x24), iVar21 != 0)) &&
               (uVar13 = *(uint *)(iVar3 + 0x44), uVar13 < *(uint *)(iVar20 + 0x28))) {
              *(uint *)(iVar3 + 0x44) = uVar13 + 1;
              *(byte *)(iVar21 + uVar13) = bVar1;
            }
          } while ((bVar1 == 0 || uVar9 <= uVar23) && (bVar1 != 0 && uVar23 != uVar9));
          if (((*(uint *)(iVar3 + 0x14) & 0x200) != 0) && ((*(uint *)(iVar3 + 0xc) & 4) != 0)) {
            uVar5 = crc32(*(undefined4 *)(iVar3 + 0x1c),__src,uVar9);
            *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          }
          uVar23 = uVar23 - uVar9;
          __src = __src + uVar9;
          if (bVar1 != 0) goto LAB_00017540;
        }
        *(undefined4 *)(iVar3 + 4) = 0x3f3c;
LAB_00017794:
        if ((*(uint *)(iVar3 + 0x14) & 0x200) != 0) {
          for (; uVar22 < 0x10; uVar22 = uVar22 + 8) {
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            __src = __src + 1;
          }
          if (((*(uint *)(iVar3 + 0xc) & 4) != 0) && (*(ushort *)(iVar3 + 0x1c) != uVar19)) {
            iVar20 = DAT_00017f70 + 0x177cc;
            break;
          }
          uVar22 = 0;
          uVar19 = 0;
        }
        iVar20 = *(int *)(iVar3 + 0x24);
        if (iVar20 != 0) {
          *(uint *)(iVar20 + 0x2c) = (*(uint *)(iVar3 + 0x14) & 0x3ff) >> 9;
          *(undefined4 *)(iVar20 + 0x30) = 1;
        }
        uVar5 = crc32(0,0);
        *(undefined4 *)(iVar3 + 0x1c) = uVar5;
        param_1[0xc] = uVar5;
LAB_00017830:
        iVar20 = 0x3f3f;
        goto LAB_00017120;
      case 0x3f38:
        goto LAB_0001730c;
      case 0x3f39:
        goto LAB_000173d0;
      case 0x3f3a:
        goto LAB_00017494;
      case 0x3f3b:
        goto LAB_000176e0;
      case 0x3f3c:
        goto LAB_00017794;
      case 0x3f3d:
        for (; uVar22 < 0x20; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        iVar20 = uVar19 * 0x1000000 + (uVar19 >> 0x18) + (uVar19 >> 8 & 0xff00) +
                 (uVar19 & 0xff00) * 0x100;
        *(int *)(iVar3 + 0x1c) = iVar20;
        param_1[0xc] = iVar20;
        uVar19 = 0;
        *(undefined4 *)(iVar3 + 4) = 0x3f3e;
        uVar22 = 0;
        goto LAB_00017890;
      case 0x3f3e:
LAB_00017890:
        if (*(int *)(iVar3 + 0x10) == 0) {
          param_1[4] = uVar24;
          param_1[3] = local_4c;
          *param_1 = __src;
          param_1[1] = uVar23;
          *(uint *)(iVar3 + 0x3c) = uVar19;
          *(uint *)(iVar3 + 0x40) = uVar22;
          return 2;
        }
        uVar5 = adler32(0,0);
        *(undefined4 *)(iVar3 + 0x1c) = uVar5;
        param_1[0xc] = uVar5;
        *(undefined4 *)(iVar3 + 4) = 0x3f3f;
LAB_000178ec:
        if (param_2 - 5U < 2) goto LAB_00017540;
LAB_000178fc:
        if (*(int *)(iVar3 + 8) != 0) {
          uVar9 = uVar22 & 7;
          uVar22 = uVar22 & 0xfffffff8;
          uVar19 = uVar19 >> uVar9;
          iVar20 = 0x3f4e;
          goto LAB_00017120;
        }
        for (; uVar22 < 3; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        *(uint *)(iVar3 + 8) = uVar19 & 1;
        iVar20 = DAT_00017f74;
        uVar9 = (uVar19 & 7) >> 1;
        if (uVar9 == 2) {
          uVar5 = 0x3f44;
LAB_000179ac:
          *(undefined4 *)(iVar3 + 4) = uVar5;
        }
        else {
          if (uVar9 == 3) {
            param_1[6] = DAT_00017f78 + 0x179c8;
            uVar5 = 0x3f51;
            goto LAB_000179ac;
          }
          if (uVar9 != 1) {
            uVar5 = 0x3f41;
            goto LAB_000179ac;
          }
          *(undefined4 *)(iVar3 + 0x58) = 9;
          *(int *)(iVar3 + 0x50) = iVar20 + 0x17978;
          *(int *)(iVar3 + 0x54) = iVar20 + 0x18178;
          *(undefined4 *)(iVar3 + 0x5c) = 5;
          *(undefined4 *)(iVar3 + 4) = 0x3f47;
          if (param_2 == 6) {
            uVar19 = uVar19 >> 3;
            uVar22 = uVar22 - 3;
            goto LAB_00017540;
          }
        }
        uVar19 = uVar19 >> 3;
        uVar22 = uVar22 - 3;
        goto LAB_00016f98;
      case 0x3f3f:
        goto LAB_000178ec;
      case 0x3f40:
        goto LAB_000178fc;
      case 0x3f41:
        uVar19 = uVar19 >> (uVar22 & 7);
        for (uVar22 = uVar22 & 0xfffffff8; uVar22 < 0x20; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        if ((uVar19 & 0xffff) == (uVar19 >> 0x10 ^ 0xffff)) {
          *(uint *)(iVar3 + 0x44) = uVar19 & 0xffff;
          *(undefined4 *)(iVar3 + 4) = 0x3f42;
          uVar19 = 0;
          uVar9 = 0;
          uVar22 = uVar19;
          if (param_2 != 6) goto LAB_00017a44;
          goto LAB_00017540;
        }
        iVar20 = DAT_00017f7c + 0x17a08;
        break;
      case 0x3f42:
        uVar9 = uVar19;
LAB_00017a44:
        *(undefined4 *)(iVar3 + 4) = 0x3f43;
        uVar19 = uVar9;
        goto LAB_00017a4c;
      case 0x3f43:
LAB_00017a4c:
        uVar9 = *(uint *)(iVar3 + 0x44);
        if (uVar9 == 0) goto LAB_00017830;
        if (uVar24 < uVar9) {
          uVar9 = uVar24;
        }
        if (uVar23 <= uVar9) {
          uVar9 = uVar23;
        }
        if (uVar9 == 0) goto LAB_00017540;
        uVar23 = uVar23 - uVar9;
        uVar24 = uVar24 - uVar9;
        memcpy(local_4c,__src,uVar9);
        __src = __src + uVar9;
        local_4c = local_4c + uVar9;
        *(uint *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) - uVar9;
        goto LAB_00016f98;
      case 0x3f44:
        for (; uVar22 < 0xe; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        *(uint *)(iVar3 + 0x60) = ((uVar19 & 0x3fff) >> 10) + 4;
        uVar13 = (uVar19 & 0x1f) + 0x101;
        uVar9 = ((uVar19 & 0x3ff) >> 5) + 1;
        *(uint *)(iVar3 + 100) = uVar13;
        *(uint *)(iVar3 + 0x68) = uVar9;
        uVar22 = uVar22 - 0xe;
        bVar28 = 0x1d < uVar9;
        bVar27 = uVar9 == 0x1e;
        if (uVar9 < 0x1f) {
          bVar28 = 0x11d < uVar13;
          bVar27 = uVar13 == 0x11e;
        }
        uVar19 = uVar19 >> 0xe;
        if (!bVar28 || bVar27) {
          *(undefined4 *)(iVar3 + 0x6c) = 0;
          *(undefined4 *)(iVar3 + 4) = 0x3f45;
          goto LAB_00017b24;
        }
        iVar20 = DAT_00017f80 + 0x17b18;
        break;
      case 0x3f45:
LAB_00017b24:
        uVar9 = *(uint *)(iVar3 + 0x60);
        while (uVar13 = *(uint *)(iVar3 + 0x6c), uVar13 < uVar9) {
          for (; uVar22 < 3; uVar22 = uVar22 + 8) {
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            __src = __src + 1;
          }
          uVar22 = uVar22 - 3;
          *(uint *)(iVar3 + 0x6c) = uVar13 + 1;
          uVar2 = (ushort)uVar19;
          uVar19 = uVar19 >> 3;
          *(ushort *)(iVar3 + (uint)*(ushort *)(iVar15 + uVar13 * 2) * 2 + 0x74) = uVar2 & 7;
        }
        iVar29 = DAT_00017f84 + 0x18410;
        while (uVar9 = *(uint *)(iVar3 + 0x6c), uVar9 < 0x13) {
          *(uint *)(iVar3 + 0x6c) = uVar9 + 1;
          *(undefined2 *)(iVar3 + (*(ushort *)(iVar29 + uVar9 * 2) + 0x38) * 2 + 4) = 0;
        }
        *(int *)(iVar3 + 0x70) = iVar3 + 0x534;
        *(int *)(iVar3 + 0x50) = iVar3 + 0x534;
        *(undefined4 *)(iVar3 + 0x58) = 7;
        iVar29 = FUN_00018a6c(0,iVar3 + 0x74,0x13,iVar3 + 0x70,iVar3 + 0x58,iVar3 + 0x2f4);
        if (iVar29 == 0) {
          *(undefined4 *)(iVar3 + 0x6c) = 0;
          *(undefined4 *)(iVar3 + 4) = 0x3f46;
          goto LAB_00017c20;
        }
        iVar20 = DAT_00017f88 + 0x17bf0;
        break;
      case 0x3f46:
LAB_00017c20:
        iVar20 = *(int *)(iVar3 + 100);
        uVar9 = iVar20 + *(int *)(iVar3 + 0x68);
        while (uVar13 = *(uint *)(iVar3 + 0x6c), uVar13 < uVar9) {
          while( true ) {
            iVar21 = *(int *)(iVar3 + 0x50) +
                     (~(-1 << (*(uint *)(iVar3 + 0x58) & 0xff)) & uVar19) * 4;
            uVar7 = (uint)*(byte *)(iVar21 + 1);
            if (uVar7 <= uVar22) break;
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            uVar22 = uVar22 + 8;
            __src = __src + 1;
          }
          uVar2 = *(ushort *)(iVar21 + 2);
          if (uVar2 < 0x10) {
            uVar19 = uVar19 >> uVar7;
            uVar22 = uVar22 - uVar7;
            *(uint *)(iVar3 + 0x6c) = uVar13 + 1;
            *(ushort *)(iVar3 + uVar13 * 2 + 0x74) = uVar2;
          }
          else {
            if (uVar2 == 0x10) {
              for (; uVar22 < uVar7 + 2; uVar22 = uVar22 + 8) {
                if (uVar23 == 0) goto LAB_00017540;
                uVar23 = uVar23 - 1;
                uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
                __src = __src + 1;
              }
              uVar22 = uVar22 - uVar7;
              uVar19 = uVar19 >> uVar7;
              if (uVar13 != 0) {
                iVar21 = (uVar19 & 3) + 3;
                uVar22 = uVar22 - 2;
                uVar25 = *(undefined2 *)(iVar3 + uVar13 * 2 + 0x72);
                uVar19 = uVar19 >> 2;
                goto LAB_00017d80;
              }
              iVar21 = DAT_00017f8c + 0x17d2c;
LAB_00017d28:
              param_1[6] = iVar21;
              *(undefined4 *)(iVar3 + 4) = 0x3f51;
              break;
            }
            if (uVar2 == 0x11) {
              for (; uVar22 < uVar7 + 3; uVar22 = uVar22 + 8) {
                if (uVar23 == 0) goto LAB_00017540;
                uVar23 = uVar23 - 1;
                uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
                __src = __src + 1;
              }
              uVar26 = uVar19 >> uVar7;
              iVar10 = -3 - uVar7;
              uVar19 = uVar26 >> 3;
              iVar21 = (uVar26 & 7) + 3;
            }
            else {
              for (; uVar22 < uVar7 + 7; uVar22 = uVar22 + 8) {
                if (uVar23 == 0) goto LAB_00017540;
                uVar23 = uVar23 - 1;
                uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
                __src = __src + 1;
              }
              iVar21 = (uVar19 >> uVar7 & 0x7f) + 0xb;
              uVar19 = (uVar19 >> uVar7) >> 7;
              iVar10 = -7 - uVar7;
            }
            uVar22 = uVar22 + iVar10;
            uVar25 = 0;
LAB_00017d80:
            if (uVar9 < uVar13 + iVar21) {
              iVar21 = DAT_00017f94 + 0x17d98;
              goto LAB_00017d28;
            }
            while( true ) {
              iVar10 = *(int *)(iVar3 + 0x6c);
              iVar21 = iVar21 + -1;
              if (iVar21 == -1) break;
              *(int *)(iVar3 + 0x6c) = iVar10 + 1;
              *(undefined2 *)(iVar3 + iVar10 * 2 + 0x74) = uVar25;
            }
          }
        }
        if (*(int *)(iVar3 + 4) != 0x3f51) {
          if (*(short *)(iVar3 + 0x274) == 0) {
            iVar20 = DAT_00017f90 + 0x17d60;
          }
          else {
            *(int *)(iVar3 + 0x70) = iVar3 + 0x534;
            *(int *)(iVar3 + 0x50) = iVar3 + 0x534;
            *(undefined4 *)(iVar3 + 0x58) = 9;
            iVar29 = FUN_00018a6c(1,iVar3 + 0x74,iVar20,iVar3 + 0x70,iVar3 + 0x58,iVar3 + 0x2f4,
                                  iVar3 + 0x2f4);
            if (iVar29 == 0) {
              *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x70);
              *(undefined4 *)(iVar3 + 0x5c) = 6;
              iVar29 = FUN_00018a6c(2,iVar3 + 0x74 + *(int *)(iVar3 + 100) * 2,
                                    *(undefined4 *)(iVar3 + 0x68),iVar3 + 0x70,iVar3 + 0x5c,
                                    iVar3 + 0x2f4);
              if (iVar29 == 0) {
                *(undefined4 *)(iVar3 + 4) = 0x3f47;
                if (param_2 != 6) goto LAB_00017ed4;
                goto LAB_00017540;
              }
              iVar20 = DAT_00017f9c + 0x17ec0;
            }
            else {
              iVar20 = DAT_00017f98 + 0x17e70;
            }
          }
          param_1[6] = iVar20;
          *(undefined4 *)(iVar3 + 4) = 0x3f51;
        }
        goto LAB_00016f98;
      case 0x3f47:
LAB_00017ed4:
        *(undefined4 *)(iVar3 + 4) = 0x3f48;
        goto LAB_00017edc;
      case 0x3f48:
LAB_00017edc:
        bVar28 = 4 < uVar23;
        bVar27 = uVar23 == 5;
        if (5 < uVar23) {
          bVar28 = 0x100 < uVar24;
          bVar27 = uVar24 == 0x101;
        }
        if (bVar28 && !bVar27) {
          param_1[4] = uVar24;
          param_1[3] = local_4c;
          *param_1 = __src;
          param_1[1] = uVar23;
          *(uint *)(iVar3 + 0x3c) = uVar19;
          *(uint *)(iVar3 + 0x40) = uVar22;
          FUN_0001656c(param_1,local_48);
          local_4c = (undefined1 *)param_1[3];
          iVar20 = *(int *)(iVar3 + 4);
          iVar21 = 0x3f3f;
          bVar27 = iVar20 == 0x3f3f;
          uVar24 = param_1[4];
          if (bVar27) {
            iVar21 = iVar3 + 0x1000;
          }
          __src = (byte *)*param_1;
          if (bVar27) {
            iVar20 = -1;
          }
          uVar23 = param_1[1];
          uVar19 = *(uint *)(iVar3 + 0x3c);
          uVar22 = *(uint *)(iVar3 + 0x40);
          if (bVar27) {
            *(int *)(iVar21 + 0xbc8) = iVar20;
          }
          goto LAB_00016f98;
        }
        *(undefined4 *)(iVar3 + 0x1bc8) = 0;
        while( true ) {
          pbVar12 = (byte *)(*(int *)(iVar3 + 0x50) +
                            (~(-1 << (*(uint *)(iVar3 + 0x58) & 0xff)) & uVar19) * 4);
          uVar9 = (uint)pbVar12[1];
          if (uVar9 <= uVar22) break;
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          uVar22 = uVar22 + 8;
          __src = __src + 1;
        }
        uVar26 = (uint)*pbVar12;
        uVar7 = (uint)*(ushort *)(pbVar12 + 2);
        uVar13 = uVar9;
        if ((uVar26 != 0) && ((*pbVar12 & 0xf0) == 0)) {
          while( true ) {
            pbVar12 = (byte *)(*(int *)(iVar3 + 0x50) +
                              (uVar7 + ((~(-1 << (uVar26 + uVar9 & 0xff)) & uVar19) >> uVar9)) * 4);
            uVar13 = (uint)pbVar12[1];
            if (uVar13 + uVar9 <= uVar22) break;
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            uVar22 = uVar22 + 8;
            __src = __src + 1;
          }
          uVar26 = (uint)*pbVar12;
          uVar7 = (uint)*(ushort *)(pbVar12 + 2);
          uVar19 = uVar19 >> uVar9;
          uVar22 = uVar22 - uVar9;
          *(uint *)(iVar3 + 0x1bc8) = uVar9;
        }
        uVar22 = uVar22 - uVar13;
        iVar20 = iVar3 + 0x1000;
        uVar19 = uVar19 >> uVar13;
        *(uint *)(iVar3 + 0x1bc8) = *(int *)(iVar3 + 0x1bc8) + uVar13;
        if (uVar26 == 0) {
          iVar20 = 0x3f4d;
        }
        *(uint *)(iVar3 + 0x44) = uVar7;
        if (uVar26 == 0) goto LAB_00017120;
        if ((uVar26 & 0x20) != 0) {
          *(undefined4 *)(iVar20 + 0xbc8) = 0xffffffff;
          goto LAB_00017830;
        }
        if ((uVar26 & 0x40) != 0) {
          iVar20 = DAT_00017fa0 + 0x180bc;
          break;
        }
        *(uint *)(iVar3 + 0x4c) = uVar26 & 0xf;
        *(undefined4 *)(iVar3 + 4) = 0x3f49;
LAB_000180cc:
        uVar9 = *(uint *)(iVar3 + 0x4c);
        if (uVar9 != 0) {
          for (; uVar22 < uVar9; uVar22 = uVar22 + 8) {
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            __src = __src + 1;
          }
          uVar22 = uVar22 - uVar9;
          uVar13 = uVar19 & ~(-1 << (uVar9 & 0xff));
          uVar19 = uVar19 >> (uVar9 & 0xff);
          *(uint *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + uVar13;
          *(uint *)(iVar3 + 0x1bc8) = *(int *)(iVar3 + 0x1bc8) + uVar9;
        }
        *(undefined4 *)(iVar3 + 0x1bcc) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 4) = 0x3f4a;
LAB_000180ec:
        while( true ) {
          pbVar12 = (byte *)(*(int *)(iVar3 + 0x54) +
                            (~(-1 << (*(uint *)(iVar3 + 0x5c) & 0xff)) & uVar19) * 4);
          uVar9 = (uint)pbVar12[1];
          if (uVar9 <= uVar22) break;
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          uVar22 = uVar22 + 8;
          __src = __src + 1;
        }
        uVar26 = (uint)*pbVar12;
        uVar7 = (uint)*(ushort *)(pbVar12 + 2);
        uVar13 = uVar9;
        if ((*pbVar12 & 0xf0) == 0) {
          while( true ) {
            pbVar12 = (byte *)(*(int *)(iVar3 + 0x54) +
                              (uVar7 + ((~(-1 << (uVar26 + uVar9 & 0xff)) & uVar19) >> uVar9)) * 4);
            uVar13 = (uint)pbVar12[1];
            if (uVar13 + uVar9 <= uVar22) break;
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            uVar22 = uVar22 + 8;
            __src = __src + 1;
          }
          uVar26 = (uint)*pbVar12;
          uVar7 = (uint)*(ushort *)(pbVar12 + 2);
          uVar19 = uVar19 >> uVar9;
          uVar22 = uVar22 - uVar9;
          *(uint *)(iVar3 + 0x1bc8) = *(int *)(iVar3 + 0x1bc8) + uVar9;
        }
        uVar22 = uVar22 - uVar13;
        uVar19 = uVar19 >> uVar13;
        *(uint *)(iVar3 + 0x1bc8) = *(int *)(iVar3 + 0x1bc8) + uVar13;
        if ((uVar26 & 0x40) == 0) {
          *(uint *)(iVar3 + 0x48) = uVar7;
          *(uint *)(iVar3 + 0x4c) = uVar26 & 0xf;
          *(undefined4 *)(iVar3 + 4) = 0x3f4b;
LAB_00018230:
          uVar9 = *(uint *)(iVar3 + 0x4c);
          if (uVar9 != 0) {
            for (; uVar22 < uVar9; uVar22 = uVar22 + 8) {
              if (uVar23 == 0) goto LAB_00017540;
              uVar23 = uVar23 - 1;
              uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
              __src = __src + 1;
            }
            uVar22 = uVar22 - uVar9;
            uVar13 = uVar19 & ~(-1 << (uVar9 & 0xff));
            uVar19 = uVar19 >> (uVar9 & 0xff);
            *(uint *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + uVar13;
            *(uint *)(iVar3 + 0x1bc8) = *(int *)(iVar3 + 0x1bc8) + uVar9;
          }
          *(undefined4 *)(iVar3 + 4) = 0x3f4c;
LAB_00018278:
          if (uVar24 == 0) goto LAB_00017540;
          uVar9 = *(uint *)(iVar3 + 0x48);
          if (local_48 - uVar24 < uVar9) {
            uVar13 = (uVar9 + uVar24) - local_48;
            if ((*(uint *)(iVar3 + 0x30) < uVar13) && (*(int *)(iVar3 + 0x1bc4) != 0)) {
              iVar20 = DAT_00017fa8 + 0x182c8;
              break;
            }
            uVar7 = *(uint *)(iVar3 + 0x34);
            if (uVar7 < uVar13) {
              uVar13 = uVar13 - uVar7;
              uVar7 = uVar7 + *(int *)(iVar3 + 0x2c);
            }
            puVar16 = (undefined1 *)(*(int *)(iVar3 + 0x38) + (local_48 - (uVar9 + uVar24)) + uVar7)
            ;
            if (*(uint *)(iVar3 + 0x44) <= uVar13) {
              uVar13 = *(uint *)(iVar3 + 0x44);
            }
          }
          else {
            puVar16 = local_4c + -uVar9;
            uVar13 = *(uint *)(iVar3 + 0x44);
          }
          if (uVar24 < uVar13) {
            uVar13 = uVar24;
          }
          uVar24 = uVar24 - uVar13;
          *(uint *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) - uVar13;
          puVar8 = local_4c + -1;
          puVar18 = puVar16;
          do {
            puVar17 = puVar18 + 1;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar18;
            puVar18 = puVar17;
          } while (puVar17 != puVar16 + uVar13);
          local_4c = local_4c + uVar13;
          if (*(int *)(iVar3 + 0x44) == 0) {
            iVar20 = 0x3f48;
            goto LAB_00017120;
          }
          goto LAB_00016f98;
        }
        iVar20 = DAT_00017fa4 + 0x1821c;
        break;
      case 0x3f49:
        goto LAB_000180cc;
      case 0x3f4a:
        goto LAB_000180ec;
      case 0x3f4b:
        goto LAB_00018230;
      case 0x3f4c:
        goto LAB_00018278;
      case 0x3f4d:
        if (uVar24 == 0) goto LAB_00017540;
        uVar24 = uVar24 - 1;
        *local_4c = (char)*(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 4) = 0x3f48;
        local_4c = local_4c + 1;
        goto LAB_00016f98;
      case 0x3f4e:
        uVar9 = *(uint *)(iVar3 + 0xc);
        if (uVar9 == 0) {
LAB_000183b0:
          *(undefined4 *)(iVar3 + 4) = 0x3f4f;
          goto LAB_000183b8;
        }
        for (; uVar22 < 0x20; uVar22 = uVar22 + 8) {
          if (uVar23 == 0) goto LAB_00017540;
          uVar23 = uVar23 - 1;
          uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
          __src = __src + 1;
        }
        iVar20 = local_48 - uVar24;
        param_1[5] = param_1[5] + iVar20;
        *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + iVar20;
        if (((uint)(iVar20 != 0) & uVar9 >> 2) != 0) {
          if (*(int *)(iVar3 + 0x14) == 0) {
            uVar5 = adler32(*(undefined4 *)(iVar3 + 0x1c),local_4c + (uVar24 - local_48));
          }
          else {
            uVar5 = crc32();
          }
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          param_1[0xc] = uVar5;
        }
        local_48 = uVar24;
        if ((*(uint *)(iVar3 + 0xc) & 4) == 0) {
LAB_000184c8:
          uVar19 = 0;
          uVar22 = uVar19;
          goto LAB_000183b0;
        }
        uVar9 = uVar19;
        if (*(int *)(iVar3 + 0x14) == 0) {
          uVar9 = uVar19 * 0x1000000 + (uVar19 >> 0x18) + (uVar19 >> 8 & 0xff00) +
                  (uVar19 & 0xff00) * 0x100;
        }
        if (*(uint *)(iVar3 + 0x1c) == uVar9) goto LAB_000184c8;
        param_1[6] = DAT_00017fac + 0x184b4;
        *(undefined4 *)(iVar3 + 4) = 0x3f51;
        goto LAB_00016f98;
      case 0x3f4f:
LAB_000183b8:
        if ((*(int *)(iVar3 + 0xc) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
          for (; uVar22 < 0x20; uVar22 = uVar22 + 8) {
            if (uVar23 == 0) goto LAB_00017540;
            uVar23 = uVar23 - 1;
            uVar19 = uVar19 + ((uint)*__src << (uVar22 & 0xff));
            __src = __src + 1;
          }
          if (*(uint *)(iVar3 + 0x20) != uVar19) {
            iVar20 = DAT_00017fb0 + 0x1850c;
            break;
          }
          uVar19 = 0;
          uVar22 = uVar19;
        }
        *(undefined4 *)(iVar3 + 4) = 0x3f50;
        goto LAB_000183d8;
      case 0x3f50:
        goto switchD_00016fa8_caseD_3f50;
      case 0x3f51:
        iVar29 = -3;
        goto LAB_00017540;
      case 0x3f52:
        return -4;
      default:
        goto switchD_00016fa8_default;
      }
      param_1[6] = iVar20;
      iVar20 = 0x3f51;
LAB_00017120:
      *(int *)(iVar3 + 4) = iVar20;
      goto LAB_00016f98;
    }
  }
switchD_00016fa8_default:
  return -2;
switchD_00016fa8_caseD_3f50:
LAB_000183d8:
  iVar29 = 1;
LAB_00017540:
  param_1[4] = uVar24;
  param_1[3] = local_4c;
  iVar15 = *(int *)(iVar3 + 0x2c);
  *param_1 = __src;
  param_1[1] = uVar23;
  *(uint *)(iVar3 + 0x3c) = uVar19;
  *(uint *)(iVar3 + 0x40) = uVar22;
  if (((iVar15 != 0) ||
      (((local_48 != uVar24 && (*(uint *)(iVar3 + 4) < 0x3f51)) &&
       (*(uint *)(iVar3 + 4) < 0x3f4e || param_2 != 4)))) &&
     (iVar15 = FUN_00016acc(param_1,local_4c,local_48 - uVar24), iVar15 != 0)) {
    *(undefined4 *)(iVar3 + 4) = 0x3f52;
    return -4;
  }
  iVar20 = param_1[1];
  iVar15 = param_1[4];
  uVar19 = *(uint *)(iVar3 + 0xc);
  iVar21 = local_48 - iVar15;
  param_1[2] = param_1[2] + (uVar14 - iVar20);
  param_1[5] = param_1[5] + iVar21;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + iVar21;
  if (((uint)(iVar21 != 0) & uVar19 >> 2) != 0) {
    if (*(int *)(iVar3 + 0x14) == 0) {
      uVar5 = adler32(*(undefined4 *)(iVar3 + 0x1c),param_1[3] + (iVar15 - local_48),iVar21);
    }
    else {
      uVar5 = crc32();
    }
    *(undefined4 *)(iVar3 + 0x1c) = uVar5;
    param_1[0xc] = uVar5;
  }
  iVar15 = 0;
  if (*(int *)(iVar3 + 8) != 0) {
    iVar15 = 0x40;
  }
  iVar10 = *(int *)(iVar3 + 4);
  if (iVar10 == 0x3f3f) {
    iVar6 = 0x80;
  }
  else {
    iVar6 = 0;
  }
  iVar11 = 0;
  if (iVar10 == 0x3f42 || iVar10 == 0x3f47) {
    iVar11 = 0x100;
  }
  param_1[0xb] = *(int *)(iVar3 + 0x40) + iVar15 + iVar6 + iVar11;
  if (uVar14 - iVar20 == 0 && iVar21 == 0 || param_2 == 4) {
    if (iVar29 == 0) {
      return -5;
    }
    return iVar29;
  }
  return iVar29;
}



/* ===== inflateEnd @ 00018530 size=84 ===== */

undefined4 inflateEnd(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00016bec();
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== inflateGetDictionary @ 00018584 size=120 ===== */

undefined4 inflateGetDictionary(int param_1,undefined4 param_2,undefined4 *param_3)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00016bec();
  __dest = (void *)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0x30) != 0 && __dest != (void *)0x0) {
      memcpy(__dest,(void *)(*(int *)(iVar1 + 0x38) + *(int *)(iVar1 + 0x34)),
             *(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x34));
      memcpy((void *)((int)__dest + (*(int *)(iVar1 + 0x30) - *(size_t *)(iVar1 + 0x34))),
             *(void **)(iVar1 + 0x38),*(size_t *)(iVar1 + 0x34));
    }
    uVar2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x30);
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== inflateSetDictionary @ 000185fc size=176 ===== */

undefined4 inflateSetDictionary(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_00016bec();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    return 0xfffffffe;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar4 + 0xc) == 0) {
    if (*(int *)(iVar4 + 4) != 0x3f3e) goto LAB_00018648;
  }
  else if (*(int *)(iVar4 + 4) != 0x3f3e) {
    return 0xfffffffe;
  }
  uVar2 = adler32(0,0);
  iVar3 = adler32(uVar2,iVar1,param_3);
  if (*(int *)(iVar4 + 0x1c) != iVar3) {
    return 0xfffffffd;
  }
LAB_00018648:
  iVar1 = FUN_00016acc(param_1,iVar1 + param_3,param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar4 + 0x10) = 1;
    return 0;
  }
  *(undefined4 *)(iVar4 + 4) = 0x3f52;
  return 0xfffffffc;
}



/* ===== inflateGetHeader @ 000186ac size=56 ===== */

undefined4 inflateGetHeader(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00016bec();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (((int)uVar2 == 0) && ((*(uint *)(*(int *)(param_1 + 0x1c) + 0xc) & 2) != 0)) {
    *(int *)(*(int *)(param_1 + 0x1c) + 0x24) = iVar1;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateSync @ 000186e4 size=276 ===== */

undefined4 inflateSync(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_1c;
  
  piVar7 = param_1;
  local_1c = param_2;
  iVar1 = FUN_00016bec();
  if (iVar1 == 0) {
    iVar1 = param_1[7];
    if ((param_1[1] == 0) && (*(uint *)(iVar1 + 0x40) < 8)) {
      uVar6 = 0xfffffffb;
    }
    else {
      uVar6 = 0x3f53;
      if (*(int *)(iVar1 + 4) != 0x3f53) {
        *(undefined4 *)(iVar1 + 4) = 0x3f53;
        *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) << (*(uint *)(iVar1 + 0x40) & 7);
        iVar3 = 0;
        *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffff8;
        while (7 < *(uint *)(iVar1 + 0x40)) {
          uVar2 = *(uint *)(iVar1 + 0x3c);
          *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) - 8;
          *(char *)((int)&local_1c + iVar3) = (char)uVar2;
          iVar3 = iVar3 + 1;
          *(uint *)(iVar1 + 0x3c) = uVar2 >> 8;
        }
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        FUN_00016a68();
        uVar6 = extraout_r3;
      }
      iVar3 = FUN_00016a68(iVar1 + 0x6c,*param_1,param_1[1],uVar6,piVar7);
      iVar5 = param_1[2];
      param_1[1] = param_1[1] - iVar3;
      *param_1 = *param_1 + iVar3;
      iVar4 = *(int *)(iVar1 + 0x6c);
      param_1[2] = iVar3 + iVar5;
      if (iVar4 == 4) {
        iVar4 = param_1[5];
        inflateReset(param_1);
        param_1[2] = iVar3 + iVar5;
        param_1[5] = iVar4;
        *(undefined4 *)(iVar1 + 4) = 0x3f3f;
        uVar6 = 0;
      }
      else {
        uVar6 = 0xfffffffd;
      }
    }
  }
  else {
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}



/* ===== inflateSyncPoint @ 000187f8 size=60 ===== */

uint inflateSyncPoint(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00016bec(param_1,param_1);
  if ((int)uVar3 != 0) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)((int)((ulonglong)uVar3 >> 0x20) + 0x1c);
  uVar1 = 0;
  if (*(int *)(iVar2 + 4) == 0x3f41) {
    uVar1 = (uint)(*(int *)(iVar2 + 0x40) == 0);
  }
  return uVar1;
}



/* ===== inflateCopy @ 00018834 size=324 ===== */

undefined4 inflateCopy(undefined4 *param_1,undefined4 param_2)

{
  int *__dest;
  void *__dest_00;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *__src;
  undefined8 uVar7;
  undefined4 *puVar6;
  
  uVar7 = FUN_00016bec(param_2);
  puVar1 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  if (param_1 == (undefined4 *)0x0 || (int)uVar7 != 0) {
    return 0xfffffffe;
  }
  __src = (void *)puVar1[7];
  __dest = (int *)(*(code *)puVar1[8])(puVar1[10],1,0x1bd0);
  if (__dest != (int *)0x0) {
    __dest_00 = (void *)0x0;
    if ((*(int *)((int)__src + 0x38) == 0) ||
       (__dest_00 = (void *)(*(code *)puVar1[8])
                                      (puVar1[10],1 << (*(uint *)((int)__src + 0x28) & 0xff)),
       __dest_00 != (void *)0x0)) {
      puVar4 = param_1;
      puVar5 = puVar1;
      do {
        puVar6 = puVar5 + 1;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar6;
      } while (puVar6 != puVar1 + 0xe);
      memcpy(__dest,__src,0x1bd0);
      uVar3 = *(uint *)((int)__src + 0x50);
      uVar2 = (int)__src + 0x534;
      *__dest = (int)param_1;
      if ((uVar2 <= uVar3) && (uVar3 <= (int)__src + 0x1bc0U)) {
        __dest[0x14] = (int)__dest + (uVar3 - uVar2) + 0x534;
        __dest[0x15] = (int)__dest + (*(int *)((int)__src + 0x54) - uVar2) + 0x534;
      }
      __dest[0x1c] = (int)__dest + (*(int *)((int)__src + 0x70) - uVar2) + 0x534;
      if (__dest_00 != (void *)0x0) {
        memcpy(__dest_00,*(void **)((int)__src + 0x38),1 << (*(uint *)((int)__src + 0x28) & 0xff));
      }
      __dest[0xe] = (int)__dest_00;
      param_1[7] = __dest;
      return 0;
    }
    (*(code *)puVar1[9])(puVar1[10],__dest);
  }
  return 0xfffffffc;
}



/* ===== inflateUndermine @ 00018978 size=44 ===== */

undefined4 inflateUndermine(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00016bec(param_1,param_1);
  if ((int)uVar2 == 0) {
    uVar1 = 0xfffffffd;
    *(undefined4 *)(*(int *)((int)((ulonglong)uVar2 >> 0x20) + 0x1c) + 0x1bc4) = 1;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



/* ===== inflateValidate @ 000189a4 size=56 ===== */

undefined4 inflateValidate(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00016bec();
  if ((int)uVar2 != 0) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((int)((ulonglong)uVar2 >> 0x20) == 0) {
    uVar1 = uVar1 & 0xfffffffb;
  }
  else {
    uVar1 = uVar1 | 4;
  }
  *(uint *)(*(int *)(param_1 + 0x1c) + 0xc) = uVar1;
  return 0;
}



/* ===== inflateMark @ 000189dc size=92 ===== */

int inflateMark(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00016bec(param_1,param_1);
  if ((int)uVar4 != 0) {
    return DAT_00018a38;
  }
  iVar2 = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x1c);
  iVar3 = *(int *)(iVar2 + 4);
  iVar1 = 0;
  if (iVar3 == 0x3f43) {
    iVar1 = *(int *)(iVar2 + 0x44);
  }
  if ((iVar3 != 0x3f43) && (iVar3 == 0x3f4c)) {
    iVar1 = *(int *)(iVar2 + 0x1bcc) - *(int *)(iVar2 + 0x44);
  }
  return *(int *)(iVar2 + 0x1bc8) * 0x10000 + iVar1;
}



/* ===== inflateCodesUsed @ 00018a3c size=48 ===== */

int inflateCodesUsed(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00016bec(param_1,param_1);
  if ((int)uVar2 == 0) {
    iVar1 = *(int *)((int)((ulonglong)uVar2 >> 0x20) + 0x1c);
    iVar1 = *(int *)(iVar1 + 0x70) - (iVar1 + 0x534) >> 2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_00018a6c @ 00018a6c size=1212 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00018a6c(int param_1,ushort *param_2,int param_3,int *param_4,uint *param_5,ushort *param_6)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ushort *local_a0;
  ushort *local_94;
  ushort *local_8c;
  uint local_80;
  ushort auStack_68 [15];
  ushort auStack_4a [19];
  
  iVar9 = 0;
  puVar6 = auStack_68;
  do {
    *puVar6 = 0;
    iVar9 = iVar9 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar9 != 0x10);
  for (puVar6 = param_2; puVar6 != param_2 + param_3; puVar6 = puVar6 + 1) {
    auStack_68[*puVar6] = auStack_68[*puVar6] + 1;
  }
  uVar10 = 0xf;
  puVar6 = auStack_4a;
  while (*puVar6 == 0) {
    uVar10 = uVar10 - 1;
    puVar6 = puVar6 + -1;
    if (uVar10 == 0) {
      puVar8 = (undefined2 *)*param_4;
      *puVar8 = 0x140;
      puVar8[1] = 0;
      *param_4 = (int)(puVar8 + 4);
      puVar8[2] = 0x140;
      puVar8[3] = 0;
      *param_5 = 1;
      return 0;
    }
  }
  for (uVar7 = 1; (uVar7 != uVar10 && (auStack_68[uVar7] == 0)); uVar7 = uVar7 + 1) {
  }
  iVar9 = 1;
  iVar14 = 1;
  puVar6 = auStack_68;
  do {
    iVar9 = iVar9 * 2 - (uint)puVar6[1];
    if (iVar9 < 0) {
      return 0xffffffff;
    }
    iVar14 = iVar14 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar14 != 0x10);
  if ((iVar9 != 0) && (param_1 == 0 || uVar10 != 1)) {
    return 0xffffffff;
  }
  auStack_4a[2] = 0;
  puVar6 = auStack_4a + 2;
  uVar19 = *param_5;
  iVar9 = 2;
  do {
    uVar3 = *puVar6;
    psVar1 = (short *)((int)auStack_68 + iVar9);
    iVar9 = iVar9 + 2;
    puVar6 = puVar6 + 1;
    *puVar6 = uVar3 + *psVar1;
  } while (iVar9 != 0x1e);
  puVar6 = param_2 + -1;
  for (iVar9 = 0; iVar9 != param_3; iVar9 = iVar9 + 1) {
    puVar6 = puVar6 + 1;
    uVar18 = (uint)*puVar6;
    if (uVar18 != 0) {
      uVar3 = auStack_4a[uVar18 + 1];
      auStack_4a[uVar18 + 1] = uVar3 + 1;
      param_6[uVar3] = (ushort)iVar9;
    }
  }
  if (param_1 == 0) {
    local_a0 = param_6;
    uVar18 = 0x14;
    local_94 = param_6;
  }
  else if (param_1 == 1) {
    uVar18 = 0x101;
    local_a0 = (ushort *)(DAT_00018f2c + 0x18d18);
    local_94 = (ushort *)(DAT_00018f2c + 0x18d56);
  }
  else {
    uVar18 = 0;
    local_a0 = (ushort *)(DAT_00018f28 + 0x18bfc);
    local_94 = (ushort *)(DAT_00018f28 + 0x18c3c);
  }
  if (uVar10 <= uVar19) {
    uVar19 = uVar10;
  }
  if (uVar19 < uVar7) {
    uVar19 = uVar7;
  }
  uVar20 = 1 << (uVar19 & 0xff);
  if ((0x354 < uVar20 && param_1 == 1) || (0x250 < uVar20 && param_1 == 2)) {
    return 1;
  }
  local_8c = param_6;
  iVar14 = *param_4;
  local_80 = 0xffffffff;
  uVar4 = uVar20 - 1;
  uVar13 = 0;
  uVar15 = 0;
  iVar9 = iVar14;
  uVar21 = uVar19;
  do {
    do {
      cVar2 = (char)uVar7 - (char)uVar13;
      puVar6 = local_8c + 1;
      uVar3 = *local_8c;
      uVar5 = (uint)uVar3;
      if (uVar5 + 1 < uVar18) {
        uVar11 = 0;
      }
      else if (uVar5 < uVar18) {
        uVar3 = 0;
        uVar11 = 0x60;
      }
      else {
        uVar11 = (undefined1)local_a0[uVar5 - uVar18];
        uVar3 = local_94[uVar5 - uVar18];
      }
      iVar17 = 1 << (uVar7 - uVar13 & 0xff);
      iVar16 = 1 << (uVar21 & 0xff);
      puVar12 = (undefined1 *)(iVar9 + ((iVar16 + (uVar15 >> (uVar13 & 0xff))) - iVar17) * 4);
      do {
        *(ushort *)(puVar12 + 2) = uVar3;
        *puVar12 = uVar11;
        puVar12[1] = cVar2;
        puVar12 = puVar12 + (-4 << (uVar7 - uVar13 & 0xff));
        iVar16 = iVar16 - iVar17;
      } while (iVar16 != 0);
      for (uVar5 = 1 << (uVar7 - 1 & 0xff); (uVar15 & uVar5) != 0; uVar5 = uVar5 >> 1) {
      }
      if (uVar5 != 0) {
        uVar5 = uVar5 + (uVar15 & uVar5 - 1);
      }
      uVar3 = auStack_68[uVar7];
      auStack_68[uVar7] = uVar3 - 1;
      if ((ushort)(uVar3 - 1) == 0) {
        if (uVar7 == uVar10) {
          if (uVar5 != 0) {
            iVar17 = iVar9 + uVar5 * 4;
            *(undefined1 *)(iVar9 + uVar5 * 4) = 0x40;
            *(undefined2 *)(iVar17 + 2) = 0;
            *(char *)(iVar17 + 1) = cVar2;
          }
          *param_4 = iVar14 + uVar20 * 4;
          *param_5 = uVar19;
          return 0;
        }
        uVar7 = (uint)param_2[*puVar6];
      }
      uVar15 = uVar5;
      local_8c = puVar6;
    } while ((uVar7 <= uVar19) || (uVar5 = uVar4 & uVar5, uVar5 == local_80));
    if (uVar13 == 0) {
      uVar13 = uVar19;
    }
    iVar9 = iVar9 + (4 << (uVar21 & 0xff));
    uVar21 = uVar7 - uVar13;
    iVar17 = 1 << (uVar21 & 0xff);
    puVar6 = auStack_68 + uVar7;
    for (; uVar21 + uVar13 < uVar10; uVar21 = uVar21 + 1) {
      if ((int)(iVar17 - (uint)*puVar6) < 1) break;
      iVar17 = (iVar17 - (uint)*puVar6) * 2;
      puVar6 = puVar6 + 1;
    }
    uVar20 = uVar20 + (1 << (uVar21 & 0xff));
    if (0x354 < uVar20 && param_1 == 1) {
      return 1;
    }
    if (0x250 < uVar20 && param_1 == 2) {
      return 1;
    }
    iVar17 = iVar14 + uVar5 * 4;
    *(char *)(iVar14 + uVar5 * 4) = (char)uVar21;
    *(char *)(iVar17 + 1) = (char)uVar19;
    *(short *)(iVar17 + 2) = (short)(iVar9 - iVar14 >> 2);
    local_80 = uVar5;
  } while( true );
}



/* ===== FUN_00018f30 @ 00018f30 size=132 ===== */

void FUN_00018f30(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  do {
    *(undefined2 *)(iVar1 + 0x94) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != param_1 + 0x478);
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x988 + iVar1) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x78);
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0xa7c + iVar1) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x4c);
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}



/* ===== FUN_00018fb4 @ 00018fb4 size=240 ===== */

void FUN_00018fb4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x1450);
  iVar8 = *(int *)(param_1 + (param_3 + 0x2d6) * 4 + 4);
  while( true ) {
    iVar4 = param_3 * 2;
    iVar3 = param_3 + 0x2d6;
    if (iVar9 < iVar4) break;
    iVar6 = iVar4;
    if (iVar4 < iVar9) {
      iVar6 = param_1 + param_3 * 8;
      iVar5 = *(int *)(iVar6 + 0xb5c);
      iVar7 = *(int *)(iVar6 + 0xb60);
      uVar1 = *(ushort *)(param_2 + iVar5 * 4);
      uVar2 = *(ushort *)(param_2 + iVar7 * 4);
      iVar6 = iVar4 + 1;
      if (((uVar1 <= uVar2) && (iVar6 = iVar4, uVar2 == uVar1)) &&
         (*(byte *)(param_1 + iVar7 + 0x1458) <= *(byte *)(param_1 + iVar5 + 0x1458))) {
        iVar6 = iVar4 + 1;
      }
    }
    param_3 = iVar6;
    uVar1 = *(ushort *)(param_2 + iVar8 * 4);
    iVar4 = *(int *)(param_1 + (param_3 + 0x2d6) * 4 + 4);
    uVar2 = *(ushort *)(param_2 + iVar4 * 4);
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(param_1 + iVar8 + 0x1458) <= *(byte *)(param_1 + iVar4 + 0x1458))))) break;
    *(int *)(param_1 + iVar3 * 4 + 4) = iVar4;
  }
  *(int *)(param_1 + iVar3 * 4 + 4) = iVar8;
  return;
}



/* ===== FUN_000190a4 @ 000190a4 size=300 ===== */

void FUN_000190a4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar8 = 0xffffffff;
  *(undefined2 *)(param_2 + param_3 * 4 + 6) = 0xffff;
  iVar7 = 0;
  if (uVar1 == 0) {
    iVar6 = 3;
    iVar5 = 0x8a;
  }
  else {
    iVar6 = 4;
    iVar5 = 7;
  }
  iVar4 = 0;
  uVar2 = (uint)uVar1;
  do {
    if (param_3 < iVar4) {
      return;
    }
    iVar7 = iVar7 + 1;
    uVar3 = (uint)*(ushort *)(param_2 + 6 + iVar4 * 4);
    if (iVar7 < iVar5) {
      if (uVar2 != uVar3) {
        if (iVar6 <= iVar7) goto LAB_00019158;
        iVar6 = param_1 + uVar2 * 4;
        *(short *)(iVar6 + 0xa7c) = *(short *)(iVar6 + 0xa7c) + (short)iVar7;
        iVar7 = 0;
        if (uVar3 == 0) {
          iVar6 = 3;
          iVar5 = 0x8a;
          uVar8 = uVar2;
        }
        else {
          iVar6 = 4;
          iVar5 = 7;
          uVar8 = uVar2;
        }
      }
    }
    else {
LAB_00019158:
      if (uVar2 == 0) {
        if (iVar7 < 0xb) {
          *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
        }
        else {
          *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
        }
      }
      else {
        if (uVar8 != uVar2) {
          iVar7 = param_1 + uVar2 * 4;
          *(short *)(iVar7 + 0xa7c) = *(short *)(iVar7 + 0xa7c) + 1;
        }
        *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
      }
      if (uVar3 == 0) {
        iVar6 = 3;
        iVar5 = 0x8a;
        iVar7 = 0;
        uVar8 = uVar2;
      }
      else {
        iVar7 = 0;
        if (uVar2 == uVar3) {
          iVar6 = 3;
          iVar5 = 6;
          uVar8 = uVar2;
        }
        else {
          iVar6 = 4;
          iVar5 = 7;
          uVar8 = uVar2;
        }
      }
    }
    iVar4 = iVar4 + 1;
    uVar2 = uVar3;
  } while( true );
}



/* ===== FUN_000191d0 @ 000191d0 size=1356 ===== */

void FUN_000191d0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_40;
  
  uVar7 = 0xffffffff;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar8 = 3;
    iVar6 = 0x8a;
  }
  else {
    iVar8 = 4;
    iVar6 = 7;
  }
  puVar4 = (ushort *)(param_1 + 0x16b8);
  local_40 = 0;
  uVar9 = (uint)*(ushort *)(param_2 + 2);
  iVar10 = 0;
  do {
    if (param_3 < local_40) {
      return;
    }
    uVar5 = (uint)*(ushort *)(param_2 + local_40 * 4 + 6);
    iVar3 = iVar10 + 1;
    if (iVar3 < iVar6) {
      if (uVar9 != uVar5) {
        if (iVar8 <= iVar3) goto LAB_00019328;
        iVar8 = param_1 + uVar9 * 4;
        do {
          uVar7 = *(uint *)(param_1 + 0x16bc);
          uVar11 = (uint)*(ushort *)(iVar8 + 0xa7e);
          uVar2 = *(ushort *)(iVar8 + 0xa7c);
          iVar6 = 0x10 - uVar11;
          uVar1 = *puVar4 | uVar2 << (uVar7 & 0xff);
          if ((int)uVar7 <= iVar6) {
            uVar11 = uVar7 + uVar11;
          }
          *puVar4 = uVar1;
          if (iVar6 < (int)uVar7) {
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar1;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)(*puVar4 >> 8);
            uVar11 = (uVar11 - 0x10) + *(int *)(param_1 + 0x16bc);
            *puVar4 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          }
          *(uint *)(param_1 + 0x16bc) = uVar11;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (uVar5 == 0) {
          iVar8 = 3;
          iVar6 = 0x8a;
        }
        else {
          iVar8 = 4;
          iVar6 = 7;
        }
        iVar3 = 0;
        uVar7 = uVar9;
      }
    }
    else {
LAB_00019328:
      uVar11 = *(uint *)(param_1 + 0x16bc);
      uVar1 = *puVar4;
      if (uVar9 == 0) {
        if (10 < iVar3) {
          uVar7 = (uint)*(ushort *)(param_1 + 0xac6);
          uVar2 = *(ushort *)(param_1 + 0xac4);
          iVar8 = 0x10 - uVar7;
          uVar1 = uVar1 | uVar2 << (uVar11 & 0xff);
          if ((int)uVar11 <= iVar8) {
            uVar7 = uVar7 + uVar11;
          }
          *puVar4 = uVar1;
          if (iVar8 < (int)uVar11) {
            iVar8 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar8 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
            iVar8 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar8 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
            uVar7 = (uVar7 - 0x10) + *(int *)(param_1 + 0x16bc);
            *puVar4 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          }
          *(uint *)(param_1 + 0x16bc) = uVar7;
          uVar7 = *(uint *)(param_1 + 0x16bc);
          if ((int)uVar7 < 10) {
            iVar8 = uVar7 + 7;
            *puVar4 = *puVar4 | (ushort)((iVar10 - 10U & 0xffff) << (uVar7 & 0xff));
            goto LAB_00019614;
          }
          iVar8 = *(int *)(param_1 + 0x14);
          uVar11 = iVar10 - 10U & 0xffff;
          uVar1 = *puVar4 | (ushort)(uVar11 << (uVar7 & 0xff));
          *puVar4 = uVar1;
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
          iVar8 = *(int *)(param_1 + 0x16bc) + -9;
          *puVar4 = (ushort)((int)uVar11 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          goto LAB_000194c4;
        }
        uVar7 = (uint)*(ushort *)(param_1 + 0xac2);
        uVar2 = *(ushort *)(param_1 + 0xac0);
        iVar8 = 0x10 - uVar7;
        uVar1 = uVar1 | uVar2 << (uVar11 & 0xff);
        if ((int)uVar11 <= iVar8) {
          uVar7 = uVar7 + uVar11;
        }
        *puVar4 = uVar1;
        if (iVar8 < (int)uVar11) {
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
          uVar7 = (uVar7 - 0x10) + *(int *)(param_1 + 0x16bc);
          *puVar4 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        }
        *(uint *)(param_1 + 0x16bc) = uVar7;
        uVar7 = *(uint *)(param_1 + 0x16bc);
        if (0xd < (int)uVar7) {
          iVar8 = *(int *)(param_1 + 0x14);
          uVar11 = iVar10 - 2U & 0xffff;
          uVar1 = *puVar4 | (ushort)(uVar11 << (uVar7 & 0xff));
          *puVar4 = uVar1;
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
          iVar8 = *(int *)(param_1 + 0x16bc) + -0xd;
          *puVar4 = (ushort)((int)uVar11 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          goto LAB_000194c4;
        }
        iVar8 = uVar7 + 3;
        *puVar4 = *puVar4 | (ushort)((iVar10 - 2U & 0xffff) << (uVar7 & 0xff));
LAB_00019614:
        *(int *)(param_1 + 0x16bc) = iVar8;
      }
      else {
        if (uVar7 != uVar9) {
          iVar8 = param_1 + uVar9 * 4;
          uVar7 = (uint)*(ushort *)(iVar8 + 0xa7e);
          uVar2 = *(ushort *)(iVar8 + 0xa7c);
          iVar8 = 0x10 - uVar7;
          uVar1 = uVar1 | uVar2 << (uVar11 & 0xff);
          if ((int)uVar11 <= iVar8) {
            uVar7 = uVar7 + uVar11;
          }
          *puVar4 = uVar1;
          iVar3 = iVar10;
          if (iVar8 < (int)uVar11) {
            iVar8 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar8 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
            iVar8 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar8 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
            *puVar4 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
            *(uint *)(param_1 + 0x16bc) = (uVar7 - 0x10) + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(uint *)(param_1 + 0x16bc) = uVar7;
          }
        }
        uVar11 = *(uint *)(param_1 + 0x16bc);
        uVar2 = *(ushort *)(param_1 + 0xabc);
        uVar7 = (uint)*(ushort *)(param_1 + 0xabe);
        iVar8 = 0x10 - uVar7;
        uVar1 = *puVar4 | uVar2 << (uVar11 & 0xff);
        if ((int)uVar11 <= iVar8) {
          uVar7 = uVar11 + uVar7;
        }
        *puVar4 = uVar1;
        if (iVar8 < (int)uVar11) {
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
          *puVar4 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          *(uint *)(param_1 + 0x16bc) = (uVar7 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(uint *)(param_1 + 0x16bc) = uVar7;
        }
        uVar7 = *(uint *)(param_1 + 0x16bc);
        uVar11 = iVar3 - 3U & 0xffff;
        if ((int)uVar7 < 0xf) {
          iVar8 = uVar7 + 2;
          *puVar4 = *puVar4 | (ushort)(uVar11 << (uVar7 & 0xff));
        }
        else {
          uVar1 = *puVar4 | (ushort)(uVar11 << (uVar7 & 0xff));
          iVar8 = *(int *)(param_1 + 0x14);
          *puVar4 = uVar1;
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar1;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)(*puVar4 >> 8);
          iVar8 = *(int *)(param_1 + 0x16bc) + -0xe;
          *puVar4 = (ushort)((int)uVar11 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        }
LAB_000194c4:
        *(int *)(param_1 + 0x16bc) = iVar8;
      }
      if (uVar5 == 0) {
        iVar8 = 3;
        iVar6 = 0x8a;
        iVar3 = 0;
        uVar7 = uVar9;
      }
      else {
        iVar3 = 0;
        if (uVar9 == uVar5) {
          iVar8 = 3;
          iVar6 = 6;
          uVar7 = uVar9;
        }
        else {
          iVar8 = 4;
          iVar6 = 7;
          uVar7 = uVar9;
        }
      }
    }
    local_40 = local_40 + 1;
    uVar9 = uVar5;
    iVar10 = iVar3;
  } while( true );
}



/* ===== FUN_0001971c @ 0001971c size=1044 ===== */

void FUN_0001971c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  iVar4 = DAT_00019b40;
  iVar6 = DAT_00019b3c;
  if (*(int *)(param_1 + 0x16a0) != 0) {
    puVar14 = (ushort *)(param_1 + 0x16b8);
    iVar15 = DAT_00019b30 + 0x1978c;
    iVar16 = DAT_00019b34 + 0x19798;
    iVar17 = DAT_00019b38 + 0x197a4;
    uVar5 = 0;
    do {
      uVar8 = *(uint *)(param_1 + 0x16bc);
      uVar18 = (uint)*(ushort *)(*(int *)(param_1 + 0x16a4) + uVar5 * 2);
      uVar13 = uVar5 + 1;
      uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + uVar5);
      if (uVar18 == 0) {
        uVar18 = (uint)*(ushort *)(param_2 + uVar5 * 4 + 2);
        uVar3 = *(ushort *)(param_2 + uVar5 * 4);
        iVar9 = 0x10 - uVar18;
        uVar1 = *puVar14 | uVar3 << (uVar8 & 0xff);
        if ((int)uVar8 <= iVar9) {
          uVar18 = uVar18 + uVar8;
        }
        *puVar14 = uVar1;
        if (iVar9 < (int)uVar8) {
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar1;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)(*puVar14 >> 8);
          iVar9 = (uVar18 - 0x10) + *(int *)(param_1 + 0x16bc);
          *puVar14 = (ushort)((int)(uint)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
LAB_00019864:
          *(int *)(param_1 + 0x16bc) = iVar9;
        }
        else {
          *(uint *)(param_1 + 0x16bc) = uVar18;
        }
      }
      else {
        uVar10 = (uint)*(byte *)(iVar15 + uVar5);
        iVar9 = (uVar10 + 0x101) * 4;
        uVar3 = *(ushort *)(param_2 + iVar9);
        uVar7 = (uint)*(ushort *)(param_2 + iVar9 + 2);
        uVar1 = *puVar14 | uVar3 << (uVar8 & 0xff);
        *puVar14 = uVar1;
        if ((int)(0x10 - uVar7) < (int)uVar8) {
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar1;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)(*puVar14 >> 8);
          iVar9 = (uVar7 - 0x10) + *(int *)(param_1 + 0x16bc);
          *puVar14 = (ushort)((int)(uint)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        }
        else {
          iVar9 = uVar7 + uVar8;
        }
        *(int *)(param_1 + 0x16bc) = iVar9;
        iVar11 = iVar16 + uVar10 * 4;
        iVar9 = *(int *)(iVar11 + 0x100);
        if (iVar9 != 0) {
          iVar12 = 0x10 - iVar9;
          uVar8 = *(uint *)(param_1 + 0x16bc);
          uVar5 = uVar5 - *(int *)(iVar11 + 0x174) & 0xffff;
          uVar1 = *puVar14 | (ushort)(uVar5 << (uVar8 & 0xff));
          if ((int)uVar8 <= iVar12) {
            iVar9 = iVar9 + uVar8;
          }
          *puVar14 = uVar1;
          if (iVar12 < (int)uVar8) {
            iVar11 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar11 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar11) = (char)uVar1;
            iVar11 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar11 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar11) = (char)(*puVar14 >> 8);
            iVar9 = iVar9 + -0x10 + *(int *)(param_1 + 0x16bc);
            *puVar14 = (ushort)((int)uVar5 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          }
          *(int *)(param_1 + 0x16bc) = iVar9;
        }
        uVar5 = *(uint *)(param_1 + 0x16bc);
        uVar18 = uVar18 - 1;
        if (uVar18 < 0x100) {
          bVar2 = *(byte *)(iVar4 + uVar18 + 0x199a4);
        }
        else {
          bVar2 = *(byte *)(iVar6 + (uVar18 >> 7) + 0x19a98);
        }
        iVar9 = (uint)bVar2 * 4;
        uVar3 = *(ushort *)(param_3 + iVar9);
        uVar8 = (uint)*(ushort *)(param_3 + iVar9 + 2);
        uVar1 = *puVar14 | uVar3 << (uVar5 & 0xff);
        *puVar14 = uVar1;
        if ((int)(0x10 - uVar8) < (int)uVar5) {
          iVar11 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar11 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar11) = (char)uVar1;
          iVar11 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar11 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar11) = (char)(*puVar14 >> 8);
          iVar11 = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
          *puVar14 = (ushort)((int)(uint)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        }
        else {
          iVar11 = uVar5 + uVar8;
        }
        *(int *)(param_1 + 0x16bc) = iVar11;
        iVar9 = iVar17 + iVar9;
        iVar11 = *(int *)(iVar9 + 1000);
        if (iVar11 != 0) {
          iVar12 = 0x10 - iVar11;
          uVar5 = *(uint *)(param_1 + 0x16bc);
          uVar8 = uVar18 - *(int *)(iVar9 + 0x460) & 0xffff;
          uVar1 = *puVar14 | (ushort)(uVar8 << (uVar5 & 0xff));
          if ((int)uVar5 <= iVar12) {
            iVar11 = iVar11 + uVar5;
          }
          *puVar14 = uVar1;
          if (iVar12 < (int)uVar5) {
            iVar9 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar1;
            iVar9 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)(*puVar14 >> 8);
            iVar9 = iVar11 + -0x10 + *(int *)(param_1 + 0x16bc);
            *puVar14 = (ushort)((int)uVar8 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
            goto LAB_00019864;
          }
          *(int *)(param_1 + 0x16bc) = iVar11;
        }
      }
      uVar5 = uVar13;
    } while (uVar13 < *(uint *)(param_1 + 0x16a0));
  }
  uVar5 = (uint)*(ushort *)(param_2 + 0x402);
  uVar13 = *(uint *)(param_1 + 0x16bc);
  uVar3 = *(ushort *)(param_2 + 0x400);
  uVar1 = *(ushort *)(param_1 + 0x16b8) | uVar3 << (uVar13 & 0xff);
  if ((int)(0x10 - uVar5) < (int)uVar13) {
    iVar6 = *(int *)(param_1 + 0x14);
    *(ushort *)(param_1 + 0x16b8) = uVar1;
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar1;
    iVar6 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar6) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar6 = (uVar5 - 0x10) + *(int *)(param_1 + 0x16bc);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar1;
    iVar6 = uVar13 + uVar5;
  }
  *(int *)(param_1 + 0x16bc) = iVar6;
  return;
}



/* ===== FUN_00019b44 @ 00019b44 size=1204 ===== */

void FUN_00019b44(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined2 *puVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  undefined2 *puVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  short *psVar19;
  uint uVar20;
  short *psVar21;
  undefined2 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined2 *puVar26;
  int iVar27;
  int local_60;
  int local_5c;
  ushort auStack_48 [18];
  
  puVar22 = (undefined2 *)*param_2;
  iVar23 = ((int *)param_2[2])[3];
  iVar9 = *(int *)param_2[2];
  *(undefined4 *)(param_1 + 0x1454) = 0x23d;
  *(undefined4 *)(param_1 + 0x1450) = 0;
  puVar5 = puVar22 + 1;
  local_60 = -1;
  for (iVar14 = 0; iVar14 < iVar23; iVar14 = iVar14 + 1) {
    if (puVar5[-1] == 0) {
      *puVar5 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x1450);
      *(int *)(param_1 + 0x1450) = iVar15 + 1;
      *(int *)(param_1 + (iVar15 + 0x2d7) * 4 + 4) = iVar14;
      *(undefined1 *)(param_1 + 0x1458 + iVar14) = 0;
      local_60 = iVar14;
    }
    puVar5 = puVar5 + 2;
  }
  while (local_5c = *(int *)(param_1 + 0x1450), local_5c < 2) {
    *(int *)(param_1 + 0x1450) = local_5c + 1;
    if (local_60 < 2) {
      iVar14 = local_60 + 1;
      local_60 = iVar14;
    }
    else {
      iVar14 = 0;
    }
    *(int *)(param_1 + (local_5c + 0x2d7) * 4 + 4) = iVar14;
    puVar22[iVar14 * 2] = 1;
    *(undefined1 *)(param_1 + iVar14 + 0x1458) = 0;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + -1;
    if (iVar9 != 0) {
      *(uint *)(param_1 + 0x16ac) =
           *(int *)(param_1 + 0x16ac) - (uint)*(ushort *)(iVar9 + iVar14 * 4 + 2);
    }
  }
  local_5c = local_5c >> 1;
  param_2[1] = local_60;
  do {
    FUN_00018fb4(param_1,puVar22,local_5c);
    local_5c = local_5c + -1;
  } while (local_5c != 0);
  do {
    iVar9 = *(int *)(param_1 + 0x1450);
    iVar24 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1450) = iVar9 + -1;
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + iVar9 * 4 + 0xb5c);
    FUN_00018fb4(param_1,puVar22,1);
    iVar14 = *(int *)(param_1 + 0x1454);
    iVar15 = *(int *)(param_1 + 0xb60);
    iVar9 = param_1 + iVar14 * 4;
    *(int *)(iVar9 + 0xb58) = iVar24;
    *(int *)(param_1 + 0x1454) = iVar14 + -2;
    *(int *)(iVar9 + 0xb54) = iVar15;
    puVar22[iVar23 * 2] = puVar22[iVar24 * 2] + puVar22[iVar15 * 2];
    bVar2 = *(byte *)(param_1 + iVar24 + 0x1458);
    bVar3 = *(byte *)(param_1 + iVar15 + 0x1458);
    if (bVar2 < bVar3) {
      bVar2 = bVar3;
    }
    *(byte *)(param_1 + 0x1458 + iVar23) = bVar2 + 1;
    puVar22[iVar15 * 2 + 1] = (short)iVar23;
    puVar22[iVar24 * 2 + 1] = (short)iVar23;
    *(int *)(param_1 + 0xb60) = iVar23;
    FUN_00018fb4(param_1,puVar22,1);
    iVar23 = iVar23 + 1;
  } while (1 < *(int *)(param_1 + 0x1450));
  iVar9 = *(int *)(param_1 + 0x1454);
  iVar23 = *(int *)(param_1 + 0xb60);
  puVar26 = (undefined2 *)(param_1 + 0xb5c);
  iVar27 = *param_2;
  *(int *)(param_1 + 0x1454) = iVar9 + -1;
  *(int *)(param_1 + (iVar9 + -1) * 4 + 0xb5c) = iVar23;
  iVar16 = param_2[1];
  piVar17 = (int *)param_2[2];
  iVar14 = *piVar17;
  iVar15 = piVar17[1];
  iVar24 = piVar17[2];
  uVar18 = piVar17[4];
  puVar5 = (undefined2 *)(param_1 + 0xb3c);
  do {
    puVar12 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar12;
  } while (puVar26 != puVar12);
  *(undefined2 *)(iVar27 + iVar23 * 4 + 2) = 0;
  iVar23 = 0;
  for (; iVar9 < 0x23d; iVar9 = iVar9 + 1) {
    iVar6 = *(int *)(puVar26 + iVar9 * 2);
    iVar1 = iVar6 * 4;
    uVar8 = *(ushort *)(iVar27 + (uint)*(ushort *)(iVar27 + iVar1 + 2) * 4 + 2) + 1;
    if ((int)uVar18 < (int)uVar8) {
      iVar23 = iVar23 + 1;
      uVar8 = uVar18;
    }
    *(short *)(iVar27 + iVar1 + 2) = (short)uVar8;
    if (iVar6 <= iVar16) {
      iVar25 = param_1 + uVar8 * 2;
      *(short *)(iVar25 + 0xb3c) = *(short *)(iVar25 + 0xb3c) + 1;
      if (iVar6 < iVar24) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar15 + (iVar6 - iVar24) * 4);
      }
      uVar11 = *(ushort *)(iVar27 + iVar1);
      *(uint *)(param_1 + 0x16a8) = (uint)uVar11 * (uVar8 + iVar6) + *(int *)(param_1 + 0x16a8);
      if (iVar14 != 0) {
        *(uint *)(param_1 + 0x16ac) =
             (uint)uVar11 * ((uint)*(ushort *)(iVar14 + iVar1 + 2) + iVar6) +
             *(int *)(param_1 + 0x16ac);
      }
    }
  }
  if (iVar23 != 0) {
    iVar14 = (uVar18 + 0x59d) * 2;
    psVar21 = (short *)(param_1 + uVar18 * 2 + 0xb3c);
    psVar7 = (short *)(param_1 + iVar14);
    psVar19 = psVar7;
    uVar8 = uVar18;
    do {
      do {
        uVar8 = uVar8 - 1;
        sVar4 = *psVar19;
        psVar19 = psVar19 + -1;
      } while (sVar4 == 0);
      iVar15 = param_1 + uVar8 * 2;
      iVar23 = iVar23 + -2;
      *(short *)(iVar15 + 0xb3c) = sVar4 + -1;
      *(short *)(iVar15 + 0xb3e) = *(short *)(iVar15 + 0xb3e) + 2;
      *psVar21 = *psVar21 + -1;
      psVar19 = psVar7;
      uVar8 = uVar18;
    } while (0 < iVar23);
    puVar13 = (ushort *)(param_1 + iVar14 + 2);
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      uVar8 = (uint)*puVar13;
      while (uVar8 != 0) {
        iVar9 = iVar9 + -1;
        if (*(int *)(puVar26 + iVar9 * 2) <= iVar16) {
          iVar23 = *(int *)(puVar26 + iVar9 * 2) * 4;
          iVar14 = iVar27 + iVar23;
          uVar20 = (uint)*(ushort *)(iVar14 + 2);
          if (uVar20 != uVar18) {
            *(uint *)(param_1 + 0x16a8) =
                 (uint)*(ushort *)(iVar27 + iVar23) * (uVar18 - uVar20) + *(int *)(param_1 + 0x16a8)
            ;
            *(short *)(iVar14 + 2) = (short)uVar18;
          }
          uVar8 = uVar8 - 1;
        }
      }
      puVar13 = puVar13 + -1;
    }
  }
  psVar19 = (short *)(param_1 + 0xb3a);
  puVar13 = auStack_48;
  uVar11 = 0;
  do {
    puVar13 = puVar13 + 1;
    psVar19 = psVar19 + 1;
    uVar11 = (*psVar19 + uVar11) * 2;
    *puVar13 = uVar11;
    local_5c = 0;
  } while ((short *)(param_1 + 0xb58) != psVar19);
  for (; local_5c <= local_60; local_5c = local_5c + 1) {
    uVar18 = (uint)(ushort)puVar22[1];
    if (uVar18 != 0) {
      uVar20 = (uint)auStack_48[uVar18];
      auStack_48[uVar18] = auStack_48[uVar18] + 1;
      uVar8 = 0;
      do {
        uVar18 = uVar18 - 1;
        uVar10 = uVar20 & 1 | uVar8;
        uVar20 = uVar20 >> 1;
        uVar8 = uVar10 << 1;
      } while (uVar18 != 0);
      *puVar22 = (short)uVar10;
    }
    puVar22 = puVar22 + 2;
  }
  return;
}



/* ===== FUN_00019ff8 @ 00019ff8 size=132 ===== */

void FUN_00019ff8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) < 9) {
    if (0 < *(int *)(param_1 + 0x16bc)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar1 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
  }
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  return;
}



/* ===== FUN_0001a07c @ 0001a07c size=156 ===== */

void FUN_0001a07c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x16bc) < 8) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
  *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
  return;
}



/* ===== FUN_0001a118 @ 0001a118 size=84 ===== */

void FUN_0001a118(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  iVar1 = DAT_0001a16c;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(int *)(param_1 + 0xb20) = iVar1 + 0x1a13c;
  *(int *)(param_1 + 0xb2c) = iVar1 + 0x1a150;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(int *)(param_1 + 0xb38) = iVar1 + 0x1a164;
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  FUN_00018f30();
  return;
}



/* ===== FUN_0001a170 @ 0001a170 size=288 ===== */

void FUN_0001a170(int param_1,void *param_2,size_t param_3,uint param_4)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x16bc);
  uVar1 = *(ushort *)(param_1 + 0x16b8) | (ushort)((param_4 & 0xffff) << (uVar3 & 0xff));
  uVar4 = uVar3;
  if ((int)uVar3 < 0xe) {
    uVar4 = uVar3 + 3;
  }
  *(ushort *)(param_1 + 0x16b8) = uVar1;
  if (0xd < (int)uVar3) {
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) = (char)uVar1;
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    uVar4 = *(int *)(param_1 + 0x16bc) - 0xd;
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(param_4 & 0xffff) >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
  }
  *(uint *)(param_1 + 0x16bc) = uVar4;
  FUN_00019ff8(param_1);
  iVar5 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar5) = (byte)param_3;
  bVar2 = (byte)(param_3 >> 8);
  iVar5 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar5) = bVar2;
  iVar5 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar5) = ~(byte)param_3;
  iVar5 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar5) = ~bVar2;
  memcpy((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)),param_2,param_3);
  *(size_t *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  return;
}



/* ===== thunk_FUN_0001a07c @ 0001a290 size=4 ===== */

void thunk_FUN_0001a07c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x16bc) < 8) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
  *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
  return;
}



/* ===== FUN_0001a294 @ 0001a294 size=228 ===== */

void FUN_0001a294(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x16bc);
  uVar1 = *(ushort *)(param_1 + 0x16b8) | (ushort)(2 << (uVar2 & 0xff));
  uVar3 = uVar2;
  if ((int)uVar2 < 0xe) {
    uVar3 = uVar2 + 3;
  }
  *(ushort *)(param_1 + 0x16b8) = uVar1;
  if ((int)uVar2 < 0xe) {
    *(uint *)(param_1 + 0x16bc) = uVar3;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)uVar1;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) = (short)(2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
  }
  if (*(int *)(param_1 + 0x16bc) < 10) {
    iVar4 = *(int *)(param_1 + 0x16bc) + 7;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    iVar4 = *(int *)(param_1 + 0x16bc) + -9;
  }
  *(int *)(param_1 + 0x16bc) = iVar4;
  FUN_0001a07c();
  return;
}



/* ===== FUN_0001a378 @ 0001a378 size=1372 ===== */

void FUN_0001a378(int *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_1[0x21] < 1) {
    uVar9 = param_3 + 5;
    iVar6 = 0;
    uVar11 = uVar9;
  }
  else {
    iVar6 = *(int *)(*param_1 + 0x2c);
    uVar9 = param_3;
    if (iVar6 == 2) {
      uVar9 = DAT_0001a8d4;
      piVar7 = param_1;
      do {
        if (((uVar9 & 1) != 0) && ((short)piVar7[0x25] != 0)) {
          iVar6 = 0;
          goto LAB_0001a424;
        }
        uVar9 = uVar9 >> 1;
        piVar7 = piVar7 + 1;
      } while (param_1 + 0x20 != piVar7);
      if ((((short)param_1[0x2e] == 0) && ((short)param_1[0x2f] == 0)) &&
         (uVar9 = (uint)*(ushort *)(param_1 + 0x32), uVar9 == 0)) {
        do {
          if (*(short *)((int)param_1 + uVar9 + 0x114) != 0) goto LAB_0001a540;
          uVar9 = uVar9 + 4;
          iVar6 = 0;
        } while (uVar9 != 0x380);
      }
      else {
LAB_0001a540:
        iVar6 = 1;
      }
LAB_0001a424:
      *(int *)(*param_1 + 0x2c) = iVar6;
    }
    FUN_00019b44(param_1,param_1 + 0x2c6,uVar9,iVar6,param_1,param_2,param_3);
    FUN_00019b44(param_1,param_1 + 0x2c9);
    uVar4 = FUN_000190a4(param_1,param_1 + 0x25,param_1[0x2c7]);
    uVar4 = FUN_000190a4(uVar4,param_1 + 0x262,param_1[0x2ca]);
    FUN_00019b44(uVar4,param_1 + 0x2cc);
    iVar6 = 0x12;
    do {
      if (*(short *)((int)param_1 + ((byte)(&UNK_0001a95c)[iVar6 + DAT_0001a8d8] + 0x29e) * 4 + 6)
          != 0) break;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 2);
    iVar10 = (iVar6 + 1) * 3 + param_1[0x5aa] + 0xe;
    param_1[0x5aa] = iVar10;
    uVar9 = param_1[0x5ab] + 10U >> 3;
    uVar11 = iVar10 + 10U >> 3;
    if (uVar9 <= uVar11) {
      uVar11 = uVar9;
    }
  }
  if (param_2 == 0 || uVar11 < param_3 + 4) {
    uVar14 = param_1[0x5af];
    uVar2 = *(ushort *)(param_1 + 0x5ae);
    if (uVar11 == uVar9 || param_1[0x22] == 4) {
      uVar11 = param_4 + 2U & 0xffff;
      uVar9 = (int)(short)uVar2 | uVar11 << (uVar14 & 0xff);
      uVar3 = (undefined2)uVar9;
      if ((int)uVar14 < 0xe) {
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        param_1[0x5af] = uVar14 + 3;
      }
      else {
        iVar6 = param_1[5];
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        param_1[5] = iVar6 + 1;
        *(char *)(param_1[2] + iVar6) = (char)uVar9;
        iVar6 = param_1[5];
        param_1[5] = iVar6 + 1;
        *(char *)(param_1[2] + iVar6) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar11 >> (0x10U - param_1[0x5af] & 0xff));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      piVar12 = (int *)(DAT_0001a8dc + 0x1aad0);
      piVar7 = (int *)(DAT_0001a8dc + 0x1ab48);
    }
    else {
      uVar9 = param_4 + 4U & 0xffff;
      if ((int)uVar14 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = uVar2 | (ushort)(uVar9 << (uVar14 & 0xff));
        param_1[0x5af] = uVar14 + 3;
      }
      else {
        uVar2 = uVar2 | (ushort)(uVar9 << (uVar14 & 0xff));
        iVar10 = param_1[5];
        *(ushort *)(param_1 + 0x5ae) = uVar2;
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)uVar2;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar9 >> (0x10U - param_1[0x5af] & 0xff));
        param_1[0x5af] = param_1[0x5af] + -0xd;
      }
      uVar14 = param_1[0x5af];
      uVar11 = param_1[0x2ca];
      uVar15 = param_1[0x2c7] - 0x100U & 0xffff;
      uVar9 = (int)(short)param_1[0x5ae] | uVar15 << (uVar14 & 0xff);
      uVar3 = (undefined2)uVar9;
      if ((int)uVar14 < 0xc) {
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        iVar10 = uVar14 + 5;
      }
      else {
        iVar10 = param_1[5];
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)uVar9;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar10 = param_1[0x5af] + -0xb;
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar15 >> (0x10U - param_1[0x5af] & 0xff));
      }
      param_1[0x5af] = iVar10;
      uVar15 = param_1[0x5af];
      uVar14 = uVar11 & 0xffff;
      uVar9 = (int)(short)param_1[0x5ae] | uVar14 << (uVar15 & 0xff);
      uVar3 = (undefined2)uVar9;
      if ((int)uVar15 < 0xc) {
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        iVar10 = uVar15 + 5;
      }
      else {
        iVar10 = param_1[5];
        *(undefined2 *)(param_1 + 0x5ae) = uVar3;
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)uVar9;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar10 = param_1[0x5af] + -0xb;
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar14 >> (0x10U - param_1[0x5af] & 0xff));
      }
      param_1[0x5af] = iVar10;
      uVar14 = param_1[0x5af];
      uVar9 = iVar6 - 3U & 0xffff;
      if ((int)uVar14 < 0xd) {
        iVar10 = uVar14 + 4;
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (ushort)(uVar9 << (uVar14 & 0xff));
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x5ae) | (ushort)(uVar9 << (uVar14 & 0xff));
        iVar10 = param_1[5];
        *(ushort *)(param_1 + 0x5ae) = uVar2;
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)uVar2;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar10 = param_1[0x5af] + -0xc;
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar9 >> (0x10U - param_1[0x5af] & 0xff));
      }
      param_1[0x5af] = iVar10;
      iVar10 = 0;
      puVar8 = (ushort *)(param_1 + 0x5ae);
      pbVar5 = (byte *)(DAT_0001a8e0 + 0x1accc);
      do {
        uVar14 = param_1[0x5af];
        uVar1 = *(ushort *)((int)param_1 + (*pbVar5 + 0x29e) * 4 + 6);
        uVar2 = *puVar8 | uVar1 << (uVar14 & 0xff);
        uVar9 = uVar14;
        if ((int)uVar14 < 0xe) {
          uVar9 = uVar14 + 3;
        }
        *puVar8 = uVar2;
        if ((int)uVar14 < 0xe) {
          param_1[0x5af] = uVar9;
        }
        else {
          iVar13 = param_1[5];
          param_1[5] = iVar13 + 1;
          *(char *)(param_1[2] + iVar13) = (char)uVar2;
          iVar13 = param_1[5];
          param_1[5] = iVar13 + 1;
          *(char *)(param_1[2] + iVar13) = (char)(*puVar8 >> 8);
          *puVar8 = (ushort)((int)(uint)uVar1 >> (0x10U - param_1[0x5af] & 0xff));
          param_1[0x5af] = param_1[0x5af] + -0xd;
        }
        iVar10 = iVar10 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar10 != iVar6 + 1);
      piVar7 = param_1 + 0x25;
      piVar12 = param_1 + 0x262;
      uVar4 = FUN_000191d0(param_1,piVar7);
      FUN_000191d0(uVar4,piVar12,uVar11);
    }
    FUN_0001971c(param_1,piVar7,piVar12);
  }
  else {
    FUN_0001a170(param_1,param_2,param_3,param_4);
  }
  FUN_00018f30(param_1);
  if (param_4 != 0) {
    FUN_00019ff8(param_1);
    return;
  }
  return;
}



/* ===== zlibVersion @ 0001a9a0 size=12 ===== */

int zlibVersion(void)

{
  return (int)&DAT_0001a9ac + DAT_0001a9ac;
}



/* ===== zlibCompileFlags @ 0001a9b0 size=8 ===== */

undefined4 zlibCompileFlags(void)

{
  return 0x95;
}



/* ===== zError @ 0001a9b8 size=28 ===== */

undefined4 zError(int param_1)

{
  return *(undefined4 *)(*(int *)(DAT_0001a9d4 + 0x1a9cc + DAT_0001a9d8) + (2 - param_1) * 4);
}



/* ===== FUN_0001a9dc @ 0001a9dc size=8 ===== */

void FUN_0001a9dc(undefined4 param_1,int param_2,int param_3)

{
  malloc(param_3 * param_2);
  return;
}



/* ===== FUN_0001a9e4 @ 0001a9e4 size=8 ===== */

void FUN_0001a9e4(undefined4 param_1,void *param_2)

{
  free(param_2);
  return;
}



/* ===== compress2 @ 0001a9ec size=204 ===== */

int compress2(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar4 = *param_2;
  iVar3 = DAT_0001aab8 + 0x1aa0c;
  *param_2 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar3 = deflateInit_(&local_58,param_5,iVar3,0x38);
  if (iVar3 == 0) {
    local_54 = 0;
    local_48 = 0;
    local_58 = param_3;
    local_4c = param_1;
    do {
      iVar5 = iVar4;
      if (local_48 == 0) {
        iVar5 = local_48;
        local_48 = iVar4;
      }
      if (local_54 == 0) {
        uVar2 = 4;
        param_4 = local_54;
        local_54 = param_4;
      }
      else if (param_4 == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
      iVar1 = deflate(&local_58,uVar2);
      iVar4 = iVar5;
    } while (iVar1 == 0);
    *param_2 = local_44;
    deflateEnd(&local_58);
    if (iVar1 != 1) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}



/* ===== compress @ 0001aabc size=24 ===== */

void compress(void)

{
  compress2();
  return;
}



/* ===== compressBound @ 0001aad4 size=20 ===== */

int compressBound(uint param_1)

{
  return param_1 + 0xd + (param_1 >> 0xc) + (param_1 >> 0xe) + (param_1 >> 0x19);
}



/* ===== uncompress2 @ 0001aae8 size=292 ===== */

int uncompress2(undefined1 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *unaff_r9;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  int local_5c;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar3 = *param_2;
  iVar5 = *param_4;
  local_40 = 0;
  bVar7 = iVar3 != 0;
  if (bVar7) {
    *param_2 = 0;
  }
  local_3c = 0;
  if (bVar7) {
    unaff_r9 = param_1;
  }
  local_5c = 0;
  local_38 = 0;
  if (!bVar7) {
    iVar3 = 1;
    unaff_r9 = auStack_64;
  }
  local_60 = param_3;
  iVar1 = inflateInit_(&local_60,DAT_0001ac0c + 0x1ab2c,0x38);
  if (iVar1 == 0) {
    local_50 = 0;
    local_54 = unaff_r9;
    do {
      iVar4 = iVar3;
      if (local_50 == 0) {
        iVar4 = local_50;
        local_50 = iVar3;
      }
      iVar6 = iVar5;
      if (local_5c == 0) {
        iVar6 = local_5c;
        local_5c = iVar5;
      }
      iVar2 = inflate(&local_60,0);
      iVar3 = iVar4;
      iVar5 = iVar6;
    } while (iVar2 == 0);
    *param_4 = (*param_4 - local_5c) - iVar6;
    if (unaff_r9 == auStack_64) {
      if (local_4c != 0 && iVar2 == -5) {
        iVar4 = 1;
      }
    }
    else {
      *param_2 = local_4c;
    }
    inflateEnd(&local_60);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        iVar1 = -3;
      }
      else {
        iVar1 = iVar2;
        if (iVar2 == -5) {
          if (iVar4 + local_50 == 0) {
            iVar1 = -5;
          }
          else {
            iVar1 = -3;
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== uncompress @ 0001ac10 size=24 ===== */

void uncompress(void)

{
  uncompress2();
  return;
}



/* ===== gzclose @ 0001ac28 size=64 ===== */

undefined4 gzclose(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x10) == 0x1c4f) {
                    /* WARNING: Could not recover jumptable at 0x00011b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_gzclose_r_00032048)();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00011a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_gzclose_w_0003200c)();
  return uVar1;
}



/* ===== gzbuffer @ 0001ac50 size=76 ===== */

undefined4 gzbuffer(int param_1,uint param_2)

{
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x1c4f || *(int *)(param_1 + 0x10) == 0x79b1)
       ) && (*(int *)(param_1 + 0x1c) == 0)) && (param_2 <= param_2 * 2)) {
    if (param_2 < 2) {
      param_2 = 2;
    }
    *(uint *)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0xffffffff;
}



/* ===== gztell64 @ 0001ac9c size=76 ===== */

undefined8 gztell64(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x1c4f && *(int *)(param_1 + 0x10) != 0x79b1))
  {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar1 = VectorAdd(*(undefined8 *)(param_1 + 8),uVar1,8);
  }
  return uVar1;
}



/* ===== gztell @ 0001ace8 size=28 ===== */

int gztell(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = gztell64();
  iVar1 = (int)uVar2;
  if (iVar1 >> 0x1f != (int)((ulonglong)uVar2 >> 0x20)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== gzoffset64 @ 0001ad04 size=124 ===== */

__off64_t gzoffset64(int param_1)

{
  __off64_t _Var1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x1c4f || *(int *)(param_1 + 0x10) == 0x79b1))
  {
    _Var1 = lseek64(*(int *)(param_1 + 0x14),0,1);
    if (_Var1 != -1) {
      if (*(int *)(param_1 + 0x10) != 0x1c4f) {
        return _Var1;
      }
      return CONCAT44((int)((ulonglong)_Var1 >> 0x20) -
                      (uint)((uint)_Var1 < *(uint *)(param_1 + 0x68)),
                      (uint)_Var1 - *(uint *)(param_1 + 0x68));
    }
  }
  return -1;
}



/* ===== gzoffset @ 0001ad80 size=28 ===== */

int gzoffset(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = gzoffset64();
  iVar1 = (int)uVar2;
  if (iVar1 >> 0x1f != (int)((ulonglong)uVar2 >> 0x20)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== gzeof @ 0001ad9c size=32 ===== */

undefined4 gzeof(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0x1c4f) {
      uVar1 = *(undefined4 *)(param_1 + 0x44);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* ===== gzerror @ 0001adbc size=100 ===== */

int gzerror(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0x1c4f && *(int *)(param_1 + 0x10) != 0x79b1) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 0x5c) == -4) {
    return (int)&DAT_0001ae20 + DAT_0001ae24;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return DAT_0001ae20 + 0x1ae0c;
  }
  return *(int *)(param_1 + 0x60);
}



/* ===== FUN_0001ae28 @ 0001ae28 size=216 ===== */

void FUN_0001ae28(undefined4 *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  char *__s_00;
  
  if ((void *)param_1[0x18] != (void *)0x0) {
    if (param_1[0x17] != -4) {
      free((void *)param_1[0x18]);
    }
    param_1[0x18] = 0;
  }
  param_1[0x17] = param_2;
  if (param_2 != 0 && param_2 != -5) {
    *param_1 = 0;
  }
  if (param_2 != -4 && param_3 != (char *)0x0) {
    __s_00 = (char *)param_1[6];
    sVar1 = strlen(__s_00);
    sVar2 = strlen(param_3);
    __s = malloc(sVar1 + sVar2 + 3);
    param_1[0x18] = __s;
    if (__s == (char *)0x0) {
      param_1[0x17] = 0xfffffffc;
    }
    else {
      sVar1 = strlen(__s_00);
      sVar2 = strlen(param_3);
      snprintf(__s,sVar1 + sVar2 + 3,(char *)(DAT_0001af04 + 0x1aef8),__s_00,DAT_0001af00 + 0x1aee4,
               param_3);
    }
  }
  return;
}



/* ===== FUN_0001af08 @ 0001af08 size=712 ===== */

undefined4 * FUN_0001af08(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 *__ptr;
  size_t sVar3;
  char *__s;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  __off64_t _Var8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  
  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  pcVar9 = param_1;
  iVar10 = param_2;
  iVar11 = param_3;
  __ptr = malloc(0xa0);
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  __ptr[8] = 0x2000;
  __ptr[0x12] = 0xffffffff;
  bVar1 = false;
  pbVar4 = (byte *)(param_3 + -1);
  __ptr[7] = 0;
  __ptr[0x18] = 0;
  __ptr[4] = 0;
  __ptr[0x13] = 0;
  __ptr[0xb] = 0;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar7 = (uint)*pbVar4;
    if (uVar7 == 0) break;
    if ((uVar7 - 0x30 & 0xff) < 10) {
      __ptr[0x12] = uVar7 - 0x30;
    }
    else if (uVar7 == 0x65) {
      bVar1 = true;
    }
    else if (uVar7 < 0x66) {
      if (uVar7 == 0x52) {
        __ptr[0x13] = 3;
      }
      else if (uVar7 < 0x53) {
        if (uVar7 == 0x2b) goto LAB_0001af98;
        if (uVar7 == 0x46) {
          __ptr[0x13] = 4;
        }
      }
      else if (uVar7 == 0x54) {
        __ptr[0xb] = 1;
      }
      else if (uVar7 == 0x61) {
        __ptr[4] = 1;
      }
    }
    else if (uVar7 == 0x72) {
      __ptr[4] = 0x1c4f;
    }
    else if (uVar7 < 0x73) {
      if (uVar7 == 0x66) {
        __ptr[0x13] = 1;
      }
      else if (uVar7 == 0x68) {
        __ptr[0x13] = 2;
      }
    }
    else if (uVar7 == 0x77) {
      __ptr[4] = 0x79b1;
    }
    else if (uVar7 == 0x78) {
      bVar2 = true;
    }
  }
  if (__ptr[4] != 0) {
    if (__ptr[4] == 0x1c4f) {
      if (__ptr[0xb] != 0) goto LAB_0001af98;
      __ptr[0xb] = 1;
    }
    sVar3 = strlen(param_1);
    __s = malloc(sVar3 + 1);
    __ptr[6] = __s;
    if (__s != (char *)0x0) {
      snprintf(__s,sVar3 + 1,(char *)(DAT_0001b1d0 + 0x1b0a4),param_1,pcVar9,iVar10,iVar11);
      if (bVar1) {
        uVar7 = 0xa0000;
      }
      else {
        uVar7 = 0x20000;
      }
      if (__ptr[4] == 0x1c4f) {
        uVar6 = 0;
      }
      else {
        if (bVar2) {
          uVar6 = 0xc1;
        }
        else {
          uVar6 = 0x41;
        }
        if (__ptr[4] == 0x79b1) {
          uVar5 = 0x200;
        }
        else {
          uVar5 = 0x400;
        }
        uVar6 = uVar6 | uVar5;
      }
      if (param_2 < 0) {
        param_2 = open(param_1,uVar7 | uVar6,0x1b6);
      }
      __ptr[5] = param_2;
      if (param_2 != -1) {
        if (__ptr[4] == 1) {
          lseek64(param_2,0,2);
          __ptr[4] = 0x79b1;
        }
        else if (__ptr[4] == 0x1c4f) {
          _Var8 = lseek64(param_2,0,1);
          if (_Var8 == -1) {
            *(undefined8 *)(__ptr + 0xe) = 0;
          }
          else {
            *(__off64_t *)(__ptr + 0xe) = _Var8;
          }
        }
        *__ptr = 0;
        if (__ptr[4] == 0x1c4f) {
          __ptr[0x10] = 0;
          __ptr[0x11] = 0;
          __ptr[0xc] = 0;
        }
        __ptr[0x16] = 0;
        FUN_0001ae28(__ptr,0);
        __ptr[0x1a] = 0;
        *(undefined8 *)(__ptr + 2) = 0;
        return __ptr;
      }
      free((void *)__ptr[6]);
    }
  }
LAB_0001af98:
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== gzopen64 @ 0001b1d4 size=12 ===== */

void gzopen64(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af08(param_1,0xffffffff,param_2);
  return;
}



/* ===== gzopen @ 0001b1e0 size=4 ===== */

void gzopen(undefined4 param_1,undefined4 param_2)

{
  FUN_0001af08(param_1,0xffffffff,param_2);
  return;
}



/* ===== gzdopen @ 0001b1e4 size=100 ===== */

undefined4 gzdopen(int param_1,undefined4 param_2)

{
  char *__s;
  undefined4 uVar1;
  
  if ((param_1 == -1) || (__s = malloc(0x13), __s == (char *)0x0)) {
    uVar1 = 0;
  }
  else {
    snprintf(__s,0x13,(char *)(DAT_0001b248 + 0x1b228),param_1);
    uVar1 = FUN_0001af08(__s,param_1,param_2);
    free(__s);
  }
  return uVar1;
}



/* ===== gzclearerr @ 0001b24c size=64 ===== */

void gzclearerr(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0x1c4f || iVar1 == 0x79b1) {
    if (iVar1 == 0x1c4f) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    FUN_0001ae28(param_1,0);
    return;
  }
  return;
}



/* ===== gzrewind @ 0001b28c size=172 ===== */

undefined4 gzrewind(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  __off64_t _Var2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[4] == 0x1c4f)) {
    uVar1 = (uint)(param_1[0x17] != -5);
    if (param_1[0x17] == 0) {
      uVar1 = 0;
    }
    if ((uVar1 == 0) && (_Var2 = lseek64(param_1[5],*(__off64_t *)(param_1 + 0xe),0), _Var2 != -1))
    {
      *param_1 = 0;
      if (param_1[4] == 0x1c4f) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0xc] = 0;
      }
      param_1[0x16] = 0;
      FUN_0001ae28(param_1,0,0,param_1[4],uVar1,param_2);
      param_1[0x1a] = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== gzseek64 @ 0001b338 size=488 ===== */

undefined8 gzseek64(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  __off64_t _Var7;
  
  if ((((param_1 != (uint *)0x0) && (uVar2 = param_1[4], uVar2 == 0x1c4f || uVar2 == 0x79b1)) &&
      (param_1[0x17] == 0 || param_1[0x17] == 0xfffffffb)) && (param_5 < 2)) {
    if (param_5 == 0) {
      param_4 = param_4 - (param_1[3] + (uint)(param_3 < param_1[2]));
      uVar3 = param_3 - param_1[2];
    }
    else {
      uVar3 = param_3;
      if (param_1[0x16] != 0) {
        uVar3 = param_3 + param_1[0x14];
        param_4 = param_4 + param_1[0x15] + (uint)CARRY4(param_3,param_1[0x14]);
      }
    }
    param_1[0x16] = 0;
    if (uVar2 == 0x1c4f) {
      uVar4 = param_1[0xc];
      uVar2 = param_1[2];
      if ((uVar4 != 1) || ((int)(param_4 + param_1[3] + (uint)CARRY4(uVar3,uVar2)) < 0)) {
        if ((int)param_4 < 0) {
          bVar5 = CARRY4(uVar3,uVar2);
          uVar3 = uVar3 + uVar2;
          param_4 = param_4 + param_1[3] + (uint)bVar5;
          if ((int)param_4 < 0) {
            return 0xffffffffffffffff;
          }
          iVar1 = gzrewind(param_1);
          if (iVar1 == -1) {
            return 0xffffffffffffffff;
          }
        }
LAB_0001b494:
        if (param_1[4] == 0x1c4f) {
          uVar4 = *param_1;
          uVar2 = uVar4;
          if ((int)param_4 < (int)(uint)(uVar3 < uVar4)) {
            uVar2 = uVar3;
          }
          *param_1 = uVar4 - uVar2;
          param_1[1] = param_1[1] + uVar2;
          bVar5 = uVar3 < uVar2;
          uVar3 = uVar3 - uVar2;
          param_4 = param_4 - bVar5;
          *(ulonglong *)(param_1 + 2) =
               CONCAT44(param_1[3] + (uint)CARRY4(param_1[2],uVar2),param_1[2] + uVar2);
        }
        if (uVar3 != 0 || param_4 != 0) {
          param_1[0x16] = 1;
          param_1[0x14] = uVar3;
          param_1[0x15] = param_4;
        }
        uVar6 = VectorAdd(CONCAT44(param_4,uVar3),*(undefined8 *)(param_1 + 2),8);
        return uVar6;
      }
      _Var7 = lseek64(param_1[5],CONCAT44(param_4 - (uVar3 < *param_1),uVar3 - *param_1),1);
      if (_Var7 != -1) {
        *param_1 = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x16] = 0;
        FUN_0001ae28(param_1,0,0,0xffffffff,uVar4,param_2,param_3);
        param_1[0x1a] = 0;
        uVar6 = VectorAdd(CONCAT44(param_4,uVar3),*(undefined8 *)(param_1 + 2),8);
        *(undefined8 *)(param_1 + 2) = uVar6;
        return uVar6;
      }
    }
    else if (-1 < (int)param_4) goto LAB_0001b494;
  }
  return 0xffffffffffffffff;
}



/* ===== gzseek @ 0001b520 size=44 ===== */

int gzseek(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = gzseek64(param_1,param_2,param_2,param_2 >> 0x1f,param_3,param_2,param_3);
  iVar1 = (int)uVar2;
  if (iVar1 >> 0x1f != (int)((ulonglong)uVar2 >> 0x20)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_0001b54c @ 0001b54c size=144 ===== */

undefined4 FUN_0001b54c(int param_1,int param_2,uint param_3,uint *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  size_t __nbytes;
  uint uVar4;
  
  *param_4 = 0;
  while( true ) {
    __nbytes = param_3 - *param_4;
    if (0x3fffffff < __nbytes) {
      __nbytes = 0x40000000;
    }
    sVar1 = read(*(int *)(param_1 + 0x14),(void *)(param_2 + *param_4),__nbytes);
    if (sVar1 < 1) break;
    uVar4 = *param_4;
    *param_4 = sVar1 + uVar4;
    if (param_3 <= sVar1 + uVar4) {
      return 0;
    }
  }
  if (sVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    FUN_0001ae28(param_1,0xffffffff,pcVar3);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  return 0;
}



/* ===== FUN_0001b5dc @ 0001b5dc size=184 ===== */

int FUN_0001b5dc(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int local_c;
  undefined1 *puVar5;
  
  if (*(int *)(param_1 + 0x5c) == 0 || *(int *)(param_1 + 0x5c) == -5) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 != 0) {
        puVar3 = *(undefined1 **)(param_1 + 100);
        puVar2 = (undefined1 *)(*(int *)(param_1 + 0x24) + -1);
        puVar5 = puVar3;
        do {
          puVar4 = puVar5 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar5;
          puVar5 = puVar4;
        } while (puVar3 + iVar1 != puVar4);
      }
      local_c = param_2;
      iVar1 = FUN_0001b54c(param_1,*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x68),
                           *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x68),&local_c,param_1);
      if (iVar1 != -1) {
        iVar1 = 0;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + local_c;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_0001b694 @ 0001b694 size=412 ===== */

undefined4 FUN_0001b694(undefined4 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  size_t sVar2;
  
  if (param_1[7] == 0) {
    sVar2 = param_1[8];
    __ptr = malloc(sVar2);
    param_1[9] = __ptr;
    __ptr_00 = malloc(sVar2 << 1);
    param_1[10] = __ptr_00;
    iVar1 = DAT_0001b834;
    if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
      free(__ptr_00);
      free(__ptr);
      iVar1 = DAT_0001b830 + 0x1b6fc;
    }
    else {
      param_1[7] = sVar2;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x1a] = 0;
      param_1[0x19] = 0;
      iVar1 = inflateInit2_(param_1 + 0x19,0x1f,iVar1 + 0x1b73c,0x38);
      if (iVar1 == 0) goto LAB_0001b764;
      free((void *)param_1[10]);
      free((void *)param_1[9]);
      iVar1 = DAT_0001b838;
      param_1[7] = 0;
      iVar1 = iVar1 + 0x1b764;
    }
    FUN_0001ae28(param_1,0xfffffffc,iVar1);
    return 0xffffffff;
  }
LAB_0001b764:
  if ((uint)param_1[0x1a] < 2) {
    iVar1 = FUN_0001b5dc(param_1);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (param_1[0x1a] == 0) {
      return 0;
    }
  }
  sVar2 = param_1[0x1a];
  if (((1 < sVar2) && (*(char *)param_1[0x19] == '\x1f')) && (((char *)param_1[0x19])[1] == -0x75))
  {
    inflateReset(param_1 + 0x19);
    param_1[0xc] = 2;
    param_1[0xb] = 0;
    return 0;
  }
  if (param_1[0xb] == 0) {
    param_1[0x1a] = 0;
    param_1[0x10] = 1;
    *param_1 = 0;
    return 0;
  }
  param_1[1] = (void *)param_1[10];
  if (sVar2 != 0) {
    memcpy((void *)param_1[10],(void *)param_1[0x19],sVar2);
    *param_1 = param_1[0x1a];
    param_1[0x1a] = 0;
  }
  param_1[0xc] = 1;
  param_1[0xb] = 1;
  return 0;
}



/* ===== FUN_0001b83c @ 0001b83c size=260 ===== */

undefined4 FUN_0001b83c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[0x1d];
  iVar3 = 0;
  do {
    if (param_1[0x1a] == 0) {
      iVar1 = FUN_0001b5dc(param_1);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      if (param_1[0x1a] == 0) {
        FUN_0001ae28(param_1,0xfffffffb,DAT_0001b940 + 0x1b88c);
LAB_0001b88c:
        *param_1 = iVar4 - param_1[0x1d];
        param_1[1] = param_1[0x1c] + (param_1[0x1d] - iVar4);
        if (iVar3 == 1) {
          param_1[0xc] = 0;
        }
        return 0;
      }
    }
    iVar3 = inflate(param_1 + 0x19,0);
    if ((iVar3 + 2U & 0xfffffffb) == 0) {
      uVar2 = 0xfffffffe;
      iVar3 = DAT_0001b944 + 0x1b8e4;
LAB_0001b8e0:
      FUN_0001ae28(param_1,uVar2,iVar3);
      return 0xffffffff;
    }
    if (iVar3 == -4) {
      iVar3 = DAT_0001b948 + 0x1b908;
      uVar2 = 0xfffffffc;
      goto LAB_0001b8e0;
    }
    if (iVar3 == -3) {
      iVar3 = param_1[0x1f];
      if (iVar3 == 0) {
        iVar3 = DAT_0001b94c + 0x1b924;
      }
      uVar2 = 0xfffffffd;
      goto LAB_0001b8e0;
    }
    if ((param_1[0x1d] == 0) || (iVar3 == 1)) goto LAB_0001b88c;
  } while( true );
}



/* ===== FUN_0001b950 @ 0001b950 size=200 ===== */

undefined4 FUN_0001b950(int *param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1[0xc];
    if (iVar1 == 1) {
      iVar1 = FUN_0001b54c(param_1,param_1[10],param_1[7] << 1,param_1);
      if (iVar1 != -1) {
        param_1[1] = param_1[10];
        return 0;
      }
      return 0xffffffff;
    }
    if (iVar1 == 2) {
      param_1[0x1d] = param_1[7] << 1;
      param_1[0x1c] = param_1[10];
      iVar1 = FUN_0001b83c(param_1);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
    else if (iVar1 == 0) {
      iVar1 = FUN_0001b694(param_1);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      if (param_1[0xc] == 0) {
        return 0;
      }
    }
    if (*param_1 != 0) {
      return 0;
    }
  } while ((param_1[0x10] == 0) || (param_1[0x1a] != 0));
  return 0;
}



/* ===== FUN_0001ba18 @ 0001ba18 size=168 ===== */

undefined4 FUN_0001ba18(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  while( true ) {
    while( true ) {
      if (param_3 == 0 && param_4 == 0) {
        return 0;
      }
      uVar3 = *param_1;
      if (uVar3 == 0) break;
      uVar1 = uVar3;
      if (param_4 < (int)(uint)(param_3 < uVar3)) {
        uVar1 = param_3;
      }
      *param_1 = uVar3 - uVar1;
      param_1[1] = param_1[1] + uVar1;
      bVar4 = param_3 < uVar1;
      param_3 = param_3 - uVar1;
      param_4 = param_4 - (uint)bVar4;
      *(ulonglong *)(param_1 + 2) =
           CONCAT44(param_1[3] + (uint)CARRY4(param_1[2],uVar1),param_1[2] + uVar1);
    }
    if ((param_1[0x10] != 0) && (param_1[0x1a] == 0)) break;
    iVar2 = FUN_0001b950(param_1);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}



/* ===== FUN_0001bac0 @ 0001bac0 size=356 ===== */

int FUN_0001bac0(uint *param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_2c;
  void *pvStack_28;
  
  if (param_3 == (void *)0x0) {
    return 0;
  }
  pvStack_28 = param_3;
  if (param_1[0x16] != 0) {
    param_1[0x16] = 0;
    local_2c = param_2;
    iVar4 = FUN_0001ba18(param_1,param_2,param_1[0x14],param_1[0x15],param_1);
    if (iVar4 == -1) {
      return 0;
    }
  }
  iVar4 = 0;
  do {
    while (pvVar3 = (void *)*param_1, pvVar3 != (void *)0x0) {
      local_2c = param_3;
      if (pvVar3 < param_3) {
        local_2c = pvVar3;
      }
      pvVar3 = local_2c;
      memcpy(param_2,(void *)param_1[1],(size_t)local_2c);
      param_1[1] = param_1[1] + (int)pvVar3;
      *param_1 = *param_1 - (int)pvVar3;
LAB_0001bb38:
      uVar2 = param_1[2];
      param_2 = (void *)((int)param_2 + (int)local_2c);
      param_3 = (void *)((int)param_3 - (int)local_2c);
      iVar4 = iVar4 + (int)local_2c;
      param_1[2] = uVar2 + (int)local_2c;
      param_1[3] = param_1[3] + (uint)CARRY4(uVar2,(uint)local_2c);
      if (param_3 == (void *)0x0) {
        return iVar4;
      }
    }
    if ((param_1[0x10] != 0) && (param_1[0x1a] == 0)) {
      param_1[0x11] = 1;
      return iVar4;
    }
    local_2c = param_3;
    if ((param_1[0xc] != 0) && ((void *)(param_1[7] << 1) <= param_3)) {
      if (param_1[0xc] == 1) {
        iVar1 = FUN_0001b54c(param_1,param_2,param_3,&local_2c);
        if (iVar1 == -1) {
          return 0;
        }
      }
      else {
        param_1[0x1d] = (uint)param_3;
        param_1[0x1c] = (uint)param_2;
        iVar1 = FUN_0001b83c(param_1);
        if (iVar1 == -1) {
          return 0;
        }
        local_2c = (void *)*param_1;
        *param_1 = 0;
      }
      goto LAB_0001bb38;
    }
    iVar1 = FUN_0001b950(param_1);
    if (iVar1 == -1) {
      return 0;
    }
  } while( true );
}



/* ===== gzread @ 0001bc24 size=120 ===== */

int gzread(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(int *)(param_1 + 0x10) == 0x1c4f) &&
     (*(int *)(param_1 + 0x5c) == 0 || *(int *)(param_1 + 0x5c) == -5)) {
    if (param_3 < 0) {
      FUN_0001ae28(param_1,0xfffffffe,DAT_0001bc9c + 0x1bc74);
    }
    else {
      iVar1 = FUN_0001bac0();
      if (iVar1 != 0) {
        return iVar1;
      }
      if (*(int *)(param_1 + 0x5c) == 0 || *(int *)(param_1 + 0x5c) == -5) {
        return 0;
      }
    }
  }
  return -1;
}



/* ===== gzfread @ 0001bca0 size=160 ===== */

uint gzfread(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if ((*(int *)(param_4 + 0x10) == 0x1c4f) &&
     (*(int *)(param_4 + 0x5c) == 0 || *(int *)(param_4 + 0x5c) == -5)) {
    if (param_2 == 0) {
      return 0;
    }
    if ((param_2 * param_3) / param_2 == param_3) {
      if (param_2 * param_3 == 0) {
        return 0;
      }
      uVar1 = FUN_0001bac0(param_4,param_1);
      return uVar1 / param_2;
    }
    FUN_0001ae28(param_4,0xfffffffe,DAT_0001bd40 + 0x1bd18);
  }
  return 0;
}



/* ===== gzgetc @ 0001bd44 size=136 ===== */

uint gzgetc(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint local_14;
  undefined4 uStack_10;
  
  if (((param_1 != (int *)0x0) && (param_1[4] == 0x1c4f)) &&
     (param_1[0x17] == 0 || param_1[0x17] == -5)) {
    if (*param_1 != 0) {
      uVar1 = param_1[2];
      *param_1 = *param_1 + -1;
      pbVar3 = (byte *)param_1[1];
      param_1[2] = uVar1 + 1;
      param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar1);
      param_1[1] = (int)(pbVar3 + 1);
      return (uint)*pbVar3;
    }
    local_14 = param_2;
    uStack_10 = param_3;
    iVar2 = FUN_0001bac0(param_1,&local_14,1,param_1,param_1);
    if (0 < iVar2) {
      return local_14 & 0xff;
    }
  }
  return 0xffffffff;
}



/* ===== gzgetc_ @ 0001bdcc size=4 ===== */

void gzgetc_(void)

{
  (*(code *)PTR_gzgetc_00032018)();
  return;
}



/* ===== gzungetc @ 0001bdd0 size=328 ===== */

int gzungetc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (((param_2 != (int *)0x0) && (param_2[4] == 0x1c4f)) &&
     (param_2[0x17] == 0 || param_2[0x17] == -5)) {
    if (param_2[0x16] != 0) {
      param_2[0x16] = 0;
      iVar1 = FUN_0001ba18(param_2,param_2,param_2[0x14],param_2[0x15]);
      if (iVar1 == -1) {
        return -1;
      }
    }
    if (-1 < param_1) {
      iVar4 = *param_2;
      iVar1 = param_2[7] * 2;
      if (iVar4 == 0) {
        *param_2 = 1;
        param_2[1] = param_2[10] + iVar1 + -1;
        *(char *)(param_2[10] + iVar1 + -1) = (char)param_1;
        iVar1 = param_2[2];
        param_2[2] = iVar1 + -1;
        param_2[3] = param_2[3] - (uint)(iVar1 == 0);
      }
      else {
        if (iVar4 == iVar1) {
          FUN_0001ae28(param_2,0xfffffffd,DAT_0001bf18 + 0x1beac);
          return -1;
        }
        iVar2 = param_2[1];
        if (iVar2 == param_2[10]) {
          puVar5 = (undefined1 *)(iVar2 + iVar4);
          puVar3 = (undefined1 *)(iVar2 + iVar1);
          while ((undefined1 *)param_2[10] < puVar5) {
            puVar5 = puVar5 + -1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar5;
          }
          param_2[1] = (int)puVar3;
        }
        *param_2 = *param_2 + 1;
        iVar1 = param_2[1];
        param_2[1] = iVar1 + -1;
        *(char *)(iVar1 + -1) = (char)param_1;
        iVar1 = param_2[2];
        param_2[2] = iVar1 + -1;
        param_2[3] = param_2[3] - (uint)(iVar1 == 0);
      }
      param_2[0x11] = 0;
      return param_1;
    }
  }
  return -1;
}



/* ===== gzgets @ 0001bf1c size=368 ===== */

undefined1 * gzgets(uint *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint __n;
  uint uVar4;
  undefined1 *__dest;
  undefined1 *puVar5;
  void *__s;
  
  if (param_1 == (uint *)0x0 || (param_2 == (undefined1 *)0x0 || param_3 < 1)) {
    return (undefined1 *)0x0;
  }
  if ((param_1[4] == 0x1c4f) && (param_1[0x17] == 0 || param_1[0x17] == 0xfffffffb)) {
    if (param_1[0x16] != 0) {
      param_1[0x16] = 0;
      iVar1 = FUN_0001ba18(param_1,param_2,param_1[0x14],param_1[0x15]);
      if (iVar1 == -1) {
        return (undefined1 *)0x0;
      }
    }
    uVar4 = param_3 - 1;
    __dest = param_2;
    if (uVar4 != 0) {
      do {
        if ((*param_1 == 0) && (iVar1 = FUN_0001b950(param_1), iVar1 == -1)) {
          return (undefined1 *)0x0;
        }
        __n = *param_1;
        if (__n == 0) {
          param_1[0x11] = 1;
          puVar5 = __dest;
          break;
        }
        __s = (void *)param_1[1];
        if (uVar4 <= __n) {
          __n = uVar4;
        }
        pvVar2 = memchr(__s,10,__n);
        if (pvVar2 != (void *)0x0) {
          __n = (int)pvVar2 + (1 - (int)__s);
        }
        puVar5 = __dest + __n;
        memcpy(__dest,__s,__n);
        *param_1 = *param_1 - __n;
        param_1[1] = param_1[1] + __n;
        uVar3 = param_1[2];
        uVar4 = uVar4 - __n;
        param_1[2] = uVar3 + __n;
        param_1[3] = param_1[3] + (uint)CARRY4(uVar3,__n);
        __dest = puVar5;
      } while (pvVar2 == (void *)0x0 && uVar4 != 0);
      if (puVar5 != param_2) {
        *puVar5 = 0;
        return param_2;
      }
    }
  }
  return (undefined1 *)0x0;
}



/* ===== gzdirect @ 0001c08c size=72 ===== */

int gzdirect(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (((param_1[4] == 0x1c4f) && (param_1[0xc] == 0)) && (*param_1 == 0)) {
      FUN_0001b694();
    }
    return param_1[0xb];
  }
  return 0;
}



/* ===== gzclose_r @ 0001c0d4 size=144 ===== */

int gzclose_r(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 0x10) != 0x1c4f)) {
    iVar2 = -2;
  }
  else {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      inflateEnd((int)param_1 + 100);
      free(*(void **)((int)param_1 + 0x28));
      free(*(void **)((int)param_1 + 0x24));
    }
    iVar2 = *(int *)((int)param_1 + 0x5c);
    if (iVar2 != -5) {
      iVar2 = 0;
    }
    FUN_0001ae28(param_1,0);
    free(*(void **)((int)param_1 + 0x18));
    iVar1 = close(*(int *)((int)param_1 + 0x14));
    free(param_1);
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



/* ===== FUN_0001c164 @ 0001c164 size=268 ===== */

undefined4 FUN_0001c164(int param_1)

{
  void *__ptr;
  void *pvVar1;
  int iVar2;
  size_t __size;
  
  __size = *(size_t *)(param_1 + 0x20);
  __ptr = malloc(__size << 1);
  *(void **)(param_1 + 0x24) = __ptr;
  if (__ptr == (void *)0x0) {
    iVar2 = DAT_0001c270 + 0x1c194;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
LAB_0001c248:
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x28);
      }
      return 0;
    }
    pvVar1 = malloc(__size);
    *(void **)(param_1 + 0x28) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      free(__ptr);
      iVar2 = DAT_0001c274 + 0x1c1e0;
    }
    else {
      *(undefined4 *)(param_1 + 0x84) = 0;
      iVar2 = DAT_0001c278;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      iVar2 = deflateInit2_(param_1 + 100,*(undefined4 *)(param_1 + 0x48),8,0x1f,8,
                            *(undefined4 *)(param_1 + 0x4c),iVar2 + 0x1c204,0x38);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 100) = 0;
        goto LAB_0001c248;
      }
      free(*(void **)(param_1 + 0x28));
      free(*(void **)(param_1 + 0x24));
      iVar2 = DAT_0001c27c + 0x1c248;
    }
  }
  FUN_0001ae28(param_1,0xfffffffc,iVar2);
  return 0xffffffff;
}



/* ===== FUN_0001c280 @ 0001c280 size=388 ===== */

undefined4 FUN_0001c280(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  void *__buf;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar1 = FUN_0001c164(), iVar1 == -1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 0;
    do {
      if ((*(int *)(param_1 + 0x74) == 0) || ((param_2 != 0 && (param_2 != 4 || iVar1 == 1)))) {
        while( true ) {
          __buf = *(void **)(param_1 + 4);
          if (*(void **)(param_1 + 0x70) <= __buf) break;
          sVar6 = (int)*(void **)(param_1 + 0x70) - (int)__buf;
          if (0x3fffffff < (int)sVar6) {
            sVar6 = 0x40000000;
          }
          sVar3 = write(*(int *)(param_1 + 0x14),__buf,sVar6);
          if (sVar3 < 0) goto LAB_0001c368;
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + sVar3;
        }
        if (*(int *)(param_1 + 0x74) == 0) {
          *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x1c);
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x28);
        }
      }
      iVar7 = *(int *)(param_1 + 0x74);
      iVar1 = deflate(param_1 + 100,param_2);
      if (iVar1 == -2) {
        pcVar5 = (char *)(DAT_0001c404 + 0x1c334);
        uVar4 = 0xfffffffe;
        goto LAB_0001c37c;
      }
    } while (*(int *)(param_1 + 0x74) != iVar7);
    if (param_2 == 4) {
      deflateReset(param_1 + 100);
      return 0;
    }
  }
  else {
    while (sVar6 = *(uint *)(param_1 + 0x68), sVar6 != 0) {
      if (0x3fffffff < sVar6) {
        sVar6 = 0x40000000;
      }
      sVar3 = write(*(int *)(param_1 + 0x14),*(void **)(param_1 + 100),sVar6);
      if (sVar3 < 0) goto LAB_0001c368;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - sVar3;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + sVar3;
    }
  }
  return 0;
LAB_0001c368:
  piVar2 = __errno_location();
  pcVar5 = strerror(*piVar2);
  uVar4 = 0xffffffff;
LAB_0001c37c:
  FUN_0001ae28(param_1,uVar4,pcVar5);
  return 0xffffffff;
}



/* ===== FUN_0001c408 @ 0001c408 size=184 ===== */

undefined4 FUN_0001c408(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint __n;
  bool bVar3;
  
  if ((*(int *)(param_1 + 0x68) == 0) || (iVar1 = FUN_0001c280(param_1,0), iVar1 != -1)) {
    bVar3 = true;
    while( true ) {
      if (param_3 == 0 && param_4 == 0) {
        return 0;
      }
      __n = *(uint *)(param_1 + 0x1c);
      if (param_4 < (int)(uint)(param_3 < *(uint *)(param_1 + 0x1c))) {
        __n = param_3;
      }
      if (bVar3) {
        memset(*(void **)(param_1 + 0x24),0,__n);
      }
      *(uint *)(param_1 + 0x68) = __n;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar2 + __n;
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar2,__n);
      iVar1 = FUN_0001c280(param_1,0);
      if (iVar1 == -1) break;
      bVar3 = param_3 < __n;
      param_3 = param_3 - __n;
      param_4 = param_4 - (uint)bVar3;
      bVar3 = false;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001c4c0 @ 0001c4c0 size=320 ===== */

uint FUN_0001c4c0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint __n;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar5 = FUN_0001c164();
      pvVar2 = (void *)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar1 = FUN_0001c408(param_1,pvVar2,*(undefined4 *)(param_1 + 0x50),
                           *(undefined4 *)(param_1 + 0x54));
      if (iVar1 == -1) {
        return 0;
      }
    }
    uVar3 = param_3;
    if (param_3 < *(uint *)(param_1 + 0x1c)) {
      do {
        if (*(int *)(param_1 + 0x68) == 0) {
          *(int *)(param_1 + 100) = *(int *)(param_1 + 0x24);
        }
        pvVar2 = (void *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68));
        __n = *(int *)(param_1 + 0x1c) - ((int)pvVar2 - *(int *)(param_1 + 0x24));
        if (uVar3 <= __n) {
          __n = uVar3;
        }
        memcpy(pvVar2,param_2,__n);
        *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + __n;
        uVar4 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar4 + __n;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar4,__n);
        if (uVar3 - __n == 0) {
          return param_3;
        }
        iVar1 = FUN_0001c280(param_1,0);
        param_2 = (void *)((int)param_2 + __n);
        uVar3 = uVar3 - __n;
      } while (iVar1 != -1);
    }
    else if ((*(int *)(param_1 + 0x68) == 0) || (iVar1 = FUN_0001c280(param_1,0), iVar1 != -1)) {
      uVar3 = *(uint *)(param_1 + 8);
      *(void **)(param_1 + 100) = param_2;
      *(uint *)(param_1 + 8) = uVar3 + param_3;
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,param_3);
      *(uint *)(param_1 + 0x68) = param_3;
      iVar1 = FUN_0001c280(param_1,0);
      if (iVar1 != -1) {
        return param_3;
      }
    }
  }
  return 0;
}



/* ===== gzwrite @ 0001c600 size=88 ===== */

undefined4 gzwrite(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0x79b1) && (*(int *)(param_1 + 0x5c) == 0)) {
    if (-1 < param_3) {
      uVar1 = FUN_0001c4c0();
      return uVar1;
    }
    FUN_0001ae28(param_1,0xfffffffd,DAT_0001c658 + 0x1c640);
  }
  return 0;
}



/* ===== gzfwrite @ 0001c65c size=144 ===== */

uint gzfwrite(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if ((*(int *)(param_4 + 0x10) == 0x79b1) && (*(int *)(param_4 + 0x5c) == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    if ((param_2 * param_3) / param_2 == param_3) {
      if (param_2 * param_3 == 0) {
        return 0;
      }
      uVar1 = FUN_0001c4c0(param_4,param_1);
      return uVar1 / param_2;
    }
    FUN_0001ae28(param_4,0xfffffffe,DAT_0001c6ec + 0x1c6c4);
  }
  return 0;
}



/* ===== gzputc @ 0001c6f0 size=212 ===== */

uint gzputc(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  undefined4 uStack_10;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 0x5c) != 0)) {
LAB_0001c6fc:
    param_2 = 0xffffffff;
  }
  else {
    local_14 = param_2;
    uStack_10 = param_3;
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar1 = FUN_0001c408(param_1,param_2,*(undefined4 *)(param_1 + 0x50),
                           *(undefined4 *)(param_1 + 0x54),param_1);
      if (iVar1 == -1) goto LAB_0001c6fc;
    }
    if (*(uint *)(param_1 + 0x1c) == 0) {
LAB_0001c740:
      local_14 = CONCAT31(local_14._1_3_,(char)param_2);
      iVar1 = FUN_0001c4c0(param_1,&local_14,1);
      if (iVar1 != 1) goto LAB_0001c6fc;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x24);
      }
      if (*(uint *)(param_1 + 0x1c) <=
          (uint)((*(int *)(param_1 + 100) + iVar1) - *(int *)(param_1 + 0x24))) goto LAB_0001c740;
      *(char *)(*(int *)(param_1 + 100) + iVar1) = (char)param_2;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      uVar2 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar2 + 1;
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xfffffffe < uVar2);
    }
    param_2 = param_2 & 0xff;
  }
  return param_2;
}



/* ===== gzputs @ 0001c7c4 size=104 ===== */

int gzputs(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x79b1)) && (*(int *)(param_1 + 0x5c) == 0)) {
    sVar1 = strlen(param_2);
    iVar2 = FUN_0001c4c0(param_1,param_2,sVar1);
    if (iVar2 != 0 || sVar1 == 0) {
      return iVar2;
    }
  }
  return -1;
}



/* ===== gzvprintf @ 0001c82c size=332 ===== */

uint gzvprintf(int param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 0x5c) != 0)) {
    return 0xfffffffe;
  }
  pcVar5 = param_2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar7 = FUN_0001c164();
    pcVar5 = (char *)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == -1) goto LAB_0001c874;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar1 = FUN_0001c408(param_1,pcVar5,*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar1 == -1) goto LAB_0001c874;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
  }
  pcVar5 = (char *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68));
  pcVar5[*(int *)(param_1 + 0x1c) + -1] = '\0';
  uVar2 = vsnprintf(pcVar5,*(size_t *)(param_1 + 0x1c),param_2,param_3);
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x1c);
  if (uVar6 <= uVar2) {
    return 0;
  }
  if (pcVar5[uVar6 - 1] != '\0') {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = uVar2 + *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = uVar4;
  *(uint *)(param_1 + 8) = uVar3 + uVar2;
  *(uint *)(param_1 + 0xc) =
       *(int *)(param_1 + 0xc) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar3,uVar2);
  if (uVar4 < uVar6) {
    return uVar2;
  }
  *(uint *)(param_1 + 0x68) = uVar6;
  iVar1 = FUN_0001c280(param_1);
  if (iVar1 != -1) {
    memcpy(*(void **)(param_1 + 0x24),
           (void *)((int)*(void **)(param_1 + 0x24) + *(int *)(param_1 + 0x1c)),uVar4 - uVar6);
    *(uint *)(param_1 + 0x68) = uVar4 - uVar6;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
    return uVar2;
  }
LAB_0001c874:
  return *(uint *)(param_1 + 0x5c);
}



/* ===== gzprintf @ 0001c978 size=40 ===== */

void gzprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  gzvprintf(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



/* ===== gzflush @ 0001c9a0 size=116 ===== */

undefined4 gzflush(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 0x5c) != 0))
     || (4 < param_2)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar1 = FUN_0001c408(param_1,param_2,*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar1 == -1) goto LAB_0001c9f4;
  }
  FUN_0001c280(param_1,param_2);
LAB_0001c9f4:
  return *(undefined4 *)(param_1 + 0x5c);
}



/* ===== gzsetparams @ 0001ca14 size=204 ===== */

undefined4 gzsetparams(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 0x5c) != 0)) {
    return 0xfffffffe;
  }
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x48) == param_2) && (*(int *)(param_1 + 0x4c) == param_3)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_0001ca90:
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(int *)(param_1 + 0x68) != 0) && (iVar1 = FUN_0001c280(param_1,5), iVar1 == -1))
      goto LAB_0001ca84;
      deflateParams(param_1 + 100,param_2,param_3);
    }
    *(int *)(param_1 + 0x48) = param_2;
    *(int *)(param_1 + 0x4c) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar1 = FUN_0001c408(param_1,param_2,*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar1 != -1) goto LAB_0001ca90;
LAB_0001ca84:
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
  }
  return uVar2;
}



/* ===== gzclose_w @ 0001cae0 size=208 ===== */

undefined4 gzclose_w(void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 0x10) != 0x79b1)) {
    return 0xfffffffe;
  }
  if (*(int *)((int)param_1 + 0x58) != 0) {
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    iVar1 = FUN_0001c408(param_1,param_2,*(undefined4 *)((int)param_1 + 0x50),
                         *(undefined4 *)((int)param_1 + 0x54));
    if (iVar1 == -1) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x5c);
      goto LAB_0001cb0c;
    }
  }
  uVar2 = 0;
LAB_0001cb0c:
  iVar1 = FUN_0001c280(param_1,4);
  if (iVar1 == -1) {
    uVar2 = *(undefined4 *)((int)param_1 + 0x5c);
  }
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    if (*(int *)((int)param_1 + 0x2c) == 0) {
      deflateEnd((int)param_1 + 100);
      free(*(void **)((int)param_1 + 0x28));
    }
    free(*(void **)((int)param_1 + 0x24));
  }
  FUN_0001ae28(param_1,0);
  free(*(void **)((int)param_1 + 0x18));
  iVar1 = close(*(int *)((int)param_1 + 0x14));
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  free(param_1);
  return uVar2;
}



/* ===== FUN_0001cbb0 @ 0001cbb0 size=228 ===== */

undefined8 FUN_0001cbb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (param_4 == 0 && param_3 == 0) {
    if (param_2 < 0) {
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
    }
    local_8 = param_2;
    iVar1 = raise(8);
    return CONCAT44(local_8,iVar1);
  }
  if (-1 < param_2) {
    if (param_4 < 0) {
      uVar2 = FUN_0001cc94(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_0001cc94();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_0001cc94(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_0001cc94(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_0001cc94 @ 0001cc94 size=328 ===== */

undefined8 FUN_0001cc94(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _DT_FINI @ 0001cddc size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::strerror @ 00033000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00033004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00033008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0003300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00033010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00033014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00033018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00033020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 00033024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00033028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0003302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00033030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00033034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00033038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0003303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00033040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00033044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00033048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00033050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


