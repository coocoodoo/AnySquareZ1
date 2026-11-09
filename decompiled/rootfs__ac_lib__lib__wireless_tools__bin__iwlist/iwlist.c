// iwlist — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010c34 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002500c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00010c64 size=12 ===== */

void iw_enum_devices(void)

{
  (*(code *)PTR_iw_enum_devices_00025010)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002501c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_print_stats @ 00010c94 size=12 ===== */

void iw_print_stats(void)

{
  (*(code *)PTR_iw_print_stats_00025020)();
  return;
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00010ca0 size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_00025024)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002502c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_freq_to_channel @ 00010cd0 size=12 ===== */

void iw_freq_to_channel(void)

{
  (*(code *)PTR_iw_freq_to_channel_00025034)();
  return;
}



/* ===== <EXTERNAL>::select @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025038)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0002503c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010cf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00025040)();
  return;
}



/* ===== <EXTERNAL>::iw_mwatt2dbm @ 00010d00 size=12 ===== */

void iw_mwatt2dbm(void)

{
  (*(code *)PTR_iw_mwatt2dbm_00025044)();
  return;
}



/* ===== <EXTERNAL>::iw_extract_event_stream @ 00010d0c size=12 ===== */

void iw_extract_event_stream(void)

{
  (*(code *)PTR_iw_extract_event_stream_00025048)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002504c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d24 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00025050)();
  return;
}



/* ===== <EXTERNAL>::iw_print_pm_mode @ 00010d30 size=12 ===== */

void iw_print_pm_mode(void)

{
  (*(code *)PTR_iw_print_pm_mode_00025054)();
  return;
}



/* ===== <EXTERNAL>::iw_print_key @ 00010d3c size=12 ===== */

void iw_print_key(void)

{
  (*(code *)PTR_iw_print_key_00025058)();
  return;
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 00010d48 size=12 ===== */

void iw_ether_ntop(void)

{
  (*(code *)PTR_iw_ether_ntop_0002505c)();
  return;
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 00010d54 size=12 ===== */

void iw_print_bitrate(void)

{
  (*(code *)PTR_iw_print_bitrate_00025060)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00025064)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00025068)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002506c)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00025070)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_dbm2mwatt @ 00010d90 size=12 ===== */

void iw_dbm2mwatt(void)

{
  (*(code *)PTR_iw_dbm2mwatt_00025074)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002507c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::iw_print_freq_value @ 00010db4 size=12 ===== */

void iw_print_freq_value(void)

{
  (*(code *)PTR_iw_print_freq_value_00025080)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00025084)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_init_event_stream @ 00010dcc size=12 ===== */

void iw_init_event_stream(void)

{
  (*(code *)PTR_iw_init_event_stream_00025088)();
  return;
}



/* ===== <EXTERNAL>::iw_print_pm_value @ 00010dd8 size=12 ===== */

void iw_print_pm_value(void)

{
  (*(code *)PTR_iw_print_pm_value_0002508c)();
  return;
}



/* ===== <EXTERNAL>::iw_get_range_info @ 00010de4 size=12 ===== */

void iw_get_range_info(void)

{
  (*(code *)PTR_iw_get_range_info_00025090)();
  return;
}



/* ===== <EXTERNAL>::iw_freq2float @ 00010df0 size=12 ===== */

void iw_freq2float(void)

{
  (*(code *)PTR_iw_freq2float_00025094)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00025098)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002509c)(__status);
  return;
}



/* ===== <EXTERNAL>::iw_check_mac_addr_type @ 00010e14 size=12 ===== */

void iw_check_mac_addr_type(void)

