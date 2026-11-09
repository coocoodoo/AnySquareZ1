// ts_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000109b0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 000109d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002300c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000109e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000109ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000109f8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00023018)();
  return;
}



/* ===== <EXTERNAL>::munmap @ 00010a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002301c)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00023020)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::qsort @ 00010a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00023024)(__base);
  return;
}



/* ===== <EXTERNAL>::ts_close @ 00010a28 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00023028)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002302c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023034)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023038)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap @ 00010a64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_0002303c)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010a70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023040)();
  return;
}



/* ===== <EXTERNAL>::ts_read @ 00010a7c size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00023044)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010a88 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023048)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 00010a94 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_0002304c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00010aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00023050)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00010aac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00023054)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::memset @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002305c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_fd @ 00010ad0 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_00023060)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00023064)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00023068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 00010af4 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_0002306c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023070)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 00010b0c size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00023074)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023078)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002307c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023080)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010b3c size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00023084)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023088)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002308c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b60 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023090)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023098)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002309c)(__ptr);
  return;
}



/* ===== FUN_00010b90 @ 00010b90 size=976 ===== */

undefined4 FUN_00010b90(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint *puVar10;
  uint *puVar11;
  __sighandler_t __handler;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar13 = DAT_00010f6c;
  iVar8 = DAT_00010f68;
  iVar7 = DAT_00010f64;
  __handler = (__sighandler_t)(DAT_00010f60 + 0x10bb0);
  signal(0xb,__handler);
  signal(2,__handler);
  signal(0xf,__handler);
  iVar13 = iVar13 + 0x10bf8;
  do {
    local_58 = *(uint *)(iVar7 + 0x10be8);
    local_54 = *(uint *)(iVar7 + 0x10bec);
    local_50 = *(int *)(iVar7 + 0x10bf0);
    local_4c = *(undefined4 *)(iVar7 + 0x10bf4);
    local_5c = 0;
    local_48 = *(undefined4 *)(iVar7 + 0x10bf8);
    uStack_44 = *(undefined4 *)(iVar7 + 0x10bfc);
    uStack_40 = *(undefined4 *)(iVar7 + 0x10c00);
    uStack_3c = *(undefined4 *)(iVar7 + 0x10c04);
    uStack_38 = *(undefined4 *)(iVar7 + 0x10c08);
    uStack_34 = *(undefined4 *)(iVar7 + 0x10c0c);
    uStack_30 = *(undefined4 *)(iVar7 + 0x10c10);
    uStack_2c = *(undefined4 *)(iVar7 + 0x10c14);
    iVar4 = getopt_long(param_1,param_2,iVar8 + 0x10bec,&local_58,&local_5c);
    piVar5 = __errno_location();
    *piVar5 = 0;
    if (iVar4 == -1) {
      iVar7 = ts_setup(0);
      if (iVar7 == 0) {
        perror((char *)(DAT_00010fa0 + 0x10f58));
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      iVar8 = FUN_00011878();
      if (iVar8 == 0) {
        puVar10 = *(uint **)(iVar13 + DAT_00010f78);
        puVar11 = *(uint **)(iVar13 + DAT_00010f7c);
        uVar6 = *puVar10 >> 1;
        uVar14 = *puVar11 >> 1;
        iVar8 = 0;
        puVar15 = (undefined4 *)(DAT_00010f80 + 0x10cd8);
        do {
          iVar13 = iVar8 + 1;
          FUN_00011e40(iVar8,*puVar15);
          iVar8 = iVar13;
          puVar15 = puVar15 + 1;
        } while (iVar13 != 6);
        uVar16 = 0;
        iVar13 = DAT_00010f88 + 0x10d28;
        uVar12 = 0;
        pvVar9 = memset((void *)(DAT_00010f84 + 0x10d20),0,0x48);
        iVar8 = DAT_00010f94;
        iVar17 = DAT_00010f8c + 0x10d4c;
        iVar4 = DAT_00010f90 + 0x10d50;
        uVar2 = *puVar10 * 3;
        uVar1 = *puVar10 >> 2;
        *(uint *)((int)pvVar9 + 0x38) = uVar1;
        *(uint *)((int)pvVar9 + 0x20) = uVar1;
        *(uint *)((int)pvVar9 + 8) = uVar1;
        *(int *)((int)pvVar9 + 0x10) = iVar17;
        *(uint *)((int)pvVar9 + 0x18) = uVar2 >> 3;
        *(uint *)((int)pvVar9 + 0x30) = uVar2 >> 2;
        *(int *)((int)pvVar9 + 0x28) = iVar4;
        *(int *)((int)pvVar9 + 0x40) = iVar8 + 0x10d68;
        *(undefined4 *)((int)pvVar9 + 0x3c) = 0x14;
        *(undefined4 *)((int)pvVar9 + 0x24) = 0x14;
        *(undefined4 *)((int)pvVar9 + 0xc) = 0x14;
        *(undefined4 *)((int)pvVar9 + 0x34) = 10;
        *(undefined4 *)((int)pvVar9 + 0x1c) = 10;
        *(undefined4 *)((int)pvVar9 + 4) = 10;
        FUN_000111fc();
        while( true ) {
          if (uVar12 == 1) {
            iVar8 = ts_read(iVar7,&local_58,1);
          }
          else {
            FUN_00012310(uVar6,uVar14,0x80000002);
            iVar8 = ts_read(iVar7,&local_58,1);
            FUN_00012310(uVar6,uVar14,0x80000002);
          }
          if (iVar8 < 0) break;
          if (iVar8 == 1) {
            bVar3 = false;
            iVar8 = 0;
LAB_00010e04:
            do {
              iVar17 = iVar8 + 1;
              iVar4 = FUN_00011394(iVar8 * 0x18 + iVar13,local_58,local_54,local_50);
              if (iVar4 != 0) {
                if (iVar8 == 1) {
                  FUN_000111fc();
                  uVar16 = 1;
                  iVar8 = iVar17;
                  goto LAB_00010e04;
                }
                if (iVar8 == 2) {
                  bVar3 = true;
                  break;
                }
                FUN_000111fc();
                uVar16 = 0;
              }
              iVar8 = iVar17;
            } while (iVar17 != 3);
            printf((char *)(DAT_00010f98 + 0x10e88),local_4c,local_48,local_58,local_54,local_50);
            if (local_50 == 0) {
              uVar16 = uVar16 & 0x7fffffff;
            }
            else {
              if (uVar16 == 0x80000001) {
                FUN_00012210(uVar6,uVar14,local_58,local_54,2);
              }
              uVar16 = uVar16 | 0x80000000;
              uVar6 = local_58;
              uVar14 = local_54;
            }
            if (bVar3) {
              FUN_000125b4(0,0,*puVar10 - 1,*puVar11 - 1,0);
              FUN_00011d10();
              ts_close(iVar7);
              return 0;
            }
            uVar12 = uVar16 & 0xf;
          }
        }
        perror((char *)(DAT_00010f9c + 0x10f38));
      }
      FUN_00011d10();
      ts_close(iVar7);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (iVar4 != 0x72) {
      if (iVar4 == 0x76) {
        FUN_00011778();
        return 0;
      }
      goto LAB_00010c58;
    }
    uVar6 = atoi((char *)**(undefined4 **)(iVar13 + DAT_00010f70));
    **(undefined1 **)(iVar13 + DAT_00010f74) = (char)uVar6;
    if (3 < (uVar6 & 0xff)) {
LAB_00010c58:
      FUN_00011118();
      return 0;
    }
  } while( true );
}



/* ===== entry @ 00010fa4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023058)
            (DAT_00010fd8,param_2,&stack0x00000004,DAT_00010fdc,DAT_00010fd4,param_1);
  return;
}



/* ===== FUN_00010fe0 @ 00010fe0 size=32 ===== */

void FUN_00010fe0(void)

{
  if (DAT_00011004 == DAT_00011000) {
    return;
  }
  if (DAT_00011008 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011008)();
  return;
}



/* ===== _FINI_0 @ 00011044 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011080;
  if (*DAT_00011080 != '\0') {
    return;
  }
  FUN_00010fe0();
  if (DAT_00011084 != 0) {
    __deregister_frame_info(DAT_00011088);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001108c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110b0 != 0) {
    __register_frame_info(DAT_000110b8,DAT_000110b4);
  }
  if ((DAT_0001103c - DAT_00011038 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011040 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011040)();
  return;
}



/* ===== FUN_000110bc @ 000110bc size=76 ===== */

void FUN_000110bc(undefined4 param_1)

{
  int iVar1;
  
  FUN_00011d10();
  iVar1 = DAT_00011108 + 0x110d8;
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_0001110c));
  printf((char *)(DAT_00011110 + 0x110f0),param_1);
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_00011114));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011118 @ 00011118 size=184 ===== */

