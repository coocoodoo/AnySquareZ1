// modetest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011888 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::drmModePageFlip @ 000118ac size=12 ===== */

void drmModePageFlip(void)

{
  (*(code *)PTR_drmModePageFlip_0002d00c)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 000118b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002d010)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeAddFB2 @ 000118c4 size=12 ===== */

void drmModeAddFB2(void)

{
  (*(code *)PTR_drmModeAddFB2_0002d014)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000118d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002d018)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::drmModeFreeResources @ 000118dc size=12 ===== */

void drmModeFreeResources(void)

{
  (*(code *)PTR_drmModeFreeResources_0002d01c)();
  return;
}



/* ===== <EXTERNAL>::drmModeSetPlane @ 000118e8 size=12 ===== */

void drmModeSetPlane(void)

{
  (*(code *)PTR_drmModeSetPlane_0002d020)();
  return;
}



/* ===== <EXTERNAL>::drmModeFreeCrtc @ 000118f4 size=12 ===== */

void drmModeFreeCrtc(void)

{
  (*(code *)PTR_drmModeFreeCrtc_0002d024)();
  return;
}



/* ===== <EXTERNAL>::drmModeSetCursor @ 00011900 size=12 ===== */

void drmModeSetCursor(void)

{
  (*(code *)PTR_drmModeSetCursor_0002d028)();
  return;
}



/* ===== <EXTERNAL>::drmModeGetResources @ 0001190c size=12 ===== */

void drmModeGetResources(void)

{
  (*(code *)PTR_drmModeGetResources_0002d02c)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00011918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002d030)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00011924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002d034)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002d038)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 0001193c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0002d03c)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002d040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00011954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002d044)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeAtomicCommit @ 00011960 size=12 ===== */

void drmModeAtomicCommit(void)

{
  (*(code *)PTR_drmModeAtomicCommit_0002d048)();
  return;
}



/* ===== <EXTERNAL>::drmModeGetPlaneResources @ 0001196c size=12 ===== */

void drmModeGetPlaneResources(void)

{
  (*(code *)PTR_drmModeGetPlaneResources_0002d04c)();
  return;
}



/* ===== <EXTERNAL>::drmModeGetConnector @ 00011978 size=12 ===== */

void drmModeGetConnector(void)

{
  (*(code *)PTR_drmModeGetConnector_0002d050)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002d054)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeFreeFB @ 00011990 size=12 ===== */

void drmModeFreeFB(void)

{
  (*(code *)PTR_drmModeFreeFB_0002d058)();
  return;
}



/* ===== <EXTERNAL>::drmModeFormatModifierBlobIterNext @ 0001199c size=12 ===== */

void drmModeFormatModifierBlobIterNext(void)

{
  (*(code *)PTR_drmModeFormatModifierBlobIterNext_0002d05c)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000119a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002d060)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeFreePropertyBlob @ 000119b4 size=12 ===== */

void drmModeFreePropertyBlob(void)

{
  (*(code *)PTR_drmModeFreePropertyBlob_0002d064)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000119c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002d068)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::select @ 000119cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0002d06c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeGetPlane @ 000119d8 size=12 ===== */

void drmModeGetPlane(void)

{
  (*(code *)PTR_drmModeGetPlane_0002d070)();
  return;
}



/* ===== <EXTERNAL>::drmModeDirtyFB @ 000119e4 size=12 ===== */

void drmModeDirtyFB(void)

{
  (*(code *)PTR_drmModeDirtyFB_0002d074)();
  return;
}



/* ===== <EXTERNAL>::drmModeAtomicFree @ 000119f0 size=12 ===== */

void drmModeAtomicFree(void)

{
  (*(code *)PTR_drmModeAtomicFree_0002d078)();
  return;
}



/* ===== <EXTERNAL>::drmOpen @ 000119fc size=12 ===== */

void drmOpen(void)

{
  (*(code *)PTR_drmOpen_0002d07c)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00011a08 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0002d080)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011a14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002d084)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00011a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002d088)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::drmModeRmFB @ 00011a2c size=12 ===== */

void drmModeRmFB(void)

{
  (*(code *)PTR_drmModeRmFB_0002d08c)();
  return;
}



/* ===== <EXTERNAL>::drmModeCrtcSetGamma @ 00011a38 size=12 ===== */

void drmModeCrtcSetGamma(void)

{
  (*(code *)PTR_drmModeCrtcSetGamma_0002d090)();
  return;
}



/* ===== <EXTERNAL>::drmIoctl @ 00011a44 size=12 ===== */

void drmIoctl(void)

{
  (*(code *)PTR_drmIoctl_0002d094)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002d098)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::drmModeAtomicAlloc @ 00011a5c size=12 ===== */

void drmModeAtomicAlloc(void)

{
  (*(code *)PTR_drmModeAtomicAlloc_0002d09c)();
  return;
}



/* ===== <EXTERNAL>::strtod @ 00011a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_0002d0a0)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::drmModeGetProperty @ 00011a74 size=12 ===== */

void drmModeGetProperty(void)

{
  (*(code *)PTR_drmModeGetProperty_0002d0a4)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011a80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002d0a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::drmGetFormatModifierVendor @ 00011a8c size=12 ===== */

void drmGetFormatModifierVendor(void)

{
  (*(code *)PTR_drmGetFormatModifierVendor_0002d0ac)();
  return;
}



/* ===== <EXTERNAL>::drmModeGetFB @ 00011a98 size=12 ===== */

void drmModeGetFB(void)

{
  (*(code *)PTR_drmModeGetFB_0002d0b0)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011aa4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002d0b4)();
  return;
}



/* ===== <EXTERNAL>::drmGetCap @ 00011ab0 size=12 ===== */

void drmGetCap(void)

{
  (*(code *)PTR_drmGetCap_0002d0b8)();
  return;
}



/* ===== <EXTERNAL>::drmHandleEvent @ 00011abc size=12 ===== */

void drmHandleEvent(void)

{
  (*(code *)PTR_drmHandleEvent_0002d0bc)();
  return;
}



/* ===== <EXTERNAL>::drmModeCreatePropertyBlob @ 00011ac8 size=12 ===== */

void drmModeCreatePropertyBlob(void)

{
  (*(code *)PTR_drmModeCreatePropertyBlob_0002d0c0)();
  return;
}



/* ===== <EXTERNAL>::drmModeFreeEncoder @ 00011ad4 size=12 ===== */

void drmModeFreeEncoder(void)

{
  (*(code *)PTR_drmModeFreeEncoder_0002d0c4)();
  return;
}



/* ===== <EXTERNAL>::drmModeFreePlaneResources @ 00011ae0 size=12 ===== */

void drmModeFreePlaneResources(void)

{
  (*(code *)PTR_drmModeFreePlaneResources_0002d0c8)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00011aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002d0cc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011af8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002d0d0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::drmModeFreeObjectProperties @ 00011b04 size=12 ===== */

void drmModeFreeObjectProperties(void)

{
  (*(code *)PTR_drmModeFreeObjectProperties_0002d0d4)();
  return;
}



/* ===== <EXTERNAL>::strtok @ 00011b10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0002d0d8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::drmSetClientCap @ 00011b1c size=12 ===== */

void drmSetClientCap(void)

{
  (*(code *)PTR_drmSetClientCap_0002d0dc)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00011b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002d0e0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002d0e8)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002d0ec)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002d0f0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::drmModeGetEncoder @ 00011b64 size=12 ===== */

void drmModeGetEncoder(void)

{
  (*(code *)PTR_drmModeGetEncoder_0002d0f4)();
  return;
}



/* ===== <EXTERNAL>::open64 @ 00011b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002d0f8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeFreeProperty @ 00011b7c size=12 ===== */

void drmModeFreeProperty(void)

{
  (*(code *)PTR_drmModeFreeProperty_0002d0fc)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00011b88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002d100)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fgetc @ 00011b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0002d104)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011ba0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002d108)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 00011bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0002d10c)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00011bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002d110)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::drmClose @ 00011bc4 size=12 ===== */

void drmClose(void)

{
  (*(code *)PTR_drmClose_0002d114)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 00011bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0002d118)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::drmModeSetCrtc @ 00011bdc size=12 ===== */

void drmModeSetCrtc(void)

{
  (*(code *)PTR_drmModeSetCrtc_0002d11c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00011be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002d120)();
  return piVar1;
}



/* ===== <EXTERNAL>::drmModeMoveCursor @ 00011bf4 size=12 ===== */

void drmModeMoveCursor(void)

{
  (*(code *)PTR_drmModeMoveCursor_0002d124)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002d128)(__status);
  return;
}



/* ===== <EXTERNAL>::drmModeFreePlane @ 00011c0c size=12 ===== */

void drmModeFreePlane(void)

{
  (*(code *)PTR_drmModeFreePlane_0002d12c)();
  return;
}



/* ===== <EXTERNAL>::drmModeFreeConnector @ 00011c18 size=12 ===== */

void drmModeFreeConnector(void)

{
  (*(code *)PTR_drmModeFreeConnector_0002d130)();
  return;
}



/* ===== <EXTERNAL>::drmModeObjectGetProperties @ 00011c24 size=12 ===== */

void drmModeObjectGetProperties(void)

{
  (*(code *)PTR_drmModeObjectGetProperties_0002d134)();
  return;
}



/* ===== <EXTERNAL>::drmDropMaster @ 00011c30 size=12 ===== */

void drmDropMaster(void)

{
  (*(code *)PTR_drmDropMaster_0002d138)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002d13c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::drmModeObjectSetProperty @ 00011c48 size=12 ===== */

void drmModeObjectSetProperty(void)

{
  (*(code *)PTR_drmModeObjectSetProperty_0002d140)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002d144)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__assert @ 00011c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0002d148)(__assertion);
  return;
}



/* ===== <EXTERNAL>::div @ 00011c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

div_t * div(div_t *__return_storage_ptr__,int __numer,int __denom)

{
  div_t *pdVar1;
  
  pdVar1 = (div_t *)(*(code *)PTR_div_0002d14c)(__return_storage_ptr__);
  return pdVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002d150)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002d154)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011c90 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002d158)();
  return;
}



/* ===== <EXTERNAL>::drmModeGetPropertyBlob @ 00011c9c size=12 ===== */

void drmModeGetPropertyBlob(void)

{
  (*(code *)PTR_drmModeGetPropertyBlob_0002d15c)();
  return;
}



/* ===== <EXTERNAL>::strpbrk @ 00011ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strpbrk_0002d160)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::drmGetFormatModifierName @ 00011cb4 size=12 ===== */

void drmGetFormatModifierName(void)

{
  (*(code *)PTR_drmGetFormatModifierName_0002d164)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002d168)(__ptr);
  return;
}



/* ===== <EXTERNAL>::drmModeGetCrtc @ 00011ccc size=12 ===== */

void drmModeGetCrtc(void)

{
  (*(code *)PTR_drmModeGetCrtc_0002d16c)();
  return;
}



