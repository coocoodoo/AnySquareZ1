// ts_print_mt — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010810 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002200c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00022010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 0001084c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010858 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00022018)();
  return;
}



/* ===== <EXTERNAL>::ts_read_mt @ 00010864 size=12 ===== */

void ts_read_mt(void)

{
  (*(code *)PTR_ts_read_mt_0002201c)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010870 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022020)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_close @ 0001087c size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00022024)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00022028)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002202c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000108a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022030)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 000108ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022034)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000108b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00022038)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_libversion @ 000108c4 size=12 ===== */

void ts_libversion(void)

{
  (*(code *)PTR_ts_libversion_0002203c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000108d0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022040)();
  return;
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 000108dc size=12 ===== */

void ts_get_eventpath(void)

{
  (*(code *)PTR_ts_get_eventpath_00022044)();
  return;
}



/* ===== <EXTERNAL>::ts_fd @ 000108f4 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_0002204c)();
  return;
}



/* ===== <EXTERNAL>::ts_setup @ 00010900 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00022050)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw_mt @ 0001090c size=12 ===== */

void ts_read_raw_mt(void)

{
  (*(code *)PTR_ts_read_raw_mt_00022054)();
  return;
}



/* ===== <EXTERNAL>::tslib_version @ 00010918 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00022058)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002205c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00022060)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001093c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00022064)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010948 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00022068)();
  return;
}



/* ===== <EXTERNAL>::open @ 00010954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002206c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010960 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022070)();
  return;
}



/* ===== <EXTERNAL>::vfprintf @ 0001096c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00022074)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022078)(__ptr);
  return;
}



/* ===== FUN_00010984 @ 00010984 size=960 ===== */

int FUN_00010984(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  size_t sVar13;
  int *piVar14;
  int iVar15;
  size_t local_b0;
  size_t local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined1 auStack_98 [4];
  int local_94;
  int iStack_90;
  
  bVar1 = false;
  pvVar9 = (void *)(DAT_00010d44 + 0x109a4);
  bVar2 = false;
  iVar3 = ts_libversion();
  local_b0 = 0;
  local_a8 = 0;
  iVar15 = DAT_00010d48 + 0x109c8;
  piVar4 = __errno_location();
  local_ac = 1;
  iVar10 = DAT_00010d4c + 0x109e0;
LAB_000109e4:
  do {
    memcpy(auStack_98,pvVar9,0x70);
    local_9c = 0;
    iVar5 = getopt_long(param_1,param_2,iVar15,auStack_98,&local_9c);
    *piVar4 = 0;
    if (iVar5 == -1) {
      uVar7 = *(uint *)(iVar3 + 8);
      **(int **)(iVar10 + DAT_00010d54) = DAT_00010d58 + 0x10b1c;
      if ((uVar7 & 2) != 0) {
        **(int **)(iVar10 + DAT_00010d5c) = DAT_00010d60 + 0x10b38;
      }
      iVar10 = ts_setup(local_a8,bVar2);
      if (iVar10 == 0) {
        perror((char *)(DAT_00010d68 + 0x10c1c));
        return *piVar4;
      }
      uVar12 = *(undefined4 *)(iVar3 + 4);
      uVar6 = ts_get_eventpath();
      printf((char *)(DAT_00010d64 + 0x10b7c),uVar12,uVar6);
      iVar3 = ts_fd(iVar10);
      iVar3 = ioctl(iVar3,0x8018456f,auStack_98);
      if (iVar3 < 0) {
        perror((char *)(DAT_00010d6c + 0x10c30));
        ts_close(iVar10);
        return *piVar4;
      }
      if (local_b0 == 0) {
        local_b0 = (iStack_90 + 1) - local_94;
      }
      piVar4 = malloc(local_ac << 2);
      if (piVar4 != (int *)0x0) {
        sVar13 = 0;
        while( true ) {
          pvVar9 = calloc(local_b0,0x48);
          piVar4[sVar13] = (int)pvVar9;
          if (pvVar9 == (void *)0x0) break;
          sVar13 = sVar13 + 1;
          if (local_ac == sVar13) {
            pcVar11 = (char *)(DAT_00010d70 + 0x10c54);
            while( true ) {
              while( true ) {
                if (bVar1) {
                  iVar3 = ts_read_raw_mt();
                }
                else {
                  iVar3 = ts_read_mt(iVar10,piVar4,local_b0,local_ac);
                }
                if (iVar3 < 0) break;
                piVar14 = piVar4;
                for (iVar15 = 0; iVar3 != iVar15; iVar15 = iVar15 + 1) {
                  for (iVar5 = 0; iVar5 < (int)local_b0; iVar5 = iVar5 + 1) {
                    iVar8 = *piVar14 + iVar5 * 0x48;
                    if ((*(ushort *)(iVar8 + 0x46) & 1) != 0) {
                      printf(pcVar11,iVar15,*(undefined4 *)(iVar8 + 0x3c),
                             *(undefined4 *)(iVar8 + 0x40),*(undefined4 *)(iVar8 + 0xc),
                             *(undefined4 *)(*piVar14 + iVar5 * 0x48),*(undefined4 *)(iVar8 + 4),
                             *(undefined4 *)(iVar8 + 8));
                    }
                  }
                  piVar14 = piVar14 + 1;
                }
              }
              if (!bVar2) break;
              printf((char *)(DAT_00010d78 + 0x10d40),iVar3);
            }
            perror((char *)(DAT_00010d74 + 0x10ca4));
            ts_close(iVar10);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
        }
        free(piVar4);
      }
      ts_close(iVar10);
      return -0xc;
    }
    switch(iVar5) {
    case 0x69:
      local_a8 = **(undefined4 **)(iVar10 + DAT_00010d50);
      goto LAB_000109e4;
    case 0x6a:
      local_b0 = atoi((char *)**(undefined4 **)(iVar10 + DAT_00010d50));
      sVar13 = local_b0;
      break;
    case 0x6b:
      goto switchD_00010a28_default;
    case 0x6c:
      goto switchD_00010a28_default;
    case 0x6d:
      goto switchD_00010a28_default;
    case 0x6e:
      bVar2 = true;
      goto LAB_000109e4;
    case 0x6f:
      goto switchD_00010a28_default;
    case 0x70:
      goto switchD_00010a28_default;
    case 0x71:
      goto switchD_00010a28_default;
    case 0x72:
      bVar1 = true;
      goto LAB_000109e4;
    case 0x73:
      local_ac = atoi((char *)**(undefined4 **)(iVar10 + DAT_00010d50));
      sVar13 = local_ac;
      break;
    case 0x74:
      goto switchD_00010a28_default;
    case 0x75:
      goto switchD_00010a28_default;
    case 0x76:
      pcVar11 = (char *)tslib_version();
      puts(pcVar11);
      return 0;
    default:
      goto switchD_00010a28_default;
    }
    if ((int)sVar13 < 1) {
switchD_00010a28_default:
      FUN_00010ec0(param_2);
      return 0;
    }
  } while( true );
}



/* ===== entry @ 00010d7c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022048)
            (DAT_00010db0,param_2,&stack0x00000004,DAT_00010db4,DAT_00010dac,param_1);
  return;
}



/* ===== FUN_00010db8 @ 00010db8 size=32 ===== */

void FUN_00010db8(void)

{
  if (DAT_00010ddc == DAT_00010dd8) {
    return;
  }
  if (DAT_00010de0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010de0)();
  return;
}



/* ===== _FINI_0 @ 00010e1c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010e58;
  if (*DAT_00010e58 != '\0') {
    return;
  }
  FUN_00010db8();
  if (DAT_00010e5c != 0) {
    __deregister_frame_info(DAT_00010e60);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010e64 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e88 != 0) {
    __register_frame_info(DAT_00010e90,DAT_00010e8c);
  }
  if ((DAT_00010e14 - DAT_00010e10 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010e18 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010e18)();
  return;
}



/* ===== FUN_00010ec0 @ 00010ec0 size=300 ===== */

void FUN_00010ec0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_00010fec + 0x10ee4),uVar1);
  putchar(10);
  printf((char *)(DAT_00010ff0 + 0x10efc),*param_1);
  putchar(10);
  puts((char *)(DAT_00010ff4 + 0x10f10));
  puts((char *)(DAT_00010ff8 + 0x10f1c));
  puts((char *)(DAT_00010ffc + 0x10f28));
  puts((char *)(DAT_00011000 + 0x10f34));
  puts((char *)(DAT_00011004 + 0x10f40));
  puts((char *)(DAT_00011008 + 0x10f4c));
  puts((char *)(DAT_0001100c + 0x10f58));
  puts((char *)(DAT_00011010 + 0x10f64));
  puts((char *)(DAT_00011014 + 0x10f70));
  puts((char *)(DAT_00011018 + 0x10f7c));
  puts((char *)(DAT_0001101c + 0x10f88));
  puts((char *)(DAT_00011020 + 0x10f94));
  puts((char *)(DAT_00011024 + 0x10fa0));
  puts((char *)(DAT_00011028 + 0x10fac));
  puts((char *)(DAT_0001102c + 0x10fb8));
  puts((char *)(DAT_00011030 + 0x10fc4));
  puts((char *)(DAT_00011034 + 0x10fd0));
  puts((char *)(DAT_00011038 + 0x10fdc));
  puts((char *)((int)&DAT_00010fec + DAT_0001103c));
  return;
}



/* ===== _fini @ 00011040 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw_mt @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_libversion @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_libversion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_get_eventpath(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_mt @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


