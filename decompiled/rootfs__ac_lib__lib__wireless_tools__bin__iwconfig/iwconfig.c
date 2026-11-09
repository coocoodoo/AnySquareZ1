// iwconfig — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010bf0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002400c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00024010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_enum_devices @ 00010c2c size=12 ===== */

void iw_enum_devices(void)

{
  (*(code *)PTR_iw_enum_devices_00024014)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00024018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002401c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_get_basic_config @ 00010c50 size=12 ===== */

void iw_get_basic_config(void)

{
  (*(code *)PTR_iw_get_basic_config_00024020)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00010c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00024024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_print_stats @ 00010c68 size=12 ===== */

void iw_print_stats(void)

{
  (*(code *)PTR_iw_print_stats_00024028)();
  return;
}



/* ===== <EXTERNAL>::iw_get_stats @ 00010c74 size=12 ===== */

void iw_get_stats(void)

{
  (*(code *)PTR_iw_get_stats_0002402c)();
  return;
}



/* ===== <EXTERNAL>::iw_in_addr @ 00010c80 size=12 ===== */

void iw_in_addr(void)

{
  (*(code *)PTR_iw_in_addr_00024030)();
  return;
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00010c8c size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_00024034)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00024038)(__s);
  return;
}



/* ===== <EXTERNAL>::iw_sawap_ntop @ 00010ca4 size=12 ===== */

void iw_sawap_ntop(void)

{
  (*(code *)PTR_iw_sawap_ntop_0002403c)();
  return;
}



/* ===== <EXTERNAL>::iw_print_txpower @ 00010cb0 size=12 ===== */

void iw_print_txpower(void)

{
  (*(code *)PTR_iw_print_txpower_00024040)();
  return;
}



/* ===== <EXTERNAL>::strncasecmp @ 00010cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_00024044)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024048)();
  return;
}



/* ===== <EXTERNAL>::iw_mwatt2dbm @ 00010cd4 size=12 ===== */

void iw_mwatt2dbm(void)

{
  (*(code *)PTR_iw_mwatt2dbm_0002404c)();
  return;
}



/* ===== <EXTERNAL>::strtod @ 00010ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_00024050)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::fprintf @ 00010cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010cf8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024058)();
  return;
}



/* ===== <EXTERNAL>::iw_print_pm_mode @ 00010d04 size=12 ===== */

void iw_print_pm_mode(void)

{
  (*(code *)PTR_iw_print_pm_mode_0002405c)();
  return;
}



/* ===== <EXTERNAL>::iw_print_key @ 00010d10 size=12 ===== */

void iw_print_key(void)

{
  (*(code *)PTR_iw_print_key_00024060)();
  return;
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 00010d1c size=12 ===== */

void iw_print_bitrate(void)

{
  (*(code *)PTR_iw_print_bitrate_00024064)();
  return;
}



/* ===== <EXTERNAL>::iw_float2freq @ 00010d28 size=12 ===== */

void iw_float2freq(void)

{
  (*(code *)PTR_iw_float2freq_00024068)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00010d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002406c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00010d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00024070)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_channel_to_freq @ 00010d4c size=12 ===== */

void iw_channel_to_freq(void)

{
  (*(code *)PTR_iw_channel_to_freq_00024074)();
  return;
}



/* ===== <EXTERNAL>::iw_dbm2mwatt @ 00010d58 size=12 ===== */

void iw_dbm2mwatt(void)

{
  (*(code *)PTR_iw_dbm2mwatt_00024078)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00010d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002407c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024084)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00024088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_pm_value @ 00010d94 size=12 ===== */

void iw_print_pm_value(void)

{
  (*(code *)PTR_iw_print_pm_value_0002408c)();
  return;
}



/* ===== <EXTERNAL>::iw_get_range_info @ 00010da0 size=12 ===== */

void iw_get_range_info(void)

{
  (*(code *)PTR_iw_get_range_info_00024090)();
  return;
}



/* ===== <EXTERNAL>::iw_in_key_full @ 00010dac size=12 ===== */

void iw_in_key_full(void)

{
  (*(code *)PTR_iw_in_key_full_00024094)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024098)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002409c)(__status);
  return;
}



/* ===== <EXTERNAL>::iw_get_kernel_we_version @ 00010dd0 size=12 ===== */

void iw_get_kernel_we_version(void)

