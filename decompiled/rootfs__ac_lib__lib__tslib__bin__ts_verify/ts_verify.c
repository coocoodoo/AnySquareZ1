// ts_verify — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010794 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::ioctl @ 000107b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002300c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000107c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000107d0 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00023014)();
  return;
}



/* ===== <EXTERNAL>::ts_read_mt @ 000107dc size=12 ===== */

void ts_read_mt(void)

{
  (*(code *)PTR_ts_read_mt_00023018)();
  return;
}



/* ===== <EXTERNAL>::ts_close @ 000107e8 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_0002301c)();
  return;
}



/* ===== <EXTERNAL>::perror @ 000107f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00023020)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023024)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 0001080c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023028)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002302c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010824 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00023030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_read @ 00010830 size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00023034)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001083c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023038)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 00010848 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_0002303c)();
  return;
}



/* ===== <EXTERNAL>::unlink @ 00010854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00023040)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 00010860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00023044)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002304c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_fd @ 00010890 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_00023054)();
  return;
}



/* ===== <EXTERNAL>::ts_setup @ 0001089c size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00023058)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw_mt @ 000108a8 size=12 ===== */

void ts_read_raw_mt(void)

{
  (*(code *)PTR_ts_read_raw_mt_0002305c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000108b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023060)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 000108c0 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00023064)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000108cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023068)();
  return piVar1;
}



/* ===== <EXTERNAL>::ts_load_module @ 000108d8 size=12 ===== */

void ts_load_module(void)

{
  (*(code *)PTR_ts_load_module_0002306c)();
  return;
}



/* ===== <EXTERNAL>::ts_reconfig @ 000108e4 size=12 ===== */

void ts_reconfig(void)

{
  (*(code *)PTR_ts_reconfig_00023070)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000108f0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023074)();
  return;
}



/* ===== <EXTERNAL>::free @ 000108fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00023078)(__ptr);
  return;
}



/* ===== entry @ 00010dd4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023048)
            (DAT_00010e08,param_2,&stack0x00000004,DAT_00010e0c,DAT_00010e04,param_1);
  return;
}



/* ===== FUN_00010e10 @ 00010e10 size=32 ===== */

void FUN_00010e10(void)

{
  if (DAT_00010e34 == DAT_00010e30) {
    return;
  }
  if (DAT_00010e38 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010e38)();
  return;
}



/* ===== _FINI_0 @ 00010e74 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010eb0;
  if (*DAT_00010eb0 != '\0') {
    return;
  }
  FUN_00010e10();
  if (DAT_00010eb4 != 0) {
    __deregister_frame_info(DAT_00010eb8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010ebc size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010ee0 != 0) {
    __register_frame_info(DAT_00010ee8,DAT_00010ee4);
  }
  if ((DAT_00010e6c - DAT_00010e68 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010e70 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010e70)();
  return;
}



/* ===== FUN_00010eec @ 00010eec size=36 ===== */

void FUN_00010eec(undefined4 *param_1)

{
  char *__s;
  
  __s = (char *)tslib_version();
  puts(__s);
  printf((char *)(DAT_00010f10 + 0x10f0c),*param_1);
  return;
}



/* ===== FUN_00010f14 @ 00010f14 size=264 ===== */

size_t FUN_00010f14(int *param_1,size_t param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  size_t *psVar4;
  
  if (param_1[5] == 0) {
    pvVar3 = calloc(param_2,0x14);
    param_1[5] = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      perror((char *)(DAT_0001101c + 0x10ff0));
      psVar4 = (size_t *)__errno_location();
      return *psVar4;
    }
  }
  iVar1 = ts_setup(param_1[1],param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    free((void *)param_1[5]);
    perror((char *)(DAT_00011020 + 0x11010));
    psVar4 = (size_t *)__errno_location();
    sVar2 = *psVar4;
  }
  else {
    if (param_3 == 1) {
      do {
        while( true ) {
          if (param_4 == 0) break;
          sVar2 = ts_read_raw();
          if (sVar2 == param_2) goto LAB_00010f6c;
        }
        sVar2 = ts_read(*param_1,param_1[5],param_2);
      } while (sVar2 != param_2);
    }
    else if (param_4 == 0) {
      sVar2 = ts_read(iVar1,param_1[5],param_2);
    }
    else {
      sVar2 = ts_read_raw();
    }
LAB_00010f6c:
    ts_close(*param_1);
    free((void *)param_1[5]);
    param_1[5] = 0;
  }
  return sVar2;
}



