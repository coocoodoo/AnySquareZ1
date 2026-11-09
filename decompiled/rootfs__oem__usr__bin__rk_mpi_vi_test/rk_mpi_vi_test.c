// rk_mpi_vi_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000122f8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0001231c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002f00c)();
  return;
}



/* ===== <EXTERNAL>::poll @ 00012328 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0002f010)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 00012334 size=12 ===== */

void RK_MPI_VI_GetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_GetEptz_0002f014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012340 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0002f018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetDeBreathEffect @ 0001234c size=12 ===== */

void RK_MPI_VENC_SetDeBreathEffect(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetDeBreathEffect_0002f01c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012358 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0002f020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012364 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002f024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012370 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0002f028)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0001237c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0002f02c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetCanvasInfo @ 00012388 size=12 ===== */

void RK_MPI_RGN_GetCanvasInfo(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetCanvasInfo_0002f030)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002f034)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000123a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002f038)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000123ac size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0002f03c)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000123b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002f040)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000123c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002f044)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000123d0 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0002f048)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 000123dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002f04c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000123e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002f050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 000123f4 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0002f054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_UpdateCanvas @ 00012400 size=12 ===== */

void RK_MPI_RGN_UpdateCanvas(void)

{
  (*(code *)PTR_RK_MPI_RGN_UpdateCanvas_0002f058)();
  return;
}



/* ===== <EXTERNAL>::getline @ 0001240c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_0002f05c)(__lineptr);
  return _Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012418 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0002f060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00012424 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0002f064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryDevStatus @ 00012430 size=12 ===== */

void RK_MPI_VI_QueryDevStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryDevStatus_0002f068)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 0001243c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002f06c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetAttr @ 00012448 size=12 ===== */

void RK_MPI_RGN_SetAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetAttr_0002f070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012454 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0002f074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ThumbnailBind @ 00012460 size=12 ===== */

void RK_MPI_VENC_ThumbnailBind(void)

{
  (*(code *)PTR_RK_MPI_VENC_ThumbnailBind_0002f078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0001246c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0002f07c)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 00012478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0002f080)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00012484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002f084)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002f088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetAttr @ 0001249c size=12 ===== */

void RK_MPI_RGN_GetAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetAttr_0002f08c)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000124b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002f094)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000124c0 size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_0002f098)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 000124cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002f09c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 000124d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002f0a0)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000124e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002f0a4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableThumbnail @ 000124f0 size=12 ===== */

void RK_MPI_VENC_EnableThumbnail(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableThumbnail_0002f0a8)();
  return;
}



/* ===== <EXTERNAL>::read @ 000124fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002f0ac)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00012508 size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0002f0b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00012514 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0002f0b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00012520 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002f0b8)();
  return;
}



/* ===== <EXTERNAL>::_exit @ 0001252c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_0002f0bc)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00012538 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0002f0c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00012544 size=12 ===== */

void RK_MPI_IVS_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_DestroyChn_0002f0c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00012550 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0002f0c8)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001255c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002f0cc)();
  return;
}



/* ===== <EXTERNAL>::access @ 00012568 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002f0d0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012574 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0002f0d4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00012580 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002f0d8)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 0001258c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002f0dc)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012598 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002f0e0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000125a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002f0e4)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 000125b0 size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0002f0e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_AttachMbPool @ 000125bc size=12 ===== */

void RK_MPI_VI_AttachMbPool(void)

{
  (*(code *)PTR_RK_MPI_VI_AttachMbPool_0002f0ec)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 000125c8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002f0f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000125d4 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0002f0f4)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 000125e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002f0f8)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 000125ec size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_0002f0fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 000125f8 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_0002f100)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012604 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002f104)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00012610 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002f108)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0001261c size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0002f10c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00012628 size=12 ===== */

void RK_MPI_IVS_ReleaseResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_ReleaseResults_0002f110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00012634 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_0002f114)();
  return;
}



/* ===== <EXTERNAL>::pthread_self @ 00012640 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_0002f118)();
  return pVar1;
}



/* ===== <EXTERNAL>::sscanf @ 0001264c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002f11c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012658 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002f120)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00012664 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_0002f124)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012670 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0002f128)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 0001267c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002f12c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012688 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0002f130)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00012694 size=12 ===== */

void __aeabi_uidivmod(void)

{
  (*(code *)PTR___aeabi_uidivmod_0002f134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000126a0 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0002f138)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 000126ac size=12 ===== */

void RK_MPI_MB_Handle2PhysAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2PhysAddr_0002f13c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000126b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002f140)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000126c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002f144)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 000126d0 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_0002f148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 000126dc size=12 ===== */

void RK_MPI_IVS_GetResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetResults_0002f14c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 000126e8 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_0002f150)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 000126f4 size=12 ===== */

void RK_MPI_IVS_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_CreateChn_0002f154)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012700 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002f158)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 0001270c size=12 ===== */

void RK_MPI_VENC_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnAttr_0002f15c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012718 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0002f160)();
  return;
}



/* ===== <EXTERNAL>::strtof @ 00012724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002f164)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00012730 size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_0002f168)();
  return;
}



/* ===== <EXTERNAL>::abort @ 0001273c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002f16c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012748 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0002f170)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00012754 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0002f174)();
  return;
}



/* ===== <EXTERNAL>::pthread_exit @ 00012760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0002f178)(__retval);
  return;
}



/* ===== <EXTERNAL>::fseek @ 0001276c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002f17c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnFreeze @ 00012778 size=12 ===== */

void RK_MPI_VI_SetChnFreeze(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnFreeze_0002f180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012784 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002f184)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00012790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002f188)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0001279c size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0002f18c)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 000127a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002f190)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::open64 @ 000127b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002f194)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000127c0 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_0002f198)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000127cc size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0002f19c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000127d8 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0002f1a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 000127e4 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0002f1a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000127f0 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0002f1a8)();
  return;
}



/* ===== <EXTERNAL>::ftell @ 000127fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0002f1ac)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::free @ 00012808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002f1b0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DetachMbPool @ 00012814 size=12 ===== */

void RK_MPI_VI_DetachMbPool(void)

{
  (*(code *)PTR_RK_MPI_VI_DetachMbPool_0002f1b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00012820 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0002f1b8)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001282c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002f1bc)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00012838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002f1c0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012844 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0002f1c4)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002f1c8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 0001285c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002f1cc)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012868 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002f1d0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002f1d4)(__th);
  return iVar1;
}