void FUN_00011118(void)

{
  ts_print_ascii_logo(0x10);
  FUN_00011778();
  putchar(10);
  puts((char *)(DAT_000111d0 + 0x1113c));
  putchar(10);
  puts((char *)(DAT_000111d4 + 0x11150));
  puts((char *)(DAT_000111d8 + 0x1115c));
  puts((char *)(DAT_000111dc + 0x11168));
  puts((char *)(DAT_000111e0 + 0x11174));
  puts((char *)(DAT_000111e4 + 0x11180));
  puts((char *)(DAT_000111e8 + 0x1118c));
  puts((char *)(DAT_000111ec + 0x11198));
  puts((char *)(DAT_000111f0 + 0x111a4));
  puts((char *)(DAT_000111f4 + 0x111b0));
  putchar(10);
  puts((char *)(DAT_000111f8 + 0x111c4));
  putchar(10);
  return;
}



/* ===== FUN_000111fc @ 000111fc size=176 ===== */

void FUN_000111fc(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  iVar1 = DAT_000112b8;
  puVar3 = *(uint **)(DAT_000112ac + 0x11210 + DAT_000112b0);
  puVar2 = *(uint **)(DAT_000112ac + 0x11210 + DAT_000112b4);
  FUN_000125b4(0,0,*puVar2 - 1,*puVar3 - 1,0);
  FUN_000121b4(*puVar2 >> 1,*puVar3 >> 2,DAT_000112bc + 0x11268);
  FUN_000121b4(*puVar2 >> 1,(*puVar3 >> 2) + 0x14,DAT_000112c0 + 0x11284);
  FUN_000112e4(iVar1 + 0x1125c);
  FUN_000112e4(iVar1 + 0x11274);
  FUN_000112e4(iVar1 + 0x1128c);
  return;
}