/* ===== FUN_00011cd8 @ 00011cd8 size=8264 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00011cd8(int param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *__s;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  size_t *psVar16;
  int *piVar17;
  size_t sVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iVar25;
  FILE *pFVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  int iVar29;
  timeval *ptVar30;
  int extraout_r2;
  int iVar31;
  uint *puVar32;
  char *pcVar33;
  uint uVar34;
  int iVar35;
  size_t sVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  char *pcVar39;
  size_t __nmemb;
  size_t __nmemb_00;
  undefined4 uVar40;
  uint uVar41;
  uint in_fpscr;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined8 uVar51;
  ulonglong uVar52;
  void *local_15c;
  int local_158;
  int local_154;
  undefined4 *local_150;
  int local_14c;
  void *local_140;
  int local_138;
  int local_12c;
  int local_128;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108 [2];
  timeval local_100;
  undefined8 uStack_f8;
  timeval local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  int local_c4;
  int iStack_c0;
  undefined4 local_bc;
  timeval local_b8;
  undefined8 uStack_b0;
  
  piVar14 = DAT_00012cc0;
  auVar44 = (undefined1  [16])0x0;
  local_dc = 0;
  local_d4 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_140 = (void *)0x0;
  *DAT_00012cc4 = 0;
  local_150 = (undefined4 *)0x0;
  local_15c = (void *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_154 = 0;
  local_138 = 0;
  local_128 = 0;
  local_12c = 0;
  bVar7 = false;
  bVar9 = false;
  bVar6 = false;
  bVar8 = false;
  iVar13 = 0;
  local_cc = local_dc;
  iStack_c0 = local_c4;
LAB_00011d48:
  __s = (undefined8 *)getopt(param_1,param_2,DAT_00012cc8);
  piVar17 = DAT_00012ccc;
  if (__s != (undefined8 *)0xffffffff) {
    iVar35 = iVar13 + 1;
    if (__s == (undefined8 *)0x64) {
      bVar8 = true;
      iVar13 = iVar35;
      goto LAB_00011d48;
    }
    if ((int)__s < 0x65) {
      if (__s == (undefined8 *)0x4d) {
        local_138 = *piVar14;
      }
      else if ((int)__s < 0x4e) {
        if (__s == (undefined8 *)0x44) {
          local_128 = *piVar14;
        }
        else if (__s == (undefined8 *)0x46) {
          pcVar15 = strtok((char *)*piVar14,DAT_00012ce4);
          iVar13 = iVar35;
          if (pcVar15 != (char *)0x0) {
            uVar23 = FUN_0001a020();
            pcVar15 = DAT_00012ce4;
            *DAT_00012ce8 = uVar23;
            pcVar15 = strtok((char *)0x0,pcVar15);
            if (pcVar15 != (char *)0x0) {
              iVar13 = FUN_0001a020();
              DAT_00012ccc[5] = iVar13;
              iVar13 = iVar35;
            }
          }
        }
        else {
          if (__s != (undefined8 *)0x43) goto LAB_00011e84;
          bVar9 = true;
          iVar13 = iVar35;
        }
      }
      else if (__s == (undefined8 *)0x61) {
        local_12c = 1;
      }
      else {
        if (__s != (undefined8 *)0x63) {
          if (__s == (undefined8 *)0x50) {
            local_158 = local_158 + 1;
            local_150 = realloc(local_150,local_158 * 0x48);
            if (local_150 == (undefined4 *)0x0) {
LAB_00011e48:
              pFVar26 = (FILE *)*DAT_00012d84;
              pcVar15 = DAT_00012cd4;
              goto LAB_00011e54;
            }
            __s = (undefined8 *)(local_150 + local_158 * 0x12 + -0x12);
            memset(__s,0,0x48);
            uVar11 = strtoul((char *)*piVar14,(char **)&local_b8,10);
            local_150[local_158 * 0x12 + -0x12] = uVar11;
            if (*(char *)local_b8.tv_sec == '@') {
              uVar11 = strtoul((char *)(local_b8.tv_sec + 1),(char **)&local_b8,10);
              *(ulong *)((int)__s + 4) = uVar11;
              if (*(char *)local_b8.tv_sec == ':') {
                uVar11 = strtoul((char *)(local_b8.tv_sec + 1),(char **)&local_b8,10);
                *(ulong *)((int)__s + 0x14) = uVar11;
                if (*(char *)local_b8.tv_sec == 'x') {
                  uVar11 = strtoul((char *)(local_b8.tv_sec + 1),(char **)&local_b8,10);
                  *(ulong *)(__s + 3) = uVar11;
                  if ((*(char *)local_b8.tv_sec - 0x2bU & 0xfd) == 0) {
                    lVar12 = strtol((char *)local_b8.tv_sec,(char **)&local_b8,10);
                    *(long *)((int)__s + 0xc) = lVar12;
                    if ((*(char *)local_b8.tv_sec - 0x2bU & 0xfd) != 0) goto LAB_00011e84;
                    lVar12 = strtol((char *)local_b8.tv_sec,(char **)&local_b8,10);
                    *(long *)(__s + 2) = lVar12;
                    *(undefined1 *)(__s + 1) = 1;
                  }
                  uVar23 = DAT_00012cf0;
                  if (*(char *)local_b8.tv_sec == '*') {
                    dVar46 = strtod((char *)(local_b8.tv_sec + 1),(char **)&local_b8);
                    in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar46 == 0.0) << 0x1e |
                               (uint)(0.0 <= dVar46) << 0x1d;
                    __s[4] = dVar46;
                    bVar3 = (byte)(in_fpscr >> 0x18);
                    if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) goto LAB_00011e84;
                  }
                  else {
                    *(undefined4 *)(__s + 4) = 0;
                    *(undefined4 *)((int)__s + 0x24) = uVar23;
                  }
                  pcVar15 = (char *)(__s + 7);
                  if (*(char *)local_b8.tv_sec == '@') {
                    strncpy(pcVar15,(char *)(local_b8.tv_sec + 1),4);
                    *(undefined1 *)((int)__s + 0x3c) = 0;
                  }
                  else {
                    strcpy(pcVar15,DAT_00012cd8);
                  }
                  iVar25 = FUN_00016ba4(pcVar15);
                  *(int *)(__s + 8) = iVar25;
                  iVar13 = iVar35;
                  if (iVar25 == 0) goto LAB_0001227c;
                  goto LAB_00011d48;
                }
              }
            }
          }
LAB_00011e84:
          do {
            while( true ) {
              FUN_00014bd8(*param_2);
LAB_00011e8c:
              if (__s == (undefined8 *)0x76) {
                bVar6 = true;
                iVar13 = iVar35;
                goto LAB_00011d48;
              }
              if (__s == (undefined8 *)0x77) break;
              if (__s == (undefined8 *)0x73) {
                local_154 = local_154 + 1;
                local_15c = realloc(local_15c,local_154 * 0x80);
                if (local_15c == (void *)0x0) goto LAB_00011e48;
                __s = (undefined8 *)((int)local_15c + (local_154 * 0x80 - 0x80U));
                memset(__s,0,0x80);
                pcVar39 = (char *)*piVar14;
                *(undefined4 *)(__s + 0xb) = 0;
                *(undefined4 *)((int)__s + 0xc) = 0xffffffff;
                pcVar15 = (char *)(__s + 10);
                strcpy(pcVar15,DAT_00012cd8);
                pbVar28 = (byte *)(pcVar39 + -1);
                *(undefined4 *)(__s + 1) = 1;
                while( true ) {
                  pbVar28 = pbVar28 + 1;
                  bVar3 = *pbVar28;
                  sVar18 = *(size_t *)(__s + 1);
                  if (bVar3 == 0x3a || (bVar3 & 0xbf) == 0) break;
                  if (bVar3 == 0x2c) {
                    *(size_t *)(__s + 1) = sVar18 + 1;
                  }
                }
                sVar36 = 0;
                pvVar19 = calloc(sVar18,4);
                *(void **)((int)__s + 4) = pvVar19;
                pvVar20 = calloc(sVar18,4);
                *(void **)__s = pvVar20;
                pcVar33 = DAT_00012cdc;
                if ((pvVar19 != (void *)0x0) && (pvVar20 != (void *)0x0)) {
                  for (; sVar36 != sVar18; sVar36 = sVar36 + 1) {
                    pcVar10 = strpbrk(pcVar39,pcVar33);
                    local_b8.tv_sec = (__time_t)pcVar10;
                    if (pcVar10 == (char *)0x0) break;
                    pcVar39 = strndup(pcVar39,(int)pcVar10 - (int)pcVar39);
                    *(char **)((int)pvVar20 + sVar36 * 4) = pcVar39;
                    if (*pcVar10 != ',') break;
                    pcVar39 = pcVar10 + 1;
                  }
                  if ((sVar18 - 1 == sVar36) && ((char *)local_b8.tv_sec != (char *)0x0)) {
                    if (*(char *)local_b8.tv_sec == '@') {
                      uVar11 = strtoul((char *)(local_b8.tv_sec + 1),(char **)&local_b8,10);
                      *(ulong *)((int)__s + 0xc) = uVar11;
                    }
                    if (*(char *)local_b8.tv_sec == ':') {
                      pcVar33 = (char *)(local_b8.tv_sec + 1);
                      pcVar39 = strpbrk(pcVar33,DAT_00012ce0);
                      if (pcVar39 == (char *)0x0) {
                        sVar18 = strlen(pcVar33);
                        pcVar39 = pcVar33 + sVar18;
                      }
                      sVar18 = (int)pcVar39 - (int)pcVar33;
                      if (0x3e < sVar18) {
                        sVar18 = 0x3f;
                      }
                      strncpy((char *)(__s + 2),pcVar33,sVar18);
                      *(undefined1 *)((int)__s + sVar18 + 0x10) = 0;
                      if (*pcVar39 == '-') {
                        fVar42 = strtof(pcVar39 + 1,(char **)&local_b8);
                        *(float *)(__s + 0xb) = fVar42;
                        pcVar39 = (char *)local_b8.tv_sec;
                      }
                      if (*pcVar39 == '@') {
                        strncpy(pcVar15,pcVar39 + 1,4);
                        *(undefined1 *)((int)__s + 0x54) = 0;
                      }
                      iVar25 = FUN_00016ba4(pcVar15);
                      *(int *)((int)__s + 0x5c) = iVar25;
                      iVar13 = iVar35;
                      if (iVar25 != 0) goto LAB_00011d48;
LAB_0001227c:
                      fprintf((FILE *)*DAT_00012d84,DAT_00012cec,pcVar15);
                    }
                  }
                }
              }
            }
            local_14c = local_14c + 1;
            local_140 = realloc(local_140,local_14c * 0x40);
            pcVar15 = DAT_00012cf4;
            if (local_140 == (void *)0x0) goto LAB_00011e48;
            __s = (undefined8 *)((int)local_140 + (local_14c * 0x40 - 0x40U));
            *__s = auVar44._0_8_;
            __s[1] = auVar44._8_8_;
            __s[2] = 0;
            __s[3] = 0;
            __s[4] = 0;
            __s[5] = 0;
            __s[6] = 0;
            __s[7] = 0;
            iVar13 = sscanf((char *)*piVar14,pcVar15,__s,__s + 1,__s + 6);
          } while (iVar13 != 3);
          *(undefined4 *)((int)__s + 4) = 0;
          *(undefined1 *)(__s + 5) = 0;
          iVar13 = iVar35;
          goto LAB_00011d48;
        }
        DAT_00012ccc[1] = 1;
        iVar13 = iVar35;
      }
    }
    else if (__s == (undefined8 *)0x72) {
      bVar7 = true;
      iVar13 = iVar35;
    }
    else {
      if (0x72 < (int)__s) goto LAB_00011e8c;
      if (__s == (undefined8 *)0x66) {
        DAT_00012ccc[3] = 1;
        iVar13 = iVar35;
      }
      else if ((int)__s < 0x66) {
        DAT_00012ccc[4] = 1;
        iVar13 = iVar35;
      }
      else {
        if (__s != (undefined8 *)0x70) goto LAB_00011e84;
        DAT_00012ccc[2] = 1;
        *piVar17 = 1;
        iVar13 = iVar35;
      }
    }
    goto LAB_00011d48;
  }
  if (iVar13 == 0) {
    DAT_00012ccc[3] = 1;
    *piVar17 = 1;
    piVar17[2] = 1;
    piVar17[1] = 1;
    piVar17[4] = 1;
  }
  bVar5 = bVar6;
  if (local_154 != 0) {
    bVar5 = false;
  }
  if (bVar5) {
    pFVar26 = (FILE *)*DAT_00012d84;
    pcVar15 = DAT_00012cd0;
LAB_00011dac:
    fputs(pcVar15,pFVar26);
    return 0xffffffff;
  }
  if ((bool)(bVar7 & local_154 != 0)) {
    pFVar26 = (FILE *)*DAT_00012d84;
    pcVar15 = DAT_00012cf8;
    goto LAB_00011dac;
  }
  if ((bool)(bVar7 & local_158 != 0)) {
    pFVar26 = (FILE *)*DAT_00012d84;
    pcVar15 = DAT_00012cfc;
    goto LAB_00011dac;
  }
  *DAT_00012d78 = (uint)((local_154 == 0 && local_14c == 0) && local_158 == 0);
  if ((local_128 == 0 && local_138 == 0) && ((local_154 == 0 && local_14c == 0) && local_158 == 0))
  {
    iVar13 = open64(DAT_00012d00,2);
  }
  else {
    iVar13 = FUN_00016d24(local_128,local_138);
  }
  local_dc = CONCAT44(local_dc._4_4_,iVar13);
  if (iVar13 < 0) {
    return 0xffffffff;
  }
  if ((local_12c != 0) && (iVar13 = drmSetClientCap(), iVar13 != 0)) {
    pFVar26 = (FILE *)*DAT_00012d84;
    piVar14 = __errno_location();
    pcVar15 = strerror(*piVar14);
    fprintf(pFVar26,DAT_00012d04,pcVar15);
    drmClose((uint)local_dc);
    return 0xffffffff;
  }
  iStack_c0 = local_12c;
  piVar14 = calloc(1,0x28);
  if (piVar14 == (int *)0x0) {
    local_dc = local_dc & 0xffffffff;
    goto LAB_00012548;
  }
  uVar51 = 0;
  drmSetClientCap((uint)local_dc,(uint)local_dc,2,0,1);
  psVar16 = (size_t *)drmModeGetResources((uint)local_dc);
  if (psVar16 == (size_t *)0x0) {
    pFVar26 = (FILE *)*DAT_00012d84;
    piVar17 = __errno_location();
    pcVar15 = strerror(*piVar17);
    fprintf(pFVar26,DAT_00012d08,pcVar15);
    free(piVar14);
    local_dc = local_dc & 0xffffffff;
    goto LAB_00012548;
  }
  sVar36 = psVar16[6];
  sVar18 = psVar16[2];
  __nmemb = psVar16[4];
  __nmemb_00 = *psVar16;
  piVar14[3] = sVar36;
  piVar14[5] = __nmemb;
  piVar14[1] = sVar18;
  piVar14[7] = __nmemb_00;
  pvVar19 = calloc(sVar18,0x10);
  *piVar14 = (int)pvVar19;
  pvVar20 = calloc(sVar36,4);
  piVar14[2] = (int)pvVar20;
  pvVar21 = calloc(__nmemb,0x10);
  piVar14[4] = (int)pvVar21;
  pvVar22 = calloc(__nmemb_00,4);
  piVar14[6] = (int)pvVar22;
  pcVar15 = DAT_00012d8c;
  puVar27 = DAT_00012d84;
  uVar23 = DAT_00012d68;
  if (pvVar22 == (void *)0x0 ||
      (pvVar21 == (void *)0x0 || (pvVar19 == (void *)0x0 || pvVar20 == (void *)0x0))) {
    drmModeFreeResources(psVar16);
LAB_000125f8:
    FUN_0001520c(piVar14);
    local_dc = local_dc & 0xffffffff;
LAB_00012548:
    drmClose((uint)local_dc);
    return 1;
  }
  if ((*DAT_00012d78 == 0) || (DAT_00012ccc[2] != 0)) {
    for (iVar13 = 0; iVar13 < piVar14[1]; iVar13 = iVar13 + 1) {
      uVar24 = *(undefined4 *)(psVar16[3] + iVar13 * 4);
      iVar25 = *piVar14;
      uVar37 = drmModeGetCrtc((uint)local_dc,uVar24);
      uVar38 = (undefined4)((ulonglong)uVar51 >> 0x20);
      iVar35 = *piVar14;
      *(undefined4 *)(iVar25 + iVar13 * 0x10) = uVar37;
      if (*(int *)(iVar35 + iVar13 * 0x10) == 0) {
        pFVar26 = (FILE *)*puVar27;
        piVar17 = __errno_location();
        pcVar39 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar38,pcVar39);
        fprintf(pFVar26,pcVar15,uVar23,uVar24,pcVar39);
      }
    }
    if (*DAT_00012d78 != 0) goto LAB_0001262c;
LAB_00012938:
    pcVar15 = DAT_00012d8c;
    puVar27 = DAT_00012d84;
    uVar23 = DAT_00012d5c;
    for (iVar13 = 0; iVar13 < piVar14[3]; iVar13 = iVar13 + 1) {
      uVar24 = *(undefined4 *)(psVar16[7] + iVar13 * 4);
      iVar25 = piVar14[2];
      uVar37 = drmModeGetEncoder((uint)local_dc,uVar24);
      uVar38 = (undefined4)((ulonglong)uVar51 >> 0x20);
      iVar35 = piVar14[2];
      *(undefined4 *)(iVar25 + iVar13 * 4) = uVar37;
      if (*(int *)(iVar35 + iVar13 * 4) == 0) {
        pFVar26 = (FILE *)*puVar27;
        piVar17 = __errno_location();
        pcVar39 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar38,pcVar39);
        fprintf(pFVar26,pcVar15,uVar23,uVar24,pcVar39);
      }
    }
    if (*DAT_00012d78 != 0) goto LAB_0001263c;
LAB_00012964:
    pcVar15 = DAT_00012d8c;
    puVar27 = DAT_00012d84;
    uVar23 = DAT_00012d60;
    for (iVar13 = 0; iVar13 < piVar14[5]; iVar13 = iVar13 + 1) {
      uVar24 = *(undefined4 *)(psVar16[5] + iVar13 * 4);
      iVar25 = piVar14[4];
      uVar37 = drmModeGetConnector((uint)local_dc,uVar24);
      uVar38 = (undefined4)((ulonglong)uVar51 >> 0x20);
      iVar35 = piVar14[4];
      *(undefined4 *)(iVar25 + iVar13 * 0x10) = uVar37;
      if (*(int *)(iVar35 + iVar13 * 0x10) == 0) {
        pFVar26 = (FILE *)*puVar27;
        piVar17 = __errno_location();
        pcVar39 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar38,pcVar39);
        fprintf(pFVar26,pcVar15,uVar23,uVar24,pcVar39);
      }
    }
    if (*DAT_00012d78 != 0) goto LAB_0001264c;
LAB_00012990:
    pcVar15 = DAT_00012d8c;
    puVar27 = DAT_00012d84;
    uVar23 = DAT_00012d64;
    for (iVar13 = 0; iVar13 < piVar14[7]; iVar13 = iVar13 + 1) {
      uVar24 = *(undefined4 *)(psVar16[1] + iVar13 * 4);
      iVar25 = piVar14[6];
      uVar37 = drmModeGetFB((uint)local_dc,uVar24);
      uVar38 = (undefined4)((ulonglong)uVar51 >> 0x20);
      iVar35 = piVar14[6];
      *(undefined4 *)(iVar25 + iVar13 * 4) = uVar37;
      if (*(int *)(iVar35 + iVar13 * 4) == 0) {
        pFVar26 = (FILE *)*puVar27;
        piVar17 = __errno_location();
        pcVar39 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar38,pcVar39);
        fprintf(pFVar26,pcVar15,uVar23,uVar24,pcVar39);
      }
    }
  }
  else {
LAB_0001262c:
    if (DAT_00012ccc[4] != 0) goto LAB_00012938;
LAB_0001263c:
    if (DAT_00012ccc[1] != 0) goto LAB_00012964;
LAB_0001264c:
    if (DAT_00012ccc[3] != 0) goto LAB_00012990;
  }
  drmModeFreeResources(psVar16);
  pcVar15 = DAT_00012d74;
  if ((*DAT_00012d78 == 0) || (DAT_00012ccc[1] != 0)) {
    for (iVar13 = 0; iVar13 < piVar14[5]; iVar13 = iVar13 + 1) {
      iVar35 = piVar14[4];
      iVar25 = *(int *)(iVar35 + iVar13 * 0x10);
      uVar23 = FUN_00016ce4(*(undefined4 *)(iVar25 + 8));
      iVar35 = asprintf((char **)(iVar35 + iVar13 * 0x10 + 0xc),pcVar15,uVar23,
                        *(undefined4 *)(iVar25 + 0xc));
      if (iVar35 < 0) goto LAB_000125f8;
    }
    if (*DAT_00012d78 != 0) goto LAB_00012684;
LAB_00012b24:
    puVar27 = DAT_00012d84;
    uVar37 = DAT_00012d6c;
    uVar23 = DAT_00012d68;
    for (iVar13 = 0; iVar13 < piVar14[1]; iVar13 = iVar13 + 1) {
      iVar25 = *piVar14;
      iVar35 = iVar25 + iVar13 * 0x10;
      psVar16 = (size_t *)
                drmModeObjectGetProperties
                          ((uint)local_dc,**(undefined4 **)(iVar25 + iVar13 * 0x10),uVar37);
      uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
      *(size_t **)(iVar35 + 4) = psVar16;
      if (psVar16 == (size_t *)0x0) {
        pFVar26 = (FILE *)*puVar27;
        uVar38 = **(undefined4 **)(iVar25 + iVar13 * 0x10);
        piVar17 = __errno_location();
        pcVar15 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar24,pcVar15);
        fprintf(pFVar26,DAT_00012d90,uVar23,uVar38,pcVar15);
      }
      else {
        pvVar19 = calloc(*psVar16,4);
        *(void **)(iVar35 + 8) = pvVar19;
        if (pvVar19 != (void *)0x0) {
          uVar34 = 0;
          while( true ) {
            if (**(uint **)(iVar35 + 4) <= uVar34) break;
            iVar25 = *(int *)(iVar35 + 8);
            uVar24 = drmModeGetProperty((uint)local_dc,
                                        *(undefined4 *)((*(uint **)(iVar35 + 4))[1] + uVar34 * 4));
            *(undefined4 *)(iVar25 + uVar34 * 4) = uVar24;
            uVar34 = uVar34 + 1;
          }
        }
      }
    }
    if (*DAT_00012d78 != 0) goto LAB_00012694;
LAB_00012b54:
    puVar27 = DAT_00012d84;
    uVar37 = DAT_00012d70;
    uVar23 = DAT_00012d60;
    for (iVar13 = 0; iVar13 < piVar14[5]; iVar13 = iVar13 + 1) {
      iVar25 = piVar14[4];
      iVar35 = iVar25 + iVar13 * 0x10;
      psVar16 = (size_t *)
                drmModeObjectGetProperties
                          ((uint)local_dc,**(undefined4 **)(iVar25 + iVar13 * 0x10),uVar37);
      uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
      *(size_t **)(iVar35 + 4) = psVar16;
      if (psVar16 == (size_t *)0x0) {
        pFVar26 = (FILE *)*puVar27;
        uVar38 = **(undefined4 **)(iVar25 + iVar13 * 0x10);
        piVar17 = __errno_location();
        pcVar15 = strerror(*piVar17);
        uVar51 = CONCAT44(uVar24,pcVar15);
        fprintf(pFVar26,DAT_00012d90,uVar23,uVar38,pcVar15);
      }
      else {
        pvVar19 = calloc(*psVar16,4);
        *(void **)(iVar35 + 8) = pvVar19;
        if (pvVar19 != (void *)0x0) {
          uVar34 = 0;
          while( true ) {
            if (**(uint **)(iVar35 + 4) <= uVar34) break;
            iVar25 = *(int *)(iVar35 + 8);
            uVar24 = drmModeGetProperty((uint)local_dc,
                                        *(undefined4 *)((*(uint **)(iVar35 + 4))[1] + uVar34 * 4));
            *(undefined4 *)(iVar25 + uVar34 * 4) = uVar24;
            uVar34 = uVar34 + 1;
          }
        }
      }
    }
    if (*DAT_00012d78 != 0) goto LAB_000126a4;
LAB_00012b84:
    iVar13 = piVar14[1];
    for (iVar35 = 0; iVar35 < iVar13; iVar35 = iVar35 + 1) {
      *(int *)(*piVar14 + iVar35 * 0x10 + 0xc) = *(int *)(*piVar14 + iVar35 * 0x10) + 0x1c;
    }
  }
  else {
LAB_00012684:
    if (DAT_00012ccc[2] != 0) goto LAB_00012b24;
LAB_00012694:
    if (DAT_00012ccc[1] != 0) goto LAB_00012b54;
LAB_000126a4:
    if (DAT_00012ccc[2] != 0) goto LAB_00012b84;
  }
  psVar16 = (size_t *)drmModeGetPlaneResources((uint)local_dc);
  if (psVar16 == (size_t *)0x0) {
    pFVar26 = (FILE *)*DAT_00012d84;
    piVar17 = __errno_location();
    pcVar15 = strerror(*piVar17);
    fprintf(pFVar26,DAT_00012d0c,pcVar15);
  }
  else {
    sVar18 = *psVar16;
    piVar14[9] = sVar18;
    pvVar19 = calloc(sVar18,0xc);
    piVar14[8] = (int)pvVar19;
    puVar27 = DAT_00012da8;
    pcVar15 = DAT_00012d8c;
    uVar23 = DAT_00012d88;
    if (pvVar19 == (void *)0x0) {
      drmModeFreePlaneResources(psVar16);
      goto LAB_000125f8;
    }
    if ((*DAT_00012d78 == 0) || (*DAT_00012d7c != 0)) {
      for (iVar13 = 0; iVar13 < piVar14[9]; iVar13 = iVar13 + 1) {
        uVar24 = *(undefined4 *)(psVar16[1] + iVar13 * 4);
        iVar35 = piVar14[8];
        uVar37 = drmModeGetPlane((uint)local_dc,uVar24);
        uVar38 = (undefined4)((ulonglong)uVar51 >> 0x20);
        *(undefined4 *)(iVar35 + iVar13 * 0xc) = uVar37;
        if (*(int *)(piVar14[8] + iVar13 * 0xc) == 0) {
          pFVar26 = (FILE *)*puVar27;
          piVar17 = __errno_location();
          pcVar39 = strerror(*piVar17);
          uVar51 = CONCAT44(uVar38,pcVar39);
          fprintf(pFVar26,pcVar15,uVar23,uVar24,pcVar39);
        }
      }
    }
    drmModeFreePlaneResources(psVar16);
    uVar37 = DAT_00012d88;
    puVar27 = DAT_00012d84;
    uVar23 = DAT_00012d80;
    if ((*DAT_00012d78 == 0) || (*DAT_00012d7c != 0)) {
      for (iVar13 = 0; iVar13 < piVar14[9]; iVar13 = iVar13 + 1) {
        iVar31 = piVar14[8];
        iVar35 = iVar13 * 0xc;
        iVar25 = iVar31 + iVar35;
        psVar16 = (size_t *)
                  drmModeObjectGetProperties
                            ((uint)local_dc,*(undefined4 *)(*(int *)(iVar31 + iVar35) + 8),uVar23);
        uVar24 = (undefined4)((ulonglong)uVar51 >> 0x20);
        *(size_t **)(iVar25 + 4) = psVar16;
        if (psVar16 == (size_t *)0x0) {
          pFVar26 = (FILE *)*puVar27;
          uVar38 = *(undefined4 *)(*(int *)(iVar31 + iVar35) + 8);
          piVar17 = __errno_location();
          pcVar15 = strerror(*piVar17);
          uVar51 = CONCAT44(uVar24,pcVar15);
          fprintf(pFVar26,DAT_00012d90,uVar37,uVar38,pcVar15);
        }
        else {
          pvVar19 = calloc(*psVar16,4);
          *(void **)(iVar25 + 8) = pvVar19;
          if (pvVar19 != (void *)0x0) {
            for (uVar34 = 0; uVar34 < **(uint **)(iVar25 + 4); uVar34 = uVar34 + 1) {
              iVar35 = *(int *)(iVar25 + 8);
              uVar24 = drmModeGetProperty((uint)local_dc,
                                          *(undefined4 *)((*(uint **)(iVar25 + 4))[1] + uVar34 * 4))
              ;
              *(undefined4 *)(iVar35 + uVar34 * 4) = uVar24;
            }
          }
        }
      }
    }
  }
  pcVar15 = DAT_00012d14;
  local_dc = CONCAT44(piVar14,(uint)local_dc);
  if (DAT_00012ccc[4] != 0) {
    puts(DAT_00012d10);
    puts(DAT_00012d18);
    for (iVar13 = 0; iVar13 < *(int *)((int)local_dc._4_4_ + 0xc); iVar13 = iVar13 + 1) {
      puVar27 = *(undefined4 **)(*(int *)((int)local_dc._4_4_ + 8) + iVar13 * 4);
      if (puVar27 != (undefined4 *)0x0) {
        uVar24 = puVar27[2];
        uVar37 = *puVar27;
        uVar23 = FUN_00016c48(puVar27[1]);
        uVar51 = *(undefined8 *)(puVar27 + 3);
        printf(pcVar15,uVar37,uVar24,uVar23,puVar27[3]);
      }
    }
    putchar(10);
  }
  pcVar15 = DAT_00012d20;
  if (DAT_00012ccc[1] != 0) {
    puts(DAT_00012d1c);
    uVar23 = DAT_00012d24;
    puts(DAT_00012d28);
    for (iVar13 = 0; pcVar39 = DAT_00012d94, iVar13 < *(int *)((int)local_dc._4_4_ + 0x14);
        iVar13 = iVar13 + 1) {
      puVar27 = *(undefined4 **)(*(int *)((int)local_dc._4_4_ + 0x10) + iVar13 * 0x10);
      iVar35 = *(int *)((int)local_dc._4_4_ + 0x10) + iVar13 * 0x10;
      if (puVar27 != (undefined4 *)0x0) {
        uVar38 = *puVar27;
        uVar40 = puVar27[1];
        uVar24 = FUN_00016c84(puVar27[4]);
        uVar37 = DAT_00012d98;
        uVar51 = CONCAT44(puVar27[5],*(undefined4 *)(iVar35 + 0xc));
        printf(pcVar15,uVar38,uVar40,uVar24,*(undefined4 *)(iVar35 + 0xc),puVar27[5],puVar27[6],
               puVar27[8]);
        for (iVar25 = 0; iVar25 < (int)puVar27[0xd]; iVar25 = iVar25 + 1) {
          uVar24 = uVar23;
          if (iVar25 < 1) {
            uVar24 = uVar37;
          }
          printf(pcVar39,uVar24,*(undefined4 *)(puVar27[0xe] + iVar25 * 4));
        }
        putchar(10);
        if (puVar27[8] != 0) {
          puts(DAT_00012d9c);
          puts(DAT_00012da0);
          for (iVar25 = 0; iVar25 < (int)puVar27[8]; iVar25 = iVar25 + 1) {
            FUN_00014d5c(iVar25 * 0x44 + puVar27[9],iVar25);
          }
        }
        if (*(int *)(iVar35 + 4) != 0) {
          puts(DAT_00012da4);
          for (iVar25 = 0; piVar14 = *(int **)(iVar35 + 4), iVar25 < *piVar14; iVar25 = iVar25 + 1)
          {
            uVar51 = *(undefined8 *)(piVar14[2] + iVar25 * 8);
            FUN_00015684(&local_dc,*(undefined4 *)(*(int *)(iVar35 + 8) + iVar25 * 4),
                         *(undefined4 *)(piVar14[1] + iVar25 * 4));
          }
        }
      }
    }
    putchar(10);
  }
  pcVar15 = DAT_00012d30;
  if (DAT_00012ccc[2] != 0) {
    puts(DAT_00012d2c);
    pcVar33 = DAT_00012da4;
    pcVar39 = DAT_00012d34;
    puts(DAT_00012d38);
    for (iVar13 = 0; iVar13 < local_dc._4_4_[1]; iVar13 = iVar13 + 1) {
      puVar27 = *(undefined4 **)(*local_dc._4_4_ + iVar13 * 0x10);
      iVar35 = *local_dc._4_4_ + iVar13 * 0x10;
      if (puVar27 != (undefined4 *)0x0) {
        uVar51 = *(undefined8 *)(puVar27 + 3);
        printf(pcVar15,*puVar27,puVar27[1],puVar27[2],puVar27[3],puVar27[4],puVar27[5]);
        FUN_00014d5c(puVar27 + 7,0);
        if (*(int *)(iVar35 + 4) == 0) {
          puts(pcVar39);
        }
        else {
          puts(pcVar33);
          for (uVar34 = 0; puVar32 = *(uint **)(iVar35 + 4), uVar34 < *puVar32; uVar34 = uVar34 + 1)
          {
            uVar51 = *(undefined8 *)(puVar32[2] + uVar34 * 8);
            FUN_00015684(&local_dc,*(undefined4 *)(*(int *)(iVar35 + 8) + uVar34 * 4),
                         *(undefined4 *)(puVar32[1] + uVar34 * 4));
          }
        }
      }
    }
    putchar(10);
  }
  pcVar15 = DAT_00012d40;
  if (*DAT_00012ccc != 0) {
    puts(DAT_00012d3c);
    pcVar33 = DAT_00012d44;
    pcVar39 = DAT_00012d34;
    puts(DAT_00012d48);
    for (uVar34 = 0; uVar34 < *(uint *)((int)local_dc._4_4_ + 0x24); uVar34 = uVar34 + 1) {
      puVar32 = *(uint **)(*(int *)((int)local_dc._4_4_ + 0x20) + uVar34 * 0xc);
      iVar13 = *(int *)((int)local_dc._4_4_ + 0x20) + uVar34 * 0xc;
      if (puVar32 != (uint *)0x0) {
        uVar51 = *(undefined8 *)(puVar32 + 5);
        printf(pcVar15,puVar32[2],puVar32[3],puVar32[4],puVar32[5],puVar32[6],puVar32[7],puVar32[8],
               puVar32[10],puVar32[9]);
        if (*puVar32 != 0) {
          printf(pcVar33);
          for (uVar41 = 0; uVar41 < *puVar32; uVar41 = uVar41 + 1) {
            FUN_00014d30(*(undefined4 *)(puVar32[1] + uVar41 * 4));
          }
          putchar(10);
          if (*(int *)(iVar13 + 4) == 0) {
            puts(pcVar39);
          }
          else {
            puts(DAT_00012da4);
            for (uVar41 = 0; puVar32 = *(uint **)(iVar13 + 4), uVar41 < *puVar32;
                uVar41 = uVar41 + 1) {
              uVar51 = *(undefined8 *)(puVar32[2] + uVar41 * 8);
              FUN_00015684(&local_dc,*(undefined4 *)(*(int *)(iVar13 + 8) + uVar41 * 4),
                           *(undefined4 *)(puVar32[1] + uVar41 * 4));
            }
          }
        }
      }
    }
    putchar(10);
  }
  pcVar15 = DAT_00012d50;
  if (DAT_00012ccc[3] != 0) {
    puts(DAT_00012d4c);
    puts(DAT_00012d54);
    for (iVar13 = 0; iVar13 < *(int *)((int)local_dc._4_4_ + 0x1c); iVar13 = iVar13 + 1) {
      puVar27 = *(undefined4 **)(*(int *)((int)local_dc._4_4_ + 0x18) + iVar13 * 4);
      if (puVar27 != (undefined4 *)0x0) {
        uVar51 = CONCAT44((int)((ulonglong)uVar51 >> 0x20),puVar27[3]);
        printf(pcVar15,*puVar27,puVar27[1],puVar27[2],puVar27[3]);
      }
    }
    putchar(10);
  }
  for (iVar13 = 0; uVar23 = (undefined4)((ulonglong)uVar51 >> 0x20), iVar13 != local_14c;
      iVar13 = iVar13 + 1) {
    FUN_00014e88(&local_dc,(void *)((int)local_140 + iVar13 * 0x40));
  }
  if (iStack_c0 == 0) {
    if (local_158 == 0 && (local_154 == 0 && !bVar7)) goto LAB_00013570;
    uVar52 = ZEXT48(&local_110);
    local_110 = 0;
    iVar13 = drmGetCap((uint)local_dc);
    if (iVar13 == 0) {
      if (((uint)local_110 | local_110._4_4_) != 0) {
        if ((local_154 == 0 && !bVar7) ||
           (FUN_000162f4(&local_dc,local_15c,local_154,(uint)local_110 | local_110._4_4_,uVar52),
           local_158 != 0)) {
          iVar13 = 0;
          puVar27 = local_150 + 0xe;
LAB_00013a30:
          if (local_158 != iVar13) {
            pcVar39 = (char *)puVar27[-0xd];
            iVar35 = (int)local_dc._4_4_;
            iVar25 = FUN_000155c4(local_dc._4_4_,pcVar39);
            pcVar15 = DAT_0001380c;
            if (iVar25 != 0) {
              uVar34 = FUN_00015c08(iVar35,iVar25);
              for (iVar31 = 0; pcVar15 = DAT_00013804, iVar31 != *(int *)(iVar35 + 0x24);
                  iVar31 = iVar31 + 1) {
                piVar14 = *(int **)(*(int *)(iVar35 + 0x20) + iVar31 * 0xc);
                if ((piVar14 != (int *)0x0) &&
                   ((puVar27[-0xe] == 0 || (puVar27[-0xe] == piVar14[2])))) {
                  for (iVar29 = 0; iVar29 != *piVar14; iVar29 = iVar29 + 1) {
                    if (puVar27[2] == *(int *)(piVar14[1] + iVar29 * 4)) {
                      if (((uVar34 & piVar14[9]) != 0) &&
                         ((char *)piVar14[3] == (char *)0x0 || pcVar39 == (char *)piVar14[3])) {
                        iVar31 = piVar14[2];
                        fprintf((FILE *)*DAT_00013820,DAT_00013824,puVar27[-9],puVar27[-8],puVar27);
                        iVar35 = FUN_00015134((uint)local_dc,puVar27[2],puVar27[-9],puVar27[-8],
                                              *(undefined4 *)(DAT_00013828 + 0x14),puVar27 + -2,
                                              puVar27 + -4);
                        if (iVar35 != 0) goto LAB_00013cf4;
                        dVar46 = (double)VectorUnsignedToFloat
                                                   (puVar27[-9],(byte)(in_fpscr >> 0x16) & 3);
                        iVar35 = 0;
                        iVar29 = extraout_r2;
                        if (*(char *)(puVar27 + -0xc) != '\0') {
                          iVar35 = puVar27[-0xb];
                          iVar29 = puVar27[-10];
                        }
                        iVar1 = (int)(longlong)(dVar46 * *(double *)(puVar27 + -6));
                        dVar46 = (double)VectorUnsignedToFloat
                                                   (puVar27[-8],(byte)(in_fpscr >> 0x16) & 3);
                        iVar2 = (int)(longlong)(dVar46 * *(double *)(puVar27 + -6));
                        if (*(char *)(puVar27 + -0xc) == '\0') {
                          iVar35 = (int)((uint)*(ushort *)(*(int *)(iVar25 + 0xc) + 4) - iVar1) / 2;
                          iVar29 = (int)((uint)*(ushort *)(*(int *)(iVar25 + 0xc) + 0xe) - iVar2) /
                                   2;
                        }
                        iVar35 = drmModeSetPlane((uint)local_dc,iVar31,puVar27[-0xd],puVar27[-4],0,
                                                 iVar35,iVar29,iVar1,iVar2,0,0,puVar27[-9] << 0x10,
                                                 puVar27[-8] << 0x10);
                        if (iVar35 == 0) {
                          iVar13 = iVar13 + 1;
                          piVar14[3] = puVar27[-0xd];
                          puVar27 = puVar27 + 0x12;
                          goto LAB_00013a30;
                        }
                        pFVar26 = (FILE *)*DAT_00013820;
                        piVar14 = __errno_location();
                        pcVar39 = strerror(*piVar14);
                        pcVar15 = DAT_00013808;
                        goto LAB_00013a68;
                      }
                      break;
                    }
                  }
                }
              }
            }
            pFVar26 = (FILE *)*DAT_00013820;
LAB_00013a68:
            fprintf(pFVar26,pcVar15,pcVar39);
          }
        }
LAB_00013cf4:
        if (bVar9) {
          local_100 = auVar44._0_8_;
          uStack_f8 = auVar44._8_8_;
          local_f0 = local_100;
          local_e8 = uStack_f8;
          local_b8 = local_100;
          uStack_b0 = uStack_f8;
          uVar51 = drmGetCap((uint)local_dc);
          uVar23 = local_108[0];
          if ((int)uVar51 != 0) {
            uVar23 = 0x40;
          }
          iVar13 = drmGetCap((uint)local_dc,(int)((ulonglong)uVar51 >> 0x20),9,0,local_108);
          uVar37 = local_108[0];
          if (iVar13 != 0) {
            uVar37 = 0x40;
          }
          iVar13 = FUN_00014008((uint)local_dc,DAT_0001382c,uVar23,uVar37,&local_100,&local_f0,
                                &local_b8,1);
          if (iVar13 != 0) {
            pvVar19 = local_15c;
            local_c4 = iVar13;
            for (iVar35 = 0; local_154 != iVar35; iVar35 = iVar35 + 1) {
              iVar13 = FUN_00014a98((uint)local_dc,local_100.tv_sec,
                                    *(undefined4 *)((int)pvVar19 + 0xc),
                                    *(undefined2 *)(*(int *)((int)pvVar19 + 0x60) + 4),
                                    *(undefined2 *)(*(int *)((int)pvVar19 + 0x60) + 0xe),uVar23,
                                    uVar37);
              if (iVar13 != 0) {
                fprintf((FILE *)*DAT_00013820,DAT_00013810,*(undefined4 *)((int)pvVar19 + 0xc));
                goto LAB_00013da0;
              }
              pvVar19 = (void *)((int)pvVar19 + 0x80);
            }
            FUN_00014b28();
          }
        }
LAB_00013da0:
        if (bVar6) {
          iVar13 = FUN_00015134((uint)local_dc,*(undefined4 *)((int)local_15c + 0x5c),
                                (undefined4)local_d4,local_d4._4_4_,1,local_108,&local_114);
          if (iVar13 == 0) {
            for (iVar13 = 0; puVar27 = DAT_00013820, pcVar15 = DAT_00013818, local_154 != iVar13;
                iVar13 = iVar13 + 1) {
              if (*(int *)((int)local_15c + 0x60) != 0) {
                iVar35 = drmModePageFlip((uint)local_dc,*(undefined4 *)((int)local_15c + 0xc),
                                         local_114,1,local_15c);
                if (iVar35 != 0) {
                  pFVar26 = (FILE *)*DAT_00013820;
                  piVar14 = __errno_location();
                  pcVar15 = strerror(*piVar14);
                  fprintf(pFVar26,DAT_00013814,pcVar15);
                  goto LAB_00013b24;
                }
                gettimeofday((timeval *)((int)local_15c + 0x74),(__timezone_ptr_t)0x0);
                *(undefined4 *)((int)local_15c + 0x7c) = 0;
                *(int *)((int)local_15c + 0x68) = (int)local_cc;
                *(undefined4 *)((int)local_15c + 0x6c) = local_114;
                *(undefined4 *)((int)local_15c + 0x70) = local_114;
              }
              local_15c = (void *)((int)local_15c + 0x80);
            }
            uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_f0.tv_sec = 4;
            local_f0.tv_usec = 0;
            local_e8 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8),
                                DAT_0001381c);
            while( true ) {
              while( true ) {
                local_100.tv_sec = 3;
                local_100.tv_usec = 0;
                iVar13 = 0;
                ptVar30 = &local_b8;
                do {
                  ptVar30->tv_sec = 0;
                  iVar13 = iVar13 + 1;
                  ptVar30 = (timeval *)&ptVar30->tv_usec;
                } while (iVar13 != 0x20);
                local_b8 = (timeval)((ulonglong)local_b8 | 1);
                (&local_b8.tv_sec)[(uint)local_dc >> 5] =
                     (&local_b8.tv_sec)[(uint)local_dc >> 5] | 1 << ((uint)local_dc & 0x1f);
                iVar13 = select((uint)local_dc + 1,(fd_set *)&local_b8,(fd_set *)0x0,(fd_set *)0x0,
                                &local_100);
                if (0 < iVar13) break;
                fprintf((FILE *)*puVar27,pcVar15);
              }
              if (((ulonglong)local_b8 & 1) != 0) break;
              drmHandleEvent((uint)local_dc,&local_f0);
            }
LAB_00013b24:
            drmModeRmFB((uint)local_dc,local_114);
            FUN_00013fa0(local_108[0]);
          }
        }
        if (bVar8) {
          drmDropMaster((uint)local_dc);
        }
        pFVar26 = (FILE *)*DAT_00013830;
        if (pFVar26->_chain == (_IO_FILE *)0x0) {
          fgetc(pFVar26);
        }
        else if (pFVar26->_IO_write_base < pFVar26->_IO_write_end) {
          pFVar26->_IO_write_base = pFVar26->_IO_write_base + 1;
        }
        else {
          __fgetc_unlocked();
        }
        if ((bVar9) && (FUN_00014b68(), local_c4 != 0)) {
          FUN_00013fa0();
        }
        if (local_158 != 0) {
          puVar27 = local_150 + local_158 * 0x12;
          for (; puVar27 != local_150; local_150 = local_150 + 0x12) {
            if (local_150[10] != 0) {
              drmModeRmFB((uint)local_dc);
            }
            if (local_150[0xc] != 0) {
              FUN_00013fa0();
            }
          }
          if (local_154 == 0 && !bVar7) goto LAB_00013570;
        }
        if ((int)local_cc != 0) {
          drmModeRmFB((uint)local_dc);
        }
        if (local_cc._4_4_ != 0) {
          FUN_00013fa0();
        }
        goto LAB_00013570;
      }
    }
  }
  else {
    uVar51 = drmModeAtomicAlloc();
    local_bc = (undefined4)uVar51;
    if ((!bVar7) && (local_154 == 0 || local_158 == 0)) {
LAB_00013568:
      drmModeAtomicFree(local_bc);
LAB_00013570:
      FUN_0001520c(local_dc._4_4_);
      drmClose((uint)local_dc);
      return 0;
    }
    uVar43 = CONCAT44(uVar23,&local_f0);
    local_f0.tv_sec = 0;
    local_f0.tv_usec = 0;
    iVar13 = drmGetCap((uint)local_dc,(int)((ulonglong)uVar51 >> 0x20),1,0,&local_f0);
    if (iVar13 == 0) {
      if (local_f0.tv_sec != 0 || local_f0.tv_usec != 0) {
        if (local_154 != 0 || bVar7) {
          FUN_000162f4(&local_dc,local_15c,local_154);
        }
        if (local_158 != 0) {
          FUN_00016020(&local_dc,local_150,local_158,0);
        }
        iVar13 = drmModeAtomicCommit((uint)local_dc,local_bc,0x400,0);
        puVar27 = DAT_00013820;
        pcVar15 = DAT_000137c8;
        if (iVar13 != 0) {
          pFVar26 = (FILE *)*DAT_00012da8;
          pcVar15 = DAT_00012dac;
          goto LAB_00011e54;
        }
        if (bVar6) {
          auVar44._0_8_ = DAT_000137c0;
          gettimeofday((timeval *)((int)local_15c + 0x74),(__timezone_ptr_t)0x0);
          *(undefined4 *)((int)local_15c + 0x7c) = 0;
          while( true ) {
            drmModeAtomicFree(local_bc);
            local_bc = drmModeAtomicAlloc();
            FUN_00016020(&local_dc,local_150,local_158,1);
            iVar13 = drmModeAtomicCommit((uint)local_dc,local_bc,0x400,0);
            if (iVar13 != 0) break;
            iVar13 = *(int *)((int)local_15c + 0x7c) + 1;
            *(int *)((int)local_15c + 0x7c) = iVar13;
            if (iVar13 == 0x3c) {
              gettimeofday(&local_b8,(__timezone_ptr_t)0x0);
              dVar49 = (double)VectorSignedToFloat(*(undefined4 *)((int)local_15c + 0x7c),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar48 = (double)VectorSignedToFloat(local_b8.tv_usec,(byte)(in_fpscr >> 0x16) & 3);
              dVar46 = (double)VectorSignedToFloat(local_b8.tv_sec,(byte)(in_fpscr >> 0x16) & 3);
              dVar50 = (double)VectorSignedToFloat(*(undefined4 *)((int)local_15c + 0x78),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar47 = (double)VectorSignedToFloat(*(undefined4 *)((int)local_15c + 0x74),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar49 = dVar49 / ((dVar46 + dVar48 * auVar44._0_8_) -
                                (dVar47 + dVar50 * auVar44._0_8_));
              fprintf((FILE *)*puVar27,pcVar15,SUB84(dVar49,0),(int)((ulonglong)dVar49 >> 0x20));
              *(undefined4 *)((int)local_15c + 0x7c) = 0;
              ((timeval *)((int)local_15c + 0x74))->tv_sec = local_b8.tv_sec;
              *(__suseconds_t *)((int)local_15c + 0x78) = local_b8.tv_usec;
            }
          }
          fputs(DAT_000137cc,(FILE *)*DAT_00013820);
        }
        if (bVar8) {
          drmDropMaster((uint)local_dc);
        }
        pFVar26 = (FILE *)*DAT_00013830;
        if (pFVar26->_chain == (_IO_FILE *)0x0) {
          fgetc(pFVar26);
        }
        else if (pFVar26->_IO_write_base < pFVar26->_IO_write_end) {
          pFVar26->_IO_write_base = pFVar26->_IO_write_base + 1;
        }
        else {
          __fgetc_unlocked();
        }
        drmModeAtomicFree(local_bc);
        local_bc = drmModeAtomicAlloc();
        uVar37 = DAT_000137d4;
        uVar23 = DAT_000137d0;
        if (local_158 != 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = auVar44._8_8_;
          auVar44 = auVar4 << 0x40;
          puVar27 = local_150;
          for (iVar13 = 0; local_158 != iVar13; iVar13 = iVar13 + 1) {
            FUN_000150fc(&local_dc,*puVar27,uVar23,local_158,auVar44._0_8_);
            FUN_000150fc(&local_dc,*puVar27,uVar37);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137e0);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137e4);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137e8);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137ec);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137f0);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137f4);
            FUN_000150fc(&local_dc,*puVar27,DAT_000137f8);
            uVar43 = auVar44._0_8_;
            FUN_000150fc(&local_dc,*puVar27,DAT_000137fc);
            puVar27 = puVar27 + 0x12;
          }
        }
        uVar37 = DAT_000137d8;
        uVar23 = DAT_000137d4;
        if (local_154 != 0) {
          auVar45._8_8_ = 0;
          auVar45._0_8_ = auVar44._8_8_;
          auVar45 = auVar45 << 0x40;
          iVar13 = 0;
          do {
            if (*(int *)((int)local_15c + 0x60) != 0) {
              uVar34 = 0;
              while( true ) {
                if (*(uint *)((int)local_15c + 8) <= uVar34) break;
                iVar35 = uVar34 * 4;
                uVar34 = uVar34 + 1;
                FUN_000150fc(&local_dc,*(undefined4 *)(*(int *)((int)local_15c + 4) + iVar35),uVar23
                             ,*(int *)((int)local_15c + 4),auVar45._0_8_);
              }
              FUN_000150fc(&local_dc,*(undefined4 *)((int)local_15c + 0xc),uVar37,
                           *(uint *)((int)local_15c + 8),auVar45._0_8_);
              uVar43 = auVar45._0_8_;
              FUN_000150fc(&local_dc,*(undefined4 *)((int)local_15c + 0xc),DAT_00013800);
            }
            iVar13 = iVar13 + 1;
            local_15c = (void *)((int)local_15c + 0x80);
          } while (local_154 != iVar13);
        }
        iVar13 = drmModeAtomicCommit((uint)local_dc,local_bc,0x400,0,uVar43);
        if (iVar13 != 0) {
          fputs(DAT_000137dc,(FILE *)*DAT_00013820);
        }
        if (local_158 != 0) {
          puVar27 = local_150 + local_158 * 0x12;
          for (; puVar27 != local_150; local_150 = local_150 + 0x12) {
            if (local_150[10] != 0) {
              drmModeRmFB((uint)local_dc);
              local_150[10] = 0;
            }
            if (local_150[0xb] != 0) {
              drmModeRmFB((uint)local_dc);
              local_150[0xb] = 0;
            }
            if (local_150[0xc] != 0) {
              FUN_00013fa0();
              local_150[0xc] = 0;
            }
            if (local_150[0xd] != 0) {
              FUN_00013fa0();
              local_150[0xd] = 0;
            }
          }
        }
        goto LAB_00013568;
      }
    }
  }
  pFVar26 = (FILE *)*DAT_00012d84;
  pcVar15 = DAT_00012d58;
LAB_00011e54:
  fputs(pcVar15,pFVar26);
  return 1;
}



/* ===== entry @ 00013e88 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002d0e4)
            (DAT_00013ebc,param_2,&stack0x00000004,DAT_00013ec0,DAT_00013eb8,param_1);
  return;
}



/* ===== FUN_00013ec4 @ 00013ec4 size=32 ===== */

