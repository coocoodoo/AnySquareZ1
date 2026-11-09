// libiw.so.29 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000112b4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::strcpy @ 000112d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002600c)(__dest);
  return pcVar1;
}



/* ===== iw_enum_devices @ 000112e4 size=12 ===== */

void iw_enum_devices(void)

{
  (*(code *)PTR_iw_enum_devices_00026010)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00026014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00026018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002601c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00026020)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ceil @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ceil(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_ceil_00026024)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::floor @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_floor_00026028)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::usleep @ 00011338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002602c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00026030)(__s);
  return pcVar1;
}



/* ===== iw_sockets_open @ 00011350 size=12 ===== */

void iw_sockets_open(void)

{
  (*(code *)PTR_iw_sockets_open_00026034)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 0001135c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00026038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002603c)(__s);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011374 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00026040)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00026044)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::socket @ 0001138c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00026048)(__domain);
  return iVar1;
}



/* ===== iw_mwatt2dbm @ 00011398 size=12 ===== */

void iw_mwatt2dbm(void)

{
  (*(code *)PTR_iw_mwatt2dbm_0002604c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00026050)(__s);
  return pcVar1;
}



/* ===== iw_extract_event_stream @ 000113b0 size=12 ===== */

void iw_extract_event_stream(void)

{
  (*(code *)PTR_iw_extract_event_stream_00026054)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000113bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00026058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000113c8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002605c)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 000113d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00026060)(__haystack);
  return pcVar1;
}



/* ===== iw_ether_ntop @ 000113e0 size=12 ===== */

void iw_ether_ntop(void)

{
  (*(code *)PTR_iw_ether_ntop_00026064)();
  return;
}



/* ===== iw_float2freq @ 000113ec size=12 ===== */

void iw_float2freq(void)

{
  (*(code *)PTR_iw_float2freq_00026068)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 000113f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002606c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pow @ 00011404 size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001140c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  (*(code *)PTR_pow_00026070)(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),SUB84(__y,0));
  return __x;
}



/* ===== <EXTERNAL>::strncpy @ 00011410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00026074)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::log10 @ 0001141c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_log10_00026078)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::realloc @ 00011428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002607c)(__ptr);
  return pvVar1;
}



/* ===== iw_ether_aton @ 00011434 size=12 ===== */

void iw_ether_aton(void)

{
  (*(code *)PTR_iw_ether_aton_00026080)();
  return;
}



/* ===== <EXTERNAL>::strtok @ 00011440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_00026084)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 0001144c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00026088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002608c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011464 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00026090)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00026094)(__s);
  return pvVar1;
}



/* ===== iw_print_freq_value @ 0001147c size=12 ===== */

void iw_print_freq_value(void)

{
  (*(code *)PTR_iw_print_freq_value_00026098)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011488 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002609c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000260a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__h_errno_location @ 000114a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __h_errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___h_errno_location_000260a4)();
  return piVar1;
}



/* ===== <EXTERNAL>::gethostbyname @ 000114ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = (hostent *)(*(code *)PTR_gethostbyname_000260a8)(__name);
  return phVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000114b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000260ac)(__s);
  return iVar1;
}



/* ===== iw_process_scan @ 000114c4 size=12 ===== */

void iw_process_scan(void)

{
  (*(code *)PTR_iw_process_scan_000260b0)();
  return;
}



/* ===== <EXTERNAL>::strcspn @ 000114d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_000260b4)(__s);
  return sVar1;
}



/* ===== iw_in_inet @ 000114dc size=12 ===== */

void iw_in_inet(void)

{
  (*(code *)PTR_iw_in_inet_000260b8)();
  return;
}



/* ===== iw_init_event_stream @ 000114e8 size=12 ===== */

void iw_init_event_stream(void)

{
  (*(code *)PTR_iw_init_event_stream_000260bc)();
  return;
}



/* ===== iw_get_range_info @ 000114f4 size=12 ===== */

void iw_get_range_info(void)

{
  (*(code *)PTR_iw_get_range_info_000260c0)();
  return;
}



/* ===== iw_freq2float @ 00011500 size=12 ===== */

void iw_freq2float(void)

{
  (*(code *)PTR_iw_freq2float_000260c4)();
  return;
}



/* ===== <EXTERNAL>::getnetbyname @ 0001150c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

netent * getnetbyname(char *__name)

{
  netent *pnVar1;
  
  pnVar1 = (netent *)(*(code *)PTR_getnetbyname_000260c8)(__name);
  return pnVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011518 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000260cc)();
  return piVar1;
}



/* ===== iw_check_mac_addr_type @ 00011524 size=12 ===== */

void iw_check_mac_addr_type(void)

{
  (*(code *)PTR_iw_check_mac_addr_type_000260d0)();
  return;
}



/* ===== iw_get_kernel_we_version @ 00011530 size=12 ===== */

void iw_get_kernel_we_version(void)

{
  (*(code *)PTR_iw_get_kernel_we_version_000260d4)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001153c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000260d8)(__s);
  return sVar1;
}



/* ===== iw_mac_aton @ 00011548 size=12 ===== */

void iw_mac_aton(void)

{
  (*(code *)PTR_iw_mac_aton_000260dc)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00011554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000260e0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011560 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000260e4)(__s);
  return iVar1;
}



/* ===== iw_in_key @ 0001156c size=12 ===== */

void iw_in_key(void)

{
  (*(code *)PTR_iw_in_key_000260e8)();
  return;
}



/* ===== iw_check_if_addr_type @ 00011578 size=12 ===== */

void iw_check_if_addr_type(void)

{
  (*(code *)PTR_iw_check_if_addr_type_000260ec)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011584 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000260f0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011590 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000260f4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 0001159c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000260f8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000115a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000260fc)(__ptr);
  return;
}



/* ===== entry @ 000115b8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011604 + 0x115d0 == DAT_00011600 + 0x115c8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011608 + 0x115d8 + DAT_0001160c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011674 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000116e8 + 0x11690;
  if (*(char *)(DAT_000116e4 + 0x11684) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000116ec) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000116f0 + 0x116b0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000116f4) != 0) {
    __deregister_frame_info(DAT_000116f8 + 0x116d0);
  }
  *(undefined1 *)(DAT_000116fc + 0x116e0) = 1;
  return;
}



/* ===== _INIT_0 @ 00011700 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011738 + 0x11710 + DAT_0001173c) != 0) {
    __register_frame_info(DAT_00011744 + 0x11730,DAT_00011740 + 0x1172c);
  }
  if (((DAT_00011668 + 0x11628) - (DAT_00011664 + 0x11620) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001166c + 0x11630 + DAT_00011670);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011748 @ 00011748 size=44 ===== */

void FUN_00011748(int param_1,char *param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = strncpy(param_4,param_2,0x10);
  ioctl(param_1,param_3,pcVar1);
  return;
}



/* ===== FUN_00011774 @ 00011774 size=236 ===== */

undefined4 FUN_00011774(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *__format;
  undefined4 *puVar3;
  undefined1 auStack_4d0 [16];
  void *local_4c0;
  uint local_4bc;
  undefined1 auStack_4b0 [280];
  byte local_398;
  byte local_397;
  
  iVar1 = DAT_00011860;
  iVar2 = FUN_00011748(param_1,param_2,0x8b01,auStack_4d0);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  local_4c0 = memset(auStack_4b0,0,0x498);
  local_4bc = 0x498;
  iVar2 = FUN_00011748(param_1,param_2,0x8b0b,auStack_4d0);
  if (iVar2 < 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x117a4 + DAT_00011864);
    __format = (char *)(DAT_00011868 + 0x11800);
  }
  else {
    if (299 < (local_4bc & 0xffff)) {
      printf((char *)(DAT_0001186c + 0x11828),param_2,(uint)local_397);
      printf((char *)(DAT_00011870 + 0x11838),(uint)local_398);
      return 0;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x117a4 + DAT_00011864);
    __format = (char *)((int)&DAT_00011860 + DAT_00011874);
  }
  fprintf((FILE *)*puVar3,__format,param_2);
  return 0;
}



/* ===== iw_sockets_open @ 00011878 size=60 ===== */

int iw_sockets_open(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(DAT_000118b4 + 0x1188c);
  do {
    iVar1 = socket(*piVar3,2,0);
    if (-1 < iVar1) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 4);
  return -1;
}



/* ===== iw_enum_devices @ 000118b8 size=492 ===== */

