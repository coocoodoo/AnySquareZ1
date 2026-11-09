// rk_mpi_vi_dup_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011924 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011948 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002700c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011954 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00027010)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011960 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0001196c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00027018)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002701c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00027020)();
  return piVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00027024)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 0001199c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000119a8 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0002702c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 000119b4 size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00027030)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 000119c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00027034)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000119cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 000119d8 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0002703c)();
  return;
}



/* ===== <EXTERNAL>::getline @ 000119e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_00027040)(__lineptr);
  return _Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000119f0 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00027044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000119fc size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00027048)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 00011a08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0002704c)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011a14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00027050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00027054)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002705c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00011a44 size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_00027060)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00027064)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00027068)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002706c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00011a74 size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_00027070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011a80 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00027074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011a8c size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00027078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00011a98 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0002707c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011aa4 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00027080)();
  return;
}



/* ===== <EXTERNAL>::access @ 00011ab0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00027084)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00011abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00027088)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011ac8 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002708c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011ad4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00027090)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00027094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00027098)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00011af8 size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0002709c)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011b04 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000270a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00011b10 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_000270a4)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011b1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000270a8)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00011b28 size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_000270ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00011b34 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_000270b0)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000270b4)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00011b4c size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000270b8)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00011b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000270bc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00011b64 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_000270c0)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000270c4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011b7c size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000270c8)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00011b88 size=12 ===== */

void __aeabi_uidivmod(void)

{
  (*(code *)PTR___aeabi_uidivmod_000270cc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00011b94 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000270d0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011ba0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000270d4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000270d8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00011bb8 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_000270dc)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000270e0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00011bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_000270e4)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00011bdc size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_000270e8)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000270ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00011bf4 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_000270f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00011c00 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_000270f4)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000270f8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011c18 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000270fc)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00027100)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00011c30 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00027104)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00011c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00027108)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00011c48 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_0002710c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00011c54 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00027110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00011c60 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00027114)();
  return;
}



