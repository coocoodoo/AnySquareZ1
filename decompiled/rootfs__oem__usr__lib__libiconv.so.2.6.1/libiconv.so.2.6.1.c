// libiconv.so.2.6.1 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010818 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::qsort @ 0001083c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0005d00c)(__base);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010848 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0005d010)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010854 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0005d014)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0005d018)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 0001086c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0005d01c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010878 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0005d020)();
  return;
}



/* ===== <EXTERNAL>::nl_langinfo @ 00010884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_nl_langinfo_0005d024)(__item);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0005d028)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 0001089c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0005d02c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000108a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0005d030)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000108b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0005d034)();
  return piVar1;
}



/* ===== <EXTERNAL>::strlen @ 000108c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0005d038)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000108cc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0005d03c)();
  return;
}



/* ===== <EXTERNAL>::free @ 000108d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0005d040)(__ptr);
  return;
}



/* ===== entry @ 000108e4 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010930 + 0x108fc == DAT_0001092c + 0x108f4) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010934 + 0x10904 + DAT_00010938);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000109a0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010a14 + 0x109bc;
  if (*(char *)(DAT_00010a10 + 0x109b0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010a18) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010a1c + 0x109dc));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010a20) != 0) {
    __deregister_frame_info(DAT_00010a24 + 0x109fc);
  }
  *(undefined1 *)(DAT_00010a28 + 0x10a0c) = 1;
  return;
}



/* ===== _INIT_0 @ 00010a2c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010a64 + 0x10a3c + DAT_00010a68) != 0) {
    __register_frame_info(DAT_00010a70 + 0x10a5c,DAT_00010a6c + 0x10a58);
  }
  if (((DAT_00010994 + 0x10954) - (DAT_00010990 + 0x1094c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010998 + 0x1095c + DAT_0001099c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011a60 @ 00011a60 size=192 ===== */

