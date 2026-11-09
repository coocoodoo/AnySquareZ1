// ts_print_raw — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001054c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002100c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 0001057c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010588 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00021014)();
  return;
}



/* ===== <EXTERNAL>::ts_close @ 00010594 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00021018)();
  return;
}



/* ===== <EXTERNAL>::perror @ 000105a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002101c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 000105ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00021020)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 000105b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021024)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000105c4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021028)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 000105d0 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_0002102c)();
  return;
}



/* ===== <EXTERNAL>::ts_setup @ 000105e8 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00021034)();
  return;
}



/* ===== <EXTERNAL>::tslib_version @ 000105f4 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00021038)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002103c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 0001060c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00021040)(__status);
  return;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010618 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00021044)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010624 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021048)();
  return;
}



/* ===== FUN_00010630 @ 00010630 size=312 ===== */

undefined4 FUN_00010630(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *__format;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = *(undefined4 *)(DAT_00010768 + 0x1064c);
  local_34 = *(undefined4 *)(DAT_00010768 + 0x10650);
  local_30 = *(undefined4 *)(DAT_00010768 + 0x10654);
  local_2c = *(undefined4 *)(DAT_00010768 + 0x10658);
  local_3c = 0;
  local_28 = *(undefined4 *)(DAT_00010768 + 0x1065c);
  uStack_24 = *(undefined4 *)(DAT_00010768 + 0x10660);
  uStack_20 = *(undefined4 *)(DAT_00010768 + 0x10664);
  uStack_1c = *(undefined4 *)(DAT_00010768 + 0x10668);
  iVar1 = getopt_long(param_1,param_2,DAT_0001076c + 0x10688,&local_38,&local_3c);
  piVar2 = __errno_location();
  *piVar2 = 0;
  if (iVar1 != -1) {
    if ((iVar1 == 0x68) || (iVar1 != 0x76)) {
      FUN_00010898();
    }
    else {
      uVar3 = tslib_version();
      printf((char *)(DAT_00010770 + 0x106d0),uVar3);
    }
    return 0;
  }
  iVar1 = ts_setup(0,0);
  if (iVar1 != 0) {
    __format = (char *)(DAT_00010774 + 0x106f4);
    while (iVar4 = ts_read_raw(iVar1,&local_38,1), -1 < iVar4) {
      if (iVar4 == 1) {
        printf(__format,local_2c,local_28,local_38,local_34,local_30);
      }
    }
    perror((char *)(DAT_00010778 + 0x10744));
    ts_close(iVar1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  perror((char *)(DAT_0001077c + 0x10760));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== entry @ 00010780 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021030)
            (DAT_000107b4,param_2,&stack0x00000004,DAT_000107b8,DAT_000107b0,param_1);
  return;
}



/* ===== FUN_000107bc @ 000107bc size=32 ===== */

void FUN_000107bc(void)

{
  if (DAT_000107e0 == DAT_000107dc) {
    return;
  }
  if (DAT_000107e4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000107e4)();
  return;
}



/* ===== _FINI_0 @ 00010820 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001085c;
  if (*DAT_0001085c != '\0') {
    return;
  }
  FUN_000107bc();
  if (DAT_00010860 != 0) {
    __deregister_frame_info(DAT_00010864);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010868 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001088c != 0) {
    __register_frame_info(DAT_00010894,DAT_00010890);
  }
  if ((DAT_00010818 - DAT_00010814 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001081c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001081c)();
  return;
}



/* ===== FUN_00010898 @ 00010898 size=92 ===== */

void FUN_00010898(void)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_000108f4 + 0x108b8),uVar1);
  putchar(10);
  puts((char *)(DAT_000108f8 + 0x108cc));
  puts((char *)(DAT_000108fc + 0x108d8));
  puts((char *)(DAT_00010900 + 0x108e4));
  puts((char *)((int)&DAT_000108f4 + DAT_00010904));
  return;
}



/* ===== _fini @ 00010908 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 00022040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