{
  (*(code *)PTR_iw_get_kernel_we_version_000240a0)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010ddc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000240a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::iw_print_freq @ 00010de8 size=12 ===== */

void iw_print_freq(void)

{
  (*(code *)PTR_iw_print_freq_000240a8)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00010df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000240ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000240b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_retry_value @ 00010e0c size=12 ===== */

void iw_print_retry_value(void)

{
  (*(code *)PTR_iw_print_retry_value_000240b4)();
  return;
}



/* ===== <EXTERNAL>::iw_print_version_info @ 00010e18 size=12 ===== */

void iw_print_version_info(void)

{
  (*(code *)PTR_iw_print_version_info_000240b8)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e24 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000240bc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000240c0)(__fd);
  return iVar1;
}



/* ===== FUN_00010e40 @ 00010e40 size=912 ===== */

int FUN_00010e40(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int __fd;
  FILE *pFVar3;
  size_t __n;
  size_t sVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *local_34;
  
  __fd = iw_sockets_open();
  if (__fd < 0) {
    perror(DAT_000111e8);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (param_1 == 1) {
    iw_enum_devices(__fd,DAT_000111ec,0);
  }
  else {
    pcVar11 = *(char **)(param_2 + 4);
    iVar10 = strcmp(pcVar11,DAT_000111f0);
    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar11,DAT_000111f4), iVar10 == 0)) {
      piVar5 = DAT_00011200;
      puVar2 = DAT_000111f8;
      fputs(DAT_000111fc,(FILE *)*DAT_000111f8);
      pcVar11 = DAT_00011204;
      while( true ) {
        pFVar3 = (FILE *)*puVar2;
        if (*piVar5 == 0) break;
        fprintf(pFVar3,pcVar11,*piVar5,piVar5[5]);
        piVar5 = piVar5 + 6;
      }
      iVar10 = 0;
      pcVar11 = DAT_00011208;
LAB_00010ee8:
      fputs(pcVar11,pFVar3);
      goto switchD_000110a0_default;
    }
    iVar10 = strcmp(pcVar11,DAT_0001120c);
    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar11,DAT_00011210), iVar10 == 0)) {
      iVar10 = iw_print_version_info(DAT_00011214);
      goto switchD_000110a0_default;
    }
    if (param_1 < 3) {
LAB_00010f70:
      if (param_1 == 2) {
        FUN_000129b0(__fd,*(undefined4 *)(param_2 + 4),0);
        goto LAB_00010e84;
      }
    }
    else {
      iVar10 = strcmp(pcVar11,DAT_00011218);
      if (iVar10 == 0) {
        param_2 = param_2 + 4;
        param_1 = param_1 + -1;
        goto LAB_00010f70;
      }
    }
    uVar13 = *(undefined4 *)(param_2 + 4);
    local_34 = (undefined4 *)(param_2 + 8);
    param_1 = param_1 + -2;
    while (piVar5 = DAT_00011200, 0 < param_1) {
      iVar10 = 0;
      bVar1 = false;
      pcVar11 = (char *)*local_34;
      __n = strlen(pcVar11);
      piVar8 = (int *)0x0;
      for (; pcVar6 = (char *)*piVar5, pcVar6 != (char *)0x0; piVar5 = piVar5 + 6) {
        iVar12 = strncasecmp(pcVar6,pcVar11,__n);
        piVar9 = piVar8;
        if (iVar12 == 0) {
          sVar4 = strlen(pcVar6);
          if (__n == sVar4) {
            piVar8 = DAT_00011200 + iVar10 * 6;
            goto LAB_0001103c;
          }
          piVar9 = piVar5;
          if ((piVar8 != (int *)0x0) && (piVar9 = piVar8, piVar5[1] != piVar8[1])) {
            bVar1 = true;
          }
        }
        iVar10 = iVar10 + 1;
        piVar8 = piVar9;
      }
      pcVar6 = DAT_0001121c;
      if ((piVar8 == (int *)0x0) || (pcVar6 = DAT_00011224, bVar1)) {
        iVar10 = -1;
        fprintf((FILE *)*DAT_000111f8,pcVar6,pcVar11);
        goto switchD_000110a0_default;
      }
LAB_0001103c:
      iVar12 = param_1 + -1;
      local_34 = local_34 + 1;
      if (iVar12 < piVar8[2]) {
        iVar10 = -2;
LAB_00011074:
        puVar2 = DAT_000111f8;
        iVar7 = piVar8[3];
        if (iVar10 == -7) {
          iVar7 = iVar7 + 1;
        }
        fprintf((FILE *)*DAT_000111f8,DAT_00011220,piVar8[4],iVar7);
        pcVar6 = DAT_00011238;
        pcVar11 = DAT_00011230;
        piVar5 = DAT_0001122c;
        switch(iVar10) {
        case -7:
          piVar5 = __errno_location();
          pFVar3 = (FILE *)*puVar2;
          pcVar6 = strerror(*piVar5);
          pcVar11 = DAT_00011240;
          goto LAB_000111ac;
        case -6:
          piVar5 = __errno_location();
          pFVar3 = (FILE *)*puVar2;
          pcVar6 = strerror(*piVar5);
          pcVar11 = DAT_0001123c;
LAB_000111ac:
          fprintf(pFVar3,pcVar11,uVar13,pcVar6);
          goto switchD_000110a0_default;
        case -5:
          if (*DAT_0001122c < 0) {
            *DAT_0001122c = 0;
          }
          if (iVar12 <= *piVar5) {
            *piVar5 = param_1 + -2;
          }
          iVar12 = local_34[*piVar5];
          break;
        case -4:
          iVar12 = DAT_0001122c[1];
          pcVar6 = DAT_00011234;
          break;
        case -3:
          if (*DAT_0001122c < 0) {
            *DAT_0001122c = 0;
          }
          if (iVar12 <= *piVar5) {
            *piVar5 = param_1 + -2;
          }
          iVar12 = local_34[*piVar5];
          pcVar6 = pcVar11;
          break;
        case -2:
          pFVar3 = (FILE *)*puVar2;
          pcVar11 = DAT_00011228;
          goto LAB_00010ee8;
        default:
          goto switchD_000110a0_default;
        }
        fprintf((FILE *)*puVar2,pcVar6,iVar12);
        goto switchD_000110a0_default;
      }
      iVar10 = (*(code *)piVar8[1])(__fd,uVar13,local_34,iVar12);
      if (iVar10 < 0) goto LAB_00011074;
      local_34 = local_34 + iVar10;
      param_1 = iVar12 - iVar10;
    }
  }
LAB_00010e84:
  iVar10 = 0;
switchD_000110a0_default:
  close(__fd);
  return iVar10;
}



/* ===== entry @ 00011244 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024080)
            (DAT_00011278,param_2,&stack0x00000004,DAT_0001127c,DAT_00011274,param_1);
  return;
}



/* ===== FUN_00011280 @ 00011280 size=32 ===== */

void FUN_00011280(void)

{
  if (DAT_000112a4 == DAT_000112a0) {
    return;
  }
  if (DAT_000112a8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000112a8)();
  return;
}



/* ===== _FINI_0 @ 000112e4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011320;
  if (*DAT_00011320 != '\0') {
    return;
  }
  FUN_00011280();
  if (DAT_00011324 != 0) {
    __deregister_frame_info(DAT_00011328);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001132c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011350 != 0) {
    __register_frame_info(DAT_00011358,DAT_00011354);
  }
  if ((DAT_000112dc - DAT_000112d8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000112e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000112d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000112e0)();
  return;
}



/* ===== FUN_00011360 @ 00011360 size=44 ===== */

void FUN_00011360(int param_1,char *param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = strncpy(param_4,param_2,0x10);
  ioctl(param_1,param_3,pcVar1);
  return;
}



/* ===== FUN_0001138c @ 0001138c size=40 ===== */

undefined4 FUN_0001138c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [36];
  
  iVar1 = FUN_00011360(param_1,param_2,0x8b00,auStack_28);
  if (iVar1 < 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_000113b4 @ 000113b4 size=352 ===== */

int FUN_000113b4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s1;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_48 [16];
  uint local_38;
  undefined1 local_34;
  
  pcVar4 = (char *)*param_3;
  iVar1 = strcasecmp(pcVar4,DAT_00011514);
  if (iVar1 == 0) {
    local_34 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = strcasecmp(pcVar4,DAT_00011518);
    iVar3 = DAT_0001151c;
    if (iVar1 == 0) {
      iVar1 = FUN_00011360(param_1,param_2,0x8b2f,auStack_48);
      if (iVar1 < 0) {
        return -7;
      }
      iVar1 = 1;
      local_34 = 1;
    }
    else {
      iVar1 = 0;
      local_38 = 0;
      do {
        __s1 = (char *)param_3[iVar1];
        iVar5 = 0;
        pcVar4 = DAT_00011520;
        while (iVar2 = strcasecmp(__s1,pcVar4), iVar2 != 0) {
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 0x10;
          if (iVar5 == 0x10) {
            if (iVar1 == 0) {
              *DAT_00011524 = 0;
              return -3;
            }
            goto LAB_0001147c;
          }
        }
        iVar1 = iVar1 + 1;
        local_38 = local_38 | *(uint *)(iVar3 + iVar5 * 0x10);
      } while (iVar1 < param_4);
LAB_0001147c:
      if (iVar1 < param_4) {
        iVar3 = strcasecmp((char *)param_3[iVar1],DAT_00011514);
        if (iVar3 == 0) {
          iVar1 = iVar1 + 1;
          local_34 = 0;
          if (param_4 <= iVar1) goto LAB_000114c4;
        }
        iVar3 = strcasecmp((char *)param_3[iVar1],DAT_00011518);
        if (iVar3 == 0) {
          iVar1 = iVar1 + 1;
          local_34 = 1;
        }
      }
    }
  }
LAB_000114c4:
  iVar3 = FUN_00011360(param_1,param_2,0x8b2e,auStack_48);
  if (iVar3 < 0) {
    iVar1 = -6;
  }
  return iVar1;
}