undefined4 FUN_00011a60(undefined4 param_1,uint *param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = *param_3 - 0x21;
  uVar3 = *param_3 - 0x30;
  uVar4 = uVar2 & 0xff;
  bVar6 = 0x46 < uVar3;
  bVar5 = uVar3 == 0x47;
  if (0x47 < uVar3) {
    bVar6 = 7 < uVar4;
    bVar5 = uVar4 == 8;
  }
  if (!bVar6 || bVar5) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    if ((param_3[1] - 0x21 & 0xff) < 0x5e) {
      uVar2 = uVar2 * 0x5e + (param_3[1] - 0x21);
      if (uVar2 < 0x582) {
        if (0x33e < uVar2) {
          return 0xffffffff;
        }
        uVar1 = *(ushort *)(DAT_00011b24 + 0x11fa8 + uVar2 * 2);
      }
      else {
        if (0x1ff1 < uVar2) {
          return 0xffffffff;
        }
        uVar1 = *(ushort *)(DAT_00011b20 + 0x11ad0 + (uVar2 - 0x582) * 2);
      }
      if (uVar1 != 0xfffd) {
        *param_2 = (uint)uVar1;
        return 2;
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00011b28 @ 00011b28 size=384 ===== */

undefined4 FUN_00011b28(undefined4 param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3 < 0x460) {
    pbVar3 = &UNK_00012714 + (param_3 >> 4) * 4 + DAT_00011cb0;
  }
  else if (param_3 - 0x2000 < 0x650) {
    pbVar3 = (byte *)(DAT_00011ca8 + (param_3 >> 4) * 4 + 0x11f8c);
  }
  else if (param_3 - 0x3000 < 0x230) {
    pbVar3 = &UNK_00011e0c + DAT_00011cb8 + (param_3 >> 4) * 4;
  }
  else if (param_3 - 0x4e00 < 0x4ef0) {
    pbVar3 = (byte *)(DAT_00011cb4 + 0x11c2c + ((param_3 >> 4) - 0x4e0) * 4);
  }
  else if (param_3 - 0x9e00 < 0x1b0) {
    pbVar3 = &__DT_SYMTAB[0x17].st_info + DAT_00011cc0 + (param_3 >> 4) * 4;
  }
  else {
    if (0xef < param_3 - 0xff00) {
      return 0xffffffff;
    }
    pbVar3 = (byte *)(DAT_00011cbc + (param_3 >> 4) * 4 + 0xeb74);
  }
  if (((int)(uint)*(ushort *)(pbVar3 + 2) >> (param_3 & 0xf) & 1U) == 0) {
    return 0xffffffff;
  }
  uVar2 = (uint)(short)(*(ushort *)(pbVar3 + 2) & ~(ushort)(-1 << (param_3 & 0xf)));
  uVar2 = (uVar2 & 0x5555) + ((int)uVar2 >> 1 & 0x5555U);
  uVar2 = (uVar2 & 0x3333) + (uVar2 >> 2 & 0x3333);
  uVar2 = (uVar2 & 0xf0f) + (uVar2 >> 4 & 0xf0f);
  uVar1 = *(undefined2 *)
           (DAT_00011cac + 0x11ba8 + ((uint)*(ushort *)pbVar3 + (uVar2 >> 8) + (uVar2 & 0xff)) * 2);
  param_2[1] = (char)uVar1;
  *param_2 = (char)((ushort)uVar1 >> 8);
  return 2;
}



/* ===== FUN_00011cc4 @ 00011cc4 size=136 ===== */

undefined4 FUN_00011cc4(undefined4 param_1,uint *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char local_c;
  char local_b;
  
  bVar1 = *param_3;
  if ((bVar1 & 0x80) == 0) {
    *param_2 = (uint)bVar1;
    return 1;
  }
  if ((bVar1 + 0x5f & 0xff) < 0x5e) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    if ((byte)(param_3[1] + 0x5f) < 0x5e) {
      local_c = bVar1 + 0x80;
      local_b = param_3[1] + 0x80;
      uVar2 = FUN_00011a60(param_1,param_2,&local_c,2);
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00011e34 @ 00011e34 size=88 ===== */

int * FUN_00011e34(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = DAT_00011e8c;
  iVar2 = 0;
  piVar3 = (int *)(&UNK_00010e54 + DAT_00011e8c);
  piVar4 = (int *)(&UNK_00010e6c + DAT_00011e8c);
  while( true ) {
    iVar2 = strcmp(param_1,&UNK_00010e74 + iVar2 + iVar1);
    if (iVar2 == 0) {
      return piVar3;
    }
    if (piVar3 == piVar4) break;
    piVar3 = piVar3 + 2;
    iVar2 = *piVar3;
  }
  return (int *)0x0;
}



/* ===== FUN_00011e90 @ 00011e90 size=108 ===== */

int FUN_00011e90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *__s2;
  char *__s1;
  
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*__s1 == 'C') {
    uVar2 = (uint)(__s1[1] == 'S');
  }
  else {
    uVar2 = 0;
  }
  if ((*__s2 == 'C') && (__s2[1] == 'S')) {
    uVar2 = uVar2 - 1;
  }
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
  }
  return iVar1 + uVar2 * 4;
}



/* ===== FUN_00011f6c @ 00011f6c size=8 ===== */

void FUN_00011f6c(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_00011f74 @ 00011f74 size=764 ===== */

uint FUN_00011f74(int param_1,char *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 & 3) == 0) {
    if (param_3 < 0x80) {
      uVar4 = (int)(uint)(byte)(&UNK_00010fe8)[DAT_00012270 + (param_3 >> 3)] >> (param_3 & 7) & 1;
      if (uVar4 != 0) {
        *param_2 = (char)param_3;
        return uVar4;
      }
      *param_2 = '+';
      if (param_3 == 0x2b) {
        if (param_4 < 2) {
          return 0xfffffffe;
        }
        param_2[1] = '-';
        return 2;
      }
      uVar4 = 1;
      iVar7 = 2;
      param_2 = param_2 + 1;
      uVar9 = uVar4;
    }
    else {
      *param_2 = '+';
      if (0xffff < param_3) {
        if (0x10ffff < param_3) {
          return 0xffffffff;
        }
        uVar4 = 1;
        iVar8 = 5;
        iVar7 = 1;
        param_3 = (param_3 & 0x3ff) + 0xdc00 | ((param_3 - 0x10000 >> 10) + 0xd800) * 0x10000;
        param_2 = param_2 + 1;
LAB_00012028:
        uVar9 = iVar8 + iVar7;
        iVar7 = 4;
        goto LAB_000120f4;
      }
      uVar9 = 1;
      iVar7 = 2;
      uVar4 = 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    if (param_3 < 0x80) {
      iVar7 = DAT_00012274 + 0x1204c + (param_3 >> 3);
      if (((int)(uint)*(byte *)(iVar7 + -0xfb4) >> (param_3 & 7) & 1U) != 0) {
        uVar9 = (int)(uint)*(byte *)(iVar7 + -0xfa4) >> (param_3 & 7) & 1;
        uVar6 = (uVar9 - ((int)(uVar4 << 0x1e) >> 0x1f)) + 1;
        if (param_4 < uVar6) {
          return 0xfffffffe;
        }
        pcVar1 = param_2;
        if ((uVar4 & 2) != 0) {
          uVar4 = uVar4 & 0xfffffffc;
          cVar3 = (char)uVar4;
          if (uVar4 < 0x1a) {
            cVar3 = cVar3 + 'A';
          }
          else if (uVar4 < 0x34) {
            cVar3 = cVar3 + 'G';
          }
          else {
            if (0x3d < uVar4) {
LAB_0001226c:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            cVar3 = cVar3 + -4;
          }
          pcVar1 = param_2 + 1;
          *param_2 = cVar3;
        }
        pcVar2 = pcVar1;
        if (uVar9 != 0) {
          pcVar2 = pcVar1 + 1;
          *pcVar1 = '-';
        }
        *pcVar2 = (char)param_3;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return uVar6;
      }
    }
    else if (0xffff < param_3) {
      if (0x10ffff < param_3) {
        return 0xffffffff;
      }
      iVar7 = 0;
      if ((uVar4 & 3) == 3) {
        iVar8 = 6;
      }
      else {
        iVar8 = 5;
      }
      param_3 = (param_3 & 0x3ff) + 0xdc00 | ((param_3 - 0x10000 >> 10) + 0xd800) * 0x10000;
      goto LAB_00012028;
    }
    uVar9 = 0;
    if ((uVar4 & 2) == 0) {
      iVar7 = 2;
    }
    else {
      iVar7 = 3;
    }
  }
  uVar9 = iVar7 + uVar9;
  iVar7 = 2;
LAB_000120f4:
  if (param_4 < uVar9) {
    return 0xfffffffe;
  }
  uVar6 = uVar4 & 3;
  do {
    if (uVar6 == 2) {
      iVar7 = iVar7 + -1;
      uVar6 = param_3 >> (iVar7 * 8 & 0xffU);
      uVar5 = (uVar6 & 0xf) << 2 | 3;
      uVar4 = uVar4 & 0xfc | (uVar6 & 0xff) >> 4;
    }
    else if (uVar6 == 3) {
      iVar7 = iVar7 + -1;
      uVar6 = param_3 >> (iVar7 * 8 & 0xffU);
      uVar4 = uVar4 & 0xfc | (uVar6 & 0xff) >> 6;
      uVar5 = (uVar6 & 0x3f) << 2;
    }
    else if (uVar6 == 1) {
      iVar7 = iVar7 + -1;
      uVar6 = param_3 >> (iVar7 * 8 & 0xffU);
      uVar4 = (uVar6 & 0xff) >> 2;
      uVar5 = (uVar6 & 3) << 4 | 2;
    }
    else {
      uVar4 = (uVar4 & 0x3ff) >> 2;
      uVar5 = 1;
    }
    cVar3 = (char)uVar4;
    if (uVar4 < 0x1a) {
      cVar3 = cVar3 + 'A';
    }
    else if (uVar4 < 0x34) {
      cVar3 = cVar3 + 'G';
    }
    else if (uVar4 < 0x3e) {
      cVar3 = cVar3 + -4;
    }
    else if (uVar4 == 0x3e) {
      cVar3 = '+';
    }
    else {
      if (uVar4 != 0x3f) goto LAB_0001226c;
      cVar3 = '/';
    }
    uVar6 = uVar5 & 3;
    *param_2 = cVar3;
    param_2 = param_2 + 1;
    uVar4 = uVar5;
    if (iVar7 == 0 && uVar6 != 0) {
      *(uint *)(param_1 + 0x28) = uVar5;
      return uVar9;
    }
  } while( true );
}



/* ===== FUN_00012c30 @ 00012c30 size=56 ===== */

void FUN_00012c30(void *param_1,size_t param_2,int *param_3)

{
  memcpy((void *)*param_3,param_1,param_2);
  *param_3 = *param_3 + param_2;
  param_3[1] = param_3[1] - param_2;
  return;
}



/* ===== FUN_00012c68 @ 00012c68 size=2472 ===== */

int FUN_00012c68(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  ushort *local_40;
  int local_34 [4];
  
  if ((*(uint *)(param_1 + 0x24) & 4) == 0) {
LAB_00012c8c:
    if (param_2 == 0x3006) {
      uVar3 = 0x9e44;
      iVar4 = 0;
    }
    else {
      if (param_2 != 0x30f6) {
        if (param_2 - 0x4e00U < 0x5200) {
          iVar4 = (int)*(short *)(DAT_00013614 + 0x12d44 + (param_2 - 0x4e00U) * 2);
          if (-1 < iVar4) {
            uVar3 = *(ushort *)(DAT_00013618 + 0x12d5c + iVar4 * 2);
            goto LAB_00012d5c;
          }
LAB_00013118:
          if (7 < param_2 - 0x218U) goto LAB_00012d00;
          iVar4 = (int)*(short *)(&UNK_00012bf0 + (param_2 - 0x218U) * 2 + DAT_00013638);
        }
        else {
LAB_00012cb8:
          if (param_2 - 0x2018U < 3) {
            iVar4 = (**(code **)(param_1 + 0x1c))(param_1,param_3);
            if (iVar4 != -1) {
              return iVar4;
            }
LAB_00012d00:
            if (param_2 - 0x2b8U < 0x28) {
              iVar4 = (int)*(short *)(&UNK_00012bd8 + (param_2 - 0x2b8U) * 2 + DAT_00013634);
            }
            else if (param_2 - 0x3d0U < 0x30) {
              iVar4 = (int)*(short *)(&UNK_00012844 + (param_2 - 0x3d0U) * 2 + DAT_00013610);
            }
            else {
              if (param_2 == 0x587) {
                iVar7 = 2;
                uVar11 = *(undefined4 *)(param_1 + 0x28);
                puVar9 = (undefined4 *)(DAT_00013640 + 0x13bf8);
                goto LAB_00013008;
              }
              if (param_2 - 0x5f0U < 8) {
                iVar4 = (int)*(short *)(DAT_0001363c + 0x12d1c + (param_2 - 0x5f0U) * 2);
              }
              else if (param_2 - 0x670U < 0x10) {
                iVar4 = (int)*(short *)(DAT_00013644 + 0x12d70 + (param_2 - 0x670U) * 2);
              }
              else {
                if (param_2 == 0xe33) {
                  iVar7 = 2;
                  uVar11 = *(undefined4 *)(param_1 + 0x28);
                  puVar9 = (undefined4 *)(DAT_0001364c + 0x13cd0);
                  goto LAB_00013008;
                }
                if (param_2 - 0xeb0U < 0x30) {
                  iVar4 = (int)*(short *)(DAT_00013648 + 0x12dc4 + (param_2 - 0xeb0U) * 2);
                }
                else if (param_2 - 0xf70U < 0x10) {
                  iVar4 = (int)*(short *)(DAT_00013650 + 0x12e68 + (param_2 - 0xf70U) * 2);
                }
                else if (param_2 - 0x1e00U < 0xa0) {
                  iVar4 = (int)*(short *)(DAT_00013654 + 0x12eac + (param_2 - 0x1e00U) * 2);
                }
                else if (param_2 - 0x1ef0U < 8) {
                  iVar4 = (int)*(short *)(DAT_00013658 + 0x13014 + (param_2 - 0x1ef0U) * 2);
                }
                else if (param_2 - 0x2000U < 0x58) {
                  iVar4 = (int)*(short *)(DAT_0001365c + 0x13048 + (param_2 - 0x2000U) * 2);
                }
                else if (param_2 - 0x20a8U < 8) {
                  iVar4 = (int)*(short *)(DAT_00013660 + 0x13120 + (param_2 - 0x20a8U) * 2);
                }
                else if (param_2 - 0x2100U < 0xd8) {
                  iVar4 = (int)*(short *)(DAT_00013664 + 0x13154 + (param_2 - 0x2100U) * 2);
                }
                else if (param_2 - 0x2210U < 0x60) {
                  iVar4 = (int)*(short *)(DAT_00013668 + (param_2 - 0x2210U) * 2 + 0x13328);
                }
                else if (param_2 - 0x22c0U < 0x30) {
                  iVar4 = (int)*(short *)(DAT_0001366c + (param_2 - 0x22c0U) * 2 + 0x13408);
                }
                else if (param_2 - 0x2400U < 0xf0) {
                  iVar4 = (int)*(short *)(DAT_00013670 + 0x1348c + (param_2 - 0x2400U) * 2);
                }
                else if (param_2 - 0x2500U < 0x40) {
                  iVar4 = (int)*(short *)((int)&DAT_00013690 +
                                         (param_2 - 0x2500U) * 2 + DAT_00013674);
                }
                else {
                  if (param_2 == 0x25e6) {
                    iVar7 = 1;
                    uVar11 = *(undefined4 *)(param_1 + 0x28);
                    puVar9 = (undefined4 *)(DAT_0001367c + 0x153a4);
                    goto LAB_00013008;
                  }
                  if (param_2 == 0x2a0c) {
                    iVar7 = 4;
                    uVar11 = *(undefined4 *)(param_1 + 0x28);
                    puVar9 = (undefined4 *)(DAT_00013684 + 0x15404);
                    goto LAB_00013008;
                  }
                  if (param_2 - 0x2a70U < 8) {
                    iVar4 = (int)*(short *)(DAT_00013678 + 0x13750 + (param_2 - 0x2a70U) * 2);
                  }
                  else {
                    if (param_2 == 0x2e9f) {
                      iVar7 = 1;
                      uVar11 = *(undefined4 *)(param_1 + 0x28);
                      puVar9 = (undefined4 *)(DAT_00013690 + 0x154a4);
                      goto LAB_00013008;
                    }
                    if (param_2 == 0x2ef3) {
                      iVar7 = 1;
                      uVar11 = *(undefined4 *)(param_1 + 0x28);
                      puVar9 = (undefined4 *)(DAT_0001368c + 0x15490);
                      goto LAB_00013008;
                    }
                    if (param_2 - 0x2f00U < 0xd8) {
                      iVar4 = (int)*(short *)(DAT_00013680 + 0x137b8 + (param_2 - 0x2f00U) * 2);
                    }
                    else if (param_2 - 0x3000U < 0xf8) {
                      iVar4 = (int)*(short *)(DAT_00013688 + 0x139a8 + (param_2 - 0x3000U) * 2);
                    }
                    else if (param_2 - 0x3130U < 0x60) {
                      iVar4 = (int)*(short *)(DAT_00013694 + 0x13bfc + (param_2 - 0x3130U) * 2);
                    }
                    else if (param_2 - 0x31f0U < 0x210) {
                      iVar4 = (int)*(short *)(DAT_00013698 + 0x13ce8 + (param_2 - 0x31f0U) * 2);
                    }
                    else if (param_2 - 0xf900U < 0x170) {
                      iVar4 = (int)*(short *)(DAT_0001369c + 0x14130 + (param_2 - 0xf900U) * 2);
                    }
                    else if (param_2 - 0xfb00U < 0x50) {
                      iVar4 = (int)*(short *)(&UNK_00014438 + (param_2 - 0xfb00U) * 2 + DAT_000136a0
                                             );
                    }
                    else if (param_2 - 0xfe48U < 0x28) {
                      iVar4 = (int)*(short *)(&UNK_00014504 + (param_2 - 0xfe48U) * 2 + DAT_000136a4
                                             );
                    }
                    else if (param_2 - 0xff00U < 0xf0) {
                      iVar4 = (int)*(short *)(&UNK_0001457c + (param_2 - 0xff00U) * 2 + DAT_000136a8
                                             );
                    }
                    else if (param_2 - 0x1d400U < 0x400) {
                      iVar4 = (int)*(short *)(&UNK_0001278c +
                                             (param_2 - 0x1d400U) * 2 + DAT_000136ac);
                    }
                    else {
                      if (0x21f < param_2 - 0x2f800U) {
                        return -1;
                      }
                      iVar4 = (int)*(short *)(DAT_000136b0 + 0x12fb4 + (param_2 - 0x2f800U) * 2);
                    }
                  }
                }
              }
            }
          }
          else {
            if (0x157 < param_2 - 0xa0U) goto LAB_00013118;
            iVar4 = (int)*(short *)(&UNK_000127e8 + (param_2 - 0xa0U) * 2 + DAT_00013628);
          }
        }
        if (iVar4 < 0) {
          return -1;
        }
        uVar11 = *(undefined4 *)(param_1 + 0x28);
        iVar7 = *(int *)(DAT_0001362c + 0x12ffc + iVar4 * 4);
        puVar9 = (undefined4 *)(DAT_0001362c + 0x12ffc + iVar4 * 4);
        if (iVar7 != 0) {
LAB_00013008:
          if (param_4 != 0) {
            iVar10 = 0;
            iVar4 = param_3;
            do {
              puVar9 = puVar9 + 1;
              iVar10 = iVar10 + 1;
              uVar1 = (**(code **)(param_1 + 0x1c))(param_1,iVar4,*puVar9,param_4);
              if (uVar1 == 0xffffffff) {
                uVar1 = FUN_00012c68(param_1,*puVar9,iVar4,param_4);
              }
              if ((int)uVar1 < 0) {
                *(undefined4 *)(param_1 + 0x28) = uVar11;
                if (uVar1 == 0xffffffff) {
                  return -1;
                }
                return -2;
              }
              if (param_4 < uVar1) goto LAB_0001360c;
              iVar4 = iVar4 + uVar1;
              param_4 = param_4 - uVar1;
              if (iVar10 == iVar7) {
                return iVar4 - param_3;
              }
            } while (param_4 != 0);
          }
          *(undefined4 *)(param_1 + 0x28) = uVar11;
          return -2;
        }
        goto LAB_00013170;
      }
      uVar3 = 0x1e2a;
      iVar4 = 1;
    }
LAB_00012d5c:
    uVar11 = *(undefined4 *)(param_1 + 0x28);
    local_40 = (ushort *)(DAT_0001361c + 0x12d6c + iVar4 * 2);
    while (param_4 != 0) {
      uVar1 = (**(code **)(param_1 + 0x1c))(param_1,param_3,(uVar3 & 0x7fff) + 0x3000,param_4);
      if (-1 < (int)uVar1) {
        if (param_4 < uVar1) goto LAB_0001360c;
        uVar8 = param_4 - uVar1;
        iVar7 = param_3 + uVar1;
        if (uVar8 == 0) break;
        uVar1 = (**(code **)(param_1 + 0x1c))(param_1,iVar7,0x303e,uVar8);
        if (-1 < (int)uVar1) {
          if (uVar1 <= uVar8) {
            iVar7 = iVar7 + uVar1;
LAB_00012ddc:
            return iVar7 - param_3;
          }
          goto LAB_0001360c;
        }
      }
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      if (uVar1 != 0xffffffff) {
        return -2;
      }
      if ((uVar3 & 0x8000) != 0) goto LAB_00012cb8;
      local_40 = local_40 + 1;
      uVar3 = *local_40;
    }
    *(undefined4 *)(param_1 + 0x28) = uVar11;
    iVar4 = -2;
  }
  else {
    if (param_2 - 0x3131U < 0x33) {
      uVar3 = *(ushort *)(&UNK_0001279c + (param_2 - 0x3131U) * 2 + DAT_00013630);
      uVar1 = (uint)uVar3;
    }
    else {
      uVar1 = param_2 - 0xac00;
      if (0x2ba3 < uVar1) goto LAB_00012c8c;
      iVar4 = DAT_00013620 + 0x12e3c;
      uVar3 = (ushort)*(byte *)(iVar4 + uVar1 % 0x1c + -0x870) |
              ((ushort)*(byte *)(iVar4 + uVar1 / 0x1c +
                                         (uint)((ulonglong)
                                                ((longlong)(int)(uVar1 / 0x1c) * 0x30c30c31) >> 0x22
                                               ) * -0x15 + -0x888) |
              (*(byte *)(iVar4 + uVar1 / 0x24c + -0x89c) | 0x20) << 5) << 5;
      uVar1 = (uint)(short)uVar3;
    }
    uVar8 = (uint)(uVar3 >> 8) << 8;
    iVar4 = DAT_00013624 + 0x12e94;
    uVar2 = (uint)*(byte *)(iVar4 + ((uVar8 & 0x7fff) >> 10) + -0x854);
    uVar8 = (uint)*(byte *)(iVar4 + ((uVar1 & 0xff | uVar8 & 0x3ff) >> 5) + -0x834);
    uVar1 = (uint)*(byte *)(iVar4 + (uVar1 & 0x1f) + -0x814);
    if (-1 < (short)uVar3) {
LAB_0001360c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((uVar2 == 0xfd || uVar8 == 0xfd) || (uVar1 == 0xfd)) goto LAB_00012c8c;
    if (uVar2 == 0xff) {
      piVar6 = local_34;
    }
    else {
      piVar6 = local_34 + 1;
      local_34[0] = uVar2 + 0x3130;
    }
    piVar5 = piVar6;
    if (uVar8 != 0xff) {
      piVar5 = piVar6 + 1;
      *piVar6 = uVar8 + 0x3130;
    }
    piVar6 = piVar5;
    if (uVar1 != 0xff) {
      piVar6 = piVar5 + 1;
      *piVar5 = uVar1 + 0x3130;
    }
    iVar4 = (int)piVar6 - (int)local_34;
    if (iVar4 == -4) goto LAB_00012c8c;
    uVar11 = *(undefined4 *)(param_1 + 0x28);
    if (0 < iVar4) {
      if (param_4 != 0) {
        iVar10 = 0;
        iVar7 = param_3;
        uVar1 = param_4;
        piVar6 = local_34;
        do {
          uVar8 = (**(code **)(param_1 + 0x1c))(param_1,iVar7,*piVar6,uVar1);
          if ((int)uVar8 < 0) {
            *(undefined4 *)(param_1 + 0x28) = uVar11;
            if (uVar8 != 0xffffffff) {
              return -2;
            }
            goto LAB_00012c8c;
          }
          if (uVar1 < uVar8) goto LAB_0001360c;
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + uVar8;
          uVar1 = uVar1 - uVar8;
          if (iVar4 >> 2 <= iVar10) goto LAB_00012ddc;
          piVar6 = piVar6 + 1;
        } while (uVar1 != 0);
      }
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      return -2;
    }
LAB_00013170:
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== FUN_000136b4 @ 000136b4 size=608 ===== */

undefined4 FUN_000136b4(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    iVar2 = (**(code **)(param_1 + 0x10))(param_1,&local_30);
    uVar8 = 0;
    if (iVar2 != 0) {
      iVar2 = *param_2;
      uVar3 = *param_3;
      uVar6 = (**(code **)(param_1 + 0x1c))(param_1,iVar2,local_30,uVar3);
      if (uVar6 == 0xffffffff) {
        if (local_30 >> 7 != 0x1c00) {
          if ((*(int *)(param_1 + 0x2c) != 0) &&
             (uVar6 = FUN_00012c68(param_1,local_30,iVar2,uVar3), uVar6 != 0xffffffff)) {
LAB_000138a8:
            uVar8 = 1;
            goto LAB_00013780;
          }
          if (*(int *)(param_1 + 0x30) == 0) {
            if (*(code **)(param_1 + 0x38) == (code *)0x0) {
              uVar6 = (**(code **)(param_1 + 0x1c))(param_1,iVar2,0xfffd,uVar3);
              if (uVar6 == 0xffffffff) {
                *(undefined4 *)(param_1 + 0x14) = uVar7;
                piVar4 = __errno_location();
                *piVar4 = 0x54;
                return 0xffffffff;
              }
              goto LAB_000138a8;
            }
            local_2c = iVar2;
            local_28 = uVar3;
            local_24 = *(int *)(param_1 + 0x30);
            (**(code **)(param_1 + 0x38))
                      (local_30,DAT_00013914 + 0x13830,&local_2c,*(undefined4 *)(param_1 + 0x44));
            iVar1 = local_24;
            uVar3 = local_28;
            iVar2 = local_2c;
            if (local_24 != 0) {
              *(undefined4 *)(param_1 + 0x14) = uVar7;
              piVar4 = __errno_location();
              *piVar4 = iVar1;
              return 0xffffffff;
            }
          }
          pcVar5 = *(code **)(param_1 + 0x48);
          if (pcVar5 == (code *)0x0) {
            uVar8 = 1;
            goto LAB_000137b4;
          }
          uVar6 = 0;
          uVar8 = 1;
          goto LAB_00013798;
        }
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
LAB_00013780:
        if ((int)uVar6 < 0) {
          *(undefined4 *)(param_1 + 0x14) = uVar7;
          piVar4 = __errno_location();
          *piVar4 = 7;
          return 0xffffffff;
        }
        pcVar5 = *(code **)(param_1 + 0x48);
        if (pcVar5 != (code *)0x0) {
LAB_00013798:
          (*pcVar5)(local_30,*(undefined4 *)(param_1 + 0x50));
        }
        if (uVar3 < uVar6) goto LAB_00013910;
        iVar2 = iVar2 + uVar6;
        uVar3 = uVar3 - uVar6;
      }
LAB_000137b4:
      *param_2 = iVar2;
      *param_3 = uVar3;
    }
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    iVar2 = *param_2;
    uVar6 = *param_3;
    uVar3 = (**(code **)(param_1 + 0x20))(param_1,iVar2,uVar6);
    if ((int)uVar3 < 0) {
      piVar4 = __errno_location();
      *piVar4 = 7;
      return 0xffffffff;
    }
    if (uVar6 < uVar3) {
LAB_00013910:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_2 = iVar2 + uVar3;
    *param_3 = uVar6 - uVar3;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return uVar8;
}



/* ===== FUN_00013918 @ 00013918 size=928 ===== */

int FUN_00013918(uint param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int local_60;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar10 = *param_3;
  uVar13 = *param_4;
  iVar12 = *param_2;
  uVar11 = *param_5;
  if (uVar10 == 0) {
    local_60 = 0;
  }
  else {
    iVar7 = DAT_00013cb8 + 0x1395c;
    iVar6 = DAT_00013cbc + 0x13964;
    local_60 = 0;
    do {
      uVar14 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = (**(code **)(param_1 + 0xc))(param_1,&local_3c,iVar12,uVar10);
      if ((int)uVar3 < 0) {
        if ((uVar3 & 1) == 0) {
          if (uVar3 != 0xfffffffe) {
            uVar3 = -uVar3 - 2 >> 1;
            goto joined_r0x00013b48;
          }
          piVar4 = __errno_location();
          *piVar4 = 0x16;
        }
        else {
          uVar3 = ~uVar3 >> 1;
          if (*(int *)(param_1 + 0x30) != 0) {
            if (*(uint *)(param_1 + 8) < 0x13) {
              uVar2 = 1 << (*(uint *)(param_1 + 8) & 0xff);
              if ((uVar2 & 0x1871c) == 0) {
                if ((uVar2 & 0x638e0) == 0) goto LAB_00013c40;
                uVar3 = uVar3 + 4;
              }
              else {
                uVar3 = uVar3 + 2;
              }
            }
            else {
LAB_00013c40:
              uVar3 = uVar3 + 1;
            }
            goto joined_r0x00013b48;
          }
          if (*(code **)(param_1 + 0x34) == (code *)0x0) {
            piVar4 = __errno_location();
            iVar12 = iVar12 + uVar3;
            uVar10 = uVar10 - uVar3;
            *piVar4 = 0x54;
          }
          else {
            if (*(uint *)(param_1 + 8) < 0x13) {
              uVar2 = 1 << (*(uint *)(param_1 + 8) & 0xff);
              if ((uVar2 & 0x638e0) == 0) {
                if ((uVar2 & 0x1871c) == 0) {
                  iVar9 = 1;
                }
                else {
                  iVar9 = 2;
                }
              }
              else {
                iVar9 = 4;
              }
            }
            else {
              iVar9 = 1;
            }
            local_2c = 0;
            local_38 = param_1;
            local_34 = uVar13;
            local_30 = uVar11;
            (**(code **)(param_1 + 0x34))
                      (iVar12 + uVar3,iVar9,iVar6,&local_38,*(undefined4 *)(param_1 + 0x44));
            iVar1 = local_2c;
            if (local_2c == 0) {
              uVar3 = uVar3 + iVar9;
              local_60 = local_60 + 1;
              local_2c = 0;
              uVar13 = local_34;
              uVar11 = local_30;
              goto joined_r0x00013b48;
            }
            piVar4 = __errno_location();
            uVar10 = uVar10 - uVar3;
            *piVar4 = iVar1;
            iVar12 = iVar12 + uVar3;
          }
        }
LAB_00013bd4:
        local_60 = -1;
        break;
      }
      if (uVar11 == 0) {
LAB_00013bc4:
        *(undefined4 *)(param_1 + 0x14) = uVar14;
        piVar4 = __errno_location();
        *piVar4 = 7;
        goto LAB_00013bd4;
      }
      uVar2 = (**(code **)(param_1 + 0x1c))(param_1,uVar13,local_3c,uVar11);
      if (uVar2 == 0xffffffff) {
        if (local_3c >> 7 == 0x1c00) goto joined_r0x00013b48;
        local_60 = local_60 + 1;
        if ((*(int *)(param_1 + 0x2c) != 0) &&
           (uVar2 = FUN_00012c68(param_1,local_3c,uVar13,uVar11), uVar2 != 0xffffffff))
        goto joined_r0x00013bc0;
        if (*(uint *)(param_1 + 0x30) == 0) {
          if (*(code **)(param_1 + 0x38) == (code *)0x0) {
            uVar2 = (**(code **)(param_1 + 0x1c))(param_1,uVar13,0xfffd,uVar11);
            if (uVar2 == 0xffffffff) {
              *(undefined4 *)(param_1 + 0x14) = uVar14;
              piVar4 = __errno_location();
              *piVar4 = 0x54;
              goto LAB_00013bd4;
            }
            goto joined_r0x00013bc0;
          }
          local_38 = uVar13;
          local_34 = uVar11;
          local_30 = *(uint *)(param_1 + 0x30);
          (**(code **)(param_1 + 0x38))(local_3c,iVar7,&local_38,*(undefined4 *)(param_1 + 0x44));
          uVar2 = local_30;
          uVar11 = local_34;
          uVar13 = local_38;
          if (local_30 != 0) {
            *(undefined4 *)(param_1 + 0x14) = uVar14;
            puVar5 = (uint *)__errno_location();
            *puVar5 = uVar2;
            return -1;
          }
        }
        pcVar8 = *(code **)(param_1 + 0x48);
        if (pcVar8 == (code *)0x0) goto joined_r0x00013b48;
        uVar2 = 0;
LAB_00013a30:
        (*pcVar8)(local_3c,*(undefined4 *)(param_1 + 0x50));
      }
      else {
joined_r0x00013bc0:
        if ((int)uVar2 < 0) goto LAB_00013bc4;
        pcVar8 = *(code **)(param_1 + 0x48);
        if (pcVar8 != (code *)0x0) goto LAB_00013a30;
      }
      if (uVar11 < uVar2) goto LAB_00013b4c;
      uVar13 = uVar13 + uVar2;
      uVar11 = uVar11 - uVar2;
joined_r0x00013b48:
      if (uVar10 < uVar3) {
LAB_00013b4c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = uVar10 - uVar3;
      iVar12 = iVar12 + uVar3;
    } while (uVar10 != 0);
  }
  *param_2 = iVar12;
  *param_3 = uVar10;
  *param_4 = uVar13;
  *param_5 = uVar11;
  return local_60;
}



/* ===== FUN_00013e88 @ 00013e88 size=860 ===== */

undefined4 FUN_00013e88(undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  byte *pbVar7;
  char local_14;
  char local_13;
  
  if ((param_3 != 0x30fb && param_3 != 0x2015) &&
     (iVar2 = FUN_00011b28(param_1,&local_14,param_3,2), iVar2 != -1)) {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    *param_2 = local_14 + -0x80;
    param_2[1] = local_13 + -0x80;
    return 2;
  }
  if (param_3 - 0x200 < 0xe0) {
    pbVar7 = (byte *)(DAT_000141e4 + (param_3 >> 4) * 4 + 0x13c84);
LAB_00013f14:
    uVar4 = *(ushort *)(pbVar7 + 2);
    if (((int)(uint)uVar4 >> (param_3 & 0xf) & 1U) != 0) {
LAB_00013f28:
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      uVar5 = (uint)(short)(uVar4 & ~(ushort)(-1 << (param_3 & 0xf)));
      uVar5 = (uVar5 & 0x5555) + ((int)uVar5 >> 1 & 0x5555U);
      uVar5 = (uVar5 & 0x3333) + (uVar5 >> 2 & 0x3333);
      uVar5 = (uVar5 & 0xf0f) + (uVar5 >> 4 & 0xf0f);
      uVar1 = *(undefined2 *)
               (DAT_000141e8 + 0x13f64 +
               ((uint)*(ushort *)pbVar7 + (uVar5 & 0xff) + (uVar5 >> 8)) * 2);
      param_2[1] = (char)uVar1;
      *param_2 = (char)((ushort)uVar1 >> 8);
      return 2;
    }
  }
  else {
    if (0x2bf < param_3 - 0x2000) {
      if (param_3 - 0x2500 < 0x110) {
        pbVar7 = (byte *)(DAT_000141ec + (param_3 >> 4) * 4 + 0x13568);
      }
      else if (param_3 - 0x3000 < 0x100) {
        pbVar7 = (byte *)(DAT_00014200 + (param_3 >> 4) * 4 + 0x13414);
      }
      else if (param_3 - 0x3200 < 0x1e0) {
        pbVar7 = (byte *)(DAT_000141f8 + (param_3 >> 4) * 4 + 0x1338c);
      }
      else if (param_3 - 0x4e00 < 0x51b0) {
        pbVar7 = (byte *)(DAT_00014208 + 0x1413c + ((param_3 >> 4) - 0x4e0) * 4);
      }
      else if (param_3 - 0xf900 < 0x130) {
        pbVar7 = &__DT_SYMTAB[0x10].st_info + DAT_0001420c + (param_3 >> 4) * 4;
      }
      else {
        if (0x1ef < param_3 - 0xfe00) goto LAB_00014008;
        pbVar7 = (byte *)((int)&__DT_SYMTAB[4].st_name + DAT_00014210 + (param_3 >> 4) * 4);
      }
      goto LAB_00013f14;
    }
    iVar2 = DAT_000141f0 + (param_3 >> 4) * 4;
    pbVar7 = (byte *)((int)&DAT_00013618 + iVar2);
    uVar4 = *(ushort *)((int)&DAT_00013618 + iVar2 + 2);
    if (((int)(uint)uVar4 >> (param_3 & 0xf) & 1U) != 0) goto LAB_00013f28;
LAB_00014008:
    if (param_3 - 0x2170 < 10) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      param_2[1] = (char)param_3 + '1';
      *param_2 = -0x5e;
      return 2;
    }
  }
  if (param_3 - 0x140 < 0x10) {
    uVar5 = (uint)*(ushort *)(DAT_000141f4 + (param_3 - 0x140) * 2 + 0x140f4);
  }
  else if (param_3 - 0x250 < 0x18) {
    uVar5 = (uint)*(ushort *)(DAT_00014204 + (param_3 - 0x250) * 2 + 0x141c8);
  }
  else {
    if (0x17 < param_3 - 0xfe30) {
      if (param_3 == 0xb7) {
        if (param_4 < 2) {
          return 0xfffffffe;
        }
        *param_2 = -0x5f;
        param_2[1] = -0x5c;
        return 2;
      }
      if (param_3 != 0x2014) {
        return 0xffffffff;
      }
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      cVar3 = -0x5f;
      cVar6 = -0x56;
      goto LAB_00014070;
    }
    uVar5 = (uint)*(ushort *)(DAT_000141fc + (param_3 - 0xfe30) * 2 + 0x141cc);
  }
  if (uVar5 == 0) {
    return 0xffffffff;
  }
  cVar3 = (char)(uVar5 >> 8);
  cVar6 = (char)uVar5;
  if (param_4 < 2) {
    return 0xfffffffe;
  }
LAB_00014070:
  *param_2 = cVar3;
  param_2[1] = cVar6;
  return 2;
}



/* ===== FUN_00014bf4 @ 00014bf4 size=664 ===== */

int FUN_00014bf4(undefined4 param_1,uint *param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char local_1c;
  char local_1b;
  
  uVar4 = (uint)*param_3;
  uVar5 = uVar4 + 0x7f & 0xff;
  if (0x7d < uVar5) {
    return -1;
  }
  if (param_4 < 2) {
    return -2;
  }
  if ((uVar4 + 0x5f & 0xff) < 0x57) {
    uVar3 = (uint)param_3[1];
    if (uVar4 != 0xa1) {
      if ((uVar3 + 0x5f & 0xff) < 0x5e) goto LAB_00014c98;
      goto LAB_00014c30;
    }
    if (uVar3 == 0xa4) {
      *param_2 = 0xb7;
      return 2;
    }
    if (uVar3 == 0xaa) {
      *param_2 = 0x2014;
      return 2;
    }
    if ((uVar3 + 0x5f & 0xff) < 0x5e) {
LAB_00014c98:
      local_1c = *param_3 + 0x80;
      local_1b = param_3[1] + 0x80;
      iVar2 = FUN_00011a60(param_1,param_2,&local_1c,2);
      if (iVar2 != -1) {
        return iVar2;
      }
      if ((uVar4 + 0x5a & 0xfd) == 0) {
        iVar2 = (uVar4 - 0x81) * 0xbe + (uVar3 - 0x41);
        if (iVar2 < 0x1cf2) {
          if (iVar2 - 0x1c15U < 0x16) {
            uVar1 = *(ushort *)(DAT_00014e8c + 0x15808 + (iVar2 - 0x1c15U) * 2);
LAB_00014d0c:
            uVar3 = (uint)uVar1;
            if (uVar3 != 0xfffd) goto LAB_00014dd0;
          }
        }
        else if (iVar2 - 0x1d6cU < 6) {
          uVar1 = *(ushort *)(DAT_00014e98 + 0x159a4 + (iVar2 - 0x1d6cU) * 2);
          goto LAB_00014d0c;
        }
      }
      if (0x1f < uVar5) goto LAB_00014c38;
      uVar4 = (uint)*param_3;
      if (0x1f < (uVar4 + 0x7f & 0xff)) {
        return -1;
      }
      goto LAB_00014d78;
    }
LAB_00014c38:
    if (0x56 < (uVar4 + 0x58 & 0xff)) {
      if (uVar4 != 0xa2) {
        return -1;
      }
      if (9 < (param_3[1] + 0x5f & 0xff)) {
        return -1;
      }
      *param_2 = param_3[1] + 0x20cf;
      return 2;
    }
    if (0x56 < (*param_3 + 0x58 & 0xff)) {
      return -1;
    }
    uVar5 = (uint)param_3[1];
    uVar4 = uVar5 ^ 0x80;
    bVar7 = 0x1f < uVar4;
    bVar6 = uVar4 == 0x20;
    if (0x20 < uVar4) {
      bVar7 = 0x3d < uVar5 - 0x40;
      bVar6 = uVar5 - 0x40 == 0x3e;
    }
    if (bVar7 && !bVar6) {
      return -1;
    }
    if ((param_3[1] & 0x80) == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = 0x41;
    }
    iVar2 = (*param_3 - 0x81) * 0x60 + (uVar5 - iVar2);
    if (0x2eef < iVar2) {
      return -1;
    }
    uVar1 = *(ushort *)(DAT_00014e94 + 0x14e48 + (iVar2 + -0xea0) * 2);
  }
  else {
LAB_00014c30:
    if (0x1f < uVar5) goto LAB_00014c38;
LAB_00014d78:
    uVar3 = (uint)param_3[1];
    uVar5 = uVar3 ^ 0x80;
    bVar7 = 0x7d < uVar5;
    bVar6 = uVar5 == 0x7e;
    if (0x7e < uVar5) {
      bVar7 = 0x3d < uVar3 - 0x40;
      bVar6 = uVar3 - 0x40 == 0x3e;
    }
    if (bVar7 && !bVar6) {
      return -1;
    }
    if ((param_3[1] & 0x80) == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = 0x41;
    }
    uVar4 = (uVar4 - 0x81) * 0xbe + (uVar3 - iVar2);
    if (0x17bf < uVar4) {
      return -1;
    }
    uVar1 = *(ushort *)(DAT_00014e90 + 0x14dc8 + uVar4 * 2);
  }
  uVar3 = (uint)uVar1;
  if (uVar3 == 0xfffd) {
    return -1;
  }
LAB_00014dd0:
  *param_2 = uVar3;
  return 2;
}



/* ===== FUN_00014e9c @ 00014e9c size=320 ===== */

int FUN_00014e9c(undefined4 param_1,uint *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar4 = (uint)*param_3;
  if ((*param_3 & 0x80) == 0) {
    *param_2 = uVar4;
    return 1;
  }
  if ((uVar4 + 0x7f & 0xff) < 0x7e) {
    if (param_4 < 2) {
      return -2;
    }
    iVar1 = FUN_00014bf4();
    if (iVar1 != -1) {
      return iVar1;
    }
    uVar4 = (uint)*param_3;
  }
  if (uVar4 == 0x80) {
    *param_2 = 0x20ac;
    return 1;
  }
  if ((uVar4 + 0x5f & 0xff) < 2) {
    if (param_4 < 2) {
      return -2;
    }
    uVar3 = (uint)param_3[1];
    uVar2 = uVar3 ^ 0x80;
    bVar6 = 0x1f < uVar2;
    bVar5 = uVar2 == 0x20;
    if (0x20 < uVar2) {
      bVar6 = 0x3d < uVar3 - 0x40;
      bVar5 = uVar3 - 0x40 == 0x3e;
    }
    if (!bVar6 || bVar5) {
      if ((param_3[1] & 0x80) == 0) {
        iVar1 = 0x40;
      }
      else {
        iVar1 = 0x41;
      }
      *param_2 = (uVar3 - iVar1) + (uVar4 - 0xa1) * 0x60 + 0xe4c6;
      return 2;
    }
  }
  else {
    uVar2 = uVar4 + 0x56 & 0xff;
    uVar3 = uVar4 + 8 & 0xff;
    bVar6 = 5 < uVar3;
    bVar5 = uVar3 == 6;
    if (6 < uVar3) {
      bVar6 = 4 < uVar2;
      bVar5 = uVar2 == 5;
    }
    if (!bVar6 || bVar5) {
      if (param_4 < 2) {
        return -2;
      }
      if ((param_3[1] + 0x5f & 0xff) < 0x5e) {
        if (uVar4 < 0xf8) {
          iVar1 = 0xaa;
        }
        else {
          iVar1 = 0xf2;
        }
        *param_2 = (uVar4 - iVar1) * 0x5e + (uint)param_3[1] + 0xdf5f;
        return 2;
      }
    }
  }
  return -1;
}



/* ===== FUN_00014fdc @ 00014fdc size=1856 ===== */

int FUN_00014fdc(undefined4 param_1,uint *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  if ((*param_3 & 0x80) == 0) {
    *param_2 = (uint)*param_3;
    return 1;
  }
  iVar2 = FUN_00014bf4();
  if (iVar2 != -1) {
    return iVar2;
  }
  uVar6 = (uint)*param_3;
  uVar3 = uVar6 + 0x5c & 0xff;
  bVar11 = 0xa1 < uVar6;
  if (uVar6 != 0xa2) {
    bVar11 = 4 < uVar3;
  }
  if ((!bVar11 || (uVar6 == 0xa2 || uVar3 == 5)) || (uVar6 == 0xfe || uVar6 == 0xd7)) {
    if (param_4 < 2) {
      return -2;
    }
    uVar3 = (uint)param_3[1];
    uVar4 = uVar3 ^ 0x80;
    bVar12 = 0x7d < uVar4;
    bVar11 = uVar4 == 0x7e;
    if (0x7e < uVar4) {
      bVar12 = 0x3d < uVar3 - 0x40;
      bVar11 = uVar3 - 0x40 == 0x3e;
    }
    if (bVar12 && !bVar11) goto LAB_00015414;
    if ((param_3[1] & 0x80) == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = 0x41;
    }
    uVar4 = (uVar6 - 0x81) * 0xbe + (uVar3 - iVar2);
    if (uVar6 == 0xa7) {
      if (uVar4 - 0x1cb5 < 0xf) {
        uVar4 = uVar4 + 0xcaeb;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1ce5 < 0xd) {
        uVar4 = uVar4 + 0xcaca;
        goto LAB_0001510c;
      }
    }
    else if (uVar6 < 0xa8) {
      if (uVar6 == 0xa4) {
        if (uVar4 - 0x1aad < 0xb) {
          uVar4 = uVar4 + 0xccc5;
          goto LAB_0001510c;
        }
      }
      else if (uVar6 < 0xa5) {
        if (uVar6 == 0xa2) {
          if (uVar4 - 0x18e8 < 6) {
            uVar4 = uVar4 + 0xce7e;
            goto LAB_0001510c;
          }
          if (uVar4 == 0x1920) {
            uVar4 = 0x20ac;
            goto LAB_0001510c;
          }
          if (uVar4 == 0x1921) {
            uVar4 = 0xe76d;
            goto LAB_0001510c;
          }
          if (uVar4 - 0x192c < 2) {
            uVar4 = uVar4 + 0xce42;
            goto LAB_0001510c;
          }
          if (uVar4 - 0x193a < 2) {
            uVar4 = uVar4 + 0xce36;
            goto LAB_0001510c;
          }
        }
        else {
LAB_00015414:
          if ((uVar6 + 0x7f & 0xff) < 4) goto joined_r0x00015430;
LAB_000151cc:
          uVar4 = uVar6 + 8 & 0xff;
          uVar8 = uVar6 + 0x56 & 0xff;
          bVar12 = 4 < uVar8;
          bVar11 = uVar8 == 5;
          if (5 < uVar8) {
            bVar12 = 5 < uVar4;
            bVar11 = uVar4 == 6;
          }
          if (!bVar12 || bVar11) goto LAB_000151e8;
        }
      }
      else if (uVar6 == 0xa5) {
        if (uVar4 - 0x1b6e < 8) {
          uVar4 = uVar4 + 0xcc0f;
          goto LAB_0001510c;
        }
      }
      else {
        if (uVar6 != 0xa6) goto LAB_00015414;
        if (uVar4 - 0x1bee < 8) {
          uVar4 = uVar4 + 0xcb97;
          goto LAB_0001510c;
        }
        if (uVar4 - 0x1c0f < 2) {
          uVar4 = (int)&UNK_00011a21 - uVar4;
          goto LAB_0001510c;
        }
        if (uVar4 - 0x1c0e < 9) {
          uVar4 = uVar4 + 0xe202;
          goto LAB_0001510c;
        }
        if (uVar4 - 0x1c21 < 2) {
          uVar4 = uVar4 + 0xe1f6;
          goto LAB_0001510c;
        }
        if (uVar4 == 0x1c28) {
          uVar4 = 0xfe19;
          goto LAB_0001510c;
        }
        if (uVar4 - 0x1c2b < 9) {
          uVar4 = uVar4 + 0xcb6c;
          goto LAB_0001510c;
        }
      }
    }
    else if (uVar6 == 0xa9) {
      if (uVar4 == 0x1dc8) {
        uVar4 = 0xe7e2;
        goto LAB_0001510c;
      }
      if (uVar4 == 0x1dcb) {
        uVar4 = 0xe7e3;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1dcd < 3) {
        uVar4 = uVar4 + 0xca17;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1df8 < 0xd) {
        uVar4 = (uint)*(ushort *)(DAT_0001572c + 0x16104 + (uVar4 - 0x1df8) * 2);
        goto LAB_000151c0;
      }
      if (uVar4 - 0x1e06 < 0xd) {
        uVar4 = uVar4 + 0xc9ee;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1e5f < 0xf) {
        uVar4 = uVar4 + 0xc9a2;
        goto LAB_0001510c;
      }
    }
    else if (uVar6 < 0xa9) {
      if (uVar4 - 0x1d47 < 0xb) {
        uVar4 = uVar4 + 0xca75;
        goto LAB_0001510c;
      }
      if (uVar4 == 0x1d6d) {
        uVar4 = 0x1e3f;
        goto LAB_0001510c;
      }
      if (uVar4 == 0x1d70) {
        uVar4 = 0x1f9;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1d72 < 4) {
        uVar4 = uVar4 + 0xca57;
        goto LAB_0001510c;
      }
      if (uVar4 - 0x1d9b < 0x15) {
        uVar4 = uVar4 + 0xca32;
        goto LAB_0001510c;
      }
    }
    else {
      if (uVar6 != 0xd7) {
        if (uVar6 != 0xfe) goto LAB_00015414;
        if (0x5d25 < uVar4) goto LAB_000151e8;
        uVar4 = *(uint *)(DAT_0001571c + (uVar4 - 0x5cc6) * 4 + 0x15d10);
LAB_000151c0:
        if (uVar4 != 0xfffd) {
LAB_0001510c:
          *param_2 = uVar4;
          return 2;
        }
        goto LAB_000151cc;
      }
      if (uVar4 - 0x408d < 5) {
        uVar4 = uVar4 + 0xa783;
        goto LAB_0001510c;
      }
    }
    if (6 < (uVar6 + 0x5f & 0xff)) {
      if (0x53 < (uVar6 + 0x70 & 0xff)) {
        return -1;
      }
      goto LAB_00015208;
    }
LAB_00015444:
    if (uVar3 != 0x7f && uVar3 - 0x40 < 0x62) {
      if ((uVar3 & 0x80) == 0) {
        iVar2 = 0x40;
      }
      else {
        iVar2 = 0x41;
      }
      *param_2 = ((uVar6 - 0xa1) * 0x60 + uVar3 + 0xe4c6) - iVar2;
      return 2;
    }
  }
  else {
    if ((uVar6 + 0x7f & 0xff) < 4) {
      if (param_4 < 2) {
        return -2;
      }
      uVar3 = (uint)param_3[1];
joined_r0x00015430:
      if (9 < (uVar3 - 0x30 & 0xff)) {
        if (6 < (uVar6 + 0x5f & 0xff)) goto LAB_00015614;
        goto LAB_00015444;
      }
      if (param_4 == 2) {
        return -2;
      }
      if ((param_3[2] + 0x7f & 0xff) < 0x7e) {
        if (param_4 == 3) {
          return -2;
        }
        if (((param_3[3] - 0x30 & 0xff) < 10) &&
           (uVar4 = (((uVar6 - 0x81) * 10 + (uVar3 - 0x30)) * 0x7e + (param_3[2] - 0x81)) * 10 +
                    (param_3[3] - 0x30), (int)uVar4 < 0x99fc)) {
          if (uVar4 == 0x1d21) {
            *param_2 = 0xe7c7;
            return 4;
          }
          uVar5 = 0x2c45;
          uVar8 = 0xcd;
          uVar10 = 0;
          while( true ) {
            uVar9 = uVar8 + uVar10;
            while (uVar1 = uVar9 >> 1, uVar4 <= uVar5) {
              uVar9 = uVar1 + uVar10;
              if (uVar1 <= uVar10) goto LAB_0001538c;
              uVar8 = uVar1;
              uVar5 = (uint)*(ushort *)(DAT_00015720 + 0x16008 + (uVar9 | 1) * 2);
            }
            uVar10 = uVar1 + 1;
            if (uVar4 < *(ushort *)(DAT_00015724 + 0x16010 + uVar10 * 4)) break;
            if (uVar8 <= uVar10) {
LAB_0001538c:
              *param_2 = *(ushort *)((int)&DAT_00015d04 + uVar10 * 2 + DAT_00015728) + uVar4;
              return 4;
            }
            uVar5 = (uint)*(ushort *)(DAT_00015724 + 0x16010 + (uVar10 + uVar8 | 1) * 2);
          }
        }
      }
      uVar4 = uVar6 + 8 & 0xff;
      uVar8 = uVar6 + 0x56 & 0xff;
      bVar12 = 4 < uVar8;
      bVar11 = uVar8 == 5;
      if (5 < uVar8) {
        bVar12 = 5 < uVar4;
        bVar11 = uVar4 == 6;
      }
      if (bVar12 && !bVar11) goto LAB_000155f4;
    }
    else {
      uVar3 = uVar6 + 0x56 & 0xff;
      uVar4 = uVar6 + 8 & 0xff;
      bVar12 = 5 < uVar4;
      bVar11 = uVar4 == 6;
      if (6 < uVar4) {
        bVar12 = 4 < uVar3;
        bVar11 = uVar3 == 5;
      }
      if (bVar12 && !bVar11) {
LAB_000155f4:
        if (6 < (uVar6 + 0x5f & 0xff)) {
LAB_00015614:
          if (0x53 < (uVar6 + 0x70 & 0xff)) {
            return -1;
          }
          if (param_4 < 2) {
            return -2;
          }
          uVar3 = (uint)param_3[1];
          goto LAB_00015208;
        }
        if (param_4 < 2) {
          return -2;
        }
        uVar3 = (uint)param_3[1];
        goto LAB_00015444;
      }
      if (param_4 < 2) {
        return -2;
      }
      uVar3 = (uint)param_3[1];
LAB_000151e8:
      if ((uVar3 + 0x5f & 0xff) < 0x5e) {
        if (uVar6 < 0xf8) {
          iVar2 = uVar6 - 0xaa;
        }
        else {
          iVar2 = uVar6 - 0xf2;
        }
        *param_2 = uVar3 + iVar2 * 0x5e + 0xdf5f;
        return 2;
      }
    }
    if (0x53 < (uVar6 + 0x70 & 0xff)) {
      return -1;
    }
  }
LAB_00015208:
  if (9 < (uVar3 - 0x30 & 0xff)) {
    return -1;
  }
  if (param_4 != 2) {
    if (0x7d < (param_3[2] + 0x7f & 0xff)) {
      return -1;
    }
    if (param_4 != 3) {
      if (9 < (param_3[3] - 0x30 & 0xff)) {
        return -1;
      }
      iVar7 = (((uVar6 - 0x90) * 10 + (uVar3 - 0x30)) * 0x7e + (param_3[2] - 0x81)) * 10 +
              (param_3[3] - 0x30);
      iVar2 = -1;
      if (iVar7 < 0x100000) {
        iVar2 = 4;
        *param_2 = iVar7 + 0x10000;
      }
      return iVar2;
    }
  }
  return -2;
}



/* ===== FUN_000157e4 @ 000157e4 size=368 ===== */

undefined * FUN_000157e4(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_00015964;
  if (0x11 < param_2 - 2U) {
    return (undefined *)0x0;
  }
  iVar2 = param_2;
  switch(param_2) {
  case 2:
    goto LAB_0001588c;
  case 3:
    goto LAB_0001588c;
  case 4:
    iVar2 = param_2;
    goto LAB_00015874;
  case 5:
    iVar2 = param_2;
    goto LAB_0001585c;
  case 6:
    iVar2 = param_2;
    goto LAB_00015844;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  default:
    iVar2 = (uint)(byte)(&UNK_0001495c)[DAT_00015968 + (uint)param_1[9]] + param_2;
  }
  iVar2 = (uint)(byte)(&UNK_00014850)[DAT_00015954 + (uint)param_1[6]] + iVar2;
LAB_00015844:
  iVar2 = (uint)(byte)(&UNK_00014868)[DAT_00015958 + (uint)param_1[5]] + iVar2;
LAB_0001585c:
  iVar2 = (uint)(byte)(&UNK_00014880)[DAT_0001595c + (uint)param_1[4]] + iVar2;
LAB_00015874:
  iVar2 = (uint)(byte)(&UNK_00014898)[DAT_00015960 + (uint)param_1[3]] + iVar2;
LAB_0001588c:
  iVar4 = DAT_00015964 + 0x158a0;
  uVar3 = (uint)*(byte *)(iVar4 + (uint)param_1[param_2 + -1] + -0xfec) +
          (uint)*(byte *)(iVar4 + (uint)*param_1 + -0xfec) + iVar2;
  if (uVar3 < 0x9b) {
    iVar2 = uVar3 * 8;
    iVar4 = *(int *)(iVar4 + iVar2 + -0xf6c);
    if (((-1 < iVar4) && ((uint)*(byte *)(DAT_00015964 + 0x14e0c + iVar4) == (uint)*param_1)) &&
       (iVar4 = strcmp((char *)(param_1 + 1),(char *)(DAT_00015964 + 0x14e0c + iVar4 + 1)),
       iVar4 == 0)) {
      return &UNK_00014934 + iVar2 + iVar1;
    }
  }
  return (undefined *)0x0;
}



/* ===== libiconv_open @ 0001596c size=888 ===== */

int * libiconv_open(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  byte *pbVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int local_54;
  byte local_48 [36];
  
  iVar12 = DAT_00015ce4;
  iVar6 = 0;
  pvVar11 = (void *)(DAT_00015ce8 + 0x15994);
  pvVar8 = (void *)(DAT_00015cec + 0x15998);
  local_54 = 0;
LAB_000159a0:
  bVar1 = *param_1;
  if ((bVar1 & 0x80) == 0) {
    pbVar13 = param_1 + 0x1d;
    pbVar9 = local_48;
    do {
      if (bVar1 - 0x61 < 0x1a) {
        *pbVar9 = bVar1 - 0x20;
      }
      else {
        *pbVar9 = bVar1;
        if (bVar1 == 0) goto LAB_000159f8;
      }
      pbVar9 = pbVar9 + 1;
      if (param_1 == pbVar13) break;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      if ((bVar1 & 0x80) != 0) break;
    } while( true );
  }
  goto LAB_00015a7c;
LAB_000159f8:
  iVar7 = (int)pbVar9 - (int)local_48;
  if (9 < iVar7) {
    iVar2 = memcmp(pbVar9 + -10,pvVar8,10);
    if (iVar2 != 0) goto LAB_00015a24;
    pbVar9[-10] = 0;
    local_54 = 1;
    pbVar9 = pbVar9 + -10;
    goto LAB_000159f8;
  }
  if (7 < iVar7) {
LAB_00015a24:
    iVar2 = memcmp(pbVar9 + -8,pvVar11,8);
    if (iVar2 != 0) goto LAB_00015a3c;
    pbVar9[-8] = 0;
    iVar6 = 1;
    pbVar9 = pbVar9 + -8;
    goto LAB_000159f8;
  }
LAB_00015a3c:
  if (local_48[0] != 0) {
    piVar3 = (int *)FUN_000157e4(local_48,iVar7);
    if (piVar3 == (int *)0x0) {
      piVar10 = (int *)(DAT_00015cf0 + 0x14ad0);
      piVar3 = (int *)(&UNK_00014ab8 + DAT_00015cf0);
      iVar7 = 0;
      while (iVar7 = strcmp((char *)local_48,&UNK_000149b0 + iVar7 + iVar12), iVar7 != 0) {
        if (piVar3 == piVar10) goto LAB_00015a7c;
        piVar3 = piVar3 + 2;
        iVar7 = *piVar3;
      }
    }
    iVar7 = piVar3[1];
    if (iVar7 != 0x21) {
      pvVar11 = (void *)(DAT_00015cf4 + 0x15b1c);
      pvVar8 = (void *)(DAT_00015cf8 + 0x15b20);
      if (iVar7 == 0x22) {
        iVar7 = 0x11;
      }
      goto LAB_00015b20;
    }
  }
  param_1 = (byte *)FUN_00016614();
  if (*param_1 == 0) goto LAB_00015a7c;
  goto LAB_000159a0;
LAB_00015b20:
  bVar1 = *param_2;
  if ((bVar1 & 0x80) == 0) {
    pbVar13 = param_2 + 0x1d;
    pbVar9 = local_48;
    do {
      if (bVar1 - 0x61 < 0x1a) {
        *pbVar9 = bVar1 - 0x20;
      }
      else {
        *pbVar9 = bVar1;
        if (bVar1 == 0) goto LAB_00015b70;
      }
      pbVar9 = pbVar9 + 1;
      if (pbVar13 == param_2) break;
      param_2 = param_2 + 1;
      bVar1 = *param_2;
      if ((bVar1 & 0x80) != 0) break;
    } while( true );
  }
  goto LAB_00015a7c;
LAB_00015b70:
  iVar12 = (int)pbVar9 - (int)local_48;
  if (9 < iVar12) {
    iVar2 = memcmp(pbVar9 + -10,pvVar8,10);
    if (iVar2 != 0) goto LAB_00015b9c;
    pbVar9[-10] = 0;
    pbVar9 = pbVar9 + -10;
    goto LAB_00015b70;
  }
  if (7 < iVar12) {
LAB_00015b9c:
    iVar2 = memcmp(pbVar9 + -8,pvVar11,8);
    if (iVar2 != 0) goto LAB_00015bb8;
    pbVar9[-8] = 0;
    pbVar9 = pbVar9 + -8;
    goto LAB_00015b70;
  }
LAB_00015bb8:
  if (local_48[0] != 0) {
    iVar12 = FUN_000157e4(local_48,iVar12);
    if ((iVar12 == 0) && (iVar12 = FUN_00011e34(local_48), iVar12 == 0)) goto LAB_00015a7c;
    iVar12 = *(int *)(iVar12 + 4);
    if (iVar12 != 0x21) {
      if (iVar12 == 0x22) {
        iVar12 = 0x11;
      }
      piVar3 = malloc(0x54);
      iVar2 = DAT_00015cfc;
      if (piVar3 != (int *)0x0) {
        piVar3[2] = iVar12;
        piVar10 = (int *)(iVar12 * 0x14 + iVar2 + 0x15c40);
        iVar14 = DAT_00015d00 + 0x15c50;
        iVar2 = iVar7 * 0x14 + iVar2 + 0x15c40;
        iVar4 = DAT_00015d04 + 0x15c58;
        iVar12 = piVar10[1];
        iVar5 = *(int *)(iVar2 + 0x10);
        piVar3[3] = *piVar10;
        piVar3[4] = iVar12;
        iVar12 = *(int *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 0xc);
        piVar3[6] = iVar7;
        piVar3[7] = iVar12;
        piVar3[8] = iVar2;
        piVar3[9] = iVar5;
        piVar3[0xc] = iVar6;
        piVar3[0xb] = local_54;
        *piVar3 = iVar14;
        piVar3[1] = iVar4;
        piVar3[5] = 0;
        piVar3[10] = 0;
        piVar3[0xd] = 0;
        piVar3[0xe] = 0;
        piVar3[0xf] = 0;
        piVar3[0x10] = 0;
        piVar3[0x11] = 0;
        piVar3[0x12] = 0;
        piVar3[0x13] = 0;
        piVar3[0x14] = 0;
        return piVar3;
      }
      piVar3 = __errno_location();
      *piVar3 = 0xc;
      return (int *)0xffffffff;
    }
  }
  param_2 = (byte *)FUN_00016614();
  if (*param_2 == 0) {
LAB_00015a7c:
    piVar3 = __errno_location();
    *piVar3 = 0x16;
    return (int *)0xffffffff;
  }
  goto LAB_00015b20;
}



/* ===== libiconv @ 00015d08 size=76 ===== */

void libiconv(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00015d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_1,param_4,param_5);
  return;
}



/* ===== libiconv_close @ 00015d54 size=16 ===== */

undefined4 libiconv_close(void *param_1)

{
  free(param_1);
  return 0;
}



/* ===== libiconv_open_into @ 00015d64 size=868 ===== */

undefined4 libiconv_open_into(byte *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  byte *pbVar14;
  int local_58;
  byte local_48 [36];
  
  iVar11 = 0;
  pvVar13 = (void *)(DAT_000160cc + 0x15d8c);
  pvVar12 = (void *)(DAT_000160d0 + 0x15d90);
  iVar6 = DAT_000160c8 + 0x14da8;
  local_58 = 0;
LAB_00015d9c:
  bVar1 = *param_1;
  if ((bVar1 & 0x80) == 0) {
    pbVar14 = param_1 + 0x1d;
    pbVar7 = local_48;
    do {
      if (bVar1 - 0x61 < 0x1a) {
        *pbVar7 = bVar1 - 0x20;
      }
      else {
        *pbVar7 = bVar1;
        if (bVar1 == 0) goto LAB_00015df4;
      }
      pbVar7 = pbVar7 + 1;
      if (param_1 == pbVar14) break;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      if ((bVar1 & 0x80) != 0) break;
    } while( true );
  }
  goto LAB_00015e74;
LAB_00015df4:
  iVar10 = (int)pbVar7 - (int)local_48;
  if (9 < iVar10) {
    iVar2 = memcmp(pbVar7 + -10,pvVar12,10);
    if (iVar2 != 0) goto LAB_00015e1c;
    pbVar7[-10] = 0;
    local_58 = 1;
    pbVar7 = pbVar7 + -10;
    goto LAB_00015df4;
  }
  if (7 < iVar10) {
LAB_00015e1c:
    iVar2 = memcmp(pbVar7 + -8,pvVar13,8);
    if (iVar2 != 0) goto LAB_00015e34;
    pbVar7[-8] = 0;
    iVar11 = 1;
    pbVar7 = pbVar7 + -8;
    goto LAB_00015df4;
  }
LAB_00015e34:
  if (local_48[0] != 0) {
    piVar3 = (int *)FUN_000157e4(local_48,iVar10);
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)(DAT_000160d4 + 0x14eec);
      piVar3 = (int *)(DAT_000160d4 + 0x14ed4);
      iVar10 = 0;
      while (iVar10 = strcmp((char *)local_48,(char *)(iVar6 + iVar10)), iVar10 != 0) {
        if (piVar3 == piVar5) goto LAB_00015e74;
        piVar3 = piVar3 + 2;
        iVar10 = *piVar3;
      }
    }
    iVar10 = piVar3[1];
    if (iVar10 != 0x21) {
      pvVar12 = (void *)(DAT_000160d8 + 0x15f14);
      if (iVar10 == 0x22) {
        iVar10 = 0x11;
      }
      pvVar13 = (void *)(DAT_000160dc + 0x15f1c);
      goto LAB_00015f1c;
    }
  }
  param_1 = (byte *)FUN_00016614();
  if (*param_1 == 0) goto LAB_00015e74;
  goto LAB_00015d9c;
LAB_00015f1c:
  bVar1 = *param_2;
  if ((bVar1 & 0x80) == 0) {
    pbVar14 = param_2 + 0x1d;
    pbVar7 = local_48;
    do {
      if (bVar1 - 0x61 < 0x1a) {
        *pbVar7 = bVar1 - 0x20;
      }
      else {
        *pbVar7 = bVar1;
        if (bVar1 == 0) goto LAB_00015f6c;
      }
      pbVar7 = pbVar7 + 1;
      if (pbVar14 == param_2) break;
      param_2 = param_2 + 1;
      bVar1 = *param_2;
      if ((bVar1 & 0x80) != 0) break;
    } while( true );
  }
  goto LAB_00015e74;
LAB_00015f6c:
  iVar6 = (int)pbVar7 - (int)local_48;
  if (9 < iVar6) {
    iVar2 = memcmp(pbVar7 + -10,pvVar13,10);
    if (iVar2 != 0) goto LAB_00015fa0;
    pbVar7[-10] = 0;
    pbVar7 = pbVar7 + -10;
    goto LAB_00015f6c;
  }
  if (7 < iVar6) {
LAB_00015fa0:
    iVar2 = memcmp(pbVar7 + -8,pvVar12,8);
    if (iVar2 != 0) goto LAB_00015fb8;
    pbVar7[-8] = 0;
    pbVar7 = pbVar7 + -8;
    goto LAB_00015f6c;
  }
LAB_00015fb8:
  if (local_48[0] != 0) {
    iVar6 = FUN_000157e4(local_48,iVar6);
    if ((iVar6 == 0) && (iVar6 = FUN_00011e34(local_48), iVar6 == 0)) goto LAB_00015e74;
    iVar2 = DAT_000160e4;
    iVar6 = *(int *)(iVar6 + 4);
    if (iVar6 != 0x21) {
      iVar4 = DAT_000160e0 + 0x16028;
      if (iVar6 == 0x22) {
        iVar6 = 0x11;
      }
      param_3[2] = iVar6;
      piVar3 = (int *)(iVar6 * 0x14 + iVar4);
      iVar4 = iVar10 * 0x14 + iVar4;
      iVar8 = DAT_000160e8 + 0x1604c;
      iVar6 = piVar3[1];
      iVar9 = *(int *)(iVar4 + 0x10);
      param_3[3] = *piVar3;
      param_3[4] = iVar6;
      iVar6 = *(int *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 0xc);
      param_3[6] = iVar10;
      param_3[7] = iVar6;
      param_3[8] = iVar4;
      param_3[9] = iVar9;
      param_3[0xc] = iVar11;
      param_3[0xb] = local_58;
      *param_3 = iVar2 + 0x16048;
      param_3[1] = iVar8;
      param_3[5] = 0;
      param_3[10] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0x14] = 0;
      return 0;
    }
  }
  param_2 = (byte *)FUN_00016614();
  if (*param_2 == 0) {
LAB_00015e74:
    piVar3 = __errno_location();
    *piVar3 = 0x16;
    return 0xffffffff;
  }
  goto LAB_00015f1c;
}



/* ===== libiconvctl @ 000160ec size=360 ===== */

undefined4 libiconvctl(int *param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  switch(param_2) {
  case 0:
    if (*param_1 == DAT_00016254 + 0x16158) {
      bVar1 = param_1[2] == param_1[6];
    }
    else {
      bVar1 = *param_1 == DAT_00016258 + 0x16168;
    }
    *param_3 = (uint)bVar1;
    return param_2;
  case 1:
    *param_3 = param_1[0xb];
    return 0;
  case 2:
    param_1[0xb] = (uint)(*param_3 != 0);
    return 0;
  case 3:
    *param_3 = param_1[0xc];
    return 0;
  case 4:
    param_1[0xc] = (uint)(*param_3 != 0);
    return 0;
  case 5:
    if (param_3 == (uint *)0x0) {
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
    }
    else {
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      param_1[0x12] = *param_3;
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar4;
    }
    return 0;
  case 6:
    if (param_3 == (uint *)0x0) {
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      uVar6 = 0;
    }
    else {
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = 0;
      param_1[0xd] = *param_3;
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
      param_1[0x10] = uVar5;
      param_1[0x11] = param_3[4];
    }
    break;
  default:
    piVar2 = __errno_location();
    uVar6 = 0xffffffff;
    *piVar2 = 0x16;
  }
  return uVar6;
}



/* ===== libiconvlist @ 0001625c size=448 ===== */

void libiconvlist(code *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  __compar_fn_t __compar;
  uint uVar6;
  int iVar7;
  uint __nmemb;
  size_t __nmemb_00;
  int iStack_7a0;
  int local_79c [157];
  int aiStack_528 [321];
  
  iVar4 = -1;
  piVar5 = (int *)(DAT_0001641c + 0x15304);
  iVar7 = 0;
  while( true ) {
    iVar2 = iVar7 + 1;
    iVar3 = iVar2;
    if (-1 < iVar4) {
      iVar1 = piVar5[1];
      if (1 < iVar1 - 0x21U) {
        aiStack_528[iVar7 * 2 + 2] = DAT_00016420 + 0x157f0 + iVar4;
        aiStack_528[iVar7 * 2 + 3] = iVar1;
        iVar3 = iVar7 + 2;
        iVar7 = iVar2;
      }
    }
    if ((int *)(&UNK_000157d4 + DAT_0001641c) == piVar5) break;
    piVar5 = piVar5 + 2;
    iVar4 = *piVar5;
  }
  __nmemb = iVar7 + 4;
  aiStack_528[iVar7 * 2 + 2] = DAT_00016424 + 0x15338;
  aiStack_528[iVar3 * 2 + 2] = DAT_00016424 + 0x1533e;
  aiStack_528[iVar7 * 2 + 3] = 0x20;
  aiStack_528[iVar3 * 2 + 3] = 0x20;
  aiStack_528[(iVar7 + 2) * 2 + 3] = 0x20;
  aiStack_528[(iVar7 + 2) * 2 + 2] = DAT_00016424 + 0x15345;
  aiStack_528[(iVar7 + 3) * 2 + 3] = 0x20;
  aiStack_528[(iVar7 + 3) * 2 + 2] = DAT_00016424 + 0x15349;
  if (__nmemb < 2) {
    if (__nmemb == 0) {
      return;
    }
  }
  else {
    qsort(aiStack_528 + 2,__nmemb,8,(__compar_fn_t)(DAT_0001642c + 0x16414));
  }
  uVar6 = 0;
  iVar7 = 0;
  __compar = (__compar_fn_t)(DAT_00016428 + 0x16370);
  do {
    piVar5 = &iStack_7a0;
    __nmemb_00 = 0;
    iVar4 = *(int *)((int)aiStack_528 + iVar7 + 0xc);
    do {
      uVar6 = uVar6 + 1;
      __nmemb_00 = __nmemb_00 + 1;
      iVar7 = uVar6 * 8;
      piVar5 = piVar5 + 1;
      *piVar5 = aiStack_528[uVar6 * 2];
      if (__nmemb <= uVar6) break;
    } while (aiStack_528[uVar6 * 2 + 3] == iVar4);
    if (__nmemb_00 != 1) {
      qsort(local_79c,__nmemb_00,4,__compar);
    }
    iVar4 = (*param_1)(__nmemb_00,local_79c,param_2);
    if ((iVar4 != 0) || (__nmemb <= uVar6)) {
      return;
    }
  } while( true );
}



/* ===== iconv_canonicalize @ 00016430 size=460 ===== */

byte * iconv_canonicalize(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  void *__s2;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  void *__s2_00;
  byte *pbVar11;
  byte local_48 [36];
  
  iVar7 = DAT_000165fc + 0x159b8;
  iVar6 = DAT_00016600 + 0x15478;
  pbVar4 = param_1;
LAB_0001645c:
  bVar1 = *pbVar4;
  if ((bVar1 & 0x80) != 0) {
    return param_1;
  }
  pbVar11 = pbVar4 + 0x1d;
  pbVar5 = local_48;
  do {
    if (bVar1 - 0x61 < 0x1a) {
      *pbVar5 = bVar1 - 0x20;
    }
    else {
      *pbVar5 = bVar1;
      if (bVar1 == 0) break;
    }
    pbVar5 = pbVar5 + 1;
    if (pbVar11 == pbVar4) {
      return param_1;
    }
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar4;
    if ((bVar1 & 0x80) != 0) {
      return param_1;
    }
  } while( true );
  __s2_00 = (void *)(DAT_00016604 + 0x164c0);
  __s2 = (void *)(DAT_00016608 + 0x164d4);
  while( true ) {
    while( true ) {
      iVar9 = (int)pbVar5 - (int)local_48;
      if (iVar9 < 10) break;
      iVar2 = memcmp(pbVar5 + -10,__s2_00,10);
      if (iVar2 != 0) goto LAB_00016508;
      pbVar5[-10] = 0;
      pbVar5 = pbVar5 + -10;
    }
    if (iVar9 < 8) break;
LAB_00016508:
    iVar2 = memcmp(pbVar5 + -8,__s2,8);
    if (iVar2 != 0) break;
    pbVar5[-8] = 0;
    pbVar5 = pbVar5 + -8;
  }
  if (local_48[0] != 0) {
    piVar3 = (int *)FUN_000157e4(local_48,iVar9);
    iVar9 = iVar7;
    if (piVar3 == (int *)0x0) {
      piVar10 = (int *)(DAT_0001660c + 0x155b0);
      piVar3 = (int *)(DAT_0001660c + 0x15598);
      iVar9 = 0;
      while (iVar2 = strcmp((char *)local_48,(char *)(iVar6 + iVar9)), iVar9 = iVar6, iVar2 != 0) {
        if (piVar10 == piVar3) {
          return param_1;
        }
        piVar3 = piVar3 + 2;
        iVar9 = *piVar3;
      }
    }
    iVar2 = piVar3[1];
    if (iVar2 != 0x21) {
      if (iVar2 == 0x22) {
        uVar8 = 0x12e;
      }
      else {
        uVar8 = (uint)*(ushort *)(DAT_00016610 + 0x15ee0 + iVar2 * 2);
      }
      return (byte *)(iVar9 + uVar8);
    }
  }
  pbVar4 = (byte *)FUN_00016614();
  if (*pbVar4 == 0) {
    return param_1;
  }
  goto LAB_0001645c;
}



/* ===== FUN_00016614 @ 00016614 size=56 ===== */

char * FUN_00016614(void)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(10);
  if (pcVar1 == (char *)0x0) {
    return (char *)((int)&DAT_0001664c + DAT_00016650);
  }
  if (*pcVar1 != '\0') {
    return pcVar1;
  }
  return (char *)(DAT_0001664c + 0x16640);
}



/* ===== libiconv_set_relocation_prefix @ 00016654 size=164 ===== */

void libiconv_set_relocation_prefix(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  void *__dest;
  void *__dest_00;
  
  if ((param_1 != (char *)0x0 && param_2 != (char *)0x0) &&
     (iVar2 = strcmp(param_1,param_2), iVar1 = DAT_000166fc, iVar2 != 0)) {
    sVar3 = strlen(param_1);
    *(size_t *)(iVar1 + 0x166a4) = sVar3;
    sVar4 = strlen(param_2);
    *(size_t *)(iVar1 + 0x166a8) = sVar4;
    __dest = malloc(sVar3 + sVar4 + 2);
    if (__dest != (void *)0x0) {
      __dest_00 = (void *)((int)__dest + sVar3 + 1);
      memcpy(__dest,param_1,sVar3 + 1);
      *(void **)(iVar1 + 0x166ac) = __dest;
      memcpy(__dest_00,param_2,sVar4 + 1);
      *(void **)(iVar1 + 0x166b0) = __dest_00;
      return;
    }
  }
  iVar1 = DAT_000166f8;
  *(undefined4 *)(DAT_000166f8 + 0x16690) = 0;
  *(undefined4 *)(iVar1 + 0x16694) = 0;
  return;
}



/* ===== FUN_00016700 @ 00016700 size=208 ===== */

char * FUN_00016700(char *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  char *__s;
  size_t __n;
  
  iVar1 = DAT_000167d0;
  if ((*(char **)(DAT_000167d0 + 0x1671c) != (char *)0x0) &&
     (__s = *(char **)(DAT_000167d0 + 0x16720), __s != (char *)0x0)) {
    sVar5 = *(size_t *)(DAT_000167d0 + 0x16714);
    iVar2 = strncmp(param_1,*(char **)(DAT_000167d0 + 0x1671c),sVar5);
    if (iVar2 == 0) {
      if (param_1[sVar5] == '\0') {
        sVar5 = strlen(__s);
        pcVar4 = malloc(sVar5 + 1);
        if (pcVar4 != (char *)0x0) {
          memcpy(pcVar4,__s,sVar5 + 1);
          param_1 = pcVar4;
        }
      }
      else if (param_1[sVar5] == '/') {
        sVar3 = strlen(param_1 + sVar5);
        __n = *(size_t *)(iVar1 + 0x16718);
        pcVar4 = malloc(__n + 1 + sVar3);
        if (pcVar4 != (char *)0x0) {
          memcpy(pcVar4,__s,__n);
          memcpy(pcVar4 + __n,param_1 + sVar5,sVar3 + 1);
          param_1 = pcVar4;
        }
      }
    }
  }
  return param_1;
}



/* ===== _fini @ 000167f8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::qsort @ 0005e000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005e004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0005e008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0005e00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0005e010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0005e014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0005e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nl_langinfo @ 0005e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0005e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0005e024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0005e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0005e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0005e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0005e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0005e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