void iw_enum_devices(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  FILE *pFVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  size_t __n;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint local_43c;
  byte *local_438;
  byte local_428 [1028];
  
  pFVar2 = fopen((char *)(DAT_00011aa4 + 0x118dc),(char *)(DAT_00011aa8 + 0x118e0));
  iVar9 = DAT_00011aac + 0x118f8;
  if (pFVar2 == (FILE *)0x0) {
    local_43c = 0x400;
    local_438 = local_428;
    iVar4 = ioctl(param_1,0x8912,&local_43c);
    if (iVar4 < 0) {
      pFVar2 = (FILE *)**(undefined4 **)(iVar9 + DAT_00011ab8);
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      fprintf(pFVar2,(char *)(DAT_00011abc + 0x11a74),pcVar6);
    }
    else {
      pbVar7 = local_438 + (local_43c & 0xffffffe0);
      for (pbVar8 = local_438; pbVar8 != pbVar7; pbVar8 = pbVar8 + 0x20) {
        (*param_2)(param_1,pbVar8,param_3,param_4);
      }
    }
  }
  else {
    fgets((char *)local_428,0x400,pFVar2);
    fgets((char *)local_428,0x400,pFVar2);
    pcVar6 = (char *)(DAT_00011ab0 + 0x11928);
    while (pcVar3 = fgets((char *)local_428,0x400,pFVar2), pcVar3 != (char *)0x0) {
      if ((local_428[0] != 0) && (local_428[1] != '\0')) {
        pbVar8 = local_428;
        do {
          pbVar7 = pbVar8;
          uVar1 = *(ushort *)(**(int **)(iVar9 + DAT_00011ab4) + (uint)*pbVar7 * 2);
          pbVar8 = pbVar7 + 1;
        } while ((uVar1 & 0x20) != 0);
        pcVar3 = strrchr((char *)pbVar7,0x3a);
        if ((pcVar3 == (char *)0x0) || (__n = (int)pcVar3 - (int)pbVar7, 0x10 < (int)__n)) {
          fputs(pcVar6,(FILE *)**(undefined4 **)(iVar9 + DAT_00011ab8));
        }
        else {
          memcpy(&local_43c,pbVar7,__n);
          *(byte *)((int)&local_43c + __n) = (byte)uVar1 & 0x20;
          (*param_2)(param_1,&local_43c,param_3,param_4);
        }
      }
    }
    fclose(pFVar2);
  }
  return;
}



/* ===== iw_get_kernel_we_version @ 00011ac0 size=284 ===== */

undefined4 iw_get_kernel_we_version(void)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  int iVar3;
  undefined4 local_414;
  char acStack_410 [1024];
  
  iVar1 = DAT_00011be4;
  __stream = fopen((char *)(DAT_00011be0 + 0x11ae0),(char *)(DAT_00011bdc + 0x11adc));
  if (__stream == (FILE *)0x0) {
    fputs((char *)(DAT_00011bec + 0x11b04),(FILE *)**(undefined4 **)(iVar1 + 0x11aec + DAT_00011be8)
         );
LAB_00011b08:
    local_414 = 0xffffffff;
  }
  else {
    fgets(acStack_410,0x400,__stream);
    pcVar2 = strstr(acStack_410,(char *)(DAT_00011bf0 + 0x11b3c));
    if (pcVar2 == (char *)0x0) {
      pcVar2 = strstr(acStack_410,(char *)(DAT_00011bf4 + 0x11b54));
      if (pcVar2 == (char *)0x0) {
        local_414 = 0xb;
      }
      else {
        local_414 = 0xf;
      }
    }
    else {
      fgets(acStack_410,0x400,__stream);
      pcVar2 = strrchr(acStack_410,0x7c);
      if ((pcVar2 == (char *)0x0) ||
         (iVar3 = sscanf(pcVar2 + 1,(char *)(DAT_00011bfc + 0x11bd0),&local_414), iVar3 != 1)) {
        fputs((char *)(DAT_00011bf8 + 0x11bac),
              (FILE *)**(undefined4 **)(iVar1 + 0x11aec + DAT_00011be8));
        fclose(__stream);
        goto LAB_00011b08;
      }
    }
    fclose(__stream);
  }
  return local_414;
}



/* ===== iw_print_version_info @ 00011c00 size=152 ===== */

undefined4 iw_print_version_info(int param_1)

{
  int __fd;
  int iVar1;
  
  __fd = iw_sockets_open();
  if (__fd < 0) {
    perror((char *)(DAT_00011c98 + 0x11c20));
    return 0xffffffff;
  }
  if (param_1 != 0) {
    printf((char *)(DAT_00011c9c + 0x11c44),param_1,0x1d);
  }
  printf((char *)(DAT_00011ca0 + 0x11c54),0x16);
  iVar1 = iw_get_kernel_we_version();
  if (0xf < iVar1) {
    printf((char *)(DAT_00011ca4 + 0x11c70),iVar1);
  }
  iw_enum_devices(__fd,DAT_00011ca8 + 0x11c88,0);
  close(__fd);
  return 0;
}



/* ===== iw_get_range_info @ 00011cac size=664 ===== */

undefined4 iw_get_range_info(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_4d8 [16];
  undefined4 *local_4c8;
  uint local_4c4;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined1 auStack_4ac [132];
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 local_420 [9];
  undefined4 local_3fc [15];
  undefined4 local_3c0 [8];
  byte local_3a0;
  undefined4 local_388 [218];
  
  memset(&local_4b8,0,0x498);
  local_4c4 = 0x498;
  local_4c8 = &local_4b8;
  iVar1 = FUN_00011748(param_1,param_2,0x8b0b,auStack_4d8);
  iVar7 = DAT_00011f44 + 0x11d0c;
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  if ((local_4c4 & 0xffff) < 300) {
    local_3a0 = 9;
  }
  else if (0xf < local_3a0) {
    memcpy(param_3,&local_4b8,0x24c);
    goto LAB_00011d44;
  }
  memset(param_3,0,0x24c);
  *param_3 = local_4b8;
  param_3[1] = uStack_4b4;
  param_3[2] = local_4b0;
  memcpy(param_3 + 0x4c,auStack_4ac,0x84);
  puVar9 = local_420;
  param_3[10] = local_428;
  param_3[0xb] = uStack_424;
  puVar5 = param_3 + 0xd;
  do {
    puVar4 = puVar5 + 2;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    puVar9 = puVar9 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar4;
  } while (puVar9 != local_420 + 8);
  puVar8 = local_3fc;
  *puVar4 = *puVar9;
  puVar5 = param_3 + 0x2e;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    puVar8 = puVar8 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
  } while (puVar8 != local_3fc + 0xe);
  puVar9 = local_3c0;
  *(undefined4 *)((int)param_3 + 0xf2) = local_3fc[0xe];
  puVar5 = param_3 + 0x3e;
  do {
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    puVar9 = puVar9 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
  } while (puVar9 != local_388);
  param_3[0xc] = local_388[0];
LAB_00011d44:
  piVar6 = *(int **)(iVar7 + DAT_00011f48);
  if (*piVar6 == 0) {
    if (*(byte *)(param_3 + 0x46) < 0xb) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00011f4c);
      fprintf((FILE *)*puVar5,(char *)(DAT_00011f50 + 0x11d7c),param_2);
      fputs((char *)(DAT_00011f54 + 0x11d90),(FILE *)*puVar5);
      fputs((char *)(DAT_00011f58 + 0x11da0),(FILE *)*puVar5);
    }
    if (0x16 < *(byte *)(param_3 + 0x46)) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00011f4c);
      fprintf((FILE *)*puVar5,(char *)(DAT_00011f5c + 0x11dc0),param_2);
      fprintf((FILE *)*puVar5,(char *)(DAT_00011f60 + 0x11ddc),0x16);
      fputs((char *)(DAT_00011f64 + 0x11dec),(FILE *)*puVar5);
    }
    if ((10 < *(byte *)(param_3 + 0x46)) &&
       (*(byte *)(param_3 + 0x46) < *(byte *)((int)param_3 + 0x119))) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00011f4c);
      fprintf((FILE *)*puVar5,(char *)(DAT_00011f68 + 0x11e18),param_2);
      fprintf((FILE *)*puVar5,(char *)(DAT_00011f6c + 0x11e30),(uint)*(byte *)(param_3 + 0x46));
      fputs((char *)(DAT_00011f70 + 0x11e44),(FILE *)*puVar5);
    }
  }
  *piVar6 = 1;
  return 0;
}



/* ===== iw_get_priv_info @ 00011f74 size=244 ===== */

uint iw_get_priv_info(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *__ptr;
  int iVar6;
  undefined1 auStack_48 [16];
  void *local_38;
  ushort local_34;
  undefined2 local_32;
  
  iVar6 = DAT_00012068 + 0x11fa0;
  uVar5 = 0x10;
  __ptr = (void *)0x0;
  do {
    pvVar1 = realloc(__ptr,uVar5 * 0x18);
    if (pvVar1 == (void *)0x0) {
      fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001206c),(char *)(DAT_00012070 + 0x11fcc),
              DAT_00012074 + 0x11fe4);
      if (__ptr == (void *)0x0) goto LAB_00012058;
      break;
    }
    local_34 = (ushort)uVar5;
    local_32 = 0;
    local_38 = pvVar1;
    iVar2 = FUN_00011748(param_1,param_2,0x8b0d,auStack_48);
    if (-1 < iVar2) {
      *param_3 = pvVar1;
      return (uint)local_34;
    }
    piVar3 = __errno_location();
    __ptr = pvVar1;
    if (*piVar3 != 7) break;
    uVar4 = (uint)local_34;
    if ((int)uVar4 <= (int)uVar5) {
      uVar4 = uVar5 << 1;
    }
    uVar5 = uVar4;
  } while ((int)uVar4 < 1000);
  free(__ptr);
LAB_00012058:
  *param_3 = 0;
  return 0xffffffff;
}



/* ===== iw_protocol_compare @ 00012078 size=232 ===== */