/* ===== main @ 00012880 size=13024 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int *__arg;
  FILE *pFVar2;
  size_t __n;
  ssize_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int extraout_r1;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  uint uVar31;
  undefined8 in_stack_fffff4a0;
  int local_b2c;
  int local_b28;
  undefined4 local_b24;
  pthread_t local_b20 [2];
  pthread_t local_b18 [8];
  pthread_t local_af8 [8];
  undefined1 auStack_ad8 [40];
  undefined8 local_ab0;
  void *local_aa8;
  undefined4 uStack_aa4;
  int local_aa0;
  int local_a9c;
  undefined4 local_6b0 [2];
  undefined *local_6a8;
  char *local_6a0;
  code *local_69c;
  undefined4 local_694;
  undefined4 local_690;
  char *local_680;
  undefined4 local_670;
  undefined1 local_66c;
  char *local_668;
  int *local_664;
  char *local_660;
  undefined4 local_650;
  undefined1 local_64c;
  char *local_648;
  int *local_644;
  char *local_640;
  undefined4 local_630;
  undefined1 local_62c;
  undefined *local_628;
  int *local_624;
  char *local_620;
  undefined4 local_610;
  undefined1 local_60c;
  char *local_608;
  int *local_604;
  char *local_600;
  undefined4 local_5f0;
  undefined1 local_5ec;
  char *local_5e8;
  int *local_5e4;
  char *local_5e0;
  undefined4 local_5d0;
  undefined1 local_5cc;
  char *local_5c8;
  int *local_5c4;
  char *local_5c0;
  undefined4 local_5b0;
  undefined1 local_5ac;
  char *local_5a8;
  int *local_5a4;
  char *local_5a0;
  undefined4 local_590;
  undefined1 local_58c;
  char *local_588;
  int *local_584;
  char *local_580;
  undefined4 local_570;
  undefined1 local_56c;
  char *local_568;
  int *local_564;
  char *local_560;
  undefined4 local_550;
  undefined1 local_54c;
  char *local_548;
  int *local_544;
  char *local_540;
  undefined4 local_530;
  undefined1 local_52c;
  undefined *local_528;
  int *local_524;
  char *local_520;
  undefined4 local_510;
  undefined1 local_50c;
  char *local_508;
  int *local_504;
  char *local_500;
  undefined4 local_4f0;
  undefined1 local_4ec;
  char *local_4e8;
  int *local_4e4;
  char *local_4e0;
  undefined4 local_4d0;
  char *local_4c8;
  int *local_4c4;
  char *local_4c0;
  undefined4 local_4b0;
  char *local_4a8;
  int *local_4a4;
  char *local_4a0;
  undefined4 local_490;
  char *local_488;
  int *local_484;
  char *local_480;
  undefined4 local_470;
  char *local_468;
  int *local_464;
  char *local_460;
  undefined4 local_450;
  char *local_448;
  int *local_444;
  char *local_440;
  undefined4 local_430;
  char *local_428;
  int *local_424;
  char *local_420;
  undefined4 local_410;
  undefined *local_408;
  int *local_404;
  char *local_400;
  undefined4 local_3f0;
  char *local_3e8;
  int *local_3e4;
  char *local_3e0;
  undefined4 local_3d0;
  char *local_3c8;
  int *local_3c4;
  char *local_3c0;
  undefined4 local_3b0;
  char *local_3a8;
  int *local_3a4;
  char *local_3a0;
  undefined4 local_390;
  char *local_388;
  int *local_384;
  char *local_380;
  undefined4 local_370;
  char *local_368;
  int *local_364;
  char *local_360;
  undefined4 local_350;
  char *local_348;
  int *local_344;
  char *local_340;
  undefined4 local_330;
  undefined *local_328;
  int *local_324;
  char *local_320;
  undefined4 local_310;
  char *local_308;
  int *local_304;
  char *local_300;
  undefined4 local_2f0;
  char *local_2e8;
  int *local_2e4;
  char *local_2e0;
  undefined4 local_2d0;
  char *local_2c8;
  int *local_2c4;
  char *local_2c0;
  undefined4 local_2b0;
  undefined *local_2a8;
  int *local_2a4;
  char *local_2a0;
  undefined4 local_290;
  char *local_288;
  int *local_284;
  char *local_280;
  undefined4 local_270;
  char *local_268;
  int *local_264;
  char *local_260;
  undefined4 local_250;
  undefined1 local_24c;
  char *local_248;
  int *local_244;
  char *local_240;
  undefined4 local_230;
  char *local_228;
  int *local_224;
  char *local_220;
  undefined4 local_210;
  char *local_208;
  int *local_204;
  char *local_200;
  undefined4 local_1f0;
  char *local_1e8;
  int *local_1e4;
  char *local_1e0;
  undefined4 local_1d0;
  undefined *local_1c8;
  int *local_1c4;
  char *local_1c0;
  undefined4 local_1b0;
  char *local_1a8;
  int *local_1a4;
  char *local_1a0;
  undefined4 local_190;
  char *local_188;
  int *local_184;
  char *local_180;
  undefined4 local_170;
  char *local_168;
  int *local_164;
  char *local_160;
  undefined4 local_150;
  undefined *local_148;
  int *local_144;
  char *local_140;
  undefined4 local_130;
  char *local_128;
  int *local_124;
  char *local_120;
  undefined4 local_110;
  char *local_108;
  int *local_104;
  char *local_100;
  undefined4 local_f0;
  char *local_e8;
  int *local_e4;
  char *local_e0;
  undefined4 local_d0;
  char *local_c8;
  int *local_c4;
  char *local_c0;
  undefined4 local_b0;
  char *local_a8;
  int *local_a4;
  char *local_a0;
  undefined4 local_90;
  undefined1 local_8c;
  char *local_88;
  int *local_84;
  char *local_80;
  undefined4 local_70;
  char *local_68;
  int *local_64;
  char *local_60;
  
  __arg = calloc(0x1130,1);
  uVar1 = DAT_00012cc8;
  uVar29 = DAT_00012cc0;
  uVar28 = DAT_00012cb8;
  uVar27 = DAT_00012cb0;
  *__arg = 0;
  __arg[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  __arg[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  __arg[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  __arg[0x3c] = 3;
  __arg[4] = 1;
  __arg[0xea] = 1;
  __arg[0x48] = 1;
  iVar30 = 0xe5f;
  __arg[6] = 100;
  __arg[0x3f] = 4;
  __arg[0x38] = 0;
  __arg[0xeb] = 0;
  __arg[0x32] = 0;
  __arg[0x39] = -1;
  __arg[0x3a] = -1;
  __arg[0x436] = 0xc;
  __arg[5] = 0;
  __arg[0x438] = 1;
  __arg[0xc] = 5;
  __arg[9] = 0;
  __arg[10] = 0;
  __arg[0xb] = 1;
  __arg[0xf] = 0;
  *(undefined8 *)(__arg + 0x43b) = uVar27;
  *(undefined8 *)(__arg + 0x43d) = uVar28;
  __arg[0x446] = 1;
  *(undefined8 *)(__arg + 0x442) = uVar29;
  *(undefined8 *)(__arg + 0x444) = uVar1;
  __arg[0x447] = 0;
  __arg[0x13] = 0;
  RK_LOG(5,0x17171708,"test running enter!",&DAT_0001c148,0xe5f);
  memset(local_6b0,0,0x680);
  local_62c = 100;
  local_694 = 1;
  local_644 = __arg + 1;
  local_690 = 1;
  local_4c4 = __arg + 0x436;
  local_670 = 4;
  local_304 = __arg + 0x443;
  local_650 = 4;
  local_2e4 = __arg + 0x444;
  local_630 = 4;
  local_610 = 4;
  local_5f0 = 4;
  local_5d0 = 4;
  local_5b0 = 4;
  local_6a8 = &DAT_0001c45c;
  local_6a0 = "show this help message and exit";
  local_69c = argparse_help_cb;
  local_680 = "basic options:";
  local_668 = "width";
  local_660 = "set capture channel width(required, default 0)";
  local_648 = "height";
  local_640 = "set capture channel height(required, default 0)";
  local_628 = &DAT_0001c504;
  local_620 = "set dev id(default 0)";
  local_608 = "pipe";
  local_600 = "set pipe id(default 0)";
  local_5e8 = "channel";
  local_5e0 = "set channel id(default 1)";
  local_5c8 = "loopcount";
  local_5c0 = "set capture frame count(default 100)";
  local_6b0[0] = 2;
  local_66c = 0x77;
  local_64c = 0x68;
  local_60c = 0x70;
  local_5ec = 99;
  local_5cc = 0x6c;
  local_5ac = 0x43;
  local_590 = 4;
  local_570 = 4;
  local_550 = 4;
  local_510 = 4;
  local_4f0 = 4;
  local_4d0 = 4;
  local_4b0 = 4;
  local_5a8 = "compressmode";
  local_5a0 = "set capture compressmode(default 0; 0:MODE_NONE 1:AFBC_16x16)";
  local_588 = "output";
  local_580 = 
  "save output file, file at /data/test_<devid>_<pipeid>_<channelid>.bin (default 0; 0:no save 1:save)"
  ;
  local_568 = "mode";
  local_560 = 
  "test mode(default 1; \n\t0:vi get&release frame \n\t1:vi bind one venc(h264) \n\t2:vi bind two venc(h264)) \n\t3:vi bind vpss bind venc \n\t4:vi bind vo \n\t5:mult vi \n\t6:vi get send to venc \n\t7:vi get send to vo \n\t8:vi bind vpss bind vo \n\t9:vi bind vpss send vo \n\t10:vi change resolution \n\t11:vi bind venc & change resolution \n\t12:vi bind venc with thumbnail \n\t13:vi one sensor, muti-chns get video frames \n\t14:vi set eptz, get & release frame and set eptz \n\t"
  ;
  local_548 = "memorytype";
  local_540 = 
  "set the buf memorytype(required, default 4; 1:mmap(hdmiin/bt1120/sensor input) 2:userptr(invalid) 3:overlay(invalid) 4:dma(sensor))"
  ;
  local_528 = &DAT_0001c8a0;
  local_520 = 
  "set the entityName (required, default null;\n\trv1126 sensor:rkispp_m_bypass rkispp_scale0 rkispp_scale1 rkispp_scale2;\n\trv1126 hdmiin/bt1120/sensor:/dev/videox such as /dev/video19 /dev/video20;\n\trk356x hdmiin/bt1120/sensor:/dev/videox such as /dev/video0 /dev/video1"
  ;
  local_508 = "depth";
  local_500 = "channel output depth, default{u32BufCount(not bind) or 0(bind venc/vpss/...)}";
  local_4e8 = "format";
  local_4e0 = 
  "set the format(default 0; 0:RK_FMT_YUV420SP 10:RK_FMT_YUV422_UYVY131080:RK_FMT_RGB_BAYER_SBGGR_12BPP)"
  ;
  local_4c8 = "codec";
  local_4c0 = "venc encode codec(8:h264, 9:mjpeg, 12:h265, 15:jpeg, ...). default(12)";
  local_4a8 = "freeze";
  local_4a0 = "freeze output(default 0; 0:disable freeze 1:enable freeze)";
  local_58c = 0x6f;
  local_56c = 0x6d;
  local_54c = 0x74;
  local_530 = 6;
  local_52c = 0x6e;
  local_50c = 0x44;
  local_4ec = 0x66;
  local_490 = 4;
  local_470 = 4;
  local_450 = 4;
  local_430 = 4;
  local_410 = 4;
  local_3f0 = 4;
  local_3d0 = 4;
  local_3b0 = 4;
  local_390 = 4;
  local_370 = 4;
  local_350 = 4;
  local_488 = "src_rate";
  local_480 = "src frame rate(default -1; -1:not control; other:1-max_fps<isp_out_fps>)";
  local_468 = "dst_rate";
  local_460 = "dst frame rate(default -1; -1:not control; other:1-src_fps<src_rate>)";
  local_448 = "buf_count";
  local_440 = "out buf count, range[1-8] default(3)";
  local_428 = "venc_ch_start";
  local_420 = "venc chn id start";
  local_408 = &DAT_0001cc14;
  local_400 = "wrap enable(0: disable, 1: enable). default(0)";
  local_3e8 = "wrap_line";
  local_3e0 = "set wrap line, range [128-H]";
  local_3c8 = "rgn_type";
  local_3c0 = "rgn type. 0:overlay, 1:overlayEx,2:cover,3:coverEx,4:mosaic,5:moscaiEx";
  local_3a8 = "rgn_cnt";
  local_3a0 = "rgn count. default(1),max:8";
  local_388 = "en_rgn";
  local_380 = "enable rgn. default(0)";
  local_368 = "en_overlay";
  local_360 = "enable overlay. default(0)";
  local_348 = "mirror";
  local_340 = "picture mirror, default(0)";
  local_330 = 4;
  local_310 = 4;
  local_2f0 = 4;
  local_2d0 = 4;
  local_2b0 = 4;
  local_290 = 4;
  local_270 = 4;
  local_250 = 4;
  local_230 = 4;
  local_210 = 4;
  local_1f0 = 4;
  local_328 = &DAT_0001cd5c;
  local_320 = "picture flip, default(0)";
  local_308 = "maxWidth";
  local_300 = "config max resolution width(<= sensor max resolution width)";
  local_2e8 = "maxHeight";
  local_2e0 = "config max resolution height(<= sensor max resolution height)";
  local_2c8 = "combo";
  local_2c0 = "combo enable(0: disable, 1: enable). default(0)";
  local_2a8 = &DAT_0001ce4c;
  local_2a0 = "snap jpeg num(-1: save all, > 0: save pic num). default(1)";
  local_288 = "venc_ref_buf_share";
  local_280 = "enable venc ref buf share or not, default(0), 0: RK_FALSE, 1: RK_TRUE";
  local_268 = "de_breath";
  local_260 = "debreath[0, 35] default(0)";
  local_248 = "bit_rate";
  local_240 = 
  "bit rate kbps(h264/h265:range[3-200000],jpeg/mjpeg:range[5-800000] default(10*1024kb))";
  local_228 = "bit_rate_max";
  local_220 = 
  "bit rate kbps max(vbr/avbr valid)(h264/h265:range[3-200000];jpeg/mjpeg:range[5-800000] default(0:auto calcu))"
  ;
  local_208 = "bit_rate_min";
  local_200 = 
  "bit rate kbps min(vbr/avbr valid)(h264/h265:range[3-200000];jpeg/mjpeg:range[5-800000] default(0:auto calcu))"
  ;
  local_1e8 = "attach_pool";
  local_24c = 0x62;
  local_1e0 = "enable attach usr pool, default(0), 0: RK_FALSE, 1: RK_TRUE";
  local_1d0 = 4;
  local_1b0 = 4;
  local_190 = 4;
  local_170 = 4;
  local_150 = 4;
  local_130 = 4;
  local_110 = 4;
  local_f0 = 4;
  local_d0 = 4;
  local_b0 = 4;
  local_90 = 4;
  local_1c8 = &DAT_0001d0c0;
  local_1c0 = "ivs(MD, OD) enable, default(0: disable, 1: low, 2: mid, 3: high)";
  local_1a8 = "ivs_debug";
  local_1a0 = "ivs debug enable, default(0: disable, 1: enable)";
  local_188 = "no_use_v4l2";
  local_180 = "enable use v4l2, default(0), 0: RK_FALSE, 1: RK_TRUE";
  local_168 = "delay_get";
  local_160 = "delay some ms get, default(0)";
  local_148 = &DAT_0001d1b8;
  local_140 = "svc(smart video coding) enable, default(0)";
  local_128 = "gop_size";
  local_120 = "gop size(range >= 1 default(60))";
  local_108 = "change_res";
  local_100 = "change res by frames(default(20))";
  local_e8 = "getstream";
  local_e0 = "ebable get vi stream,default(1)";
  local_c8 = "en_thr";
  local_c0 = "ebable second thread to get vi stream,default(0)";
  local_a8 = "en_eptz";
  local_a0 = "enable eptz (default(0))";
  local_8c = 0x65;
  local_88 = "use_ext";
  local_70 = 4;
  local_604 = __arg + 3;
  local_624 = __arg + 2;
  local_5c4 = __arg + 6;
  local_5e4 = __arg + 4;
  local_5a4 = __arg + 0x14;
  local_564 = __arg + 0xea;
  local_544 = __arg + 0x3f;
  local_524 = __arg + 0xeb;
  local_504 = __arg + 0x38;
  local_4e4 = __arg + 0x32;
  local_4a4 = __arg + 8;
  local_464 = __arg + 0x3a;
  local_2c4 = __arg + 0x437;
  local_444 = __arg + 0x3c;
  local_424 = __arg + 5;
  local_404 = __arg + 0xec;
  local_3e4 = __arg + 0xed;
  local_3c4 = __arg + 0xc;
  local_3a4 = __arg + 0xb;
  local_384 = __arg + 9;
  local_364 = __arg + 10;
  local_344 = __arg + 0xd;
  local_324 = __arg + 0xe;
  local_80 = "enable use channel ext api and pipe (default(0))";
  local_68 = "rgn_pipe";
  local_60 = "enable rgn on pipe (default(0))";
  local_2a4 = __arg + 0x438;
  local_284 = __arg + 0x439;
  local_264 = __arg + 0x43a;
  local_244 = __arg + 0x43b;
  local_224 = __arg + 0x43d;
  local_204 = __arg + 0x43c;
  local_1c4 = __arg + 0x43f;
  local_164 = __arg + 0x43e;
  local_144 = __arg + 0x441;
  local_124 = __arg + 0x442;
  local_104 = __arg + 0x445;
  local_e4 = __arg + 0x446;
  local_c4 = __arg + 0x447;
  local_1e4 = __arg + 0xf;
  local_1a4 = __arg + 0x440;
  local_184 = __arg + 0x48;
  local_a4 = __arg + 0x11;
  local_84 = __arg + 0x12;
  local_64 = __arg + 0x13;
  local_664 = __arg;
  local_584 = __arg + 0x4b;
  local_484 = __arg + 0x39;
  argparse_init(auStack_ad8,local_6b0,&PTR_s_1___rk_mpi_vi_test__w_1920__h_10_0001c070,0);
  argparse_describe(auStack_ad8,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_ad8,param_1,param_2);
  if ((*__arg == 0) || (__arg[1] == 0)) {
    argparse_usage(auStack_ad8);
    goto LAB_0001366c;
  }
  iVar12 = __arg[2];
  iVar11 = __arg[0x4b];
  if (__arg[3] != iVar12) {
    __arg[3] = iVar12;
  }
  if (iVar11 != 0) {
    uVar9 = __arg[0xea];
    if (uVar9 < 0xd) {
      if ((~(0x184aU >> (uVar9 & 0xff)) & 1) == 0) {
        __arg[0x207] = iVar11;
      }
      else if (uVar9 == 2) {
        __arg[0x207] = iVar11;
        __arg[0x26d] = iVar11;
        goto LAB_00013224;
      }
      if (uVar9 == 9) {
        __arg[0x39c] = iVar11;
      }
    }
LAB_00013224:
    uVar5 = ram0x0001d378;
    iVar30 = __arg[3];
    __arg[0x4c] = s__data_0001d374._0_4_;
    *(char *)(__arg + 0x4d) = (char)uVar5;
    snprintf((char *)(__arg + 0x8c),0x100,"test_%d_%d_%d.bin",iVar12,iVar30,__arg[4]);
  }
  if (__arg[0x39c] != 0) {
    memset(&local_ab0,0,0x100);
    __arg[0x39e] = 0x61746164;
    snprintf((char *)(__arg + 0x3be),0x80,"vpss_%d.bin",0,iVar30);
    snprintf((char *)&local_ab0,0x100,"/%s/%s",__arg + 0x39e,__arg + 0x3be);
    pFVar2 = fopen64((char *)&local_ab0,"wb");
    __arg[0x39d] = (int)pFVar2;
    if (pFVar2 != (FILE *)0x0) goto LAB_000132e8;
    iVar30 = -1;
    RK_LOG(2,0x17171708,"chn %d can\'t open file %s in get picture thread!\n",&DAT_0001c148,0xf0a,0,
           &local_ab0);
    goto LAB_000136b4;
  }
LAB_000132e8:
  RK_LOG(2,0x17171708,"test running enter ctx->aEntityName=%s!",&DAT_0001c148,0xf0f,__arg[0xeb]);
  pcVar14 = (char *)__arg[0xeb];
  if (pcVar14 != (char *)0x0) {
    __n = strlen(pcVar14);
    memcpy(__arg + 0x40,pcVar14,__n);
  }
  piVar18 = __arg + 0x4c;
  piVar15 = __arg + 0x8c;
  if (__arg[3] != __arg[2]) {
    __arg[3] = __arg[2];
  }
  puts("cmd parse result:");
  printf("output file open      : %d\n",__arg[0x4b]);
  printf("yuv output file name  : %s/%s\n",piVar18,piVar15);
  printf("enc0 output file path : /%s/%s\n",__arg + 0x22a,__arg + 0x24a);
  printf("enc1 output file path : /%s/%s\n",__arg + 0x290,__arg + 0x2b0);
  printf("loop count            : %d\n",__arg[6]);
  printf("ctx->enMode           : %d\n",__arg[0xea]);
  printf("ctx->dev              : %d\n",__arg[2]);
  printf("ctx->pipe             : %d\n",__arg[3]);
  printf("ctx->channel          : %d\n",__arg[4]);
  printf("ctx->width            : %d\n",*__arg);
  printf("ctx->height           : %d\n",__arg[1]);
  printf("enCompressMode        : %d\n",__arg[0x14]);
  printf("enMemoryType          : %d\n",__arg[0x3f]);
  printf("aEntityName           : %s\n",__arg + 0x40);
  printf("depth                 : %d\n",__arg[0x38]);
  printf("enPixelFormat         : %d\n",__arg[0x32]);
  printf("bFreeze               : %d\n",__arg[8]);
  printf("src_frame rate        : %d\n",__arg[0x39]);
  printf("dst frame rate        : %d\n",__arg[0x3a]);
  printf("out buf count         : %d\n",__arg[0x3c]);
  printf("venc ch start         : %d\n",__arg[5]);
  printf("wrap mode enable      : %d\n",__arg[0xec]);
  printf("wrap line             : %d\n",__arg[0xed]);
  printf("bEnRgn                : %d\n",__arg[9]);
  printf("bEnOverlay            : %d\n",__arg[10]);
  printf("rgn count             : %d\n",__arg[0xb]);
  printf("rgn type              : %d\n",__arg[0xc]);
  printf("enable mirror         : %d\n",__arg[0xd]);
  printf("enable flip           : %d\n",__arg[0xe]);
  printf("enable combo          : %d\n",__arg[0x437]);
  printf("delay Ms Get          : %d\n",__arg[0x43e]);
  printf("enable venc ref buf share : %d\n",__arg[0x439]);
  printf("delay Ms Get          : %d\n",__arg[0x43e]);
  printf("max width             : %d\n",__arg[0x443]);
  printf("max height            : %d\n",__arg[0x444]);
  printf("get echo res frame    : %d\n",__arg[0x445]);
  printf("enable get stream     : %d\n",__arg[0x446]);
  printf("enable second thread  : %d\n",__arg[0x447]);
  printf("enable eptz           : %d\n",__arg[0x11]);
  printf("enable use ext chn API: %d\n",__arg[0x12]);
  printf("enable rgn on pipe    : %d\n",__arg[0x13]);
  iVar30 = RK_MPI_SYS_Init();
  uVar27 = DAT_000146d8;
  if (iVar30 != 0) {
    iVar30 = -1;
    RK_LOG(2,0x17171708,"rk mpi sys init fail!",&DAT_0001c148,0xf19);
    goto LAB_000136b4;
  }
  switch(__arg[0xea]) {
  case 0:
    signal(2,(__sighandler_t)&LAB_00015cfc);
    if (__arg[0x38] == 0) {
      RK_LOG(2,0x17171708,"depth need > 0 when vi not bind any other module!",&DAT_0001c148,0xf20);
      __arg[0x38] = __arg[0x3c];
    }
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      RK_MPI_VI_SetChnFreeze(__arg[3],__arg[4],__arg[8]);
      if (__arg[0x446] == 0) {
        while (DAT_0002f22c == 0) {
          usleep(1000);
        }
      }
      if (__arg[0x447] != 0) {
        pthread_create((pthread_t *)&local_ab0,(pthread_attr_t *)0x0,FUN_00015fc8,__arg);
      }
      iVar30 = 0;
      while (((iVar30 < __arg[6] && (__arg[0x446] != 0)) && (DAT_0002f22c == 0))) {
        iVar11 = RK_MPI_VI_GetChnFrame(__arg[3],__arg[4],__arg + 0xce,100);
        if (iVar11 == 0) {
          uVar28 = TEST_COMM_GetNowUs(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x",
                                      "test_vi_get_release_frame_loop");
          uVar5 = RK_MPI_MB_Handle2VirAddr(__arg[0xce]);
          uVar8 = RK_MPI_MB_Handle2PhysAddr(__arg[0xce]);
          __aeabi_uldivmod(__arg[0xdc],__arg[0xdd],1000,0);
          iVar11 = iVar30 + 1;
          RK_LOG(5,0x17171708,
                 "RK_MPI_VI_GetChnFrame ok:data %p, phyaddr:0x%08x, loop:%d seq:%d pts:%lld ms len=%d"
                 ,"test_vi_get_release_frame_loop",0x943,uVar5,uVar8,iVar30,__arg[0xdb]);
          uVar5 = RK_MPI_VI_QueryChnStatus(__arg[3],__arg[4],__arg + 0xe2);
          uVar27 = *(undefined8 *)(__arg + 0xe5);
          uVar28 = VectorSub(uVar28,*(undefined8 *)(__arg + 0xdc),8);
          uVar29 = CONCAT44(__arg[0xe7],__arg[0xe3]);
          iVar20 = __arg[0xe8];
          iVar12 = __arg[0xe4];
          iVar10 = __arg[0xe2];
          iVar19 = __arg[0xe9];
          RK_LOG(5,0x17171708,
                 "RK_MPI_VI_QueryChnStatus ret %x, w:%d,h:%d,enable:%d,current frame id:%d,input lost:%d,output lost:%d,framerate:%d,vbfail:%d delay=%lldus"
                 ,"test_vi_get_release_frame_loop",0x952,uVar5,iVar20,iVar19,iVar10,iVar12,
                 __arg[0xe5],__arg[0xe6],__arg[0xe3],__arg[0xe7],uVar28);
          iVar30 = RK_MPI_VI_ReleaseChnFrame(__arg[3],__arg[4],__arg + 0xce);
          if (iVar30 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_get_release_frame_loop"
                   ,0x957,iVar30,iVar20,iVar19,iVar10,iVar12,uVar27,uVar29,uVar28);
          }
        }
        else {
          RK_LOG();
          iVar11 = iVar30;
        }
        usleep(10000);
        iVar30 = iVar11;
      }
      if (__arg[0x447] != 0) {
        pthread_join((pthread_t)(void *)local_ab0,(void **)0x0);
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_get_release_frame_loop",0x90e,__arg[2],
             __arg[4],iVar30);
    }
    if (__arg[9] != 0) {
      FUN_00017344(__arg);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_get_release_frame_loop",0x971,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0x975;
    pcVar14 = "test_vi_get_release_frame_loop";
    goto LAB_00014328;
  case 1:
  case 2:
    iVar30 = FUN_000193a8(__arg);
    break;
  case 3:
    __arg[0x4b] = 0;
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = FUN_00015d10(__arg,1);
      if (iVar30 == 0) {
        uVar5 = init_venc_cfg(__arg,0,__arg[0x436]);
        iVar30 = FUN_00016bc0(uVar5,__arg[0x26a]);
        if (iVar30 != 0) {
          iVar11 = __arg[0x26a];
          uVar5 = 0x6bc;
          pcVar14 = "test_vi_bind_vpss_venc_loop";
LAB_000158b4:
          RK_LOG(2,0x17171708,"create %d ch venc failed",pcVar14,uVar5,iVar11);
          break;
        }
        local_aa8 = (void *)__arg[0x26a];
        local_ab0 = 4;
        iVar30 = RK_MPI_SYS_Bind(local_af8,&local_ab0);
        if (iVar30 == 0) {
          pvVar4 = malloc(0x88);
          __arg[0x2d4] = (int)pvVar4;
          iVar30 = 0;
          while (iVar30 < __arg[6]) {
            RK_MPI_VI_SetChnFreeze(__arg[3],__arg[4],__arg[8]);
            iVar11 = RK_MPI_VENC_GetStream(__arg[0x26a],__arg + 0x2d4,0xffffffff);
            if (iVar11 == 0) {
              if (__arg[0x207] != 0) {
                pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)__arg[0x2d4]);
                fwrite(pvVar4,1,*(size_t *)(__arg[0x2d4] + 4),(FILE *)__arg[0x26b]);
                fflush((FILE *)__arg[0x26b]);
              }
              iVar10 = __arg[0x2d9];
              uVar5 = *(undefined4 *)(__arg[0x2d4] + 4);
              iVar11 = iVar30 + 1;
              RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d\n",
                     "test_vi_bind_vpss_venc_loop",0x6e0,0,iVar30,iVar10,uVar5);
              iVar12 = RK_MPI_VENC_ReleaseStream(__arg[0x26a],__arg + 0x2d4);
              if (iVar12 != 0) {
                RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x",
                       "test_vi_bind_vpss_venc_loop",0x6e3,iVar12,iVar30,iVar10,uVar5);
              }
            }
            else {
              RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame fail %x","test_vi_bind_vpss_venc_loop",
                     0x6e7,iVar11);
              iVar11 = iVar30;
            }
            usleep(10000);
            iVar30 = iVar11;
          }
        }
        else {
          RK_LOG(2,0x17171708,"create %d ch venc failed","test_vi_bind_vpss_venc_loop",0x6c6,
                 __arg[0x26a]);
        }
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_vpss_venc_loop",0x684,__arg[2],
             __arg[4],iVar30);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    iVar30 = RK_MPI_SYS_UnBind(local_b18,local_af8);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_vpss_venc_loop",0x6f6,iVar30);
    }
    iVar30 = RK_MPI_SYS_UnBind(local_af8,&local_ab0);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_vpss_venc_loop",0x6fc,iVar30);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_vpss_venc_loop",0x709,uVar5);
    iVar30 = RK_MPI_VENC_StopRecvFrame(__arg[0x26a]);
    if (iVar30 == 0) {
      RK_LOG(2,0x17171708,"destroy enc chn:%d","test_vi_bind_vpss_venc_loop",0x710,__arg[0x26a]);
      iVar30 = RK_MPI_VENC_DestroyChn(__arg[0x26a]);
      if (iVar30 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","test_vi_bind_vpss_venc_loop",0x713,
               iVar30);
      }
      iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
      RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev %x","test_vi_bind_vpss_venc_loop",0x719,iVar30);
      if ((void *)__arg[0x2d4] != (void *)0x0) {
        free((void *)__arg[0x2d4]);
      }
      if ((FILE *)__arg[0x26b] != (FILE *)0x0) {
        fclose((FILE *)__arg[0x26b]);
      }
    }
    break;
  case 4:
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = 0;
      while (iVar30 < __arg[6]) {
        RK_LOG(2,0x17171708,"loopCount:%d","test_vi_bind_vo_loop",0x521,iVar30 + 1);
        usleep(33000);
        iVar30 = iVar30 + 1;
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_vo_loop",0x4fb,__arg[2],__arg[4],
             iVar30);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    iVar30 = RK_MPI_SYS_UnBind(local_af8,&local_ab0);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_vo_loop",0x52e,iVar30);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_vo_loop",0x53d,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0x541;
    pcVar14 = "test_vi_bind_vo_loop";
    goto LAB_00014328;
  case 5:
    iVar30 = 0;
    piVar15 = (int *)&local_ab0;
    do {
      pvVar4 = calloc(0x1130,1);
      uVar28 = CONCAT44(iVar30,iVar30);
      iVar30 = iVar30 + 1;
      *(undefined4 *)((int)pvVar4 + 0xfc) = 4;
      *(undefined8 *)((int)pvVar4 + 0xc0) = uVar27;
      *(undefined4 *)((int)pvVar4 + 0x120) = 1;
      *(undefined4 *)((int)pvVar4 + 0xd4) = 1;
      *(undefined8 *)((int)pvVar4 + 8) = uVar28;
      *(undefined4 *)((int)pvVar4 + 0xf0) = 10;
      *(undefined4 *)((int)pvVar4 + 200) = 0;
      *(undefined4 *)((int)pvVar4 + 0x10) = 2;
      *(undefined4 *)((int)pvVar4 + 0xe0) = 2;
      *piVar15 = (int)pvVar4;
      *(undefined8 *)((int)pvVar4 + 0xe4) = 0xffffffffffffffff;
      iVar11 = FUN_00017504();
      if (iVar11 != 0) {
        RK_LOG(2,0x17171708,"vi [%d, %d] init failed: %x","test_vi_multi_sensor_vi_loop",0x9e5,
               *(undefined4 *)((int)pvVar4 + 8),*(undefined4 *)((int)pvVar4 + 0x10),iVar11);
        goto LAB_0001501c;
      }
      piVar15 = piVar15 + 1;
    } while (iVar30 != 6);
    for (iVar30 = 0; iVar30 < __arg[6]; iVar30 = iVar30 + 1) {
      iVar11 = 0;
      piVar15 = (int *)&local_ab0;
      do {
        iVar10 = *piVar15;
        iVar12 = RK_MPI_VI_GetChnFrame
                           (*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 0x10),
                            iVar10 + 0x338,100);
        uVar5 = (undefined4)((ulonglong)in_stack_fffff4a0 >> 0x20);
        if (iVar12 == 0) {
          uVar28 = TEST_COMM_GetNowUs(2,0x17171708,"dev %d RK_MPI_VI_GetChnFrame timeout %x",
                                      "test_vi_multi_sensor_vi_loop");
          uVar8 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(iVar10 + 0x338));
          RK_LOG(5,0x17171708,"dev %d GetChnFrame Success!","test_vi_multi_sensor_vi_loop",0x9f2,
                 iVar11);
          uVar27 = *(undefined8 *)(iVar10 + 0x378);
          uVar29 = __aeabi_uldivmod(*(undefined4 *)(iVar10 + 0x370),*(undefined4 *)(iVar10 + 0x374),
                                    1000,0);
          RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
                 "test_vi_multi_sensor_vi_loop",0x9f6,uVar8,iVar30,*(undefined4 *)(iVar10 + 0x36c),
                 uVar29,uVar27);
          uVar8 = RK_MPI_VI_QueryChnStatus
                            (*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 0x10),
                             iVar10 + 0x388);
          uVar27 = VectorSub(uVar28,*(undefined8 *)(iVar10 + 0x370),8);
          in_stack_fffff4a0 = CONCAT44(uVar5,*(undefined4 *)(iVar10 + 0x39c));
          uVar28 = CONCAT44(*(undefined4 *)(iVar10 + 0x38c),*(undefined4 *)(iVar10 + 0x398));
          uVar5 = *(undefined4 *)(iVar10 + 0x394);
          uVar24 = *(undefined4 *)(iVar10 + 0x388);
          uVar25 = *(undefined4 *)(iVar10 + 0x3a4);
          uVar26 = *(undefined4 *)(iVar10 + 0x3a0);
          RK_LOG(5,0x17171708,
                 "RK_MPI_VI_QueryChnStatus ret %x, w:%d,h:%d,enable:%d,input lost:%d, output lost:%d, framerate:%d,vbfail:%d delay=%lldus"
                 ,"test_vi_multi_sensor_vi_loop",0xa04,uVar8,uVar26,uVar25,uVar24,uVar5,
                 *(undefined4 *)(iVar10 + 0x398),*(undefined4 *)(iVar10 + 0x38c),
                 *(undefined4 *)(iVar10 + 0x39c));
          iVar12 = RK_MPI_VI_ReleaseChnFrame
                             (*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 0x10),
                              iVar10 + 0x338);
          if (iVar12 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_multi_sensor_vi_loop",
                   0xa09,iVar12,uVar26,uVar25,uVar24,uVar5,uVar28,in_stack_fffff4a0,uVar27);
          }
        }
        else {
          RK_LOG();
        }
        iVar11 = iVar11 + 1;
        usleep(3000);
        piVar15 = piVar15 + 1;
      } while (iVar11 != 6);
      usleep(10000);
    }
LAB_0001501c:
    iVar11 = 0;
    piVar15 = (int *)&local_ab0;
    do {
      pvVar4 = (void *)*piVar15;
      iVar11 = iVar11 + 1;
      uVar5 = RK_MPI_VI_DisableChn
                        (*(undefined4 *)((int)pvVar4 + 0xc),*(undefined4 *)((int)pvVar4 + 0x10));
      RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn pipe=%d, chn:%d, ret:%x","destroy_vi",0x9b6,
             *(undefined4 *)((int)pvVar4 + 0xc),*(undefined4 *)((int)pvVar4 + 0x10),uVar5);
      iVar30 = RK_MPI_VI_DisableDev(*(undefined4 *)((int)pvVar4 + 8));
      RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev pipe=%d ret:%x","destroy_vi",0x9b9,
             *(undefined4 *)((int)pvVar4 + 0xc),iVar30);
      free(pvVar4);
      if (iVar30 != 0) {
        RK_LOG(2,0x17171708,"destroy vi [%d, %d] error %x","test_vi_multi_sensor_vi_loop",0xa1b,
               *(undefined4 *)((int)pvVar4 + 8),*(undefined4 *)((int)pvVar4 + 0x10),iVar30);
        break;
      }
      piVar15 = piVar15 + 1;
    } while (iVar11 != 6);
    break;
  case 6:
    __arg[0x4b] = 0;
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = FUN_00015d10(__arg,1);
      if (iVar30 == 0) {
        uVar5 = init_venc_cfg(__arg,0,__arg[0x436]);
        iVar30 = FUN_00016bc0(uVar5,__arg[0x26a]);
        if (iVar30 != 0) {
          pcVar14 = "test_vi_venc_get_send_loop";
          iVar11 = __arg[0x26a];
          uVar5 = 0xaa5;
          goto LAB_000158b4;
        }
        pvVar4 = malloc(0x88);
        __arg[0x2d4] = (int)pvVar4;
        iVar30 = 0;
        while( true ) {
          if (__arg[6] <= iVar30) break;
          piVar15 = __arg + 0xce;
          RK_MPI_VI_SetChnFreeze(__arg[3],__arg[4],__arg[8]);
          iVar11 = RK_MPI_VI_GetChnFrame(__arg[3],__arg[4],piVar15,100);
          if (iVar11 == 0) {
            uVar27 = TEST_COMM_GetNowUs();
            uVar5 = RK_MPI_MB_Handle2VirAddr(__arg[0xce]);
            uVar28 = *(undefined8 *)(__arg + 0xde);
            uVar29 = __aeabi_uldivmod(__arg[0xdc],__arg[0xdd],1000,0);
            RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d"
                   ,"test_vi_venc_get_send_loop",0xabd,uVar5,iVar30,__arg[0xdb],uVar29,uVar28);
            uVar5 = RK_MPI_VI_QueryChnStatus(__arg[3],__arg[4],__arg + 0xe2);
            uVar27 = VectorSub(uVar27,*(undefined8 *)(__arg + 0xdc),8);
            iVar19 = __arg[0xe6];
            iVar10 = __arg[0xe2];
            RK_LOG(5,0x17171708,
                   "RK_MPI_VI_QueryChnStatus ret %x, w:%d,h:%d,enable:%d,lost:%d,framerate:%d,vbfail:%d delay=%lldus"
                   ,"test_vi_venc_get_send_loop",0xac9,uVar5,__arg[0xe8],__arg[0xe9],iVar10,iVar19,
                   __arg[0xe3],__arg[0xe7],uVar27);
            iVar11 = __arg[0xde];
            iVar20 = __arg[0xdf];
            RK_LOG(5,0x17171708,"RK_MPI_VENC_SendFrame mpi_buf id:%d","test_vi_venc_get_send_loop",
                   0xacd,uVar5,iVar11,iVar20);
            RK_MPI_VENC_SendFrame(__arg[0x26a],piVar15,0xffffffff);
            iVar12 = RK_MPI_VENC_GetStream(__arg[0x26a],__arg + 0x2d4,0xffffffff);
            if (iVar12 == 0) {
              if (__arg[0x207] != 0) {
                pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)__arg[0x2d4]);
                fwrite(pvVar4,1,*(size_t *)(__arg[0x2d4] + 4),(FILE *)__arg[0x26b]);
                fflush((FILE *)__arg[0x26b]);
              }
              uVar27 = TEST_COMM_GetNowUs();
              iVar12 = __arg[0x2d4];
              uVar9 = *(uint *)(iVar12 + 8);
              iVar10 = *(int *)(iVar12 + 4);
              iVar20 = __arg[0x2d9];
              iVar11 = iVar30;
              RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d pts=%lld delay=%lldus\n",
                     "test_vi_venc_get_send_loop",0xadc,0,iVar30,iVar20,iVar10,iVar19,uVar9,
                     *(int *)(iVar12 + 0xc),(uint)uVar27 - uVar9,
                     (int)((ulonglong)uVar27 >> 0x20) -
                     (*(int *)(iVar12 + 0xc) + (uint)((uint)uVar27 < uVar9)));
              iVar12 = RK_MPI_VENC_ReleaseStream(__arg[0x26a],__arg + 0x2d4);
              if (iVar12 != 0) {
                RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x","test_vi_venc_get_send_loop"
                       ,0xadf,iVar12,iVar11,iVar20,iVar10);
              }
            }
            iVar12 = RK_MPI_VI_ReleaseChnFrame(__arg[3],__arg[4],piVar15);
            if (iVar12 != 0) {
              RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_venc_get_send_loop",
                     0xae6,iVar12,iVar11,iVar20,iVar10);
            }
            iVar30 = iVar30 + 1;
          }
          else {
            RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","test_vi_venc_get_send_loop",
                   0xaea,iVar11);
          }
        }
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_venc_get_send_loop",0xa98,__arg[2],
             __arg[4],iVar30);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_venc_get_send_loop",0xaf3,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0xaf7;
    pcVar14 = "test_vi_venc_get_send_loop";
    goto LAB_00014328;
  case 7:
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = 0;
      while( true ) {
        if (__arg[6] <= iVar30) break;
        RK_MPI_VI_SetChnFreeze(__arg[3],__arg[4],__arg[8]);
        iVar11 = RK_MPI_VI_GetChnFrame(__arg[3],__arg[4],__arg + 0xce,100);
        if (iVar11 == 0) {
          uVar27 = TEST_COMM_GetNowUs();
          uVar5 = RK_MPI_MB_Handle2VirAddr(__arg[0xce]);
          uVar28 = *(undefined8 *)(__arg + 0xde);
          uVar29 = __aeabi_uldivmod(__arg[0xdc],__arg[0xdd],1000,0);
          iVar20 = iVar30 + 1;
          RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
                 "test_vi_vo_get_send_loop",0xa51,uVar5,iVar30,__arg[0xdb],uVar29,uVar28);
          uVar5 = RK_MPI_VI_QueryChnStatus(__arg[3],__arg[4],__arg + 0xe2);
          iVar10 = __arg[0xe6];
          uVar27 = VectorSub(uVar27,*(undefined8 *)(__arg + 0xdc),8);
          iVar23 = __arg[0xe2];
          uVar28 = CONCAT44(__arg[0xe7],__arg[0xe3]);
          RK_LOG(5,0x17171708,
                 "RK_MPI_VI_QueryChnStatus ret %x, w:%d,h:%d,enable:%d,lost:%d,framerate:%d,vbfail:%d delay=%lldus"
                 ,"test_vi_vo_get_send_loop",0xa5d,uVar5,__arg[0xe8],__arg[0xe9],iVar23,iVar10,
                 __arg[0xe3],__arg[0xe7],uVar27);
          iVar11 = __arg[0xde];
          iVar19 = __arg[0xdf];
          RK_LOG(5,0x17171708,"RK_MPI_VO_SendFrame mpi_buf id:%d","test_vi_vo_get_send_loop",0xa60,
                 uVar5,iVar11,iVar19);
          iVar12 = RK_MPI_VI_ReleaseChnFrame(__arg[3],__arg[4],__arg + 0xce);
          iVar30 = iVar20;
          if (iVar12 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_vo_get_send_loop",0xa67
                   ,iVar12,iVar11,iVar19,iVar23,iVar10,uVar28,uVar27);
          }
        }
        else {
          RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","test_vi_vo_get_send_loop",0xa6b,
                 iVar11);
        }
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_vo_get_send_loop",0xa2e,__arg[2],
             __arg[4],iVar30);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_vo_get_send_loop",0xa78,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0xa7c;
    pcVar14 = "test_vi_vo_get_send_loop";
    goto LAB_00014328;
  case 8:
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = 0;
      while (iVar30 < __arg[6]) {
        RK_LOG(2,0x17171708,"loopCount:%d","test_vi_bind_vpss_vo_loop",0x59e,iVar30 + 1);
        usleep(33000);
        iVar30 = iVar30 + 1;
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_vpss_vo_loop",0x54f,__arg[2],
             __arg[4],iVar30);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    iVar30 = RK_MPI_SYS_UnBind(&local_ab0,local_af8);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_vpss_vo_loop",0x5ab,iVar30);
    }
    local_aa8 = (void *)__arg[4];
    local_af8[1] = 0;
    local_af8[2] = 0;
    local_ab0 = CONCAT44(__arg[2],8);
    local_af8[0] = 6;
    iVar30 = RK_MPI_SYS_UnBind(&local_ab0,local_af8);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_vpss_vo_loop",0x5b7,iVar30);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_vpss_vo_loop",0x5d0,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0x5d4;
    pcVar14 = "test_vi_bind_vpss_vo_loop";
    goto LAB_00014328;
  case 9:
    memset(&local_ab0,0,0x140);
    __arg[0x4b] = 0;
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      for (iVar30 = 0; iVar30 < __arg[6]; iVar30 = iVar30 + 1) {
        RK_LOG(2,0x17171708,"%d RK_MPI_VPSS_GetChnFrame failed %d with 0x%x",
               "test_vi_bind_vpss_send_vo_loop",0x630,iVar30,0,0xffffffff);
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_vpss_send_vo_loop",0x5e7,__arg[2],
             __arg[4],iVar30);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    iVar30 = RK_MPI_SYS_UnBind(local_b18,local_af8);
    if (iVar30 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind failed with 0x%x","test_vi_bind_vpss_send_vo_loop",
             0x65a,iVar30);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(5,0x17171708,"RK_MPI_VI_DisableChn return with 0x%x","test_vi_bind_vpss_send_vo_loop",
           0x671,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    RK_LOG(5,0x17171708,"RK_MPI_VI_DisableDev return with 0x%x","test_vi_bind_vpss_send_vo_loop",
           0x674,iVar30);
    break;
  case 10:
    piVar13 = (int *)__arg[0x445];
    __arg[0x4b] = 1;
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      uVar9 = 0xffffffff;
      RK_MPI_VI_SetChnFreeze(__arg[3],__arg[4],__arg[8]);
      if (__arg[6] == 0) {
        __arg[6] = (int)piVar13 * 0xc;
      }
      *(undefined8 *)(__arg + 0x49) = *(undefined8 *)(__arg + 0x443);
      piVar17 = (int *)0x0;
      while ((int)piVar17 < __arg[6]) {
        iVar30 = RK_MPI_VI_GetChnFrame(__arg[3],__arg[4],__arg + 0xce,100);
        if (iVar30 == 0) {
          TEST_COMM_GetNowUs();
          uVar5 = RK_MPI_MB_Handle2VirAddr(__arg[0xce]);
          uVar27 = *(undefined8 *)(__arg + 0xde);
          uVar28 = __aeabi_uldivmod(__arg[0xdc],__arg[0xdd],1000,0);
          iVar30 = __arg[0xdb];
          piVar22 = piVar17;
          RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
                 "test_vi_change_resolution",0xd37,uVar5,piVar17,iVar30,uVar28,uVar27);
          uVar6 = RK_MPI_VI_QueryChnStatus(__arg[3],__arg[4],__arg + 0xe2);
          uVar7 = RK_MPI_VI_ReleaseChnFrame(__arg[3],__arg[4],__arg + 0xce);
          if ((uVar6 | uVar7) != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_change_resolution",
                   0xd3d,uVar6 | uVar7,piVar22,iVar30,uVar28,uVar27);
          }
          piVar17 = (int *)((int)piVar17 + 1);
          __aeabi_uidivmod(piVar17,piVar13);
          if (extraout_r1 == 0) {
            while( true ) {
              if (10 < uVar9) {
                uVar9 = 0;
              }
              if (piVar17 == (int *)__arg[6]) {
                RK_LOG(5,0x17171708,"res index: %d, write %s done","test_vi_change_resolution",0xd56
                       ,uVar9 - 1,*(undefined4 *)(&UNK_0001c098 + (uVar9 - 1) * 0xc));
                goto LAB_00014c70;
              }
              if (piVar13 == piVar17) {
                piVar22 = piVar15;
                RK_LOG(5,0x17171708,"write %s/%s done","test_vi_change_resolution",0xd4d,piVar18,
                       piVar15);
              }
              else if (uVar9 == 0) {
                RK_LOG(5,0x17171708,"res index: 0, write %s done","test_vi_change_resolution",0xd4b,
                       "1920x1080",piVar22);
              }
              else {
                piVar22 = *(int **)(&UNK_0001c098 + (uVar9 - 1) * 0xc);
                RK_LOG(5,0x17171708,"res index: %d, write %s done","test_vi_change_resolution",0xd49
                       ,uVar9 - 1,piVar22);
              }
              uVar6 = (&DAT_0001c090)[uVar9 * 3];
              if ((uVar6 <= (uint)__arg[0x443]) &&
                 (uVar7 = (&DAT_0001c094)[uVar9 * 3], uVar7 <= (uint)__arg[0x444])) break;
              uVar9 = uVar9 + 1;
            }
            __arg[0x30] = uVar6;
            __arg[0x31] = uVar7;
            iVar30 = RK_MPI_VI_SetChnAttr(__arg[3],__arg[4],__arg + 0x30);
            if (iVar30 == 0) {
              uVar31 = uVar7;
              RK_LOG(5,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d success","test_vi_change_resolution"
                     ,0xd63,uVar6,uVar7);
              uVar5 = ram0x0001d378;
              *piVar18 = s__data_0001d374._0_4_;
              *(char *)(__arg + 0x4d) = (char)uVar5;
              snprintf((char *)piVar15,0x100,"resolution_%d_%d_%d.bin",__arg[2],uVar6,uVar7);
              if (__arg[0x4b] != 0) {
                uVar5 = RK_MPI_VI_ChnSaveFile(__arg[3],__arg[4],__arg + 0x4b);
                RK_LOG(5,0x17171708,"RK_MPI_VI_ChnSaveFile %x","test_vi_change_resolution",0xd6b,
                       uVar5,uVar31);
              }
            }
            else {
              RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d fail, ret: %x",
                     "test_vi_change_resolution",0xd5f,uVar6,uVar7,iVar30);
            }
            if (piVar13 <= piVar17) {
              uVar9 = uVar9 + 1;
            }
          }
        }
        else {
          RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","test_vi_change_resolution",0xd73,
                 iVar30);
        }
        usleep(1000);
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_change_resolution",0xd23,__arg[2],
             __arg[4],iVar30);
    }
LAB_00014c70:
    if (__arg[9] != 0) {
      FUN_00017344(__arg);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_change_resolution",0xd87,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0xd8b;
    pcVar14 = "test_vi_change_resolution";
    goto LAB_00014328;
  case 0xb:
    iVar30 = FUN_00018458(__arg);
    break;
  case 0xc:
    iVar30 = FUN_00017798(__arg);
    break;
  case 0xd:
    iVar30 = open64("/proc/rkisp-vir0",0);
    if (-1 < iVar30) {
      pcVar14 = (char *)&local_ab0;
      sVar3 = read(iVar30,pcVar14,0x3ff);
      close(iVar30);
      if (-1 < sVar3) {
        *(undefined1 *)((int)&local_ab0 + sVar3) = 0;
        while (sVar3 != 0) {
          iVar30 = sscanf(pcVar14,"Input      rkcif-mipi-lvds %s %s %s",local_b18,local_af8,
                          local_b20);
          pcVar16 = pcVar14;
          if ((0 < iVar30) && (pcVar14 = strstr((char *)local_af8,"Size"), pcVar14 != (char *)0x0))
          {
            sscanf((char *)local_af8,"Size:%dx%d@%dfps",&local_b2c,&local_b28,&local_b24);
            DAT_0002f21c = local_b2c;
            DAT_0002f224 = local_b24;
            DAT_0002f220 = local_b28;
            if (local_b2c == 0xb40) {
              if (local_b28 == 0x650) {
                DAT_0002f228 = 4;
              }
            }
            else if (local_b2c == 0xa00) {
              if (local_b28 == 0x5a0) {
                DAT_0002f228 = 3;
              }
            }
            else if (local_b2c == 0x900) {
              if (local_b28 == 0x510) {
                DAT_0002f228 = 2;
              }
            }
            else if (local_b2c == 0x780) {
              if (local_b28 == 0x438) {
                DAT_0002f228 = 1;
              }
            }
            else if (local_b2c == 0x500) {
              if (local_b28 == 0x2d0) {
                DAT_0002f228 = 0;
              }
            }
            else if (local_b2c == 0xc44 && local_b28 == 0x870) {
              DAT_0002f228 = 5;
            }
            break;
          }
          while( true ) {
            pcVar14 = pcVar16 + 1;
            sVar3 = sVar3 + -1;
            if (*pcVar16 == '\n') break;
            pcVar16 = pcVar14;
            if (sVar3 == 0) goto LAB_00013b7c;
          }
        }
      }
    }
LAB_00013b7c:
    iVar30 = 0;
    piVar15 = (int *)&local_ab0;
    do {
      pvVar4 = calloc(0x1130,1);
      uVar5 = DAT_0002f228;
      iVar11 = __arg[6];
      *piVar15 = (int)pvVar4;
      *(int *)((int)pvVar4 + 0x10) = iVar30;
      *(undefined8 *)((int)pvVar4 + 8) = 0;
      *(int *)((int)pvVar4 + 0x18) = iVar11;
      iVar11 = DAT_0002f220;
      iVar12 = DAT_0002f21c;
      switch(uVar5) {
      case 1:
        if (iVar30 != 0) {
          iVar11 = 0x2d0;
          iVar12 = 0x500;
        }
        break;
      case 2:
      case 3:
        if (iVar30 != 0) {
          if (iVar30 == 1) {
            iVar11 = 0x438;
            iVar12 = 0x780;
          }
          else {
            iVar11 = 0x2d0;
            iVar12 = 0x500;
          }
        }
        break;
      case 4:
        if (iVar30 != 0) {
          if (iVar30 == 1) {
            iVar11 = 0x5a0;
            iVar12 = 0xa00;
          }
          else {
            iVar11 = 0x438;
            iVar12 = 0x780;
          }
        }
        break;
      case 5:
      case 6:
        if (iVar30 != 0) {
          iVar11 = 0x438;
          iVar12 = 0x780;
        }
      }
      RK_LOG(5,0x17171708,"+++VI_CHN%d: reso: %u x %u +++","test_vi_one_sensor_multi_chn_loop",0xbbd
             ,iVar30,iVar12,iVar11);
      *(undefined4 *)((int)pvVar4 + 0x120) = 1;
      uVar27 = *(undefined8 *)(__arg + 0x39);
      *(undefined4 *)((int)pvVar4 + 0xf0) = 3;
      *(undefined4 *)((int)pvVar4 + 0xfc) = 4;
      *(ulonglong *)((int)pvVar4 + 0xc0) = CONCAT44(iVar11,iVar12);
      *(undefined4 *)((int)pvVar4 + 0xe0) = 0;
      *(undefined4 *)((int)pvVar4 + 200) = 0;
      *(undefined4 *)((int)pvVar4 + 0xd4) = 0;
      *(undefined8 *)((int)pvVar4 + 0xe4) = uVar27;
      iVar11 = FUN_00017504(pvVar4);
      if (iVar11 != 0) {
        RK_LOG(2,0x17171708,"vi [%d, %d] init failed: %x","test_vi_one_sensor_multi_chn_loop",0xbce,
               *(undefined4 *)((int)pvVar4 + 8),*(undefined4 *)((int)pvVar4 + 0x10),iVar11);
        goto LAB_000149ac;
      }
      iVar30 = iVar30 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar30 != 3);
    pthread_create(local_b20,(pthread_attr_t *)0x0,FUN_00015e88,(void *)local_ab0);
    pthread_create(local_b18,(pthread_attr_t *)0x0,FUN_00015e88,local_ab0._4_4_);
    pthread_create(local_af8,(pthread_attr_t *)0x0,FUN_00015e88,local_aa8);
    pthread_join(local_b20[0],(void **)0x0);
    pthread_join(local_b18[0],(void **)0x0);
    pthread_join(local_af8[0],(void **)0x0);
LAB_000149ac:
    iVar30 = 0;
    piVar15 = (int *)&local_ab0;
    do {
      iVar10 = *piVar15;
      iVar30 = iVar30 + 1;
      iVar12 = RK_MPI_VI_DisableChn(*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 0x10));
      uVar5 = *(undefined4 *)(iVar10 + 0x10);
      iVar11 = iVar12;
      RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn pipe=%d, chn:%d, ret:%x",
             "test_vi_one_sensor_multi_chn_loop",0xbe0,*(undefined4 *)(iVar10 + 0xc),uVar5,iVar12);
      if (iVar12 != 0) {
        uVar5 = *(undefined4 *)(iVar10 + 0x10);
        RK_LOG(2,0x17171708,"disable vi dev:%d, chn %d error %x","test_vi_one_sensor_multi_chn_loop"
               ,0xbe3,*(undefined4 *)(iVar10 + 8),uVar5,iVar12);
        iVar11 = iVar12;
      }
      piVar15 = piVar15 + 1;
    } while (iVar30 != 3);
    iVar30 = RK_MPI_VI_DisableDev(0);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev dev 0: ret:%x","test_vi_one_sensor_multi_chn_loop",
           0xbe8,iVar30,uVar5,iVar11);
    iVar11 = 3;
    piVar15 = (int *)&local_ab0;
    do {
      if ((void *)*piVar15 != (void *)0x0) {
        free((void *)*piVar15);
        *piVar15 = 0;
      }
      iVar11 = iVar11 + -1;
      piVar15 = piVar15 + 1;
    } while (iVar11 != 0);
    break;
  case 0xe:
    iVar30 = FUN_00016178(__arg);
    if (iVar30 == 0) {
      iVar30 = 0;
      while (iVar30 < __arg[6]) {
        iVar11 = RK_MPI_VI_GetChnFrame(__arg[3],__arg[4],__arg + 0xce,100);
        if (iVar11 == 0) {
          uVar27 = TEST_COMM_GetNowUs();
          uVar5 = RK_MPI_MB_Handle2VirAddr(__arg[0xce]);
          uVar28 = *(undefined8 *)(__arg + 0xde);
          uVar29 = __aeabi_uldivmod(__arg[0xdc],__arg[0xdd],1000,0);
          RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
                 "test_vi_eptz_vi_only",0xda3,uVar5,iVar30,__arg[0xdb],uVar29,uVar28);
          iVar11 = RK_MPI_VI_QueryChnStatus(__arg[3],__arg[4],__arg + 0xe2);
          iVar10 = __arg[0xe4];
          uVar27 = VectorSub(uVar27,*(undefined8 *)(__arg + 0xdc),8);
          iVar20 = __arg[0xe9];
          iVar19 = __arg[0xe8];
          iVar23 = __arg[0xe2];
          RK_LOG(5,0x17171708,
                 "RK_MPI_VI_QueryChnStatus ret %x, w:%d,h:%d,enable:%d,current frame id:%d,input lost:%d,output lost:%d,framerate:%d,vbfail:%d delay=%lldus"
                 ,"test_vi_eptz_vi_only",0xdb2,iVar11,iVar19,iVar20,iVar23,iVar10,__arg[0xe5],
                 __arg[0xe6],__arg[0xe3],__arg[0xe7],uVar27);
          iVar12 = RK_MPI_VI_ReleaseChnFrame(__arg[3],__arg[4],__arg + 0xce);
          if (iVar12 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","test_vi_eptz_vi_only",0xdb6,
                   iVar12,iVar19,iVar20,iVar23,iVar10);
            iVar11 = iVar12;
          }
          iVar30 = iVar30 + 1;
          uStack_aa4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_aa0 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_a9c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_aa8 = (void *)0x0;
          local_ab0 = 0x100000001;
          if (iVar30 == 0x1e) {
            iVar21 = 0x2d0;
            iVar12 = 0x500;
          }
          else if (iVar30 < 0x1f) {
            if (iVar30 != 10) goto LAB_00013d6c;
            iVar21 = 0x438;
            iVar12 = 0x780;
          }
          else if (iVar30 == 0x32) {
            iVar21 = 0x240;
            iVar12 = 0x2d0;
          }
          else {
            if (iVar30 != 0x46) goto LAB_00013d6c;
            iVar21 = 0x1e0;
            iVar12 = 0x280;
          }
          local_aa0 = iVar12;
          local_a9c = iVar21;
          if (__arg[0x11] != 0) {
            RK_LOG(5,0x17171708,"<<< change eptz and set start >>>","test_vi_eptz_vi_only",0xdde,
                   iVar11,iVar19,iVar20,iVar23,iVar10);
            RK_LOG(5,0x17171708,"------ Crop to: w x h (%d x %d) ------","test_vi_eptz_vi_only",
                   0xddf,iVar12,iVar21);
            RK_MPI_VI_SetEptz(__arg[3],__arg[4],(void *)local_ab0,local_ab0._4_4_,local_aa8,
                              uStack_aa4,local_aa0,local_a9c);
            RK_LOG(5,0x17171708,"<<< change eptz and set end >>>","test_vi_eptz_vi_only",0xde1);
          }
        }
        else {
          RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","test_vi_eptz_vi_only",0xde8,iVar11
                );
        }
LAB_00013d6c:
        usleep(10000);
      }
      if (__arg[0x11] != 0) {
        RK_MPI_VI_GetEptz(__arg[3],__arg[4],&local_ab0);
        if (local_aa0 == *__arg) {
          iVar30 = __arg[1];
          if (local_a9c == iVar30) goto LAB_00014f14;
        }
        else {
          iVar30 = __arg[1];
        }
        local_aa0 = *__arg;
        local_a9c = iVar30;
        RK_LOG(5,0x17171708,"<<< change eptz and set start >>>","test_vi_eptz_vi_only",0xdf9);
        RK_LOG(5,0x17171708,"------ Crop to: w x h (%d x %d) ------","test_vi_eptz_vi_only",0xdfa,
               *__arg,__arg[1]);
        RK_MPI_VI_SetEptz(__arg[3],__arg[4],(void *)local_ab0,local_ab0._4_4_,local_aa8,uStack_aa4,
                          local_aa0,local_a9c);
        RK_LOG(5,0x17171708,"<<< change eptz and set end >>>","test_vi_eptz_vi_only",0xdfc);
      }
    }
    else {
      RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_eptz_vi_only",0xd97,__arg[2],__arg[4],
             iVar30);
    }
LAB_00014f14:
    if (__arg[9] != 0) {
      FUN_00017344(__arg);
    }
    if (__arg[0xf] != 0) {
      RK_MPI_VI_DetachMbPool(__arg[3],__arg[4]);
      RK_MPI_MB_DestroyPool(__arg[0x10]);
    }
    uVar5 = RK_MPI_VI_DisableChn(__arg[3],__arg[4]);
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_eptz_vi_only",0xe0e,uVar5);
    iVar30 = RK_MPI_VI_DisableDev(__arg[2]);
    uVar5 = 0xe12;
    pcVar14 = "test_vi_eptz_vi_only";
LAB_00014328:
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev %x",pcVar14,uVar5,iVar30);
    break;
  default:
    RK_LOG(2,0x17171708,"no support such test mode:%d",&DAT_0001c148,0xf57,__arg[0xea]);
    iVar30 = -1;
  }
LAB_000136b4:
  RK_LOG(2,0x17171708,"test running exit:%d",&DAT_0001c148,0xf5b,iVar30);
  RK_MPI_SYS_Exit();
LAB_0001366c:
  free(__arg);
  return 0;
}



/* ===== _start @ 00015be4 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002f090)
            (DAT_00015c18,param_2,&stack0x00000004,DAT_00015c1c,DAT_00015c14,param_1);
  return;
}



/* ===== FUN_00015c20 @ 00015c20 size=32 ===== */