/* ===== <EXTERNAL>::ftell @ 00011c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_00027118)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::free @ 00011c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002711c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00027120)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00027124)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00027128)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011ca8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002712c)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00027130)(__th);
  return iVar1;
}



/* ===== main @ 00011cc0 size=6636 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  uint *__ptr;
  int iVar1;
  FILE *pFVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 extraout_r1;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int extraout_r1_00;
  uint extraout_r1_01;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *__s;
  uint uVar12;
  uint *puVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  int unaff_r11;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char *local_47c;
  pthread_t local_478;
  pthread_t local_474;
  uint local_470;
  uint local_46c;
  undefined1 auStack_468 [40];
  pthread_t local_440;
  uint local_43c;
  undefined8 local_438;
  undefined8 local_430;
  uint local_428;
  uint local_424;
  uint local_420;
  undefined4 local_3f8;
  uint local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  char local_3b0 [4];
  undefined8 local_3ac [2];
  undefined4 local_39c;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_348;
  undefined4 local_2b0 [2];
  undefined *local_2a8;
  char *local_2a0;
  code *local_29c;
  undefined4 local_294;
  undefined4 local_290;
  char *local_280;
  undefined4 local_270;
  undefined1 local_26c;
  undefined *local_268;
  uint *local_264;
  char *local_260;
  undefined4 local_250;
  undefined1 local_24c;
  undefined *local_248;
  uint *local_244;
  char *local_240;
  undefined4 local_230;
  undefined1 local_22c;
  undefined *local_228;
  uint *local_224;
  char *local_220;
  undefined4 local_210;
  undefined1 local_20c;
  undefined *local_208;
  uint *local_204;
  char *local_200;
  undefined4 local_1f0;
  undefined1 local_1ec;
  char *local_1e8;
  uint *local_1e4;
  char *local_1e0;
  undefined4 local_1d0;
  undefined1 local_1cc;
  char *local_1c8;
  uint *local_1c4;
  char *local_1c0;
  undefined4 local_1b0;
  undefined1 local_1ac;
  char *local_1a8;
  uint *local_1a4;
  char *local_1a0;
  undefined4 local_190;
  undefined1 local_18c;
  undefined *local_188;
  uint *local_184;
  char *local_180;
  undefined4 local_170;
  undefined1 local_16c;
  char *local_168;
  uint *local_164;
  char *local_160;
  undefined4 local_150;
  undefined1 local_14c;
  char *local_148;
  uint *local_144;
  char *local_140;
  undefined4 local_130;
  char *local_128;
  uint *local_124;
  char *local_120;
  undefined4 local_110;
  char *local_108;
  uint *local_104;
  char *local_100;
  undefined4 local_f0;
  char *local_e8;
  uint *local_e4;
  char *local_e0;
  undefined4 local_d0;
  char *local_c8;
  uint *local_c4;
  char *local_c0;
  undefined4 local_b0;
  char *local_a8;
  uint *local_a4;
  char *local_a0;
  undefined4 local_90;
  char *local_88;
  uint *local_84;
  char *local_80;
  undefined4 local_70;
  char *local_68;
  uint *local_64;
  char *local_60;
  
  __ptr = calloc(0x7a0,1);
  uVar22 = DAT_00012100;
  uVar21 = DAT_000120f8;
  uVar20 = DAT_000120f0;
  puVar18 = __ptr + 0x1e3;
  *(undefined8 *)__ptr = DAT_000120e8;
  *(undefined8 *)(__ptr + 2) = uVar20;
  __ptr[0x17] = 0xffffffff;
  __ptr[0x18] = 0xffffffff;
  __ptr[0x1a] = 3;
  __ptr[0xe] = 0x780;
  __ptr[200] = 0;
  __ptr[0x16] = 0;
  __ptr[0xf] = 0x438;
  __ptr[0x10] = 0;
  __ptr[0x1d] = 4;
  __ptr[0x26] = 1;
  __ptr[0x1e1] = 1;
  *(undefined8 *)puVar18 = uVar21;
  *(undefined8 *)(__ptr + 0x1e5) = uVar22;
  __ptr[0x1e2] = 5;
  RK_LOG(5,0x17171708,"test running enter!",&DAT_0001537c,0x356);
  memset(local_2b0,0,0x280);
  local_294 = 1;
  local_290 = 1;
  local_270 = 4;
  local_250 = 4;
  local_230 = 4;
  local_210 = 4;
  local_64 = __ptr + 0x1e1;
  local_1f0 = 4;
  local_1d0 = 4;
  local_c4 = __ptr + 0x1e5;
  local_1b0 = 4;
  local_a4 = __ptr + 0x1e6;
  local_2a8 = &DAT_0001540c;
  local_2a0 = "show this help message and exit";
  local_29c = argparse_help_cb;
  local_280 = "basic options:";
  local_268 = &DAT_00015444;
  local_84 = __ptr + 0x1e2;
  local_228 = &DAT_00015444;
  local_260 = "set dev id(default 0)";
  local_220 = "set dev id(default 0)";
  local_248 = &DAT_00015460;
  local_208 = &DAT_00015460;
  local_240 = "set pipe id(default 0)";
  local_200 = "set pipe id(default 0)";
  local_1e8 = "channel";
  local_1e0 = "set channel id(default 1)";
  local_1c8 = "loopcount";
  local_1c0 = "set capture frame count(default 100)";
  local_2b0[0] = 2;
  local_26c = 0x77;
  local_24c = 0x68;
  local_22c = 100;
  local_20c = 0x70;
  local_1ec = 99;
  local_1cc = 0x6c;
  local_1ac = 0x6f;
  local_1a8 = "output";
  local_1a0 = 
  "save output file, file at /data/test_<devid>_<pipeid>_<chnid>.bin (default 0; 0:no save 1:save)";
  local_188 = &DAT_00015540;
  local_180 = "test mode(default 1; \n\t0:vi get&release frame \n\t";
  local_168 = "depth";
  local_160 = "channel output depth, default{u32BufCount(not bind) or 0(bind venc/vpss/...)}";
  local_148 = "format";
  local_140 = 
  "set the format(default 0; 0:RK_FMT_YUV420SP 10:RK_FMT_YUV422_UYVY131080:RK_FMT_RGB_BAYER_SBGGR_12BPP)"
  ;
  local_128 = "buf_cnt";
  local_120 = "out buf count, range[1-8] default(3)";
  local_108 = "maxWidth";
  local_100 = "config max resolution width(<= sensor max resolution width)";
  local_e8 = "maxHeight";
  local_e0 = "config max resolution height(<= sensor max resolution height)";
  local_c8 = "change_res";
  local_c0 = "change res by frames(default(20))";
  local_a8 = "en_rgn";
  local_a0 = "enable rgn. default(0)";
  local_88 = "rgn_type";
  local_80 = "rgn type. 0:overlay,1:overlay-ex 2:cover,3:mosaic";
  local_18c = 0x6d;
  local_16c = 0x44;
  local_14c = 0x66;
  local_190 = 4;
  local_170 = 4;
  local_150 = 4;
  local_130 = 4;
  local_110 = 4;
  local_f0 = 4;
  local_d0 = 4;
  local_b0 = 4;
  local_90 = 4;
  local_70 = 4;
  local_204 = __ptr + 1;
  local_244 = __ptr + 0xf;
  puVar15 = __ptr + 0x2a;
  local_1e4 = __ptr + 2;
  local_1c4 = __ptr + 3;
  local_1a4 = __ptr + 0x29;
  local_184 = __ptr + 200;
  local_164 = __ptr + 0x16;
  local_144 = __ptr + 0x10;
  local_124 = __ptr + 0x1a;
  local_e4 = __ptr + 0x1e4;
  local_68 = "rgn_cnt";
  local_60 = "rgn count. default(1),max:8";
  local_264 = __ptr + 0xe;
  local_224 = __ptr;
  local_104 = puVar18;
  argparse_init(auStack_468,local_2b0,&PTR_s_1___rk_mpi_vi_dup_test__c_0__d_0_000152e0,0);
  argparse_describe(auStack_468,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_468,param_1,param_2);
  if (__ptr[1] != *__ptr) {
    __ptr[1] = *__ptr;
  }
  __s = __ptr + 0x6a;
  puts("cmd parse result:");
  printf("output file open      : %d\n",__ptr[0x29]);
  printf("yuv output file name  : %s/%s\n",puVar15,__s);
  printf("loop count            : %d\n",__ptr[3]);
  printf("ctx->enMode           : %d\n",__ptr[200]);
  printf("ctx->dev              : %d\n",*__ptr);
  printf("ctx->pipe             : %d\n",__ptr[1]);
  printf("ctx->channel          : %d\n",__ptr[2]);
  printf("width                 : %d\n",__ptr[0xe]);
  printf("height                : %d\n",__ptr[0xf]);
  printf("out buf count         : %d\n",__ptr[0x1a]);
  printf("max width             : %d\n",__ptr[0x1e3]);
  printf("max height            : %d\n",__ptr[0x1e4]);
  printf("get echo res frame    : %d\n",__ptr[0x1e5]);
  printf("bEnRgn                : %d\n",__ptr[0x1e6]);
  printf("rgn count             : %d\n",__ptr[0x1e1]);
  printf("rgn type              : %d\n",__ptr[0x1e2]);
  iVar1 = RK_MPI_SYS_Init();
  if (iVar1 != 0) {
    RK_LOG(2,0x17171708,"rk mpi sys init fail!",&DAT_0001537c,0x392);
    unaff_r11 = -1;
    goto LAB_00012280;
  }
  uVar6 = 0;
  uVar5 = extraout_r1;
  if (__ptr[0x29] != 0) {
    uVar5 = (undefined1)ram0x00015810;
    uVar6 = s__data_0001580c._0_4_;
  }
  if (__ptr[0x29] != 0) {
    __ptr[0x2a] = uVar6;
    *(undefined1 *)(__ptr + 0x2b) = uVar5;
  }
  iVar1 = 0;
  switch(__ptr[200]) {
  case 0:
    if (__ptr[0x16] == 0) {
      RK_LOG(2,0x17171708,"depth need > 0 when vi not bind any other module!",&DAT_0001537c,0x39d);
      __ptr[0x16] = __ptr[0x1a];
    }
    snprintf((char *)__s,0x100,"test_vi_dup_%d_%d_%d.bin",*__ptr,__ptr[1],__ptr[2]);
    memset(local_3b0,0,0x100);
    snprintf(local_3b0,0x100,"%s/%s",puVar15,__s);
    pFVar2 = fopen64(local_3b0,"wb");
    if (pFVar2 != (FILE *)0x0) {
      if (0 < (int)__ptr[3]) {
        iVar16 = 0;
        do {
          iVar1 = RK_MPI_VI_GetChnFrame(__ptr[1],__ptr[2],__ptr + 0xac,100);
          if (iVar1 == 0) {
            uVar20 = TEST_COMM_GetNowUs();
            pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(__ptr[0xac]);
            uVar21 = *(undefined8 *)(__ptr + 0xbc);
            uVar22 = __aeabi_uldivmod(__ptr[0xba],__ptr[0xbb],1000,0);
            uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
            iVar17 = iVar16 + 1;
            RK_LOG(4,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d"
                   ,"vi_dup_get_frame",0x9e,pvVar4,iVar16,__ptr[0xb9],uVar22,uVar21);
            uVar3 = __ptr[0xb0];
            uVar7 = __ptr[0xaf];
            uVar6 = __ptr[0xae];
            uVar20 = VectorSub(uVar20,*(undefined8 *)(__ptr + 0xba),8);
            RK_LOG(5,0x17171708,"w:%d,h:%d, vw:%d,vh:%d, delay=%lldus","vi_dup_get_frame",0xa4,
                   __ptr[0xad],uVar6,uVar7,uVar3,uVar11,uVar20);
            fwrite(pvVar4,1,__ptr[0xbc],pFVar2);
            fflush(pFVar2);
            iVar1 = RK_MPI_VI_ReleaseChnFrame(__ptr[1],__ptr[2],__ptr + 0xac);
            iVar16 = iVar17;
            if (iVar1 != 0) {
              RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","vi_dup_get_frame",0xb4,iVar1,
                     uVar6,uVar7,uVar3,uVar11,uVar20);
            }
          }
          else {
            DAT_0002716c = DAT_0002716c + 1;
            if (DAT_0002716c < 10) {
              RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","vi_dup_get_frame",0xbb,iVar1);
            }
          }
          usleep(1000);
        } while (iVar16 < (int)__ptr[3]);
      }
      fclose(pFVar2);
      unaff_r11 = iVar1;
      break;
    }
    uVar6 = __ptr[2];
    pcVar14 = "vi_dup_get_frame";
    uVar11 = 0x91;
    goto LAB_00013684;
  case 1:
    memset(local_3b0,0,0x100);
    uVar6 = __ptr[0x1e5];
    if (__ptr[3] == 0) {
      __ptr[3] = uVar6 * 0xc;
    }
    *(undefined8 *)(__ptr + 0x27) = *(undefined8 *)puVar18;
    if (0 < (int)__ptr[3]) {
      puVar18 = (uint *)0xffffffff;
      pFVar2 = (FILE *)0x0;
      uVar3 = 0;
LAB_00012748:
      unaff_r11 = RK_MPI_VI_GetChnFrame(__ptr[1],__ptr[2],__ptr + 0xac,100);
      if (unaff_r11 == 0) {
        uVar20 = TEST_COMM_GetNowUs();
        pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(__ptr[0xac]);
        uVar21 = *(undefined8 *)(__ptr + 0xbc);
        uVar22 = __aeabi_uldivmod(__ptr[0xba],__ptr[0xbb],1000,0);
        uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
        RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
               "vi_dup_change_resolution",0xed,pvVar4,uVar3,__ptr[0xb9],uVar22,uVar21);
        uVar7 = __ptr[0xb0];
        uVar9 = __ptr[0xaf];
        puVar8 = (uint *)__ptr[0xae];
        uVar20 = VectorSub(uVar20,*(undefined8 *)(__ptr + 0xba),8);
        RK_LOG(5,0x17171708,"w:%d,h:%d, vw:%d,vh:%d, delay=%lldus","vi_dup_change_resolution",0xf3,
               __ptr[0xad],puVar8,uVar9,uVar7,uVar11,uVar20);
        uVar12 = __ptr[0xad];
        puVar13 = (uint *)__ptr[0xae];
        if (pFVar2 == (FILE *)0x0) {
          puVar8 = puVar13;
          snprintf((char *)__s,0x100,"reso_%d_%d_%d_%d.bin",*__ptr,__ptr[2],uVar12,puVar13);
          snprintf(local_3b0,0x100,"%s/%s",puVar15,__s);
          if (__ptr[0x29] != 0) {
            pFVar2 = fopen64(local_3b0,"wb");
            if (pFVar2 != (FILE *)0x0) goto LAB_00012830;
            unaff_r11 = -1;
            RK_LOG(2,0x17171708,"CHN:%d can\'t open file %s","vi_dup_change_resolution",0x102,
                   __ptr[2],local_3b0,uVar9,uVar7,uVar11,uVar20);
            break;
          }
        }
        else {
LAB_00012830:
          if (__ptr[0x29] != 0) {
            fwrite(pvVar4,1,__ptr[0xbc],pFVar2);
            fflush(pFVar2);
          }
        }
        unaff_r11 = RK_MPI_VI_ReleaseChnFrame(__ptr[1],__ptr[2],__ptr + 0xac);
        if (unaff_r11 != 0) {
          RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","vi_dup_change_resolution",0x10f,
                 unaff_r11,puVar8,uVar9,uVar7,uVar11,uVar20);
        }
        uVar3 = uVar3 + 1;
        __aeabi_uidivmod(uVar3,uVar6);
        if (extraout_r1_00 == 0) {
          local_47c = "write %s/%s done";
          do {
            if (puVar18 < (uint *)0xb) {
              uVar7 = (&DAT_000152f8)[(int)puVar18 * 3];
            }
            else {
              puVar18 = (uint *)0x0;
              uVar7 = 0x780;
            }
            if (pFVar2 != (FILE *)0x0) {
              fclose(pFVar2);
            }
            if (uVar7 <= __ptr[0x1e3]) {
              puVar10 = (uint *)(&DAT_000152fc)[(int)puVar18 * 3];
              if (puVar10 <= (uint *)__ptr[0x1e4]) {
                if (uVar3 == __ptr[3]) {
                  RK_LOG(5,0x17171708,"res index: %d, write %s done","vi_dup_change_resolution",
                         0x13e,(int)puVar18 + -1,
                         *(undefined4 *)(&UNK_00015300 + ((int)puVar18 + -1) * 0xc));
                  goto LAB_00012280;
                }
                if (uVar6 == uVar3) {
                  if (puVar13 != puVar10 || uVar12 != uVar7) goto LAB_00012984;
                  uVar11 = 0x133;
                  pcVar14 = local_47c;
                  puVar10 = puVar15;
                  puVar8 = __s;
LAB_000128d0:
                  puVar18 = (uint *)((int)puVar18 + 1);
                  RK_LOG(5,0x17171708,pcVar14,"vi_dup_change_resolution",uVar11,puVar10,puVar8);
                  uVar7 = (&DAT_000152f8)[(int)puVar18 * 3];
                }
                else {
                  if (puVar18 != (uint *)0x0) {
                    puVar8 = *(uint **)(&UNK_00015300 + (int)puVar18 * 0xc);
                    uVar11 = 299;
                    pcVar14 = "res index: %d, write %s done";
                    puVar10 = puVar18;
                    goto LAB_000128d0;
                  }
                  uVar7 = 0x780;
                  RK_LOG(5,0x17171708,"res index: 0, write %s done","vi_dup_change_resolution",0x12e
                         ,"1920x1080");
                }
                if ((uVar7 <= __ptr[0x1e3]) &&
                   (puVar10 = (uint *)(&DAT_000152fc)[(int)puVar18 * 3],
                   puVar10 <= (uint *)__ptr[0x1e4])) goto LAB_00012984;
              }
            }
            puVar18 = (uint *)((int)puVar18 + 1);
            pFVar2 = (FILE *)0x0;
          } while( true );
        }
        goto LAB_00012a34;
      }
      RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","vi_dup_change_resolution",0x155,
             unaff_r11);
      goto LAB_00012a34;
    }
    break;
  case 2:
    memset(local_3ac,0,0x84);
    local_390 = DAT_00012df0;
    local_388 = DAT_00012df8;
    local_3b0[0] = '\b';
    local_3b0[1] = '\0';
    local_3b0[2] = '\0';
    local_3b0[3] = '\0';
    local_440 = 1;
    local_360 = 1;
    local_39c = 0x70800;
    local_3f8 = 0;
    local_3f4 = 0x438;
    local_348 = 0x800;
    local_35c = 0x3c;
    local_398 = 100;
    local_380 = 5;
    RK_MPI_VENC_CreateChn(1,local_3b0);
    RK_MPI_VENC_SetChnBufWrapAttr(1,&local_3f8);
    RK_MPI_VENC_SetChnRefBufShareAttr(1,&local_440);
    local_474 = 0xffffffff;
    RK_MPI_VENC_StartRecvFrame(1,&local_474);
    vi_chn_init(1,0x500,0x2d0,__ptr[0x1a]);
    vi_chn_init(2,0x280,0x168,__ptr[0x1a]);
    DAT_0002713c = __ptr[3];
    local_3f8 = 8;
    local_3ac[0] = DAT_00012e00;
    local_3b0[0] = '\x04';
    local_3b0[1] = '\0';
    local_3b0[2] = '\0';
    local_3b0[3] = '\0';
    local_3f4 = (uint)DAT_00012e00;
    uStack_3f0 = (undefined4)((ulonglong)DAT_00012e00 >> 0x20);
    iVar16 = RK_MPI_SYS_Bind(&local_3f8,local_3b0);
    if (iVar16 == 0) {
      pthread_create(&local_478,(pthread_attr_t *)0x0,FUN_000138cc,(void *)0x1);
      pthread_create(&local_474,(pthread_attr_t *)0x0,FUN_00013814,(void *)0x2);
      pthread_create(&local_440,(pthread_attr_t *)0x0,FUN_00013814,(void *)0x1);
      pthread_join(local_478,(void **)0x0);
      pthread_join(local_474,(void **)0x0);
      pthread_join(local_440,(void **)0x0);
      uVar6 = RK_MPI_SYS_UnBind(&local_3f8,local_3b0);
      uVar3 = RK_MPI_VI_DisableChn(0,1);
      uVar7 = RK_MPI_VI_DisableChn(0,2);
      uVar9 = RK_MPI_VENC_StopRecvFrame(1);
      uVar9 = uVar6 | uVar3 | uVar7 | uVar9;
      if (uVar9 != 0) {
        RK_LOG(2,0x17171708,"test fail :0x%08x","vi_dup_muti_vi_get_frame",0x210,uVar9);
      }
      iVar16 = RK_MPI_VENC_DestroyChn(1);
      if (iVar16 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_VENC_DestroyChn :0x%08x","vi_dup_muti_vi_get_frame",0x215,iVar16
              );
      }
      iVar16 = RK_MPI_VI_StopPipe(0);
      if (iVar16 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_VI_StopPipe :0x%08x","vi_dup_muti_vi_get_frame",0x21a,iVar16);
      }
    }
    else {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_Bind fail:0x%08x","vi_dup_muti_vi_get_frame",0x1fb,iVar16);
    }
    RK_LOG(2,0x17171708,"test running exit:0x%08x","vi_dup_muti_vi_get_frame",0x21e,iVar16);
    RK_MPI_SYS_Exit();
    unaff_r11 = iVar1;
    break;
  case 3:
    uVar6 = __ptr[2];
    snprintf((char *)__s,0x100,"test_vi_dup_rgn_%d_%d_%d.bin",*__ptr,__ptr[1],uVar6);
    memset(local_3b0,0,0x100);
    snprintf(local_3b0,0x100,"%s/%s",puVar15,__s);
    pFVar2 = fopen64(local_3b0,"wb");
    if (pFVar2 != (FILE *)0x0) {
      if (__ptr[0x1e6] == 0) {
LAB_0001234c:
        if (0 < (int)__ptr[3]) {
          iVar1 = 0;
          do {
            uVar3 = RK_MPI_VI_GetChnFrame(__ptr[1],__ptr[2],__ptr + 0xac,100);
            if (uVar3 == 0) {
              uVar20 = TEST_COMM_GetNowUs();
              pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(__ptr[0xac]);
              uVar21 = *(undefined8 *)(__ptr + 0xbc);
              uVar22 = __aeabi_uldivmod(__ptr[0xba],__ptr[0xbb],1000,0);
              uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
              iVar16 = iVar1 + 1;
              RK_LOG(4,0x17171708,
                     "RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
                     "vi_dup_rgn_test",0x302,pvVar4,iVar1,__ptr[0xb9],uVar22,uVar21);
              uVar6 = __ptr[0xad];
              uVar9 = __ptr[0xb0];
              uVar12 = __ptr[0xaf];
              uVar7 = __ptr[0xae];
              uVar20 = VectorSub(uVar20,*(undefined8 *)(__ptr + 0xba),8);
              RK_LOG(5,0x17171708,"w:%d,h:%d, vw:%d,vh:%d, delay=%lldus","vi_dup_rgn_test",0x308,
                     uVar6,uVar7,uVar12,uVar9,uVar11,uVar20);
              fwrite(pvVar4,1,__ptr[0xbc],pFVar2);
              fflush(pFVar2);
              uVar3 = RK_MPI_VI_ReleaseChnFrame(__ptr[1],__ptr[2],__ptr + 0xac);
              iVar1 = iVar16;
              if (uVar3 != 0) {
                RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","vi_dup_rgn_test",0x30f,
                       uVar3,uVar7,uVar12,uVar9,uVar11,uVar20);
                uVar6 = uVar3;
              }
            }
            else {
              DAT_00027168 = DAT_00027168 + 1;
              if (DAT_00027168 < 10) {
                RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","vi_dup_rgn_test",0x316,uVar3
                      );
                uVar6 = uVar3;
              }
            }
            usleep(1000);
          } while (iVar1 < (int)__ptr[3]);
        }
      }
      else {
        uVar3 = __ptr[0x1e2];
        if (uVar3 < 6) {
          uVar7 = 0;
          while( true ) {
            uVar9 = __ptr[0x1e1];
            if ((int)uVar9 <= (int)uVar7) break;
            __ptr[0xce] = 0;
            __ptr[0xc9] = uVar3;
            __ptr[0xcb] = 0x80;
            __ptr[0xcc] = 0x80;
            iVar1 = RK_MPI_RGN_Create(uVar7,__ptr + 0xc9);
            uVar6 = uVar7;
            if (iVar1 != 0) {
              RK_LOG(2,0x17171708,"RK_MPI_RGN_Create (%d) failed with %#x!","create_rgn",0x23a,uVar7
                     ,iVar1);
              RK_MPI_RGN_Destroy(uVar7);
              goto LAB_00012e38;
            }
            RK_LOG(4,0x17171708,"The handle: %d, create success!","create_rgn",0x23e,uVar7);
            uVar7 = uVar7 + 1;
          }
          for (uVar7 = 0; (int)uVar7 < (int)uVar9; uVar7 = uVar7 + 1) {
            local_470 = *__ptr;
            local_3e0 = 0;
            uStack_3f0 = 0;
            uStack_3ec = 0;
            uStack_3e8 = 0;
            local_474 = 8;
            local_46c = 6;
            local_3f8 = 1;
            local_3f4 = uVar3;
            local_3d8 = local_3e0;
            local_3d0 = local_3e0;
            local_3c8 = local_3e0;
            local_3c0 = local_3e0;
            local_3b8 = local_3e0;
            if (uVar3 == 2) {
              uVar12 = 0xffffff;
              RK_LOG(5,0x17171708,"cover rgn attach","create_rgn",0x252,uVar6);
              local_440 = 1;
              uVar9 = uVar7 << 7;
              local_438 = CONCAT44(uVar9,uVar9);
              local_430 = 0x8000000080;
              local_428 = 0xffffff;
              local_420 = 0;
              local_43c = uVar3;
              local_424 = uVar7;
              uVar6 = RK_MPI_RGN_AttachToChn(uVar7,&local_474,&local_440);
              if (uVar6 == 0) {
                uVar6 = RK_MPI_RGN_GetDisplayAttr(uVar7,&local_474,&local_440);
                if (uVar6 == 0) {
                  local_438 = (ulonglong)uVar9 << 0x20;
                  local_430 = 0x8000000080;
                  __aeabi_idivmod(uVar7,3);
                  if (uVar7 == 0 || (uVar7 + 1 & 3) != 0) {
                    uVar12 = 0xff << ((extraout_r1_01 & 0x1f) << 3);
                  }
                  local_428 = uVar12;
                  local_424 = uVar7;
                  local_420 = uVar6;
                  uVar6 = RK_MPI_RGN_SetDisplayAttr(uVar7,&local_474,&local_440);
                  if (uVar6 == 0) {
                    uVar6 = uVar7;
                    RK_LOG(4,0x17171708,"the cover region %d to <%d, %d, %d, %d>, color<0x%x>",
                           "create_rgn",0x27e,uVar7,(undefined4)local_438,local_438._4_4_,
                           (undefined4)local_430,local_430._4_4_,local_428);
                    goto LAB_0001305c;
                  }
                  uVar11 = 0x275;
                }
                else {
                  uVar11 = 0x264;
                }
              }
              else {
                uVar11 = 0x25f;
              }
              RK_LOG(2,0x17171708,"failed with %#x!","create_rgn",uVar11,uVar6);
LAB_000135a8:
              uVar3 = 0;
              goto LAB_000135d4;
            }
            if (uVar3 == 3) {
              RK_LOG(5,0x17171708,"mosaic rgn attach","create_rgn",0x282,uVar6);
              local_440 = 1;
              iVar1 = uVar7 << 7;
              local_438 = CONCAT44(iVar1,iVar1);
              local_430 = 0x8000000080;
              local_428 = 0;
              local_43c = uVar3;
              local_424 = uVar7;
              uVar6 = RK_MPI_RGN_AttachToChn(uVar7,&local_474,&local_440);
              if (uVar6 == 0) {
                uVar6 = RK_MPI_RGN_GetDisplayAttr(uVar7,&local_474,&local_440);
                if (uVar6 == 0) {
                  local_438 = CONCAT44(iVar1,iVar1);
                  local_430 = 0x8000000080;
                  local_428 = uVar6;
                  local_424 = uVar7;
                  uVar6 = RK_MPI_RGN_SetDisplayAttr(uVar7,&local_474,&local_440);
                  if (uVar6 == 0) {
                    uVar6 = uVar7;
                    RK_LOG(4,0x17171708,"the mosaic region:%d to <%d, %d, %d, %d>","create_rgn",
                           0x2a9,uVar7,(undefined4)local_438,local_438._4_4_,(undefined4)local_430,
                           local_430._4_4_);
                    goto LAB_0001305c;
                  }
                  uVar11 = 0x2a1;
                }
                else {
                  uVar11 = 0x293;
                }
              }
              else {
                uVar11 = 0x28e;
              }
              RK_LOG(2,0x17171708,"failed with %#x!","create_rgn",uVar11,uVar6);
              goto LAB_000135a8;
            }
            uVar6 = uVar3;
            RK_LOG(2,0x17171708,"Unsupport rgn type: %d","create_rgn",0x2ac,uVar3);
LAB_0001305c:
            uVar9 = __ptr[0x1e1];
          }
          goto LAB_0001234c;
        }
      }
LAB_00012e38:
      fclose(pFVar2);
      if (__ptr[0x1e6] != 0) {
        local_3f4 = *__ptr;
        local_3f8 = 8;
        uStack_3f0 = 6;
        uVar3 = 0;
        while( true ) {
          uVar7 = __ptr[0x1e1];
          if ((int)uVar7 <= (int)uVar3) break;
          iVar1 = RK_MPI_RGN_DetachFromChn(uVar3,&local_3f8);
          if (iVar1 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!","destory_rgn",0x2d1,
                   uVar3,iVar1);
            goto LAB_00012e4c;
          }
          uVar6 = uVar3;
          RK_LOG(4,0x17171708,"detach handle:%d from channel:%d success","destory_rgn",0x2d4,uVar3,
                 uStack_3f0);
          uVar3 = uVar3 + 1;
        }
        for (uVar3 = 0; (int)uVar3 < (int)uVar7; uVar3 = uVar3 + 1) {
          iVar1 = RK_MPI_RGN_Destroy(uVar3);
          if (iVar1 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_RGN_Destroy (%d) failed with %#x!","destory_rgn",0x2dc,uVar3
                   ,iVar1);
          }
          uVar6 = uVar3;
          RK_LOG(4,0x17171708,"Destory handle:%d success","destory_rgn",0x2de,uVar3);
          uVar7 = __ptr[0x1e1];
        }
        RK_LOG(5,0x17171708,"vi RK_MPI_RGN_Destroy OK","destory_rgn",0x2e1,uVar6);
      }
LAB_00012e4c:
      unaff_r11 = RK_MPI_VI_DisableChn(__ptr[1],__ptr[2]);
      RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","vi_dup_rgn_test",0x323,unaff_r11);
      RK_LOG(5,0x17171708,"vi_dup_rgn_test over","vi_dup_rgn_test",0x324);
      break;
    }
    uVar6 = __ptr[2];
    pcVar14 = "vi_dup_rgn_test";
    uVar11 = 0x2f0;
LAB_00013684:
    RK_LOG(2,0x17171708,"CHN:%d can\'t open file %s",pcVar14,uVar11,uVar6,local_3b0);
    unaff_r11 = -1;
    break;
  default:
    RK_LOG(2,0x17171708,"no support such test mode:%d",&DAT_0001537c,0x3b5,__ptr[200]);
    unaff_r11 = -1;
  }
LAB_00012280:
  RK_LOG(2,0x17171708,"test running exit:%d",&DAT_0001537c,0x3b9,unaff_r11);
  RK_MPI_SYS_Exit();
  free(__ptr);
  return 0;
LAB_000135d4:
  if ((int)__ptr[0x1e1] <= (int)uVar3) goto LAB_00012e38;
  local_470 = *__ptr;
  local_46c = __ptr[2];
  local_474 = 8;
  iVar1 = RK_MPI_RGN_DetachFromChn(uVar3,&local_474);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!","create_rgn",0x2ba,uVar3,
           iVar1);
    uVar6 = uVar3;
    goto LAB_00012e38;
  }
  uVar3 = uVar3 + 1;
  goto LAB_000135d4;
LAB_00012984:
  if (puVar18 < (uint *)0xb && (puVar13 == puVar10 && uVar12 == uVar7)) {
    puVar18 = (uint *)((int)puVar18 + 1);
  }
  RK_LOG(4,0x17171708,"+++ Current resoIdx = %d +++","vi_dup_change_resolution",0x146,puVar18,puVar8
        );
  uVar11 = (&DAT_000152f8)[(int)puVar18 * 3];
  *(undefined8 *)(__ptr + 0xe) = *(undefined8 *)(&DAT_000152f8 + (int)puVar18 * 3);
  uVar19 = (&DAT_000152fc)[(int)puVar18 * 3];
  unaff_r11 = RK_MPI_VI_SetChnAttr(__ptr[1],__ptr[2],__ptr + 0xe);
  if (unaff_r11 == 0) {
    RK_LOG(5,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d success","vi_dup_change_resolution",0x151,
           uVar11,uVar19);
    pFVar2 = (FILE *)0x0;
  }
  else {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d fail, ret: %x","vi_dup_change_resolution",
           0x14d,uVar11,uVar19,unaff_r11);
    pFVar2 = (FILE *)0x0;
  }
LAB_00012a34:
  usleep(1000);
  if ((int)__ptr[3] <= (int)uVar3) goto LAB_00012280;
  goto LAB_00012748;
}



/* ===== _start @ 000136fc size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00027058)
            (DAT_00013730,param_2,&stack0x00000004,DAT_00013734,DAT_0001372c,param_1);
  return;
}



/* ===== FUN_00013738 @ 00013738 size=32 ===== */