bool iw_protocol_compare(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  uint __c;
  int iVar6;
  bool bVar7;
  
  iVar1 = strncmp(param_1,param_2,0x10);
  if (iVar1 == 0) {
    bVar7 = true;
  }
  else {
    pcVar5 = (char *)(DAT_00012160 + 0x120ac);
    iVar1 = strncmp(param_1,pcVar5,0xb);
    if (iVar1 == 0) {
      iVar1 = strncmp(param_2,pcVar5,0xb);
      bVar7 = false;
      if (iVar1 == 0) {
        iVar6 = DAT_00012164 + 0x120ec;
        bVar3 = 0;
        bVar4 = 0;
        iVar1 = 0;
        do {
          __c = (uint)*(byte *)(iVar6 + iVar1);
          iVar1 = iVar1 + 1;
          pcVar5 = strchr(param_1 + 0xb,__c);
          if (pcVar5 != (char *)0x0) {
            bVar4 = 1;
          }
          pcVar5 = strchr(param_2 + 0xb,__c);
          if (pcVar5 != (char *)0x0) {
            bVar3 = 1;
          }
        } while (iVar1 != 3);
        bVar7 = (bool)(bVar4 & bVar3);
        if (bVar7 == false) {
          pcVar5 = strchr(param_1 + 0xb,0x61);
          pcVar2 = strchr(param_2 + 0xb,0x61);
          bVar7 = pcVar5 != (char *)0x0;
          if (pcVar2 == (char *)0x0) {
            bVar7 = false;
          }
        }
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



/* ===== iw_float2freq @ 00012168 size=128 ===== */

void iw_float2freq(int *param_1)

{
  short sVar1;
  uint in_fpscr;
  double in_d0;
  double dVar2;
  
  dVar2 = log10(in_d0);
  dVar2 = floor(dVar2);
  sVar1 = (short)(longlong)dVar2;
  *(short *)(param_1 + 1) = sVar1;
  if (sVar1 < 9) {
    sVar1 = 0;
    *param_1 = (int)(longlong)in_d0;
  }
  else {
    dVar2 = (double)VectorSignedToFloat(sVar1 + -6,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = pow(10.0,dVar2);
    dVar2 = floor(in_d0 / dVar2);
    *param_1 = (int)(longlong)dVar2 * 100;
    sVar1 = (short)param_1[1] + -8;
  }
  *(short *)(param_1 + 1) = sVar1;
  return;
}



/* ===== iw_set_basic_config @ 000121e8 size=788 ===== */

undefined4 iw_set_basic_config(undefined4 param_1,char *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  FILE *pFVar7;
  int iVar8;
  uint uVar9;
  char acStack_48 [16];
  char *local_38;
  uint local_34;
  
  iVar2 = FUN_00011748(param_1,param_2,0x8b01,acStack_48);
  iVar8 = DAT_000124fc + 0x12218;
  if (iVar2 < 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_3 + 0xac) != 0) {
    strncpy(acStack_48,param_2,0x10);
    local_38 = *(char **)(param_3 + 0xb0);
    iVar2 = FUN_00011748(param_1,param_2,0x8b06,acStack_48);
    if (iVar2 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar7,(char *)(DAT_00012518 + 0x124ec),pcVar4);
      uVar6 = 0xffffffff;
      goto LAB_00012230;
    }
  }
  uVar6 = 0;
LAB_00012230:
  if (*(int *)(param_3 + 0x20) != 0) {
    iw_float2freq((int)*(undefined8 *)(param_3 + 0x28),&local_38);
    iVar2 = FUN_00011748(param_1,param_2,0x8b04,acStack_48);
    if (iVar2 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar7,(char *)(DAT_00012504 + 0x12288),pcVar4);
      uVar6 = 0xffffffff;
    }
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    uVar9 = *(uint *)(param_3 + 0x7c);
    if ((uVar9 & 0xff) != 0) {
      local_38 = (char *)0x0;
      local_34 = (uint)(ushort)((ushort)(uVar9 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00011748(param_1,param_2,0x8b2a,acStack_48);
      if (iVar2 < 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
        piVar3 = __errno_location();
        iVar2 = *piVar3;
        pcVar4 = strerror(iVar2);
        uVar6 = 0xffffffff;
        fprintf(pFVar7,(char *)(DAT_00012508 + 0x1230c),iVar2,pcVar4);
      }
    }
    local_38 = (char *)(param_3 + 0x38);
    local_34 = CONCAT22((short)uVar9,(short)*(undefined4 *)(param_3 + 0x78)) & 0xff00ffff;
    if ((uVar9 & 0x800) != 0) {
      local_38 = (char *)0x0;
    }
    iVar2 = FUN_00011748(param_1,param_2,0x8b2a,acStack_48);
    if (iVar2 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      pcVar4 = strerror(iVar2);
      uVar6 = 0xffffffff;
      fprintf(pFVar7,(char *)(DAT_0001250c + 0x12384),iVar2,pcVar4);
    }
  }
  if (*(int *)(param_3 + 0x14) != 0) {
    local_38 = *(char **)(param_3 + 0x18);
    local_34 = CONCAT31((int3)((uint)*(undefined4 *)(param_3 + 0x1c) >> 8),1);
    iVar2 = FUN_00011748(param_1,param_2,0x8b02,acStack_48);
    if (iVar2 < 0) {
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar7,(char *)(DAT_00012510 + 0x123f4),pcVar4);
      uVar6 = 0xffffffff;
    }
  }
  if (*(int *)(param_3 + 0x80) != 0) {
    iVar2 = iw_get_kernel_we_version();
    local_38 = (char *)(param_3 + 0x88);
    sVar5 = strlen(local_38);
    sVar1 = (short)sVar5;
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    local_34 = CONCAT22((short)*(undefined4 *)(param_3 + 0x84),sVar1);
    iVar2 = FUN_00011748(param_1,param_2,0x8b1a,acStack_48);
    if (iVar2 < 0) {
      uVar6 = 0xffffffff;
      pFVar7 = (FILE *)**(undefined4 **)(iVar8 + DAT_00012500);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar7,(char *)(DAT_00012514 + 0x12480),pcVar4);
    }
  }
  return uVar6;
}



/* ===== iw_freq2float @ 0001251c size=48 ===== */

undefined4 iw_freq2float(undefined4 *param_1)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  dVar1 = (double)VectorSignedToFloat((int)*(short *)(param_1 + 1),(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = pow(10.0,dVar1);
  return SUB84(dVar2 * dVar1,0);
}



/* ===== iw_get_basic_config @ 0001254c size=396 ===== */

undefined4 iw_get_basic_config(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  undefined1 auStack_38 [16];
  char *local_28;
  undefined4 local_24;
  
  memset(param_3,0,0xb8);
  iVar1 = FUN_00011748(param_1,param_2,0x8b01,auStack_38);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    strncpy(param_3,(char *)&local_28,0x10);
    param_3[0x10] = '\0';
    iVar1 = FUN_00011748(param_1,param_2,0x8b03,auStack_38);
    if (-1 < iVar1) {
      param_3[0x14] = '\x01';
      param_3[0x15] = '\0';
      param_3[0x16] = '\0';
      param_3[0x17] = '\0';
      *(char **)(param_3 + 0x18) = local_28;
      *(uint *)(param_3 + 0x1c) = local_24;
    }
    iVar1 = FUN_00011748(param_1,param_2,0x8b05,auStack_38);
    if (-1 < iVar1) {
      param_3[0x20] = '\x01';
      param_3[0x21] = '\0';
      param_3[0x22] = '\0';
      param_3[0x23] = '\0';
      uVar2 = iw_freq2float(&local_28);
      *(uint *)(param_3 + 0x30) = (uint)local_24._3_1_;
      *(ulonglong *)(param_3 + 0x28) = CONCAT44(extraout_s1,uVar2);
    }
    local_28 = param_3 + 0x38;
    local_24 = 0x40;
    iVar1 = FUN_00011748(param_1,param_2,0x8b2b,auStack_38);
    if (-1 < iVar1) {
      param_3[0x34] = '\x01';
      param_3[0x35] = '\0';
      param_3[0x36] = '\0';
      param_3[0x37] = '\0';
      *(uint *)(param_3 + 0x78) = local_24 & 0xffff;
      *(uint *)(param_3 + 0x7c) = local_24 >> 0x10;
    }
    local_28 = param_3 + 0x88;
    local_24 = 0x21;
    iVar1 = FUN_00011748(param_1,param_2,0x8b1b,auStack_38);
    if (-1 < iVar1) {
      param_3[0x80] = '\x01';
      param_3[0x81] = '\0';
      param_3[0x82] = '\0';
      param_3[0x83] = '\0';
      *(uint *)(param_3 + 0x84) = local_24 >> 0x10;
    }
    iVar1 = FUN_00011748(param_1,param_2,0x8b07,auStack_38);
    if (-1 < iVar1) {
      param_3[0xac] = '\x01';
      param_3[0xad] = '\0';
      param_3[0xae] = '\0';
      param_3[0xaf] = '\0';
      if ((char *)0x6 < local_28) {
        local_28 = (char *)0x7;
      }
      *(char **)(param_3 + 0xb0) = local_28;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== iw_print_freq_value @ 000126d8 size=152 ===== */

void iw_print_freq_value(char *param_1,size_t param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  uint uVar3;
  double in_d0;
  double dVar4;
  
  if (DAT_00012770 <= in_d0) {
    uVar3 = in_fpscr & 0xfffffff | (uint)(in_d0 < DAT_00012778) << 0x1f;
    if (SUB41(uVar3 >> 0x1f,0) == (NAN(in_d0) || NAN(DAT_00012778))) {
      uVar1 = 0x47;
      uVar2 = DAT_00012794;
    }
    else {
      uVar3 = in_fpscr & 0xfffffff | (uint)(in_d0 < DAT_00012780) << 0x1f;
      if (SUB41(uVar3 >> 0x1f,0) == (NAN(in_d0) || NAN(DAT_00012780))) {
        uVar1 = 0x4d;
        uVar2 = DAT_0001278c;
      }
      else {
        uVar2 = 1000;
        uVar1 = 0x6b;
      }
    }
    dVar4 = (double)VectorSignedToFloat(uVar2,(byte)(uVar3 >> 0x16) & 3);
    snprintf(param_1,param_2,(char *)(DAT_00012790 + 0x12758),uVar2,in_d0 / dVar4,uVar1,param_4);
  }
  else {
    snprintf(param_1,param_2,(char *)(DAT_00012788 + 0x126fc));
  }
  return;
}



/* ===== iw_print_freq @ 00012798 size=172 ===== */

void iw_print_freq(char *param_1,size_t param_2,int param_3,uint param_4)

{
  char *__format;
  undefined4 uVar1;
  double in_d0;
  undefined1 auStack_30 [16];
  
  if ((param_4 & 1) == 0) {
    uVar1 = 0x3a;
  }
  else {
    uVar1 = 0x3d;
  }
  iw_print_freq_value(auStack_30,0x10);
  if (DAT_00012848 <= in_d0) {
    if (-1 < param_3) {
      snprintf(param_1,param_2,(char *)(DAT_00012854 + 0x12820),uVar1,auStack_30,param_3);
      return;
    }
    __format = &UNK_00012844 + DAT_00012858;
  }
  else {
    __format = (char *)(DAT_00012850 + 0x127f4);
  }
  snprintf(param_1,param_2,__format,uVar1,auStack_30);
  return;
}



/* ===== iw_freq_to_channel @ 0001285c size=112 ===== */

uint iw_freq_to_channel(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_d0;
  undefined4 extraout_s1;
  
  if (in_d0 < DAT_000128d0) {
    return 0xffffffff;
  }
  iVar1 = 0;
  iVar2 = param_1 + 0x134;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 0x132) <= iVar1) {
      return 0xfffffffe;
    }
    uVar3 = iw_freq2float(iVar2);
    if (in_d0 == (double)CONCAT44(extraout_s1,uVar3)) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 8;
  }
  return (uint)*(byte *)(param_1 + iVar1 * 8 + 0x13a);
}



/* ===== iw_channel_to_freq @ 000128d8 size=160 ===== */

uint iw_channel_to_freq(uint param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_s1;
  
  piVar4 = (int *)(param_3 + 0x134);
  bVar2 = false;
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_3 + 0x132); iVar1 = iVar1 + 1) {
    if ((short)piVar4[1] == 0) {
      if (1000 < *piVar4) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    piVar4 = piVar4 + 2;
  }
  if (bVar2) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_3 + 0x132); iVar1 = iVar1 + 1) {
      if (*(byte *)(param_3 + 0x13a + iVar1 * 8) == param_1) {
        uVar5 = iw_freq2float(param_3 + iVar1 * 8 + 0x134);
        *param_2 = CONCAT44(extraout_s1,uVar5);
        return param_1;
      }
    }
    uVar3 = 0xfffffffe;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== iw_print_bitrate @ 00012978 size=100 ===== */

