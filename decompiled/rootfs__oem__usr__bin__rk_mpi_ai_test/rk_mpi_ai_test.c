// rk_mpi_ai_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011b94 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011bb8 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002800c)();
  return;
}



/* ===== <EXTERNAL>::poll @ 00011bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00028010)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011bd0 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00028014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableAed @ 00011bdc size=12 ===== */

void RK_MPI_AI_EnableAed(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableAed_00028018)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011be8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002801c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetAedResult @ 00011bf4 size=12 ===== */

void RK_MPI_AI_GetAedResult(void)

{
  (*(code *)PTR_RK_MPI_AI_GetAedResult_00028020)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00028024)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00028028)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetSize @ 00011c18 size=12 ===== */

void RK_MPI_MB_GetSize(void)

{
  (*(code *)PTR_RK_MPI_MB_GetSize_0002802c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableBuz @ 00011c24 size=12 ===== */

void RK_MPI_AI_DisableBuz(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableBuz_00028030)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00028034)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SaveFile @ 00011c3c size=12 ===== */

void RK_MPI_AI_SaveFile(void)

{
  (*(code *)PTR_RK_MPI_AI_SaveFile_00028038)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002803c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetMute @ 00011c54 size=12 ===== */

void RK_MPI_AI_GetMute(void)

{
  (*(code *)PTR_RK_MPI_AI_GetMute_00028040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 00011c60 size=12 ===== */

void RK_MPI_AI_ReleaseFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_ReleaseFrame_00028044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBcdResult @ 00011c6c size=12 ===== */

void RK_MPI_AI_GetBcdResult(void)

{
  (*(code *)PTR_RK_MPI_AI_GetBcdResult_00028048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableBuz @ 00011c78 size=12 ===== */

void RK_MPI_AI_EnableBuz(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableBuz_0002804c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetTrackMode @ 00011c84 size=12 ===== */

void RK_MPI_AI_GetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_GetTrackMode_00028050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00011c90 size=12 ===== */

void RK_MPI_AI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableChn_00028054)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00028058)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00011ca8 size=12 ===== */

void RK_MPI_AI_GetFrame(void)

{
  (*(code *)PTR_RK_MPI_AI_GetFrame_0002805c)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00011cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00028064)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableBcd @ 00011ccc size=12 ===== */

void RK_MPI_AI_EnableBcd(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableBcd_00028068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableVqe @ 00011cd8 size=12 ===== */

void RK_MPI_AI_DisableVqe(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableVqe_0002806c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 00011ce4 size=12 ===== */

void RK_MPI_AI_SetVolume(void)

{
  (*(code *)PTR_RK_MPI_AI_SetVolume_00028070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 00011cf0 size=12 ===== */

void RK_MPI_AI_SetChnParam(void)

{
  (*(code *)PTR_RK_MPI_AI_SetChnParam_00028074)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00028078)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableBcd @ 00011d08 size=12 ===== */

void RK_MPI_AI_DisableBcd(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableBcd_0002807c)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00011d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00028080)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00028084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 00011d2c size=12 ===== */

void RK_MPI_AI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableChn_00028088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableAed @ 00011d38 size=12 ===== */

void RK_MPI_AI_DisableAed(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableAed_0002808c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVqeAttr @ 00011d44 size=12 ===== */

void RK_MPI_AI_SetVqeAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetVqeAttr_00028090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011d50 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00028094)();
  return;
}



/* ===== <EXTERNAL>::_exit @ 00011d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_00028098)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 00011d68 size=12 ===== */

void RK_MPI_AENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_CreateChn_0002809c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011d74 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_000280a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011d80 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000280a4)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_000280a8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 00011d98 size=12 ===== */

void RK_MPI_AI_Enable(void)

{
  (*(code *)PTR_RK_MPI_AI_Enable_000280ac)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000280b0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00011db0 size=12 ===== */

void RK_MPI_AENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_GetStream_000280b4)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011dbc size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000280b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableVqe @ 00011dc8 size=12 ===== */

void RK_MPI_AI_EnableVqe(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableVqe_000280bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 00011dd4 size=12 ===== */

void RK_MPI_AI_SetTrackMode(void)

{
  (*(code *)PTR_RK_MPI_AI_SetTrackMode_000280c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetBcdAttr @ 00011de0 size=12 ===== */

void RK_MPI_AI_SetBcdAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetBcdAttr_000280c4)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000280c8)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 00011df8 size=12 ===== */

void RK_MPI_AENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_AENC_DestroyChn_000280cc)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011e04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000280d0)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBuzResult @ 00011e10 size=12 ===== */

void RK_MPI_AI_GetBuzResult(void)

{
  (*(code *)PTR_RK_MPI_AI_GetBuzResult_000280d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetVqeAttr @ 00011e1c size=12 ===== */

void RK_MPI_AI_GetVqeAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_GetVqeAttr_000280d8)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00011e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000280dc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetAedAttr @ 00011e34 size=12 ===== */

void RK_MPI_AI_SetAedAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetAedAttr_000280e0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011e40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000280e4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000280e8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 00011e58 size=12 ===== */

void RK_MPI_AI_EnableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_EnableReSmp_000280ec)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000280f0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00011e70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_000280f4)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 00011e7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000280f8)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00011e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000280fc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBuzAttr @ 00011e94 size=12 ===== */

void RK_MPI_AI_GetBuzAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_GetBuzAttr_00028100)();
  return;
}



/* ===== <EXTERNAL>::pthread_exit @ 00011ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00028104)(__retval);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00011eac size=12 ===== */

void RK_MPI_AI_SetPubAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetPubAttr_00028108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBcdAttr @ 00011eb8 size=12 ===== */

void RK_MPI_AI_GetBcdAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_GetBcdAttr_0002810c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00011ec4 size=12 ===== */

void RK_MPI_AENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_AENC_ReleaseStream_00028110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011ed0 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00028114)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011edc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00028118)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00011ee8 size=12 ===== */

void RK_MPI_AI_Disable(void)

{
  (*(code *)PTR_RK_MPI_AI_Disable_0002811c)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00011ef4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00028120)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetBuzAttr @ 00011f00 size=12 ===== */

void RK_MPI_AI_SetBuzAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_SetBuzAttr_00028124)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011f0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00028128)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011f18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002812c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011f24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00028130)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00011f30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00028134)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 00011f3c size=12 ===== */

void RK_MPI_AI_DisableReSmp(void)