/* ===== FUN_00011024 @ 00011024 size=72 ===== */

void FUN_00011024(undefined4 *param_1)

{
  void *__ptr;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 7);
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      __ptr = *(void **)(param_1[4] + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        uVar1 = (uint)*(byte *)(param_1 + 7);
      }
    } while (iVar2 < (int)uVar1);
  }
  ts_close(*param_1);
  return;
}



/* ===== FUN_0001106c @ 0001106c size=712 ===== */

int FUN_0001106c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  size_t __nmemb;
  int iVar10;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  
  iVar1 = ts_setup(param_1[1],param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    perror((char *)(DAT_00011340 + 0x112e0));
    piVar4 = __errno_location();
    iVar1 = *piVar4;
  }
  else {
    iVar1 = ts_fd();
    iVar1 = ioctl(iVar1,0x8018456f,auStack_38);
    if (-1 < iVar1) {
      __nmemb = (local_30 + 1) - local_34;
      param_1[6] = __nmemb;
      pvVar2 = malloc(param_2 << 2);
      param_1[4] = (int)pvVar2;
      if (pvVar2 == (void *)0x0) {
        ts_close(*param_1);
        return -0xc;
      }
      puVar8 = (undefined4 *)((int)pvVar2 + -4);
      iVar1 = 0;
      do {
        pvVar2 = calloc(__nmemb,0x48);
        puVar8 = puVar8 + 1;
        *puVar8 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          if (iVar1 != 0) {
            iVar5 = 0;
            do {
              puVar8 = (undefined4 *)(param_1[4] + iVar5);
              iVar5 = iVar5 + 4;
              free((void *)*puVar8);
            } while (iVar1 << 2 != iVar5);
          }
          free((void *)param_1[4]);
          ts_close(*param_1);
          return -0xc;
        }
        iVar1 = iVar1 + 1;
      } while (param_2 != iVar1);
      goto LAB_0001110c;
    }
    perror((char *)(DAT_0001133c + 0x112b8));
    ts_close(*param_1);
    piVar4 = __errno_location();
    iVar1 = *piVar4;
  }
  if (iVar1 < 0) {
    return iVar1;
  }
LAB_0001110c:
  if (param_3 == 1) {
    iVar1 = 0;
    pcVar9 = (char *)(DAT_00011338 + 0x111f4);
    do {
      do {
        if (param_4 == 0) {
          iVar5 = ts_read_mt();
        }
        else {
          iVar5 = ts_read_raw_mt(*param_1,param_1[4],param_1[6],param_2);
        }
      } while (iVar5 == -0xb);
      iVar1 = iVar1 + iVar5;
      if (iVar5 < 0) {
        perror((char *)(DAT_00011344 + 0x112f8));
        iVar3 = param_1[4];
        iVar1 = iVar5;
        goto joined_r0x00011300;
      }
      if ((char)param_1[2] != '\0') {
        printf(pcVar9,iVar5);
      }
    } while (iVar1 < param_2);
    iVar3 = param_1[4];
  }
  else {
    if (param_4 == 0) {
      iVar1 = ts_read_mt();
    }
    else {
      iVar1 = ts_read_raw_mt(*param_1,param_1[4],param_1[6],param_2);
    }
    if (iVar1 < 0) {
      perror((char *)(DAT_00011348 + 0x11314));
      iVar3 = param_1[4];
    }
    else {
      iVar3 = param_1[4];
      if (iVar1 != 0) {
        iVar10 = 0;
        iVar5 = param_1[6];
        pcVar9 = (char *)(DAT_00011334 + 0x1115c);
        do {
          if (0 < iVar5) {
            iVar7 = 0;
            do {
              while( true ) {
                iVar6 = iVar7 * 0x48 + *(int *)(iVar3 + iVar10 * 4);
                iVar7 = iVar7 + 1;
                if ((((*(ushort *)(iVar6 + 0x46) & 1) == 0) || (*(uint *)(iVar6 + 8) < 0x100)) ||
                   ((char)param_1[2] == '\0')) break;
                puts(pcVar9);
                iVar5 = param_1[6];
                iVar3 = param_1[4];
                if (iVar5 <= iVar7) goto LAB_000111bc;
              }
            } while (iVar7 < iVar5);
          }
LAB_000111bc:
          iVar10 = iVar10 + 1;
        } while (iVar1 != iVar10);
      }
    }
  }