void iw_print_bitrate(char *param_1,size_t param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  if (DAT_000129dc < param_3) {
    uVar1 = 0x47;
    iVar2 = DAT_000129e8;
  }
  else if (DAT_000129e0 < param_3) {
    uVar1 = 0x4d;
    iVar2 = DAT_000129e0 + 1;
  }
  else {
    uVar1 = 0x6b;
    iVar2 = 1000;
  }
  dVar3 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  snprintf(param_1,param_2,(char *)(DAT_000129e4 + 0x129c0),iVar2,dVar4 / dVar3,uVar1,param_4);
  return;
}



/* ===== iw_dbm2mwatt @ 000129ec size=40 ===== */

undefined4 iw_dbm2mwatt(undefined4 param_1)

{
  uint in_fpscr;
  double dVar1;
  
  dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = pow(10.0,dVar1 / 10.0);
  dVar1 = floor(dVar1);
  return (int)(longlong)dVar1;
}



/* ===== iw_mwatt2dbm @ 00012a14 size=40 ===== */

undefined4 iw_mwatt2dbm(undefined4 param_1)

{
  uint in_fpscr;
  double dVar1;
  
  dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = log10(dVar1);
  dVar1 = ceil(dVar1 * 10.0);
  return (int)(longlong)dVar1;
}



/* ===== iw_print_txpower @ 00012a3c size=108 ===== */

void iw_print_txpower(char *param_1,size_t param_2,undefined4 *param_3)

{
  char *__format;
  undefined4 uVar1;
  
  if (*(char *)((int)param_3 + 5) != '\0') {
    snprintf(param_1,param_2,(char *)(DAT_00012aa8 + 0x12a54));
    return;
  }
  uVar1 = *param_3;
  if ((*(ushort *)((int)param_3 + 6) & 2) == 0) {
    if ((*(ushort *)((int)param_3 + 6) & 1) != 0) {
      uVar1 = iw_mwatt2dbm(uVar1);
    }
    __format = (char *)(DAT_00012ab0 + 0x12aa4);
  }
  else {
    __format = (char *)(DAT_00012aac + 0x12a70);
  }
  snprintf(param_1,param_2,__format,uVar1);
  return;
}



/* ===== iw_get_stats @ 00012ab4 size=652 ===== */

int iw_get_stats(undefined4 param_1,char *param_2,undefined2 *param_3,int param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  FILE *__stream;
  size_t __n;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte *__s1;
  char *__delim;
  int iVar7;
  undefined1 local_12c [4];
  byte abStack_128 [16];
  undefined2 *local_118;
  undefined4 local_114;
  
  iVar7 = DAT_00012d40 + 0x12ad4;
  if ((param_5 == 0) || (*(byte *)(param_4 + 0x118) < 0xc)) {
    __stream = fopen((char *)(DAT_00012d4c + 0x12b3c),(char *)(DAT_00012d48 + 0x12b38));
    if (__stream == (FILE *)0x0) {
LAB_00012b48:
      iVar7 = -1;
    }
    else {
      do {
        pcVar3 = fgets((char *)abStack_128,0xff,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          goto LAB_00012b48;
        }
        pbVar2 = abStack_128;
        do {
          __s1 = pbVar2;
          if (*__s1 == 0) break;
          pbVar2 = __s1 + 1;
        } while ((*(ushort *)(**(int **)(iVar7 + DAT_00012d50) + (uint)*__s1 * 2) & 0x20) != 0);
        __n = strlen(param_2);
        iVar4 = strncmp((char *)__s1,param_2,__n);
        iVar1 = DAT_00012d54;
      } while ((iVar4 != 0) || (__s1[__n] != 0x3a));
      pcVar3 = strchr((char *)__s1,0x3a);
      pcVar3 = strtok(pcVar3 + 1,(char *)(iVar1 + 0x12be0));
      sscanf(pcVar3,(char *)(DAT_00012d58 + 0x12bf8),local_12c);
      *param_3 = local_12c._0_2_;
      pcVar3 = strtok((char *)0x0,(char *)(iVar1 + 0x12be0));
      pcVar5 = strchr(pcVar3,0x2e);
      pcVar6 = (char *)(DAT_00012d5c + 0x12c28);
      if (pcVar5 != (char *)0x0) {
        *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | 1;
      }
      sscanf(pcVar3,pcVar6,local_12c);
      iVar7 = DAT_00012d60;
      *(undefined1 *)(param_3 + 1) = local_12c[0];
      pcVar3 = strtok((char *)0x0,(char *)(iVar7 + 0x12c54));
      pcVar5 = strchr(pcVar3,0x2e);
      iVar7 = DAT_00012d68;
      pcVar6 = (char *)(DAT_00012d64 + 0x12c70);
      if (pcVar5 != (char *)0x0) {
        *(byte *)((int)param_3 + 5) = *(byte *)((int)param_3 + 5) | 2;
      }
      pcVar5 = (char *)(iVar7 + 0x12c84);
      sscanf(pcVar3,pcVar6,local_12c);
      iVar7 = DAT_00012d6c;
      *(undefined1 *)((int)param_3 + 3) = local_12c[0];
      pcVar3 = strtok((char *)0x0,(char *)(iVar7 + 0x12ca4));
      pcVar6 = strchr(pcVar3,0x2e);
      __delim = (char *)(DAT_00012d70 + 0x12cc4);
      if (pcVar6 != (char *)0x0) {
        *(char *)((int)param_3 + 5) = *(char *)((int)param_3 + 5) + '\x04';
      }
      sscanf(pcVar3,pcVar5,local_12c);
      *(undefined1 *)(param_3 + 2) = local_12c[0];
      pcVar3 = strtok((char *)0x0,__delim);
      sscanf(pcVar3,pcVar5,param_3 + 4);
      pcVar3 = strtok((char *)0x0,__delim);
      sscanf(pcVar3,pcVar5,param_3 + 6);
      pcVar3 = strtok((char *)0x0,__delim);
      sscanf(pcVar3,pcVar5,param_3 + 0xc);
      fclose(__stream);
      iVar7 = 0;
    }
  }
  else {
    local_114 = DAT_00012d44;
    local_118 = param_3;
    pcVar3 = strncpy((char *)abStack_128,param_2,0x10);
    iVar7 = FUN_00011748(param_1,param_2,0x8b0f,pcVar3);
    iVar7 = iVar7 >> 0x1f;
  }
  return iVar7;
}