{
  (*(code *)PTR_RK_MPI_AI_DisableReSmp_00028138)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011f48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002813c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetVolume @ 00011f54 size=12 ===== */

void RK_MPI_AI_GetVolume(void)

{
  (*(code *)PTR_RK_MPI_AI_GetVolume_00028140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetMute @ 00011f60 size=12 ===== */

void RK_MPI_AI_SetMute(void)

{
  (*(code *)PTR_RK_MPI_AI_SetMute_00028144)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011f6c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00028148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetAedAttr @ 00011f78 size=12 ===== */

void RK_MPI_AI_GetAedAttr(void)

{
  (*(code *)PTR_RK_MPI_AI_GetAedAttr_0002814c)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011f84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00028150)(__th);
  return iVar1;
}



/* ===== main @ 00011f90 size=3224 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t __size;
  _rkMpiAICtx *__ptr;
  undefined4 uVar6;
  int iVar7;
  FILE *pFVar8;
  void *__ptr_00;
  int iVar9;
  pthread_t apStack_484 [6];
  undefined4 local_46c;
  undefined4 local_468;
  size_t local_464;
  undefined4 local_460;
  undefined1 auStack_450 [40];
  undefined4 local_428 [2];
  undefined *local_420;
  char *local_418;
  code *local_414;
  undefined4 local_40c;
  undefined4 local_408;
  char *local_3f8;
  undefined4 local_3e8;
  char *local_3e0;
  _rkMpiAICtx *local_3dc;
  char *local_3d8;
  undefined4 local_3c8;
  char *local_3c0;
  _rkMpiAICtx *local_3bc;
  char *local_3b8;
  undefined4 local_3a8;
  char *local_3a0;
  _rkMpiAICtx *local_39c;
  char *local_398;
  undefined4 local_388;
  char *local_380;
  _rkMpiAICtx *local_37c;
  char *local_378;
  undefined4 local_368;
  undefined1 local_364;
  char *local_360;
  _rkMpiAICtx *local_35c;
  char *local_358;
  undefined4 local_348;
  undefined1 local_344;
  char *local_340;
  _rkMpiAICtx *local_33c;
  char *local_338;
  undefined4 local_328;
  undefined1 local_324;
  char *local_320;
  _rkMpiAICtx *local_31c;
  char *local_318;
  undefined4 local_308;
  undefined *local_300;
  _rkMpiAICtx *local_2fc;
  char *local_2f8;
  undefined4 local_2e8;
  char *local_2e0;
  _rkMpiAICtx *local_2dc;
  char *local_2d8;
  undefined4 local_2c8;
  char *local_2c0;
  _rkMpiAICtx *local_2bc;
  char *local_2b8;
  undefined4 local_2a8;
  char *local_2a0;
  _rkMpiAICtx *local_29c;
  char *local_298;
  undefined4 local_288;
  char *local_280;
  _rkMpiAICtx *local_27c;
  char *local_278;
  undefined4 local_268;
  char *local_260;
  _rkMpiAICtx *local_25c;
  char *local_258;
  undefined4 local_248;
  char *local_240;
  _rkMpiAICtx *local_23c;
  char *local_238;
  undefined4 local_228;
  char *local_220;
  _rkMpiAICtx *local_21c;
  char *local_218;
  undefined4 local_208;
  char *local_200;
  _rkMpiAICtx *local_1fc;
  char *local_1f8;
  undefined4 local_1e8;
  char *local_1e0;
  _rkMpiAICtx *local_1dc;
  char *local_1d8;
  undefined4 local_1c8;
  char *local_1c0;
  _rkMpiAICtx *local_1bc;
  char *local_1b8;
  undefined4 local_1a8;
  char *local_1a0;
  _rkMpiAICtx *local_19c;
  char *local_198;
  undefined4 local_188;
  char *local_180;
  _rkMpiAICtx *local_17c;
  char *local_178;
  undefined4 local_168;
  char *local_160;
  _rkMpiAICtx *local_15c;
  char *local_158;
  undefined4 local_148;
  char *local_140;
  _rkMpiAICtx *local_13c;
  char *local_138;
  undefined4 local_128;
  char *local_120;
  _rkMpiAICtx *local_11c;
  char *local_118;
  undefined4 local_108;
  char *local_100;
  _rkMpiAICtx *local_fc;
  char *local_f8;
  undefined4 local_e8;
  char *local_e0;
  _rkMpiAICtx *local_dc;
  char *local_d8;
  undefined4 local_c8;
  char *local_c0;
  _rkMpiAICtx *local_bc;
  char *local_b8;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined *local_a0;
  _rkMpiAICtx *local_9c;
  char *local_98;
  undefined4 local_88;
  char *local_80;
  _rkMpiAICtx *local_7c;
  char *local_78;
  undefined4 local_68;
  undefined1 local_64;
  char *local_60;
  _rkMpiAICtx *local_5c;
  char *local_58;
  
  __ptr = calloc(0xb4,1);
  uVar5 = DAT_000123d8;
  uVar4 = DAT_000123d0;
  uVar3 = DAT_000123c8;
  uVar2 = DAT_000123c0;
  uVar1 = DAT_000123b8;
  *(undefined8 *)(__ptr + 0x20) = DAT_000123b0;
  *(undefined8 *)(__ptr + 0x28) = uVar1;
  *(undefined4 *)(__ptr + 8) = 1;
  *(undefined4 *)(__ptr + 0xc) = 1;
  *(undefined4 *)__ptr = 0;
  *(undefined4 *)(__ptr + 4) = 0;
  *(undefined4 *)(__ptr + 0x30) = 0;
  *(undefined8 *)(__ptr + 0x5c) = uVar2;
  *(undefined8 *)(__ptr + 100) = uVar3;
  *(undefined4 *)(__ptr + 0x6c) = 0;
  *(undefined8 *)(__ptr + 0x38) = uVar4;
  *(undefined8 *)(__ptr + 0x40) = uVar5;
  *(undefined4 *)(__ptr + 0x74) = 0;
  *(undefined4 *)(__ptr + 0x48) = 0;
  *(undefined4 *)(__ptr + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(__ptr + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(__ptr + 0x54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(__ptr + 0x70) = 0;
  *(undefined4 *)(__ptr + 0x78) = 0;
  *(undefined4 *)(__ptr + 0x7c) = 0;
  memset(local_428,0,0x400);
  local_40c = 1;
  local_408 = 1;
  local_3e8 = 4;
  local_420 = &DAT_000164d8;
  local_3c8 = 4;
  local_418 = "show this help message and exit";
  local_3a8 = 4;
  local_414 = argparse_help_cb;
  local_388 = 4;
  local_3f8 = "basic options:";
  local_348 = 4;
  local_3e0 = "device_rate";
  local_328 = 4;
  local_3d8 = "the sample rate of open sound card.  <required>";
  local_308 = 4;
  local_3c0 = "device_ch";
  local_368 = 6;
  local_3b8 = "the number of sound card channels. <required>.";
  local_3a0 = "out_ch";
  local_398 = "the channels of out data. <required>";
  local_380 = "out_rate";
  local_378 = "the sample rate of out data. <required>";
  local_360 = "output";
  local_358 = "output file name, e.g.(./ai). default(NULL).";
  local_340 = "loop_count";
  local_338 = "loop running count. can be any count. default(1)";
  local_320 = "channel_count";
  local_318 = "the count of adec channel. default(1).";
  local_428[0] = 2;
  local_364 = 0x6f;
  local_344 = 0x6e;
  local_324 = 99;
  local_300 = &DAT_0001669c;
  local_2e8 = 4;
  local_2c8 = 4;
  local_2a8 = 6;
  local_288 = 4;
  local_268 = 4;
  local_248 = 4;
  local_228 = 4;
  local_208 = 4;
  local_1e8 = 4;
  local_1c8 = 4;
  local_1a8 = 4;
  local_2f8 = "the bit width of open sound card, range(8, 16, 24), default(16)";
  local_2e0 = "frame_length";
  local_2d8 = "the frame length for open sound card, default(1024)";
  local_2c0 = "frame_number";
  local_2b8 = "the frame number for open sound card, default(4)";
  local_2a0 = "sound_card_name";
  local_298 = "the sound name for open sound card, default(NULL)";
  local_280 = "set_volume";
  local_278 = "set volume test, range(0, 100), default(100)";
  local_260 = "set_mute";
  local_258 = "set mute test, range(0, 1), default(0)";
  local_240 = "set_fade";
  local_238 = "set fade rate, range(0, 7), default(0)";
  local_220 = "set_track_mode";
  local_218 = 
  "set track mode test, range(0:normal, 1:both_left, 2:both_right, 3:exchange, 4:mix,5:left_mute, 6:right_mute, 7:both_mute), default(0)"
  ;
  local_200 = "get_volume";
  local_1f8 = "get volume test, range(0, 1), default(0)";
  local_1e0 = "get_mute";
  local_1d8 = "get mute test, range(0, 1), default(0)";
  local_1c0 = "get_track_mode";
  local_1b8 = "get track mode test, range(0, 1), default(0)";
  local_1a0 = "aed_enable";
  local_188 = 4;
  local_168 = 4;
  local_148 = 4;
  local_128 = 4;
  local_108 = 6;
  local_e8 = 4;
  local_c8 = 4;
  local_a8 = 4;
  local_88 = 6;
  local_68 = 6;
  local_3dc = __ptr + 0x10;
  local_198 = "the aed enable, 0:disable 1:enable 2:reload test. default(0).";
  local_180 = "bcd_enable";
  local_178 = "the bcd enable, 0:disable 1:enable. default(0).";
  local_160 = "buz_enable";
  local_158 = "the buz enable, 0:disable 1:enable. default(0).";
  local_140 = "vqe_gap";
  local_138 = "the vqe gap duration in milliseconds. only supports 16ms or 10ms. default(16).";
  local_120 = "vqe_enable";
  local_118 = "the vqe enable, 0:disable 1:enable. default(0).";
  local_100 = "vqe_cfg";
  local_f8 = "the vqe config file, default(NULL)";
  local_e0 = "loopback_mode";
  local_d8 = "configure the loopback mode during ai runtime";
  local_c0 = "dump_algo";
  local_b8 = "dump algorithm pcm data during ai runtime";
  local_a0 = &DAT_00016b90;
  local_98 = "test mode(default 0; \n\t0:ai get&release frame \n\t1:ai bind one aenc(g711a) \n\t";
  local_80 = "aenc_file";
  local_78 = "aenc file name, e.g.(./userdata/aenc/aenc.g711a). default(NULL).";
  local_60 = "codec";
  local_a4 = 0x6d;
  local_64 = 0x43;
  local_58 = "codec, e.g.(g711a/g711u/g726). ";
  local_3bc = __ptr + 0x18;
  local_39c = __ptr + 0x1c;
  local_37c = __ptr + 0x14;
  local_35c = __ptr + 4;
  local_33c = __ptr + 8;
  local_31c = __ptr + 0xc;
  local_2fc = __ptr + 0x20;
  local_2dc = __ptr + 0x2c;
  local_2bc = __ptr + 0x28;
  local_29c = __ptr + 0x30;
  local_27c = __ptr + 0x38;
  local_25c = __ptr + 0x3c;
  local_23c = __ptr + 0x40;
  local_21c = __ptr + 0x44;
  local_1fc = __ptr + 0x48;
  local_1dc = __ptr + 0x4c;
  local_1bc = __ptr + 0x50;
  local_17c = __ptr + 0x60;
  local_15c = __ptr + 100;
  local_13c = __ptr + 0x68;
  local_11c = __ptr + 0x6c;
  local_fc = __ptr + 0x74;
  local_dc = __ptr + 0x54;
  local_bc = __ptr + 0x70;
  local_9c = __ptr + 0x78;
  local_7c = __ptr + 0x7c;
  local_5c = __ptr + 0xb0;
  local_19c = __ptr + 0x5c;
  argparse_init(auStack_450,local_428,&DAT_00016324,0);
  argparse_describe(auStack_450,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_450,param_1,param_2);
  puts("cmd parse result:");
  printf("input  file name      : %s\n",*(undefined4 *)__ptr);
  printf("output file name      : %s\n",*(undefined4 *)(__ptr + 4));
  printf("loop count            : %d\n",*(undefined4 *)(__ptr + 8));
  printf("channel number        : %d\n",*(undefined4 *)(__ptr + 0xc));
  printf("open sound rate       : %d\n",*(undefined4 *)(__ptr + 0x10));
  printf("record data rate      : %d\n",*(undefined4 *)(__ptr + 0x14));
  printf("sound card channel    : %d\n",*(undefined4 *)(__ptr + 0x18));
  printf("output channel        : %d\n",*(undefined4 *)(__ptr + 0x1c));
  printf("bit_width             : %d\n",*(undefined4 *)(__ptr + 0x20));
  printf("frame_number          : %d\n",*(undefined4 *)(__ptr + 0x28));
  printf("frame_length           : %d\n",*(undefined4 *)(__ptr + 0x2c));
  printf("sound card name       : %s\n",*(undefined4 *)(__ptr + 0x30));
  printf("device id             : %d\n",*(undefined4 *)(__ptr + 0x24));
  printf("set volume            : %d\n",*(undefined4 *)(__ptr + 0x38));
  printf("set mute              : %d\n",*(undefined4 *)(__ptr + 0x3c));
  printf("set track_mode        : %d\n",*(undefined4 *)(__ptr + 0x44));
  printf("get volume            : %d\n",*(undefined4 *)(__ptr + 0x48));
  printf("get mute              : %d\n",*(undefined4 *)(__ptr + 0x4c));
  printf("get track_mode        : %d\n",*(undefined4 *)(__ptr + 0x50));
  printf("aed enable            : %d\n",*(undefined4 *)(__ptr + 0x5c));
  printf("bcd enable            : %d\n",*(undefined4 *)(__ptr + 0x60));
  printf("buz enable            : %d\n",*(undefined4 *)(__ptr + 100));
  printf("vqe gap duration (ms) : %d\n",*(undefined4 *)(__ptr + 0x68));
  printf("vqe enable            : %d\n",*(undefined4 *)(__ptr + 0x6c));
  printf("vqe config file       : %s\n",*(undefined4 *)(__ptr + 0x74));
  printf("dump algo pcm data    : %d\n",*(undefined4 *)(__ptr + 0x70));
  printf("test mode             : %d\n",*(undefined4 *)(__ptr + 0x78));
  printf("aenc  file name       : %s\n",*(undefined4 *)(__ptr + 0x7c));
  printf("input codec name      : %s\n",*(undefined4 *)(__ptr + 0xb0));
  if ((((*(int *)(__ptr + 0x1c) < 1) || (*(int *)(__ptr + 0x14) < 1)) ||
      (*(int *)(__ptr + 0x10) < 1)) || (*(int *)(__ptr + 0x18) < 1)) {
    argparse_usage(auStack_450);
  }
  else {
    signal(2,(__sighandler_t)&LAB_00012d74);
    RK_MPI_SYS_Init();
    iVar9 = *(int *)(__ptr + 0x78);
    if (iVar9 == 0) {
      if (0 < *(int *)(__ptr + 8)) {
        iVar9 = 0;
        do {
          RK_LOG(4,0x1717170a,"start running loop count  = %d",&DAT_000163e4,0x50f,iVar9);
          iVar7 = unit_test_mpi_ai(__ptr);
          if (iVar7 != 0) {
            RK_LOG(2,0x1717170a,"unit_test_mpi_ai failed: %d",&DAT_000163e4,0x512,iVar7);
            break;
          }
          iVar7 = iVar9 + 1;
          RK_LOG(4,0x1717170a,"end running loop count  = %d",&DAT_000163e4,0x515,iVar9);
          iVar9 = iVar7;
        } while (iVar7 < *(int *)(__ptr + 8));
      }
    }
    else if (iVar9 == 1) {
      puts("===test_ai_bind_aenc_loop===");
      iVar9 = test_open_device_ai(__ptr);
      if (iVar9 == 0) {
        local_464 = *(size_t *)(__ptr + 0x54);
        *(undefined4 *)(__ptr + 0x34) = 0;
        *(undefined4 *)(__ptr + 0x58) = 0xffffffff;
        local_468 = 0xffffffff;
        iVar9 = RK_MPI_AI_SetChnParam(*(undefined4 *)(__ptr + 0x24),0,&local_468);
        if (iVar9 == 0) {
          iVar9 = test_init_mpi_ai(__ptr);
          if (iVar9 == 0) {
            pFVar8 = fopen64(*(char **)(__ptr + 0x7c),"wb");
            *(FILE **)(__ptr + 0xac) = pFVar8;
            if (pFVar8 == (FILE *)0x0) {
              RK_LOG(2,0x1717170a,"chn 0 can\'t open file %s in get picture thread!\n",
                     "test_ai_bind_aenc_loop",0x40e,*(undefined4 *)(__ptr + 0x7c));
              goto LAB_00012794;
            }
            iVar9 = test_init_mpi_aenc(__ptr);
            if (iVar9 != -1) {
              apStack_484[5] = *(pthread_t *)(__ptr + 0x24);
              local_46c = *(undefined4 *)(__ptr + 0x34);
              apStack_484[2] = 0;
              apStack_484[3] = 0;
              apStack_484[4] = 10;
              apStack_484[1] = 0xc;
              iVar9 = RK_MPI_SYS_Bind(apStack_484 + 4,apStack_484 + 1);
              if (iVar9 != 0) {
                RK_LOG(2,0x1717170a,"===bind ai to aenc failed===\n","test_ai_bind_aenc_loop",0x425)
                ;
                goto LAB_00012794;
              }
              pthread_create(apStack_484,(pthread_attr_t *)0x0,FUN_00012f74,(void *)0x0);
              while (DAT_00028180 == 0) {
                iVar9 = RK_MPI_AENC_GetStream(0,&local_468,0xffffffff);
                if (iVar9 == 0) {
                  __ptr_00 = (void *)RK_MPI_MB_Handle2VirAddr(local_468);
                  __size = local_464;
                  if ((int)local_464 < 1) {
                    if (__ptr_00 != (void *)0x0) {
                      RK_LOG(4,0x1717170a,"get frame data = %p, size = %d, timeStamp = %lld",
                             "test_ai_bind_aenc_loop",0x439,__ptr_00,local_464,local_460);
                      if (*(FILE **)(__ptr + 0xac) == (FILE *)0x0) {
                        RK_MPI_AENC_ReleaseStream(0,&local_468);
                      }
                      else {
                        fwrite(__ptr_00,__size,1,*(FILE **)(__ptr + 0xac));
                        fflush(*(FILE **)(__ptr + 0xac));
                        RK_MPI_AENC_ReleaseStream(0,&local_468);
                      }
                    }
                    RK_LOG(4,0x1717170a,"get eos stream.","test_ai_bind_aenc_loop",0x446);
                    break;
                  }
                  if (__ptr_00 != (void *)0x0) {
                    RK_LOG(4,0x1717170a,"get frame data = %p, size = %d, timeStamp = %lld",
                           "test_ai_bind_aenc_loop",0x439,__ptr_00,local_464,local_460);
                    if (*(FILE **)(__ptr + 0xac) != (FILE *)0x0) {
                      fwrite(__ptr_00,__size,1,*(FILE **)(__ptr + 0xac));
                      fflush(*(FILE **)(__ptr + 0xac));
                    }
                    RK_MPI_AENC_ReleaseStream(0,&local_468);
                  }
                }
                else {
                  RK_LOG(2,0x1717170a,"fail to get aenc frame.","test_ai_bind_aenc_loop",0x442);
                }
              }
            }
          }
        }
        else {
          RK_LOG(2,0x1717170a,"ai set channel params, aiChn = %d","test_set_channel_params_ai",0x36c
                 ,0);
        }
      }
      if (*(FILE **)(__ptr + 0xac) != (FILE *)0x0) {
        fclose(*(FILE **)(__ptr + 0xac));
        *(undefined4 *)(__ptr + 0xac) = 0;
      }
      iVar9 = RK_MPI_SYS_UnBind(apStack_484 + 4,apStack_484 + 1);
      if (iVar9 != 0) {
        RK_LOG(2,0x1717170a,"RK_MPI_SYS_UnBind fail %x","test_ai_bind_aenc_loop",0x454,iVar9);
      }
      uVar6 = test_deinit_mpi_ai(__ptr);
      RK_LOG(2,0x1717170a,"test_deinit_mpi_ai %x","test_ai_bind_aenc_loop",0x458,uVar6);
      iVar9 = RK_MPI_AENC_DestroyChn(0);
      if (iVar9 != 0) {
        RK_LOG(2,0x1717170a,"RK_MPI_VDEC_DestroyChn fail %x","test_ai_bind_aenc_loop",0x45c,iVar9);
      }
    }
    else {
      RK_LOG(2,0x1717170a,"no support such test mode:%d",&DAT_000163e4,0x51e,iVar9);
    }
  }
LAB_00012794:
  free(__ptr);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== _start @ 00012c5c size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00028060)
            (DAT_00012c90,param_2,&stack0x00000004,DAT_00012c94,DAT_00012c8c,param_1);
  return;
}



/* ===== FUN_00012c98 @ 00012c98 size=32 ===== */

void FUN_00012c98(void)

{
  if (DAT_00012cbc == DAT_00012cb8) {
    return;
  }
  if (DAT_00012cc0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012cc0)();
  return;
}



/* ===== _FINI_0 @ 00012cfc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012d38;
  if (*DAT_00012d38 != '\0') {
    return;
  }
  FUN_00012c98();
  if (DAT_00012d3c != 0) {
    __deregister_frame_info(DAT_00012d40);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012d44 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012d68 != 0) {
    __register_frame_info(DAT_00012d70,DAT_00012d6c);
  }
  if ((DAT_00012cf4 - DAT_00012cf0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012cf8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012cf8)();
  return;
}



/* ===== commandThread @ 00012d9c size=472 ===== */

/* commandThread(void*) */

void commandThread(void *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x38);
  local_24 = *(undefined4 *)((int)param_1 + 0x40);
  bVar2 = *(int *)((int)param_1 + 0x3c) != 0;
  local_28 = 0;
  local_20 = local_24;
  RK_LOG(4,0x1717170a,"test info : mute = %d, volume = %d","commandThread",0x33d,bVar2,uVar1);
  RK_MPI_AI_SetMute(*(undefined4 *)((int)param_1 + 0x24),bVar2,&local_28);
  RK_MPI_AI_SetVolume(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x38));
  if (*(int *)((int)param_1 + 0x44) != 0) {
    RK_LOG(4,0x1717170a,"test info : set track mode = %d","commandThread",0x342,
           *(int *)((int)param_1 + 0x44),uVar1);
    RK_MPI_AI_SetTrackMode
              (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x44));
    *(undefined4 *)((int)param_1 + 0x44) = 0;
  }
  if (*(int *)((int)param_1 + 0x48) != 0) {
    local_1c[0] = 0;
    RK_MPI_AI_GetVolume(*(undefined4 *)((int)param_1 + 0x24),local_1c);
    RK_LOG(4,0x1717170a,"test info : get volume = %d","commandThread",0x34a,local_1c[0]);
    *(undefined4 *)((int)param_1 + 0x48) = 0;
  }
  if (*(int *)((int)param_1 + 0x4c) != 0) {
    local_2c = 0;
    RK_MPI_AI_GetMute(*(undefined4 *)((int)param_1 + 0x24),&local_2c,local_1c);
    RK_LOG(4,0x1717170a,"test info : is mute = %d","commandThread",0x352,local_2c);
    *(undefined4 *)((int)param_1 + 0x4c) = 0;
  }
  if (*(int *)((int)param_1 + 0x50) != 0) {
    RK_MPI_AI_GetTrackMode(*(undefined4 *)((int)param_1 + 0x24),local_1c);
    RK_LOG(4,0x1717170a,"test info : get track mode = %d","commandThread",0x359,local_1c[0]);
    *(undefined4 *)((int)param_1 + 0x50) = 0;
  }
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



/* ===== FUN_00012f74 @ 00012f74 size=232 ===== */

void FUN_00012f74(void)

{
  FILE *__stream;
  int iVar1;
  void *__ptr;
  size_t __size;
  undefined4 local_40 [10];
  
  __stream = fopen64("/tmp/cap_out.pcm","wb");
LAB_00012fc8:
  if (DAT_00028180 == 0) goto LAB_00012fac;
  fclose(__stream);
  goto LAB_00012fdc;
LAB_00012fac:
  iVar1 = RK_MPI_AI_GetFrame(0,0,local_40,0,0xffffffff);
  if (iVar1 == 0) {
LAB_00012fdc:
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(local_40[0]);
    __size = RK_MPI_MB_GetSize(local_40[0]);
    RK_LOG(4,0x1717170a,"data = %p, len = %d","GetMediaBuffer",1000,__ptr,__size);
    if (__stream != (FILE *)0x0) {
      fwrite(__ptr,__size,1,__stream);
      fflush(__stream);
    }
    RK_MPI_AI_ReleaseFrame(0,0,local_40);
  }
  goto LAB_00012fc8;
}



/* ===== FUN_00013060 @ 00013060 size=356 ===== */

int FUN_00013060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [28];
  
  local_38 = DAT_000131c8;
  local_30 = DAT_000131d0;
  local_40 = 0x78;
  local_3c = 0x32;
  iVar1 = RK_MPI_AI_SetBcdAttr
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),&local_40);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_GetBcdAttr
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),auStack_28);
    if (iVar1 == 0) {
      iVar1 = memcmp(&local_40,auStack_28,0x18);
      if (iVar1 != 0) {
        RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_bcd",0x13a,
               "test_init_ai_bcd",iVar1);
        return iVar1;
      }
      iVar1 = RK_MPI_AI_EnableBcd(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x141;
      pcVar5 = "%s: EnableBcd(%d,%d) failed with %#x";
      goto LAB_00013120;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = 0x134;
  }
  else {
    uVar3 = 0x12d;
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  pcVar5 = "%s: SetBcdAttr(%d,%d) failed with %#x";
LAB_00013120:
  RK_LOG(2,0x1717170a,pcVar5,"test_init_ai_bcd",uVar3,"test_init_ai_bcd",uVar2,uVar4,iVar1);
  return iVar1;
}