/* ===== FUN_000112e4 @ 000112e4 size=380 ===== */

void FUN_000112e4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1[5] & 1U) == 0) {
    uVar1 = 2;
    uVar2 = 4;
  }
  else {
    uVar1 = 0;
    uVar2 = 5;
  }
  FUN_00012538(*param_1,param_1[1],*param_1 + param_1[2],param_1[1] + param_1[3],1);
  FUN_000125b4(*param_1 + 1,param_1[1] + 1,*param_1 + param_1[2] + -2,param_1[1] + param_1[3] + -2,
               uVar2);
  FUN_000121b4(*param_1 + param_1[2] / 2,param_1[1] + param_1[3] / 2,param_1[4],uVar1);
  return;
}



/* ===== FUN_00011394 @ 00011394 size=188 ===== */

uint FUN_00011394(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[5];
  uVar1 = uVar2 & 1;
  if ((((param_2 < *param_1) || (param_3 < param_1[1])) || (*param_1 + param_1[2] <= param_2)) ||
     (param_1[1] + param_1[3] <= param_3)) {
    if (param_4 != 0) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1[5] = uVar2 & 0xfffffffe;
      FUN_000112e4(param_1);
      return 0;
    }
  }
  else if (param_4 != 0) {
    if (uVar1 == 0) {
      param_1[5] = uVar2 | 1;
      FUN_000112e4();
      return 0;
    }
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  param_1[5] = uVar2 & 0xfffffffe;
  FUN_000112e4(param_1);
  return uVar1;
}



/* ===== FUN_00011450 @ 00011450 size=456 ===== */

void FUN_00011450(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint __nmemb;
  int local_a34 [645];
  
  do {
    iVar1 = ts_read_raw(param_1,local_a34 + 5,1);
    if (iVar1 < 0) goto LAB_00011600;
  } while (local_a34[7] == 0);
  __nmemb = 0;
  do {
    if ((int)__nmemb < 0x7f) {
      __nmemb = __nmemb + 1;
    }
    iVar1 = ts_read_raw(param_1,local_a34 + __nmemb * 5 + 5,1);
    if (iVar1 < 0) {
LAB_00011600:
      perror((char *)(DAT_0001162c + 0x1160c));
      FUN_00011d10();
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  } while (local_a34[__nmemb * 5 + 7] != 0);
  iVar1 = (int)__nmemb >> 1;
  printf((char *)(DAT_00011618 + 0x114e0),__nmemb);
  if (param_2 == (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011628 + 0x115f0));
    if ((__nmemb & 1) == 0) goto LAB_000115a0;
  }
  else {
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_0001161c + 0x11500));
    if ((__nmemb & 1) == 0) {
      *param_2 = (local_a34[(iVar1 + -1) * 5 + 5] + local_a34[iVar1 * 5 + 5]) / 2;
      if (param_3 == (int *)0x0) {
        return;
      }
      qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011624 + 0x115a0));
LAB_000115a0:
      *param_3 = (local_a34[(iVar1 + -1) * 5 + 6] + local_a34[iVar1 * 5 + 6]) / 2;
      return;
    }
    *param_2 = local_a34[iVar1 * 5 + 5];
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011620 + 0x11538));
  }
  *param_3 = local_a34[iVar1 * 5 + 6];
  return;
}



/* ===== FUN_00011630 @ 00011630 size=228 ===== */