void FUN_00013738(void)

{
  if (DAT_0001375c == DAT_00013758) {
    return;
  }
  if (DAT_00013760 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013760)();
  return;
}



/* ===== _FINI_0 @ 0001379c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000137d8;
  if (*DAT_000137d8 != '\0') {
    return;
  }
  FUN_00013738();
  if (DAT_000137dc != 0) {
    __deregister_frame_info(DAT_000137e0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000137e4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013808 != 0) {
    __register_frame_info(DAT_00013810,DAT_0001380c);
  }
  if ((DAT_00013794 - DAT_00013790 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013798 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013798)();
  return;
}



/* ===== FUN_00013814 @ 00013814 size=184 ===== */

undefined4 FUN_00013814(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_78 [52];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  uVar2 = 0;
  do {
    if (DAT_00027164 != '\0') {
      return 0;
    }
    iVar1 = RK_MPI_VI_GetChnFrame(param_1 >> 0x10,param_1,auStack_78,1000);
    if (iVar1 == 0) {
      if ((int)uVar2 < 10000) {
        printf("chn:%d, loopCount:%d vi->seq:%d pts=%lld\n",param_1,uVar2,local_44,local_40,
               uStack_3c);
      }
      uVar2 = uVar2 + 1;
      RK_MPI_VI_ReleaseChnFrame(param_1 >> 0x10,param_1,auStack_78);
    }
  } while (uVar2 <= DAT_0002713c);
  DAT_00027164 = 1;
  return 0;
}