void FUN_00013ec4(void)

{
  if (DAT_00013ee8 == DAT_00013ee4) {
    return;
  }
  if (DAT_00013eec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013eec)();
  return;
}



/* ===== _FINI_0 @ 00013f28 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013f64;
  if (*DAT_00013f64 != '\0') {
    return;
  }
  FUN_00013ec4();
  if (DAT_00013f68 != 0) {
    __deregister_frame_info(DAT_00013f6c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013f70 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013f94 != 0) {
    __register_frame_info(DAT_00013f9c,DAT_00013f98);
  }
  if ((DAT_00013f20 - DAT_00013f1c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013f24 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013f24)();
  return;
}



/* ===== FUN_00013fa0 @ 00013fa0 size=92 ===== */

void FUN_00013fa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1[5];
  uStack_10 = param_3;
  iVar1 = drmIoctl(*param_1,DAT_00013ffc,&local_14,local_14,param_1);
  if (iVar1 != 0) {
    __stream = (FILE *)*DAT_00014000;
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,DAT_00014004,pcVar3);
  }
  free(param_1);
  return;
}



/* ===== FUN_00014008 @ 00014008 size=2140 ===== */

int * FUN_00014008(int param_1,uint param_2,undefined4 param_3,uint param_4,int *param_5,
                  uint *param_6,undefined4 *param_7,undefined4 param_8)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FILE *pFVar9;
  undefined4 uVar10;
  uint uVar11;
  void *local_64;
  int iStack_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_4c;
  uint uStack_48;
  int local_44;
  int local_40;
  uint uStack_3c;
  
  uVar7 = DAT_000148a0;
  uVar8 = DAT_00014864;
  local_64 = (void *)0x0;
  iStack_60 = 0;
  local_5c = 0;
  if (param_2 == DAT_00014864) goto LAB_000140ac;
  if (param_2 < DAT_00014864) {
    if (param_2 != DAT_00014868) {
      if (param_2 < DAT_00014868) {
        if (param_2 != DAT_0001486c) {
          if (param_2 < DAT_0001486c) {
            if (param_2 != DAT_0001486c - 0x10ef) {
              if (param_2 < DAT_0001486c - 0x10ef) {
                uVar6 = DAT_00014874;
                if (param_2 == DAT_00014870) goto LAB_00014094;
              }
              else {
                if (param_2 == DAT_00014878) goto LAB_000140ac;
                uVar6 = DAT_00014878 + 0x17;
              }
LAB_000141c0:
              if (param_2 != uVar6) goto LAB_0001415c;
            }
          }
          else if (param_2 != DAT_0001487c) {
            uVar6 = DAT_0001487c;
            if (param_2 < DAT_0001487c) {
              uVar6 = DAT_0001487c - 0x5fa;
            }
            if (DAT_0001487c < param_2) {
              if (param_2 == DAT_00014880) goto LAB_00014094;
              if (param_2 != DAT_00014880 + 0xfaeaf4) {
                uVar6 = DAT_00014880 - 0x40000;
                goto LAB_00014154;
              }
              goto LAB_000140f8;
            }
LAB_00014268:
            if (param_2 != uVar6) {
              uVar6 = uVar6 + 0x5ea;
              goto LAB_000141c0;
            }
          }
        }
        goto LAB_000140ac;
      }
      if (param_2 == DAT_00014884) {
LAB_00014094:
        uVar5 = 8;
        goto LAB_00014228;
      }
      if (param_2 < DAT_00014884) {
        if (param_2 != DAT_00014884 - 0x40d) {
          if (param_2 < DAT_00014884 - 0x40d) {
            if (param_2 != DAT_00014884 - 0x140d) {
              uVar6 = DAT_00014884 - 0x13f6;
              goto LAB_00014134;
            }
          }
          else if (param_2 != DAT_00014888) {
            uVar6 = DAT_00014888 + 0x301;
LAB_00014154:
            if (param_2 != uVar6) goto LAB_0001415c;
            goto LAB_00014094;
          }
        }
      }
      else if (param_2 != DAT_00014894) {
        if (DAT_00014894 <= param_2) {
          if ((param_2 != DAT_00014898) && (param_2 != DAT_00014898 + 0xef)) {
            uVar6 = DAT_00014898 - 0x10;
            goto LAB_000141c0;
          }
          goto LAB_000140ac;
        }
        if (param_2 != DAT_00014894 - 0x1f9) {
          uVar6 = DAT_00014894 - 0x10;
          goto LAB_00014134;
        }
        goto LAB_00014094;
      }
    }
LAB_000140f8:
    uVar5 = 0x10;
  }
  else {
    if (param_2 == DAT_0001489c) goto LAB_000140f8;
    if (param_2 < DAT_0001489c) {
      if (param_2 != DAT_0001489c - 0xfefff0) {
        if (DAT_0001489c - 0xfefff0 <= param_2) {
          if (param_2 != DAT_000148a8) {
            if (param_2 < DAT_000148a8) {
              if (param_2 != DAT_000148a8 - 0xff) {
                uVar6 = DAT_000148a8 - 0xef;
LAB_00014134:
                if (param_2 != uVar6) {
LAB_0001415c:
                  fprintf((FILE *)*DAT_0001488c,DAT_00014890,param_2);
                  return (int *)0x0;
                }
              }
            }
            else if ((param_2 != DAT_000148ac) && (param_2 != DAT_000148ac + 0x17)) {
              uVar6 = DAT_000148ac - 0xfe9;
              goto LAB_00014134;
            }
          }
          goto LAB_000140f8;
        }
        if (param_2 != DAT_0001489c - 0xff0601) {
          uVar6 = DAT_000148a4;
          if (DAT_0001489c - 0xff0601 <= param_2) goto LAB_00014268;
          if ((param_2 != DAT_0001489c - 0xff1100) && (param_2 != DAT_0001489c - 0xff10f0))
          goto LAB_0001415c;
          uVar5 = 0x18;
          goto LAB_00014228;
        }
      }
LAB_000140ac:
      uVar5 = 0x20;
    }
    else {
      if (param_2 != DAT_000148b0) {
        if (param_2 < DAT_000148b0) {
          if (param_2 != DAT_000148b4) {
            if (DAT_000148b4 <= param_2) {
              uVar6 = DAT_000148bc;
              if (param_2 == DAT_000148b8) goto LAB_00014094;
LAB_00014310:
              if (param_2 != uVar6) goto LAB_0001415c;
              goto LAB_00014318;
            }
            if (param_2 != DAT_000148b4 - 0xffef00) {
              uVar6 = DAT_000148b4 - 0x10;
              goto LAB_00014134;
            }
          }
        }
        else if (param_2 != DAT_000148c0) {
          if (param_2 < DAT_000148c0) {
            if (param_2 != DAT_000148c4) {
              uVar6 = DAT_000148c4 + 0x17;
              goto LAB_00014310;
            }
            goto LAB_00014318;
          }
          if ((param_2 != DAT_000148c8) && (param_2 != DAT_000148c8 + 0xffff)) {
            uVar6 = DAT_000148c8 + 0xfd03fc03;
            goto LAB_00014134;
          }
        }
        goto LAB_000140f8;
      }
LAB_00014318:
      uVar5 = 0x40;
    }
  }
LAB_00014228:
  if (param_2 == DAT_000148a0) {
LAB_00014398:
    uVar6 = param_4 * 3 >> 1;
  }
  else {
    uVar6 = param_4;
    if (DAT_000148a0 <= param_2) {
      if (param_2 != DAT_000148cc) {
        if (param_2 == DAT_000148cc + 0x3fffff5) goto LAB_000143dc;
        if (param_2 != DAT_000148cc - 0xb) goto LAB_000143a0;
      }
      goto LAB_00014398;
    }
    if (param_2 == DAT_000148a0 - 0xfeff0b) goto LAB_00014398;
    if (param_2 == DAT_000148a0 - 0xfaff0b) {
LAB_000143dc:
      uVar6 = param_4 << 1;
    }
  }
LAB_000143a0:
  __ptr = calloc(1,0x18);
  if (__ptr == (int *)0x0) {
    fputs(DAT_000148d0,(FILE *)*DAT_0001488c);
    return (int *)0x0;
  }
  uVar10 = 0;
  uVar11 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_4c = 0;
  local_40 = 0;
  local_58 = uVar6;
  local_54 = param_3;
  uStack_50 = uVar5;
  uStack_48 = uVar11;
  uStack_3c = uVar11;
  iVar1 = drmIoctl(param_1,DAT_000148d4,&local_58);
  if (iVar1 != 0) {
    pFVar9 = (FILE *)*DAT_0001488c;
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(pFVar9,DAT_000148d8,pcVar3);
    free(__ptr);
    return (int *)0x0;
  }
  __ptr[2] = local_40;
  *__ptr = param_1;
  __ptr[4] = local_44;
  __ptr[5] = uStack_48;
  local_58 = uStack_48;
  local_54 = uVar10;
  uStack_50 = uVar10;
  local_4c = uVar11;
  iVar1 = drmIoctl(param_1,DAT_000148dc,&local_58);
  if ((iVar1 != 0) ||
     (pvVar4 = mmap64((void *)0x0,__ptr[2],3,1,*__ptr,CONCAT44(local_4c,uStack_50)),
     pvVar4 == (void *)0xffffffff)) {
    pFVar9 = (FILE *)*DAT_0001488c;
    piVar2 = __errno_location();
    pcVar3 = strerror(-*piVar2);
    fprintf(pFVar9,DAT_000148e0,pcVar3);
    FUN_00013fa0(__ptr);
    return (int *)0x0;
  }
  __ptr[1] = (int)pvVar4;
  if (param_2 != uVar8) {
    if (param_2 < uVar8) {
      if (param_2 != DAT_00014868) {
        if (param_2 < DAT_00014868) {
          if (param_2 != DAT_0001486c) {
            if (param_2 < DAT_0001486c) {
              if (param_2 != DAT_0001486c - 0x10ef) {
                uVar8 = DAT_00014878;
                if (DAT_0001486c - 0x10ef <= param_2) goto LAB_0001452c;
                uVar8 = DAT_00014874;
                if (param_2 != DAT_00014870) goto LAB_00014698;
              }
            }
            else if (param_2 != DAT_0001487c) {
              uVar6 = DAT_0001487c;
              if (param_2 < DAT_0001487c) {
                uVar6 = DAT_0001487c - 0x5fa;
              }
              if (DAT_0001487c < param_2) {
                if (param_2 != DAT_00014880) {
                  if (param_2 == DAT_00014880 + 0xfaeaf4) goto LAB_00014508;
                  if (param_2 != DAT_00014880 - 0x40000) goto LAB_00014588;
                }
LAB_000147b4:
                iVar1 = __ptr[5];
                *param_7 = 0;
                uVar8 = __ptr[4];
                *param_5 = iVar1;
                *param_6 = uVar8;
                param_6[1] = uVar8;
                param_7[1] = param_4 * uVar8;
                param_5[1] = iVar1;
                iStack_60 = (int)pvVar4 + param_7[1];
                local_64 = pvVar4;
                goto LAB_00014588;
              }
LAB_0001470c:
              if (param_2 != uVar6) {
                uVar8 = uVar6 + 0x5ea;
                goto LAB_00014698;
              }
            }
          }
        }
        else {
          if (param_2 == DAT_00014884) goto LAB_000147b4;
          if (param_2 < DAT_00014884) {
            uVar6 = DAT_00014884 - 0x40d;
            if (param_2 != uVar6) {
              uVar8 = uVar6;
              if (param_2 < uVar6) {
                uVar8 = DAT_00014884 - 0x140d;
              }
              if (uVar6 < param_2) {
                if (param_2 != DAT_00014888) {
                  if (param_2 != uVar7) goto LAB_00014588;
                  goto LAB_00014608;
                }
              }
              else {
LAB_0001452c:
                if (param_2 != uVar8) {
                  uVar8 = uVar8 + 0x17;
                  goto LAB_00014698;
                }
              }
            }
          }
          else if (param_2 != DAT_00014894) {
            if (param_2 < DAT_00014894) {
              if (param_2 == DAT_00014894 - 0x1f9) {
LAB_00014608:
                iVar1 = __ptr[5];
                *param_7 = 0;
                uVar8 = __ptr[4];
                *param_5 = iVar1;
                *param_6 = uVar8;
                param_6[1] = uVar8 >> 1;
                param_7[1] = param_4 * uVar8;
                param_5[1] = iVar1;
                param_6[2] = param_6[1];
                param_7[2] = param_7[1] + (param_4 * param_6[1] >> 1);
                param_5[2] = iVar1;
                iStack_60 = (int)pvVar4 + param_7[1];
                local_5c = (int)pvVar4 + param_7[2];
                local_64 = pvVar4;
                goto LAB_00014588;
              }
              uVar8 = DAT_00014894 - 0x10;
            }
            else {
              if ((param_2 == DAT_00014898) || (param_2 == DAT_00014898 + 0xef)) goto LAB_00014508;
              uVar8 = DAT_00014898 - 0x10;
            }
LAB_00014698:
            if (param_2 != uVar8) goto LAB_00014588;
          }
        }
      }
    }
    else if (param_2 != DAT_0001489c) {
      if (param_2 < DAT_0001489c) {
        if (param_2 != DAT_0001489c - 0xfefff0) {
          if (param_2 < DAT_0001489c - 0xfefff0) {
            uVar7 = DAT_0001489c - 0xff0601;
            if (param_2 != uVar7) {
              uVar8 = uVar7;
              if (param_2 < uVar7) {
                uVar8 = DAT_0001489c - 0xff1100;
              }
              uVar6 = DAT_000148a4;
              if (uVar7 < param_2) goto LAB_0001470c;
LAB_00014734:
              if (param_2 != uVar8) {
                uVar8 = uVar8 + 0x10;
                goto LAB_00014698;
              }
            }
          }
          else if (param_2 != DAT_000148a8) {
            if (param_2 < DAT_000148a8) {
              uVar8 = DAT_000148a8 - 0xff;
              goto LAB_00014734;
            }
            if ((param_2 != DAT_000148ac) && (param_2 != DAT_000148ac + 0x17)) {
              uVar8 = DAT_000148ac - 0xfe9;
              goto LAB_00014698;
            }
          }
        }
      }
      else if (param_2 != DAT_000148b0) {
        if (param_2 < DAT_000148b0) {
          if (param_2 != DAT_000148b4) {
            if (param_2 < DAT_000148b4) {
              if (param_2 == DAT_000148b4 - 0xffef00) goto LAB_00014508;
              uVar8 = DAT_000148b4 - 0x10;
            }
            else {
              uVar8 = DAT_000148bc;
              if (param_2 == DAT_000148b8) goto LAB_000147b4;
            }
            goto LAB_00014698;
          }
        }
        else if (param_2 != DAT_000148c0) {
          uVar8 = DAT_000148c0;
          if (param_2 < DAT_000148c0) {
            uVar8 = DAT_000148c4;
          }
          if (param_2 <= DAT_000148c0) goto LAB_0001452c;
          if ((param_2 != DAT_000148c8) && (param_2 != DAT_000148c8 + 0xffff)) {
            uVar8 = DAT_000148c8 + 0xfd03fc03;
            goto LAB_00014698;
          }
        }
      }
    }
  }
LAB_00014508:
  *param_7 = 0;
  *param_5 = __ptr[5];
  *param_6 = __ptr[4];
  local_64 = pvVar4;
LAB_00014588:
  FUN_000175b8(param_2,param_8,&local_64,param_3,param_4,*param_6);
  if ((void *)__ptr[1] != (void *)0x0) {
    munmap((void *)__ptr[1],__ptr[2]);
    __ptr[1] = 0;
    return __ptr;
  }
  return __ptr;
}



/* ===== FUN_000148e4 @ 000148e4 size=168 ===== */

void FUN_000148e4(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_r3;
  code *pcVar5;
  int iVar6;
  
  iVar3 = DAT_00014990;
  puVar2 = DAT_0001498c;
  while (puVar2[99] != 0) {
    uVar4 = *puVar2;
    iVar1 = (uVar4 % 0xd) * 0x10;
    for (iVar6 = 0; iVar6 < (int)puVar2[0x61]; iVar6 = iVar6 + 1) {
      pcVar5 = *(code **)(iVar3 + (uVar4 % 0xd) * 0x10);
      (*pcVar5)(iVar6 * 0x30 + DAT_00014994,iVar3 + iVar1,DAT_00014994,pcVar5,in_r3);
    }
    if (puVar2[0x62] < *(uint *)(iVar3 + iVar1 + 8)) {
      puVar2[0x62] = puVar2[0x62] + 1;
    }
    else {
      puVar2[0x62] = 0;
      *puVar2 = *puVar2 + 1;
    }
    usleep(*(int *)(iVar3 + iVar1 + 4) * 1000);
  }
  return;
}



/* ===== FUN_00014998 @ 00014998 size=68 ===== */

void FUN_00014998(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(DAT_000149dc + 0x188);
  uVar2 = (*(uint *)(param_2 + 0xc) ^ uVar1) & 1;
  param_1[7] = uVar2;
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  if (uVar2 != 0) {
    uVar1 = param_1[1];
  }
  drmModeSetCursor(*param_1,param_1[2],uVar1,param_1[5],param_1[6],param_2,param_3);
  return;
}



