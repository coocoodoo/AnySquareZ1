// hcitop — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010874 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::abort @ 00010898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021f68)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000108b0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021f70)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000108bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00021f74)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::hci_devinfo @ 000108c8 size=12 ===== */

void hci_devinfo(void)

{
  (*(code *)PTR_hci_devinfo_00021f78)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000108d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00021f7c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::humanize_number @ 000108e0 size=12 ===== */

void humanize_number(void)

{
  (*(code *)PTR_humanize_number_00021f80)();
  return;
}



/* ===== <EXTERNAL>::curs_set @ 000108ec size=12 ===== */

void curs_set(void)

{
  (*(code *)PTR_curs_set_00021f84)();
  return;
}



/* ===== <EXTERNAL>::wattr_off @ 000108f8 size=12 ===== */

void wattr_off(void)

{
  (*(code *)PTR_wattr_off_00021f88)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010904 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021f8c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::mvprintw @ 00010910 size=12 ===== */

void mvprintw(void)

{
  (*(code *)PTR_mvprintw_00021f90)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001091c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021f94)();
  return;
}



/* ===== <EXTERNAL>::initscr @ 00010928 size=12 ===== */

void initscr(void)

{
  (*(code *)PTR_initscr_00021f98)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010934 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021f9c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021fa0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::wtimeout @ 0001094c size=12 ===== */

void wtimeout(void)

{
  (*(code *)PTR_wtimeout_00021fa4)();
  return;
}



/* ===== <EXTERNAL>::noecho @ 00010958 size=12 ===== */

void noecho(void)

{
  (*(code *)PTR_noecho_00021fa8)();
  return;
}



/* ===== <EXTERNAL>::cbreak @ 00010964 size=12 ===== */

void cbreak(void)

{
  (*(code *)PTR_cbreak_00021fac)();
  return;
}



/* ===== <EXTERNAL>::wgetch @ 00010970 size=12 ===== */

void wgetch(void)

{
  (*(code *)PTR_wgetch_00021fb0)();
  return;
}



/* ===== <EXTERNAL>::wattr_on @ 0001097c size=12 ===== */

void wattr_on(void)

{
  (*(code *)PTR_wattr_on_00021fb4)();
  return;
}



/* ===== <EXTERNAL>::atof @ 00010988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_00021fb8)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::atoi @ 00010994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00021fbc)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 000109a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00021fc0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000109ac size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00021fc4)();
  return;
}



/* ===== <EXTERNAL>::getopt_long @ 000109b8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00021fc8)();
  return;
}



/* ===== <EXTERNAL>::endwin @ 000109c4 size=12 ===== */

void endwin(void)

{
  (*(code *)PTR_endwin_00021fcc)();
  return;
}



/* ===== FUN_000109d0 @ 000109d0 size=1268 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_000109d0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *__src;
  uint uVar14;
  undefined4 *__src_00;
  undefined4 uVar15;
  int iVar16;
  uint in_fpscr;
  double dVar17;
  double dVar18;
  int local_824;
  uint local_820;
  int local_81c;
  uint local_7ec [4];
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8 [48];
  undefined4 local_6e8 [48];
  undefined1 auStack_628 [1472];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [9];
  undefined1 local_37;
  int local_34;
  
  uVar11 = 0;
  iVar13 = DAT_00010ec4 + 0x109f0;
  uVar14 = 1;
  piVar6 = *(int **)(iVar13 + DAT_00010ec8);
  local_34 = *piVar6;
  local_7ec[1] = *(undefined4 *)(DAT_00010ecc + 0x10a24);
  local_7ec[2] = *(undefined4 *)(DAT_00010ecc + 0x10a28);
  local_7ec[3] = *(undefined4 *)(DAT_00010ecc + 0x10a2c);
  uStack_7dc = *(undefined4 *)(DAT_00010ecc + 0x10a30);
  uStack_7d8 = *(undefined4 *)(DAT_00010ecc + 0x10a34);
  uStack_7d4 = *(undefined4 *)(DAT_00010ecc + 0x10a38);
  uStack_7d0 = *(undefined4 *)(DAT_00010ecc + 0x10a3c);
  uStack_7cc = *(undefined4 *)(DAT_00010ecc + 0x10a40);
  iVar16 = DAT_00010ed0 + 0x10a3c;
  uStack_7c8 = *(undefined4 *)(DAT_00010ecc + 0x10a44);
  uStack_7c4 = *(undefined4 *)(DAT_00010ecc + 0x10a48);
  uStack_7c0 = *(undefined4 *)(DAT_00010ecc + 0x10a4c);
  uStack_7bc = *(undefined4 *)(DAT_00010ecc + 0x10a50);
  local_7b8 = *(undefined4 *)(DAT_00010ecc + 0x10a54);
  uStack_7b4 = *(undefined4 *)(DAT_00010ecc + 0x10a58);
  uStack_7b0 = *(undefined4 *)(DAT_00010ecc + 0x10a5c);
  uStack_7ac = *(undefined4 *)(DAT_00010ecc + 0x10a60);
  do {
    iVar1 = getopt_long(param_1,param_2,iVar16,local_7ec + 1,0);
    if (iVar1 == -1) {
      memset(local_7a8,0,0xc0);
      memset(local_6e8,0,0xc0);
      initscr();
      cbreak();
      noecho();
      curs_set(0);
      uVar7 = uVar14 * 10 + uVar11 / 100;
      local_820 = 1;
      puVar8 = *(undefined4 **)(iVar13 + DAT_00010ed4);
      while( true ) {
        puVar12 = auStack_628;
        wattr_on(*puVar8,0x40000,0);
        mvprintw(0,0,DAT_00010edc + 0x10b30,DAT_00010ef0 + 0x10b64,DAT_00010eec + 0x10b58,
                 DAT_00010ee8 + 0x10b4c,DAT_00010ee4 + 0x10b40,DAT_00010ee0 + 0x10b34,
                 DAT_00010ed8 + 0x10b24);
        wattr_off(*puVar8,0x40000,0);
        local_81c = 0;
        iVar13 = 0;
        do {
          iVar16 = iVar13 + 1;
          iVar13 = hci_devinfo(iVar13,puVar12 + local_81c * 0x5c);
          if (iVar13 == 0) {
            local_81c = local_81c + 1;
          }
          iVar13 = iVar16;
        } while (iVar16 != 0x10);
        iVar13 = 0;
        uVar9 = local_820;
        if (2 < local_820) {
          uVar9 = 3;
        }
        iVar16 = DAT_00010ef4 + 0x10bd0;
        __src = local_6e8;
        __src_00 = local_7a8;
        do {
          memmove(__src_00 + 1,__src_00,8);
          memmove(__src + 1,__src,8);
          if (iVar13 < local_81c) {
            local_7ec[0] = *(uint *)(puVar12 + 0x10);
            local_824 = 0;
            puVar2 = auStack_40;
            puVar10 = (uint *)(DAT_00010ef8 + 0x10c20);
            do {
              if ((local_7ec[(int)*puVar10 >> 5] & 1 << (*puVar10 & 0x1f)) == 0) {
                uVar5 = 0x20;
              }
              else {
                uVar5 = (undefined1)puVar10[1];
              }
              *puVar2 = uVar5;
              local_824 = local_824 + 1;
              puVar2 = puVar2 + 1;
              puVar10 = puVar10 + 2;
            } while (local_824 != 9);
            uVar15 = *(undefined4 *)(puVar12 + 0x54);
            *__src = *(undefined4 *)(puVar12 + 0x58);
            *__src_00 = uVar15;
            local_37 = 0;
            iVar1 = FUN_00011100(__src_00,uVar9);
            iVar3 = FUN_00011100(__src,uVar9);
            humanize_number(auStack_68,7,uVar15,0,iVar16,0x20,0);
            humanize_number(auStack_60,7,*__src,0,iVar16,0x20,0);
            humanize_number(auStack_58,9,(uint)(iVar1 * 10) / uVar7,0,iVar16,0x20,0);
            humanize_number(auStack_4c,9,(uint)(iVar3 * 10) / uVar7,0,iVar16,0x20,0);
            mvprintw(iVar13 + 1,0,DAT_00010efc + 0x10d80,puVar12 + 2,auStack_40,auStack_68,
                     auStack_60,auStack_58,auStack_4c);
          }
          iVar13 = iVar13 + 1;
          __src_00 = __src_00 + 3;
          __src = __src + 3;
          puVar12 = puVar12 + 0x5c;
        } while (iVar13 != 0x10);
        wtimeout(*puVar8,uVar14 * 1000 + uVar11);
        iVar13 = wgetch(*puVar8);
        if (iVar13 == 0x71) break;
        local_820 = local_820 + 1;
      }
      endwin();
LAB_00010e04:
      uVar15 = 0;
      goto LAB_00010e7c;
    }
    if (iVar1 != 100) {
      if (iVar1 == 0x68) {
        printf((char *)(DAT_00010f04 + 0x10e04),*param_2);
        goto LAB_00010e04;
      }
      if (iVar1 != 0x56) {
        puVar8 = *(undefined4 **)(iVar13 + DAT_00010f0c);
        uVar15 = *param_2;
        pcVar4 = (char *)(DAT_00010f14 + 0x10eac);
        goto LAB_00010e70;
      }
      puts((char *)(DAT_00010f00 + 0x10df0));
      goto LAB_00010e04;
    }
    pcVar4 = (char *)**(undefined4 **)(iVar13 + DAT_00010f08);
    uVar14 = atoi(pcVar4);
    dVar17 = atof(pcVar4);
    dVar18 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
    uVar11 = (int)(longlong)((dVar17 - dVar18) * 10.0) * 100;
    if (((int)(uVar14 | uVar11) < 0) || ((uVar14 | uVar11) == 0)) {
      puVar8 = *(undefined4 **)(iVar13 + DAT_00010f0c);
      uVar15 = *param_2;
      pcVar4 = (char *)(DAT_00010f10 + 0x10e74);
LAB_00010e70:
      fprintf((FILE *)*puVar8,pcVar4,uVar15);
      uVar15 = 1;
LAB_00010e7c:
      if (local_34 == *piVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar15);
    }
  } while( true );
}



/* ===== entry @ 00010f18 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021f6c)
            (*(undefined4 *)((int)&DAT_00010f60 + DAT_00010f6c + DAT_00010f60),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00010f60 + DAT_00010f68 + DAT_00010f60),
             *(undefined4 *)((int)&DAT_00010f60 + DAT_00010f64 + DAT_00010f60),param_1);
  return;
}



/* ===== FUN_00010f70 @ 00010f70 size=72 ===== */

void FUN_00010f70(void)

{
  code *pcVar1;
  
  if (DAT_00010fbc + 0x10f88 == DAT_00010fb8 + 0x10f80) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010fc0 + 0x10f90 + DAT_00010fc4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001102c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000110a0 + 0x11048;
  if (*(char *)(DAT_0001109c + 0x1103c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000110a4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000110a8 + 0x11068));
  }
  FUN_00010f70();
  if (*(int *)(iVar1 + DAT_000110ac) != 0) {
    __deregister_frame_info(DAT_000110b0 + 0x11088);
  }
  *(undefined1 *)(DAT_000110b4 + 0x11098) = 1;
  return;
}



/* ===== _INIT_0 @ 000110b8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000110f0 + 0x110c8 + DAT_000110f4) != 0) {
    __register_frame_info(DAT_000110fc + 0x110e8,DAT_000110f8 + 0x110e4);
  }
  if (((DAT_00011020 + 0x10fe0) - (DAT_0001101c + 0x10fd8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011024 + 0x10fe8 + DAT_00011028);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011100 @ 00011100 size=112 ===== */

int FUN_00011100(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (1 < param_2) {
    uVar7 = param_2 - 1;
    uVar4 = 0;
    iVar6 = 0;
    piVar1 = param_1 + param_2 + 0x3fffffff;
    while (piVar1 != param_1) {
      uVar2 = piVar1[-1] - *piVar1;
      uVar5 = uVar2 / uVar7;
      iVar3 = uVar2 - uVar7 * uVar5;
      iVar6 = iVar6 + uVar5;
      if (uVar7 - iVar3 <= uVar4) {
        uVar4 = uVar4 - uVar7;
        iVar6 = iVar6 + 1;
      }
      uVar4 = iVar3 + uVar4;
      piVar1 = piVar1 + -1;
    }
    return uVar4 / uVar7 + iVar6;
  }
  return 0;
}



/* ===== _fini @ 00011170 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::abort @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hci_devinfo @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hci_devinfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::humanize_number @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void humanize_number(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::curs_set @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void curs_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wattr_off @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wattr_off(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mvprintw @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mvprintw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::initscr @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void initscr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wtimeout @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wtimeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::noecho @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void noecho(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cbreak @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cbreak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wgetch @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wgetch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wattr_on @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wattr_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endwin @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endwin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


