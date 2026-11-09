// ts_uinput — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010974 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010998 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002300c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000109a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000109b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000109bc size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00023018)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 000109c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002301c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_read_mt @ 000109d4 size=12 ===== */

void ts_read_mt(void)

{
  (*(code *)PTR_ts_read_mt_00023020)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 000109e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00023024)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000109ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_close @ 000109f8 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_0002302c)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00023030)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023034)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010a28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002303c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023040)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00023044)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00010a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00023048)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002304c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010a64 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023050)();
  return;
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 00010a70 size=12 ===== */

void ts_get_eventpath(void)

{
  (*(code *)PTR_ts_get_eventpath_00023054)();
  return;
}



/* ===== <EXTERNAL>::scandir @ 00010a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_00023058)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002305c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023064)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::asprintf @ 00010aac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_00023068)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 00010ab8 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_0002306c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023070)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 00010ad0 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00023074)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023078)();
  return piVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002307c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010af4 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00023080)();
  return;
}



/* ===== <EXTERNAL>::daemon @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_00023084)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023088)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002308c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b24 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023090)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00023098)(__ptr);
  return;
}



/* ===== FUN_00010b48 @ 00010b48 size=5032 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00010b48(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  Elf32_Ehdr *pEVar12;
  ssize_t sVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  void *pvVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int local_10c4;
  Elf32_Ehdr *local_10bc;
  uint local_1084;
  undefined1 auStack_1070 [4];
  uint local_106c;
  uint local_1068;
  int local_1058;
  int local_1054;
  int local_1050;
  Elf32_Ehdr *pEStack_104c;
  undefined4 local_1048;
  char *local_1044;
  int local_1040;
  undefined4 local_103c;
  void *local_1038;
  Elf32_Ehdr *local_1034;
  uint local_1030;
  undefined4 uStack_102c;
  Elf32_Ehdr *local_1028;
  uint local_1024;
  uint local_1020;
  undefined2 local_fd4;
  uint local_fc8 [47];
  int local_f0c;
  int local_ef4;
  int local_ef0;
  uint local_ec8 [53];
  undefined4 local_df4;
  undefined4 local_df0;
  uint local_bc8 [4];
  undefined4 local_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 local_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 local_b9c;
  undefined4 uStack_b98;
  undefined4 local_b94;
  undefined4 uStack_b90;
  undefined4 local_b8c;
  undefined4 uStack_b88;
  undefined4 local_b84;
  undefined4 uStack_b80;
  undefined4 local_b7c;
  undefined4 uStack_b78;
  undefined4 local_b74;
  undefined4 uStack_b70;
  
  pEStack_104c = *(Elf32_Ehdr **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_1048 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_1044 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  bVar4 = false;
  local_1050 = 0;
  local_1030 = 1;
  local_1040 = 0;
  local_1058 = -1;
  local_1038 = (void *)0x0;
  local_1054 = -1;
  uStack_102c = 0;
  local_103c = pEStack_104c;
  local_1034 = pEStack_104c;
  local_1028 = pEStack_104c;
  piVar7 = __errno_location();
  pvVar27 = (void *)(DAT_00011b74 + 0x10bb4);
  iVar25 = DAT_00011b78 + 0x10bb8;
  iVar17 = DAT_00011b7c + 0x10bbc;
LAB_00010bc0:
  memcpy(local_bc8,pvVar27,0x80);
  local_1024 = 0;
  iVar8 = getopt_long(param_1,param_2,iVar25,local_bc8,&local_1024);
  if (iVar8 != -1) {
    *piVar7 = 0;
    switch(iVar8) {
    case 0x62:
      local_1028 = (Elf32_Ehdr *)CONCAT22(local_1028._2_2_,1);
      goto LAB_00010bc0;
    case 99:
      break;
    case 100:
      bVar4 = true;
      goto LAB_00010bc0;
    case 0x65:
      break;
    case 0x66:
      local_1044 = (char *)**(int **)(iVar17 + DAT_00011b80);
      goto LAB_00010bc0;
    case 0x67:
      break;
    case 0x68:
      break;
    case 0x69:
      local_1048 = **(undefined4 **)(iVar17 + DAT_00011b80);
      goto LAB_00010bc0;
    case 0x6a:
      break;
    case 0x6b:
      break;
    case 0x6c:
      break;
    case 0x6d:
      break;
    case 0x6e:
      pEStack_104c = (Elf32_Ehdr *)**(undefined4 **)(iVar17 + DAT_00011b80);
      goto LAB_00010bc0;
    case 0x6f:
      break;
    case 0x70:
      break;
    case 0x71:
      break;
    case 0x72:
      break;
    case 0x73:
      local_1030 = atoi((char *)**(undefined4 **)(iVar17 + DAT_00011b80));
      goto LAB_00010bc0;
    case 0x74:
      break;
    case 0x75:
      break;
    case 0x76:
      goto LAB_00010c90;
    }
    FUN_00012108();
    return 0;
  }
  bVar3 = bVar4;
  if (((uint)local_103c & 0xffff) == 0) {
    bVar3 = false;
  }
  if (bVar3) {
    local_103c = &Elf32_Ehdr_00010000;
  }
  else if (((uint)local_103c & 0xffff) != 0) {
    puts((char *)(DAT_00011b84 + 0x10d34));
    pcVar9 = getenv((char *)(DAT_00011b88 + 0x10d40));
    printf((char *)(DAT_00011b8c + 0x10d50),pcVar9);
    pcVar9 = getenv((char *)(DAT_00011b90 + 0x10d5c));
    printf((char *)(DAT_00011b94 + 0x10d6c),pcVar9);
    pcVar9 = getenv((char *)(DAT_00011b98 + 0x10d78));
    printf((char *)(DAT_00011b9c + 69000),pcVar9);
    pcVar9 = getenv((char *)(DAT_00011ba0 + 0x10d94));
    printf((char *)(DAT_00011ba4 + 0x10da4),pcVar9);
    pcVar9 = getenv((char *)(DAT_00011ba8 + 0x10db0));
    printf((char *)(DAT_00011bac + 0x10dc0),pcVar9);
    pcVar9 = getenv((char *)(DAT_00011bb0 + 0x10dcc));
    printf((char *)(DAT_00011bb4 + 0x10ddc),pcVar9);
    putchar(10);
  }
  if (pEStack_104c == (Elf32_Ehdr *)0x0) {
    pEStack_104c = malloc(10);
    if (pEStack_104c == (Elf32_Ehdr *)0x0) goto LAB_00011230;
    iVar25 = *(int *)(DAT_00011bcc + 0x112d0);
    uVar18 = *(undefined4 *)(DAT_00011bcc + 0x112d4);
    uVar15 = *(undefined4 *)(DAT_00011bcc + 0x112d8);
    pEStack_104c->e_ident_magic_num = (char)iVar25;
    pEStack_104c->e_ident_magic_str[0] = (char)((uint)iVar25 >> 8);
    pEStack_104c->e_ident_magic_str[1] = (char)((uint)iVar25 >> 0x10);
    pEStack_104c->e_ident_magic_str[2] = (char)((uint)iVar25 >> 0x18);
    pEStack_104c->e_ident_class = (char)uVar18;
    pEStack_104c->e_ident_data = (char)((uint)uVar18 >> 8);
    pEStack_104c->e_ident_version = (char)((uint)uVar18 >> 0x10);
    pEStack_104c->e_ident_osabi = (char)((uint)uVar18 >> 0x18);
    uVar2 = (undefined2)uVar15;
    pEStack_104c->e_ident_abiversion = (char)uVar2;
    pEStack_104c->e_ident_pad[0] = (char)((ushort)uVar2 >> 8);
  }
  if ((short)local_1028 == 0) {
    if (local_1044 == (char *)0x0) {
      pcVar14 = (char *)(DAT_00011bdc + 0x11364);
      pcVar9 = getenv(pcVar14);
      if (pcVar9 == (char *)0x0) {
        local_1044 = (char *)(DAT_00011be4 + 0x113cc);
      }
      else {
        local_1044 = getenv(pcVar14);
      }
    }
    local_1050 = open(local_1044,2);
    if (local_1050 != -1) {
      if (((uint)local_103c & 0xffff) != 0) {
        printf((char *)(DAT_00011bc8 + 0x112a8),local_1044);
      }
      goto LAB_00010e2c;
    }
    perror((char *)(DAT_00011be0 + 0x1138c));
  }
  else {
LAB_00010e2c:
    iVar25 = ts_setup(local_1048,1);
    local_1040 = iVar25;
    if (iVar25 == 0) {
LAB_00011288:
      perror((char *)(DAT_00011bc4 + 0x11294));
    }
    else {
      puVar10 = calloc(1,4);
      if (puVar10 != (undefined4 *)0x0) {
        pvVar27 = calloc(1,0x48);
        if (pvVar27 != (void *)0x0) {
          *puVar10 = pvVar27;
          uVar11 = ts_read_mt(iVar25,puVar10,1);
          if (((uint)(uVar11 != 0xfffffff5) & uVar11 >> 0x1f) == 0) {
            ts_close(local_1040);
            free(pvVar27);
            free(puVar10);
            local_1040 = ts_setup(local_1048,0);
            if (local_1040 == 0) goto LAB_00011288;
            pcVar9 = (char *)ts_get_eventpath();
            if (pcVar9 == (char *)0x0) goto LAB_000111d0;
            local_1054 = open(pcVar9,2);
            if (local_1054 == -1) {
              perror((char *)(DAT_00011c18 + 0x11b60));
              goto LAB_0001134c;
            }
            if (((uint)local_103c & 0xffff) != 0) {
              printf((char *)(DAT_00011c08 + 0x1164c),pcVar9);
            }
            if (((uint)local_1028 & 0xffff) == 0) {
              iVar25 = ioctl(local_1050,0x4600,local_bc8);
              if (iVar25 < 0) {
                perror((char *)(DAT_00011c2c + 0x11d74));
                iVar25 = *piVar7;
                local_10c4 = 0;
                goto LAB_00010f50;
              }
              local_10c4 = local_bc8[0] - 1;
              uVar11 = local_bc8[1] + -1;
            }
            else {
              iVar25 = ioctl(local_1054,0x80084523,&local_1024);
              if (iVar25 < 0) {
                pcVar14 = (char *)(DAT_00011c28 + 0x11d54);
LAB_00011d50:
                perror(pcVar14);
                local_10c4 = 0;
                iVar25 = *piVar7;
              }
              else if ((local_1020 & 0x600000) == 0x600000) {
                iVar25 = ioctl(local_1054,0x80184575,local_bc8);
                if (iVar25 < 0) {
                  pcVar14 = (char *)(DAT_00011c44 + 0x11e60);
                  goto LAB_00011d50;
                }
                local_10c4 = local_bc8[2];
                iVar25 = ioctl(local_1054,0x80184576,local_bc8);
                uVar11 = local_bc8[2];
                if (-1 < iVar25) goto LAB_00010f58;
                perror((char *)(DAT_00011c20 + 0x11d0c));
                iVar25 = *piVar7;
              }
              else if ((local_1024 & 3) == 3) {
                iVar25 = ioctl(local_1054,0x80184540,local_bc8);
                if (iVar25 < 0) {
                  pcVar14 = (char *)(DAT_00011c54 + 0x11f1c);
                  goto LAB_00011d50;
                }
                local_10c4 = local_bc8[2];
                iVar25 = ioctl(local_1054,0x80184541,local_bc8);
                uVar11 = local_bc8[2];
                if (-1 < iVar25) goto LAB_00010f58;
                perror((char *)(DAT_00011c4c + 0x11eec));
                iVar25 = *piVar7;
              }
              else {
                local_10c4 = 0;
                iVar25 = *piVar7;
              }
LAB_00010f50:
              uVar11 = 0;
              if (iVar25 != 0) goto LAB_0001134c;
            }
LAB_00010f58:
            local_1058 = open((char *)(DAT_00011bb8 + 0x10f68),0x801);
            if (local_1058 == -1) {
              perror((char *)(DAT_00011c1c + 0x11b70));
LAB_000112e8:
              if (*piVar7 != 0) goto LAB_0001134c;
            }
            else {
              iVar25 = ioctl(local_1058,0x40045564,1);
              if ((((iVar25 < 0) || (iVar25 = ioctl(local_1058,0x40045564,0), iVar25 < 0)) ||
                  (iVar25 = ioctl(local_1058,0x40045565,0x14a), iVar25 < 0)) ||
                 (iVar25 = ioctl(local_1058,0x40045564,3), iVar25 < 0)) {
                perror((char *)(DAT_00011bd0 + 0x112e8));
                goto LAB_000112e8;
              }
              memset(&local_1024,0,0x45c);
              snprintf((char *)&local_1024,0x50,(char *)(DAT_00011bbc + 0x11004),pEStack_104c);
              local_fd4 = 6;
              memset(local_bc8,0,0xba0);
              iVar25 = ioctl(local_1054,0x801f4520,local_bc8);
              if (iVar25 < 0) {
LAB_00011f00:
                perror((char *)(DAT_00011c50 + 0x11f0c));
                goto LAB_000112e8;
              }
              bVar5 = 0;
              uVar24 = 0;
              bVar6 = 0;
              do {
                if ((local_bc8[0] >> (uVar24 & 0xff) & 1) != 0) {
                  iVar25 = ioctl(local_1054,uVar24 + 0x20 | 0x82ff4500,local_bc8 + uVar24 * 0x18);
                  if (-1 < iVar25) {
                    uVar19 = 0;
                    puVar22 = &local_1024;
                    do {
                      if (((uint)(uVar24 == 3) &
                          local_bc8[uVar24 * 0x18 + (uVar19 >> 5)] >> (uVar19 & 0x1f)) == 0) {
LAB_000110cc:
                        if (uVar19 == 0x2fe) goto LAB_00011070;
                      }
                      else {
                        iVar25 = ioctl(local_1054,uVar19 + 0x40 | 0x80184500,auStack_1070);
                        if (iVar25 < 0) {
                          perror((char *)(DAT_00011c3c + 0x11e00));
                          goto LAB_000112e8;
                        }
                        iVar25 = ioctl(local_1058,0x40045567,uVar19);
                        if (iVar25 < 0) goto LAB_00011ddc;
                        if (uVar19 == 0) {
                          local_ec8[0] = uVar19;
                          local_fc8[0] = local_10c4;
                        }
                        else if (uVar19 == 1) {
                          local_fc8[1] = uVar11;
                          local_ec8[1] = 0;
                        }
                        else if (uVar19 == 0x35) {
                          local_ef4 = local_10c4;
                          local_df4 = 0;
                          bVar6 = 1;
                        }
                        else if (uVar19 == 0x36) {
                          local_ef0 = uVar11;
                          local_df0 = 0;
                        }
                        else {
                          puVar22[0x57] = local_106c;
                          puVar22[0x17] = local_1068;
                          if (uVar19 != 0x2f) goto LAB_000110cc;
                          if (local_1030 == 1) {
                            local_1030 = (local_1068 + 1) - local_106c;
                          }
                          bVar5 = 1;
                        }
                      }
                      uVar19 = uVar19 + 1;
                      puVar22 = puVar22 + 1;
                    } while( true );
                  }
                  goto LAB_00011f00;
                }
LAB_00011070:
                uVar24 = uVar24 + 1;
              } while (uVar24 != 0x1f);
              if ((bool)(bVar6 & (bVar5 ^ 1))) {
                iVar25 = ioctl(local_1058,0x40045567,0x39);
                if ((iVar25 < 0) || (iVar25 = ioctl(local_1058,0x40045567,0x2f), iVar25 < 0)) {
LAB_00011ddc:
                  perror((char *)(DAT_00011c38 + 0x11de8));
                  goto LAB_000112e8;
                }
                if (local_1030 == 1) {
                  local_1030 = 5;
                }
                if ((short)local_103c != 0) {
                  puts((char *)(DAT_00011c5c + 0x11f8c));
                }
              }
              else if (((bool)(bVar6 & bVar5)) && ((short)local_103c != 0)) {
                puts((char *)(DAT_00011c60 + 0x11f9c));
              }
              local_f0c = local_1030 - 1;
              sVar13 = write(local_1058,&local_1024,0x45c);
              if (sVar13 == -1) {
                perror((char *)(DAT_00011c58 + 0x11f28));
                goto LAB_000112e8;
              }
              iVar25 = ioctl(local_1058,0x5501);
              if (iVar25 < 0) {
                perror((char *)(DAT_00011c48 + 0x11ed8));
                goto LAB_000112e8;
              }
            }
            if (((uint)local_103c & 0xffff) == 0) {
LAB_0001146c:
              uVar11 = local_1030;
              local_1038 = malloc(local_1030 * 0x140);
              if ((local_1038 != (void *)0x0) &&
                 (pEVar12 = calloc(1,4), local_1034 = pEVar12, pEVar12 != (Elf32_Ehdr *)0x0)) {
                pvVar27 = malloc(uVar11 * 0x48);
                *(void **)pEVar12 = pvVar27;
                if (pvVar27 == (void *)0x0) {
                  fwrite((void *)(DAT_00011c34 + 0x11da4),1,0x23,
                         (FILE *)**(undefined4 **)(iVar17 + DAT_00011c30));
                  free(*(void **)local_1034);
                }
                else {
                  if (bVar4) {
                    iVar25 = ioctl(local_1058,0x8040552c,&local_1024);
                    if (iVar25 == -1) {
                      if (*piVar7 != 0x16) {
                        perror((char *)(DAT_00011c70 + 0x11fec));
                        goto LAB_0001134c;
                      }
                      if (local_103c._2_2_ == 0) {
                        puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                      }
                      else {
                        iVar25 = FUN_00012318(&pEStack_104c);
                        if (iVar25 == 0) goto LAB_0001134c;
                        puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                        fprintf((FILE *)*puVar10,(char *)(DAT_00011c6c + 0x11fd8));
                      }
                    }
                    else if (local_103c._2_2_ == 0) {
                      puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                      fprintf((FILE *)*puVar10,(char *)(DAT_00011c40 + 0x11e4c),&local_1024);
                    }
                    else {
                      uStack_ba8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                      uStack_ba4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                      uStack_ba0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                      local_bc8[3] = *(undefined4 *)(DAT_00011bf8 + 0x11514);
                      local_bac = 0;
                      local_b9c = 0;
                      local_bb8 = *(undefined4 *)(DAT_00011bf8 + 0x11518);
                      uStack_bb4 = *(undefined4 *)(DAT_00011bf8 + 0x1151c);
                      uStack_bb0 = *(undefined4 *)(DAT_00011bf8 + 0x11520);
                      local_b94 = 0;
                      local_b8c = 0;
                      local_b84 = 0;
                      local_b7c = 0;
                      local_b74 = 0;
                      uStack_b98 = uStack_ba8;
                      uStack_b90 = uStack_ba8;
                      uStack_b88 = uStack_ba8;
                      uStack_b80 = uStack_ba8;
                      uStack_b78 = uStack_ba8;
                      uStack_b70 = uStack_ba8;
                      snprintf((char *)((int)&uStack_bb0 + 3),0x40,(char *)(DAT_00011bfc + 0x11544),
                               &local_1024);
                      iVar25 = FUN_00012230(local_bc8);
                      if (iVar25 == 0) {
                        puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                      }
                      else {
                        puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                        fprintf((FILE *)*puVar10,(char *)(DAT_00011c00 + 0x1157c));
                      }
                    }
                    fflush((FILE *)*puVar10);
                    iVar25 = daemon(0,0);
                    if (iVar25 == -1) {
                      perror((char *)(DAT_00011c64 + 0x11fac));
                      goto LAB_0001134c;
                    }
                  }
                  do {
                    while( true ) {
                      uVar11 = local_1030;
                      pEVar12 = local_1034;
                      local_10bc = local_1034;
                      uVar24 = ts_read_mt(local_1040,local_1034,local_1030,1);
                      if ((int)uVar24 < 1) break;
                      local_1084 = 0;
                      do {
                        iVar25 = 0;
                        memset(local_1038,0,uVar11 * 0x140);
                        for (iVar8 = 0; iVar8 < (int)uVar11; iVar8 = iVar8 + 1) {
                          iVar23 = *(int *)local_10bc;
                          iVar16 = iVar23 + iVar8 * 0x48;
                          if ((*(ushort *)(iVar16 + 0x46) & 1) != 0) {
                            sVar1 = *(short *)(iVar16 + 0x44);
                            uVar18 = *(undefined4 *)(iVar16 + 0x3c);
                            uVar15 = *(undefined4 *)(iVar16 + 0x40);
                            iVar21 = iVar25;
                            if (sVar1 == 1) {
                              *(undefined4 *)((int)local_1038 + iVar25 * 0x10) = uVar18;
                              iVar21 = iVar25 + 1;
                              *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 4) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 8) = 0x14a0001;
                              *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 0xc) = 1;
                            }
                            uVar20 = *(undefined4 *)(iVar16 + 0xc);
                            iVar25 = iVar21 * 0x10;
                            uVar28 = *(undefined4 *)(iVar23 + iVar8 * 0x48);
                            *(undefined4 *)((int)local_1038 + iVar21 * 0x10) = uVar18;
                            iVar23 = iVar21 + 1;
                            *(undefined4 *)((int)local_1038 + iVar25 + 4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 8) = 0x2f0003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xc) = uVar20;
                            uVar20 = *(undefined4 *)(iVar16 + 4);
                            uVar29 = *(undefined4 *)(iVar16 + 8);
                            if (iVar8 == 0) {
                              iVar23 = iVar21 + 4;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x10) = uVar18;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x14) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x1c) = uVar28;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x18) = 3;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x20) = uVar18;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x24) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x28) = 0x10003;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x2c) = uVar20;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x30) = uVar18;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x34) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x38) = 0x180003;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0x3c) = uVar29;
                            }
                            iVar25 = iVar23 * 0x10;
                            uVar26 = *(undefined4 *)(iVar16 + 0x20);
                            *(undefined4 *)((int)local_1038 + iVar23 * 0x10) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xc) = uVar28;
                            *(undefined4 *)((int)local_1038 + iVar25 + 8) = 0x350003;
                            uVar28 = *(undefined4 *)(iVar16 + 0x24);
                            *(undefined4 *)((int)local_1038 + iVar25 + 4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x10) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x1c) = uVar20;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x14) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x18) = 0x360003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x20) = uVar18;
                            uVar20 = *(undefined4 *)(iVar16 + 0x28);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x28) = 0x3a0003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x24) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x2c) = uVar29;
                            uVar29 = *(undefined4 *)(iVar16 + 0x2c);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x30) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x34) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x38) = 0x300003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x3c) = uVar26;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x40) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x48) = 0x320003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x44) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x4c) = uVar28;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x50) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x5c) = uVar20;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x54) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x58) = 0x310003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x60) = uVar18;
                            uVar20 = *(undefined4 *)(iVar16 + 0x14);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x68) = 0x330003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x6c) = uVar29;
                            *(undefined4 *)((int)local_1038 + iVar25 + 100) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x70) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x7c) = uVar20;
                            uVar20 = *(undefined4 *)(iVar16 + 0x18);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x78) = 0x370003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x74) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x80) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x8c) = uVar20;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x84) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x88) = 0x3c0003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x90) = uVar18;
                            uVar20 = *(undefined4 *)(iVar16 + 0x1c);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x94) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x98) = 0x3d0003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0x9c) = uVar20;
                            uVar20 = *(undefined4 *)(iVar16 + 0x30);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xa0) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xa8) = 0x340003;
                            uVar28 = *(undefined4 *)(iVar16 + 0x34);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xac) = uVar20;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xa4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xb0) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xb4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xbc) = uVar28;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xb8) = 0x3b0003;
                            uVar28 = *(undefined4 *)(iVar16 + 0x38);
                            uVar20 = *(undefined4 *)(iVar16 + 0x10);
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xc0) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xcc) = uVar28;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xc4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 200) = 0x380003;
                            iVar16 = iVar23 + 0xe;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xd0) = uVar18;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xd4) = uVar15;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xd8) = 0x390003;
                            *(undefined4 *)((int)local_1038 + iVar25 + 0xdc) = uVar20;
                            if (uStack_102c._2_2_ == 1) {
                              iVar16 = iVar23 + 0xf;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0xe0) = uVar18;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0xe4) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0xe8) = 0x20000;
                              *(undefined4 *)((int)local_1038 + iVar25 + 0xec) = 0;
                            }
                            iVar25 = iVar16;
                            if (sVar1 == 0) {
                              *(undefined4 *)((int)local_1038 + iVar16 * 0x10) = uVar18;
                              iVar25 = iVar16 + 1;
                              *(undefined4 *)((int)local_1038 + iVar16 * 0x10 + 4) = uVar15;
                              *(undefined4 *)((int)local_1038 + iVar16 * 0x10 + 0xc) = 0;
                              *(undefined4 *)((int)local_1038 + iVar16 * 0x10 + 8) = 0x14a0001;
                            }
                          }
                        }
                        if (iVar25 != 0) {
                          iVar8 = *(int *)local_10bc + (uVar11 & ~((int)uVar11 >> 0x1f)) * 0x48;
                          iVar16 = 0;
                          uVar18 = *(undefined4 *)(iVar8 + 0x40);
                          *(undefined4 *)((int)local_1038 + iVar25 * 0x10) =
                               *(undefined4 *)(iVar8 + 0x3c);
                          *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 4) = uVar18;
                          *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 8) = 0;
                          *(undefined4 *)((int)local_1038 + iVar25 * 0x10 + 0xc) = 0;
                          do {
                            iVar8 = iVar16 * 0x10;
                            iVar16 = iVar16 + 1;
                            sVar13 = write(local_1058,(void *)((int)local_1038 + iVar8),0x10);
                            if (sVar13 == -1) {
                              perror((char *)(DAT_00011c14 + 0x11b3c));
                              if (*piVar7 != 0) goto LAB_0001134c;
                              goto LAB_00011a4c;
                            }
                          } while (iVar16 <= iVar25);
                        }
                        local_10bc = (Elf32_Ehdr *)&local_10bc->e_ident_class;
                        local_1084 = local_1084 + 1;
                      } while (uVar24 != local_1084);
LAB_00011a4c:
                      iVar25 = DAT_00011c10;
                      if ((short)local_103c != 0) {
                        printf((char *)(DAT_00011c0c + 0x11a74),0);
                        for (iVar8 = 0; iVar8 < (int)uVar11; iVar8 = iVar8 + 1) {
                          iVar16 = *(int *)pEVar12 + iVar8 * 0x48;
                          if ((*(ushort *)(iVar16 + 0x46) & 1) != 0) {
                            printf((char *)(iVar25 + 0x11a80),
                                   *(undefined4 *)(*(int *)pEVar12 + iVar8 * 0x48),
                                   *(undefined4 *)(iVar16 + 4),*(undefined4 *)(iVar16 + 0xc),
                                   *(undefined4 *)(iVar16 + 0x10));
                          }
                        }
                      }
                    }
                  } while (((uint)(uVar24 != 0xfffffff5) & uVar24 >> 0x1f) == 0);
                  if ((short)local_103c != 0) {
                    fwrite((void *)(DAT_00011c04 + 0x11634),1,0x28,
                           (FILE *)**(undefined4 **)(iVar17 + DAT_00011c30));
                  }
                }
              }
            }
            else {
              printf((char *)(DAT_00011bd4 + 0x11314),5);
              iVar25 = ioctl(local_1058,0x8040552c,&local_1024);
              if (iVar25 != -1) {
                uStack_ba8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_ba4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_ba0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                local_bc8[3] = *(undefined4 *)(DAT_00011be8 + 0x113f4);
                local_bac = 0;
                local_b9c = 0;
                local_bb8 = *(undefined4 *)(DAT_00011be8 + 0x113f8);
                uStack_bb4 = *(undefined4 *)(DAT_00011be8 + 0x113fc);
                uStack_bb0 = *(undefined4 *)(DAT_00011be8 + 0x11400);
                local_b94 = 0;
                local_b8c = 0;
                local_b84 = 0;
                local_b7c = 0;
                local_b74 = 0;
                uStack_b98 = uStack_ba8;
                uStack_b90 = uStack_ba8;
                uStack_b88 = uStack_ba8;
                uStack_b80 = uStack_ba8;
                uStack_b78 = uStack_ba8;
                uStack_b70 = uStack_ba8;
                snprintf((char *)((int)&uStack_bb0 + 3),0x40,(char *)(DAT_00011bec + 0x11424),
                         &local_1024);
                puVar10 = *(undefined4 **)(iVar17 + DAT_00011c68);
                fprintf((FILE *)*puVar10,(char *)(DAT_00011bf0 + 0x11448),local_bc8);
                iVar25 = FUN_00012230(local_bc8);
                if (iVar25 != 0) {
                  fprintf((FILE *)*puVar10,(char *)(DAT_00011bf4 + 0x1146c));
                }
                goto LAB_0001146c;
              }
              if (*piVar7 == 0x16) {
                iVar25 = FUN_00012318(&pEStack_104c);
                if (iVar25 != 0) {
                  fprintf((FILE *)**(undefined4 **)(iVar17 + DAT_00011c68),
                          (char *)(DAT_00011c24 + 0x11d40));
                  goto LAB_0001146c;
                }
              }
              else {
                perror((char *)(DAT_00011bd8 + 0x1134c));
              }
            }
LAB_0001134c:
            free(pcVar9);
            goto LAB_000111d0;
          }
          free(pvVar27);
        }
        free(puVar10);
      }
    }
  }
LAB_000111d0:
  if (local_1034 != (Elf32_Ehdr *)0x0) {
    if (*(void **)local_1034 != (void *)0x0) {
      free(*(void **)local_1034);
    }
    free(local_1034);
  }
  if (local_1038 != (void *)0x0) {
    free(local_1038);
  }
  if (0 < local_1058) {
    iVar17 = ioctl(local_1058,0x5502);
    if (iVar17 == -1) {
      perror((char *)(DAT_00011bc0 + 0x11274));
    }
    close(local_1058);
  }
  if (local_1054 != 0) {
    close(local_1054);
  }
  if (local_1050 != 0) {
    close(local_1050);
  }
  if (pEStack_104c != (Elf32_Ehdr *)0x0) {
    free(pEStack_104c);
  }
LAB_00011230:
  return *piVar7;
LAB_00010c90:
  local_103c = (Elf32_Ehdr *)CONCAT22(local_103c._2_2_,1);
  goto LAB_00010bc0;
}



/* ===== entry @ 00011ff0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023060)
            (DAT_00012024,param_2,&stack0x00000004,DAT_00012028,DAT_00012020,param_1);
  return;
}



/* ===== FUN_0001202c @ 0001202c size=32 ===== */

