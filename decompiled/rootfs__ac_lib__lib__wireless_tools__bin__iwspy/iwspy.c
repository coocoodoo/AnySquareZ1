// iwspy — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010764 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002200c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00010794 size=12 ===== */

void iw_enum_devices(void)

{
  (*(code *)PTR_iw_enum_devices_00022010)();
  return;
}



/* ===== <EXTERNAL>::printf @ 000107ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000107b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002201c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_print_stats @ 000107c4 size=12 ===== */

void iw_print_stats(void)

{
  (*(code *)PTR_iw_print_stats_00022020)();
  return;
}



/* ===== <EXTERNAL>::iw_get_stats @ 000107d0 size=12 ===== */

void iw_get_stats(void)

{
  (*(code *)PTR_iw_get_stats_00022024)();
  return;
}



/* ===== <EXTERNAL>::iw_in_addr @ 000107dc size=12 ===== */

void iw_in_addr(void)

{
  (*(code *)PTR_iw_in_addr_00022028)();
  return;
}



/* ===== <EXTERNAL>::iw_sockets_open @ 000107e8 size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_0002202c)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 000107f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00022034)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 0001080c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022038)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002203c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010824 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010830 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022044)();
  return;
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 0001083c size=12 ===== */

void iw_ether_ntop(void)

{
  (*(code *)PTR_iw_ether_ntop_00022048)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00010848 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002204c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00022050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001086c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022058)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_get_range_info @ 00010878 size=12 ===== */

void iw_get_range_info(void)

{
  (*(code *)PTR_iw_get_range_info_0002205c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022060)();
  return piVar1;
}



/* ===== <EXTERNAL>::iw_check_mac_addr_type @ 00010890 size=12 ===== */

void iw_check_mac_addr_type(void)