/* ===== iw_print_stats @ 00012d74 size=580 ===== */

void iw_print_stats(char *param_1,size_t param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *__format;
  undefined4 uVar4;
  uint in_fpscr;
  double dVar5;
  size_t sVar7;
  ulonglong uVar6;
  byte *pbVar8;
  
  if ((param_5 == 0) || (bVar1 = param_3[3], param_3[1] == 0 && (bVar1 & 0x88) == 0)) {
    uVar6 = (ulonglong)CONCAT14(param_3[2],(uint)param_3[1]);
    uVar3 = (uint)*param_3;
    __format = (char *)((int)&DAT_00012fb8 + DAT_00012fdc);
LAB_00012f90:
    snprintf(param_1,param_2,__format,uVar3,uVar6,param_3);
  }
  else {
    pbVar8 = param_3;
    sVar7 = param_2;
    if ((bVar1 & 0x10) == 0) {
      sVar7 = (size_t)*(byte *)(param_4 + 0x2c);
      if ((bVar1 & 1) == 0) {
        uVar4 = 0x3a;
      }
      else {
        uVar4 = 0x3d;
      }
      iVar2 = snprintf(param_1,param_2,(char *)(DAT_00012fc0 + 0x12dc8),uVar4,(uint)*param_3,sVar7,
                       param_3);
      param_1 = param_1 + iVar2;
      param_2 = param_2 - iVar2;
    }
    bVar1 = param_3[3];
    if ((bVar1 & 0x80) != 0) {
      if ((bVar1 & 0x20) == 0) {
        if ((bVar1 & 2) == 0) {
          uVar4 = 0x3a;
        }
        else {
          uVar4 = 0x3d;
        }
        dVar5 = (double)VectorSignedToFloat((uint)param_3[1],(byte)(in_fpscr >> 0x16) & 3);
        iVar2 = snprintf(param_1,param_2,(char *)(DAT_00012fc4 + 0x12e28),uVar4,
                         DAT_00012fb8 + dVar5 * 0.5,pbVar8);
        param_1 = param_1 + iVar2;
        param_2 = param_2 - iVar2;
      }
      if ((param_3[3] & 0x40) != 0) {
        return;
      }
      if ((param_3[3] & 4) == 0) {
        uVar4 = 0x3a;
      }
      else {
        uVar4 = 0x3d;
      }
      dVar5 = (double)VectorSignedToFloat((uint)param_3[2],(byte)(in_fpscr >> 0x16) & 3);
      snprintf(param_1,param_2,(char *)(DAT_00012fc8 + 0x12e70),uVar4,DAT_00012fb8 + dVar5 * 0.5,
               pbVar8);
      return;
    }
    if ((bVar1 & 8) == 0) {
      if ((uint)param_3[1] <= (uint)*(byte *)(param_4 + 0x2d)) {
        if ((bVar1 & 0x20) == 0) {
          if ((bVar1 & 2) == 0) {
            uVar4 = 0x3a;
          }
          else {
            uVar4 = 0x3d;
          }
          iVar2 = snprintf(param_1,param_2,(char *)(DAT_00012fd4 + 0x12f58),uVar4,(uint)param_3[1],
                           (uint)*(byte *)(param_4 + 0x2d),pbVar8);
          param_1 = param_1 + iVar2;
          param_2 = param_2 - iVar2;
        }
        if ((param_3[3] & 0x40) != 0) {
          return;
        }
        __format = (char *)(DAT_00012fd8 + 0x12f84);
        uVar6 = (ulonglong)CONCAT14(*(undefined1 *)(param_4 + 0x2e),(uint)param_3[2]);
        if ((param_3[3] & 4) == 0) {
          uVar3 = 0x3a;
          param_3 = pbVar8;
        }
        else {
          uVar3 = 0x3d;
          param_3 = pbVar8;
        }
        goto LAB_00012f90;
      }
    }
    if ((bVar1 & 0x20) == 0) {
      uVar3 = (uint)param_3[1];
      if (0x3f < uVar3) {
        uVar3 = uVar3 - 0x100;
      }
      if ((bVar1 & 2) == 0) {
        uVar4 = 0x3a;
      }
      else {
        uVar4 = 0x3d;
      }
      iVar2 = snprintf(param_1,param_2,(char *)(DAT_00012fcc + 0x12edc),uVar4,uVar3,sVar7,pbVar8);
      param_1 = param_1 + iVar2;
      param_2 = param_2 - iVar2;
    }
    if ((param_3[3] & 0x40) == 0) {
      if ((param_3[3] & 4) == 0) {
        uVar4 = 0x3a;
      }
      else {
        uVar4 = 0x3d;
      }
      snprintf(param_1,param_2,(char *)(DAT_00012fd0 + 0x12f20),uVar4);
      return;
    }
  }
  return;
}



/* ===== iw_print_key @ 00012fe0 size=280 ===== */

void iw_print_key(char *param_1,size_t param_2,byte *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *__dest;
  uint uVar5;
  
  iVar3 = DAT_00013110;
  iVar2 = DAT_00013108;
  iVar1 = DAT_00013104;
  if ((int)param_2 < (int)(param_4 * 3)) {
    snprintf(param_1,param_2,(char *)(DAT_000130f8 + 0x13004));
    return;
  }
  if ((param_5 & 0x800) != 0) {
    if ((int)param_4 < 1) {
      strcpy(param_1,(char *)(DAT_000130fc + 0x13030));
      return;
    }
    strcpy(param_1,(char *)(DAT_00013100 + 0x13048));
    for (uVar5 = 1; pcVar4 = param_1 + 2, uVar5 != param_4; uVar5 = uVar5 + 1) {
      if ((uVar5 & 1) == 0) {
        strcpy(pcVar4,(char *)(iVar1 + 0x13054));
        pcVar4 = param_1 + 3;
      }
      strcpy(pcVar4,(char *)(iVar2 + 0x13058));
      param_1 = pcVar4;
    }
    return;
  }
  sprintf(param_1,(char *)(DAT_0001310c + 0x130a8),(uint)*param_3);
  pcVar4 = (char *)(DAT_00013114 + 0x130bc);
  for (uVar5 = 1; __dest = param_1 + 2, (int)uVar5 < (int)param_4; uVar5 = uVar5 + 1) {
    if ((uVar5 & 1) == 0) {
      strcpy(__dest,(char *)(iVar3 + 0x130b8));
      __dest = param_1 + 3;
    }
    sprintf(__dest,pcVar4,(uint)param_3[uVar5]);
    param_1 = __dest;
  }
  return;
}



/* ===== iw_in_key @ 00013118 size=344 ===== */

size_t iw_in_key(char *param_1,void *param_2)

{
  int iVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char *__reject;
  char *__format;
  uint local_70;
  uint local_6c;
  char local_68 [68];
  
  iVar2 = DAT_00013274;
  iVar1 = strncmp(param_1,(char *)(DAT_00013270 + 0x13138),2);
  if (iVar1 == 0) {
    param_1 = param_1 + 2;
    __n = strlen(param_1);
    if (0x3f < __n) {
      __n = 0x40;
    }
  }
  else {
    iVar1 = strncmp(param_1,(char *)(DAT_00013278 + 0x13188),2);
    if (iVar1 == 0) {
      fputs((char *)(DAT_00013280 + 0x131a4),
            (FILE *)**(undefined4 **)(iVar2 + 0x13144 + DAT_0001327c));
      return 0xffffffff;
    }
    __n = 0;
    sVar4 = 0xffffffff;
    __reject = (char *)(DAT_00013284 + 0x13268);
    __format = (char *)((int)&DAT_00013270 + DAT_00013288);
    for (; *param_1 != '\0'; param_1 = param_1 + iVar2) {
      if ((int)sVar4 < 1) {
        if (sVar4 == 0) {
          param_1 = param_1 + 1;
        }
        sVar4 = strcspn(param_1,__reject);
      }
      iVar2 = sscanf(param_1,__format,&local_70,&local_6c);
      if (iVar2 < 1) {
        return 0xffffffff;
      }
      uVar3 = local_70;
      if ((sVar4 & 1) == 0) {
        if (iVar2 == 2) {
          uVar3 = local_6c | local_70 << 4;
        }
      }
      else {
        iVar2 = 1;
      }
      local_68[__n] = (char)uVar3;
      __n = __n + 1;
      local_6c = uVar3;
      if (__n == 0x40) break;
      sVar4 = sVar4 - iVar2;
    }
    param_1 = local_68;
  }
  memcpy(param_2,param_1,__n);
  return __n;
}



/* ===== iw_in_key_full @ 0001328c size=380 ===== */

