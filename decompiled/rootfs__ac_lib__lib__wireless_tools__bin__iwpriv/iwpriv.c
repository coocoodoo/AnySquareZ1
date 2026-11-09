// iwpriv — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000107f8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 0001081c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002200c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00010828 size=12 ===== */

void iw_enum_devices(void)

{
  (*(code *)PTR_iw_enum_devices_00022010)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00022014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 0001084c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002201c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_in_addr @ 00010858 size=12 ===== */

void iw_in_addr(void)

{
  (*(code *)PTR_iw_in_addr_00022020)();
  return;
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00010864 size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_00022024)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010870 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 0001087c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002202c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022034)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000108a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022038)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000108ac size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002203c)();
  return;
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 000108b8 size=12 ===== */

void iw_ether_ntop(void)

{
  (*(code *)PTR_iw_ether_ntop_00022040)();
  return;
}



/* ===== <EXTERNAL>::iw_float2freq @ 000108c4 size=12 ===== */

void iw_float2freq(void)

{
  (*(code *)PTR_iw_float2freq_00022044)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 000108d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00022048)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000108dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002204c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sscanf @ 000108e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00022050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010900 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022058)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_get_priv_size @ 0001090c size=12 ===== */

void iw_get_priv_size(void)

{
  (*(code *)PTR_iw_get_priv_size_0002205c)();
  return;
}



/* ===== <EXTERNAL>::iw_freq2float @ 00010918 size=12 ===== */

void iw_freq2float(void)

{
  (*(code *)PTR_iw_freq2float_00022060)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022064)();
  return piVar1;
}



/* ===== <EXTERNAL>::iw_get_priv_info @ 00010930 size=12 ===== */

void iw_get_priv_info(void)

{
  (*(code *)PTR_iw_get_priv_info_00022068)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001093c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002206c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00022070)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00022074)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_version_info @ 00010960 size=12 ===== */

void iw_print_version_info(void)

{
  (*(code *)PTR_iw_print_version_info_00022078)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001096c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002207c)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00022080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022084)(__ptr);
  return;
}



/* ===== FUN_00010990 @ 00010990 size=508 ===== */

undefined4 FUN_00010990(int param_1,int param_2)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  char *__s1;
  char *__s1_00;
  void *local_1c;
  
  __fd = iw_sockets_open();
  if (__fd < 0) {
    perror(DAT_00010b8c);
    return 0xffffffff;
  }
  uVar2 = DAT_00010b90;
  if (param_1 == 1) {
LAB_000109d8:
    iw_enum_devices(__fd,uVar2,0);
  }
  else {
    __s1 = *(char **)(param_2 + 4);
    iVar1 = strncmp(__s1,DAT_00010b94,2);
    uVar2 = DAT_00010b9c;
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,DAT_00010b98), uVar2 = DAT_00010b9c, iVar1 == 0))
    goto LAB_000109d8;
    iVar1 = strncmp(__s1,DAT_00010ba0,2);
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,DAT_00010ba4), iVar1 == 0)) {
      fputs(DAT_00010bac,(FILE *)*DAT_00010ba8);
    }
    else {
      iVar1 = strcmp(__s1,DAT_00010bb0);
      if ((iVar1 == 0) || (iVar1 = strcmp(__s1,DAT_00010bb4), iVar1 == 0)) {
        uVar2 = iw_print_version_info(DAT_00010bb8);
        goto LAB_000109e0;
      }
      if (param_1 == 2) {
        FUN_00010cd8(__fd,__s1,0);
      }
      else {
        __s1_00 = *(char **)(param_2 + 8);
        iVar1 = strncmp(__s1_00,DAT_00010b94,2);
        if ((iVar1 != 0) && (iVar1 = strcmp(__s1_00,DAT_00010b98), iVar1 != 0)) {
          iVar1 = iw_get_priv_info(__fd,__s1,&local_1c);
          if (iVar1 < 1) {
            fprintf((FILE *)*DAT_00010ba8,DAT_00010bbc,__s1);
            if (local_1c != (void *)0x0) {
              free(local_1c);
            }
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = FUN_00010dc0(__fd,param_2 + 0xc,param_1 + -3,__s1,*(undefined4 *)(param_2 + 8),
                                 local_1c,iVar1);
            free(local_1c);
          }
          goto LAB_000109e0;
        }
        FUN_000114e8(__fd,__s1,0);
      }
    }
  }
  uVar2 = 0;