/* ===== FUN_00014a98 @ 00014a98 size=128 ===== */

void FUN_00014a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,uint param_7)

{
  int iVar1;
  undefined4 extraout_r0;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00014b18;
  iVar3 = *(int *)(DAT_00014b18 + 0x184);
  if (7 < iVar3) {
    iVar3 = 0x14ac8;
    __assert(DAT_00014b24,DAT_00014b20,0xab);
    param_1 = extraout_r0;
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar2 = iVar3 * 0x30 + iVar1;
  *(undefined4 *)(iVar2 + 0xc) = param_3;
  *(undefined4 *)(iVar2 + 0x10) = param_4;
  *(undefined4 *)(iVar2 + 4) = param_1;
  *(undefined4 *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = param_5;
  *(uint *)(iVar2 + 0x18) = param_6;
  *(uint *)(iVar2 + 0x1c) = param_7;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(uint *)(iVar2 + 0x24) = param_6 >> 1;
  *(uint *)(iVar2 + 0x28) = param_7 >> 1;
  *(undefined4 *)(iVar2 + 0x2c) = 1;
  *(undefined4 *)(iVar2 + 0x30) = 1;
  *(int *)(iVar1 + 0x184) = iVar3 + 1;
  return;
}



/* ===== FUN_00014b28 @ 00014b28 size=52 ===== */

undefined4 FUN_00014b28(void)

{
  pthread_t *__newthread;
  
  __newthread = (pthread_t *)(DAT_00014b5c + 400);
  *(undefined4 *)(DAT_00014b5c + 0x18c) = 1;
  pthread_create(__newthread,(pthread_attr_t *)0x0,DAT_00014b60,(void *)0x0);
  puts(DAT_00014b64);
  return 0;
}



/* ===== FUN_00014b68 @ 00014b68 size=44 ===== */

undefined4 FUN_00014b68(void)

{
  pthread_t *ppVar1;
  
  ppVar1 = (pthread_t *)(DAT_00014b94 + 400);
  *(undefined4 *)(DAT_00014b94 + 0x18c) = 0;
  pthread_join(*ppVar1,(void **)0x0);
  puts(DAT_00014b98);
  return 0;
}



/* ===== FUN_00014ba0 @ 00014ba0 size=48 ===== */

float FUN_00014ba0(undefined4 *param_1)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  dVar2 = (double)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = (double)VectorSignedToFloat((uint)*(ushort *)(param_1 + 5) *
                                      (uint)*(ushort *)((int)param_1 + 10),
                                      (byte)(in_fpscr >> 0x16) & 3);
  return (float)((dVar2 * DAT_00014bd0) / dVar1);
}



/* ===== FUN_00014bd8 @ 00014bd8 size=260 ===== */

void FUN_00014bd8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00014cdc;
  fprintf((FILE *)*DAT_00014cdc,DAT_00014ce0,param_1);
  fputs(DAT_00014ce4,(FILE *)*puVar1);
  fputs(DAT_00014ce8,(FILE *)*puVar1);
  fputs(DAT_00014cec,(FILE *)*puVar1);
  fputs(DAT_00014cf0,(FILE *)*puVar1);
  fputs(DAT_00014cf4,(FILE *)*puVar1);
  fputs(DAT_00014cf8,(FILE *)*puVar1);
  fputs(DAT_00014cfc,(FILE *)*puVar1);
  fputs(DAT_00014d00,(FILE *)*puVar1);
  fputs(DAT_00014d04,(FILE *)*puVar1);
  fputs(DAT_00014d08,(FILE *)*puVar1);
  fputs(DAT_00014d0c,(FILE *)*puVar1);
  fputs(DAT_00014d10,(FILE *)*puVar1);
  fputs(DAT_00014d14,(FILE *)*puVar1);
  fputs(DAT_00014d18,(FILE *)*puVar1);
  fputs(DAT_00014d1c,(FILE *)*puVar1);
  fputs(DAT_00014d20,(FILE *)*puVar1);
  fputs(DAT_00014d24,(FILE *)*puVar1);
  fputs(DAT_00014d28,(FILE *)*puVar1);
  fputs(DAT_00014d2c,(FILE *)*puVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00014d30 @ 00014d30 size=40 ===== */

void FUN_00014d30(uint param_1,undefined4 param_2,undefined4 param_3)

{
  printf(DAT_00014d58,param_1,param_1 >> 8,param_1 >> 0x10,param_1 >> 0x18,param_2,param_3);
  return;
}



/* ===== FUN_00014d5c @ 00014d5c size=268 ===== */

void FUN_00014d5c(int param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float extraout_s0;
  double dVar19;
  
  pcVar2 = DAT_00014e6c;
  iVar17 = DAT_00014e68;
  puVar5 = (undefined4 *)FUN_00014ba0();
  uVar3 = DAT_00014e70;
  dVar19 = (double)extraout_s0;
  uVar16 = 0;
  uVar7 = *puVar5;
  uVar8 = (uint)*(ushort *)(puVar5 + 5);
  uVar9 = (uint)*(ushort *)((int)puVar5 + 0x12);
  uVar10 = (uint)*(ushort *)(puVar5 + 4);
  uVar11 = (uint)*(ushort *)((int)puVar5 + 0xe);
  uVar12 = (uint)*(ushort *)((int)puVar5 + 10);
  uVar13 = (uint)*(ushort *)(puVar5 + 2);
  uVar14 = (uint)*(ushort *)((int)puVar5 + 6);
  uVar15 = (uint)*(ushort *)(puVar5 + 1);
  printf(DAT_00014e74,extraout_r1,puVar5 + 9,uVar15,dVar19,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10
         ,uVar9,uVar8,uVar7);
  printf(DAT_00014e78);
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar6 = DAT_00014e7c;
  do {
    uVar1 = iVar18 >> (uVar16 & 0xff);
    if ((uVar1 & 1) != 0) {
      printf(pcVar2,uVar6,*(undefined4 *)(iVar17 + uVar16 * 4),uVar1,dVar19,uVar15,uVar14,uVar13,
             uVar12,uVar11,uVar10,uVar9,uVar8,uVar7);
      uVar6 = uVar3;
    }
    iVar4 = DAT_00014e84;
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0xe);
  printf(DAT_00014e80,uVar6);
  uVar3 = DAT_00014e70;
  pcVar2 = DAT_00014e6c;
  iVar17 = *(int *)(param_1 + 0x20);
  uVar8 = 0;
  uVar6 = DAT_00014e7c;
  do {
    if ((iVar17 >> (uVar8 & 0xff) & 1U) != 0) {
      printf(pcVar2,uVar6,*(undefined4 *)(iVar4 + uVar8 * 4));
      uVar6 = uVar3;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 7);
  putchar(10);
  return;
}



/* ===== FUN_00014e88 @ 00014e88 size=584 ===== */

undefined4 FUN_00014e88(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  FILE *__stream;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar10 = DAT_000150d0;
  piVar5 = (int *)param_1[1];
  iVar6 = 0;
  iVar12 = piVar5[1];
  param_2[1] = 0;
  iVar9 = 0;
  param_2[0xb] = 0;
  piVar7 = (int *)0x0;
  while (uVar1 = DAT_000150dc, iVar3 = DAT_000150d8, iVar6 < iVar12) {
    iVar11 = *piVar5 + iVar6 * 0x10;
    iVar3 = iVar6 * 0x10;
    iVar6 = iVar6 + 1;
    if (**(int **)(*piVar5 + iVar3) == *param_2) {
      param_2[1] = iVar10;
      piVar7 = *(int **)(iVar11 + 4);
      iVar9 = *(int *)(iVar11 + 8);
    }
  }
  uVar8 = DAT_000150d4;
  if (param_2[1] == 0) {
    iVar6 = piVar5[5];
    iVar10 = 0;
    while (uVar2 = DAT_000150e4, iVar12 = DAT_000150e0, iVar10 < iVar6) {
      iVar11 = piVar5[4] + iVar10 * 0x10;
      iVar12 = iVar10 * 0x10;
      iVar10 = iVar10 + 1;
      if (**(int **)(piVar5[4] + iVar12) == *param_2) {
        param_2[1] = iVar3;
        piVar7 = *(int **)(iVar11 + 4);
        iVar9 = *(int *)(iVar11 + 8);
        uVar8 = uVar1;
      }
    }
    if (param_2[1] == 0) {
      iVar6 = piVar5[9];
      iVar10 = 0;
      while (iVar10 < iVar6) {
        iVar3 = iVar10 * 0xc;
        iVar10 = iVar10 + 1;
        iVar11 = piVar5[8] + iVar3;
        if (*(int *)(*(int *)(piVar5[8] + iVar3) + 8) == *param_2) {
          param_2[1] = iVar12;
          piVar7 = *(int **)(iVar11 + 4);
          iVar9 = *(int *)(iVar11 + 8);
          uVar8 = uVar2;
        }
      }
    }
  }
  iVar10 = param_2[1];
  if (iVar10 == 0) {
    fprintf((FILE *)*DAT_000150e8,DAT_000150ec,*param_2);
  }
  else {
    if (piVar7 == (int *)0x0) {
      fprintf((FILE *)*DAT_000150e8,DAT_000150f0,uVar8,*param_2);
      return 0;
    }
    iVar12 = *piVar7;
    for (iVar6 = 0; iVar6 < iVar12; iVar6 = iVar6 + 1) {
      iVar3 = *(int *)(iVar9 + iVar6 * 4);
      if ((iVar3 != 0) && (iVar3 = strcmp((char *)(iVar3 + 8),(char *)(param_2 + 2)), iVar3 == 0))
      goto LAB_0001505c;
    }
    if (iVar12 != iVar6) {
LAB_0001505c:
      iVar9 = param_2[0xd];
      iVar6 = *(int *)(piVar7[1] + iVar6 * 4);
      param_2[0xb] = iVar6;
      iVar10 = drmModeObjectSetProperty(*param_1,*param_2,iVar10,iVar6,param_2[0xc],iVar9);
      if (iVar10 < 0) {
        iVar10 = *param_2;
        __stream = (FILE *)*DAT_000150e8;
        piVar5 = __errno_location();
        iVar6 = param_2[0xc];
        iVar12 = param_2[0xd];
        pcVar4 = strerror(*piVar5);
        fprintf(__stream,DAT_000150f8,uVar8,iVar10,param_2 + 2,iVar9,iVar6,iVar12,pcVar4);
      }
      return 1;
    }
    if ((char)param_2[0xe] == '\0') {
      fprintf((FILE *)*DAT_000150e8,DAT_000150f4,uVar8,*param_2,param_2 + 2);
      return 0;
    }
  }
  return 0;
}



/* ===== FUN_000150fc @ 000150fc size=56 ===== */

void FUN_000150fc(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 local_48 [2];
  char acStack_40 [40];
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_48[0] = param_2;
  strcpy(acStack_40,param_3);
  local_18 = param_5;
  uStack_14 = param_6;
  FUN_00014e88(param_1,local_48);
  return;
}



/* ===== FUN_00015134 @ 00015134 size=208 ===== */

undefined4
FUN_00015134(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  FILE *__stream;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  iVar1 = FUN_00014008();
  if (iVar1 != 0) {
    iVar2 = drmModeAddFB2(param_1,param_3,param_4,param_2,&local_58,&local_48,&local_38,&local_5c,0)
    ;
    if (iVar2 == 0) {
      *param_6 = iVar1;
      *param_7 = local_5c;
      return 0;
    }
    __stream = (FILE *)*DAT_00015204;
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    fprintf(__stream,DAT_00015208,param_3,param_4,pcVar4);
    FUN_00013fa0(iVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_0001520c @ 0001520c size=944 ===== */

void FUN_0001520c(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = DAT_000155bc;
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*DAT_000155bc == 0) || (*DAT_000155c0 != 0)) {
    for (iVar4 = 0; iVar4 < param_1[9]; iVar4 = iVar4 + 1) {
      for (uVar5 = 0; iVar3 = param_1[8] + iVar4 * 0xc, pvVar2 = *(void **)(iVar3 + 8),
          uVar5 < **(uint **)(iVar3 + 4); uVar5 = uVar5 + 1) {
        drmModeFreeProperty(*(undefined4 *)((int)pvVar2 + uVar5 * 4));
      }
      free(pvVar2);
      drmModeFreeObjectProperties(*(undefined4 *)(param_1[8] + iVar4 * 0xc + 4));
    }
    if ((*piVar1 != 0) && (*DAT_000155c0 == 0)) goto LAB_00015238;
    if (param_1[8] != 0) {
      for (iVar4 = 0; (iVar4 < param_1[9] && (*(int *)(param_1[8] + iVar4 * 0xc) != 0));
          iVar4 = iVar4 + 1) {
        drmModeFreePlane();
      }
      free((void *)param_1[8]);
    }
    if (*piVar1 != 0) goto LAB_00015238;
LAB_00015354:
    for (iVar4 = 0; iVar4 < param_1[5]; iVar4 = iVar4 + 1) {
      for (uVar5 = 0; iVar3 = param_1[4] + iVar4 * 0x10, pvVar2 = *(void **)(iVar3 + 8),
          uVar5 < **(uint **)(iVar3 + 4); uVar5 = uVar5 + 1) {
        drmModeFreeProperty(*(undefined4 *)((int)pvVar2 + uVar5 * 4));
      }
      free(pvVar2);
      drmModeFreeObjectProperties(*(undefined4 *)(param_1[4] + iVar4 * 0x10 + 4));
    }
    if (*piVar1 != 0) goto LAB_00015248;
LAB_000153f4:
    for (iVar4 = 0; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
      for (uVar5 = 0; iVar3 = *param_1 + iVar4 * 0x10, pvVar2 = *(void **)(iVar3 + 8),
          uVar5 < **(uint **)(iVar3 + 4); uVar5 = uVar5 + 1) {
        drmModeFreeProperty(*(undefined4 *)((int)pvVar2 + uVar5 * 4));
      }
      free(pvVar2);
      drmModeFreeObjectProperties(*(undefined4 *)(*param_1 + iVar4 * 0x10 + 4));
    }
    if (*piVar1 != 0) goto LAB_00015258;
LAB_00015460:
    for (iVar4 = 0; iVar4 < param_1[5]; iVar4 = iVar4 + 1) {
      free(*(void **)(param_1[4] + iVar4 * 0x10 + 0xc));
    }
    if (*piVar1 != 0) goto LAB_00015268;
LAB_0001547c:
    if (param_1[6] != 0) {
      for (iVar4 = 0; (iVar4 < param_1[7] && (*(int *)(param_1[6] + iVar4 * 4) != 0));
          iVar4 = iVar4 + 1) {
        drmModeFreeFB();
      }
      free((void *)param_1[6]);
    }
    if (*piVar1 != 0) goto LAB_00015278;
LAB_00015498:
    if (param_1[4] != 0) {
      for (iVar4 = 0; (iVar4 < param_1[5] && (*(int *)(param_1[4] + iVar4 * 0x10) != 0));
          iVar4 = iVar4 + 1) {
        drmModeFreeConnector();
      }
      free((void *)param_1[4]);
    }
    if (*piVar1 != 0) goto LAB_00015288;
LAB_000154b4:
    if (param_1[2] != 0) {
      for (iVar4 = 0; (iVar4 < param_1[3] && (*(int *)(param_1[2] + iVar4 * 4) != 0));
          iVar4 = iVar4 + 1) {
        drmModeFreeEncoder();
      }
      free((void *)param_1[2]);
    }
    if (*piVar1 != 0) goto LAB_00015298;
  }
  else {
LAB_00015238:
    if (DAT_000155c0[1] != 0) goto LAB_00015354;
LAB_00015248:
    if (DAT_000155c0[2] != 0) goto LAB_000153f4;
LAB_00015258:
    if (DAT_000155c0[1] != 0) goto LAB_00015460;
LAB_00015268:
    if (DAT_000155c0[3] != 0) goto LAB_0001547c;
LAB_00015278:
    if (DAT_000155c0[1] != 0) goto LAB_00015498;
LAB_00015288:
    if (DAT_000155c0[4] != 0) goto LAB_000154b4;
LAB_00015298:
    if (DAT_000155c0[2] == 0) goto LAB_000152a8;
  }
  if (*param_1 != 0) {
    for (iVar4 = 0; (iVar4 < param_1[1] && (*(int *)(*param_1 + iVar4 * 0x10) != 0));
        iVar4 = iVar4 + 1) {
      drmModeFreeCrtc();
    }
    free((void *)*param_1);
  }
LAB_000152a8:
  free(param_1);
  return;
}



/* ===== FUN_000155c4 @ 000155c4 size=72 ===== */

int FUN_000155c4(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  while( true ) {
    if (param_1[1] <= iVar1) {
      return 0;
    }
    piVar2 = *(int **)(*param_1 + iVar1 * 0x10);
    if ((piVar2 != (int *)0x0) && (*piVar2 == param_2)) break;
    iVar1 = iVar1 + 1;
  }
  return *param_1 + iVar1 * 0x10;
}



/* ===== FUN_0001560c @ 0001560c size=112 ===== */

void FUN_0001560c(void)

{
  char *__format;
  char *__format_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = drmModeGetPropertyBlob();
  __format_00 = DAT_00015680;
  __format = DAT_0001567c;
  if (iVar1 == 0) {
    putchar(10);
    return;
  }
  iVar3 = *(int *)(iVar1 + 8);
  for (uVar2 = 0; uVar2 < *(uint *)(iVar1 + 4); uVar2 = uVar2 + 1) {
    if ((uVar2 & 0xf) == 0) {
      printf(__format);
    }
    printf(__format_00,(uint)*(byte *)(iVar3 + uVar2));
  }
  putchar(10);
  drmModeFreePropertyBlob(iVar1);
  return;
}



/* ===== FUN_00015684 @ 00015684 size=1264 ===== */

void FUN_00015684(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  char *__format;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void *__ptr;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  int iStack_2c;
  
  printf(DAT_00015b74,param_3);
  if (param_2 == 0) goto LAB_000156b0;
  printf(DAT_00015b78,(char *)(param_2 + 8));
  printf(DAT_00015b7c);
  if ((*(uint *)(param_2 + 4) & 1) != 0) {
    printf(DAT_00015b80);
  }
  if ((*(uint *)(param_2 + 4) & 4) != 0) {
    printf(DAT_00015b84);
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x80) {
    printf(DAT_00015b88);
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 2) {
    printf(DAT_00015b8c);
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 8) {
    printf(DAT_00015b90);
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x20) {
    printf(DAT_00015b94);
  }
  iVar10 = 0xfffa;
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x10) {
    printf(DAT_00015b98);
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x40) {
    printf(DAT_00015b9c);
  }
  putchar(10);
  pcVar3 = DAT_00015ba4;
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x80) {
    printf(DAT_00015ba0);
    for (iVar10 = 0; iVar10 < *(int *)(param_2 + 0x28); iVar10 = iVar10 + 1) {
      printf(pcVar3);
    }
    putchar(10);
  }
  pcVar3 = DAT_00015ba8;
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 2) {
    printf(DAT_00015ba0);
    for (iVar10 = 0; iVar10 < *(int *)(param_2 + 0x28); iVar10 = iVar10 + 1) {
      printf(pcVar3);
    }
    putchar(10);
  }
  __format = DAT_00015bcc;
  pcVar3 = DAT_00015bb0;
  uVar9 = *(uint *)(param_2 + 4) & 0xfffa;
  if (uVar9 == 8) {
    printf(DAT_00015bac);
    for (iVar10 = 0; iVar10 < *(int *)(param_2 + 0x30); iVar10 = iVar10 + 1) {
      puVar6 = (undefined4 *)(iVar10 * 0x28 + *(int *)(param_2 + 0x34));
      printf(pcVar3,puVar6 + 2,*puVar6,puVar6[1]);
    }
LAB_00015860:
    putchar(10);
  }
  else {
    if (uVar9 == 0x20) {
      printf(DAT_00015ba0);
      for (iVar10 = 0; iVar10 < *(int *)(param_2 + 0x30); iVar10 = iVar10 + 1) {
        uVar9 = *(uint *)(*(int *)(param_2 + 0x34) + iVar10 * 0x28);
        printf(__format,*(int *)(param_2 + 0x34) + iVar10 * 0x28 + 8,1 << (uVar9 & 0xff),
               0 << (uVar9 & 0xff) | 1 << (uVar9 - 0x20 & 0xff) | 1U >> (0x20 - uVar9 & 0xff));
      }
      goto LAB_00015860;
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      iVar8 = 0x189;
      pcVar3 = DAT_00015bd8;
      goto LAB_000159fc;
    }
  }
  if ((*(uint *)(param_2 + 4) & 0xfffa) == 0x10) {
    puts(DAT_00015bb4);
    for (iVar10 = 0; iVar10 < *(int *)(param_2 + 0x38); iVar10 = iVar10 + 1) {
LAB_00015a00:
      FUN_0001560c(*param_1,*(undefined4 *)(*(int *)(param_2 + 0x3c) + iVar10 * 4));
    }
    putchar(10);
  }
  else if (*(int *)(param_2 + 0x38) != 0) {
    iVar8 = 0x192;
    pcVar3 = DAT_00015bdc;
LAB_000159fc:
    __assert(pcVar3,DAT_00015bd4,iVar8);
    goto LAB_00015a00;
  }
  printf(DAT_00015bb8);
  uVar9 = *(uint *)(param_2 + 4) & 0xfffa;
  if (uVar9 == 0x10) {
    FUN_0001560c(*param_1,param_5);
  }
  else {
    pcVar3 = DAT_00015be0;
    if (uVar9 != 0x80) {
      pcVar3 = DAT_00015be4;
    }
    printf(pcVar3);
  }
  iVar10 = strcmp((char *)(param_2 + 8),DAT_00015bbc);
  if (iVar10 != 0) {
    return;
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_30 = 0;
  local_40 = 0;
  iStack_2c = iStack_3c;
  puts(DAT_00015bc0);
  iVar10 = drmModeGetPropertyBlob(*param_1,param_5);
  uVar1 = DAT_00015bc8;
  pcVar3 = DAT_00015bc4;
  if (iVar10 != 0) {
    iVar8 = 0;
    while (iVar5 = drmModeFormatModifierBlobIterNext(iVar10,&local_40), iVar5 != 0) {
      uVar7 = uVar1;
      if ((iVar8 == 0) ||
         (bVar11 = iVar8 != local_38, uVar7 = DAT_00015be8, iVar8 = local_38, bVar11)) {
        printf(DAT_00015c00,uVar7);
        iVar8 = local_38;
        FUN_00014d30(local_38);
        printf(pcVar3);
      }
      iVar2 = iStack_2c;
      iVar5 = local_30;
      pvVar4 = (void *)drmGetFormatModifierName(local_30,iStack_2c);
      __ptr = (void *)drmGetFormatModifierVendor(iVar5,iVar2);
      memset(DAT_00015bec,0,0x1000);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = __ptr;
        if (__ptr == (void *)0x0) {
          pvVar4 = DAT_00015bf8;
        }
        snprintf(DAT_00015bec,0x1000,DAT_00015bf4,pvVar4,DAT_00015bf0);
      }
      else {
        if (iVar5 == 0 && iVar2 == 0) {
          snprintf(DAT_00015bec,0x1000,DAT_00015c04,pvVar4);
        }
        else {
          snprintf(DAT_00015bec,0x1000,DAT_00015bf4,__ptr,pvVar4);
        }
        free(pvVar4);
      }
      free(__ptr);
      printf(DAT_00015bfc,DAT_00015bec);
    }
    putchar(10);
    drmModeFreePropertyBlob(iVar10);
    return;
  }
LAB_000156b0:
  putchar(10);
  return;
}



/* ===== FUN_00015c08 @ 00015c08 size=68 ===== */

int FUN_00015c08(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(int *)*param_2 == **(int **)(*param_1 + uVar1 * 0x10)) break;
    uVar1 = uVar1 + 1;
  }
  return 1 << (uVar1 & 0xff);
}



/* ===== FUN_00015c4c @ 00015c4c size=200 ===== */