void FUN_00015c20(void)

{
  if (DAT_00015c44 == DAT_00015c40) {
    return;
  }
  if (DAT_00015c48 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00015c48)();
  return;
}



/* ===== _FINI_0 @ 00015c84 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00015cc0;
  if (*DAT_00015cc0 != '\0') {
    return;
  }
  FUN_00015c20();
  if (DAT_00015cc4 != 0) {
    __deregister_frame_info(DAT_00015cc8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00015ccc size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00015cf0 != 0) {
    __register_frame_info(DAT_00015cf8,DAT_00015cf4);
  }
  if ((DAT_00015c7c - DAT_00015c78 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00015c80 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00015c80)();
  return;
}



/* ===== FUN_00015d10 @ 00015d10 size=376 ===== */

undefined4 FUN_00015d10(int param_1,int param_2)

{
  undefined4 uVar1;
  FILE *pFVar2;
  char acStack_118 [256];
  
  if (*(int *)(param_1 + 0x81c) == 0) {
LAB_00015d2c:
    if ((param_2 != 1) && (*(int *)(param_1 + 0x9b4) != 0)) {
      memset(acStack_118,0,0x100);
      *(undefined4 *)(param_1 + 0xa40) = 0x61746164;
      snprintf((char *)(param_1 + 0xac0),0x80,"venc_%d.bin",*(int *)(param_1 + 0x14) + 1);
      snprintf(acStack_118,0x100,"/%s/%s",param_1 + 0xa40,(char *)(param_1 + 0xac0));
      pFVar2 = fopen64(acStack_118,"wb");
      *(FILE **)(param_1 + 0xb44) = pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        uVar1 = 1;
        goto LAB_00015dcc;
      }
    }
    uVar1 = 0;
  }
  else {
    memset(acStack_118,0,0x100);
    *(undefined4 *)(param_1 + 0x8a8) = 0x61746164;
    snprintf((char *)(param_1 + 0x928),0x80,"venc_%d.bin",*(undefined4 *)(param_1 + 0x14));
    snprintf(acStack_118,0x100,"/%s/%s",param_1 + 0x8a8,(char *)(param_1 + 0x928));
    pFVar2 = fopen64(acStack_118,"wb");
    *(FILE **)(param_1 + 0x9ac) = pFVar2;
    uVar1 = 0;
    if (pFVar2 != (FILE *)0x0) goto LAB_00015d2c;
LAB_00015dcc:
    RK_LOG(2,0x17171708,"chn %d can\'t open file %s in get picture thread!\n","open_venc_file",0x227
           ,uVar1,acStack_118);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00015e88 @ 00015e88 size=320 ===== */

undefined4 FUN_00015e88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar3) {
      return 0;
    }
    while( true ) {
      iVar1 = RK_MPI_VI_GetChnFrame(uVar5,uVar4,param_1 + 0x338,100);
      if (iVar1 != 0) break;
      TEST_COMM_GetNowUs();
      uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x338));
      uVar6 = *(undefined8 *)(param_1 + 0x378);
      uVar7 = __aeabi_uldivmod(*(undefined4 *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x374),
                               1000,0);
      RK_LOG(5,0x17171708,"RK_MPI_VI_GetChnFrame ok:data %p loop:%d seq:%d pts:%lld ms len=%d",
             "GetViBuffer",0xb98,uVar2,iVar3,*(undefined4 *)(param_1 + 0x36c),uVar7,uVar6);
      iVar1 = RK_MPI_VI_ReleaseChnFrame(uVar5,uVar4,param_1 + 0x338);
      if (iVar1 != 0) {
        printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","GetViBuffer",
               0xb9a,"s32Ret==RK_SUCCESS");
                    /* WARNING: Subroutine does not return */
        _exit(-1);
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0x18) <= iVar3) {
        return 0;
      }
    }
    RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","GetViBuffer",0xb9d,iVar1);
  } while( true );
}