void FUN_00011630(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_a20 [640];
  
  do {
    iVar1 = ts_read(param_1,aiStack_a20,1);
    if (iVar1 < 0) goto LAB_000116fc;
  } while (aiStack_a20[2] == 0);
  iVar1 = 0;
  while( true ) {
    if (iVar1 < 0x7f) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = ts_read(param_1,aiStack_a20 + iVar1 * 5,1);
    if (iVar2 < 0) break;
    if (aiStack_a20[iVar1 * 5 + 2] == 0) {
      printf((char *)(DAT_00011714 + 0x116bc),iVar1);
      if (param_2 != (int *)0x0) {
        *param_2 = aiStack_a20[(iVar1 + -1) * 5];
      }
      if (param_3 != (int *)0x0) {
        *param_3 = aiStack_a20[(iVar1 + -1) * 5 + 1];
      }
      return;
    }
  }
LAB_000116fc:
  perror((char *)(DAT_00011718 + 0x11708));
  FUN_00011d10();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011778 @ 00011778 size=28 ===== */

void FUN_00011778(void)

{
  undefined4 uVar1;
  
  uVar1 = tslib_version();
  printf((char *)((int)&DAT_00011794 + DAT_00011794),uVar1);
  return;
}



/* ===== FUN_00011798 @ 00011798 size=204 ===== */

void FUN_00011798(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00011864 + 0x117a8;
  iVar2 = *(int *)(DAT_0001186c + 0x117b8);
  iVar4 = *(int *)(DAT_0001186c + 0x117bc);
  cVar1 = **(char **)(iVar3 + DAT_00011868);
  if (cVar1 == '\x02') {
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00011874) + -1) - param_1) +
               *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00011870) + 0x3fffffff) - param_2) * 4);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x01') {
      *param_3 = iVar4 * param_1 + *(int *)(iVar2 + param_2 * 4);
      return;
    }
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00011870) + -1) - param_2) +
               *(int *)(iVar2 + param_1 * 4);
    return;
  }
  *param_3 = iVar4 * param_2 +
             *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00011874) + 0x3fffffff) - param_1) * 4);
  return;
}



/* ===== FUN_00011878 @ 00011878 size=1048 ===== */

undefined4 FUN_00011878(void)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__s;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int extraout_r1;
  undefined4 uVar10;
  void *extraout_r3;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  char *__format;
  undefined4 local_a4;
  ushort local_a0 [4];
  char acStack_98 [128];
  
  iVar12 = DAT_00011c94;
  pcVar1 = getenv((char *)(DAT_00011c90 + 0x11888));
  iVar12 = iVar12 + 0x11898;
  if (pcVar1 == (char *)0x0) {
    *(int *)(DAT_00011cd4 + 0x11b74) = DAT_00011cd8 + 0x11b70;
  }
  else {
    *(char **)(DAT_00011c98 + 0x118b0) = pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_00011c9c + 0x118b4));
  iVar2 = DAT_00011ca0;
  *(char **)(DAT_00011ca0 + 0x118cc) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)(DAT_00011cd0 + 0x11b58);
    *(char **)(iVar2 + 0x118cc) = pcVar1;
  }
  else {
    iVar2 = strcmp(pcVar1,(char *)(DAT_00011ca4 + 0x118d8));
    if (iVar2 == 0) goto LAB_000119e0;
    sVar3 = strlen(pcVar1);
    if (0x7f < sVar3) {
      return 0xffffffff;
    }
  }
  __format = (char *)(DAT_00011ca8 + 0x11908);
  sprintf(acStack_98,__format,pcVar1,1);
  iVar2 = open(acStack_98,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00011cec + 0x11bdc));
    return 0xffffffff;
  }
  iVar4 = ioctl(iVar2,0x5600,&local_a4);
  iVar5 = DAT_00011cac;
  if (iVar4 < 0) {
    close(iVar2);
    perror((char *)(DAT_00011cf0 + 0x11bf8));
    return 0xffffffff;
  }
  close(iVar2);
  sprintf(acStack_98,__format,*(undefined4 *)(iVar5 + 0x1195c),local_a4);
  iVar2 = open(acStack_98,0x802);
  *(int *)(iVar5 + 0x11960) = iVar2;
  if (iVar2 < 0) {
    perror((char *)(DAT_00011cf4 + 0x11c0c));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5603,local_a0);
  if (iVar5 == 0) {
    *(uint *)(DAT_00011cb0 + 0x11998) = (uint)local_a0[0];
  }
  iVar5 = ioctl(iVar2,0x5606,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00011cf8 + 0x11c20));
    close(*(int *)(DAT_00011cfc + 0x11c3c));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5607,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00011d00 + 0x11c44));
    close(*(int *)(DAT_00011d04 + 0x11c60));
    return 0xffffffff;
  }
  iVar2 = ioctl(iVar2,0x4b3a,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00011cdc + 0x11b84));
    close(*(int *)(DAT_00011ce0 + 0x11ba0));
    return 0xffffffff;
  }