/* ===== FUN_000131d8 @ 000131d8 size=352 ===== */

int FUN_000131d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [28];
  
  local_38 = DAT_00013338;
  local_30 = DAT_00013340;
  local_40 = 0x78;
  local_3c = 0x78;
  iVar1 = RK_MPI_AI_SetBuzAttr
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),&local_40);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_GetBuzAttr
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),auStack_28);
    if (iVar1 == 0) {
      iVar1 = memcmp(&local_40,auStack_28,0x18);
      if (iVar1 != 0) {
        RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_buz",0x192,
               "test_init_ai_buz",iVar1);
        return iVar1;
      }
      iVar1 = RK_MPI_AI_EnableBuz(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x199;
      pcVar5 = "%s: EnableBuz(%d,%d) failed with %#x";
      goto LAB_00013294;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = 0x18c;
  }
  else {
    uVar3 = 0x185;
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  pcVar5 = "%s: SetBuzAttr(%d,%d) failed with %#x";
LAB_00013294:
  RK_LOG(2,0x1717170a,pcVar5,"test_init_ai_buz",uVar3,"test_init_ai_buz",uVar2,uVar4,iVar1);
  return iVar1;
}



/* ===== FUN_00013348 @ 00013348 size=340 ===== */

int FUN_00013348(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  
  local_28 = DAT_000134a0;
  local_20 = 1;
  iVar1 = RK_MPI_AI_SetAedAttr
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),&local_28);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_GetAedAttr
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),auStack_1c);
    if (iVar1 == 0) {
      iVar1 = memcmp(&local_28,auStack_1c,0xc);
      if (iVar1 != 0) {
        RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_aed",0xe5,
               "test_init_ai_aed",iVar1);
        return iVar1;
      }
      iVar1 = RK_MPI_AI_EnableAed(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0xec;
      pcVar5 = "%s: EnableAed(%d,%d) failed with %#x";
      goto LAB_000133f8;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = 0xdf;
  }
  else {
    uVar3 = 0xd8;
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  pcVar5 = "%s: SetAedAttr(%d,%d) failed with %#x";
LAB_000133f8:
  RK_LOG(2,0x1717170a,pcVar5,"test_init_ai_aed",uVar3,"test_init_ai_aed",uVar2,uVar4,iVar1);
  return iVar1;
}