{
  (*(code *)PTR_iw_check_mac_addr_type_000250a0)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::iw_print_freq @ 00010e2c size=12 ===== */

void iw_print_freq(void)

{
  (*(code *)PTR_iw_print_freq_000250a8)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00010e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000250ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_retry_value @ 00010e44 size=12 ===== */

void iw_print_retry_value(void)

{
  (*(code *)PTR_iw_print_retry_value_000250b0)();
  return;
}



/* ===== <EXTERNAL>::iw_print_version_info @ 00010e50 size=12 ===== */

void iw_print_version_info(void)

{
  (*(code *)PTR_iw_print_version_info_000250b4)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e5c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250b8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000250c0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250c4)(__ptr);
  return;
}



/* ===== entry @ 000110a8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025078)
            (DAT_000110dc,param_2,&stack0x00000004,DAT_000110e0,DAT_000110d8,param_1);
  return;
}



/* ===== FUN_000110e4 @ 000110e4 size=32 ===== */

void FUN_000110e4(void)

{
  if (DAT_00011108 == DAT_00011104) {
    return;
  }
  if (DAT_0001110c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001110c)();
  return;
}



/* ===== _FINI_0 @ 00011148 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011184;
  if (*DAT_00011184 != '\0') {
    return;
  }
  FUN_000110e4();
  if (DAT_00011188 != 0) {
    __deregister_frame_info(DAT_0001118c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011190 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000111b4 != 0) {
    __register_frame_info(DAT_000111bc,DAT_000111b8);
  }
  if ((DAT_00011140 - DAT_0001113c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011144 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011144)();
  return;
}



/* ===== FUN_000111c0 @ 000111c0 size=112 ===== */

void FUN_000111c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  FILE *__stream;
  bool bVar11;
  
  iVar4 = DAT_00011244;
  uVar3 = DAT_00011240;
  uVar2 = DAT_0001123c;
  iVar10 = 0;
  puVar7 = DAT_00011234;
  if (param_1 == 0) {
    puVar7 = DAT_00011238;
  }
  __stream = (FILE *)*puVar7;
  piVar9 = DAT_00011230;
  while (iVar8 = *piVar9, iVar8 != 0) {
    piVar1 = piVar9 + 3;
    piVar9 = piVar9 + 4;
    iVar5 = *piVar1;
    if (*piVar1 == 0) {
      iVar5 = iVar4;
    }
    bVar11 = iVar10 == 0;
    iVar10 = iVar10 + 1;
    uVar6 = uVar2;
    if (bVar11) {
      uVar6 = uVar3;
    }
    fprintf(__stream,DAT_00011248,uVar6,iVar8,iVar5,param_2);
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== FUN_0001124c @ 0001124c size=84 ===== */

void FUN_0001124c(int param_1,int param_2)

{
  char *__format;
  int iVar1;
  int iVar2;
  
  __format = DAT_000112a4;
  iVar2 = 0;
  iVar1 = *(byte *)(param_1 + 1) + 2;
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  printf(DAT_000112a0);
  for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    printf(__format,(uint)*(byte *)(param_1 + iVar2));
  }
  putchar(10);
  return;
}



/* ===== FUN_000112a8 @ 000112a8 size=224 ===== */

undefined4 FUN_000112a8(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  char *__format_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_264 [16];
  uint local_254 [4];
  uint local_244;
  byte local_14c;
  
  iVar2 = iw_get_range_info(param_1,param_2,auStack_264);
  if ((iVar2 < 0) || (local_14c < 10)) {
    fprintf((FILE *)*DAT_00011388,DAT_0001138c,param_2);
  }
  else {
    printf(DAT_00011390,param_2);
    __format = DAT_00011398;
    iVar2 = DAT_00011394;
    iVar3 = 0;
    do {
      if ((local_254[iVar3 >> 5] & 1 << (iVar3 + 0x8b00U & 0x1f)) != 0) {
        printf(__format,iVar3 + 0x8b00U,*(undefined4 *)(iVar2 + iVar3 * 4));
      }
      iVar1 = DAT_0001139c;
      __format_00 = DAT_00011398;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x2e);
    uVar4 = 0;
    do {
      if ((local_244 & 1 << (uVar4 & 0xff)) != 0) {
        printf(__format_00,uVar4 + 0x8c00,*(undefined4 *)(iVar1 + uVar4 * 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 5);
    putchar(10);
  }
  return 0;
}



/* ===== FUN_000113a0 @ 000113a0 size=56 ===== */

void FUN_000113a0(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = strncpy(param_4,param_2,0x10);
  (*(code *)PTR_ioctl_00025014)(param_1,param_3,pcVar1);
  return;
}



/* ===== FUN_000113cc @ 000113cc size=340 ===== */

undefined4 FUN_000113cc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *__format;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_28c [16];
  uint local_27c;
  char local_278;
  undefined2 local_276;
  undefined1 auStack_26c [280];
  byte local_154;
  uint local_28;
  
  iVar5 = iw_get_range_info(param_1,param_2,auStack_26c);
  if ((iVar5 < 0) || (local_154 < 0xb)) {
    fprintf((FILE *)*DAT_00011520,DAT_00011524,param_2);
  }
  else if (local_28 == 0) {
    printf(DAT_00011528,param_2);
  }
  else {
    iVar5 = 0;
    printf(DAT_0001152c,param_2);
    pcVar2 = DAT_00011534;
    puVar9 = DAT_00011530;
    do {
      if ((*puVar9 & ~local_28) == 0) {
        printf(pcVar2,puVar9 + 1,puVar9[3]);
      }
      iVar5 = iVar5 + 1;
      puVar9 = puVar9 + 4;
    } while (iVar5 != 0x10);
    iVar10 = 0;
    local_276 = 0;
    iVar6 = FUN_000113a0(param_1,param_2,0x8b2f,auStack_28c);
    pcVar4 = DAT_00011544;
    pcVar3 = DAT_00011540;
    pcVar2 = DAT_0001153c;
    iVar5 = DAT_00011538;
    if (-1 < iVar6) {
      if (local_278 == '\0') {
        uVar7 = 0x3a;
      }
      else {
        uVar7 = 0x3d;
      }
      printf(DAT_00011548,uVar7);
      uVar8 = 0;
      do {
        if ((*(uint *)(iVar5 + -4) & ~local_27c) == 0) {
          uVar1 = uVar8 & 7;
          uVar8 = uVar8 + 1;
          __format = pcVar4;
          if (uVar1 != 0) {
            __format = pcVar3;
          }
          printf(__format);
          printf(pcVar2,iVar5);
        }
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar10 != 0x10);
      putchar(10);
    }
    putchar(10);
  }
  return 0;
}



/* ===== FUN_0001154c @ 0001154c size=504 ===== */

undefined4 FUN_0001154c(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  char *__format_00;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  FILE *__stream;
  ushort *puVar5;
  undefined1 auStack_34c [16];
  undefined1 *local_33c;
  undefined4 local_338;
  undefined1 auStack_32c [64];
  undefined1 auStack_2ec [128];
  undefined1 auStack_26c [222];
  ushort local_18e;
  ushort auStack_18c [7];
  byte local_17e;
  byte local_17d;
  
  iVar1 = iw_get_range_info(param_1,param_2,auStack_26c);
  if (iVar1 < 0) {
    fprintf((FILE *)*DAT_00011744,DAT_00011748,param_2);
  }
  else {
    printf(DAT_0001174c,param_2);
    pcVar3 = DAT_00011754;
    if (local_17e - 1 < 7) {
      printf(DAT_00011750,(uint)local_17e,(uint)local_18e << 3);
      puVar5 = auStack_18c;
      for (uVar4 = 1; uVar4 < local_17e; uVar4 = uVar4 + 1) {
        printf(pcVar3,(uint)*puVar5 << 3);
        puVar5 = puVar5 + 1;
      }
      printf(DAT_00011758);
    }
    printf(DAT_0001175c,(uint)local_17d);
    __format_00 = DAT_00011768;
    __format = DAT_00011764;
    pcVar3 = DAT_00011760;
    for (uVar4 = 1; uVar4 <= local_17d; uVar4 = uVar4 + 1) {
      local_338._2_2_ = (ushort)uVar4;
      local_338._0_2_ = 0x40;
      local_33c = auStack_32c;
      iVar1 = FUN_000113a0(param_1,param_2,0x8b2b,auStack_34c);
      if (iVar1 < 0) {
        __stream = (FILE *)*DAT_00011744;
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(__stream,DAT_0001176c,pcVar3);
        break;
      }
      if (((local_338._2_2_ & 0x8000) == 0) && ((ushort)local_338 != 0)) {
        iw_print_key(auStack_2ec,0x80,auStack_32c,(ushort)local_338,local_338._2_2_);
        printf(__format,uVar4,auStack_2ec);
        printf(__format_00,(uint)(ushort)local_338 << 3);
        putchar(10);
      }
      else {
        printf(pcVar3,uVar4);
      }
    }
    local_338 = 0x40;
    local_33c = auStack_32c;
    iVar1 = FUN_000113a0(param_1,param_2,0x8b2b,auStack_34c);
    if (-1 < iVar1) {
      printf(DAT_00011770,local_338 >> 0x10 & 0xff);
      if ((local_338 & 0x40000000) != 0) {
        puts(DAT_00011774);
      }
      if ((local_338 & 0x20000000) != 0) {
        puts(DAT_00011778);
      }
    }
    puts(DAT_0001177c);
  }
  return 0;
}



/* ===== FUN_00011780 @ 00011780 size=340 ===== */

undefined4 FUN_00011780(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  char *__format_00;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 auStack_814 [16];
  undefined1 *local_804;
  undefined4 local_800;
  char acStack_7f4 [128];
  undefined1 auStack_774 [588];
  undefined1 auStack_528 [1284];
  
  local_800 = 0x40;
  local_804 = auStack_528;
  iVar2 = FUN_000113a0(param_1,param_2,0x8b17,auStack_814);
  if (iVar2 < 0) {
    fprintf((FILE *)*DAT_000118d4,DAT_000118d8,param_2);
    uVar3 = 0xffffffff;
  }
  else {
    uVar6 = local_800 & 0xffff;
    sVar1 = local_800._2_2_;
    iVar2 = iw_check_mac_addr_type(param_1,param_2);
    if (iVar2 < 0) {
      fprintf((FILE *)*DAT_000118d4,DAT_000118dc,param_2);
      uVar3 = 0xfffffffe;
    }
    else {
      uVar4 = iw_get_range_info(param_1,param_2,auStack_774);
      if (uVar6 == 0) {
        printf(DAT_000118e0,param_2);
      }
      else {
        printf(DAT_000118e4,param_2);
        __format_00 = DAT_000118ec;
        __format = DAT_000118e8;
        iVar2 = 0;
        puVar5 = auStack_528;
        do {
          if (sVar1 == 0) {
            iw_ether_ntop(puVar5 + 2,acStack_7f4);
            printf(__format,acStack_7f4);
          }
          else {
            iw_ether_ntop(puVar5 + 2,acStack_7f4);
            printf(__format_00,acStack_7f4);
            iw_print_stats(acStack_7f4,0x500,auStack_528 + iVar2 * 4 + uVar6 * 0x10,auStack_774,
                           ~uVar4 >> 0x1f);
            puts(acStack_7f4);
          }
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 0x10;
        } while (iVar2 < (int)uVar6);
      }
      putchar(10);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_000118f0 @ 000118f0 size=400 ===== */

undefined4 FUN_000118f0(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  char *__format_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_294 [16];
  undefined4 local_284;
  char local_280;
  char local_27f;
  ushort local_27e;
  undefined1 auStack_274 [242];
  ushort local_182;
  byte local_180;
  undefined4 local_17c [8];
  byte local_15c;
  
  puVar4 = auStack_274;
  iVar1 = iw_get_range_info(param_1,param_2,puVar4);
  if ((iVar1 < 0) || (local_15c < 10)) {
    fprintf((FILE *)*DAT_00011a80,DAT_00011a84,param_2);
  }
  else {
    if (local_180 - 1 < 8) {
      printf(DAT_00011a94,param_2);
      __format_00 = DAT_00011a9c;
      __format = DAT_00011a98;
      for (iVar1 = 0; iVar1 < (int)(uint)local_180; iVar1 = iVar1 + 1) {
        uVar3 = *(undefined4 *)(puVar4 + 0xf8);
        if ((local_182 & 2) == 0) {
          if ((local_182 & 1) == 0) {
            uVar2 = iw_dbm2mwatt(uVar3);
          }
          else {
            uVar3 = iw_mwatt2dbm();
            uVar2 = *(undefined4 *)(puVar4 + 0xf8);
          }
          printf(__format,uVar3,uVar2);
        }
        else {
          printf(__format_00,uVar3);
        }
        puVar4 = puVar4 + 4;
      }
    }
    else {
      printf(DAT_00011a88,param_2);
    }
    iVar1 = FUN_000113a0(param_1,param_2,0x8b27,auStack_294);
    if (-1 < iVar1) {
      printf(DAT_00011a8c);
      if (local_27f == '\0') {
        if (local_280 == '\0') {
          iVar1 = 0x3a;
        }
        else {
          iVar1 = 0x3d;
        }
        putchar(iVar1);
        if ((local_27e & 2) == 0) {
          if ((local_27e & 1) == 0) {
            uVar3 = iw_dbm2mwatt(local_284);
          }
          else {
            uVar2 = iw_mwatt2dbm();
            uVar3 = local_284;
            local_284 = uVar2;
          }
          printf(DAT_00011aa0,local_284,uVar3);
        }
        else {
          printf(DAT_00011a9c,local_284);
        }
      }
      else {
        puts(DAT_00011a90);
      }
    }
  }
  return 0;
}



/* ===== FUN_00011aa4 @ 00011aa4 size=340 ===== */

undefined4 FUN_00011aa4(undefined4 param_1,undefined4 param_2)

{
  undefined *__format;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_304 [16];
  undefined4 local_2f4;
  char local_2f0;
  undefined2 local_2ee;
  undefined1 auStack_2e4 [128];
  undefined1 auStack_264 [52];
  byte local_230;
  undefined4 auStack_22c [132];
  uint local_1c;
  
  iVar1 = iw_get_range_info(param_1,param_2,auStack_264);
  if (iVar1 < 0) {
    fprintf(*(FILE **)PTR_stderr_00011bf8,PTR_s___8_16s_no_bit_rate_information__00011bfc,param_2);
  }
  else {
    if (local_230 - 1 < 0x20) {
      printf(PTR_s___8_16s__d_available_bit_rates___00011c00,param_2);
      __format = PTR_s__s_00011c04;
      puVar3 = auStack_22c;
      for (iVar1 = 0; iVar1 < (int)(uint)local_230; iVar1 = iVar1 + 1) {
        iw_print_bitrate(auStack_2e4,0x80,*puVar3);
        printf(__format,auStack_2e4);
        puVar3 = puVar3 + 1;
      }
    }
    else {
      printf(PTR_s___8_16s_unknown_bit_rate_informa_00011c10,param_2);
    }
    iVar1 = FUN_000113a0(param_1,param_2,0x8b21,auStack_304);
    if (-1 < iVar1) {
      iw_print_bitrate(auStack_2e4,0x80,local_2f4);
      if (local_2f0 == '\0') {
        uVar2 = 0x3a;
      }
      else {
        uVar2 = 0x3d;
      }
      printf(PTR_s_Current_Bit_Rate_c_s_00011c08,uVar2,auStack_2e4);
    }
    if ((local_1c & 2) != 0) {
      local_2ee = 2;
      iVar1 = FUN_000113a0(param_1,param_2,0x8b21,auStack_304);
      if (-1 < iVar1) {
        iw_print_bitrate(auStack_2e4,0x80,local_2f4);
        if (local_2f0 == '\0') {
          uVar2 = 0x3a;
        }
        else {
          uVar2 = 0x3d;
        }
        printf(PTR_s_Broadcast_Bit_Rate_c_s_00011c0c,uVar2,auStack_2e4);
      }
    }
    putchar(10);
  }
  return 0;
}



/* ===== FUN_00011c14 @ 00011c14 size=280 ===== */

undefined4 FUN_00011c14(undefined4 param_1,undefined4 param_2)

{
  undefined *__format;
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_30c [16];
  undefined1 auStack_2fc [7];
  undefined1 local_2f5;
  undefined1 auStack_2ec [128];
  undefined1 auStack_26c [304];
  ushort local_13c;
  byte local_13a;
  byte local_132 [274];
  
  iVar1 = iw_get_range_info(param_1,param_2,auStack_26c);
  __format = PTR_s_Channel___2d____s_00011d38;
  if (iVar1 < 0) {
    fprintf(*(FILE **)PTR_stderr_00011d2c,PTR_s___8_16s_no_frequency_information_00011d30,param_2);
  }
  else {
    if (local_13a == 0) {
      printf(PTR_s___8_16s__d_channels_00011d40,param_2,(uint)local_13c);
    }
    else {
      iVar1 = 0;
      printf(PTR_s___8_16s__d_channels_in_total__av_00011d34,param_2,(uint)local_13c);
      puVar2 = auStack_26c;
      while( true ) {
        if ((int)(uint)local_13a <= iVar1) break;
        iVar1 = iVar1 + 1;
        iw_freq2float(puVar2 + 0x134);
        iw_print_freq_value(auStack_2ec,0x80);
        printf(__format,(uint)(byte)puVar2[0x13a],auStack_2ec);
        puVar2 = puVar2 + 8;
      }
    }
    iVar1 = FUN_000113a0(param_1,param_2,0x8b05,auStack_30c);
    if (-1 < iVar1) {
      uVar4 = iw_freq2float(auStack_2fc);
      uVar3 = iw_freq_to_channel(auStack_26c);
      iw_print_freq(uVar4,auStack_2ec,0x80,uVar3,local_2f5);
      printf(PTR_s_Current__s_00011d3c,auStack_2ec);
    }
  }
  return 0;
}



/* ===== FUN_00011d44 @ 00011d44 size=24 ===== */

void FUN_00011d44(uint param_1,int param_2,uint param_3)

{
  char *__format;
  
  __format = DAT_00011d5c;
  if (param_1 < param_3) {
    param_1 = *(uint *)(param_2 + param_1 * 4);
    __format = DAT_00011d60;
  }
  printf(__format,param_1);
  return;
}



/* ===== FUN_00011d64 @ 00011d64 size=740 ===== */

void FUN_00011d64(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *__s;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined2 *local_3c;
  undefined2 local_30;
  undefined1 local_2e;
  undefined2 local_2c;
  undefined1 local_2a;
  
  iVar10 = 0;
  do {
    if (param_2 + -1 <= iVar10) {
      return;
    }
    printf(DAT_00012048);
    pcVar7 = (char *)(param_1 + iVar10);
    cVar1 = *(char *)(param_1 + iVar10);
    if ((cVar1 == '0') || (cVar1 == -0x23)) {
      local_30 = *DAT_0001204c;
      local_2e = *(undefined1 *)(DAT_0001204c + 1);
      iVar8 = (byte)pcVar7[1] + 2;
      if (param_2 < (int)((byte)pcVar7[1] + 2)) {
        iVar8 = param_2;
      }
      local_2c = *DAT_00012050;
      local_2a = *(undefined1 *)(DAT_00012050 + 1);
      if (cVar1 != '0') {
        if (cVar1 != -0x23) goto LAB_00011df8;
        if (((7 < iVar8) && (iVar4 = memcmp(pcVar7 + 2,&local_30,3), iVar4 == 0)) &&
           (pcVar7[5] == '\x01')) {
          iVar4 = 6;
          local_3c = &local_30;
          goto LAB_00011e64;
        }
        goto LAB_00011e1c;
      }
      if (iVar8 < 4) goto LAB_00011e1c;
      local_3c = &local_2c;
      iVar4 = 2;
LAB_00011e64:
      pcVar9 = pcVar7 + iVar4;
      cVar2 = pcVar7[iVar4];
      cVar3 = pcVar9[1];
      if (cVar1 == -0x23) {
        printf(DAT_00012054,(uint)CONCAT11(cVar3,cVar2));
      }
      if (*pcVar7 == '0') {
        printf(DAT_00012058,(uint)CONCAT11(cVar3,cVar2));
      }
      if (iVar4 + 5 < iVar8) {
        iVar5 = memcmp(pcVar7 + iVar4 + 2,local_3c,3);
        if (iVar5 == 0) {
          printf(DAT_00012078);
          FUN_00011d44(pcVar9[5],DAT_0001207c,6);
          putchar(10);
        }
        else {
          puts(DAT_00012064);
        }
        __s = DAT_00012068;
        if (iVar8 <= iVar4 + 7) goto LAB_00011ec4;
        uVar11 = (uint)CONCAT11(pcVar9[7],pcVar7[iVar4 + 6]);
        iVar4 = iVar4 + 8 + uVar11 * 4;
        printf(DAT_0001206c,uVar11);
        if (iVar4 <= iVar8) {
          for (iVar5 = 0; iVar5 < (int)uVar11; iVar5 = iVar5 + 1) {
            iVar6 = memcmp(pcVar9 + 8,local_3c,3);
            if (iVar6 == 0) {
              FUN_00011d44(pcVar9[0xb],DAT_0001207c,6);
            }
            else {
              printf(DAT_00012080);
            }
            pcVar9 = pcVar9 + 4;
          }
          putchar(10);
          if (iVar4 + 1 < iVar8) {
            pcVar9 = pcVar7 + iVar4;
            uVar11 = (uint)CONCAT11(pcVar9[1],pcVar7[iVar4]);
            iVar4 = iVar4 + 2 + uVar11 * 4;
            printf(DAT_00012070,uVar11);
            if (iVar4 <= iVar8) {
              for (iVar5 = 0; iVar5 < (int)uVar11; iVar5 = iVar5 + 1) {
                iVar6 = memcmp(pcVar9 + 2,local_3c,3);
                if (iVar6 == 0) {
                  FUN_00011d44(pcVar9[5],DAT_00012084,3);
                }
                else {
                  printf(DAT_00012080);
                }
                pcVar9 = pcVar9 + 4;
              }
              putchar(10);
              if ((iVar8 != iVar4) && (__s = DAT_00012074, (pcVar7[iVar4] & 1U) != 0))
              goto LAB_00011ec4;
            }
          }
        }
      }
      else {
        puts(DAT_0001205c);
        __s = DAT_00012060;
LAB_00011ec4:
        puts(__s);
      }
    }
    else {
LAB_00011e1c:
      FUN_0001124c(pcVar7,param_2);
    }
LAB_00011df8:
    iVar10 = iVar10 + (byte)pcVar7[1] + 2;
  } while( true );
}



/* ===== FUN_00012088 @ 00012088 size=660 ===== */

undefined4 FUN_00012088(undefined4 param_1,undefined4 param_2)

{
  char *__format;
  char *__format_00;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  FILE *__stream;
  undefined1 auStack_37c [16];
  uint *local_36c;
  undefined4 local_368;
  uint local_35c [5];
  undefined1 auStack_346 [14];
  undefined2 local_338;
  ushort local_336;
  undefined1 auStack_334 [64];
  undefined1 auStack_2f4 [128];
  undefined1 auStack_274 [222];
  ushort local_196;
  ushort auStack_194 [7];
  byte local_186;
  byte local_185;
  
  iVar1 = iw_get_range_info(param_1,param_2,auStack_274);
  if (iVar1 < 0) {
    fprintf((FILE *)*DAT_0001231c,DAT_00012320,param_2);
  }
  else {
    printf(DAT_00012324,param_2);
    pcVar3 = DAT_0001232c;
    if (local_186 - 1 < 7) {
      printf(DAT_00012328,(uint)local_186,(uint)local_196 << 3);
      puVar7 = auStack_194;
      for (uVar6 = 1; uVar6 < local_186; uVar6 = uVar6 + 1) {
        printf(pcVar3,(uint)*puVar7 << 3);
        puVar7 = puVar7 + 1;
      }
      printf(DAT_00012330);
    }
    printf(DAT_00012334,(uint)local_185);
    __format_00 = DAT_00012340;
    __format = DAT_0001233c;
    pcVar3 = DAT_00012338;
    for (uVar6 = 1; uVar6 <= local_185; uVar6 = uVar6 + 1) {
      memset(local_35c,0,0x68);
      local_368 = CONCAT22((short)uVar6,0x68);
      local_36c = local_35c;
      iVar1 = FUN_000113a0(param_1,param_2,0x8b35,auStack_37c);
      if (iVar1 < 0) {
        __stream = (FILE *)*DAT_0001231c;
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(__stream,DAT_00012344,pcVar3);
        break;
      }
      uVar5 = (uint)local_336;
      if ((local_368 & 0xffff) < uVar5 + 0x28) break;
      if (uVar5 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = local_368._2_2_ >> 0xf;
      }
      if (uVar4 == 0) {
        iw_print_key(auStack_2f4,0x80,auStack_334,uVar5,local_368._2_2_);
        printf(pcVar3,uVar6,auStack_2f4);
        printf(__format,(uint)local_336 << 3);
        putchar(10);
        iw_ether_ntop(auStack_346,auStack_2f4);
        printf(__format_00,auStack_2f4);
        printf(DAT_0001235c);
        FUN_00011d44(local_338,DAT_00012360,5);
        printf(DAT_00012364,local_35c[0]);
        if ((local_35c[0] & 1) != 0) {
          puts(DAT_00012368);
        }
        if ((local_35c[0] & 2) != 0) {
          puts(DAT_0001236c);
        }
        if ((local_35c[0] & 4) != 0) {
          puts(DAT_00012370);
        }
      }
      else {
        printf(DAT_00012358,uVar6);
      }
    }
    local_368 = 0x68;
    local_36c = local_35c;
    iVar1 = FUN_000113a0(param_1,param_2,0x8b35,auStack_37c);
    if (-1 < iVar1) {
      printf(DAT_00012348,local_368 >> 0x10 & 0xff);
      if ((local_368 & 0x40000000) != 0) {
        puts(DAT_0001234c);
      }
      if ((local_368 & 0x20000000) != 0) {
        puts(DAT_00012350);
      }
    }
    puts(DAT_00012354);
  }
  return 0;
}



/* ===== FUN_00012374 @ 00012374 size=168 ===== */

undefined4 FUN_00012374(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  undefined1 auStack_430 [16];
  undefined1 *local_420;
  uint local_41c;
  undefined1 auStack_410 [1028];
  
  local_41c = 0x400;
  local_420 = auStack_410;
  iVar1 = FUN_000113a0(param_1,param_2,0x8b31,auStack_430);
  if (iVar1 < 0) {
    __stream = (FILE *)*DAT_0001241c;
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,DAT_00012420,param_2,pcVar3);
  }
  else {
    fprintf((FILE *)*DAT_0001241c,DAT_00012424,param_2);
    if ((local_41c & 0xffff) == 0) {
      puts(DAT_00012428);
    }
    else {
      FUN_00011d64(auStack_410);
    }
    putchar(10);
  }
  return 0;
}



/* ===== FUN_0001242c @ 0001242c size=1900 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0001242c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  __fd_mask *p_Var8;
  int extraout_r1;
  __fd_mask *p_Var9;
  int iVar10;
  ushort uVar11;
  FILE *pFVar12;
  undefined1 *__ptr;
  undefined1 *__ptr_00;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  uint uVar16;
  undefined4 uVar17;
  timeval local_544;
  undefined1 auStack_53c [8];
  int local_534;
  undefined1 auStack_530 [2];
  ushort local_52e;
  undefined4 local_52c;
  undefined2 local_528;
  undefined2 local_526;
  undefined1 auStack_51c [16];
  undefined1 *local_50c;
  undefined4 local_508;
  undefined1 auStack_4fc [64];
  __fd_mask local_4bc;
  int iStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 local_4ac;
  int iStack_4a8;
  undefined4 local_4a4;
  int iStack_4a0;
  undefined1 uStack_49c;
  undefined1 uStack_3b8;
  undefined1 local_3b7;
  short local_3b4;
  undefined4 local_3b2;
  undefined2 local_3ae;
  undefined1 auStack_3a4 [296];
  undefined1 auStack_27c [280];
  byte local_164;
  
  iVar2 = iw_get_range_info(param_1,param_2,auStack_27c);
  pcVar4 = DAT_00012b98;
  if ((iVar2 < 0) || (local_164 < 0xe)) {
LAB_00012470:
    fprintf((FILE *)*DAT_00012b9c,pcVar4);
    return 0xffffffff;
  }
  uVar11 = 0;
  local_544.tv_sec = 0;
  local_544.tv_usec = DAT_00012ba0;
  memset(&uStack_3b8,0,0x13c);
  pcVar7 = DAT_00012ba4;
  while (0 < param_4) {
    pcVar4 = (char *)*param_3;
    iVar2 = strncmp(pcVar4,DAT_00012bac,5);
    if (iVar2 == 0) {
      pcVar4 = DAT_00012bb0;
      if (param_4 + -1 == 0) goto LAB_00012470;
      pcVar4 = (char *)param_3[1];
      sVar15 = strlen(pcVar4);
      local_3b7 = (undefined1)sVar15;
      memcpy(auStack_3a4,pcVar4,sVar15 & 0xff);
      if (local_3b4 == 0) {
        local_3b4 = 1;
        local_3b2 = 0xffffffff;
        local_3ae = 0xffff;
      }
      uVar11 = uVar11 | 2;
      param_3 = param_3 + 1;
      param_4 = param_4 + -2;
    }
    else {
      iVar2 = strncmp(pcVar4,pcVar7,4);
      pcVar4 = DAT_00012bb4;
      if (iVar2 != 0) goto LAB_00012470;
      uVar11 = uVar11 | 0x8000;
      param_4 = param_4 + -1;
    }
    param_3 = param_3 + 1;
  }
  if (uVar11 == 0) {
    local_50c = (undefined1 *)0x0;
    local_508 = 0;
LAB_000124d0:
    iVar2 = FUN_000113a0(param_1,param_2,0x8b18,auStack_51c);
    if (-1 < iVar2) goto LAB_00012600;
    piVar3 = __errno_location();
    if (uVar11 != 0 || *piVar3 != 1) {
      pFVar12 = (FILE *)*DAT_00012b9c;
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar12,DAT_00012ba8,param_2,pcVar4);
      return 0xffffffff;
    }
  }
  else {
    local_508 = CONCAT22(uVar11,0x13c);
    local_50c = &uStack_3b8;
    if (uVar11 != 0x8000) goto LAB_000124d0;
  }
  local_544.tv_usec = 0;
LAB_00012600:
  sVar15 = 0x1000;
  __ptr = (undefined1 *)0x0;
  iVar2 = DAT_00012bb8 - local_544.tv_usec;
  do {
    do {
      while( true ) {
        iVar10 = 0;
        p_Var9 = &local_4bc;
        do {
          iVar10 = iVar10 + 1;
          *p_Var9 = 0;
          p_Var9 = p_Var9 + 1;
        } while (iVar10 != 0x20);
        iVar10 = select(0,(fd_set *)&local_4bc,(fd_set *)0x0,(fd_set *)0x0,&local_544);
        if (-1 < iVar10) break;
        piVar3 = __errno_location();
        if (*piVar3 != 4 && *piVar3 != 0xb) {
          fputs(DAT_00012bbc,(FILE *)*DAT_00012b9c);
          return 0xffffffff;
        }
      }
    } while (iVar10 != 0);
    __ptr_00 = __ptr;
    sVar1 = sVar15;
    while( true ) {
      sVar15 = sVar1;
      __ptr = realloc(__ptr_00,sVar15);
      if (__ptr == (undefined1 *)0x0) {
        pcVar4 = DAT_00012bc4;
        if (__ptr_00 != (undefined1 *)0x0) {
          free(__ptr_00);
          pcVar4 = DAT_00012bc4;
        }
        goto LAB_00012470;
      }
                    /* WARNING: Ignoring partial resolution of indirect */
      local_508._0_2_ = (short)sVar15;
      local_50c = __ptr;
      iVar10 = FUN_000113a0(param_1,param_2,0x8b19,auStack_51c);
      if (-1 < iVar10) {
        if ((short)local_508 == 0) {
          printf(DAT_00012c38,param_2);
          goto LAB_00012b80;
        }
        printf(DAT_00012bd0,param_2);
        iw_init_event_stream(auStack_53c,__ptr,(short)local_508);
        iVar10 = 1;
        iVar2 = 0;
        goto LAB_000127a8;
      }
      piVar3 = __errno_location();
      iVar10 = *piVar3;
      if (iVar10 != 7) break;
      if (local_164 < 0x11) goto LAB_0001273c;
      __ptr_00 = __ptr;
      sVar1 = local_508 & 0xffff;
      if ((int)(local_508 & 0xffff) <= (int)sVar15) {
        sVar1 = sVar15 << 1;
      }
    }
    if (iVar10 != 0xb) break;
    local_544.tv_usec = DAT_00012bc8;
    iVar2 = iVar2 + -100000;
    local_544.tv_sec = 0;
  } while (0 < iVar2);
LAB_0001273c:
  free(__ptr);
  pFVar12 = (FILE *)*DAT_00012b9c;
  pcVar4 = strerror(iVar10);
  fprintf(pFVar12,DAT_00012bcc,param_2,pcVar4);
  return 0xfffffffe;
LAB_000127a8:
  iVar5 = iw_extract_event_stream(auStack_53c,auStack_530,local_164);
  p_Var9 = local_52c;
  iVar14 = DAT_00012c24;
  if (iVar5 < 1) {
    putchar(10);
LAB_00012b80:
    free(__ptr);
    return 0;
  }
  p_Var8 = (__fd_mask *)(uint)local_52e;
  if (p_Var8 == (__fd_mask *)0x8b1b) {
    iStack_4b8 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_4b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_4b0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_4bc = 0;
    local_4ac = 0;
    local_4a4 = 0;
    iStack_4a0 = iStack_4b8 << 8;
    uStack_49c = (undefined1)((uint)iStack_4b8 >> 0x18);
    iStack_4a8 = iStack_4b8;
    if ((local_52c != (__fd_mask *)0x0) && (local_528 != 0)) {
      memcpy(&local_4bc,local_52c,(uint)local_528);
    }
    pcVar4 = DAT_00012c14;
    if (local_526 == 0) {
LAB_00012970:
      puts(pcVar4);
    }
    else {
      pcVar7 = DAT_00012c10;
      p_Var8 = &local_4bc;
      if ((local_526 & 0xfe) == 0) goto LAB_000129d0;
      printf(DAT_00012c0c,&local_4bc,local_526 & 0xff);
    }
    goto LAB_000127a8;
  }
  pcVar7 = DAT_00012bd4;
  if (p_Var8 < (__fd_mask *)0x8b1c) {
    if (p_Var8 == (__fd_mask *)0x8b05) {
      uVar17 = iw_freq2float(&local_52c);
      uVar6 = iw_freq_to_channel(auStack_27c);
      iw_print_freq(uVar17,&local_4bc,0x80,uVar6,local_526._1_1_);
      pcVar7 = DAT_00012bfc;
      p_Var8 = &local_4bc;
    }
    else if (p_Var8 < (__fd_mask *)0x8b06) {
      if (p_Var8 == (__fd_mask *)0x8b01) {
        pcVar7 = DAT_00012c08;
        p_Var8 = &local_52c;
      }
      else if ((p_Var8 == (__fd_mask *)0x8b03) &&
              (pcVar4 = DAT_00012bf4, pcVar7 = DAT_00012bf8, p_Var8 = local_52c,
              local_528._1_1_ != '\0')) goto LAB_00012970;
    }
    else if (p_Var8 == (__fd_mask *)0x8b07) {
      if ((__fd_mask *)0x6 < local_52c) {
        local_52c = (__fd_mask *)0x7;
      }
      pcVar7 = DAT_00012c00;
      p_Var8 = *(__fd_mask **)(DAT_00012c04 + (int)local_52c * 4);
    }
    else if (p_Var8 == (__fd_mask *)0x8b15) {
      iw_ether_ntop((int)&local_52c + 2,&local_4bc);
      printf(DAT_00012bd8,iVar10,&local_4bc);
      iVar10 = iVar10 + 1;
      goto LAB_000127a8;
    }
  }
  else {
    if (p_Var8 == (__fd_mask *)0x8b2f) {
      printf(DAT_00012c28);
      iVar5 = 0;
      uVar13 = 0;
      do {
        uVar16 = uVar13;
        if ((*(uint *)(iVar14 + -4) & ~(uint)p_Var9) == 0) {
          uVar16 = uVar13 + 1;
          pcVar4 = DAT_00012c2c;
          if ((uVar13 & 7) != 7) {
            pcVar4 = DAT_00012c30;
          }
          printf(pcVar4);
          printf(DAT_00012be4,iVar14);
        }
        iVar5 = iVar5 + 1;
        iVar14 = iVar14 + 0x10;
        uVar13 = uVar16;
      } while (iVar5 != 0x10);
LAB_00012908:
      putchar(10);
      goto LAB_000127a8;
    }
    if (p_Var8 < (__fd_mask *)0x8b30) {
      if (p_Var8 == (__fd_mask *)0x8b21) {
        pcVar4 = DAT_00012c18;
        if ((iVar2 != 0) && (FUN_000136b8(iVar2,5), pcVar4 = DAT_00012c1c, extraout_r1 != 0)) {
          pcVar4 = DAT_00012c20;
        }
        printf(pcVar4);
        iw_print_bitrate(&local_4bc,0x80,local_52c);
        printf(DAT_00012be4,&local_4bc);
        if (local_534 == 0) {
          putchar(10);
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + 1;
        }
        goto LAB_000127a8;
      }
      if (p_Var8 == (__fd_mask *)0x8b2b) {
        if (local_52c == (__fd_mask *)0x0) {
          local_526 = local_526 | 0x800;
        }
        else {
          memcpy(auStack_4fc,local_52c,(uint)local_528);
        }
        printf(DAT_00012bdc);
        pcVar4 = DAT_00012be0;
        if ((local_526 & 0x8000) != 0) goto LAB_00012970;
        iw_print_key(&local_4bc,0x80,auStack_4fc,local_528,local_526);
        printf(DAT_00012be4,&local_4bc);
        if ((local_526 & 0xfe) != 0) {
          printf(DAT_00012be8,local_526 & 0xff);
        }
        if ((local_526 & 0x4000) != 0) {
          printf(DAT_00012bec);
        }
        if ((local_526 & 0x2000) != 0) {
          printf(DAT_00012bf0);
        }
        goto LAB_00012908;
      }
    }
    else if (p_Var8 == (__fd_mask *)0x8c02) {
      uVar13 = (uint)local_528;
      if ((local_52c != (__fd_mask *)0x0) && (uVar13 != 0)) {
        memcpy(&local_4bc,local_52c,uVar13);
      }
      *(undefined1 *)((int)&local_4bc + uVar13) = 0;
      pcVar7 = DAT_00012c34;
      p_Var8 = &local_4bc;
    }
    else {
      if (p_Var8 == (__fd_mask *)0x8c05) {
        FUN_00011d64(local_52c,local_528);
        goto LAB_000127a8;
      }
      if (p_Var8 == (__fd_mask *)0x8c01) {
        iw_print_stats(&local_4bc,0x80,&local_52c,auStack_27c,1);
        pcVar7 = DAT_00012bfc;
        p_Var8 = &local_4bc;
      }
    }
  }
LAB_000129d0:
  printf(pcVar7,p_Var8);
  goto LAB_000127a8;
}



/* ===== FUN_00012c3c @ 00012c3c size=108 ===== */

void FUN_00012c3c(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char *__format;
  int iVar2;
  
  __format = DAT_00012cac;
  uVar1 = DAT_00012ca8;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    if ((param_1 & *(uint *)(param_2 + iVar2 * 8)) != 0) {
      printf(__format,uVar1,*(undefined4 *)(param_2 + 4 + iVar2 * 8));
      param_1 = param_1 & ~*(uint *)(param_2 + iVar2 * 8);
    }
  }
  if (param_1 == 0) {
    return;
  }
  printf(DAT_00012cb0,DAT_00012ca8);
  return;
}



/* ===== FUN_00012cb4 @ 00012cb4 size=288 ===== */

undefined4 FUN_00012cb4(undefined4 param_1,undefined4 param_2)

{
  undefined *__format;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *__format_00;
  undefined4 *puVar5;
  undefined1 auStack_28c [16];
  int local_27c;
  undefined2 local_276;
  undefined1 auStack_26c [280];
  byte local_154;
  int local_38;
  
  iVar3 = iw_get_range_info(param_1,param_2,auStack_26c);
  if ((iVar3 < 0) || (local_154 < 0x12)) {
    fprintf(*(FILE **)PTR_stderr_00012dd4,PTR_s___8_16s_no_authentication_inform_00012dd8,param_2);
  }
  else {
    if (local_38 == 0) {
      printf(PTR_s___8_16s_unknown_authentication_i_00012ddc,param_2);
    }
    else {
      iVar3 = 0;
      printf(PTR_s___8_16s_Authentication_capabilit_00012de4,param_2);
      FUN_00012c3c(local_38,PTR_DAT_00012de8,4);
      putchar(10);
      puVar2 = PTR_DAT_00012df8;
      puVar1 = PTR_DAT_00012df4;
      __format = PTR_s_Current__s___00012df0;
      puVar5 = (undefined4 *)PTR_DAT_00012dec;
      do {
        local_276 = (undefined2)*puVar5;
        iVar4 = FUN_000113a0(param_1,param_2,0x8b33,auStack_28c);
        if (-1 < iVar4) {
          printf(__format,puVar5[1]);
          if (puVar5[2] == 0) {
            __format_00 = puVar1;
            if (local_27c == 0) {
              __format_00 = puVar2;
            }
            printf(__format_00);
          }
          else {
            FUN_00012c3c(local_27c,puVar5[2],puVar5[3]);
          }
          putchar(10);
        }
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar3 != 10);
    }
    puts(PTR_DAT_00012de0);
  }
  return 0;
}



/* ===== FUN_00012dfc @ 00012dfc size=152 ===== */

void FUN_00012dfc(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  
  if ((param_3 & param_2) != 0) {
    puVar1 = PTR_s_Auto_00012e98;
    if ((param_3 & 1) == 0) {
      puVar1 = PTR_s_Fixed_00012e94;
    }
    printf(PTR_DAT_00012e9c,puVar1,param_1,PTR_s_Fixed_00012e94,param_1,param_2);
    iw_print_pm_value(param_6,0x80,param_4,param_3 & 0xfffffffc | 1,param_7);
    printf(PTR_s__s_00012ea0,param_6);
    iw_print_pm_value(param_6,0x80,param_5,param_3 & 0xfffffffc | 2,param_7);
    printf(PTR_s__s_00012ea4,param_6);
    return;
  }
  return;
}



/* ===== FUN_00012ea8 @ 00012ea8 size=132 ===== */

void FUN_00012ea8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_Auto_00012f30;
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_s_Fixed_00012f2c;
  }
  printf(PTR_DAT_00012f34,puVar1,param_1,PTR_s_Fixed_00012f2c,param_1,param_2);
  iw_print_retry_value(param_5,0x80,param_3,param_2 & 0xfffffffc | 1,param_6);
  printf(PTR_s__s_00012f38,param_5);
  iw_print_retry_value(param_5,0x80,param_4,param_2 & 0xfffffffc | 2,param_6);
  printf(PTR_s__s_00012f3c,param_5);
  return;
}