/* ===== FUN_000138cc @ 000138cc size=212 ===== */

undefined4 FUN_000138cc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  void *local_1c0 [5];
  undefined4 local_1ac;
  
  local_1c0[0] = malloc(0x88);
  uVar2 = 0;
  do {
    if (DAT_00027164 != '\0') goto LAB_0001398c;
    iVar1 = RK_MPI_VENC_GetStream(param_1,local_1c0,1000);
    if (iVar1 == 0) {
      if ((int)uVar2 < 10000) {
        printf("chn:%d, loopCount:%d enc->seq:%d,pts=%lld\n",param_1,uVar2,local_1ac,
               *(undefined4 *)((int)local_1c0[0] + 4));
      }
      uVar2 = uVar2 + 1;
      RK_MPI_VENC_ReleaseStream(param_1,local_1c0);
    }
  } while (uVar2 <= DAT_0002713c);
  DAT_00027164 = '\x01';
LAB_0001398c:
  free(local_1c0[0]);
  return 0;
}



/* ===== vi_chn_init @ 000139a0 size=268 ===== */

/* vi_chn_init(int, int, int, int) */

uint vi_chn_init(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  int local_54;
  undefined4 local_48;
  
  memset(&local_84,0,0x6c);
  printf("++++++ chn:%d: %d x %d, bufCnt:%d ++++++\n",param_1,param_2,param_3,param_4);
  local_7c = 0;
  local_70 = 0;
  local_48 = 4;
  local_64 = 2;
  local_84 = param_2;
  local_80 = param_3;
  local_54 = param_4;
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 != 0) {
    RK_MPI_VI_EnableDev(0);
  }
  uVar2 = RK_MPI_VI_SetChnAttr(0,param_1,&local_84);
  uVar4 = TEST_COMM_GetNowUs();
  uVar3 = RK_MPI_VI_EnableChn(0,param_1);
  uVar2 = uVar2 | uVar3;
  uVar5 = TEST_COMM_GetNowUs();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  printf("  vi en: %lld us\n",iVar1,(uint)uVar5 - (uint)uVar4,
         iVar1 - ((int)((ulonglong)uVar4 >> 0x20) + (uint)((uint)uVar5 < (uint)uVar4)));
  if (uVar2 == 0) {
    return 0;
  }
  printf("ERROR: create VI  %d, error! ret=%d\n",param_1,uVar2);
  return uVar2;
}