size_t iw_in_key_full(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
                     ushort *param_5)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_274 [240];
  byte local_184;
  byte local_15c;
  
  iVar1 = strncmp(param_3,(char *)(DAT_00013408 + 0x132b0),2);
  iVar4 = DAT_0001340c + 0x132c8;
  if (iVar1 == 0) {
    sVar2 = strlen(param_3 + 2);
    sVar2 = sVar2 + 1;
    if (0x3f < sVar2) {
      sVar2 = 0x40;
    }
    memcpy(param_4,param_3 + 2,sVar2);
    pcVar3 = strchr(param_4,0x3a);
    if (pcVar3 == (char *)0x0) {
      sVar2 = 0xffffffff;
      fputs((char *)(DAT_00013414 + 0x13324),(FILE *)**(undefined4 **)(iVar4 + DAT_00013410));
    }
    else {
      *pcVar3 = '\0';
      iVar1 = iw_get_range_info(param_1,param_2,auStack_274);
      if (iVar1 < 0) {
        memset(auStack_274,0,0x24c);
      }
      if (0xf < local_15c) {
        printf((char *)(DAT_00013418 + 0x13384),(uint)*param_5,(uint)local_184);
        if ((char)*param_5 == '\0') {
          iVar1 = iw_get_range_info(param_1,param_2,auStack_274);
          if (iVar1 < 0) {
            memset(auStack_274,0,0x24c);
          }
          printf((char *)(DAT_0001341c + 0x133cc),(uint)*param_5,(uint)local_184);
          *param_5 = (ushort)local_184 | *param_5;
        }
        printf((char *)(DAT_00013420 + 0x133f0),(uint)*param_5,(uint)local_184);
      }
    }
  }
  else {
    sVar2 = iw_in_key(param_3,param_4);
  }
  return sVar2;
}



/* ===== iw_print_pm_value @ 00013424 size=364 ===== */

void iw_print_pm_value(char *param_1,size_t param_2,int param_3,uint param_4,int param_5)

{
  char *__src;
  char *pcVar1;
  char *pcVar2;
  uint in_fpscr;
  double dVar3;
  int iVar4;
  
  if ((int)param_2 < 0x19) {
    snprintf(param_1,param_2,(char *)(DAT_000135a0 + 0x13440));
    return;
  }
  pcVar1 = param_1;
  iVar4 = param_3;
  if ((param_4 & 1) != 0) {
    pcVar1 = param_1 + 4;
    strcpy(param_1,(char *)(DAT_000135a4 + 0x13470));
  }
  pcVar2 = pcVar1;
  if ((param_4 & 2) != 0) {
    pcVar2 = pcVar1 + 4;
    strcpy(pcVar1,(char *)(DAT_000135a8 + 0x1348c));
  }
  if ((param_4 & 0x2000) == 0) {
    pcVar1 = pcVar2 + 8;
    if ((param_4 & 0x4000) == 0) {
      __src = (char *)(DAT_000135b8 + 0x1351c);
    }
    else {
      __src = (char *)(DAT_000135b4 + 0x13508);
    }
    strcpy(pcVar2,__src);
  }
  else {
    pcVar1 = pcVar2 + 9;
    strcpy(pcVar2,(char *)(DAT_000135ac + 0x134a8));
  }
  if ((param_4 & 4) != 0) {
    if (param_5 < 0x15) {
      dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      param_3 = (int)(longlong)(dVar3 / DAT_00013590);
    }
    pcVar2 = (char *)(DAT_000135b0 + 0x134e0);
LAB_000134dc:
    snprintf(pcVar1,param_2 - 0x19,pcVar2,param_3);
    return;
  }
  if (DAT_000135bc < param_3) {
    pcVar2 = (char *)(DAT_000135c0 + 0x1353c);
    dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = dVar3 / DAT_00013590;
  }
  else {
    if (param_3 < 1000) {
      pcVar2 = (char *)((int)&DAT_00013590 + DAT_000135c8);
      goto LAB_000134dc;
    }
    pcVar2 = (char *)(DAT_000135c4 + 0x13574);
    dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = dVar3 / DAT_00013598;
  }
  snprintf(pcVar1,param_2 - 0x19,pcVar2,DAT_000135bc,dVar3,iVar4);
  return;
}



/* ===== iw_print_pm_mode @ 000135cc size=148 ===== */

void iw_print_pm_mode(char *param_1,size_t param_2,uint param_3)

{
  char *__src;
  
  if ((int)param_2 < 0x1c) {
    snprintf(param_1,param_2,(char *)(DAT_00013660 + 0x135e4));
    return;
  }
  param_3 = param_3 & 0xf00;
  if (param_3 == 0x300) {
    __src = (char *)(DAT_00013674 + 0x13654);
    goto LAB_00013638;
  }
  if (param_3 < 0x301) {
    if (param_3 == 0x100) {
      __src = (char *)(DAT_0001366c + 0x1363c);
      goto LAB_00013638;
    }
    if (param_3 == 0x200) {
      __src = (char *)(DAT_00013670 + 0x13648);
      goto LAB_00013638;
    }
  }
  else {
    if (param_3 == 0x400) {
      __src = (char *)((int)&DAT_00013660 + DAT_00013678);
      goto LAB_00013638;
    }
    if (param_3 == 0x800) {
      __src = (char *)(DAT_00013668 + 0x13630);
      goto LAB_00013638;
    }
  }
  __src = (char *)(DAT_00013664 + 0x13614);
LAB_00013638:
  strcpy(param_1,__src);
  return;
}



/* ===== iw_print_retry_value @ 0001367c size=392 ===== */

void iw_print_retry_value(char *param_1,size_t param_2,int param_3,uint param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  uint in_fpscr;
  double dVar3;
  
  if ((int)param_2 < 0x14) {
    snprintf(param_1,param_2,(char *)(DAT_00013818 + 0x13698));
    return;
  }
  pcVar1 = param_1;
  if ((param_4 & 1) != 0) {
    pcVar1 = param_1 + 4;
    strcpy(param_1,(char *)(DAT_0001381c + 0x136c8));
  }
  pcVar2 = pcVar1;
  if ((param_4 & 2) != 0) {
    pcVar2 = pcVar1 + 4;
    strcpy(pcVar1,(char *)(DAT_00013820 + 0x136e4));
  }
  pcVar1 = pcVar2;
  if ((param_4 & 0x10) != 0) {
    pcVar1 = pcVar2 + 6;
    strcpy(pcVar2,(char *)(DAT_00013824 + 0x13700));
  }
  pcVar2 = pcVar1;
  if ((param_4 & 0x20) != 0) {
    pcVar2 = pcVar1 + 6;
    strcpy(pcVar1,(char *)(DAT_00013828 + 0x1371c));
  }
  if ((param_4 & 0x2000) == 0) {
    pcVar1 = &UNK_00013804 + DAT_00013844;
  }
  else {
    strcpy(pcVar2,(char *)(DAT_0001382c + 0x13734));
    pcVar2 = pcVar2 + 10;
    if ((param_4 & 4) == 0) {
      if (DAT_00013834 < param_3) {
        pcVar1 = (char *)(DAT_00013838 + 0x1379c);
        dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
        dVar3 = dVar3 / DAT_00013808;
      }
      else {
        if (param_3 < 1000) {
          pcVar1 = (char *)(DAT_00013840 + 0x137ec);
          goto LAB_00013770;
        }
        pcVar1 = (char *)(DAT_0001383c + 0x137d0);
        dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
        dVar3 = dVar3 / DAT_00013810;
      }
      snprintf(pcVar2,param_2 - 0x14,pcVar1,DAT_00013834,dVar3);
      return;
    }
    if (param_5 < 0x15) {
      dVar3 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      param_3 = (int)(longlong)(dVar3 / DAT_00013808);
    }
    pcVar1 = (char *)(DAT_00013830 + 0x13770);
  }
LAB_00013770:
  snprintf(pcVar2,param_2 - 0x14,pcVar1,param_3);
  return;
}



/* ===== iw_print_timeval @ 00013848 size=144 ===== */

void iw_print_timeval(char *param_1,size_t param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00014740(*param_4 * -0x3c + *param_3,DAT_000138d8,*param_4,*param_3,param_1,param_2,param_3,
               param_4);
  uVar1 = FUN_00014664(extraout_r1,0xe10);
  iVar3 = param_3[1];
  FUN_00014740(extraout_r1,0x3c);
  uVar4 = extraout_r1_00;
  FUN_00014740(extraout_r1,0xe10);
  uVar2 = FUN_00014664(extraout_r1_01,0x3c);
  snprintf(param_1,param_2,(char *)(DAT_000138dc + 0x138c8),uVar1,uVar2,uVar4,iVar3);
  return;
}



/* ===== iw_check_mac_addr_type @ 000138e0 size=132 ===== */

undefined4 iw_check_mac_addr_type(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_30 [16];
  short local_20;
  
  iVar1 = DAT_00013964;
  pcVar2 = strncpy(acStack_30,param_2,0x10);
  iVar3 = ioctl(param_1,0x8927,pcVar2);
  if ((iVar3 < 0) || (local_20 != 1 && local_20 != 0x321)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + 0x13910 + DAT_00013968),
            (char *)(DAT_0001396c + 0x13954),param_2);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== iw_check_if_addr_type @ 00013970 size=120 ===== */

undefined4 iw_check_if_addr_type(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_30 [16];
  short local_20;
  
  iVar1 = DAT_000139e8;
  pcVar2 = strncpy(acStack_30,param_2,0x10);
  iVar3 = ioctl(param_1,0x8915,pcVar2);
  if ((iVar3 < 0) || (local_20 != 2)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + 0x139a0 + DAT_000139ec),
            (char *)(DAT_000139f0 + 0x139d8),param_2);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== iw_mac_ntop @ 000139f4 size=112 ===== */