{
  (*(code *)PTR_iw_check_mac_addr_type_00022064)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 0001089c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00022068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_version_info @ 000108a8 size=12 ===== */

void iw_print_version_info(void)

{
  (*(code *)PTR_iw_print_version_info_0002206c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000108b4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022070)();
  return;
}



/* ===== <EXTERNAL>::close @ 000108c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00022074)(__fd);
  return iVar1;
}



/* ===== FUN_000108cc @ 000108cc size=596 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000108cc(int param_1,int param_2)

{
  undefined4 *puVar1;
  int __fd;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  char *__format;
  undefined4 uVar4;
  char *__s1;
  char *pcVar5;
  int local_64;
  int local_60 [3];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  int *local_30;
  undefined4 local_2c;
  
  __fd = iw_sockets_open();
  if (__fd < 0) {
    perror(DAT_00010b20);
    return 0xffffffff;
  }
  if (param_1 == 1) {
    iw_enum_devices(__fd,DAT_00010b24,0);
  }
  else {
    __s1 = *(char **)(param_2 + 4);
    iVar2 = strcmp(__s1,DAT_00010b28);
    if ((iVar2 != 0) && (iVar2 = strcmp(__s1,DAT_00010b2c), iVar2 != 0)) {
      iVar2 = strcmp(__s1,DAT_00010b38);
      if ((iVar2 == 0) || (iVar2 = strcmp(__s1,DAT_00010b3c), iVar2 == 0)) {
        uVar4 = iw_print_version_info(DAT_00010b40);
        goto LAB_0001091c;
      }
      if (param_1 == 2) {
        FUN_00010f98(__fd,__s1,0);
        goto LAB_00010918;
      }
      pcVar5 = *(char **)(param_2 + 8);
      iVar2 = strcmp(pcVar5,DAT_00010b44);
      if (iVar2 != 0) {
        iVar2 = strcmp(pcVar5,DAT_00010b64);
        if (iVar2 == 0) {
          uVar4 = FUN_00010cac(__fd,__s1);
        }
        else {
          uVar4 = FUN_00010dac(__fd,__s1,param_2 + 8,param_1 + -2);
        }
        goto LAB_0001091c;
      }
      local_60[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      pcVar5 = *(char **)(param_2 + 0xc);
      local_60[1] = 0;
      local_50 = 0;
      uStack_4c = local_60[2];
      uStack_48 = uStack_54;
      iVar2 = strcmp(pcVar5,DAT_00010b48);
      if (iVar2 == 0) {
LAB_00010a8c:
        local_2c = 1;
        local_30 = local_60 + 1;
        iVar2 = FUN_00010c80(__fd,__s1,0x8b12,auStack_40);
        puVar1 = DAT_00010b30;
        uVar4 = 0;
        if (-1 < iVar2) goto LAB_0001091c;
        fputs(DAT_00010b5c,(FILE *)*DAT_00010b30);
        __stream = (FILE *)*puVar1;
        piVar3 = __errno_location();
        __s1 = strerror(*piVar3);
        __format = DAT_00010b60;
      }
      else {
        __format = DAT_00010b4c;
        if ((((4 < param_1) &&
             (iVar2 = sscanf(pcVar5,DAT_00010b50,&local_64), __format = DAT_00010b54, iVar2 == 1))
            && (iVar2 = sscanf(*(char **)(param_2 + 0x10),DAT_00010b50,local_60),
               __format = DAT_00010b54, iVar2 == 1)) &&
           (__format = DAT_00010b58, local_64 <= local_60[0])) {
          uStack_48._0_2_ = CONCAT11((char)local_64,(undefined1)uStack_48);
          uStack_44._0_2_ = CONCAT11((char)local_60[0],(undefined1)uStack_44);
          uStack_48 = CONCAT13(2,(undefined3)uStack_48);
          uStack_44 = CONCAT13(2,(undefined3)uStack_44);
          goto LAB_00010a8c;
        }
        __stream = (FILE *)*DAT_00010b30;
      }
      fprintf(__stream,__format,__s1);
      uVar4 = 0xffffffff;
      goto LAB_0001091c;
    }
    fputs(DAT_00010b34,(FILE *)*DAT_00010b30);
  }
LAB_00010918:
  uVar4 = 0;
LAB_0001091c:
  close(__fd);
  return uVar4;
}



/* ===== entry @ 00010b68 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022054)
            (DAT_00010b9c,param_2,&stack0x00000004,DAT_00010ba0,DAT_00010b98,param_1);
  return;
}



/* ===== FUN_00010ba4 @ 00010ba4 size=32 ===== */

void FUN_00010ba4(void)

{
  if (DAT_00010bc8 == DAT_00010bc4) {
    return;
  }
  if (DAT_00010bcc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010bcc)();
  return;
}



/* ===== _FINI_0 @ 00010c08 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010c44;
  if (*DAT_00010c44 != '\0') {
    return;
  }
  FUN_00010ba4();
  if (DAT_00010c48 != 0) {
    __deregister_frame_info(DAT_00010c4c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010c50 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010c74 != 0) {
    __register_frame_info(DAT_00010c7c,DAT_00010c78);
  }
  if ((DAT_00010c00 - DAT_00010bfc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010c04 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c04)();
  return;
}



/* ===== FUN_00010c80 @ 00010c80 size=56 ===== */

void FUN_00010c80(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = strncpy(param_4,param_2,0x10);
  (*(code *)PTR_ioctl_00022014)(param_1,param_3,pcVar1);
  return;
}



/* ===== FUN_00010cac @ 00010cac size=232 ===== */

undefined4 FUN_00010cac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FILE *__stream;
  undefined1 auStack_298 [21];
  byte local_283;
  byte local_27f;
  undefined1 auStack_27c [16];
  undefined1 *local_26c;
  undefined4 local_268;
  undefined1 auStack_25c [45];
  byte local_22f;
  
  local_26c = auStack_298;
  local_268 = 1;
  iVar2 = FUN_00010c80(param_1,param_2,0x8b13,auStack_27c);
  puVar1 = DAT_00010d94;
  if (iVar2 < 0) {
    fputs(DAT_00010d98,(FILE *)*DAT_00010d94);
    __stream = (FILE *)*puVar1;
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    fprintf(__stream,DAT_00010d9c,pcVar4);
    return 0xffffffff;
  }
  iVar2 = iw_get_range_info(param_1,param_2,auStack_25c);
  uVar6 = (uint)local_283;
  uVar7 = (uint)local_27f;
  pcVar4 = DAT_00010da8;
  if ((-1 < iVar2) && (uVar6 != 0)) {
    uVar5 = (uint)local_22f;
    if (uVar6 <= uVar5) {
      printf(DAT_00010da4,param_2,uVar6,uVar5,uVar7,uVar5);
      return 0;
    }
    uVar7 = uVar7 - 0x100;
    uVar6 = uVar6 - 0x100;
    pcVar4 = DAT_00010da0;
  }
  printf(pcVar4,param_2,uVar6,uVar7);
  return 0;
}



/* ===== FUN_00010dac @ 00010dac size=452 ===== */

