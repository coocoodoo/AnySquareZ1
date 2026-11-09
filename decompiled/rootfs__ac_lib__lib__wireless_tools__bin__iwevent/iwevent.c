// iwevent — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010bb0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010bd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002300c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023018)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_print_stats @ 00010c04 size=12 ===== */

void iw_print_stats(void)

{
  (*(code *)PTR_iw_print_stats_0002301c)();
  return;
}



/* ===== <EXTERNAL>::getopt_long @ 00010c10 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00023020)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00010c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023024)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_sockets_open @ 00010c28 size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_00023028)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002302c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00023030)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023034)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_sawap_ntop @ 00010c58 size=12 ===== */

void iw_sawap_ntop(void)

{
  (*(code *)PTR_iw_sawap_ntop_00023038)();
  return;
}



/* ===== <EXTERNAL>::iw_freq_to_channel @ 00010c64 size=12 ===== */

void iw_freq_to_channel(void)

{
  (*(code *)PTR_iw_freq_to_channel_0002303c)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 00010c70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00023040)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::socket @ 00010c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00023044)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00023048)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002304c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023050)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00023054)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::iw_extract_event_stream @ 00010cb8 size=12 ===== */

void iw_extract_event_stream(void)

{
  (*(code *)PTR_iw_extract_event_stream_00023058)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002305c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_timeval @ 00010cd0 size=12 ===== */

void iw_print_timeval(void)

{
  (*(code *)PTR_iw_print_timeval_00023060)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00023064)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010ce8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023068)();
  return;
}



/* ===== <EXTERNAL>::iw_print_key @ 00010cf4 size=12 ===== */

void iw_print_key(void)

{
  (*(code *)PTR_iw_print_key_0002306c)();
  return;
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 00010d00 size=12 ===== */

void iw_ether_ntop(void)

{
  (*(code *)PTR_iw_ether_ntop_00023070)();
  return;
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 00010d0c size=12 ===== */

void iw_print_bitrate(void)

{
  (*(code *)PTR_iw_print_bitrate_00023074)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00023078)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::iw_channel_to_freq @ 00010d24 size=12 ===== */

void iw_channel_to_freq(void)

{
  (*(code *)PTR_iw_channel_to_freq_0002307c)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00023084)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023088)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::time @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0002308c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::iw_init_event_stream @ 00010d60 size=12 ===== */

void iw_init_event_stream(void)

{
  (*(code *)PTR_iw_init_event_stream_00023090)();
  return;
}



/* ===== <EXTERNAL>::iw_get_range_info @ 00010d6c size=12 ===== */

void iw_get_range_info(void)

{
  (*(code *)PTR_iw_get_range_info_00023094)();
  return;
}



/* ===== <EXTERNAL>::iw_freq2float @ 00010d78 size=12 ===== */

void iw_freq2float(void)

{
  (*(code *)PTR_iw_freq2float_00023098)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002309c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000230a0)(__status);
  return;
}



/* ===== <EXTERNAL>::iw_print_freq @ 00010d9c size=12 ===== */

void iw_print_freq(void)

{
  (*(code *)PTR_iw_print_freq_000230a4)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000230a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::iw_print_version_info @ 00010db4 size=12 ===== */

void iw_print_version_info(void)

{
  (*(code *)PTR_iw_print_version_info_000230ac)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010dc0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000230b0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000230b4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230b8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::getsockname @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_000230bc)(__fd);
  return iVar1;
}



/* ===== FUN_00010df0 @ 00010df0 size=536 ===== */