/* ===== sendDataThread @ 000134a8 size=3540 ===== */

/* sendDataThread(void*) */

undefined4 sendDataThread(void *param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_2e0;
  int local_2d4;
  size_t local_2c4;
  undefined4 *local_2c0;
  undefined4 *local_2bc;
  undefined4 *local_2b8;
  size_t local_2b4;
  FILE *local_2b0;
  FILE *local_2ac;
  FILE *local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 local_258;
  char acStack_254 [256];
  char local_154 [4];
  char acStack_150 [4];
  char acStack_14c [248];
  undefined4 local_54;
  
  if (*(int *)((int)param_1 + 4) != 0) {
    local_258 = 1;
    local_54 = 0x400;
    snprintf(acStack_254,0x100,"%s");
    local_154[0] = s_cap_out_pcm_00015bb0[0];
    local_154[1] = s_cap_out_pcm_00015bb0[1];
    local_154[2] = s_cap_out_pcm_00015bb0[2];
    local_154[3] = s_cap_out_pcm_00015bb0[3];
    acStack_150[0] = s_cap_out_pcm_00015bb0[4];
    acStack_150[1] = s_cap_out_pcm_00015bb0[5];
    acStack_150[2] = s_cap_out_pcm_00015bb0[6];
    acStack_150[3] = s_cap_out_pcm_00015bb0[7];
    acStack_14c[0] = s_cap_out_pcm_00015bb0[8];
    acStack_14c[1] = s_cap_out_pcm_00015bb0[9];
    acStack_14c[2] = s_cap_out_pcm_00015bb0[10];
    acStack_14c[3] = s_cap_out_pcm_00015bb0[0xb];
    RK_MPI_AI_SaveFile(*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                       &local_258);
  }
  if (*(int *)((int)param_1 + 0x14) == 16000) {
    local_2c4 = 0x200;
    local_2b4 = 0x400;
    local_2d4 = 0x100;
  }
  else {
    if (*(int *)((int)param_1 + 0x14) != 8000) {
      *(undefined4 *)((int)param_1 + 0x70) = 0;
      local_2c4 = 0;
      local_2b4 = 0;
      local_2d4 = 0;
      goto LAB_00013538;
    }
    local_2c4 = 0x100;
    local_2b4 = 0x200;
    local_2d4 = 0x80;
  }
  if (*(int *)((int)param_1 + 0x70) != 0) {
    local_2c0 = calloc(local_2b4,1);
    if (local_2c0 == (undefined4 *)0x0) {
      printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","sendDataThread"
             ,0x292,"buf_aed != RK_NULL");
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    local_2b0 = fopen64("/tmp/cap_aed_2ch.pcm","wb");
    if (local_2b0 == (FILE *)0x0) {
      printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","sendDataThread"
             ,0x294,"fp_aed != RK_NULL");
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    local_2bc = calloc(local_2c4,1);
    if (local_2bc == (undefined4 *)0x0) {
      printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","sendDataThread"
             ,0x297,"buf_bcd != RK_NULL");
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    local_2ac = fopen64("/tmp/cap_bcd_1ch.pcm","wb");
    if (local_2ac == (FILE *)0x0) {
      printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","sendDataThread"
             ,0x299,"fp_bcd != RK_NULL");
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    local_2b8 = calloc(local_2c4,1);
    local_2a8 = fopen64("/tmp/cap_buz_1ch.pcm","wb");
    if (local_2a8 == (FILE *)0x0) {
      printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","sendDataThread"
             ,0x29e,"fp_buz != RK_NULL");
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
  }
LAB_00013538:
  uVar10 = DAT_00013900;
  uVar9 = DAT_000138f8;
  uVar8 = DAT_000138f0;
  uVar7 = DAT_000138e8;
  uVar6 = DAT_000138e0;
  uVar18 = 0;
  bVar5 = false;
  bVar4 = false;
  local_2e0 = 0;
  bVar3 = false;
  uVar17 = 0;
  do {
    if (DAT_00028180 != 0) {
      if (*(int *)((int)param_1 + 0x70) != 0) {
        free(local_2c0);
        free(local_2bc);
        if (local_2b8 != (undefined4 *)0x0) {
          free(local_2b8);
        }
        fclose(local_2b0);
        fclose(local_2ac);
        fclose(local_2a8);
      }
                    /* WARNING: Subroutine does not return */
      pthread_exit((void *)0x0);
    }
    uVar11 = *(undefined4 *)((int)param_1 + 0x24);
    uVar12 = *(undefined4 *)((int)param_1 + 0x34);
    uVar16 = uVar18;
    if ((*(int *)((int)param_1 + 0x5c) == 2) && (uVar16 = uVar18 + 1, uVar16 % 0x32 == 0)) {
      iVar15 = RK_MPI_AI_DisableAed(uVar11,uVar12);
      if (iVar15 != 0) {
        RK_LOG(2,0x1717170a,"%s: RK_MPI_AI_DisableAed(%d,%d) failed with %#x","sendDataThread",0x2aa
               ,"sendDataThread",*(undefined4 *)((int)param_1 + 0x24),
               *(undefined4 *)((int)param_1 + 0x34),iVar15);
        return 0;
      }
      if (!bVar3) {
        RK_LOG(4,0x1717170a,"%s - aed_count=%ld test_init_ai_aed2\n","sendDataThread",0x2b2,
               "sendDataThread",uVar18);
        if (*(int *)((int)param_1 + 0x5c) != 0) {
          local_288 = uVar6;
          local_280 = CONCAT44(local_280._4_4_,2);
          iVar15 = RK_MPI_AI_SetAedAttr
                             (*(undefined4 *)((int)param_1 + 0x24),
                              *(undefined4 *)((int)param_1 + 0x34),&local_288);
          uVar11 = *(undefined4 *)((int)param_1 + 0x34);
          if (iVar15 == 0) {
            iVar15 = RK_MPI_AI_GetAedAttr(*(undefined4 *)((int)param_1 + 0x24),uVar11,&local_270);
            if (iVar15 == 0) {
              iVar15 = memcmp(&local_288,&local_270,0xc);
              if (iVar15 == 0) {
                iVar15 = RK_MPI_AI_EnableAed(*(undefined4 *)((int)param_1 + 0x24),
                                             *(undefined4 *)((int)param_1 + 0x34));
                if (iVar15 != 0) {
                  RK_LOG(2,0x1717170a,"%s: EnableAed(%d,%d) failed with %#x","test_init_ai_aed2",
                         0x115,"test_init_ai_aed2",*(undefined4 *)((int)param_1 + 0x24),
                         *(undefined4 *)((int)param_1 + 0x34),iVar15);
                }
              }
              else {
                RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_aed2",
                       0x10e,"test_init_ai_aed2",iVar15);
              }
              goto LAB_00013c30;
            }
            uVar11 = *(undefined4 *)((int)param_1 + 0x34);
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x108;
          }
          else {
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x101;
          }
          RK_LOG(2,0x1717170a,"%s: SetAedAttr(%d,%d) failed with %#x","test_init_ai_aed2",uVar12,
                 "test_init_ai_aed2",uVar13,uVar11,iVar15);
        }
LAB_00013c30:
        uVar11 = *(undefined4 *)((int)param_1 + 0x24);
        uVar12 = *(undefined4 *)((int)param_1 + 0x34);
        bVar3 = true;
        goto LAB_000135d8;
      }
      RK_LOG(4,0x1717170a,"%s - aed_count=%ld test_init_ai_aed\n","sendDataThread",0x2ae,
             "sendDataThread",uVar18);
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        FUN_00013348(param_1);
        uVar11 = *(undefined4 *)((int)param_1 + 0x24);
        uVar12 = *(undefined4 *)((int)param_1 + 0x34);
        bVar3 = false;
        goto LAB_000135d8;
      }
      iVar15 = *(int *)((int)param_1 + 0x60);
      uVar11 = *(undefined4 *)((int)param_1 + 0x24);
      uVar12 = *(undefined4 *)((int)param_1 + 0x34);
      bVar3 = false;
      uVar18 = uVar16;
    }
    else {
LAB_000135d8:
      iVar15 = *(int *)((int)param_1 + 0x60);
      uVar18 = uVar16;
    }
    uVar16 = local_2e0;
    if ((iVar15 == 2) && (uVar16 = local_2e0 + 1, uVar16 % 0x32 == 0)) {
      iVar15 = RK_MPI_AI_DisableBcd(uVar11,uVar12);
      if (iVar15 != 0) {
        RK_LOG(2,0x1717170a,"%s: RK_MPI_AI_DisableBcd(%d,%d) failed with %#x","sendDataThread",0x2bf
               ,"sendDataThread",*(undefined4 *)((int)param_1 + 0x24),
               *(undefined4 *)((int)param_1 + 0x34),iVar15);
        return 0;
      }
      if (bVar4) {
        RK_LOG(4,0x1717170a,"%s - bcd_count=%ld test_init_ai_bcd\n","sendDataThread",0x2c3,
               "sendDataThread",local_2e0);
        if (*(int *)((int)param_1 + 0x60) == 0) {
          uVar11 = *(undefined4 *)((int)param_1 + 0x24);
          uVar12 = *(undefined4 *)((int)param_1 + 0x34);
          bVar4 = false;
        }
        else {
          FUN_00013060(param_1);
          uVar11 = *(undefined4 *)((int)param_1 + 0x24);
          uVar12 = *(undefined4 *)((int)param_1 + 0x34);
          bVar4 = false;
        }
      }
      else {
        RK_LOG(4,0x1717170a,"%s - bcd_count=%ld test_init_ai_bcd2\n","sendDataThread",0x2c7,
               "sendDataThread",local_2e0);
        if (*(int *)((int)param_1 + 0x60) != 0) {
          local_280 = uVar7;
          local_278 = uVar8;
          local_288 = 0xde0000007a;
          iVar15 = RK_MPI_AI_SetBcdAttr
                             (*(undefined4 *)((int)param_1 + 0x24),
                              *(undefined4 *)((int)param_1 + 0x34),&local_288);
          uVar11 = *(undefined4 *)((int)param_1 + 0x34);
          if (iVar15 == 0) {
            iVar15 = RK_MPI_AI_GetBcdAttr(*(undefined4 *)((int)param_1 + 0x24),uVar11,&local_270);
            if (iVar15 == 0) {
              iVar15 = memcmp(&local_288,&local_270,0x18);
              if (iVar15 == 0) {
                iVar15 = RK_MPI_AI_EnableBcd(*(undefined4 *)((int)param_1 + 0x24),
                                             *(undefined4 *)((int)param_1 + 0x34));
                if (iVar15 != 0) {
                  RK_LOG(2,0x1717170a,"%s: EnableBcd(%d,%d) failed with %#x","test_init_ai_bcd2",
                         0x16d,"test_init_ai_bcd2",*(undefined4 *)((int)param_1 + 0x24),
                         *(undefined4 *)((int)param_1 + 0x34),iVar15);
                }
              }
              else {
                RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_bcd2",
                       0x166,"test_init_ai_bcd2",iVar15);
              }
              goto LAB_00013c80;
            }
            uVar11 = *(undefined4 *)((int)param_1 + 0x34);
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x160;
          }
          else {
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x159;
          }
          RK_LOG(2,0x1717170a,"%s: SetBcdAttr(%d,%d) failed with %#x","test_init_ai_bcd2",uVar12,
                 "test_init_ai_bcd2",uVar13,uVar11,iVar15);
        }
LAB_00013c80:
        uVar11 = *(undefined4 *)((int)param_1 + 0x24);
        uVar12 = *(undefined4 *)((int)param_1 + 0x34);
        bVar4 = true;
      }
    }
    local_2e0 = uVar16;
    uVar16 = uVar17;
    if ((*(int *)((int)param_1 + 100) == 2) && (uVar16 = uVar17 + 1, uVar16 % 0x32 == 0)) {
      iVar15 = RK_MPI_AI_DisableBuz(uVar11,uVar12);
      if (iVar15 != 0) {
        RK_LOG(2,0x1717170a,"%s: RK_MPI_AI_DisableBuz(%d,%d) failed with %#x","sendDataThread",0x2d4
               ,"sendDataThread",*(undefined4 *)((int)param_1 + 0x24),
               *(undefined4 *)((int)param_1 + 0x34),iVar15);
        return 0;
      }
      if (bVar5) {
        RK_LOG(4,0x1717170a,"%s - buz_count=%ld test_init_ai_buz\n","sendDataThread",0x2d8,
               "sendDataThread",uVar17);
        if (*(int *)((int)param_1 + 100) == 0) {
          uVar11 = *(undefined4 *)((int)param_1 + 0x24);
          uVar12 = *(undefined4 *)((int)param_1 + 0x34);
          bVar5 = false;
        }
        else {
          FUN_000131d8(param_1);
          uVar11 = *(undefined4 *)((int)param_1 + 0x24);
          uVar12 = *(undefined4 *)((int)param_1 + 0x34);
          bVar5 = false;
        }
      }
      else {
        RK_LOG(4,0x1717170a,"%s - buz_count=%ld test_init_ai_buz2\n","sendDataThread",0x2dc,
               "sendDataThread",uVar17);
        if (*(int *)((int)param_1 + 100) != 0) {
          local_280 = uVar9;
          local_278 = uVar10;
          local_288 = 0x7800000078;
          iVar15 = RK_MPI_AI_SetBuzAttr
                             (*(undefined4 *)((int)param_1 + 0x24),
                              *(undefined4 *)((int)param_1 + 0x34),&local_288);
          uVar11 = *(undefined4 *)((int)param_1 + 0x34);
          if (iVar15 == 0) {
            iVar15 = RK_MPI_AI_GetBuzAttr(*(undefined4 *)((int)param_1 + 0x24),uVar11,&local_270);
            if (iVar15 == 0) {
              iVar15 = memcmp(&local_288,&local_270,0x18);
              if (iVar15 == 0) {
                iVar15 = RK_MPI_AI_EnableBuz(*(undefined4 *)((int)param_1 + 0x24),
                                             *(undefined4 *)((int)param_1 + 0x34));
                if (iVar15 != 0) {
                  RK_LOG(2,0x1717170a,"%s: EnableBuz(%d,%d) failed with %#x","test_init_ai_buz2",
                         0x1c5,"test_init_ai_buz2",*(undefined4 *)((int)param_1 + 0x24),
                         *(undefined4 *)((int)param_1 + 0x34),iVar15);
                }
              }
              else {
                RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_buz2",
                       0x1be,"test_init_ai_buz2",iVar15);
              }
              goto LAB_00013be0;
            }
            uVar11 = *(undefined4 *)((int)param_1 + 0x34);
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x1b8;
          }
          else {
            uVar13 = *(undefined4 *)((int)param_1 + 0x24);
            uVar12 = 0x1b1;
          }
          RK_LOG(2,0x1717170a,"%s: SetBuzAttr(%d,%d) failed with %#x","test_init_ai_buz2",uVar12,
                 "test_init_ai_buz2",uVar13,uVar11,iVar15);
        }
LAB_00013be0:
        uVar11 = *(undefined4 *)((int)param_1 + 0x24);
        uVar12 = *(undefined4 *)((int)param_1 + 0x34);
        bVar5 = true;
      }
    }
    iVar15 = RK_MPI_AI_GetFrame(uVar11,uVar12,&local_258,0,0xffffffff);
    if (iVar15 == 0) {
      uVar11 = RK_MPI_MB_Handle2VirAddr(local_258);
      uVar12 = RK_MPI_MB_GetSize(local_258);
      RK_LOG(6,0x1717170a,"data = %p, len = %d","sendDataThread",0x2e8,uVar11,uVar12);
      RK_MPI_AI_ReleaseFrame
                (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                 &local_258,0);
      iVar15 = *(int *)((int)param_1 + 0x5c);
    }
    else {
      iVar15 = *(int *)((int)param_1 + 0x5c);
    }
    if (iVar15 != 0) {
      local_270 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      iVar15 = RK_MPI_AI_GetAedResult
                         (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                          &local_270);
      if (iVar15 == 0) {
        RK_LOG(4,0x1717170a,"AED Result: AcousticEvent:%d, LoudSound:%d","sendDataThread",0x2f5,
               local_270,uStack_26c);
      }
      if (*(int *)((int)param_1 + 0x70) != 0) {
        if (local_2d4 != 0) {
          sVar2 = (short)local_270 * 10000;
          sVar1 = (short)uStack_26c * 10000;
          local_298 = CONCAT22(sVar1,sVar2);
          uStack_28c = CONCAT22(sVar1,sVar2);
          uStack_294 = CONCAT22(sVar1,sVar2);
          local_290 = CONCAT22(sVar1,sVar2);
          puVar14 = local_2c0;
          do {
            *puVar14 = local_298;
            puVar14[1] = uStack_294;
            puVar14[2] = local_290;
            puVar14[3] = uStack_28c;
            puVar14 = puVar14 + 4;
          } while (puVar14 != local_2c0 + local_2d4);
        }
        fwrite(local_2c0,local_2b4,1,local_2b0);
      }
    }
    if (*(int *)((int)param_1 + 0x60) != 0) {
      local_270 = 0;
      iVar15 = RK_MPI_AI_GetBcdResult
                         (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                          &local_270);
      if (iVar15 == 0) {
        RK_LOG(4,0x1717170a,"BCD Result: BabyCry:%d","sendDataThread",0x306,local_270);
      }
      if (*(int *)((int)param_1 + 0x70) != 0) {
        if (local_2d4 != 0) {
          sVar2 = (short)local_270 * 10000;
          uVar11 = CONCAT22(sVar2,sVar2);
          puVar14 = local_2bc;
          do {
            *puVar14 = uVar11;
            puVar14[1] = uVar11;
            puVar14[2] = uVar11;
            puVar14[3] = uVar11;
            puVar14 = puVar14 + 4;
          } while ((undefined4 *)((int)local_2bc + local_2d4 * 2) != puVar14);
        }
        fwrite(local_2bc,local_2c4,1,local_2ac);
      }
    }
    uVar17 = uVar16;
    if (*(int *)((int)param_1 + 100) != 0) {
      local_270 = 0;
      iVar15 = RK_MPI_AI_GetBuzResult
                         (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x34),
                          &local_270);
      if (iVar15 == 0) {
        RK_LOG(4,0x1717170a,"BUZ Result: Buzz:%d","sendDataThread",0x316,local_270);
      }
      if (*(int *)((int)param_1 + 0x70) != 0) {
        if (local_2d4 != 0) {
          sVar2 = (short)local_270 * 10000;
          uVar11 = CONCAT22(sVar2,sVar2);
          puVar14 = local_2b8;
          do {
            *puVar14 = uVar11;
            puVar14[1] = uVar11;
            puVar14[2] = uVar11;
            puVar14[3] = uVar11;
            puVar14 = puVar14 + 4;
          } while ((undefined4 *)((int)local_2b8 + local_2d4 * 2) != puVar14);
        }
        fwrite(local_2b8,local_2c4,1,local_2a8);
      }
    }
  } while( true );
}