LAB_000119e0:
  iVar2 = DAT_00011cb4;
  iVar5 = open(*(char **)(DAT_00011cb4 + 0x119f8),2);
  *(int *)(iVar2 + 0x11a04) = iVar5;
  if (iVar5 == -1) {
    perror((char *)(DAT_00011ce8 + 0x11bc8));
    uVar9 = 0xffffffff;
  }
  else {
    iVar4 = ioctl(iVar5,0x4602,iVar2 + 0x11a08);
    if (iVar4 < 0) {
      uVar9 = 0xffffffff;
      perror((char *)(DAT_00011ce4 + 0x11bb0));
      close(*(int *)(iVar2 + 0x11a04));
    }
    else {
      iVar6 = ioctl(iVar5,0x4600,iVar2 + 0x11a4c);
      iVar4 = DAT_00011cbc;
      if (iVar6 < 0) {
        uVar9 = 0xffffffff;
        perror((char *)(DAT_00011d0c + 0x11c84));
        close(*(int *)(iVar2 + 0x11a04));
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + 0x11a4c);
        uVar10 = *(undefined4 *)(iVar2 + 0x11a50);
        **(undefined4 **)(iVar12 + DAT_00011cb8) = uVar9;
        iVar2 = DAT_00011cc0;
        **(undefined4 **)(iVar12 + iVar4) = uVar10;
        iVar6 = DAT_00011cc8;
        iVar4 = DAT_00011cc4;
        if ((**(byte **)(iVar12 + iVar2) & 1) == 0) {
          **(undefined4 **)(iVar12 + DAT_00011cc4) = uVar9;
          **(undefined4 **)(iVar12 + iVar6) = uVar10;
        }
        else {
          **(undefined4 **)(iVar12 + DAT_00011cc8) = uVar9;
          **(undefined4 **)(iVar12 + iVar4) = uVar10;
        }
        iVar12 = DAT_00011ccc;
        puVar13 = (undefined4 *)(DAT_00011ccc + 0x11a94);
        __s = mmap((void *)0x0,*(size_t *)(DAT_00011ccc + 0x11ac0),3,1,iVar5,0);
        *(void **)(iVar12 + 0x11b90) = __s;
        if (__s == (void *)0xffffffff) {
          perror((char *)(DAT_00011d08 + 0x11c68));
          close(*(int *)(iVar12 + 0x11aa8));
          uVar9 = 0xffffffff;
        }
        else {
          memset(__s,0,*(size_t *)(iVar12 + 0x11ac0));
          iVar5 = *(int *)(iVar12 + 0x11afc);
          *(uint *)(iVar12 + 0x11a98) = *(int *)(iVar12 + 0x11b08) + 7U >> 3;
          *(int *)(iVar12 + 0x11b94) =
               ~(-1 << (*(uint *)(iVar12 + 0x11b38) & 0xff)) << (*(uint *)(iVar12 + 0x11b34) & 0xff)
          ;
          puVar7 = malloc(iVar5 * 4);
          pvVar11 = extraout_r3;
          iVar2 = extraout_r1;
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar12 + 0x11ad8);
            pvVar11 = __s;
          }
          *puVar13 = puVar7;
          if (iVar5 != 0) {
            puVar13 = puVar7;
            do {
              puVar8 = puVar13 + 1;
              *puVar13 = pvVar11;
              pvVar11 = (void *)((int)pvVar11 + iVar2);
              puVar13 = puVar8;
            } while (puVar7 + iVar5 != puVar8);
          }
          uVar9 = 0;
        }
      }
    }
  }
  return uVar9;
}



/* ===== FUN_00011d10 @ 00011d10 size=260 ===== */

void FUN_00011d10(void)

{
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  int __fd;
  
  iVar2 = DAT_00011e14;
  iVar3 = DAT_00011e18 + 0x11d2c;
  __addr = memset(*(void **)((int)&DAT_00011e24 + DAT_00011e14),0,
                  *(size_t *)(DAT_00011e14 + 0x11d54));
  munmap(__addr,*(size_t *)(iVar2 + 0x11d54));
  close(*(int *)(iVar2 + 0x11d3c));
  iVar1 = strcmp(*(char **)(iVar2 + 0x11d34),(char *)(DAT_00011e1c + 0x11d58));
  if (iVar1 != 0) {
    __fd = *(int *)(iVar2 + 0x11d38);
    iVar1 = ioctl(__fd,0x4b3a,0);
    if (iVar1 < 0) {
      perror((char *)(DAT_00011e3c + 0x11e0c));
      __fd = *(int *)(iVar2 + 0x11d38);
    }
    if ((-1 < *(int *)(DAT_00011e30 + 0x11dc0)) && (iVar2 = ioctl(__fd,0x5606), iVar2 != 0)) {
      perror((char *)(DAT_00011e34 + 0x11df0));
      __fd = *(int *)(DAT_00011e38 + 0x11e0c);
    }
    close(__fd);
  }
  free(*(void **)(DAT_00011e20 + 0x11d6c));
  iVar1 = DAT_00011e2c;
  iVar2 = DAT_00011e28;
  **(undefined4 **)(iVar3 + DAT_00011e24) = 0;
  **(undefined4 **)(iVar3 + iVar2) = 0;
  **(undefined1 **)(iVar3 + iVar1) = 0;
  return;
}



/* ===== FUN_00011e40 @ 00011e40 size=264 ===== */