/* ===== FUN_00013aac @ 00013aac size=64 ===== */

void FUN_00013aac(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x6070;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x6054;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013aec @ 00013aec size=588 ===== */

undefined4 FUN_00013aec(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  char *local_24 [2];
  
  pfVar5 = (float *)param_2[3];
  local_24[0] = (char *)0x0;
  if (pfVar5 == (float *)0x0) goto switchD_00013b20_default;
  switch(*param_2) {
  case 2:
    if ((param_3 & 1) == 0) {
      fVar6 = (float)((int)*pfVar5 + 1);
    }
    else {
      fVar6 = (float)((int)*pfVar5 - 1);
    }
    if ((int)fVar6 < 0) {
      *pfVar5 = 0.0;
      break;
    }
    goto LAB_00013b5c;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00013b5c:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00013d34:
                    /* WARNING: Subroutine does not return */
        FUN_00013aac(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = (float)strtol(*(char **)(iVar4 + 4),local_24,0);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = (float)strtol(pcVar3,local_24,0);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) {
LAB_00013d1c:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00013aac(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00013aac(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00013d34;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = strtof(*(char **)(iVar4 + 4),local_24);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = strtof(pcVar3,local_24);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) goto LAB_00013d1c;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00013aac(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00013d34;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      *pfVar5 = *(float *)(iVar4 + 4);
    }
    else {
      *pfVar5 = *(float *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
switchD_00013b20_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00013d4c size=48 ===== */

undefined4
argparse_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[5] = 0;
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[8] = 0;
  param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}



/* ===== argparse_describe @ 00013d7c size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00013d90 size=1052 ===== */

undefined4 argparse_usage(undefined4 *param_1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 == (undefined4 *)0x0) {
    fwrite("Usage:\n",1,7,stdout);
  }
  else {
    puVar6 = puVar8 + 1;
    fprintf(stdout,"Usage: %s\n",*puVar8);
    if ((char *)puVar8[1] != (char *)0x0) {
      cVar1 = *(char *)puVar8[1];
      while (cVar1 != '\0') {
        fprintf(stdout,"   or: %s\n");
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) break;
        cVar1 = *(char *)*puVar6;
      }
    }
  }
  if (param_1[3] != 0) {
    fprintf(stdout,"%s\n");
  }
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else {
    pcVar5 = stdout->_IO_write_base;
    if (pcVar5 < stdout->_IO_buf_base) {
      stdout->_IO_write_base = pcVar5 + 1;
      *pcVar5 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  piVar7 = (int *)*param_1;
  iVar13 = *piVar7;
  if (iVar13 != 0) {
    uVar10 = 0;
    piVar11 = piVar7;
    iVar12 = iVar13;
    do {
      pcVar5 = (char *)piVar11[2];
      if ((char)piVar11[1] == '\0') {
        iVar9 = 0;
        iVar4 = 0;
        if (pcVar5 != (char *)0x0) goto LAB_00013e88;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00013e88:
        sVar2 = strlen(pcVar5);
        iVar4 = sVar2 + iVar9 + 2;
      }
      if (((iVar12 == 4) || (iVar12 == 5)) || (iVar12 == 6)) {
        iVar4 = iVar4 + 6;
      }
      piVar11 = piVar11 + 8;
      iVar12 = *piVar11;
      uVar3 = iVar4 + 3U & 0xfffffffc;
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
    } while (iVar12 != 0);
    uVar10 = uVar10 + 4;
    do {
      if (iVar13 == 1) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10,stdout);
          }
        }
        fputs((char *)piVar7[4],stdout);
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10);
          }
        }
      }
      else {
        uVar3 = fprintf(stdout,"    ");
        if ((char)piVar7[1] == '\0') {
          if (piVar7[2] != 0) goto LAB_00013f6c;
LAB_00013f84:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000140e0;
LAB_00013f90:
          if (iVar13 == 5) {
            iVar13 = fprintf(stdout,"=<flt>");
            uVar3 = uVar3 + iVar13;
          }
          else if (iVar13 == 6) {
            iVar13 = fprintf(stdout,"=<str>");
            uVar3 = uVar3 + iVar13;
          }
        }
        else {
          iVar13 = fprintf(stdout,"-%c");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] == 0) goto LAB_00013f84;
          if ((char)piVar7[1] == '\0') {
LAB_00013f6c:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00013f84;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00013f6c;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00013f90;
LAB_000140e0:
          iVar13 = fprintf(stdout,"=<int>");
          uVar3 = uVar3 + iVar13;
        }
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
          if (stdout->_chain == (_IO_FILE *)0x0) {
            fputc(10,stdout);
          }
          else {
            pcVar5 = stdout->_IO_write_base;
            if (pcVar5 < stdout->_IO_buf_base) {
              stdout->_IO_write_base = pcVar5 + 1;
              *pcVar5 = '\n';
            }
            else {
              __fputc_unlocked(10);
            }
          }
        }
        else {
          uVar3 = uVar10 - uVar3;
        }
        fprintf(stdout,"%*s%s\n",uVar3 + 2,"",piVar7[4]);
      }
      piVar7 = piVar7 + 8;
      iVar13 = *piVar7;
    } while (iVar13 != 0);
  }
  if (param_1[4] != 0) {
    fprintf(stdout,"%s\n");
  }
  return 0;
}