/* ===== FUN_00015fc8 @ 00015fc8 size=428 ===== */

undefined4 FUN_00015fc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  pthread_t pVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_70 [13];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if (*(int *)(param_1 + 0x1118) == 0) {
    if (DAT_0002f22c != 0) {
      return 0;
    }
    do {
      usleep(1000);
    } while (DAT_0002f22c == 0);
    if (*(int *)(param_1 + 0x18) < 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1118) == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x18) < 1) {
    return 0;
  }
  iVar5 = 0;
  do {
    iVar3 = RK_MPI_VI_GetChnFrame
                      (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),local_70,100);
    if (iVar3 == 0) {
      TEST_COMM_GetNowUs(2,0x17171708,"RK_MPI_VI_GetChnFrame timeout %x","SecondGetFrame");
      uVar1 = RK_MPI_MB_Handle2VirAddr(local_70[0]);
      uVar8 = local_30;
      uVar6 = __aeabi_uldivmod(local_38,uStack_34,1000,0);
      iVar3 = iVar5;
      uVar7 = local_3c;
      RK_LOG(5,0x17171708,
             "RK_MPI_VI_GetChnFrame ok:data %p >>> loop:%d <<< \tseq:%d pts:%lld ms len=%d",
             "SecondGetFrame",0x8f1,uVar1,iVar5,local_3c,uVar6,uVar8);
      iVar2 = RK_MPI_VI_ReleaseChnFrame
                        (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),local_70);
      if (iVar2 == 0) {
        pVar4 = pthread_self();
        RK_LOG(5,0x17171708,"RK_MPI_VI_ReleaseChnFrame OK pid = %lu","SecondGetFrame",0x8f8,pVar4,
               iVar3,uVar7,uVar6,uVar8);
      }
      else {
        RK_LOG(2,0x17171708,"RK_MPI_VI_ReleaseChnFrame fail %x","SecondGetFrame",0x8f6,iVar2,iVar3,
               uVar7,uVar6,uVar8);
      }
      iVar5 = iVar5 + 1;
    }
    else {
      RK_LOG();
    }
    usleep(10000);
  } while ((iVar5 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x1118) != 0));
  return 0;
}



/* ===== FUN_00016178 @ 00016178 size=2480 ===== */

