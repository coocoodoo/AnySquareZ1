// libz.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011b64 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== deflate @ 00011b94 size=12 ===== */

void deflate(void)

{
  (*(code *)PTR_deflate_00037010)();
  return;
}



/* ===== gzseek64 @ 00011ba0 size=12 ===== */

void gzseek64(void)

{
  (*(code *)PTR_gzseek64_00037014)();
  return;
}



/* ===== gzgetc @ 00011bac size=12 ===== */

void gzgetc(void)

{
  (*(code *)PTR_gzgetc_00037018)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003701c)(__errnum);
  return pcVar1;
}



/* ===== inflateReset2 @ 00011bc4 size=12 ===== */

void inflateReset2(void)

{
  (*(code *)PTR_inflateReset2_00037020)();
  return;
}



/* ===== deflateResetKeep @ 00011bd0 size=12 ===== */

void deflateResetKeep(void)

{
  (*(code *)PTR_deflateResetKeep_00037024)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00037028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003702c)(__s);
  return iVar1;
}



/* ===== inflate @ 00011bf4 size=12 ===== */

void inflate(void)

{
  (*(code *)PTR_inflate_00037030)();
  return;
}



/* ===== gztell64 @ 00011c00 size=12 ===== */

void gztell64(void)

{
  (*(code *)PTR_gztell64_00037034)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00037038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011c18 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003703c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00037040)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00037044)(__s);
  return iVar1;
}



/* ===== gzoffset64 @ 00011c3c size=12 ===== */

void gzoffset64(void)

{
  (*(code *)PTR_gzoffset64_00037048)();
  return;
}



/* ===== inflateInit_ @ 00011c54 size=12 ===== */

void inflateInit_(void)

{
  (*(code *)PTR_inflateInit__00037050)();
  return;
}



/* ===== <EXTERNAL>::write @ 00011c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00037054)(__fd);
  return sVar1;
}



/* ===== deflateInit_ @ 00011c6c size=12 ===== */

void deflateInit_(void)

{
  (*(code *)PTR_deflateInit__00037058)();
  return;
}



/* ===== adler32 @ 00011c78 size=12 ===== */

void adler32(void)

{
  (*(code *)PTR_adler32_0003705c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011c84 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00037060)();
  return;
}



/* ===== crc32_z @ 00011c90 size=12 ===== */

void crc32_z(void)

{
  (*(code *)PTR_crc32_z_00037064)();
  return;
}



/* ===== <EXTERNAL>::memchr @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00037068)(__s);
  return pvVar1;
}



/* ===== crc32 @ 00011ca8 size=12 ===== */

void crc32(void)

{
  (*(code *)PTR_crc32_0003706c)();
  return;
}



/* ===== <EXTERNAL>::read @ 00011cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00037070)(__fd);
  return sVar1;
}



/* ===== deflateInit2_ @ 00011cc0 size=12 ===== */

void deflateInit2_(void)

{
  (*(code *)PTR_deflateInit2__00037074)();
  return;
}



/* ===== inflateReset @ 00011cd8 size=12 ===== */

void inflateReset(void)

{
  (*(code *)PTR_inflateReset_0003707c)();
  return;
}



/* ===== deflateReset @ 00011ce4 size=12 ===== */

void deflateReset(void)

{
  (*(code *)PTR_deflateReset_00037080)();
  return;
}



/* ===== gzvprintf @ 00011cf0 size=12 ===== */

void gzvprintf(void)

{
  (*(code *)PTR_gzvprintf_00037084)();
  return;
}



/* ===== compress2 @ 00011cfc size=12 ===== */

void compress2(void)

{
  (*(code *)PTR_compress2_00037088)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00011d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003708c)(__s);
  return pvVar1;
}



/* ===== uncompress2 @ 00011d14 size=12 ===== */

void uncompress2(void)

{
  (*(code *)PTR_uncompress2_00037090)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00037094)();
  return piVar1;
}



/* ===== adler32_z @ 00011d38 size=12 ===== */

void adler32_z(void)

{
  (*(code *)PTR_adler32_z_0003709c)();
  return;
}



/* ===== deflateParams @ 00011d44 size=12 ===== */

void deflateParams(void)

{
  (*(code *)PTR_deflateParams_000370a0)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000370a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00011d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_000370a8)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::open @ 00011d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000370ac)(__file);
  return iVar1;
}



/* ===== gzrewind @ 00011d74 size=12 ===== */

void gzrewind(void)

{
  (*(code *)PTR_gzrewind_000370b0)();
  return;
}



/* ===== inflateEnd @ 00011d80 size=12 ===== */

void inflateEnd(void)

{
  (*(code *)PTR_inflateEnd_000370b4)();
  return;
}



/* ===== inflateInit2_ @ 00011d98 size=12 ===== */

void inflateInit2_(void)

{
  (*(code *)PTR_inflateInit2__000370bc)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011da4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000370c0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000370c4)(__fd);
  return iVar1;
}



/* ===== deflateEnd @ 00011dbc size=12 ===== */

void deflateEnd(void)

{
  (*(code *)PTR_deflateEnd_000370c8)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000370cc)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000370d0)(__ptr);
  return;
}



/* ===== entry @ 00011de0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011e2c + 0x11df8 == DAT_00011e28 + 0x11df0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011e30 + 0x11e00 + DAT_00011e34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011e9c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011f10 + 0x11eb8;
  if (*(char *)(DAT_00011f0c + 0x11eac) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011f14) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011f18 + 0x11ed8));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011f1c) != 0) {
    __deregister_frame_info(DAT_00011f20 + 0x11ef8);
  }
  *(undefined1 *)(DAT_00011f24 + 0x11f08) = 1;
  return;
}



/* ===== _INIT_0 @ 00011f28 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011f60 + 0x11f38 + DAT_00011f64) != 0) {
    __register_frame_info(DAT_00011f6c + 0x11f58,DAT_00011f68 + 0x11f54);
  }
  if (((DAT_00011e90 + 0x11e50) - (DAT_00011e8c + 0x11e48) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011e94 + 0x11e58 + DAT_00011e98);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== adler32_z @ 00011f70 size=1348 ===== */

undefined8 adler32_z(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  
  uVar18 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = *param_2 + param_1;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar18 = param_1 + uVar18;
    if (0xfff0 < uVar18) {
      uVar18 = uVar18 - 0xfff1;
    }
    return CONCAT44(param_2,param_1 | uVar18 << 0x10);
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      param_1 = param_1 + *param_2;
      uVar18 = uVar18 + param_1;
      if (param_3 != 1) {
        param_1 = param_1 + param_2[1];
        uVar18 = uVar18 + param_1;
        if (param_3 != 2) {
          param_1 = param_1 + param_2[2];
          uVar18 = uVar18 + param_1;
          if (param_3 != 3) {
            param_1 = param_1 + param_2[3];
            uVar18 = uVar18 + param_1;
            if (param_3 != 4) {
              param_1 = param_1 + param_2[4];
              uVar18 = uVar18 + param_1;
              if (param_3 != 5) {
                param_1 = param_1 + param_2[5];
                uVar18 = uVar18 + param_1;
                if (param_3 != 6) {
                  param_1 = param_1 + param_2[6];
                  uVar18 = uVar18 + param_1;
                  if (param_3 != 7) {
                    param_1 = param_1 + param_2[7];
                    uVar18 = uVar18 + param_1;
                    if (param_3 != 8) {
                      param_1 = param_1 + param_2[8];
                      uVar18 = uVar18 + param_1;
                      if (param_3 != 9) {
                        param_1 = param_1 + param_2[9];
                        uVar18 = uVar18 + param_1;
                        if (param_3 != 10) {
                          param_1 = param_1 + param_2[10];
                          uVar18 = uVar18 + param_1;
                          if (param_3 != 0xb) {
                            param_1 = param_1 + param_2[0xb];
                            uVar18 = uVar18 + param_1;
                            if (param_3 != 0xc) {
                              param_1 = param_1 + param_2[0xc];
                              uVar18 = uVar18 + param_1;
                              if (param_3 != 0xd) {
                                uVar9 = (uint)param_2[0xd];
                                param_1 = param_1 + uVar9;
                                if (param_3 != 0xe) {
                                  uVar9 = (uint)param_2[0xe];
                                }
                                uVar18 = uVar18 + param_1;
                                if (param_3 != 0xe) {
                                  param_1 = param_1 + uVar9;
                                  uVar18 = uVar18 + param_1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar9 = param_1;
    if (0xfff0 < param_1) {
      uVar9 = param_1 - 0xff00;
    }
    if (0xfff0 < param_1) {
      uVar9 = uVar9 - 0xf1;
    }
    return CONCAT44(uVar18 * -0x7ff87f8f,uVar9 | (uVar18 % 0xfff1) * 0x10000);
  }
  if (param_3 < 0x15b0) {
LAB_0001225c:
    uVar9 = param_3 - 0x10 >> 4;
    pbVar19 = param_2 + 0x10;
    do {
      pbVar20 = pbVar19 + 0x10;
      iVar1 = pbVar19[-0x10] + param_1;
      iVar17 = (uint)pbVar19[-0xf] + iVar1;
      iVar2 = (uint)pbVar19[-0xe] + iVar17;
      iVar13 = (uint)pbVar19[-0xd] + iVar2;
      iVar8 = (uint)pbVar19[-0xc] + iVar13;
      iVar3 = (uint)pbVar19[-0xb] + iVar8;
      iVar14 = (uint)pbVar19[-10] + iVar3;
      iVar10 = (uint)pbVar19[-9] + iVar14;
      iVar4 = (uint)pbVar19[-8] + iVar10;
      iVar15 = (uint)pbVar19[-7] + iVar4;
      iVar11 = (uint)pbVar19[-6] + iVar15;
      iVar5 = (uint)pbVar19[-5] + iVar11;
      iVar16 = (uint)pbVar19[-4] + iVar5;
      iVar12 = (uint)pbVar19[-3] + iVar16;
      iVar6 = (uint)pbVar19[-2] + iVar12;
      param_1 = (uint)pbVar19[-1] + iVar6;
      uVar18 = uVar18 + iVar1 + iVar17 + iVar2 + iVar13 + iVar8 + iVar3 + iVar14 + iVar10 + iVar4 +
                        iVar15 + iVar11 + iVar5 + iVar16 + iVar12 + iVar6 + param_1;
      pbVar19 = pbVar20;
    } while (param_2 + uVar9 * 0x10 + 0x20 != pbVar20);
    param_2 = param_2 + (uVar9 + 1) * 0x10;
    iVar1 = (param_3 - 0x11) + uVar9 * -0x10;
    if ((param_3 & 0xf) == 0) goto LAB_00012478;
  }
  else {
    pbVar19 = param_2 + 0x15c0;
    do {
      uVar9 = param_3;
      param_3 = uVar9 - 0x15b0;
      pbVar20 = pbVar19 + -0x15b0;
      do {
        pbVar7 = pbVar20 + 0x10;
        iVar8 = pbVar20[-0x10] + param_1;
        iVar1 = (uint)pbVar20[-0xf] + iVar8;
        iVar2 = (uint)pbVar20[-0xe] + iVar1;
        iVar10 = (uint)pbVar20[-0xd] + iVar2;
        iVar14 = (uint)pbVar20[-0xc] + iVar10;
        iVar3 = (uint)pbVar20[-0xb] + iVar14;
        iVar11 = (uint)pbVar20[-10] + iVar3;
        iVar15 = (uint)pbVar20[-9] + iVar11;
        iVar4 = (uint)pbVar20[-8] + iVar15;
        iVar12 = (uint)pbVar20[-7] + iVar4;
        iVar16 = (uint)pbVar20[-6] + iVar12;
        iVar5 = (uint)pbVar20[-5] + iVar16;
        iVar13 = (uint)pbVar20[-4] + iVar5;
        iVar17 = (uint)pbVar20[-3] + iVar13;
        iVar6 = (uint)pbVar20[-2] + iVar17;
        param_1 = (uint)pbVar20[-1] + iVar6;
        uVar18 = uVar18 + iVar8 + iVar1 + iVar2 + iVar10 + iVar14 + iVar3 + iVar11 + iVar15 + iVar4
                          + iVar12 + iVar16 + iVar5 + iVar13 + iVar17 + iVar6 + param_1;
        pbVar20 = pbVar7;
      } while (pbVar19 != pbVar7);
      param_2 = pbVar19 + -0x10;
      pbVar19 = pbVar19 + 0x15b0;
      param_1 = param_1 % 0xfff1;
      uVar18 = uVar18 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) {
      return CONCAT44(param_2,param_1 | uVar18 * 0x10000);
    }
    if (0xf < param_3) goto LAB_0001225c;
    iVar1 = uVar9 - 0x15b1;
  }
  param_1 = param_1 + *param_2;
  uVar18 = uVar18 + param_1;
  if (iVar1 != 0) {
    param_1 = param_1 + param_2[1];
    uVar18 = uVar18 + param_1;
    if (iVar1 != 1) {
      param_1 = param_1 + param_2[2];
      uVar18 = uVar18 + param_1;
      if (iVar1 != 2) {
        param_1 = param_1 + param_2[3];
        uVar18 = uVar18 + param_1;
        if (iVar1 != 3) {
          param_1 = param_1 + param_2[4];
          uVar18 = uVar18 + param_1;
          if (iVar1 != 4) {
            param_1 = param_1 + param_2[5];
            uVar18 = uVar18 + param_1;
            if (iVar1 != 5) {
              param_1 = param_1 + param_2[6];
              uVar18 = uVar18 + param_1;
              if (iVar1 != 6) {
                param_1 = param_1 + param_2[7];
                uVar18 = uVar18 + param_1;
                if (iVar1 != 7) {
                  param_1 = param_1 + param_2[8];
                  uVar18 = uVar18 + param_1;
                  if (iVar1 != 8) {
                    param_1 = param_1 + param_2[9];
                    uVar18 = uVar18 + param_1;
                    if (iVar1 != 9) {
                      param_1 = param_1 + param_2[10];
                      uVar18 = uVar18 + param_1;
                      if (iVar1 != 10) {
                        param_1 = param_1 + param_2[0xb];
                        uVar18 = uVar18 + param_1;
                        if (iVar1 != 0xb) {
                          param_1 = param_1 + param_2[0xc];
                          uVar18 = uVar18 + param_1;
                          if (iVar1 != 0xc) {
                            uVar9 = (uint)param_2[0xd];
                            param_1 = param_1 + uVar9;
                            if (iVar1 != 0xd) {
                              uVar9 = (uint)param_2[0xe];
                            }
                            uVar18 = uVar18 + param_1;
                            if (iVar1 != 0xd) {
                              param_1 = param_1 + uVar9;
                              uVar18 = uVar18 + param_1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00012478:
  return CONCAT44(0xfff1,param_1 % 0xfff1 | (uVar18 % 0xfff1) * 0x10000);
}



/* ===== adler32 @ 000124b4 size=4 ===== */

void adler32(void)

{
  (*(code *)PTR_adler32_z_0003709c)();
  return;
}



/* ===== adler32_combine @ 000124b8 size=188 ===== */

uint adler32_combine(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 >> 0x1f < 0) {
    return 0xffffffff;
  }
  FUN_000233c0(param_3,param_3 >> 0x1f,0xfff1,0);
  iVar4 = (param_1 & 0xffff) + (param_2 & 0xffff);
  iVar2 = (((param_2 >> 0x10) + (param_1 >> 0x10)) - extraout_r2) +
          ((param_1 & 0xffff) * extraout_r2) % 0xfff1;
  if (iVar4 == 0) {
    uVar3 = 0xfff0;
  }
  else {
    uVar3 = iVar4 - 1;
    if (0xfff0 < uVar3) {
      uVar3 = iVar4 - 0xfff2;
    }
  }
  uVar1 = iVar2 + 0xfff1;
  if (0x1ffe1 < uVar1) {
    uVar1 = iVar2 - 0xfff1;
  }
  if (0xfff0 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  return uVar3 | uVar1 << 0x10;
}



/* ===== adler32_combine64 @ 00012574 size=180 ===== */

uint adler32_combine64(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int extraout_r2;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_4 < 0) {
    return 0xffffffff;
  }
  FUN_000233c0(param_3,param_4,0xfff1,0);
  iVar4 = (param_1 & 0xffff) + (param_2 & 0xffff);
  iVar2 = ((param_1 >> 0x10) - extraout_r2) + (param_2 >> 0x10) +
          ((param_1 & 0xffff) * extraout_r2) % 0xfff1;
  uVar1 = iVar2 + 0xfff1;
  if (iVar4 == 0) {
    uVar3 = 0xfff0;
  }
  else {
    uVar3 = iVar4 - 1;
    if (0xfff0 < uVar3) {
      uVar3 = iVar4 - 0xfff2;
    }
  }
  if (0x1ffe1 < uVar1) {
    uVar1 = iVar2 - 0xfff1;
  }
  if (0xfff0 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  return uVar3 | uVar1 << 0x10;
}



/* ===== get_crc_table @ 00012628 size=12 ===== */

int get_crc_table(void)

{
  return (int)&DAT_00012634 + DAT_00012634;
}



/* ===== crc32_z @ 00012638 size=1472 ===== */

uint crc32_z(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int local_3c;
  uint local_34;
  int local_30;
  
  if (param_2 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = ~param_1;
    local_34 = param_3;
    if (0x16 < param_3) {
      puVar6 = param_2;
      do {
        if (((uint)puVar6 & 3) == 0) {
          local_30 = param_3 / 0x14 - 1;
          local_34 = param_3 % 0x14;
          if (local_30 != 0) goto LAB_000128ec;
          uVar7 = 0;
          uVar4 = 0;
          uVar3 = 0;
          uVar8 = 0;
          goto LAB_00012a88;
        }
        puVar5 = (uint *)((int)puVar6 + 1);
        param_3 = param_3 - 1;
        param_1 = *(uint *)(DAT_00012c00 + 0x128c0 + (((byte)*puVar6 ^ param_1) & 0xff) * 4) ^
                  param_1 >> 8;
        puVar6 = puVar5;
      } while (param_3 != 0);
      local_30 = -1;
      local_34 = 0;
LAB_000128ec:
      uVar8 = 0;
      iVar2 = DAT_00012c04 + 0x12904;
      uVar4 = 0;
      uVar3 = 0;
      uVar7 = 0;
      local_3c = local_30;
      puVar5 = puVar6;
      do {
        uVar8 = uVar8 ^ puVar5[4];
        param_1 = param_1 ^ *puVar5;
        local_3c = local_3c + -1;
        uVar4 = uVar4 ^ puVar5[3];
        uVar7 = puVar5[1] ^ uVar7;
        uVar3 = puVar5[2] ^ uVar3;
        param_1 = *(uint *)(iVar2 + (((param_1 & 0xffffff) >> 0x10) + 0x200) * 4) ^
                  *(uint *)(iVar2 + (((param_1 & 0xffff) >> 8) + 0x100) * 4) ^
                  *(uint *)(iVar2 + (param_1 & 0xff) * 4) ^
                  *(uint *)(iVar2 + ((param_1 >> 0x18) + 0x300) * 4);
        uVar7 = *(uint *)(iVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
                *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^
                *(uint *)(iVar2 + (((uVar7 & 0xffff) >> 8) + 0x100) * 4) ^
                *(uint *)(iVar2 + (((uVar7 & 0xffffff) >> 0x10) + 0x200) * 4);
        uVar3 = *(uint *)(iVar2 + ((uVar3 >> 0x18) + 0x300) * 4) ^
                *(uint *)(iVar2 + (uVar3 & 0xff) * 4) ^
                *(uint *)(iVar2 + (((uVar3 & 0xffff) >> 8) + 0x100) * 4) ^
                *(uint *)(iVar2 + (((uVar3 & 0xffffff) >> 0x10) + 0x200) * 4);
        uVar4 = *(uint *)(iVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^
                *(uint *)(iVar2 + (uVar4 & 0xff) * 4) ^
                *(uint *)(iVar2 + (((uVar4 & 0xffff) >> 8) + 0x100) * 4) ^
                *(uint *)(iVar2 + (((uVar4 & 0xffffff) >> 0x10) + 0x200) * 4);
        uVar8 = *(uint *)(iVar2 + (((uVar8 & 0xffffff) >> 0x10) + 0x200) * 4) ^
                *(uint *)(iVar2 + (uVar8 & 0xff) * 4) ^
                *(uint *)(iVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
                *(uint *)(iVar2 + (((uVar8 & 0xffff) >> 8) + 0x100) * 4);
        puVar5 = puVar5 + 5;
      } while (local_3c != 0);
      puVar6 = puVar6 + local_30 * 5;
LAB_00012a88:
      iVar2 = DAT_00012c08 + 0x12aa0;
      param_2 = puVar6 + 5;
      uVar1 = *(uint *)(iVar2 + ((param_1 ^ *puVar6) & 0xff) * 4) ^ (param_1 ^ *puVar6) >> 8;
      uVar1 = *(uint *)(iVar2 + (uVar1 & 0xff) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(iVar2 + (uVar1 & 0xff) * 4) ^ uVar1 >> 8;
      uVar7 = uVar7 ^ puVar6[1] ^ uVar1 >> 8 ^ *(uint *)(iVar2 + (uVar1 & 0xff) * 4);
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = uVar3 ^ puVar6[2] ^ uVar7 >> 8 ^ *(uint *)(iVar2 + (uVar7 & 0xff) * 4);
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = uVar4 ^ puVar6[3] ^ uVar7 >> 8 ^ *(uint *)(iVar2 + (uVar7 & 0xff) * 4);
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = uVar8 ^ puVar6[4] ^ uVar7 >> 8 ^ *(uint *)(iVar2 + (uVar7 & 0xff) * 4);
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
      param_1 = *(uint *)(iVar2 + (uVar7 & 0xff) * 4) ^ uVar7 >> 8;
    }
    if (7 < local_34) {
      iVar2 = DAT_00012bf8 + 0x12688;
      uVar7 = *(uint *)(iVar2 + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 1) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 2) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 3) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + (((byte)param_2[1] ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 5) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 6) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 7) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      if (7 < local_34 - 8) {
        uVar7 = *(uint *)(iVar2 + (((byte)param_2[2] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
        uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 9) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
        uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 10) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
        uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 0xb) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8
        ;
        uVar7 = *(uint *)(iVar2 + (((byte)param_2[3] ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
        uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 0xd) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8
        ;
        uVar7 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 0xe) ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8
        ;
        param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 0xf) ^ uVar7) & 0xff) * 4) ^
                  uVar7 >> 8;
      }
      param_2 = (uint *)((int)param_2 + (local_34 - 8 & 0xfffffff8) + 8);
      local_34 = local_34 & 7;
    }
    if (local_34 != 0) {
      iVar2 = DAT_00012bfc + 0x127f8;
      param_1 = *(uint *)(iVar2 + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      if ((((local_34 != 1) &&
           (param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 1) ^ param_1) & 0xff) * 4) ^
                      param_1 >> 8, local_34 != 2)) &&
          (param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 2) ^ param_1) & 0xff) * 4) ^
                     param_1 >> 8, local_34 != 3)) &&
         (((param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 3) ^ param_1) & 0xff) * 4) ^
                      param_1 >> 8, local_34 != 4 &&
           (param_1 = *(uint *)(iVar2 + (((byte)param_2[1] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
           local_34 != 5)) &&
          (param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 5) ^ param_1) & 0xff) * 4) ^
                     param_1 >> 8, local_34 != 6)))) {
        param_1 = *(uint *)(iVar2 + ((*(byte *)((int)param_2 + 6) ^ param_1) & 0xff) * 4) ^
                  param_1 >> 8;
      }
    }
    param_1 = ~param_1;
  }
  return param_1;
}



/* ===== crc32 @ 00012c0c size=4 ===== */

void crc32(void)

{
  (*(code *)PTR_crc32_z_00037064)();
  return;
}



/* ===== crc32_combine64 @ 00012c10 size=240 ===== */

uint crc32_combine64(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0 && param_4 == 0) {
    uVar8 = 0x80000000;
  }
  else {
    uVar4 = 3;
    uVar2 = 0x80000000;
    do {
      uVar8 = uVar2;
      if ((param_3 & 1) != 0) {
        uVar6 = 0x80000000;
        uVar8 = 0;
        uVar1 = *(uint *)(DAT_00012d00 + (uVar4 & 0x1f) * 4 + 0x1303c);
        while( true ) {
          uVar7 = uVar1 & uVar6;
          uVar5 = uVar6 - 1;
          uVar3 = uVar2 & 1;
          uVar6 = uVar6 >> 1;
          if ((uVar7 != 0) && (uVar8 = uVar8 ^ uVar2, (uVar5 & uVar1) == 0)) break;
          uVar2 = uVar2 >> 1;
          if (uVar3 != 0) {
            uVar2 = uVar2 ^ 0xedb88320;
          }
        }
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 >> 1 | param_4 << 0x1f;
      param_4 = param_4 >> 1;
      uVar2 = uVar8;
    } while (param_3 != 0 || param_4 != 0);
  }
  uVar4 = 0;
  uVar2 = 0x80000000;
  while( true ) {
    uVar6 = uVar2 & uVar8;
    uVar7 = uVar2 - 1;
    uVar1 = param_1 & 1;
    uVar2 = uVar2 >> 1;
    if ((uVar6 != 0) && (uVar4 = uVar4 ^ param_1, (uVar7 & uVar8) == 0)) break;
    param_1 = param_1 >> 1;
    if (uVar1 != 0) {
      param_1 = param_1 ^ 0xedb88320;
    }
  }
  return param_2 ^ uVar4;
}



/* ===== crc32_combine @ 00012d04 size=20 ===== */

void crc32_combine(void)

{
                    /* WARNING: Could not recover jumptable at 0x00011d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_crc32_combine64_000370b8)();
  return;
}



/* ===== crc32_combine_gen64 @ 00012d0c size=176 ===== */

uint crc32_combine_gen64(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0x80000000;
  }
  uVar2 = 0x80000000;
  uVar4 = 3;
  do {
    if ((param_1 & 1) != 0) {
      uVar8 = 0x80000000;
      uVar7 = *(uint *)(DAT_00012dbc + (uVar4 & 0x1f) * 4 + 0x13134);
      uVar1 = 0;
      uVar3 = uVar2;
      while( true ) {
        uVar2 = uVar1;
        uVar1 = uVar7 & uVar8;
        uVar6 = uVar8 - 1;
        uVar5 = uVar3 & 1;
        uVar8 = uVar8 >> 1;
        if ((uVar1 != 0) && (uVar2 = uVar2 ^ uVar3, (uVar6 & uVar7) == 0)) break;
        uVar3 = uVar3 >> 1;
        uVar1 = uVar2;
        if (uVar5 != 0) {
          uVar3 = uVar3 ^ 0xedb88320;
        }
      }
    }
    uVar4 = uVar4 + 1;
    param_1 = param_1 >> 1 | param_2 << 0x1f;
    param_2 = param_2 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return uVar2;
}



/* ===== crc32_combine_gen @ 00012dc0 size=20 ===== */

void crc32_combine_gen(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_crc32_combine_gen64_00037098)(param_1,param_1 >> 0x1f);
  return;
}



/* ===== crc32_combine_op @ 00012dc8 size=76 ===== */

uint crc32_combine_op(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0x80000000;
  uVar3 = 0;
  while( true ) {
    uVar1 = param_3 & uVar2;
    uVar5 = uVar2 - 1;
    uVar4 = param_1 & 1;
    uVar2 = uVar2 >> 1;
    if ((uVar1 != 0) && (uVar3 = uVar3 ^ param_1, (uVar5 & param_3) == 0)) break;
    param_1 = param_1 >> 1;
    if (uVar4 != 0) {
      param_1 = param_1 ^ 0xedb88320;
    }
  }
  return param_2 ^ uVar3;
}



/* ===== FUN_00012e18 @ 00012e18 size=656 ===== */

uint FUN_00012e18(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar8;
  
  uVar10 = *(uint *)(param_1 + 0x2c);
  uVar5 = *(uint *)(param_1 + 0x6c);
  iVar9 = *(int *)(param_1 + 0x38);
  uVar4 = uVar10 - 0x106;
  uVar14 = *(uint *)(param_1 + 0x78);
  pcVar13 = (char *)(iVar9 + uVar5);
  if (uVar4 < uVar5) {
    uVar10 = (uVar5 + 0x106) - uVar10;
  }
  pcVar6 = (char *)(iVar9 + uVar5 + 0x102);
  cVar12 = pcVar13[uVar14 - 1];
  if (uVar5 <= uVar4) {
    uVar10 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x7c);
  cVar11 = pcVar13[uVar14];
  uVar5 = *(uint *)(param_1 + 0x74);
  if (*(uint *)(param_1 + 0x8c) <= uVar14) {
    uVar4 = uVar4 >> 2;
  }
  uVar8 = uVar5;
  if (*(uint *)(param_1 + 0x90) < uVar5) {
    uVar8 = *(uint *)(param_1 + 0x90);
  }
  do {
    pcVar7 = (char *)(iVar9 + param_2);
    if ((((pcVar7[uVar14] == cVar11) && (pcVar7[uVar14 - 1] == cVar12)) && (*pcVar7 == *pcVar13)) &&
       (pcVar7[1] == pcVar13[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar2 = pcVar13 + 2;
      do {
        if (pcVar2[1] != pcVar7[1]) {
          pcVar2 = pcVar2 + 1;
          break;
        }
        if (pcVar2[2] != pcVar7[2]) {
          pcVar2 = pcVar2 + 2;
          break;
        }
        if (pcVar2[3] != pcVar7[3]) {
          pcVar2 = pcVar2 + 3;
          break;
        }
        if (pcVar2[4] != pcVar7[4]) {
          pcVar2 = pcVar2 + 4;
          break;
        }
        if (pcVar2[5] != pcVar7[5]) {
          pcVar2 = pcVar2 + 5;
          break;
        }
        if (pcVar2[6] != pcVar7[6]) {
          pcVar2 = pcVar2 + 6;
          break;
        }
        if (pcVar2[7] != pcVar7[7]) {
          pcVar2 = pcVar2 + 7;
          break;
        }
        pcVar2 = pcVar2 + 8;
        pcVar7 = pcVar7 + 8;
      } while (pcVar2 < pcVar6 && *pcVar2 == *pcVar7);
      iVar1 = -((int)pcVar6 - (int)pcVar2);
      uVar3 = iVar1 + 0x102;
      if ((int)uVar14 < (int)uVar3) {
        *(uint *)(param_1 + 0x70) = param_2;
        if ((int)uVar8 <= (int)uVar3) {
LAB_00013020:
          if (uVar3 <= uVar5) {
            uVar5 = uVar3;
          }
          return uVar5;
        }
        cVar11 = pcVar13[uVar3];
        cVar12 = pcVar13[iVar1 + 0x101];
        uVar14 = uVar3;
      }
    }
    uVar3 = uVar14;
    param_2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0x40) + (param_2 & *(uint *)(param_1 + 0x34)) * 2);
    if ((param_2 <= uVar10) || (uVar4 = uVar4 - 1, uVar14 = uVar3, uVar4 == 0)) goto LAB_00013020;
  } while( true );
}



/* ===== FUN_000130a8 @ 000130a8 size=1620 ===== */

void FUN_000130a8(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  size_t __n;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  void *__dest;
  int *piVar21;
  uint unaff_r11;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined1 in_q8 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  iVar10 = param_1[0xb];
  piVar21 = param_1 + 0x400;
  uVar20 = param_1[0x1d];
  iVar11 = iVar10;
  do {
    uVar6 = param_1[0x1b];
    uVar15 = (param_1[0xf] - uVar6) - uVar20;
    if (uVar6 < (uint)(iVar10 + -0x106 + iVar11)) {
      piVar13 = (int *)*param_1;
      uVar17 = piVar13[1];
    }
    else {
      memcpy((void *)param_1[0xe],(void *)(param_1[0xe] + iVar10),
             ((uVar6 + iVar10) - param_1[0xf]) + uVar20);
      uVar6 = param_1[0x1b] - iVar10;
      in_q8._0_8_ = VectorSub(*(undefined8 *)(param_1 + 0x1b),CONCAT44(iVar10,iVar10),4);
      *(undefined8 *)(param_1 + 0x1b) = in_q8._0_8_;
      iVar11 = param_1[0x13];
      param_1[0x17] = param_1[0x17] - iVar10;
      if (uVar6 < (uint)param_1[0x5ad]) {
        param_1[0x5ad] = uVar6;
      }
      uVar20 = param_1[0xb];
      iVar4 = param_1[0x11] + iVar11 * 2;
      sVar9 = (short)uVar20;
      if (iVar11 - 1U < 7) {
LAB_000132d8:
        if (*(ushort *)(iVar4 + -2) < uVar20) {
          sVar3 = 0;
        }
        else {
          sVar3 = *(ushort *)(iVar4 + -2) - sVar9;
        }
        *(short *)(iVar4 + -2) = sVar3;
        if (iVar11 != 1) {
          if (*(ushort *)(iVar4 + -4) < uVar20) {
            sVar3 = 0;
          }
          else {
            sVar3 = *(ushort *)(iVar4 + -4) - sVar9;
          }
          *(short *)(iVar4 + -4) = sVar3;
          if (iVar11 != 2) {
            if (*(ushort *)(iVar4 + -6) < uVar20) {
              sVar3 = 0;
            }
            else {
              sVar3 = *(ushort *)(iVar4 + -6) - sVar9;
            }
            *(short *)(iVar4 + -6) = sVar3;
            if (iVar11 != 3) {
              if (*(ushort *)(iVar4 + -8) < uVar20) {
                sVar3 = 0;
              }
              else {
                sVar3 = *(ushort *)(iVar4 + -8) - sVar9;
              }
              *(short *)(iVar4 + -8) = sVar3;
              if (iVar11 != 4) {
                if (*(ushort *)(iVar4 + -10) < uVar20) {
                  sVar3 = 0;
                }
                else {
                  sVar3 = *(ushort *)(iVar4 + -10) - sVar9;
                }
                *(short *)(iVar4 + -10) = sVar3;
                if (iVar11 != 5) {
                  if (*(ushort *)(iVar4 + -0xc) < uVar20) {
                    sVar3 = 0;
                  }
                  else {
                    sVar3 = *(ushort *)(iVar4 + -0xc) - sVar9;
                  }
                  *(short *)(iVar4 + -0xc) = sVar3;
                  if (iVar11 != 6) {
                    if (*(ushort *)(iVar4 + -0xe) < uVar20) {
                      sVar3 = 0;
                    }
                    else {
                      sVar3 = *(ushort *)(iVar4 + -0xe) - sVar9;
                    }
                    *(short *)(iVar4 + -0xe) = sVar3;
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar5 = (undefined8 *)(param_1[0x11] + iVar11 * 2 + -0x10);
        auVar26._8_8_ = CONCAT44(uVar20,uVar20);
        auVar26._0_8_ = CONCAT44(uVar20,uVar20);
        uVar17 = (iVar11 - 8U >> 3) + 1;
        iVar18 = 0;
        do {
          uVar12 = iVar18 + 1;
          VectorTableLookup(piVar21,uVar6,2);
          VectorTableLookup(unaff_r11,uVar6,2);
          auVar27 = VectorCopyLong(in_q8._0_8_,2,1);
          auVar25 = VectorCopyLong(in_q8._8_8_,2,1);
          auVar29 = VectorCompareGreaterThanOrEqual(auVar27,auVar26,4,1);
          auVar28 = VectorCompareGreaterThanOrEqual(auVar25,auVar26,4,1);
          auVar27 = VectorSub(auVar27,auVar26,4);
          auVar25 = VectorSub(auVar25,auVar26,4);
          auVar27 = VectorBitwiseInsertIfFalse(auVar27,(undefined1  [16])0x0,auVar29);
          in_q8 = VectorBitwiseInsertIfFalse(auVar25,(undefined1  [16])0x0,auVar28);
          VectorCopyNarrow(auVar27,4);
          VectorCopyNarrow(in_q8,4);
          iVar18 = VectorTableLookup(piVar21,iVar11,2);
          VectorTableLookup(unaff_r11,iVar11,2);
          *puVar5 = in_q8._0_8_;
          puVar5[1] = in_q8._8_8_;
          puVar5 = puVar5 + -2;
        } while (uVar12 < uVar17);
        iVar4 = iVar4 + uVar17 * -0x10;
        bVar24 = iVar11 != uVar17 * 8;
        iVar11 = iVar11 + uVar17 * -8;
        if (bVar24) goto LAB_000132d8;
      }
      iVar4 = param_1[0x10] + uVar20 * 2;
      uVar17 = uVar20;
      if (uVar20 - 1 < 7) {
LAB_00013454:
        if (*(ushort *)(iVar4 + -2) < uVar20) {
          sVar3 = 0;
        }
        else {
          sVar3 = *(ushort *)(iVar4 + -2) - sVar9;
        }
        *(short *)(iVar4 + -2) = sVar3;
        if (uVar17 != 1) {
          if (*(ushort *)(iVar4 + -4) < uVar20) {
            sVar3 = 0;
          }
          else {
            sVar3 = *(ushort *)(iVar4 + -4) - sVar9;
          }
          *(short *)(iVar4 + -4) = sVar3;
          if (uVar17 != 2) {
            if (*(ushort *)(iVar4 + -6) < uVar20) {
              sVar3 = 0;
            }
            else {
              sVar3 = *(ushort *)(iVar4 + -6) - sVar9;
            }
            *(short *)(iVar4 + -6) = sVar3;
            if (uVar17 != 3) {
              if (*(ushort *)(iVar4 + -8) < uVar20) {
                sVar3 = 0;
              }
              else {
                sVar3 = *(ushort *)(iVar4 + -8) - sVar9;
              }
              *(short *)(iVar4 + -8) = sVar3;
              if (uVar17 != 4) {
                if (*(ushort *)(iVar4 + -10) < uVar20) {
                  sVar3 = 0;
                }
                else {
                  sVar3 = *(ushort *)(iVar4 + -10) - sVar9;
                }
                *(short *)(iVar4 + -10) = sVar3;
                if (uVar17 != 5) {
                  if (*(ushort *)(iVar4 + -0xc) < uVar20) {
                    sVar3 = 0;
                  }
                  else {
                    sVar3 = *(ushort *)(iVar4 + -0xc) - sVar9;
                  }
                  *(short *)(iVar4 + -0xc) = sVar3;
                  if (uVar17 != 6) {
                    if (*(ushort *)(iVar4 + -0xe) < uVar20) {
                      sVar9 = 0;
                    }
                    else {
                      sVar9 = *(ushort *)(iVar4 + -0xe) - sVar9;
                    }
                    *(short *)(iVar4 + -0xe) = sVar9;
                  }
                }
              }
            }
          }
        }
      }
      else {
        auVar25._8_8_ = CONCAT44(uVar20,uVar20);
        auVar25._0_8_ = CONCAT44(uVar20,uVar20);
        uVar12 = (uVar20 - 8 >> 3) + 1;
        iVar18 = 0;
        do {
          uVar17 = iVar18 + 1;
          VectorTableLookup(piVar21,uVar6,2);
          VectorTableLookup(unaff_r11,uVar6,2);
          auVar27 = VectorCopyLong(in_q8._0_8_,2,1);
          auVar26 = VectorCopyLong(in_q8._8_8_,2,1);
          auVar29 = VectorCompareGreaterThanOrEqual(auVar27,auVar25,4,1);
          auVar28 = VectorCompareGreaterThanOrEqual(auVar26,auVar25,4,1);
          auVar27 = VectorSub(auVar27,auVar25,4);
          auVar26 = VectorSub(auVar26,auVar25,4);
          auVar27 = VectorBitwiseInsertIfFalse(auVar27,(undefined1  [16])0x0,auVar29);
          in_q8 = VectorBitwiseInsertIfFalse(auVar26,(undefined1  [16])0x0,auVar28);
          VectorCopyNarrow(auVar27,4);
          VectorCopyNarrow(in_q8,4);
          iVar18 = VectorTableLookup(piVar21,iVar11,2);
          puVar5 = (undefined8 *)VectorTableLookup(unaff_r11,iVar11,2);
          *puVar5 = in_q8._0_8_;
          puVar5[1] = in_q8._8_8_;
        } while (uVar17 < uVar12);
        iVar4 = iVar4 + uVar12 * -0x10;
        uVar17 = uVar20 + uVar12 * -8;
        if (uVar20 != uVar12 * 8) goto LAB_00013454;
      }
      piVar13 = (int *)*param_1;
      uVar17 = piVar13[1];
      uVar15 = uVar15 + iVar10;
    }
    if (uVar17 == 0) {
LAB_00013544:
      uVar20 = param_1[0x5b0];
      uVar6 = param_1[0xf];
      if (uVar20 < uVar6) {
        uVar15 = param_1[0x1b] + param_1[0x1d];
        if (uVar20 < uVar15) {
          __n = 0x102;
          if (uVar6 - uVar15 < 0x102) {
            __n = uVar6 - uVar15;
          }
          memset((void *)(param_1[0xe] + uVar15),0,__n);
          param_1[0x5b0] = uVar15 + __n;
        }
        else if (uVar20 < uVar15 + 0x102) {
          uVar15 = (uVar15 - uVar20) + 0x102;
          if (uVar6 - uVar20 < uVar15) {
            uVar15 = uVar6 - uVar20;
          }
          memset((void *)(param_1[0xe] + uVar20),0,uVar15);
          param_1[0x5b0] = param_1[0x5b0] + uVar15;
          return;
        }
      }
      return;
    }
    uVar20 = param_1[0x1d];
    if (uVar15 < uVar17) {
      if (uVar15 != 0) {
        iVar11 = uVar17 - uVar15;
        goto LAB_00013174;
      }
    }
    else {
      iVar11 = 0;
      uVar15 = uVar17;
LAB_00013174:
      iVar4 = param_1[0xe];
      piVar13[1] = iVar11;
      __dest = (void *)(iVar4 + uVar20 + uVar6);
      memcpy(__dest,(void *)*piVar13,uVar15);
      if (*(int *)(piVar13[7] + 0x18) == 1) {
        iVar11 = adler32(piVar13[0xc],__dest,uVar15);
        piVar13[0xc] = iVar11;
      }
      else if (*(int *)(piVar13[7] + 0x18) == 2) {
        iVar11 = crc32(piVar13[0xc],__dest,uVar15);
        piVar13[0xc] = iVar11;
      }
      uVar20 = uVar15 + param_1[0x1d];
      *piVar13 = *piVar13 + uVar15;
      piVar13[2] = piVar13[2] + uVar15;
    }
    iVar11 = param_1[0x5ad];
    param_1[0x1d] = uVar20;
    if (2 < iVar11 + uVar20) {
      iVar19 = param_1[0x1b];
      iVar18 = param_1[0xe];
      uVar15 = iVar19 - iVar11;
      uVar17 = param_1[0x16];
      uVar6 = uVar15 + 1;
      uVar22 = param_1[0x15];
      bVar1 = *(byte *)(iVar18 + uVar15);
      iVar4 = iVar18 + uVar6;
      param_1[0x12] = (uint)bVar1;
      uVar12 = ((uint)*(byte *)(iVar18 + uVar6) ^ (uint)bVar1 << (uVar17 & 0xff)) & uVar22;
      param_1[0x12] = uVar12;
      if (iVar11 != 0) {
        iVar11 = param_1[0x10];
        iVar16 = param_1[0x11];
        uVar7 = param_1[0xd];
        do {
          uVar14 = uVar6;
          iVar8 = iVar19 - iVar4;
          uVar12 = ((uint)*(byte *)(iVar4 + 1) ^ uVar12 << (uVar17 & 0xff)) & uVar22;
          iVar4 = iVar4 + 1;
          param_1[0x12] = uVar12;
          iVar23 = (iVar19 + -1) - uVar15;
          uVar2 = *(ushort *)(iVar16 + uVar12 * 2);
          unaff_r11 = (uint)uVar2;
          *(ushort *)(iVar11 + (uVar7 & uVar15) * 2) = uVar2;
          *(short *)(iVar16 + uVar12 * 2) = (short)uVar15;
          param_1[0x5ad] = iVar23;
          if (iVar18 + iVar8 + uVar20 < 3) break;
          uVar6 = uVar14 + 1;
          uVar15 = uVar14;
        } while (iVar23 != 0);
      }
    }
    if ((0x105 < uVar20) || (*(int *)(*param_1 + 4) == 0)) goto LAB_00013544;
    iVar11 = param_1[0xb];
  } while( true );
}



/* ===== FUN_0001370c @ 0001370c size=1992 ===== */

undefined4 FUN_0001370c(int *param_1,uint param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  size_t sVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  size_t sVar19;
  bool bVar20;
  undefined8 uVar21;
  
  piVar12 = (int *)*param_1;
  uVar18 = piVar12[1];
  uVar4 = param_1[3] - 5;
  uVar7 = uVar18;
  if ((uint)param_1[0xb] <= uVar4) {
    uVar4 = param_1[0xb];
  }
LAB_00013764:
  do {
    uVar10 = param_1[0x5af] + 0x2a >> 3;
    if ((uint)piVar12[4] < uVar10) {
LAB_00013b4c:
      bVar20 = false;
      sVar14 = uVar18 - uVar7;
      if (sVar14 != 0) {
        uVar4 = param_1[0xb];
        pvVar3 = (void *)param_1[0xe];
        if (sVar14 < uVar4) goto LAB_000139d4;
        goto LAB_00013b78;
      }
      uVar7 = param_1[0x1b];
      goto LAB_00013a30;
    }
    uVar10 = piVar12[4] - uVar10;
    uVar13 = param_1[0x1b] - param_1[0x17];
    uVar15 = uVar13 + uVar7;
    uVar5 = 0xffff;
    if (uVar15 < 0xffff) {
      uVar5 = uVar15;
    }
    if (uVar5 < uVar10) {
      uVar10 = uVar5;
    }
    if ((uVar10 < uVar4) && (uVar10 == 0 && param_2 != 4 || (uVar15 != uVar10 || param_2 == 0)))
    goto LAB_00013b4c;
    uVar5 = (uint)(param_2 == 4 && uVar15 == uVar10);
    FUN_0001f6c8(param_1,0,0,uVar5);
    bVar1 = (byte)(uVar10 >> 8);
    *(byte *)(param_1[2] + param_1[5] + -4) = (byte)uVar10;
    *(byte *)(param_1[2] + param_1[5] + -3) = bVar1;
    *(byte *)(param_1[2] + param_1[5] + -2) = ~(byte)uVar10;
    *(byte *)(param_1[2] + param_1[5] + -1) = ~bVar1;
    iVar17 = *param_1;
    iVar16 = *(int *)(iVar17 + 0x1c);
    puVar2 = (undefined8 *)FUN_0001f874(iVar16);
    uVar7 = *(uint *)(iVar16 + 0x14);
    if (*(uint *)(iVar17 + 0x10) <= *(uint *)(iVar16 + 0x14)) {
      uVar7 = *(uint *)(iVar17 + 0x10);
    }
    if (uVar7 != 0) {
      memcpy(*(void **)(iVar17 + 0xc),*(void **)(iVar16 + 0x10),uVar7);
      iVar6 = *(int *)(iVar16 + 0x10);
      *(uint *)(iVar17 + 0xc) = *(int *)(iVar17 + 0xc) + uVar7;
      *(uint *)(iVar16 + 0x10) = iVar6 + uVar7;
      uVar21 = *(undefined8 *)(iVar17 + 0x10);
      VectorAdd(uVar21,CONCAT44(uVar7,uVar7),4);
      uVar21 = VectorSub(uVar21,CONCAT44(uVar7,uVar7),4);
      puVar2 = (undefined8 *)VectorTableLookup(uVar5,(undefined8 *)(iVar17 + 0x10),2);
      *puVar2 = uVar21;
      iVar17 = *(int *)(iVar16 + 0x14) - uVar7;
      *(int *)(iVar16 + 0x14) = iVar17;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar16 + 8);
      }
    }
    piVar12 = (int *)*param_1;
    if (uVar13 != 0) {
      if (uVar10 <= uVar13) {
        uVar13 = uVar10;
      }
      uVar10 = uVar10 - uVar13;
      pvVar3 = memcpy((void *)piVar12[3],(void *)(param_1[0xe] + param_1[0x17]),uVar13);
      piVar12 = (int *)*param_1;
      piVar12[3] = piVar12[3] + uVar13;
      uVar21 = *(undefined8 *)(piVar12 + 4);
      VectorAdd(CONCAT44(uVar13,uVar13),uVar21,4);
      uVar21 = VectorSub(uVar21,CONCAT44(uVar13,uVar13),4);
      puVar2 = (undefined8 *)VectorTableLookup(uVar5,pvVar3,2);
      *(undefined8 *)(piVar12 + 4) = uVar21;
      param_1[0x17] = param_1[0x17] + uVar13;
    }
    uVar7 = piVar12[1];
    if (uVar10 == 0) {
      if (uVar5 != 0) break;
      goto LAB_00013764;
    }
    pvVar3 = (void *)piVar12[3];
    uVar13 = uVar10;
    if ((uVar10 < uVar7) || (uVar13 = uVar7, uVar7 != 0)) {
      piVar12[1] = uVar7 - uVar13;
      puVar2 = memcpy(pvVar3,(void *)*piVar12,uVar13);
      if (*(int *)(piVar12[7] + 0x18) == 1) {
        puVar2 = (undefined8 *)adler32(piVar12[0xc],puVar2,uVar13);
        piVar12[0xc] = (int)puVar2;
      }
      else if (*(int *)(piVar12[7] + 0x18) == 2) {
        puVar2 = (undefined8 *)crc32(piVar12[0xc],puVar2,uVar13);
        piVar12[0xc] = (int)puVar2;
      }
      *piVar12 = *piVar12 + uVar13;
      piVar12[2] = piVar12[2] + uVar13;
      piVar12 = (int *)*param_1;
      pvVar3 = (void *)piVar12[3];
      uVar7 = piVar12[1];
    }
    piVar12[3] = (int)pvVar3 + uVar10;
    uVar21 = *(undefined8 *)(piVar12 + 4);
    VectorAdd(CONCAT44(uVar10,uVar10),uVar21,4);
    uVar21 = VectorSub(uVar21,CONCAT44(uVar10,uVar10),4);
    VectorTableLookup(uVar5,puVar2,2);
    *(undefined8 *)(piVar12 + 4) = uVar21;
  } while (uVar5 == 0);
  bVar20 = true;
  sVar14 = uVar18 - uVar7;
  if (sVar14 == 0) {
    uVar7 = param_1[0x1b];
  }
  else {
    uVar4 = param_1[0xb];
    pvVar3 = (void *)param_1[0xe];
    if (sVar14 < uVar4) {
LAB_000139d4:
      uVar10 = param_1[0x1b];
      if (param_1[0xf] - uVar10 <= sVar14) {
        param_1[0x1b] = uVar10 - uVar4;
        memcpy(pvVar3,(void *)((int)pvVar3 + uVar4),uVar10 - uVar4);
        pvVar3 = (void *)param_1[0xe];
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar10 = param_1[0x1b];
        piVar12 = (int *)*param_1;
        if (uVar10 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar10;
        }
      }
      memcpy((void *)((int)pvVar3 + uVar10),(void *)(*piVar12 + (uVar7 - uVar18)),sVar14);
      sVar19 = param_1[0xb] - param_1[0x5ad];
      if (sVar14 < sVar19) {
        sVar19 = sVar14;
      }
      uVar7 = sVar14 + param_1[0x1b];
      param_1[0x1b] = uVar7;
      param_1[0x5ad] = param_1[0x5ad] + sVar19;
    }
    else {
LAB_00013b78:
      iVar16 = *piVar12;
      param_1[0x5ac] = 2;
      memcpy(pvVar3,(void *)(iVar16 - uVar4),uVar4);
      uVar7 = param_1[0xb];
      param_1[0x1b] = uVar7;
      param_1[0x5ad] = uVar7;
    }
    param_1[0x17] = uVar7;
  }
LAB_00013a30:
  if ((uint)param_1[0x5b0] < uVar7) {
    param_1[0x5b0] = uVar7;
  }
  if (bVar20) {
    return 3;
  }
  piVar12 = (int *)*param_1;
  sVar14 = piVar12[1];
  if (((param_2 & 0xfffffffb) == 0) || (sVar14 != 0)) {
    uVar4 = param_1[0xf] - uVar7;
    if (uVar4 < sVar14) {
      uVar10 = param_1[0x17];
      uVar18 = param_1[0xb];
      if ((int)uVar18 <= (int)uVar10) {
        param_1[0x1b] = uVar7 - uVar18;
        param_1[0x17] = uVar10 - uVar18;
        memcpy((void *)param_1[0xe],(void *)(param_1[0xe] + uVar18),uVar7 - uVar18);
        piVar12 = (int *)*param_1;
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar7 = param_1[0x1b];
        uVar4 = uVar4 + param_1[0xb];
        sVar14 = piVar12[1];
        if (uVar7 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar7;
        }
        goto LAB_00013c1c;
      }
      if (uVar4 != 0) {
        pvVar3 = (void *)(param_1[0xe] + uVar7);
        uVar18 = sVar14;
LAB_00013e7c:
        sVar14 = uVar4;
        iVar16 = uVar18 - sVar14;
        uVar4 = sVar14;
LAB_00013db4:
        piVar12[1] = iVar16;
        memcpy(pvVar3,(void *)*piVar12,sVar14);
        if (*(int *)(piVar12[7] + 0x18) == 1) {
          iVar16 = adler32(piVar12[0xc],pvVar3,sVar14);
          piVar12[0xc] = iVar16;
        }
        else if (*(int *)(piVar12[7] + 0x18) == 2) {
          iVar16 = crc32(piVar12[0xc],pvVar3,sVar14);
          piVar12[0xc] = iVar16;
        }
        uVar7 = param_1[0x1b];
        *piVar12 = *piVar12 + sVar14;
        piVar12[2] = piVar12[2] + sVar14;
LAB_00013e00:
        uVar7 = uVar7 + uVar4;
        uVar18 = param_1[0xb];
        uVar10 = param_1[0x17];
        uVar5 = uVar18 - param_1[0x5ad];
        param_1[0x1b] = uVar7;
        if (uVar4 < uVar5) {
          uVar5 = uVar4;
        }
        param_1[0x5ad] = param_1[0x5ad] + uVar5;
      }
    }
    else {
LAB_00013c1c:
      if (sVar14 < uVar4) {
        if (sVar14 != 0) {
          iVar16 = 0;
          pvVar3 = (void *)(param_1[0xe] + uVar7);
          uVar4 = sVar14;
          goto LAB_00013db4;
        }
        uVar10 = param_1[0x17];
        goto LAB_00013a70;
      }
      if (uVar4 != 0) {
        pvVar3 = (void *)(param_1[0xe] + uVar7);
        uVar18 = sVar14;
        if (uVar4 < sVar14) goto LAB_00013e7c;
        if (sVar14 != 0) {
          iVar16 = 0;
          goto LAB_00013db4;
        }
        goto LAB_00013e00;
      }
      uVar18 = param_1[0xb];
      uVar10 = param_1[0x17];
    }
  }
  else {
    uVar10 = param_1[0x17];
    if (uVar7 == uVar10) {
      return 1;
    }
LAB_00013a70:
    uVar18 = param_1[0xb];
  }
  if ((uint)param_1[0x5b0] < uVar7) {
    param_1[0x5b0] = uVar7;
  }
  uVar7 = uVar7 - uVar10;
  uVar4 = param_1[3] - (param_1[0x5af] + 0x2a >> 3);
  if (0xfffe < uVar4) {
    uVar4 = 0xffff;
  }
  if (uVar4 < uVar18) {
    uVar18 = uVar4;
  }
  if (uVar7 < uVar18) {
    if (param_2 == 0 || uVar7 == 0 && param_2 != 4) {
      return 0;
    }
    bVar20 = uVar4 == uVar7;
    if (uVar7 <= uVar4) {
      bVar20 = *(int *)(*param_1 + 4) == 0;
    }
    if (!bVar20) {
      return 0;
    }
    if (uVar4 < uVar7) {
      uVar7 = uVar4;
    }
    uVar18 = uVar7;
    if (param_2 == 4) {
LAB_00013d84:
      iVar16 = 1;
      goto LAB_00013c68;
    }
  }
  else {
    uVar18 = uVar4;
    if (uVar7 <= uVar4) {
      uVar18 = uVar7;
    }
    if (param_2 == 4) {
      bVar20 = uVar4 == uVar7;
      if (uVar7 <= uVar4) {
        bVar20 = *(int *)(*param_1 + 4) == 0;
      }
      if (bVar20) goto LAB_00013d84;
    }
  }
  iVar16 = 0;
LAB_00013c68:
  FUN_0001f6c8(param_1,param_1[0xe] + uVar10,uVar18,iVar16);
  iVar6 = *param_1;
  iVar17 = *(int *)(iVar6 + 0x1c);
  param_1[0x17] = param_1[0x17] + uVar18;
  FUN_0001f874(iVar17);
  uVar7 = *(uint *)(iVar17 + 0x14);
  if (*(uint *)(iVar6 + 0x10) <= *(uint *)(iVar17 + 0x14)) {
    uVar7 = *(uint *)(iVar6 + 0x10);
  }
  if (uVar7 != 0) {
    pvVar3 = memcpy(*(void **)(iVar6 + 0xc),*(void **)(iVar17 + 0x10),uVar7);
    iVar9 = *(int *)(iVar17 + 0x10);
    iVar8 = *(int *)(iVar6 + 0xc) + uVar7;
    *(int *)(iVar6 + 0xc) = iVar8;
    *(uint *)(iVar17 + 0x10) = iVar9 + uVar7;
    uVar21 = *(undefined8 *)(iVar6 + 0x10);
    VectorAdd(CONCAT44(uVar7,uVar7),uVar21,4);
    uVar21 = VectorSub(uVar21,CONCAT44(uVar7,uVar7),4);
    VectorTableLookup(iVar8,pvVar3,2);
    *(undefined8 *)(iVar6 + 0x10) = uVar21;
    iVar6 = *(int *)(iVar17 + 0x14) - uVar7;
    *(int *)(iVar17 + 0x14) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)(iVar17 + 0x10) = *(undefined4 *)(iVar17 + 8);
    }
  }
  uVar11 = 0;
  if (iVar16 != 0) {
    uVar11 = 2;
  }
  return uVar11;
}



/* ===== FUN_00013edc @ 00013edc size=1528 ===== */

bool FUN_00013edc(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int unaff_r8;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  
  iVar7 = DAT_0001427c;
  iVar11 = DAT_00014278 + 0x13ef4;
  iVar12 = DAT_00014280 + 0x13f18;
  do {
    uVar18 = param_1[0x1d];
LAB_0001403c:
    do {
      if (uVar18 < 0x106) {
        FUN_000130a8(param_1);
        uVar18 = param_1[0x1d];
        if (0x105 < uVar18) goto LAB_00014048;
        if (param_2 == 0) {
          return false;
        }
        if (uVar18 == 0) {
          uVar19 = param_1[0x1b];
          uVar18 = uVar19;
          if (1 < uVar19) {
            uVar18 = 2;
          }
          param_1[0x5ad] = uVar18;
          if (param_2 == 4) {
            iVar7 = param_1[0x17];
            if (iVar7 < 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = param_1[0xe] + iVar7;
            }
            FUN_0001fa80(param_1,iVar11,uVar19 - iVar7,1);
            iVar11 = *param_1;
            iVar7 = *(int *)(iVar11 + 0x1c);
            param_1[0x17] = param_1[0x1b];
            FUN_0001f874(iVar7);
            uVar18 = *(uint *)(iVar7 + 0x14);
            if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar7 + 0x14)) {
              uVar18 = *(uint *)(iVar11 + 0x10);
            }
            if (uVar18 != 0) {
              pvVar6 = memcpy(*(void **)(iVar11 + 0xc),*(void **)(iVar7 + 0x10),uVar18);
              iVar8 = *(int *)(iVar7 + 0x10);
              iVar12 = *(int *)(iVar11 + 0xc) + uVar18;
              *(int *)(iVar11 + 0xc) = iVar12;
              *(uint *)(iVar7 + 0x10) = iVar8 + uVar18;
              uVar21 = *(undefined8 *)(iVar11 + 0x10);
              VectorAdd(CONCAT44(uVar18,uVar18),uVar21,4);
              uVar21 = VectorSub(uVar21,CONCAT44(uVar18,uVar18),4);
              VectorTableLookup(iVar12,pvVar6,2);
              *(undefined8 *)(iVar11 + 0x10) = uVar21;
              iVar11 = *(int *)(iVar7 + 0x14) - uVar18;
              *(int *)(iVar7 + 0x14) = iVar11;
              if (iVar11 == 0) {
                *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
              }
            }
            if (*(int *)(*param_1 + 0x10) == 0) {
              uVar3 = 2;
            }
            else {
              uVar3 = 3;
            }
          }
          else {
            if (param_1[0x5a8] != 0) {
              iVar7 = param_1[0x17];
              if (iVar7 < 0) {
                iVar11 = 0;
              }
              else {
                iVar11 = param_1[0xe] + iVar7;
              }
              FUN_0001fa80(param_1,iVar11,uVar19 - iVar7,0);
              iVar11 = *param_1;
              iVar7 = *(int *)(iVar11 + 0x1c);
              param_1[0x17] = param_1[0x1b];
              FUN_0001f874(iVar7);
              uVar18 = *(uint *)(iVar7 + 0x14);
              if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar7 + 0x14)) {
                uVar18 = *(uint *)(iVar11 + 0x10);
              }
              if (uVar18 != 0) {
                pvVar6 = memcpy(*(void **)(iVar11 + 0xc),*(void **)(iVar7 + 0x10),uVar18);
                iVar8 = *(int *)(iVar7 + 0x10);
                iVar12 = *(int *)(iVar11 + 0xc) + uVar18;
                *(int *)(iVar11 + 0xc) = iVar12;
                *(uint *)(iVar7 + 0x10) = iVar8 + uVar18;
                uVar21 = *(undefined8 *)(iVar11 + 0x10);
                VectorAdd(CONCAT44(uVar18,uVar18),uVar21,4);
                uVar21 = VectorSub(uVar21,CONCAT44(uVar18,uVar18),4);
                VectorTableLookup(iVar12,pvVar6,2);
                *(undefined8 *)(iVar11 + 0x10) = uVar21;
                iVar11 = *(int *)(iVar7 + 0x14) - uVar18;
                *(int *)(iVar7 + 0x14) = iVar11;
                if (iVar11 == 0) {
                  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
                }
              }
              return *(int *)(*param_1 + 0x10) != 0;
            }
            uVar3 = 1;
          }
          return (bool)uVar3;
        }
        uVar19 = param_1[0x1b];
        if (2 < uVar18) goto LAB_0001404c;
LAB_000140b4:
        uVar18 = param_1[0x18];
      }
      else {
LAB_00014048:
        uVar19 = param_1[0x1b];
LAB_0001404c:
        iVar5 = param_1[0x11];
        uVar18 = ((uint)*(byte *)(param_1[0xe] + uVar19 + 2) ^
                 param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
        param_1[0x12] = uVar18;
        iVar8 = uVar18 * 2;
        uVar2 = *(ushort *)(iVar5 + iVar8);
        *(ushort *)(param_1[0x10] + (param_1[0xd] & uVar19) * 2) = uVar2;
        *(short *)(iVar5 + iVar8) = (short)uVar19;
        if ((uVar2 == 0) || (param_1[0xb] - 0x106U < uVar19 - uVar2)) goto LAB_000140b4;
        uVar18 = FUN_00012e18(param_1);
        uVar19 = param_1[0x1b];
        param_1[0x18] = uVar18;
      }
      iVar8 = param_1[0x5a8];
      if (uVar18 < 3) {
        bVar1 = *(byte *)(param_1[0xe] + uVar19);
        param_1[0x5a8] = iVar8 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar8) = 0;
        iVar8 = param_1[0x5a8];
        param_1[0x5a8] = iVar8 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar8) = 0;
        iVar8 = param_1[0x5a8];
        param_1[0x5a8] = iVar8 + 1;
        *(byte *)(param_1[0x5a6] + iVar8) = bVar1;
        *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
        uVar18 = param_1[0x1d] - 1;
        iVar10 = param_1[0x1b] + 1;
        param_1[0x1d] = uVar18;
        param_1[0x1b] = iVar10;
        if (param_1[0x5a8] == param_1[0x5a9]) break;
        goto LAB_0001403c;
      }
      param_1[0x5a8] = iVar8 + 1;
      uVar9 = uVar19 - param_1[0x1c] & 0xffff;
      *(char *)(param_1[0x5a6] + iVar8) = (char)uVar9;
      iVar8 = param_1[0x5a8];
      uVar19 = uVar9 - 1 & 0xffff;
      bVar1 = *(byte *)(iVar11 + (uVar18 - 3 & 0xff));
      param_1[0x5a8] = iVar8 + 1;
      *(char *)(param_1[0x5a6] + iVar8) = (char)(uVar9 >> 8);
      iVar8 = param_1[0x5a8];
      param_1[0x5a8] = iVar8 + 1;
      *(char *)(param_1[0x5a6] + iVar8) = (char)(uVar18 - 3);
      *(short *)(param_1 + bVar1 + 0x126) = (short)param_1[bVar1 + 0x126] + 1;
      if (uVar19 < 0x100) {
        bVar1 = *(byte *)(iVar12 + uVar19);
      }
      else {
        bVar1 = *(byte *)(iVar7 + (uVar19 >> 7) + 0x1400c);
      }
      *(short *)(param_1 + bVar1 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
      uVar9 = param_1[0x18];
      iVar8 = param_1[0x5a8];
      uVar18 = param_1[0x1d] - uVar9;
      iVar5 = param_1[0x5a9];
      uVar19 = param_1[0x1b];
      param_1[0x1d] = uVar18;
      uVar15 = param_1[0x15];
      uVar16 = param_1[0x16];
      if (uVar18 < 3 || (uint)param_1[0x20] < uVar9) {
        param_1[0x18] = 0;
        param_1[0x1b] = uVar9 + uVar19;
        pbVar13 = (byte *)(param_1[0xe] + uVar9 + uVar19);
        uVar4 = (uint)*pbVar13;
        param_1[0x12] = uVar4;
        param_1[0x12] = uVar15 & ((uint)pbVar13[1] ^ uVar4 << (uVar16 & 0xff));
      }
      else {
        unaff_r8 = param_1[0x11];
        iVar10 = param_1[0x10];
        pbVar13 = (byte *)(param_1[0xe] + uVar19 + 2);
        uVar17 = param_1[0xd];
        uVar14 = param_1[0x12];
        iVar20 = uVar9 - 1;
        param_1[0x18] = iVar20;
        uVar4 = uVar19;
        do {
          uVar4 = uVar4 + 1;
          param_1[0x1b] = uVar4;
          pbVar13 = pbVar13 + 1;
          iVar20 = iVar20 + -1;
          uVar14 = ((uint)*pbVar13 ^ uVar14 << (uVar16 & 0xff)) & uVar15;
          param_1[0x12] = uVar14;
          *(undefined2 *)(iVar10 + (uVar17 & uVar4) * 2) = *(undefined2 *)(unaff_r8 + uVar14 * 2);
          *(short *)(unaff_r8 + uVar14 * 2) = (short)uVar4;
          param_1[0x18] = iVar20;
        } while (iVar20 != 0);
        param_1[0x1b] = uVar9 + uVar19;
      }
      iVar10 = uVar9 + uVar19;
    } while (iVar8 != iVar5);
    iVar8 = param_1[0x17];
    if (iVar8 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_1[0xe] + iVar8;
    }
    FUN_0001fa80(param_1,iVar5,iVar10 - iVar8,0);
    iVar5 = *param_1;
    iVar8 = *(int *)(iVar5 + 0x1c);
    param_1[0x17] = param_1[0x1b];
    FUN_0001f874(iVar8);
    uVar18 = *(uint *)(iVar8 + 0x14);
    if (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar8 + 0x14)) {
      uVar18 = *(uint *)(iVar5 + 0x10);
    }
    if (uVar18 != 0) {
      pvVar6 = memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar8 + 0x10),uVar18);
      iVar10 = *(int *)(iVar8 + 0x10);
      *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar18;
      *(uint *)(iVar8 + 0x10) = iVar10 + uVar18;
      uVar21 = *(undefined8 *)(iVar5 + 0x10);
      VectorAdd(CONCAT44(uVar18,uVar18),uVar21,4);
      uVar21 = VectorSub(uVar21,CONCAT44(uVar18,uVar18),4);
      VectorTableLookup(unaff_r8,pvVar6,2);
      *(undefined8 *)(iVar5 + 0x10) = uVar21;
      iVar5 = *(int *)(iVar8 + 0x14) - uVar18;
      *(int *)(iVar8 + 0x14) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar8 + 8);
      }
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return false;
    }
  } while( true );
}



/* ===== FUN_000144f8 @ 000144f8 size=1988 ===== */

bool FUN_000144f8(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  
  iVar12 = DAT_000147c4;
  uVar5 = param_1[0x1d];
  iVar9 = DAT_000147c0 + 0x14518;
LAB_0001452c:
  if (uVar5 < 0x106) goto LAB_000146b4;
LAB_00014538:
  uVar17 = param_1[0x1b];
  uVar5 = param_1[0x18];
  iVar13 = param_1[0x1c];
LAB_00014544:
  uVar6 = 2;
  iVar14 = param_1[0x11];
  uVar10 = ((uint)*(byte *)(param_1[0xe] + uVar17 + 2) ^ param_1[0x12] << (param_1[0x16] & 0xffU)) &
           param_1[0x15];
  param_1[0x12] = uVar10;
  iVar11 = uVar10 * 2;
  uVar3 = *(ushort *)(iVar14 + iVar11);
  *(ushort *)(param_1[0x10] + (param_1[0xd] & uVar17) * 2) = uVar3;
  *(short *)(iVar14 + iVar11) = (short)uVar17;
  param_1[0x1e] = uVar5;
  param_1[0x19] = iVar13;
  param_1[0x18] = 2;
  if (((uVar3 != 0) && (uVar5 < (uint)param_1[0x20])) && (uVar17 - uVar3 <= param_1[0xb] - 0x106U))
  {
    uVar6 = FUN_00012e18(param_1);
    param_1[0x18] = uVar6;
    if (uVar6 < 6) {
      uVar17 = param_1[0x1b];
      uVar5 = param_1[0x1e];
      if ((param_1[0x22] == 1) || ((uVar6 == 3 && (0x1000 < uVar17 - param_1[0x1c])))) {
        param_1[0x18] = 2;
        if (uVar5 < 3) goto LAB_000145d8;
LAB_00014808:
        iVar11 = param_1[0x1d];
        iVar13 = param_1[0x5a8];
        uVar10 = uVar17 - param_1[0x19] & 0xffff;
        param_1[0x5a8] = iVar13 + 1;
        uVar6 = uVar10 - 1 & 0xffff;
        *(char *)(param_1[0x5a6] + iVar13) = (char)uVar6;
        iVar13 = param_1[0x5a8];
        bVar2 = *(byte *)(iVar9 + (uVar5 - 3 & 0xff));
        param_1[0x5a8] = iVar13 + 1;
        uVar10 = uVar10 - 2 & 0xffff;
        *(char *)(param_1[0x5a6] + iVar13) = (char)(uVar6 >> 8);
        iVar13 = param_1[0x5a8];
        param_1[0x5a8] = iVar13 + 1;
        *(char *)(param_1[0x5a6] + iVar13) = (char)(uVar5 - 3);
        *(short *)(param_1 + bVar2 + 0x126) = (short)param_1[bVar2 + 0x126] + 1;
        if (uVar10 < 0x100) {
          bVar2 = *(byte *)(DAT_000147c8 + 0x148ac + uVar10);
        }
        else {
          bVar2 = *(byte *)(iVar12 + (uVar10 >> 7) + 0x1462c);
        }
        *(short *)(param_1 + bVar2 + 0x262) = (short)param_1[bVar2 + 0x262] + 1;
        iVar13 = param_1[0x1e];
        iVar18 = iVar13 + param_1[0x1b];
        uVar6 = param_1[0x1b] + 1;
        uVar10 = iVar18 - 1;
        iVar16 = param_1[0x5a8];
        uVar5 = (param_1[0x1d] + 1) - iVar13;
        iVar14 = param_1[0x5a9];
        param_1[0x1d] = uVar5;
        param_1[0x1e] = iVar13 + -2;
        do {
          iVar13 = (iVar18 + -2) - uVar6;
          param_1[0x1b] = uVar6;
          if (iVar11 + -3 + uVar17 < uVar6) {
            param_1[0x1e] = iVar13;
          }
          else {
            iVar15 = param_1[0x11];
            uVar8 = ((uint)*(byte *)(param_1[0xe] + uVar6 + 2) ^
                    param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
            param_1[0x12] = uVar8;
            iVar1 = uVar8 * 2;
            *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar6) * 2) =
                 *(undefined2 *)(iVar15 + iVar1);
            *(short *)(iVar15 + iVar1) = (short)uVar6;
            param_1[0x1e] = iVar13;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar10);
        iVar13 = 0;
        param_1[0x1b] = uVar10;
        param_1[0x1a] = 0;
        param_1[0x18] = 2;
        if (iVar16 == iVar14) {
          iVar11 = param_1[0x17];
          if (-1 < iVar11) {
            iVar13 = param_1[0xe] + iVar11;
          }
          FUN_0001fa80(param_1,iVar13,uVar10 - iVar11,0);
          iVar11 = *param_1;
          iVar13 = *(int *)(iVar11 + 0x1c);
          param_1[0x17] = param_1[0x1b];
          FUN_0001f874(iVar13);
          uVar5 = *(uint *)(iVar13 + 0x14);
          if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar13 + 0x14)) {
            uVar5 = *(uint *)(iVar11 + 0x10);
          }
          if (uVar5 != 0) {
            pvVar7 = memcpy(*(void **)(iVar11 + 0xc),*(void **)(iVar13 + 0x10),uVar5);
            iVar14 = *(int *)(iVar13 + 0x10);
            *(uint *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + uVar5;
            *(uint *)(iVar13 + 0x10) = iVar14 + uVar5;
            uVar19 = *(undefined8 *)(iVar11 + 0x10);
            VectorAdd(CONCAT44(uVar5,uVar5),uVar19,4);
            uVar19 = VectorSub(uVar19,CONCAT44(uVar5,uVar5),4);
            VectorTableLookup(iVar11,pvVar7,2);
            *(undefined8 *)(iVar11 + 0x10) = uVar19;
            iVar11 = *(int *)(iVar13 + 0x14) - uVar5;
            *(int *)(iVar13 + 0x14) = iVar11;
            if (iVar11 == 0) {
              *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar13 + 8);
            }
          }
          if (*(int *)(*param_1 + 0x10) == 0) {
            return false;
          }
          uVar5 = param_1[0x1d];
        }
        goto LAB_0001452c;
      }
    }
    else {
      uVar5 = param_1[0x1e];
      uVar17 = param_1[0x1b];
    }
  }
  while( true ) {
    if ((2 < uVar5) && (uVar6 <= uVar5)) goto LAB_00014808;
LAB_000145d8:
    if (param_1[0x1a] != 0) {
      iVar13 = 0;
      iVar11 = param_1[0x5a8];
      bVar2 = *(byte *)(param_1[0xe] + uVar17 + -1);
      param_1[0x5a8] = iVar11 + 1;
      *(undefined1 *)(param_1[0x5a6] + iVar11) = 0;
      iVar11 = param_1[0x5a8];
      param_1[0x5a8] = iVar11 + 1;
      *(undefined1 *)(param_1[0x5a6] + iVar11) = 0;
      iVar11 = param_1[0x5a8];
      param_1[0x5a8] = iVar11 + 1;
      *(byte *)(param_1[0x5a6] + iVar11) = bVar2;
      *(short *)(param_1 + bVar2 + 0x25) = (short)param_1[bVar2 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a9]) {
        iVar11 = param_1[0x17];
        if (-1 < iVar11) {
          iVar13 = param_1[0xe] + iVar11;
        }
        FUN_0001fa80(param_1,iVar13,param_1[0x1b] - iVar11,0);
        iVar11 = *param_1;
        iVar13 = *(int *)(iVar11 + 0x1c);
        param_1[0x17] = param_1[0x1b];
        FUN_0001f874(iVar13);
        uVar5 = *(uint *)(iVar13 + 0x14);
        if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar13 + 0x14)) {
          uVar5 = *(uint *)(iVar11 + 0x10);
        }
        if (uVar5 != 0) {
          pvVar7 = memcpy(*(void **)(iVar11 + 0xc),*(void **)(iVar13 + 0x10),uVar5);
          iVar14 = *(int *)(iVar13 + 0x10);
          *(uint *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + uVar5;
          *(uint *)(iVar13 + 0x10) = iVar14 + uVar5;
          uVar19 = *(undefined8 *)(iVar11 + 0x10);
          VectorAdd(CONCAT44(uVar5,uVar5),uVar19,4);
          uVar19 = VectorSub(uVar19,CONCAT44(uVar5,uVar5),4);
          VectorTableLookup(iVar11,pvVar7,2);
          *(undefined8 *)(iVar11 + 0x10) = uVar19;
          iVar11 = *(int *)(iVar13 + 0x14) - uVar5;
          *(int *)(iVar13 + 0x14) = iVar11;
          if (iVar11 == 0) {
            *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar13 + 8);
          }
        }
      }
      iVar13 = *(int *)(*param_1 + 0x10);
      uVar5 = param_1[0x1d] - 1;
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = uVar5;
      if (iVar13 == 0) {
        return false;
      }
      goto LAB_0001452c;
    }
    iVar13 = param_1[0x1d];
    param_1[0x1b] = uVar17 + 1;
    param_1[0x1a] = 1;
    param_1[0x1d] = iVar13 - 1U;
    if (0x105 < iVar13 - 1U) goto LAB_00014538;
LAB_000146b4:
    FUN_000130a8(param_1);
    uVar6 = param_1[0x1d];
    if (0x105 < uVar6) goto LAB_00014538;
    if (param_2 == 0) {
      return false;
    }
    if (uVar6 == 0) {
      uVar5 = param_1[0x1b];
      if (param_1[0x1a] != 0) {
        iVar12 = param_1[0x5a8];
        bVar2 = *(byte *)(param_1[0xe] + uVar5 + -1);
        param_1[0x5a8] = iVar12 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar12) = 0;
        iVar12 = param_1[0x5a8];
        param_1[0x5a8] = iVar12 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar12) = 0;
        iVar12 = param_1[0x5a8];
        param_1[0x5a8] = iVar12 + 1;
        *(byte *)(param_1[0x5a6] + iVar12) = bVar2;
        *(short *)(param_1 + bVar2 + 0x25) = (short)param_1[bVar2 + 0x25] + 1;
        param_1[0x1a] = 0;
        uVar5 = param_1[0x1b];
      }
      uVar17 = uVar5;
      if (1 < uVar5) {
        uVar17 = 2;
      }
      param_1[0x5ad] = uVar17;
      if (param_2 == 4) {
        iVar12 = param_1[0x17];
        if (iVar12 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar12;
        }
        FUN_0001fa80(param_1,iVar9,uVar5 - iVar12,1);
        iVar9 = *param_1;
        iVar12 = *(int *)(iVar9 + 0x1c);
        param_1[0x17] = param_1[0x1b];
        FUN_0001f874(iVar12);
        uVar5 = *(uint *)(iVar12 + 0x14);
        if (*(uint *)(iVar9 + 0x10) <= *(uint *)(iVar12 + 0x14)) {
          uVar5 = *(uint *)(iVar9 + 0x10);
        }
        if (uVar5 != 0) {
          pvVar7 = memcpy(*(void **)(iVar9 + 0xc),*(void **)(iVar12 + 0x10),uVar5);
          iVar11 = *(int *)(iVar12 + 0x10);
          iVar13 = *(int *)(iVar9 + 0xc) + uVar5;
          *(int *)(iVar9 + 0xc) = iVar13;
          *(uint *)(iVar12 + 0x10) = iVar11 + uVar5;
          uVar19 = *(undefined8 *)(iVar9 + 0x10);
          VectorAdd(CONCAT44(uVar5,uVar5),uVar19,4);
          uVar19 = VectorSub(uVar19,CONCAT44(uVar5,uVar5),4);
          VectorTableLookup(iVar13,pvVar7,2);
          *(undefined8 *)(iVar9 + 0x10) = uVar19;
          iVar9 = *(int *)(iVar12 + 0x14) - uVar5;
          *(int *)(iVar12 + 0x14) = iVar9;
          if (iVar9 == 0) {
            *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar12 + 8);
          }
        }
        if (*(int *)(*param_1 + 0x10) == 0) {
          uVar4 = 2;
        }
        else {
          uVar4 = 3;
        }
        return (bool)uVar4;
      }
      if (param_1[0x5a8] != 0) {
        iVar12 = param_1[0x17];
        if (iVar12 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar12;
        }
        FUN_0001fa80(param_1,iVar9,uVar5 - iVar12,0);
        iVar9 = *param_1;
        iVar12 = *(int *)(iVar9 + 0x1c);
        param_1[0x17] = param_1[0x1b];
        FUN_0001f874(iVar12);
        uVar5 = *(uint *)(iVar12 + 0x14);
        if (*(uint *)(iVar9 + 0x10) <= *(uint *)(iVar12 + 0x14)) {
          uVar5 = *(uint *)(iVar9 + 0x10);
        }
        if (uVar5 != 0) {
          pvVar7 = memcpy(*(void **)(iVar9 + 0xc),*(void **)(iVar12 + 0x10),uVar5);
          iVar11 = *(int *)(iVar12 + 0x10);
          iVar13 = *(int *)(iVar9 + 0xc) + uVar5;
          *(int *)(iVar9 + 0xc) = iVar13;
          *(uint *)(iVar12 + 0x10) = iVar11 + uVar5;
          uVar19 = *(undefined8 *)(iVar9 + 0x10);
          VectorAdd(CONCAT44(uVar5,uVar5),uVar19,4);
          uVar19 = VectorSub(uVar19,CONCAT44(uVar5,uVar5),4);
          VectorTableLookup(iVar13,pvVar7,2);
          *(undefined8 *)(iVar9 + 0x10) = uVar19;
          iVar9 = *(int *)(iVar12 + 0x14) - uVar5;
          *(int *)(iVar12 + 0x14) = iVar9;
          if (iVar9 == 0) {
            *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar12 + 8);
          }
        }
        return *(int *)(*param_1 + 0x10) != 0;
      }
      return true;
    }
    uVar17 = param_1[0x1b];
    uVar5 = param_1[0x18];
    iVar13 = param_1[0x1c];
    if (2 < uVar6) break;
    uVar6 = 2;
    param_1[0x1e] = uVar5;
    param_1[0x19] = iVar13;
    param_1[0x18] = 2;
  }
  goto LAB_00014544;
}



/* ===== deflateSetDictionary @ 00014cd8 size=700 ===== */

undefined4 deflateSetDictionary(int *param_1,int param_2,uint param_3)

{
  size_t __n;
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *__s;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  
  if ((((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((puVar10 = (undefined4 *)param_1[7], puVar10 == (undefined4 *)0x0 ||
      (param_1 != (int *)*puVar10)))) {
    return 0xfffffffe;
  }
  iVar8 = puVar10[1];
  uVar5 = (uint)(iVar8 != 0x2a && iVar8 != 0x45);
  if (iVar8 - 0x5bU < 0x17) {
    uVar2 = ~(0x401001U >> (iVar8 - 0x5bU & 0xff)) & 1;
  }
  else {
    uVar2 = 1;
  }
  if (iVar8 == 0x29a) {
    uVar5 = 0;
  }
  if ((uVar2 & uVar5 & (iVar8 - 0x39U & 0xffffffef) != 0) != 0) {
    return 0xfffffffe;
  }
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  iVar6 = puVar10[6];
  if (iVar6 == 2) {
    return 0xfffffffe;
  }
  if (iVar6 == 1) {
    if (iVar8 != 0x2a) {
      return 0xfffffffe;
    }
    if (puVar10[0x1d] != 0) {
      return 0xfffffffe;
    }
    iVar8 = adler32(param_1[0xc],param_2,param_3);
    uVar5 = puVar10[0xb];
    param_1[0xc] = iVar8;
    puVar10[6] = 0;
    if (param_3 < uVar5) goto LAB_00014e38;
  }
  else {
    if (puVar10[0x1d] != 0) {
      return 0xfffffffe;
    }
    uVar5 = puVar10[0xb];
    puVar10[6] = 0;
    if (param_3 < uVar5) goto LAB_00014e38;
    if (iVar6 == 0) {
      __s = (void *)puVar10[0x11];
      __n = (puVar10[0x13] + 0x7fffffff) * 2;
      *(undefined2 *)((int)__s + __n) = 0;
      memset(__s,0,__n);
      uVar5 = puVar10[0xb];
      puVar10[0x1b] = 0;
      puVar10[0x17] = 0;
      puVar10[0x5ad] = 0;
    }
  }
  param_2 = param_2 + (param_3 - uVar5);
  param_3 = uVar5;
LAB_00014e38:
  iVar8 = param_1[1];
  param_1[1] = param_3;
  iVar7 = *param_1;
  *param_1 = param_2;
  FUN_000130a8(puVar10);
  uVar5 = puVar10[0x1d];
  uVar1 = DAT_00014f98;
  while (DAT_00014f98 = uVar1, 2 < uVar5) {
    uVar3 = puVar10[0x1b];
    uVar14 = puVar10[0x16];
    pbVar15 = (byte *)(puVar10[0xe] + uVar3 + 1);
    uVar13 = puVar10[0x15];
    iVar16 = puVar10[0x11];
    iVar12 = puVar10[0x10];
    uVar11 = puVar10[0xd];
    uVar9 = puVar10[0x12];
    uVar2 = uVar3;
    uVar4 = uVar3 + 1;
    while( true ) {
      pbVar15 = pbVar15 + 1;
      uVar9 = ((uint)*pbVar15 ^ uVar9 << (uVar14 & 0xff)) & uVar13;
      puVar10[0x12] = uVar9;
      *(undefined2 *)(iVar12 + (uVar11 & uVar2) * 2) = *(undefined2 *)(iVar16 + uVar9 * 2);
      *(short *)(iVar16 + uVar9 * 2) = (short)uVar2;
      if (uVar4 == (uVar3 - 2) + uVar5) break;
      uVar2 = uVar4;
      uVar4 = uVar4 + 1;
    }
    puVar10[0x1b] = uVar4;
    puVar10[0x1d] = 2;
    FUN_000130a8(puVar10);
    uVar1 = DAT_00014f98;
    uVar5 = puVar10[0x1d];
  }
  iVar12 = puVar10[0x1b];
  puVar10[0x1b] = uVar5 + iVar12;
  puVar10[0x17] = uVar5 + iVar12;
  puVar10[0x5ad] = uVar5;
  *(undefined8 *)(puVar10 + 0x1d) = uVar1;
  puVar10[0x18] = 2;
  puVar10[0x1a] = 0;
  *param_1 = iVar7;
  param_1[1] = iVar8;
  puVar10[6] = iVar6;
  return 0;
}



/* ===== deflateGetDictionary @ 00014fa0 size=256 ===== */

undefined4 deflateGetDictionary(int param_1,void *param_2,size_t *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 == (int *)0x0 || (param_1 != *piVar1)))) {
    return 0xfffffffe;
  }
  iVar3 = piVar1[1];
  uVar2 = (uint)(iVar3 != 0x2a && iVar3 != 0x45);
  if (iVar3 - 0x5bU < 0x17) {
    uVar4 = ~(0x401001U >> (iVar3 - 0x5bU & 0xff)) & 1;
  }
  else {
    uVar4 = 1;
  }
  if (iVar3 == 0x29a) {
    uVar2 = 0;
  }
  if ((uVar4 & uVar2 & (iVar3 - 0x39U & 0xffffffef) != 0) != 0) {
    return 0xfffffffe;
  }
  uVar4 = piVar1[0x1b] + piVar1[0x1d];
  uVar2 = piVar1[0xb];
  if (uVar4 < (uint)piVar1[0xb]) {
    uVar2 = uVar4;
  }
  if (param_2 != (void *)0x0 && uVar2 != 0) {
    memcpy(param_2,(void *)(piVar1[0xe] + (uVar4 - uVar2)),uVar2);
  }
  if (param_3 != (size_t *)0x0) {
    *param_3 = uVar2;
  }
  return 0;
}



/* ===== deflateResetKeep @ 000150a0 size=312 ===== */

undefined4 deflateResetKeep(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  if ((piVar6 != (int *)0x0) && (param_1 == *piVar6)) {
    iVar7 = piVar6[1];
    uVar4 = iVar7 - 0x5b;
    if (uVar4 < 0x17) {
      uVar5 = ~(0x401001U >> (uVar4 & 0xff));
    }
    else {
      uVar5 = 1;
    }
    uVar3 = (uint)(iVar7 != 0x2a && iVar7 != 0x45);
    if (uVar4 < 0x17) {
      uVar5 = uVar5 & 1;
    }
    if (iVar7 == 0x29a) {
      uVar3 = 0;
    }
    if ((uVar5 & uVar3 & (iVar7 - 0x39U & 0xffffffef) != 0) == 0) {
      iVar7 = piVar6[6];
      iVar2 = piVar6[2];
      bVar8 = iVar7 < 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (bVar8) {
        iVar7 = -iVar7;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 2;
      if (bVar8) {
        piVar6[6] = iVar7;
      }
      piVar6[5] = 0;
      piVar6[4] = iVar2;
      if (iVar7 == 2) {
        piVar6[1] = 0x39;
        uVar1 = crc32(0,0);
      }
      else {
        piVar6[1] = 0x2a;
        uVar1 = adler32(0,0);
      }
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      piVar6[10] = -2;
      FUN_0001f5f8(piVar6);
      return 0;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateReset @ 000151d8 size=180 ===== */

int deflateReset(int param_1)

{
  size_t __n;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *__s;
  
  iVar4 = deflateResetKeep();
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  __s = *(void **)(iVar7 + 0x44);
  __n = (*(int *)(iVar7 + 0x4c) + 0x7fffffff) * 2;
  *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x2c) << 1;
  *(undefined2 *)((int)__s + __n) = 0;
  memset(__s,0,__n);
  iVar6 = *(int *)(iVar7 + 0x84) * 0xc;
  iVar5 = DAT_0001528c + 0x15244;
  *(undefined4 *)(iVar7 + 0x6c) = 0;
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  iVar4 = iVar5 + iVar6;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  uVar1 = *(ushort *)(iVar4 + 2);
  uVar2 = *(ushort *)(iVar4 + 4);
  uVar3 = *(ushort *)(iVar4 + 6);
  *(uint *)(iVar7 + 0x8c) = (uint)*(ushort *)(iVar5 + iVar6);
  *(uint *)(iVar7 + 0x80) = (uint)uVar1;
  *(uint *)(iVar7 + 0x90) = (uint)uVar2;
  *(uint *)(iVar7 + 0x7c) = (uint)uVar3;
  *(undefined4 *)(iVar7 + 0x16b4) = 0;
  *(undefined4 *)(iVar7 + 0x78) = 2;
  *(undefined4 *)(iVar7 + 0x60) = 2;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined4 *)(iVar7 + 0x48) = 0;
  return 0;
}



/* ===== deflateSetHeader @ 00015290 size=192 ===== */

undefined4 deflateSetHeader(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     ((piVar3 = *(int **)(param_1 + 0x1c), piVar3 == (int *)0x0 || (param_1 != *piVar3)))) {
    return 0xfffffffe;
  }
  iVar5 = piVar3[1];
  uVar1 = iVar5 - 0x5b;
  if (uVar1 < 0x17) {
    uVar2 = ~(0x401001U >> (uVar1 & 0xff));
  }
  else {
    uVar2 = 1;
  }
  uVar4 = (uint)(iVar5 != 0x2a && iVar5 != 0x45);
  if (uVar1 < 0x17) {
    uVar2 = uVar2 & 1;
  }
  if (iVar5 == 0x29a) {
    uVar4 = 0;
  }
  if (((uVar2 & uVar4 & (iVar5 - 0x39U & 0xffffffef) != 0) == 0) && (piVar3[6] == 2)) {
    piVar3[7] = param_2;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== deflatePending @ 00015350 size=220 ===== */

undefined4 deflatePending(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 == (int *)0x0 || (param_1 != *piVar2)))) {
    return 0xfffffffe;
  }
  iVar3 = piVar2[1];
  uVar1 = (uint)(iVar3 != 0x2a && iVar3 != 0x45);
  if (iVar3 - 0x5bU < 0x17) {
    uVar4 = ~(0x401001U >> (iVar3 - 0x5bU & 0xff)) & 1;
  }
  else {
    uVar4 = 1;
  }
  if (iVar3 == 0x29a) {
    uVar1 = 0;
  }
  if ((uVar4 & uVar1 & (iVar3 - 0x39U & 0xffffffef) != 0) != 0) {
    return 0xfffffffe;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = piVar2[5];
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = piVar2[0x5af];
  return 0;
}



/* ===== deflatePrime @ 0001542c size=340 ===== */

undefined4 deflatePrime(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if ((((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) &&
      (piVar5 = *(int **)(param_1 + 0x1c), piVar5 != (int *)0x0)) && (param_1 == *piVar5)) {
    iVar2 = piVar5[1];
    uVar3 = (uint)(iVar2 != 0x45 && iVar2 != 0x2a);
    if (iVar2 - 0x5bU < 0x17) {
      uVar1 = ~(0x401001U >> (iVar2 - 0x5bU & 0xff)) & 1;
    }
    else {
      uVar1 = 1;
    }
    if (iVar2 == 0x29a) {
      uVar3 = 0;
    }
    if ((uVar1 & uVar3 & (iVar2 - 0x39U & 0xffffffef) != 0) == 0) {
      if ((param_2 < 0x11) && (piVar5[4] + 2U <= (uint)piVar5[0x5a6])) {
        puVar4 = (ushort *)(piVar5 + 0x5ae);
        do {
          uVar1 = piVar5[0x5af];
          uVar3 = 0x10 - uVar1;
          if ((int)param_2 < (int)uVar3) {
            *puVar4 = *puVar4 | (ushort)((param_3 & ~(-1 << (param_2 & 0xff))) << (uVar1 & 0xff));
            piVar5[0x5af] = uVar1 + param_2;
            FUN_0001f874(piVar5);
            return 0;
          }
          *puVar4 = *puVar4 | (ushort)(((1 << (uVar3 & 0xff)) - 1U & param_3) << (uVar1 & 0xff));
          piVar5[0x5af] = 0x10;
          param_3 = (int)param_3 >> (uVar3 & 0xff);
          FUN_0001f874(piVar5);
          param_2 = param_2 - uVar3;
        } while (param_2 != 0);
        return 0;
      }
      return 0xfffffffb;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateTune @ 00015580 size=196 ===== */

undefined4 deflateTune(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  piVar5 = *(int **)(param_1 + 0x1c);
  if ((piVar5 != (int *)0x0) && (param_1 == *piVar5)) {
    iVar3 = piVar5[1];
    uVar1 = iVar3 - 0x5b;
    if (uVar1 < 0x17) {
      uVar2 = ~(0x401001U >> (uVar1 & 0xff));
    }
    else {
      uVar2 = 1;
    }
    uVar4 = (uint)(iVar3 != 0x2a && iVar3 != 0x45);
    if (uVar1 < 0x17) {
      uVar2 = uVar2 & 1;
    }
    if (iVar3 == 0x29a) {
      uVar4 = 0;
    }
    if ((uVar2 & uVar4 & (iVar3 - 0x39U & 0xffffffef) != 0) == 0) {
      piVar5[0x24] = param_4;
      piVar5[0x23] = param_2;
      piVar5[0x20] = param_3;
      piVar5[0x1f] = param_5;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateBound @ 00015644 size=440 ===== */

char * deflateBound(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  
  uVar5 = param_2 + 4 + (param_2 >> 3) + (param_2 >> 8) + (param_2 >> 9);
  uVar4 = param_2 + 7 + (param_2 >> 5) + (param_2 >> 7) + (param_2 >> 0xb);
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((piVar10 = *(int **)(param_1 + 0x1c), piVar10 != (int *)0x0 && (param_1 == *piVar10)))) {
    iVar6 = piVar10[1];
    uVar2 = (uint)(iVar6 != 0x2a && iVar6 != 0x45);
    if (iVar6 - 0x5bU < 0x17) {
      uVar8 = ~(0x401001U >> (iVar6 - 0x5bU & 0xff)) & 1;
    }
    else {
      uVar8 = 1;
    }
    if (iVar6 == 0x29a) {
      uVar2 = 0;
    }
    if ((uVar8 & uVar2 & (iVar6 - 0x39U & 0xffffffef) != 0) == 0) {
      iVar6 = piVar10[6];
      if (iVar6 == 1) {
        if (piVar10[0x1b] == 0) {
          pcVar3 = (char *)0x6;
        }
        else {
          pcVar3 = (char *)0xa;
        }
      }
      else if (iVar6 == 2) {
        iVar6 = piVar10[7];
        if (iVar6 == 0) {
          pcVar3 = (char *)0x12;
        }
        else {
          pcVar7 = *(char **)(iVar6 + 0x1c);
          if (*(int *)(iVar6 + 0x10) == 0) {
            pcVar3 = (char *)0x12;
          }
          else {
            pcVar3 = (char *)(*(int *)(iVar6 + 0x14) + 0x14);
          }
          if (pcVar7 != (char *)0x0) {
            pcVar9 = pcVar3 + (1 - (int)pcVar7);
            do {
              pcVar3 = pcVar7 + (int)pcVar9;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          pcVar7 = *(char **)(iVar6 + 0x24);
          if (pcVar7 != (char *)0x0) {
            pcVar9 = pcVar3 + (1 - (int)pcVar7);
            do {
              pcVar3 = pcVar7 + (int)pcVar9;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          if (*(int *)(iVar6 + 0x2c) != 0) {
            pcVar3 = pcVar3 + 2;
          }
        }
      }
      else if (iVar6 == 0) {
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)0x6;
      }
      if ((piVar10[0xc] == 0xf) && (piVar10[0x14] == 0xf)) {
        return pcVar3 + param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19);
      }
      if ((uint)piVar10[0x14] < (uint)piVar10[0xc]) {
        uVar5 = uVar4;
      }
      return pcVar3 + uVar5;
    }
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  return (char *)(uVar5 + 6);
}



/* ===== deflate @ 000157fc size=6564 ===== */

uint deflate(int *param_1,uint param_2)

{
  size_t __n;
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  char cVar22;
  bool bVar23;
  undefined8 uVar24;
  
  iVar15 = DAT_00015e50 + 0x15814;
  if ((((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((piVar14 = (int *)param_1[7], piVar14 == (int *)0x0 || (param_1 != (int *)*piVar14)))) {
    return 0xfffffffe;
  }
  iVar5 = piVar14[1];
  uVar12 = (uint)(iVar5 != 0x2a && iVar5 != 0x45);
  if (iVar5 - 0x5bU < 0x17) {
    uVar9 = ~(0x401001U >> (iVar5 - 0x5bU & 0xff)) & 1;
  }
  else {
    uVar9 = 1;
  }
  if (iVar5 == 0x29a) {
    uVar12 = 0;
  }
  if ((uVar9 & uVar12 & (iVar5 - 0x39U & 0xffffffef) != 0) != 0) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((iVar19 = param_1[1], iVar19 != 0 && (*param_1 == 0)))) ||
     (iVar5 == 0x29a && param_2 != 4)) {
    param_1[6] = *(int *)(*(int *)(iVar15 + DAT_000170a8) + 0x10);
    return 0xfffffffe;
  }
  if (param_1[4] == 0) goto LAB_0001704c;
  iVar21 = piVar14[10];
  piVar14[10] = param_2;
  if (piVar14[5] == 0) {
    if (iVar19 == 0) {
      iVar19 = iVar21 * 2;
      if (param_2 == 5) {
        iVar13 = 1;
      }
      else {
        iVar13 = param_2 << 1;
      }
      if (4 < iVar21) {
        iVar19 = iVar19 + -9;
      }
      if (iVar13 <= iVar19 && param_2 != 4) goto LAB_0001704c;
      goto LAB_00015e84;
    }
    if (iVar5 == 0x29a) goto LAB_0001704c;
LAB_00015928:
    if (iVar5 != 0x2a) {
LAB_00015adc:
      if (iVar5 == 0x39) {
        iVar15 = crc32(0,0);
        iVar19 = piVar14[5];
        iVar5 = piVar14[2];
        param_1[0xc] = iVar15;
        piVar14[5] = iVar19 + 1;
        *(undefined1 *)(iVar5 + iVar19) = 0x1f;
        iVar15 = piVar14[5];
        piVar14[5] = iVar15 + 1;
        *(undefined1 *)(piVar14[2] + iVar15) = 0x8b;
        iVar15 = piVar14[5];
        piVar14[5] = iVar15 + 1;
        *(undefined1 *)(piVar14[2] + iVar15) = 8;
        piVar10 = (int *)piVar14[7];
        if (piVar10 == (int *)0x0) {
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 0;
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 0;
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 0;
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 0;
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 0;
          if (piVar14[0x21] == 9) {
            cVar22 = '\x02';
          }
          else {
            cVar22 = (1 < piVar14[0x22] || piVar14[0x21] < 2) << 2;
          }
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(char *)(piVar14[2] + iVar15) = cVar22;
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(undefined1 *)(piVar14[2] + iVar15) = 3;
          iVar15 = param_1[7];
          piVar14[1] = 0x71;
          FUN_0001f874(iVar15);
          uVar12 = *(uint *)(iVar15 + 0x14);
          if ((uint)param_1[4] <= *(uint *)(iVar15 + 0x14)) {
            uVar12 = param_1[4];
          }
          if (uVar12 != 0) {
            pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
            iVar5 = *(int *)(iVar15 + 0x10);
            param_1[3] = param_1[3] + uVar12;
            iVar5 = iVar5 + uVar12;
            *(int *)(iVar15 + 0x10) = iVar5;
            uVar24 = *(undefined8 *)(param_1 + 4);
            VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
            uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
            VectorTableLookup(iVar5,pvVar6,2);
            *(undefined8 *)(param_1 + 4) = uVar24;
            iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
            *(int *)(iVar15 + 0x14) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
            }
          }
          if (piVar14[5] != 0) goto LAB_00016244;
          iVar5 = piVar14[1];
          goto LAB_00016458;
        }
        cVar22 = *piVar10 != 0;
        if (piVar10[0xb] != 0) {
          cVar22 = cVar22 + '\x02';
        }
        if (piVar10[4] != 0) {
          cVar22 = cVar22 + '\x04';
        }
        if (piVar10[7] != 0) {
          cVar22 = cVar22 + '\b';
        }
        iVar15 = piVar14[5];
        if (piVar10[9] != 0) {
          cVar22 = cVar22 + '\x10';
        }
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = cVar22;
        iVar15 = piVar14[5];
        uVar8 = *(undefined4 *)(piVar14[7] + 4);
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)uVar8;
        iVar15 = piVar14[5];
        uVar8 = *(undefined4 *)(piVar14[7] + 4);
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)((uint)uVar8 >> 8);
        iVar15 = piVar14[5];
        uVar4 = *(undefined2 *)(piVar14[7] + 6);
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)uVar4;
        iVar15 = piVar14[5];
        uVar1 = *(undefined1 *)(piVar14[7] + 7);
        piVar14[5] = iVar15 + 1;
        *(undefined1 *)(piVar14[2] + iVar15) = uVar1;
        if (piVar14[0x21] == 9) {
          cVar22 = '\x02';
        }
        else {
          cVar22 = (1 < piVar14[0x22] || piVar14[0x21] < 2) << 2;
        }
        iVar15 = piVar14[5];
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = cVar22;
        iVar15 = piVar14[5];
        uVar8 = *(undefined4 *)(piVar14[7] + 0xc);
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)uVar8;
        iVar15 = piVar14[7];
        if (*(int *)(iVar15 + 0x10) != 0) {
          uVar8 = *(undefined4 *)(iVar15 + 0x14);
          iVar15 = piVar14[5];
          piVar14[5] = iVar15 + 1;
          *(char *)(piVar14[2] + iVar15) = (char)uVar8;
          iVar15 = piVar14[5];
          uVar8 = *(undefined4 *)(piVar14[7] + 0x14);
          piVar14[5] = iVar15 + 1;
          *(char *)(piVar14[2] + iVar15) = (char)((uint)uVar8 >> 8);
          iVar15 = piVar14[7];
        }
        if (*(int *)(iVar15 + 0x2c) != 0) {
          iVar5 = crc32(param_1[0xc],piVar14[2],piVar14[5]);
          iVar15 = piVar14[7];
          param_1[0xc] = iVar5;
        }
        piVar14[8] = 0;
        piVar14[1] = 0x45;
LAB_00015ce0:
        iVar5 = *(int *)(iVar15 + 0x10);
        if (iVar5 != 0) {
          iVar19 = piVar14[8];
          uVar12 = piVar14[5];
          uVar18 = (uint)*(ushort *)(iVar15 + 0x14) - iVar19;
          uVar17 = piVar14[3];
          uVar9 = uVar12;
          if (uVar17 < uVar12 + uVar18) {
            do {
              memcpy((void *)(piVar14[2] + uVar12),(void *)(iVar5 + iVar19),uVar17 - uVar12);
              uVar9 = piVar14[3];
              iVar15 = *(int *)(piVar14[7] + 0x2c);
              piVar14[5] = uVar9;
              if (iVar15 != 0 && uVar12 < uVar9) {
                iVar15 = crc32(param_1[0xc],piVar14[2] + uVar12,uVar9 - uVar12);
                param_1[0xc] = iVar15;
              }
              iVar15 = param_1[7];
              piVar14[8] = piVar14[8] + (uVar17 - uVar12);
              FUN_0001f874(iVar15);
              uVar9 = param_1[4];
              if (*(uint *)(iVar15 + 0x14) < (uint)param_1[4]) {
                uVar9 = *(uint *)(iVar15 + 0x14);
              }
              if (uVar9 != 0) {
                pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar9);
                iVar5 = *(int *)(iVar15 + 0x10);
                param_1[3] = param_1[3] + uVar9;
                *(uint *)(iVar15 + 0x10) = iVar5 + uVar9;
                uVar24 = *(undefined8 *)(param_1 + 4);
                VectorAdd(CONCAT44(uVar9,uVar9),uVar24,4);
                uVar24 = VectorSub(uVar24,CONCAT44(uVar9,uVar9),4);
                VectorTableLookup(iVar15,pvVar6,2);
                *(undefined8 *)(param_1 + 4) = uVar24;
                iVar5 = *(int *)(iVar15 + 0x14) - uVar9;
                *(int *)(iVar15 + 0x14) = iVar5;
                if (iVar5 == 0) {
                  *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
                }
              }
              uVar18 = uVar18 + (uVar12 - uVar17);
              if (piVar14[5] != 0) goto LAB_00016244;
              uVar17 = piVar14[3];
              iVar19 = piVar14[8];
              iVar5 = *(int *)(piVar14[7] + 0x10);
              uVar12 = 0;
              uVar9 = 0;
            } while (uVar17 < uVar18);
          }
          memcpy((void *)(piVar14[2] + uVar9),(void *)(iVar5 + iVar19),uVar18);
          iVar15 = piVar14[7];
          iVar5 = *(int *)(iVar15 + 0x2c);
          uVar18 = uVar18 + piVar14[5];
          piVar14[5] = uVar18;
          bVar23 = iVar5 == 0;
          if ((bVar23 || uVar9 <= uVar18) && (!bVar23 && uVar18 != uVar9)) {
            iVar5 = crc32(param_1[0xc],piVar14[2] + uVar9,uVar18 - uVar9);
            iVar15 = piVar14[7];
            param_1[0xc] = iVar5;
          }
          piVar14[8] = 0;
        }
        piVar14[1] = 0x49;
      }
      else {
LAB_00016458:
        if (iVar5 == 0x45) {
          iVar15 = piVar14[7];
          goto LAB_00015ce0;
        }
        if (iVar5 != 0x49) goto LAB_00015e9c;
        iVar15 = piVar14[7];
      }
      if (*(int *)(iVar15 + 0x1c) != 0) {
        uVar12 = piVar14[5];
        uVar9 = uVar12;
        while( true ) {
          if (piVar14[3] == uVar9) {
            if (*(int *)(iVar15 + 0x2c) != 0 && uVar12 < uVar9) {
              iVar15 = crc32(param_1[0xc],piVar14[2] + uVar12,uVar9 - uVar12);
              param_1[0xc] = iVar15;
            }
            iVar15 = param_1[7];
            FUN_0001f874(iVar15);
            uVar12 = *(uint *)(iVar15 + 0x14);
            if ((uint)param_1[4] <= uVar12) {
              uVar12 = param_1[4];
            }
            if (uVar12 != 0) {
              pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
              iVar5 = *(int *)(iVar15 + 0x10);
              param_1[3] = param_1[3] + uVar12;
              *(uint *)(iVar15 + 0x10) = iVar5 + uVar12;
              uVar24 = *(undefined8 *)(param_1 + 4);
              VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
              uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
              VectorTableLookup(uVar12,pvVar6,2);
              *(undefined8 *)(param_1 + 4) = uVar24;
              iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
              *(int *)(iVar15 + 0x14) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
              }
            }
            if (piVar14[5] != 0) goto LAB_00016244;
            iVar15 = piVar14[7];
            uVar12 = 0;
            uVar9 = 0;
          }
          iVar15 = *(int *)(iVar15 + 0x1c);
          iVar5 = piVar14[8];
          piVar14[8] = iVar5 + 1;
          cVar22 = *(char *)(iVar15 + iVar5);
          piVar14[5] = uVar9 + 1;
          *(char *)(piVar14[2] + uVar9) = cVar22;
          if (cVar22 == '\0') break;
          uVar9 = piVar14[5];
          iVar15 = piVar14[7];
        }
        iVar15 = piVar14[7];
        if ((*(int *)(iVar15 + 0x2c) != 0) && (uVar12 < (uint)piVar14[5])) {
          iVar5 = crc32(param_1[0xc],piVar14[2] + uVar12,piVar14[5] - uVar12);
          iVar15 = piVar14[7];
          param_1[0xc] = iVar5;
        }
        piVar14[8] = 0;
      }
      piVar14[1] = 0x5b;
      goto LAB_00016870;
    }
    if (piVar14[6] != 0) {
      uVar12 = piVar14[0xc] * 0x1000 - 0x7800;
      if ((piVar14[0x22] < 2) && (iVar15 = piVar14[0x21], 1 < iVar15)) {
        if (iVar15 < 6) {
          uVar12 = uVar12 | 0x40;
        }
        else if (iVar15 == 6) {
          uVar12 = uVar12 | 0x80;
        }
        else {
          uVar12 = uVar12 | 0xc0;
        }
      }
      iVar15 = piVar14[5];
      if (piVar14[0x1b] != 0) {
        uVar12 = uVar12 | 0x20;
      }
      piVar14[5] = iVar15 + 1;
      iVar5 = (uVar12 / 0x1f) * 0x1f + 0x1f;
      *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 8);
      iVar15 = piVar14[5];
      piVar14[5] = iVar15 + 1;
      *(char *)(piVar14[2] + iVar15) = (char)iVar5;
      if (piVar14[0x1b] != 0) {
        iVar15 = piVar14[5];
        iVar5 = param_1[0xc];
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 0x18);
        iVar15 = piVar14[5];
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 0x10);
        iVar5 = piVar14[5];
        iVar15 = param_1[0xc];
        piVar14[5] = iVar5 + 1;
        *(char *)(piVar14[2] + iVar5) = (char)((ushort)(short)iVar15 >> 8);
        iVar5 = piVar14[5];
        piVar14[5] = iVar5 + 1;
        *(char *)(piVar14[2] + iVar5) = (char)(short)iVar15;
      }
      iVar15 = adler32(0,0);
      iVar5 = param_1[7];
      param_1[0xc] = iVar15;
      piVar14[1] = 0x71;
      FUN_0001f874(iVar5);
      uVar12 = *(uint *)(iVar5 + 0x14);
      if ((uint)param_1[4] <= uVar12) {
        uVar12 = param_1[4];
      }
      if (uVar12 != 0) {
        pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar5 + 0x10),uVar12);
        iVar15 = *(int *)(iVar5 + 0x10);
        piVar10 = param_1 + 4;
        param_1[3] = param_1[3] + uVar12;
        *(uint *)(iVar5 + 0x10) = iVar15 + uVar12;
        VectorAdd(CONCAT44(uVar12,uVar12),*(undefined8 *)piVar10,4);
        uVar24 = VectorSub(*(undefined8 *)piVar10,CONCAT44(uVar12,uVar12),4);
        VectorTableLookup(piVar10,pvVar6,2);
        *(undefined8 *)piVar10 = uVar24;
        iVar15 = *(int *)(iVar5 + 0x14) - uVar12;
        *(int *)(iVar5 + 0x14) = iVar15;
        if (iVar15 == 0) {
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
        }
      }
      if (piVar14[5] != 0) goto LAB_00016244;
      iVar5 = piVar14[1];
      goto LAB_00015adc;
    }
    piVar14[1] = 0x71;
  }
  else {
    FUN_0001f874(piVar14);
    uVar9 = param_1[4];
    uVar12 = piVar14[5];
    if (uVar9 <= (uint)piVar14[5]) {
      uVar12 = uVar9;
    }
    if (uVar12 != 0) {
      memcpy((void *)param_1[3],(void *)piVar14[4],uVar12);
      iVar13 = piVar14[5];
      iVar19 = piVar14[4];
      iVar21 = param_1[5];
      iVar5 = param_1[4];
      param_1[3] = param_1[3] + uVar12;
      piVar14[4] = iVar19 + uVar12;
      uVar9 = iVar5 - uVar12;
      param_1[5] = iVar21 + uVar12;
      param_1[4] = uVar9;
      piVar14[5] = iVar13 - uVar12;
      if (iVar13 - uVar12 == 0) {
        piVar14[4] = piVar14[2];
      }
    }
    if (uVar9 == 0) goto LAB_000162e0;
    iVar5 = piVar14[1];
LAB_00015e84:
    if (iVar5 != 0x29a) goto LAB_00015928;
    if (param_1[1] != 0) {
LAB_0001704c:
      param_1[6] = *(int *)(*(int *)(iVar15 + DAT_000170a8) + 0x1c);
      return 0xfffffffb;
    }
LAB_00015e9c:
    if (iVar5 == 0x5b) {
      iVar15 = piVar14[7];
LAB_00016870:
      if (*(int *)(iVar15 + 0x24) == 0) {
        iVar15 = *(int *)(iVar15 + 0x2c);
LAB_00016190:
        piVar14[1] = 0x67;
        goto LAB_00016198;
      }
      uVar12 = piVar14[5];
      uVar9 = uVar12;
      while( true ) {
        if (piVar14[3] == uVar9) {
          if (*(int *)(iVar15 + 0x2c) != 0 && uVar12 < uVar9) {
            iVar15 = crc32(param_1[0xc],piVar14[2] + uVar12,uVar9 - uVar12);
            param_1[0xc] = iVar15;
          }
          iVar15 = param_1[7];
          FUN_0001f874(iVar15);
          uVar12 = *(uint *)(iVar15 + 0x14);
          if ((uint)param_1[4] <= uVar12) {
            uVar12 = param_1[4];
          }
          if (uVar12 != 0) {
            pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
            iVar5 = *(int *)(iVar15 + 0x10);
            param_1[3] = param_1[3] + uVar12;
            *(uint *)(iVar15 + 0x10) = iVar5 + uVar12;
            uVar24 = *(undefined8 *)(param_1 + 4);
            VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
            uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
            VectorTableLookup(uVar12,pvVar6,2);
            *(undefined8 *)(param_1 + 4) = uVar24;
            iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
            *(int *)(iVar15 + 0x14) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
            }
          }
          if (piVar14[5] != 0) goto LAB_00016244;
          iVar15 = piVar14[7];
          uVar12 = 0;
          uVar9 = 0;
        }
        iVar15 = *(int *)(iVar15 + 0x24);
        iVar5 = piVar14[8];
        piVar14[8] = iVar5 + 1;
        cVar22 = *(char *)(iVar15 + iVar5);
        piVar14[5] = uVar9 + 1;
        *(char *)(piVar14[2] + uVar9) = cVar22;
        if (cVar22 == '\0') break;
        uVar9 = piVar14[5];
        iVar15 = piVar14[7];
      }
      iVar15 = *(int *)(piVar14[7] + 0x2c);
      if (iVar15 != 0) {
        if (uVar12 < (uint)piVar14[5]) {
          iVar5 = crc32(param_1[0xc],piVar14[2] + uVar12,piVar14[5] - uVar12);
          iVar15 = *(int *)(piVar14[7] + 0x2c);
          param_1[0xc] = iVar5;
        }
        goto LAB_00016190;
      }
    }
    else {
      if (iVar5 != 0x67) goto LAB_00015eac;
      iVar15 = *(int *)(piVar14[7] + 0x2c);
LAB_00016198:
      if (iVar15 != 0) {
        iVar15 = piVar14[5];
        if ((uint)piVar14[3] < iVar15 + 2U) {
          iVar15 = param_1[7];
          FUN_0001f874(iVar15);
          uVar12 = *(uint *)(iVar15 + 0x14);
          if ((uint)param_1[4] <= *(uint *)(iVar15 + 0x14)) {
            uVar12 = param_1[4];
          }
          if (uVar12 != 0) {
            pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
            iVar5 = *(int *)(iVar15 + 0x10);
            param_1[3] = param_1[3] + uVar12;
            iVar5 = iVar5 + uVar12;
            *(int *)(iVar15 + 0x10) = iVar5;
            uVar24 = *(undefined8 *)(param_1 + 4);
            VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
            uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
            VectorTableLookup(iVar5,pvVar6,2);
            *(undefined8 *)(param_1 + 4) = uVar24;
            iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
            *(int *)(iVar15 + 0x14) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
            }
          }
          iVar15 = 0;
          if (piVar14[5] != 0) goto LAB_00016244;
        }
        iVar5 = param_1[0xc];
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)iVar5;
        iVar15 = piVar14[5];
        iVar5 = param_1[0xc];
        piVar14[5] = iVar15 + 1;
        *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 8);
        iVar15 = crc32(0,0);
        param_1[0xc] = iVar15;
      }
    }
    iVar15 = param_1[7];
    piVar14[1] = 0x71;
    FUN_0001f874(iVar15);
    uVar12 = *(uint *)(iVar15 + 0x14);
    if ((uint)param_1[4] <= uVar12) {
      uVar12 = param_1[4];
    }
    if (uVar12 != 0) {
      pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
      iVar5 = *(int *)(iVar15 + 0x10);
      piVar10 = param_1 + 4;
      param_1[3] = param_1[3] + uVar12;
      *(uint *)(iVar15 + 0x10) = iVar5 + uVar12;
      VectorAdd(CONCAT44(uVar12,uVar12),*(undefined8 *)piVar10,4);
      uVar24 = VectorSub(*(undefined8 *)piVar10,CONCAT44(uVar12,uVar12),4);
      VectorTableLookup(piVar10,pvVar6,2);
      *(undefined8 *)piVar10 = uVar24;
      iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
      *(int *)(iVar15 + 0x14) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
      }
    }
    if (piVar14[5] != 0) {
LAB_00016244:
      piVar14[10] = -1;
      return 0;
    }
  }
LAB_00015eac:
  if ((param_1[1] == 0) && (piVar14[0x1d] == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    if (piVar14[1] == 0x29a) goto LAB_00015f3c;
  }
  if (piVar14[0x21] == 0) {
    uVar12 = FUN_0001370c(piVar14,param_2);
LAB_00015f1c:
    uVar9 = uVar12 & 0xfffffffd;
    if (uVar12 - 2 < 2) {
      piVar14[1] = 0x29a;
      if ((uVar12 & 0xfffffffd) != 0) goto LAB_00015f3c;
    }
    else {
LAB_0001660c:
      if (uVar9 != 0) {
        if (uVar12 != 1) {
LAB_00015f3c:
          if (param_2 != 4) {
            return 0;
          }
LAB_00015f44:
          if (piVar14[6] < 1) {
            return 1;
          }
          iVar15 = piVar14[5];
          iVar5 = param_1[0xc];
          piVar14[5] = iVar15 + 1;
          if (piVar14[6] == 2) {
            *(char *)(piVar14[2] + iVar15) = (char)iVar5;
            iVar15 = piVar14[5];
            iVar5 = param_1[0xc];
            piVar14[5] = iVar15 + 1;
            *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 8);
            iVar15 = piVar14[5];
            uVar4 = *(undefined2 *)((int)param_1 + 0x32);
            piVar14[5] = iVar15 + 1;
            *(char *)(piVar14[2] + iVar15) = (char)uVar4;
            iVar15 = piVar14[5];
            uVar1 = *(undefined1 *)((int)param_1 + 0x33);
            piVar14[5] = iVar15 + 1;
            *(undefined1 *)(piVar14[2] + iVar15) = uVar1;
            iVar5 = piVar14[5];
            iVar15 = param_1[2];
            piVar14[5] = iVar5 + 1;
            *(char *)(piVar14[2] + iVar5) = (char)iVar15;
            iVar15 = piVar14[5];
            iVar5 = param_1[2];
            piVar14[5] = iVar15 + 1;
            *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 8);
            iVar15 = piVar14[5];
            uVar4 = *(undefined2 *)((int)param_1 + 10);
            piVar14[5] = iVar15 + 1;
            *(char *)(piVar14[2] + iVar15) = (char)uVar4;
            uVar1 = *(undefined1 *)((int)param_1 + 0xb);
            iVar15 = piVar14[5];
            piVar14[5] = iVar15 + 1;
            *(undefined1 *)(piVar14[2] + iVar15) = uVar1;
          }
          else {
            *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 0x18);
            iVar15 = piVar14[5];
            piVar14[5] = iVar15 + 1;
            *(char *)(piVar14[2] + iVar15) = (char)((uint)iVar5 >> 0x10);
            iVar5 = piVar14[5];
            iVar15 = param_1[0xc];
            piVar14[5] = iVar5 + 1;
            *(char *)(piVar14[2] + iVar5) = (char)((ushort)(short)iVar15 >> 8);
            iVar5 = piVar14[5];
            piVar14[5] = iVar5 + 1;
            *(char *)(piVar14[2] + iVar5) = (char)(short)iVar15;
          }
          iVar15 = param_1[7];
          FUN_0001f874(iVar15);
          uVar12 = *(uint *)(iVar15 + 0x14);
          if ((uint)param_1[4] <= uVar12) {
            uVar12 = param_1[4];
          }
          if (uVar12 != 0) {
            pvVar6 = memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
            iVar5 = param_1[3];
            iVar19 = *(int *)(iVar15 + 0x10);
            param_1[3] = iVar5 + uVar12;
            *(uint *)(iVar15 + 0x10) = iVar19 + uVar12;
            uVar24 = *(undefined8 *)(param_1 + 4);
            VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
            uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
            VectorTableLookup(iVar5 + uVar12,pvVar6,2);
            *(undefined8 *)(param_1 + 4) = uVar24;
            iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
            *(int *)(iVar15 + 0x14) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
            }
          }
          iVar5 = piVar14[6];
          iVar15 = iVar5;
          if (0 < iVar5) {
            iVar15 = -iVar5;
          }
          if (0 < iVar5) {
            piVar14[6] = iVar15;
            return (uint)(piVar14[5] == 0);
          }
          return (uint)(piVar14[5] == 0);
        }
LAB_0001661c:
        if (param_2 == 1) {
          FUN_0001f910(piVar14);
        }
        else if ((param_2 != 5) && (FUN_0001f6c8(piVar14,0,0), param_2 == 3)) {
          pvVar6 = (void *)piVar14[0x11];
          __n = (piVar14[0x13] + 0x7fffffff) * 2;
          *(undefined2 *)((int)pvVar6 + __n) = 0;
          memset(pvVar6,0,__n);
          if (piVar14[0x1d] == 0) {
            piVar14[0x1b] = 0;
            piVar14[0x17] = 0;
            piVar14[0x5ad] = 0;
          }
        }
        iVar15 = param_1[7];
        FUN_0001f874(iVar15);
        uVar12 = *(uint *)(iVar15 + 0x14);
        uVar9 = param_1[4];
        if (uVar9 <= uVar12) {
          uVar12 = uVar9;
        }
        if (uVar12 != 0) {
          memcpy((void *)param_1[3],*(void **)(iVar15 + 0x10),uVar12);
          iVar19 = *(int *)(iVar15 + 0x10);
          iVar13 = *(int *)(iVar15 + 0x14) - uVar12;
          iVar21 = param_1[5];
          iVar5 = param_1[4];
          param_1[3] = param_1[3] + uVar12;
          *(uint *)(iVar15 + 0x10) = iVar19 + uVar12;
          uVar9 = iVar5 - uVar12;
          param_1[5] = iVar21 + uVar12;
          param_1[4] = uVar9;
          *(int *)(iVar15 + 0x14) = iVar13;
          if (iVar13 == 0) {
            *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
          }
        }
        if (uVar9 != 0) goto LAB_00015f3c;
        goto LAB_000162e0;
      }
    }
  }
  else if (piVar14[0x22] == 2) {
    do {
      iVar15 = piVar14[0x1d];
      do {
        if ((iVar15 == 0) && (FUN_000130a8(piVar14), piVar14[0x1d] == 0)) {
          if (param_2 == 0) goto LAB_00016138;
          piVar14[0x5ad] = 0;
          if (param_2 != 4) {
            if (piVar14[0x5a8] == 0) goto LAB_0001661c;
            iVar15 = piVar14[0x17];
            if (iVar15 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar14[0xe] + iVar15;
            }
            goto LAB_00016554;
          }
          iVar15 = piVar14[0x17];
          if (iVar15 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = piVar14[0xe] + iVar15;
          }
          FUN_0001fa80(piVar14,iVar5,piVar14[0x1b] - iVar15,1);
          iVar15 = *piVar14;
          iVar5 = *(int *)(iVar15 + 0x1c);
          piVar14[0x17] = piVar14[0x1b];
          FUN_0001f874(iVar5);
          uVar12 = *(uint *)(iVar5 + 0x14);
          if (*(uint *)(iVar15 + 0x10) <= *(uint *)(iVar5 + 0x14)) {
            uVar12 = *(uint *)(iVar15 + 0x10);
          }
          if (uVar12 != 0) {
            pvVar6 = memcpy(*(void **)(iVar15 + 0xc),*(void **)(iVar5 + 0x10),uVar12);
            iVar21 = *(int *)(iVar5 + 0x10);
            iVar19 = *(int *)(iVar15 + 0xc) + uVar12;
            *(int *)(iVar15 + 0xc) = iVar19;
            *(uint *)(iVar5 + 0x10) = iVar21 + uVar12;
            uVar24 = *(undefined8 *)(iVar15 + 0x10);
            VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
            uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
            VectorTableLookup(iVar19,pvVar6,2);
            *(undefined8 *)(iVar15 + 0x10) = uVar24;
            iVar15 = *(int *)(iVar5 + 0x14) - uVar12;
            *(int *)(iVar5 + 0x14) = iVar15;
            if (iVar15 == 0) {
              *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
            }
          }
          goto LAB_00016120;
        }
        iVar15 = piVar14[0x5a8];
        piVar14[0x18] = 0;
        bVar2 = *(byte *)(piVar14[0xe] + piVar14[0x1b]);
        piVar14[0x5a8] = iVar15 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar15) = 0;
        iVar15 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar15 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar15) = 0;
        iVar15 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar15 + 1;
        *(byte *)(piVar14[0x5a6] + iVar15) = bVar2;
        *(short *)(piVar14 + bVar2 + 0x25) = (short)piVar14[bVar2 + 0x25] + 1;
        iVar5 = piVar14[0x1b];
        iVar15 = piVar14[0x1d] + -1;
        piVar14[0x1d] = iVar15;
        piVar14[0x1b] = iVar5 + 1;
      } while (piVar14[0x5a8] != piVar14[0x5a9]);
      iVar15 = piVar14[0x17];
      if (iVar15 < 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = piVar14[0xe] + iVar15;
      }
      FUN_0001fa80(piVar14,iVar19,(iVar5 + 1) - iVar15,0);
      iVar5 = *piVar14;
      iVar15 = *(int *)(iVar5 + 0x1c);
      piVar14[0x17] = piVar14[0x1b];
      FUN_0001f874(iVar15);
      uVar12 = *(uint *)(iVar15 + 0x14);
      if (*(uint *)(iVar5 + 0x10) <= uVar12) {
        uVar12 = *(uint *)(iVar5 + 0x10);
      }
      if (uVar12 != 0) {
        pvVar6 = memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar15 + 0x10),uVar12);
        iVar19 = *(int *)(iVar15 + 0x10);
        *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar12;
        *(uint *)(iVar15 + 0x10) = iVar19 + uVar12;
        uVar24 = *(undefined8 *)(iVar5 + 0x10);
        VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
        uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
        VectorTableLookup(iVar15,pvVar6,2);
        *(undefined8 *)(iVar5 + 0x10) = uVar24;
        iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
        *(int *)(iVar15 + 0x14) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
        }
      }
    } while (*(int *)(*piVar14 + 0x10) != 0);
  }
  else {
    if (piVar14[0x22] != 3) {
      uVar12 = (**(code **)(piVar14[0x21] * 0xc + DAT_00015e54 + 0x15f1c))(piVar14,param_2);
      goto LAB_00015f1c;
    }
    iVar15 = DAT_00016ae0 + 0x16cb4;
    pbVar16 = (byte *)(DAT_00016ae4 + 0x16cbc);
    do {
      uVar12 = piVar14[0x1d];
      do {
        if (uVar12 < 0x103) {
          FUN_000130a8(piVar14);
          uVar12 = piVar14[0x1d];
          if (0x102 < uVar12) goto LAB_00016cc0;
          if (param_2 == 0) goto LAB_00016138;
          if (uVar12 != 0) {
            iVar19 = piVar14[0x1b];
            piVar14[0x18] = 0;
            iVar5 = piVar14[0xe];
            if (2 < uVar12) goto LAB_00016cd0;
            goto LAB_00016cf0;
          }
          piVar14[0x5ad] = 0;
          if (param_2 == 4) {
            iVar15 = piVar14[0x17];
            if (iVar15 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar14[0xe] + iVar15;
            }
            FUN_0001fa80(piVar14,iVar5,piVar14[0x1b] - iVar15,1);
            iVar5 = *piVar14;
            iVar15 = *(int *)(iVar5 + 0x1c);
            piVar14[0x17] = piVar14[0x1b];
            FUN_0001f874(iVar15);
            uVar12 = *(uint *)(iVar15 + 0x14);
            if (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar15 + 0x14)) {
              uVar12 = *(uint *)(iVar5 + 0x10);
            }
            if (uVar12 != 0) {
              pvVar6 = memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar15 + 0x10),uVar12);
              iVar21 = *(int *)(iVar15 + 0x10);
              iVar19 = *(int *)(iVar5 + 0xc) + uVar12;
              *(int *)(iVar5 + 0xc) = iVar19;
              *(uint *)(iVar15 + 0x10) = iVar21 + uVar12;
              uVar24 = *(undefined8 *)(iVar5 + 0x10);
              VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
              uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
              VectorTableLookup(iVar19,pvVar6,2);
              *(undefined8 *)(iVar5 + 0x10) = uVar24;
              iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
              *(int *)(iVar15 + 0x14) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
              }
            }
LAB_00016120:
            iVar15 = *(int *)(*piVar14 + 0x10);
            piVar14[1] = 0x29a;
            if (iVar15 != 0) goto LAB_00015f44;
            goto LAB_00016138;
          }
          if (piVar14[0x5a8] != 0) {
            iVar15 = piVar14[0x17];
            if (iVar15 < 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar14[0xe] + iVar15;
            }
LAB_00016554:
            FUN_0001fa80(piVar14,iVar5,piVar14[0x1b] - iVar15,0);
            iVar5 = *piVar14;
            iVar15 = *(int *)(iVar5 + 0x1c);
            piVar14[0x17] = piVar14[0x1b];
            FUN_0001f874(iVar15);
            uVar12 = *(uint *)(iVar15 + 0x14);
            if (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar15 + 0x14)) {
              uVar12 = *(uint *)(iVar5 + 0x10);
            }
            if (uVar12 != 0) {
              pvVar6 = memcpy(*(void **)(iVar5 + 0xc),*(void **)(iVar15 + 0x10),uVar12);
              iVar21 = *(int *)(iVar15 + 0x10);
              iVar19 = *(int *)(iVar5 + 0xc) + uVar12;
              *(int *)(iVar5 + 0xc) = iVar19;
              *(uint *)(iVar15 + 0x10) = iVar21 + uVar12;
              uVar24 = *(undefined8 *)(iVar5 + 0x10);
              VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
              uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
              VectorTableLookup(iVar19,pvVar6,2);
              *(undefined8 *)(iVar5 + 0x10) = uVar24;
              iVar5 = *(int *)(iVar15 + 0x14) - uVar12;
              *(int *)(iVar15 + 0x14) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 8);
              }
            }
            uVar12 = (uint)(*(int *)(*piVar14 + 0x10) != 0);
            uVar9 = uVar12;
            goto LAB_0001660c;
          }
          goto LAB_0001661c;
        }
LAB_00016cc0:
        iVar19 = piVar14[0x1b];
        iVar5 = piVar14[0xe];
        piVar14[0x18] = 0;
LAB_00016cd0:
        if (iVar19 == 0) {
LAB_00016cf0:
          bVar2 = *(byte *)(iVar5 + iVar19);
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          *(undefined1 *)(piVar14[0x5a6] + iVar5) = 0;
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          *(undefined1 *)(piVar14[0x5a6] + iVar5) = 0;
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          *(byte *)(piVar14[0x5a6] + iVar5) = bVar2;
          *(short *)(piVar14 + bVar2 + 0x25) = (short)piVar14[bVar2 + 0x25] + 1;
          uVar12 = piVar14[0x1d] - 1;
          iVar5 = piVar14[0x1b] + 1;
          piVar14[0x1d] = uVar12;
          bVar23 = piVar14[0x5a8] == piVar14[0x5a9];
          piVar14[0x1b] = iVar5;
        }
        else {
          iVar21 = iVar5 + iVar19 + -1;
          cVar22 = *(char *)(iVar5 + iVar19 + -1);
          if (((*(char *)(iVar21 + 1) != cVar22) || (*(char *)(iVar21 + 2) != cVar22)) ||
             (*(char *)(iVar21 + 3) != cVar22)) goto LAB_00016cf0;
          pcVar20 = (char *)(iVar21 + 3);
          pcVar11 = (char *)(iVar5 + iVar19 + 0x102);
          do {
            if (pcVar20[1] != cVar22) {
              pcVar20 = pcVar20 + 1;
              break;
            }
            if (pcVar20[2] != cVar22) {
              pcVar20 = pcVar20 + 2;
              break;
            }
            if (pcVar20[3] != cVar22) {
              pcVar20 = pcVar20 + 3;
              break;
            }
            if (pcVar20[4] != cVar22) {
              pcVar20 = pcVar20 + 4;
              break;
            }
            if (pcVar20[5] != cVar22) {
              pcVar20 = pcVar20 + 5;
              break;
            }
            if (pcVar20[6] != cVar22) {
              pcVar20 = pcVar20 + 6;
              break;
            }
            if (pcVar20[7] != cVar22) {
              pcVar20 = pcVar20 + 7;
              break;
            }
            pcVar20 = pcVar20 + 8;
          } while (pcVar20 < pcVar11 && *pcVar20 == cVar22);
          uVar9 = 0x102 - ((int)pcVar11 - (int)pcVar20);
          piVar14[0x18] = uVar9;
          if (uVar12 < uVar9) {
            piVar14[0x18] = uVar12;
            uVar9 = uVar12;
          }
          else if (uVar9 < 3) goto LAB_00016cf0;
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          *(undefined1 *)(piVar14[0x5a6] + iVar5) = 1;
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          bVar2 = *(byte *)(iVar15 + (uVar9 - 3 & 0xff));
          *(undefined1 *)(piVar14[0x5a6] + iVar5) = 0;
          iVar5 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar5 + 1;
          bVar3 = *pbVar16;
          *(char *)(piVar14[0x5a6] + iVar5) = (char)(uVar9 - 3);
          *(short *)(piVar14 + bVar2 + 0x126) = (short)piVar14[bVar2 + 0x126] + 1;
          *(short *)(piVar14 + bVar3 + 0x262) = (short)piVar14[bVar3 + 0x262] + 1;
          iVar5 = piVar14[0x18];
          uVar12 = piVar14[0x1d] - iVar5;
          piVar14[0x18] = 0;
          iVar5 = iVar5 + piVar14[0x1b];
          bVar23 = piVar14[0x5a8] == piVar14[0x5a9];
          piVar14[0x1d] = uVar12;
          piVar14[0x1b] = iVar5;
        }
      } while (!bVar23);
      iVar19 = piVar14[0x17];
      if (iVar19 < 0) {
        iVar21 = 0;
      }
      else {
        iVar21 = piVar14[0xe] + iVar19;
      }
      FUN_0001fa80(piVar14,iVar21,iVar5 - iVar19,0);
      iVar19 = *piVar14;
      iVar5 = *(int *)(iVar19 + 0x1c);
      piVar14[0x17] = piVar14[0x1b];
      FUN_0001f874(iVar5);
      uVar12 = *(uint *)(iVar19 + 0x10);
      if (*(uint *)(iVar5 + 0x14) < *(uint *)(iVar19 + 0x10)) {
        uVar12 = *(uint *)(iVar5 + 0x14);
      }
      if (uVar12 != 0) {
        memcpy(*(void **)(iVar19 + 0xc),*(void **)(iVar5 + 0x10),uVar12);
        iVar21 = *(int *)(iVar5 + 0x10);
        *(uint *)(iVar19 + 0xc) = *(int *)(iVar19 + 0xc) + uVar12;
        *(uint *)(iVar5 + 0x10) = iVar21 + uVar12;
        uVar24 = *(undefined8 *)(iVar19 + 0x10);
        VectorAdd(CONCAT44(uVar12,uVar12),uVar24,4);
        uVar24 = VectorSub(uVar24,CONCAT44(uVar12,uVar12),4);
        puVar7 = (undefined8 *)VectorTableLookup(pbVar16,(undefined8 *)(iVar19 + 0x10),2);
        *puVar7 = uVar24;
        iVar19 = *(int *)(iVar5 + 0x14) - uVar12;
        *(int *)(iVar5 + 0x14) = iVar19;
        if (iVar19 == 0) {
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
        }
      }
    } while (*(int *)(*piVar14 + 0x10) != 0);
  }
LAB_00016138:
  if (param_1[4] != 0) {
    return 0;
  }
LAB_000162e0:
  piVar14[10] = -1;
  return 0;
}



/* ===== deflateParams @ 000171e8 size=1280 ===== */

undefined4 deflateParams(int param_1,uint param_2,uint param_3)

{
  size_t __n;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  void *pvVar15;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  void *__s;
  undefined1 in_q8 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     ((piVar14 = *(int **)(param_1 + 0x1c), piVar14 == (int *)0x0 || (param_1 != *piVar14)))) {
    return 0xfffffffe;
  }
  iVar4 = piVar14[1];
  uVar12 = iVar4 - 0x5b;
  if (uVar12 < 0x17) {
    uVar13 = ~(0x401001U >> (uVar12 & 0xff));
  }
  else {
    uVar13 = 1;
  }
  uVar6 = (uint)(iVar4 != 0x2a && iVar4 != 0x45);
  if (uVar12 < 0x17) {
    uVar13 = uVar13 & 1;
  }
  if (iVar4 == 0x29a) {
    uVar6 = 0;
  }
  if ((uVar13 & uVar6 & (iVar4 - 0x39U & 0xffffffef) != 0) != 0) {
    return 0xfffffffe;
  }
  if (param_2 == 0xffffffff) {
    param_2 = 6;
    bVar9 = false;
  }
  else if (param_2 < 10) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (4 < param_3) {
    bVar9 = true;
  }
  if (bVar9) {
    return 0xfffffffe;
  }
  uVar12 = piVar14[0x21];
  if (((piVar14[0x22] != param_3) ||
      (*(int *)(param_2 * 0xc + DAT_000176fc + 0x173b8 + 8) !=
       *(int *)(uVar12 * 0xc + DAT_000176fc + 0x173b8 + 8))) && (piVar14[10] != -2)) {
    iVar4 = deflate(param_1,5);
    if (iVar4 == -2) {
      return 0xfffffffe;
    }
    if ((*(int *)(param_1 + 4) != 0) || (piVar14[0x17] != piVar14[0x1b] + piVar14[0x1d])) {
      return 0xfffffffb;
    }
    uVar12 = piVar14[0x21];
  }
  if (param_2 == uVar12) goto LAB_00017394;
  if ((uVar12 == 0) && (piVar14[0x5ac] != 0)) {
    __s = (void *)piVar14[0x11];
    iVar4 = piVar14[0x13];
    if (piVar14[0x5ac] == 1) {
      pvVar15 = (void *)((int)__s + iVar4 * 2);
      uVar12 = piVar14[0xb];
      if (iVar4 - 1U < 7) {
LAB_00017478:
        sVar11 = (short)uVar12;
        if (*(ushort *)((int)pvVar15 + -2) < uVar12) {
          sVar10 = 0;
        }
        else {
          sVar10 = *(ushort *)((int)pvVar15 + -2) - sVar11;
        }
        *(short *)((int)pvVar15 + -2) = sVar10;
        if (iVar4 != 1) {
          if (*(ushort *)((int)pvVar15 + -4) < uVar12) {
            sVar10 = 0;
          }
          else {
            sVar10 = *(ushort *)((int)pvVar15 + -4) - sVar11;
          }
          *(short *)((int)pvVar15 + -4) = sVar10;
          if (iVar4 != 2) {
            if (*(ushort *)((int)pvVar15 + -6) < uVar12) {
              sVar10 = 0;
            }
            else {
              sVar10 = *(ushort *)((int)pvVar15 + -6) - sVar11;
            }
            *(short *)((int)pvVar15 + -6) = sVar10;
            if (iVar4 != 3) {
              if (*(ushort *)((int)pvVar15 + -8) < uVar12) {
                sVar10 = 0;
              }
              else {
                sVar10 = *(ushort *)((int)pvVar15 + -8) - sVar11;
              }
              *(short *)((int)pvVar15 + -8) = sVar10;
              if (iVar4 != 4) {
                if (*(ushort *)((int)pvVar15 + -10) < uVar12) {
                  sVar10 = 0;
                }
                else {
                  sVar10 = *(ushort *)((int)pvVar15 + -10) - sVar11;
                }
                *(short *)((int)pvVar15 + -10) = sVar10;
                if (iVar4 != 5) {
                  if (*(ushort *)((int)pvVar15 + -0xc) < uVar12) {
                    sVar10 = 0;
                  }
                  else {
                    sVar10 = *(ushort *)((int)pvVar15 + -0xc) - sVar11;
                  }
                  *(short *)((int)pvVar15 + -0xc) = sVar10;
                  if (iVar4 != 6) {
                    if (*(ushort *)((int)pvVar15 + -0xe) < uVar12) {
                      sVar11 = 0;
                    }
                    else {
                      sVar11 = *(ushort *)((int)pvVar15 + -0xe) - sVar11;
                    }
                    *(short *)((int)pvVar15 + -0xe) = sVar11;
                  }
                }
              }
            }
          }
        }
      }
      else {
        puVar8 = (undefined8 *)((int)__s + iVar4 * 2 + -0x10);
        auVar17._8_8_ = CONCAT44(uVar12,uVar12);
        auVar17._0_8_ = CONCAT44(uVar12,uVar12);
        uVar6 = (iVar4 - 8U >> 3) + 1;
        uVar13 = 0;
        puVar5 = puVar8;
        do {
          uVar13 = uVar13 + 1;
          puVar8 = puVar8 + -2;
          VectorTableLookup(unaff_r10,puVar8,2);
          VectorTableLookup(unaff_r11,puVar8,2);
          auVar18 = VectorCopyLong(in_q8._0_8_,2,1);
          auVar16 = VectorCopyLong(in_q8._8_8_,2,1);
          auVar20 = VectorCompareGreaterThanOrEqual(auVar18,auVar17,4,1);
          auVar19 = VectorCompareGreaterThanOrEqual(auVar16,auVar17,4,1);
          auVar18 = VectorSub(auVar18,auVar17,4);
          auVar16 = VectorSub(auVar16,auVar17,4);
          auVar18 = VectorBitwiseInsertIfFalse(auVar18,(undefined1  [16])0x0,auVar20);
          in_q8 = VectorBitwiseInsertIfFalse(auVar16,(undefined1  [16])0x0,auVar19);
          VectorCopyNarrow(auVar18,4);
          VectorCopyNarrow(in_q8,4);
          iVar7 = VectorTableLookup(unaff_r10,param_2,2);
          uVar12 = VectorTableLookup(unaff_r11,param_2,2);
          *puVar5 = in_q8._0_8_;
          puVar5[1] = in_q8._8_8_;
          puVar5 = puVar5 + -2;
        } while (uVar13 < uVar6);
        pvVar15 = (void *)((int)pvVar15 + uVar6 * -0x10);
        iVar4 = iVar7 + uVar6 * -8;
        if (iVar7 != uVar6 * 8) goto LAB_00017478;
      }
      iVar4 = piVar14[0x10] + uVar12 * 2;
      uVar13 = uVar12;
      if (6 < uVar12 - 1) {
        auVar16._8_8_ = CONCAT44(uVar12,uVar12);
        auVar16._0_8_ = CONCAT44(uVar12,uVar12);
        uVar6 = (uVar12 - 8 >> 3) + 1;
        uVar13 = 0;
        do {
          uVar13 = uVar13 + 1;
          VectorTableLookup(unaff_r10,uVar13,2);
          VectorTableLookup(unaff_r11,uVar13,2);
          auVar18 = VectorCopyLong(in_q8._0_8_,2,1);
          auVar17 = VectorCopyLong(in_q8._8_8_,2,1);
          auVar20 = VectorCompareGreaterThanOrEqual(auVar18,auVar16,4,1);
          auVar19 = VectorCompareGreaterThanOrEqual(auVar17,auVar16,4,1);
          auVar18 = VectorSub(auVar18,auVar16,4);
          auVar17 = VectorSub(auVar17,auVar16,4);
          auVar18 = VectorBitwiseInsertIfFalse(auVar18,(undefined1  [16])0x0,auVar20);
          in_q8 = VectorBitwiseInsertIfFalse(auVar17,(undefined1  [16])0x0,auVar19);
          VectorCopyNarrow(auVar18,4);
          VectorCopyNarrow(in_q8,4);
          puVar5 = (undefined8 *)VectorTableLookup(unaff_r10,param_2,2);
          uVar12 = VectorTableLookup(unaff_r11,param_2,2);
          *puVar5 = in_q8._0_8_;
          puVar5[1] = in_q8._8_8_;
        } while (uVar13 < uVar6);
        iVar4 = iVar4 + uVar6 * -0x10;
        uVar13 = uVar12 + uVar6 * -8;
        if (uVar12 == uVar6 * 8) goto LAB_00017354;
      }
      sVar11 = (short)uVar12;
      if (*(ushort *)(iVar4 + -2) < uVar12) {
        sVar10 = 0;
      }
      else {
        sVar10 = *(ushort *)(iVar4 + -2) - sVar11;
      }
      *(short *)(iVar4 + -2) = sVar10;
      if (uVar13 != 1) {
        if (*(ushort *)(iVar4 + -4) < uVar12) {
          sVar10 = 0;
        }
        else {
          sVar10 = *(ushort *)(iVar4 + -4) - sVar11;
        }
        *(short *)(iVar4 + -4) = sVar10;
        if (uVar13 != 2) {
          if (*(ushort *)(iVar4 + -6) < uVar12) {
            sVar10 = 0;
          }
          else {
            sVar10 = *(ushort *)(iVar4 + -6) - sVar11;
          }
          *(short *)(iVar4 + -6) = sVar10;
          if (uVar13 != 3) {
            if (*(ushort *)(iVar4 + -8) < uVar12) {
              sVar10 = 0;
            }
            else {
              sVar10 = *(ushort *)(iVar4 + -8) - sVar11;
            }
            *(short *)(iVar4 + -8) = sVar10;
            if (uVar13 != 4) {
              if (*(ushort *)(iVar4 + -10) < uVar12) {
                sVar10 = 0;
              }
              else {
                sVar10 = *(ushort *)(iVar4 + -10) - sVar11;
              }
              *(short *)(iVar4 + -10) = sVar10;
              if (uVar13 != 5) {
                if (*(ushort *)(iVar4 + -0xc) < uVar12) {
                  sVar10 = 0;
                }
                else {
                  sVar10 = *(ushort *)(iVar4 + -0xc) - sVar11;
                }
                *(short *)(iVar4 + -0xc) = sVar10;
                if (uVar13 != 6) {
                  if (*(ushort *)(iVar4 + -0xe) < uVar12) {
                    sVar11 = 0;
                  }
                  else {
                    sVar11 = *(ushort *)(iVar4 + -0xe) - sVar11;
                  }
                  *(short *)(iVar4 + -0xe) = sVar11;
                }
              }
            }
          }
        }
      }
    }
    else {
      __n = (iVar4 + 0x7fffffff) * 2;
      *(undefined2 *)((int)__s + __n) = 0;
      memset(__s,0,__n);
    }
LAB_00017354:
    piVar14[0x5ac] = 0;
  }
  iVar7 = DAT_000176f8 + 0x17370;
  piVar14[0x21] = param_2;
  iVar4 = iVar7 + param_2 * 0xc;
  uVar1 = *(ushort *)(iVar4 + 2);
  uVar2 = *(ushort *)(iVar4 + 4);
  uVar3 = *(ushort *)(iVar4 + 6);
  piVar14[0x23] = (uint)*(ushort *)(iVar7 + param_2 * 0xc);
  piVar14[0x20] = (uint)uVar1;
  piVar14[0x24] = (uint)uVar2;
  piVar14[0x1f] = (uint)uVar3;
LAB_00017394:
  piVar14[0x22] = param_3;
  return 0;
}



/* ===== deflateEnd @ 00017700 size=312 ===== */

undefined4 deflateEnd(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (pcVar4 = *(code **)(param_1 + 0x24), pcVar4 != (code *)0x0)) &&
     ((piVar5 = *(int **)(param_1 + 0x1c), piVar5 != (int *)0x0 && (param_1 == *piVar5)))) {
    iVar6 = piVar5[1];
    uVar3 = (uint)(iVar6 != 0x2a && iVar6 != 0x45);
    if (iVar6 - 0x5bU < 0x17) {
      uVar1 = ~(0x401001U >> (iVar6 - 0x5bU & 0xff)) & 1;
    }
    else {
      uVar1 = 1;
    }
    if (iVar6 == 0x29a) {
      uVar3 = 0;
    }
    if ((uVar1 & uVar3 & (iVar6 - 0x39U & 0xffffffef) != 0) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      if (piVar5[2] != 0) {
        (*pcVar4)(uVar2);
        piVar5 = *(int **)(param_1 + 0x1c);
        pcVar4 = *(code **)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
      }
      if (piVar5[0x11] != 0) {
        (*pcVar4)(uVar2);
        piVar5 = *(int **)(param_1 + 0x1c);
        pcVar4 = *(code **)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
      }
      if (piVar5[0x10] != 0) {
        (*pcVar4)(uVar2);
        piVar5 = *(int **)(param_1 + 0x1c);
        pcVar4 = *(code **)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
      }
      if (piVar5[0xe] != 0) {
        (*pcVar4)(uVar2);
        pcVar4 = *(code **)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        piVar5 = *(int **)(param_1 + 0x1c);
      }
      (*pcVar4)(uVar2,piVar5);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar6 == 0x71) {
        uVar2 = 0xfffffffd;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0xfffffffe;
}



/* ===== deflateInit2_ @ 00017838 size=704 ===== */

undefined4
deflateInit2_(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int local_30;
  
  iVar5 = DAT_00017af8 + 0x17854;
  if ((param_7 == (char *)0x0) || (param_8 != 0x38 || *param_7 != '1')) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    pcVar7 = *(code **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = DAT_00017b00;
    if (pcVar7 == (code *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      pcVar7 = (code *)(iVar2 + 0x17aa8);
      *(code **)(param_1 + 0x20) = pcVar7;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x24) = DAT_00017afc + 0x17a94;
    }
    if (param_2 == 0xffffffff) {
      param_2 = 6;
    }
    if ((int)param_4 < 0) {
      if ((int)param_4 < -0xf) {
        return 0xfffffffe;
      }
      param_4 = -param_4;
      bVar8 = true;
      local_30 = 0;
    }
    else {
      bVar8 = 0xf < (int)param_4;
      if (bVar8) {
        param_4 = param_4 - 0x10;
        local_30 = 2;
      }
      else {
        local_30 = 1;
      }
    }
    if (param_5 - 1U < 9) {
      bVar9 = param_4 - 8 == 7;
      if (param_4 - 8 < 8) {
        bVar9 = param_3 == 8;
      }
      if (bVar9) {
        bVar10 = 3 < param_6;
        bVar9 = param_6 == 4;
        if (param_6 < 5) {
          bVar10 = 8 < param_2;
          bVar9 = param_2 == 9;
        }
        if (!bVar10 || bVar9) {
          if (param_4 != 8) {
            bVar8 = false;
          }
          if (!bVar8) {
            if (param_4 == 8) {
              param_4 = 9;
            }
            piVar1 = (int *)(*pcVar7)(*(undefined4 *)(param_1 + 0x28),1,0x16c4);
            if (piVar1 == (int *)0x0) {
              return 0xfffffffc;
            }
            iVar2 = 1 << (param_4 & 0xff);
            iVar3 = 1 << (param_5 + 7U & 0xff);
            *(int **)(param_1 + 0x1c) = piVar1;
            piVar1[6] = local_30;
            piVar1[0xc] = param_4;
            piVar1[0xb] = iVar2;
            piVar1[0xd] = iVar2 + -1;
            piVar1[0x16] = (param_5 + 9U) / 3;
            piVar1[0x14] = param_5 + 7U;
            piVar1[0x15] = iVar3 + -1;
            iVar6 = 1 << (param_5 + 6U & 0xff);
            piVar1[0x13] = iVar3;
            piVar1[1] = 0x2a;
            *piVar1 = param_1;
            pcVar7 = *(code **)(param_1 + 0x20);
            piVar1[7] = 0;
            iVar2 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),iVar2,2);
            pcVar7 = *(code **)(param_1 + 0x20);
            piVar1[0xe] = iVar2;
            iVar2 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),piVar1[0xb],2);
            pcVar7 = *(code **)(param_1 + 0x20);
            piVar1[0x10] = iVar2;
            iVar2 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),piVar1[0x13],2);
            pcVar7 = *(code **)(param_1 + 0x20);
            piVar1[0x11] = iVar2;
            piVar1[0x5a7] = iVar6;
            piVar1[0x5b0] = 0;
            iVar3 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),iVar6,4);
            iVar6 = piVar1[0x5a7];
            piVar1[3] = iVar6 << 2;
            piVar1[2] = iVar3;
            iVar2 = DAT_00017b04;
            if (((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (iVar3 != 0 && piVar1[0x11] != 0)) {
              piVar1[0x5a6] = iVar3 + iVar6;
              piVar1[0x5a9] = iVar6 * 3 + -3;
              piVar1[0x21] = param_2;
              piVar1[0x22] = param_6;
              *(undefined1 *)(piVar1 + 9) = 8;
              uVar4 = deflateReset(param_1);
              return uVar4;
            }
            piVar1[1] = 0x29a;
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(iVar5 + iVar2) + 0x18);
            deflateEnd(param_1);
            return 0xfffffffc;
          }
        }
      }
    }
  }
  return 0xfffffffe;
}



/* ===== deflateInit_ @ 00017b08 size=48 ===== */

void deflateInit_(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  deflateInit2_(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return;
}



/* ===== deflateCopy @ 00017b38 size=632 ===== */

undefined4 deflateCopy(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *__dest;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *__src;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  pcVar8 = (code *)param_2[8];
  if ((((pcVar8 != (code *)0x0) && (param_2[9] != 0)) &&
      (__src = (int *)param_2[7], __src != (int *)0x0)) && (param_2 == (undefined4 *)*__src)) {
    iVar4 = __src[1];
    uVar6 = (uint)(iVar4 != 0x2a && iVar4 != 0x45);
    if (iVar4 - 0x5bU < 0x17) {
      uVar9 = ~(0x401001U >> (iVar4 - 0x5bU & 0xff)) & 1;
    }
    else {
      uVar9 = 1;
    }
    if (iVar4 == 0x29a) {
      uVar6 = 0;
    }
    if (((uVar9 & uVar6 & (iVar4 - 0x39U & 0xffffffef) != 0) == 0) && (param_1 != (undefined4 *)0x0)
       ) {
      puVar3 = param_2;
      puVar1 = param_1;
      do {
        puVar7 = puVar1;
        puVar2 = puVar3;
        puVar3 = puVar2 + 4;
        uVar11 = puVar2[1];
        uVar10 = puVar2[2];
        uVar5 = puVar2[3];
        *puVar7 = *puVar2;
        puVar7[1] = uVar11;
        puVar7[2] = uVar10;
        puVar7[3] = uVar5;
        puVar1 = puVar7 + 4;
      } while (puVar3 != param_2 + 0xc);
      uVar5 = puVar2[5];
      puVar7[4] = *puVar3;
      puVar7[5] = uVar5;
      __dest = (int *)(*pcVar8)(param_1[10],1,0x16c4);
      if (__dest != (int *)0x0) {
        param_1[7] = __dest;
        memcpy(__dest,__src,0x16c4);
        pcVar8 = (code *)param_1[8];
        *__dest = (int)param_1;
        iVar4 = (*pcVar8)(param_1[10],__dest[0xb],2);
        pcVar8 = (code *)param_1[8];
        __dest[0xe] = iVar4;
        iVar4 = (*pcVar8)(param_1[10],__dest[0xb],2);
        pcVar8 = (code *)param_1[8];
        __dest[0x10] = iVar4;
        iVar4 = (*pcVar8)(param_1[10],__dest[0x13],2);
        pcVar8 = (code *)param_1[8];
        __dest[0x11] = iVar4;
        iVar4 = (*pcVar8)(param_1[10],__dest[0x5a7],4);
        __dest[2] = iVar4;
        if ((((void *)__dest[0xe] != (void *)0x0) && (__dest[0x10] != 0)) &&
           (__dest[0x11] != 0 && iVar4 != 0)) {
          memcpy((void *)__dest[0xe],(void *)__src[0xe],__dest[0xb] << 1);
          memcpy((void *)__dest[0x10],(void *)__src[0x10],__dest[0xb] << 1);
          memcpy((void *)__dest[0x11],(void *)__src[0x11],__dest[0x13] << 1);
          memcpy((void *)__dest[2],(void *)__src[2],__dest[3]);
          __dest[4] = __dest[2] + (__src[4] - __src[2]);
          __dest[0x5a6] = __dest[2] + __dest[0x5a7];
          __dest[0x2c9] = (int)(__dest + 0x262);
          __dest[0x2cc] = (int)(__dest + 0x29f);
          __dest[0x2c6] = (int)(__dest + 0x25);
          return 0;
        }
        deflateEnd(param_1);
        return 0xfffffffc;
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}



/* ===== inflateBackInit_ @ 00017db0 size=280 ===== */

undefined4 inflateBackInit_(int param_1,uint param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (param_4 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_5 != 0x38 || *param_4 != '1') {
    return 0xfffffffa;
  }
  if ((param_1 == 0 || param_3 == 0) || (7 < param_2 - 8)) {
    return 0xfffffffe;
  }
  pcVar2 = *(code **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = DAT_00017ec8;
  if (pcVar2 == (code *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    pcVar2 = (code *)(iVar1 + 0x17e88);
    *(code **)(param_1 + 0x20) = pcVar2;
    iVar1 = *(int *)(param_1 + 0x24);
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x24) = DAT_00017ecc + 0x17ea4;
  }
  iVar1 = (*pcVar2)(uVar3,1,0x1bd0);
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(uint *)(iVar1 + 0x28) = param_2;
  *(int *)(iVar1 + 0x2c) = 1 << (param_2 & 0xff);
  *(int *)(iVar1 + 0x38) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 0x8000;
  *(undefined8 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x1bc4) = 1;
  return 0;
}



/* ===== inflateBack @ 00017ed0 size=4820 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4
inflateBack(undefined4 *param_1,code *param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  ushort *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  int iVar37;
  bool bVar38;
  bool bVar39;
  byte *local_6c;
  byte *local_64;
  byte *local_5c;
  byte *local_2c [2];
  
  iVar8 = DAT_00018d48;
  if ((param_1 == (undefined4 *)0x0) || (iVar33 = param_1[7], iVar33 == 0)) {
    return 0xfffffffe;
  }
  local_2c[0] = (byte *)*param_1;
  iVar14 = DAT_00018d44 + 0x17f0c;
  uVar34 = 0;
  iVar15 = DAT_00018d44 + 0x1870c;
  local_5c = *(byte **)(iVar33 + 0x38);
  iVar20 = DAT_00018d48 + 0x187a0;
  local_6c = *(byte **)(iVar33 + 0x2c);
  uVar32 = 0;
  pbVar27 = (byte *)0x0;
  if (local_2c[0] != (byte *)0x0) {
    pbVar27 = (byte *)param_1[1];
  }
  uVar21 = 0x3f3f;
  param_1[6] = 0;
  *(undefined4 *)(iVar33 + 8) = 0;
  *(undefined4 *)(iVar33 + 0x30) = 0;
  *(undefined4 *)(iVar33 + 4) = 0x3f3f;
LAB_00017f68:
  switch(uVar21) {
  case 0x3f3f:
LAB_00017fc8:
    if (*(int *)(iVar33 + 8) == 0) {
      if (2 < uVar34) goto LAB_00018018;
      while( true ) {
        pbVar28 = pbVar27;
        if (pbVar27 == (byte *)0x0) {
          pbVar28 = (byte *)(*param_2)(param_3,local_2c);
          pbVar27 = (byte *)0x0;
          local_64 = pbVar27;
          pbVar35 = pbVar27;
          if (pbVar28 == (byte *)0x0) goto LAB_00018478;
        }
        pbVar27 = pbVar28 + -1;
        uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
        uVar34 = uVar34 + 8;
        local_2c[0] = local_2c[0] + 1;
LAB_00018018:
        uVar22 = (uVar32 & 7) >> 1;
        *(uint *)(iVar33 + 8) = uVar32 & 1;
        if (uVar22 == 2) {
          uVar32 = uVar32 >> 3;
          uVar34 = uVar34 - 3;
          *(undefined4 *)(iVar33 + 4) = 0x3f44;
          goto joined_r0x00018040;
        }
        if (uVar22 == 3) {
          iVar8 = DAT_00018d5c + 0x18648;
          goto LAB_00018178;
        }
        uVar32 = uVar32 >> 3;
        uVar34 = uVar34 - 3;
        if (uVar22 == 1) break;
        *(undefined4 *)(iVar33 + 4) = 0x3f41;
LAB_00018100:
        uVar32 = uVar32 >> (uVar34 & 7);
        for (uVar34 = uVar34 & 0xfffffff8; uVar34 < 0x20; uVar34 = uVar34 + 8) {
          pbVar28 = pbVar27;
          if (pbVar27 == (byte *)0x0) {
            pbVar28 = (byte *)(*param_2)(param_3,local_2c);
            pbVar27 = (byte *)0x0;
            local_64 = pbVar27;
            pbVar35 = pbVar27;
            if (pbVar28 == (byte *)0x0) goto LAB_00018478;
          }
          pbVar27 = pbVar28 + -1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        pbVar28 = (byte *)(uVar32 & 0xffff);
        if (pbVar28 != (byte *)(uVar32 >> 0x10 ^ 0xffff)) {
          iVar8 = DAT_00018d50 + 0x1817c;
          goto LAB_00018178;
        }
        *(byte **)(iVar33 + 0x44) = pbVar28;
        while (pbVar28 != (byte *)0x0) {
          if ((pbVar27 == (byte *)0x0) &&
             (pbVar27 = (byte *)(*param_2)(param_3,local_2c), local_64 = pbVar27, pbVar35 = pbVar27,
             pbVar27 == (byte *)0x0)) goto LAB_00018478;
          if (local_6c == (byte *)0x0) {
            local_6c = *(byte **)(iVar33 + 0x2c);
            local_5c = *(byte **)(iVar33 + 0x38);
            *(byte **)(iVar33 + 0x30) = local_6c;
            iVar9 = (*param_4)(param_5,local_5c,local_6c);
            if (iVar9 != 0) {
              uVar21 = 0xfffffffb;
              local_64 = (byte *)0x0;
              pbVar28 = *(byte **)(iVar33 + 0x2c);
              goto LAB_00018344;
            }
          }
          pbVar35 = local_6c;
          if (pbVar27 < local_6c) {
            pbVar35 = pbVar27;
          }
          if (pbVar28 <= pbVar35) {
            pbVar35 = pbVar28;
          }
          pbVar27 = pbVar27 + -(int)pbVar35;
          local_6c = local_6c + -(int)pbVar35;
          memcpy(local_5c,local_2c[0],(size_t)pbVar35);
          local_5c = local_5c + (int)pbVar35;
          pbVar28 = (byte *)(*(int *)(iVar33 + 0x44) - (int)pbVar35);
          *(byte **)(iVar33 + 0x44) = pbVar28;
          local_2c[0] = local_2c[0] + (int)pbVar35;
        }
        uVar32 = 0;
        *(undefined4 *)(iVar33 + 4) = 0x3f3f;
        uVar34 = uVar32;
        if (*(int *)(iVar33 + 8) != 0) goto LAB_0001832c;
      }
      *(int *)(iVar33 + 0x50) = iVar14;
      *(int *)(iVar33 + 0x54) = iVar15;
      *(undefined4 *)(iVar33 + 0x58) = 9;
      *(undefined4 *)(iVar33 + 0x5c) = 5;
      *(undefined4 *)(iVar33 + 4) = 0x3f48;
      goto LAB_000181c8;
    }
LAB_0001832c:
    *(undefined4 *)(iVar33 + 4) = 0x3f50;
    goto LAB_00018334;
  case 0x3f40:
  default:
switchD_00017f74_default:
    uVar21 = 0xfffffffe;
    local_64 = (byte *)0x0;
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    break;
  case 0x3f41:
    goto LAB_00018100;
  case 0x3f42:
    goto switchD_00017f74_default;
  case 0x3f43:
    goto switchD_00017f74_default;
  case 0x3f44:
    goto joined_r0x00018040;
  case 0x3f45:
    goto switchD_00017f74_default;
  case 0x3f46:
    goto switchD_00017f74_default;
  case 0x3f47:
    goto switchD_00017f74_default;
  case 0x3f48:
    goto LAB_000181c8;
  case 0x3f49:
    goto switchD_00017f74_default;
  case 0x3f4a:
    goto switchD_00017f74_default;
  case 0x3f4b:
    goto switchD_00017f74_default;
  case 0x3f4c:
    goto switchD_00017f74_default;
  case 0x3f4d:
    goto switchD_00017f74_default;
  case 0x3f4e:
    goto switchD_00017f74_default;
  case 0x3f4f:
    goto switchD_00017f74_default;
  case 0x3f50:
LAB_00018334:
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    uVar21 = 1;
    local_64 = (byte *)0x1;
    break;
  case 0x3f51:
LAB_00018484:
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    goto LAB_0001818c;
  }
  goto LAB_00018344;
joined_r0x00018040:
  if (0xd < uVar34) goto LAB_00018088;
  pbVar28 = pbVar27;
  if (pbVar27 == (byte *)0x0) {
    pbVar28 = (byte *)(*param_2)(param_3,local_2c);
    pbVar27 = (byte *)0x0;
    local_64 = pbVar27;
    pbVar35 = pbVar27;
    if (pbVar28 == (byte *)0x0) goto LAB_00018478;
  }
  pbVar27 = pbVar28 + -1;
  uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
  uVar34 = uVar34 + 8;
  local_2c[0] = local_2c[0] + 1;
  goto joined_r0x00018040;
LAB_00018088:
  uVar22 = ((uVar32 & 0x3ff) >> 5) + 1;
  uVar23 = (uVar32 & 0x1f) + 0x101;
  bVar39 = 0x11d < uVar23;
  bVar38 = uVar23 == 0x11e;
  if (uVar23 < 0x11f) {
    bVar39 = 0x1d < uVar22;
    bVar38 = uVar22 == 0x1e;
  }
  uVar34 = uVar34 - 0xe;
  *(uint *)(iVar33 + 100) = uVar23;
  local_64 = (byte *)(uint)(bVar39 && !bVar38);
  pbVar28 = (byte *)(((uVar32 & 0x3fff) >> 10) + 4);
  *(uint *)(iVar33 + 0x68) = uVar22;
  uVar32 = uVar32 >> 0xe;
  *(byte **)(iVar33 + 0x60) = pbVar28;
  if (bVar39 && !bVar38) {
    iVar8 = DAT_00018d4c + 0x180e0;
    goto LAB_00018178;
  }
  *(byte **)(iVar33 + 0x6c) = local_64;
  pbVar35 = local_64;
  do {
    if (uVar34 < 3) {
      if (pbVar27 == (byte *)0x0) {
        pbVar27 = (byte *)(*param_2)(param_3,local_2c);
        if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
        pbVar35 = *(byte **)(iVar33 + 0x6c);
        pbVar28 = *(byte **)(iVar33 + 0x60);
      }
      pbVar27 = pbVar27 + -1;
      uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
      uVar34 = uVar34 + 8;
      local_2c[0] = local_2c[0] + 1;
    }
    iVar9 = (int)pbVar35 * 2;
    pbVar35 = pbVar35 + 1;
    uVar2 = (ushort)uVar32;
    uVar1 = *(ushort *)(iVar20 + iVar9);
    uVar34 = uVar34 - 3;
    *(byte **)(iVar33 + 0x6c) = pbVar35;
    uVar32 = uVar32 >> 3;
    *(ushort *)(iVar33 + (uint)uVar1 * 2 + 0x74) = uVar2 & 7;
  } while (pbVar35 < pbVar28);
  if (pbVar35 < (byte *)0x13) {
    puVar24 = (ushort *)(iVar20 + (int)pbVar35 * 2 + -2);
    do {
      puVar24 = puVar24 + 1;
      *(undefined2 *)(iVar33 + (*puVar24 + 0x38) * 2 + 4) = 0;
    } while (puVar24 != (ushort *)(iVar8 + 0x187c4));
    *(undefined4 *)(iVar33 + 0x6c) = 0x13;
  }
  iVar9 = iVar33 + 0x70;
  iVar12 = iVar33 + 0x74;
  iVar16 = iVar33 + 0x534;
  *(undefined4 *)(iVar33 + 0x58) = 7;
  *(int *)(iVar33 + 0x70) = iVar16;
  *(int *)(iVar33 + 0x50) = iVar16;
  iVar10 = iVar33 + 0x2f4;
  iVar11 = FUN_0001d108(0,iVar12,0x13,iVar9,iVar33 + 0x58,iVar10);
  if (iVar11 != 0) {
    iVar8 = DAT_00018d58 + 0x185d0;
    goto LAB_00018178;
  }
  iVar11 = *(int *)(iVar33 + 100);
  iVar37 = *(int *)(iVar33 + 0x68);
  *(undefined4 *)(iVar33 + 0x6c) = 0;
  uVar22 = 0;
  while (uVar22 < (uint)(iVar11 + iVar37)) {
    uVar23 = *(uint *)(iVar33 + 0x58);
    iVar11 = *(int *)(iVar33 + 0x50);
    iVar37 = iVar11 + (uVar32 & ~(-1 << (uVar23 & 0xff))) * 4;
    uVar22 = (uint)*(byte *)(iVar37 + 1);
    if (uVar34 < uVar22) {
      do {
        if (pbVar27 == (byte *)0x0) {
          pbVar27 = (byte *)(*param_2)(param_3,local_2c);
          if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
          iVar11 = *(int *)(iVar33 + 0x50);
          uVar23 = *(uint *)(iVar33 + 0x58);
        }
        pbVar27 = pbVar27 + -1;
        pbVar28 = local_2c[0] + 1;
        uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
        uVar34 = uVar34 + 8;
        iVar37 = iVar11 + (uVar32 & ~(-1 << (uVar23 & 0xff))) * 4;
        uVar22 = (uint)*(byte *)(iVar37 + 1);
        local_2c[0] = pbVar28;
      } while (uVar34 < uVar22);
    }
    uVar1 = *(ushort *)(iVar37 + 2);
    if (uVar1 < 0x10) {
      iVar31 = *(int *)(iVar33 + 0x6c);
      uVar32 = uVar32 >> uVar22;
      iVar11 = *(int *)(iVar33 + 100);
      uVar34 = uVar34 - uVar22;
      iVar37 = *(int *)(iVar33 + 0x68);
      uVar22 = iVar31 + 1;
      *(uint *)(iVar33 + 0x6c) = uVar22;
      *(ushort *)(iVar33 + iVar31 * 2 + 0x74) = uVar1;
    }
    else {
      if (uVar1 == 0x10) {
        for (; uVar34 < uVar22 + 2; uVar34 = uVar34 + 8) {
          if ((pbVar27 == (byte *)0x0) &&
             (pbVar27 = (byte *)(*param_2)(param_3,local_2c), pbVar27 == (byte *)0x0))
          goto LAB_0001848c;
          pbVar27 = pbVar27 + -1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        iVar31 = *(int *)(iVar33 + 0x6c);
        if (iVar31 == 0) {
          iVar8 = DAT_00018d70 + 0x19114;
          goto LAB_00018178;
        }
        uVar34 = (uVar34 - uVar22) - 2;
        uVar23 = (uVar32 >> uVar22 & 3) + 3;
        uVar7 = *(undefined2 *)(iVar33 + iVar31 * 2 + 0x72);
        uVar32 = (uVar32 >> uVar22) >> 2;
      }
      else if (uVar1 == 0x11) {
        for (; uVar34 < uVar22 + 3; uVar34 = uVar34 + 8) {
          if ((pbVar27 == (byte *)0x0) &&
             (pbVar27 = (byte *)(*param_2)(param_3,local_2c), pbVar27 == (byte *)0x0))
          goto LAB_0001848c;
          pbVar27 = pbVar27 + -1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        uVar34 = (uVar34 - uVar22) - 3;
        uVar23 = (uVar32 >> uVar22 & 7) + 3;
        uVar32 = (uVar32 >> uVar22) >> 3;
        uVar7 = 0;
        iVar31 = *(int *)(iVar33 + 0x6c);
      }
      else {
        for (; uVar34 < uVar22 + 7; uVar34 = uVar34 + 8) {
          if ((pbVar27 == (byte *)0x0) &&
             (pbVar27 = (byte *)(*param_2)(param_3,local_2c), pbVar27 == (byte *)0x0))
          goto LAB_0001848c;
          pbVar27 = pbVar27 + -1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          local_2c[0] = local_2c[0] + 1;
        }
        iVar31 = *(int *)(iVar33 + 0x6c);
        uVar34 = (uVar34 - uVar22) - 7;
        uVar23 = (uVar32 >> uVar22 & 0x7f) + 0xb;
        uVar32 = (uVar32 >> uVar22) >> 7;
        uVar7 = 0;
      }
      uVar22 = iVar31 + uVar23;
      iVar11 = *(int *)(iVar33 + 100);
      iVar37 = *(int *)(iVar33 + 0x68);
      if ((uint)(iVar11 + iVar37) < uVar22) {
        iVar8 = DAT_00018d68 + 0x19040;
        goto LAB_00018178;
      }
      if (uVar23 - 1 < 7) {
        iVar25 = iVar33 + iVar31 * 2;
        iVar26 = uVar23 - 3;
        *(undefined2 *)(iVar25 + 0x74) = uVar7;
        *(undefined2 *)(iVar25 + 0x76) = uVar7;
LAB_00018c60:
        iVar31 = iVar33 + (iVar31 + 2) * 2;
        *(undefined2 *)(iVar31 + 0x74) = uVar7;
        if ((((iVar26 != 0) && (*(undefined2 *)(iVar31 + 0x76) = uVar7, iVar26 != 1)) &&
            (*(undefined2 *)(iVar31 + 0x78) = uVar7, iVar26 != 2)) &&
           (*(undefined2 *)(iVar31 + 0x7a) = uVar7, iVar26 != 3)) {
          *(undefined2 *)(iVar31 + 0x7c) = uVar7;
        }
      }
      else {
        uVar18 = uVar23 >> 3;
        uVar21 = CONCAT22(uVar7,uVar7);
        puVar17 = (undefined4 *)(iVar33 + (iVar31 + 0x3a) * 2);
        *puVar17 = uVar21;
        puVar17[1] = uVar21;
        puVar17[2] = uVar21;
        puVar17[3] = uVar21;
        if (uVar18 != 1) {
          puVar17[4] = uVar21;
          puVar17[5] = uVar21;
          puVar17[6] = uVar21;
          puVar17[7] = uVar21;
          if (uVar18 != 2) {
            puVar17[8] = uVar21;
            puVar17[9] = uVar21;
            puVar17[10] = uVar21;
            puVar17[0xb] = uVar21;
            if (uVar18 != 3) {
              puVar17[0xc] = uVar21;
              puVar17[0xd] = uVar21;
              puVar17[0xe] = uVar21;
              puVar17[0xf] = uVar21;
              if (uVar18 != 4) {
                puVar17[0x10] = uVar21;
                puVar17[0x11] = uVar21;
                puVar17[0x12] = uVar21;
                puVar17[0x13] = uVar21;
                if (uVar18 != 5) {
                  puVar17[0x14] = uVar21;
                  puVar17[0x15] = uVar21;
                  puVar17[0x16] = uVar21;
                  puVar17[0x17] = uVar21;
                  if (uVar18 != 6) {
                    puVar17[0x18] = uVar21;
                    puVar17[0x19] = uVar21;
                    puVar17[0x1a] = uVar21;
                    puVar17[0x1b] = uVar21;
                    if (uVar18 != 7) {
                      puVar17[0x1c] = uVar21;
                      puVar17[0x1d] = uVar21;
                      puVar17[0x1e] = uVar21;
                      puVar17[0x1f] = uVar21;
                      if (uVar18 != 8) {
                        puVar17[0x20] = uVar21;
                        puVar17[0x21] = uVar21;
                        puVar17[0x22] = uVar21;
                        puVar17[0x23] = uVar21;
                        if (uVar18 != 9) {
                          puVar17[0x24] = uVar21;
                          puVar17[0x25] = uVar21;
                          puVar17[0x26] = uVar21;
                          puVar17[0x27] = uVar21;
                          if (uVar18 != 10) {
                            puVar17[0x28] = uVar21;
                            puVar17[0x29] = uVar21;
                            puVar17[0x2a] = uVar21;
                            puVar17[0x2b] = uVar21;
                            if (uVar18 != 0xb) {
                              puVar17[0x2c] = uVar21;
                              puVar17[0x2d] = uVar21;
                              puVar17[0x2e] = uVar21;
                              puVar17[0x2f] = uVar21;
                              if (uVar18 != 0xc) {
                                puVar17[0x30] = uVar21;
                                puVar17[0x31] = uVar21;
                                puVar17[0x32] = uVar21;
                                puVar17[0x33] = uVar21;
                                if (uVar18 != 0xd) {
                                  puVar17[0x34] = uVar21;
                                  puVar17[0x35] = uVar21;
                                  puVar17[0x36] = uVar21;
                                  puVar17[0x37] = uVar21;
                                  if (uVar18 != 0xe) {
                                    puVar17[0x38] = uVar21;
                                    puVar17[0x39] = uVar21;
                                    puVar17[0x3a] = uVar21;
                                    puVar17[0x3b] = uVar21;
                                    if (uVar18 != 0xf) {
                                      puVar17[0x3c] = uVar21;
                                      puVar17[0x3d] = uVar21;
                                      puVar17[0x3e] = uVar21;
                                      puVar17[0x3f] = uVar21;
                                      if (uVar18 == 0x11) {
                                        puVar17[0x40] = uVar21;
                                        puVar17[0x41] = uVar21;
                                        puVar17[0x42] = uVar21;
                                        puVar17[0x43] = uVar21;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar18 = uVar23 & 0xfffffff8;
        iVar31 = iVar31 + uVar18;
        iVar25 = (uVar23 - 1) - uVar18;
        if (uVar23 != uVar18) {
          iVar19 = iVar33 + iVar31 * 2;
          *(undefined2 *)(iVar19 + 0x74) = uVar7;
          if (iVar25 != 0) {
            iVar26 = iVar25 + -2;
            *(undefined2 *)(iVar19 + 0x76) = uVar7;
            if (iVar25 != 1) goto LAB_00018c60;
          }
        }
      }
      *(uint *)(iVar33 + 0x6c) = uVar22;
    }
  }
  if (*(int *)(iVar33 + 4) == 0x3f51) goto LAB_00018484;
  if (*(short *)(iVar33 + 0x274) == 0) {
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    param_1[6] = DAT_00018d6c + 0x19100;
    *(undefined4 *)(iVar33 + 4) = 0x3f51;
    goto LAB_0001818c;
  }
  *(undefined4 *)(iVar33 + 0x58) = 9;
  *(int *)(iVar33 + 0x70) = iVar16;
  *(int *)(iVar33 + 0x50) = iVar16;
  iVar11 = FUN_0001d108(1,iVar12,iVar11,iVar9,iVar33 + 0x58,iVar10);
  if (iVar11 != 0) {
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    param_1[6] = DAT_00018d74 + 0x19168;
    *(undefined4 *)(iVar33 + 4) = 0x3f51;
    goto LAB_0001818c;
  }
  *(undefined4 *)(iVar33 + 0x5c) = 6;
  *(undefined4 *)(iVar33 + 0x54) = *(undefined4 *)(iVar33 + 0x70);
  iVar9 = FUN_0001d108(2,iVar12 + *(int *)(iVar33 + 100) * 2,*(undefined4 *)(iVar33 + 0x68),iVar9,
                       iVar33 + 0x5c,iVar10);
  if (iVar9 != 0) {
    pbVar28 = *(byte **)(iVar33 + 0x2c);
    param_1[6] = DAT_00018d78 + 0x191c8;
    *(undefined4 *)(iVar33 + 4) = 0x3f51;
    goto LAB_0001818c;
  }
  *(undefined4 *)(iVar33 + 4) = 0x3f48;
LAB_000181c8:
  bVar39 = (byte *)0x4 < pbVar27;
  bVar38 = pbVar27 == (byte *)0x5;
  if ((byte *)0x5 < pbVar27) {
    bVar39 = (byte *)0x100 < local_6c;
    bVar38 = local_6c == (byte *)0x101;
  }
  local_64 = (byte *)(uint)(bVar39 && !bVar38);
  if (bVar39 && !bVar38) {
    uVar22 = *(uint *)(iVar33 + 0x2c);
    bVar38 = *(uint *)(iVar33 + 0x30) < uVar22;
    param_1[4] = local_6c;
    *param_1 = local_2c[0];
    param_1[1] = pbVar27;
    pbVar27 = local_2c[0];
    if (bVar38) {
      pbVar27 = (byte *)(uVar22 - (int)local_6c);
    }
    param_1[3] = local_5c;
    *(uint *)(iVar33 + 0x3c) = uVar32;
    *(uint *)(iVar33 + 0x40) = uVar34;
    if (bVar38) {
      *(byte **)(iVar33 + 0x30) = pbVar27;
    }
    FUN_00019220(param_1);
    local_5c = (byte *)param_1[3];
    local_2c[0] = (byte *)*param_1;
    uVar32 = *(uint *)(iVar33 + 0x3c);
    local_6c = (byte *)param_1[4];
    pbVar27 = (byte *)param_1[1];
    uVar34 = *(uint *)(iVar33 + 0x40);
    uVar21 = *(undefined4 *)(iVar33 + 4);
    goto LAB_00017f68;
  }
  uVar18 = *(uint *)(iVar33 + 0x58);
  iVar10 = *(int *)(iVar33 + 0x50);
  uVar22 = uVar32 & ~(-1 << (uVar18 & 0xff));
  iVar9 = iVar10 + uVar22 * 4;
  uVar23 = (uint)*(byte *)(iVar9 + 1);
  if (uVar34 < uVar23) {
    do {
      if (pbVar27 == (byte *)0x0) {
        pbVar27 = (byte *)(*param_2)(param_3,local_2c);
        if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
        iVar10 = *(int *)(iVar33 + 0x50);
        uVar18 = *(uint *)(iVar33 + 0x58);
      }
      pbVar27 = pbVar27 + -1;
      pbVar28 = local_2c[0] + 1;
      uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
      uVar34 = uVar34 + 8;
      pbVar35 = (byte *)(iVar10 + (uVar32 & ~(-1 << (uVar18 & 0xff))) * 4);
      uVar23 = (uint)pbVar35[1];
      local_2c[0] = pbVar28;
    } while (uVar34 < uVar23);
    bVar6 = *pbVar35;
    uVar1 = *(ushort *)(pbVar35 + 2);
  }
  else {
    bVar6 = *(byte *)(iVar10 + uVar22 * 4);
    uVar1 = *(ushort *)(iVar9 + 2);
  }
  uVar18 = (uint)bVar6;
  uVar22 = (uint)uVar1;
  if (uVar18 == 0) {
    uVar32 = uVar32 >> uVar23;
    uVar34 = uVar34 - uVar23;
    *(uint *)(iVar33 + 0x44) = uVar22;
  }
  else {
    if ((bVar6 & 0xf0) != 0) {
      uVar32 = uVar32 >> uVar23;
      uVar34 = uVar34 - uVar23;
      *(uint *)(iVar33 + 0x44) = uVar22;
LAB_00018448:
      if ((uVar18 & 0x20) == 0) goto code_r0x00018458;
      *(undefined4 *)(iVar33 + 4) = 0x3f3f;
      goto LAB_00017fc8;
    }
    uVar18 = ~(-1 << (uVar18 + uVar23 & 0xff));
    iVar9 = uVar22 + ((uVar18 & uVar32) >> uVar23);
    iVar11 = iVar10 + iVar9 * 4;
    uVar30 = (uint)*(byte *)(iVar11 + 1);
    if (uVar34 < uVar30 + uVar23) {
      do {
        if (pbVar27 == (byte *)0x0) {
          pbVar27 = (byte *)(*param_2)(param_3,local_2c);
          if (pbVar27 == (byte *)0x0) {
            uVar21 = 0xfffffffb;
            pbVar28 = *(byte **)(iVar33 + 0x2c);
            pbVar27 = (byte *)0x0;
            local_2c[0] = (byte *)0x0;
            goto LAB_00018344;
          }
          iVar10 = *(int *)(iVar33 + 0x50);
        }
        pbVar27 = pbVar27 + -1;
        pbVar28 = local_2c[0] + 1;
        uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
        uVar34 = uVar34 + 8;
        pbVar35 = (byte *)(iVar10 + (uVar22 + ((uVar18 & uVar32) >> uVar23)) * 4);
        uVar30 = (uint)pbVar35[1];
        local_2c[0] = pbVar28;
      } while (uVar34 < uVar30 + uVar23);
      bVar6 = *pbVar35;
      uVar1 = *(ushort *)(pbVar35 + 2);
    }
    else {
      bVar6 = *(byte *)(iVar10 + iVar9 * 4);
      uVar1 = *(ushort *)(iVar11 + 2);
    }
    uVar18 = (uint)bVar6;
    uVar22 = (uint)uVar1;
    *(uint *)(iVar33 + 0x44) = uVar22;
    uVar32 = (uVar32 >> uVar23) >> uVar30;
    uVar34 = (uVar34 - uVar23) - uVar30;
    if (uVar18 != 0) goto LAB_00018448;
  }
  bVar6 = (byte)uVar22;
  if (local_6c == (byte *)0x0) {
    local_6c = *(byte **)(iVar33 + 0x2c);
    local_5c = *(byte **)(iVar33 + 0x38);
    *(byte **)(iVar33 + 0x30) = local_6c;
    iVar9 = (*param_4)(param_5,local_5c,local_6c);
    pbVar35 = local_2c[0];
    if (iVar9 != 0) goto LAB_00018478;
    bVar6 = (byte)*(undefined4 *)(iVar33 + 0x44);
  }
  *local_5c = bVar6;
  local_6c = local_6c + -1;
  *(undefined4 *)(iVar33 + 4) = 0x3f48;
  local_5c = local_5c + 1;
  goto LAB_000181c8;
LAB_0001848c:
  pbVar27 = (byte *)0x0;
  uVar21 = 0xfffffffb;
  pbVar28 = *(byte **)(iVar33 + 0x2c);
  local_2c[0] = pbVar27;
  goto LAB_00018344;
LAB_00018478:
  local_2c[0] = pbVar35;
  uVar21 = 0xfffffffb;
  pbVar28 = *(byte **)(iVar33 + 0x2c);
  goto LAB_00018344;
code_r0x00018458:
  if ((uVar18 & 0x40) == 0) {
    uVar18 = uVar18 & 0xf;
    *(uint *)(iVar33 + 0x4c) = uVar18;
    if (uVar18 != 0) {
      if (uVar34 < uVar18) {
        do {
          if (pbVar27 == (byte *)0x0) {
            pbVar27 = (byte *)(*param_2)(param_3,local_2c);
            if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
            uVar18 = *(uint *)(iVar33 + 0x4c);
          }
          pbVar27 = pbVar27 + -1;
          pbVar28 = local_2c[0] + 1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          uVar34 = uVar34 + 8;
          local_2c[0] = pbVar28;
        } while (uVar34 < uVar18);
      }
      uVar34 = uVar34 - uVar18;
      uVar22 = uVar32 & ~(-1 << (uVar18 & 0xff));
      uVar32 = uVar32 >> (uVar18 & 0xff);
      *(uint *)(iVar33 + 0x44) = *(int *)(iVar33 + 0x44) + uVar22;
    }
    uVar22 = *(uint *)(iVar33 + 0x5c);
    iVar10 = *(int *)(iVar33 + 0x54);
    uVar18 = uVar32 & ~(-1 << (uVar22 & 0xff));
    iVar9 = iVar10 + uVar18 * 4;
    uVar23 = (uint)*(byte *)(iVar9 + 1);
    if (uVar34 < uVar23) {
      do {
        if (pbVar27 == (byte *)0x0) {
          pbVar27 = (byte *)(*param_2)(param_3,local_2c);
          if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
          iVar10 = *(int *)(iVar33 + 0x54);
          uVar22 = *(uint *)(iVar33 + 0x5c);
        }
        pbVar27 = pbVar27 + -1;
        pbVar28 = local_2c[0] + 1;
        uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
        uVar34 = uVar34 + 8;
        pbVar35 = (byte *)(iVar10 + (uVar32 & ~(-1 << (uVar22 & 0xff))) * 4);
        uVar23 = (uint)pbVar35[1];
        local_2c[0] = pbVar28;
      } while (uVar34 < uVar23);
      bVar6 = *pbVar35;
      uVar1 = *(ushort *)(pbVar35 + 2);
    }
    else {
      bVar6 = *(byte *)(iVar10 + uVar18 * 4);
      uVar1 = *(ushort *)(iVar9 + 2);
    }
    uVar30 = (uint)uVar1;
    uVar18 = (uint)bVar6;
    uVar22 = uVar23;
    if ((bVar6 & 0xf0) == 0) {
      uVar18 = ~(-1 << (uVar18 + uVar23 & 0xff));
      iVar11 = uVar30 + ((uVar18 & uVar32) >> uVar23);
      iVar9 = iVar10 + iVar11 * 4;
      uVar22 = (uint)*(byte *)(iVar9 + 1);
      if (uVar34 < uVar22 + uVar23) {
        do {
          if (pbVar27 == (byte *)0x0) {
            pbVar27 = (byte *)(*param_2)(param_3,local_2c);
            if (pbVar27 == (byte *)0x0) {
              uVar21 = 0xfffffffb;
              pbVar28 = *(byte **)(iVar33 + 0x2c);
              pbVar27 = (byte *)0x0;
              local_2c[0] = (byte *)0x0;
              goto LAB_00018344;
            }
            iVar10 = *(int *)(iVar33 + 0x54);
          }
          pbVar27 = pbVar27 + -1;
          pbVar28 = local_2c[0] + 1;
          uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
          uVar34 = uVar34 + 8;
          pbVar35 = (byte *)(iVar10 + (uVar30 + ((uVar18 & uVar32) >> uVar23)) * 4);
          uVar22 = (uint)pbVar35[1];
          local_2c[0] = pbVar28;
        } while (uVar34 < uVar22 + uVar23);
        uVar1 = *(ushort *)(pbVar35 + 2);
        bVar6 = *pbVar35;
      }
      else {
        bVar6 = *(byte *)(iVar10 + iVar11 * 4);
        uVar1 = *(ushort *)(iVar9 + 2);
      }
      uVar30 = (uint)uVar1;
      uVar18 = (uint)bVar6;
      uVar32 = uVar32 >> uVar23;
      uVar34 = uVar34 - uVar23;
    }
    uVar32 = uVar32 >> uVar22;
    uVar34 = uVar34 - uVar22;
    if ((uVar18 & 0x40) == 0) {
      uVar18 = uVar18 & 0xf;
      *(uint *)(iVar33 + 0x48) = uVar30;
      *(uint *)(iVar33 + 0x4c) = uVar18;
      if (uVar18 != 0) {
        if (uVar34 < uVar18) {
          do {
            if (pbVar27 == (byte *)0x0) {
              pbVar27 = (byte *)(*param_2)(param_3,local_2c);
              if (pbVar27 == (byte *)0x0) goto LAB_0001848c;
              uVar18 = *(uint *)(iVar33 + 0x4c);
            }
            pbVar27 = pbVar27 + -1;
            pbVar28 = local_2c[0] + 1;
            uVar32 = uVar32 + ((uint)*local_2c[0] << (uVar34 & 0xff));
            uVar34 = uVar34 + 8;
            local_2c[0] = pbVar28;
          } while (uVar34 < uVar18);
        }
        uVar34 = uVar34 - uVar18;
        uVar30 = (uVar32 & ~(-1 << (uVar18 & 0xff))) + *(int *)(iVar33 + 0x48);
        uVar32 = uVar32 >> (uVar18 & 0xff);
        *(uint *)(iVar33 + 0x48) = uVar30;
      }
      pbVar28 = *(byte **)(iVar33 + 0x2c);
      pbVar35 = local_6c;
      if (pbVar28 <= *(byte **)(iVar33 + 0x30)) {
        pbVar35 = (byte *)0x0;
      }
      if (uVar30 <= (uint)((int)pbVar28 - (int)pbVar35)) {
        while( true ) {
          if (local_6c == (byte *)0x0) {
            local_5c = *(byte **)(iVar33 + 0x38);
            *(byte **)(iVar33 + 0x30) = pbVar28;
            iVar9 = (*param_4)(param_5,local_5c,pbVar28);
            local_6c = pbVar28;
            if (iVar9 != 0) {
              uVar21 = 0xfffffffb;
              pbVar28 = *(byte **)(iVar33 + 0x2c);
              goto LAB_00018344;
            }
            pbVar28 = *(byte **)(iVar33 + 0x2c);
          }
          iVar9 = *(int *)(iVar33 + 0x48);
          pbVar36 = *(byte **)(iVar33 + 0x44);
          pbVar35 = pbVar28 + -iVar9;
          if (pbVar35 < local_6c) {
            pbVar28 = local_6c + (iVar9 - (int)pbVar28);
          }
          else {
            pbVar35 = (byte *)-iVar9;
            pbVar28 = local_6c;
          }
          pbVar35 = local_5c + (int)pbVar35;
          if (pbVar36 < pbVar28) {
            pbVar28 = pbVar36;
          }
          *(int *)(iVar33 + 0x44) = (int)pbVar36 - (int)pbVar28;
          local_6c = local_6c + -(int)pbVar28;
          if (pbVar28 + -1 < (byte *)0xf || pbVar35 < local_5c + 0x10 && local_5c < pbVar35 + 0x10)
          {
            pbVar29 = local_5c + -1;
            pbVar36 = pbVar35;
            do {
              pbVar13 = pbVar36 + 1;
              pbVar29 = pbVar29 + 1;
              *pbVar29 = *pbVar36;
              pbVar36 = pbVar13;
            } while (pbVar35 + (int)pbVar28 != pbVar13);
          }
          else {
            uVar22 = 0;
            uVar23 = ((uint)(pbVar28 + -0x10) >> 4) + 1;
            pbVar36 = local_5c;
            pbVar29 = pbVar35;
            do {
              uVar22 = uVar22 + 1;
              uVar21 = *(undefined4 *)pbVar29;
              uVar3 = *(undefined4 *)(pbVar29 + 4);
              uVar4 = *(undefined4 *)(pbVar29 + 8);
              uVar5 = *(undefined4 *)(pbVar29 + 0xc);
              pbVar29 = pbVar29 + 0x10;
              *(undefined4 *)pbVar36 = uVar21;
              *(undefined4 *)(pbVar36 + 4) = uVar3;
              *(undefined4 *)(pbVar36 + 8) = uVar4;
              *(undefined4 *)(pbVar36 + 0xc) = uVar5;
              pbVar36 = pbVar36 + 0x10;
            } while (uVar22 < uVar23);
            pbVar13 = local_5c + uVar23 * 0x10;
            pbVar29 = pbVar28 + uVar23 * -0x10;
            pbVar36 = pbVar35 + uVar23 * 0x10;
            if (((((pbVar28 != (byte *)(uVar23 * 0x10)) &&
                  (local_5c[uVar23 * 0x10] = pbVar35[uVar23 * 0x10], pbVar29 != (byte *)0x1)) &&
                 ((pbVar13[1] = pbVar36[1], pbVar29 != (byte *)0x2 &&
                  ((pbVar13[2] = pbVar36[2], pbVar29 != (byte *)0x3 &&
                   (pbVar13[3] = pbVar36[3], pbVar29 != (byte *)0x4)))))) &&
                (pbVar13[4] = pbVar36[4], pbVar29 != (byte *)0x5)) &&
               (((((pbVar13[5] = pbVar36[5], pbVar29 != (byte *)0x6 &&
                   (pbVar13[6] = pbVar36[6], pbVar29 != (byte *)0x7)) &&
                  (pbVar13[7] = pbVar36[7], pbVar29 != (byte *)0x8)) &&
                 ((pbVar13[8] = pbVar36[8], pbVar29 != (byte *)0x9 &&
                  (pbVar13[9] = pbVar36[9], pbVar29 != (byte *)0xa)))) &&
                (((pbVar13[10] = pbVar36[10], pbVar29 != (byte *)0xb &&
                  ((pbVar13[0xb] = pbVar36[0xb], pbVar29 != (byte *)0xc &&
                   (pbVar13[0xc] = pbVar36[0xc], pbVar29 != (byte *)0xd)))) &&
                 (pbVar13[0xd] = pbVar36[0xd], pbVar29 != (byte *)0xe)))))) {
              pbVar13[0xe] = pbVar36[0xe];
            }
          }
          local_5c = local_5c + (int)pbVar28;
          if (*(int *)(iVar33 + 0x44) == 0) break;
          pbVar28 = *(byte **)(iVar33 + 0x2c);
        }
        uVar21 = *(undefined4 *)(iVar33 + 4);
        goto LAB_00017f68;
      }
      param_1[6] = DAT_00018d64 + 0x188d4;
      *(undefined4 *)(iVar33 + 4) = 0x3f51;
      goto LAB_0001818c;
    }
    iVar8 = DAT_00018d60 + 0x18868;
  }
  else {
    iVar8 = DAT_00018d54 + 0x1846c;
  }
LAB_00018178:
  pbVar28 = *(byte **)(iVar33 + 0x2c);
  param_1[6] = iVar8;
  *(undefined4 *)(iVar33 + 4) = 0x3f51;
LAB_0001818c:
  uVar21 = 0xfffffffd;
  local_64 = (byte *)0x0;
LAB_00018344:
  if (local_6c < pbVar28) {
    iVar8 = (*param_4)(param_5,*(undefined4 *)(iVar33 + 0x38),(int)pbVar28 - (int)local_6c);
    if (iVar8 == 0) {
      local_64 = (byte *)0x0;
    }
    if (local_64 != (byte *)0x0) {
      uVar21 = 0xfffffffb;
    }
  }
  *param_1 = local_2c[0];
  param_1[1] = pbVar27;
  return uVar21;
}



/* ===== inflateBackEnd @ 000191dc size=68 ===== */

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



/* ===== FUN_00019220 @ 00019220 size=3568 ===== */

void FUN_00019220(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint uVar35;
  undefined1 *puVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 *local_7c;
  
  iVar31 = param_1[7];
  iVar17 = param_1[4];
  puVar25 = (undefined8 *)param_1[3];
  puVar14 = *(undefined8 **)(iVar31 + 0x34);
  iVar21 = *(int *)(iVar31 + 0x2c);
  puVar23 = (undefined8 *)((uint)puVar14 & 0xfffffff0);
  uVar20 = *(uint *)(iVar31 + 0x58);
  puVar15 = *(undefined8 **)(iVar31 + 0x38);
  iVar27 = (int)puVar14 - (int)puVar23;
  puVar18 = *(undefined8 **)(iVar31 + 0x30);
  pbVar22 = (byte *)*param_1;
  puVar28 = (undefined1 *)((int)puVar15 + (int)puVar23);
  puVar29 = (undefined8 *)((int)puVar25 + iVar17 + -0x101);
  uVar19 = *(uint *)(iVar31 + 0x3c);
  uVar16 = *(uint *)(iVar31 + 0x40);
  iVar24 = *(int *)(iVar31 + 0x50);
  iVar30 = *(int *)(iVar31 + 0x54);
  pbVar7 = pbVar22 + param_1[1] + -5;
  uVar8 = *(uint *)(iVar31 + 0x5c);
  puVar13 = puVar25;
  do {
    if (uVar16 < 0xf) {
      bVar2 = *pbVar22;
      uVar9 = uVar16 + 8;
      pbVar1 = pbVar22 + 1;
      pbVar22 = pbVar22 + 2;
      uVar10 = uVar16 & 0xff;
      uVar16 = uVar16 + 0x10;
      uVar19 = uVar19 + ((uint)bVar2 << uVar10) + ((uint)*pbVar1 << (uVar9 & 0xff));
    }
    uVar10 = ~(-1 << (uVar20 & 0xff)) & uVar19;
    iVar3 = iVar24 + uVar10 * 4;
    bVar2 = *(byte *)(iVar24 + uVar10 * 4);
    uVar10 = (uint)bVar2;
    uVar19 = uVar19 >> (uint)*(byte *)(iVar3 + 1);
    uVar16 = uVar16 - *(byte *)(iVar3 + 1);
    if (uVar10 == 0) {
LAB_000193d4:
      puVar26 = (undefined8 *)((int)puVar13 + 1);
      *(char *)puVar13 = (char)*(undefined2 *)(iVar3 + 2);
    }
    else {
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
          while( true ) {
            iVar11 = (uVar19 & ~(-1 << uVar10)) + (uint)*(ushort *)(iVar3 + 2);
            iVar3 = iVar24 + iVar11 * 4;
            bVar2 = *(byte *)(iVar24 + iVar11 * 4);
            uVar10 = (uint)bVar2;
            uVar19 = uVar19 >> (uint)*(byte *)(iVar3 + 1);
            uVar16 = uVar16 - *(byte *)(iVar3 + 1);
            if (uVar10 == 0) break;
            if ((bVar2 & 0x10) != 0) goto LAB_00019458;
            if ((bVar2 & 0x40) != 0) goto LAB_000195dc;
          }
          goto LAB_000193d4;
        }
LAB_000195dc:
        if ((uVar10 & 0x20) == 0) {
          param_1[6] = DAT_0001a010 + 0x195fc;
          *(undefined4 *)(iVar31 + 4) = 0x3f51;
        }
        else {
          *(undefined4 *)(iVar31 + 4) = 0x3f3f;
        }
        break;
      }
LAB_00019458:
      uVar10 = uVar10 & 0xf;
      puVar12 = (undefined8 *)(uint)*(ushort *)(iVar3 + 2);
      if (uVar10 != 0) {
        if (uVar16 < uVar10) {
          uVar19 = uVar19 + ((uint)*pbVar22 << (uVar16 & 0xff));
          uVar16 = uVar16 + 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar16 = uVar16 - uVar10;
        puVar12 = (undefined8 *)((int)puVar12 + (uVar19 & ~(-1 << uVar10)));
        uVar19 = uVar19 >> uVar10;
      }
      if (uVar16 < 0xf) {
        bVar2 = *pbVar22;
        uVar9 = uVar16 + 8;
        pbVar1 = pbVar22 + 1;
        pbVar22 = pbVar22 + 2;
        uVar10 = uVar16 & 0xff;
        uVar16 = uVar16 + 0x10;
        uVar19 = uVar19 + ((uint)bVar2 << uVar10) + ((uint)*pbVar1 << (uVar9 & 0xff));
      }
      uVar10 = ~(-1 << (uVar8 & 0xff)) & uVar19;
      while( true ) {
        iVar3 = iVar30 + uVar10 * 4;
        bVar2 = *(byte *)(iVar30 + uVar10 * 4);
        uVar19 = uVar19 >> (uint)*(byte *)(iVar3 + 1);
        uVar16 = uVar16 - *(byte *)(iVar3 + 1);
        if ((bVar2 & 0x10) != 0) break;
        if ((bVar2 & 0x40) != 0) {
          param_1[6] = DAT_0001a014 + 0x19638;
          *(undefined4 *)(iVar31 + 4) = 0x3f51;
          goto LAB_000193f0;
        }
        uVar10 = (uVar19 & ~(-1 << (uint)bVar2)) + (uint)*(ushort *)(iVar3 + 2);
      }
      uVar9 = bVar2 & 0xf;
      uVar32 = (uint)*(ushort *)(iVar3 + 2);
      uVar10 = uVar16;
      if (uVar16 < uVar9) {
        bVar2 = *pbVar22;
        uVar10 = uVar16 + 8;
        if (uVar9 <= uVar10) {
          pbVar22 = pbVar22 + 1;
        }
        uVar19 = uVar19 + ((uint)bVar2 << (uVar16 & 0xff));
        if (uVar10 < uVar9) {
          pbVar1 = pbVar22 + 1;
          pbVar22 = pbVar22 + 2;
          uVar19 = uVar19 + ((uint)*pbVar1 << (uVar10 & 0xff));
          uVar10 = uVar16 + 0x10;
        }
      }
      uVar34 = uVar19 & ~(-1 << uVar9);
      uVar16 = uVar10 - uVar9;
      uVar10 = (int)puVar13 - (int)((int)puVar25 + (iVar17 - param_2));
      uVar35 = uVar34 + uVar32;
      uVar19 = uVar19 >> uVar9;
      if (uVar10 < uVar35) {
        puVar4 = (undefined8 *)(uVar35 - uVar10);
        if ((puVar18 < puVar4) && (*(int *)(iVar31 + 0x1bc4) != 0)) {
          param_1[6] = DAT_0001a018 + 0x19be4;
          *(undefined4 *)(iVar31 + 4) = 0x3f51;
          break;
        }
        iVar3 = uVar10 - uVar35;
        puVar26 = puVar13;
        if (puVar14 == (undefined8 *)0x0) {
          local_7c = (undefined8 *)((int)puVar15 + iVar21 + iVar3);
          if (puVar4 < puVar12) {
            puVar26 = (undefined8 *)((int)puVar15 + (((iVar21 + uVar10) - uVar32) - uVar34));
            if ((undefined1 *)((int)puVar4 + -1) < (undefined1 *)0xf ||
                puVar26 < puVar13 + 2 &&
                puVar13 < (undefined8 *)
                          ((int)puVar15 + (((iVar21 + 0x10 + uVar10) - uVar32) - uVar34))) {
              puVar33 = (undefined1 *)((int)puVar13 + -1);
              puVar26 = local_7c;
              do {
                puVar5 = (undefined8 *)((int)puVar26 + 1);
                puVar33 = puVar33 + 1;
                *puVar33 = *(undefined1 *)puVar26;
                puVar26 = puVar5;
              } while (puVar5 != (undefined8 *)((int)local_7c + (int)puVar4));
            }
            else {
              uVar9 = ((uint)(puVar4 + -2) >> 4) + 1;
              uVar10 = 0;
              puVar5 = puVar13;
              do {
                uVar10 = uVar10 + 1;
                uVar38 = *puVar26;
                uVar39 = puVar26[1];
                puVar26 = puVar26 + 2;
                *puVar5 = uVar38;
                puVar5[1] = uVar39;
                puVar5 = puVar5 + 2;
              } while (uVar10 < uVar9);
              puVar6 = puVar4 + uVar9 * -2;
              puVar26 = puVar13 + uVar9 * 2;
              puVar5 = local_7c + uVar9 * 2;
              if ((((puVar4 != (undefined8 *)(uVar9 * 0x10)) &&
                   (*(undefined1 *)(puVar13 + uVar9 * 2) = *(undefined1 *)(local_7c + uVar9 * 2),
                   puVar6 != (undefined8 *)0x1)) &&
                  (*(undefined1 *)((int)puVar26 + 1) = *(undefined1 *)((int)puVar5 + 1),
                  puVar6 != (undefined8 *)0x2)) &&
                 ((((*(undefined1 *)((int)puVar26 + 2) = *(undefined1 *)((int)puVar5 + 2),
                    puVar6 != (undefined8 *)0x3 &&
                    (*(undefined1 *)((int)puVar26 + 3) = *(undefined1 *)((int)puVar5 + 3),
                    puVar6 != (undefined8 *)0x4)) &&
                   ((*(undefined1 *)((int)puVar26 + 4) = *(undefined1 *)((int)puVar5 + 4),
                    puVar6 != (undefined8 *)0x5 &&
                    ((*(undefined1 *)((int)puVar26 + 5) = *(undefined1 *)((int)puVar5 + 5),
                     puVar6 != (undefined8 *)0x6 &&
                     (*(undefined1 *)((int)puVar26 + 6) = *(undefined1 *)((int)puVar5 + 6),
                     puVar6 != (undefined8 *)0x7)))))) &&
                  (((*(undefined1 *)((int)puVar26 + 7) = *(undefined1 *)((int)puVar5 + 7),
                    puVar6 != (undefined8 *)0x8 &&
                    ((((*(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar5 + 1),
                       puVar6 != (undefined8 *)0x9 &&
                       (*(undefined1 *)((int)puVar26 + 9) = *(undefined1 *)((int)puVar5 + 9),
                       puVar6 != (undefined8 *)0xa)) &&
                      (*(undefined1 *)((int)puVar26 + 10) = *(undefined1 *)((int)puVar5 + 10),
                      puVar6 != (undefined8 *)0xb)) &&
                     ((*(undefined1 *)((int)puVar26 + 0xb) = *(undefined1 *)((int)puVar5 + 0xb),
                      puVar6 != (undefined8 *)0xc &&
                      (*(undefined1 *)((int)puVar26 + 0xc) = *(undefined1 *)((int)puVar5 + 0xc),
                      puVar6 != (undefined8 *)0xd)))))) &&
                   (*(undefined1 *)((int)puVar26 + 0xd) = *(undefined1 *)((int)puVar5 + 0xd),
                   puVar6 != (undefined8 *)0xe)))))) {
                *(undefined1 *)((int)puVar26 + 0xe) = *(undefined1 *)((int)puVar5 + 0xe);
              }
            }
LAB_00019bbc:
            puVar12 = (undefined8 *)((int)puVar12 + iVar3);
            puVar26 = (undefined8 *)((int)puVar13 + (int)puVar4);
            local_7c = (undefined8 *)(((int)puVar13 + (int)puVar4) - uVar35);
          }
joined_r0x00019564:
          for (; (undefined8 *)0x2 < puVar12; puVar12 = (undefined8 *)((int)puVar12 + -3)) {
LAB_00019574:
            *(undefined1 *)puVar26 = *(undefined1 *)local_7c;
            *(undefined1 *)((int)puVar26 + 1) = *(undefined1 *)((int)local_7c + 1);
            *(undefined1 *)((int)puVar26 + 2) = *(undefined1 *)((int)local_7c + 2);
            puVar26 = (undefined8 *)((int)puVar26 + 3);
            local_7c = (undefined8 *)((int)local_7c + 3);
          }
          if (puVar12 == (undefined8 *)0x0) goto LAB_000193dc;
        }
        else {
          if (puVar4 <= puVar14) {
            local_7c = (undefined8 *)((int)puVar15 + (int)((int)puVar14 + iVar3));
            if (puVar4 < puVar12) {
              puVar26 = (undefined8 *)
                        ((int)puVar15 + (int)((int)puVar14 + ((uVar10 - uVar32) - uVar34)));
              if ((undefined1 *)((int)puVar4 + -1) < (undefined1 *)0xf ||
                  puVar26 < puVar13 + 2 &&
                  puVar13 < (undefined8 *)
                            ((int)puVar15 +
                            (int)((int)puVar14 + (((uVar10 + 0x10) - uVar32) - uVar34)))) {
                puVar33 = (undefined1 *)((int)puVar13 + -1);
                puVar26 = local_7c;
                do {
                  puVar5 = (undefined8 *)((int)puVar26 + 1);
                  puVar33 = puVar33 + 1;
                  *puVar33 = *(undefined1 *)puVar26;
                  puVar26 = puVar5;
                } while (puVar5 != (undefined8 *)((int)local_7c + (int)puVar4));
              }
              else {
                uVar9 = 0;
                uVar10 = ((uint)(puVar4 + -2) >> 4) + 1;
                puVar5 = puVar13;
                do {
                  uVar9 = uVar9 + 1;
                  uVar38 = *puVar26;
                  uVar39 = puVar26[1];
                  puVar26 = puVar26 + 2;
                  *puVar5 = uVar38;
                  puVar5[1] = uVar39;
                  puVar5 = puVar5 + 2;
                } while (uVar9 < uVar10);
                puVar26 = puVar13 + uVar10 * 2;
                puVar5 = puVar4 + uVar10 * -2;
                puVar6 = local_7c + uVar10 * 2;
                if ((((((puVar4 != (undefined8 *)(uVar10 * 0x10)) &&
                       (*(undefined1 *)(puVar13 + uVar10 * 2) =
                             *(undefined1 *)(local_7c + uVar10 * 2), puVar5 != (undefined8 *)0x1))
                      && (*(undefined1 *)((int)puVar26 + 1) = *(undefined1 *)((int)puVar6 + 1),
                         puVar5 != (undefined8 *)0x2)) &&
                     (((*(undefined1 *)((int)puVar26 + 2) = *(undefined1 *)((int)puVar6 + 2),
                       puVar5 != (undefined8 *)0x3 &&
                       (*(undefined1 *)((int)puVar26 + 3) = *(undefined1 *)((int)puVar6 + 3),
                       puVar5 != (undefined8 *)0x4)) &&
                      ((*(undefined1 *)((int)puVar26 + 4) = *(undefined1 *)((int)puVar6 + 4),
                       puVar5 != (undefined8 *)0x5 &&
                       ((*(undefined1 *)((int)puVar26 + 5) = *(undefined1 *)((int)puVar6 + 5),
                        puVar5 != (undefined8 *)0x6 &&
                        (*(undefined1 *)((int)puVar26 + 6) = *(undefined1 *)((int)puVar6 + 6),
                        puVar5 != (undefined8 *)0x7)))))))) &&
                    (*(undefined1 *)((int)puVar26 + 7) = *(undefined1 *)((int)puVar6 + 7),
                    puVar5 != (undefined8 *)0x8)) &&
                   (((((*(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar6 + 1),
                       puVar5 != (undefined8 *)0x9 &&
                       (*(undefined1 *)((int)puVar26 + 9) = *(undefined1 *)((int)puVar6 + 9),
                       puVar5 != (undefined8 *)0xa)) &&
                      (*(undefined1 *)((int)puVar26 + 10) = *(undefined1 *)((int)puVar6 + 10),
                      puVar5 != (undefined8 *)0xb)) &&
                     ((*(undefined1 *)((int)puVar26 + 0xb) = *(undefined1 *)((int)puVar6 + 0xb),
                      puVar5 != (undefined8 *)0xc &&
                      (*(undefined1 *)((int)puVar26 + 0xc) = *(undefined1 *)((int)puVar6 + 0xc),
                      puVar5 != (undefined8 *)0xd)))) &&
                    (*(undefined1 *)((int)puVar26 + 0xd) = *(undefined1 *)((int)puVar6 + 0xd),
                    puVar5 != (undefined8 *)0xe)))) {
                  *(undefined1 *)((int)puVar26 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
                }
              }
              goto LAB_00019bbc;
            }
            goto joined_r0x00019564;
          }
          puVar5 = (undefined8 *)((int)puVar4 - (int)puVar14);
          local_7c = (undefined8 *)((int)puVar15 + (int)((int)puVar14 + iVar3 + iVar21));
          if (puVar12 <= puVar5) goto joined_r0x00019564;
          puVar26 = (undefined8 *)
                    ((int)puVar15 + (int)((int)puVar14 + (((uVar10 + iVar21) - uVar32) - uVar34)));
          puVar12 = (undefined8 *)((undefined1 *)((int)puVar12 + (int)puVar14) + iVar3);
          if ((undefined1 *)((int)puVar5 + -1) < (undefined1 *)0xf ||
              puVar26 < puVar13 + 2 &&
              puVar13 < (undefined8 *)
                        ((int)puVar15 +
                        (int)((int)puVar14 + (((uVar10 + iVar21 + 0x10) - uVar32) - uVar34)))) {
            puVar33 = (undefined1 *)((int)puVar13 + -1);
            puVar26 = local_7c;
            do {
              puVar6 = (undefined8 *)((int)puVar26 + 1);
              puVar33 = puVar33 + 1;
              *puVar33 = *(undefined1 *)puVar26;
              puVar26 = puVar6;
            } while (puVar6 != (undefined8 *)((int)local_7c + (int)puVar5));
          }
          else {
            puVar6 = puVar13;
            do {
              uVar38 = *puVar26;
              uVar39 = puVar26[1];
              puVar26 = puVar26 + 2;
              *puVar6 = uVar38;
              puVar6[1] = uVar39;
              puVar6 = puVar6 + 2;
            } while (puVar6 != (undefined8 *)(((uint)puVar5 & 0xfffffff0) + (int)puVar13));
            puVar26 = (undefined8 *)((uint)puVar5 & 0xfffffff0);
            puVar33 = (undefined1 *)((int)puVar13 + (int)puVar26);
            iVar3 = (int)puVar5 - (int)puVar26;
            puVar36 = (undefined1 *)((int)local_7c + (int)puVar26);
            if ((((puVar5 != puVar26) &&
                 (*(undefined1 *)((int)puVar13 + (int)puVar26) =
                       *(undefined1 *)((int)local_7c + (int)puVar26), iVar3 != 1)) &&
                (((puVar33[1] = puVar36[1], iVar3 != 2 &&
                  (((puVar33[2] = puVar36[2], iVar3 != 3 && (puVar33[3] = puVar36[3], iVar3 != 4))
                   && (puVar33[4] = puVar36[4], iVar3 != 5)))) &&
                 (((puVar33[5] = puVar36[5], iVar3 != 6 && (puVar33[6] = puVar36[6], iVar3 != 7)) &&
                  (puVar33[7] = puVar36[7], iVar3 != 8)))))) &&
               (((puVar33[8] = puVar36[8], iVar3 != 9 && (puVar33[9] = puVar36[9], iVar3 != 10)) &&
                ((puVar33[10] = puVar36[10], iVar3 != 0xb &&
                 (((puVar33[0xb] = puVar36[0xb], iVar3 != 0xc &&
                   (puVar33[0xc] = puVar36[0xc], iVar3 != 0xd)) &&
                  (puVar33[0xd] = puVar36[0xd], iVar3 != 0xe)))))))) {
              puVar33[0xe] = puVar36[0xe];
            }
          }
          puVar26 = (undefined8 *)((int)puVar13 + (int)puVar5);
          local_7c = puVar15;
          if (puVar12 <= puVar14) goto joined_r0x00019564;
          puVar5 = (undefined8 *)((int)puVar13 + (uVar32 - (int)((int)puVar14 + uVar10)) + uVar34);
          puVar12 = (undefined8 *)((int)puVar12 - (int)puVar14);
          if ((undefined1 *)((int)puVar14 + -1) < (undefined1 *)0xf ||
              puVar5 < puVar15 + 2 &&
              puVar15 < (undefined8 *)
                        ((int)puVar13 + ((0x10 - (int)puVar14) - uVar10) + uVar32 + uVar34)) {
            puVar33 = (undefined1 *)((int)puVar26 + -1);
            puVar26 = puVar15;
            do {
              puVar5 = (undefined8 *)((int)puVar26 + 1);
              puVar33 = puVar33 + 1;
              *puVar33 = *(undefined1 *)puVar26;
              puVar26 = puVar5;
            } while (puVar5 != (undefined8 *)((int)puVar15 + (int)puVar14));
          }
          else {
            puVar37 = (undefined8 *)((int)puVar5 + ((uint)puVar14 & 0xfffffff0));
            puVar6 = puVar15;
            do {
              uVar38 = *puVar6;
              uVar39 = puVar6[1];
              puVar6 = puVar6 + 2;
              *puVar5 = uVar38;
              puVar5[1] = uVar39;
              puVar5 = puVar5 + 2;
            } while (puVar5 != puVar37);
            puVar33 = (undefined1 *)((int)puVar26 + (int)puVar23);
            if ((((puVar14 != puVar23) &&
                 (*(undefined1 *)((int)puVar26 + (int)puVar23) = *puVar28, iVar27 != 1)) &&
                ((((puVar33[1] = puVar28[1], iVar27 != 2 &&
                   ((puVar33[2] = puVar28[2], iVar27 != 3 && (puVar33[3] = puVar28[3], iVar27 != 4))
                   )) && (puVar33[4] = puVar28[4], iVar27 != 5)) &&
                 ((((puVar33[5] = puVar28[5], iVar27 != 6 && (puVar33[6] = puVar28[6], iVar27 != 7))
                   && (puVar33[7] = puVar28[7], iVar27 != 8)) &&
                  ((puVar33[8] = puVar28[8], iVar27 != 9 && (puVar33[9] = puVar28[9], iVar27 != 10))
                  )))))) &&
               (((puVar33[10] = puVar28[10], iVar27 != 0xb &&
                 ((puVar33[0xb] = puVar28[0xb], iVar27 != 0xc &&
                  (puVar33[0xc] = puVar28[0xc], iVar27 != 0xd)))) &&
                (puVar33[0xd] = puVar28[0xd], iVar27 != 0xe)))) {
              puVar33[0xe] = puVar28[0xe];
            }
          }
          puVar26 = (undefined8 *)((int)puVar13 + (int)puVar4);
          local_7c = (undefined8 *)((int)puVar26 - uVar35);
          if ((undefined8 *)0x2 < puVar12) goto LAB_00019574;
        }
        puVar13 = puVar12;
        if (puVar12 == (undefined8 *)0x2) {
          puVar13 = local_7c;
        }
        *(undefined1 *)puVar26 = *(undefined1 *)local_7c;
        if (puVar12 == (undefined8 *)0x2) {
          *(undefined1 *)((int)puVar26 + 1) = *(undefined1 *)((int)puVar13 + 1);
          puVar26 = (undefined8 *)((int)puVar26 + 2);
        }
        else {
          puVar26 = (undefined8 *)((int)puVar26 + 1);
        }
      }
      else {
        puVar33 = (undefined1 *)((int)puVar13 - uVar35);
        do {
          puVar4 = puVar13;
          puVar36 = puVar33;
          puVar12 = (undefined8 *)((int)puVar12 + -3);
          puVar26 = (undefined8 *)((int)puVar4 + 3);
          *(undefined1 *)puVar4 = *puVar36;
          *(undefined1 *)((int)puVar4 + 1) = puVar36[1];
          *(undefined1 *)((int)puVar4 + 2) = puVar36[2];
          puVar33 = puVar36 + 3;
          puVar13 = puVar26;
        } while ((undefined8 *)0x2 < puVar12);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined1 *)((int)puVar4 + 3) = puVar36[3];
          if (puVar12 == (undefined8 *)0x2) {
            *(undefined1 *)((int)puVar4 + 4) = puVar36[4];
            puVar26 = (undefined8 *)((int)puVar4 + 5);
          }
          else {
            puVar26 = (undefined8 *)((int)puVar4 + 4);
          }
        }
      }
    }
LAB_000193dc:
    puVar13 = puVar26;
  } while (pbVar22 < pbVar7 && puVar26 < puVar29);
LAB_000193f0:
  pbVar22 = pbVar22 + -(uVar16 >> 3);
  *param_1 = pbVar22;
  if (pbVar22 < pbVar7) {
    iVar17 = (int)pbVar7 - (int)pbVar22;
  }
  else {
    iVar17 = -((int)pbVar22 - (int)pbVar7);
  }
  param_1[3] = puVar13;
  param_1[1] = iVar17 + 5;
  if (puVar13 < puVar29) {
    iVar17 = (int)puVar29 - (int)puVar13;
  }
  else {
    iVar17 = -((int)puVar13 - (int)puVar29);
  }
  param_1[4] = iVar17 + 0x101;
  *(uint *)(iVar31 + 0x3c) = uVar19 & ~(-1 << (uVar16 & 7));
  *(uint *)(iVar31 + 0x40) = uVar16 & 7;
  return;
}



/* ===== FUN_0001a020 @ 0001a020 size=336 ===== */

undefined4 FUN_0001a020(int param_1,int param_2,uint param_3)

{
  void *__dest;
  int iVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  uint __n_00;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  __dest = *(void **)(iVar1 + 0x38);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x20))
                               (*(undefined4 *)(param_1 + 0x28),
                                1 << (*(uint *)(iVar1 + 0x28) & 0xff),1);
    *(void **)(iVar1 + 0x38) = __dest;
    if (__dest == (void *)0x0) {
      return 1;
    }
  }
  uVar2 = *(uint *)(iVar1 + 0x2c);
  if (uVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    uVar2 = 1 << (*(uint *)(iVar1 + 0x28) & 0xff);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(uint *)(iVar1 + 0x2c) = uVar2;
  }
  if (uVar2 <= param_3) {
    memcpy(__dest,(void *)(param_2 - uVar2),uVar2);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return 0;
  }
  iVar3 = *(int *)(iVar1 + 0x34);
  __n_00 = uVar2 - iVar3;
  if (param_3 < __n_00) {
    memcpy((void *)((int)__dest + iVar3),(void *)(param_2 - param_3),param_3);
    __n_00 = param_3;
  }
  else {
    memcpy((void *)((int)__dest + iVar3),(void *)(param_2 - param_3),__n_00);
    __n = (iVar3 + param_3) - uVar2;
    if (__n != 0) {
      memcpy(*(void **)(iVar1 + 0x38),(void *)(param_2 + (__n_00 - param_3)),__n);
      *(size_t *)(iVar1 + 0x34) = __n;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
      return 0;
    }
  }
  uVar2 = __n_00 + *(int *)(iVar1 + 0x34);
  *(uint *)(iVar1 + 0x34) = uVar2;
  if (uVar2 == *(uint *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) <= *(uint *)(iVar1 + 0x30)) {
    return 0;
  }
  *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + __n_00;
  return 0;
}



/* ===== inflateResetKeep @ 0001a170 size=220 ===== */

undefined4 inflateResetKeep(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar5 = *(int **)(param_1 + 0x1c), piVar5 != (int *)0x0 && (param_1 == *piVar5)) &&
      (piVar5[1] - 0x3f34U < 0x20)))) {
    uVar2 = piVar5[3];
    piVar5[8] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    piVar4 = piVar5 + 0x14d;
    if (uVar2 != 0) {
      *(uint *)(param_1 + 0x30) = uVar3;
    }
    uVar1 = DAT_0001a250;
    piVar5[2] = 0;
    piVar5[1] = 0x3f34;
    piVar5[4] = 0;
    piVar5[5] = -1;
    piVar5[9] = 0;
    piVar5[6] = 0x8000;
    piVar5[0xf] = 0;
    piVar5[0x10] = 0;
    piVar5[0x1c] = (int)piVar4;
    *(ulonglong *)(piVar5 + 0x14) = CONCAT44(piVar4,piVar4);
    *(undefined8 *)(piVar5 + 0x6f1) = uVar1;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateReset @ 0001a258 size=120 ===== */

undefined4 inflateReset(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (param_1 == *piVar2)) &&
      (piVar2[1] - 0x3f34U < 0x20)))) {
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00011cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_inflateResetKeep_00037078)();
    return uVar1;
  }
  return 0xfffffffe;
}



/* ===== inflateReset2 @ 0001a2c4 size=216 ===== */

undefined4 inflateReset2(int param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
       (*(code **)(param_1 + 0x24) != (code *)0x0)) &&
      ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (param_1 == *piVar2)))) &&
     (piVar2[1] - 0x3f34U < 0x20)) {
    if ((int)param_2 < 0) {
      if ((int)param_2 < -0xf) {
        return 0xfffffffe;
      }
      param_2 = -param_2;
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)param_2 >> 4) + 5;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if (param_2 == 0 || param_2 - 8 < 8) {
      if ((piVar2[0xe] != 0) && (param_2 != piVar2[10])) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
        piVar2[0xe] = 0;
      }
      piVar2[3] = iVar3;
      piVar2[10] = param_2;
      uVar1 = inflateReset(param_1);
      return uVar1;
    }
  }
  return 0xfffffffe;
}



/* ===== inflateInit2_ @ 0001a39c size=248 ===== */

int inflateInit2_(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if ((param_3 == (char *)0x0) || (param_4 != 0x38 || *param_3 != '1')) {
    iVar2 = -6;
  }
  else if (param_1 == 0) {
    iVar2 = -2;
  }
  else {
    pcVar4 = *(code **)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = DAT_0001a498;
    if (pcVar4 == (code *)0x0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      pcVar4 = (code *)(iVar2 + 0x1a474);
      *(code **)(param_1 + 0x20) = pcVar4;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x24) = DAT_0001a494 + 0x1a45c;
    }
    piVar1 = (int *)(*pcVar4)(uVar3,1,0x1bd0);
    if (piVar1 == (int *)0x0) {
      iVar2 = -4;
    }
    else {
      *(int **)(param_1 + 0x1c) = piVar1;
      *piVar1 = param_1;
      piVar1[1] = 0x3f34;
      piVar1[0xe] = 0;
      iVar2 = inflateReset2(param_1,param_2);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  return iVar2;
}



/* ===== inflateInit_ @ 0001a49c size=16 ===== */

void inflateInit_(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}



/* ===== inflatePrime @ 0001a4ac size=172 ===== */

undefined4 inflatePrime(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (param_1 == *piVar2)) &&
      (piVar2[1] - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      return 0;
    }
    if ((int)param_2 < 0x11) {
      uVar3 = piVar2[0x10];
      uVar1 = param_2 + uVar3;
      if (uVar1 < 0x21) {
        piVar2[0x10] = uVar1;
        piVar2[0xf] = piVar2[0xf] + ((param_3 & ~(-1 << (param_2 & 0xff))) << (uVar3 & 0xff));
        return 0;
      }
    }
  }
  return 0xfffffffe;
}



/* ===== inflate @ 0001a558 size=8436 ===== */

/* WARNING: Control flow encountered bad instruction data */

undefined4 inflate(int *param_1)

{
  int *piVar1;
  
  if ((((((param_1 != (int *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
       ((piVar1 = (int *)param_1[7], piVar1 != (int *)0x0 && (param_1 == (int *)*piVar1)))) &&
      ((piVar1[1] - 0x3f34U < 0x20 && (param_1[3] != 0)))) && ((*param_1 != 0 || (param_1[1] == 0)))
     ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xfffffffe;
}


/* ===== inflateEnd @ 0001c6a8 size=144 ===== */

undefined4 inflateEnd(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (pcVar3 = *(code **)(param_1 + 0x24), pcVar3 != (code *)0x0)) &&
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (param_1 == *piVar2)) &&
      (piVar2[1] - 0x3f34U < 0x20)))) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    if (piVar2[0xe] != 0) {
      (*pcVar3)(uVar1,piVar2[0xe]);
      pcVar3 = *(code **)(param_1 + 0x24);
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      piVar2 = *(int **)(param_1 + 0x1c);
    }
    (*pcVar3)(uVar1,piVar2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateGetDictionary @ 0001c738 size=208 ===== */

undefined4 inflateGetDictionary(int param_1,void *param_2,int *param_3)

{
  void *pvVar1;
  int *piVar2;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  if (((piVar2 != (int *)0x0) && (param_1 == *piVar2)) && (piVar2[1] - 0x3f34U < 0x20)) {
    if (piVar2[0xc] != 0 && param_2 != (void *)0x0) {
      pvVar1 = memcpy(param_2,(void *)(piVar2[0xe] + piVar2[0xd]),piVar2[0xc] - piVar2[0xd]);
      memcpy((void *)((int)pvVar1 + (piVar2[0xc] - piVar2[0xd])),(void *)piVar2[0xe],piVar2[0xd]);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = piVar2[0xc];
      return 0;
    }
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateSetDictionary @ 0001c808 size=232 ===== */

undefined4 inflateSetDictionary(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 == (int *)0x0 || (param_1 != *piVar2)) ||
      (iVar3 = piVar2[1], 0x1f < iVar3 - 0x3f34U)))) {
    return 0xfffffffe;
  }
  if (piVar2[3] == 0) {
    if (iVar3 != 0x3f3e) goto LAB_0001c8a8;
  }
  else if (iVar3 != 0x3f3e) {
    return 0xfffffffe;
  }
  uVar1 = adler32(0,0);
  iVar3 = adler32(uVar1,param_2,param_3);
  if (piVar2[7] != iVar3) {
    return 0xfffffffd;
  }
LAB_0001c8a8:
  iVar3 = FUN_0001a020(param_1,param_2 + param_3,param_3);
  if (iVar3 == 0) {
    piVar2[4] = 1;
    return 0;
  }
  piVar2[1] = 0x3f52;
  return 0xfffffffc;
}



/* ===== inflateGetHeader @ 0001c8f0 size=116 ===== */

undefined4 inflateGetHeader(int param_1,int param_2)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (param_1 == *piVar1)) &&
      ((piVar1[1] - 0x3f34U < 0x20 && ((piVar1[3] & 2U) != 0)))))) {
    piVar1[9] = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateSync @ 0001c964 size=744 ===== */

undefined4 inflateSync(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined1 uStack_1d;
  char local_1c [4];
  
  if (((param_1 == (int *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) {
    return 0xfffffffe;
  }
  piVar6 = (int *)param_1[7];
  if (((piVar6 == (int *)0x0) || (param_1 != (int *)*piVar6)) ||
     (iVar2 = piVar6[1], 0x1f < iVar2 - 0x3f34U)) {
    return 0xfffffffe;
  }
  uVar8 = param_1[1];
  if (uVar8 == 0) {
    uVar8 = piVar6[0x10];
    if (uVar8 < 8) {
      return 0xfffffffb;
    }
    iVar12 = *param_1;
    if (iVar2 == 0x3f53) {
      uVar5 = piVar6[0x1b];
      uVar4 = 0;
      goto LAB_0001cbb0;
    }
    piVar6[1] = 0x3f53;
    uVar4 = uVar8 & 0xfffffff8;
    piVar6[0x10] = uVar4;
    uVar8 = piVar6[0xf] << (uVar8 & 7);
    piVar6[0xf] = uVar8;
LAB_0001ca10:
    local_1c[0] = (char)uVar8;
    uVar11 = uVar8 >> 8;
    if (7 < uVar4 - 8) {
      local_1c[1] = (char)(uVar8 >> 8);
      uVar11 = uVar8 >> 0x10;
      if (7 < uVar4 - 0x10) {
        local_1c[2] = (char)(uVar8 >> 0x10);
        uVar11 = uVar8 >> 0x18;
        if (7 < uVar4 - 0x18) {
          local_1c[3] = (char)(uVar8 >> 0x18);
          uVar11 = 0;
        }
      }
    }
    piVar6[0xf] = uVar11;
    uVar5 = 0;
    piVar6[0x10] = 0;
    puVar1 = &uStack_1d;
    do {
      if (uVar5 < 2) {
        cVar10 = '\0';
      }
      else {
        cVar10 = -1;
      }
      if (puVar1[1] == cVar10) {
        uVar5 = uVar5 + 1;
        uVar11 = (uint)(uVar5 < 4);
      }
      else {
        uVar5 = 4 - uVar5;
        uVar11 = 1;
        if (puVar1[1] == '\0') {
          uVar11 = (uint)(uVar5 < 4);
          if (uVar5 < 4) {
            uVar11 = 1;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      uVar8 = uVar11;
      if ((undefined1 *)((uVar4 - 8 >> 3) + 1) <= puVar1 + (2 - (int)local_1c)) {
        uVar8 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (uVar8 != 0);
LAB_0001cb24:
    piVar6[0x1b] = uVar5;
    uVar8 = param_1[1];
  }
  else {
    uVar11 = 0x3f53;
    iVar12 = *param_1;
    if (iVar2 != 0x3f53) {
      uVar8 = piVar6[0x10];
      uVar4 = uVar8 & 0xfffffff8;
      piVar6[1] = 0x3f53;
      piVar6[0x10] = uVar4;
      uVar8 = piVar6[0xf] << (uVar8 & 7);
      if (uVar4 < 8) {
        uVar11 = 1;
      }
      piVar6[0xf] = uVar8;
      if (7 < uVar4) goto LAB_0001ca10;
      uVar5 = 0;
      goto LAB_0001cb24;
    }
    uVar5 = piVar6[0x1b];
    uVar11 = (uint)(uVar5 < 4);
  }
  if (uVar8 == 0) {
    uVar11 = 0;
  }
  if (uVar11 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar7 = (char *)(iVar12 + -1);
    uVar4 = 0;
    do {
      pcVar7 = pcVar7 + 1;
      if (uVar5 < 2) {
        cVar10 = '\0';
      }
      else {
        cVar10 = -1;
      }
      if (cVar10 == *pcVar7) {
        uVar5 = uVar5 + 1;
        uVar3 = (uint)(uVar5 < 4);
      }
      else {
        uVar5 = 4 - uVar5;
        if (*pcVar7 == '\0') {
          if (uVar5 < 4) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar5 = 0;
          uVar3 = uVar11;
        }
      }
      uVar4 = uVar4 + 1;
      if (uVar4 < uVar8) {
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 0;
      }
    } while (uVar3 != 0);
    iVar12 = iVar12 + uVar4;
  }
LAB_0001cbb0:
  piVar6[0x1b] = uVar5;
  iVar2 = param_1[2];
  *param_1 = iVar12;
  param_1[1] = param_1[1] - uVar4;
  param_1[2] = uVar4 + iVar2;
  if (uVar5 != 4) {
    return 0xfffffffd;
  }
  iVar12 = piVar6[5];
  iVar9 = param_1[5];
  if (iVar12 == -1) {
    uVar8 = 0;
  }
  else {
    uVar8 = piVar6[3] & 0xfffffffb;
  }
  piVar6[3] = uVar8;
  inflateReset();
  param_1[2] = uVar4 + iVar2;
  param_1[5] = iVar9;
  piVar6[5] = iVar12;
  piVar6[1] = 0x3f3f;
  return 0;
}



/* ===== inflateSyncPoint @ 0001cc4c size=120 ===== */

uint inflateSyncPoint(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (param_1 == *piVar1)) &&
      (piVar1[1] - 0x3f34U < 0x20)))) {
    if (piVar1[1] != 0x3f41) {
      return 0;
    }
    return (uint)(piVar1[0x10] == 0);
  }
  return 0xfffffffe;
}



/* ===== inflateCopy @ 0001ccc4 size=592 ===== */

undefined4 inflateCopy(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *__dest;
  void *__dest_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *__src;
  undefined4 uVar10;
  
  if ((((param_2 == (undefined4 *)0x0) || ((code *)param_2[8] == (code *)0x0)) || (param_2[9] == 0))
     || (((__src = (int *)param_2[7], __src == (int *)0x0 || (param_2 != (undefined4 *)*__src)) ||
         (0x1f < __src[1] - 0x3f34U || param_1 == (undefined4 *)0x0)))) {
    return 0xfffffffe;
  }
  __dest = (int *)(*(code *)param_2[8])(param_2[10],1,0x1bd0);
  if (__dest == (int *)0x0) {
    return 0xfffffffc;
  }
  if (__src[0xe] == 0) {
    puVar5 = param_2;
    puVar1 = param_1;
    do {
      puVar8 = puVar1;
      puVar4 = puVar5;
      puVar5 = puVar4 + 4;
      uVar10 = puVar4[1];
      uVar2 = puVar4[2];
      uVar6 = puVar4[3];
      *puVar8 = *puVar4;
      puVar8[1] = uVar10;
      puVar8[2] = uVar2;
      puVar8[3] = uVar6;
      puVar1 = puVar8 + 4;
    } while (puVar5 != param_2 + 0xc);
    uVar2 = *puVar5;
    puVar8[5] = puVar4[5];
    puVar8[4] = uVar2;
    memcpy(__dest,__src,0x1bd0);
    piVar9 = (int *)__src[0x14];
    *__dest = (int)param_1;
    __dest_00 = (void *)0x0;
    if (piVar9 < __src + 0x14d) {
      __dest[0x1c] = (int)__dest + (__src[0x1c] - (int)(__src + 0x14d)) + 0x534;
      goto LAB_0001ce14;
    }
LAB_0001ce9c:
    piVar7 = __src + 0x14d;
    if (piVar9 <= __src + 0x6f0) {
      iVar3 = __src[0x15];
      __dest[0x14] = (int)__dest + (int)piVar9 + (0x534 - (int)piVar7);
      __dest[0x15] = (int)__dest + (iVar3 - (int)piVar7) + 0x534;
    }
    __dest[0x1c] = (int)__dest + (__src[0x1c] - (int)piVar7) + 0x534;
    if (__dest_00 == (void *)0x0) goto LAB_0001ce14;
  }
  else {
    __dest_00 = (void *)(*(code *)param_2[8])(param_2[10],1 << (__src[10] & 0xffU));
    if (__dest_00 == (void *)0x0) {
      (*(code *)param_2[9])(param_2[10],__dest);
      return 0xfffffffc;
    }
    puVar5 = param_2;
    puVar1 = param_1;
    do {
      puVar8 = puVar1;
      puVar4 = puVar5;
      puVar5 = puVar4 + 4;
      uVar10 = puVar4[1];
      uVar2 = puVar4[2];
      uVar6 = puVar4[3];
      *puVar8 = *puVar4;
      puVar8[1] = uVar10;
      puVar8[2] = uVar2;
      puVar8[3] = uVar6;
      puVar1 = puVar8 + 4;
    } while (puVar5 != param_2 + 0xc);
    uVar2 = *puVar5;
    puVar8[5] = puVar4[5];
    puVar8[4] = uVar2;
    memcpy(__dest,__src,0x1bd0);
    piVar9 = (int *)__src[0x14];
    *__dest = (int)param_1;
    if (__src + 0x14d <= piVar9) goto LAB_0001ce9c;
    __dest[0x1c] = (int)__dest + (__src[0x1c] - (int)(__src + 0x14d)) + 0x534;
  }
  memcpy(__dest_00,(void *)__src[0xe],1 << (__src[10] & 0xffU));
LAB_0001ce14:
  __dest[0xe] = (int)__dest_00;
  param_1[7] = __dest;
  return 0;
}



/* ===== inflateUndermine @ 0001cf14 size=104 ===== */

undefined4 inflateUndermine(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (param_1 == *piVar1)) &&
      (piVar1[1] - 0x3f34U < 0x20)))) {
    piVar1[0x6f1] = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}



/* ===== inflateValidate @ 0001cf7c size=136 ===== */

undefined4 inflateValidate(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (param_1 == *piVar2)))) &&
     (piVar2[1] - 0x3f34U < 0x20)) {
    uVar1 = piVar2[3];
    if ((param_2 != 0) && (uVar1 != 0)) {
      piVar2[3] = uVar1 | 4;
      return 0;
    }
    piVar2[3] = uVar1 & 0xfffffffb;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== inflateMark @ 0001d004 size=152 ===== */

int inflateMark(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar3 = *(int **)(param_1 + 0x1c), piVar3 != (int *)0x0 && (param_1 == *piVar3)) &&
      (iVar2 = piVar3[1], iVar2 - 0x3f34U < 0x20)))) {
    iVar1 = piVar3[0x6f2] * 0x10000;
    if (iVar2 == 0x3f43) {
      return iVar1 + piVar3[0x11];
    }
    if (iVar2 == 0x3f4c) {
      iVar1 = iVar1 + (piVar3[0x6f3] - piVar3[0x11]);
    }
    return iVar1;
  }
  return -0x10000;
}



/* ===== inflateCodesUsed @ 0001d09c size=108 ===== */

int inflateCodesUsed(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (param_1 == *piVar1)) &&
      (piVar1[1] - 0x3f34U < 0x20)))) {
    return piVar1[0x1c] - (int)(piVar1 + 0x14d) >> 2;
  }
  return -1;
}



/* ===== FUN_0001d108 @ 0001d108 size=3148 ===== */

undefined4
FUN_0001d108(int param_1,ushort *param_2,int param_3,int *param_4,uint *param_5,ushort *param_6)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  ushort *in_r12;
  uint uVar16;
  uint uVar17;
  ushort *unaff_lr;
  ushort *puVar18;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  int local_9c;
  uint local_94;
  uint local_8c;
  uint local_84;
  ushort *local_7c;
  ushort *local_78;
  ushort local_68 [2];
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint uStack_4c;
  ushort auStack_48 [4];
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  ushort *puVar19;
  
  uStack_64 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  bVar22 = param_3 != 0;
  if (bVar22) {
    in_r12 = param_2;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  local_60 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (bVar22) {
    unaff_lr = in_r12 + param_3;
  }
  local_58 = 0;
  uStack_54 = uStack_64;
  local_50 = 0;
  uStack_4c = uStack_64;
  if (bVar22) {
    do {
      puVar18 = in_r12 + 1;
      local_68[*in_r12] = local_68[*in_r12] + 1;
      in_r12 = puVar18;
    } while (unaff_lr != puVar18);
  }
  if (uStack_4c >> 0x10 == 0) {
    if ((short)uStack_4c == 0) {
      if (local_50._2_2_ == 0) {
        if ((short)local_50 == 0) {
          if (uStack_54._2_2_ == 0) {
            if ((short)uStack_54 == 0) {
              if (local_58._2_2_ == 0) {
                if ((short)local_58 == 0) {
                  if (local_5c._2_2_ == 0) {
                    if ((short)local_5c == 0) {
                      if (local_60._2_2_ == 0) {
                        if ((short)local_60 == 0) {
                          if (uStack_64._2_2_ == 0) {
                            if ((short)uStack_64 == 0) {
                              if (local_68[1] == 0) {
                                puVar10 = (undefined2 *)*param_4;
                                puVar10[1] = 0;
                                *puVar10 = 0x140;
                                *param_4 = (int)(puVar10 + 4);
                                puVar10[2] = 0x140;
                                puVar10[3] = 0;
                                *param_5 = 1;
                                return 0;
                              }
                              uVar6 = 1;
                              uVar15 = 1;
                            }
                            else {
                              uVar15 = 2;
                              uVar6 = uVar15;
                              if (local_68[1] != 0) {
                                uVar6 = 1;
                              }
                            }
                          }
                          else if (local_68[1] == 0) {
                            if ((short)uStack_64 != 0) {
                              uVar15 = 3;
                              goto LAB_0001dd20;
                            }
                            uVar6 = 3;
                            uVar15 = 3;
                          }
                          else {
                            uVar6 = 1;
                            uVar15 = 3;
                          }
                        }
                        else {
                          if (local_68[1] == 0) {
                            uVar15 = 4;
                            goto LAB_0001d25c;
                          }
                          uVar6 = 1;
                          uVar15 = 4;
                        }
                      }
                      else {
                        if (local_68[1] == 0) {
                          uVar15 = 5;
                          goto LAB_0001d25c;
                        }
                        uVar6 = 1;
                        uVar15 = 5;
                      }
                    }
                    else {
                      if (local_68[1] == 0) {
                        uVar15 = 6;
                        goto LAB_0001d25c;
                      }
                      uVar6 = 1;
                      uVar15 = 6;
                    }
                  }
                  else {
                    if (local_68[1] == 0) {
                      uVar15 = 7;
                      goto LAB_0001d25c;
                    }
                    uVar6 = 1;
                    uVar15 = 7;
                  }
                }
                else {
                  if (local_68[1] == 0) {
                    uVar15 = 8;
                    goto LAB_0001d25c;
                  }
                  uVar6 = 1;
                  uVar15 = 8;
                }
              }
              else {
                if (local_68[1] == 0) {
                  uVar15 = 9;
                  goto LAB_0001d25c;
                }
                uVar6 = 1;
                uVar15 = 9;
              }
            }
            else {
              if (local_68[1] == 0) {
                uVar15 = 10;
                goto LAB_0001d25c;
              }
              uVar6 = 1;
              uVar15 = 10;
            }
          }
          else {
            if (local_68[1] == 0) {
              uVar15 = 0xb;
              goto LAB_0001d25c;
            }
            uVar6 = 1;
            uVar15 = 0xb;
          }
        }
        else {
          if (local_68[1] == 0) {
            uVar15 = 0xc;
            goto LAB_0001d25c;
          }
          uVar6 = 1;
          uVar15 = 0xc;
        }
      }
      else if (local_68[1] == 0) {
        uVar15 = 0xd;
LAB_0001d25c:
        if ((short)uStack_64 == 0) {
          if (uStack_64._2_2_ != 0) goto LAB_0001d5dc;
          uVar6 = uVar15;
          if (uVar15 != 4) goto LAB_0001d27c;
        }
        else {
LAB_0001dd20:
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
        uVar15 = 0xd;
      }
    }
    else if (local_68[1] == 0) {
      if ((short)uStack_64 == 0) {
        uVar15 = 0xe;
        if (uStack_64._2_2_ == 0) {
LAB_0001d27c:
          if ((short)local_60 == 0) {
            uVar6 = uVar15;
            if (uVar15 != 5) {
              if (local_60._2_2_ == 0) {
                if (uVar15 != 6) {
                  if ((short)local_5c == 0) {
                    if (uVar15 != 7) {
                      if (local_5c._2_2_ == 0) {
                        if (uVar15 != 8) {
                          if ((short)local_58 == 0) {
                            if (uVar15 == 9) {
                              uVar15 = 9;
                            }
                            else if (local_58._2_2_ == 0) {
                              if (uVar15 != 10) {
                                if ((short)uStack_54 == 0) {
                                  if (uVar15 != 0xb) {
                                    if (uStack_54._2_2_ == 0) {
                                      if (uVar15 != 0xc) {
                                        if ((short)local_50 == 0) {
                                          if (uVar15 != 0xd) {
                                            if (local_50._2_2_ == 0) {
                                              if (uVar15 == 0xf) {
                                                if ((uStack_4c & 0xffff) == 0) {
                                                  uVar15 = 0xf;
                                                }
                                                else {
                                                  uVar6 = 0xe;
                                                }
                                              }
                                              else {
                                                uVar6 = 0xe;
                                                uVar15 = uVar6;
                                              }
                                            }
                                            else {
                                              uVar6 = 0xd;
                                            }
                                          }
                                        }
                                        else {
                                          uVar6 = 0xc;
                                        }
                                      }
                                    }
                                    else {
                                      uVar6 = 0xb;
                                    }
                                  }
                                }
                                else {
                                  uVar6 = 10;
                                }
                              }
                            }
                            else {
                              uVar6 = 9;
                            }
                          }
                          else {
                            uVar6 = 8;
                          }
                        }
                      }
                      else {
                        uVar6 = 7;
                      }
                    }
                  }
                  else {
                    uVar6 = 6;
                  }
                }
              }
              else {
                uVar6 = 5;
              }
            }
          }
          else {
            uVar6 = 4;
          }
        }
        else {
LAB_0001d5dc:
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
        uVar15 = 0xe;
      }
    }
    else {
      uVar6 = 1;
      uVar15 = 0xe;
    }
  }
  else {
    if (local_68[1] == 0) {
      uVar15 = 0xf;
      goto LAB_0001d25c;
    }
    uVar6 = 1;
    uVar15 = 0xf;
  }
  if ((((((int)(2 - (uint)local_68[1]) < 0) ||
        (iVar11 = (2 - (uint)local_68[1]) * 2 - (uStack_64 & 0xffff), iVar11 < 0)) ||
       (iVar11 = iVar11 * 2 - (uint)uStack_64._2_2_, iVar11 < 0)) ||
      ((iVar11 = iVar11 * 2 - (local_60 & 0xffff), iVar11 < 0 ||
       (iVar11 = iVar11 * 2 - (uint)local_60._2_2_, iVar11 < 0)))) ||
     ((((iVar11 = iVar11 * 2 - (local_5c & 0xffff), iVar11 < 0 ||
        ((iVar11 = iVar11 * 2 - (uint)local_5c._2_2_, iVar11 < 0 ||
         (iVar11 = iVar11 * 2 - (local_58 & 0xffff), iVar11 < 0)))) ||
       (iVar11 = iVar11 * 2 - (uint)local_58._2_2_, iVar11 < 0)) ||
      ((((iVar11 = iVar11 * 2 - (uStack_54 & 0xffff), iVar11 < 0 ||
         (iVar11 = iVar11 * 2 - (uint)uStack_54._2_2_, iVar11 < 0)) ||
        (iVar11 = iVar11 * 2 - (local_50 & 0xffff), iVar11 < 0)) ||
       (((iVar11 = iVar11 * 2 - (uint)local_50._2_2_, iVar11 < 0 ||
         (iVar11 = iVar11 * 2 - (uStack_4c & 0xffff), iVar11 < 0)) ||
        ((iVar11 = iVar11 * 2 - (uStack_4c >> 0x10), iVar11 < 0 ||
         ((iVar11 != 0 && (param_1 == 0 || uVar15 != 1)))))))))))) {
    return 0xffffffff;
  }
  auStack_48[2] = local_68[1];
  auStack_48[3] = local_68[1] + (short)uStack_64;
  local_40 = local_68[1] + (short)uStack_64 + uStack_64._2_2_;
  uVar9 = 0;
  uVar16 = *param_5;
  local_3e = local_40 + (short)local_60;
  auStack_48[1] = 0;
  local_3c = local_3e + local_60._2_2_;
  local_3a = local_3c + (short)local_5c;
  local_38 = local_3a + local_5c._2_2_;
  local_36 = local_38 + (short)local_58;
  local_34 = local_36 + local_58._2_2_;
  local_32 = local_34 + (short)uStack_54;
  local_30 = local_32 + uStack_54._2_2_;
  local_2e = local_30 + (short)local_50;
  local_2c = local_2e + local_50._2_2_;
  local_2a = local_2c + (short)uStack_4c;
  if (param_3 != 0) {
    puVar18 = param_2;
    do {
      puVar19 = puVar18 + 1;
      uVar7 = (uint)*puVar18;
      if (uVar7 != 0) {
        uVar2 = auStack_48[uVar7];
        auStack_48[uVar7] = uVar2 + 1;
        param_6[uVar2] = uVar9;
      }
      uVar9 = uVar9 + 1;
      puVar18 = puVar19;
    } while (param_2 + param_3 != puVar19);
  }
  if (uVar15 <= uVar16) {
    uVar16 = uVar15;
  }
  uVar7 = uVar6;
  if (uVar6 < uVar16) {
    uVar7 = uVar16;
  }
  local_84 = 1 << (uVar7 & 0xff);
  if (param_1 == 0) {
    local_7c = param_6;
    local_78 = param_6;
    local_94 = 0x14;
    bVar22 = false;
  }
  else {
    if (param_1 == 1) {
      if (0x354 < local_84) {
        return 1;
      }
      local_94 = 0x101;
      bVar22 = false;
      local_7c = (ushort *)(DAT_0001dd54 + 0x1d690);
      local_78 = (ushort *)(DAT_0001dd54 + 0x1d6d0);
      bVar3 = true;
      goto LAB_0001d654;
    }
    bVar22 = param_1 == 2;
    if (0x250 < local_84 && bVar22) {
      return 1;
    }
    local_7c = (ushort *)(DAT_0001dd58 + 0x1dc18);
    local_78 = (ushort *)(DAT_0001dd58 + 0x1dc58);
    local_94 = 0;
  }
  bVar3 = param_1 == 1;
LAB_0001d654:
  uVar14 = 0;
  iVar11 = *param_4;
  uVar12 = local_84 - 1;
  local_8c = 0xffffffff;
  uVar16 = uVar6;
  uVar21 = uVar7;
  uVar17 = 0;
  local_9c = iVar11;
  while( true ) {
    while( true ) {
      puVar18 = param_6 + 1;
      uVar9 = *param_6;
      uVar20 = (uint)uVar9;
      if (uVar20 + 1 < local_94) {
        uVar4 = 0;
      }
      else if (uVar20 < local_94) {
        uVar9 = 0;
        uVar4 = 0x60;
      }
      else {
        uVar4 = (undefined1)local_7c[uVar20 - local_94];
        uVar9 = local_78[uVar20 - local_94];
      }
      iVar8 = 1 << (uVar21 & 0xff);
      iVar1 = 1 << (uVar6 & 0xff);
      puVar13 = (undefined1 *)(local_9c + ((iVar8 + (uVar17 >> (uVar14 & 0xff))) - iVar1) * 4);
      do {
        iVar8 = iVar8 - iVar1;
        *puVar13 = uVar4;
        puVar13[1] = (char)uVar6;
        *(ushort *)(puVar13 + 2) = uVar9;
        puVar13 = puVar13 + (-4 << (uVar6 & 0xff));
      } while (iVar8 != 0);
      for (uVar20 = 1 << (uVar16 - 1 & 0xff); (uVar17 & uVar20) != 0; uVar20 = uVar20 >> 1) {
      }
      if (uVar20 != 0) {
        uVar20 = uVar20 + (uVar17 & uVar20 - 1);
      }
      uVar9 = local_68[uVar16];
      local_68[uVar16] = uVar9 - 1;
      if ((ushort)(uVar9 - 1) == 0) {
        if (uVar16 == uVar15) {
          if (uVar20 != 0) {
            iVar8 = local_9c + uVar20 * 4;
            *(undefined1 *)(local_9c + uVar20 * 4) = 0x40;
            *(char *)(iVar8 + 1) = (char)uVar6;
            *(undefined2 *)(iVar8 + 2) = 0;
          }
          *param_4 = iVar11 + local_84 * 4;
          *param_5 = uVar7;
          return 0;
        }
        uVar16 = (uint)param_2[*puVar18];
      }
      param_6 = puVar18;
      uVar17 = uVar20;
      if ((uVar7 < uVar16) && (uVar20 = uVar12 & uVar20, uVar20 != local_8c)) break;
      uVar6 = uVar16 - uVar14;
    }
    if (uVar14 == 0) {
      uVar14 = uVar7;
    }
    local_9c = local_9c + (4 << (uVar21 & 0xff));
    uVar6 = uVar16 - uVar14;
    uVar21 = uVar6;
    if ((uVar16 < uVar15) && (iVar8 = (1 << (uVar6 & 0xff)) - (uint)local_68[uVar16], 0 < iVar8)) {
      uVar21 = uVar6 + 1;
      if ((uVar14 + uVar21 < uVar15) &&
         (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
        uVar21 = uVar6 + 2;
        if ((uVar14 + uVar21 < uVar15) &&
           (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
          uVar21 = uVar6 + 3;
          if ((uVar14 + uVar21 < uVar15) &&
             (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
            uVar21 = uVar6 + 4;
            if ((uVar14 + uVar21 < uVar15) &&
               (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
              uVar21 = uVar6 + 5;
              if ((uVar14 + uVar21 < uVar15) &&
                 (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                uVar21 = uVar6 + 6;
                if ((uVar14 + uVar21 < uVar15) &&
                   (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                  uVar21 = uVar6 + 7;
                  if ((uVar14 + uVar21 < uVar15) &&
                     (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                    uVar21 = uVar6 + 8;
                    if ((uVar14 + uVar21 < uVar15) &&
                       (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                      uVar21 = uVar6 + 9;
                      if ((uVar14 + uVar21 < uVar15) &&
                         (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                        uVar21 = uVar6 + 10;
                        if ((uVar14 + uVar21 < uVar15) &&
                           (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                          uVar21 = uVar6 + 0xb;
                          if ((uVar14 + uVar21 < uVar15) &&
                             (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                            uVar21 = uVar6 + 0xc;
                            if ((uVar14 + uVar21 < uVar15) &&
                               (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                              uVar21 = uVar6 + 0xd;
                              if ((uVar14 + uVar21 < uVar15) &&
                                 (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8)) {
                                uVar21 = uVar6 + 0xe;
                                if ((uVar14 + uVar21 < uVar15) &&
                                   (iVar8 = iVar8 * 2 - (uint)local_68[uVar14 + uVar21], 0 < iVar8))
                                {
                                  uVar21 = uVar6 + 0xf;
                                  if ((uVar14 + uVar21 < uVar15) &&
                                     (0 < (int)(iVar8 * 2 - (uint)local_68[uVar14 + uVar21]))) {
                                    uVar21 = uVar6 + 0x10;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_84 = local_84 + (1 << (uVar21 & 0xff));
    bVar5 = bVar3;
    if (local_84 < 0x355) {
      bVar5 = false;
    }
    if (bVar5) break;
    bVar5 = bVar22;
    if (local_84 < 0x251) {
      bVar5 = false;
    }
    if (bVar5) {
      return 1;
    }
    iVar8 = iVar11 + uVar20 * 4;
    *(char *)(iVar11 + uVar20 * 4) = (char)uVar21;
    *(short *)(iVar8 + 2) = (short)(local_9c - iVar11 >> 2);
    *(char *)(iVar8 + 1) = (char)uVar7;
    local_8c = uVar20;
  }
  return 1;
}



/* ===== FUN_0001dd60 @ 0001dd60 size=320 ===== */

void FUN_0001dd60(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar5 = (param_3 + 1) * 4;
  if (uVar1 == 0) {
    iVar6 = 3;
    iVar7 = 0x8a;
  }
  else {
    iVar6 = 4;
    iVar7 = 7;
  }
  *(undefined2 *)(param_2 + iVar5 + 2) = 0xffff;
  if (param_3 < 0) {
    return;
  }
  uVar2 = 0xffffffff;
  iVar5 = param_2 + iVar5 + -4;
  uVar3 = 0;
  uVar4 = (uint)uVar1;
  do {
    uVar3 = uVar3 + 1;
    uVar8 = (uint)*(ushort *)(param_2 + 6);
    if ((int)uVar3 < iVar7) {
      if (uVar8 != uVar4) {
        if (iVar6 <= (int)uVar3) goto LAB_0001ddbc;
        iVar6 = param_1 + uVar4 * 4;
        *(short *)(iVar6 + 0xa7c) = *(short *)(iVar6 + 0xa7c) + (short)uVar3;
        if (uVar8 != 0) goto LAB_0001de54;
        goto LAB_0001de68;
      }
    }
    else {
LAB_0001ddbc:
      if (uVar4 == 0) {
        if ((int)uVar3 < 0xb) {
          *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
        }
        else {
          *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
        }
      }
      else {
        if (uVar4 != uVar2) {
          iVar6 = param_1 + uVar4 * 4;
          *(short *)(iVar6 + 0xa7c) = *(short *)(iVar6 + 0xa7c) + 1;
        }
        *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
      }
      if (uVar8 == 0) {
LAB_0001de68:
        iVar6 = 3;
        iVar7 = 0x8a;
        uVar2 = uVar4;
        uVar3 = uVar8;
      }
      else if (uVar8 == uVar4) {
        iVar6 = 3;
        iVar7 = 6;
        uVar3 = 0;
        uVar2 = uVar8;
      }
      else {
LAB_0001de54:
        iVar6 = 4;
        iVar7 = 7;
        uVar2 = uVar4;
        uVar3 = 0;
      }
    }
    bVar9 = iVar5 == param_2;
    param_2 = param_2 + 4;
    uVar4 = uVar8;
    if (bVar9) {
      return;
    }
  } while( true );
}



/* ===== FUN_0001dea0 @ 0001dea0 size=1756 ===== */

void FUN_0001dea0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  bool bVar13;
  
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar9 = 3;
    iVar6 = 0x8a;
  }
  else {
    iVar9 = 4;
    iVar6 = 7;
  }
  if (-1 < param_3) {
    iVar4 = param_2 + param_3 * 4;
    puVar11 = (ushort *)(param_1 + 0x16b8);
    uVar8 = 0xffffffff;
    iVar7 = 0;
    uVar12 = (uint)*(ushort *)(param_2 + 2);
    do {
      iVar3 = iVar7 + 1;
      uVar5 = (uint)*(ushort *)(param_2 + 6);
      if (iVar3 < iVar6) {
        if (uVar5 != uVar12) {
          uVar10 = *(uint *)(param_1 + 0x16bc);
          uVar2 = *puVar11;
          if (iVar9 <= iVar3) goto LAB_0001e060;
          iVar9 = param_1 + uVar12 * 4;
          uVar1 = *(ushort *)(iVar9 + 0xa7c);
          uVar8 = (uint)*(ushort *)(iVar9 + 0xa7e);
          uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
          if ((int)(0x10 - uVar8) < (int)uVar10) {
            iVar6 = *(int *)(param_1 + 0x14);
            *puVar11 = uVar2;
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar2;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)(*puVar11 >> 8);
            uVar8 = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
            uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
            *puVar11 = uVar2;
            *(uint *)(param_1 + 0x16bc) = uVar8;
          }
          else {
            *puVar11 = uVar2;
            uVar8 = uVar8 + uVar10;
            *(uint *)(param_1 + 0x16bc) = uVar8;
          }
          if (iVar7 != 0) {
            uVar1 = *(ushort *)(iVar9 + 0xa7c);
            uVar10 = (uint)*(ushort *)(iVar9 + 0xa7e);
            uVar2 = uVar2 | uVar1 << (uVar8 & 0xff);
            if ((int)(0x10 - uVar10) < (int)uVar8) {
              iVar6 = *(int *)(param_1 + 0x14);
              *puVar11 = uVar2;
              *(int *)(param_1 + 0x14) = iVar6 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar2;
              iVar6 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar6 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)(*puVar11 >> 8);
              uVar10 = (uVar10 - 0x10) + *(int *)(param_1 + 0x16bc);
              uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
              *puVar11 = uVar2;
              *(uint *)(param_1 + 0x16bc) = uVar10;
            }
            else {
              *puVar11 = uVar2;
              uVar10 = uVar10 + uVar8;
              *(uint *)(param_1 + 0x16bc) = uVar10;
            }
            if (iVar7 != 1) {
              uVar1 = *(ushort *)(iVar9 + 0xa7c);
              uVar8 = (uint)*(ushort *)(iVar9 + 0xa7e);
              uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
              if ((int)(0x10 - uVar8) < (int)uVar10) {
                iVar9 = *(int *)(param_1 + 0x14);
                *puVar11 = uVar2;
                *(int *)(param_1 + 0x14) = iVar9 + 1;
                *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
                iVar9 = *(int *)(param_1 + 0x14);
                *(int *)(param_1 + 0x14) = iVar9 + 1;
                *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)(*puVar11 >> 8);
                *puVar11 = (ushort)((int)(uint)uVar1 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff))
                ;
                *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
              }
              else {
                *puVar11 = uVar2;
                *(uint *)(param_1 + 0x16bc) = uVar8 + uVar10;
              }
            }
          }
          iVar3 = 0;
          if (uVar5 == 0) {
            iVar9 = 3;
            iVar6 = 0x8a;
            uVar8 = uVar12;
          }
          else {
            iVar9 = 4;
            iVar6 = 7;
            uVar8 = uVar12;
          }
        }
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x16bc);
        uVar2 = *puVar11;
LAB_0001e060:
        if (uVar12 == 0) {
          if (iVar3 < 0xb) {
            uVar1 = *(ushort *)(param_1 + 0xac0);
            uVar8 = (uint)*(ushort *)(param_1 + 0xac2);
            uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
            if ((int)(0x10 - uVar8) < (int)uVar10) {
              iVar9 = *(int *)(param_1 + 0x14);
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
              iVar9 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              iVar9 = *(int *)(param_1 + 0x16bc);
              uVar8 = (uVar8 - 0x10) + iVar9;
              *(uint *)(param_1 + 0x16bc) = uVar8;
              uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - iVar9 & 0xff));
              *(ushort *)(param_1 + 0x16b8) = uVar2;
            }
            else {
              uVar8 = uVar8 + uVar10;
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(uint *)(param_1 + 0x16bc) = uVar8;
            }
            if ((int)uVar8 < 0xe) {
              *(uint *)(param_1 + 0x16bc) = uVar8 + 3;
              *(ushort *)(param_1 + 0x16b8) =
                   uVar2 | (ushort)((iVar7 - 2U & 0xffff) << (uVar8 & 0xff));
            }
            else {
              iVar9 = *(int *)(param_1 + 0x14);
              uVar10 = iVar7 - 2U & 0xffff;
              uVar2 = uVar2 | (ushort)(uVar10 << (uVar8 & 0xff));
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
              iVar9 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              iVar9 = *(int *)(param_1 + 0x16bc);
              *(int *)(param_1 + 0x16bc) = iVar9 + -0xd;
              *(short *)(param_1 + 0x16b8) = (short)((int)uVar10 >> (0x10U - iVar9 & 0xff));
            }
          }
          else {
            uVar1 = *(ushort *)(param_1 + 0xac4);
            uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
            uVar8 = (uint)*(ushort *)(param_1 + 0xac6);
            if ((int)(0x10 - uVar8) < (int)uVar10) {
              iVar9 = *(int *)(param_1 + 0x14);
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
              iVar9 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              iVar9 = *(int *)(param_1 + 0x16bc);
              uVar8 = (uVar8 - 0x10) + iVar9;
              *(uint *)(param_1 + 0x16bc) = uVar8;
              uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - iVar9 & 0xff));
              *(ushort *)(param_1 + 0x16b8) = uVar2;
            }
            else {
              uVar8 = uVar8 + uVar10;
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(uint *)(param_1 + 0x16bc) = uVar8;
            }
            if ((int)uVar8 < 10) {
              *(uint *)(param_1 + 0x16bc) = uVar8 + 7;
              *(ushort *)(param_1 + 0x16b8) =
                   uVar2 | (ushort)((iVar7 - 10U & 0xffff) << (uVar8 & 0xff));
            }
            else {
              iVar9 = *(int *)(param_1 + 0x14);
              uVar10 = iVar7 - 10U & 0xffff;
              uVar2 = uVar2 | (ushort)(uVar10 << (uVar8 & 0xff));
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
              iVar9 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              iVar9 = *(int *)(param_1 + 0x16bc);
              *(int *)(param_1 + 0x16bc) = iVar9 + -9;
              *(short *)(param_1 + 0x16b8) = (short)((int)uVar10 >> (0x10U - iVar9 & 0xff));
            }
          }
        }
        else {
          if (uVar12 != uVar8) {
            iVar9 = param_1 + uVar12 * 4;
            uVar1 = *(ushort *)(iVar9 + 0xa7c);
            uVar8 = (uint)*(ushort *)(iVar9 + 0xa7e);
            uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
            iVar3 = iVar7;
            if ((int)(0x10 - uVar8) < (int)uVar10) {
              iVar9 = *(int *)(param_1 + 0x14);
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
              iVar9 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = iVar9 + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar9) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              iVar9 = *(int *)(param_1 + 0x16bc);
              uVar10 = (uVar8 - 0x10) + iVar9;
              *(uint *)(param_1 + 0x16bc) = uVar10;
              uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - iVar9 & 0xff));
              *(ushort *)(param_1 + 0x16b8) = uVar2;
            }
            else {
              uVar10 = uVar10 + uVar8;
              *(ushort *)(param_1 + 0x16b8) = uVar2;
              *(uint *)(param_1 + 0x16bc) = uVar10;
            }
          }
          uVar1 = *(ushort *)(param_1 + 0xabc);
          uVar8 = (uint)*(ushort *)(param_1 + 0xabe);
          uVar2 = uVar2 | uVar1 << (uVar10 & 0xff);
          if ((int)(0x10 - uVar8) < (int)uVar10) {
            iVar9 = *(int *)(param_1 + 0x14);
            *(ushort *)(param_1 + 0x16b8) = uVar2;
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
            iVar9 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            iVar9 = *(int *)(param_1 + 0x16bc);
            uVar8 = (uVar8 - 0x10) + iVar9;
            *(uint *)(param_1 + 0x16bc) = uVar8;
            uVar2 = (ushort)((int)(uint)uVar1 >> (0x10U - iVar9 & 0xff));
            *(ushort *)(param_1 + 0x16b8) = uVar2;
          }
          else {
            uVar8 = uVar8 + uVar10;
            *(ushort *)(param_1 + 0x16b8) = uVar2;
            *(uint *)(param_1 + 0x16bc) = uVar8;
          }
          if ((int)uVar8 < 0xf) {
            *(uint *)(param_1 + 0x16bc) = uVar8 + 2;
            *(ushort *)(param_1 + 0x16b8) =
                 uVar2 | (ushort)((iVar3 - 3U & 0xffff) << (uVar8 & 0xff));
          }
          else {
            uVar10 = iVar3 - 3U & 0xffff;
            iVar9 = *(int *)(param_1 + 0x14);
            uVar2 = uVar2 | (ushort)(uVar10 << (uVar8 & 0xff));
            *(ushort *)(param_1 + 0x16b8) = uVar2;
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar2;
            iVar9 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar9 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar9) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            iVar9 = *(int *)(param_1 + 0x16bc);
            *(int *)(param_1 + 0x16bc) = iVar9 + -0xe;
            *(short *)(param_1 + 0x16b8) = (short)((int)uVar10 >> (0x10U - iVar9 & 0xff));
          }
        }
        if (uVar5 == 0) {
          iVar9 = 3;
          iVar6 = 0x8a;
          iVar3 = 0;
          uVar8 = uVar12;
        }
        else if (uVar5 == uVar12) {
          iVar9 = 3;
          iVar6 = 6;
          iVar3 = 0;
          uVar8 = uVar5;
        }
        else {
          iVar9 = 4;
          iVar6 = 7;
          iVar3 = 0;
          uVar8 = uVar12;
        }
      }
      bVar13 = iVar4 != param_2;
      param_2 = param_2 + 4;
      iVar7 = iVar3;
      uVar12 = uVar5;
    } while (bVar13);
  }
  return;
}



/* ===== FUN_0001e57c @ 0001e57c size=1132 ===== */

void FUN_0001e57c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  
  iVar3 = DAT_0001e9f8;
  iVar10 = DAT_0001e9f4;
  uVar5 = *(ushort *)(param_1 + 0x16b8);
  uVar16 = (uint)uVar5;
  uVar14 = *(uint *)(param_1 + 0x16bc);
  if (*(int *)(param_1 + 0x16a0) != 0) {
    puVar9 = (ushort *)(param_1 + 0x16b8);
    uVar11 = 0;
    iVar6 = DAT_0001e9e8 + 0x1e5bc;
    iVar7 = DAT_0001e9ec + 0x1e5c8;
    iVar8 = DAT_0001e9f0 + 0x1e5d4;
    do {
      while( true ) {
        uVar12 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + uVar11 + 2);
        pbVar17 = (byte *)(*(int *)(param_1 + 0x1698) + uVar11);
        uVar11 = uVar11 + 3;
        iVar4 = (uint)*pbVar17 + (uint)pbVar17[1] * 0x100;
        if (iVar4 != 0) break;
        uVar2 = *(ushort *)(param_2 + uVar12 * 4);
        uVar12 = (uint)*(ushort *)(param_2 + uVar12 * 4 + 2);
        uVar5 = (ushort)uVar16 | uVar2 << (uVar14 & 0xff);
        uVar16 = (uint)uVar5;
        if ((int)(0x10 - uVar12) < (int)uVar14) {
          iVar4 = *(int *)(param_1 + 0x14);
          *puVar9 = uVar5;
          *(int *)(param_1 + 0x14) = iVar4 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)uVar5;
          iVar4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar4 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)(*puVar9 >> 8);
          uVar14 = (uVar12 - 0x10) + *(int *)(param_1 + 0x16bc);
          uVar12 = (int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
          uVar16 = uVar12 & 0xffff;
          uVar5 = (ushort)uVar12;
          *puVar9 = uVar5;
          *(uint *)(param_1 + 0x16bc) = uVar14;
        }
        else {
          *puVar9 = uVar5;
          uVar14 = uVar14 + uVar12;
          *(uint *)(param_1 + 0x16bc) = uVar14;
        }
LAB_0001e670:
        if (*(uint *)(param_1 + 0x16a0) <= uVar11) goto LAB_0001e900;
      }
      uVar13 = (uint)*(byte *)(iVar6 + uVar12);
      iVar15 = (uVar13 + 0x101) * 4;
      uVar2 = *(ushort *)(param_2 + iVar15);
      uVar18 = (uint)*(ushort *)(param_2 + iVar15 + 2);
      uVar5 = (ushort)uVar16 | uVar2 << (uVar14 & 0xff);
      if ((int)(0x10 - uVar18) < (int)uVar14) {
        iVar15 = *(int *)(param_1 + 0x14);
        *puVar9 = uVar5;
        *(int *)(param_1 + 0x14) = iVar15 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)uVar5;
        iVar15 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar15 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)(*puVar9 >> 8);
        uVar5 = (ushort)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        *puVar9 = uVar5;
        uVar18 = (uVar18 - 0x10) + *(int *)(param_1 + 0x16bc);
        *(uint *)(param_1 + 0x16bc) = uVar18;
      }
      else {
        *puVar9 = uVar5;
        uVar18 = uVar18 + uVar14;
        *(uint *)(param_1 + 0x16bc) = uVar18;
      }
      iVar15 = iVar7 + uVar13 * 4;
      iVar19 = *(int *)(iVar15 + 0x100);
      if (iVar19 != 0) {
        uVar14 = uVar12 - *(int *)(iVar15 + 0x178) & 0xffff;
        uVar5 = uVar5 | (ushort)(uVar14 << (uVar18 & 0xff));
        if (0x10 - iVar19 < (int)uVar18) {
          iVar15 = *(int *)(param_1 + 0x14);
          *puVar9 = uVar5;
          *(int *)(param_1 + 0x14) = iVar15 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)uVar5;
          iVar15 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar15 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)(*puVar9 >> 8);
          uVar18 = iVar19 + -0x10 + *(int *)(param_1 + 0x16bc);
          uVar5 = (ushort)((int)uVar14 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          *puVar9 = uVar5;
          *(uint *)(param_1 + 0x16bc) = uVar18;
        }
        else {
          *puVar9 = uVar5;
          uVar18 = uVar18 + iVar19;
          *(uint *)(param_1 + 0x16bc) = uVar18;
        }
      }
      uVar12 = iVar4 - 1;
      if (uVar12 < 0x100) {
        bVar1 = *(byte *)(iVar3 + uVar12 + 0x1e7dc);
      }
      else {
        bVar1 = *(byte *)(iVar10 + (uVar12 >> 7) + 0x1e8d0);
      }
      iVar4 = (uint)bVar1 * 4;
      uVar2 = *(ushort *)(param_3 + iVar4);
      uVar14 = (uint)*(ushort *)(param_3 + iVar4 + 2);
      uVar5 = uVar5 | uVar2 << (uVar18 & 0xff);
      uVar16 = (uint)uVar5;
      if ((int)(0x10 - uVar14) < (int)uVar18) {
        iVar15 = *(int *)(param_1 + 0x14);
        *puVar9 = uVar5;
        *(int *)(param_1 + 0x14) = iVar15 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)uVar5;
        iVar15 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar15 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar15) = (char)(*puVar9 >> 8);
        uVar14 = (uVar14 - 0x10) + *(int *)(param_1 + 0x16bc);
        uVar13 = (int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
        uVar16 = uVar13 & 0xffff;
        uVar5 = (ushort)uVar13;
        *puVar9 = uVar5;
        *(uint *)(param_1 + 0x16bc) = uVar14;
      }
      else {
        *puVar9 = uVar5;
        uVar14 = uVar14 + uVar18;
        *(uint *)(param_1 + 0x16bc) = uVar14;
      }
      iVar4 = iVar8 + iVar4;
      iVar15 = *(int *)(iVar4 + 0x3f0);
      if (iVar15 == 0) goto LAB_0001e670;
      uVar12 = uVar12 - *(int *)(iVar4 + 0x468) & 0xffff;
      uVar5 = uVar5 | (ushort)(uVar12 << (uVar14 & 0xff));
      uVar16 = (uint)uVar5;
      if ((int)uVar14 <= 0x10 - iVar15) {
        *puVar9 = uVar5;
        uVar14 = uVar14 + iVar15;
        *(uint *)(param_1 + 0x16bc) = uVar14;
        goto LAB_0001e670;
      }
      iVar4 = *(int *)(param_1 + 0x14);
      *puVar9 = uVar5;
      *(int *)(param_1 + 0x14) = iVar4 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)uVar5;
      iVar4 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar4 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar4) = (char)(*puVar9 >> 8);
      uVar14 = iVar15 + -0x10 + *(int *)(param_1 + 0x16bc);
      uVar12 = (int)uVar12 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
      uVar16 = uVar12 & 0xffff;
      uVar5 = (ushort)uVar12;
      *puVar9 = uVar5;
      *(uint *)(param_1 + 0x16bc) = uVar14;
    } while (uVar11 < *(uint *)(param_1 + 0x16a0));
  }
LAB_0001e900:
  uVar2 = *(ushort *)(param_2 + 0x400);
  uVar16 = (uint)*(ushort *)(param_2 + 0x402);
  uVar5 = uVar5 | uVar2 << (uVar14 & 0xff);
  if ((int)(0x10 - uVar16) < (int)uVar14) {
    iVar10 = *(int *)(param_1 + 0x14);
    *(ushort *)(param_1 + 0x16b8) = uVar5;
    *(int *)(param_1 + 0x14) = iVar10 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar10) = (char)uVar5;
    iVar10 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar10 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar10) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar10 = *(int *)(param_1 + 0x16bc);
    *(uint *)(param_1 + 0x16bc) = (uVar16 - 0x10) + iVar10;
    *(short *)(param_1 + 0x16b8) = (short)((int)(uint)uVar2 >> (0x10U - iVar10 & 0xff));
    return;
  }
  *(ushort *)(param_1 + 0x16b8) = uVar5;
  *(uint *)(param_1 + 0x16bc) = uVar16 + uVar14;
  return;
}



/* ===== FUN_0001e9fc @ 0001e9fc size=268 ===== */

void FUN_0001e9fc(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  
  iVar4 = *(int *)(param_1 + 0xb60);
  iVar8 = *(int *)(param_1 + 0x1450);
  if (iVar8 < 2) {
    iVar9 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_2 + iVar4 * 4);
    iVar7 = 2;
    iVar9 = 1;
    do {
      iVar10 = param_1 + iVar7 * 4;
      iVar5 = *(int *)(iVar10 + 0xb5c);
      uVar2 = *(ushort *)(param_2 + iVar5 * 4);
      iVar6 = iVar5;
      iVar11 = iVar7;
      uVar12 = uVar2;
      if (iVar7 < iVar8) {
        iVar10 = *(int *)(iVar10 + 0xb60);
        uVar3 = *(ushort *)(param_2 + iVar10 * 4);
        iVar6 = iVar10;
        iVar11 = iVar7 + 1;
        uVar12 = uVar3;
        if (((uVar2 <= uVar3) && (iVar6 = iVar5, iVar11 = iVar7, uVar12 = uVar2, uVar3 == uVar2)) &&
           (iVar6 = iVar10, iVar11 = iVar7 + 1,
           *(byte *)(param_1 + iVar5 + 0x1458) < *(byte *)(param_1 + iVar10 + 0x1458))) {
          iVar6 = iVar5;
          iVar11 = iVar7;
        }
      }
      if ((uVar1 < uVar12) ||
         ((uVar1 == uVar12 &&
          (*(byte *)(param_1 + iVar4 + 0x1458) <= *(byte *)(param_1 + iVar6 + 0x1458))))) break;
      iVar7 = iVar11 * 2;
      *(int *)(param_1 + (iVar9 + 0x2d6) * 4 + 4) = iVar6;
      iVar9 = iVar11;
    } while (iVar7 <= iVar8);
  }
  *(int *)(param_1 + iVar9 * 4 + 0xb5c) = iVar4;
  return;
}



/* ===== FUN_0001eb08 @ 0001eb08 size=2792 ===== */

void FUN_0001eb08(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  ushort *puVar20;
  int iVar21;
  undefined2 *puVar22;
  int iVar23;
  ushort uVar24;
  int iVar25;
  bool bVar26;
  int local_6c;
  int *local_68;
  int local_5c;
  ushort auStack_48 [5];
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  iVar15 = ((int *)param_2[2])[3];
  puVar22 = (undefined2 *)*param_2;
  iVar21 = *(int *)param_2[2];
  *(undefined8 *)(param_1 + 0x1450) = DAT_0001eca0;
  if (iVar15 < 1) {
    if (iVar21 == 0) {
      local_5c = -1;
      iVar10 = 0;
      goto LAB_0001f4fc;
    }
    iVar10 = 0;
    local_5c = -1;
  }
  else {
    iVar10 = 0;
    iVar12 = 0;
    local_5c = -1;
    puVar6 = puVar22 + 1;
    do {
      if (puVar6[-1] == 0) {
        *puVar6 = 0;
      }
      else {
        *(int *)(param_1 + 0x1450) = iVar10 + 1;
        *(int *)(param_1 + (iVar10 + 0x2d7) * 4 + 4) = iVar12;
        *(undefined1 *)(param_1 + 0x1458 + iVar12) = 0;
        local_5c = iVar12;
        iVar10 = iVar10 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar15 != iVar12);
    if (iVar21 == 0) {
      if (1 < iVar10) goto LAB_0001ec3c;
LAB_0001f4fc:
      iVar12 = iVar10 + 1;
      iVar21 = *(int *)(param_1 + 0x16a8);
      iVar10 = param_1 + iVar10 * 4 + 0xb5c;
      while( true ) {
        if (local_5c < 2) {
          local_5c = local_5c + 1;
          *(int *)(param_1 + 0x1450) = iVar12;
          *(int *)(iVar10 + 4) = local_5c;
          puVar22[local_5c * 2] = 1;
          *(undefined1 *)(param_1 + local_5c + 0x1458) = 0;
        }
        else {
          *(int *)(param_1 + 0x1450) = iVar12;
          *(undefined4 *)(iVar10 + 4) = 0;
          *puVar22 = 1;
          *(undefined1 *)(param_1 + 0x1458) = 0;
        }
        if (iVar12 == 2) break;
        iVar21 = iVar21 + -1;
        iVar10 = iVar10 + 4;
        iVar12 = 2;
      }
      *(int *)(param_1 + 0x16a8) = iVar21 + -1;
      iVar10 = 2;
      goto LAB_0001ec3c;
    }
    if (1 < iVar10) goto LAB_0001ec3c;
  }
  iVar18 = *(int *)(param_1 + 0x16a8);
  iVar12 = iVar10 + 1;
  piVar5 = (int *)(param_1 + iVar10 * 4 + 0xb5c);
  iVar25 = *(int *)(param_1 + 0x16ac);
  iVar10 = local_5c;
  while( true ) {
    iVar13 = 0;
    local_5c = iVar10;
    if (iVar10 < 2) {
      local_5c = iVar10 + 1;
    }
    *(int *)(param_1 + 0x1450) = iVar12;
    puVar6 = puVar22;
    iVar16 = 0;
    if (iVar10 < 2) {
      iVar13 = local_5c * 4;
      puVar6 = puVar22 + local_5c * 2;
      iVar16 = local_5c;
    }
    piVar5 = piVar5 + 1;
    *piVar5 = iVar16;
    *puVar6 = 1;
    *(undefined1 *)(param_1 + iVar16 + 0x1458) = 0;
    iVar18 = iVar18 + -1;
    iVar25 = iVar25 - (uint)*(ushort *)(iVar21 + iVar13 + 2);
    if (iVar12 == 2) break;
    iVar12 = 2;
    iVar10 = local_5c;
  }
  *(int *)(param_1 + 0x16a8) = iVar18;
  *(int *)(param_1 + 0x16ac) = iVar25;
  iVar10 = 2;
LAB_0001ec3c:
  local_6c = iVar10 >> 1;
  iVar21 = local_6c << 1;
  local_68 = (int *)(param_1 + (local_6c + 0x2d8) * 4);
  param_2[1] = local_5c;
  do {
    local_68 = local_68 + -1;
    iVar18 = *local_68;
    iVar12 = local_6c;
    if (iVar21 <= iVar10) {
      uVar3 = puVar22[iVar18 * 2];
      iVar25 = iVar21;
      do {
        iVar23 = param_1 + iVar25 * 4;
        iVar7 = *(int *)(iVar23 + 0xb5c);
        uVar4 = puVar22[iVar7 * 2];
        iVar13 = iVar7;
        iVar16 = iVar25;
        uVar24 = uVar4;
        if (iVar25 < iVar10) {
          iVar23 = *(int *)(iVar23 + 0xb60);
          uVar24 = puVar22[iVar23 * 2];
          bVar26 = uVar24 == uVar4;
          iVar13 = iVar23;
          iVar16 = iVar25 + 1;
          if (((uVar4 <= uVar24) && (iVar13 = iVar7, iVar16 = iVar25, uVar24 = uVar4, bVar26)) &&
             (*(byte *)(param_1 + iVar23 + 0x1458) <= *(byte *)(param_1 + iVar7 + 0x1458))) {
            iVar13 = iVar23;
            iVar16 = iVar25 + 1;
          }
        }
        iVar25 = iVar16 * 2;
      } while (((uVar24 <= uVar3) &&
               ((uVar3 != uVar24 ||
                (*(byte *)(param_1 + iVar13 + 0x1458) < *(byte *)(param_1 + iVar18 + 0x1458))))) &&
              (*(int *)(param_1 + (iVar12 + 0x2d6) * 4 + 4) = iVar13, iVar12 = iVar16,
              iVar25 <= iVar10));
    }
    iVar21 = iVar21 + -2;
    local_6c = local_6c + -1;
    *(int *)(param_1 + (iVar12 + 0x2d6) * 4 + 4) = iVar18;
  } while (local_6c != 0);
  iVar21 = *(int *)(param_1 + 0x1450);
  pcVar19 = (char *)(param_1 + iVar15 + 0x1458);
  do {
    iVar12 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1450) = iVar21 + -1;
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + (iVar21 + 0x2d6) * 4 + 4);
    FUN_0001e9fc(param_1,puVar22);
    iVar18 = *(int *)(param_1 + 0xb60);
    iVar21 = *(int *)(param_1 + 0x1454);
    iVar10 = param_1 + iVar21 * 4;
    *(int *)(iVar10 + 0xb58) = iVar12;
    *(int *)(param_1 + 0x1454) = iVar21 + -2;
    *(int *)(iVar10 + 0xb54) = iVar18;
    puVar22[iVar15 * 2] = puVar22[iVar12 * 2] + puVar22[iVar18 * 2];
    bVar1 = *(byte *)(param_1 + iVar12 + 0x1458);
    bVar2 = *(byte *)(param_1 + iVar18 + 0x1458);
    if (bVar1 < bVar2) {
      bVar1 = bVar2;
    }
    *pcVar19 = bVar1 + 1;
    puVar22[iVar18 * 2 + 1] = (short)iVar15;
    puVar22[iVar12 * 2 + 1] = (short)iVar15;
    *(int *)(param_1 + 0xb60) = iVar15;
    iVar15 = iVar15 + 1;
    FUN_0001e9fc(param_1,puVar22);
    iVar21 = *(int *)(param_1 + 0x1450);
    pcVar19 = pcVar19 + 1;
  } while (1 < iVar21);
  iVar15 = *(int *)(param_1 + 0x1454);
  iVar18 = *(int *)(param_1 + 0xb60);
  piVar5 = (int *)param_2[2];
  iVar12 = *param_2;
  *(int *)(param_1 + 0x1454) = iVar15 + -1;
  iVar21 = *piVar5;
  *(int *)(param_1 + (iVar15 + -1) * 4 + 0xb5c) = iVar18;
  iVar25 = piVar5[1];
  iVar10 = piVar5[2];
  iVar13 = param_2[1];
  uVar14 = piVar5[4];
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined2 *)(iVar12 + iVar18 * 4 + 2) = 0;
  if (iVar15 < 0x23d) {
    if (iVar21 == 0) {
      piVar5 = (int *)(param_1 + iVar15 * 4 + 0xb58);
      local_68 = (int *)0x0;
      do {
        piVar5 = piVar5 + 1;
        iVar15 = *piVar5;
        iVar21 = iVar12 + iVar15 * 4;
        uVar11 = *(ushort *)(iVar12 + (uint)*(ushort *)(iVar21 + 2) * 4 + 2) + 1;
        if ((int)uVar14 < (int)uVar11) {
          local_68 = (int *)((int)local_68 + 1);
          uVar11 = uVar14;
        }
        iVar18 = param_1 + uVar11 * 2;
        *(short *)(iVar21 + 2) = (short)uVar11;
        if (iVar15 <= iVar13) {
          *(short *)(iVar18 + 0xb3c) = *(short *)(iVar18 + 0xb3c) + 1;
          if (iVar10 <= iVar15) {
            uVar11 = uVar11 + *(int *)(iVar25 + (iVar15 - iVar10) * 4);
          }
          *(uint *)(param_1 + 0x16a8) =
               uVar11 * *(ushort *)(iVar12 + iVar15 * 4) + *(int *)(param_1 + 0x16a8);
        }
      } while (piVar5 != (int *)(param_1 + 0x144c));
    }
    else {
      local_68 = (int *)0x0;
      piVar5 = (int *)(param_1 + iVar15 * 4 + 0xb58);
      do {
        piVar5 = piVar5 + 1;
        iVar18 = *piVar5;
        iVar15 = iVar18 * 4;
        uVar11 = *(ushort *)(iVar12 + (uint)*(ushort *)(iVar12 + iVar15 + 2) * 4 + 2) + 1;
        if ((int)uVar14 < (int)uVar11) {
          local_68 = (int *)((int)local_68 + 1);
          uVar11 = uVar14;
        }
        iVar16 = param_1 + uVar11 * 2;
        *(short *)(iVar12 + iVar15 + 2) = (short)uVar11;
        if (iVar18 <= iVar13) {
          iVar23 = 0;
          iVar7 = *(ushort *)(iVar16 + 0xb3c) + 1;
          *(short *)(iVar16 + 0xb3c) = (short)iVar7;
          if (iVar10 <= iVar18) {
            iVar7 = iVar25;
          }
          if (iVar10 <= iVar18) {
            iVar23 = *(int *)(iVar7 + (iVar18 - iVar10) * 4);
          }
          if (iVar10 <= iVar18) {
            uVar11 = uVar11 + iVar23;
          }
          uVar3 = *(ushort *)(iVar12 + iVar15);
          uVar4 = *(ushort *)(iVar21 + iVar15 + 2);
          *(uint *)(param_1 + 0x16a8) = uVar3 * uVar11 + *(int *)(param_1 + 0x16a8);
          *(uint *)(param_1 + 0x16ac) =
               (uint)uVar3 * ((uint)uVar4 + iVar23) + *(int *)(param_1 + 0x16ac);
        }
      } while (piVar5 != (int *)(param_1 + 0x144c));
    }
    if (local_68 != (int *)0x0) {
      iVar21 = (int)local_68 + -2;
      iVar15 = iVar21 - ((int)local_68 - 1U & 0xfffffffe);
      while( true ) {
        iVar10 = param_1 + uVar14 * 2;
        sVar9 = *(short *)(iVar10 + 0xb3a);
        if (sVar9 == 0) {
          sVar9 = *(short *)(param_1 + (uVar14 + 0x59a) * 2 + 4);
          uVar11 = uVar14 - 1;
          iVar18 = uVar14 + 0x59a;
          if (sVar9 == 0) {
            sVar9 = *(short *)(param_1 + (uVar14 + 0x599) * 2 + 4);
            if (sVar9 == 0) {
              sVar9 = *(short *)(param_1 + (uVar14 + 0x598) * 2 + 4);
              uVar11 = uVar14 - 3;
              iVar18 = uVar14 + 0x598;
              if (sVar9 == 0) {
                sVar9 = *(short *)(param_1 + (uVar14 + 0x597) * 2 + 4);
                if (sVar9 == 0) {
                  sVar9 = *(short *)(param_1 + (uVar14 + 0x596) * 2 + 4);
                  uVar11 = uVar14 - 5;
                  iVar18 = uVar14 + 0x596;
                  if (sVar9 == 0) {
                    sVar9 = *(short *)(param_1 + (uVar14 + 0x595) * 2 + 4);
                    if (sVar9 == 0) {
                      sVar9 = *(short *)(param_1 + (uVar14 + 0x594) * 2 + 4);
                      uVar11 = uVar14 - 7;
                      iVar18 = uVar14 + 0x594;
                      if (sVar9 == 0) {
                        sVar9 = *(short *)(param_1 + (uVar14 + 0x593) * 2 + 4);
                        if (sVar9 == 0) {
                          sVar9 = *(short *)(param_1 + (uVar14 + 0x592) * 2 + 4);
                          uVar11 = uVar14 - 9;
                          iVar18 = uVar14 + 0x592;
                          if (sVar9 == 0) {
                            sVar9 = *(short *)(param_1 + (uVar14 + 0x591) * 2 + 4);
                            if (sVar9 == 0) {
                              sVar9 = *(short *)(param_1 + (uVar14 + 0x590) * 2 + 4);
                              if (sVar9 == 0) {
                                sVar9 = *(short *)(param_1 + (uVar14 + 0x58f) * 2 + 4);
                                if (sVar9 == 0) {
                                  sVar9 = *(short *)(param_1 + (uVar14 + 0x58e) * 2 + 4);
                                  uVar11 = uVar14 - 0xd;
                                  iVar18 = uVar14 + 0x58e;
                                  if (sVar9 == 0) {
                                    sVar9 = *(short *)(param_1 + (uVar14 + 0x58d) * 2 + 4);
                                    if (sVar9 == 0) {
                                      sVar9 = *(short *)(param_1 + (uVar14 + 0x58c) * 2 + 4);
                                      if (sVar9 == 0) {
                                        sVar9 = *(short *)(param_1 + (uVar14 + 0x58b) * 2 + 4);
                                        uVar11 = uVar14 - 0x10;
                                        iVar18 = uVar14 + 0x58b;
                                      }
                                      else {
                                        uVar11 = uVar14 - 0xf;
                                        iVar18 = uVar14 + 0x58c;
                                      }
                                    }
                                    else {
                                      uVar11 = uVar14 - 0xe;
                                      iVar18 = uVar14 + 0x58d;
                                    }
                                  }
                                }
                                else {
                                  uVar11 = uVar14 - 0xc;
                                  iVar18 = uVar14 + 0x58f;
                                }
                              }
                              else {
                                uVar11 = uVar14 - 0xb;
                                iVar18 = uVar14 + 0x590;
                              }
                            }
                            else {
                              uVar11 = uVar14 - 10;
                              iVar18 = uVar14 + 0x591;
                            }
                          }
                        }
                        else {
                          uVar11 = uVar14 - 8;
                          iVar18 = uVar14 + 0x593;
                        }
                      }
                    }
                    else {
                      uVar11 = uVar14 - 6;
                      iVar18 = uVar14 + 0x595;
                    }
                  }
                }
                else {
                  uVar11 = uVar14 - 4;
                  iVar18 = uVar14 + 0x597;
                }
              }
            }
            else {
              uVar11 = uVar14 - 2;
              iVar18 = uVar14 + 0x599;
            }
          }
        }
        else {
          uVar11 = uVar14;
          iVar18 = uVar14 + 0x59b;
        }
        iVar25 = param_1 + uVar11 * 2;
        *(short *)(param_1 + iVar18 * 2 + 4) = sVar9 + -1;
        *(short *)(iVar25 + 0xb3c) = *(short *)(iVar25 + 0xb3c) + 2;
        *(short *)(iVar10 + 0xb3c) = *(short *)(iVar10 + 0xb3c) + -1;
        if (iVar15 == iVar21) break;
        iVar21 = iVar21 + -2;
      }
      if (uVar14 != 0) {
        iVar15 = 0x23d;
        puVar20 = (ushort *)(param_1 + (uVar14 + 0x59f) * 2);
        uVar11 = uVar14 - 1;
        while( true ) {
          puVar20 = puVar20 + -1;
          uVar8 = (uint)*puVar20;
          if (uVar8 != 0) {
            piVar5 = (int *)(param_1 + (iVar15 + 0x2d7) * 4);
            do {
              do {
                piVar5 = piVar5 + -1;
                iVar15 = iVar15 + -1;
                iVar21 = *piVar5 * 4;
                iVar10 = iVar12 + iVar21;
              } while (iVar13 < *piVar5);
              uVar17 = (uint)*(ushort *)(iVar10 + 2);
              if (uVar17 != uVar14) {
                *(uint *)(param_1 + 0x16a8) =
                     (uint)*(ushort *)(iVar12 + iVar21) * (uVar14 - uVar17) +
                     *(int *)(param_1 + 0x16a8);
                *(short *)(iVar10 + 2) = (short)uVar14;
              }
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (uVar11 == 0) break;
          uVar14 = uVar11;
          uVar11 = uVar11 - 1;
        }
      }
    }
  }
  auStack_48[1] = *(short *)(param_1 + 0xb3c) * 2;
  auStack_48[2] = (*(short *)(param_1 + 0xb3e) + auStack_48[1]) * 2;
  auStack_48[3] = (*(short *)(param_1 + 0xb40) + auStack_48[2]) * 2;
  auStack_48[4] = (*(short *)(param_1 + 0xb42) + auStack_48[3]) * 2;
  local_3e = (*(short *)(param_1 + 0xb44) + auStack_48[4]) * 2;
  local_3c = (*(short *)(param_1 + 0xb46) + local_3e) * 2;
  local_3a = (*(short *)(param_1 + 0xb48) + local_3c) * 2;
  local_38 = (*(short *)(param_1 + 0xb4a) + local_3a) * 2;
  local_36 = (*(short *)(param_1 + 0xb4c) + local_38) * 2;
  local_34 = (*(short *)(param_1 + 0xb4e) + local_36) * 2;
  local_32 = (*(short *)(param_1 + 0xb50) + local_34) * 2;
  local_30 = (*(short *)(param_1 + 0xb52) + local_32) * 2;
  local_2e = (*(short *)(param_1 + 0xb54) + local_30) * 2;
  local_2c = (*(short *)(param_1 + 0xb56) + local_2e) * 2;
  local_2a = (*(short *)(param_1 + 0xb58) + local_2c) * 2;
  if (local_5c != -1) {
    puVar6 = puVar22 + local_5c * 2 + 2;
    do {
      while (uVar14 = (uint)(ushort)puVar22[1], uVar14 == 0) {
        puVar22 = puVar22 + 2;
        if (puVar22 == puVar6) {
          return;
        }
      }
      uVar11 = 0;
      uVar8 = (uint)auStack_48[uVar14];
      auStack_48[uVar14] = auStack_48[uVar14] + 1;
      do {
        uVar14 = uVar14 - 1;
        uVar17 = uVar8 & 1 | uVar11;
        uVar8 = uVar8 >> 1;
        uVar11 = uVar17 << 1;
      } while (uVar14 != 0);
      *puVar22 = (short)uVar17;
      puVar22 = puVar22 + 2;
    } while (puVar22 != puVar6);
  }
  return;
}



/* ===== FUN_0001f5f8 @ 0001f5f8 size=204 ===== */

void FUN_0001f5f8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001f6c4;
  *(int *)(param_1 + 0xb20) = DAT_0001f6c4 + 0x1f60c;
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb2c) = iVar1 + 0x1f620;
  *(int *)(param_1 + 0xb38) = iVar1 + 0x1f634;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined2 *)(param_1 + 0x16b8) = 0;
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
  *(undefined8 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}



/* ===== FUN_0001f6c8 @ 0001f6c8 size=428 ===== */

void FUN_0001f6c8(int param_1,void *param_2,size_t param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0x16bc);
  iVar4 = iVar6 + 1;
  uVar2 = *(ushort *)(param_1 + 0x16b8) | (ushort)((param_4 & 0xffff) << (uVar7 & 0xff));
  pbVar3 = (byte *)(*(int *)(param_1 + 8) + iVar6);
  bVar5 = (byte)uVar2;
  if ((int)uVar7 < 0xe) {
    iVar6 = uVar7 + 3;
    *(ushort *)(param_1 + 0x16b8) = uVar2;
    *(int *)(param_1 + 0x16bc) = iVar6;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar2;
    *(int *)(param_1 + 0x14) = iVar4;
    *(byte *)(*(int *)(param_1 + 8) + iVar6) = bVar5;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar1 = (int)(param_4 & 0xffff) >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    pbVar3 = (byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14));
    iVar6 = *(int *)(param_1 + 0x16bc) + -0xd;
    bVar5 = (byte)iVar1;
    *(int *)(param_1 + 0x16bc) = iVar6;
    *(short *)(param_1 + 0x16b8) = (short)iVar1;
  }
  if (iVar6 < 9) {
    if (0 < iVar6) {
      *(int *)(param_1 + 0x14) = iVar4;
      *pbVar3 = bVar5;
      iVar4 = *(int *)(param_1 + 0x14) + 1;
      pbVar3 = (byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14));
    }
  }
  else {
    *(int *)(param_1 + 0x14) = iVar4;
    *pbVar3 = bVar5;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    pbVar3 = (byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14));
  }
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  bVar5 = (byte)(param_3 >> 8);
  *(int *)(param_1 + 0x14) = iVar4;
  *pbVar3 = (byte)param_3;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar4) = bVar5;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar4) = ~(byte)param_3;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar4) = ~bVar5;
  if (param_3 != 0) {
    memcpy((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)),param_2,param_3);
  }
  *(size_t *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  return;
}



/* ===== FUN_0001f874 @ 0001f874 size=156 ===== */

void FUN_0001f874(int param_1)

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



/* ===== FUN_0001f910 @ 0001f910 size=368 ===== */

void FUN_0001f910(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x16bc);
  uVar2 = *(ushort *)(param_1 + 0x16b8) | (ushort)(2 << (uVar3 & 0xff));
  uVar5 = (undefined1)uVar2;
  if ((int)uVar3 < 0xe) {
    iVar4 = uVar3 + 3;
    *(ushort *)(param_1 + 0x16b8) = uVar2;
    *(int *)(param_1 + 0x16bc) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    *(ushort *)(param_1 + 0x16b8) = uVar2;
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = uVar5;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar4 = *(int *)(param_1 + 0x16bc) + -0xd;
    iVar1 = 2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
    *(int *)(param_1 + 0x16bc) = iVar4;
    uVar5 = (undefined1)iVar1;
    *(short *)(param_1 + 0x16b8) = (short)iVar1;
  }
  if (iVar4 < 10) {
    iVar4 = iVar4 + 7;
    *(int *)(param_1 + 0x16bc) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = uVar5;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    uVar5 = 0;
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    iVar4 = *(int *)(param_1 + 0x16bc) + -9;
    *(int *)(param_1 + 0x16bc) = iVar4;
  }
  if (iVar4 == 0x10) {
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = uVar5;
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar4) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return;
  }
  if (7 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = uVar5;
    *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
    return;
  }
  return;
}



/* ===== FUN_0001fa80 @ 0001fa80 size=2076 ===== */

void FUN_0001fa80(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  short local_30;
  
  if (param_1[0x21] < 1) {
    uVar15 = param_3 + 5;
LAB_0001ffac:
    if (uVar15 < param_3 + 4U || param_2 == 0) {
      uVar15 = param_1[0x5af];
      if ((int)uVar15 < 0xe) {
        param_1[0x5af] = uVar15 + 3;
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (ushort)((param_4 + 2U & 0xffff) << (uVar15 & 0xff));
      }
      else {
        iVar7 = param_1[5];
        uVar8 = param_4 + 2U & 0xffff;
        uVar1 = *(ushort *)(param_1 + 0x5ae) | (ushort)(uVar8 << (uVar15 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)uVar1;
        iVar7 = param_1[5];
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar7 = param_1[0x5af];
        param_1[0x5af] = iVar7 + -0xd;
        *(short *)(param_1 + 0x5ae) = (short)((int)uVar8 >> (0x10U - iVar7 & 0xff));
      }
      FUN_0001e57c(param_1,DAT_000202a0 + 0x20690,DAT_000202a0 + 0x20618);
      goto LAB_0001ffd4;
    }
  }
  else {
    if (*(int *)(*param_1 + 0x2c) == 2) {
      uVar15 = 0xf3ffc07f;
      piVar10 = param_1;
      do {
        uVar8 = uVar15 & 1;
        uVar15 = uVar15 >> 1;
        if ((uVar8 != 0) && ((short)piVar10[0x25] != 0)) {
          uVar3 = 0;
          goto LAB_0001ff94;
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != param_1 + 0x20);
      if ((((short)param_1[0x2e] == 0) && ((short)param_1[0x2f] == 0)) &&
         ((short)param_1[0x32] == 0)) {
        iVar7 = 0;
        do {
          iVar12 = iVar7 + 0x114;
          iVar7 = iVar7 + 4;
          if (*(short *)((int)param_1 + iVar12) != 0) goto LAB_0001ff90;
          uVar3 = 0;
        } while (iVar7 != 0x380);
      }
      else {
LAB_0001ff90:
        uVar3 = 1;
      }
LAB_0001ff94:
      *(undefined4 *)(*param_1 + 0x2c) = uVar3;
    }
    piVar11 = param_1 + 0x25;
    FUN_0001eb08(param_1,param_1 + 0x2c6);
    piVar10 = param_1 + 0x262;
    FUN_0001eb08(param_1,param_1 + 0x2c9);
    uVar3 = FUN_0001dd60(param_1,piVar11,param_1[0x2c7]);
    uVar3 = FUN_0001dd60(uVar3,piVar10,param_1[0x2ca]);
    FUN_0001eb08(uVar3,param_1 + 0x2cc);
    if (*(short *)((int)param_1 + 0xaba) == 0) {
      if (*(short *)((int)param_1 + 0xa82) != 0) {
        iVar7 = 0x11;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xab6) != 0) {
        iVar7 = 0x10;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa86) != 0) {
        iVar7 = 0xf;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xab2) != 0) {
        iVar7 = 0xe;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa8a) != 0) {
        iVar7 = 0xd;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xaae) != 0) {
        iVar7 = 0xc;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa8e) != 0) {
        iVar7 = 0xb;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xaaa) != 0) {
        iVar7 = 10;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa92) != 0) {
        iVar7 = 9;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xaa6) != 0) {
        iVar7 = 8;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa96) != 0) {
        iVar7 = 7;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xaa2) != 0) {
        iVar7 = 6;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa9a) != 0) {
        iVar7 = 5;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa9e) != 0) {
        iVar7 = 4;
        goto LAB_000200ac;
      }
      if (*(short *)((int)param_1 + 0xa7e) != 0) {
        iVar7 = 3;
        goto LAB_000200ac;
      }
      iVar12 = 9;
      iVar7 = 2;
    }
    else {
      iVar7 = 0x12;
LAB_000200ac:
      iVar12 = (iVar7 + 1) * 3;
    }
    iVar12 = param_1[0x5aa] + 0xe + iVar12;
    param_1[0x5aa] = iVar12;
    uVar15 = param_1[0x5ab] + 10U >> 3;
    uVar8 = iVar12 + 10U >> 3;
    if ((uVar15 <= uVar8) || (param_1[0x22] == 4)) goto LAB_0001ffac;
    if (uVar8 < param_3 + 4U || param_2 == 0) {
      uVar15 = param_1[0x5af];
      if ((int)uVar15 < 0xe) {
        uVar8 = uVar15 + 3;
        param_1[0x5af] = uVar8;
        uVar1 = *(ushort *)(param_1 + 0x5ae) | (ushort)((param_4 + 4U & 0xffff) << (uVar15 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      else {
        uVar13 = param_4 + 4U & 0xffff;
        iVar12 = param_1[5];
        uVar1 = *(ushort *)(param_1 + 0x5ae) | (ushort)(uVar13 << (uVar15 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
        param_1[5] = iVar12 + 1;
        *(char *)(param_1[2] + iVar12) = (char)uVar1;
        iVar12 = param_1[5];
        param_1[5] = iVar12 + 1;
        *(char *)(param_1[2] + iVar12) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar12 = param_1[0x5af];
        uVar8 = iVar12 - 0xd;
        param_1[0x5af] = uVar8;
        uVar1 = (ushort)((int)uVar13 >> (0x10U - iVar12 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      iVar12 = param_1[0x2c7];
      uVar15 = param_1[0x2ca];
      if ((int)uVar8 < 0xc) {
        uVar13 = uVar8 + 5;
        param_1[0x5af] = uVar13;
        uVar1 = uVar1 | (ushort)((iVar12 - 0x100U & 0xffff) << (uVar8 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      else {
        iVar4 = param_1[5];
        uVar14 = iVar12 - 0x100U & 0xffff;
        uVar1 = uVar1 | (ushort)(uVar14 << (uVar8 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)uVar1;
        iVar4 = param_1[5];
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar4 = param_1[0x5af];
        uVar13 = iVar4 - 0xb;
        param_1[0x5af] = uVar13;
        uVar1 = (ushort)((int)uVar14 >> (0x10U - iVar4 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      local_30 = (short)uVar15;
      if ((int)uVar13 < 0xc) {
        uVar1 = uVar1 | local_30 << (uVar13 & 0xff);
        uVar13 = uVar13 + 5;
        param_1[0x5af] = uVar13;
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      else {
        iVar4 = param_1[5];
        uVar1 = uVar1 | local_30 << (uVar13 & 0xff);
        *(ushort *)(param_1 + 0x5ae) = uVar1;
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)uVar1;
        iVar4 = param_1[5];
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        iVar4 = param_1[0x5af];
        uVar13 = iVar4 - 0xb;
        param_1[0x5af] = uVar13;
        uVar1 = (ushort)((int)(uVar15 & 0xffff) >> (0x10U - iVar4 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
      }
      if ((int)uVar13 < 0xd) {
        uVar14 = uVar13 + 4;
        param_1[0x5af] = uVar14;
        uVar8 = (int)(short)uVar1 | (iVar7 - 3U & 0xffff) << (uVar13 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar8;
      }
      else {
        iVar4 = param_1[5];
        uVar8 = iVar7 - 3U & 0xffff;
        uVar1 = uVar1 | (ushort)(uVar8 << (uVar13 & 0xff));
        *(ushort *)(param_1 + 0x5ae) = uVar1;
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)uVar1;
        iVar4 = param_1[5];
        param_1[5] = iVar4 + 1;
        *(char *)(param_1[2] + iVar4) = (char)((ushort)(short)param_1[0x5ae] >> 8);
        uVar14 = param_1[0x5af] - 0xc;
        uVar8 = (int)uVar8 >> (0x10U - param_1[0x5af] & 0xff);
        param_1[0x5af] = uVar14;
        *(short *)(param_1 + 0x5ae) = (short)uVar8;
      }
      uVar8 = uVar8 & 0xffff;
      puVar16 = (ushort *)(param_1 + 0x5ae);
      pbVar5 = (byte *)(DAT_0002029c + 0x20829);
      uVar13 = 0x10;
      pbVar6 = pbVar5;
      while( true ) {
        uVar2 = *(ushort *)((int)param_1 + (uVar13 + 0x29e) * 4 + 6);
        uVar1 = (ushort)uVar8 | uVar2 << (uVar14 & 0xff);
        uVar9 = uVar14 + 3;
        uVar8 = (uint)uVar1;
        if ((int)uVar14 < 0xe) {
          *puVar16 = uVar1;
          param_1[0x5af] = uVar9;
        }
        else {
          iVar4 = param_1[5];
          *puVar16 = uVar1;
          param_1[5] = iVar4 + 1;
          *(char *)(param_1[2] + iVar4) = (char)uVar1;
          iVar4 = param_1[5];
          param_1[5] = iVar4 + 1;
          *(char *)(param_1[2] + iVar4) = (char)(*puVar16 >> 8);
          uVar9 = param_1[0x5af] - 0xd;
          uVar13 = (int)(uint)uVar2 >> (0x10U - param_1[0x5af] & 0xff);
          uVar8 = uVar13 & 0xffff;
          *puVar16 = (ushort)uVar13;
          param_1[0x5af] = uVar9;
        }
        if (pbVar6 == pbVar5 + iVar7) break;
        uVar13 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar14 = uVar9;
      }
      uVar3 = FUN_0001dea0(param_1,piVar11,iVar12);
      uVar3 = FUN_0001dea0(uVar3,piVar10,uVar15);
      FUN_0001e57c(uVar3,piVar11,piVar10);
      goto LAB_0001ffd4;
    }
  }
  FUN_0001f6c8(param_1,param_2,param_3,param_4);
LAB_0001ffd4:
  piVar10 = param_1;
  do {
    *(undefined2 *)(piVar10 + 0x25) = 0;
    piVar10 = piVar10 + 1;
  } while (piVar10 != param_1 + 0x11e);
  iVar7 = 0;
  do {
    *(undefined2 *)((int)param_1 + iVar7 + 0x988) = 0;
    iVar7 = iVar7 + 4;
  } while (iVar7 != 0x78);
  iVar7 = 0;
  do {
    *(undefined2 *)((int)param_1 + iVar7 + 0xa7c) = 0;
    iVar7 = iVar7 + 4;
  } while (iVar7 != 0x4c);
  *(undefined2 *)(param_1 + 0x125) = 1;
  param_1[0x5aa] = 0;
  param_1[0x5ab] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5a8] = 0;
  if (param_4 != 0) {
    if (param_1[0x5af] < 9) {
      if (0 < param_1[0x5af]) {
        iVar7 = param_1[5];
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)(short)param_1[0x5ae];
      }
    }
    else {
      iVar7 = param_1[5];
      param_1[5] = iVar7 + 1;
      *(char *)(param_1[2] + iVar7) = (char)(short)param_1[0x5ae];
      iVar7 = param_1[5];
      param_1[5] = iVar7 + 1;
      *(char *)(param_1[2] + iVar7) = (char)((ushort)(short)param_1[0x5ae] >> 8);
    }
    *(undefined2 *)(param_1 + 0x5ae) = 0;
    param_1[0x5af] = 0;
    return;
  }
  return;
}



/* ===== zlibVersion @ 0002037c size=12 ===== */

int zlibVersion(void)

{
  return (int)&DAT_00020388 + DAT_00020388;
}



/* ===== zlibCompileFlags @ 0002038c size=8 ===== */

undefined4 zlibCompileFlags(void)

{
  return 0x55;
}



/* ===== zError @ 00020394 size=28 ===== */

undefined4 zError(int param_1)

{
  return *(undefined4 *)(*(int *)(DAT_000203b0 + 0x203a8 + DAT_000203b4) + (2 - param_1) * 4);
}



/* ===== FUN_000203b8 @ 000203b8 size=8 ===== */

void FUN_000203b8(undefined4 param_1,int param_2,int param_3)

{
  malloc(param_3 * param_2);
  return;
}



/* ===== compress2 @ 000203c8 size=216 ===== */

int compress2(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar2 = DAT_000204a0;
  iVar5 = *param_2;
  *param_2 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar2 = deflateInit_(&local_58,param_5,iVar2 + 0x20408,0x38);
  if (iVar2 == 0) {
    local_54 = 0;
    local_48 = 0;
    local_58 = param_3;
    local_4c = param_1;
    do {
      iVar3 = local_48;
      bVar6 = local_48 == 0;
      if (bVar6) {
        local_48 = iVar5;
      }
      uVar4 = 4;
      if (bVar6) {
        iVar5 = iVar3;
      }
      iVar3 = local_54;
      iVar1 = param_4;
      if (local_54 != 0) {
        iVar3 = param_4;
        iVar1 = local_54;
        if (param_4 == 0) {
          uVar4 = 4;
        }
        else {
          uVar4 = 0;
        }
      }
      local_54 = iVar1;
      param_4 = iVar3;
      iVar3 = deflate(&local_58,uVar4);
    } while (iVar3 == 0);
    if (iVar3 != 1) {
      iVar2 = iVar3;
    }
    *param_2 = local_44;
    deflateEnd(&local_58);
  }
  return iVar2;
}



/* ===== compress @ 000204a4 size=28 ===== */

void compress(void)

{
  compress2();
  return;
}



/* ===== compressBound @ 000204c0 size=20 ===== */

int compressBound(uint param_1)

{
  return param_1 + 0xd + (param_1 >> 0xc) + (param_1 >> 0xe) + (param_1 >> 0x19);
}



/* ===== uncompress2 @ 000204d4 size=364 ===== */

int uncompress2(undefined1 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  int local_5c;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar3 = *param_2;
  iVar5 = *param_4;
  if (iVar3 == 0) {
    param_1 = auStack_64;
    iVar3 = 1;
  }
  else {
    *param_2 = 0;
  }
  local_40 = 0;
  local_5c = 0;
  local_38 = 0;
  local_60 = param_3;
  iVar1 = inflateInit_(&local_60,DAT_00020640 + 0x2051c,0x38);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_50 = 0;
  local_54 = param_1;
  do {
    while( true ) {
      iVar1 = iVar5;
      iVar4 = iVar3;
      if (local_50 == 0) {
        iVar4 = local_50;
        local_50 = iVar3;
      }
      iVar3 = iVar4;
      if (local_5c == 0) break;
      iVar2 = inflate(&local_60);
      iVar5 = iVar1;
      if (iVar2 != 0) goto LAB_0002059c;
    }
    local_5c = iVar1;
    iVar2 = inflate(&local_60,0);
    iVar1 = 0;
    iVar5 = iVar2;
  } while (iVar2 == 0);
LAB_0002059c:
  *param_4 = (*param_4 - local_5c) - iVar1;
  if (param_1 == auStack_64) {
    if (local_4c != 0 && iVar2 == -5) {
      iVar4 = 1;
      inflateEnd(&local_60);
      goto LAB_00020628;
    }
  }
  else {
    *param_2 = local_4c;
  }
  inflateEnd(&local_60);
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    return -3;
  }
  if (iVar2 != -5) {
    return iVar2;
  }
LAB_00020628:
  if (iVar4 + local_50 != 0) {
    return -3;
  }
  return -5;
}



/* ===== uncompress @ 00020644 size=28 ===== */

void uncompress(void)

{
  uncompress2();
  return;
}



/* ===== gzclose @ 00020660 size=64 ===== */

undefined4 gzclose(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x10) != 0x1c4f) {
                    /* WARNING: Could not recover jumptable at 0x00011b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_gzclose_w_0003700c)();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00011c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_gzclose_r_0003704c)();
  return uVar1;
}



/* ===== FUN_00020688 @ 00020688 size=1192 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00020688(char *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *__ptr;
  size_t sVar4;
  char *__s;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  __off64_t _Var9;
  
  if ((param_1 == (char *)0x0) || (__ptr = malloc(0xa8), __ptr == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  uVar7 = (uint)*param_3;
  bVar3 = false;
  *(undefined8 *)(__ptr + 7) = DAT_00020aa0;
  __ptr[0x1a] = 0;
  *(undefined8 *)(__ptr + 0x12) = 0xffffffff;
  __ptr[4] = 0;
  __ptr[0xb] = 0;
  if (uVar7 == 0) {
LAB_00020984:
    free(__ptr);
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  do {
    if ((uVar7 - 0x30 & 0xff) < 10) {
      __ptr[0x12] = uVar7 - 0x30;
      goto switchD_00020714_default;
    }
    switch(uVar7) {
    case 0x2b:
      goto LAB_00020984;
    case 0x2c:
      break;
    case 0x2d:
      break;
    case 0x2e:
      break;
    case 0x2f:
      break;
    case 0x30:
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
      break;
    case 0x36:
      break;
    case 0x37:
      break;
    case 0x38:
      break;
    case 0x39:
      break;
    case 0x3a:
      break;
    case 0x3b:
      break;
    case 0x3c:
      break;
    case 0x3d:
      break;
    case 0x3e:
      break;
    case 0x3f:
      break;
    case 0x40:
      break;
    case 0x41:
      break;
    case 0x42:
      break;
    case 0x43:
      break;
    case 0x44:
      break;
    case 0x45:
      break;
    case 0x46:
      bVar1 = param_3[1];
      __ptr[0x13] = 4;
      goto joined_r0x00020a38;
    case 0x47:
      break;
    case 0x48:
      break;
    case 0x49:
      break;
    case 0x4a:
      break;
    case 0x4b:
      break;
    case 0x4c:
      break;
    case 0x4d:
      break;
    case 0x4e:
      break;
    case 0x4f:
      break;
    case 0x50:
      break;
    case 0x51:
      break;
    case 0x52:
      __ptr[0x13] = 3;
      break;
    case 0x53:
      break;
    case 0x54:
      bVar1 = param_3[1];
      __ptr[0xb] = 1;
      goto joined_r0x00020a38;
    case 0x55:
      break;
    case 0x56:
      break;
    case 0x57:
      break;
    case 0x58:
      break;
    case 0x59:
      break;
    case 0x5a:
      break;
    case 0x5b:
      break;
    case 0x5c:
      break;
    case 0x5d:
      break;
    case 0x5e:
      break;
    case 0x5f:
      break;
    case 0x60:
      break;
    case 0x61:
      bVar1 = param_3[1];
      __ptr[4] = 1;
      goto joined_r0x00020a38;
    case 0x62:
      break;
    case 99:
      break;
    case 100:
      break;
    case 0x65:
      bVar1 = param_3[1];
      bVar2 = true;
      goto joined_r0x00020a38;
    case 0x66:
      bVar1 = param_3[1];
      __ptr[0x13] = 1;
      goto joined_r0x00020a38;
    case 0x67:
      break;
    case 0x68:
      bVar1 = param_3[1];
      __ptr[0x13] = 2;
      goto joined_r0x00020a38;
    case 0x69:
      break;
    case 0x6a:
      break;
    case 0x6b:
      break;
    case 0x6c:
      break;
    case 0x6d:
      break;
    case 0x6e:
      break;
    case 0x6f:
      break;
    case 0x70:
      break;
    case 0x71:
      break;
    case 0x72:
      __ptr[4] = 0x1c4f;
      bVar1 = param_3[1];
      goto joined_r0x00020a38;
    case 0x73:
      break;
    case 0x74:
      break;
    case 0x75:
      break;
    case 0x76:
      break;
    case 0x77:
      bVar1 = param_3[1];
      __ptr[4] = 0x79b1;
      goto joined_r0x00020a38;
    case 0x78:
      bVar1 = param_3[1];
      bVar3 = true;
      goto joined_r0x00020a38;
    }
switchD_00020714_default:
    bVar1 = param_3[1];
joined_r0x00020a38:
    uVar7 = (uint)bVar1;
    param_3 = param_3 + 1;
  } while (uVar7 != 0);
  if (__ptr[4] == 0) goto LAB_00020984;
  if (__ptr[4] == 0x1c4f) {
    if (__ptr[0xb] != 0) goto LAB_00020984;
    __ptr[0xb] = 1;
  }
  sVar4 = strlen(param_1);
  __s = malloc(sVar4 + 1);
  __ptr[6] = __s;
  if (__s == (char *)0x0) goto LAB_00020984;
  snprintf(__s,sVar4 + 1,(char *)(DAT_00020aa8 + 0x208c4),param_1);
  iVar8 = __ptr[4];
  if (bVar2) {
    uVar7 = 0xa0000;
  }
  else {
    uVar7 = 0x20000;
  }
  if (iVar8 != 0x1c4f) {
    uVar6 = 0x4c1;
    uVar5 = 0x2c1;
    if (!bVar3) {
      uVar6 = 0x441;
      uVar5 = 0x241;
    }
    if (iVar8 == 0x79b1) {
      uVar6 = uVar5;
    }
    uVar7 = uVar7 | uVar6;
  }
  if (param_2 < 0) {
    param_2 = open(param_1,uVar7,0x1b6);
    __ptr[5] = param_2;
    if (param_2 == -1) {
      free((void *)__ptr[6]);
      free(__ptr);
      return (undefined4 *)0x0;
    }
    iVar8 = __ptr[4];
  }
  else {
    __ptr[5] = param_2;
  }
  if (iVar8 == 1) {
    lseek64(param_2,0,2);
    __ptr[4] = 0x79b1;
    *__ptr = 0;
  }
  else if (iVar8 == 0x1c4f) {
    _Var9 = lseek64(param_2,0,1);
    *(__off64_t *)(__ptr + 0xe) = _Var9;
    if (_Var9 == -1) {
      iVar8 = __ptr[4];
      *(undefined8 *)(__ptr + 0xe) = 0;
    }
    else {
      iVar8 = __ptr[4];
    }
    *__ptr = 0;
    if (iVar8 == 0x1c4f) {
      __ptr[0xc] = 0;
      *(undefined8 *)(__ptr + 0x10) = 0;
      goto LAB_0002093c;
    }
  }
  else {
    *__ptr = 0;
  }
  __ptr[0x14] = 0;
LAB_0002093c:
  __ptr[0x18] = 0;
  if ((void *)__ptr[0x1a] != (void *)0x0) {
    if (__ptr[0x19] != -4) {
      free((void *)__ptr[0x1a]);
    }
    __ptr[0x1a] = 0;
  }
  __ptr[0x19] = 0;
  __ptr[0x1c] = 0;
  *(undefined8 *)(__ptr + 2) = 0;
  return __ptr;
}



/* ===== gzopen @ 00020b40 size=12 ===== */

void gzopen(undefined4 param_1,undefined4 param_2)

{
  FUN_00020688(param_1,0xffffffff,param_2);
  return;
}



/* ===== gzopen64 @ 00020b4c size=12 ===== */

void gzopen64(undefined4 param_1,undefined4 param_2)

{
  FUN_00020688(param_1,0xffffffff,param_2);
  return;
}



/* ===== gzdopen @ 00020b58 size=104 ===== */

undefined4 gzdopen(int param_1,undefined4 param_2)

{
  char *__s;
  undefined4 uVar1;
  
  if ((param_1 != -1) && (__s = malloc(0x13), __s != (char *)0x0)) {
    snprintf(__s,0x13,(char *)(DAT_00020bc0 + 0x20b90),param_1);
    uVar1 = FUN_00020688(__s,param_1,param_2);
    free(__s);
    return uVar1;
  }
  return 0;
}



/* ===== gzbuffer @ 00020bc4 size=76 ===== */

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



/* ===== gzrewind @ 00020c10 size=216 ===== */

undefined4 gzrewind(undefined4 *param_1)

{
  undefined4 uVar1;
  __off64_t _Var2;
  
  if ((((param_1 == (undefined4 *)0x0) || (param_1[4] != 0x1c4f)) ||
      (param_1[0x19] != 0 && param_1[0x19] != -5)) ||
     (_Var2 = lseek64(param_1[5],*(__off64_t *)(param_1 + 0xe),0), _Var2 == -1)) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = 0;
    if (param_1[4] == 0x1c4f) {
      param_1[0xc] = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      param_1[0x14] = 0;
    }
    param_1[0x18] = 0;
    if ((void *)param_1[0x1a] != (void *)0x0) {
      if (param_1[0x19] != -4) {
        free((void *)param_1[0x1a]);
      }
      param_1[0x1a] = 0;
    }
    uVar1 = 0;
    param_1[0x19] = 0;
    param_1[0x1c] = 0;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return uVar1;
}



/* ===== gzseek64 @ 00020ce8 size=536 ===== */

undefined8 gzseek64(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  __off64_t _Var9;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffffffffffff;
  }
  uVar4 = param_1[4];
  if (uVar4 != 0x1c4f && uVar4 != 0x79b1) {
    return 0xffffffffffffffff;
  }
  if (param_1[0x19] != 0 && param_1[0x19] != 0xfffffffb) {
    return 0xffffffffffffffff;
  }
  if (1 < param_5) {
    return 0xffffffffffffffff;
  }
  if (param_5 == 0) {
    bVar7 = param_3 < param_1[2];
    param_3 = param_3 - param_1[2];
    param_4 = param_4 - (param_1[3] + (uint)bVar7);
  }
  else if (param_1[0x18] != 0) {
    bVar7 = CARRY4(param_3,param_1[0x16]);
    param_3 = param_3 + param_1[0x16];
    param_4 = param_4 + param_1[0x17] + (uint)bVar7;
  }
  param_1[0x18] = 0;
  if (uVar4 == 0x1c4f) {
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    if (param_1[0xc] == 1) {
      if (-1 < (int)(param_4 + uVar3 + (uint)CARRY4(param_3,uVar4))) {
        _Var9 = lseek64(param_1[5],CONCAT44(param_4 - (param_3 < *param_1),param_3 - *param_1),1);
        if (_Var9 == -1) {
          return 0xffffffffffffffff;
        }
        *param_1 = 0;
        param_1[0x18] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        if ((void *)param_1[0x1a] != (void *)0x0) {
          if (param_1[0x19] != 0xfffffffc) {
            free((void *)param_1[0x1a]);
          }
          param_1[0x1a] = 0;
        }
        param_1[0x19] = 0;
        param_1[0x1c] = 0;
        uVar8 = VectorAdd(CONCAT44(param_4,param_3),*(undefined8 *)(param_1 + 2),8);
        *(undefined8 *)(param_1 + 2) = uVar8;
        return uVar8;
      }
      if ((int)param_4 < 0) {
        return 0xffffffffffffffff;
      }
    }
    else if ((int)param_4 < 0) {
      bVar7 = CARRY4(param_3,uVar4);
      param_3 = param_3 + uVar4;
      param_4 = param_4 + uVar3 + (uint)bVar7;
      if ((int)param_4 < 0) {
        return 0xffffffffffffffff;
      }
      iVar2 = gzrewind(param_1);
      if (iVar2 == -1) {
        return 0xffffffffffffffff;
      }
      uVar4 = param_1[2];
      uVar3 = param_1[3];
      if (param_1[4] != 0x1c4f) goto LAB_00020d78;
    }
    uVar6 = *param_1;
    if ((int)param_4 < (int)(uint)(param_3 < uVar6)) {
      uVar5 = uVar6 - param_3;
      uVar6 = param_3;
      uVar1 = param_4;
    }
    else {
      uVar5 = 0;
      uVar1 = 0;
    }
    bVar7 = param_3 < uVar6;
    param_3 = param_3 - uVar6;
    param_4 = param_4 - (uVar1 + bVar7);
    bVar7 = CARRY4(uVar4,uVar6);
    uVar4 = uVar4 + uVar6;
    uVar3 = uVar3 + uVar1 + (uint)bVar7;
    *param_1 = uVar5;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
    param_1[1] = param_1[1] + uVar6;
  }
  else {
    if ((int)param_4 < 0) {
      return 0xffffffffffffffff;
    }
    uVar4 = param_1[2];
    uVar3 = param_1[3];
  }
LAB_00020d78:
  if (param_3 != 0 || param_4 != 0) {
    param_1[0x16] = param_3;
    param_1[0x17] = param_4;
    param_1[0x18] = 1;
  }
  return CONCAT44(param_4 + uVar3 + (uint)CARRY4(param_3,uVar4),param_3 + uVar4);
}



/* ===== gzseek @ 00020f00 size=48 ===== */

int gzseek(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = gzseek64(param_1,param_2,param_2,param_2 >> 0x1f,param_3);
  iVar1 = (int)uVar2;
  if (iVar1 >> 0x1f != (int)((ulonglong)uVar2 >> 0x20)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== gztell64 @ 00020f30 size=72 ===== */

undefined8 gztell64(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x1c4f && *(int *)(param_1 + 0x10) != 0x79b1))
  {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar1 = VectorAdd(uVar1,*(undefined8 *)(param_1 + 0x58),8);
    }
  }
  return uVar1;
}



/* ===== gztell @ 00020f78 size=28 ===== */

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



/* ===== gzoffset64 @ 00020f94 size=128 ===== */

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
                      (uint)((uint)_Var1 < *(uint *)(param_1 + 0x70)),
                      (uint)_Var1 - *(uint *)(param_1 + 0x70));
    }
  }
  return -1;
}



/* ===== gzoffset @ 00021014 size=28 ===== */

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



/* ===== gzeof @ 00021030 size=32 ===== */

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



/* ===== gzerror @ 00021050 size=100 ===== */

int gzerror(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0x1c4f && *(int *)(param_1 + 0x10) != 0x79b1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
    iVar1 = *(int *)(param_1 + 100);
  }
  if (iVar1 == -4) {
    return DAT_000210b8 + 0x210ac;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return DAT_000210b4 + 0x210a0;
  }
  return *(int *)(param_1 + 0x68);
}



/* ===== gzclearerr @ 000210bc size=128 ===== */

void gzclearerr(int param_1)

{
  void *__ptr;
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0x1c4f || iVar1 == 0x79b1) {
    if (iVar1 == 0x1c4f) {
      __ptr = *(void **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      __ptr = *(void **)(param_1 + 0x68);
    }
    if (__ptr != (void *)0x0) {
      if (*(int *)(param_1 + 100) == -4) {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        free(__ptr);
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    *(undefined4 *)(param_1 + 100) = 0;
    return;
  }
  return;
}



/* ===== FUN_0002113c @ 0002113c size=224 ===== */

void FUN_0002113c(undefined4 *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  char *__s_00;
  
  if ((void *)param_1[0x1a] != (void *)0x0) {
    if (param_1[0x19] != -4) {
      free((void *)param_1[0x1a]);
    }
    param_1[0x1a] = 0;
  }
  param_1[0x19] = param_2;
  if (param_2 != 0 && param_2 != -5) {
    *param_1 = 0;
  }
  if (param_2 != -4 && param_3 != (char *)0x0) {
    __s_00 = (char *)param_1[6];
    sVar1 = strlen(__s_00);
    sVar2 = strlen(param_3);
    __s = malloc(sVar1 + sVar2 + 3);
    param_1[0x1a] = __s;
    if (__s == (char *)0x0) {
      param_1[0x19] = 0xfffffffc;
    }
    else {
      sVar1 = strlen(__s_00);
      sVar2 = strlen(param_3);
      snprintf(__s,sVar1 + sVar2 + 3,(char *)(DAT_00021220 + 0x21200),__s_00,DAT_0002121c + 0x211f4,
               param_3);
    }
  }
  return;
}



/* ===== FUN_00021228 @ 00021228 size=488 ===== */

undefined4 FUN_00021228(int *param_1)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  size_t __nbytes;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = param_1[0x1f];
  do {
    if (param_1[0x1c] == 0) {
      if (param_1[0x19] != 0 && param_1[0x19] != -5) {
        return 0xffffffff;
      }
      if (param_1[0x10] != 0) {
LAB_000212a4:
        FUN_0002113c(param_1,0xfffffffb,DAT_00021410 + 0x212b8);
        *param_1 = iVar6 - param_1[0x1f];
        param_1[1] = param_1[0x1e] + (param_1[0x1f] - iVar6);
        return 0;
      }
      iVar7 = param_1[9];
      uVar8 = param_1[7];
      uVar5 = 0;
      do {
        __nbytes = uVar8 - uVar5;
        if (0x3fffffff < __nbytes) {
          __nbytes = 0x40000000;
        }
        sVar1 = read(param_1[5],(void *)(iVar7 + uVar5),__nbytes);
        if (sVar1 < 1) {
          if (sVar1 != 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            FUN_0002113c(param_1,0xffffffff,pcVar3);
            return 0xffffffff;
          }
          param_1[0x10] = 1;
          break;
        }
        uVar5 = uVar5 + sVar1;
      } while (uVar5 < uVar8);
      iVar7 = param_1[0x1c];
      param_1[0x1c] = uVar5 + iVar7;
      param_1[0x1b] = param_1[9];
      if (uVar5 + iVar7 == 0) goto LAB_000212a4;
    }
    iVar7 = inflate(param_1 + 0x1b,0);
    if ((iVar7 + 2U & 0xfffffffb) == 0) {
      FUN_0002113c(param_1,0xfffffffe,DAT_00021414 + 0x2134c);
      return 0xffffffff;
    }
    if (iVar7 == -4) {
      FUN_0002113c(param_1,0xfffffffc,DAT_00021418 + 0x21368);
      return 0xffffffff;
    }
    if (iVar7 == -3) {
      iVar6 = param_1[0x21];
      if (iVar6 == 0) {
        iVar6 = DAT_0002141c + 0x213e4;
      }
      FUN_0002113c(param_1,0xfffffffd,iVar6);
      return 0xffffffff;
    }
    iVar4 = param_1[0x1f];
    if (iVar4 == 0) {
      *param_1 = iVar6;
      param_1[1] = param_1[0x1e] - iVar6;
      if (iVar7 != 1) {
        return 0;
      }
      goto LAB_000213c8;
    }
    if (iVar7 == 1) {
      *param_1 = iVar6 - iVar4;
      param_1[1] = param_1[0x1e] + (iVar4 - iVar6);
LAB_000213c8:
      param_1[0xc] = 0;
      return 0;
    }
  } while( true );
}



/* ===== FUN_00021420 @ 00021420 size=628 ===== */

undefined4 FUN_00021420(undefined4 *param_1)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  undefined1 *puVar8;
  int iVar9;
  
  if (param_1[7] == 0) {
    sVar7 = param_1[8];
    __ptr = malloc(sVar7);
    param_1[9] = __ptr;
    __ptr_00 = malloc(sVar7 << 1);
    param_1[10] = __ptr_00;
    iVar1 = DAT_000216a0;
    if (__ptr_00 == (void *)0x0 || __ptr == (void *)0x0) {
      free(__ptr_00);
      free(__ptr);
      FUN_0002113c(param_1,0xfffffffc,DAT_000216a8 + 0x21660);
      return 0xffffffff;
    }
    param_1[7] = sVar7;
    *(undefined8 *)(param_1 + 0x23) = 0;
    param_1[0x25] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    iVar1 = inflateInit2_(param_1 + 0x1b,0x1f,iVar1 + 0x21504,0x38);
    if (iVar1 != 0) {
      free((void *)param_1[10]);
      free((void *)param_1[9]);
      iVar1 = DAT_000216a4;
      param_1[7] = 0;
      FUN_0002113c(param_1,0xfffffffc,iVar1 + 0x21540);
      return 0xffffffff;
    }
  }
  sVar7 = param_1[0x1c];
  if (sVar7 < 2) {
    if (param_1[0x19] != 0 && param_1[0x19] != -5) {
      return 0xffffffff;
    }
    if (param_1[0x10] == 0) {
      puVar8 = (undefined1 *)param_1[9];
      uVar6 = 0;
      iVar1 = 0;
      if (sVar7 != 0) {
        *puVar8 = *(undefined1 *)param_1[0x1b];
        iVar1 = param_1[0x1c];
      }
      iVar9 = param_1[7];
      if (sVar7 != 0) {
        puVar8 = (undefined1 *)param_1[9];
      }
      do {
        sVar7 = (iVar9 - iVar1) - uVar6;
        if (0x3fffffff < sVar7) {
          sVar7 = 0x40000000;
        }
        sVar2 = read(param_1[5],puVar8 + uVar6 + iVar1,sVar7);
        if (sVar2 < 1) {
          if (sVar2 != 0) {
            piVar3 = __errno_location();
            pcVar4 = strerror(*piVar3);
            FUN_0002113c(param_1,0xffffffff,pcVar4);
            return 0xffffffff;
          }
          param_1[0x10] = 1;
          break;
        }
        uVar6 = uVar6 + sVar2;
      } while (uVar6 < (uint)(iVar9 - iVar1));
      sVar7 = uVar6 + param_1[0x1c];
      param_1[0x1c] = sVar7;
      param_1[0x1b] = param_1[9];
      if (sVar7 == 0) {
        return 0;
      }
      if (sVar7 == 1) {
        iVar1 = param_1[0xb];
        goto joined_r0x000215fc;
      }
      goto LAB_00021444;
    }
    if (sVar7 == 0) {
      return 0;
    }
    sVar7 = 1;
  }
  else {
LAB_00021444:
    if ((*(char *)param_1[0x1b] == '\x1f') && (((char *)param_1[0x1b])[1] == -0x75)) {
      inflateReset(param_1 + 0x1b);
      *(undefined8 *)(param_1 + 0xb) = DAT_00021698;
      return 0;
    }
  }
  iVar1 = param_1[0xb];
joined_r0x000215fc:
  if (iVar1 != 0) {
    param_1[1] = (void *)param_1[10];
    memcpy((void *)param_1[10],(void *)param_1[0x1b],sVar7);
    uVar5 = param_1[0x1c];
    param_1[0x1c] = 0;
    *param_1 = uVar5;
    *(undefined8 *)(param_1 + 0xb) = 0x100000001;
    return 0;
  }
  param_1[0x1c] = 0;
  *param_1 = 0;
  param_1[0x10] = 1;
  return 0;
}



/* ===== FUN_000216ac @ 000216ac size=292 ===== */

undefined4 FUN_000216ac(uint *param_1)

{
  ssize_t sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t __nbytes;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  while (uVar5 = param_1[0xc], uVar5 != 1) {
    if (uVar5 == 2) {
      param_1[0x1e] = param_1[10];
      param_1[0x1f] = param_1[7] << 1;
      iVar2 = FUN_00021228(param_1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
    else if (uVar5 == 0) {
      iVar2 = FUN_00021420(param_1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (param_1[0xc] == 0) {
        return 0;
      }
    }
    if (*param_1 != 0) {
      return 0;
    }
    if ((param_1[0x10] != 0) && (param_1[0x1c] == 0)) {
      return 0;
    }
  }
  uVar6 = param_1[7];
  uVar7 = param_1[10];
  uVar5 = 0;
  *param_1 = 0;
  while( true ) {
    __nbytes = uVar6 * 2 - uVar5;
    if (0x3fffffff < __nbytes) {
      __nbytes = 0x40000000;
    }
    sVar1 = read(param_1[5],(void *)(uVar7 + uVar5),__nbytes);
    if (sVar1 < 1) break;
    uVar5 = sVar1 + *param_1;
    *param_1 = uVar5;
    if (uVar6 * 2 <= uVar5) {
LAB_00021758:
      param_1[1] = param_1[10];
      return 0;
    }
  }
  if (sVar1 != 0) {
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    FUN_0002113c(param_1,0xffffffff,pcVar4);
    return 0xffffffff;
  }
  param_1[0x10] = 1;
  goto LAB_00021758;
}



/* ===== FUN_000217d0 @ 000217d0 size=396 ===== */

int FUN_000217d0(uint *param_1,void *param_2,uint param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  size_t __nbytes;
  uint __n;
  uint uVar6;
  void *__buf;
  int iVar7;
  
  iVar7 = 0;
  do {
    uVar6 = *param_1;
    if (uVar6 == 0) {
      if ((param_1[0x10] != 0) && (param_1[0x1c] == 0)) {
        param_1[0x11] = 1;
        return iVar7;
      }
      if ((param_1[0xc] != 0) && (param_1[7] << 1 <= param_3)) {
        if (param_1[0xc] == 1) {
          __n = 0;
          do {
            uVar6 = param_3 - __n;
            __buf = (void *)((int)param_2 + __n);
            __nbytes = uVar6;
            if (0x3fffffff < uVar6) {
              __nbytes = 0x40000000;
            }
            sVar2 = read(param_1[5],__buf,__nbytes);
            if (sVar2 < 1) {
              if (sVar2 != 0) {
                piVar3 = __errno_location();
                pcVar4 = strerror(*piVar3);
                FUN_0002113c(param_1,0xffffffff,pcVar4);
                return 0;
              }
              param_1[0x10] = 1;
              goto LAB_00021824;
            }
            __n = __n + sVar2;
          } while (__n < param_3);
        }
        else {
          param_1[0x1f] = param_3;
          param_1[0x1e] = (uint)param_2;
          iVar1 = FUN_00021228(param_1);
          if (iVar1 == -1) {
            return 0;
          }
          __n = *param_1;
          *param_1 = 0;
        }
        uVar6 = param_3 - __n;
        __buf = (void *)((int)param_2 + __n);
        goto LAB_00021824;
      }
      iVar1 = FUN_000216ac(param_1);
      if (iVar1 == -1) {
        return 0;
      }
    }
    else {
      __n = param_3;
      if (uVar6 <= param_3) {
        __n = uVar6;
      }
      uVar6 = param_3 - __n;
      memcpy(param_2,(void *)param_1[1],__n);
      __buf = (void *)((int)param_2 + __n);
      param_1[1] = param_1[1] + __n;
      *param_1 = *param_1 - __n;
LAB_00021824:
      uVar5 = param_1[2];
      iVar7 = iVar7 + __n;
      param_1[2] = uVar5 + __n;
      param_1[3] = param_1[3] + (uint)CARRY4(uVar5,__n);
      param_3 = uVar6;
      param_2 = __buf;
    }
    if (param_3 == 0) {
      return iVar7;
    }
  } while( true );
}



/* ===== gzread @ 0002195c size=376 ===== */

int gzread(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (param_1 == (uint *)0x0) {
    return -1;
  }
  if (param_1[4] != 0x1c4f) {
    return -1;
  }
  if (param_1[0x19] != 0 && param_1[0x19] != 0xfffffffb) {
    return -1;
  }
  if (param_3 < 0) {
    FUN_0002113c(param_1,0xfffffffe,DAT_00021ad4 + 0x21acc);
    return -1;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1[0x18] != 0) {
    uVar6 = param_1[0x16];
    uVar7 = param_1[0x17];
    param_1[0x18] = 0;
    if (uVar6 != 0 || uVar7 != 0) {
      do {
        while( true ) {
          uVar4 = *param_1;
          uVar9 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
          iVar1 = (int)((ulonglong)uVar9 >> 0x20);
          uVar5 = (uint)uVar9;
          if (uVar4 == 0) break;
          uVar3 = 0;
          if ((int)(uVar7 - (iVar1 + (uint)(uVar6 < uVar5))) < 0 !=
              (SBORROW4(uVar7,iVar1) != SBORROW4(uVar7 - iVar1,(uint)(uVar6 < uVar5)))) {
            uVar3 = uVar4 - uVar6;
            iVar1 = 0;
            uVar4 = uVar6;
            uVar5 = uVar6;
          }
          uVar2 = param_1[2];
          *param_1 = uVar3;
          bVar8 = uVar6 < uVar5;
          uVar6 = uVar6 - uVar5;
          uVar7 = uVar7 - (iVar1 + (uint)bVar8);
          param_1[1] = param_1[1] + uVar4;
          param_1[2] = uVar2 + uVar5;
          param_1[3] = param_1[3] + iVar1 + (uint)CARRY4(uVar2,uVar5);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_000219b8;
        }
        if ((param_1[0x10] != 0) && (param_1[0x1c] == 0)) goto LAB_000219b8;
        iVar1 = FUN_000216ac(param_1);
      } while (iVar1 != -1);
      goto LAB_00021aa0;
    }
  }
LAB_000219b8:
  iVar1 = FUN_000217d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_00021aa0:
  if (param_1[0x19] != 0 && param_1[0x19] != 0xfffffffb) {
    return -1;
  }
  return 0;
}



/* ===== gzfread @ 00021ad8 size=352 ===== */

undefined4 gzfread(undefined4 param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  
  if (((param_4 == (uint *)0x0) || (param_4[4] != 0x1c4f)) ||
     (param_4[0x19] != 0 && param_4[0x19] != 0xfffffffb)) {
LAB_00021af4:
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      iVar3 = param_2 * param_3;
      puVar9 = param_4;
      iVar1 = FUN_000232f8(iVar3);
      if (iVar1 == param_3) {
        uVar2 = 0;
        if (iVar3 != 0) {
          uVar7 = 0;
          if (param_4[0x18] != 0) {
            uVar4 = param_4[0x16];
            uVar5 = param_4[0x17];
            param_4[0x18] = 0;
            uVar7 = 0;
            if (uVar4 != 0 || uVar5 != 0) {
              do {
                while (uVar6 = *param_4, uVar6 == 0) {
                  if ((param_4[0x10] != 0) && (uVar7 = 0, param_4[0x1c] == 0)) goto LAB_00021b5c;
                  iVar1 = FUN_000216ac(param_4);
                  if (iVar1 == -1) goto LAB_00021af4;
                }
                uVar7 = 0;
                if ((int)uVar5 < (int)(uint)(uVar4 < uVar6)) {
                  uVar7 = uVar6 - uVar4;
                }
                *param_4 = uVar7;
                if ((int)uVar5 < (int)(uint)(uVar4 < uVar6)) {
                  uVar6 = uVar4;
                }
                bVar8 = uVar4 < uVar6;
                uVar4 = uVar4 - uVar6;
                uVar5 = uVar5 - bVar8;
                uVar7 = param_4[3] + (uint)CARRY4(uVar6,param_4[2]);
                param_4[2] = uVar6 + param_4[2];
                param_4[3] = uVar7;
                param_4[1] = param_4[1] + uVar6;
              } while (uVar4 != 0 || uVar5 != 0);
            }
          }
LAB_00021b5c:
          uVar2 = FUN_000217d0(param_4,param_1,iVar3,uVar7,puVar9);
          uVar2 = FUN_000232f8(uVar2,param_2);
        }
      }
      else {
        FUN_0002113c(param_4,0xfffffffe,DAT_00021c38 + 0x21c34);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== gzgetc @ 00021c3c size=320 ===== */

uint gzgetc(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  byte local_24 [4];
  
  if (((param_1 != (uint *)0x0) && (param_1[4] == 0x1c4f)) &&
     (param_1[0x19] == 0 || param_1[0x19] == 0xfffffffb)) {
    if (*param_1 != 0) {
      uVar1 = param_1[2];
      pbVar4 = (byte *)param_1[1];
      *param_1 = *param_1 - 1;
      param_1[2] = uVar1 + 1;
      param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar1);
      param_1[1] = (uint)(pbVar4 + 1);
      return (uint)*pbVar4;
    }
    if (param_1[0x18] != 0) {
      uVar6 = param_1[0x16];
      uVar7 = param_1[0x17];
      param_1[0x18] = 0;
      uVar1 = 0;
      if (uVar6 != 0 || uVar7 != 0) {
        do {
          if (uVar1 == 0) {
            if ((param_1[0x10] != 0) && (param_1[0x1c] == 0)) break;
            iVar2 = FUN_000216ac(param_1);
            if (iVar2 == -1) {
              return 0xffffffff;
            }
          }
          else {
            uVar3 = param_1[2];
            uVar5 = 0;
            if ((int)uVar7 < (int)(uint)(uVar6 < uVar1)) {
              uVar5 = uVar1 - uVar6;
            }
            *param_1 = uVar5;
            if ((int)uVar7 < (int)(uint)(uVar6 < uVar1)) {
              uVar1 = uVar6;
            }
            bVar8 = uVar6 < uVar1;
            uVar6 = uVar6 - uVar1;
            uVar7 = uVar7 - bVar8;
            param_1[2] = uVar3 + uVar1;
            param_1[3] = param_1[3] + (uint)CARRY4(uVar3,uVar1);
            param_1[1] = param_1[1] + uVar1;
            if (uVar6 == 0 && uVar7 == 0) break;
          }
          uVar1 = *param_1;
        } while( true );
      }
    }
    iVar2 = FUN_000217d0(param_1,local_24,1);
    if (iVar2 != 0) {
      return (uint)local_24[0];
    }
  }
  return 0xffffffff;
}



/* ===== gzgetc_ @ 00021d7c size=4 ===== */

void gzgetc_(void)

{
  (*(code *)PTR_gzgetc_00037018)();
  return;
}



/* ===== gzungetc @ 00021d80 size=496 ===== */

int gzungetc(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (((param_2 != (uint *)0x0) && (param_2[4] == 0x1c4f)) &&
     (param_2[0x19] == 0 || param_2[0x19] == 0xfffffffb)) {
    uVar4 = 0;
    if (param_2[0x18] != 0) {
      uVar7 = param_2[0x16];
      uVar1 = param_2[0x17];
      param_2[0x18] = 0;
      uVar4 = 0;
      if (uVar7 != 0 || uVar1 != 0) {
        do {
          while (uVar3 = *param_2, uVar3 == 0) {
            if ((param_2[0x10] != 0) && (param_2[0x1c] == 0)) {
              if (param_1 < 0) {
                return -1;
              }
              uVar7 = param_2[7] << 1;
              goto LAB_00021e40;
            }
            iVar2 = FUN_000216ac(param_2);
            if (iVar2 == -1) {
              return -1;
            }
          }
          uVar4 = 0;
          if ((int)uVar1 < (int)(uint)(uVar7 < uVar3)) {
            uVar4 = uVar3 - uVar7;
          }
          *param_2 = uVar4;
          if ((int)uVar1 < (int)(uint)(uVar7 < uVar3)) {
            uVar3 = uVar7;
          }
          bVar8 = uVar7 < uVar3;
          uVar7 = uVar7 - uVar3;
          uVar1 = uVar1 - bVar8;
          uVar4 = param_2[3] + (uint)CARRY4(uVar3,param_2[2]);
          param_2[2] = uVar3 + param_2[2];
          param_2[3] = uVar4;
          param_2[1] = param_2[1] + uVar3;
        } while (uVar7 != 0 || uVar1 != 0);
      }
    }
    if (-1 < param_1) {
      uVar1 = *param_2;
      uVar7 = param_2[7] * 2;
      if (uVar1 == 0) {
LAB_00021e40:
        *param_2 = 1;
        param_2[1] = param_2[10] + (uVar7 - 1);
        *(char *)(param_2[10] + (uVar7 - 1)) = (char)param_1;
        uVar4 = param_2[2];
        param_2[0x11] = 0;
        param_2[2] = uVar4 - 1;
        param_2[3] = param_2[3] - (uint)(uVar4 == 0);
        return param_1;
      }
      if (uVar1 != uVar7) {
        puVar6 = (undefined1 *)param_2[1];
        if (puVar6 == (undefined1 *)param_2[10]) {
          puVar5 = puVar6 + uVar1;
          puVar6 = puVar6 + uVar7;
          if ((undefined1 *)param_2[10] < puVar5) {
            do {
              puVar6 = puVar6 + -1;
              puVar5 = puVar5 + -1;
              *puVar6 = *puVar5;
            } while ((undefined1 *)param_2[10] < puVar5);
            uVar1 = *param_2;
          }
        }
        *param_2 = uVar1 + 1;
        param_2[1] = (uint)(puVar6 + -1);
        puVar6[-1] = (char)param_1;
        uVar4 = param_2[2];
        param_2[0x11] = 0;
        param_2[2] = uVar4 - 1;
        param_2[3] = param_2[3] - (uint)(uVar4 == 0);
        return param_1;
      }
      FUN_0002113c(param_2,0xfffffffd,DAT_00021f70 + 0x21f6c,uVar4,param_4);
    }
  }
  return -1;
}



/* ===== gzgets @ 00021f74 size=588 ===== */

undefined1 * gzgets(uint *param_1,undefined1 *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *__dest;
  undefined1 *puVar9;
  void *__s;
  bool bVar10;
  undefined8 uVar11;
  
  if (((param_1 != (uint *)0x0 && (param_2 != (undefined1 *)0x0 && 0 < param_3)) &&
      (param_1[4] == 0x1c4f)) && (param_1[0x19] == 0 || param_1[0x19] == 0xfffffffb)) {
    if (param_1[0x18] != 0) {
      uVar8 = param_1[0x16];
      uVar7 = param_1[0x17];
      param_1[0x18] = 0;
      if (uVar8 != 0 || uVar7 != 0) {
        do {
          while( true ) {
            uVar4 = *param_1;
            uVar11 = VectorShiftRight(CONCAT44(uVar4,uVar4),0x20);
            iVar2 = (int)((ulonglong)uVar11 >> 0x20);
            uVar5 = (uint)uVar11;
            if (uVar4 != 0) break;
            if ((param_1[0x10] != 0) && (param_1[0x1c] == 0)) goto LAB_00021fe0;
            iVar2 = FUN_000216ac(param_1);
            if (iVar2 == -1) {
              return (undefined1 *)0x0;
            }
          }
          uVar3 = 0;
          if ((int)(uVar7 - (iVar2 + (uint)(uVar8 < uVar5))) < 0 !=
              (SBORROW4(uVar7,iVar2) != SBORROW4(uVar7 - iVar2,(uint)(uVar8 < uVar5)))) {
            uVar3 = uVar4 - uVar8;
            iVar2 = 0;
            uVar4 = uVar8;
            uVar5 = uVar8;
          }
          uVar6 = param_1[2];
          *param_1 = uVar3;
          bVar10 = uVar8 < uVar5;
          uVar8 = uVar8 - uVar5;
          uVar7 = uVar7 - (iVar2 + (uint)bVar10);
          param_1[1] = param_1[1] + uVar4;
          param_1[2] = uVar6 + uVar5;
          param_1[3] = param_1[3] + iVar2 + (uint)CARRY4(uVar6,uVar5);
        } while (uVar8 != 0 || uVar7 != 0);
      }
    }
LAB_00021fe0:
    uVar8 = param_3 - 1;
    if (uVar8 != 0) {
      uVar7 = *param_1;
      __dest = param_2;
      puVar9 = param_2;
      if (uVar7 == 0) goto LAB_000220f0;
      do {
        do {
          __s = (void *)param_1[1];
          uVar4 = uVar8;
          if (uVar7 <= uVar8) {
            uVar4 = uVar7;
          }
          pvVar1 = memchr(__s,10,uVar4);
          if (pvVar1 != (void *)0x0) {
            uVar7 = (int)pvVar1 + (1 - (int)__s);
            puVar9 = __dest + uVar7;
            memcpy(__dest,__s,uVar7);
            uVar8 = param_1[2];
            *param_1 = *param_1 - uVar7;
            param_1[1] = param_1[1] + uVar7;
            param_1[2] = uVar8 + uVar7;
            param_1[3] = param_1[3] + (uint)CARRY4(uVar8,uVar7);
            goto LAB_0002205c;
          }
          puVar9 = __dest + uVar4;
          memcpy(__dest,__s,uVar4);
          uVar5 = param_1[2];
          uVar8 = uVar8 - uVar4;
          uVar7 = *param_1 - uVar4;
          param_1[2] = uVar5 + uVar4;
          param_1[3] = param_1[3] + (uint)CARRY4(uVar5,uVar4);
          *param_1 = uVar7;
          param_1[1] = param_1[1] + uVar4;
          if (uVar8 == 0) goto LAB_0002205c;
          __dest = puVar9;
        } while (uVar7 != 0);
LAB_000220f0:
        iVar2 = FUN_000216ac(param_1);
        if (iVar2 == -1) {
          return (undefined1 *)0x0;
        }
        uVar7 = *param_1;
        __dest = puVar9;
      } while (uVar7 != 0);
      param_1[0x11] = 1;
LAB_0002205c:
      if (puVar9 != param_2) {
        *puVar9 = 0;
        return param_2;
      }
    }
  }
  return (undefined1 *)0x0;
}



/* ===== gzdirect @ 000221c0 size=76 ===== */

int gzdirect(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (((param_1[4] == 0x1c4f) && (param_1[0xc] == 0)) && (*param_1 == 0)) {
      FUN_00021420();
    }
    return param_1[0xb];
  }
  return 0;
}



/* ===== gzclose_r @ 0002220c size=148 ===== */

int gzclose_r(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 0x10) != 0x1c4f)) {
    iVar2 = -2;
  }
  else {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      inflateEnd((int)param_1 + 0x6c);
      free(*(void **)((int)param_1 + 0x28));
      free(*(void **)((int)param_1 + 0x24));
    }
    iVar2 = *(int *)((int)param_1 + 100);
    if (iVar2 != -5) {
      iVar2 = 0;
    }
    FUN_0002113c(param_1,0);
    free(*(void **)((int)param_1 + 0x18));
    iVar1 = close(*(int *)((int)param_1 + 0x14));
    free(param_1);
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



/* ===== FUN_000222a0 @ 000222a0 size=320 ===== */

undefined4 FUN_000222a0(int param_1)

{
  void *__ptr;
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  size_t __size;
  bool bVar4;
  
  __size = *(size_t *)(param_1 + 0x20);
  __ptr = malloc(__size << 1);
  *(void **)(param_1 + 0x24) = __ptr;
  if (__ptr == (void *)0x0) {
    FUN_0002113c(param_1,0xfffffffc,DAT_000223e4 + 0x22388);
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar2 = malloc(__size);
    *(void **)(param_1 + 0x28) = pvVar2;
    iVar3 = DAT_000223e0;
    if (pvVar2 == (void *)0x0) {
      free(__ptr);
      FUN_0002113c(param_1,0xfffffffc,DAT_000223ec + 0x223d8);
      uVar1 = 0xffffffff;
    }
    else {
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      iVar3 = deflateInit2_(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x48),8,0x1f,8,
                            *(undefined4 *)(param_1 + 0x4c),iVar3 + 0x22324,0x38);
      if (iVar3 == 0) {
        bVar4 = *(int *)(param_1 + 0x2c) == 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        if (bVar4) {
          uVar1 = *(undefined4 *)(param_1 + 0x28);
        }
        else {
          uVar1 = 0;
        }
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
        if (bVar4) {
          *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x78) = uVar1;
          *(undefined4 *)(param_1 + 4) = uVar1;
        }
        return 0;
      }
      free(*(void **)(param_1 + 0x28));
      free(*(void **)(param_1 + 0x24));
      FUN_0002113c(param_1,0xfffffffc,DAT_000223e8 + 0x223b4);
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(size_t *)(param_1 + 0x1c) = __size;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000223f0 @ 000223f0 size=492 ===== */

undefined4 FUN_000223f0(int param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar4 = FUN_000222a0(), iVar4 == -1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        return 0;
      }
      deflateReset(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x7c);
    iVar4 = 0;
    do {
      if (iVar8 == 0) {
        pvVar7 = *(void **)(param_1 + 0x78);
        pvVar5 = *(void **)(param_1 + 4);
        if (pvVar5 < pvVar7) {
LAB_00022554:
          do {
            sVar6 = (int)pvVar7 - (int)pvVar5;
            if (0x3fffffff < (int)sVar6) {
              sVar6 = 0x40000000;
            }
            sVar1 = write(*(int *)(param_1 + 0x14),pvVar5,sVar6);
            if (sVar1 < 0) goto LAB_00022460;
            pvVar7 = *(void **)(param_1 + 0x78);
            pvVar5 = (void *)(*(int *)(param_1 + 4) + sVar1);
            *(void **)(param_1 + 4) = pvVar5;
          } while (pvVar5 < pvVar7);
          iVar9 = *(int *)(param_1 + 0x7c);
          if (*(int *)(param_1 + 0x7c) != 0) goto LAB_000224f4;
        }
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x28);
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x28);
        iVar9 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar9 = iVar8;
        if ((param_2 != 0) && (param_2 != 4 || iVar4 == 1)) {
          pvVar7 = *(void **)(param_1 + 0x78);
          pvVar5 = *(void **)(param_1 + 4);
          if (pvVar5 < pvVar7) goto LAB_00022554;
        }
      }
LAB_000224f4:
      iVar4 = deflate(param_1 + 0x6c,param_2);
      if (iVar4 == -2) {
        FUN_0002113c(param_1,0xfffffffe,DAT_000225dc + 0x225d8);
        return 0xffffffff;
      }
      iVar8 = *(int *)(param_1 + 0x7c);
    } while (iVar8 != iVar9);
    if (param_2 == 4) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      return 0;
    }
  }
  else {
    sVar6 = *(uint *)(param_1 + 0x70);
    if (sVar6 != 0) {
      pvVar5 = *(void **)(param_1 + 0x6c);
      do {
        if (0x3fffffff < sVar6) {
          sVar6 = 0x40000000;
        }
        sVar1 = write(*(int *)(param_1 + 0x14),pvVar5,sVar6);
        if (sVar1 < 0) {
LAB_00022460:
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_0002113c(param_1,0xffffffff,pcVar3);
          return 0xffffffff;
        }
        sVar6 = *(int *)(param_1 + 0x70) - sVar1;
        *(size_t *)(param_1 + 0x70) = sVar6;
        pvVar5 = (void *)(*(int *)(param_1 + 0x6c) + sVar1);
        *(void **)(param_1 + 0x6c) = pvVar5;
      } while (sVar6 != 0);
    }
  }
  return 0;
}



/* ===== FUN_000225e0 @ 000225e0 size=408 ===== */

undefined4 FUN_000225e0(int param_1)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  bool bVar9;
  
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar8 = FUN_000222a0(), iVar8 == -1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        return 0;
      }
      deflateReset(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x7c);
    do {
      if (iVar8 == 0) {
        pvVar7 = *(void **)(param_1 + 0x78);
        pvVar5 = *(void **)(param_1 + 4);
        if (pvVar5 < pvVar7) {
          do {
            sVar6 = (int)pvVar7 - (int)pvVar5;
            if (0x3fffffff < (int)sVar6) {
              sVar6 = 0x40000000;
            }
            sVar1 = write(*(int *)(param_1 + 0x14),pvVar5,sVar6);
            if (sVar1 < 0) goto LAB_0002264c;
            pvVar7 = *(void **)(param_1 + 0x78);
            pvVar5 = (void *)(*(int *)(param_1 + 4) + sVar1);
            *(void **)(param_1 + 4) = pvVar5;
          } while (pvVar5 < pvVar7);
          iVar8 = *(int *)(param_1 + 0x7c);
          if (iVar8 != 0) goto LAB_000226b0;
        }
        iVar8 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x28);
        *(int *)(param_1 + 0x7c) = iVar8;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x28);
      }
LAB_000226b0:
      iVar4 = deflate(param_1 + 0x6c,0);
      if (iVar4 == -2) {
        FUN_0002113c(param_1,0xfffffffe,DAT_00022778 + 0x22770);
        return 0xffffffff;
      }
      bVar9 = *(int *)(param_1 + 0x7c) != iVar8;
      iVar8 = *(int *)(param_1 + 0x7c);
    } while (bVar9);
  }
  else {
    sVar6 = *(uint *)(param_1 + 0x70);
    if (sVar6 != 0) {
      pvVar5 = *(void **)(param_1 + 0x6c);
      do {
        if (0x3fffffff < sVar6) {
          sVar6 = 0x40000000;
        }
        sVar1 = write(*(int *)(param_1 + 0x14),pvVar5,sVar6);
        if (sVar1 < 0) {
LAB_0002264c:
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          FUN_0002113c(param_1,0xffffffff,pcVar3);
          return 0xffffffff;
        }
        sVar6 = *(int *)(param_1 + 0x70) - sVar1;
        *(size_t *)(param_1 + 0x70) = sVar6;
        pvVar5 = (void *)(*(int *)(param_1 + 0x6c) + sVar1);
        *(void **)(param_1 + 0x6c) = pvVar5;
      } while (sVar6 != 0);
    }
  }
  return 0;
}



/* ===== FUN_0002277c @ 0002277c size=584 ===== */

uint FUN_0002277c(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint __n;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_30;
  int iStack_2c;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar3 = FUN_000222a0();
    if (iVar3 == -1) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x70);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x70);
  }
  if (iVar5 == 0) {
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    local_30 = *(uint *)(param_1 + 0x58);
    iStack_2c = *(int *)(param_1 + 0x5c);
    if ((iVar3 != 0) && (iVar3 = FUN_000225e0(param_1), iVar3 == -1)) {
      return 0;
    }
    if (local_30 != 0 || iStack_2c != 0) {
      bVar2 = true;
      do {
        uVar8 = *(uint *)(param_1 + 0x1c);
        if (iStack_2c < (int)(uint)(local_30 < *(uint *)(param_1 + 0x1c))) {
          uVar8 = local_30;
        }
        pvVar6 = *(void **)(param_1 + 0x24);
        if (bVar2) {
          memset(pvVar6,0,uVar8);
          pvVar6 = *(void **)(param_1 + 0x24);
        }
        uVar7 = *(uint *)(param_1 + 8);
        *(void **)(param_1 + 0x6c) = pvVar6;
        *(uint *)(param_1 + 0x70) = uVar8;
        *(uint *)(param_1 + 8) = uVar7 + uVar8;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar7,uVar8);
        iVar3 = FUN_000225e0(param_1);
        bVar2 = false;
        if (iVar3 == -1) {
          return 0;
        }
        bVar9 = local_30 < uVar8;
        local_30 = local_30 - uVar8;
        iStack_2c = iStack_2c - (uint)bVar9;
      } while (local_30 != 0 || iStack_2c != 0);
    }
    uVar8 = *(uint *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x70);
  }
  uVar7 = param_3;
  if (param_3 < uVar8) {
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x24);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x6c) = iVar5;
        iVar1 = iVar5;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x6c);
      }
      pvVar6 = (void *)(iVar1 + iVar3);
      __n = uVar8 - ((int)pvVar6 - iVar5);
      if (uVar7 < __n) {
        memcpy(pvVar6,param_2,uVar7);
        uVar8 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + uVar7;
        *(uint *)(param_1 + 8) = uVar8 + uVar7;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar8,uVar7);
        return param_3;
      }
      memcpy(pvVar6,param_2,__n);
      uVar4 = *(uint *)(param_1 + 8);
      param_2 = (void *)((int)param_2 + __n);
      uVar7 = uVar7 + (((int)pvVar6 - iVar5) - uVar8);
      *(uint *)(param_1 + 8) = uVar4 + __n;
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar4,__n);
      *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + __n;
      if (uVar7 == 0) {
        return param_3;
      }
      iVar3 = FUN_000225e0(param_1);
      if (iVar3 == -1) break;
      iVar3 = *(int *)(param_1 + 0x70);
      uVar8 = *(uint *)(param_1 + 0x1c);
    }
  }
  else if ((iVar3 == 0) || (iVar3 = FUN_000225e0(param_1), iVar3 != -1)) {
    uVar8 = *(uint *)(param_1 + 8);
    *(void **)(param_1 + 0x6c) = param_2;
    *(uint *)(param_1 + 0x70) = param_3;
    *(uint *)(param_1 + 8) = uVar8 + param_3;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar8,param_3);
    iVar3 = FUN_000225e0(param_1);
    if (iVar3 != -1) {
      return param_3;
    }
  }
  return 0;
}



/* ===== gzwrite @ 000229c4 size=92 ===== */

undefined4 gzwrite(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0x79b1) && (*(int *)(param_1 + 100) == 0)) {
    if (-1 < param_3) {
      uVar1 = FUN_0002277c();
      return uVar1;
    }
    FUN_0002113c(param_1,0xfffffffd,DAT_00022a20 + 0x22a10);
  }
  return 0;
}



/* ===== gzfwrite @ 00022a24 size=164 ===== */

undefined4 gzfwrite(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_4 == 0) || (*(int *)(param_4 + 0x10) != 0x79b1)) || (*(int *)(param_4 + 100) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      iVar3 = param_2 * param_3;
      iVar1 = FUN_000232f8(iVar3);
      if (iVar1 == param_3) {
        uVar2 = 0;
        if (iVar3 != 0) {
          uVar2 = FUN_0002277c(param_4,param_1,iVar3);
          uVar2 = FUN_000232f8(uVar2,param_2);
        }
      }
      else {
        FUN_0002113c(param_4,0xfffffffe,DAT_00022ac8 + 0x22ac4);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== gzputc @ 00022acc size=384 ===== */

uint gzputc(int param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *__s;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint __n;
  bool bVar7;
  byte local_2c [8];
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x79b1)) && (*(int *)(param_1 + 100) == 0)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar5 = *(uint *)(param_1 + 0x58);
      iVar3 = *(int *)(param_1 + 0x5c);
      if ((*(int *)(param_1 + 0x70) != 0) && (iVar4 = FUN_000225e0(), iVar4 == -1)) {
        return 0xffffffff;
      }
      if (uVar5 != 0 || iVar3 != 0) {
        bVar2 = true;
        do {
          __s = *(void **)(param_1 + 0x24);
          __n = *(uint *)(param_1 + 0x1c);
          if (iVar3 < (int)(uint)(uVar5 < *(uint *)(param_1 + 0x1c))) {
            __n = uVar5;
          }
          if (bVar2) {
            memset(__s,0,__n);
            __s = *(void **)(param_1 + 0x24);
          }
          uVar6 = *(uint *)(param_1 + 8);
          *(uint *)(param_1 + 0x70) = __n;
          *(void **)(param_1 + 0x6c) = __s;
          *(uint *)(param_1 + 8) = uVar6 + __n;
          *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar6,__n);
          iVar4 = FUN_000225e0(param_1);
          bVar2 = false;
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          bVar7 = uVar5 < __n;
          uVar5 = uVar5 - __n;
          iVar3 = iVar3 - (uint)bVar7;
        } while (uVar5 != 0 || iVar3 != 0);
      }
    }
    if (*(uint *)(param_1 + 0x1c) != 0) {
      iVar4 = *(int *)(param_1 + 0x70);
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x6c) = iVar3;
        iVar1 = iVar3;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x6c);
      }
      if ((uint)((iVar1 + iVar4) - iVar3) < *(uint *)(param_1 + 0x1c)) {
        *(byte *)(iVar1 + iVar4) = param_2;
        uVar5 = *(uint *)(param_1 + 8);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        *(uint *)(param_1 + 8) = uVar5 + 1;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xfffffffe < uVar5);
        return (uint)param_2;
      }
    }
    local_2c[0] = param_2;
    iVar3 = FUN_0002277c(param_1,local_2c,1);
    if (iVar3 == 1) {
      return (uint)param_2;
    }
  }
  return 0xffffffff;
}



/* ===== gzputs @ 00022c4c size=96 ===== */

size_t gzputs(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x79b1)) && (*(int *)(param_1 + 100) == 0)) {
    sVar1 = strlen(param_2);
    uVar2 = FUN_0002277c(param_1,param_2,sVar1);
    if (sVar1 <= uVar2) {
      return sVar1;
    }
  }
  return 0xffffffff;
}



/* ===== gzvprintf @ 00022cac size=536 ===== */

uint gzvprintf(int param_1,char *param_2,__gnuc_va_list param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  int iVar4;
  int iVar5;
  char *__s_00;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 100) != 0)) {
    return 0xfffffffe;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar4 = FUN_000222a0(), iVar4 == -1)) goto LAB_00022da8;
  iVar4 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x60) == 0) {
LAB_00022cf8:
    if (iVar4 == 0) goto LAB_00022d7c;
    iVar5 = *(int *)(param_1 + 0x6c);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (iVar4 != 0) {
      iVar4 = FUN_000225e0(param_1);
      if (iVar4 == -1) goto LAB_00022da8;
      if (uVar2 != 0 || iVar5 != 0) goto LAB_00022dd4;
LAB_00022e78:
      iVar4 = *(int *)(param_1 + 0x70);
      goto LAB_00022cf8;
    }
    if (uVar2 != 0 || iVar5 != 0) {
LAB_00022dd4:
      bVar1 = true;
      do {
        __s = *(void **)(param_1 + 0x24);
        uVar7 = *(uint *)(param_1 + 0x1c);
        if (iVar5 < (int)(uint)(uVar2 < *(uint *)(param_1 + 0x1c))) {
          uVar7 = uVar2;
        }
        if (bVar1) {
          memset(__s,0,uVar7);
          __s = *(void **)(param_1 + 0x24);
        }
        uVar3 = *(uint *)(param_1 + 8);
        *(void **)(param_1 + 0x6c) = __s;
        *(uint *)(param_1 + 0x70) = uVar7;
        *(uint *)(param_1 + 8) = uVar3 + uVar7;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,uVar7);
        iVar4 = FUN_000225e0(param_1);
        bVar1 = false;
        if (iVar4 == -1) goto LAB_00022da8;
        bVar8 = uVar2 < uVar7;
        uVar2 = uVar2 - uVar7;
        iVar5 = iVar5 - (uint)bVar8;
      } while (uVar2 != 0 || iVar5 != 0);
      goto LAB_00022e78;
    }
LAB_00022d7c:
    iVar5 = *(int *)(param_1 + 0x24);
    iVar4 = 0;
    *(int *)(param_1 + 0x6c) = iVar5;
  }
  __s_00 = (char *)(iVar5 + iVar4);
  __s_00[*(int *)(param_1 + 0x1c) + -1] = '\0';
  uVar2 = vsnprintf(__s_00,*(size_t *)(param_1 + 0x1c),param_2,param_3);
  if (uVar2 != 0) {
    uVar7 = *(uint *)(param_1 + 0x1c);
    if ((uVar7 <= uVar2) || (__s_00[uVar7 - 1] != '\0')) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 8);
    uVar6 = uVar2 + *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = uVar6;
    *(uint *)(param_1 + 8) = uVar3 + uVar2;
    *(uint *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar3,uVar2);
    if (uVar7 <= uVar6) {
      *(uint *)(param_1 + 0x70) = uVar7;
      iVar4 = FUN_000225e0(param_1);
      if (iVar4 == -1) {
LAB_00022da8:
        return *(uint *)(param_1 + 100);
      }
      memmove(*(void **)(param_1 + 0x24),
              (void *)((int)*(void **)(param_1 + 0x24) + *(int *)(param_1 + 0x1c)),uVar6 - uVar7);
      *(uint *)(param_1 + 0x70) = uVar6 - uVar7;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return uVar2;
}



/* ===== gzprintf @ 00022ec4 size=44 ===== */

void gzprintf(undefined4 param_1,undefined4 param_2)

{
  gzvprintf(param_1,param_2);
  return;
}



/* ===== gzflush @ 00022ef0 size=284 ===== */

undefined4 gzflush(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  void *__s;
  uint uVar3;
  uint __n;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 100) != 0))
     || (4 < param_2)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar4 = *(uint *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x5c);
    if ((*(int *)(param_1 + 0x70) != 0) && (iVar2 = FUN_000225e0(), iVar2 == -1)) goto LAB_00022fe8;
    if (uVar4 != 0 || iVar5 != 0) {
      bVar1 = true;
      do {
        __s = *(void **)(param_1 + 0x24);
        __n = *(uint *)(param_1 + 0x1c);
        if (iVar5 < (int)(uint)(uVar4 < *(uint *)(param_1 + 0x1c))) {
          __n = uVar4;
        }
        if (bVar1) {
          memset(__s,0,__n);
          __s = *(void **)(param_1 + 0x24);
        }
        uVar3 = *(uint *)(param_1 + 8);
        *(void **)(param_1 + 0x6c) = __s;
        *(uint *)(param_1 + 0x70) = __n;
        *(uint *)(param_1 + 8) = uVar3 + __n;
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,__n);
        iVar2 = FUN_000225e0(param_1);
        bVar1 = false;
        if (iVar2 == -1) goto LAB_00022fe8;
        bVar6 = uVar4 < __n;
        uVar4 = uVar4 - __n;
        iVar5 = iVar5 - (uint)bVar6;
      } while (uVar4 != 0 || iVar5 != 0);
    }
  }
  FUN_000223f0(param_1,param_2);
LAB_00022fe8:
  return *(undefined4 *)(param_1 + 100);
}



/* ===== gzsetparams @ 0002300c size=384 ===== */

undefined4 gzsetparams(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *__s;
  uint uVar4;
  uint __n;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x79b1)) || (*(int *)(param_1 + 100) != 0)) {
    uVar6 = 0xfffffffe;
  }
  else {
    uVar6 = 0;
    if ((*(int *)(param_1 + 0x48) == param_2) && (*(int *)(param_1 + 0x4c) == param_3)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar5 = *(uint *)(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if ((*(int *)(param_1 + 0x70) != 0) && (iVar3 = FUN_000225e0(param_1), iVar3 == -1))
      goto LAB_00023174;
      if (uVar5 != 0 || iVar2 != 0) {
        bVar1 = true;
        do {
          __s = *(void **)(param_1 + 0x24);
          __n = *(uint *)(param_1 + 0x1c);
          if (iVar2 < (int)(uint)(uVar5 < *(uint *)(param_1 + 0x1c))) {
            __n = uVar5;
          }
          if (bVar1) {
            memset(__s,0,__n);
            __s = *(void **)(param_1 + 0x24);
          }
          *(uint *)(param_1 + 0x70) = __n;
          uVar4 = *(uint *)(param_1 + 8);
          *(void **)(param_1 + 0x6c) = __s;
          *(uint *)(param_1 + 8) = uVar4 + __n;
          *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar4,__n);
          iVar3 = FUN_000225e0(param_1);
          bVar1 = false;
          if (iVar3 == -1) goto LAB_00023174;
          bVar7 = uVar5 < __n;
          uVar5 = uVar5 - __n;
          iVar2 = iVar2 - (uint)bVar7;
        } while (uVar5 != 0 || iVar2 != 0);
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(int *)(param_1 + 0x70) != 0) && (iVar2 = FUN_000223f0(param_1,5), iVar2 == -1)) {
LAB_00023174:
        return *(undefined4 *)(param_1 + 100);
      }
      deflateParams(param_1 + 0x6c,param_2,param_3);
    }
    *(int *)(param_1 + 0x48) = param_2;
    *(int *)(param_1 + 0x4c) = param_3;
  }
  return uVar6;
}



/* ===== gzclose_w @ 0002318c size=364 ===== */

undefined4 gzclose_w(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *__s;
  uint uVar4;
  undefined4 extraout_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  uint __n;
  uint uVar7;
  bool bVar8;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 0x10) != 0x79b1)) {
    return 0xfffffffe;
  }
  if (*(int *)((int)param_1 + 0x60) != 0) {
    uVar7 = *(uint *)((int)param_1 + 0x58);
    iVar2 = *(int *)((int)param_1 + 0x5c);
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    if ((*(int *)((int)param_1 + 0x70) != 0) && (iVar3 = FUN_000225e0(), iVar3 == -1)) {
LAB_000232e8:
      uVar6 = *(undefined4 *)((int)param_1 + 100);
      goto LAB_000231b8;
    }
    if (uVar7 != 0 || iVar2 != 0) {
      bVar1 = true;
      do {
        __s = *(void **)((int)param_1 + 0x24);
        __n = *(uint *)((int)param_1 + 0x1c);
        if (iVar2 < (int)(uint)(uVar7 < *(uint *)((int)param_1 + 0x1c))) {
          __n = uVar7;
        }
        if (bVar1) {
          memset(__s,0,__n);
          __s = *(void **)((int)param_1 + 0x24);
        }
        uVar4 = *(uint *)((int)param_1 + 8);
        *(void **)((int)param_1 + 0x6c) = __s;
        *(uint *)((int)param_1 + 0x70) = __n;
        *(uint *)((int)param_1 + 8) = uVar4 + __n;
        *(uint *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + (uint)CARRY4(uVar4,__n);
        iVar3 = FUN_000225e0(param_1);
        bVar1 = false;
        if (iVar3 == -1) goto LAB_000232e8;
        bVar8 = uVar7 < __n;
        uVar7 = uVar7 - __n;
        iVar2 = iVar2 - (uint)bVar8;
      } while (uVar7 != 0 || iVar2 != 0);
    }
  }
  uVar6 = 0;
LAB_000231b8:
  iVar2 = FUN_000223f0(param_1,4);
  if (iVar2 == -1) {
    uVar6 = *(undefined4 *)((int)param_1 + 100);
  }
  uVar5 = 0;
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    if (*(int *)((int)param_1 + 0x2c) == 0) {
      deflateEnd((int)param_1 + 0x6c);
      free(*(void **)((int)param_1 + 0x28));
    }
    free(*(void **)((int)param_1 + 0x24));
    uVar5 = extraout_r3;
  }
  FUN_0002113c(param_1,0,0,uVar5,param_4);
  free(*(void **)((int)param_1 + 0x18));
  iVar2 = close(*(int *)((int)param_1 + 0x14));
  if (iVar2 == -1) {
    uVar6 = 0xffffffff;
  }
  free(param_1);
  return uVar6;
}



/* ===== FUN_000232f8 @ 000232f8 size=168 ===== */

ulonglong FUN_000232f8(uint param_1,uint param_2)

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



/* ===== FUN_000233c0 @ 000233c0 size=228 ===== */

undefined8 FUN_000233c0(int param_1,int param_2,int param_3,int param_4)

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
      uVar2 = FUN_000234a4(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_000234a4();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_000234a4(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_000234a4(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_000234a4 @ 000234a4 size=328 ===== */

undefined8 FUN_000234a4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 000235ec size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::strerror @ 00038000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00038004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00038008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00038010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00038014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00038018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0003801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00038020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00038024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 00038028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0003802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00038030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00038034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00038038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 00038040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00038044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00038048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00038050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00038054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ---- rebuilt functions (fixed language + exact size) ----
// libz.so — rebuilt function bodies (fixed language)