/* ===== FUN_00011528 @ 00011528 size=184 ===== */

int FUN_00011528(int param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  int iVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar2 = 0;
  do {
    __s1 = *(char **)(param_1 + iVar2 * 4);
    iVar3 = 0;
    while( true ) {
      iVar1 = strcasecmp(__s1,*(char **)(param_4 + iVar3 * 8));
      iVar5 = param_4 + iVar3 * 8;
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      if (param_5 == iVar3) goto LAB_000115bc;
    }
    if ((uVar4 & *(ushort *)(iVar5 + 6)) != 0) {
      *DAT_000115e0 = iVar2;
      return -5;
    }
    iVar2 = iVar2 + 1;
    uVar4 = uVar4 | *(ushort *)(iVar5 + 4);
  } while (iVar3 < param_5 && iVar2 < param_2);
LAB_000115bc:
  if (iVar2 < param_2) {
    *param_3 = uVar4;
  }
  else {
    iVar2 = -2;
  }
  return iVar2;
}



/* ===== FUN_000115e4 @ 000115e4 size=236 ===== */

undefined4 FUN_000115e4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *__s1;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  __s1 = (char *)*param_3;
  local_28 = 0xffffffff;
  local_24 = 1;
  iVar1 = strcasecmp(__s1,PTR_s_off_000136db_0xd_000116d0);
  if (iVar1 == 0) {
    local_24 = CONCAT11(1,(undefined1)local_24);
  }
  else {
    iVar1 = strcasecmp(__s1,PTR_DAT_000116d4);
    if (iVar1 == 0) {
      local_24 = local_24 & 0xff00;
    }
    else {
      iVar1 = strcasecmp(__s1,PTR_s_fixed_000116d8);
      if (iVar1 == 0) {
        iVar1 = FUN_00011360(param_1,param_2,0x8b25,auStack_38);
        if (iVar1 < 0) {
          return 0xfffffff9;
        }
        local_24 = CONCAT11(local_24._1_1_,1);
      }
      else {
        iVar1 = sscanf(__s1,PTR_DAT_000116dc,&local_3c);
        if (iVar1 != 1) {
          *(undefined4 *)PTR_DAT_000116e0 = 0;
          return 0xfffffffd;
        }
        local_28 = local_3c;
      }
    }
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b24,auStack_38);
  if (iVar1 < 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_000116e4 @ 000116e4 size=236 ===== */

undefined4 FUN_000116e4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *__s1;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  __s1 = (char *)*param_3;
  local_28 = 0xffffffff;
  local_24 = 1;
  iVar1 = strcasecmp(__s1,PTR_s_off_000136db_0xd_000117d0);
  if (iVar1 == 0) {
    local_24 = CONCAT11(1,(undefined1)local_24);
  }
  else {
    iVar1 = strcasecmp(__s1,PTR_DAT_000117d4);
    if (iVar1 == 0) {
      local_24 = local_24 & 0xff00;
    }
    else {
      iVar1 = strcasecmp(__s1,PTR_s_fixed_000117d8);
      if (iVar1 == 0) {
        iVar1 = FUN_00011360(param_1,param_2,0x8b23,auStack_38);
        if (iVar1 < 0) {
          return 0xfffffff9;
        }
        local_24 = CONCAT11(local_24._1_1_,1);
      }
      else {
        iVar1 = sscanf(__s1,PTR_DAT_000117dc,&local_3c);
        if (iVar1 != 1) {
          *(undefined4 *)PTR_DAT_000117e0 = 0;
          return 0xfffffffd;
        }
        local_28 = local_3c;
      }
    }
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b22,auStack_38);
  if (iVar1 < 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00011860 @ 00011860 size=228 ===== */

undefined4 FUN_00011860(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *__s1;
  undefined1 local_3c [4];
  undefined1 auStack_38 [20];
  undefined1 local_24;
  undefined1 local_23;
  
  __s1 = (char *)*param_3;
  iVar1 = strcasecmp(__s1,DAT_00011944);
  if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,DAT_00011948), iVar1 == 0)) {
    local_23 = 1;
  }
  else {
    iVar1 = strcasecmp(__s1,DAT_0001194c);
    if (iVar1 == 0) {
      iVar1 = FUN_00011360(param_1,param_2,0x8b03,auStack_38);
      if (iVar1 < 0) {
        return 0xfffffff9;
      }
      local_23 = 0;
    }
    else {
      iVar1 = sscanf(__s1,DAT_00011950,local_3c);
      local_23 = 0;
      if (iVar1 != 1) {
        *DAT_00011954 = 0;
        return 0xfffffffd;
      }
    }
  }
  local_24 = 1;
  iVar1 = FUN_00011360(param_1,param_2,0x8b02,auStack_38);
  if (iVar1 < 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00011958 @ 00011958 size=456 ===== */

int FUN_00011958(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *__s1;
  double dVar4;
  double dVar5;
  char *local_44;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  ushort local_2a;
  
  __s1 = (char *)*param_3;
  local_2a = 0;
  iVar2 = strcasecmp(__s1,PTR_DAT_00011b38);
  if (iVar2 == 0) {
    iVar2 = 1;
    local_2c = 0;
    local_30 = 0xffffffff;
  }
  else {
    iVar2 = strcasecmp(__s1,PTR_s_fixed_00011b3c);
    if (iVar2 == 0) {
      iVar2 = FUN_00011360(param_1,param_2,0x8b21,auStack_40);
      if (iVar2 < 0) {
        return -7;
      }
      iVar2 = 1;
      local_2c = 1;
    }
    else {
      dVar4 = strtod(__s1,&local_44);
      if ((char *)*param_3 == local_44) {
        *(undefined4 *)PTR_DAT_00011b40 = 0;
        return -3;
      }
      if ((local_44 != (char *)0x0) &&
         (((cVar1 = *local_44, dVar5 = DAT_00011b20, cVar1 == 'G' ||
           (dVar5 = DAT_00011b28, cVar1 == 'M')) || (dVar5 = DAT_00011b30, cVar1 == 'k')))) {
        dVar4 = dVar4 * dVar5;
      }
      iVar2 = 1;
      local_2c = 1;
      local_30 = (undefined4)(longlong)dVar4;
      if (1 < param_4) {
        iVar3 = strcasecmp((char *)param_3[1],PTR_DAT_00011b38);
        if (iVar3 == 0) {
          local_2c = 0;
          if (param_4 == 2) {
            iVar2 = 2;
            goto LAB_000119a0;
          }
          iVar2 = 2;
        }
        iVar3 = strcasecmp((char *)param_3[iVar2],PTR_s_fixed_00011b3c);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_2c = 1;
          if (param_4 <= iVar2) goto LAB_000119a0;
        }
        iVar3 = strcasecmp((char *)param_3[iVar2],PTR_s_unicast_00011b44);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_2a = local_2a | 1;
          if (param_4 <= iVar2) goto LAB_000119a0;
        }
        iVar3 = strcasecmp((char *)param_3[iVar2],PTR_s_broadcast_00011b48);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_2a = local_2a | 2;
        }
      }
    }
  }