LAB_000109e0:
  close(__fd);
  return uVar2;
}



/* ===== entry @ 00010bc0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022054)
            (DAT_00010bf4,param_2,&stack0x00000004,DAT_00010bf8,DAT_00010bf0,param_1);
  return;
}



/* ===== FUN_00010bfc @ 00010bfc size=32 ===== */

void FUN_00010bfc(void)

{
  if (DAT_00010c20 == DAT_00010c1c) {
    return;
  }
  if (DAT_00010c24 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c24)();
  return;
}



/* ===== _FINI_0 @ 00010c60 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010c9c;
  if (*DAT_00010c9c != '\0') {
    return;
  }
  FUN_00010bfc();
  if (DAT_00010ca0 != 0) {
    __deregister_frame_info(DAT_00010ca4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010ca8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010ccc != 0) {
    __register_frame_info(DAT_00010cd4,DAT_00010cd0);
  }
  if ((DAT_00010c58 - DAT_00010c54 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010c5c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c5c)();
  return;
}



/* ===== FUN_00010cd8 @ 00010cd8 size=212 ===== */

undefined4 FUN_00010cd8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *__format;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *local_1c;
  
  iVar2 = iw_get_priv_info(param_1,param_2,&local_1c);
  if (iVar2 < 1) {
    fprintf((FILE *)*DAT_00010dac,DAT_00010db0,param_2);
  }
  else {
    printf(DAT_00010db4,param_2);
    __format = DAT_00010dbc;
    iVar1 = DAT_00010db8;
    iVar6 = 0;
    do {
      iVar3 = iVar6 * 0x18;
      if (*(char *)((int)local_1c + iVar3 + 8) != '\0') {
        uVar5 = (uint)*(ushort *)((int)local_1c + iVar3 + 4);
        uVar4 = (uint)*(ushort *)((int)local_1c + iVar3 + 6);
        printf(__format,(int)local_1c + iVar3 + 8,*(undefined4 *)((int)local_1c + iVar3),
               uVar5 & 0x7ff,*(undefined4 *)(iVar1 + ((uVar5 & 0x7fff) >> 0xc) * 4),uVar4 & 0x7ff,
               *(undefined4 *)(iVar1 + ((uVar4 & 0x7fff) >> 0xc) * 4));
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
    putchar(10);
  }
  if (local_1c != (void *)0x0) {
    free(local_1c);
  }
  return 0;
}



/* ===== FUN_00010dc0 @ 00010dc0 size=1724 ===== */

/* WARNING: Type propagation algorithm not settling */

uint FUN_00010dc0(int param_1,undefined4 *param_2,uint param_3,char *param_4,char *param_5,
                 int param_6,int param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  int *piVar10;
  FILE *pFVar11;
  undefined4 extraout_r1;
  undefined4 *******pppppppuVar12;
  ushort uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *******pppppppuVar19;
  char *pcVar20;
  uint uVar21;
  double dVar22;
  undefined4 *******local_10e4;
  char acStack_10e0 [16];
  undefined4 *******local_10d0;
  undefined4 local_10cc;
  undefined4 uStack_10c8;
  undefined4 uStack_10c4;
  double local_10c0 [16];
  undefined4 *******local_1040;
  uint uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined1 local_41;
  undefined4 extraout_s1;
  
  if (((int)param_3 < 1) ||
     (iVar16 = sscanf((char *)*param_2,DAT_00011498,&local_10e4), iVar16 != 1)) {
    pppppppuVar19 = (undefined4 *******)0x0;
  }
  else {
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
    pppppppuVar19 = local_10e4;
  }
  iVar16 = -1;
  pcVar15 = (char *)(param_6 + 8);
  do {
    iVar16 = iVar16 + 1;
    if (param_7 <= iVar16) {
      pcVar15 = DAT_0001149c;
      if (iVar16 == param_7) goto LAB_00010e94;
      break;
    }
    iVar6 = strcmp(pcVar15,param_5);
    pcVar15 = pcVar15 + 0x18;
  } while (iVar6 != 0);
  pcVar20 = DAT_000114b0;
  dVar4 = DAT_00011490;
  dVar3 = DAT_00011488;
  dVar2 = DAT_00011480;
  iVar6 = iVar16 * 0x18;
  pppppppuVar12 = *(undefined4 ********)(param_6 + iVar6);
  if (pppppppuVar12 < (undefined4 *******)0x89f0) {
    iVar16 = -1;
    iVar17 = param_6;
    while( true ) {
      iVar16 = iVar16 + 1;
      if (param_7 <= iVar16) break;
      if ((*(char *)(iVar17 + 8) == '\0') && (*(int *)(iVar17 + 4) == *(int *)(param_6 + iVar6 + 4))
         ) goto LAB_00010ed4;
      iVar17 = iVar17 + 0x18;
    }
    pcVar15 = DAT_000114a8;
    if (param_7 == iVar16) {
LAB_00010e94:
      fprintf((FILE *)*DAT_000114a0,pcVar15,param_5);
      return 0xffffffff;
    }
LAB_00010ed4:
    iVar6 = 4;
  }
  else {
    iVar6 = 0;
    pppppppuVar12 = pppppppuVar19;
  }
  iVar16 = iVar16 * 0x18;
  iVar17 = param_6 + iVar16;
  uVar13 = *(ushort *)(iVar17 + 4);
  uVar14 = uVar13 & 0x7000;
  if (((uVar13 & 0x7000) == 0) || (uVar21 = uVar13 & 0x7ff, (uVar13 & 0x7ff) == 0)) {
    local_10cc = (uint)local_10cc._2_2_ << 0x10;
  }
  else {
    if (uVar14 == 0x4000) {
      uVar14 = param_3 & 0xffff;
      if (uVar21 <= (param_3 & 0xffff)) {
        uVar14 = uVar21;
      }
      local_10cc = CONCAT22(local_10cc._2_2_,(short)uVar14);
      for (iVar9 = 0; iVar9 < (int)(local_10cc & 0xffff); iVar9 = iVar9 + 1) {
        sscanf((char *)param_2[iVar9],pcVar20,&local_10e4);
        (&local_1040)[iVar9] = local_10e4;
      }
    }
    else if (uVar14 < 0x4001) {
      if (uVar14 == 0x1000) {
        uVar14 = param_3 & 0xffff;
        if (uVar21 <= (param_3 & 0xffff)) {
          uVar14 = uVar21;
        }
        local_10cc = CONCAT22(local_10cc._2_2_,(short)uVar14);
        for (iVar9 = 0; iVar9 < (int)(local_10cc & 0xffff); iVar9 = iVar9 + 1) {
          sscanf((char *)param_2[iVar9],pcVar20,&local_10e4);
          *(char *)((int)&local_1040 + iVar9) = (char)local_10e4;
        }
      }
      else {
        if (uVar14 != 0x2000) goto LAB_00010f20;
        if ((int)param_3 < 1) {
          local_10cc = CONCAT22(local_10cc._2_2_,1);
          local_1040 = (undefined4 *******)((uint)local_1040 & 0xffffff00);
        }
        else {
          pcVar15 = (char *)*param_2;
          sVar8 = strlen(pcVar15);
          uVar14 = sVar8 + 1 & 0xffff;
          if (uVar21 <= uVar14) {
            uVar14 = uVar21;
          }
          local_10cc = CONCAT22(local_10cc._2_2_,(short)uVar14);
          memcpy(&local_1040,pcVar15,uVar14);
          local_41 = 0;
        }
      }
    }
    else if (uVar14 == 0x5000) {
      uVar14 = param_3 & 0xffff;
      if (uVar21 <= (param_3 & 0xffff)) {
        uVar14 = uVar21;
      }
      local_10cc = CONCAT22(local_10cc._2_2_,(short)uVar14);
      for (iVar9 = 0; iVar9 < (int)(local_10cc & 0xffff); iVar9 = iVar9 + 1) {
        iVar7 = sscanf((char *)*param_2,DAT_000114b8,local_10c0);
        if (iVar7 != 1) {
          uVar18 = *param_2;
          pcVar15 = DAT_000114bc;
          goto LAB_00011110;
        }
        pcVar20 = (char *)*param_2;
        pcVar15 = strchr(pcVar20,0x47);
        if (pcVar15 != (char *)0x0) {
          local_10c0[0] = local_10c0[0] * dVar2;
        }
        pcVar15 = strchr(pcVar20,0x4d);
        if (pcVar15 != (char *)0x0) {
          local_10c0[0] = local_10c0[0] * dVar3;
        }
        pcVar15 = strchr(pcVar20,0x6b);
        if (pcVar15 != (char *)0x0) {
          local_10c0[0] = local_10c0[0] * dVar4;
        }
        sscanf(pcVar20,DAT_000114b0,&local_10e4);
        iw_float2freq(SUB84(local_10c0[0],0),&local_1040 + iVar9 * 2);
        param_2 = param_2 + 1;
      }
    }
    else {
      if (uVar14 != 0x6000) {
LAB_00010f20:
        pFVar11 = (FILE *)*DAT_000114a0;
        pcVar15 = DAT_000114a4;
        goto LAB_00010f2c;
      }
      iVar9 = 0;
      uVar14 = param_3 & 0xffff;
      if (uVar21 <= (param_3 & 0xffff)) {
        uVar14 = uVar21;
      }
      local_10cc = CONCAT22(local_10cc._2_2_,(short)uVar14);
      for (; iVar9 < (int)(local_10cc & 0xffff); iVar9 = iVar9 + 1) {
        iVar7 = iw_in_addr(param_1,param_4,*param_2,&local_1040 + iVar9 * 4);
        if (iVar7 < 0) {
          uVar18 = *param_2;
          pcVar15 = DAT_000114ac;
LAB_00011110:
          printf(pcVar15,uVar18);
          return 0xffffffff;
        }
        param_2 = param_2 + 1;
      }
    }
    if (((*(ushort *)(iVar17 + 4) & 0x800) != 0) &&
       ((local_10cc & 0xffff) != (*(ushort *)(iVar17 + 4) & 0x7ff))) {
      printf(DAT_000114b4,param_5);
      return 0xffffffff;
    }
  }
  strncpy(acStack_10e0,param_4,0x10);
  if (((*(ushort *)(iVar17 + 4) & 0x800) == 0) || (iVar9 = iw_get_priv_size(), 0x10 < iVar9 + iVar6)
     ) {
    if ((*(short *)(iVar17 + 4) == 0) &&
       (((*(ushort *)(iVar17 + 6) & 0x800) != 0 && (iVar9 = iw_get_priv_size(), iVar9 < 0x11)))) {
      if (iVar6 != 0) {
        local_10d0 = pppppppuVar12;
      }
    }
    else {
      local_10cc = CONCAT22((short)pppppppuVar12,(undefined2)local_10cc);
      local_10d0 = &local_1040;
    }
  }
  else {
    if (iVar6 != 0) {
      local_10d0 = pppppppuVar12;
    }
    memcpy((void *)((int)&local_10d0 + iVar6),&local_1040,0x10 - iVar6);
  }
  iVar6 = ioctl(param_1,*(ulong *)(param_6 + iVar16),acStack_10e0);
  puVar5 = DAT_000114a0;
  if (iVar6 < 0) {
    fputs(DAT_000114c0,(FILE *)*DAT_000114a0);
    pFVar11 = (FILE *)*puVar5;
    uVar18 = *(undefined4 *)(param_6 + iVar16);
    piVar10 = __errno_location();
    pcVar15 = strerror(*piVar10);
    fprintf(pFVar11,DAT_000114c4,param_5,uVar18,pcVar15);
    return 0xffffffff;
  }
  uVar13 = *(ushort *)(iVar17 + 6);
  if ((uVar13 & 0x7000) == 0) {
    return uVar13 & 0x7000;
  }
  if ((uVar13 & 0x7ff) == 0) {
    return uVar13 & 0x7ff;
  }
  pppppppuVar19 = &local_1040;
  printf(DAT_000114c8,param_4,param_5);
  if (((*(ushort *)(iVar17 + 6) & 0x800) == 0) || (iVar16 = iw_get_priv_size(), 0x10 < iVar16)) {
    uVar14 = local_10cc & 0xffff;
  }
  else {
    uVar14 = *(ushort *)(iVar17 + 6) & 0x7ff;
    local_1040 = local_10d0;
    uStack_103c = local_10cc;
    uStack_1038 = uStack_10c8;
    uStack_1034 = uStack_10c4;
  }
  pcVar20 = DAT_000114d8;
  pcVar15 = DAT_000114d4;
  uVar18 = DAT_000114d0;
  dVar4 = DAT_00011490;
  dVar3 = DAT_00011488;
  dVar2 = DAT_00011480;
  uVar13 = *(ushort *)(iVar17 + 6) & 0x7000;
  if (uVar13 != 0x4000) {
    if (uVar13 < 0x4001) {
      if (uVar13 == 0x1000) {
        for (uVar21 = 0; uVar21 != uVar14; uVar21 = uVar21 + 1) {
          printf(pcVar20,(uint)*(byte *)((int)pppppppuVar19 + uVar21));
        }
        goto LAB_000113ac;
      }
      if (uVar13 == 0x2000) {
        *(char *)((int)pppppppuVar19 + uVar14) = '\0';
        puts((char *)pppppppuVar19);
        return 0;
      }
    }
    else {
      if (uVar13 == 0x5000) {
        for (uVar21 = 0; uVar21 != uVar14; uVar21 = uVar21 + 1) {
          uVar18 = iw_freq2float(pppppppuVar19 + uVar21 * 2);
          dVar22 = (double)CONCAT44(extraout_s1,uVar18);
          pcVar15 = DAT_000114dc;
          dVar1 = dVar2;
          if ((dVar22 < dVar2) && (pcVar15 = DAT_000114e0, dVar1 = dVar3, dVar22 < dVar3)) {
            pcVar15 = DAT_000114e4;
            dVar1 = dVar4;
          }
          printf(pcVar15,extraout_r1,SUB84(dVar22 / dVar1,0),
                 (int)((ulonglong)(dVar22 / dVar1) >> 0x20));
        }
        goto LAB_000113ac;
      }
      if (uVar13 == 0x6000) {
        for (uVar21 = 0; uVar21 != uVar14; uVar21 = uVar21 + 1) {
          if (uVar21 != 0) {
            sVar8 = strlen(param_5);
            printf(pcVar15,sVar8,uVar18);
          }
          iw_ether_ntop((char *)((int)pppppppuVar19 + 2),local_10c0);
          puts((char *)local_10c0);
          pppppppuVar19 = pppppppuVar19 + 4;
        }
        return 0;
      }
    }
    pFVar11 = (FILE *)*DAT_000114a0;
    pcVar15 = DAT_000114cc;
LAB_00010f2c:
    fputs(pcVar15,pFVar11);
    return 0xffffffff;
  }
  for (uVar21 = 0; uVar21 != uVar14; uVar21 = uVar21 + 1) {
    printf(pcVar20,pppppppuVar19[uVar21]);
  }
LAB_000113ac:
  putchar(10);
  return 0;
}



/* ===== FUN_000114e8 @ 000114e8 size=196 ===== */

undefined4 FUN_000114e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *local_1c;
  
  iVar1 = iw_get_priv_info(param_1,param_2,&local_1c);
  if (iVar1 < 1) {
    fprintf((FILE *)*DAT_000115ac,DAT_000115b0,param_2);
  }
  else {
    printf(DAT_000115b4,param_2);
    iVar2 = 0;
    do {
      if (((*(char *)((int)local_1c + iVar2 * 0x18 + 8) != '\0') &&
          (*(short *)((int)local_1c + iVar2 * 0x18 + 4) == 0)) &&
         (*(short *)((int)local_1c + iVar2 * 0x18 + 6) != 0)) {
        FUN_00010dc0(param_1,0,0,param_2,(int)local_1c + iVar2 * 0x18 + 8,local_1c,iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
    putchar(10);
  }
  if (local_1c != (void *)0x0) {
    free(local_1c);
  }
  return 0;
}



/* ===== _fini @ 000115b8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_priv_info @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_priv_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_version_info @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_version_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_freq2float @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_freq2float(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_enum_devices @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_enum_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_float2freq @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_float2freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_priv_size @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_priv_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_in_addr @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_in_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_ether_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sockets_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