undefined4 FUN_00010df0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  __fd_mask *p_Var6;
  uint local_bc;
  sockaddr local_b8;
  time_t local_a0;
  fd_set local_98;
  
  iVar2 = getopt_long(param_1,param_2,DAT_0001100c,DAT_00011008,0);
  if (iVar2 < 1) {
    if (param_1 <= *DAT_00011014) {
      local_bc = 0;
      local_bc = socket(0x10,3,0);
      pcVar4 = DAT_00011020;
      if (-1 < (int)local_bc) {
        local_b8.sa_data[0] = '\0';
        local_b8.sa_data[1] = '\0';
        local_b8.sa_data[2] = '\0';
        local_b8.sa_data[3] = '\0';
        local_b8.sa_data[4] = '\0';
        local_b8.sa_data[5] = '\0';
        local_b8.sa_family = 0x10;
        local_b8.sa_data[6] = '\x01';
        local_b8.sa_data[7] = '\0';
        local_b8.sa_data[8] = '\0';
        local_b8.sa_data[9] = '\0';
        iVar2 = bind(local_bc,&local_b8,0xc);
        pcVar4 = DAT_00011024;
        if (-1 < iVar2) {
          local_98.fds_bits[0] = 0xc;
          iVar2 = getsockname(local_bc,&local_b8,(socklen_t *)&local_98);
          puVar1 = DAT_00011018;
          pcVar4 = DAT_0001102c;
          if (-1 < iVar2) {
            pcVar4 = DAT_00011030;
            if ((local_98.fds_bits[0] == 0xc) && (pcVar4 = DAT_00011034, local_b8.sa_family == 0x10)
               ) {
              local_a0 = time((time_t *)0x0);
              fputs(DAT_00011038,(FILE *)*puVar1);
              do {
                while( true ) {
                  iVar2 = 0;
                  p_Var6 = local_98.fds_bits;
                  do {
                    iVar2 = iVar2 + 1;
                    *p_Var6 = 0;
                    p_Var6 = p_Var6 + 1;
                  } while (iVar2 != 0x20);
                  local_98.fds_bits[local_bc >> 5] =
                       local_98.fds_bits[local_bc >> 5] | 1 << (local_bc & 0x1f);
                  iVar2 = select(local_bc + 1,&local_98,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
                  if (iVar2 < 0) break;
                  if ((iVar2 != 0) &&
                     ((local_98.fds_bits[local_bc >> 5] >> (local_bc & 0x1f) & 1U) != 0)) {
                    FUN_000111d4(&local_bc);
                  }
                }
                piVar5 = __errno_location();
              } while (*piVar5 == 4 || *piVar5 == 0xb);
              fputs(DAT_0001103c,(FILE *)*puVar1);
              close(local_bc);
              return 0;
            }
            fprintf((FILE *)*DAT_00011018,pcVar4);
            goto LAB_00010ec4;
          }
        }
      }
      perror(pcVar4);
LAB_00010ec4:
      perror(DAT_00011028);
      return 1;
    }
    fputs(DAT_0001101c,(FILE *)*DAT_00011018);
LAB_00010e28:
    uVar3 = 1;
  }
  else {
    if (iVar2 != 0x68) {
      if (iVar2 == 0x76) goto LAB_00010e38;
      goto LAB_00010e28;
    }
    uVar3 = 0;
  }
  FUN_00011158(uVar3);
LAB_00010e38:
  uVar3 = iw_print_version_info(DAT_00011010);
  return uVar3;
}



/* ===== entry @ 00011040 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023080)
            (DAT_00011074,param_2,&stack0x00000004,DAT_00011078,DAT_00011070,param_1);
  return;
}



/* ===== FUN_0001107c @ 0001107c size=32 ===== */

void FUN_0001107c(void)

{
  if (DAT_000110a0 == DAT_0001109c) {
    return;
  }
  if (DAT_000110a4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000110a4)();
  return;
}



/* ===== _FINI_0 @ 000110e0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001111c;
  if (*DAT_0001111c != '\0') {
    return;
  }
  FUN_0001107c();
  if (DAT_00011120 != 0) {
    __deregister_frame_info(DAT_00011124);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011128 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001114c != 0) {
    __register_frame_info(DAT_00011154,DAT_00011150);
  }
  if ((DAT_000110d8 - DAT_000110d4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000110dc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000110d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000110dc)();
  return;
}



/* ===== FUN_00011158 @ 00011158 size=36 ===== */

