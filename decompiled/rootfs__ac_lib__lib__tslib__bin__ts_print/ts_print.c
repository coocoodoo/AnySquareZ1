// ts_print — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000105ac size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 000105d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002100c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000105dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000105e8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00021014)();
  return;
}



/* ===== <EXTERNAL>::ts_close @ 000105f4 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00021018)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002101c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 0001060c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00021020)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021024)();
  return;
}



/* ===== <EXTERNAL>::ts_read @ 00010624 size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00021028)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010630 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002102c)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 0001063c size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_00021030)();
  return;
}



/* ===== <EXTERNAL>::ts_setup @ 00010654 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00021038)();
  return;
}



/* ===== <EXTERNAL>::tslib_version @ 00010660 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_0002103c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 0001066c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021040)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00021044)(__status);
  return;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010684 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00021048)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010690 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002104c)();
  return;
}



/* ===== FUN_0001069c @ 0001069c size=360 ===== */

undefined4 FUN_0001069c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *__format;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar5 = DAT_00010804;
  bVar1 = false;
  puVar7 = (undefined4 *)(DAT_00010804 + 0x106bc);
  iVar6 = DAT_00010808 + 0x106c4;
  while( true ) {
    local_58 = *puVar7;
    local_54 = *(undefined4 *)(iVar5 + 0x106c0);
    local_50 = *(undefined4 *)(iVar5 + 0x106c4);
    local_4c = *(undefined4 *)(iVar5 + 0x106c8);
    local_5c = 0;
    local_48 = *(undefined4 *)(iVar5 + 0x106cc);
    uStack_44 = *(undefined4 *)(iVar5 + 0x106d0);
    uStack_40 = *(undefined4 *)(iVar5 + 0x106d4);
    uStack_3c = *(undefined4 *)(iVar5 + 0x106d8);
    uStack_38 = *(undefined4 *)(iVar5 + 0x106dc);
    uStack_34 = *(undefined4 *)(iVar5 + 0x106e0);
    uStack_30 = *(undefined4 *)(iVar5 + 0x106e4);
    uStack_2c = *(undefined4 *)(iVar5 + 0x106e8);
    iVar2 = getopt_long(param_1,param_2,iVar6,&local_58,&local_5c);
    piVar3 = __errno_location();
    *piVar3 = 0;
    if (iVar2 == -1) {
      iVar5 = ts_setup(0);
      if (iVar5 != 0) {
        __format = (char *)(DAT_00010810 + 0x10780);
        while( true ) {
          if (bVar1) {
            iVar6 = ts_read_raw();
          }
          else {
            iVar6 = ts_read(iVar5,&local_58,1);
          }
          if (iVar6 < 0) break;
          if (iVar6 == 1) {
            printf(__format,local_4c,local_48,local_58,local_54,local_50);
          }
        }
        perror((char *)(DAT_00010814 + 0x107e0));
        ts_close(iVar5);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      perror((char *)(DAT_00010818 + 0x107fc));
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (iVar2 != 0x72) break;
    bVar1 = true;
  }
  if (iVar2 == 0x76) {
    uVar4 = tslib_version();
    printf((char *)(DAT_0001080c + 0x1075c),uVar4);
  }
  else {
    FUN_00010934(param_2);
  }
  return 0;
}



/* ===== entry @ 0001081c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021034)
            (DAT_00010850,param_2,&stack0x00000004,DAT_00010854,DAT_0001084c,param_1);
  return;
}



/* ===== FUN_00010858 @ 00010858 size=32 ===== */

void FUN_00010858(void)

{
  if (DAT_0001087c == DAT_00010878) {
    return;
  }
  if (DAT_00010880 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010880)();
  return;
}



/* ===== _FINI_0 @ 000108bc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000108f8;
  if (*DAT_000108f8 != '\0') {
    return;
  }
  FUN_00010858();
  if (DAT_000108fc != 0) {
    __deregister_frame_info(DAT_00010900);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010904 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010928 != 0) {
    __register_frame_info(DAT_00010930,DAT_0001092c);
  }
  if ((DAT_000108b4 - DAT_000108b0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000108b8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000108b8)();
  return;
}



/* ===== FUN_00010934 @ 00010934 size=168 ===== */

void FUN_00010934(undefined4 *param_1)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_000109dc + 0x10958),uVar1);
  putchar(10);
  printf((char *)(DAT_000109e0 + 0x10970),*param_1);
  putchar(10);
  puts((char *)(DAT_000109e4 + 0x10984));
  puts((char *)(DAT_000109e8 + 0x10990));
  puts((char *)(DAT_000109ec + 0x1099c));
  puts((char *)(DAT_000109f0 + 0x109a8));
  puts((char *)(DAT_000109f4 + 0x109b4));
  puts((char *)(DAT_000109f8 + 0x109c0));
  puts((char *)(DAT_000109fc + 0x109cc));
  puts((char *)((int)&DAT_000109dc + DAT_00010a00));
  return;
}



/* ===== _fini @ 00010a04 size=16 ===== */

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



/* ===== <EXTERNAL>::abort @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00022040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00022048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