undefined4 FUN_00010dac(undefined4 param_1,char *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_160 [16];
  undefined1 *local_150;
  uint local_14c;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [164];
  
  pcVar5 = (char *)*param_3;
  iVar2 = strcmp(pcVar5,DAT_00010f70);
  if (iVar2 == 0) {
    uVar6 = 1;
    uVar4 = 0;
  }
  else {
    iVar2 = strcmp(pcVar5,DAT_00010f74);
    if (iVar2 == 0) {
      iVar2 = iw_check_mac_addr_type(param_1,param_2);
      if (iVar2 < 0) {
        __stream = (FILE *)*DAT_00010f78;
        pcVar5 = DAT_00010f7c;
        goto LAB_00010e1c;
      }
      local_14c = 8;
      local_150 = auStack_c0;
      iVar2 = FUN_00010c80(param_1,param_2,0x8b11,auStack_160);
      puVar1 = DAT_00010f78;
      if (iVar2 < 0) {
        fputs(DAT_00010f80,(FILE *)*DAT_00010f78);
        __stream = (FILE *)*puVar1;
        piVar3 = __errno_location();
        param_2 = strerror(*piVar3);
        pcVar5 = DAT_00010f84;
        goto LAB_00010e1c;
      }
      uVar4 = local_14c & 0xffff;
      uVar6 = 1;
      memcpy(auStack_140,auStack_c0,uVar4 << 4);
    }
    else {
      uVar4 = 0;
      uVar6 = uVar4;
    }
    while( true ) {
      bVar7 = SBORROW4(uVar4,7);
      iVar2 = uVar4 - 7;
      if ((int)uVar4 < 8) {
        bVar7 = SBORROW4(uVar6,param_4);
        iVar2 = uVar6 - param_4;
      }
      if (iVar2 < 0 == bVar7) break;
      puVar1 = param_3 + uVar6;
      uVar6 = uVar6 + 1;
      iVar2 = iw_in_addr(param_1,param_2,*puVar1,auStack_140 + uVar4 * 0x10);
      if (-1 < iVar2) {
        uVar4 = uVar4 + 1;
      }
    }
    if (uVar4 == 0) {
      fputs(DAT_00010f88,(FILE *)*DAT_00010f78);
      return 0xffffffff;
    }
  }
  if ((int)uVar6 < param_4) {
    fprintf((FILE *)*DAT_00010f78,DAT_00010f8c);
  }
  local_150 = auStack_140;
  local_14c = uVar4 & 0xffff;
  iVar2 = FUN_00010c80(param_1,param_2,0x8b10,auStack_160);
  puVar1 = DAT_00010f78;
  if (-1 < iVar2) {
    return 0;
  }
  fputs(DAT_00010f90,(FILE *)*DAT_00010f78);
  __stream = (FILE *)*puVar1;
  piVar3 = __errno_location();
  param_2 = strerror(*piVar3);
  pcVar5 = DAT_00010f94;
LAB_00010e1c:
  fprintf(__stream,pcVar5,param_2);
  return 0xffffffff;
}



/* ===== FUN_00010f98 @ 00010f98 size=420 ===== */

undefined4 FUN_00010f98(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *__format_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStack_3d4 [16];
  undefined1 *local_3c4;
  uint local_3c0;
  undefined1 auStack_3b4 [2];
  undefined1 auStack_3b2 [30];
  char acStack_394 [128];
  undefined1 auStack_314 [160];
  undefined1 auStack_274 [48];
  undefined1 auStack_244 [232];
  byte local_15c;
  
  local_3c0 = 8;
  puVar4 = auStack_314;
  local_3c4 = puVar4;
  iVar1 = FUN_00010c80(param_1,param_2,0x8b11,auStack_3d4);
  if (iVar1 < 0) {
    fprintf((FILE *)*DAT_0001113c,DAT_00011140,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar7 = local_3c0 & 0xffff;
    iVar1 = iw_check_mac_addr_type(param_1,param_2);
    if (iVar1 < 0) {
      fprintf((FILE *)*DAT_0001113c,DAT_00011144,param_2);
      uVar2 = 0xfffffffe;
    }
    else {
      puVar5 = puVar4 + uVar7 * 0x10;
      uVar3 = iw_get_range_info(param_1,param_2,auStack_274);
      __format = DAT_00011148;
      __format_00 = DAT_0001114c;
      if (uVar7 != 0) {
        __format_00 = DAT_00011150;
      }
      uVar3 = ~uVar3 >> 0x1f;
      printf(__format_00,param_2);
      puVar6 = puVar5;
      for (; puVar4 != puVar5; puVar4 = puVar4 + 0x10) {
        iw_ether_ntop(puVar4 + 2,acStack_394);
        printf(__format,acStack_394);
        iw_print_stats(acStack_394,0x80,puVar6,auStack_274,uVar3);
        puts(acStack_394);
        puVar6 = puVar6 + 4;
      }
      if (uVar7 == 0) {
        uVar3 = 0;
      }
      if (((uVar3 != 0) && (0xb < local_15c)) &&
         (iVar1 = iw_get_stats(param_1,param_2,auStack_3b4,auStack_274,1), -1 < iVar1)) {
        iw_print_stats(acStack_394,0x80,auStack_3b2,auStack_274,1);
        printf(DAT_00011154,acStack_394);
        iw_print_stats(acStack_394,0x80,auStack_244,auStack_274,1);
        printf(DAT_00011158,acStack_394);
      }
      putchar(10);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== _fini @ 0001115c size=16 ===== */

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



/* ===== <EXTERNAL>::iw_print_version_info @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_version_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_stats @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_enum_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_in_addr @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_in_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_check_mac_addr_type @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_check_mac_addr_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_ether_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_range_info @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_range_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_stats @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sockets_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