void FUN_0001202c(void)

{
  if (DAT_00012050 == DAT_0001204c) {
    return;
  }
  if (DAT_00012054 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012054)();
  return;
}



/* ===== _FINI_0 @ 00012090 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000120cc;
  if (*DAT_000120cc != '\0') {
    return;
  }
  FUN_0001202c();
  if (DAT_000120d0 != 0) {
    __deregister_frame_info(DAT_000120d4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000120d8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000120fc != 0) {
    __register_frame_info(DAT_00012104,DAT_00012100);
  }
  if ((DAT_00012088 - DAT_00012084 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001208c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001208c)();
  return;
}



/* ===== FUN_00012108 @ 00012108 size=236 ===== */

void FUN_00012108(void)

{
  undefined4 uVar1;
  
  ts_print_ascii_logo(0x10);
  uVar1 = tslib_version();
  printf((char *)(DAT_000121f4 + 0x12128),uVar1);
  putchar(10);
  puts((char *)(DAT_000121f8 + 0x1213c));
  puts((char *)(DAT_000121fc + 0x12148));
  puts((char *)(DAT_00012200 + 0x12154));
  puts((char *)(DAT_00012204 + 0x12160));
  putchar(10);
  puts((char *)(DAT_00012208 + 0x12174));
  putchar(10);
  puts((char *)(DAT_0001220c + 0x12188));
  puts((char *)(DAT_00012210 + 0x12194));
  puts((char *)(DAT_00012214 + 0x121a0));
  puts((char *)(DAT_00012218 + 0x121ac));
  puts((char *)(DAT_0001221c + 0x121b8));
  puts((char *)(DAT_00012220 + 0x121c4));
  puts((char *)(DAT_00012224 + 0x121d0));
  puts((char *)(DAT_00012228 + 0x121dc));
  putchar(10);
  puts((char *)((int)&DAT_000121f4 + DAT_0001222c));
  return;
}