/* ===== argparse_parse @ 000141ac size=892 ===== */

void argparse_parse(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *__src;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  char *__s;
  char *__s1;
  
  __src = (undefined4 *)(param_3 + 4);
  puVar9 = (uint *)*param_1;
  param_2 = param_2 + -1;
  param_1[7] = param_3;
  param_1[6] = (int)__src;
  uVar4 = *puVar9;
  param_1[5] = param_2;
  if (uVar4 != 0) {
    do {
      while (6 < uVar4) {
        fprintf(stderr,"wrong option type: %d");
        puVar9 = puVar9 + 8;
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_0001420c;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_0001420c:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00014218:
  if (param_2 == 0) {
    __dest = (void *)(param_1[7] + param_1[8] * 4);
  }
  else {
    pcVar10 = (char *)*__src;
    if ((*pcVar10 == '-') && (pcVar10[1] != '\0')) {
      if (pcVar10[1] != '-') {
        piVar11 = (int *)*param_1;
        param_1[9] = (int)(pcVar10 + 1);
        if (*piVar11 != 0) {
          cVar1 = (char)piVar11[1];
          while (cVar1 != pcVar10[1]) {
            if (piVar11[8] == 0) goto LAB_000143d0;
            cVar1 = (char)piVar11[9];
            piVar11 = piVar11 + 8;
          }
          if (pcVar10[2] == '\0') {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar10 = pcVar10 + 2;
          }
          param_1[9] = (int)pcVar10;
          while (iVar5 = FUN_00013aec(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_0001435c;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_000144c8;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_000144c8;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00013aec(param_1);
              if (iVar5 == -2) goto LAB_000144c8;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_000144c8:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000143d4;
        }
        goto LAB_000143d0;
      }
      cVar1 = pcVar10[2];
      if (cVar1 != '\0') {
        piVar11 = (int *)*param_1;
        iVar5 = *piVar11;
        if (iVar5 != 0) {
          __s1 = pcVar10 + 2;
          do {
            __s = (char *)piVar11[2];
            if (__s != (char *)0x0) {
              __n = strlen(__s);
              iVar2 = strncmp(__s1,__s,__n);
              if ((iVar2 == 0) && (pcVar3 = __s1 + __n, pcVar3 != (char *)0x0)) {
                uVar6 = 2;
LAB_00014328:
                if (*pcVar3 == '\0') goto LAB_00014344;
                if (*pcVar3 == '=') goto code_r0x0001433c;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00014528;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_0001437c;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00014328;
                }
              }
            }
LAB_0001437c:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000143d4;
      }
      param_2 = param_2 + -1;
      __src = __src + 1;
      param_1[5] = param_2;
      param_1[6] = (int)__src;
      __dest = (void *)(param_1[7] + param_1[8] * 4);
    }
    else {
      iVar5 = param_1[8];
      __dest = (void *)(param_1[7] + iVar5 * 4);
      if ((param_1[2] & 1U) == 0) {
        param_1[8] = iVar5 + 1;
        *(char **)(param_1[7] + iVar5 * 4) = pcVar10;
        goto LAB_00014250;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x0001433c:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00014344:
  iVar5 = FUN_00013aec(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000143d0:
    pcVar10 = (char *)*__src;
LAB_000143d4:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_0001435c:
  param_2 = param_1[5];
LAB_00014250:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00014218;
}



/* ===== argparse_help_cb @ 0001452c size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== TEST_COMM_GetNowUs @ 0001453c size=72 ===== */

longlong TEST_COMM_GetNowUs(void)

{
  longlong lVar1;
  timespec local_10;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  clock_gettime(1,&local_10);
  lVar1 = __aeabi_uldivmod(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * 1000000 + lVar1;
}



/* ===== TEST_COMM_GetUriSchemeType @ 00014584 size=924 ===== */

undefined4 TEST_COMM_GetUriSchemeType(char *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if ((param_1 == (char *)0x0) || (sVar1 = strlen(param_1), sVar1 < 4)) {
    return 1;
  }
  iVar2 = strncmp("http://",param_1,7);
  if ((iVar2 == 0) || (iVar2 = strncmp("https://",param_1,8), iVar2 == 0)) {
    uVar4 = 2;
  }
  else {
    iVar2 = strncmp("rtsp://",param_1,7);
    if ((iVar2 == 0) || (iVar2 = strncmp("rtmp://",param_1,7), iVar2 == 0)) {
      RK_LOG(5,0x17171700,"uri is with rtsp or rtmp scheme type","TEST_COMM_GetUriSchemeType",0x34);
      return 3;
    }
    iVar2 = strncmp("/data/smb/",param_1,10);
    if (iVar2 == 0) {
      RK_LOG(5,0x17171700,"uri is with /data/smb scheme type","TEST_COMM_GetUriSchemeType",0x37);
      uVar4 = 4;
    }
    else {
      iVar2 = strncmp("/data/nfs/",param_1,10);
      if (iVar2 == 0) {
        RK_LOG(5,0x17171700,"uri is with /data/nfs schemeType (signed as samba)",
               "TEST_COMM_GetUriSchemeType",0x3a);
        uVar4 = 4;
      }
      else {
        pcVar3 = strstr(param_1,"m3u8");
        if (pcVar3 == (char *)0x0) {
          iVar2 = strncmp("rtp:",param_1,4);
          if (iVar2 == 0) {
            RK_LOG(5,0x17171700,"uri is with rtp scheme type","TEST_COMM_GetUriSchemeType",0x40);
            uVar4 = 6;
          }
          else {
            iVar2 = strncmp("udp:",param_1,4);
            if (iVar2 == 0) {
              RK_LOG(5,0x17171700,"uri is with udp scheme type","TEST_COMM_GetUriSchemeType",0x43);
              uVar4 = 7;
            }
            else {
              iVar2 = strncmp("mms://",param_1,6);
              if (iVar2 == 0) {
                RK_LOG(5,0x17171700,"uri is with mms scheme type","TEST_COMM_GetUriSchemeType",0x46)
                ;
                uVar4 = 8;
              }
              else {
                iVar2 = strncmp("mmsh://",param_1,7);
                if (iVar2 == 0) {
                  RK_LOG(5,0x17171700,"uri is with mmsh scheme type","TEST_COMM_GetUriSchemeType",
                         0x49);
                  uVar4 = 9;
                }
                else {
                  iVar2 = strncmp("mmst://",param_1,7);
                  if (iVar2 == 0) {
                    RK_LOG(5,0x17171700,"uri is with mmst scheme type","TEST_COMM_GetUriSchemeType",
                           0x4c);
                    uVar4 = 10;
                  }
                  else {
                    pcVar3 = strstr(param_1,"app_tts-cache");
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = strstr(param_1,"cache://");
                      if (pcVar3 == (char *)0x0) {
                        uVar4 = 1;
                      }
                      else {
                        uVar4 = 0xc;
                      }
                    }
                    else {
                      RK_LOG(5,0x17171700,"uri is with tts scheme type","TEST_COMM_GetUriSchemeType"
                             ,0x4f);
                      uVar4 = 0xb;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          RK_LOG(5,0x17171700,"uri is with m3u8 scheme type","TEST_COMM_GetUriSchemeType",0x3d);
          uVar4 = 5;
        }
      }
    }
  }
  return uVar4;
}



/* ===== TEST_COMM_OpenFileUris @ 00014920 size=540 ===== */

undefined4 TEST_COMM_OpenFileUris(char *param_1,int param_2,uint param_3)

{
  FILE *__stream;
  __ssize_t _Var1;
  size_t __maxlen;
  char *__s;
  size_t sVar2;
  void *__dest;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  char *__dest_00;
  undefined4 *puVar6;
  uint local_48;
  char *local_30;
  size_t local_2c [2];
  
  local_30 = (char *)0x0;
  local_2c[0] = 0;
  __stream = fopen64(param_1,"r");
  if (__stream == (FILE *)0x0) {
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    RK_LOG(2,0x17171700,"Error! opening file %s error is %s","TEST_COMM_OpenFileUris",99,param_1,
           pcVar5);
    uVar3 = 0xffffffff;
  }
  else {
    fseek(__stream,0,2);
    puVar6 = (undefined4 *)(param_2 + -4);
    ftell(__stream);
    fseek(__stream,0,0);
    local_48 = 0;
    do {
      _Var1 = getline(&local_30,local_2c,__stream);
      pcVar5 = local_30;
      if (_Var1 == -1) break;
      __maxlen = strlen(local_30);
      __s = malloc(__maxlen + 1);
      snprintf(__s,__maxlen,"%s",pcVar5);
      pcVar5 = local_30;
      if (__maxlen != 0) {
        __dest_00 = __s + __maxlen;
        do {
          while (*__dest_00 != '\r') {
            __maxlen = __maxlen - 1;
            __dest_00 = __dest_00 + -1;
            if (__maxlen == 0) goto LAB_00014a94;
          }
          sVar2 = strlen(pcVar5);
          __dest = malloc((1 - __maxlen) + sVar2);
          memcpy(__dest,__s + __maxlen + 1,sVar2 - __maxlen);
          memcpy(__dest_00,__dest,sVar2 - __maxlen);
          free(__dest);
          __maxlen = __maxlen - 1;
          __dest_00 = __dest_00 + -1;
        } while (__maxlen != 0);
      }
LAB_00014a94:
      puVar6 = puVar6 + 1;
      *puVar6 = __s;
      free(pcVar5);
      local_48 = local_48 + 1;
      local_2c[0] = 0;
      RK_LOG(6,0x17171700,"url %s","TEST_COMM_OpenFileUris",0x7b,*puVar6);
    } while (local_48 < param_3);
    fclose(__stream);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== TEST_COMM_CloseFileUris @ 00014b3c size=56 ===== */

void TEST_COMM_CloseFileUris(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 1;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar2;
  } while (puVar2 != param_1 + param_2);
  return;
}



/* ===== TEST_COMM_FileReadOneFrame @ 00014b74 size=372 ===== */

int TEST_COMM_FileReadOneFrame(char *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  size_t local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 7);
    local_28 = *(undefined8 *)(param_2 + 3);
    VectorTranspose(local_20,4);
    iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_28,local_34);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_CAL_VGS_GetPicBufferSize failed. err=0x%x",
             "TEST_COMM_FileReadOneFrame",0xa3,iVar1);
      return iVar1;
    }
    __stream = fopen64(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      RK_LOG(2,0x17171700,"fopen %s failed, error: %s","TEST_COMM_FileReadOneFrame",0xa9,param_1,
             pcVar4);
      return -1;
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*param_2);
    sVar2 = fread(__ptr,1,local_34[0],__stream);
    if (sVar2 == 0) {
      RK_LOG(2,0x17171700,"fread %p failed! request %d","TEST_COMM_FileReadOneFrame",0xb0,param_1,
             local_34[0]);
      iVar1 = -1;
    }
    else {
      RK_MPI_SYS_MmzFlushCache(*param_2,0);
      iVar1 = 0;
    }
    fclose(__stream);
  }
  return iVar1;
}



/* ===== TEST_COMM_FileWriteOneFrame @ 00014ce8 size=308 ===== */

int TEST_COMM_FileWriteOneFrame(char *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__s;
  void *__ptr;
  int *piVar2;
  char *pcVar3;
  size_t local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 7);
    local_28 = *(undefined8 *)(param_2 + 3);
    VectorTranspose(local_20,4);
    iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_28,local_34);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_CAL_VGS_GetPicBufferSize failed. err=0x%x",
             "TEST_COMM_FileWriteOneFrame",0xcf,iVar1);
      return iVar1;
    }
    RK_MPI_SYS_MmzFlushCache(*param_2,1);
    __s = fopen64(param_1,"wb");
    if (__s == (FILE *)0x0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      RK_LOG(2,0x17171700,"open %s failed, error: %s","TEST_COMM_FileWriteOneFrame",0xd7,param_1,
             pcVar3);
      return 0;
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*param_2);
    fwrite(__ptr,1,local_34[0],__s);
    fflush(__s);
    fclose(__s);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== TEST_COMM_MkDirs @ 00014e1c size=184 ===== */

void TEST_COMM_MkDirs(char *param_1,__mode_t param_2)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char local_218 [512];
  char *pcVar4;
  
  strncpy(local_218,param_1,0x200);
  sVar1 = strlen(local_218);
  if (sVar1 != 0) {
    pcVar4 = local_218;
    do {
      while (pcVar3 = pcVar4 + 1, *pcVar4 == '/') {
        *pcVar4 = '\0';
        iVar2 = access(local_218,0);
        if (iVar2 != 0) {
          mkdir(local_218,param_2);
        }
        *pcVar4 = '/';
        pcVar4 = pcVar3;
        if (pcVar3 == local_218 + sVar1) goto LAB_00014e94;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != local_218 + sVar1);
LAB_00014e94:
    iVar2 = access(local_218,0);
    if (iVar2 != 0) {
      mkdir(local_218,param_2);
      return;
    }
  }
  return;
}



/* ===== TEST_COMM_CheckFileSizeInRange @ 00014ed4 size=284 ===== */

undefined4 TEST_COMM_CheckFileSizeInRange(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  stat64 sStack_80;
  
  iVar1 = access(param_1,0);
  if (iVar1 == 0) {
    iVar1 = stat64(param_1,&sStack_80);
    if (iVar1 == 0) {
      iVar1 = (int)param_2 >> 0x1f;
      if (((int)(sStack_80.st_size._4_4_ - (iVar1 + (uint)((uint)sStack_80.st_size < param_2))) < 0
           != (SBORROW4(sStack_80.st_size._4_4_,iVar1) !=
              SBORROW4(sStack_80.st_size._4_4_ - iVar1,(uint)((uint)sStack_80.st_size < param_2))))
         || (iVar1 = (int)param_3 >> 0x1f, uVar2 = 0,
            (int)(iVar1 - (sStack_80.st_size._4_4_ + (uint)(param_3 < (uint)sStack_80.st_size))) < 0
            != (SBORROW4(iVar1,sStack_80.st_size._4_4_) !=
               SBORROW4(iVar1 - sStack_80.st_size._4_4_,(uint)(param_3 < (uint)sStack_80.st_size))))
         ) {
        RK_LOG(2,0x17171700,"file %s size:%lld is out range[%d,%d]!",
               "TEST_COMM_CheckFileSizeInRange",0x10d,param_1,(uint)sStack_80.st_size,
               sStack_80.st_size._4_4_,param_2,param_3);
        uVar2 = 0xffffffff;
      }
    }
    else {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      RK_LOG(2,0x17171700,"can\'t determine size of %s: %s!","TEST_COMM_CheckFileSizeInRange",0x111,
             param_1,pcVar4);
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x17171700,"can\'t find file %s!","TEST_COMM_CheckFileSizeInRange",0x104,param_1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_COMM_GetSocType @ 00014ff0 size=540 ===== */

int TEST_COMM_GetSocType(void)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  char local_418 [1028];
  
  local_418[0] = '\0';
  local_418[1] = '\0';
  local_418[2] = '\0';
  local_418[3] = '\0';
  memset(local_418 + 4,0,0x3fc);
  if (DAT_00027170 != 0) {
    return DAT_00027170;
  }
  __stream = fopen64("/proc/device-tree/compatible","r");
  memset(local_418,0,0x400);
  if (__stream == (FILE *)0x0) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"open failed.","TEST_COMM_GetSocType",0x130);
    goto LAB_000150bc;
  }
  fread(local_418,1,0x400,__stream);
  pcVar1 = strstr(local_418,"rockchip");
  if (((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"Rockchip"), pcVar1 == (char *)0x0)) &&
     (pcVar1 = strstr(local_418,"RK30board"), pcVar1 == (char *)0x0)) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"not match rockchips device.","TEST_COMM_GetSocType",300);
  }
  else {
    pcVar1 = strstr(local_418,"1126");
    if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"1109"), pcVar1 == (char *)0x0)) {
      pcVar1 = strstr(local_418,"3566");
      if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"3568"), pcVar1 == (char *)0x0)) {
        pcVar1 = strstr(local_418,"3588");
        if (pcVar1 == (char *)0x0) goto LAB_000150ac;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
LAB_000150ac:
      iVar2 = 1;
    }
  }
  fclose(__stream);
LAB_000150bc:
  DAT_00027170 = iVar2;
  RK_LOG(5,0x17171700,"get the rkchip:%d.","TEST_COMM_GetSocType",0x133,iVar2);
  return iVar2;
}



/* ===== _fini @ 0001520c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00028000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00028004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00028024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00028028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 000280f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00028110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00028114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00028118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00028120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00028124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00028128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0002812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 00028130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00028134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