void FUN_00015c4c(undefined4 param_1)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int in_stack_00000000;
  timeval local_18;
  
  iVar1 = *(int *)(in_stack_00000000 + 0x68);
  if (*(int *)(in_stack_00000000 + 0x70) == iVar1) {
    iVar1 = *(int *)(in_stack_00000000 + 0x6c);
  }
  drmModePageFlip(param_1,*(undefined4 *)(in_stack_00000000 + 0xc),iVar1,1,in_stack_00000000);
  *(int *)(in_stack_00000000 + 0x70) = iVar1;
  iVar1 = *(int *)(in_stack_00000000 + 0x7c) + 1;
  *(int *)(in_stack_00000000 + 0x7c) = iVar1;
  if (iVar1 == 0x3c) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    dVar5 = (double)VectorSignedToFloat(*(undefined4 *)(in_stack_00000000 + 0x7c),
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (double)VectorSignedToFloat(local_18.tv_usec,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = (double)VectorSignedToFloat(local_18.tv_sec,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)VectorSignedToFloat(*(undefined4 *)(in_stack_00000000 + 0x78),
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (double)VectorSignedToFloat(*(__time_t *)(in_stack_00000000 + 0x74),
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar5 = dVar5 / ((dVar2 + dVar4 * DAT_00015d18) - (dVar3 + dVar6 * DAT_00015d18));
    fprintf((FILE *)*DAT_00015d20,DAT_00015d24,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
    *(undefined4 *)(in_stack_00000000 + 0x7c) = 0;
    *(__time_t *)(in_stack_00000000 + 0x74) = local_18.tv_sec;
    *(__suseconds_t *)(in_stack_00000000 + 0x78) = local_18.tv_usec;
  }
  return;
}



/* ===== FUN_00015d28 @ 00015d28 size=332 ===== */

int FUN_00015d28(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  
  iVar7 = *(int *)(param_2 + 8);
  uVar10 = 0;
  uVar11 = 0xffffffff;
  for (iVar13 = 0; iVar7 != iVar13; iVar13 = iVar13 + 1) {
    iVar12 = *(int *)(param_1 + 4);
    iVar8 = 0;
    while( true ) {
      if (*(int *)(iVar12 + 0x14) <= iVar8) goto LAB_00015dac;
      piVar16 = *(int **)(*(int *)(iVar12 + 0x10) + iVar8 * 0x10);
      if ((piVar16 != (int *)0x0) && (*(int *)(*(int *)(param_2 + 4) + iVar13 * 4) == *piVar16))
      break;
      iVar8 = iVar8 + 1;
    }
    iVar8 = piVar16[0xd];
    uVar15 = 0;
    for (iVar14 = 0; iVar14 < iVar8; iVar14 = iVar14 + 1) {
      for (iVar6 = 0; iVar6 < *(int *)(iVar12 + 0xc); iVar6 = iVar6 + 1) {
        piVar9 = *(int **)(*(int *)(iVar12 + 8) + iVar6 * 4);
        if ((piVar9 != (int *)0x0) && (*(int *)(piVar16[0xe] + iVar14 * 4) == *piVar9)) {
          uVar15 = uVar15 | piVar9[3];
          iVar6 = FUN_000155c4(iVar12,piVar9[2]);
          if (iVar6 != 0) {
            uVar5 = FUN_00015c08(iVar12);
            uVar10 = uVar10 | uVar5;
          }
          break;
        }
      }
    }
    uVar11 = uVar11 & uVar15;
  }
  if (uVar11 == 0) {
LAB_00015dac:
    iVar7 = 0;
  }
  else {
    uVar10 = uVar11 & uVar10;
    if (uVar10 == 0) {
      bVar2 = (byte)uVar11;
      bVar3 = (byte)(uVar11 >> 8);
      bVar4 = (byte)(uVar11 >> 0x10);
      bVar1 = (byte)(uVar11 >> 0x18);
      uVar10 = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                               bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
               (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
               (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
               (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                               bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                            bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
    }
    else {
      bVar2 = (byte)uVar10;
      bVar3 = (byte)(uVar10 >> 8);
      bVar4 = (byte)(uVar10 >> 0x10);
      bVar1 = (byte)(uVar10 >> 0x18);
      uVar10 = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                               bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
               (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
               (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
               (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                               bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                            bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
    }
    iVar7 = **(int **)(param_1 + 4) + LZCOUNT(uVar10) * 0x10;
  }
  return iVar7;
}



/* ===== FUN_00015e74 @ 00015e74 size=404 ===== */

void FUN_00015e74(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  FILE *__stream;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint local_e2c;
  undefined2 auStack_e28 [256];
  undefined2 auStack_c28 [256];
  undefined4 local_a28 [2];
  char acStack_a20 [40];
  ulonglong local_9f8;
  undefined1 local_9f0;
  undefined2 local_828 [1026];
  
  iVar8 = 0;
  local_e2c = 0;
  puVar4 = local_828;
  if (param_3 == DAT_00016008) {
    FUN_00017448(0x100);
    drmModeCreatePropertyBlob(*param_1,local_828,0x800,&local_e2c);
  }
  else {
    do {
      iVar1 = iVar8 << 8;
      iVar8 = iVar8 + 1;
      uVar2 = (undefined2)iVar1;
      puVar4[2] = uVar2;
      puVar4[1] = uVar2;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 4;
    } while (iVar8 != 0x100);
  }
  local_a28[0] = param_2;
  strcpy(acStack_a20,DAT_0001600c);
  local_9f0 = 1;
  local_9f8 = 0;
  FUN_00014e88(param_1,local_a28);
  local_a28[0] = param_2;
  strcpy(acStack_a20,DAT_00016010);
  local_9f0 = 1;
  local_9f8 = 0;
  FUN_00014e88(param_1,local_a28);
  uVar3 = local_e2c;
  local_a28[0] = param_2;
  strcpy(acStack_a20,DAT_00016014);
  local_9f8 = (ulonglong)uVar3;
  local_9f0 = 1;
  iVar8 = FUN_00014e88(param_1,local_a28);
  if (iVar8 == 0) {
    iVar8 = 0x100;
    puVar4 = auStack_c28;
    puVar7 = local_828;
    puVar9 = auStack_e28;
    puVar10 = local_a28;
    do {
      iVar8 = iVar8 + -1;
      *puVar9 = *puVar7;
      *puVar4 = puVar7[1];
      *(undefined2 *)puVar10 = puVar7[2];
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 1;
      puVar10 = (undefined4 *)((int)puVar10 + 2);
    } while (iVar8 != 0);
    iVar8 = drmModeCrtcSetGamma(*param_1,param_2,0x100,auStack_e28,auStack_c28,local_a28);
    if (iVar8 != 0) {
      __stream = (FILE *)*DAT_00016018;
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      fprintf(__stream,DAT_0001601c,pcVar6);
    }
  }
  return;
}



/* ===== FUN_00016020 @ 00016020 size=664 ===== */

void FUN_00016020(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint in_fpscr;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  int local_3c [2];
  
  uVar8 = *DAT_000162b8;
  iVar6 = 0;
  iVar5 = param_2 + 0x38;
  while( true ) {
    if (iVar6 == param_3) {
      return;
    }
    if (iVar6 == 0) {
      FUN_00015e74(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x40));
    }
    else {
      uVar8 = *(undefined4 *)(DAT_000162bc + 0x14);
    }
    uVar7 = *(undefined4 *)(iVar5 + -0x34);
    iVar3 = FUN_000155c4(param_1[1],uVar7);
    if (iVar3 == 0) break;
    if (param_4 == 0) {
      fprintf((FILE *)*DAT_000162c0,DAT_000162c8,*(undefined4 *)(iVar5 + -0x24),
              *(undefined4 *)(iVar5 + -0x20),iVar5,*(undefined4 *)(iVar5 + -0x38),uVar7);
    }
    local_3c[0] = *(int *)(iVar5 + -4);
    *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(iVar5 + -8);
    if ((local_3c[0] == 0) &&
       (iVar4 = FUN_00015134(*param_1,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + -0x24),
                             *(undefined4 *)(iVar5 + -0x20),uVar8,local_3c,iVar5 + -0x10),
       iVar4 != 0)) {
      return;
    }
    dVar11 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar5 + -0x24),(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar5 + -0x20),(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(iVar5 + -8) = local_3c[0];
    bVar9 = *(char *)(iVar5 + -0x30) != '\0';
    *(undefined4 *)(iVar5 + -0xc) = *(undefined4 *)(iVar5 + -0x10);
    iVar4 = 0;
    if (bVar9) {
      iVar4 = *(int *)(iVar5 + -0x2c);
    }
    iVar2 = (int)(longlong)(dVar11 * *(double *)(iVar5 + -0x18));
    if (bVar9) {
      iVar3 = *(int *)(iVar5 + -0x28);
    }
    uVar1 = (ulonglong)(dVar10 * *(double *)(iVar5 + -0x18));
    if (!bVar9) {
      iVar4 = (int)((uint)*(ushort *)(*(int *)(iVar3 + 0xc) + 4) - iVar2) / 2;
      iVar3 = (int)((uint)*(ushort *)(*(int *)(iVar3 + 0xc) + 0xe) - (int)uVar1) / 2;
    }
    iVar6 = iVar6 + 1;
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162cc,iVar4,
                 *(undefined4 *)(iVar5 + -0x10),0);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162d0);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162d4);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162d8);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162dc);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162e0);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162e4,iVar4 >> 0x1f,iVar4,
                 iVar4 >> 0x1f);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162e8,iVar3 >> 0x1f,iVar3,
                 iVar3 >> 0x1f);
    uVar12 = VectorShiftRight(CONCAT44(iVar2,iVar2),0x20);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162ec,iVar2,uVar12);
    VectorShiftRight(uVar1 & 0xffffffff | uVar1 << 0x20,0x20);
    FUN_000150fc(param_1,*(undefined4 *)(iVar5 + -0x38),DAT_000162f0);
    iVar5 = iVar5 + 0x48;
  }
  fprintf((FILE *)*DAT_000162c0,DAT_000162c4,uVar7);
  return;
}



/* ===== FUN_000162f4 @ 000162f4 size=2136 ===== */

void FUN_000162f4(undefined4 *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  ushort uVar2;
  double dVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  char *__s2;
  undefined4 *puVar7;
  undefined4 *__ptr;
  undefined4 *puVar8;
  int extraout_r1;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  ulong *puVar12;
  undefined4 uVar13;
  FILE *__stream;
  char *pcVar14;
  int iVar15;
  int iVar16;
  size_t __nmemb;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  int local_9c;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  uint uStack_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  
  dVar3 = DAT_000165e8;
  pcVar14 = (char *)((int)param_2 + 0x10);
  for (local_9c = 0; local_9c != param_3; local_9c = local_9c + 1) {
    for (uVar19 = 0; uVar11 = *(uint *)(pcVar14 + -8), uVar19 < uVar11; uVar19 = uVar19 + 1) {
      uVar4 = strtoul(*(char **)(*(int *)(pcVar14 + -0x10) + uVar19 * 4),&local_80,10);
      __s2 = *(char **)(*(int *)(pcVar14 + -0x10) + uVar19 * 4);
      if (__s2 == local_80) {
        iVar15 = 0;
        iVar18 = param_1[1];
        iVar16 = *(int *)(iVar18 + 0x14);
        while( true ) {
          if (iVar16 <= iVar15) goto LAB_00016450;
          puVar21 = (undefined4 *)(*(int *)(iVar18 + 0x10) + iVar15 * 0x10);
          iVar17 = strcmp((char *)puVar21[3],__s2);
          if (iVar17 == 0) break;
          iVar15 = iVar15 + 1;
        }
        puVar12 = (ulong *)*puVar21;
        if (puVar12 == (ulong *)0x0) {
LAB_00016450:
          __stream = (FILE *)*DAT_00016610;
          pcVar14 = DAT_000165f4;
          goto LAB_00016460;
        }
        uVar4 = *puVar12;
      }
      *(ulong *)(*(int *)(pcVar14 + -0xc) + uVar19 * 4) = uVar4;
    }
    pcVar14[0x50] = '\0';
    pcVar14[0x51] = '\0';
    pcVar14[0x52] = '\0';
    pcVar14[0x53] = '\0';
    iVar16 = 0;
    for (iVar18 = 0; iVar18 < (int)uVar11; iVar18 = iVar18 + 1) {
      fVar24 = *(float *)(pcVar14 + 0x48);
      iVar16 = 0;
      while( true ) {
        if (*(int *)(param_1[1] + 0x14) <= iVar16) goto LAB_00016498;
        piVar6 = *(int **)(*(int *)(param_1[1] + 0x10) + iVar16 * 0x10);
        if ((piVar6 != (int *)0x0) && (*(int *)(*(int *)(pcVar14 + -0xc) + iVar18 * 4) == *piVar6))
        break;
        iVar16 = iVar16 + 1;
      }
      iVar15 = piVar6[8];
      if (iVar15 == 0) {
LAB_00016498:
        uVar13 = *(undefined4 *)(*(int *)(pcVar14 + -0x10) + iVar18 * 4);
        if (fVar24 == 0.0) {
          fprintf((FILE *)*DAT_00016610,DAT_000165fc,pcVar14);
        }
        else {
          fprintf((FILE *)*DAT_00016610,DAT_000165f8,pcVar14,uVar13,(double)fVar24,uVar13);
        }
        goto LAB_000164d0;
      }
      if (*pcVar14 == '#') {
        iVar16 = atoi(pcVar14 + 1);
        if (iVar15 <= iVar16 || iVar16 < 0) goto LAB_00016498;
        iVar16 = iVar16 * 0x44 + piVar6[9];
      }
      else {
        iVar17 = 0;
        while( true ) {
          if (iVar15 <= iVar17) goto LAB_00016498;
          iVar16 = iVar17 * 0x44 + piVar6[9];
          iVar5 = strcmp((char *)(iVar16 + 0x24),pcVar14);
          if ((iVar5 == 0) &&
             ((fVar24 == 0.0 ||
              (fVar23 = (float)FUN_00014ba0(iVar16), (double)ABS(fVar23 - fVar24) < dVar3)))) break;
          iVar17 = iVar17 + 1;
        }
      }
      if (iVar16 == 0) goto LAB_00016498;
    }
    if (*(int *)(pcVar14 + -4) == -1) {
      puVar21 = (undefined4 *)FUN_00015d28(param_1,pcVar14 + -0x10);
      puVar7 = (undefined4 *)*puVar21;
      *(undefined4 **)(pcVar14 + 0x54) = puVar21;
      *(undefined4 *)(pcVar14 + -4) = *puVar7;
    }
    else {
      uVar13 = FUN_000155c4(param_1[1]);
      *(undefined4 *)(pcVar14 + 0x54) = uVar13;
    }
    if (*(int *)(pcVar14 + 0x54) == 0) {
      fputs(DAT_000165f0,(FILE *)*DAT_00016610);
    }
    else {
      *(int *)(pcVar14 + 0x50) = iVar16;
      *(int *)(*(int *)(pcVar14 + 0x54) + 0xc) = iVar16;
    }
LAB_000164d0:
    pcVar14 = pcVar14 + 0x80;
  }
  iVar16 = param_3;
  if (param_3 == 0) {
    iVar18 = param_1[1];
    __nmemb = 0;
    for (iVar16 = 0; iVar16 < *(int *)(iVar18 + 0x14); iVar16 = iVar16 + 1) {
      iVar15 = *(int *)(*(int *)(iVar18 + 0x10) + iVar16 * 0x10);
      if ((iVar15 != 0) && (*(int *)(iVar15 + 0x10) == 1)) {
        __nmemb = __nmemb + 1;
      }
    }
    if (__nmemb == 0) {
      puts(DAT_00016600);
    }
    else {
      param_2 = calloc(__nmemb,0x80);
      if (param_2 != (void *)0x0) {
        iVar16 = 0;
        for (local_9c = 0; iVar16 < (int)__nmemb && local_9c < *(int *)(iVar18 + 0x14);
            local_9c = local_9c + 1) {
          puVar21 = *(undefined4 **)(*(int *)(iVar18 + 0x10) + local_9c * 0x10);
          if ((puVar21 != (undefined4 *)0x0) && (puVar21[4] == 1)) {
            pvVar9 = (void *)((int)param_2 + iVar16 * 0x80);
            pcVar14 = calloc(8,1);
            if (pcVar14 != (char *)0x0) {
              sprintf(pcVar14,DAT_00016618,*puVar21);
              strcpy((char *)((int)pvVar9 + 0x50),(char *)DAT_0001663c);
              uVar13 = FUN_00016ba4();
              *(undefined4 *)((int)pvVar9 + 0x5c) = uVar13;
              *(undefined4 *)((int)pvVar9 + 8) = 1;
              puVar7 = calloc(1,4);
              *(undefined4 **)((int)pvVar9 + 4) = puVar7;
              __ptr = calloc(1,4);
              *(undefined4 **)((int)param_2 + iVar16 * 0x80) = __ptr;
              if (__ptr != (undefined4 *)0x0 && puVar7 != (undefined4 *)0x0) {
                *puVar7 = *puVar21;
                *__ptr = pcVar14;
                puVar8 = (undefined4 *)FUN_00015d28(param_1,pvVar9);
                *(undefined4 **)((int)pvVar9 + 100) = puVar8;
                if (puVar8 != (undefined4 *)0x0) {
                  iVar5 = puVar21[8];
                  *(undefined4 *)((int)pvVar9 + 0xc) = *(undefined4 *)*puVar8;
                  iVar17 = puVar21[9];
                  *(int *)((int)pvVar9 + 0x60) = iVar17;
                  for (iVar15 = 0; iVar15 < iVar5; iVar15 = iVar15 + 1) {
                    if ((*(uint *)(iVar17 + 0x20) & 8) != 0) {
                      *(int *)((int)pvVar9 + 0x60) = iVar17;
                      break;
                    }
                    iVar17 = iVar17 + 0x44;
                  }
                  iVar16 = iVar16 + 1;
                  sprintf((char *)((int)pvVar9 + 0x10),DAT_00016620,
                          (uint)*(ushort *)(*(int *)((int)pvVar9 + 0x60) + 4),
                          (uint)*(ushort *)(*(int *)((int)pvVar9 + 0x60) + 0xe));
                  goto LAB_000168d0;
                }
                free(__ptr);
                free(puVar7);
              }
              free(pcVar14);
            }
            puts(DAT_0001661c);
          }
LAB_000168d0:
        }
        if (iVar16 != 0) goto LAB_0001668c;
      }
    }
    fputs(DAT_00016604,(FILE *)*DAT_00016610);
  }
  else {
LAB_0001668c:
    if (param_1[7] == 0) {
      pvVar9 = param_2;
      do {
        iVar18 = *(int *)((int)pvVar9 + 0x60);
        if (iVar18 != 0) {
          uVar19 = (uint)*(ushort *)(iVar18 + 4);
          uVar2 = *(ushort *)(iVar18 + 0xe);
          if (param_3 == 0) {
            if ((uint)param_1[2] < uVar19) goto LAB_00016924;
          }
          else {
            uVar19 = uVar19 + param_1[2];
LAB_00016924:
            param_1[2] = uVar19;
          }
          if ((uint)param_1[3] < (uint)uVar2) {
            param_1[3] = (uint)uVar2;
          }
        }
        pvVar9 = (void *)((int)pvVar9 + 0x80);
      } while (pvVar9 != (void *)((int)param_2 + iVar16 * 0x80));
      iVar18 = FUN_00015134(*param_1,*(undefined4 *)((int)param_2 + 0x5c),param_1[2],param_1[3],
                            *DAT_00016624,param_1 + 5,param_1 + 4);
      if (iVar18 != 0) {
        return;
      }
    }
    iVar15 = 0;
    iVar18 = (int)param_2 + 0x50;
    iVar17 = 0;
    do {
      if (*(int *)(iVar18 + 0x10) != 0) {
        fVar24 = (float)FUN_00014ba0(*(int *)(iVar18 + 0x10));
        printf(DAT_00016608,extraout_r1 + 0x24,SUB84((double)fVar24,0),
               (int)((ulonglong)(double)fVar24 >> 0x20));
        for (uVar19 = 0; uVar19 < *(uint *)(iVar18 + -0x48); uVar19 = uVar19 + 1) {
          printf(DAT_00016628,*(undefined4 *)(*(int *)(iVar18 + -0x50) + uVar19 * 4));
          if (param_1[7] != 0) {
            FUN_000150fc(param_1,*(undefined4 *)(*(int *)(iVar18 + -0x4c) + uVar19 * 4),DAT_0001662c
                         ,*(int *)(iVar18 + -0x4c),*(undefined4 *)(iVar18 + -0x44));
          }
        }
        printf(DAT_0001660c,*(undefined4 *)(iVar18 + -0x44));
        if (param_1[7] == 0) {
          iVar5 = drmModeSetCrtc(*param_1,*(undefined4 *)(iVar18 + -0x44),param_1[4],iVar15,0,
                                 *(undefined4 *)(iVar18 + -0x4c),*(undefined4 *)(iVar18 + -0x48),
                                 *(undefined4 *)(iVar18 + 0x10));
          drmModeDirtyFB(*param_1,param_1[4],0,0);
          if (param_3 != 0) {
            iVar15 = iVar15 + (uint)*(ushort *)(*(int *)(iVar18 + 0x10) + 4);
          }
          if (iVar5 != 0) {
            __stream = (FILE *)*DAT_00016610;
            piVar6 = __errno_location();
            __s2 = strerror(*piVar6);
            pcVar14 = DAT_00016614;
LAB_00016460:
            fprintf(__stream,pcVar14,__s2);
            return;
          }
          FUN_00015e74(param_1,*(undefined4 *)(iVar18 + -0x44),*(undefined4 *)(iVar18 + 0xc));
        }
        else {
          drmModeCreatePropertyBlob(*param_1,*(undefined4 *)(iVar18 + 0x10),0x44,&local_84);
          FUN_000150fc(param_1,*(undefined4 *)(iVar18 + -0x44),DAT_00016630,0,local_84);
          FUN_000150fc(param_1,*(undefined4 *)(iVar18 + -0x44),DAT_00016634,0,1);
          if (param_3 == 0) {
            iVar22 = param_1[1];
            uVar13 = *(undefined4 *)(iVar18 + 0x14);
            iVar10 = *(int *)(iVar22 + 0x24);
            iVar5 = 0;
            while( true ) {
              if (iVar5 == iVar10) {
                uStack_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                local_78 = (ulonglong)uStack_5c << 0x20;
                uStack_70 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8))
                ;
                local_68 = (ulonglong)uStack_5c << 0x20;
                local_60 = 0;
                local_58 = (ulonglong)uStack_5c << 0x20;
                local_50 = (ulonglong)uStack_5c << 0x20;
                local_48 = (ulonglong)uStack_5c << 0x20;
                local_40 = (ulonglong)uStack_5c << 0x20;
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0,0x16a84);
                (*pcVar1)();
              }
              iVar20 = *(int *)(*(int *)(iVar22 + 0x20) + iVar5 * 0xc);
              if ((iVar20 != 0) &&
                 (uVar19 = FUN_00015c08(iVar22,uVar13), (uVar19 & *(uint *)(iVar20 + 0x24)) != 0))
              break;
              iVar5 = iVar5 + 1;
            }
            local_78 = 0;
            local_80 = *(char **)(iVar20 + 8);
            local_7c = *(undefined4 *)(iVar18 + -0x44);
            uStack_70 = (ulonglong)*(ushort *)(*(int *)(iVar18 + 0x10) + 4) << 0x20;
            local_68 = (ulonglong)*(ushort *)(*(int *)(iVar18 + 0x10) + 0xe);
            local_60 = 0;
            uStack_5c = DAT_00016638;
            local_48 = (ulonglong)*DAT_0001663c;
            local_58 = local_78;
            local_50 = local_78;
            local_40 = local_78;
            uVar13 = FUN_00016ba4(iVar18);
            local_40 = CONCAT44(local_40._4_4_,uVar13);
            FUN_00016020(param_1,&local_80,1,0);
          }
        }
      }
      iVar17 = iVar17 + 1;
      iVar18 = iVar18 + 0x80;
    } while (iVar16 != iVar17);
  }
  return;
}



/* ===== FUN_00016ba4 @ 00016ba4 size=88 ===== */

undefined4 FUN_00016ba4(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = DAT_00016bfc + 0x16bbc;
  do {
    iVar1 = strcmp(*(char **)(iVar3 + 4),param_1);
    if (iVar1 == 0) {
      return *(undefined4 *)(DAT_00016c00 + 0x16be0 + iVar2 * 0x38);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x38;
  } while (iVar2 != 0x33);
  return 0;
}



/* ===== FUN_00016c04 @ 00016c04 size=64 ===== */

int FUN_00016c04(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x38 + DAT_00016c44 + 0x16c18) == param_1) {
      return DAT_00016c44 + 0x16c18 + iVar1 * 0x38;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x33);
  return 0;
}



/* ===== FUN_00016c48 @ 00016c48 size=56 ===== */

int FUN_00016c48(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_00016c80 + 0x16c58);
  do {
    if (param_1 == *piVar2) {
      return piVar2[1];
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 != 9);
  return 0;
}



/* ===== FUN_00016c84 @ 00016c84 size=84 ===== */

undefined4 FUN_00016c84(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    iVar1 = DAT_00016cdc + 0x16d04;
  }
  else if (param_1 == 2) {
    iVar1 = DAT_00016ce0 + 0x16d1c;
  }
  else {
    if (param_1 != 3) {
      return 0;
    }
    iVar1 = DAT_00016cd8 + 0x16d00;
  }
  return *(undefined4 *)(iVar1 + 4);
}



/* ===== FUN_00016ce4 @ 00016ce4 size=60 ===== */

int FUN_00016ce4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_00016d20 + 0x16d54);
  do {
    if (param_1 == *piVar2) {
      return piVar2[1];
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 != 0x12);
  return 0;
}



/* ===== FUN_00016d24 @ 00016d24 size=244 ===== */

int FUN_00016d24(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  FILE *__stream;
  undefined4 *puVar6;
  int iVar7;
  char *__format;
  
  iVar7 = DAT_00016e18 + 0x16d3c;
  if (param_2 == 0) {
    __format = (char *)(DAT_00016e28 + 0x16dac);
    pcVar3 = (char *)(DAT_00016e2c + 0x16db4);
    iVar1 = 0;
    puVar6 = (undefined4 *)(DAT_00016e24 + 0x16e98);
    do {
      uVar5 = *puVar6;
      printf(__format,uVar5);
      iVar4 = drmOpen(uVar5,param_1);
      if (-1 < iVar4) {
        puts((char *)(DAT_00016e34 + 0x16e14));
        return iVar4;
      }
      iVar1 = iVar1 + 1;
      puts(pcVar3);
      puVar6 = puVar6 + 1;
    } while (iVar1 != 0x1a);
    iVar1 = -0x13;
    fputs((char *)(DAT_00016e30 + 0x16e00),(FILE *)**(undefined4 **)(iVar7 + DAT_00016e1c));
  }
  else {
    iVar1 = drmOpen(param_2,param_1);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_00016e1c);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,(char *)(DAT_00016e20 + 0x16d84),param_2,pcVar3);
      iVar1 = -*piVar2;
    }
  }
  return iVar1;
}



/* ===== FUN_00016e38 @ 00016e38 size=28 ===== */

int FUN_00016e38(int *param_1,uint param_2)

{
  return ((param_2 | param_2 << 8) >> (0x10U - *param_1 & 0xff)) << (param_1[1] & 0xffU);
}



/* ===== FUN_00016e54 @ 00016e54 size=32 ===== */

int FUN_00016e54(int *param_1,uint param_2)

{
  return ((param_2 >> 4 | param_2 << 6) >> (0x10U - *param_1 & 0xff)) << (param_1[1] & 0xffU);
}



/* ===== FUN_00016e74 @ 00016e74 size=1092 ===== */