/* ===== FUN_000142a4 @ 000142a4 size=504 ===== */

int FUN_000142a4(int param_1)

{
  size_t __n;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_228;
  int local_224;
  int local_220;
  undefined1 auStack_21c [256];
  undefined1 auStack_11c [272];
  
  memset(&local_228,0,0x10c);
  pcVar5 = *(char **)(param_1 + 0x74);
  if (pcVar5 != (char *)0x0) {
    local_228 = 2;
    __n = strlen(pcVar5);
    memcpy(auStack_21c,pcVar5,__n);
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 10 && iVar2 != 0x10) {
    RK_LOG(2,0x1717170a,"Invalid gap: %d, just supports 16ms or 10ms for AI VQE","test_init_ai_vqe",
           0x1dc,iVar2);
    return -1;
  }
  local_224 = *(int *)(param_1 + 0x14);
  local_220 = (local_224 * iVar2) / 1000;
  iVar2 = RK_MPI_AI_SetVqeAttr
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),0,0,&local_228)
  ;
  if (iVar2 == 0) {
    iVar2 = RK_MPI_AI_GetVqeAttr
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),auStack_11c);
    if (iVar2 == 0) {
      iVar2 = memcmp(&local_228,auStack_11c,0x10c);
      if (iVar2 != 0) {
        RK_LOG(2,0x1717170a,"%s: set/get vqe config is different: %d","test_init_ai_vqe",0x1f2,
               "test_init_ai_vqe",iVar2);
        return iVar2;
      }
      iVar2 = RK_MPI_AI_EnableVqe(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x1f9;
      pcVar5 = "%s: EnableVqe(%d,%d) failed with %#x";
      goto LAB_000143c4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = 0x1ec;
  }
  else {
    uVar3 = 0x1e5;
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  pcVar5 = "%s: SetVqeAttr(%d,%d) failed with %#x";
LAB_000143c4:
  RK_LOG(2,0x1717170a,pcVar5,"test_init_ai_vqe",uVar3,"test_init_ai_vqe",uVar1,uVar4,iVar2);
  return iVar2;
}



/* ===== test_ai_poll_event @ 0001449c size=172 ===== */

/* test_ai_poll_event(int, int) */

int test_ai_poll_event(int param_1,int param_2)

{
  int iVar1;
  pollfd local_10;
  
  if (0 < param_2) {
    local_10.revents = 0;
    local_10.events = 0x3b;
    local_10.fd = param_2;
    iVar1 = poll(&local_10,1,param_1);
    if ((0 < iVar1) && ((local_10.revents & 0x38U) != 0)) {
      RK_LOG(2,0x1717170a,"fd:%d polled error","test_ai_poll_event",0x91,param_2);
      iVar1 = -1;
    }
    return iVar1;
  }
  printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","test_ai_poll_event"
         ,0x89,"fd > 0");
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}