/* ===== FUN_00012f40 @ 00012f40 size=588 ===== */

undefined4 FUN_00012f40(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  char *__format;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auStack_30c [16];
  undefined4 local_2fc;
  char local_2f7;
  ushort local_2f6;
  undefined1 auStack_2ec [128];
  undefined1 auStack_26c [280];
  byte local_154;
  ushort uStack_152;
  ushort local_150;
  ushort uStack_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  
  iVar4 = iw_get_range_info(param_1,param_2,auStack_26c);
  if ((iVar4 < 0) || (local_154 < 0xb)) {
    fprintf(*(FILE **)PTR_stderr_0001318c,PTR_s___8_16s_no_retry_limit_lifetime_i_00013190,param_2);
  }
  else {
    printf(PTR_s___8_16s_00013194,param_2);
    if ((local_150 & 0x1000) != 0) {
      FUN_00012ea8(PTR_s_limit_00013198,local_150,local_14c,local_148,auStack_2ec,local_154);
    }
    if ((uStack_14e & 0x2000) != 0) {
      FUN_00012ea8(PTR_s_lifetime_0001319c,uStack_14e,local_144,local_140,auStack_2ec,local_154);
    }
    local_2f6 = 0;
    iVar4 = FUN_000113a0(param_1,param_2,0x8b29,auStack_30c);
    uVar1 = local_2f6;
    uVar7 = DAT_000131a8;
    if (-1 < iVar4) {
      if (local_2f7 == '\0') {
        printf(PTR_s_Current_mode_on_000131a4);
        if ((local_2f6 & uVar7) != 0) {
          iw_print_retry_value(auStack_2ec,0x80,local_2fc,(uint)local_2f6,local_154);
          printf(DAT_000131ac,auStack_2ec);
        }
        __format = DAT_000131ac;
        uVar2 = DAT_000131a8;
        uVar5 = 0;
        uVar7 = uStack_152 & uVar7;
LAB_0001309c:
        bVar3 = local_154;
        if ((uVar1 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 2;
        }
        if ((uVar1 & 2) != 0) {
          uVar6 = 1;
        }
        if ((uVar1 & 0x10) != 0) {
          uVar6 = 0x20;
        }
        if ((uVar1 & 0x20) == 0) {
          if (uVar6 != 0) goto LAB_00013134;
        }
        else {
          uVar6 = 0x10;
LAB_00013134:
          local_2f6 = (ushort)uVar5 | uVar6;
          iVar4 = FUN_000113a0(param_1,param_2,0x8b29,auStack_30c);
          if ((-1 < iVar4) && ((local_2f6 & uVar2) != 0)) {
            iw_print_retry_value(auStack_2ec,0x80,local_2fc,(uint)local_2f6,bVar3);
            printf(__format,auStack_2ec);
          }
        }
        bVar3 = local_154;
        uVar5 = uVar7 & ~(uint)local_2f6;
        if (uVar5 != 0) {
          local_2f6 = (ushort)uVar5;
          iVar4 = FUN_000113a0(param_1,param_2,0x8b29,auStack_30c);
          uVar7 = uVar5;
          uVar1 = local_2f6;
          if ((-1 < iVar4) && ((local_2f6 & uVar2) != 0)) {
            iw_print_retry_value(auStack_2ec,0x80,local_2fc,(uint)local_2f6,bVar3);
            printf(__format,auStack_2ec);
            uVar1 = local_2f6;
          }
          goto LAB_0001309c;
        }
      }
      else {
        printf(PTR_s_Current_mode_off_000131a0);
      }
    }
    putchar(10);
  }
  return 0;
}



/* ===== FUN_000131b0 @ 000131b0 size=796 ===== */

undefined4 FUN_000131b0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_314 [16];
  undefined4 local_304;
  char local_2ff;
  ushort local_2fe;
  undefined1 auStack_2f4 [128];
  undefined1 auStack_274 [200];
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined2 local_19a;
  ushort local_198;
  byte local_15c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  
  iVar4 = iw_get_range_info(param_1,param_2,auStack_274);
  if ((iVar4 < 0) || (local_15c < 10)) {
    fprintf(*(FILE **)PTR_stderr_000134cc,PTR_s___8_16s_no_power_management_info_000134d0,param_2);
  }
  else {
    printf(PTR_s___8_16s_000134d4,param_2);
    if ((local_198 & 0xf00) != 0) {
      printf(PTR_s_Supported_modes___000134d8);
      if ((local_198 & 0x300) != 0) {
        printf(PTR_s_o_Receive_all_packets__unicast___000134dc);
      }
      if ((local_198 & 0x100) != 0) {
        printf(PTR_s_o_Receive_Unicast_only__discard_m_000134e0);
      }
      if ((local_198 & 0x200) != 0) {
        printf(PTR_s_o_Receive_Multicast_only__discar_000134e4);
      }
      if ((local_198 & 0x400) != 0) {
        printf(PTR_s_o_Force_sending_using_Power_Mana_000134e8);
      }
      if ((local_198 & 0x800) != 0) {
        printf(PTR_s_o_Repeat_multicast_000134ec);
      }
    }
    FUN_00012dfc(PTR_s_period_000134f0,0x1000,local_19c,local_1ac,local_1a8,auStack_2f4,local_15c);
    FUN_00012dfc(PTR_s_timeout_000134f4,0x2000,local_19a,local_1a4,local_1a0,auStack_2f4,local_15c);
    FUN_00012dfc(PTR_s_saving_000134f8,0x4000,local_34,local_3c,local_38,auStack_2f4,local_15c);
    local_2fe = 0;
    iVar4 = FUN_000113a0(param_1,param_2,0x8b2d,auStack_314);
    uVar1 = local_2fe;
    uVar2 = DAT_00013500;
    if (-1 < iVar4) {
      if (local_2ff == '\0') {
        iw_print_pm_mode(auStack_2f4,0x80,local_2fe);
        uVar8 = local_198 & uVar2;
        printf(PTR_s_Current__s_00013504,auStack_2f4);
        if ((uVar1 & 0xf00) == 0) {
          printf(PTR_s_mode_on_00013508);
        }
        if ((local_2fe & uVar2) != 0) {
          iw_print_pm_value(auStack_2f4,0x80,local_304,(uint)local_2fe,local_15c);
          printf(PTR_DAT_0001350c,auStack_2f4);
        }
        uVar2 = DAT_00013500;
        iVar4 = 0;
        uVar7 = 0;
LAB_000133c0:
        bVar3 = local_15c;
        if ((uVar1 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 2;
        }
        if ((uVar1 & 2) == 0) {
          if (uVar6 != 0) goto LAB_00013450;
        }
        else {
          uVar6 = 1;
LAB_00013450:
          local_2fe = (ushort)uVar7 | uVar6;
          iVar5 = FUN_000113a0(param_1,param_2,0x8b2d,auStack_314);
          if ((-1 < iVar5) && ((local_2fe & uVar2) != 0)) {
            iw_print_pm_value(auStack_2f4,0x80,local_304,(uint)local_2fe,bVar3);
            printf(PTR_DAT_0001350c,auStack_2f4);
          }
        }
        bVar3 = local_15c;
        uVar8 = uVar8 & ~(uint)local_2fe;
        for (; iVar4 < 3; iVar4 = iVar4 + 1) {
          uVar7 = uVar8 & *(uint *)(PTR_DAT_00013510 + iVar4 * 4);
          if (uVar7 != 0) goto LAB_000133f4;
        }
        if (uVar7 != 0) {
LAB_000133f4:
          local_2fe = (ushort)uVar7;
          iVar5 = FUN_000113a0(param_1,param_2,0x8b2d,auStack_314);
          uVar1 = local_2fe;
          if ((-1 < iVar5) && ((local_2fe & uVar2) != 0)) {
            iw_print_pm_value(auStack_2f4,0x80,local_304,(uint)local_2fe,bVar3);
            printf(PTR_DAT_0001350c,auStack_2f4);
            uVar1 = local_2fe;
          }
          goto LAB_000133c0;
        }
        putchar(10);
      }
      else {
        puts(PTR_s_Current_mode_off_000134fc);
      }
    }
    putchar(10);
  }
  return 0;
}



/* ===== FUN_000135e4 @ 000135e4 size=196 ===== */

uint FUN_000135e4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
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
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
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
  return uVar1;
}



/* ===== FUN_000136b8 @ 000136b8 size=64 ===== */

void FUN_000136b8(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000135e4();
    return;
  }
  raise(8);
  return;
}



/* ===== _fini @ 000136e8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_dbm2mwatt @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_dbm2mwatt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_init_event_stream @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_init_event_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_pm_mode @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_pm_mode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_enum_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_check_mac_addr_type @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_check_mac_addr_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_freq @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_retry_value @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_retry_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_extract_event_stream @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_extract_event_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_freq_to_channel @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_freq_to_channel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_freq2float @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_freq2float(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_key @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_pm_value @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_pm_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_bitrate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_freq_value @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_freq_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_ether_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_mwatt2dbm @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_mwatt2dbm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_stats @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_version_info @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_version_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_range_info @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_range_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sockets_open @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sockets_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