void FUN_00011e40(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort local_2e;
  ushort local_2c;
  undefined2 local_2a;
  uint local_28 [2];
  ushort *local_20;
  ushort *local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  
  if (0xff < param_1) {
    return;
  }
  if (*(int *)(DAT_00011f48 + 0x11e60) - 2U < 3) {
    uVar2 = ((int)((param_2 & 0xffffff) >> 8 & 0xff) >>
            (8U - *(int *)(DAT_00011f48 + 0x11ee8) & 0xff)) <<
            (*(uint *)(DAT_00011f48 + 0x11ee4) & 0xff) |
            ((int)((param_2 & 0xffffff) >> 0x10) >> (8U - *(int *)(DAT_00011f48 + 0x11edc) & 0xff))
            << (*(uint *)(DAT_00011f48 + 0x11ed8) & 0xff) |
            ((int)(param_2 & 0xff) >> (8U - *(int *)(DAT_00011f48 + 0x11ef4) & 0xff)) <<
            (*(uint *)(DAT_00011f48 + 0x11ef0) & 0xff);
  }
  else {
    local_2e = (ushort)(param_2 >> 8) & 0xff00;
    local_2c = (ushort)param_2 & 0xff00;
    local_2a = (undefined2)((param_2 & 0xffff) << 8);
    local_28[1] = 1;
    local_20 = &local_2e;
    local_1c = &local_2c;
    local_18 = &local_2a;
    local_14 = 0;
    local_28[0] = param_1;
    iVar1 = ioctl(*(int *)(DAT_00011f48 + 0x11e70),0x4605,local_28);
    uVar2 = param_1;
    if (iVar1 < 0) {
      perror((char *)(DAT_00011f50 + 0x11f40));
    }
  }
  *(uint *)(DAT_00011f4c + param_1 * 4 + 0x11fcc) = uVar2;
  return;
}



/* ===== FUN_00011f54 @ 00011f54 size=364 ===== */

void FUN_00011f54(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte extraout_r12;
  bool bVar9;
  uint *local_c;
  
  if (-1 < (int)param_1) {
    if (((param_1 < **(uint **)(DAT_000120c0 + 0x11f64 + DAT_000120c4) && -1 < (int)param_2) &&
        (param_2 < **(uint **)(DAT_000120c0 + 0x11f64 + DAT_000120c8))) &&
       ((param_3 & 0x7fffff00) == 0)) {
      FUN_00011798(param_1,param_2,&local_c);
      iVar4 = *(int *)(DAT_000120cc + 0x11fdc);
      uVar8 = *(uint *)((int)&DAT_000120dc + DAT_000120cc + param_3 * 4);
      bVar6 = (byte)uVar8;
      if (iVar4 == 3) {
        bVar9 = (int)param_3 < 0;
        bVar3 = (byte)(uVar8 >> 8);
        bVar2 = (byte)(uVar8 >> 0x10);
        bVar1 = extraout_r12;
        if (bVar9) {
          bVar1 = (byte)*local_c;
          bVar3 = bVar3 ^ *(byte *)((int)local_c + 1);
        }
        *(byte *)((int)local_c + 1) = bVar3;
        iVar4 = DAT_000120d4;
        if (bVar9) {
          bVar2 = bVar2 ^ bVar1;
          *(byte *)local_c = bVar2;
          bVar6 = bVar6 ^ *(byte *)((int)local_c + 2);
        }
        *(byte *)((int)local_c + 2) = bVar6;
        uVar5 = *(undefined4 *)(iVar4 + 0x12154);
        if (!bVar9) {
          *(byte *)local_c = bVar2;
        }
        *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | (byte)uVar5;
      }
      else if (iVar4 == 4) {
        if ((int)param_3 < 0) {
          uVar8 = uVar8 ^ *local_c;
        }
        *local_c = *(uint *)(FUN_000121b4 + DAT_000120dc) | uVar8;
      }
      else if (iVar4 == 2) {
        uVar7 = (ushort)uVar8;
        if ((int)param_3 < 0) {
          uVar7 = uVar7 ^ (ushort)*local_c;
        }
        *(ushort *)local_c = uVar7 | (ushort)*(undefined4 *)(DAT_000120d8 + 0x12190);
      }
      else {
        if ((int)param_3 < 0) {
          bVar6 = bVar6 ^ (byte)*local_c;
        }
        *(byte *)local_c = bVar6 | (byte)*(undefined4 *)(DAT_000120d0 + 0x12114);
      }
    }
    return;
  }
  return;
}