/* ===== test_open_device_ai @ 00014548 size=472 ===== */

/* test_open_device_ai(_rkMpiAICtx*) */

undefined4 test_open_device_ai(_rkMpiAICtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char acStack_50 [68];
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  memset(&local_78,0,0x68);
  if (*(int *)(param_1 + 0x30) != 0) {
    snprintf(acStack_50,0x40,"%s");
  }
  iVar1 = *(int *)(param_1 + 0x20);
  local_68 = 1;
  local_70 = 1;
  local_78 = VectorTranspose(*(undefined8 *)(param_1 + 0x10),4);
  if (iVar1 != 0x10) {
    if (iVar1 == 0x18) {
      local_68 = 2;
    }
    else {
      if (iVar1 != 8) {
        RK_LOG(2,0x1717170a,"bitwidth(%d) not support","ai_find_bit_width",0x7d,iVar1);
        return 0xffffffff;
      }
      local_68 = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  local_6c = *(undefined4 *)(param_1 + 0x14);
  if (iVar1 == 1) {
    local_64 = 0;
  }
  else {
    if (iVar1 != 2) {
      RK_LOG(2,0x1717170a,"channel = %d not support","ai_find_sound_mode",0x69,iVar1);
      return 0xffffffff;
    }
    local_64 = 1;
  }
  local_5c = *(undefined4 *)(param_1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x2c);
  local_60 = 0;
  local_54 = 2;
  iVar1 = RK_MPI_AI_SetPubAttr(uVar2,&local_78);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_AI_Enable(uVar2);
    uVar2 = 0;
    if (iVar1 != 0) {
      RK_LOG(2,0x1717170a,"ai enable fail, reason = %d","test_open_device_ai",0xc2,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x1717170a,"ai set attr fail, reason = %d","test_open_device_ai",0xbc,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_init_ai_aed @ 00014720 size=344 ===== */

/* test_init_ai_aed(_rkMpiAICtx*) */

int test_init_ai_aed(_rkMpiAICtx *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  local_28 = DAT_00014878;
  local_20 = 1;
  iVar2 = RK_MPI_AI_SetAedAttr
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),&local_28);
  if (iVar2 == 0) {
    iVar2 = RK_MPI_AI_GetAedAttr
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),auStack_1c);
    if (iVar2 == 0) {
      iVar2 = memcmp(&local_28,auStack_1c,0xc);
      if (iVar2 != 0) {
        RK_LOG(2,0x1717170a,"%s: set/get aed config is different: %d","test_init_ai_aed",0xe5,
               "test_init_ai_aed",iVar2);
        return iVar2;
      }
      iVar2 = RK_MPI_AI_EnableAed(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      uVar3 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = 0xec;
      uVar1 = 0x5ea8;
      goto LAB_0001480c;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = 0xdf;
  }
  else {
    uVar4 = 0xd8;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
  }
  uVar1 = 0x5e80;
LAB_0001480c:
  RK_LOG(2,0x1717170a,uVar1 | 0x10000,"test_init_ai_aed",uVar4,"test_init_ai_aed",uVar3,uVar5,iVar2)
  ;
  return iVar2;
}



/* ===== test_init_ai_vqe @ 00014880 size=24 ===== */

/* test_init_ai_vqe(_rkMpiAICtx*) */

undefined4 test_init_ai_vqe(_rkMpiAICtx *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 0;
  }
  uVar1 = FUN_000142a4();
  return uVar1;
}



/* ===== test_init_mpi_ai @ 00014898 size=600 ===== */

/* test_init_mpi_ai(_rkMpiAICtx*) */

undefined4 test_init_mpi_ai(_rkMpiAICtx *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x5c) == 0) || (iVar1 = FUN_00013348(), iVar1 == 0)) {
    if ((*(int *)(param_1 + 0x60) == 0) || (iVar1 = FUN_00013060(param_1), iVar1 == 0)) {
      if ((*(int *)(param_1 + 100) == 0) || (iVar1 = FUN_000131d8(param_1), iVar1 == 0)) {
        if ((*(int *)(param_1 + 0x6c) == 0) || (iVar1 = FUN_000142a4(param_1), iVar1 == 0)) {
          iVar1 = RK_MPI_AI_EnableChn(*(undefined4 *)(param_1 + 0x24),
                                      *(undefined4 *)(param_1 + 0x34));
          if (iVar1 == 0) {
            uVar2 = 0;
            if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
              RK_LOG(4,0x1717170a,"need to resample %d -> %d","test_init_mpi_ai",0x22a,
                     *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
              iVar1 = RK_MPI_AI_EnableReSmp
                                (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34),
                                 *(undefined4 *)(param_1 + 0x14));
              if (iVar1 != 0) {
                RK_LOG(2,0x1717170a,"ai enable channel fail, reason = %x, aiChn = %d",
                       "test_init_mpi_ai",0x22e,iVar1,*(undefined4 *)(param_1 + 0x34));
                uVar2 = 0xffffffff;
              }
            }
          }
          else {
            RK_LOG(2,0x1717170a,"ai enable channel fail, aiChn = %d, reason = %x","test_init_mpi_ai"
                   ,0x21d,*(undefined4 *)(param_1 + 0x34),iVar1);
            uVar2 = 0xffffffff;
          }
        }
        else {
          RK_LOG(2,0x1717170a,"ai vqe init fail, reason = %x, aiChn = %d","test_init_mpi_ai",0x217,
                 iVar1,*(undefined4 *)(param_1 + 0x34));
          uVar2 = 0xffffffff;
        }
      }
      else {
        RK_LOG(2,0x1717170a,"ai buz init fail, reason = %x, aiChn = %d","test_init_mpi_ai",0x211,
               iVar1,*(undefined4 *)(param_1 + 0x34));
        uVar2 = 0xffffffff;
      }
    }
    else {
      RK_LOG(2,0x1717170a,"ai bcd init fail, reason = %x, aiChn = %d","test_init_mpi_ai",0x20b,iVar1
             ,*(undefined4 *)(param_1 + 0x34));
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x1717170a,"ai aed init fail, reason = %x, aiChn = %d","test_init_mpi_ai",0x205,iVar1,
           *(undefined4 *)(param_1 + 0x34));
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_deinit_mpi_ai @ 00014af0 size=560 ===== */