void FUN_00016e74(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 int param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 local_70;
  undefined4 auStack_6c [2];
  undefined1 auStack_64 [12];
  undefined4 local_58;
  undefined4 auStack_54 [2];
  undefined1 auStack_4c [12];
  undefined4 local_40;
  undefined4 auStack_3c [6];
  
  puVar6 = (undefined4 *)(DAT_000172b8 + 0x16e94);
  puVar16 = &local_70;
  do {
    puVar10 = puVar16;
    puVar7 = puVar6;
    puVar6 = puVar7 + 2;
    uVar4 = puVar7[1];
    *puVar10 = *puVar7;
    puVar10[1] = uVar4;
    puVar16 = puVar10 + 2;
  } while (puVar6 != (undefined4 *)(DAT_000172b8 + 0x16ea4));
  uVar4 = *puVar6;
  *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar7 + 3);
  puVar10[2] = uVar4;
  puVar6 = (undefined4 *)(DAT_000172bc + 0x16ef5);
  puVar16 = &local_58;
  do {
    puVar10 = puVar16;
    puVar7 = puVar6;
    puVar6 = puVar7 + 2;
    uVar4 = puVar7[1];
    *puVar10 = *puVar7;
    puVar10[1] = uVar4;
    puVar16 = puVar10 + 2;
  } while (puVar6 != (undefined4 *)(DAT_000172bc + 0x16f05));
  uVar4 = *puVar6;
  *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar7 + 3);
  puVar10[2] = uVar4;
  puVar16 = &local_40;
  puVar6 = (undefined4 *)(DAT_000172c0 + 0x16f4e);
  do {
    puVar7 = puVar6 + 2;
    uVar4 = puVar6[1];
    *puVar16 = *puVar6;
    puVar16[1] = uVar4;
    puVar16 = puVar16 + 2;
    puVar6 = puVar7;
  } while (puVar7 != (undefined4 *)(DAT_000172c0 + 0x16f66));
  iVar5 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 4);
  uVar17 = *(uint *)(param_1 + 8);
  iVar12 = param_2;
  for (uVar8 = 0; (param_6 * 6) / 9 != uVar8; uVar8 = uVar8 + 1) {
    for (uVar9 = 0; uVar9 != param_5; uVar9 = uVar9 + 1) {
      *(undefined1 *)(iVar12 + uVar9) =
           *(undefined1 *)((int)auStack_6c + ((uVar9 * 7) / param_5) * 3 + -4);
    }
    iVar12 = iVar12 + param_7;
  }
  param_2 = param_7 * uVar8 + param_2;
  for (; uVar8 < (param_6 * 7) / 9; uVar8 = uVar8 + 1) {
    for (uVar9 = 0; uVar9 != param_5; uVar9 = uVar9 + 1) {
      *(undefined1 *)(param_2 + uVar9) =
           *(undefined1 *)((int)auStack_54 + ((uVar9 * 7) / param_5) * 3 + -4);
    }
    param_2 = param_2 + param_7;
  }
  uVar9 = (param_5 * 5) / 7;
  uVar11 = (param_5 * 6) / 7;
  for (; uVar8 < param_6; uVar8 = uVar8 + 1) {
    for (uVar13 = 0; uVar9 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined1 *)(param_2 + uVar13) =
           *(undefined1 *)((int)auStack_3c + ((uVar13 << 2) / uVar9) * 3 + -4);
    }
    uVar14 = 0;
    for (; uVar13 < uVar11; uVar13 = uVar13 + 1) {
      uVar15 = uVar14 / (param_5 / 7);
      uVar14 = uVar14 + 3;
      *(undefined1 *)(param_2 + uVar13) = *(undefined1 *)((int)auStack_3c + (uVar15 + 4) * 3 + -4);
    }
    for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
      *(undefined1 *)(param_2 + uVar13) = 0x20;
    }
    param_2 = param_2 + param_7;
  }
  param_6 = param_6 / uVar17;
  uVar8 = param_7 * iVar5;
  iVar12 = uVar3 * iVar5;
  for (uVar17 = 0; (param_6 * 6) / 9 != uVar17; uVar17 = uVar17 + 1) {
    uVar14 = 0;
    uVar13 = uVar14;
    for (; uVar14 < param_5; uVar14 = uVar14 + uVar3) {
      uVar15 = uVar13 / uVar3;
      iVar2 = ((uVar14 * 7) / param_5) * 3;
      uVar13 = uVar13 + iVar12;
      uVar1 = *(undefined1 *)((int)auStack_6c + iVar2 + -2);
      *(undefined1 *)(param_3 + uVar15) = *(undefined1 *)((int)auStack_6c + iVar2 + -3);
      *(undefined1 *)(param_4 + uVar15) = uVar1;
    }
    param_3 = param_3 + uVar8 / uVar3;
    param_4 = param_4 + uVar8 / uVar3;
  }
  for (; uVar17 < (param_6 * 7) / 9; uVar17 = uVar17 + 1) {
    uVar14 = 0;
    for (uVar13 = uVar14; uVar13 < param_5; uVar13 = uVar13 + uVar3) {
      uVar15 = uVar14 / uVar3;
      iVar2 = ((uVar13 * 7) / param_5) * 3;
      uVar14 = uVar14 + iVar12;
      uVar1 = *(undefined1 *)((int)auStack_54 + iVar2 + -2);
      *(undefined1 *)(param_3 + uVar15) = *(undefined1 *)((int)auStack_54 + iVar2 + -3);
      *(undefined1 *)(param_4 + uVar15) = uVar1;
    }
    param_3 = param_3 + uVar8 / uVar3;
    param_4 = param_4 + uVar8 / uVar3;
  }
  for (; uVar17 < param_6; uVar17 = uVar17 + 1) {
    uVar14 = 0;
    uVar13 = uVar14;
    for (; uVar14 < uVar9; uVar14 = uVar14 + uVar3) {
      uVar15 = uVar13 / uVar3;
      iVar2 = ((uVar14 << 2) / uVar9) * 3;
      uVar13 = uVar13 + iVar12;
      uVar1 = *(undefined1 *)((int)auStack_3c + iVar2 + -2);
      *(undefined1 *)(param_3 + uVar15) = *(undefined1 *)((int)auStack_3c + iVar2 + -3);
      *(undefined1 *)(param_4 + uVar15) = uVar1;
    }
    uVar13 = iVar5 * uVar14;
    for (; uVar14 < uVar11; uVar14 = uVar14 + uVar3) {
      uVar15 = uVar13 / uVar3;
      iVar2 = ((uVar14 * 3 + uVar9 * -3) / (param_5 / 7) + 4) * 3;
      uVar13 = uVar13 + iVar12;
      uVar1 = *(undefined1 *)((int)auStack_3c + iVar2 + -2);
      *(undefined1 *)(param_3 + uVar15) = *(undefined1 *)((int)auStack_3c + iVar2 + -3);
      *(undefined1 *)(param_4 + uVar15) = uVar1;
    }
    uVar13 = iVar5 * uVar14;
    for (; uVar14 < param_5; uVar14 = uVar14 + uVar3) {
      uVar15 = uVar13 / uVar3;
      *(undefined1 *)(param_3 + uVar15) = 0x80;
      uVar13 = uVar13 + iVar12;
      *(undefined1 *)(param_4 + uVar15) = 0x80;
    }
    param_3 = param_3 + uVar8 / uVar3;
    param_4 = param_4 + uVar8 / uVar3;
  }
  return;
}



/* ===== FUN_000172c4 @ 000172c4 size=340 ===== */

void FUN_000172c4(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  div_t local_30;
  
  iVar3 = *(int *)(param_1 + 0x34);
  uVar6 = *(uint *)(param_1 + 0x2c);
  uVar4 = 0;
  uVar7 = *(uint *)(param_1 + 0x30);
  while (uVar4 != param_6) {
    for (uVar5 = 0; uVar5 != param_5; uVar5 = uVar5 + 1) {
      div(&local_30,uVar5 + uVar4,param_5);
      uVar2 = DAT_0001741c * (local_30.quot >> 6) + DAT_00017418 * (local_30.rem >> 6);
      uVar8 = (uVar2 & 0xffffff) >> 0x10;
      uVar1 = (uVar2 & 0xffff) >> 8;
      uVar2 = uVar2 & 0xff;
      *(char *)(param_2 + uVar5) =
           (char)(uVar8 * 0x42 + uVar2 * 0x19 + 0x80 + uVar1 * 0x81 >> 8) + '\x10';
      iVar9 = iVar3 * (uVar5 / uVar6);
      *(char *)(param_3 + iVar9) =
           (char)(uVar8 * -0x26 + uVar2 * 0x70 + 0x80 + uVar1 * -0x4a >> 8) + -0x80;
      *(char *)(param_4 + iVar9) =
           (char)(uVar8 * 0x70 + uVar2 * -0x12 + 0x80 + uVar1 * -0x5e >> 8) + -0x80;
    }
    uVar4 = uVar4 + 1;
    param_2 = param_2 + param_7;
    if (uVar4 == uVar7 * (uVar4 / uVar7)) {
      uVar5 = (uint)(param_7 * iVar3) / uVar6;
      param_3 = param_3 + uVar5;
      param_4 = param_4 + uVar5;
    }
  }
  return;
}



/* ===== FUN_00017420 @ 00017420 size=40 ===== */

uint FUN_00017420(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = (param_1 << (LZCOUNT(param_1) - 0xfU & 0xff) & 0xffff) >> 6 |
            (0x1e - LZCOUNT(param_1)) * 0x400 & 0xffffU;
  }
  return uVar1;
}



/* ===== FUN_00017448 @ 00017448 size=364 ===== */

void FUN_00017448(uint param_1,void *param_2)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x16) {
    printf((char *)(DAT_000175b4 + 0x17464),param_1,0x16);
    return;
  }
  puVar1 = memset(param_2,0,param_1 << 3);
  *puVar1 = 0xc000;
  puVar1[1] = 0xc000;
  puVar1[2] = 0xc000;
  puVar1[4] = 0xc000;
  puVar1[5] = 0xc000;
  puVar1[9] = 0xc000;
  puVar1[10] = 0xc000;
  puVar1[0xd] = 0xc000;
  puVar1[0x10] = 0xc000;
  puVar1[0x12] = 0xc000;
  puVar1[0x14] = 0xc000;
  puVar1[0x1a] = 0xc000;
  puVar1[0x1e] = 0xc000;
  puVar1[0x24] = 0xc000;
  puVar1[0x26] = 0xc000;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0x1300;
  puVar1[0x21] = 0x1300;
  puVar1[0x22] = 0x1300;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0x1300;
  puVar1[0x29] = 0x1300;
  puVar1[0x2a] = 0x1300;
  puVar1[0x2d] = 0xc000;
  puVar1[0x2e] = 0xc000;
  puVar1[0x34] = 0xc000;
  puVar1[0x35] = 0xc000;
  puVar1[0x36] = 0xc000;
  puVar1[0x39] = 0x2100;
  puVar1[0x3a] = 0x4c00;
  puVar1[0x3c] = 0xff00;
  puVar1[0x3d] = 0xff00;
  puVar1[0x3e] = 0xff00;
  puVar1[0x40] = 0x3200;
  puVar1[0x42] = 0x6a00;
  puVar1[0x48] = 0x900;
  puVar1[0x49] = 0x900;
  puVar1[0x4a] = 0x900;
  puVar1[0x2c] = 0;
  puVar1[0x30] = 0x1300;
  puVar1[0x31] = 0x1300;
  puVar1[0x32] = 0x1300;
  puVar1[0x38] = 0;
  puVar1[0x41] = 0;
  puVar1[0x44] = 0x1300;
  puVar1[0x45] = 0x1300;
  puVar1[0x46] = 0x1300;
  puVar1[0x4c] = 0x1300;
  puVar1[0x4d] = 0x1300;
  puVar1[0x4e] = 0x1300;
  puVar1[0x50] = 0x1d00;
  puVar1[0x51] = 0x1d00;
  puVar1[0x52] = 0x1d00;
  puVar1[0x54] = 0x1300;
  puVar1[0x55] = 0x1300;
  puVar1[0x56] = 0x1300;
  return;
}