int FUN_00016178(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  ulonglong local_ac;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  iVar1 = RK_MPI_VI_QueryDevStatus(param_1[2],param_1 + 0x15);
  if ((iVar1 == 0) && (param_1[0x17] == 0)) {
    RK_LOG(2,0x17171708,"sensor probe fail","test_vi_init",0x42c);
    return -1;
  }
  iVar1 = RK_MPI_VI_GetDevAttr(param_1[2],param_1 + 0x18);
  if (iVar1 == -0x5ff77ff9) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[2],param_1 + 0x18);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevAttr %x","test_vi_init",0x437,iVar1);
      return iVar1;
    }
  }
  else {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevAttr already","test_vi_init",0x43b);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[2]);
  if (iVar1 == 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VI_EnableDev already","test_vi_init",0x44f);
  }
  else {
    iVar1 = RK_MPI_VI_EnableDev(param_1[2]);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_EnableDev %x","test_vi_init",0x443,iVar1);
      return iVar1;
    }
    param_1[0x1f] = param_1[3];
    param_1[0x20] = param_1[3];
    iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[2],param_1 + 0x1f);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevBindPipe %x","test_vi_init",1099,iVar1);
      return iVar1;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_1;
  param_1[0x38] = 1;
  param_1[0x35] = param_1[0x14];
  param_1[0x36] = param_1[0xd];
  param_1[0x37] = param_1[0xe];
  uVar12 = VectorMax(*(undefined8 *)(param_1 + 0x443),*(undefined8 *)param_1,4,1);
  *(undefined8 *)(param_1 + 0x49) = uVar12;
  iVar1 = RK_MPI_VI_SetChnAttr(param_1[3],param_1[4],param_1 + 0x30);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %x","test_vi_init",0x45e,iVar1);
    return iVar1;
  }
  if (param_1[0xf] == 0) {
LAB_00016324:
    local_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    if (param_1[0xec] != 0) {
      uVar2 = param_1[0xed];
      if ((uVar2 < 0x80) || (param_1[1] < uVar2)) {
        RK_LOG(2,0x17171708,"wrap mode buffer line must between [128, H]","test_vi_init",0x475);
        return 0;
      }
      uVar3 = *param_1;
      if (*param_1 < param_1[0x443]) {
        uVar3 = param_1[0x443];
      }
      local_d8 = uVar3 * uVar2 * 3 >> 1;
      local_e0 = param_1[0xec];
      uStack_dc = uVar2;
      RK_LOG(5,0x17171708,"set channel wrap line: %d, wrapBuffSize = %d","test_vi_init",0x47c,uVar2,
             local_d8);
      RK_MPI_VI_SetChnWrapBufAttr(param_1[3],param_1[4],&local_e0);
    }
    param_1[0xef] = param_1[0xc];
    RK_LOG(5,0x17171708,"RGN Type = %d","test_vi_init",0x481,param_1[0xc]);
    param_1[0x1f5] = 1;
    if (param_1[9] != 0) {
      local_d0 = param_1[2];
      local_d4 = 8;
      if (param_1[0x13] == 0) {
        local_cc = param_1[4];
      }
      else {
        local_cc = 6;
      }
      uVar2 = param_1[0xc];
      if (0 < (int)param_1[0xb]) {
        uVar3 = 0x8000000080;
        uVar7 = 0x8000000084;
        uVar8 = 0;
        do {
          param_1[0xf4] = 0;
          param_1[0xf1] = uVar3;
          param_1[0xf2] = uVar7;
          iVar1 = RK_MPI_RGN_Create(uVar8,param_1 + 0xef);
          if (iVar1 != 0) {
            uVar3 = uVar8;
            RK_LOG(2,0x17171708,"RK_MPI_RGN_Create (%d) failed with %#x!","create_rgn",0x353,uVar8,
                   iVar1);
            RK_MPI_RGN_Destroy(uVar8);
            goto LAB_000164e0;
          }
          uVar6 = uVar8 + 1;
          uVar13 = uVar8;
          RK_LOG(4,0x17171708,"The handle: %d, create success!","create_rgn",0x357,uVar8);
          uVar5 = param_1[0xb];
          uVar8 = uVar6;
        } while ((int)uVar6 < (int)uVar5);
        if (0 < (int)uVar5) {
          uVar4 = 0;
          uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uVar7 = 0;
          do {
            local_78 = CONCAT44(uVar9,uVar4);
            local_80 = 1;
            uVar8 = 0;
            local_7c = uVar2;
            local_70 = uVar10;
            uStack_6c = uVar11;
            local_68 = uVar4;
            uStack_64 = uVar9;
            local_60 = uVar4;
            uStack_5c = uVar9;
            local_58 = uVar4;
            uStack_54 = uVar9;
            local_50 = uVar4;
            uStack_4c = uVar9;
            local_48 = uVar4;
            uStack_44 = uVar9;
            local_40 = uVar4;
            uStack_3c = uVar9;
            if (uVar2 == 2) {
              RK_LOG(5,0x17171708,"cover rgn attach","create_rgn",0x368,uVar13);
              local_c8 = 1;
              iVar1 = uVar7 << 7;
              local_b8 = 0x8000000080;
              local_c0 = CONCAT44(iVar1,iVar1);
              local_b0 = 0xffffff;
              local_ac = (ulonglong)uVar7;
              local_c4 = uVar2;
              uVar3 = RK_MPI_RGN_AttachToChn(uVar7,&local_d4,&local_c8);
              if (uVar3 == 0) {
                uVar3 = RK_MPI_RGN_GetDisplayAttr(uVar7,&local_d4,&local_c8);
                if (uVar3 == 0) {
                  if (param_1[0xb] == 1) {
                    local_b8 = *(undefined8 *)param_1;
                    local_c0 = 0;
                    local_ac = 0;
                  }
                  else {
                    local_c0 = CONCAT44(iVar1,iVar1);
                    local_ac = (ulonglong)uVar7;
                    local_b8 = 0x8000000080;
                  }
                  __aeabi_idivmod(uVar7,3);
                  local_b0 = 0xff0000 >> ((extraout_r1 & 0x1f) << 3);
                  uVar3 = RK_MPI_RGN_SetDisplayAttr(uVar7,&local_d4,&local_c8);
                  if (uVar3 != 0) {
                    uVar4 = 0x397;
                    goto LAB_00016a20;
                  }
                  uVar13 = uVar7;
                  RK_LOG(4,0x17171708,"the cover region %d to <%d, %d, %d, %d>, color<0x%x>",
                         "create_rgn",0x3a0,uVar7,(undefined4)local_c0,local_c0._4_4_,
                         (undefined4)local_b8,local_b8._4_4_,local_b0);
                  uVar5 = param_1[0xb];
                  goto LAB_000167ec;
                }
                uVar4 = 0x37a;
              }
              else {
                uVar4 = 0x375;
              }
              RK_LOG(2,0x17171708,"failed with %#x!","create_rgn",uVar4,uVar3);
              goto LAB_00016a4c;
            }
            if (uVar2 == 3) {
              RK_LOG(5,0x17171708,"mosaic rgn attach","create_rgn",0x3a4,uVar13);
              local_c8 = 1;
              iVar1 = uVar7 << 7;
              local_ac = CONCAT44(local_ac._4_4_,uVar7);
              local_c0 = CONCAT44(iVar1,iVar1);
              local_b8 = 0x8000000080;
              local_b0 = 0;
              local_c4 = uVar2;
              uVar3 = RK_MPI_RGN_AttachToChn(uVar7,&local_d4,&local_c8);
              if (uVar3 == 0) {
                uVar3 = RK_MPI_RGN_GetDisplayAttr(uVar7,&local_d4,&local_c8);
                if (uVar3 == 0) {
                  local_c0 = CONCAT44(iVar1,iVar1);
                  local_ac = CONCAT44(local_ac._4_4_,uVar7);
                  local_b8 = 0x8000000080;
                  local_b0 = uVar3;
                  uVar3 = RK_MPI_RGN_SetDisplayAttr(uVar7,&local_d4,&local_c8);
                  if (uVar3 == 0) {
                    uVar13 = uVar7;
                    RK_LOG(4,0x17171708,"the mosaic region:%d to <%d, %d, %d, %d>","create_rgn",
                           0x3cb,uVar7,(undefined4)local_c0,local_c0._4_4_,(undefined4)local_b8,
                           local_b8._4_4_);
                    uVar5 = param_1[0xb];
                    goto LAB_000167ec;
                  }
                  uVar4 = 0x3c3;
                }
                else {
                  uVar4 = 0x3b5;
                }
              }
              else {
                uVar4 = 0x3b0;
              }
LAB_00016a20:
              RK_LOG(2,0x17171708,"failed with %#x!","create_rgn",uVar4,uVar3);
              goto LAB_00016a4c;
            }
LAB_000167ec:
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar5);
        }
      }
    }
    iVar1 = RK_MPI_VI_EnableChn(param_1[3],param_1[4]);
    if (iVar1 == 0) {
      if (param_1[0x4b] != 0) {
        iVar1 = RK_MPI_VI_ChnSaveFile(param_1[3],param_1[4],param_1 + 0x4b);
        RK_LOG(5,0x17171708,"RK_MPI_VI_ChnSaveFile %x","test_vi_init",0x49c,iVar1);
      }
    }
    else {
      RK_LOG(2,0x17171708,"RK_MPI_VI_EnableChn %x","test_vi_init",0x495,iVar1);
    }
  }
  else {
    local_c8 = param_1[0x49];
    if ((local_c8 == 0) || (local_c4 = param_1[0x4a], local_c4 == 0)) {
      local_c8 = *param_1;
      local_c4 = param_1[1];
    }
    local_c0 = CONCAT44(param_1[0x14],param_1[0x32]);
    uVar2 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_c8,&local_d4);
    if (uVar2 == 0) {
      uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_70 = 0;
      local_80 = local_d4;
      local_78 = DAT_000166c0;
      local_68 = 1;
      local_7c = uVar2;
      uVar2 = RK_MPI_MB_CreatePool(&local_80);
      param_1[0x10] = uVar2;
      if (uVar2 != 0xffffffff) {
        iVar1 = RK_MPI_VI_AttachMbPool(param_1[3],param_1[4],uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        goto LAB_00016324;
      }
    }
    else {
      RK_LOG(2,0x17171708,"get picture buffer size failed. err 0x%x","create_pool",0x419,uVar2);
      param_1[0x10] = 0xffffffff;
    }
    iVar1 = -1;
    RK_LOG(2,0x17171708,"create pool failure","test_vi_init",0x465);
  }
  return iVar1;
LAB_00016a4c:
  if ((int)param_1[0xb] <= (int)uVar8) {
LAB_000164e0:
    RK_LOG(2,0x17171708,"Error:create rgn failed!","test_vi_init",0x48d,uVar3);
    return -1;
  }
  iVar1 = RK_MPI_RGN_DetachFromChn(uVar8,&local_d4);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!","create_rgn",0x3d8,uVar8,
           iVar1);
    uVar3 = uVar8;
    goto LAB_000164e0;
  }
  uVar8 = uVar8 + 1;
  goto LAB_00016a4c;
}



/* ===== FUN_00016b38 @ 00016b38 size=128 ===== */

void FUN_00016b38(undefined4 *param_1)

{
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_374;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_35c;
  undefined4 local_358;
  undefined8 local_354;
  
  memset(&local_390,0,0x388);
  local_38c = *param_1;
  local_35c = param_1[0x43f];
  local_388 = param_1[1];
  local_384 = param_1[0x32];
  local_354 = DAT_00016bb8;
  local_390 = 3;
  local_374 = 0x1e;
  local_368 = 1;
  local_364 = 1;
  local_358 = 1;
  RK_MPI_IVS_CreateChn(0,&local_390);
  return;
}



/* ===== FUN_00016bc0 @ 00016bc0 size=212 ===== */

undefined4 FUN_00016bc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_30 = *(undefined8 *)(param_1 + 0x3b0);
  local_38 = *(undefined4 *)(param_1 + 0x18);
  local_34 = *(undefined4 *)(param_1 + 0x10e4);
  iVar1 = param_1 + param_2 * 0x198;
  local_28 = 0;
  RK_MPI_VENC_CreateChn(*(undefined4 *)(iVar1 + 0x9a8),param_1 + param_2 * 0x198 + 0x820);
  RK_MPI_VENC_SetChnBufWrapAttr(*(undefined4 *)(iVar1 + 0x9a8),&local_30);
  RK_MPI_VENC_SetChnRefBufShareAttr(*(undefined4 *)(iVar1 + 0x9a8),&local_34);
  if (*(int *)(param_1 + 0x10e8) == 0) {
    iVar1 = *(int *)(param_1 + 0x1104);
  }
  else {
    local_20 = 0;
    local_24 = 1;
    local_1c = *(int *)(param_1 + 0x10e8);
    RK_MPI_VENC_SetDeBreathEffect(param_2,&local_24);
    iVar1 = *(int *)(param_1 + 0x1104);
  }
  if (iVar1 != 0) {
    RK_MPI_VENC_EnableSvc(param_2);
  }
  RK_MPI_VENC_StartRecvFrame(*(undefined4 *)(param_2 * 0x198 + param_1 + 0x9a8),&local_38);
  return 0;
}



/* ===== FUN_00016c98 @ 00016c98 size=304 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00016c98(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_180 [3];
  int local_174 [4];
  undefined1 auStack_164 [8];
  int local_15c;
  int local_154;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_118;
  undefined4 local_100;
  undefined4 local_e0;
  undefined1 auStack_dc [196];
  
  memset(auStack_164,0,0x84);
  local_15c = param_1[0x32];
  local_148 = *(undefined8 *)param_1;
  local_174[0] = 0;
  local_100 = 0x400;
  local_174[3] = 0xf;
  local_174[1] = 0;
  local_174[2] = 0;
  local_154 = (param_1[1] * *param_1 * 3) / 2;
  local_180[0] = 0;
  local_118 = DAT_00016dc8;
  local_138 = 1;
  local_140 = local_148;
  RK_MPI_VENC_CreateChn(param_2,local_174 + 3);
  local_174[0] = param_1[0xec];
  RK_MPI_VENC_SetChnBufWrapAttr(param_2,local_174);
  local_180[0] = param_1[0x438];
  RK_MPI_VENC_StartRecvFrame(param_2,local_180);
  local_180[1] = 1;
  local_180[2] = param_3;
  RK_MPI_VENC_SetComboAttr(param_2,local_180 + 1);
  memset(auStack_dc,0,0xc4);
  local_e0 = 0x4d;
  RK_MPI_VENC_SetJpegParam(param_2,&local_e0);
  iVar1 = param_2 * 0xc;
  *(undefined4 *)(&DAT_0002f208 + iVar1) = 1;
  *(int *)(&DAT_0002f20c + iVar1) = param_2;
  pthread_create((pthread_t *)(&DAT_0002f204 + iVar1),(pthread_attr_t *)0x0,FUN_00016dd0,
                 &DAT_0002f204 + iVar1);
  return 0;
}



/* ===== FUN_00016dd0 @ 00016dd0 size=408 ===== */

void FUN_00016dd0(int param_1)

{
  int iVar1;
  FILE *__s;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char acStack_240 [128];
  undefined4 *local_1c0 [5];
  undefined4 local_1ac;
  
  memset(local_1c0,0,400);
  local_1c0[0] = malloc(0x88);
  uVar4 = *(undefined4 *)(param_1 + 8);
  iVar5 = 0;
  while (*(int *)(param_1 + 4) != 0) {
    iVar1 = RK_MPI_VENC_GetStream(uVar4,local_1c0,1000);
    if (iVar1 == 0) {
      snprintf(acStack_240,0x80,"/data/venc_ch%d_%lld.jpg",uVar4,*(undefined8 *)(local_1c0[0] + 2));
      __s = fopen64(acStack_240,"wb");
      if (__s != (FILE *)0x0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],__s);
        fflush(__s);
        fclose(__s);
      }
      TEST_COMM_GetNowUs();
      uVar2 = local_1c0[0][1];
      iVar1 = iVar5;
      uVar6 = local_1ac;
      RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d pts=%lld delay=%lldus\n",
             "venc_jpeg_get_packet",0x265,uVar4,iVar5,local_1ac,uVar2);
      iVar3 = RK_MPI_VENC_ReleaseStream(uVar4,local_1c0);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x","venc_jpeg_get_packet",0x268,iVar3,
               iVar1,uVar6,uVar2);
      }
      iVar5 = iVar5 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



/* ===== FUN_00016f68 @ 00016f68 size=344 ===== */

void FUN_00016f68(int param_1)

{
  int iVar1;
  FILE *__s;
  void *__ptr;
  char acStack_240 [128];
  undefined4 *local_1c0 [103];
  
  memset(local_1c0,0,400);
  local_1c0[0] = malloc(0x88);
  if (local_1c0[0] == (undefined4 *)0x0) {
    RK_LOG(2,0x17171708,"no memory!","thumbnail_thread",0x7f0);
                    /* WARNING: Subroutine does not return */
    pthread_exit((void *)0x0);
  }
  while (*(int *)(param_1 + 0x1124) == 0) {
    iVar1 = RK_MPI_VENC_GetStream(5,local_1c0,1000);
    if (iVar1 == 0) {
      snprintf(acStack_240,0x80,"/data/tb_%lld.jpg",local_1c0[0],local_1c0[0][2],local_1c0[0][3]);
      __s = fopen64(acStack_240,"wb");
      if (__s != (FILE *)0x0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        fwrite(__ptr,1,local_1c0[0][1],__s);
        fclose(__s);
      }
      iVar1 = RK_MPI_VENC_ReleaseStream(5,local_1c0);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x","thumbnail_thread",0x803,iVar1);
      }
    }
  }
  free(local_1c0[0]);
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



/* ===== FUN_000170c0 @ 000170c0 size=644 ===== */

undefined4 FUN_000170c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_470;
  int local_46c;
  undefined4 local_468;
  undefined4 local_464;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  int iStack_454;
  void *local_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  int iStack_444;
  int local_440;
  int iStack_43c;
  undefined4 local_438;
  int iStack_434;
  undefined1 auStack_430 [8];
  undefined8 local_428;
  
  local_468 = *(undefined4 *)(param_1 + 0x9a8);
  local_46c = 0;
  local_470 = 4;
  iVar1 = RK_MPI_RGN_DetachFromChn(0,&local_470);
  if (iVar1 == 0) {
    if (param_2 != 1) {
      local_45c = *(undefined4 *)(param_1 + 0xb40);
      local_464 = 4;
      local_460 = iVar1;
      iVar1 = RK_MPI_RGN_DetachFromChn(0,&local_464);
      if (iVar1 != 0) goto LAB_0001725c;
    }
    iVar1 = RK_MPI_RGN_GetAttr(0,auStack_430);
    if (iVar1 == 0) {
      local_428 = CONCAT44(param_4,param_3);
      iVar1 = RK_MPI_RGN_SetAttr(0,auStack_430);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_RGN_SetAttr (%d) failed with %#x!","resize_overlay",0x198,0,
               iVar1);
        return 0xffffffff;
      }
      local_468 = *(undefined4 *)(param_1 + 0x9a8);
      local_470 = 4;
      local_46c = iVar1;
      iVar1 = RK_MPI_RGN_AttachToChn(0,&local_470,param_1 + 0x7d4);
      if (iVar1 == 0) {
        if (param_2 == 1) {
LAB_000171bc:
          iStack_454 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_450 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_44c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_458 = 0;
          local_448 = 0;
          local_440 = 0;
          local_438 = 0;
          iStack_444 = iStack_454;
          iStack_43c = iStack_454;
          iStack_434 = iStack_454;
          iVar1 = RK_MPI_RGN_GetCanvasInfo(0);
          if (iVar1 == 0) {
            memset(local_450,0xff,iStack_43c * local_440 * 4);
            iVar1 = RK_MPI_RGN_UpdateCanvas(0);
            uVar2 = 0;
            if (iVar1 != 0) {
              RK_LOG(2,0x17171708,"RK_MPI_RGN_UpdateCanvas failed with %#x!","resize_overlay",0x1b1,
                     iVar1);
              uVar2 = 0xffffffff;
            }
          }
          else {
            RK_LOG(2,0x17171708,"RK_MPI_RGN_GetCanvasInfo failed with %#x!","resize_overlay",0x1aa,
                   iVar1);
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
        local_45c = *(undefined4 *)(param_1 + 0xb40);
        local_464 = 4;
        local_460 = iVar1;
        iVar1 = RK_MPI_RGN_AttachToChn(0,&local_464,param_1 + 0x7d4);
        if (iVar1 == 0) goto LAB_000171bc;
      }
      uVar2 = 0x1a2;
      pcVar3 = "RK_MPI_RGN_AttachToChn (%d) failed with %#x!";
    }
    else {
      uVar2 = 400;
      pcVar3 = "RK_MPI_RGN_GetAttr (%d) failed with %#x!";
    }
  }
  else {
LAB_0001725c:
    uVar2 = 0x189;
    pcVar3 = "RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!";
  }
  RK_LOG(2,0x17171708,pcVar3,"resize_overlay",uVar2,0,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00017344 @ 00017344 size=448 ===== */

undefined4 FUN_00017344(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uStack_28 = *(undefined4 *)(param_1 + 8);
  local_2c = 8;
  if (*(int *)(param_1 + 0x4c) == 0) {
    local_24 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    local_24 = 6;
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_RGN_DetachFromChn(iVar2,&local_2c);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171708,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!","destory_rgn",0x3f2,
               iVar2,iVar1);
        return 0xffffffff;
      }
      iVar1 = iVar2 + 1;
      RK_LOG(4,0x17171708,"Detach handle:%d from chn success","destory_rgn",0x3f6,iVar2);
      iVar2 = iVar1;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar2 = 0;
      do {
        while (iVar1 = RK_MPI_RGN_Destroy(iVar2), iVar1 != 0) {
          RK_LOG(2,0x17171708,"RK_MPI_RGN_Destroy (%d) failed with %#x!","destory_rgn",0x3fe,iVar2,
                 iVar1);
          RK_LOG(4,0x17171708,"Destory handle:%d success","destory_rgn",0x400,iVar2);
          iVar2 = iVar2 + 1;
          if (*(int *)(param_1 + 0x2c) <= iVar2) goto LAB_00017478;
        }
        iVar1 = iVar2 + 1;
        RK_LOG(4,0x17171708,"Destory handle:%d success","destory_rgn",0x400,iVar2);
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x2c));
    }
  }