/* test_deinit_mpi_ai(_rkMpiAICtx*) */

int test_deinit_mpi_ai(_rkMpiAICtx *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  RK_MPI_AI_DisableReSmp(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
  if (*(int *)(param_1 + 100) != 0) {
    iVar6 = RK_MPI_AI_DisableBuz(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x34));
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar3 = 0x23e;
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      pcVar5 = "%s: RK_MPI_AI_DisableBuz(%d,%d) failed with %#x";
      goto LAB_00014bc8;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar6 = RK_MPI_AI_DisableBcd(uVar1,uVar3);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x248;
      pcVar5 = "%s: RK_MPI_AI_DisableBcd(%d,%d) failed with %#x";
      goto LAB_00014bc8;
    }
    iVar6 = *(int *)(param_1 + 0x5c);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (iVar6 != 0) {
    iVar6 = RK_MPI_AI_DisableAed(uVar1,uVar3);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x252;
      pcVar5 = "%s: RK_MPI_AI_DisableAed(%d,%d) failed with %#x";
      goto LAB_00014bc8;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar6 = RK_MPI_AI_DisableVqe(uVar1,uVar3);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = 0x25c;
      pcVar5 = "%s: RK_MPI_AI_DisableVqe(%d,%d) failed with %#x";
LAB_00014bc8:
      RK_LOG(2,0x1717170a,pcVar5,"test_deinit_mpi_ai",uVar3,"test_deinit_mpi_ai",uVar1,uVar4,iVar6);
      return iVar6;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar6 = RK_MPI_AI_DisableChn(uVar1,uVar3);
  if (iVar6 == 0) {
    iVar2 = RK_MPI_AI_Disable(*(undefined4 *)(param_1 + 0x24));
    iVar6 = 0;
    if (iVar2 != 0) {
      RK_LOG(2,0x1717170a,"ai disable fail, reason = %d","test_deinit_mpi_ai",0x26a,iVar2);
      iVar6 = -1;
    }
  }
  else {
    RK_LOG(2,0x1717170a,"ai disable channel fail, reason = %d","test_deinit_mpi_ai",0x264,iVar6);
    iVar6 = -1;
  }
  return iVar6;
}



/* ===== unit_test_mpi_ai @ 00014d20 size=344 ===== */

/* WARNING: Type propagation algorithm not settling */
/* unit_test_mpi_ai(_rkMpiAICtx*) */

undefined4 unit_test_mpi_ai(_rkMpiAICtx *param_1)

{
  int iVar1;
  int iVar2;
  _rkMpiAICtx *__dest;
  pthread_t *__newthread;
  pthread_t local_ec;
  pthread_t local_e8 [3];
  _rkMpiAICtx a_Stack_dc [184];
  
  iVar1 = test_open_device_ai(param_1);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc) < 1) {
      return 0;
    }
    __dest = a_Stack_dc;
    iVar1 = 0;
    __newthread = &local_ec;
    do {
      memcpy(__dest,param_1,0xb4);
      local_e8[2] = *(pthread_t *)(__dest + 0x54);
      *(int *)(__dest + 0x34) = iVar1;
      *(undefined4 *)(__dest + 0x58) = 0xffffffff;
      local_e8[1] = 0xffffffff;
      iVar2 = RK_MPI_AI_SetChnParam(*(undefined4 *)(__dest + 0x24),iVar1,local_e8 + 1);
      if (iVar2 != 0) {
        RK_LOG(2,0x1717170a,"ai set channel params, aiChn = %d","test_set_channel_params_ai",0x36c,
               iVar1);
        return 0xffffffff;
      }
      iVar2 = test_init_mpi_ai(__dest);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      pthread_create(__newthread,(pthread_attr_t *)0x0,sendDataThread,__dest);
      pthread_create(local_e8 + iVar1,(pthread_attr_t *)0x0,commandThread,__dest);
      iVar1 = iVar1 + 1;
      __dest = __dest + 0xb4;
      __newthread = __newthread + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0xc) < 1) {
      return 0;
    }
    pthread_join(local_e8[0],(void **)0x0);
    pthread_join(local_ec,(void **)0x0);
    iVar1 = test_deinit_mpi_ai(a_Stack_dc);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== init_aenc_cfg @ 00014e78 size=144 ===== */

