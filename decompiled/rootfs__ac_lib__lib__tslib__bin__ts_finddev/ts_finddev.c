// ts_finddev — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010538 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 0001055c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002100c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010568 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_close @ 00010574 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00021014)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00021018)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 0001058c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002101c)();
  return;
}



/* ===== <EXTERNAL>::alarm @ 00010598 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00021020)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000105a4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021024)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 000105b0 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_00021028)();
  return;
}



/* ===== <EXTERNAL>::signal @ 000105bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002102c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::ts_setup @ 000105d4 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00021034)();
  return;
}



/* ===== <EXTERNAL>::tslib_version @ 000105e0 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00021038)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000105ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002103c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000105f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00021040)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010604 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00021044)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010610 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021048)();
  return;
}



/* ===== entry @ 000106dc size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021030)
            (DAT_00010710,param_2,&stack0x00000004,DAT_00010714,DAT_0001070c,param_1);
  return;
}



/* ===== FUN_00010718 @ 00010718 size=32 ===== */

void FUN_00010718(void)

{
  if (DAT_0001073c == DAT_00010738) {
    return;
  }
  if (DAT_00010740 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010740)();
  return;
}



/* ===== _FINI_0 @ 0001077c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000107b8;
  if (*DAT_000107b8 != '\0') {
    return;
  }
  FUN_00010718();
  if (DAT_000107bc != 0) {
    __deregister_frame_info(DAT_000107c0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000107c4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000107e8 != 0) {
    __register_frame_info(DAT_000107f0,DAT_000107ec);
  }
  if ((DAT_00010774 - DAT_00010770 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010778 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010778)();
  return;
}



/* ===== FUN_00010814 @ 00010814 size=152 ===== */

void FUN_00010814(undefined4 *param_1)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_000108ac + 0x10838),uVar1);
  putchar(10);
  printf((char *)(DAT_000108b0 + 0x10850),*param_1);
  puts((char *)(DAT_000108b4 + 0x1085c));
  puts((char *)(DAT_000108b8 + 0x10868));
  puts((char *)(DAT_000108bc + 0x10874));
  puts((char *)(DAT_000108c0 + 0x10880));
  puts((char *)(DAT_000108c4 + 0x1088c));
  puts((char *)(DAT_000108c8 + 0x10898));
  puts((char *)(DAT_000108cc + 0x108a4));
                    /* WARNING: Subroutine does not return */
  exit(-1);
}



/* ===== _fini @ 000108d0 size=16 ===== */

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



/* ===== <EXTERNAL>::alarm @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

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



/* ===== <EXTERNAL>::atoi @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