LAB_00017478:
  RK_LOG(5,0x17171708,"vi RK_MPI_RGN_Destroy OK","destory_rgn",0x403);
  return 0;
}



/* ===== FUN_00017504 @ 00017504 size=656 ===== */

int FUN_00017504(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = RK_MPI_VI_GetDevAttr(*(undefined4 *)(param_1 + 8),param_1 + 0x60);
  if (iVar1 == -0x5ff77ff9) {
    iVar1 = RK_MPI_VI_SetDevAttr(*(undefined4 *)(param_1 + 8),param_1 + 0x60);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevAttr %x","create_vi",0x982,iVar1);
      return iVar1;
    }
  }
  else {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevAttr already","create_vi",0x986);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VI_EnableDev already","create_vi",0x99a);
  }
  else {
    iVar1 = RK_MPI_VI_EnableDev(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_EnableDev %x","create_vi",0x98e,iVar1);
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc);
    iVar1 = RK_MPI_VI_SetDevBindPipe(*(undefined4 *)(param_1 + 8),param_1 + 0x7c);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevBindPipe %x","create_vi",0x996,iVar1);
      return iVar1;
    }
  }
  iVar1 = RK_MPI_VI_SetChnAttr
                    (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),param_1 + 0xc0);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %x","create_vi",0x99f,iVar1);
    return iVar1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  RK_LOG(5,0x17171708,"RK_MPI_VI_EnableChn %x %d %d","create_vi",0x9a3,*(undefined4 *)(param_1 + 8),
         uVar3,uVar2);
  iVar1 = RK_MPI_VI_EnableChn(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 300) != 0) {
      iVar1 = RK_MPI_VI_ChnSaveFile
                        (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                         param_1 + 300);
      RK_LOG(5,0x17171708,"RK_MPI_VI_ChnSaveFile %x","create_vi",0x9ac,iVar1,uVar3,uVar2);
      return iVar1;
    }
  }
  else {
    RK_LOG(2,0x17171708,"RK_MPI_VI_EnableChn %x","create_vi",0x9a6,iVar1,uVar3,uVar2);
  }
  return iVar1;
}



/* ===== FUN_00017798 @ 00017798 size=3220 ===== */

int FUN_00017798(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *local_f4;
  undefined8 *local_ec;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_74;
  undefined8 local_50;
  undefined4 local_48;
  
  *(undefined4 *)((int)param_1 + 300) = 0;
  if (*(int *)(param_1 + 0x75) == 2) {
    iVar11 = 2;
  }
  else {
    iVar11 = 1;
  }
  iVar3 = FUN_00016178();
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_venc_with_thumbnail",0x857,
           *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 2),iVar3);
    goto LAB_000177f4;
  }
  iVar3 = FUN_00015d10(param_1,iVar11);
  if (iVar3 != 0) goto LAB_000177f4;
  local_c8 = *(undefined4 *)(param_1 + 1);
  local_c4 = *(undefined4 *)(param_1 + 2);
  local_cc = 8;
  iVar3 = RK_MPI_VI_GetDevAttr(local_c8,param_1 + 0xc);
  if (iVar3 == -0x5ff77ff9) {
    iVar3 = RK_MPI_VI_SetDevAttr(*(undefined4 *)(param_1 + 1),param_1 + 0xc);
    if (iVar3 == 0) goto LAB_00017b58;
    uVar4 = 0x4ac;
    pcVar10 = "RK_MPI_VI_SetDevAttr %x";
LAB_000183b4:
    RK_LOG(2,0x17171708,pcVar10,"test_vi_thumbnail_init",uVar4,iVar3);
LAB_000180fc:
    RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_thumbnail_init",0x813,
           *(undefined4 *)(param_1 + 1),1,iVar3);
  }
  else {
    RK_LOG(2,0x17171708,"RK_MPI_VI_SetDevAttr already","test_vi_thumbnail_init",0x4b0);
LAB_00017b58:
    iVar3 = RK_MPI_VI_GetDevIsEnable(*(undefined4 *)(param_1 + 1));
    if (iVar3 != 0) {
      iVar3 = RK_MPI_VI_EnableDev(*(undefined4 *)(param_1 + 1));
      if (iVar3 == 0) {
        *(undefined4 *)((int)param_1 + 0x7c) = *(undefined4 *)((int)param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_1 + 0xc);
        iVar3 = RK_MPI_VI_SetDevBindPipe(*(undefined4 *)(param_1 + 1),(int)param_1 + 0x7c);
        if (iVar3 == 0) goto LAB_00017b90;
        uVar4 = 0x4c0;
        pcVar10 = "RK_MPI_VI_SetDevBindPipe %x";
      }
      else {
        uVar4 = 0x4b8;
        pcVar10 = "RK_MPI_VI_EnableDev %x";
      }
      goto LAB_000183b4;
    }
    RK_LOG(2,0x17171708,"RK_MPI_VI_EnableDev already","test_vi_thumbnail_init",0x4c4);
LAB_00017b90:
    memset(&local_a8,0,0x58);
    local_90 = 1;
    local_98 = *(undefined8 *)((int)param_1 + 0x34);
    local_b0 = DAT_00017ad0;
    uStack_8c = 0xffffffff;
    uStack_88 = 0xffffffff;
    local_80 = 5;
    local_50 = DAT_00017ad8;
    local_74 = 4;
    local_48 = 0x168;
    iVar3 = RK_MPI_VI_SetChnAttr(*(undefined4 *)((int)param_1 + 0xc),1,&local_b0);
    if (iVar3 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %x","test_vi_thumbnail_init",0x4db,iVar3);
      goto LAB_000180fc;
    }
    iVar3 = RK_MPI_VI_EnableChn(*(undefined4 *)((int)param_1 + 0xc),1);
    if (iVar3 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_VI_EnableChn %x","test_vi_thumbnail_init",0x4e2,iVar3);
      goto LAB_000180fc;
    }
    memset(auStack_a0,0,0x78);
    local_a4 = *(undefined4 *)(param_1 + 0x19);
    local_c0 = *(undefined4 *)((int)param_1 + 0x10e4);
    local_90 = (undefined4)DAT_00017ae0;
    uStack_8c = (undefined4)((ulonglong)DAT_00017ae0 >> 0x20);
    uStack_88 = (undefined4)DAT_00017ae8;
    uStack_84 = (undefined4)((ulonglong)DAT_00017ae8 >> 0x20);
    local_a8 = 0x168;
    local_80 = 5;
    local_b0 = 0x2800000000f;
    local_9c = 0x54600;
    RK_MPI_VENC_CreateChn(5,&local_b0);
    RK_MPI_VENC_SetChnRefBufShareAttr(5,&local_c0);
    RK_MPI_VENC_EnableThumbnail(5);
    local_d8 = 0xffffffff;
    RK_MPI_VENC_StartRecvFrame(5,&local_d8);
    local_c0 = 4;
    local_a8 = 1;
    local_bc = DAT_00017af0;
    local_b0 = CONCAT44(*(undefined4 *)(param_1 + 1),8);
    iVar3 = RK_MPI_SYS_Bind(&local_b0,&local_c0);
    if (iVar3 == 0) {
      iVar3 = pthread_create((pthread_t *)(param_1 + 0x224),(pthread_attr_t *)0x0,FUN_00016f68,
                             param_1);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171708,"create thumbnail_thread failed!","test_thumbnail_init",0x82b);
      }
    }
    else {
      RK_LOG(2,0x17171708,"bind %d ch venc failed","test_thumbnail_init",0x826,5);
    }
  }
  local_ec = &local_b0;
  puVar14 = (undefined8 *)((int)param_1 + 0x824);
  puVar12 = param_1;
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    uVar4 = 1;
    *(undefined4 *)((int)puVar14 + -4) = *(undefined4 *)(param_1 + 0x21b);
    *(int *)((int)puVar14 + 0x184) = *(int *)((int)param_1 + 0x14) + iVar5;
    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(param_1 + 0x19);
    bVar15 = *(int *)((int)param_1 + 0x1104) != 0;
    uVar8 = *(undefined4 *)((int)param_1 + 0x10ec);
    if (bVar15) {
      uVar4 = 2;
    }
    *(undefined4 *)((int)puVar14 + 100) = uVar8;
    if (bVar15) {
      *(undefined4 *)((int)puVar14 + 0x6c) = *(undefined4 *)(param_1 + 0x21e);
      uVar8 = *(undefined4 *)((int)param_1 + 0x10f4);
    }
    *(undefined4 *)((int)puVar14 + 0x4c) = uVar4;
    if (bVar15) {
      *(undefined4 *)(puVar14 + 0xd) = uVar8;
    }
    *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(param_1 + 0x221);
    iVar3 = *(int *)((int)param_1 + 0x110c);
    iVar9 = *(int *)(param_1 + 0x222);
    *puVar14 = *(undefined8 *)((int)param_1 + 0x110c);
    uVar16 = *param_1;
    *(undefined4 *)((int)puVar14 + 0x7c) = 1;
    *(undefined8 *)((int)puVar14 + 0x1c) = uVar16;
    *(undefined4 *)((int)puVar14 + 0x2c) = 5;
    *(undefined8 *)((int)puVar14 + 0x24) = uVar16;
    *(uint *)(puVar14 + 2) = (uint)(iVar9 * iVar3) >> 1;
    iVar3 = FUN_00016bc0(param_1,iVar5);
    if (iVar3 != 0) {
      pcVar10 = "create %d ch venc failed";
      uVar4 = 0x86a;
LAB_00018308:
      RK_LOG(2,0x17171708,pcVar10,"test_vi_bind_venc_with_thumbnail",uVar4,
             *(undefined4 *)(param_1 + iVar5 * 0x33 + 0x135));
      return iVar3;
    }
    iVar3 = RK_MPI_VENC_ThumbnailBind(*(undefined4 *)((int)puVar14 + 0x184),5);
    if (iVar3 != 0) {
      uVar4 = 0x86f;
      pcVar10 = "thumbnail bind %d ch venc failed";
      goto LAB_00018308;
    }
    uVar4 = *(undefined4 *)((int)puVar14 + 0x184);
    *(undefined4 *)local_ec = 4;
    *(undefined4 *)((int)local_ec + 4) = 0;
    *(undefined4 *)(local_ec + 1) = uVar4;
    iVar3 = RK_MPI_SYS_Bind(&local_cc,local_ec);
    if (iVar3 != 0) {
      RK_LOG(2,0x17171708,"bind %d ch venc failed","test_vi_bind_venc_with_thumbnail",0x879,
             *(undefined4 *)(param_1 + iVar5 * 0x33 + 0x135));
      goto LAB_000177f4;
    }
    pvVar6 = malloc(0x88);
    *(void **)(puVar12 + 0x16a) = pvVar6;
    if (*(int *)((int)param_1 + 0x10dc) != 0) {
      FUN_00016c98(param_1,*(int *)((int)puVar14 + 0x184) + 4);
      iVar3 = RK_MPI_VENC_ThumbnailBind(*(int *)((int)puVar14 + 0x184) + 4,5);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171708,"thumbnail bind %d ch venc failed","test_vi_bind_venc_with_thumbnail",
               0x886,*(int *)(param_1 + iVar5 * 0x33 + 0x135) + 4);
        return iVar3;
      }
    }
    puVar14 = puVar14 + 0x33;
    local_ec = (undefined8 *)((int)local_ec + 0xc);
    puVar12 = puVar12 + 0x32;
    iVar3 = iVar5 + 1;
  } while (iVar11 != iVar5 + 1);
  if (0 < *(int *)(param_1 + 3)) {
    iVar3 = 0;
    do {
      iVar13 = 0;
      puVar12 = param_1;
      puVar14 = param_1;
      iVar9 = iVar3;
      do {
        RK_MPI_VI_SetChnFreeze
                  (*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)(param_1 + 2),
                   *(undefined4 *)(param_1 + 4));
        iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(puVar12 + 0x135),puVar14 + 0x16a,0xffffffff);
        if (iVar3 == 0) {
          if (*(int *)((int)puVar12 + 0x81c) != 0) {
            pvVar6 = (void *)RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(puVar14 + 0x16a));
            fwrite(pvVar6,1,*(size_t *)(*(int *)(puVar14 + 0x16a) + 4),
                   *(FILE **)((int)puVar12 + 0x9ac));
            fflush(*(FILE **)((int)puVar12 + 0x9ac));
          }
          TEST_COMM_GetNowUs();
          uVar4 = *(undefined4 *)(*(int *)(puVar14 + 0x16a) + 4);
          uVar8 = *(undefined4 *)((int)puVar14 + 0xb64);
          iVar3 = iVar9 + 1;
          RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d pts=%lld delay=%lldus\n",
                 "test_vi_bind_venc_with_thumbnail",0x8a0,iVar13,iVar9,uVar8,uVar4);
          usleep(*(int *)(param_1 + 0x21f) * 1000);
          iVar7 = RK_MPI_VENC_ReleaseStream(*(undefined4 *)(puVar12 + 0x135),puVar14 + 0x16a);
          if (iVar7 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x",
                   "test_vi_bind_venc_with_thumbnail",0x8a4,iVar7,iVar9,uVar8,uVar4);
          }
        }
        else {
          RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame fail %x","test_vi_bind_venc_with_thumbnail",
                 0x8a8,iVar3);
          iVar3 = iVar9;
        }
        puVar12 = puVar12 + 0x33;
        puVar14 = puVar14 + 0x32;
        bVar15 = iVar5 != iVar13;
        iVar13 = iVar13 + 1;
        iVar9 = iVar3;
      } while (bVar15);
      usleep(10000);
    } while (iVar3 < *(int *)(param_1 + 3));
  }
LAB_000177f4:
  local_ec = &local_b0;
  local_f4 = &local_cc;
  *(undefined4 *)((int)param_1 + 0x1124) = 1;
  RK_LOG(4,0x17171708,"join thumbnail thread","test_thumbnail_exit",0x839);
  pthread_join(*(pthread_t *)(param_1 + 0x224),(void **)0x0);
  local_d4 = DAT_00017af0;
  local_bc = CONCAT44(1,*(undefined4 *)(param_1 + 1));
  local_c0 = 8;
  local_d8 = 4;
  iVar3 = RK_MPI_SYS_UnBind(&local_c0,&local_d8);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"unbind %d ch venc failed","test_thumbnail_exit",0x846,5);
  }
  iVar3 = RK_MPI_VI_DisableChn(*(undefined4 *)((int)param_1 + 0xc),1);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_thumbnail_exit",0x4ee,iVar3);
  }
  iVar3 = RK_MPI_VENC_StopRecvFrame(5);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"stop venc thumbnail fail %x","destroy_venc_thumbnail",0x213,iVar3);
  }
  iVar3 = RK_MPI_VENC_DestroyChn(5);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","destroy_venc_thumbnail",0x217,iVar3);
  }
  if (*(int *)((int)param_1 + 0x3c) != 0) {
    RK_MPI_VI_DetachMbPool(*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)(param_1 + 2));
    RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 8));
  }
  iVar3 = RK_MPI_SYS_UnBind(local_f4,local_ec);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_with_thumbnail",0x8b9,iVar3);
  }
  if ((iVar11 != 1) && (iVar3 = RK_MPI_SYS_UnBind(local_f4,&local_a4), iVar3 != 0)) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_with_thumbnail",0x8b9,iVar3);
  }
  uVar4 = RK_MPI_VI_DisableChn(*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)(param_1 + 2));
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_venc_with_thumbnail",0x8bf,uVar4);
  puVar12 = param_1;
  do {
    while( true ) {
      iVar3 = *(int *)(puVar12 + 0x135);
      if (*(int *)((int)param_1 + 0x10dc) != 0) {
        iVar3 = iVar3 + 4;
        *(undefined4 *)(&DAT_0002f208 + iVar3 * 0xc) = 0;
        pthread_join(*(pthread_t *)(&DAT_0002f204 + iVar3 * 0xc),(void **)0x0);
        iVar5 = RK_MPI_VENC_StopRecvFrame(iVar3);
        if (iVar5 == 0) {
          RK_LOG(2,0x17171708,"destroy enc chn:%d","destroy_venc_combo",0x2af,iVar3);
          iVar3 = RK_MPI_VENC_DestroyChn(iVar3);
          if (iVar3 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","destroy_venc_combo",0x2b2,iVar3);
          }
        }
        iVar3 = *(int *)(puVar12 + 0x135);
      }
      iVar3 = RK_MPI_VENC_StopRecvFrame(iVar3);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar14 = puVar12 + 0x33;
      RK_LOG(2,0x17171708,"destroy enc chn:%d","test_vi_bind_venc_with_thumbnail",0x8c9,
             *(undefined4 *)(puVar12 + 0x135));
      iVar3 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(puVar12 + 0x135));
      puVar12 = puVar14;
      if (iVar3 != 0) break;
      if (param_1 + iVar11 * 0x33 == puVar14) goto LAB_00017a48;
    }
    RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","test_vi_bind_venc_with_thumbnail",0x8cc,
           iVar3);
  } while (param_1 + iVar11 * 0x33 != puVar14);
LAB_00017a48:
  iVar3 = RK_MPI_VI_DisableDev(*(undefined4 *)(param_1 + 1));
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev %x","test_vi_bind_venc_with_thumbnail",0x8d2,iVar3);
  puVar14 = param_1 + iVar11 * 0x32;
  puVar12 = param_1;
  do {
    puVar1 = puVar12 + 0x16a;
    puVar12 = puVar12 + 0x32;
    if (*(void **)puVar1 != (void *)0x0) {
      free(*(void **)puVar1);
    }
    puVar2 = (undefined4 *)((int)param_1 + 0x9ac);
    param_1 = param_1 + 0x33;
    if ((FILE *)*puVar2 != (FILE *)0x0) {
      fclose((FILE *)*puVar2);
    }
  } while (puVar14 != puVar12);
  return iVar3;
}



/* ===== FUN_00018458 @ 00018458 size=3892 ===== */