/* init_aenc_cfg(_rkMpiAICtx*, rkCODEC_ID_E, rkAUDIO_BIT_WIDTH_E) */

void init_aenc_cfg(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x84) = 4;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = RK_MPI_AENC_CreateChn(0,param_1 + 0x80);
  if (iVar1 == 0) {
    return;
  }
  RK_LOG(2,0x1717170a,"create aenc chn %d err:0x%x\n","init_aenc_cfg",0x3bf,param_2,iVar1);
  return;
}



/* ===== test_init_mpi_aenc @ 00014f08 size=328 ===== */

/* test_init_mpi_aenc(_rkMpiAICtx*) */

undefined4 test_init_mpi_aenc(_rkMpiAICtx *param_1)

{
  char *pcVar1;
  int iVar2;
  char *__haystack;
  undefined4 uVar3;
  undefined4 uVar4;
  
  __haystack = *(char **)(param_1 + 0xb0);
  pcVar1 = strstr(__haystack,"g726");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(__haystack,"g711a");
    if (pcVar1 == (char *)0x0) {
      uVar3 = 0x40000003;
    }
    else {
      uVar3 = 0x40000002;
    }
  }
  else {
    uVar3 = 0x40000008;
  }
  printf("codecId=%d\n",uVar3);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 8) {
    uVar4 = 0;
  }
  else if (iVar2 == 0x10) {
    uVar4 = 1;
  }
  else if (iVar2 == 0x18) {
    uVar4 = 2;
  }
  else {
    RK_LOG(2,0x1717170a,"test not find format : %d","test_find_audio_enc_format",0x3ad,iVar2);
    uVar4 = 0xffffffff;
  }
  printf("format=%d\n",uVar4);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x84) = 4;
  iVar2 = RK_MPI_AENC_CreateChn(0,param_1 + 0x80);
  if (iVar2 != 0) {
    RK_LOG(2,0x1717170a,"create aenc chn %d err:0x%x\n","init_aenc_cfg",0x3bf,uVar3,iVar2);
    return 0;
  }
  return 0;
}



/* ===== FUN_00015050 @ 00015050 size=64 ===== */

void FUN_00015050(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x723c;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x7220;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015090 @ 00015090 size=588 ===== */

undefined4 FUN_00015090(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_000150c4_default;
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
    goto LAB_00015100;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00015100:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_000152d8:
                    /* WARNING: Subroutine does not return */
        FUN_00015050(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_000152c0:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00015050(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00015050(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000152d8;
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
    if (iVar4 != 0) goto LAB_000152c0;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00015050(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000152d8;
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
switchD_000150c4_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 000152f0 size=48 ===== */

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



/* ===== argparse_describe @ 00015320 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00015334 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_0001542c;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_0001542c:
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
          if (piVar7[2] != 0) goto LAB_00015510;
LAB_00015528:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00015684;
LAB_00015534:
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
          if (piVar7[2] == 0) goto LAB_00015528;
          if ((char)piVar7[1] == '\0') {
LAB_00015510:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00015528;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00015510;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00015534;
LAB_00015684:
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



/* ===== argparse_parse @ 00015750 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_000157b0;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_000157b0:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x000157bc:
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
            if (piVar11[8] == 0) goto LAB_00015974;
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
          while (iVar5 = FUN_00015090(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00015900;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00015a6c;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00015a6c;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00015090(param_1);
              if (iVar5 == -2) goto LAB_00015a6c;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00015a6c:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00015978;
        }
        goto LAB_00015974;
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
LAB_000158cc:
                if (*pcVar3 == '\0') goto LAB_000158e8;
                if (*pcVar3 == '=') goto code_r0x000158e0;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00015acc;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00015920;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_000158cc;
                }
              }
            }
LAB_00015920:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00015978;
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
        goto LAB_000157f4;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x000158e0:
  param_1[9] = (int)(pcVar3 + 1);
LAB_000158e8:
  iVar5 = FUN_00015090(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00015974:
    pcVar10 = (char *)*__src;
LAB_00015978:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00015900:
  param_2 = param_1[5];
LAB_000157f4:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x000157bc;
}



/* ===== argparse_help_cb @ 00015ad0 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00015ae0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00029000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00029004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00029010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00029014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetVqeAttr @ 00029018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetVqeAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00029020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_exit @ 00029024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pthread_exit(void *__retval)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00029028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00029030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBcdResult @ 00029034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetBcdResult(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetTrackMode @ 00029038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Enable @ 0002903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00029040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetFrame @ 00029044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBuzAttr @ 00029048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetBuzAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00029050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00029054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetTrackMode @ 00029058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetTrackMode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableReSmp @ 0002905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00029060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVqeAttr @ 00029064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetVqeAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetSize @ 00029068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00029070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetAedAttr @ 00029074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetAedAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00029078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetVolume @ 0002907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableBcd @ 00029080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableBcd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00029084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00029088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00029090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableChn @ 00029094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_GetStream @ 00029098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetBuzAttr @ 0002909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetBuzAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000290a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableBcd @ 000290a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableBcd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000290a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetAedAttr @ 000290ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetAedAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableChn @ 000290b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000290b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000290b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 000290bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000290c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000290c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBcdAttr @ 000290c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetBcdAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000290cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_DestroyChn @ 000290d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000290d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_ReleaseFrame @ 000290d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_ReleaseFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_CreateChn @ 000290dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableVqe @ 000290e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableVqe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetChnParam @ 000290e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetChnParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000290e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableBuz @ 000290ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableBuz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetBuzResult @ 000290f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetBuzResult(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000290f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableVqe @ 000290f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableVqe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetMute @ 000290fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetMute(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00029100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetBcdAttr @ 00029104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetBcdAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableBuz @ 00029108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableBuz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002910c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00029110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableAed @ 00029114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableAed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00029118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 0002911c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00029120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SaveFile @ 00029124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_EnableAed @ 00029128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_EnableAed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetVolume @ 0002912c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetVolume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_Disable @ 00029130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_Disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00029134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetMute @ 00029138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetMute(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002913c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_DisableReSmp @ 00029140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_DisableReSmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_GetAedResult @ 00029144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_GetAedResult(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00029148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002914c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AI_SetPubAttr @ 00029150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AI_SetPubAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AENC_ReleaseStream @ 00029154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