/* ===== FUN_000121b4 @ 000121b4 size=84 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000121b4(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  sVar2 = strlen((char *)param_3);
  iVar9 = *(int *)(DAT_00012208 + 0x121e4 + DAT_0001220c);
  iVar8 = *(int *)(iVar9 + 0xc);
  param_1 = param_1 - *(int *)(iVar9 + 8) * (sVar2 >> 1);
  uVar7 = (uint)*param_3;
  if (uVar7 != 0) {
    iVar5 = *(int *)(_UNK_000121ac + 0x12100 + _UNK_000121b0);
    iVar9 = *(int *)(iVar5 + 8);
    do {
      iVar3 = *(int *)(iVar5 + 0xc);
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          bVar6 = *(byte *)(iVar3 * uVar7 + *(int *)(iVar5 + 0x10) + iVar4);
          if (0 < iVar9) {
            iVar3 = 0;
            do {
              while (bVar1 = bVar6 & 0x80, bVar6 = bVar6 << 1, bVar1 != 0) {
                iVar9 = iVar3 + param_1;
                iVar3 = iVar3 + 1;
                FUN_00011f54(iVar9,iVar4 + (param_2 - iVar8 / 2),param_4);
                iVar9 = *(int *)(iVar5 + 8);
                if (iVar9 <= iVar3) goto LAB_00012184;
              }
              iVar9 = *(int *)(iVar5 + 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar9);
          }
LAB_00012184:
          iVar3 = *(int *)(iVar5 + 0xc);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      param_3 = param_3 + 1;
      uVar7 = (uint)*param_3;
      param_1 = param_1 + iVar9;
    } while (uVar7 != 0);
  }
  return;
}



/* ===== FUN_00012210 @ 00012210 size=256 ===== */

void FUN_00012210(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_3 - param_1;
  uVar1 = param_4 - param_2;
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
      (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    iVar3 = param_2;
    if (param_4 < param_2) {
      uVar5 = param_1 - param_3;
      uVar1 = param_2 - param_4;
      param_1 = param_3;
      iVar3 = param_4;
      param_4 = param_2;
    }
    iVar2 = FUN_0001280c(uVar5 << 0x10,uVar1);
    param_1 = param_1 << 0x10;
    do {
      iVar4 = iVar3 + 1;
      FUN_00011f54(param_1 >> 0x10,iVar3,param_5);
      param_1 = param_1 + iVar2;
      iVar3 = iVar4;
    } while (iVar4 <= param_4);
    return;
  }
  if (param_3 < param_1) {
    uVar1 = param_2 - param_4;
    param_4 = param_4 << 0x10;
    uVar5 = param_1 - param_3;
    iVar3 = param_1;
    param_1 = param_3;
  }
  else {
    param_4 = param_2 << 0x10;
    iVar3 = param_3;
    if (uVar5 == 0) goto LAB_000122dc;
  }
  uVar5 = FUN_0001280c(uVar1 << 0x10,uVar5);
  param_3 = iVar3;
LAB_000122dc:
  do {
    iVar3 = param_1 + 1;
    FUN_00011f54(param_1,param_4 >> 0x10,param_5);
    param_4 = param_4 + uVar5;
    param_1 = iVar3;
  } while (iVar3 <= param_3);
  return;
}



/* ===== FUN_00012310 @ 00012310 size=544 ===== */

void FUN_00012310(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00012530;
  FUN_00012210(param_1 + -10,param_2,param_1 + -2,param_2,param_3);
  FUN_00012210(param_1 + 2,param_2,param_1 + 10,param_2,param_3);
  FUN_00012210(param_1,param_2 + -10,param_1,param_2 + -2,param_3);
  FUN_00012210(param_1,param_2 + 2,param_1,param_2 + 10,param_3);
  cVar1 = **(char **)(iVar2 + 0x12390 + DAT_00012534);
  if (cVar1 == '\0') {
    iVar3 = param_1 + -9;
    iVar2 = param_2 + -9;
    param_3 = param_3 + 1;
    iVar5 = param_2 + 9;
    FUN_00012210(param_1 + -6,iVar2,iVar3,iVar2,param_3);
    FUN_00012210(iVar3,param_2 + -8,iVar3,param_2 + -6,param_3);
    iVar4 = param_1 + 9;
    FUN_00012210(iVar3,param_2 + 6,iVar3,iVar5,param_3);
    FUN_00012210(param_1 + -8,iVar5,param_1 + -6,iVar5,param_3);
    FUN_00012210(param_1 + 6,iVar5,iVar4,iVar5,param_3);
    FUN_00012210(iVar4,param_2 + 8,iVar4,param_2 + 6,param_3);
    FUN_00012210(iVar4,param_2 + -6,iVar4,iVar2,param_3);
    FUN_00012210(param_1 + 8,iVar2,param_1 + 6,iVar2,param_3);
    return;
  }
  if (cVar1 != '\x01') {
    return;
  }
  param_3 = param_3 + 1;
  FUN_00012210(param_1 + -7,param_2 + -7,param_1 + -4,param_2 + -4,param_3);
  FUN_00012210(param_1 + -7,param_2 + 7,param_1 + -4,param_2 + 4,param_3);
  FUN_00012210(param_1 + 4,param_2 + -4,param_1 + 7,param_2 + -7,param_3);
  FUN_00012210(param_1 + 4,param_2 + 4,param_1 + 7,param_2 + 7,param_3);
  return;
}



/* ===== FUN_00012538 @ 00012538 size=124 ===== */