int FUN_00018458(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int extraout_r1;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  bool bVar21;
  int local_ec;
  undefined4 *local_e8;
  undefined4 *local_dc;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [3];
  undefined1 auStack_8c [12];
  undefined4 local_80 [6];
  undefined4 local_68;
  int iStack_64;
  void *local_60;
  undefined4 local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  int iStack_44;
  
  param_1[0x4b] = 0;
  if (param_1[0xea] == 2) {
    iVar14 = 2;
  }
  else {
    iVar14 = 1;
  }
  iVar4 = FUN_00016178();
  if (iVar4 == 0) {
    param_1[0x49] = param_1[0x443];
    param_1[0x4a] = param_1[0x444];
    iVar4 = FUN_00015d10(param_1,iVar14);
    if (iVar4 == 0) {
      uStack_9c = param_1[4];
      local_a0 = param_1[2];
      puVar20 = (undefined8 *)(param_1 + 0x209);
      local_a4 = 8;
      puVar15 = local_98;
      puVar16 = param_1;
      iVar4 = 0;
      while( true ) {
        uVar9 = 1;
        iVar18 = iVar4 + 1;
        *(undefined4 *)((int)puVar20 + -4) = param_1[0x436];
        *(int *)((int)puVar20 + 0x184) = param_1[5] + iVar4;
        *(undefined4 *)(puVar20 + 1) = param_1[0x32];
        bVar21 = param_1[0x441] != 0;
        uVar11 = param_1[0x43b];
        if (bVar21) {
          uVar9 = 2;
        }
        *(undefined4 *)((int)puVar20 + 100) = uVar11;
        if (bVar21) {
          *(undefined4 *)((int)puVar20 + 0x6c) = param_1[0x43c];
          uVar11 = param_1[0x43d];
        }
        *(undefined4 *)((int)puVar20 + 0x4c) = uVar9;
        if (bVar21) {
          *(undefined4 *)(puVar20 + 0xd) = uVar11;
        }
        *(undefined4 *)(puVar20 + 10) = param_1[0x442];
        iVar10 = param_1[0x443];
        iVar12 = param_1[0x444];
        *puVar20 = *(undefined8 *)(param_1 + 0x443);
        uVar9 = *param_1;
        uVar11 = param_1[1];
        *(undefined4 *)((int)puVar20 + 0x2c) = 5;
        *(undefined4 *)((int)puVar20 + 0x7c) = 1;
        *(undefined4 *)((int)puVar20 + 0x1c) = uVar9;
        *(undefined4 *)(puVar20 + 4) = uVar11;
        *(uint *)(puVar20 + 2) = (uint)(iVar12 * iVar10) >> 1;
        *(undefined4 *)((int)puVar20 + 0x24) = uVar9;
        *(undefined4 *)(puVar20 + 5) = uVar11;
        iVar10 = FUN_00016bc0(param_1,iVar4);
        if (iVar10 != 0) {
          RK_LOG(2,0x17171708,"create %d ch venc failed","test_vi_bind_venc_change_resolution",0xc5d
                 ,param_1[iVar4 * 0x66 + 0x26a]);
          return iVar10;
        }
        uVar9 = *(undefined4 *)((int)puVar20 + 0x184);
        *puVar15 = 4;
        puVar15[1] = 0;
        puVar15[2] = uVar9;
        iVar10 = RK_MPI_SYS_Bind(&local_a4,puVar15);
        if (iVar10 != 0) {
          RK_LOG(2,0x17171708,"bind %d ch venc failed","test_vi_bind_venc_change_resolution",0xc67,
                 param_1[iVar4 * 0x66 + 0x26a]);
          goto LAB_00018788;
        }
        pvVar5 = malloc(0x88);
        puVar16[0x2d4] = pvVar5;
        uVar2 = DAT_00019390;
        uVar3 = DAT_00019398;
        if (param_1[0x437] != 0) {
          FUN_00016c98(param_1,*(int *)((int)puVar20 + 0x184) + 4);
          uVar2 = DAT_00019390;
          uVar3 = DAT_00019398;
        }
        DAT_00019390 = uVar2;
        DAT_00019398 = uVar3;
        if (iVar14 == iVar18) break;
        puVar20 = puVar20 + 0x33;
        puVar15 = puVar15 + 3;
        puVar16 = puVar16 + 100;
        iVar4 = iVar18;
      }
      if (param_1[10] == 0) {
LAB_00018624:
        iVar10 = 0;
        local_ec = 0;
        while (local_ec < (int)param_1[6]) {
          iVar12 = 0;
          puVar15 = param_1;
          puVar16 = param_1;
          do {
            RK_MPI_VI_SetChnFreeze(param_1[3],param_1[4],param_1[8]);
            iVar6 = RK_MPI_VENC_GetStream(puVar15[0x26a],puVar16 + 0x2d4,0xffffffff);
            if (iVar6 == 0) {
              if (puVar15[0x207] != 0) {
                pvVar5 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)puVar16[0x2d4]);
                fwrite(pvVar5,1,*(size_t *)(puVar16[0x2d4] + 4),(FILE *)puVar15[0x26b]);
                fflush((FILE *)puVar15[0x26b]);
              }
              TEST_COMM_GetNowUs();
              uVar9 = *(undefined4 *)(puVar16[0x2d4] + 4);
              uVar11 = puVar16[0x2d9];
              iVar6 = local_ec + 1;
              RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d pts=%lld delay=%lldus\n",
                     "test_vi_bind_venc_change_resolution",0xc91,iVar12,local_ec,uVar11,uVar9);
              usleep(param_1[0x43e] * 1000);
              iVar7 = RK_MPI_VENC_ReleaseStream(puVar15[0x26a],puVar16 + 0x2d4);
              if (iVar7 != 0) {
                RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x",
                       "test_vi_bind_venc_change_resolution",0xc95,iVar7,local_ec,uVar11,uVar9);
              }
            }
            else {
              RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame fail %x",
                     "test_vi_bind_venc_change_resolution",0xc99,iVar6);
              iVar6 = local_ec;
            }
            local_ec = iVar6;
            puVar15 = puVar15 + 0x66;
            puVar16 = puVar16 + 100;
            bVar21 = iVar4 != iVar12;
            iVar12 = iVar12 + 1;
          } while (bVar21);
          __aeabi_uidivmod(local_ec,param_1[0x445]);
          if (extraout_r1 == 0) {
            uVar13 = param_1[0x443];
            uVar8 = param_1[0x444];
            if (iVar10 == 0xb) {
              iVar10 = 0;
            }
            do {
              while( true ) {
                uVar17 = (&DAT_0001c090)[iVar10 * 3];
                if ((uVar17 <= uVar13) &&
                   (uVar19 = (&DAT_0001c094)[iVar10 * 3], iVar12 = iVar10, uVar19 <= uVar8))
                goto LAB_00018d64;
                iVar12 = iVar10 + 1;
                if (iVar12 != 0xb) break;
LAB_00018e88:
                iVar10 = 0;
              }
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 2;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 3;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 4;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 5;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 6;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 7;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 8;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              iVar12 = iVar10 + 9;
              if (iVar12 == 0xb) goto LAB_00018e88;
              uVar17 = (&DAT_0001c090)[iVar12 * 3];
              if ((uVar17 <= uVar13) && (uVar19 = (&DAT_0001c094)[iVar12 * 3], uVar19 <= uVar8))
              goto LAB_00018d64;
              if (iVar10 == 1) goto LAB_00018e88;
              iVar10 = 0;
            } while ((uVar13 < 0xb40) || (uVar8 < 0x650));
            uVar19 = 0x650;
            uVar17 = 0xb40;
            iVar12 = 10;
LAB_00018d64:
            if ((param_1[0x210] != uVar17) || (param_1[0x211] != uVar19)) {
              if (iVar18 == 1) {
                iVar10 = RK_MPI_SYS_UnBind(&local_a4,local_98);
                if (iVar10 != 0) {
LAB_00019168:
                  RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x",
                         "test_vi_bind_venc_change_resolution",0xcb7,iVar10);
                  break;
                }
                param_1[0x210] = uVar17;
                param_1[0x211] = uVar19;
                param_1[0x212] = uVar17;
                param_1[0x213] = uVar19;
                RK_MPI_VENC_SetChnAttr(param_1[0x26a],param_1 + 0x208);
              }
              else {
                if ((param_1[0x276] == uVar17) && (param_1[0x277] == uVar19)) goto LAB_00018fa8;
                iVar10 = RK_MPI_SYS_UnBind(&local_a4,local_98);
                if ((iVar10 != 0) || (iVar10 = RK_MPI_SYS_UnBind(&local_a4,auStack_8c), iVar10 != 0)
                   ) goto LAB_00019168;
                *(ulonglong *)(param_1 + 0x210) = CONCAT44(uVar19,uVar17);
                *(ulonglong *)(param_1 + 0x212) = CONCAT44(uVar19,uVar17);
                RK_MPI_VENC_SetChnAttr(param_1[0x26a],param_1 + 0x208);
                *(ulonglong *)(param_1 + 0x276) = CONCAT44(uVar19,uVar17);
                *(ulonglong *)(param_1 + 0x278) = CONCAT44(uVar19,uVar17);
                RK_MPI_VENC_SetChnAttr(param_1[0x2d0],param_1 + 0x26e);
              }
              param_1[0x30] = uVar17;
              param_1[0x31] = uVar19;
              iVar10 = RK_MPI_VI_SetChnAttr(param_1[3],param_1[4],param_1 + 0x30);
              if (iVar10 == 0) {
                RK_LOG(5,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d success",
                       "test_vi_bind_venc_change_resolution",0xccd,uVar17,uVar19);
                if ((param_1[10] == 0) ||
                   (iVar10 = FUN_000170c0(param_1,iVar18,*(undefined4 *)(&UNK_0001bad4 + iVar12 * 8)
                                          ,*(undefined4 *)(&UNK_0001bad8 + iVar12 * 8)), iVar10 == 0
                   )) {
                  iVar10 = RK_MPI_SYS_Bind(&local_a4,local_98);
                  if (iVar10 == 0) {
                    if ((iVar18 == 1) ||
                       (iVar10 = RK_MPI_SYS_Bind(&local_a4,auStack_8c), iVar10 == 0)) {
                      iVar10 = iVar12 + 1;
                      goto LAB_0001876c;
                    }
                    iVar4 = 1;
                  }
                  else {
                    iVar4 = 0;
                  }
                  RK_LOG(2,0x17171708,"bind %d ch venc failed","test_vi_bind_venc_change_resolution"
                         ,0xcdc,param_1[iVar4 * 0x66 + 0x26a],uVar19);
                }
                else {
                  RK_LOG(2,0x17171708,"resize overlay failed","test_vi_bind_venc_change_resolution",
                         0xcd4,uVar17,uVar19);
                }
              }
              else {
                RK_LOG(2,0x17171708,"RK_MPI_VI_SetChnAttr %d x %d fail, ret: %x",
                       "test_vi_bind_venc_change_resolution",0xcc9,uVar17,uVar19,iVar10);
              }
              break;
            }
LAB_00018fa8:
            iVar10 = iVar12 + 1;
          }
          else {
LAB_0001876c:
            usleep(10000);
          }
        }
      }
      else {
        param_1[0xf4] = 0;
        *(undefined8 *)(param_1 + 0xef) = uVar2;
        *(undefined8 *)(param_1 + 0xf1) = uVar3;
        iVar10 = RK_MPI_RGN_Create(0);
        if (iVar10 == 0) {
          RK_LOG(4,0x17171708,"The handle: %d, create success!","create_overlay",0x153,0);
          uVar2 = DAT_000193a0;
          iVar10 = 0;
          puVar15 = local_80;
          do {
            puVar15[1] = 0;
            *puVar15 = 4;
            uVar9 = param_1[iVar10 * 0x66 + 0x26a];
            *(undefined8 *)(param_1 + 0x1f5) = uVar2;
            puVar15[2] = uVar9;
            *(undefined8 *)(param_1 + 0x1f7) = 0;
            *(undefined8 *)(param_1 + 0x1f9) = 0x8000000080;
            param_1[0x1fb] = iVar10;
            iVar10 = iVar10 + 1;
            param_1[0x1fc] = 0;
            param_1[0x206] = 0;
            iVar6 = RK_MPI_RGN_AttachToChn(0,puVar15,param_1 + 0x1f5);
            if (iVar6 != 0) {
              iVar12 = 0;
              RK_LOG(2,0x17171708,"RK_MPI_RGN_AttachToChn (%d) failed with %#x!","create_overlay",
                     0x165,0,iVar6);
              goto LAB_0001913c;
            }
            puVar15 = puVar15 + 3;
          } while (iVar10 != iVar14);
          iStack_64 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_60 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_68 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          iStack_54 = iStack_64;
          iStack_4c = iStack_64;
          iStack_44 = iStack_64;
          iVar12 = RK_MPI_RGN_GetCanvasInfo();
          if (iVar12 == 0) {
            memset(local_60,0xff,iStack_4c * local_50 * 4);
            iVar12 = RK_MPI_RGN_UpdateCanvas(0);
            if (iVar12 == 0) goto LAB_00018624;
            RK_LOG(2,0x17171708,"RK_MPI_RGN_UpdateCanvas failed with %#x!","create_overlay",0x175,
                   iVar12);
          }
          else {
            RK_LOG(2,0x17171708,"RK_MPI_RGN_GetCanvasInfo failed with %#x!","create_overlay",0x16e,
                   iVar12);
          }
        }
        else {
          iVar12 = 0;
          RK_LOG(2,0x17171708,"RK_MPI_RGN_Create (%d) failed with %#x!","create_overlay",0x14f,0,
                 iVar10);
          RK_MPI_RGN_Destroy(0);
        }
LAB_0001913c:
        RK_LOG(2,0x17171708,"create overlay failed","test_vi_bind_venc_change_resolution",0xc78,
               iVar12);
      }
    }
  }
  else {
    RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_venc_change_resolution",0xc4a,
           param_1[2],param_1[4],iVar4);
  }
LAB_00018788:
  local_e8 = &local_a4;
  local_dc = local_98;
  iVar4 = RK_MPI_SYS_UnBind(local_e8,local_dc);
  if (iVar4 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_change_resolution",0xcea,
           iVar4);
  }
  if ((iVar14 != 1) && (iVar4 = RK_MPI_SYS_UnBind(local_e8,auStack_8c), iVar4 != 0)) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_change_resolution",0xcea,
           iVar4);
  }
  uVar9 = RK_MPI_VI_DisableChn(param_1[3],param_1[4]);
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_venc_change_resolution",0xcf0,uVar9);
  if (param_1[10] == 0) goto LAB_000187fc;
  local_60 = (void *)param_1[0x26a];
  iStack_64 = 0;
  local_68 = 4;
  iVar4 = RK_MPI_RGN_DetachFromChn(0,&local_68);
  if (iVar4 == 0) {
    if (iVar14 != 1) {
      iStack_54 = param_1[0x2d0];
      local_5c = 4;
      local_58 = iVar4;
      iVar4 = RK_MPI_RGN_DetachFromChn(0,&local_5c);
      if (iVar4 != 0) goto LAB_00018f40;
    }
    iVar4 = RK_MPI_RGN_Destroy(0);
    if (iVar4 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_RGN_Destroy [%d] failed with %#x","destroy_overlay",0x1ca,0,iVar4)
      ;
    }
  }
  else {
LAB_00018f40:
    RK_LOG(2,0x17171708,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!","destroy_overlay",0x1c3,0,
           iVar4);
    RK_LOG(2,0x17171708,"destroy_overlay failed!","test_vi_bind_venc_change_resolution",0xcf6);
  }
LAB_000187fc:
  puVar15 = param_1;
  do {
    while( true ) {
      iVar4 = puVar15[0x26a];
      if (param_1[0x437] != 0) {
        iVar4 = iVar4 + 4;
        *(undefined4 *)(&DAT_0002f208 + iVar4 * 0xc) = 0;
        pthread_join(*(pthread_t *)(&DAT_0002f204 + iVar4 * 0xc),(void **)0x0);
        iVar18 = RK_MPI_VENC_StopRecvFrame(iVar4);
        if (iVar18 == 0) {
          RK_LOG(2,0x17171708,"destroy enc chn:%d","destroy_venc_combo",0x2af,iVar4);
          iVar4 = RK_MPI_VENC_DestroyChn(iVar4);
          if (iVar4 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","destroy_venc_combo",0x2b2,iVar4);
          }
        }
        iVar4 = puVar15[0x26a];
      }
      iVar4 = RK_MPI_VENC_StopRecvFrame(iVar4);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar16 = puVar15 + 0x66;
      RK_LOG(2,0x17171708,"destroy enc chn:%d","test_vi_bind_venc_change_resolution",0xd02,
             puVar15[0x26a]);
      iVar4 = RK_MPI_VENC_DestroyChn(puVar15[0x26a]);
      puVar15 = puVar16;
      if (iVar4 != 0) break;
      if (param_1 + iVar14 * 0x66 == puVar16) goto LAB_0001892c;
    }
    RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","test_vi_bind_venc_change_resolution",0xd05
           ,iVar4);
  } while (param_1 + iVar14 * 0x66 != puVar16);
LAB_0001892c:
  iVar4 = RK_MPI_VI_DisableDev(param_1[2]);
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev %x","test_vi_bind_venc_change_resolution",0xd0b,iVar4);
  puVar16 = param_1 + iVar14 * 100;
  puVar15 = param_1;
  do {
    puVar1 = puVar15 + 0x2d4;
    puVar15 = puVar15 + 100;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
    puVar1 = param_1 + 0x26b;
    param_1 = param_1 + 0x66;
    if ((FILE *)*puVar1 != (FILE *)0x0) {
      fclose((FILE *)*puVar1);
    }
  } while (puVar15 != puVar16);
  return iVar4;
}



/* ===== FUN_000193a8 @ 000193a8 size=2620 ===== */