joined_r0x00011300:
  if (iVar3 != 0) {
    FUN_00011024(param_1);
  }
  return iVar1;
}



/* ===== FUN_0001134c @ 0001134c size=1404 ===== */

void FUN_0001134c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  printf((char *)(DAT_000118c8 + 0x11364),(uint)*(ushort *)((int)param_1 + 0x26));
  uVar1 = FUN_0001106c(param_1,1,0);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_00011944 + 0x11870));
  }
  else {
    puts((char *)(DAT_000118cc + 0x11398));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  iVar2 = FUN_0001106c(param_1,5,0);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_0001190c + 0x11754));
  }
  else {
    puts((char *)(DAT_000118d0 + 0x113dc));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  uVar1 = FUN_0001106c(param_1,1,1,0);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_0001192c + 0x11810));
  }
  else {
    puts((char *)(DAT_000118d4 + 0x1141c));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  iVar2 = FUN_0001106c(param_1,5,1,0);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_000118d8 + 0x11460));
  }
  else {
    puts((char *)(DAT_00011928 + 0x117f4));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  uVar1 = FUN_00010f14(param_1,1,0);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_0001193c + 0x11850));
  }
  else {
    puts((char *)(DAT_000118dc + 0x11494));
    *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  }
  iVar2 = FUN_00010f14(param_1,5,0);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_000118e0 + 0x114d8));
  }
  else {
    puts((char *)(DAT_00011924 + 0x117d8));
    *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  }
  uVar1 = FUN_00010f14(param_1,1,1,0);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_00011934 + 0x11830));
  }
  else {
    puts((char *)(DAT_000118e4 + 0x1150c));
    *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  }
  uVar1 = FUN_0001106c(param_1,1,0);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_00011930 + 0x11820));
  }
  else {
    puts((char *)(DAT_000118e8 + 0x1154c));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  iVar2 = FUN_0001106c(param_1,5,0,1);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_000118ec + 0x11590));
  }
  else {
    puts((char *)(DAT_00011920 + 0x117bc));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  uVar1 = FUN_0001106c(param_1,1,1);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_00011938 + 0x11840));
  }
  else {
    puts((char *)(DAT_000118f0 + 0x115c4));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  iVar2 = FUN_0001106c(param_1,5,1);
  *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_000118f4 + 0x11608));
  }
  else {
    puts((char *)(DAT_0001191c + 0x117a0));
    *(short *)(param_1 + 8) = (short)param_1[8] + 1;
  }
  uVar1 = FUN_00010f14(param_1,1,0);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_00011940 + 0x11860));
  }
  else {
    puts((char *)(DAT_000118f8 + 0x1163c));
    *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  }
  iVar2 = FUN_00010f14(param_1,5,0,1);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (iVar2 - 2U < 4) {
    puts((char *)(DAT_000118fc + 0x11680));
  }
  else {
    puts((char *)(DAT_00011918 + 0x11784));
    *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  }
  uVar1 = FUN_00010f14(param_1,1,1);
  *(short *)((int)param_1 + 0x22) = *(short *)((int)param_1 + 0x22) + 1;
  if (uVar1 < 2) {
    puts((char *)(DAT_0001194c + 0x11894));
  }
  iVar2 = ts_setup(param_1[1],0);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    perror((char *)(DAT_00011950 + 0x118a4));
    piVar3 = __errno_location();
    iVar2 = *piVar3;
  }
  else {
    iVar2 = ts_reconfig();
    if ((char)param_1[2] != '\0') {
      printf((char *)(DAT_00011948 + 0x11884),iVar2);
    }
    ts_close(*param_1);
  }
  if (iVar2 == 0) {
    puts((char *)(DAT_00011900 + 0x116f0));
  }
  else {
    puts((char *)(DAT_00011914 + 0x11774));
  }
  iVar2 = ts_setup(param_1[1],0);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    perror((char *)(DAT_00011954 + 0x118bc));
    piVar3 = __errno_location();
    iVar2 = *piVar3;
  }
  else {
    iVar2 = ts_load_module(iVar2,DAT_00011904 + 0x11714);
    ts_close(*param_1);
  }
  if (iVar2 == 0) {
    puts((char *)(DAT_00011908 + 0x11738));
  }
  else {
    puts((char *)(DAT_00011910 + 0x11764));
  }
  *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + 1;
  return;
}



/* ===== _fini @ 00011958 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw_mt @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_mt @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_load_module @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_load_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_reconfig @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_reconfig(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