void FUN_00012538(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  FUN_00012210();
  FUN_00012210(param_3,param_2 + 1,param_3,param_4 + -1,param_5);
  FUN_00012210(param_3,param_4,param_1,param_4,param_5);
  FUN_00012210(param_1,param_4 + -1,param_1,param_2 + 1);
  return;
}



/* ===== FUN_000125b4 @ 000125b4 size=568 ===== */

void FUN_000125b4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint local_38;
  uint local_34;
  uint *local_2c [2];
  
  iVar6 = DAT_00012808;
  iVar5 = DAT_00012804;
  iVar4 = DAT_00012800;
  iVar3 = DAT_000127fc;
  uVar11 = param_1;
  if ((int)param_1 <= (int)param_3) {
    uVar11 = param_3;
    param_3 = param_1;
  }
  uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
  local_34 = param_2;
  if ((int)param_2 <= (int)param_4) {
    local_34 = param_4;
    param_4 = param_2;
  }
  uVar10 = **(uint **)(DAT_000127ec + 0x125c8 + DAT_000127f0);
  local_38 = param_3 & ~((int)param_3 >> 0x1f);
  param_4 = param_4 & ~((int)param_4 >> 0x1f);
  local_34 = local_34 & ~((int)local_34 >> 0x1f);
  if (uVar10 <= local_38) {
    local_38 = uVar10 - 1;
  }
  if (uVar10 <= uVar11) {
    uVar11 = uVar10 - 1;
  }
  uVar10 = **(uint **)(DAT_000127ec + 0x125c8 + DAT_000127f4);
  if (uVar10 <= param_4) {
    param_4 = uVar10 - 1;
  }
  if (uVar10 <= local_34) {
    local_34 = uVar10 - 1;
  }
  bVar15 = SBORROW4(param_4,local_34);
  iVar13 = param_4 - local_34;
  bVar14 = param_4 == local_34;
  if ((int)param_4 <= (int)local_34) {
    bVar15 = SBORROW4(local_38,uVar11);
    iVar13 = local_38 - uVar11;
    bVar14 = local_38 == uVar11;
  }
  if ((bVar14 || iVar13 < 0 != bVar15) && ((param_5 & 0x7fffff00) == 0)) {
    iVar13 = *(int *)(DAT_000127f8 + 0x1267c);
    uVar12 = *(uint *)(DAT_000127f8 + param_5 * 4 + 0x1277c);
    bVar1 = (byte)(uVar12 >> 0x10);
    bVar2 = (byte)(uVar12 >> 8);
    uVar10 = local_38;
    do {
      FUN_00011798(uVar10,param_4,local_2c);
      bVar8 = (byte)uVar12;
      if (iVar13 == 3) {
        if ((int)param_5 < 0) {
          *(byte *)local_2c[0] = (byte)*local_2c[0] ^ bVar1;
          *(byte *)((int)local_2c[0] + 2) = bVar8 ^ *(byte *)((int)local_2c[0] + 2);
          *(byte *)((int)local_2c[0] + 1) = *(byte *)((int)local_2c[0] + 1) ^ bVar2;
        }
        else {
          *(byte *)((int)local_2c[0] + 2) = bVar8;
          *(byte *)local_2c[0] = bVar1;
          *(byte *)((int)local_2c[0] + 1) = bVar2;
        }
        *(byte *)((int)local_2c[0] + 2) =
             *(byte *)((int)local_2c[0] + 2) | (byte)*(undefined4 *)(iVar3 + 0x12784);
      }
      else if (iVar13 == 4) {
        uVar7 = uVar12;
        if ((int)param_5 < 0) {
          uVar7 = uVar12 ^ *local_2c[0];
        }
        *local_2c[0] = *(uint *)(iVar4 + 0x1278c) | uVar7;
      }
      else if (iVar13 == 2) {
        uVar9 = (ushort)uVar12;
        if ((int)param_5 < 0) {
          uVar9 = uVar9 ^ (ushort)*local_2c[0];
        }
        *(ushort *)local_2c[0] = uVar9 | (ushort)*(undefined4 *)(iVar5 + 0x1279c);
      }
      else {
        if ((int)param_5 < 0) {
          bVar8 = bVar8 ^ (byte)*local_2c[0];
        }
        *(byte *)local_2c[0] = bVar8 | (byte)*(undefined4 *)(iVar6 + 0x127b8);
      }
      uVar10 = uVar10 + 1;
      local_2c[0] = (uint *)((int)local_2c[0] + iVar13);
    } while (((int)uVar10 <= (int)uVar11) ||
            (param_4 = param_4 + 1, uVar10 = local_38, (int)param_4 <= (int)local_34));
  }
  return;
}



/* ===== FUN_0001280c @ 0001280c size=236 ===== */

ulonglong FUN_0001280c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



/* ===== _fini @ 00012918 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 0002d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 0002d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 0002d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 0002d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 0002d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