void FUN_00011158(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00011180;
  if (param_1 == 0) {
    puVar1 = DAT_00011184;
  }
  fputs(DAT_0001117c,(FILE *)*puVar1);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== FUN_00011188 @ 00011188 size=72 ===== */

char * FUN_00011188(char *param_1,byte *param_2,int param_3)

{
  char *__format;
  char *__s;
  byte *pbVar1;
  
  __format = DAT_000111d0;
  pbVar1 = param_2 + param_3;
  __s = param_1;
  for (; param_2 != pbVar1; param_2 = param_2 + 1) {
    snprintf(__s,(size_t)(param_1 + (0x80 - (int)__s)),__format,(uint)*param_2);
    __s = __s + 2;
  }
  return param_1;
}



/* ===== FUN_000111d4 @ 000111d4 size=2424 ===== */

void FUN_000111d4(int *param_1)

{
  undefined8 uVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *__ptr;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  FILE *__stream;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 extraout_s1;
  int local_222c;
  int local_2228;
  socklen_t local_220c;
  timeval tStack_2208;
  timezone tStack_2200;
  sockaddr sStack_21f8;
  undefined1 auStack_21e0 [2];
  ushort local_21de;
  undefined4 local_21dc;
  undefined2 local_21d8;
  undefined2 local_21d6;
  undefined8 *local_21cc;
  undefined1 auStack_21c6 [2];
  undefined8 *local_21c4 [3];
  undefined1 auStack_21b8 [8];
  undefined1 auStack_21b0 [64];
  undefined8 local_2170;
  undefined4 local_2168;
  undefined1 auStack_2160 [52];
  undefined8 local_212c;
  undefined8 uStack_2124;
  undefined8 local_211c;
  undefined1 local_2114;
  undefined7 uStack_2113;
  undefined1 uStack_210c;
  uint local_2028 [2049];
  
  iVar4 = (int)&local_21dc + 2;
  do {
    local_220c = 0xc;
    sVar2 = recvfrom(*param_1,local_2028,0x2000,0x40,&sStack_21f8,&local_220c);
    if (sVar2 < 0) {
      piVar3 = __errno_location();
      iVar4 = *piVar3;
      if (iVar4 != 4 && iVar4 != 0xb) {
        __stream = (FILE *)*DAT_00011908;
        pcVar5 = strerror(iVar4);
        fprintf(__stream,DAT_00011910,DAT_0001190c,pcVar5);
      }
      return;
    }
    if (sVar2 == 0) {
      fprintf((FILE *)*DAT_00011908,DAT_00011914,DAT_0001190c);
      return;
    }
    puVar19 = local_2028;
    for (; puVar18 = DAT_00011920, 0xf < sVar2; sVar2 = sVar2 - uVar20) {
      uVar20 = *puVar19;
      local_222c = uVar20 - 0x10;
      if (sVar2 < (int)uVar20 || local_222c < 0) {
        fprintf((FILE *)*DAT_00011908,DAT_00011918,DAT_0001190c,uVar20);
        goto LAB_000112b8;
      }
      uVar9 = (uint)(ushort)puVar19[1];
      if (uVar9 - 0x10 < 2) {
        if (uVar9 == 0x11) {
          uVar9 = puVar19[5];
          puVar22 = (void *)*DAT_00011920;
          __ptr = (undefined4 *)0x0;
          while (puVar17 = __ptr, __ptr = puVar22, __ptr != (void *)0x0) {
            puVar22 = (undefined4 *)*__ptr;
            if (uVar9 == __ptr[1]) {
              if (puVar17 == (undefined4 *)0x0) {
                *puVar18 = puVar22;
              }
              else {
                *puVar17 = puVar22;
              }
              free(__ptr);
              __ptr = puVar17;
            }
          }
        }
        else if (0x10 < uVar20 && uVar9 == 0x10) {
          for (puVar21 = puVar19 + 8;
              ((3 < local_222c && (uVar9 = (uint)(ushort)*puVar21, 3 < uVar9)) &&
              ((int)uVar9 <= local_222c)); puVar21 = (uint *)((int)puVar21 + uVar9)) {
            if (*(ushort *)((int)puVar21 + 2) == 0xb) {
              uVar12 = puVar19[5];
              for (puVar18 = (undefined4 *)*DAT_00011920; puVar18 != (undefined4 *)0x0;
                  puVar18 = (undefined4 *)*puVar18) {
                if (uVar12 == puVar18[1]) goto LAB_000114d0;
              }
              iVar6 = iw_sockets_open();
              if (iVar6 < 0) {
                perror(DAT_00011924);
              }
              else {
                puVar18 = calloc(1,0x26c);
                if (puVar18 == (undefined4 *)0x0) {
                  fputs(DAT_00011928,(FILE *)*DAT_00011908);
                }
                else {
                  pcVar5 = (char *)(puVar18 + 2);
                  puVar18[1] = uVar12;
                  local_211c = CONCAT44(local_211c._4_4_,uVar12);
                  pcVar5[0] = '\0';
                  pcVar5[1] = '\0';
                  pcVar5[2] = '\0';
                  pcVar5[3] = '\0';
                  pcVar5[4] = '\0';
                  pcVar5[5] = '\0';
                  pcVar5[6] = '\0';
                  pcVar5[7] = '\0';
                  *(undefined8 *)(puVar18 + 4) = 0;
                  *(undefined8 *)((int)puVar18 + 0x11) = 0;
                  iVar7 = ioctl(iVar6,0x8910,&local_212c);
                  if (iVar7 < 0) {
                    perror(DAT_0001192c);
                    free(puVar18);
                  }
                  else {
                    strncpy(pcVar5,(char *)&local_212c,0x10);
                    uVar12 = iw_get_range_info(iVar6,pcVar5,puVar18 + 7);
                    puVar18[0x9a] = ~uVar12 >> 0x1f;
                    close(iVar6);
                    uVar13 = *DAT_00011920;
                    *DAT_00011920 = puVar18;
                    *puVar18 = uVar13;
LAB_000114d0:
                    gettimeofday(&tStack_2208,&tStack_2200);
                    iw_print_timeval(auStack_21b0,0x40,&tStack_2208,&tStack_2200);
                    iw_init_event_stream(sStack_21f8.sa_data + 10,puVar21 + 1,uVar9 - 4);
                    local_2228 = 0;
                    do {
                      iVar6 = iw_extract_event_stream
                                        (sStack_21f8.sa_data + 10,auStack_21e0,
                                         *(undefined1 *)(puVar18 + 0x4d));
                      if (iVar6 == 0) break;
                      if (local_2228 == 0) {
                        printf(DAT_0001193c,auStack_21b0,puVar18 + 2);
                      }
                      else {
                        printf(DAT_00011930);
                      }
                      pcVar5 = DAT_000119c0;
                      if (iVar6 < 1) goto LAB_00011a54;
                      puVar22 = puVar18 + 7;
                      iVar7 = puVar18[0x9a];
                      puVar10 = (undefined8 *)(uint)local_21de;
                      puVar11 = DAT_00011944;
                      if ((local_21de & 1) == 0) {
                        puVar11 = DAT_00011940;
                      }
                      if (puVar10 == (undefined8 *)0x8b21) {
                        iw_print_bitrate(&local_212c,0x80,local_21dc);
                        pcVar8 = DAT_000119b8;
                        puVar10 = &local_212c;
LAB_00011a78:
                        printf(pcVar8,puVar10);
                      }
                      else {
                        pcVar8 = DAT_0001194c;
                        if ((undefined8 *)0x8b21 < puVar10) {
                          if (puVar10 == (undefined8 *)0x8c03) {
                            iw_ether_ntop(iVar4,&local_212c);
                            pcVar8 = DAT_0001199c;
                            puVar10 = &local_212c;
                          }
                          else if (puVar10 < (undefined8 *)0x8c04) {
                            if (puVar10 == (undefined8 *)0x8c00) {
                              iw_ether_ntop(iVar4,&local_212c);
                              pcVar8 = DAT_00011998;
                              puVar10 = &local_212c;
                            }
                            else if (puVar10 < (undefined8 *)0x8c01) {
                              if (puVar10 == (undefined8 *)0x8b2a) {
                                if (local_21dc == (undefined8 *)0x0) {
                                  local_21d6 = local_21d6 | 0x800;
                                }
                                else {
                                  memcpy(&local_2170,local_21dc,(uint)local_21d8);
                                }
                                printf(DAT_00011958);
                                pcVar5 = DAT_0001195c;
                                if ((local_21d6 & 0x8000) == 0) {
                                  iw_print_key(&local_212c,0x80,&local_2170,local_21d8,local_21d6);
                                  printf(DAT_00011960,&local_212c);
                                  if ((local_21d6 & 0xfe) != 0) {
                                    printf(DAT_00011964,local_21d6 & 0xff);
                                  }
                                  if ((local_21d6 & 0x4000) != 0) {
                                    printf(DAT_00011968);
                                  }
                                  if ((local_21d6 & 0x2000) != 0) {
                                    printf(DAT_0001196c);
                                  }
                                  putchar(10);
                                  goto LAB_00011598;
                                }
                                goto LAB_00011a54;
                              }
                            }
                            else if (puVar10 == (undefined8 *)0x8c01) {
                              local_21dc = (undefined8 *)((uint)local_21dc & 0xffffff);
                              iw_print_stats(&local_212c,0x80,&local_21dc,puVar22,iVar7);
                              pcVar8 = DAT_000119bc;
                              puVar10 = &local_212c;
                            }
                            else if (puVar10 == (undefined8 *)0x8c02) {
                              memset(&local_212c,0,0x101);
                              if ((local_21dc != (undefined8 *)0x0) && (local_21d8 != 0)) {
                                memcpy(&local_212c,local_21dc,(uint)local_21d8);
                              }
                              pcVar8 = DAT_00011970;
                              puVar10 = &local_212c;
                            }
                          }
                          else if (puVar10 == (undefined8 *)0x8c07) {
                            puVar10 = (undefined8 *)FUN_00011188(&local_212c,local_21dc,local_21d8);
                            pcVar8 = DAT_000119b0;
                          }
                          else if (puVar10 < (undefined8 *)0x8c08) {
                            if (puVar10 == (undefined8 *)0x8c04) {
                              iw_ether_ntop(iVar4,&local_212c);
                              pcVar8 = DAT_000119a0;
                              puVar10 = &local_212c;
                            }
                            else if (puVar10 == (undefined8 *)0x8c06) {
                              if (0x1b < local_21d8) {
                                ppuVar14 = &local_21cc;
                                puVar10 = local_21dc;
                                do {
                                  puVar16 = puVar10 + 1;
                                  puVar15 = *(undefined8 **)((int)puVar10 + 4);
                                  *ppuVar14 = *(undefined8 **)puVar10;
                                  puVar11 = local_21cc;
                                  ppuVar14[1] = puVar15;
                                  ppuVar14 = ppuVar14 + 2;
                                  puVar10 = puVar16;
                                } while (puVar16 != local_21dc + 3);
                                *ppuVar14 = *(undefined8 **)puVar16;
                                iw_ether_ntop(auStack_21c6,&local_2170);
                                puVar15 = (undefined8 *)FUN_00011188(&local_212c,auStack_21b8,8);
                                puVar10 = &local_2170;
                                pcVar5 = DAT_00011974;
LAB_00011724:
                                printf(pcVar5,puVar11,puVar10,puVar15);
                              }
                              goto LAB_00011598;
                            }
                          }
                          else if (puVar10 == (undefined8 *)0x8c08) {
                            puVar10 = (undefined8 *)FUN_00011188(&local_212c,local_21dc,local_21d8);
                            pcVar8 = DAT_000119b4;
                          }
                          else if (puVar10 == (undefined8 *)0x8c09) {
                            if (0x17 < local_21d8) {
                              puVar10 = &local_2170;
                              puVar11 = local_21dc;
                              do {
                                puVar15 = puVar11 + 1;
                                uVar13 = *(undefined4 *)((int)puVar11 + 4);
                                *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
                                *(undefined4 *)((int)puVar10 + 4) = uVar13;
                                puVar10 = puVar10 + 1;
                                puVar11 = puVar15;
                              } while (puVar15 != local_21dc + 3);
                              puVar11 = (undefined8 *)local_2170;
                              puVar10 = local_2170._4_4_;
                              iw_ether_ntop((int)&local_2168 + 2,&local_212c);
                              puVar15 = &local_212c;
                              pcVar5 = DAT_00011978;
                              goto LAB_00011724;
                            }
                            goto LAB_00011598;
                          }
                          goto LAB_00011a78;
                        }
                        if (puVar10 == (undefined8 *)0x8b06) {
                          pcVar8 = DAT_00011988;
                          puVar10 = *(undefined8 **)(DAT_00011984 + (int)local_21dc * 4);
                          goto LAB_00011a78;
                        }
                        if (puVar10 < (undefined8 *)0x8b07) {
                          if (puVar10 == (undefined8 *)0x8b02) {
                            pcVar5 = DAT_0001197c;
                            pcVar8 = DAT_00011980;
                            puVar10 = local_21dc;
                            if (local_21d8._1_1_ != '\0') goto LAB_00011a54;
                          }
                          else if (puVar10 < (undefined8 *)0x8b03) {
                            if (puVar10 == (undefined8 *)0x8b01) {
                              pcVar8 = DAT_00011948;
                              puVar10 = (undefined8 *)&local_21dc;
                            }
                          }
                          else if ((undefined8 *)0x8b03 < puVar10) {
                            uVar13 = iw_freq2float(&local_21dc);
                            local_2170 = (double)CONCAT44(extraout_s1,uVar13);
                            if (iVar7 == 0) {
                              uVar13 = 0xffffffff;
                            }
                            else if (DAT_00011900 <= local_2170) {
                              uVar13 = iw_freq_to_channel(puVar22);
                            }
                            else {
                              uVar13 = iw_channel_to_freq((int)(longlong)local_2170,&local_2170,
                                                          puVar22);
                            }
                            iw_print_freq(SUB84(local_2170,0),&local_212c,0x80,uVar13,
                                          local_21d6._1_1_);
                            pcVar5 = DAT_00011934;
LAB_00011594:
                            printf(pcVar5,puVar11,&local_212c);
                            goto LAB_00011598;
                          }
                          goto LAB_00011a78;
                        }
                        pcVar5 = DAT_00011994;
                        if (puVar10 != (undefined8 *)0x8b19) {
                          if (puVar10 < (undefined8 *)0x8b1a) {
                            if (puVar10 == (undefined8 *)0x8b13) {
                              pcVar5 = DAT_000119ac;
                              if ((local_21dc == (undefined8 *)0x0) || (local_21d8 == 0))
                              goto LAB_00011a54;
                              puVar10 = &local_2170;
                              puVar11 = local_21dc;
                              do {
                                puVar15 = puVar11 + 1;
                                uVar13 = *(undefined4 *)((int)puVar11 + 4);
                                *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
                                *(undefined4 *)((int)puVar10 + 4) = uVar13;
                                puVar10 = puVar10 + 1;
                                puVar11 = puVar15;
                              } while (puVar15 != local_21dc + 3);
                              *(undefined4 *)puVar10 = *(undefined4 *)puVar15;
                              iw_ether_ntop((int)&local_2170 + 2,&local_212c);
                              printf(DAT_000119a4,&local_212c);
                              iw_print_stats(&local_212c,0x80,auStack_2160,puVar22,iVar7);
                              pcVar8 = DAT_000119a8;
                              puVar10 = &local_212c;
                            }
                            else if (puVar10 == (undefined8 *)0x8b15) {
                              puVar10 = (undefined8 *)iw_sawap_ntop(&local_21dc,&local_212c);
                              pcVar8 = DAT_00011950;
                            }
                          }
                          else if (puVar10 < (undefined8 *)0x8b1c) {
                            local_212c = 0;
                            uStack_2124 = 0;
                            local_211c = 0;
                            local_2114 = 0;
                            uStack_2113 = 0;
                            uStack_210c = 0;
                            uVar1 = local_212c;
                            if ((local_21dc != (undefined8 *)0x0) &&
                               (uVar1 = local_211c, local_21d8 != 0)) {
                              local_211c = local_212c;
                              memcpy(&local_212c,local_21dc,(uint)local_21d8);
                              uVar1 = local_211c;
                            }
                            local_211c = uVar1;
                            pcVar8 = DAT_00011990;
                            puVar10 = puVar11;
                            if (local_21d6 != 0) {
                              pcVar5 = DAT_0001198c;
                              if ((local_21d6 & 0xfe) != 0) {
                                puVar15 = (undefined8 *)(local_21d6 & 0xff);
                                puVar10 = &local_212c;
                                pcVar5 = DAT_00011954;
                                goto LAB_00011724;
                              }
                              goto LAB_00011594;
                            }
                          }
                          goto LAB_00011a78;
                        }
LAB_00011a54:
                        puts(pcVar5);
                      }
LAB_00011598:
                      fflush((FILE *)*DAT_00011938);
                      local_2228 = local_2228 + 1;
                    } while (0 < iVar6);
                  }
                }
              }
            }
            uVar9 = (ushort)*puVar21 + 3 & 0xfffffffc;
            local_222c = local_222c - uVar9;
          }
        }
      }
      uVar20 = uVar20 + 3 & 0xfffffffc;
      puVar19 = (uint *)((int)puVar19 + uVar20);
    }
    if (0 < sVar2) {
LAB_000112b8:
      fprintf((FILE *)*DAT_00011908,DAT_0001191c,DAT_0001190c,sVar2);
    }
  } while( true );
}



/* ===== _fini @ 00011c10 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_init_event_stream @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_init_event_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_freq @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_extract_event_stream @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_extract_event_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_freq_to_channel @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_freq_to_channel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_freq2float @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_freq2float(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

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



/* ===== <EXTERNAL>::strerror @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_key @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sawap_ntop @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sawap_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_bitrate @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_bitrate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_ether_ntop @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_ether_ntop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_stats @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_timeval @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_timeval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_print_version_info @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_print_version_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_channel_to_freq @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_channel_to_freq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_get_range_info @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_get_range_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::iw_sockets_open @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void iw_sockets_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