LAB_000119a0:
  iVar3 = FUN_00011360(param_1,param_2,0x8b20,auStack_40);
  if (iVar3 < 0) {
    iVar2 = -6;
  }
  return iVar2;
}



/* ===== FUN_00011b4c @ 00011b4c size=336 ===== */

int FUN_00011b4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char *local_290;
  undefined1 auStack_28c [16];
  undefined4 local_27c;
  undefined1 local_277;
  ushort local_276 [5];
  undefined1 auStack_26c [280];
  byte local_154;
  ushort uStack_14e;
  
  iVar1 = FUN_00011528(param_3,param_4,local_276,PTR_DAT_00011cb0,6);
  if (-1 < iVar1) {
    local_277 = 0;
    if ((local_276[0] & 0xf000) == 0) {
      local_276[0] = local_276[0] | 0x1000;
    }
    dVar3 = strtod((char *)*param_3,&local_290);
    if ((char *)*param_3 == local_290) {
      *(int *)PTR_DAT_00011cb4 = iVar1;
      iVar1 = -3;
    }
    else {
      if ((local_276[0] & 0x2000) != 0) {
        iVar2 = iw_get_range_info(param_1,param_2,auStack_26c);
        if (iVar2 < 0) {
          memset(auStack_26c,0,0x24c);
        }
        if ((uStack_14e & 4) == 0) {
          dVar3 = dVar3 * DAT_00011ca0;
          dVar4 = DAT_00011ca0;
          if ((*local_290 == 'u') || (dVar4 = DAT_00011ca8, *local_290 == 'm')) {
            dVar3 = dVar3 / dVar4;
          }
        }
        else if (local_154 < 0x15) {
          dVar3 = dVar3 * DAT_00011ca0;
        }
        else {
          local_276[0] = local_276[0] | 4;
        }
      }
      iVar1 = iVar1 + 1;
      local_27c = (undefined4)(longlong)dVar3;
      iVar2 = FUN_00011360(param_1,param_2,0x8b28,auStack_28c);
      if (iVar2 < 0) {
        iVar1 = -6;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00011cb8 @ 00011cb8 size=556 ===== */

int FUN_00011cb8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  char *__s;
  undefined4 local_290;
  undefined1 auStack_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 auStack_26c [242];
  ushort local_17a;
  
  pcVar5 = (char *)*param_3;
  iVar4 = 1;
  local_278 = 1;
  local_27c = 0xffffffff;
  iVar2 = strcasecmp(pcVar5,PTR_s_off_000136db_0xd_00011ee4);
  if (iVar2 == 0) {
    local_278._0_2_ = CONCAT11(1,(byte)local_278);
  }
  else {
    iVar2 = strcasecmp(pcVar5,PTR_DAT_00011ee8);
    if (iVar2 == 0) {
      local_278 = local_278 & 0xffffff00;
    }
    else {
      iVar2 = strcasecmp(pcVar5,PTR_DAT_00011eec);
      if (iVar2 == 0) {
        iVar2 = FUN_00011360(param_1,param_2,0x8b27,auStack_28c);
        if (iVar2 < 0) {
          return -7;
        }
        local_278._0_2_ = (ushort)(byte)local_278;
      }
      else {
        iVar2 = strcasecmp(pcVar5,PTR_s_fixed_00011ef0);
        if (iVar2 == 0) {
          iVar2 = FUN_00011360(param_1,param_2,0x8b27,auStack_28c);
          if (iVar2 < 0) {
            return -7;
          }
          local_278 = CONCAT22(local_278._2_2_,1);
        }
        else {
          iVar4 = iw_get_range_info(param_1,param_2,auStack_26c);
          if (iVar4 < 0) {
            memset(auStack_26c,0,0x24c);
          }
          iVar4 = sscanf((char *)*param_3,PTR_DAT_00011ef4,&local_290);
          if (iVar4 != 1) {
LAB_00011df4:
            *(undefined4 *)PTR_DAT_00011ef8 = 0;
            return -3;
          }
          __s = (char *)*param_3;
          pcVar5 = strchr(__s,0x6d);
          bVar1 = false;
          if (pcVar5 != (char *)0x0) {
            pcVar5 = strchr(__s,100);
            bVar1 = pcVar5 == (char *)0x0;
          }
          if ((local_17a & 2) == 0) {
            if ((local_17a & 1) == 0) {
              if (bVar1) {
                local_290 = iw_mwatt2dbm(local_290);
              }
              uVar3 = 0;
            }
            else {
              if (!bVar1) {
                local_290 = iw_dbm2mwatt();
              }
              uVar3 = 1;
            }
          }
          else {
            if (bVar1) goto LAB_00011df4;
            uVar3 = 2;
          }
          local_278 = CONCAT22(uVar3,(ushort)local_278);
          local_27c = local_290;
          iVar4 = 1;
          if (1 < param_4) {
            iVar2 = strcasecmp((char *)param_3[1],PTR_DAT_00011ee8);
            if (iVar2 == 0) {
              local_278 = local_278 & 0xffffff00;
              if (param_4 == 2) {
                iVar4 = 2;
                goto LAB_00011d8c;
              }
              iVar4 = 2;
            }
            iVar2 = strcasecmp((char *)param_3[iVar4],PTR_s_fixed_00011ef0);
            if (iVar2 == 0) {
              local_278 = CONCAT31(local_278._1_3_,1);
              iVar4 = iVar4 + 1;
            }
          }
        }
      }
    }
  }
LAB_00011d8c:
  iVar2 = FUN_00011360(param_1,param_2,0x8b26,auStack_28c);
  if (iVar2 < 0) {
    iVar4 = -6;
  }
  return iVar4;
}



/* ===== FUN_00011efc @ 00011efc size=208 ===== */

undefined4 FUN_00011efc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *__s1;
  undefined1 auStack_30 [16];
  undefined2 local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  
  __s1 = (char *)*param_3;
  iVar1 = strcasecmp(__s1,PTR_DAT_00011fcc);
  if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,PTR_DAT_00011fd0), iVar1 == 0)) {
    local_20 = 1;
    local_1e = 0xffffffff;
    local_1a = 0xffff;
  }
  else {
    iVar1 = strcasecmp(__s1,PTR_s_off_000136db_0xd_00011fd4);
    if (iVar1 == 0) {
      local_20 = 1;
      local_1a = 0;
      local_1e = 0;
    }
    else {
      iVar1 = iw_in_addr(param_1,param_2,__s1,&local_20);
      if (iVar1 < 0) {
        *(undefined4 *)PTR_DAT_00011fd8 = 0;
        return 0xfffffffd;
      }
    }
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b14,auStack_30);
  if (iVar1 < 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00012064 @ 00012064 size=656 ===== */

int FUN_00012064(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  char *local_298;
  undefined1 auStack_294 [16];
  undefined4 local_284;
  undefined1 local_27f;
  ushort local_27e [5];
  undefined1 auStack_274 [216];
  ushort local_19c;
  ushort local_19a;
  byte local_15c;
  ushort local_34;
  
  pcVar5 = (char *)*param_3;
  iVar3 = strcasecmp(pcVar5,DAT_00012308);
  if (iVar3 == 0) {
    iVar3 = 1;
    local_27f = 1;
  }
  else {
    iVar3 = strcasecmp(pcVar5,DAT_0001230c);
    if (iVar3 == 0) {
      local_27e[0] = 0;
      iVar3 = FUN_00011360(param_1,param_2,0x8b2d,auStack_294);
      if (iVar3 < 0) {
        return -7;
      }
      local_27f = 0;
      iVar3 = 1;
      goto LAB_000122c8;
    }
    iVar3 = FUN_00011528(param_3,param_4,local_27e,DAT_00012310,5);
    if (iVar3 < 0) {
      return iVar3;
    }
    bVar1 = false;
    local_27f = 0;
    dVar6 = strtod((char *)*param_3,&local_298);
    if ((char *)*param_3 == local_298) {
      if (param_4 <= iVar3) goto LAB_0001227c;
    }
    else {
      iVar4 = iw_get_range_info(param_1,param_2,auStack_274);
      if (iVar4 < 0) {
        memset(auStack_274,0,0x24c);
      }
      uVar2 = local_27e[0] & 0xf000;
      if (((local_27e[0] & 0xf000) != 0x2000) &&
         (local_19a = local_34, (local_27e[0] & 0xf000) != 0x4000)) {
        local_19a = local_19c;
      }
      if ((local_19a & 4) == 0) {
        dVar6 = dVar6 * DAT_000122f8;
        dVar7 = DAT_000122f8;
        if ((*local_298 == 'u') || (dVar7 = DAT_00012300, *local_298 == 'm')) {
          dVar6 = dVar6 / dVar7;
        }
      }
      else if (local_15c < 0x15) {
        dVar6 = dVar6 * DAT_000122f8;
      }
      else {
        local_27e[0] = local_27e[0] | 4;
      }
      iVar3 = iVar3 + 1;
      if (uVar2 == 0) {
        local_27e[0] = local_27e[0] | 0x1000;
      }
      local_284 = (undefined4)(longlong)dVar6;
      if (param_4 <= iVar3) goto LAB_000122c8;
      bVar1 = true;
    }
    pcVar5 = (char *)param_3[iVar3];
    iVar4 = strcasecmp(pcVar5,DAT_00012314);
    if (iVar4 == 0) {
      local_27e[0] = local_27e[0] | 0x300;
    }
    iVar4 = strncasecmp(pcVar5,DAT_00012318,4);
    if (iVar4 == 0) {
      local_27e[0] = local_27e[0] | 0x100;
    }
    iVar4 = strncasecmp(pcVar5,DAT_0001231c,5);
    if (iVar4 == 0) {
      local_27e[0] = local_27e[0] | 0x200;
    }
    iVar4 = strncasecmp(pcVar5,DAT_00012320,5);
    if (iVar4 == 0) {
      local_27e[0] = local_27e[0] | 0x400;
    }
    iVar4 = strcasecmp(pcVar5,DAT_00012324);
    if (iVar4 == 0) {
      local_27e[0] = local_27e[0] | 0x800;
    }
    if ((local_27e[0] & 0xf00) == 0) {
      if (!bVar1) {
LAB_0001227c:
        *DAT_00012328 = iVar3;
        return -3;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
LAB_000122c8:
  iVar4 = FUN_00011360(param_1,param_2,0x8b2c,auStack_294);
  if (iVar4 < 0) {
    iVar3 = -6;
  }
  return iVar3;
}



/* ===== FUN_0001232c @ 0001232c size=180 ===== */

undefined4 FUN_0001232c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_3c;
  undefined1 auStack_38 [16];
  uint local_28;
  
  iVar2 = sscanf((char *)*param_3,DAT_000123e0,&local_3c);
  iVar4 = DAT_000123e8;
  if (iVar2 != 1) {
    local_3c = 0;
    while ((uVar1 = local_3c, local_3c < 7 &&
           (iVar2 = strncasecmp((char *)*param_3,*(char **)(iVar4 + local_3c * 4),3), iVar2 != 0)))
    {
      local_3c = uVar1 + 1;
    }
  }
  if (local_3c < 7) {
    local_28 = local_3c;
    iVar4 = FUN_00011360(param_1,param_2,0x8b06,auStack_38);
    if (iVar4 < 0) {
      uVar3 = 0xfffffffa;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0xfffffffd;
    *DAT_000123e4 = 0;
  }
  return uVar3;
}



/* ===== FUN_000123ec @ 000123ec size=552 ===== */

int FUN_000123ec(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char *__s2;
  char *__s2_00;
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_8c;
  undefined1 auStack_88 [16];
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 auStack_68 [68];
  
  iVar1 = strcasecmp((char *)*param_3,DAT_00012614);
  __s2_00 = DAT_0001261c;
  __s2 = DAT_00012618;
  if (iVar1 == 0) {
    local_78 = auStack_68;
    local_74 = 0x40;
    iVar1 = FUN_00011360(param_1,param_2,0x8b2b,auStack_88);
    if (iVar1 < 0) {
      return -7;
    }
    iVar1 = 1;
    local_74._2_2_ = (ushort)(((local_74 >> 0x10) << 0x11) >> 0x11);
  }
  else {
    local_78 = (undefined1 *)0x0;
    local_74._0_2_ = 0;
    local_74._2_2_ = 0;
    iVar1 = 0;
    do {
      if (param_4 <= iVar1) break;
      iVar3 = iw_in_key_full(param_1,param_2,param_3[iVar1],auStack_68,(int)&local_74 + 2);
      iVar2 = iVar1;
      if (iVar3 < 1) {
LAB_00012518:
        iVar3 = sscanf((char *)param_3[iVar2],DAT_00012624,&local_8c);
        if ((iVar3 == 1) && (local_8c - 1U < 0xfe)) {
          iVar2 = iVar2 + 1;
          local_74._2_2_ = local_74._2_2_ | (ushort)local_8c;
          if (param_4 <= iVar2) goto LAB_000124d0;
        }
        iVar3 = strcasecmp((char *)param_3[iVar2],__s2);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_74._2_2_ = ~((ushort)~(ushort)(((uint)local_74._2_2_ << 0x11) >> 0x10) >> 1);
          if (param_4 <= iVar2) goto LAB_000124d0;
        }
        iVar3 = strcasecmp((char *)param_3[iVar2],__s2_00);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_74._2_2_ = local_74._2_2_ | 0x2000;
          if (param_4 <= iVar2) goto LAB_000124d0;
        }
        iVar3 = strncasecmp((char *)param_3[iVar2],DAT_00012628,5);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_74._2_2_ = local_74._2_2_ | 0x4000;
          if (param_4 <= iVar2) goto LAB_000124d0;
        }
        iVar3 = strncasecmp((char *)param_3[iVar2],DAT_0001262c,4);
        if (iVar3 == 0) {
          iVar2 = iVar2 + 1;
          local_74._2_2_ = local_74._2_2_ | 0x400;
        }
      }
      else {
        iVar2 = iVar1 + 1;
        local_74._0_2_ = (undefined2)iVar3;
        local_78 = auStack_68;
        if (iVar2 < param_4) goto LAB_00012518;
      }
LAB_000124d0:
      bVar4 = iVar1 != iVar2;
      iVar1 = iVar2;
    } while (bVar4);
    if (local_78 == (undefined1 *)0x0) {
      local_74._2_2_ = local_74._2_2_ | 0x800;
    }
    if (iVar1 == 0) {
      *DAT_00012620 = 0;
      return -3;
    }
  }
  iVar2 = FUN_00011360(param_1,param_2,0x8b2a,auStack_88);
  if (iVar2 < 0) {
    iVar1 = -6;
  }
  return iVar1;
}



/* ===== FUN_00012630 @ 00012630 size=376 ===== */

int FUN_00012630(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *__s1;
  double dVar4;
  double dVar5;
  char *local_3c;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_21;
  
  __s1 = (char *)*param_3;
  iVar2 = strcasecmp(__s1,DAT_000127c0);
  if (iVar2 == 0) {
    param_4 = 1;
    local_24 = 0;
    local_28 = 0xffffffff;
    local_21 = 0;
  }
  else {
    iVar2 = strcasecmp(__s1,DAT_000127c4);
    if (iVar2 == 0) {
      iVar2 = FUN_00011360(param_1,param_2,0x8b05,auStack_38);
      if (iVar2 < 0) {
        return -7;
      }
      param_4 = 1;
      local_21 = 1;
    }
    else {
      dVar4 = strtod(__s1,&local_3c);
      if ((char *)*param_3 == local_3c) {
        *DAT_000127c8 = 0;
        return -3;
      }
      if ((local_3c != (char *)0x0) &&
         (((cVar1 = *local_3c, dVar5 = DAT_000127a8, cVar1 == 'G' ||
           (dVar5 = DAT_000127b0, cVar1 == 'M')) || (dVar5 = DAT_000127b8, cVar1 == 'k')))) {
        dVar4 = dVar4 * dVar5;
      }
      iw_float2freq(SUB84(dVar4,0),&local_28);
      local_21 = 1;
      if (param_4 < 2) {
        param_4 = 1;
      }
      else {
        iVar3 = strcasecmp((char *)param_3[1],DAT_000127c0);
        iVar2 = 1;
        if (iVar3 == 0) {
          local_21 = 0;
          if (param_4 == 2) goto LAB_00012674;
          iVar2 = 2;
        }
        param_4 = iVar2;
        iVar2 = strcasecmp((char *)param_3[param_4],DAT_000127c4);
        if (iVar2 == 0) {
          local_21 = 1;
          param_4 = param_4 + 1;
        }
      }
    }
  }
LAB_00012674:
  iVar2 = FUN_00011360(param_1,param_2,0x8b04,auStack_38);
  if (iVar2 < 0) {
    param_4 = -6;
  }
  return param_4;
}



/* ===== FUN_000127cc @ 000127cc size=456 ===== */

int FUN_000127cc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  int local_68;
  undefined1 auStack_64 [16];
  uint *local_54;
  undefined4 local_50;
  uint local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  undefined1 uStack_24;
  
  pcVar6 = (char *)*param_3;
  iVar2 = strcasecmp(pcVar6,DAT_00012994);
  if ((iVar2 == 0) || (iVar2 = strcasecmp(pcVar6,DAT_00012998), iVar2 == 0)) {
    iVar2 = 1;
    local_50._2_2_ = 0;
    local_44 = local_44 & 0xffffff00;
  }
  else {
    iVar2 = strcasecmp(pcVar6,DAT_0001299c);
    if (iVar2 == 0) {
      iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_54 = &local_44;
      local_44 = 0;
      local_50 = 0x21;
      local_34 = 0;
      local_2c = 0;
      iStack_28 = iStack_40 << 8;
      uStack_24 = (undefined1)((uint)iStack_40 >> 0x18);
      iStack_30 = iStack_40;
      iVar2 = FUN_00011360(param_1,param_2,0x8b1b,auStack_64);
      if (iVar2 < 0) {
        return -7;
      }
      iVar2 = 1;
      local_50._2_2_ = 1;
    }
    else {
      iVar2 = strcmp(pcVar6,DAT_000129a0);
      if ((iVar2 == 0) || (iVar2 = strcmp(pcVar6,DAT_000129a4), iVar2 == 0)) {
        if (param_4 < 2) {
          return -2;
        }
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      pcVar6 = (char *)param_3[iVar3];
      sVar4 = strlen(pcVar6);
      if (0x20 < sVar4) {
        *(undefined4 *)(DAT_000129a8 + 4) = 0x20;
        return -4;
      }
      iVar2 = iVar3 + 1;
      local_50._2_2_ = 1;
      strcpy((char *)&local_44,pcVar6);
      if (((iVar2 < param_4) &&
          (iVar5 = sscanf((char *)param_3[iVar3 + 1],DAT_000129ac,&local_68), iVar5 == 1)) &&
         (local_68 - 1U < 0xfe)) {
        local_50._2_2_ = (undefined2)local_68;
        iVar2 = iVar3 + 2;
      }
    }
  }
  iVar3 = iw_get_kernel_we_version();
  local_54 = &local_44;
  sVar4 = strlen((char *)local_54);
  sVar1 = (short)sVar4;
  if (iVar3 < 0x15) {
    sVar1 = sVar1 + 1;
  }
  local_50 = CONCAT22(local_50._2_2_,sVar1);
  iVar3 = FUN_00011360(param_1,param_2,0x8b1a,auStack_64);
  if (iVar3 < 0) {
    iVar2 = -6;
  }
  return iVar2;
}



/* ===== FUN_000129b0 @ 000129b0 size=2220 ===== */

undefined4 FUN_000129b0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  FILE *__stream;
  double local_478;
  char acStack_470 [16];
  undefined1 *local_460;
  uint local_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined1 auStack_3f0 [20];
  int local_3dc;
  undefined4 local_3d8;
  char local_3d3;
  int local_3d0;
  double local_3c8;
  undefined4 local_3c0;
  int local_3bc;
  undefined1 auStack_3b8 [64];
  int local_378;
  uint local_374;
  int local_370;
  uint local_36c;
  undefined1 auStack_368 [36];
  int local_344;
  int local_340;
  int local_338;
  undefined1 *local_334;
  uint local_330;
  int local_32c;
  undefined1 auStack_328 [36];
  int local_304;
  undefined4 local_300;
  uint uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  int local_2e4;
  undefined1 *local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  undefined1 *local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined1 *local_2bc;
  uint local_2b8;
  int local_2b4;
  undefined1 *local_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [2];
  undefined1 auStack_2a6 [6];
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  int local_288;
  undefined1 auStack_284 [40];
  undefined4 local_25c;
  byte local_16c;
  int local_38;
  
  memset(auStack_3f0,0,0x3d8);
  iVar1 = iw_get_basic_config(param_1,param_2,auStack_3f0);
  if (iVar1 < 0) {
    strncpy(acStack_470,param_2,0x10);
    iVar1 = ioctl(param_1,0x8913,acStack_470);
    if (iVar1 < 0) {
      __stream = (FILE *)*DAT_00013098;
      pcVar2 = strerror(0x13);
      fprintf(__stream,DAT_0001309c,param_2,pcVar2);
      return 0xffffffed;
    }
    fprintf((FILE *)*DAT_00013098,DAT_000130a0,param_2);
    return 0xffffffa1;
  }
  iVar1 = iw_get_range_info(param_1,param_2,auStack_284);
  if (-1 < iVar1) {
    local_38 = 1;
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b15,acStack_470);
  if (-1 < iVar1) {
    local_304 = 1;
    local_300 = local_460;
    uStack_2fc = local_45c;
    uStack_2f8 = uStack_458;
    uStack_2f4 = uStack_454;
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b21,acStack_470);
  if (-1 < iVar1) {
    local_2f0 = 1;
    local_2ec = local_460;
    local_2e8 = local_45c;
  }
  local_45c = local_45c & 0xffff;
  iVar1 = FUN_00011360(param_1,param_2,0x8b2d);
  if (-1 < iVar1) {
    local_2cc = 1;
    local_2c8 = local_460;
    uStack_2c4 = local_45c;
  }
  iVar1 = iw_get_stats(param_1,param_2,auStack_2a8,auStack_284,local_38);
  if (-1 < iVar1) {
    local_288 = 1;
  }
  local_45c = 0x21;
  local_460 = auStack_328;
  iVar1 = FUN_00011360(param_1,param_2,0x8b1d,acStack_470);
  if ((-1 < iVar1) && (1 < (local_45c & 0xffff))) {
    local_32c = 1;
  }
  if (((local_38 != 0) && (9 < local_16c)) &&
     (iVar1 = FUN_00011360(param_1,param_2,0x8b27,acStack_470), -1 < iVar1)) {
    local_2c0 = 1;
    local_2bc = local_460;
    local_2b8 = local_45c;
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b09,acStack_470);
  if (-1 < iVar1) {
    local_338 = 1;
    local_334 = local_460;
    local_330 = local_45c;
  }
  if (((local_38 != 0) && (10 < local_16c)) &&
     (iVar1 = FUN_00011360(param_1,param_2,0x8b29,acStack_470), -1 < iVar1)) {
    local_2b4 = 1;
    local_2b0 = local_460;
    uStack_2ac = local_45c;
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b23,acStack_470);
  if (-1 < iVar1) {
    local_2e4 = 1;
    local_2e0 = local_460;
    local_2dc = local_45c;
  }
  iVar1 = FUN_00011360(param_1,param_2,0x8b25,acStack_470);
  if (-1 < iVar1) {
    local_2d8 = 1;
    local_2d4 = local_460;
    local_2d0 = local_45c;
  }
  printf(DAT_000130a4,param_2,auStack_3f0);
  if (local_370 != 0) {
    if (local_36c == 0) {
      printf(DAT_000130f0);
    }
    else if ((local_36c & 0xfe) == 0) {
      printf(DAT_000130ec,auStack_368);
    }
    else {
      printf(DAT_000130a8,auStack_368,local_36c & 0xff);
    }
  }
  if (local_32c != 0) {
    printf(DAT_000130ac,auStack_328);
  }
  if (local_370 == 0 && local_32c == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
    printf(DAT_0001311c);
  }
  if (local_3dc != 0) {
    if (local_3d3 == '\0') {
      printf(DAT_000130f4,local_3d8);
    }
    else {
      printf(DAT_000130b0);
    }
    uVar4 = uVar4 + 2;
  }
  if (local_344 != 0) {
    uVar4 = uVar4 + 3;
    printf(DAT_000130b8,*(undefined4 *)(DAT_000130b4 + local_340 * 4));
  }
  if (local_3d0 != 0) {
    local_478 = local_3c8;
    if ((local_38 != 0) && (local_3c8 < DAT_00013090)) {
      iw_channel_to_freq((int)(longlong)local_3c8,&local_478,auStack_284);
    }
    uVar4 = uVar4 + 4;
    iw_print_freq(SUB84(local_478,0),acStack_470,0x80,0xffffffff,local_3c0);
    printf(DAT_00013114,acStack_470);
  }
  if (local_304 != 0) {
    if (8 < uVar4) {
      uVar4 = 0;
      printf(DAT_0001311c);
    }
    uVar4 = uVar4 + 6;
    if ((local_344 == 0) || (pcVar2 = DAT_000130bc, local_340 != 1)) {
      pcVar2 = DAT_000130c0;
    }
    printf(pcVar2);
    uVar3 = iw_sawap_ntop(&local_300,acStack_470);
    printf(DAT_000130c4,uVar3);
  }
  if (local_2f0 != 0) {
    if (0xb < uVar4) {
      uVar4 = 0;
      printf(DAT_0001311c);
    }
    uVar4 = uVar4 + 3;
    iw_print_bitrate(acStack_470,0x80,local_2ec);
    if ((local_2e8 & 0xff) == 0) {
      uVar3 = 0x3a;
    }
    else {
      uVar3 = 0x3d;
    }
    printf(DAT_000130c8,uVar3,acStack_470);
  }
  if (local_2c0 != 0) {
    if (0xb < uVar4) {
      uVar4 = 0;
      printf(DAT_0001311c);
    }
    uVar4 = uVar4 + 3;
    iw_print_txpower(acStack_470,0x80,&local_2bc);
    if ((local_2b8 & 0xff) == 0) {
      uVar3 = 0x3a;
    }
    else {
      uVar3 = 0x3d;
    }
    printf(DAT_000130cc,uVar3,acStack_470);
  }
  if (local_338 != 0) {
    if (10 < uVar4) {
      printf(DAT_0001311c);
    }
    if ((local_330 & 0xff) == 0) {
      uVar3 = 0x3a;
    }
    else {
      uVar3 = 0x3d;
    }
    printf(DAT_000130d0,uVar3);
    pcVar2 = DAT_000130f8;
    if ((local_38 == 0) || (pcVar2 = DAT_000130d4, (int)local_334 < 0)) {
      printf(pcVar2);
    }
    else {
      printf(DAT_000130d8,local_334,local_25c);
    }
  }
  printf(DAT_0001311c);
  iVar1 = 0;
  if (local_2b4 != 0) {
    printf(DAT_000130dc);
    pcVar2 = DAT_00013110;
    if (uStack_2ac._1_1_ == '\0') {
      if ((uStack_2ac & 0xf0000000) != 0) {
        iw_print_retry_value(acStack_470,0x80,local_2b0,uStack_2ac._2_2_,local_16c);
        printf(DAT_00013128,acStack_470);
      }
      pcVar2 = DAT_00013118;
      if (uStack_2ac._2_2_ == 0) goto LAB_00012fb8;
    }
    else {
LAB_00012fb8:
      printf(pcVar2);
    }
    iVar1 = 5;
    printf(DAT_000130e0);
  }
  if (local_2e4 != 0) {
    if (local_2dc._1_1_ == '\0') {
      if ((local_2dc & 0xff) == 0) {
        uVar3 = 0x3a;
      }
      else {
        uVar3 = 0x3d;
      }
      printf(DAT_000130fc,uVar3,local_2e0);
    }
    else {
      printf(DAT_000130e4);
    }
    iVar1 = iVar1 + 3;
  }
  if (local_2d8 == 0) {
    if (iVar1 != 0) goto LAB_0001300c;
  }
  else {
    if (local_2d0._1_1_ == '\0') {
      if ((local_2d0 & 0xff) == 0) {
        uVar3 = 0x3a;
      }
      else {
        uVar3 = 0x3d;
      }
      printf(DAT_00013100,uVar3,local_2d4);
    }
    else {
      printf(DAT_000130e8);
    }
LAB_0001300c:
    printf(DAT_0001311c);
  }
  if (local_3bc != 0) {
    printf(DAT_00013104);
    pcVar2 = DAT_00013108;
    if (((local_374 & 0x8000) == 0) && (local_378 != 0)) {
      iw_print_key(acStack_470,0x80,auStack_3b8,local_378,local_374);
      printf(DAT_00013128,acStack_470);
      if ((local_374 & 0xfe) != 0) {
        printf(DAT_0001312c,local_374 & 0xff);
      }
      if ((local_374 & 0x4000) != 0) {
        printf(DAT_00013130);
      }
      pcVar2 = DAT_00013134;
      if ((local_374 & 0x2000) != 0) goto LAB_00013174;
    }
    else {
LAB_00013174:
      printf(pcVar2);
    }
    printf(DAT_0001311c);
  }
  if (local_2cc == 0) goto LAB_00013214;
  printf(DAT_0001310c);
  pcVar2 = DAT_00013110;
  if (uStack_2c4._1_1_ == '\0') {
    if ((uStack_2c4 & 0xf0000000) != 0) {
      iw_print_pm_value(acStack_470,0x80,local_2c8,uStack_2c4._2_2_,local_16c);
      printf(DAT_00013114,acStack_470);
    }
    iw_print_pm_mode(acStack_470,0x80,uStack_2c4._2_2_);
    printf(DAT_00013128,acStack_470);
    pcVar2 = DAT_00013118;
    if (uStack_2c4._2_2_ == 0) goto LAB_00013208;
  }
  else {
LAB_00013208:
    printf(pcVar2);
  }
  printf(DAT_0001311c);
LAB_00013214:
  if (local_288 != 0) {
    iw_print_stats(acStack_470,0x80,auStack_2a6,auStack_284,local_38);
    printf(DAT_00013120,acStack_470);
    if (local_16c < 0xc) {
      printf(DAT_00013138,local_2a0,local_29c,local_290);
    }
    else {
      printf(DAT_00013124,local_2a0,local_29c,uStack_298,local_294,local_290,local_28c);
    }
  }
  putchar(10);
  return 0;
}



/* ===== _fini @ 00013308 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_in_key_full @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_in_key_full(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_basic_config @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_basic_config(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_txpower @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_txpower(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_dbm2mwatt @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_dbm2mwatt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_float2freq @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_float2freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_pm_mode @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_pm_mode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_enum_devices @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_enum_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_freq @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_retry_value @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_retry_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_key @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_pm_value @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_pm_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sawap_ntop @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sawap_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_bitrate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_in_addr @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_in_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_stats @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_mwatt2dbm @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_mwatt2dbm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_stats @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_version_info @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_version_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_kernel_we_version @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_kernel_we_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_channel_to_freq @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_channel_to_freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_range_info @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_range_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sockets_open @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sockets_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