char * iw_mac_ntop(byte *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  char *__s;
  char *__format;
  
  if (param_4 < param_2 * 3) {
    param_3 = (char *)0x0;
  }
  else {
    sprintf(param_3,(char *)(DAT_00013a64 + 0x13a24),(uint)*param_1);
    __s = param_3 + 2;
    __format = (char *)(DAT_00013a68 + 0x13a3c);
    for (iVar1 = 1; iVar1 < param_2; iVar1 = iVar1 + 1) {
      sprintf(__s,__format,(uint)param_1[iVar1]);
      __s = __s + 3;
    }
  }
  return param_3;
}



/* ===== iw_ether_ntop @ 00013a6c size=72 ===== */

void iw_ether_ntop(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_00013ab4 + 0x13a8c),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
          (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  return;
}



/* ===== iw_sawap_ntop @ 00013ab8 size=216 ===== */

char * iw_sawap_ntop(int param_1,char *param_2)

{
  int iVar1;
  char *__src;
  void *__s1;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  local_30 = 0;
  local_2c = 0;
  __s1 = (void *)(param_1 + 2);
  local_28 = *(undefined4 *)(DAT_00013b90 + 0x13b11);
  local_20 = *(undefined4 *)(DAT_00013b90 + 0x13b17);
  local_24 = *(undefined2 *)(DAT_00013b90 + 0x13b15);
  local_1c = *(undefined2 *)(DAT_00013b90 + 0x13b1b);
  iVar1 = memcmp(__s1,&local_30,6);
  if (iVar1 == 0) {
    __src = (char *)(DAT_00013b94 + 0x13b30);
  }
  else {
    iVar1 = memcmp(__s1,&local_28,6);
    if (iVar1 == 0) {
      __src = (char *)(DAT_00013b98 + 0x13b60);
    }
    else {
      iVar1 = memcmp(__s1,&local_20,6);
      if (iVar1 != 0) {
        iw_ether_ntop(__s1,param_2);
        return param_2;
      }
      __src = (char *)(DAT_00013b9c + 0x13b80);
    }
  }
  strcpy(param_2,__src);
  return param_2;
}



/* ===== iw_mac_aton @ 00013ba0 size=172 ===== */

int iw_mac_aton(char *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *__format;
  char *local_28;
  uint local_24;
  
  puVar4 = (undefined1 *)(param_2 - 1);
  __format = (char *)(DAT_00013c4c + 0x13bc0);
  iVar3 = 0;
  local_28 = param_1;
  local_24 = param_2;
  while ((*param_1 != '\0' && (iVar2 = sscanf(param_1,__format,&local_28,&local_24), iVar2 == 2))) {
    iVar3 = iVar3 + 1;
    local_24 = local_24 | (int)local_28 << 4;
    puVar4 = puVar4 + 1;
    *puVar4 = (char)local_24;
    if (param_1[2] == '\0') {
      return iVar3;
    }
    if (param_3 <= iVar3) {
      piVar1 = __errno_location();
      iVar3 = 7;
      goto LAB_00013c28;
    }
    if (param_1[2] != ':') break;
    param_1 = param_1 + 3;
  }
  piVar1 = __errno_location();
  iVar3 = 0x16;
LAB_00013c28:
  *piVar1 = iVar3;
  return 0;
}



/* ===== iw_ether_aton @ 00013c50 size=44 ===== */

int iw_ether_aton(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = iw_mac_aton(param_1,param_2,6);
  if (4 < iVar1 - 1U) {
    return iVar1;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0;
}



/* ===== iw_in_inet @ 00013c7c size=172 ===== */

undefined4 iw_in_inet(char *param_1,undefined4 *param_2)

{
  int iVar1;
  netent *pnVar2;
  hostent *phVar3;
  int *piVar4;
  int *piVar5;
  char *__src;
  uint uVar6;
  
  *param_2 = 2;
  iVar1 = strcmp(param_1,(char *)(DAT_00013d28 + 0x13c9c));
  if (iVar1 == 0) {
    param_2[1] = 0;
  }
  else {
    pnVar2 = getnetbyname(param_1);
    if (pnVar2 == (netent *)0x0) {
      phVar3 = gethostbyname(param_1);
      if (phVar3 != (hostent *)0x0) {
        memcpy(param_2 + 1,*phVar3->h_addr_list,phVar3->h_length);
        strcpy(param_1,phVar3->h_name);
        return 0;
      }
      piVar4 = __h_errno_location();
      piVar5 = __errno_location();
      *piVar5 = *piVar4;
      return 0xffffffff;
    }
    uVar6 = pnVar2->n_net;
    __src = pnVar2->n_name;
    param_2[1] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
    strcpy(param_1,__src);
  }
  return 1;
}



/* ===== iw_in_addr @ 00013d2c size=424 ===== */

undefined4 iw_in_addr(int param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  FILE *__stream;
  int iVar6;
  char **ppcVar7;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char *local_54 [9];
  char acStack_30 [16];
  
  pcVar1 = strchr(param_3,0x3a);
  iVar6 = DAT_00013ed4 + 0x13d60;
  if (pcVar1 == (char *)0x0) {
    iVar2 = iw_check_if_addr_type();
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar6 + DAT_00013ed8);
      pcVar1 = (char *)(DAT_00013edc + 0x13d8c);
      param_3 = param_2;
    }
    else {
      iVar2 = iw_in_inet(param_3,&local_74);
      if (-1 < iVar2) {
        local_64 = local_74;
        uStack_60 = uStack_70;
        uStack_5c = uStack_6c;
        uStack_58 = uStack_68;
        local_54[0]._0_2_ = 0;
        local_54[4] = pcVar1;
        strncpy(acStack_30,param_2,0x10);
        iVar2 = ioctl(param_1,0x8954,&local_64);
        if ((-1 < iVar2) && (((uint)local_54[4] & 2) != 0)) {
          ppcVar7 = local_54;
          do {
            pcVar1 = *ppcVar7;
            pcVar4 = ppcVar7[1];
            ppcVar7 = ppcVar7 + 2;
            *param_4 = pcVar1;
            param_4[1] = pcVar4;
            param_4 = param_4 + 2;
          } while (ppcVar7 != local_54 + 4);
          return 0;
        }
        __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00013ed8);
        piVar3 = __errno_location();
        fprintf(__stream,(char *)(DAT_00013ee4 + 0x13e38),param_3,param_2,*piVar3);
        return 0xffffffff;
      }
      puVar5 = *(undefined4 **)(iVar6 + DAT_00013ed8);
      pcVar1 = (char *)(DAT_00013ee0 + 0x13dc4);
    }
  }
  else {
    iVar2 = iw_check_mac_addr_type(param_1,param_2);
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar6 + DAT_00013ed8);
      pcVar1 = (char *)(DAT_00013ee8 + 0x13ea0);
      param_3 = param_2;
    }
    else {
      *(undefined2 *)param_4 = 1;
      iVar2 = iw_ether_aton(param_3,(undefined2 *)((int)param_4 + 2));
      if (iVar2 != 0) {
        return 0;
      }
      puVar5 = *(undefined4 **)(iVar6 + DAT_00013ed8);
      pcVar1 = (char *)((int)&DAT_00013ed4 + DAT_00013eec);
    }
  }
  fprintf((FILE *)*puVar5,pcVar1,param_3);
  return 0xffffffff;
}



/* ===== iw_get_priv_size @ 00013ef0 size=32 ===== */

int iw_get_priv_size(uint param_1)

{
  return *(int *)(DAT_00013f10 + ((param_1 & 0x7fff) >> 0xc) * 4 + 0x13f34) * (param_1 & 0x7ff);
}



/* ===== iw_init_event_stream @ 00013f14 size=24 ===== */

void iw_init_event_stream(int *param_1,int param_2,int param_3)

{
  param_1[2] = 0;
  param_1[1] = param_2;
  *param_1 = param_2 + param_3;
  return;
}



/* ===== iw_extract_event_stream @ 00013f2c size=664 ===== */

undefined4 iw_extract_event_stream(uint *param_1,ushort *param_2,int param_3)