/* ===== FUN_00012230 @ 00012230 size=176 ===== */

char * FUN_00012230(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  dirent *__ptr;
  int iVar4;
  char *__fmt;
  char *local_28;
  dirent **local_24 [2];
  
  iVar4 = 0;
  local_28 = (char *)0x0;
  iVar2 = scandir(param_1,local_24,(__selector *)(DAT_000122e8 + 0x1225c),
                  *(__cmp **)(DAT_000122e0 + 0x12244 + DAT_000122e4));
  if (iVar2 < 1) {
    local_28 = (char *)0x0;
  }
  else {
    __fmt = (char *)(DAT_000122ec + 0x1227c);
    do {
      pcVar1 = local_28;
      __ptr = local_24[0][iVar4];
      local_28 = pcVar1;
      if (local_28 == (char *)0x0) {
        iVar3 = asprintf(&local_28,__fmt,__ptr->d_name);
        __ptr = local_24[0][iVar4];
        if (iVar3 == -1) {
          local_28 = pcVar1;
        }
      }
      iVar4 = iVar4 + 1;
      free(__ptr);
    } while (iVar2 != iVar4);
    free(local_24[0]);
  }
  return local_28;
}



/* ===== FUN_00012318 @ 00012318 size=336 ===== */

char * FUN_00012318(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  char *__fmt;
  char *__s;
  dirent **local_130;
  char *local_12c;
  char acStack_128 [260];
  
  local_12c = (char *)0x0;
  iVar1 = scandir((char *)(DAT_00012474 + 0x12354),&local_130,(__selector *)(DAT_00012470 + 0x1234c)
                  ,*(__cmp **)(DAT_00012468 + 0x1233c + DAT_0001246c));
  if (iVar1 < 1) {
LAB_00012438:
    local_12c = (char *)0x0;
  }
  else {
    __fmt = (char *)(DAT_00012478 + 0x12374);
    iVar1 = iVar1 + -1;
    do {
      iVar4 = iVar1 + -1;
      iVar3 = asprintf(&local_12c,__fmt,local_130[iVar1]->d_name);
      if (iVar3 == -1) {
        local_12c = (char *)0x0;
        break;
      }
      iVar3 = open(local_12c,2);
      if (iVar3 == -1) goto LAB_00012438;
      iVar2 = ioctl(iVar3,0x80ff4506,acStack_128);
      if (iVar2 < 0) {
        close(iVar3);
        free(local_12c);
        break;
      }
      __s = (char *)*param_1;
      __n = strlen(__s);
      iVar2 = strncmp(acStack_128,__s,__n);
      if (iVar2 == 0) {
        close(iVar3);
        free(local_130[iVar1]);
        break;
      }
      close(iVar3);
      free(local_130[iVar1]);
      free(local_12c);
      iVar1 = iVar4;
    } while (iVar4 != -1);
    free(local_130);
  }
  return local_12c;
}



/* ===== _fini @ 0001247c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alphasort @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scandir @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_get_eventpath @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_get_eventpath(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_mt @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