/* ===== FUN_000175b8 @ 000175b8 size=10680 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000175b8(undefined4 param_1,uint param_2,int *param_3,uint param_4,uint param_5,int param_6
                 )

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined2 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int extraout_r1;
  ushort extraout_r2;
  char *pcVar20;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  int *piVar24;
  uint *puVar25;
  uint *extraout_r2_06;
  uint *extraout_r2_07;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined2 *puVar30;
  div_t *pdVar31;
  undefined4 uVar32;
  ushort *puVar33;
  char *pcVar34;
  undefined1 *puVar35;
  uint uVar36;
  undefined8 *puVar37;
  char *pcVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  char *pcVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  uint uVar50;
  undefined1 *puVar51;
  ushort *puVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined4 *puVar58;
  int iVar59;
  uint uVar60;
  undefined2 *puVar61;
  uint uVar62;
  undefined4 *puVar63;
  undefined4 *puVar64;
  undefined8 uVar65;
  ulonglong uVar66;
  div_t dVar67;
  ulonglong uVar68;
  ulonglong in_d17;
  ulonglong in_d18;
  ulonglong uVar69;
  uint *local_110;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  div_t local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48 [4];
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  puVar15 = (uint *)FUN_00016c04();
  iVar59 = DAT_000185a4;
  if (puVar15 == (uint *)0x0) {
    return;
  }
  switch(param_2) {
  case 0:
    uVar29 = *puVar15;
    if (uVar29 == DAT_00018584) goto LAB_00017664;
    if (DAT_00018584 <= uVar29) {
      if (uVar29 == DAT_000185cc) goto LAB_00017754;
      if (DAT_000185cc <= uVar29) {
        if (uVar29 == DAT_000185dc) goto LAB_00017968;
        if (uVar29 < DAT_000185dc) {
          if (uVar29 == DAT_000185e0) goto LAB_00017754;
          if (uVar29 < DAT_000185e0) {
            if (uVar29 == DAT_000185e0 - 0xffef00) goto LAB_00017754;
            uVar50 = DAT_000185e0 - 0x10;
            goto LAB_000178e4;
          }
          uVar50 = DAT_000185e8;
          if (uVar29 == DAT_000185e4) goto LAB_000176e0;
        }
        else {
          if (uVar29 == DAT_000185ec) {
LAB_000179fc:
            uVar29 = puVar15[10];
            pcVar20 = (char *)*param_3;
            pcVar43 = pcVar20;
            if ((uVar29 & 4) == 0) {
              pcVar43 = pcVar20 + 1;
            }
            if ((uVar29 & 8) == 0) {
              pcVar20 = pcVar20 + 1;
            }
            pcVar34 = pcVar20 + (uVar29 & 2);
            pcVar20 = pcVar20 + (uVar29 & 1) * 2;
            for (uVar29 = param_2; param_5 != uVar29; uVar29 = uVar29 + 1) {
              pcVar38 = pcVar43;
              for (uVar50 = param_2; uVar50 < param_4; uVar50 = uVar50 + 2) {
                div(&local_68,uVar50 + uVar29,param_4);
                uVar18 = DAT_000185a4 * (local_68.quot >> 6) + DAT_000185b4 * (local_68.rem >> 6);
                uVar19 = (uVar18 & 0xffffff) >> 0x10;
                uVar42 = (uVar18 & 0xffff) >> 8;
                uVar18 = uVar18 & 0xff;
                cVar4 = (char)(uVar19 * 0x42 + uVar18 * 0x19 + 0x80 + uVar42 * 0x81 >> 8) + '\x10';
                *pcVar38 = cVar4;
                pcVar34[uVar50 * 2] =
                     (char)(uVar19 * -0x26 + uVar18 * 0x70 + 0x80 + uVar42 * -0x4a >> 8) + -0x80;
                pcVar38[2] = cVar4;
                pcVar20[uVar50 * 2] =
                     (char)(uVar19 * 0x70 + uVar18 * -0x12 + 0x80 + uVar42 * -0x5e >> 8) + -0x80;
                pcVar38 = pcVar38 + 4;
              }
              pcVar43 = pcVar43 + param_6;
              pcVar34 = pcVar34 + param_6;
              pcVar20 = pcVar20 + param_6;
            }
            return;
          }
          if (DAT_000185ec <= uVar29) {
            if (((uVar29 != DAT_000185f4) && (uVar29 != DAT_000185f4 + 0xffff)) &&
               (uVar29 != DAT_000185f4 + 0xfd03fc03)) {
              return;
            }
            goto LAB_000179fc;
          }
          if (uVar29 == DAT_000185f0) goto LAB_00017968;
          uVar50 = DAT_000185f0 + 0x17;
        }
        if (uVar29 != uVar50) {
          return;
        }
LAB_00017968:
        puVar25 = (uint *)(*param_3 + -8);
        for (uVar29 = param_2; param_5 != uVar29; uVar29 = uVar29 + 1) {
          uVar50 = param_2;
          local_110 = puVar25;
          while (param_4 != uVar50) {
            div(&local_68,uVar50 + uVar29,param_4);
            uVar42 = DAT_000185a4 * (local_68.quot >> 6) + DAT_000185b4 * (local_68.rem >> 6);
            uVar50 = uVar50 + 1;
            uVar14 = FUN_00017420(uVar42 >> 8 & 0xff00);
            uVar65 = VectorShiftRight(CONCAT44(CONCAT22(uVar14,uVar14),CONCAT22(uVar14,uVar14)),0x30
                                     );
            uVar65 = VectorShiftLeft(uVar65,in_d17 & 0xffffffffffff0000 |
                                            (ulonglong)-(0x10 - puVar15[2]) & 0xffff,8,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar18 = puVar15[3];
            uVar68 = VectorShiftLeft(uVar65,in_d18,8,1);
            uVar14 = FUN_00017420(uVar42 & 0xff00);
            uVar65 = VectorShiftRight(CONCAT44(CONCAT22(uVar14,uVar14),CONCAT22(uVar14,uVar14)),0x30
                                     );
            uVar69 = in_d18 & 0xffffffffffff0000 | (ulonglong)-(0x10 - puVar15[4]) & 0xffff;
            uVar65 = VectorShiftLeft(uVar65,uVar69,8,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar18 = puVar15[5];
            uVar66 = VectorShiftLeft(uVar65,uVar69,8,1);
            uVar66 = uVar66 | uVar68;
            uVar14 = FUN_00017420((uVar42 & 0xfe) << 8);
            uVar65 = VectorShiftRight(CONCAT44(CONCAT22(uVar14,uVar14),CONCAT22(uVar14,uVar14)),0x30
                                     );
            in_d18 = uVar69 & 0xffffffffffff0000 | (ulonglong)-(0x10 - puVar15[6]) & 0xffff;
            uVar42 = puVar15[7];
            uVar69 = VectorShiftLeft(uVar65,in_d18,8,1);
            uVar68 = uVar69 >> 0x20;
            uVar18 = (uint)uVar69;
            uVar14 = FUN_00017420(extraout_r1 << 8);
            uVar65 = VectorShiftRight(CONCAT44(CONCAT22(uVar14,uVar14),CONCAT22(uVar14,uVar14)),0x30
                                     );
            in_d17 = uVar69 & 0xffffffffffff0000 | (ulonglong)-(0x10 - puVar15[8]) & 0xffff;
            uVar65 = VectorShiftLeft(uVar65,in_d17,8,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar19 = puVar15[9];
            uVar65 = VectorShiftLeft(uVar65,in_d17,8,1);
            local_110[2] = (uint)uVar65 | (uint)uVar66 | uVar18 << (uVar42 & 0xff);
            local_110[3] = (uint)((ulonglong)uVar65 >> 0x20) |
                           (uint)(uVar66 >> 0x20) |
                           (int)uVar68 << (uVar42 & 0xff) | uVar18 << (uVar42 - 0x20 & 0xff) |
                           uVar18 >> (0x20 - uVar42 & 0xff);
            local_110 = local_110 + 2;
          }
          puVar25 = (uint *)((int)puVar25 + param_6);
        }
        return;
      }
      if (uVar29 == DAT_000185cc - 0xfefff0) goto LAB_00017664;
      if (uVar29 < DAT_000185cc - 0xfefff0) {
        if (uVar29 == DAT_000185cc - 0xff0601) goto LAB_00017664;
        if (uVar29 < DAT_000185cc - 0xff0601) {
          if ((uVar29 != DAT_000185cc - 0xff1100) && (uVar29 != DAT_000185cc - 0xff10f0)) {
            return;
          }
          puVar51 = (undefined1 *)*param_3;
          for (uVar29 = param_4; uVar29 != param_4 + param_5; uVar29 = uVar29 + 1) {
            puVar35 = puVar51;
            for (uVar50 = uVar29 - param_4; uVar29 != uVar50; uVar50 = uVar50 + 1) {
              div(&local_68,uVar50,param_4);
              uVar18 = iVar59 * (local_68.quot >> 6) + DAT_000185b4 * (local_68.rem >> 6);
              uVar32 = FUN_00016e38(puVar15 + 2,(uVar18 & 0xffffff) >> 0x10);
              uVar42 = FUN_00016e38(puVar15 + 4,(uVar18 & 0xffff) >> 8,uVar32);
              uVar42 = FUN_00016e38(puVar15 + 6,uVar18 & 0xfe,extraout_r2_01 | uVar42);
              uVar42 = extraout_r2_02 | uVar42;
              *puVar35 = (char)uVar42;
              puVar35[1] = (char)(uVar42 >> 8);
              puVar35[2] = (char)(uVar42 >> 0x10);
              puVar35 = puVar35 + 3;
            }
            puVar51 = puVar51 + param_6;
          }
          return;
        }
        if (uVar29 == DAT_000185d0) goto LAB_00017664;
        uVar50 = DAT_000185d0 + 0x5ea;
        goto LAB_000176bc;
      }
      if (uVar29 == DAT_000185d4) goto LAB_00017754;
      if (uVar29 < DAT_000185d4) {
        if (uVar29 == DAT_000185d4 - 0xff) goto LAB_00017754;
        uVar50 = DAT_000185d4 - 0xef;
      }
      else {
        if ((uVar29 == DAT_000185d8) || (uVar29 == DAT_000185d8 + 0x17)) goto LAB_00017754;
        uVar50 = DAT_000185d8 - 0xfe9;
      }
      goto LAB_000178e4;
    }
    if (uVar29 == DAT_00018588) goto LAB_00017754;
    if (DAT_00018588 <= uVar29) {
      if (uVar29 == DAT_000185a0) goto LAB_000176e0;
      if (uVar29 < DAT_000185a0) {
        if (uVar29 == DAT_000185a0 - 0x40d) goto LAB_00017754;
        if (DAT_000185a0 - 0x40d <= uVar29) {
          if (uVar29 == DAT_000185a8) goto LAB_00017754;
          if (uVar29 != DAT_000185a8 + 0x301) {
            return;
          }
          iVar59 = param_3[1];
          iVar21 = param_3[2];
          goto LAB_00017710;
        }
        if (uVar29 == DAT_000185a0 - 0x140d) goto LAB_00017754;
        uVar50 = DAT_000185a0 - 0x13f6;
      }
      else {
        if (uVar29 == DAT_000185ac) goto LAB_00017754;
        if (DAT_000185ac <= uVar29) {
          if ((uVar29 == DAT_000185b0) || (uVar29 == DAT_000185b0 + 0xef)) goto LAB_00017664;
          uVar50 = DAT_000185b0 - 0x10;
          goto LAB_000176bc;
        }
        if (uVar29 == DAT_000185ac - 0x1f9) {
          iVar21 = param_3[1];
          iVar59 = param_3[2];
          goto LAB_00017710;
        }
        uVar50 = DAT_000185ac - 0x10;
      }
LAB_000178e4:
      if (uVar29 != uVar50) {
        return;
      }
LAB_00017754:
      puVar33 = (ushort *)(*param_3 + -2);
      for (uVar29 = param_4; uVar29 != param_4 + param_5; uVar29 = uVar29 + 1) {
        puVar52 = puVar33;
        for (uVar50 = uVar29 - param_4; uVar50 != uVar29; uVar50 = uVar50 + 1) {
          div(&local_68,uVar50,param_4);
          uVar18 = iVar59 * (local_68.quot >> 6) + DAT_000185b4 * (local_68.rem >> 6);
          uVar32 = FUN_00016e38(puVar15 + 2,(uVar18 & 0xffffff) >> 0x10);
          uVar42 = FUN_00016e38(puVar15 + 4,(uVar18 & 0xffff) >> 8,uVar32);
          uVar13 = FUN_00016e38(puVar15 + 6,uVar18 & 0xfe,(extraout_r2_00 | uVar42) & 0xffff);
          puVar52 = puVar52 + 1;
          *puVar52 = extraout_r2 |
                     (ushort)((0xffffU >> (0x10 - puVar15[8] & 0xff)) << (puVar15[9] & 0xff)) |
                     uVar13;
        }
        puVar33 = (ushort *)((int)puVar33 + param_6);
      }
      return;
    }
    if (uVar29 == DAT_0001858c) goto LAB_00017664;
    if (DAT_0001858c <= uVar29) {
      if (uVar29 != DAT_00018594) {
        uVar50 = DAT_00018598;
        if (uVar29 < DAT_00018594) goto LAB_000176b0;
        if (uVar29 != DAT_0001859c) {
          uVar50 = DAT_0001859c + 0xfaeaf4;
          goto LAB_000178e4;
        }
      }
LAB_000176e0:
      iVar21 = param_3[1];
      iVar59 = iVar21;
      if ((puVar15[10] & 1) == 0) {
        iVar59 = iVar21 + 1;
      }
      if ((puVar15[10] & 2) == 0) {
        iVar21 = iVar21 + 1;
      }
LAB_00017710:
      FUN_000172c4(puVar15,*param_3,iVar59,iVar21);
      return;
    }
    uVar42 = DAT_0001858c - 0x1017;
    if (uVar29 == uVar42) goto LAB_00017664;
    uVar50 = uVar42;
    if (uVar29 < uVar42) {
      uVar50 = DAT_0001858c - 0x1116;
    }
    if (uVar42 < uVar29) {
      if (uVar29 == DAT_00018590) goto LAB_00017664;
      uVar50 = DAT_00018590 + 0xfe9;
      goto LAB_000176bc;
    }
LAB_000176b0:
    if (uVar29 == uVar50) goto LAB_00017664;
    uVar50 = uVar50 + 0x10;
LAB_000176bc:
    if (uVar29 != uVar50) {
      return;
    }
LAB_00017664:
    iVar59 = *param_3;
    for (uVar29 = param_2; param_5 != uVar29; uVar29 = uVar29 + 1) {
      for (uVar50 = param_2; param_4 != uVar50; uVar50 = uVar50 + 1) {
        div(&local_68,uVar50 + uVar29,param_4);
        uVar42 = DAT_000185a4 * (local_68.quot >> 6) + DAT_000185b4 * (local_68.rem >> 6);
        if (uVar29 < param_5 >> 1) {
          if (uVar50 < param_4 >> 1) {
            uVar32 = 0x7f;
          }
          else {
            uVar32 = 0xff;
          }
        }
        else {
          uVar32 = 0xff;
        }
        uVar16 = FUN_00016e38(puVar15 + 2,(uVar42 & 0xffffff) >> 0x10);
        uVar18 = FUN_00016e38(puVar15 + 4,(uVar42 & 0xffff) >> 8,uVar16);
        uVar42 = FUN_00016e38(puVar15 + 6,uVar42 & 0xfe,extraout_r2_03 | uVar18);
        uVar42 = FUN_00016e38(puVar15 + 8,uVar32,extraout_r2_04 | uVar42);
        *(uint *)(iVar59 + uVar50 * 4) = extraout_r2_05 | uVar42;
      }
      iVar59 = iVar59 + param_6;
    }
    return;
  case 1:
    break;
  case 2:
    uVar29 = *puVar15;
    if (uVar29 == DAT_00018584) goto LAB_00017fb4;
    if (uVar29 < DAT_00018584) {
      if (uVar29 == DAT_00018588) goto LAB_000182ac;
      if (uVar29 < DAT_00018588) {
        if (uVar29 == DAT_000185b8) goto LAB_00017fb4;
        if (uVar29 < DAT_000185b8) {
          if (uVar29 == DAT_000185b8 - 0x10ef) goto LAB_00017fb4;
          if (uVar29 < DAT_000185b8 - 0x10ef) {
            uVar50 = DAT_000185c0;
            if (uVar29 == DAT_000185bc) {
              iVar21 = *param_3;
              uVar50 = (param_5 * 6) / 9;
              iVar59 = iVar21;
              for (uVar29 = 0; uVar29 != uVar50; uVar29 = uVar29 + 1) {
                for (uVar42 = 0; param_4 != uVar42; uVar42 = uVar42 + 1) {
                  *(char *)(iVar59 + uVar42) = (char)((uVar42 * 7) / param_4);
                }
                iVar59 = iVar59 + param_6;
              }
              iVar21 = uVar50 * param_6 + iVar21;
              for (; uVar50 < (param_5 * 7) / 9; uVar50 = uVar50 + 1) {
                for (uVar29 = 0; param_4 != uVar29; uVar29 = uVar29 + 1) {
                  *(char *)(iVar21 + uVar29) = (char)((uVar29 * 7) / param_4) + '\a';
                }
                iVar21 = iVar21 + param_6;
              }
              uVar29 = (param_4 * 5) / 7;
              for (; uVar50 < param_5; uVar50 = uVar50 + 1) {
                for (uVar42 = 0; uVar42 != uVar29; uVar42 = uVar42 + 1) {
                  *(char *)(iVar21 + uVar42) = (char)((uVar42 << 2) / uVar29) + '\x0e';
                }
                uVar18 = 0;
                for (uVar42 = uVar29; uVar42 < (param_4 * 6) / 7; uVar42 = uVar42 + 1) {
                  uVar68 = (ulonglong)uVar18;
                  uVar18 = uVar18 + 3;
                  *(char *)(iVar21 + uVar42) = (char)(uVar68 / ((ulonglong)param_4 / 7)) + '\x12';
                }
                for (; uVar42 < param_4; uVar42 = uVar42 + 1) {
                  *(undefined1 *)(iVar21 + uVar42) = 0x15;
                }
                iVar21 = iVar21 + param_6;
              }
              return;
            }
          }
          else {
            if (uVar29 == DAT_000185c4) goto LAB_00017fb4;
            uVar50 = DAT_000185c4 + 0x17;
          }
LAB_00018578:
          if (uVar29 != uVar50) {
            return;
          }
LAB_00017fb4:
          uVar54 = 0x10 - puVar15[2];
          uVar44 = puVar15[3];
          uVar26 = 0x10 - puVar15[4];
          uVar39 = puVar15[5];
          uVar55 = 0x10 - puVar15[6];
          iVar21 = *param_3;
          uVar60 = puVar15[7];
          uVar29 = (0xc0c0U >> (uVar26 & 0xff)) << (uVar39 & 0xff);
          uVar50 = (0xc0c0U >> (uVar54 & 0xff)) << (uVar44 & 0xff);
          uVar42 = (0xc0c0U >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          uVar27 = uVar50 | uVar29 | uVar42;
          uVar18 = (0xffffU >> (0x10 - puVar15[8] & 0xff)) << (puVar15[9] & 0xff);
          local_d8 = uVar27 | uVar18;
          local_d4 = uVar50 | uVar29 | uVar18;
          local_d0 = uVar18 | uVar29 | uVar42;
          local_c4 = uVar50 | uVar18;
          local_c0 = uVar42 | uVar18;
          local_cc = uVar29 | uVar18;
          uVar19 = (0x7f7fU >> (0x10 - puVar15[8] & 0xff)) << (puVar15[9] & 0xff);
          local_a0 = uVar42 | uVar19;
          local_c8 = uVar18 | uVar50 | uVar42;
          local_5c = (0x1313U >> (uVar26 & 0xff)) << (uVar39 & 0xff) |
                     (0x1313U >> (uVar54 & 0xff)) << (uVar44 & 0xff) |
                     (0x1313U >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          local_9c = uVar19 | local_5c;
          local_98 = uVar50 | uVar42 | uVar19;
          local_94 = local_9c;
          local_8c = local_9c;
          local_90 = uVar29 | uVar42 | uVar19;
          local_68.quot =
               uVar18 | (0x2121U >> (uVar26 & 0xff)) << (uVar39 & 0xff) |
               (0x4c4cU >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          local_5c = uVar18 | local_5c;
          local_68.rem = uVar18 | (0xffffU >> (uVar54 & 0xff)) << (uVar44 & 0xff) |
                         (0xffffU >> (uVar26 & 0xff)) << (uVar39 & 0xff) |
                         (0xffffU >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          local_88 = uVar27 | uVar19;
          local_60 = uVar18 | (0x3232U >> (uVar54 & 0xff)) << (uVar44 & 0xff) |
                     (0x6a6aU >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          local_58 = uVar18 | (0x909U >> (uVar54 & 0xff)) << (uVar44 & 0xff) |
                     (0x909U >> (uVar26 & 0xff)) << (uVar39 & 0xff) |
                     (0x909U >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          local_54 = local_5c;
          local_4c = local_5c;
          uVar50 = (param_5 * 6) / 9;
          local_50 = uVar18 | (0x1d1dU >> (uVar54 & 0xff)) << (uVar44 & 0xff) |
                     (0x1d1dU >> (uVar26 & 0xff)) << (uVar39 & 0xff) |
                     (0x1d1dU >> (uVar55 & 0xff)) << (uVar60 & 0xff);
          iVar59 = iVar21;
          for (uVar29 = 0; uVar29 != uVar50; uVar29 = uVar29 + 1) {
            for (uVar42 = 0; param_4 != uVar42; uVar42 = uVar42 + 1) {
              *(undefined4 *)(iVar59 + uVar42 * 4) = (&local_d8)[(uVar42 * 7) / param_4];
            }
            iVar59 = iVar59 + param_6;
          }
          iVar21 = uVar50 * param_6 + iVar21;
          for (; uVar50 < (param_5 * 7) / 9; uVar50 = uVar50 + 1) {
            for (uVar29 = 0; param_4 != uVar29; uVar29 = uVar29 + 1) {
              *(undefined4 *)(iVar21 + uVar29 * 4) = (&local_a0)[(uVar29 * 7) / param_4];
            }
            iVar21 = iVar21 + param_6;
          }
          uVar29 = (param_4 * 5) / 7;
          for (; uVar50 < param_5; uVar50 = uVar50 + 1) {
            for (uVar42 = 0; uVar42 != uVar29; uVar42 = uVar42 + 1) {
              *(int *)(iVar21 + uVar42 * 4) = (&local_68.quot)[(uVar42 << 2) / uVar29];
            }
            uVar18 = 0;
            for (uVar42 = uVar29; uVar42 < (param_4 * 6) / 7; uVar42 = uVar42 + 1) {
              uVar68 = (ulonglong)uVar18;
              uVar18 = uVar18 + 3;
              *(uint *)(iVar21 + uVar42 * 4) = (&local_58)[(int)(uVar68 / ((ulonglong)param_4 / 7))]
              ;
            }
            for (; uVar42 < param_4; uVar42 = uVar42 + 1) {
              *(uint *)(iVar21 + uVar42 * 4) = local_5c;
            }
            iVar21 = iVar21 + param_6;
          }
          return;
        }
        if (uVar29 == DAT_000185c8) goto LAB_00017fb4;
        uVar50 = DAT_000185c8;
        if (uVar29 < DAT_000185c8) {
          uVar50 = DAT_000185c8 - 0x5fa;
        }
        if (uVar29 <= DAT_000185c8) goto LAB_00018930;
        if (uVar29 != DAT_0001859c) {
          if (uVar29 == DAT_0001859c + 0xfaeaf4) goto LAB_000182ac;
          if (uVar29 != DAT_0001859c - 0x40000) {
            return;
          }
        }
      }
      else if (uVar29 != DAT_000185a0) {
        if (uVar29 < DAT_000185a0) {
          if (uVar29 == DAT_000185a0 - 0x40d) goto LAB_000182ac;
          if (DAT_000185a0 - 0x40d <= uVar29) {
            if (uVar29 == DAT_000185a8) goto LAB_000182ac;
            if (uVar29 != DAT_000185a8 + 0x301) {
              return;
            }
            iVar59 = param_3[1];
            iVar21 = param_3[2];
            goto LAB_00018268;
          }
          if (uVar29 == DAT_000185a0 - 0x140d) goto LAB_000182ac;
          uVar50 = DAT_000185a0 - 0x13f6;
        }
        else {
          if (uVar29 == DAT_000185ac) goto LAB_000182ac;
          if (DAT_000185ac <= uVar29) {
            if ((uVar29 == DAT_000185b0) || (uVar29 == DAT_000185b0 + 0xef)) goto LAB_00017fb4;
            uVar50 = DAT_000185b0 - 0x10;
            goto LAB_00018578;
          }
          if (uVar29 == DAT_000185ac - 0x1f9) {
            iVar21 = param_3[1];
            iVar59 = param_3[2];
            goto LAB_00018268;
          }
          uVar50 = DAT_000185ac - 0x10;
        }
        goto LAB_00018964;
      }
LAB_00018238:
      iVar21 = param_3[1];
      iVar59 = iVar21;
      if ((puVar15[10] & 1) == 0) {
        iVar59 = iVar21 + 1;
      }
      if ((puVar15[10] & 2) == 0) {
        iVar21 = iVar21 + 1;
      }
LAB_00018268:
      FUN_00016e74(puVar15 + 10,*param_3,iVar59,iVar21);
      return;
    }
    if (uVar29 == DAT_000185cc) goto LAB_000182ac;
    if (DAT_000185cc <= uVar29) {
      if (uVar29 == DAT_000185dc) goto LAB_000189e8;
      if (uVar29 < DAT_000185dc) {
        if (uVar29 == DAT_000185e0) goto LAB_000182ac;
        if (uVar29 < DAT_000185e0) {
          if (uVar29 == DAT_000185e0 - 0xffef00) goto LAB_000182ac;
          uVar50 = DAT_000185e0 - 0x10;
          goto LAB_00018964;
        }
        uVar50 = DAT_000185e8;
        if (uVar29 == DAT_000185e4) goto LAB_00018238;
      }
      else {
        if (uVar29 == DAT_000185ec) {
LAB_000191a4:
          iVar59 = *param_3;
          uVar29 = puVar15[10];
          puVar58 = (undefined4 *)(DAT_000185f8 + 0x191b8);
          puVar64 = &local_d8;
          do {
            puVar63 = puVar64;
            puVar22 = puVar58;
            puVar58 = puVar22 + 2;
            uVar32 = puVar22[1];
            *puVar63 = *puVar22;
            puVar63[1] = uVar32;
            puVar64 = puVar63 + 2;
          } while (puVar58 != (undefined4 *)(DAT_000185f8 + 0x191c8));
          uVar32 = *puVar58;
          *(undefined1 *)(puVar63 + 3) = *(undefined1 *)(puVar22 + 3);
          puVar63[2] = uVar32;
          puVar58 = (undefined4 *)(DAT_000185fc + 0x19209);
          puVar64 = &local_a0;
          do {
            puVar63 = puVar64;
            puVar22 = puVar58;
            puVar58 = puVar22 + 2;
            uVar32 = puVar22[1];
            *puVar63 = *puVar22;
            puVar63[1] = uVar32;
            puVar64 = puVar63 + 2;
          } while (puVar58 != (undefined4 *)(DAT_000185fc + 0x19219));
          uVar32 = *puVar58;
          *(undefined1 *)(puVar63 + 3) = *(undefined1 *)(puVar22 + 3);
          puVar63[2] = uVar32;
          pdVar31 = &local_68;
          piVar23 = (int *)(DAT_00018600 + 0x1925e);
          do {
            piVar24 = piVar23 + 2;
            iVar21 = piVar23[1];
            pdVar31->quot = *piVar23;
            pdVar31->rem = iVar21;
            pdVar31 = pdVar31 + 1;
            piVar23 = piVar24;
          } while (piVar24 != (int *)(DAT_00018600 + 0x19276));
          uVar50 = uVar29 & 2;
          iVar21 = iVar59;
          if ((uVar29 & 4) == 0) {
            iVar21 = iVar59 + 1;
          }
          if ((uVar29 & 8) == 0) {
            iVar59 = iVar59 + 1;
          }
          iVar17 = (uVar29 & 1) * 2;
          uVar29 = (param_5 * 6) / 9;
          iVar41 = iVar21;
          for (uVar42 = 0; uVar42 != uVar29; uVar42 = uVar42 + 1) {
            for (uVar18 = 0; param_4 != uVar18; uVar18 = uVar18 + 1) {
              *(undefined1 *)(iVar41 + uVar18 * 2) =
                   *(undefined1 *)((int)&local_d8 + ((uVar18 * 7) / param_4) * 3);
            }
            iVar41 = iVar41 + param_6;
          }
          iVar21 = iVar21 + uVar29 * param_6;
          uVar18 = (param_5 * 7) / 9;
          for (uVar42 = uVar29; uVar42 < uVar18; uVar42 = uVar42 + 1) {
            for (uVar19 = 0; param_4 != uVar19; uVar19 = uVar19 + 1) {
              *(undefined1 *)(iVar21 + uVar19 * 2) =
                   *(undefined1 *)((int)&local_a0 + ((uVar19 * 7) / param_4) * 3);
            }
            iVar21 = iVar21 + param_6;
          }
          uVar54 = (param_4 * 5) / 7;
          uVar19 = (param_4 * 6) / 7;
          for (; uVar42 < param_5; uVar42 = uVar42 + 1) {
            for (uVar26 = 0; uVar26 != uVar54; uVar26 = uVar26 + 1) {
              *(undefined1 *)(iVar21 + uVar26 * 2) =
                   *(undefined1 *)((int)&local_68.quot + ((uVar26 << 2) / uVar54) * 3);
            }
            uVar27 = 0;
            for (uVar26 = uVar54; uVar26 < uVar19; uVar26 = uVar26 + 1) {
              uVar39 = uVar27 / (param_4 / 7);
              uVar27 = uVar27 + 3;
              *(undefined1 *)(iVar21 + uVar26 * 2) = *(undefined1 *)((int)&local_5c + uVar39 * 3);
            }
            for (; uVar26 < param_4; uVar26 = uVar26 + 1) {
              *(undefined1 *)(iVar21 + uVar26 * 2) = 0x20;
            }
            iVar21 = iVar21 + param_6;
          }
          iVar41 = iVar59 + uVar50;
          iVar21 = iVar59 + iVar17;
          for (uVar42 = 0; uVar29 != uVar42; uVar42 = uVar42 + 1) {
            for (uVar26 = 0; uVar26 < param_4; uVar26 = uVar26 + 2) {
              iVar28 = ((uVar26 * 7) / param_4) * 3;
              *(undefined1 *)(iVar41 + uVar26 * 2) = *(undefined1 *)((int)&local_d8 + iVar28 + 1);
              *(undefined1 *)(iVar21 + uVar26 * 2) = *(undefined1 *)((int)&local_d8 + iVar28 + 2);
            }
            iVar41 = iVar41 + param_6;
            iVar21 = iVar21 + param_6;
          }
          iVar59 = iVar59 + uVar29 * param_6;
          iVar21 = iVar59 + uVar50;
          iVar59 = iVar59 + iVar17;
          for (; uVar42 < uVar18; uVar42 = uVar42 + 1) {
            for (uVar29 = 0; uVar29 < param_4; uVar29 = uVar29 + 2) {
              iVar41 = ((uVar29 * 7) / param_4) * 3;
              *(undefined1 *)(iVar21 + uVar29 * 2) = *(undefined1 *)((int)&local_a0 + iVar41 + 1);
              *(undefined1 *)(iVar59 + uVar29 * 2) = *(undefined1 *)((int)&local_a0 + iVar41 + 2);
            }
            iVar21 = iVar21 + param_6;
            iVar59 = iVar59 + param_6;
          }
          iVar59 = (iVar21 - uVar50) + uVar50;
          iVar17 = (iVar21 - uVar50) + iVar17;
          for (; uVar42 < param_5; uVar42 = uVar42 + 1) {
            for (uVar29 = 0; uVar29 < uVar54; uVar29 = uVar29 + 2) {
              iVar21 = ((uVar29 << 2) / uVar54) * 3;
              *(undefined1 *)(iVar59 + uVar29 * 2) =
                   *(undefined1 *)((int)&local_68.quot + iVar21 + 1);
              *(undefined1 *)(iVar17 + uVar29 * 2) =
                   *(undefined1 *)((int)&local_68.quot + iVar21 + 2);
            }
            for (; uVar29 < uVar19; uVar29 = uVar29 + 2) {
              iVar21 = ((uVar29 * 3 + uVar54 * -3) / (param_4 / 7)) * 3;
              *(undefined1 *)(iVar59 + uVar29 * 2) = *(undefined1 *)((int)&local_5c + iVar21 + 1);
              *(undefined1 *)(iVar17 + uVar29 * 2) = *(undefined1 *)((int)&local_5c + iVar21 + 2);
            }
            for (; uVar29 < param_4; uVar29 = uVar29 + 2) {
              *(undefined1 *)(iVar59 + uVar29 * 2) = 0x80;
              *(undefined1 *)(iVar17 + uVar29 * 2) = 0x80;
            }
            iVar59 = iVar59 + param_6;
            iVar17 = iVar17 + param_6;
          }
          return;
        }
        if (DAT_000185ec <= uVar29) {
          if (((uVar29 != DAT_000185f4) && (uVar29 != DAT_000185f4 + 0xffff)) &&
             (uVar29 != DAT_000185f4 + 0xfd03fc03)) {
            return;
          }
          goto LAB_000191a4;
        }
        if (uVar29 == DAT_000185f0) goto LAB_000189e8;
        uVar50 = DAT_000185f0 + 0x17;
      }
      if (uVar29 != uVar50) {
        return;
      }
LAB_000189e8:
      iVar28 = *param_3;
      iVar59 = -puVar15[2];
      uVar44 = iVar59 + 0x10;
      iVar21 = -puVar15[4];
      uVar40 = iVar21 + 0x10;
      uVar55 = puVar15[3];
      iVar41 = -puVar15[6];
      uVar53 = iVar41 + 0x10;
      uVar29 = 0x3a00U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar60 = (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) | uVar29 << (uVar55 - 0x20 & 0xff) |
               uVar29 >> (0x20 - uVar55 & 0xff);
      uVar29 = uVar29 << (uVar55 & 0xff);
      uVar36 = puVar15[5];
      uVar50 = 0x3a00U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      uVar47 = (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) | uVar50 << (uVar36 - 0x20 & 0xff) |
               uVar50 >> (0x20 - uVar36 & 0xff);
      uVar50 = uVar50 << (uVar36 & 0xff);
      uVar57 = puVar15[7];
      uVar18 = 0x3a00U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      uVar42 = uVar18 << (uVar57 & 0xff);
      uVar48 = (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar18 << (uVar57 - 0x20 & 0xff) |
               uVar18 >> (0x20 - uVar57 & 0xff);
      uVar27 = uVar29 | uVar50 | uVar42;
      uVar56 = uVar60 | uVar47 | uVar48;
      uVar54 = puVar15[9];
      iVar17 = -puVar15[8];
      uVar26 = iVar17 + 0x10;
      uVar18 = 0x3bf8U >> (uVar26 & 0xff) | 0 << (0x20 - uVar26 & 0xff) |
               0U >> (iVar17 - 0x10U & 0xff);
      uVar62 = (0U >> (uVar26 & 0xff)) << (uVar54 & 0xff) | uVar18 << (uVar54 - 0x20 & 0xff) |
               uVar18 >> (0x20 - uVar54 & 0xff);
      uVar18 = uVar18 << (uVar54 & 0xff);
      local_d8 = uVar27 | uVar18;
      local_d4 = uVar56 | uVar62;
      local_d0 = uVar29 | uVar50 | uVar18;
      local_cc = uVar60 | uVar47 | uVar62;
      local_c8 = uVar18 | uVar50 | uVar42;
      local_c4 = uVar62 | uVar47 | uVar48;
      local_c0 = uVar50 | uVar18;
      uStack_bc = uVar47 | uVar62;
      local_b8 = uVar18 | uVar29 | uVar42;
      uStack_b4 = uVar62 | uVar60 | uVar48;
      local_b0 = uVar29 | uVar18;
      uStack_ac = uVar60 | uVar62;
      local_a8 = uVar18 | uVar42;
      uStack_a4 = uVar62 | uVar48;
      uVar39 = 0x37f0U >> (uVar26 & 0xff) | 0 << (0x20 - uVar26 & 0xff) |
               0U >> (iVar17 - 0x10U & 0xff);
      uVar19 = uVar39 << (uVar54 & 0xff);
      uVar39 = (0U >> (uVar26 & 0xff)) << (uVar54 & 0xff) | uVar39 << (uVar54 - 0x20 & 0xff) |
               uVar39 >> (0x20 - uVar54 & 0xff);
      local_a0 = uVar42 | uVar19;
      local_9c = uVar48 | uVar39;
      uVar26 = 0x2cc0U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar45 = 0x2cc0U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      uVar54 = 0x2cc0U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_50 = uVar26 << (uVar55 & 0xff) | uVar45 << (uVar36 & 0xff) | uVar54 << (uVar57 & 0xff);
      local_4c = (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) | uVar26 << (uVar55 - 0x20 & 0xff) |
                 uVar26 >> (0x20 - uVar55 & 0xff) |
                 (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) | uVar45 << (uVar36 - 0x20 & 0xff) |
                 uVar45 >> (0x20 - uVar36 & 0xff) |
                 (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar54 << (uVar57 - 0x20 & 0xff) |
                 uVar54 >> (0x20 - uVar57 & 0xff);
      local_98 = local_50 | uVar19;
      local_94 = local_4c | uVar39;
      local_90 = uVar29 | uVar42 | uVar19;
      local_8c = uVar60 | uVar48 | uVar39;
      local_88 = local_98;
      uStack_84 = local_94;
      local_80 = uVar50 | uVar42 | uVar19;
      uStack_7c = uVar47 | uVar48 | uVar39;
      local_78 = local_98;
      uStack_74 = local_94;
      uVar50 = 0x3020U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      local_70 = uVar27 | uVar19;
      uStack_6c = uVar56 | uVar39;
      uVar29 = 0x34c0U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_68.quot = uVar18 | uVar50 << (uVar36 & 0xff) | uVar29 << (uVar57 & 0xff);
      local_68.rem = uVar62 | (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) |
                              uVar50 << (uVar36 - 0x20 & 0xff) | uVar50 >> (0x20 - uVar36 & 0xff) |
                     (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar29 << (uVar57 - 0x20 & 0xff) |
                     uVar29 >> (0x20 - uVar57 & 0xff);
      uVar42 = 0x3bf8U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar29 = 0x3bf8U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      uVar50 = 0x3bf8U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_60 = uVar18 | uVar42 << (uVar55 & 0xff) | uVar29 << (uVar36 & 0xff) |
                 uVar50 << (uVar57 & 0xff);
      local_5c = uVar62 | (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) |
                          uVar42 << (uVar55 - 0x20 & 0xff) | uVar42 >> (0x20 - uVar55 & 0xff) |
                 (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) | uVar29 << (uVar36 - 0x20 & 0xff) |
                 uVar29 >> (0x20 - uVar36 & 0xff) |
                 (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar50 << (uVar57 - 0x20 & 0xff) |
                 uVar50 >> (0x20 - uVar57 & 0xff);
      uVar50 = 0x3240U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar29 = 0x36a0U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_58 = uVar18 | uVar50 << (uVar55 & 0xff) | uVar29 << (uVar57 & 0xff);
      local_54 = uVar62 | (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) |
                          uVar50 << (uVar55 - 0x20 & 0xff) | uVar50 >> (0x20 - uVar55 & 0xff) |
                 (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar29 << (uVar57 - 0x20 & 0xff) |
                 uVar29 >> (0x20 - uVar57 & 0xff);
      local_50 = local_50 | uVar18;
      local_4c = local_4c | uVar62;
      uVar29 = 0x2880U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar50 = 0x2880U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      uVar42 = 0x2880U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_48[0] = uVar50 << (uVar36 & 0xff) | uVar18 | uVar29 << (uVar55 & 0xff) |
                    uVar42 << (uVar57 & 0xff);
      local_48[1] = (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) | uVar50 << (uVar36 - 0x20 & 0xff) |
                    uVar50 >> (0x20 - uVar36 & 0xff) |
                    uVar62 | (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) |
                             uVar29 << (uVar55 - 0x20 & 0xff) | uVar29 >> (0x20 - uVar55 & 0xff) |
                    (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar42 << (uVar57 - 0x20 & 0xff) |
                    uVar42 >> (0x20 - uVar57 & 0xff);
      local_48[2] = local_50;
      local_48[3] = local_4c;
      uVar42 = 0x2f40U >> (uVar44 & 0xff) | 0 << (0x20 - uVar44 & 0xff) |
               0U >> (iVar59 - 0x10U & 0xff);
      uVar50 = 0x2f40U >> (uVar40 & 0xff) | 0 << (0x20 - uVar40 & 0xff) |
               0U >> (iVar21 - 0x10U & 0xff);
      uVar29 = 0x2f40U >> (uVar53 & 0xff) | 0 << (0x20 - uVar53 & 0xff) |
               0U >> (iVar41 - 0x10U & 0xff);
      local_38 = uVar50 << (uVar36 & 0xff) | uVar18 | uVar42 << (uVar55 & 0xff) |
                 uVar29 << (uVar57 & 0xff);
      uStack_34 = (0U >> (uVar40 & 0xff)) << (uVar36 & 0xff) | uVar50 << (uVar36 - 0x20 & 0xff) |
                  uVar50 >> (0x20 - uVar36 & 0xff) |
                  uVar62 | (0U >> (uVar44 & 0xff)) << (uVar55 & 0xff) |
                           uVar42 << (uVar55 - 0x20 & 0xff) | uVar42 >> (0x20 - uVar55 & 0xff) |
                  (0U >> (uVar53 & 0xff)) << (uVar57 & 0xff) | uVar29 << (uVar57 - 0x20 & 0xff) |
                  uVar29 >> (0x20 - uVar57 & 0xff);
      local_30 = local_50;
      uStack_2c = local_4c;
      uVar50 = (param_5 * 6) / 9;
      puVar58 = (undefined4 *)(iVar28 + -8);
      for (uVar29 = 0; uVar29 != uVar50; uVar29 = uVar29 + 1) {
        puVar64 = puVar58;
        for (uVar42 = 0; param_4 != uVar42; uVar42 = uVar42 + 1) {
          uVar18 = (uVar42 * 7) / param_4;
          uVar32 = (&local_d4)[uVar18 * 2];
          puVar64[2] = (&local_d8)[uVar18 * 2];
          puVar64[3] = uVar32;
          puVar64 = puVar64 + 2;
        }
        puVar58 = (undefined4 *)((int)puVar58 + param_6);
      }
      iVar28 = uVar50 * param_6 + iVar28;
      for (; uVar50 < (param_5 * 7) / 9; uVar50 = uVar50 + 1) {
        puVar58 = (undefined4 *)(iVar28 + -8);
        for (uVar29 = 0; param_4 != uVar29; uVar29 = uVar29 + 1) {
          uVar42 = (uVar29 * 7) / param_4;
          uVar32 = (&local_9c)[uVar42 * 2];
          puVar58[2] = (&local_a0)[uVar42 * 2];
          puVar58[3] = uVar32;
          puVar58 = puVar58 + 2;
        }
        iVar28 = iVar28 + param_6;
      }
      uVar29 = (param_4 * 5) / 7;
      for (; uVar50 < param_5; uVar50 = uVar50 + 1) {
        piVar23 = (int *)(iVar28 + -8);
        for (uVar42 = 0; uVar42 != uVar29; uVar42 = uVar42 + 1) {
          dVar67 = (&local_68)[(uVar42 << 2) / uVar29];
          piVar23[2] = dVar67.quot;
          piVar23[3] = dVar67.rem;
          piVar23 = piVar23 + 2;
        }
        puVar37 = (undefined8 *)(iVar28 + uVar29 * 8);
        uVar18 = 0;
        for (uVar42 = uVar29; uVar42 < (param_4 * 6) / 7; uVar42 = uVar42 + 1) {
          uVar68 = (ulonglong)uVar18;
          uVar18 = uVar18 + 3;
          *puVar37 = *(undefined8 *)(local_48 + (int)(uVar68 / ((ulonglong)param_4 / 7)) * 2);
          puVar37 = puVar37 + 1;
        }
        puVar15 = (uint *)(iVar28 + uVar42 * 8);
        for (; uVar42 < param_4; uVar42 = uVar42 + 1) {
          *puVar15 = local_50;
          puVar15[1] = local_4c;
          puVar15 = puVar15 + 2;
        }
        iVar28 = iVar28 + param_6;
      }
      return;
    }
    if (uVar29 == DAT_000185cc - 0xfefff0) goto LAB_00017fb4;
    if (uVar29 < DAT_000185cc - 0xfefff0) {
      if (uVar29 == DAT_000185cc - 0xff0601) goto LAB_00017fb4;
      uVar50 = DAT_000185d0;
      if (uVar29 < DAT_000185cc - 0xff0601) {
        if ((uVar29 != DAT_000185cc - 0xff1100) && (uVar29 != DAT_000185cc - 0xff10f0)) {
          return;
        }
        iVar21 = *param_3;
        uVar54 = 0x10 - puVar15[2];
        uVar47 = puVar15[3];
        uVar27 = 0x10 - puVar15[4];
        uVar44 = puVar15[5];
        uVar56 = 0x10 - puVar15[6];
        uVar62 = puVar15[7];
        uVar29 = (0xc0c0U >> (uVar54 & 0xff)) << (uVar47 & 0xff);
        uVar50 = (0xc0c0U >> (uVar27 & 0xff)) << (uVar44 & 0xff);
        uVar55 = uVar29 | uVar50;
        uVar42 = (0xc0c0U >> (uVar56 & 0xff)) << (uVar62 & 0xff);
        uVar39 = uVar55 | uVar42;
        uVar60 = (uVar50 | uVar42) & 0xffffff;
        local_c8 = CONCAT22((short)uVar42,(short)(uVar29 >> 8));
        local_c4 = CONCAT31(local_c4._1_3_,(char)(uVar42 >> 0x10));
        uVar19 = (0x1313U >> (uVar27 & 0xff)) << (uVar44 & 0xff) |
                 (0x1313U >> (uVar54 & 0xff)) << (uVar47 & 0xff) |
                 (0x1313U >> (uVar56 & 0xff)) << (uVar62 & 0xff);
        uVar26 = uVar19 & 0xffffff;
        uVar18 = (uVar29 | uVar42) & 0xffffff;
        uVar6 = (undefined1)uVar26;
        local_d8 = CONCAT13((char)uVar55,(int3)uVar39);
        local_d4 = CONCAT22((short)uVar60,(short)(uVar55 >> 8));
        uVar1 = (undefined1)(uVar60 >> 0x10);
        local_d0 = CONCAT31((int3)uVar50,uVar1);
        local_cc = CONCAT13((char)uVar29,(int3)(uVar29 | uVar42));
        local_a0 = CONCAT13(uVar6,(int3)uVar42);
        uVar2 = (undefined1)(uVar19 >> 8);
        uVar3 = (undefined1)(uVar26 >> 0x10);
        local_9c = CONCAT22((short)uVar18,CONCAT11(uVar3,uVar2));
        local_8c = CONCAT31(local_8c._1_3_,(char)(uVar39 >> 0x10));
        uVar29 = (0xffffU >> (uVar27 & 0xff)) << (uVar44 & 0xff) |
                 (0xffffU >> (uVar54 & 0xff)) << (uVar47 & 0xff) |
                 (0xffffU >> (uVar56 & 0xff)) << (uVar62 & 0xff);
        local_68.quot =
             CONCAT13((char)uVar29,
                      (uint3)((0x4c4cU >> (uVar56 & 0xff)) << (uVar62 & 0xff)) |
                      (uint3)((0x2121U >> (uVar27 & 0xff)) << (uVar44 & 0xff)));
        uVar19 = (0x6a6aU >> (uVar56 & 0xff)) << (uVar62 & 0xff) |
                 (0x3232U >> (uVar54 & 0xff)) << (uVar47 & 0xff);
        local_68.rem = CONCAT22((short)uVar19,(short)(uVar29 >> 8));
        uVar29 = (0x1d1dU >> (uVar27 & 0xff)) << (uVar44 & 0xff) |
                 (0x1d1dU >> (uVar54 & 0xff)) << (uVar47 & 0xff) |
                 (0x1d1dU >> (uVar56 & 0xff)) << (uVar62 & 0xff);
        local_98 = CONCAT13(uVar3,CONCAT12(uVar2,CONCAT11(uVar6,(char)(uVar18 >> 0x10))));
        local_94 = CONCAT13(uVar6,CONCAT12(uVar1,(short)(uVar50 | uVar42)));
        local_90 = CONCAT31(CONCAT21((short)uVar39,uVar3),uVar2);
        local_60 = CONCAT13(uVar3,CONCAT12(uVar2,CONCAT11(uVar6,(char)(uVar19 >> 0x10))));
        local_5c = CONCAT13(uVar6,(uint3)((0x909U >> (uVar27 & 0xff)) << (uVar44 & 0xff)) |
                                  (uint3)((0x909U >> (uVar54 & 0xff)) << (uVar47 & 0xff)) |
                                  (uint3)((0x909U >> (uVar56 & 0xff)) << (uVar62 & 0xff)));
        local_58 = CONCAT31(CONCAT21((short)uVar29,uVar3),uVar2);
        local_54._0_3_ = CONCAT12(uVar2,CONCAT11(uVar6,(char)(uVar29 >> 0x10)));
        local_54 = CONCAT13(uVar3,(undefined3)local_54);
        uVar29 = (param_5 * 6) / 9;
        iVar59 = iVar21;
        for (uVar50 = 0; uVar50 != uVar29; uVar50 = uVar50 + 1) {
          for (uVar42 = 0; param_4 != uVar42; uVar42 = uVar42 + 1) {
            iVar41 = ((uVar42 * 7) / param_4) * 3;
            *(undefined2 *)(iVar59 + uVar42 * 3) = *(undefined2 *)((int)&local_d8 + iVar41);
            *(undefined1 *)(iVar59 + uVar42 * 3 + 2) = *(undefined1 *)((int)&local_d8 + iVar41 + 2);
          }
          iVar59 = iVar59 + param_6;
        }
        iVar21 = uVar29 * param_6 + iVar21;
        for (; uVar29 < (param_5 * 7) / 9; uVar29 = uVar29 + 1) {
          for (uVar50 = 0; param_4 != uVar50; uVar50 = uVar50 + 1) {
            iVar59 = ((uVar50 * 7) / param_4) * 3;
            *(undefined2 *)(iVar21 + uVar50 * 3) = *(undefined2 *)((int)&local_a0 + iVar59);
            *(undefined1 *)(iVar21 + uVar50 * 3 + 2) = *(undefined1 *)((int)&local_a0 + iVar59 + 2);
          }
          iVar21 = iVar21 + param_6;
        }
        uVar50 = (param_4 * 5) / 7;
        for (; uVar29 < param_5; uVar29 = uVar29 + 1) {
          for (uVar42 = 0; uVar42 != uVar50; uVar42 = uVar42 + 1) {
            iVar59 = ((uVar42 << 2) / uVar50) * 3;
            *(undefined2 *)(iVar21 + uVar42 * 3) = *(undefined2 *)((int)&local_68.quot + iVar59);
            *(undefined1 *)(iVar21 + uVar42 * 3 + 2) =
                 *(undefined1 *)((int)&local_68.quot + iVar59 + 2);
          }
          uVar18 = 0;
          for (uVar42 = uVar50; uVar42 < (param_4 * 6) / 7; uVar42 = uVar42 + 1) {
            uVar68 = (ulonglong)uVar18;
            uVar18 = uVar18 + 3;
            iVar59 = (int)(uVar68 / ((ulonglong)param_4 / 7)) * 3;
            *(undefined2 *)(iVar21 + uVar42 * 3) = *(undefined2 *)((int)&local_5c + iVar59);
            *(undefined1 *)(iVar21 + uVar42 * 3 + 2) = *(undefined1 *)((int)&local_5c + iVar59 + 2);
          }
          for (; uVar42 < param_4; uVar42 = uVar42 + 1) {
            *(undefined2 *)(iVar21 + uVar42 * 3) = local_54._1_2_;
            *(undefined1 *)(iVar21 + uVar42 * 3 + 2) = uVar3;
          }
          iVar21 = iVar21 + param_6;
        }
        return;
      }
LAB_00018930:
      if (uVar29 == uVar50) goto LAB_00017fb4;
      uVar50 = uVar50 + 0x5ea;
      goto LAB_00018578;
    }
    if (uVar29 == DAT_000185d4) goto LAB_000182ac;
    if (uVar29 < DAT_000185d4) {
      if (uVar29 == DAT_000185d4 - 0xff) goto LAB_000182ac;
      uVar50 = DAT_000185d4 - 0xef;
    }
    else {
      if ((uVar29 == DAT_000185d8) || (uVar29 == DAT_000185d8 + 0x17)) goto LAB_000182ac;
      uVar50 = DAT_000185d8 - 0xfe9;
    }
LAB_00018964:
    if (uVar29 != uVar50) {
      return;
    }
LAB_000182ac:
    uVar29 = 0x10 - puVar15[2];
    uVar54 = puVar15[3];
    uVar50 = 0x10 - puVar15[4];
    uVar19 = puVar15[5];
    uVar26 = 0x10 - puVar15[6];
    iVar59 = *param_3;
    uVar18 = puVar15[7];
    uVar11 = (ushort)((0xc0c0U >> (uVar50 & 0xff)) << (uVar19 & 0xff));
    uVar10 = (ushort)((0xc0c0U >> (uVar29 & 0xff)) << (uVar54 & 0xff));
    uVar12 = (ushort)((0xc0c0U >> (uVar26 & 0xff)) << (uVar18 & 0xff));
    uVar5 = uVar10 | uVar11 | uVar12;
    uVar8 = (ushort)((0xffffU >> (0x10 - puVar15[8] & 0xff)) << (puVar15[9] & 0xff));
    local_d8 = CONCAT22(uVar10 | uVar11 | uVar8,uVar5 | uVar8);
    local_cc = CONCAT22(local_cc._2_2_,uVar12 | uVar8);
    local_d4 = CONCAT22(uVar11 | uVar8,uVar8 | uVar11 | uVar12);
    uVar7 = (ushort)((0x7f7fU >> (0x10 - puVar15[8] & 0xff)) << (puVar15[9] & 0xff));
    local_d0 = CONCAT22(uVar10 | uVar8,uVar8 | uVar10 | uVar12);
    uVar9 = (ushort)((0x1313U >> (uVar50 & 0xff)) << (uVar19 & 0xff)) |
            (ushort)((0x1313U >> (uVar29 & 0xff)) << (uVar54 & 0xff)) |
            (ushort)((0x1313U >> (uVar26 & 0xff)) << (uVar18 & 0xff));
    uVar13 = uVar7 | uVar9;
    local_a0 = CONCAT22(uVar13,uVar12 | uVar7);
    local_9c = CONCAT22(uVar13,uVar10 | uVar12 | uVar7);
    local_98 = CONCAT22(uVar13,uVar11 | uVar12 | uVar7);
    uVar9 = uVar8 | uVar9;
    local_68.quot =
         CONCAT22(uVar8 | (ushort)((0xffffU >> (uVar29 & 0xff)) << (uVar54 & 0xff)) |
                  (ushort)((0xffffU >> (uVar50 & 0xff)) << (uVar19 & 0xff)) |
                  (ushort)((0xffffU >> (uVar26 & 0xff)) << (uVar18 & 0xff)),
                  uVar8 | (ushort)((0x2121U >> (uVar50 & 0xff)) << (uVar19 & 0xff)) |
                  (ushort)((0x4c4cU >> (uVar26 & 0xff)) << (uVar18 & 0xff)));
    local_94 = CONCAT22(local_94._2_2_,uVar5 | uVar7);
    local_68.rem = CONCAT22(uVar9,uVar8 | (ushort)((0x3232U >> (uVar29 & 0xff)) << (uVar54 & 0xff))
                                  | (ushort)((0x6a6aU >> (uVar26 & 0xff)) << (uVar18 & 0xff)));
    local_60 = CONCAT22(uVar9,uVar8 | (ushort)((0x909U >> (uVar29 & 0xff)) << (uVar54 & 0xff)) |
                              (ushort)((0x909U >> (uVar50 & 0xff)) << (uVar19 & 0xff)) |
                              (ushort)((0x909U >> (uVar26 & 0xff)) << (uVar18 & 0xff)));
    uVar42 = (param_5 * 6) / 9;
    local_5c = CONCAT22(uVar9,uVar8 | (ushort)((0x1d1dU >> (uVar29 & 0xff)) << (uVar54 & 0xff)) |
                              (ushort)((0x1d1dU >> (uVar50 & 0xff)) << (uVar19 & 0xff)) |
                              (ushort)((0x1d1dU >> (uVar26 & 0xff)) << (uVar18 & 0xff)));
    puVar61 = (undefined2 *)(iVar59 + -2);
    for (uVar29 = 0; uVar29 != uVar42; uVar29 = uVar29 + 1) {
      puVar30 = puVar61;
      for (uVar50 = 0; param_4 != uVar50; uVar50 = uVar50 + 1) {
        puVar30 = puVar30 + 1;
        *puVar30 = *(undefined2 *)((int)&local_d8 + ((uVar50 * 7) / param_4) * 2);
      }
      puVar61 = (undefined2 *)((int)puVar61 + param_6);
    }
    iVar59 = uVar42 * param_6 + iVar59;
    for (; uVar42 < (param_5 * 7) / 9; uVar42 = uVar42 + 1) {
      puVar61 = (undefined2 *)(iVar59 + -2);
      for (uVar29 = 0; param_4 != uVar29; uVar29 = uVar29 + 1) {
        puVar61 = puVar61 + 1;
        *puVar61 = *(undefined2 *)((int)&local_a0 + ((uVar29 * 7) / param_4) * 2);
      }
      iVar59 = iVar59 + param_6;
    }
    uVar29 = (param_4 * 5) / 7;
    for (; uVar42 < param_5; uVar42 = uVar42 + 1) {
      puVar61 = (undefined2 *)(iVar59 + -2);
      for (uVar50 = 0; uVar50 != uVar29; uVar50 = uVar50 + 1) {
        puVar61 = puVar61 + 1;
        *puVar61 = *(undefined2 *)((int)&local_68.quot + ((uVar50 << 2) / uVar29) * 2);
      }
      uVar18 = 0;
      puVar61 = (undefined2 *)(iVar59 + uVar29 * 2);
      for (uVar50 = uVar29; uVar50 < (param_4 * 6) / 7; uVar50 = uVar50 + 1) {
        uVar68 = (ulonglong)uVar18;
        uVar18 = uVar18 + 3;
        *puVar61 = *(undefined2 *)((int)&local_60 + (int)(uVar68 / ((ulonglong)param_4 / 7)) * 2);
        puVar61 = puVar61 + 1;
      }
      puVar33 = (ushort *)(iVar59 + uVar50 * 2);
      for (; uVar50 < param_4; uVar50 = uVar50 + 1) {
        *puVar33 = uVar9;
        puVar33 = puVar33 + 1;
      }
      iVar59 = iVar59 + param_6;
    }
    return;
  case 3:
    uVar29 = *puVar15;
    if (uVar29 == DAT_00019ff8) goto LAB_00019bdc;
    if (uVar29 < DAT_00019ff8) {
      if (uVar29 == DAT_00019ffc) goto LAB_00019bdc;
      if (uVar29 < DAT_00019ffc) {
        if (uVar29 == DAT_00019ffc - 0x10ef) goto LAB_00019bdc;
        uVar18 = DAT_0001a000;
        if (uVar29 < DAT_00019ffc - 0x10ef) {
          uVar42 = DAT_00019ffc - 0x10ff;
        }
        else {
LAB_00019c4c:
          if (uVar29 == uVar18) goto LAB_00019bdc;
          uVar42 = uVar18 + 0x17;
        }
      }
      else {
        if (uVar29 == DAT_0001a004) goto LAB_00019bdc;
        uVar42 = DAT_0001a004;
        if (uVar29 < DAT_0001a004) {
          uVar42 = DAT_0001a004 - 0x5ea;
        }
        if ((DAT_0001a004 < uVar29) && (uVar42 = DAT_0001a00c, uVar29 == DAT_0001a008))
        goto LAB_00019bdc;
      }
    }
    else {
      if (uVar29 == DAT_0001a010) goto LAB_00019bdc;
      if (DAT_0001a010 <= uVar29) {
        if (uVar29 != DAT_00019ff0) {
          if (uVar29 < DAT_00019ff0) {
            uVar50 = DAT_0001a018;
            if (uVar29 == DAT_00019ff0 + 0xebfe15fa) goto LAB_00019bdc;
          }
          else {
            if (uVar29 == DAT_00019ff4) goto LAB_00019c8c;
            uVar50 = DAT_00019ff4 + 0x17;
          }
          if (uVar29 != uVar50) {
            return;
          }
        }
LAB_00019c8c:
        puVar49 = (uint *)*param_3;
        uVar29 = param_5 >> 1;
        puVar25 = puVar49;
        for (uVar50 = 0; uVar50 != uVar29; uVar50 = uVar50 + 1) {
          uVar42 = 0;
          puVar46 = puVar25;
          while (uVar42 != param_4 >> 1) {
            uVar18 = FUN_00017420((uVar42 & 0x3ff) << 6);
            uVar18 = uVar18 & 0xffff;
            uVar19 = -puVar15[2] + 0x10;
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar54 = puVar15[3];
            uVar54 = -puVar15[4] + 0x10;
            uVar68 = VectorShiftLeft(CONCAT44(0 >> (uVar19 & 0xff),
                                              uVar18 >> (uVar19 & 0xff) |
                                              0 << (0x20 - uVar19 & 0xff) |
                                              0U >> (-puVar15[2] - 0x10 & 0xff)),in_d17,8,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar19 = puVar15[5];
            uVar19 = -puVar15[6] + 0x10;
            in_d17 = VectorShiftLeft(CONCAT44(0 >> (uVar54 & 0xff),
                                              uVar18 >> (uVar54 & 0xff) |
                                              0 << (0x20 - uVar54 & 0xff) |
                                              0U >> (-puVar15[4] - 0x10 & 0xff)),in_d18,8,1);
            uVar26 = uVar18 >> (uVar19 & 0xff) | 0 << (0x20 - uVar19 & 0xff) |
                     0U >> (-puVar15[6] - 0x10 & 0xff);
            uVar54 = puVar15[7];
            uVar18 = (uint)(uVar68 | in_d17) | uVar26 << (uVar54 & 0xff);
            uVar19 = (uint)((uVar68 | in_d17) >> 0x20) |
                     (0U >> (uVar19 & 0xff)) << (uVar54 & 0xff) | uVar26 << (uVar54 - 0x20 & 0xff) |
                     uVar26 >> (0x20 - uVar54 & 0xff);
            puVar46[2] = uVar18;
            puVar46[3] = uVar19;
            *puVar46 = uVar18;
            puVar46[1] = uVar19;
            uVar42 = uVar42 + 1;
            puVar46 = puVar46 + 4;
          }
          puVar25 = (uint *)((int)puVar25 + param_6);
        }
        puVar49 = (uint *)(uVar29 * param_6 + (int)puVar49);
        for (; uVar29 < param_5; uVar29 = uVar29 + 1) {
          uVar50 = 0;
          puVar25 = puVar49;
          while (param_4 >> 1 != uVar50) {
            uVar42 = FUN_00017420((uVar50 & 0x3fc) << 6);
            uVar42 = uVar42 & 0xffff;
            uVar18 = -puVar15[2] + 0x10;
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar19 = puVar15[3];
            uVar19 = -puVar15[4] + 0x10;
            uVar68 = VectorShiftLeft(CONCAT44(0 >> (uVar18 & 0xff),
                                              uVar42 >> (uVar18 & 0xff) |
                                              0 << (0x20 - uVar18 & 0xff) |
                                              0U >> (-puVar15[2] - 0x10 & 0xff)),in_d17,8,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            uVar18 = puVar15[5];
            uVar18 = -puVar15[6] + 0x10;
            in_d17 = VectorShiftLeft(CONCAT44(0 >> (uVar19 & 0xff),
                                              uVar42 >> (uVar19 & 0xff) |
                                              0 << (0x20 - uVar19 & 0xff) |
                                              0U >> (-puVar15[4] - 0x10 & 0xff)),in_d18,8,1);
            uVar54 = uVar42 >> (uVar18 & 0xff) | 0 << (0x20 - uVar18 & 0xff) |
                     0U >> (-puVar15[6] - 0x10 & 0xff);
            uVar19 = puVar15[7];
            uVar42 = (uint)(uVar68 | in_d17) | uVar54 << (uVar19 & 0xff);
            uVar18 = (uint)((uVar68 | in_d17) >> 0x20) |
                     (0U >> (uVar18 & 0xff)) << (uVar19 & 0xff) | uVar54 << (uVar19 - 0x20 & 0xff) |
                     uVar54 >> (0x20 - uVar19 & 0xff);
            puVar25[2] = uVar42;
            puVar25[3] = uVar18;
            *puVar25 = uVar42;
            puVar25[1] = uVar18;
            uVar50 = uVar50 + 1;
            puVar25 = puVar25 + 4;
          }
          puVar49 = (uint *)((int)puVar49 + param_6);
        }
        return;
      }
      uVar50 = DAT_0001a010 - 0x15ea;
      if (uVar29 == uVar50) goto LAB_00019bdc;
      uVar42 = uVar50;
      if (uVar29 < uVar50) {
        uVar42 = DAT_0001a010 - 0x1601;
      }
      uVar18 = DAT_0001a014;
      if (uVar50 < uVar29) goto LAB_00019c4c;
    }
    if (uVar29 != uVar42) {
      return;
    }
LAB_00019bdc:
    puVar25 = (uint *)*param_3;
    uVar29 = param_5 >> 1;
    puVar49 = puVar25;
    for (uVar50 = 0; uVar50 != uVar29; uVar50 = uVar50 + 1) {
      puVar46 = puVar49;
      for (uVar42 = 0; uVar42 != param_4 >> 1; uVar42 = uVar42 + 1) {
        uVar54 = uVar42 & 0x3ff;
        uVar18 = FUN_00016e54(puVar15 + 2,uVar54);
        uVar19 = FUN_00016e54(puVar15 + 4,uVar54);
        uVar54 = FUN_00016e54(puVar15 + 6,uVar54);
        uVar54 = uVar18 | uVar19 | uVar54;
        puVar46[1] = uVar54;
        *puVar46 = uVar54;
        puVar25 = extraout_r2_06;
        puVar46 = puVar46 + 2;
      }
      puVar49 = (uint *)((int)puVar49 + param_6);
    }
    puVar25 = (uint *)(uVar29 * param_6 + (int)puVar25);
    for (; uVar29 < param_5; uVar29 = uVar29 + 1) {
      puVar49 = puVar25;
      for (uVar50 = 0; param_4 >> 1 != uVar50; uVar50 = uVar50 + 1) {
        uVar19 = uVar50 & 0x3fc;
        uVar42 = FUN_00016e54(puVar15 + 2,uVar19);
        uVar18 = FUN_00016e54(puVar15 + 4,uVar19);
        uVar19 = FUN_00016e54(puVar15 + 6,uVar19);
        uVar19 = uVar42 | uVar18 | uVar19;
        puVar49[1] = uVar19;
        *puVar49 = uVar19;
        puVar25 = extraout_r2_07;
        puVar49 = puVar49 + 2;
      }
      puVar25 = (uint *)((int)puVar25 + param_6);
    }
    return;
  default:
    printf((char *)(DAT_0001a01c + 0x19fe8),param_2);
    return;
  }
  uVar29 = *puVar15;
  if (uVar29 != DAT_00019ff0) {
    uVar50 = DAT_00019ff0;
    if (uVar29 < DAT_00019ff0) {
      uVar50 = DAT_00019ff0 - 0x17;
    }
    if (DAT_00019ff0 < uVar29) {
      if (uVar29 == DAT_00019ff4) goto LAB_00019b58;
      uVar50 = DAT_00019ff4 + 0x17;
    }
    if (uVar29 != uVar50) {
      iVar59 = 0x77;
      goto LAB_00019b5c;
    }
  }
LAB_00019b58:
  iVar59 = 0x38;
LAB_00019b5c:
  memset((void *)*param_3,iVar59,param_6 * param_5);
  return;
}



/* ===== FUN_0001a020 @ 0001a020 size=80 ===== */