int FUN_000193a8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int __c;
  int extraout_r1;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_98;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40 [3];
  undefined1 auStack_34 [16];
  
  param_1[0x4b] = 0;
  if (param_1[0xea] == 2) {
    iVar7 = 2;
  }
  else {
    iVar7 = 1;
  }
  iVar3 = FUN_00016178();
  if (iVar3 == 0) {
    iVar3 = FUN_00015d10(param_1,iVar7);
    if (iVar3 == 0) {
      local_48 = param_1[2];
      local_44 = param_1[4];
      local_4c = 8;
      if (param_1[0x43f] != 0) {
        iVar3 = FUN_00016b38(param_1);
        if (iVar3 != 0) {
          RK_LOG(2,0x17171708,"ivs init failed:%x","test_vi_bind_venc_loop",0x73b,iVar3);
          goto LAB_0001958c;
        }
        local_54 = 0;
        local_58 = 0x14;
        iVar3 = RK_MPI_SYS_Bind(&local_4c,&local_58);
        if (iVar3 != 0) {
          RK_LOG(2,0x17171708,"bind vi to ivs failed","test_vi_bind_venc_loop",0x743);
          goto LAB_0001958c;
        }
      }
      piVar14 = param_1 + 0x209;
      puVar8 = local_40;
      piVar9 = param_1;
      iVar3 = 0;
      do {
        iVar13 = iVar3;
        iVar3 = 1;
        piVar14[-1] = param_1[0x436];
        piVar14[0x61] = param_1[5] + iVar13;
        piVar14[2] = param_1[0x32];
        bVar17 = param_1[0x441] != 0;
        iVar6 = param_1[0x43b];
        if (bVar17) {
          iVar3 = 2;
        }
        piVar14[0x19] = iVar6;
        if (bVar17) {
          piVar14[0x1b] = param_1[0x43c];
          iVar6 = param_1[0x43d];
        }
        piVar14[0x13] = iVar3;
        if (bVar17) {
          piVar14[0x1a] = iVar6;
        }
        piVar14[0x14] = param_1[0x442];
        iVar3 = param_1[0x443];
        iVar6 = param_1[0x444];
        *(undefined8 *)piVar14 = *(undefined8 *)(param_1 + 0x443);
        uVar18 = *(undefined8 *)param_1;
        piVar14[0xb] = 5;
        piVar14[0x1f] = 1;
        *(undefined8 *)(piVar14 + 7) = uVar18;
        piVar14[4] = (uint)(iVar6 * iVar3) >> 1;
        *(undefined8 *)(piVar14 + 9) = uVar18;
        iVar3 = FUN_00016bc0(param_1,iVar13);
        if (iVar3 != 0) {
          RK_LOG(2,0x17171708,"create %d ch venc failed","test_vi_bind_venc_loop",0x74e,
                 param_1[iVar13 * 0x66 + 0x26a]);
          return iVar3;
        }
        iVar3 = piVar14[0x61];
        *puVar8 = 4;
        puVar8[1] = 0;
        puVar8[2] = iVar3;
        iVar3 = RK_MPI_SYS_Bind(&local_4c,puVar8);
        if (iVar3 != 0) {
          RK_LOG(2,0x17171708,"bind %d ch venc failed","test_vi_bind_venc_loop",0x758,
                 param_1[iVar13 * 0x66 + 0x26a]);
          goto LAB_0001958c;
        }
        pvVar4 = malloc(0x88);
        piVar9[0x2d4] = (int)pvVar4;
        if (param_1[0x437] != 0) {
          FUN_00016c98(param_1,piVar14[0x61] + 4);
        }
        piVar14 = piVar14 + 0x66;
        puVar8 = puVar8 + 3;
        piVar9 = piVar9 + 100;
        iVar3 = iVar13 + 1;
      } while (iVar7 != iVar13 + 1);
      if (0 < param_1[6]) {
        local_98 = 0;
        do {
          iVar3 = 0;
          piVar9 = param_1;
          piVar14 = param_1;
          do {
            RK_MPI_VI_SetChnFreeze(param_1[3],param_1[4],param_1[8]);
            iVar6 = RK_MPI_VENC_GetStream(piVar9[0x26a],piVar14 + 0x2d4,0xffffffff);
            if (iVar6 == 0) {
              if (piVar9[0x207] != 0) {
                pvVar4 = (void *)RK_MPI_MB_Handle2VirAddr(*(undefined4 *)piVar14[0x2d4]);
                fwrite(pvVar4,1,*(size_t *)(piVar14[0x2d4] + 4),(FILE *)piVar9[0x26b]);
                fflush((FILE *)piVar9[0x26b]);
              }
              TEST_COMM_GetNowUs();
              uVar5 = *(undefined4 *)(piVar14[0x2d4] + 4);
              iVar16 = piVar14[0x2d9];
              iVar6 = local_98;
              RK_LOG(5,0x17171708,"chn:%d, loopCount:%d enc->seq:%d wd:%d pts=%lld delay=%lldus\n",
                     "test_vi_bind_venc_loop",0x779,iVar3,local_98,iVar16,uVar5);
              usleep(param_1[0x43e] * 1000);
              iVar10 = RK_MPI_VENC_ReleaseStream(piVar9[0x26a],piVar14 + 0x2d4);
              if (iVar10 != 0) {
                RK_LOG(2,0x17171708,"RK_MPI_VENC_ReleaseStream fail %x","test_vi_bind_venc_loop",
                       0x77d,iVar10,iVar6,iVar16,uVar5);
              }
              local_98 = local_98 + 1;
              iVar6 = param_1[0x43f];
            }
            else {
              RK_LOG(2,0x17171708,"RK_MPI_VI_GetChnFrame fail %x","test_vi_bind_venc_loop",0x781,
                     iVar6);
              iVar6 = param_1[0x43f];
            }
            if (iVar6 != 0) {
              local_60 = 0;
              iVar6 = RK_MPI_IVS_GetResults(0,&local_60,0xffffffff);
              if (iVar6 == 0) {
                __aeabi_idivmod(local_98,10);
                if ((extraout_r1 == 0) && ((int)local_60 == 1)) {
                  if ((param_1[0x440] != 0) &&
                     (*(int *)(Elf32_Ehdr_00010000.e_ident_pad + local_60._4_4_ + -1) != 0)) {
                    iVar6 = *param_1;
                    iVar10 = param_1[1];
                    if (iVar6 < 0) {
                      iVar6 = iVar6 + 0x3f;
                    }
                    iVar16 = (iVar6 >> 6) * 8;
                    iVar15 = 0;
                    while (iVar15 < iVar16) {
                      putchar(0x2d);
                      iVar15 = iVar15 + 1;
                    }
                    putchar(10);
                    iVar15 = 0;
                    if (iVar10 < 0) {
                      iVar10 = iVar10 + 7;
                    }
                    for (; iVar15 < iVar10 >> 3; iVar15 = iVar15 + 1) {
                      for (iVar12 = 0; iVar12 < iVar6 >> 6; iVar12 = iVar12 + 1) {
                        uVar11 = 0;
                        do {
                          __c = 0x30;
                          uVar1 = uVar11 & 0xff;
                          uVar11 = uVar11 + 1;
                          if (((int)(uint)*(byte *)(*(int *)(Elf32_Ehdr_00010000.e_ident_pad +
                                                            local_60._4_4_ + -1) +
                                                   iVar12 + iVar15 * 0x40) >> uVar1 & 1U) != 0) {
                            __c = 0x31;
                          }
                          putchar(__c);
                        } while (uVar11 != 8);
                      }
                      putchar(10);
                    }
                    iVar6 = 0;
                    while (iVar6 < iVar16) {
                      putchar(0x2d);
                      iVar6 = iVar6 + 1;
                    }
                    putchar(10);
                  }
                  printf("MD u32RectNum: %u\n",*(undefined4 *)(local_60._4_4_ + 4));
                  uVar11 = 0;
                  while( true ) {
                    iVar6 = local_60._4_4_ + uVar11 * 0x10;
                    if (*(uint *)(local_60._4_4_ + 4) <= uVar11) break;
                    printf("%d: [%d, %d, %d, %d]\n",uVar11,*(undefined4 *)(iVar6 + 8),
                           *(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),
                           *(undefined4 *)(iVar6 + 0x14));
                    uVar11 = uVar11 + 1;
                  }
                }
                RK_MPI_IVS_ReleaseResults(0,&local_60);
              }
              else {
                RK_LOG(2,0x17171708,"RK_MPI_IVS_GetResults fail %x","test_vi_bind_venc_loop",0x7aa,
                       iVar6);
              }
            }
            piVar9 = piVar9 + 0x66;
            piVar14 = piVar14 + 100;
            bVar17 = iVar13 != iVar3;
            iVar3 = iVar3 + 1;
          } while (bVar17);
          usleep(10000);
        } while (local_98 < param_1[6]);
      }
    }
  }
  else {
    RK_LOG(2,0x17171708,"vi %d:%d init failed:%x","test_vi_bind_venc_loop",0x72d,param_1[2],
           param_1[4],iVar3);
  }
LAB_0001958c:
  local_88 = &local_4c;
  local_80 = local_40;
  if (param_1[0xf] != 0) {
    RK_MPI_VI_DetachMbPool(param_1[3],param_1[4]);
    RK_MPI_MB_DestroyPool(param_1[0x10]);
  }
  iVar3 = RK_MPI_SYS_UnBind(local_88,local_80);
  if (iVar3 != 0) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_loop",0x7bb,iVar3);
  }
  if ((iVar7 != 1) && (iVar3 = RK_MPI_SYS_UnBind(local_88,auStack_34), iVar3 != 0)) {
    RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind fail %x","test_vi_bind_venc_loop",0x7bb,iVar3);
  }
  uVar5 = RK_MPI_VI_DisableChn(param_1[3],param_1[4]);
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableChn %x","test_vi_bind_venc_loop",0x7c1,uVar5);
  piVar9 = param_1;
  do {
    while( true ) {
      iVar3 = piVar9[0x26a];
      if (param_1[0x437] != 0) {
        iVar3 = iVar3 + 4;
        *(undefined4 *)(&DAT_0002f208 + iVar3 * 0xc) = 0;
        pthread_join(*(pthread_t *)(&DAT_0002f204 + iVar3 * 0xc),(void **)0x0);
        iVar6 = RK_MPI_VENC_StopRecvFrame(iVar3);
        if (iVar6 == 0) {
          RK_LOG(2,0x17171708,"destroy enc chn:%d","destroy_venc_combo",0x2af,iVar3);
          iVar3 = RK_MPI_VENC_DestroyChn(iVar3);
          if (iVar3 != 0) {
            RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","destroy_venc_combo",0x2b2,iVar3);
          }
        }
        iVar3 = piVar9[0x26a];
      }
      iVar3 = RK_MPI_VENC_StopRecvFrame(iVar3);
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar14 = piVar9 + 0x66;
      RK_LOG(2,0x17171708,"destroy enc chn:%d","test_vi_bind_venc_loop",0x7cb,piVar9[0x26a]);
      iVar3 = RK_MPI_VENC_DestroyChn(piVar9[0x26a]);
      piVar9 = piVar14;
      if (iVar3 != 0) break;
      if (param_1 + iVar7 * 0x66 == piVar14) goto LAB_00019734;
    }
    RK_LOG(2,0x17171708,"RK_MPI_VDEC_DestroyChn fail %x","test_vi_bind_venc_loop",0x7ce,iVar3);
  } while (param_1 + iVar7 * 0x66 != piVar14);
LAB_00019734:
  if (param_1[0x43f] != 0) {
    iVar3 = RK_MPI_SYS_UnBind(local_88,&local_58);
    if (iVar3 != 0) {
      RK_LOG(2,0x17171708,"RK_MPI_SYS_UnBind vi ivs fail %x","test_vi_bind_venc_loop",0x7d5,iVar3);
    }
    RK_MPI_IVS_DestroyChn(0);
  }
  iVar3 = RK_MPI_VI_DisableDev(param_1[2]);
  RK_LOG(2,0x17171708,"RK_MPI_VI_DisableDev %x","test_vi_bind_venc_loop",0x7dc,iVar3);
  piVar14 = param_1 + iVar7 * 100;
  piVar9 = param_1;
  do {
    piVar2 = piVar9 + 0x2d4;
    piVar9 = piVar9 + 100;
    if ((void *)*piVar2 != (void *)0x0) {
      free((void *)*piVar2);
    }
    piVar2 = param_1 + 0x26b;
    param_1 = param_1 + 0x66;
    if ((FILE *)*piVar2 != (FILE *)0x0) {
      fclose((FILE *)*piVar2);
    }
  } while (piVar9 != piVar14);
  return iVar3;
}



/* ===== init_venc_cfg @ 00019de4 size=192 ===== */

/* init_venc_cfg(_rkMpiVICtx*, unsigned int, rkCODEC_ID_E) */

void init_venc_cfg(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + param_2 * 0x33 + 0x104) = param_3;
  *(int *)(param_1 + param_2 * 0x33 + 0x135) = *(int *)((int)param_1 + 0x14) + param_2;
  *(undefined4 *)((int)param_1 + param_2 * 0x198 + 0x82c) = *(undefined4 *)(param_1 + 0x19);
  if (*(int *)((int)param_1 + 0x1104) == 0) {
    uVar4 = 1;
    *(undefined4 *)(param_1 + param_2 * 0x33 + 0x111) = *(undefined4 *)((int)param_1 + 0x10ec);
  }
  else {
    *(undefined4 *)(param_1 + param_2 * 0x33 + 0x111) = *(undefined4 *)((int)param_1 + 0x10ec);
    uVar4 = 2;
    *(undefined4 *)(param_1 + param_2 * 0x33 + 0x112) = *(undefined4 *)(param_1 + 0x21e);
    *(undefined4 *)((int)param_1 + param_2 * 0x198 + 0x88c) = *(undefined4 *)((int)param_1 + 0x10f4)
    ;
  }
  iVar1 = param_2 * 0x198;
  *(undefined4 *)(param_1 + param_2 * 0x33 + 0x10e) = uVar4;
  *(undefined4 *)((int)param_1 + iVar1 + 0x874) = *(undefined4 *)(param_1 + 0x221);
  iVar3 = *(int *)(param_1 + 0x222);
  iVar2 = *(int *)((int)param_1 + 0x110c);
  *(undefined8 *)((int)param_1 + iVar1 + 0x824) = *(undefined8 *)((int)param_1 + 0x110c);
  uVar5 = *param_1;
  param_1[param_2 * 0x33 + 0x108] = uVar5;
  param_1[param_2 * 0x33 + 0x109] = uVar5;
  *(uint *)((int)param_1 + iVar1 + 0x834) = (uint)(iVar3 * iVar2) >> 1;
  *(undefined4 *)(param_1 + param_2 * 0x33 + 0x10a) = 5;
  *(undefined4 *)(param_1 + param_2 * 0x33 + 0x114) = 1;
  return;
}



/* ===== test_vi_poll_event @ 00019ea4 size=172 ===== */

/* test_vi_poll_event(int, int) */

int test_vi_poll_event(int param_1,int param_2)

{
  int iVar1;
  pollfd local_10;
  
  if (0 < param_2) {
    local_10.revents = 0;
    local_10.events = 0x3b;
    local_10.fd = param_2;
    iVar1 = poll(&local_10,1,param_1);
    if ((0 < iVar1) && ((local_10.revents & 0x38U) != 0)) {
      RK_LOG(2,0x17171708,"fd:%d polled error","test_vi_poll_event",0x315,param_2);
      iVar1 = -1;
    }
    return iVar1;
  }
  printf("\nASSERT at:\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n","test_vi_poll_event"
         ,0x30d,"fd > 0");
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}



/* ===== FUN_00019f50 @ 00019f50 size=64 ===== */

void FUN_00019f50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0xe064;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0xe048;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00019f90 @ 00019f90 size=588 ===== */

undefined4 FUN_00019f90(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00019fc4_default;
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
    goto LAB_0001a000;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_0001a000:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_0001a1d8:
                    /* WARNING: Subroutine does not return */
        FUN_00019f50(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_0001a1c0:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00019f50(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00019f50(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001a1d8;
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
    if (iVar4 != 0) goto LAB_0001a1c0;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00019f50(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_0001a1d8;
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
switchD_00019fc4_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 0001a1f0 size=48 ===== */

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



/* ===== argparse_describe @ 0001a220 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 0001a234 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_0001a32c;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_0001a32c:
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
          if (piVar7[2] != 0) goto LAB_0001a410;
LAB_0001a428:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_0001a584;
LAB_0001a434:
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
          if (piVar7[2] == 0) goto LAB_0001a428;
          if ((char)piVar7[1] == '\0') {
LAB_0001a410:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_0001a428;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_0001a410;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_0001a434;
LAB_0001a584:
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



/* ===== argparse_parse @ 0001a650 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_0001a6b0;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_0001a6b0:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x0001a6bc:
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
            if (piVar11[8] == 0) goto LAB_0001a874;
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
          while (iVar5 = FUN_00019f90(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_0001a800;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_0001a96c;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_0001a96c;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00019f90(param_1);
              if (iVar5 == -2) goto LAB_0001a96c;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_0001a96c:
          pcVar10 = *(char **)param_1[6];
          goto LAB_0001a878;
        }
        goto LAB_0001a874;
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
LAB_0001a7cc:
                if (*pcVar3 == '\0') goto LAB_0001a7e8;
                if (*pcVar3 == '=') goto code_r0x0001a7e0;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_0001a9cc;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_0001a820;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_0001a7cc;
                }
              }
            }
LAB_0001a820:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_0001a878;
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
        goto LAB_0001a6f4;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x0001a7e0:
  param_1[9] = (int)(pcVar3 + 1);
LAB_0001a7e8:
  iVar5 = FUN_00019f90(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_0001a874:
    pcVar10 = (char *)*__src;
LAB_0001a878:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_0001a800:
  param_2 = param_1[5];
LAB_0001a6f4:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x0001a6bc;
}



/* ===== argparse_help_cb @ 0001a9d0 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== TEST_COMM_GetNowUs @ 0001a9e0 size=72 ===== */

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



/* ===== TEST_COMM_GetUriSchemeType @ 0001aa28 size=924 ===== */

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



/* ===== TEST_COMM_OpenFileUris @ 0001adc4 size=540 ===== */

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
            if (__maxlen == 0) goto LAB_0001af38;
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
LAB_0001af38:
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



/* ===== TEST_COMM_CloseFileUris @ 0001afe0 size=56 ===== */

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



/* ===== TEST_COMM_FileReadOneFrame @ 0001b018 size=372 ===== */

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



/* ===== TEST_COMM_FileWriteOneFrame @ 0001b18c size=308 ===== */

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



/* ===== TEST_COMM_MkDirs @ 0001b2c0 size=184 ===== */

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
        if (pcVar3 == local_218 + sVar1) goto LAB_0001b338;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != local_218 + sVar1);
LAB_0001b338:
    iVar2 = access(local_218,0);
    if (iVar2 != 0) {
      mkdir(local_218,param_2);
      return;
    }
  }
  return;
}



/* ===== TEST_COMM_CheckFileSizeInRange @ 0001b378 size=284 ===== */

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



/* ===== TEST_COMM_GetSocType @ 0001b494 size=540 ===== */

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
  if (DAT_0002f230 != 0) {
    return DAT_0002f230;
  }
  __stream = fopen64("/proc/device-tree/compatible","r");
  memset(local_418,0,0x400);
  if (__stream == (FILE *)0x0) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"open failed.","TEST_COMM_GetSocType",0x130);
    goto LAB_0001b560;
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
        if (pcVar1 == (char *)0x0) goto LAB_0001b550;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
LAB_0001b550:
      iVar2 = 1;
    }
  }
  fclose(__stream);
LAB_0001b560:
  DAT_0002f230 = iVar2;
  RK_LOG(5,0x17171700,"get the rkchip:%d.","TEST_COMM_GetSocType",0x133,iVar2);
  return iVar2;
}



/* ===== _fini @ 0001b6b0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00030000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00030004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00030010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00030014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00030018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0003001c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00030020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00030024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00030028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003002c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00030030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00030034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetAttr @ 00030038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003003c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00030040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00030044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00030048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DetachMbPool @ 0003004c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DetachMbPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00030050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00030054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnFreeze @ 00030058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnFreeze(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003005c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00030060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00030064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 00030068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003006c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00030070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00030074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00030078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003007c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00030080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00030084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00030088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003008c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00030090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 00030094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00030098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_ReleaseResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 0003009c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 000300a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 000300a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetDeBreathEffect @ 000300a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetDeBreathEffect(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000300ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000300b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000300b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_exit @ 000300b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pthread_exit(void *__retval)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000300bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_AttachMbPool @ 000300c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_AttachMbPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000300c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000300c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000300cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000300d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000300d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000300d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000300dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000300e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000300e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000300e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000300ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000300f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableThumbnail @ 000300f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableThumbnail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 000300f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000300fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00030100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00030104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00030108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0003010c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00030110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_self @ 00030114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2PhysAddr @ 00030118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2PhysAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003011c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00030120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ThumbnailBind @ 00030124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ThumbnailBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00030128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003012c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 00030130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00030134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00030138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_UpdateCanvas @ 0003013c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_UpdateCanvas(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00030140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00030144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00030148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0003014c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00030150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00030154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 00030158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003015c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00030160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00030164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00030168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003016c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00030170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00030174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00030178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003017c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00030180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00030184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00030188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003018c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetAttr @ 00030190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00030194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00030198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003019c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 000301a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 000301a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000301a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000301ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000301b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 000301b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryDevStatus @ 000301b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryDevStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 000301bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 000301c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetCanvasInfo @ 000301c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetCanvasInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000301c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000301cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000301d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000301d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000301d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