{
  int extraout_r1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  void *__src;
  size_t __n;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  uint local_30;
  
  if ((undefined4 *)*param_1 < (undefined4 *)param_1[1] + 1) {
    return 0;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1[1];
  uVar6 = (uint)*param_2;
  if (uVar6 < 5) {
    return 0xffffffff;
  }
  uVar4 = (uint)param_2[1];
  if (uVar4 < 0x8c00) {
    uVar4 = uVar4 - 0x8b00;
    if (0x36 < uVar4) goto LAB_00013ff0;
    iVar2 = DAT_000141c4 + 0x13fd0;
LAB_00013f80:
    pbVar5 = (byte *)(uVar4 * 0xc + iVar2);
    pbVar7 = (byte *)(uint)*pbVar5;
  }
  else {
    uVar4 = uVar4 - 0x8c00;
    if ((int)uVar4 < 10) {
      iVar2 = DAT_000141cc + 0x142d0;
      goto LAB_00013f80;
    }
LAB_00013ff0:
    pbVar5 = (byte *)0x0;
    pbVar7 = pbVar5;
  }
  bVar9 = param_3 == 0x12;
  if (param_3 < 0x13) {
    bVar9 = pbVar7 == (byte *)0x8;
  }
  uVar4 = *(uint *)(DAT_000141c8 + (int)pbVar7 * 4 + 0x142fc);
  if (bVar9) {
    uVar4 = uVar4 + 4;
  }
  if (uVar4 < 5) {
    param_1[1] = param_1[1] + uVar6;
    return 2;
  }
  __src = (void *)param_1[2];
  __n = uVar4 - 4;
  if (__src == (void *)0x0) {
    __src = (void *)(param_1[1] + 4);
  }
  local_30 = (int)__src + __n;
  if (*param_1 < local_30) {
    param_1[1] = param_1[1] + uVar6;
    return 0xfffffffe;
  }
  if (param_3 < 0x13 || pbVar7 != (byte *)0x8) {
    memcpy(param_2 + 2,__src,__n);
    if (pbVar7 != (byte *)0x8) {
      if ((param_1[2] == 0) &&
         ((FUN_00014644(uVar6 - 4,__n), extraout_r1 == 4 ||
          ((uVar6 == 0xc && (pbVar7 == (byte *)0xa || pbVar7 == (byte *)0x4)))))) {
        memcpy(param_2 + 2,(void *)((int)__src + 4),__n);
        local_30 = (int)__src + uVar4;
      }
      uVar6 = param_1[1] + uVar6;
      if (local_30 + __n <= uVar6) {
        param_1[2] = local_30;
        return 1;
      }
      param_1[2] = 0;
      goto LAB_0001408c;
    }
  }
  else {
    memcpy(param_2 + 4,__src,__n);
  }
  uVar8 = uVar6 - uVar4;
  if ((uVar6 == uVar4) || (*(size_t *)(param_2 + 2) = (int)__src + __n, pbVar5 == (byte *)0x0)) {
LAB_0001407c:
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(pbVar5 + 2) * (uint)param_2[4];
    bVar9 = uVar1 <= uVar8;
    if (uVar8 != uVar1) {
      bVar9 = 2 < uVar8;
    }
    if ((bVar9 && (uVar8 != uVar1 && uVar8 != 3)) &&
       (uVar3 = (uint)*(ushort *)(pbVar5 + 2) * (uint)*(ushort *)((int)__src + __n),
       uVar3 + 8 == uVar8)) {
      memcpy(param_2 + 4,(void *)((int)__src + 4),__n);
      *(uint *)(param_2 + 2) = (int)__src + 4 + uVar4;
      uVar1 = uVar3;
    }
    if (uVar8 < uVar1) {
      param_2[2] = 0;
      param_2[3] = 0;
    }
    if ((*(ushort *)(pbVar5 + 6) < param_2[4]) && ((*(uint *)(pbVar5 + 8) & 8) == 0)) {
      param_2[2] = 0;
      param_2[3] = 0;
    }
    if (param_2[4] < *(ushort *)(pbVar5 + 4)) goto LAB_0001407c;
  }
  uVar6 = param_1[1] + uVar6;
LAB_0001408c:
  param_1[1] = uVar6;
  return 1;
}



/* ===== iw_process_scan @ 000141d0 size=896 ===== */

undefined4 iw_process_scan(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  size_t sVar1;
  int *piVar2;
  void *__ptr;
  undefined4 *puVar3;
  int iVar4;
  void *__ptr_00;
  size_t __size;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [2];
  ushort local_5a;
  void *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  void *local_38;
  uint local_34;
  
  iVar4 = param_4[1] + 1;
  param_4[1] = iVar4;
  if (iVar4 < 0x97) {
    if (iVar4 == 1) {
      local_38 = (void *)0x0;
      local_34 = 0;
      iVar4 = FUN_00011748(param_1,param_2,0x8b18,auStack_48);
      if (-1 < iVar4) {
        return 0xfa;
      }
      piVar2 = __errno_location();
      if (*piVar2 == 1) {
        return 0xfa;
      }
      return 0xffffffff;
    }
    __ptr_00 = (void *)0x0;
    sVar1 = 0x1000;
    while (__size = sVar1, __ptr = realloc(__ptr_00,__size), __ptr != (void *)0x0) {
      local_34 = __size & 0xffff;
      local_38 = __ptr;
      iVar4 = FUN_00011748(param_1,param_2,0x8b19,auStack_48);
      if (-1 < iVar4) {
        if ((local_34 & 0xffff) == 0) goto LAB_00014540;
        puVar5 = (undefined4 *)0x0;
        iw_init_event_stream(auStack_68,__ptr);
        *param_4 = 0;
        goto LAB_00014340;
      }
      piVar2 = __errno_location();
      if (*piVar2 != 7) {
        if (*piVar2 == 0xb) {
          free(__ptr);
          return 100;
        }
LAB_00014304:
        free(__ptr);
        return 0xffffffff;
      }
      if (param_3 < 0x11) goto LAB_00014304;
      __ptr_00 = __ptr;
      sVar1 = local_34 & 0xffff;
      if ((int)(local_34 & 0xffff) <= (int)__size) {
        sVar1 = __size << 1;
      }
    }
    __ptr = __ptr_00;
    if (__ptr_00 != (void *)0x0) {
LAB_00014410:
      free(__ptr);
    }
    piVar2 = __errno_location();
    iVar4 = 0xc;
  }
  else {
    piVar2 = __errno_location();
    iVar4 = 0x3e;
  }
  *piVar2 = iVar4;
  return 0xffffffff;
LAB_00014340:
  iVar4 = iw_extract_event_stream(auStack_68,auStack_5c,param_3);
  if (iVar4 < 1) {
LAB_00014540:
    free(__ptr);
    return 0;
  }
  if (local_5a == 0x8b15) {
    puVar3 = malloc(0x100);
    if (puVar3 == (void *)0x0) goto LAB_00014410;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar3;
    }
    memset(puVar3,0,0x100);
    puVar3[1] = 1;
    puVar3[2] = local_58;
    puVar3[3] = local_54;
    puVar3[4] = uStack_50;
    puVar3[5] = uStack_4c;
    puVar5 = puVar3;
  }
  else if (local_5a < 0x8b16) {
    if (local_5a == 0x8b05) {
      puVar5[0xe] = 1;
      uVar6 = iw_freq2float(&local_58);
      puVar5[0x12] = local_54 >> 0x18;
      *(ulonglong *)(puVar5 + 0x10) = CONCAT44(extraout_s1,uVar6);
    }
    else if (local_5a == 0x8b07) {
      puVar5[0x32] = local_58;
      if (local_58 < (void *)0x7) {
        puVar5[0x31] = 1;
      }
    }
    else {
      if (local_5a != 0x8b03) goto LAB_000143c4;
      puVar5[0xb] = 1;
      puVar3 = puVar5 + 0xc;
LAB_00014398:
      *puVar3 = local_58;
      puVar3[1] = local_54;
    }
  }
  else if (local_5a == 0x8b21) {
    if ((puVar5[0x3f] == 0) || ((int)puVar5[0x3d] < (int)local_58)) {
      puVar5[0x3f] = 1;
      puVar3 = puVar5 + 0x3d;
      goto LAB_00014398;
    }
  }
  else if (local_5a < 0x8b22) {
    if (local_5a == 0x8b1b) {
      puVar5[0x26] = 1;
      uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar3 = puVar5 + 0x28;
      puVar5[0x27] = (uint)local_54._2_2_;
      *puVar3 = 0;
      puVar5[0x29] = uVar6;
      puVar5[0x2a] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar5[0x2b] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar5[0x2c] = 0;
      puVar5[0x2d] = uVar6;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = uVar6;
      *(undefined4 *)((int)puVar5 + 0xb9) = 0;
      *(undefined4 *)((int)puVar5 + 0xbd) = uVar6;
      if ((local_58 != (void *)0x0) && ((local_54 & 0xffff) != 0)) {
LAB_000144d8:
        memcpy(puVar3,local_58,local_54 & 0xffff);
      }
    }
    else {
LAB_000143c4:
      if (puVar5 == (undefined4 *)0x0) goto LAB_00014410;
    }
  }
  else if (local_5a == 0x8b2b) {
    puVar5[0x13] = 1;
    puVar5[0x24] = local_54 & 0xffff;
    puVar5[0x25] = (uint)local_54._2_2_;
    if (local_58 != (void *)0x0) {
      puVar3 = puVar5 + 0x14;
      goto LAB_000144d8;
    }
    puVar5[0x25] = local_54._2_2_ | 0x800;
  }
  else {
    if (local_5a != 0x8c01) goto LAB_000143c4;
    puVar5[0x3c] = 1;
    *(void **)((int)puVar5 + 0xd2) = local_58;
  }
  if (*param_4 == 0) {
    *param_4 = (int)puVar5;
  }
  goto LAB_00014340;
}



/* ===== iw_scan @ 00014550 size=76 ===== */

void iw_scan(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  param_4[1] = 0;
  while (iVar1 = iw_process_scan(param_1,param_2,param_3,param_4), 0 < iVar1) {
    usleep(iVar1 * 1000);
  }
  return;
}



/* ===== FUN_0001459c @ 0001459c size=168 ===== */

ulonglong FUN_0001459c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_00014644 @ 00014644 size=32 ===== */

void FUN_00014644(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001459c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00014664 @ 00014664 size=24 ===== */

ulonglong FUN_00014664(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
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
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
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
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_0001466c @ 0001466c size=196 ===== */

uint FUN_0001466c(uint param_1,uint param_2)

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



/* ===== FUN_00014740 @ 00014740 size=48 ===== */

void FUN_00014740(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001466c();
    return;
  }
  raise(8);
  return;
}



/* ===== _fini @ 00014770 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00027008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ceil @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ceil(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::floor @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pow @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log10 @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__h_errno_location @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __h_errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gethostbyname @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getnetbyname @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

netent * getnetbyname(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