int FUN_0001a020(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(DAT_0001a070 + 0x1a038);
  do {
    iVar1 = strcmp((char *)*puVar3,param_1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 4);
  printf((char *)(DAT_0001a074 + 0x1a068),param_1);
  return 2;
}



/* ===== _fini @ 0001a078 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeObjectSetProperty @ 0002f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeObjectSetProperty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeCrtcSetGamma @ 0002f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeCrtcSetGamma(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreePropertyBlob @ 0002f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreePropertyBlob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeRmFB @ 0002f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeRmFB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeCreatePropertyBlob @ 0002f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeCreatePropertyBlob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetPlane @ 0002f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetPlane(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmGetFormatModifierVendor @ 0002f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmGetFormatModifierVendor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeEncoder @ 0002f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeEncoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0002f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0002f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmGetCap @ 0002f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmGetCap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0002f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::div @ 0002f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

div_t * div(div_t *__return_storage_ptr__,int __numer,int __denom)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmGetFormatModifierName @ 0002f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmGetFormatModifierName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0002f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetFB @ 0002f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetFB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 0002f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetConnector @ 0002f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetConnector(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeSetPlane @ 0002f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeSetPlane(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 0002f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0002f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmClose @ 0002f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmClose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeAddFB2 @ 0002f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeAddFB2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeAtomicFree @ 0002f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeAtomicFree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeObjectGetProperties @ 0002f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeObjectGetProperties(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeSetCursor @ 0002f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeSetCursor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeDirtyFB @ 0002f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeDirtyFB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0002f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmSetClientCap @ 0002f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmSetClientCap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetEncoder @ 0002f0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetEncoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreePlane @ 0002f0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreePlane(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002f0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002f0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeResources @ 0002f0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeResources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetProperty @ 0002f0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetProperty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002f0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetPropertyBlob @ 0002f0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetPropertyBlob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmOpen @ 0002f0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmOpen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeConnector @ 0002f0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeConnector(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002f0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002f100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeMoveCursor @ 0002f104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeMoveCursor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModePageFlip @ 0002f108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModePageFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFormatModifierBlobIterNext @ 0002f10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFormatModifierBlobIterNext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 0002f110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strpbrk @ 0002f114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002f118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmDropMaster @ 0002f11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmDropMaster(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetCrtc @ 0002f120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetCrtc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeCrtc @ 0002f124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeCrtc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002f128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetPlaneResources @ 0002f12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetPlaneResources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmIoctl @ 0002f130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmIoctl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002f134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeProperty @ 0002f138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeProperty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeFB @ 0002f13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeFB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeGetResources @ 0002f140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeGetResources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002f144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeAtomicAlloc @ 0002f148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeAtomicAlloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreeObjectProperties @ 0002f14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreeObjectProperties(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmHandleEvent @ 0002f150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmHandleEvent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeFreePlaneResources @ 0002f154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeFreePlaneResources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeAtomicCommit @ 0002f158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeAtomicCommit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::drmModeSetCrtc @ 0002f15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void drmModeSetCrtc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0002f160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0002f164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002f168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


