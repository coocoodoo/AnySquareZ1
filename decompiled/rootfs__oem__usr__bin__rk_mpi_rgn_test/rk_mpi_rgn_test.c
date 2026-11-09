// rk_mpi_rgn_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001270c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012730 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003000c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001273c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00030010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012748 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00030014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetCanvasInfo @ 00012754 size=12 ===== */

void RK_MPI_RGN_GetCanvasInfo(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetCanvasInfo_00030018)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00012760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003001c)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 0001276c size=12 ===== */

void RK_MPI_VPSS_GetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpCrop_00030020)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012778 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00030024)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00012784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00030028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00012790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003002c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001279c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00030030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 000127a8 size=12 ===== */

void RK_MPI_VPSS_SetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnCrop_00030034)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 000127b4 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_00030038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_UpdateCanvas @ 000127c0 size=12 ===== */

void RK_MPI_RGN_UpdateCanvas(void)

{
  (*(code *)PTR_RK_MPI_RGN_UpdateCanvas_0003003c)();
  return;
}



/* ===== <EXTERNAL>::getline @ 000127cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_00030040)(__lineptr);
  return _Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000127d8 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00030044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 000127e4 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00030048)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 000127f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0003004c)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000127fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00030050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00030054)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003005c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 0001282c size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_00030060)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00012838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00030064)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00012844 size=12 ===== */

void RK_MPI_VPSS_GetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnCrop_00030068)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00012850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0003006c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 0001285c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00030070)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00012868 size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_00030074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00012874 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_00030078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00012880 size=12 ===== */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ReleaseChnFrame_0003007c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001288c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00030080)();
  return;
}



/* ===== <EXTERNAL>::access @ 00012898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00030084)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 000128a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00030088)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000128b0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0003008c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000128bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00030090)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000128c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00030094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 000128d4 size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_00030098)();
  return;
}



/* ===== <EXTERNAL>::fread @ 000128e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003009c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 000128ec size=12 ===== */

void RK_MPI_VPSS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnFrame_000300a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 000128f8 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_000300a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00012904 size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_000300a8)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012910 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000300ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0001291c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_000300b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00012928 size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_000300b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 00012934 size=12 ===== */

void RK_MPI_VPSS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DisableChn_000300b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00012940 size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_000300bc)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001294c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000300c0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00012958 size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_000300c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 00012964 size=12 ===== */

void RK_MPI_VPSS_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SendFrame_000300c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00012970 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_000300cc)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 0001297c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000300d0)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 00012988 size=12 ===== */

void RK_MPI_VENC_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetChnAttr_000300d4)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012994 size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_000300d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000129a0 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_000300dc)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 000129ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000300e0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 000129b8 size=12 ===== */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotationEx_000300e4)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000129c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000300e8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 000129d0 size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_000300ec)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000129dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000300f0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000129e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000300f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 000129f4 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_000300f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00012a00 size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_000300fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00012a0c size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_00030100)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012a18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00030104)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00012a24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00030108)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00012a30 size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_0003010c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012a3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00030110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00012a48 size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_00030114)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012a54 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00030118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00012a60 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0003011c)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00012a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00030120)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012a78 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00030124)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00012a84 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00030128)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00012a90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003012c)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00012a9c size=12 ===== */

void RK_MPI_VPSS_SetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetGrpCrop_00030130)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012aa8 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00030134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 00012ab4 size=12 ===== */

void RK_MPI_VPSS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ResetGrp_00030138)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00012ac0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003013c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012acc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00030140)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00012ad8 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00030144)();
  return;
}



/* ===== <EXTERNAL>::ftell @ 00012ae4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_00030148)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::free @ 00012af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003014c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012afc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00030150)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00012b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00030154)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00012b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00030158)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00012b20 size=12 ===== */

void RK_MPI_VPSS_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotation_0003015c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 00012b2c size=12 ===== */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotationEx_00030160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 00012b38 size=12 ===== */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetPicBufferSize_00030164)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00012b44 size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_00030168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00012b50 size=12 ===== */

void RK_MPI_VPSS_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotation_0003016c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00012b5c size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_00030170)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012b68 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00030174)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00030178)(__th);
  return iVar1;
}



/* ===== main @ 00012b80 size=1952 ===== */

int main(undefined4 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_530 [40];
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  int local_4e0;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  undefined1 auStack_4d0 [4];
  undefined4 local_4cc;
  undefined1 auStack_4c8 [4];
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [4];
  undefined4 local_4bc [3];
  int local_4b0;
  undefined4 local_4ac;
  undefined1 auStack_4a8 [4];
  undefined1 auStack_4a4 [4];
  undefined1 auStack_4a0 [4];
  undefined4 local_49c;
  undefined1 auStack_498 [4];
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined4 local_480 [2];
  undefined *local_478;
  char *local_470;
  code *local_46c;
  undefined4 local_464;
  undefined4 local_460;
  char *local_450;
  undefined4 local_440;
  undefined1 local_43c;
  char *local_438;
  _rkTestRGNCtx *local_434;
  char *local_430;
  undefined4 local_420;
  char *local_418;
  undefined4 *local_414;
  char *local_410;
  undefined4 local_400;
  undefined1 local_3fc;
  char *local_3f8;
  undefined4 *local_3f4;
  char *local_3f0;
  undefined4 local_3e0;
  undefined1 local_3dc;
  char *local_3d8;
  undefined4 *local_3d4;
  char *local_3d0;
  undefined4 local_3c0;
  undefined1 local_3bc;
  char *local_3b8;
  undefined4 *local_3b4;
  char *local_3b0;
  undefined4 local_3a0;
  undefined1 local_39c;
  char *local_398;
  undefined4 *local_394;
  char *local_390;
  undefined4 local_380;
  undefined1 local_37c;
  char *local_378;
  undefined4 *local_374;
  char *local_370;
  undefined4 local_360;
  undefined1 local_35c;
  char *local_358;
  int *local_354;
  char *local_350;
  undefined4 local_340;
  undefined1 local_33c;
  char *local_338;
  int *local_334;
  char *local_330;
  undefined4 local_320;
  char *local_318;
  undefined4 *local_314;
  char *local_310;
  undefined4 local_300;
  char *local_2f8;
  undefined4 *local_2f4;
  char *local_2f0;
  undefined4 local_2e0;
  undefined1 local_2dc;
  char *local_2d8;
  undefined1 *local_2d4;
  char *local_2d0;
  undefined4 local_2c0;
  char *local_2b8;
  undefined1 *local_2b4;
  char *local_2b0;
  undefined4 local_2a0;
  char *local_298;
  undefined1 *local_294;
  char *local_290;
  undefined4 local_280;
  undefined1 local_27c;
  char *local_278;
  int *local_274;
  char *local_270;
  undefined4 local_260;
  undefined1 local_25c;
  char *local_258;
  int *local_254;
  char *local_250;
  undefined4 local_240;
  undefined1 local_23c;
  char *local_238;
  undefined1 *local_234;
  char *local_230;
  undefined4 local_220;
  undefined1 local_21c;
  char *local_218;
  undefined4 *local_214;
  char *local_210;
  undefined4 local_200;
  undefined *local_1f8;
  undefined4 *local_1f4;
  char *local_1f0;
  undefined4 local_1e0;
  undefined *local_1d8;
  undefined4 *local_1d4;
  char *local_1d0;
  undefined4 local_1c0;
  char *local_1b8;
  undefined4 *local_1b4;
  char *local_1b0;
  undefined4 local_1a0;
  undefined *local_198;
  int *local_194;
  char *local_190;
  undefined4 local_180;
  undefined1 local_17c;
  char *local_178;
  undefined4 *local_174;
  char *local_170;
  undefined4 local_160;
  char *local_158;
  undefined1 *local_154;
  char *local_150;
  undefined4 local_140;
  char *local_138;
  undefined1 *local_134;
  char *local_130;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *local_114;
  char *local_110;
  undefined4 local_100;
  undefined *local_f8;
  undefined4 *local_f4;
  char *local_f0;
  undefined4 local_e0;
  char *local_d8;
  undefined1 *local_d4;
  char *local_d0;
  undefined4 local_c0;
  char *local_b8;
  undefined8 *local_b4;
  char *local_b0;
  undefined4 local_a0;
  char *local_98;
  undefined8 *local_94;
  char *local_90;
  undefined4 local_80;
  char *local_78;
  int local_74;
  char *local_70;
  undefined4 local_60;
  undefined1 local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  
  memset((_rkTestRGNCtx *)&local_508,0,0x84);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x100000001;
  auVar1 = auVar1 << 0x40 | auVar1;
  local_4f8 = *(undefined4 *)auVar1;
  uStack_4f4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  local_4f0 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uStack_4ec = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  local_4b0 = 4;
  local_494 = DAT_00012fb0;
  uStack_48c = DAT_00012fb8;
  local_4cc = 0x10010;
  local_4ac = 8;
  local_49c = 0xffffff;
  memset(local_480,0,0x460);
  local_478 = &DAT_0001db4c;
  local_470 = "show this help message and exit";
  local_46c = argparse_help_cb;
  local_450 = "basic options:";
  local_438 = "input_raw_name";
  local_430 = "input raw data file name. default(RK_NULL)";
  local_418 = "input_bmp_name";
  local_410 = "input bmp data file name. e.g.(/userdata/mm.bmp). default(NULL)";
  local_3f8 = "output_name";
  local_3f0 = "output stream file name. default(RK_NULL).";
  local_3d8 = "rgn_count";
  local_3d0 = "the number of rgn handle. default(1).";
  local_3b8 = "operation";
  local_3b0 = "RGN operation. default(0). 0: overlay. 1: cover. 2: mosaic.";
  local_398 = "rect_x";
  local_480[0] = 2;
  local_464 = 1;
  local_460 = 1;
  local_3e0 = 4;
  local_3c0 = 4;
  local_3a0 = 4;
  local_380 = 4;
  local_390 = "RGN region pos x. default(0).";
  local_440 = 6;
  local_420 = 6;
  local_400 = 6;
  local_43c = 0x69;
  local_3fc = 0x6f;
  local_3dc = 0x72;
  local_3bc = 0x70;
  local_39c = 0x78;
  local_37c = 0x79;
  local_378 = "rect_y";
  local_254 = &local_4d4;
  local_370 = "RGN region pos x. default(0).";
  local_360 = 4;
  local_340 = 4;
  local_320 = 4;
  local_300 = 4;
  local_2e0 = 4;
  local_2c0 = 4;
  local_2a0 = 4;
  local_280 = 4;
  local_260 = 4;
  local_358 = "bmp_w";
  local_350 = "bmp width. default(0). <required>";
  local_338 = "bmp_h";
  local_330 = "bmp height. default(0). <required>";
  local_318 = "bmp_c";
  local_310 = "set bitmap count. default(1). <required>";
  local_2f8 = "cav_c";
  local_2f0 = "update canvas count. default(1). <required>";
  local_2d8 = "rgn_qp";
  local_2d0 = "rgn roi qp. default(0). ";
  local_2b8 = "bAbsQp";
  local_2b0 = "rgn Abs qp. default(0). ";
  local_298 = "s32Qp";
  local_290 = "rgn Qp number. default(0). ";
  local_278 = "raw_w";
  local_270 = "raw width. default(0). <required>";
  local_258 = "raw_h";
  local_35c = 0x77;
  local_33c = 0x68;
  local_2dc = 0x71;
  local_27c = 0x57;
  local_25c = 0x48;
  local_250 = "raw height. default(0). <required>";
  local_240 = 4;
  local_220 = 4;
  local_200 = 4;
  local_1e0 = 4;
  local_1c0 = 4;
  local_1a0 = 4;
  local_180 = 4;
  local_160 = 4;
  local_140 = 4;
  local_120 = 4;
  local_238 = "raw_fmt";
  local_230 = "raw pixel format. default(0). 0: NV12";
  local_218 = "format";
  local_210 = 
  "bmp pixel format. default(65552).65552: ARGB8888, 65553: ABGR8888,65554: BGRA8888,65555: RGBA8888"
  ;
  local_1f8 = &DAT_0001d1b0;
  local_1d8 = &DAT_0001d1b0;
  local_1f0 = "65548: ARGB4444, 65549: ABGR4444,65558: BGRA4444,65559: RGBA4444";
  local_1d0 = "65546: ARGB1555, 65547: ABGR1555,65556: RGBA5551, 65557: BGRA5551, 65561: 2BPP";
  local_1b8 = "clut_num";
  local_1b0 = "set color loop up table num. default(0). range[0, 255].";
  local_198 = &DAT_0001dfec;
  local_190 = "attach module. default(4), 4: VENC, 6: VPSS";
  local_178 = "codec";
  local_170 = "venc encode codec(8:h264, 9:mjpeg, 12:h265, 15:jpeg, ...). default(8)";
  local_158 = "BgAlpha";
  local_150 = "BgAlpha";
  local_138 = "FgAlpha";
  local_130 = "FgAlpha";
  local_118 = &DAT_0001e07c;
  local_23c = 0x46;
  local_21c = 0x66;
  local_17c = 0x43;
  local_110 = "set 2bpp 0 color. default(0)";
  local_414 = &local_504;
  local_100 = 4;
  local_e0 = 4;
  local_c0 = 4;
  local_a0 = 4;
  local_80 = 4;
  local_60 = 4;
  local_3d4 = &uStack_4f4;
  local_3b4 = &local_4fc;
  local_1b4 = local_4bc;
  local_394 = &local_4e8;
  local_374 = &local_4e4;
  local_334 = &local_4dc;
  local_2f4 = &uStack_4ec;
  local_2d4 = auStack_4c8;
  local_2b4 = auStack_4c4;
  local_f8 = &DAT_0001e0a4;
  local_f0 = "set 2bpp 1 color default(0xffffff)";
  local_d8 = "rgn_inv";
  local_d0 = "rgn invert color enable default(0)";
  local_b8 = "inv_num";
  local_b0 = "rgn invert color thresh default(100)";
  local_98 = "inv_width";
  local_90 = "rgn width of cell inverse area. default(16), 16, 32, 64";
  local_78 = "inv_height";
  local_70 = "rgn height of cell inverse area. default(16), 16, 32, 64";
  local_58 = "rgn_time";
  local_50 = "test rgn number of times. default(1)";
  local_5c = 0x74;
  local_354 = &local_4e0;
  local_314 = &local_4f0;
  local_294 = auStack_4c0;
  local_274 = &local_4d8;
  local_174 = &local_4ac;
  local_214 = &local_4cc;
  local_134 = auStack_4a4;
  local_154 = auStack_4a8;
  local_d4 = auStack_498;
  local_f4 = &local_49c;
  local_234 = auStack_4d0;
  local_b4 = &uStack_48c;
  local_54 = (int)&uStack_48c + 4;
  local_114 = auStack_4a0;
  local_194 = &local_4b0;
  local_74 = (int)&local_494 + 4;
  local_434 = (_rkTestRGNCtx *)&local_508;
  local_3f4 = &local_500;
  local_1f4 = local_214;
  local_1d4 = local_214;
  local_94 = &local_494;
  argparse_init(auStack_530,local_480,&DAT_0001da98,0);
  argparse_describe(auStack_530,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_530,param_1,param_2);
  puts("cmd parse result:");
  printf("rgn input raw file name   : %s\n",local_508);
  printf("rgn input bmp file name   : %s\n",local_504);
  printf("rgn output file name      : %s\n",local_500);
  printf("rgn count                 : %d\n",uStack_4f4);
  printf("rgn operation             : %d\n",local_4fc);
  printf("rgn region pos x          : %d\n",local_4e8);
  printf("rgn region pos y          : %d\n",local_4e4);
  printf("rgn canvas width          : %d\n",local_4e0);
  printf("rgn canvas height         : %d\n",local_4dc);
  printf("rgn raw width             : %d\n",local_4d8);
  printf("rgn raw height            : %d\n",local_4d4);
  printf("clut num                  : %d\n",local_4bc[0]);
  printf("encode codec type         : %d\n",local_4ac);
  if ((((local_4e0 == 0) || (local_4dc == 0)) || (local_4d8 == 0)) || (local_4d4 == 0)) {
    argparse_usage(auStack_530);
    return -1;
  }
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (local_4b0 == 4) {
    iVar2 = unit_test_mpi_rgn_venc((_rkTestRGNCtx *)&local_508);
  }
  else {
    if (local_4b0 != 6) goto LAB_000132d8;
    iVar2 = unit_test_mpi_rgn_vpss((_rkTestRGNCtx *)&local_508);
  }
  if (iVar2 != 0) {
    RK_MPI_SYS_Exit();
    RK_LOG(2,0x17171703,"test running failed!",&DAT_0001db44,0x36d);
    return iVar2;
  }
LAB_000132d8:
  iVar2 = RK_MPI_SYS_Exit();
  if (iVar2 == 0) {
    RK_LOG(4,0x17171703,"test running ok.",&DAT_0001db44,0x368);
  }
  return iVar2;
}



/* ===== _start @ 00013330 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00030058)
            (DAT_00013364,param_2,&stack0x00000004,DAT_00013368,DAT_00013360,param_1);
  return;
}



/* ===== FUN_0001336c @ 0001336c size=32 ===== */

void FUN_0001336c(void)

{
  if (DAT_00013390 == DAT_0001338c) {
    return;
  }
  if (DAT_00013394 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013394)();
  return;
}



/* ===== _FINI_0 @ 000133d0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001340c;
  if (*DAT_0001340c != '\0') {
    return;
  }
  FUN_0001336c();
  if (DAT_00013410 != 0) {
    __deregister_frame_info(DAT_00013414);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013418 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001343c != 0) {
    __register_frame_info(DAT_00013444,DAT_00013440);
  }
  if ((DAT_000133c8 - DAT_000133c4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000133cc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000133c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000133cc)();
  return;
}



/* ===== load_file_osdmem @ 00013448 size=180 ===== */

/* load_file_osdmem(char const*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned
   int) */

undefined4
load_file_osdmem(char *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  FILE *__stream;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    RK_LOG(2,0x17171703,"open filename: %s file failed!","load_file_osdmem",0x84,param_1);
    uVar2 = 0xffffffff;
  }
  else {
    if (param_4 != 0) {
      uVar3 = 0;
      uVar4 = uVar3;
      do {
        uVar1 = uVar3 >> (param_6 & 0xff);
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + param_5 * param_3;
        fread(param_2 + uVar1,1,param_5 * param_3 >> (param_6 & 0xff),__stream);
      } while (param_4 != uVar4);
    }
    fclose(__stream);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== TEST_RGN_LOAD_MEM @ 000134fc size=444 ===== */

/* TEST_RGN_LOAD_MEM(char const*, rkBITMAP_S*, _rkTestRGNCtx*) */

undefined4 TEST_RGN_LOAD_MEM(char *param_1,rkBITMAP_S *param_2,_rkTestRGNCtx *param_3)

{
  uint uVar1;
  void *__s;
  FILE *__stream;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_3 + 0x3c);
  if (iVar8 - 0x1000aU < 0x11) {
    iVar3 = 1;
    uVar9 = 1 << (iVar8 - 0x1000aU & 0xff);
    if ((uVar9 & 0x3c0f) == 0) {
      if ((uVar9 & 0x3c0) == 0) {
        if ((uVar9 & 0x10000) == 0) goto LAB_00013610;
        iVar4 = 2;
      }
      else {
        iVar3 = 4;
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0;
      iVar3 = 2;
    }
    iVar6 = *(int *)(param_3 + 0x28);
    uVar5 = *(uint *)(param_3 + 0x2c);
    uVar9 = iVar3 * uVar5 * iVar6 >> iVar4;
    __s = malloc(uVar9);
    *(void **)(param_2 + 0x10) = __s;
    if (param_1 == (char *)0x0) {
      memset(__s,0xff,uVar9);
    }
    else {
      __stream = fopen64(param_1,"rb");
      if (__stream == (FILE *)0x0) {
        RK_LOG(2,0x17171703,"open filename: %s file failed!","load_file_osdmem",0x84,param_1);
        RK_LOG(2,0x17171703,"Load file osd memory failed!","TEST_RGN_LOAD_MEM",0xba);
        return 0xffffffff;
      }
      if (uVar5 != 0) {
        uVar7 = 0;
        uVar9 = uVar7;
        do {
          uVar1 = uVar7 >> iVar4;
          uVar9 = uVar9 + 1;
          uVar7 = uVar7 + iVar3 * iVar6;
          fread((void *)((int)__s + uVar1),1,(uint)(iVar3 * iVar6) >> iVar4,__stream);
        } while (uVar5 != uVar9);
      }
      fclose(__stream);
      iVar6 = *(int *)(param_3 + 0x28);
      uVar5 = *(uint *)(param_3 + 0x2c);
      iVar8 = *(int *)(param_3 + 0x3c);
    }
    uVar2 = 0;
    *(int *)(param_2 + 4) = iVar6;
    *(uint *)(param_2 + 8) = uVar5;
    *(int *)param_2 = iVar8;
  }
  else {
LAB_00013610:
    RK_LOG(2,0x17171703,"no support style","TEST_RGN_LOAD_MEM",0xb0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== test_rgn_overlay_process @ 000136b8 size=2244 ===== */

/* test_rgn_overlay_process(_rkTestRGNCtx*, rkMPP_CHN_S*) */

undefined * test_rgn_overlay_process(_rkTestRGNCtx *param_1,rkMPP_CHN_S *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *__s;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int iStack_4b8;
  int local_4b4;
  undefined8 local_4b0;
  uint local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined8 local_494;
  undefined8 local_48c;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  int local_464;
  undefined1 auStack_460 [1024];
  rkBITMAP_S arStack_60 [16];
  void *local_50;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar9 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      local_464 = *(int *)(param_1 + 0x4c);
      local_474 = *(undefined4 *)(param_1 + 0x3c);
      local_470 = *(undefined4 *)(param_1 + 0x28);
      local_46c = *(undefined4 *)(param_1 + 0x2c);
      local_478 = 0;
      if (local_464 != 0) {
        memcpy(auStack_460,&DAT_0001d698,0x400);
      }
      iVar3 = RK_MPI_RGN_Create(uVar9,&local_478);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171703,"RK_MPI_RGN_Create (%d) failed with %#x!","test_rgn_overlay_process",
               0xe2,uVar9,iVar3);
        RK_MPI_RGN_Destroy(uVar9);
        return (undefined *)0xffffffff;
      }
      RK_LOG(4,0x17171703,"The handle: %d, create success!","test_rgn_overlay_process",0xe6,uVar9);
      uVar2 = uVar9 + 1;
    } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x14));
    if (0 < *(int *)(param_1 + 0x14)) {
      uVar19 = 0;
      uVar21 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar2 = 0;
      do {
        uVar9 = uVar2;
        local_49c = 1;
        local_4b4 = (uVar9 / 3) * 0x96 + *(int *)(param_1 + 0x24);
        local_4b0 = VectorTranspose(*(undefined8 *)(param_1 + 100),4);
        local_4a4 = *(undefined4 *)(param_1 + 0x40);
        iStack_4b8 = (uVar9 % 3) * 0x96 + *(int *)(param_1 + 0x20);
        local_4a0 = *(undefined4 *)(param_1 + 0x44);
        auVar1._8_8_ = *(undefined8 *)(param_1 + 0x6c);
        auVar1._0_8_ = *(undefined8 *)(param_1 + 100);
        local_494 = auVar1._4_8_;
        local_48c = *(undefined8 *)(param_1 + 0x74);
        local_498 = *(undefined4 *)(param_1 + 0x48);
        local_47c = *(undefined4 *)(param_1 + 0x70);
        local_484 = *(undefined4 *)(param_1 + 0x7c);
        local_4c0 = 1;
        local_4bc = uVar19;
        local_4a8 = uVar9;
        uStack_480 = uVar21;
        iVar3 = RK_MPI_RGN_AttachToChn(uVar9,param_2,&local_4c0);
        if (iVar3 != 0) {
          RK_LOG(2,0x17171703,"RK_MPI_RGN_AttachToChn (%d) failed with %#x!",
                 "test_rgn_overlay_process",0x104,uVar9,iVar3);
          return (undefined *)0xffffffff;
        }
        uVar2 = uVar9 + 1;
      } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x14));
    }
  }
  RK_LOG(4,0x17171703,"Display region to chn success!","test_rgn_overlay_process",0x109);
  usleep(5000);
  uVar17 = TEST_COMM_GetNowUs();
  iVar3 = TEST_RGN_LOAD_MEM(*(char **)(param_1 + 4),arStack_60,param_1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (0 < iVar3) {
      iVar8 = 0;
      do {
        if (0 < *(int *)(param_1 + 0x14)) {
          uVar2 = 0;
          do {
            uVar9 = uVar2;
            iVar3 = RK_MPI_RGN_SetBitMap(uVar9,arStack_60);
            if (iVar3 != 0) {
              RK_LOG(2,0x17171703,"RK_MPI_RGN_SetBitMap failed with %#x!","test_rgn_overlay_process"
                     ,0x11b,iVar3);
              return (undefined *)0xffffffff;
            }
            uVar2 = uVar9 + 1;
          } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x14));
          iVar3 = *(int *)(param_1 + 0x18);
        }
        if ((iVar3 + -1 == iVar8) && (local_50 != (void *)0x0)) {
          free(local_50);
          local_50 = (void *)0x0;
        }
        iVar8 = iVar8 + 1;
        RK_LOG(2,0x17171703,"RK_MPI_RGN_SetBitMap success count: %d!","test_rgn_overlay_process",
               0x126,iVar8);
        usleep(1000000);
        iVar3 = *(int *)(param_1 + 0x18);
      } while (iVar8 < iVar3);
    }
    uVar18 = TEST_COMM_GetNowUs();
    iVar3 = (uint)uVar18 - (uint)uVar17;
    iVar8 = (int)((ulonglong)uVar18 >> 0x20) -
            ((int)((ulonglong)uVar17 >> 0x20) + (uint)((uint)uVar18 < (uint)uVar17));
    RK_LOG(4,0x17171703,"Handle:%d, space time %lld us, load bmp success!",
           "test_rgn_overlay_process",0x12a,uVar9,iVar3,iVar8);
    uVar17 = TEST_COMM_GetNowUs();
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar10 = 0;
      do {
        if (0 < *(int *)(param_1 + 0x14)) {
          iVar13 = 0;
          iVar14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          __s = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uVar2 = 0;
          do {
            uVar9 = uVar2;
            iVar4 = iVar13;
            iVar15 = iVar14;
            pvVar16 = __s;
            iVar5 = RK_MPI_RGN_GetCanvasInfo(uVar9);
            if (iVar5 != 0) {
              RK_LOG(2,0x17171703,"RK_MPI_RGN_GetCanvasInfo failed with %#x!",
                     "test_rgn_overlay_process",0x138,iVar5);
              goto LAB_00013b78;
            }
            memset(__s,0xff,(uint)(iVar14 * iVar13) >> 2);
            iVar13 = iVar4;
            iVar14 = iVar15;
            __s = pvVar16;
            iVar4 = RK_MPI_RGN_UpdateCanvas(uVar9);
            if (iVar4 != 0) {
              RK_LOG(2,0x17171703,"RK_MPI_RGN_UpdateCanvas failed with %#x!",
                     "test_rgn_overlay_process",0x13f,iVar4);
              goto LAB_00013b78;
            }
            uVar2 = uVar9 + 1;
          } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x14));
        }
        iVar10 = iVar10 + 1;
        RK_LOG(2,0x17171703,"RK_MPI_RGN_UpdateCanvas success count: %d!","test_rgn_overlay_process",
               0x143,iVar10,iVar3,iVar8);
        usleep(1000000);
      } while (iVar10 < *(int *)(param_1 + 0x1c));
    }
    uVar18 = TEST_COMM_GetNowUs();
    iVar8 = (int)((ulonglong)uVar18 >> 0x20) -
            ((int)((ulonglong)uVar17 >> 0x20) + (uint)((uint)uVar18 < (uint)uVar17));
    RK_LOG(4,0x17171703,"Handle:%d, space time %lld us, update canvas success!",
           "test_rgn_overlay_process",0x147,uVar9,(uint)uVar18 - (uint)uVar17,iVar8);
    uVar17 = TEST_COMM_GetNowUs();
    iVar3 = TEST_RGN_ChangePosition(0,param_2,0x80);
    if (iVar3 == 0) {
      uVar18 = TEST_COMM_GetNowUs();
      uVar21 = 0x80;
      uVar19 = 0x80;
      iVar10 = 2;
      iVar8 = (int)((ulonglong)uVar18 >> 0x20) -
              ((int)((ulonglong)uVar17 >> 0x20) + (uint)((uint)uVar18 < (uint)uVar17));
      RK_LOG(4,0x17171703,
             "Handle:%d, space time %lld us, change point success,new point(x:%d,y:%d)!",
             "test_rgn_overlay_process",0x15b,0,(uint)uVar18 - (uint)uVar17,iVar8,0x80,0x80);
      usleep(50000);
      bVar7 = false;
      do {
        iVar3 = TEST_RGN_ShowOrHide(0,param_2,bVar7);
        if (iVar3 != 0) {
          uVar19 = 0x167;
          pcVar6 = "Region(%d) show failed with %#x!";
          goto LAB_00013c6c;
        }
        bVar7 = !bVar7;
        if (bVar7) {
          puVar20 = &DAT_0001d68c;
          RK_LOG(4,0x17171703,"Handle:%d, %s osd success","test_rgn_overlay_process",0x16a,0,
                 &DAT_0001d68c,iVar8,uVar19,uVar21);
        }
        else {
          puVar20 = &DAT_0001d684;
          RK_LOG(4,0x17171703,"Handle:%d, %s osd success","test_rgn_overlay_process",0x16a,0,
                 &DAT_0001d684,iVar8,uVar19,uVar21);
        }
        usleep(300000);
        bVar12 = iVar10 != 1;
        iVar10 = 1;
      } while (bVar12);
      puVar11 = (undefined *)0x0;
      if (0 < *(int *)(param_1 + 0x14)) {
        iVar3 = 0;
        do {
          iVar8 = RK_MPI_RGN_DetachFromChn(iVar3,param_2);
          if (iVar8 != 0) {
            RK_LOG(2,0x17171703,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!",
                   "test_rgn_overlay_process",0x178,iVar3,iVar8);
            return (undefined *)0xffffffff;
          }
          iVar8 = iVar3 + 1;
          RK_LOG(4,0x17171703,"Detach handle:%d from chn success","test_rgn_overlay_process",0x17c,
                 iVar3);
          usleep(5000);
          iVar3 = iVar8;
        } while (iVar8 < *(int *)(param_1 + 0x14));
        if (0 < *(int *)(param_1 + 0x14)) {
          iVar3 = 0;
          do {
            while (puVar11 = (undefined *)RK_MPI_RGN_Destroy(iVar3), puVar11 != (undefined *)0x0) {
              puVar20 = puVar11;
              RK_LOG(2,0x17171703,"RK_MPI_RGN_Destroy [%d] failed with %#x",
                     "test_rgn_overlay_process",0x187,iVar3,puVar11);
              RK_LOG(4,0x17171703,"Destory handle:%d success","test_rgn_overlay_process",0x189,iVar3
                    );
              iVar3 = iVar3 + 1;
              if (*(int *)(param_1 + 0x14) <= iVar3) {
                return puVar11;
              }
            }
            iVar8 = iVar3 + 1;
            RK_LOG(4,0x17171703,"Destory handle:%d success","test_rgn_overlay_process",0x189,iVar3,
                   puVar20);
            puVar11 = (undefined *)0x0;
            iVar3 = iVar8;
          } while (iVar8 < *(int *)(param_1 + 0x14));
        }
      }
    }
    else {
      uVar19 = 0x154;
      pcVar6 = "Change region(%d) position failed with %#x!";
LAB_00013c6c:
      RK_LOG(2,0x17171703,pcVar6,"test_rgn_overlay_process",uVar19,0,iVar3,iVar8);
LAB_00013b78:
      puVar11 = (undefined *)0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x17171703,"Load osd file failed with %#x!","test_rgn_overlay_process",0x112,iVar3);
    puVar11 = (undefined *)0xffffffff;
  }
  return puVar11;
}



/* ===== test_rgn_cover_process @ 00013f80 size=960 ===== */

/* test_rgn_cover_process(_rkTestRGNCtx*, rkMPP_CHN_S*) */

int test_rgn_cover_process(_rkTestRGNCtx *param_1,rkMPP_CHN_S *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_448 [262];
  
  memset(local_448,0,0x418);
  memset(&local_490,0,0x48);
  uVar1 = DAT_00014340;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      local_448[0] = 2;
      iVar4 = RK_MPI_RGN_Create(iVar3,local_448);
      if (iVar4 != 0) {
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_cover_process",0x19d,iVar4);
        return -1;
      }
      local_488 = *(undefined8 *)(param_1 + 0x20);
      iVar4 = iVar3 + 1;
      local_480 = *(undefined8 *)(param_1 + 0x28);
      local_478 = CONCAT44(iVar3,0xf800);
      local_490 = uVar1;
      iVar3 = RK_MPI_RGN_AttachToChn(iVar3,param_2,&local_490);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_cover_process",0x1ab,iVar3);
        iVar4 = *(int *)(param_1 + 0x14);
        goto LAB_00014204;
      }
      iVar3 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  RK_LOG(4,0x17171703,"create an cover region and attach it to chn0","test_rgn_cover_process",0x1b0)
  ;
  usleep(1000000);
  uVar2 = DAT_00014350;
  uVar1 = DAT_00014348;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar3 = RK_MPI_RGN_GetDisplayAttr(iVar4,param_2,&local_490);
      if (iVar3 != 0) {
        uVar5 = 0x1b7;
        goto LAB_00014180;
      }
      local_488 = CONCAT44(iVar4 << 6,iVar4 << 6);
      local_480 = uVar1;
      local_478 = uVar2;
      iVar3 = RK_MPI_RGN_SetDisplayAttr(iVar4,param_2,&local_490);
      if (iVar3 != 0) {
        uVar5 = 0x1c2;
        goto LAB_00014180;
      }
      iVar3 = iVar4 + 1;
      RK_LOG(4,0x17171703,"resize the cover region %d to <%d, %d, %d, %d>, color<0x%x>",
             "test_rgn_cover_process",0x1cc,iVar4,(undefined4)local_488,local_488._4_4_,
             (undefined4)local_480,local_480._4_4_,(undefined4)local_478);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  usleep(500000);
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      iVar3 = TEST_RGN_ShowOrHide(iVar4,param_2,0);
      iVar4 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  RK_LOG(4,0x17171703,"hide the cover and the overlay success","test_rgn_cover_process",0x1d4);
  usleep(500000);
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      iVar3 = TEST_RGN_ShowOrHide(iVar4,param_2);
      if (iVar3 != 0) {
        uVar5 = 0x1db;
LAB_00014180:
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_cover_process",uVar5,iVar3);
        goto LAB_000141a4;
      }
      iVar4 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  RK_LOG(4,0x17171703,"show the cover and the overlay success","test_rgn_cover_process",0x1e0);
  usleep(500000);
LAB_000141a4:
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar6 = 0;
    do {
      RK_MPI_RGN_DetachFromChn(iVar6,param_2);
      iVar4 = *(int *)(param_1 + 0x14);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
LAB_00014204:
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        RK_MPI_RGN_Destroy(iVar4);
        iVar4 = iVar6;
      } while (iVar6 < *(int *)(param_1 + 0x14));
      return iVar3;
    }
  }
  return iVar3;
}



/* ===== test_rgn_mosaic_process @ 00014358 size=952 ===== */

/* test_rgn_mosaic_process(_rkTestRGNCtx*, rkMPP_CHN_S*) */

int test_rgn_mosaic_process(_rkTestRGNCtx *param_1,rkMPP_CHN_S *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  int local_478;
  int local_474;
  undefined4 local_448 [263];
  
  memset(local_448,0,0x418);
  memset(&local_490,0,0x48);
  uVar1 = DAT_00014710;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      local_448[0] = 3;
      iVar3 = RK_MPI_RGN_Create(iVar2,local_448);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_mosaic_process",0x1ff,iVar3);
        return -1;
      }
      local_488 = *(undefined8 *)(param_1 + 0x20);
      iVar5 = iVar2 + 1;
      local_480 = *(undefined8 *)(param_1 + 0x28);
      local_490 = uVar1;
      local_478 = iVar3;
      local_474 = iVar2;
      iVar2 = RK_MPI_RGN_AttachToChn(iVar2,param_2,&local_490);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_mosaic_process",0x20d,iVar2);
        iVar3 = *(int *)(param_1 + 0x14);
        goto LAB_000145b8;
      }
      iVar2 = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  RK_LOG(4,0x17171703,"create an cover region and attach it to chn0","test_rgn_mosaic_process",0x212
        );
  usleep(1000000);
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar3 = TEST_RGN_ChangePosition(iVar2,param_2,iVar2 << 6);
      if (iVar3 != 0) {
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_mosaic_process",0x219,iVar3);
        iVar2 = 0;
        goto LAB_00014558;
      }
      iVar3 = iVar2 + 1;
      RK_LOG(4,0x17171703,"move the cover region %d to <%d, %d, %d, %d>, blk size<0x%x>",
             "test_rgn_mosaic_process",0x223,iVar2,(undefined4)local_488,local_488._4_4_,
             (undefined4)local_480,local_480._4_4_,local_478);
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  usleep(500000);
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      iVar2 = TEST_RGN_ShowOrHide(iVar2,param_2,0);
      if (iVar2 != 0) {
        uVar4 = 0x22b;
        goto LAB_00014630;
      }
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  RK_LOG(4,0x17171703,"hide the cover and the overlay success","test_rgn_mosaic_process",0x22f);
  usleep(500000);
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      iVar2 = TEST_RGN_ShowOrHide(iVar2,param_2);
      if (iVar2 != 0) {
        uVar4 = 0x236;
LAB_00014630:
        RK_LOG(2,0x17171703,"failed with %#x!","test_rgn_mosaic_process",uVar4,iVar2);
        goto LAB_00014558;
      }
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  iVar2 = 0;
  RK_LOG(4,0x17171703,"show the cover and the overlay success","test_rgn_mosaic_process",0x23b);
  usleep(500000);
LAB_00014558:
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = 0;
    do {
      RK_MPI_RGN_DetachFromChn(iVar5,param_2);
      iVar3 = *(int *)(param_1 + 0x14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
LAB_000145b8:
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        RK_MPI_RGN_Destroy(iVar3);
        iVar3 = iVar5;
      } while (iVar5 < *(int *)(param_1 + 0x14));
    }
  }
  return iVar2;
}



/* ===== unit_test_mpi_rgn_venc @ 00014718 size=360 ===== */

/* unit_test_mpi_rgn_venc(_rkTestRGNCtx*) */

int unit_test_mpi_rgn_venc(_rkTestRGNCtx *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_34 = *(undefined4 *)(param_1 + 0x5c);
  local_28 = *(undefined4 *)param_1;
  uStack_44 = *(undefined8 *)(param_1 + 0x30);
  local_24 = *(undefined4 *)(param_1 + 8);
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = 4;
  local_3c = 4;
  local_54 = 0;
  iVar1 = TEST_VENC_Start();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x80) != 0) {
      uVar2 = 0;
      do {
        uVar3 = VectorShiftLeft(CONCAT44(uVar2,uVar2),5,0x20,0);
        uVar3 = VectorAdd(*(undefined8 *)(param_1 + 0x28),uVar3,4);
        *(undefined8 *)(param_1 + 0x28) = uVar3;
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          iVar1 = test_rgn_overlay_process(param_1,(rkMPP_CHN_S *)&local_58);
        }
        else {
          if (iVar1 != 2) {
            RK_LOG(2,0x17171703,"unsupport operation %d.","unit_test_mpi_rgn_venc",0x270,iVar1);
            return -1;
          }
          iVar1 = test_rgn_cover_process(param_1,(rkMPP_CHN_S *)&local_58);
        }
        uVar2 = uVar2 + 1;
        if (iVar1 != 0) {
          return iVar1;
        }
        RK_LOG(4,0x17171703,"Rgn run number of time: %d\n","unit_test_mpi_rgn_venc",0x276,uVar2);
      } while (uVar2 < *(uint *)(param_1 + 0x80));
    }
    iVar1 = TEST_VENC_Stop(0);
  }
  return iVar1;
}



/* ===== unit_test_mpi_rgn_vpss @ 00014880 size=512 ===== */

/* unit_test_mpi_rgn_vpss(_rkTestRGNCtx*) */

int unit_test_mpi_rgn_vpss(_rkTestRGNCtx *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [4];
  undefined8 local_7c;
  undefined4 local_70;
  undefined8 local_64;
  undefined4 local_54;
  
  uVar3 = 0;
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_c4 = 0;
  local_c8 = 6;
  local_94 = 0;
  uStack_90 = CONCAT44(uVar5,uVar4);
  uStack_88 = uVar6;
  memset(auStack_80,0,0x4c);
  local_98 = *(undefined4 *)(param_1 + 0x38);
  local_b0 = CONCAT44(uVar6,uVar5);
  local_7c = *(undefined8 *)(param_1 + 0x30);
  local_64 = 0xffffffffffffffff;
  local_54 = 8;
  local_a0 = 0x100000001000;
  uStack_90 = 0xffffffffffffffff;
  local_b8 = uVar3;
  uStack_b4 = uVar4;
  local_a8 = uVar3;
  uStack_a4 = uVar4;
  local_70 = local_98;
  iVar1 = TEST_VPSS_Start(0,1,&local_a0,auStack_80);
  if (iVar1 == 0) {
    uStack_b4 = *(undefined4 *)(param_1 + 8);
    local_a8 = *(undefined4 *)(param_1 + 0x38);
    local_b8 = *(undefined4 *)param_1;
    local_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_a4 = 0x1e;
    iVar1 = TEST_VPSS_StartProc(0,1,&local_b8);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x80) != 0) {
        uVar2 = 0;
        do {
          uVar7 = VectorShiftLeft(CONCAT44(uVar2,uVar2),5,0x20,0);
          uVar7 = VectorAdd(*(undefined8 *)(param_1 + 0x28),uVar7,4);
          *(undefined8 *)(param_1 + 0x28) = uVar7;
          iVar1 = *(int *)(param_1 + 0xc);
          if (iVar1 == 0) {
            iVar1 = test_rgn_overlay_process(param_1,(rkMPP_CHN_S *)&local_c8);
          }
          else {
            if (iVar1 != 2) {
              RK_LOG(2,0x17171703,"unsupport operation %d.","unit_test_mpi_rgn_vpss",0x2b9,iVar1);
              return -1;
            }
            iVar1 = test_rgn_cover_process(param_1,(rkMPP_CHN_S *)&local_c8);
          }
          uVar2 = uVar2 + 1;
          if (iVar1 != 0) {
            return iVar1;
          }
          RK_LOG(4,0x17171703,"Rgn run number of time: %d\n","unit_test_mpi_rgn_vpss",0x2bf,uVar2);
        } while (uVar2 < *(uint *)(param_1 + 0x80));
      }
      iVar1 = TEST_VPSS_StopProc(0);
      if (iVar1 == 0) {
        iVar1 = TEST_VPSS_Stop(0,1);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00014a80 @ 00014a80 size=64 ===== */

void FUN_00014a80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0xe450;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0xe434;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014ac0 @ 00014ac0 size=588 ===== */

undefined4 FUN_00014ac0(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00014af4_default;
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
    goto LAB_00014b30;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00014b30:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00014d08:
                    /* WARNING: Subroutine does not return */
        FUN_00014a80(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00014cf0:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00014a80(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00014a80(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00014d08;
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
    if (iVar4 != 0) goto LAB_00014cf0;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00014a80(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00014d08;
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
switchD_00014af4_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00014d20 size=48 ===== */

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



/* ===== argparse_describe @ 00014d50 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00014d64 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00014e5c;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00014e5c:
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
          if (piVar7[2] != 0) goto LAB_00014f40;
LAB_00014f58:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000150b4;
LAB_00014f64:
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
          if (piVar7[2] == 0) goto LAB_00014f58;
          if ((char)piVar7[1] == '\0') {
LAB_00014f40:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00014f58;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00014f40;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00014f64;
LAB_000150b4:
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



/* ===== argparse_parse @ 00015180 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_000151e0;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_000151e0:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x000151ec:
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
            if (piVar11[8] == 0) goto LAB_000153a4;
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
          while (iVar5 = FUN_00014ac0(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00015330;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_0001549c;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_0001549c;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_00014ac0(param_1);
              if (iVar5 == -2) goto LAB_0001549c;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_0001549c:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000153a8;
        }
        goto LAB_000153a4;
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
LAB_000152fc:
                if (*pcVar3 == '\0') goto LAB_00015318;
                if (*pcVar3 == '=') goto code_r0x00015310;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_000154fc;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00015350;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_000152fc;
                }
              }
            }
LAB_00015350:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000153a8;
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
        goto LAB_00015224;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00015310:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00015318:
  iVar5 = FUN_00014ac0(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000153a4:
    pcVar10 = (char *)*__src;
LAB_000153a8:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00015330:
  param_2 = param_1[5];
LAB_00015224:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x000151ec;
}



/* ===== argparse_help_cb @ 00015500 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== TEST_COMM_GetNowUs @ 00015510 size=72 ===== */

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



/* ===== TEST_COMM_GetUriSchemeType @ 00015558 size=924 ===== */

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



/* ===== TEST_COMM_OpenFileUris @ 000158f4 size=540 ===== */

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
            if (__maxlen == 0) goto LAB_00015a68;
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
LAB_00015a68:
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



/* ===== TEST_COMM_CloseFileUris @ 00015b10 size=56 ===== */

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



/* ===== TEST_COMM_FileReadOneFrame @ 00015b48 size=372 ===== */

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



/* ===== TEST_COMM_FileWriteOneFrame @ 00015cbc size=308 ===== */

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



/* ===== TEST_COMM_MkDirs @ 00015df0 size=184 ===== */

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
        if (pcVar3 == local_218 + sVar1) goto LAB_00015e68;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != local_218 + sVar1);
LAB_00015e68:
    iVar2 = access(local_218,0);
    if (iVar2 != 0) {
      mkdir(local_218,param_2);
      return;
    }
  }
  return;
}



/* ===== TEST_COMM_CheckFileSizeInRange @ 00015ea8 size=284 ===== */

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



/* ===== TEST_COMM_GetSocType @ 00015fc4 size=540 ===== */

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
  if (DAT_000302b8 != 0) {
    return DAT_000302b8;
  }
  __stream = fopen64("/proc/device-tree/compatible","r");
  memset(local_418,0,0x400);
  if (__stream == (FILE *)0x0) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"open failed.","TEST_COMM_GetSocType",0x130);
    goto LAB_00016090;
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
        if (pcVar1 == (char *)0x0) goto LAB_00016080;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
LAB_00016080:
      iVar2 = 1;
    }
  }
  fclose(__stream);
LAB_00016090:
  DAT_000302b8 = iVar2;
  RK_LOG(5,0x17171700,"get the rkchip:%d.","TEST_COMM_GetSocType",0x133,iVar2);
  return iVar2;
}



/* ===== TEST_RGN_CreateOverlayAndAttach @ 000161e0 size=316 ===== */

undefined4
TEST_RGN_CreateOverlayAndAttach
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  int local_478;
  undefined1 auStack_448 [4];
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  
  memset(auStack_448,0,0x418);
  memset(&local_490,0,0x48);
  local_444 = param_4;
  local_440 = param_2;
  local_43c = param_3;
  iVar2 = RK_MPI_RGN_Create(param_1,auStack_448);
  uVar1 = DAT_00016320;
  if (iVar2 == 0) {
    uVar4 = 0;
    if (param_6 != 0) {
      local_478 = 0;
      do {
        local_490 = uVar1;
        iVar3 = local_478 + 1;
        local_488 = 0;
        local_480 = 0x8000000080;
        iVar2 = RK_MPI_RGN_AttachToChn(param_1,param_5,&local_490);
        if (iVar2 != 0) {
          RK_LOG(2,0x17171700,"RK_MPI_RGN_AttachToChn (%d) failed with %#x!",
                 "TEST_RGN_CreateOverlayAndAttach",0x43,param_1,iVar2);
          return 0xffffffff;
        }
        local_478 = iVar3;
        param_5 = param_5 + 0xc;
      } while (param_6 != iVar3);
    }
  }
  else {
    uVar4 = 0xffffffff;
    RK_LOG(2,0x17171700,"RK_MPI_RGN_Create (%d) failed with %#x!","TEST_RGN_CreateOverlayAndAttach",
           0x34,param_1,iVar2);
    RK_MPI_RGN_Destroy(param_1);
  }
  return uVar4;
}



/* ===== TEST_RGN_CreateCoverAndAttach @ 00016328 size=328 ===== */

undefined4
TEST_RGN_CreateCoverAndAttach(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_440 [262];
  
  memset(local_440,0,0x418);
  memset(&local_488,0,0x48);
  local_440[0] = 2;
  iVar2 = RK_MPI_RGN_Create(param_1,local_440);
  uVar1 = DAT_00016470;
  if (iVar2 == 0) {
    uVar4 = 0;
    if (param_4 != 0) {
      iVar2 = 0;
      do {
        local_480 = *param_2;
        uStack_47c = param_2[1];
        iVar2 = iVar2 + 1;
        uStack_478 = param_2[2];
        uStack_474 = param_2[3];
        local_488 = uVar1;
        local_470 = param_2[4];
        uStack_46c = param_2[5];
        uStack_468 = param_2[6];
        iVar3 = RK_MPI_RGN_AttachToChn(param_1,param_3,&local_488);
        param_3 = param_3 + 0xc;
        if (iVar3 != 0) {
          RK_LOG(2,0x17171700,"RK_MPI_RGN_AttachToChn (%d) failed with %#x!",
                 "TEST_RGN_CreateCoverAndAttach",100,param_1,iVar3);
          return 0xffffffff;
        }
      } while (param_4 != iVar2);
    }
  }
  else {
    uVar4 = 0xffffffff;
    RK_LOG(2,0x17171700,"RK_MPI_RGN_Create (%d) failed with %#x!","TEST_RGN_CreateCoverAndAttach",
           0x59,param_1,iVar2);
    RK_MPI_RGN_Destroy(param_1);
  }
  return uVar4;
}



/* ===== TEST_RGN_DestroyAndDetach @ 00016478 size=208 ===== */

int TEST_RGN_DestroyAndDetach(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_RGN_DetachFromChn(param_1,param_2);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 0xc;
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_RGN_DetachFrmChn (%d) failed with %#x!",
               "TEST_RGN_DestroyAndDetach",0x73,param_1,iVar1);
        return -1;
      }
    } while (param_3 != iVar2);
  }
  iVar2 = RK_MPI_RGN_Destroy(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_RGN_Destroy [%d] failed with %#x","TEST_RGN_DestroyAndDetach",0x7a,
         param_1,iVar2);
  return iVar2;
}



/* ===== TEST_RGN_ChangePosition @ 00016548 size=244 ===== */

undefined4
TEST_RGN_ChangePosition(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  
  if (param_2 == 0) {
    RK_LOG(2,0x17171700,"input parameter is null. it is invaild!","TEST_RGN_ChangePosition",0x86);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = RK_MPI_RGN_GetDisplayAttr(param_1,param_2,auStack_60);
    if (iVar1 == 0) {
      local_58 = param_3;
      local_54 = param_4;
      iVar1 = RK_MPI_RGN_SetDisplayAttr(param_1,param_2,auStack_60);
      uVar2 = 0;
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_RGN_SetDisplayAttr (%d)) failed with %#x!",
               "TEST_RGN_ChangePosition",0x94,param_1,iVar1);
        uVar2 = 0xffffffff;
      }
    }
    else {
      RK_LOG(2,0x17171700,"RK_MPI_RGN_GetDisplayAttr (%d)) failed with %#x!",
             "TEST_RGN_ChangePosition",0x8c,param_1,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== TEST_RGN_ShowOrHide @ 0001663c size=236 ===== */

undefined4 TEST_RGN_ShowOrHide(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_58 [18];
  
  if (param_2 == 0) {
    RK_LOG(2,0x17171700,"input parameter is null. it is invaild!","TEST_RGN_ShowOrHide",0xa3);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = RK_MPI_RGN_GetDisplayAttr(param_1,param_2,local_58);
    if (iVar1 == 0) {
      local_58[0] = param_3;
      iVar1 = RK_MPI_RGN_SetDisplayAttr(param_1,param_2,local_58);
      uVar2 = 0;
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_RGN_SetDisplayAttr (%d)) failed with %#x!","TEST_RGN_ShowOrHide"
               ,0xb1,param_1,iVar1);
        uVar2 = 0xffffffff;
      }
    }
    else {
      RK_LOG(2,0x17171700,"RK_MPI_RGN_GetDisplayAttr (%d)) failed with %#x!","TEST_RGN_ShowOrHide",
             0xa9,param_1,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== TEST_RGN_LoadBmp @ 00016728 size=308 ===== */

undefined4 TEST_RGN_LoadBmp(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [12];
  undefined4 local_4c [2];
  ushort local_44;
  ushort local_42;
  undefined1 auStack_3c [4];
  int local_38;
  int local_34;
  
  iVar1 = TEST_COMM_GetBmpInfo(param_1,auStack_58,auStack_3c);
  if (iVar1 < 0) {
    RK_LOG(2,0x17171700,"GetBmpInfo err!\n","TEST_RGN_LoadBmp",0xbe);
    uVar3 = 0xffffffff;
  }
  else {
    switch(param_3) {
    case 0x1000a:
      local_4c[0] = 5;
      break;
    default:
      return 0xffffffff;
    case 0x1000c:
      local_4c[0] = 1;
      break;
    case 0x10010:
      local_4c[0] = 9;
      break;
    case 0x10012:
      local_4c[0] = 10;
      break;
    case 0x10015:
      local_4c[0] = 6;
      break;
    case 0x10016:
      local_4c[0] = 2;
    }
    pvVar2 = malloc(local_34 * local_38 * 4);
    param_2[4] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      RK_LOG(2,0x17171700,"malloc osd memroy err!","TEST_RGN_LoadBmp",0xdc);
      uVar3 = 0xffffffff;
    }
    else {
      TEST_COMM_CreateSurfaceByBitmap(param_1,local_4c,pvVar2);
      uVar3 = 0;
      *param_2 = param_3;
      param_2[1] = (uint)local_42;
      param_2[2] = (uint)local_44;
    }
  }
  return uVar3;
}



/* ===== TEST_RGN_CreateBmp @ 00016890 size=256 ===== */

int TEST_RGN_CreateBmp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t local_3c [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  iVar1 = RK_MPI_CAL_COMM_GetPicBufferSize(&local_30,local_3c);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_CAL_COMM_GetPicBufferSize failed with %#x!","TEST_RGN_CreateBmp",
           0xf5,iVar1);
    return iVar1;
  }
  pvVar2 = malloc(local_3c[0]);
  iVar1 = TEST_COMM_FillImage(pvVar2,param_1,param_2,param_1,param_2,param_3,0x40);
  if (iVar1 == 0) {
    param_4[1] = param_1;
    param_4[2] = param_2;
    *param_4 = param_3;
    param_4[4] = pvVar2;
    return 0;
  }
  RK_LOG(2,0x17171700,"TEST_COMM_FillImage failed with %#x!","TEST_RGN_CreateBmp",0xff,iVar1);
  return iVar1;
}



/* ===== FUN_00016990 @ 00016990 size=840 ===== */

undefined4 FUN_00016990(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  void *__ptr;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  undefined8 uVar9;
  size_t local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined1 local_130 [8];
  int local_128;
  int local_124;
  size_t local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int local_100 [5];
  undefined4 local_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [32];
  undefined4 local_90;
  undefined4 uStack_8c;
  
  local_124 = RK_MPI_VENC_GetChnAttr(param_1[4],auStack_b0);
  if (local_124 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VENC_GetChnAttr failed 0x%x","TEST_VENC_SendVencFrameProc",0x147,
           local_124);
    return 0;
  }
  local_128 = param_1[0xb];
  local_11c = RK_MPI_CAL_COMM_GetPicBufferSize(local_130,&local_140);
  if (local_11c != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","TEST_VENC_SendVencFrameProc",
           0x150,local_11c);
    return 0;
  }
  uStack_110 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_10c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_118 = param_1[7];
  local_114 = 0;
  local_120 = local_140;
  local_108 = 0;
  uStack_104 = uStack_110;
  uVar9 = RK_MPI_MB_CreatePool(&local_120);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  param_1[3] = (int)uVar9;
  uVar8 = 0;
  do {
    if (*param_1 != 1) goto LAB_00016b60;
    iVar3 = RK_MPI_MB_GetMB(param_1[3],uVar7,local_140,0,1);
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr();
    uVar2 = uStack_8c;
    uVar7 = local_90;
    if ((FILE *)param_1[1] == (FILE *)0x0) {
      uVar4 = RK_MPI_CAL_COMM_GetHorStride(local_13c,param_1[0xb]);
      iVar5 = TEST_COMM_FillImage(__ptr,uVar7,uVar2,uVar4,uStack_138,param_1[0xb],uVar8);
      if (iVar5 != 0) {
        RK_MPI_MB_ReleaseMB(iVar3);
LAB_00016b50:
        if (iVar3 != 0) {
          RK_MPI_MB_ReleaseMB(iVar3);
        }
        goto LAB_00016b60;
      }
LAB_00016a88:
      RK_MPI_SYS_MmzFlushCache(iVar3,0);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_e8 = param_1[0xb];
      bVar1 = false;
      uStack_b8 = 0;
    }
    else {
      sVar6 = fread(__ptr,1,local_140,(FILE *)param_1[1]);
      if (sVar6 != 0) goto LAB_00016a88;
      RK_MPI_SYS_MmzFlushCache(iVar3);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_e8 = param_1[0xb];
      uStack_b8 = 0x80000000;
      bVar1 = true;
    }
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    local_d4 = 0;
    local_dc = 0;
    local_ec = 0;
    local_100[0] = iVar3;
    uStack_d8 = uStack_b4;
    uStack_d0 = uStack_b4;
    uStack_c8 = uStack_b4;
    uStack_c0 = uStack_b4;
    while( true ) {
      while( true ) {
        if (*param_1 == 0) goto LAB_00016b50;
        iVar5 = RK_MPI_VENC_SendFrame(param_1[4],local_100,100);
        if (-1 < iVar5) break;
        usleep(10000);
      }
      usleep(100000);
      uVar8 = uVar8 + 1;
      if ((param_1[10] == 0) || (uVar8 < (uint)param_1[10])) break;
      if (0 < param_1[8] && param_1[8] < (int)uVar8) goto LAB_00016b50;
    }
    RK_MPI_MB_ReleaseMB(iVar3);
    uVar7 = extraout_r1;
  } while (!bVar1);
  RK_LOG(4,0x17171700,"chn %d reach EOS.","TEST_VENC_SendVencFrameProc",0x195,param_1[4]);
LAB_00016b60:
  RK_LOG(4,0x17171700,"chn %d frame %d","TEST_VENC_SendVencFrameProc",0x19d,0,uVar8);
  return 0;
}



/* ===== FUN_00016cd8 @ 00016cd8 size=528 ===== */

undefined4 FUN_00016cd8(int *param_1)

{
  int iVar1;
  FILE *__s;
  void *pvVar2;
  int iVar3;
  char acStack_240 [128];
  undefined4 *local_1c0 [5];
  int local_1ac;
  
  local_1c0[0] = malloc(0x88);
  iVar3 = 0;
LAB_00016d14:
  do {
    if (*param_1 != 1) {
LAB_00016ecc:
      if (local_1c0[0] != (undefined4 *)0x0) {
        free(local_1c0[0]);
      }
      return 0;
    }
    iVar1 = RK_MPI_VENC_GetStream(param_1[4],local_1c0,100);
    if (-1 < iVar1) {
      snprintf(acStack_240,0x80,"/data/rgn/venc_frame%d.jpg",iVar3);
      iVar3 = iVar3 + 1;
      __s = fopen64(acStack_240,"wb");
      if (param_1[1] != 0) {
        pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1c0[0],1);
        fwrite(pvVar2,1,local_1c0[0][1],(FILE *)param_1[1]);
        fflush((FILE *)param_1[1]);
      }
      if (__s != (FILE *)0x0) {
        pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1c0[0],1);
        fwrite(pvVar2,1,local_1c0[0][1],__s);
        fflush(__s);
        fclose(__s);
      }
      if (local_1c0[0][5] == 1) {
        RK_LOG(4,0x17171700,"get chn %d stream %d","TEST_VENC_GetVencStreamProc",0xfe,param_1[4],
               local_1ac + 1);
        RK_LOG(4,0x17171700,"chn %d reach EOS stream","TEST_VENC_GetVencStreamProc",0xff,param_1[4])
        ;
        RK_MPI_VENC_ReleaseStream(param_1[4],local_1c0);
        goto LAB_00016ecc;
      }
      RK_MPI_VENC_ReleaseStream(param_1[4],local_1c0);
      RK_LOG(4,0x17171700,"==get franme cnt: %d","TEST_VENC_GetVencStreamProc",0x105,iVar3);
      goto LAB_00016d14;
    }
    usleep(1000);
  } while( true );
}



/* ===== TEST_VENC_Create @ 00016ee8 size=132 ===== */

void TEST_VENC_Create(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r5;
  undefined1 auStack_8c [8];
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_60;
  
  memset(auStack_8c,0,0x84);
  if (param_1[5] == 8) {
    local_78 = 100;
  }
  local_84 = param_1[7];
  local_7c = param_1[2] * param_1[1];
  local_60 = param_1[3];
  VectorTableLookup(param_1,local_60,2);
  uVar1 = VectorTableLookup(unaff_r5,local_60,2);
  RK_MPI_VENC_CreateChn(*param_1,uVar1,local_60,local_7c,param_1[5]);
  return;
}



/* ===== TEST_VENC_Start @ 00016f80 size=656 ===== */

int TEST_VENC_Start(int *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 unaff_r5;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_a4;
  int local_a0;
  undefined1 auStack_9c [8];
  int local_94;
  int local_8c;
  undefined4 local_88;
  int local_70;
  
  local_a4 = 0xffffffff;
  memset(auStack_9c,0,0x84);
  local_a0 = param_1[5];
  if (local_a0 == 8) {
    local_88 = 100;
  }
  local_94 = param_1[7];
  local_8c = param_1[2] * param_1[1];
  local_70 = param_1[3];
  VectorTableLookup(param_1,local_70,2);
  uVar4 = VectorTableLookup(unaff_r5,local_70,2);
  iVar2 = RK_MPI_VENC_CreateChn(*param_1,uVar4);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = RK_MPI_VENC_StartRecvFrame(*param_1,&local_a4);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[8] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[8],"r");
    iVar5 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_000310c0 + iVar5) = pFVar3;
    if (*(int *)(&DAT_000310c0 + iVar2 * 0x38) == 0) {
      pcVar7 = "TEST_VENC_StartSendFrame";
      iVar2 = param_1[8];
      uVar4 = 0x1a9;
      goto LAB_000171d4;
    }
  }
  *(undefined4 *)(&DAT_000310bc + iVar2 * 0x38) = 1;
  piVar1 = (int *)(&DAT_000310cc + iVar2 * 0x38);
  piVar9 = param_1;
  do {
    piVar10 = piVar9;
    piVar8 = piVar1;
    piVar9 = piVar10 + 4;
    iVar2 = piVar10[1];
    iVar5 = piVar10[2];
    iVar6 = piVar10[3];
    *piVar8 = *piVar10;
    piVar8[1] = iVar2;
    piVar8[2] = iVar5;
    piVar8[3] = iVar6;
    piVar1 = piVar8 + 4;
  } while (piVar9 != param_1 + 8);
  iVar2 = piVar10[5];
  piVar8[4] = *piVar9;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_000310c4 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_00016990,&DAT_000310bc + *param_1 * 0x38);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[9] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[9],"wb");
    iVar5 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_000302c0 + iVar5) = pFVar3;
    if (*(int *)(&DAT_000302c0 + iVar2 * 0x38) == 0) {
      iVar2 = param_1[9];
      uVar4 = 0x117;
      pcVar7 = "TEST_VENC_StartGetStream";
LAB_000171d4:
      RK_LOG(2,0x17171700,"can\'t open file %s!",pcVar7,uVar4,iVar2);
      return -1;
    }
  }
  *(undefined4 *)(&DAT_000302bc + iVar2 * 0x38) = 1;
  piVar1 = (int *)(&DAT_000302cc + iVar2 * 0x38);
  piVar9 = param_1;
  do {
    piVar10 = piVar9;
    piVar8 = piVar1;
    piVar9 = piVar10 + 4;
    iVar2 = piVar10[1];
    iVar5 = piVar10[2];
    iVar6 = piVar10[3];
    *piVar8 = *piVar10;
    piVar8[1] = iVar2;
    piVar8[2] = iVar5;
    piVar8[3] = iVar6;
    piVar1 = piVar8 + 4;
  } while (piVar9 != param_1 + 8);
  iVar2 = piVar10[5];
  piVar8[4] = *piVar9;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_000302c4 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_00016cd8,&DAT_000302bc + *param_1 * 0x38);
  return iVar2;
}



/* ===== TEST_VENC_Stop @ 00017220 size=228 ===== */

int TEST_VENC_Stop(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_000310bc + iVar1) == 1) {
    *(undefined4 *)(&DAT_000310bc + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_000310c4 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_000310c0 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_000310c0 + iVar1));
      *(undefined4 *)(&DAT_000310c0 + iVar1) = 0;
    }
  }
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_000302bc + iVar1) == 1) {
    *(undefined4 *)(&DAT_000302bc + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_000302c4 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_000302c0 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_000302c0 + iVar1));
      *(undefined4 *)(&DAT_000302c0 + iVar1) = 0;
    }
  }
  iVar1 = RK_MPI_VENC_StopRecvFrame(param_1);
  if (((iVar1 == 0) && (iVar1 = RK_MPI_VENC_DestroyChn(param_1), iVar1 == 0)) &&
     (*(int *)(&DAT_000310c8 + param_1 * 0x38) != 0)) {
    RK_MPI_MB_DestroyPool();
  }
  return iVar1;
}



/* ===== TEST_VENC_SnapStart @ 00017304 size=312 ===== */

int TEST_VENC_SnapStart(int *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_1c [2];
  
  local_1c[0] = param_1[4];
  iVar2 = RK_MPI_VENC_StartRecvFrame(*param_1,local_1c);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_1;
  if ((char *)param_1[8] != (char *)0x0) {
    pFVar3 = fopen64((char *)param_1[8],"r");
    iVar4 = iVar2 * 0x38;
    iVar2 = *param_1;
    *(FILE **)(&DAT_000310c0 + iVar4) = pFVar3;
    if (*(int *)(&DAT_000310c0 + iVar2 * 0x38) == 0) {
      RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VENC_StartSendFrame",0x1a9,param_1[8]);
      return -1;
    }
  }
  *(undefined4 *)(&DAT_000310bc + iVar2 * 0x38) = 1;
  piVar7 = param_1;
  piVar1 = (int *)(&DAT_000310cc + iVar2 * 0x38);
  do {
    piVar8 = piVar1;
    piVar6 = piVar7;
    piVar7 = piVar6 + 4;
    iVar2 = piVar6[1];
    iVar4 = piVar6[2];
    iVar5 = piVar6[3];
    *piVar8 = *piVar6;
    piVar8[1] = iVar2;
    piVar8[2] = iVar4;
    piVar8[3] = iVar5;
    piVar1 = piVar8 + 4;
  } while (piVar7 != param_1 + 8);
  iVar2 = piVar6[5];
  piVar8[4] = *piVar7;
  piVar8[5] = iVar2;
  iVar2 = pthread_create((pthread_t *)(&DAT_000310c4 + *param_1 * 0x38),(pthread_attr_t *)0x0,
                         FUN_00016990,&DAT_000310bc + *param_1 * 0x38);
  return iVar2;
}



/* ===== TEST_VENC_SnapStop @ 0001743c size=156 ===== */

int TEST_VENC_SnapStop(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x38;
  if (*(int *)(&DAT_000310bc + iVar1) == 1) {
    *(undefined4 *)(&DAT_000310bc + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_000310c4 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_000310c0 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_000310c0 + iVar1));
      *(undefined4 *)(&DAT_000310c0 + iVar1) = 0;
    }
  }
  iVar1 = RK_MPI_VENC_StopRecvFrame(param_1);
  if (((iVar1 == 0) && (iVar1 = RK_MPI_VENC_DestroyChn(param_1), iVar1 == 0)) &&
     (*(int *)(&DAT_000310c8 + param_1 * 0x38) != 0)) {
    RK_MPI_MB_DestroyPool();
    return 0;
  }
  return iVar1;
}



/* ===== TEST_VENC_SnapProcess @ 000174d8 size=424 ===== */

undefined4 TEST_VENC_SnapProcess(undefined4 *param_1)

{
  FILE *__s;
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 *local_1b0 [5];
  int local_19c;
  
  __s = (FILE *)0x0;
  if (((char *)param_1[9] == (char *)0x0) ||
     (__s = fopen64((char *)param_1[9],"wb"), __s != (FILE *)0x0)) {
    local_1b0[0] = malloc(0x88);
    while( true ) {
      while (iVar1 = RK_MPI_VENC_GetStream(*param_1,local_1b0,100), iVar1 < 0) {
        usleep(1000);
      }
      if (__s != (FILE *)0x0) {
        __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*local_1b0[0]);
        RK_MPI_SYS_MmzFlushCache(*local_1b0[0],1);
        fwrite(__ptr,1,local_1b0[0][1],__s);
        fflush(__s);
      }
      if (local_1b0[0][5] == 1) break;
      RK_MPI_VENC_ReleaseStream(*param_1,local_1b0);
    }
    RK_LOG(4,0x17171700,"get chn %d stream %d","TEST_VENC_SnapProcess",200,*param_1,local_19c + 1);
    RK_LOG(4,0x17171700,"chn %d reach EOS stream","TEST_VENC_SnapProcess",0xc9,*param_1);
    RK_MPI_VENC_ReleaseStream(*param_1,local_1b0);
    if (local_1b0[0] != (undefined4 *)0x0) {
      free(local_1b0[0]);
    }
    uVar2 = 0;
    if (__s != (FILE *)0x0) {
      fclose(__s);
      uVar2 = 0;
    }
  }
  else {
    RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VENC_SnapProcess",0xb8,param_1[9]);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_VENC_SET_BitRate @ 00017680 size=104 ===== */

undefined4
TEST_VENC_SET_BitRate(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 1:
  case 8:
    param_1[6] = param_2;
    return 0;
  case 2:
  case 3:
  case 9:
  case 10:
    param_1[6] = param_2;
    uVar1 = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    break;
  default:
    uVar1 = 0xa0048008;
    break;
  case 5:
    param_1[5] = param_2;
    return 0;
  case 6:
    param_1[5] = param_2;
    param_1[6] = param_3;
    param_1[7] = param_4;
    return 0;
  }
  return uVar1;
}



/* ===== TEST_VENC_SET_StatTime @ 00017710 size=80 ===== */

undefined4 TEST_VENC_SET_StatTime(undefined4 *param_1,undefined4 param_2)

{
  switch(*param_1) {
  case 1:
  case 8:
    param_1[7] = param_2;
    return 0;
  case 2:
  case 3:
  case 9:
  case 10:
    param_1[9] = param_2;
    return 0;
  default:
    return 0xa0048008;
  case 5:
    param_1[6] = param_2;
    return 0;
  case 6:
    param_1[8] = param_2;
    return 0;
  }
}



/* ===== TEST_VENC_SET_GopSize @ 00017788 size=44 ===== */

undefined4 TEST_VENC_SET_GopSize(undefined4 *param_1,undefined4 param_2)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
    param_1[1] = param_2;
    return 0;
  default:
    return 0xa0048008;
  }
}



/* ===== TEST_VENC_SET_FrameRate @ 000177dc size=96 ===== */

undefined4 TEST_VENC_SET_FrameRate(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
    uVar1 = 0;
    param_1[2] = param_2;
    param_1[4] = param_2;
    param_1[3] = 1;
    param_1[5] = 1;
    break;
  default:
    uVar1 = 0xa0048008;
    break;
  case 5:
  case 6:
    param_1[1] = param_2;
    param_1[3] = param_2;
    param_1[2] = 1;
    param_1[4] = 1;
    return 0;
  }
  return uVar1;
}



/* ===== TEST_VENC_SET_FixQp @ 00017864 size=100 ===== */

undefined4 TEST_VENC_SET_FixQp(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 7) {
    param_1[5] = param_2;
    return 0;
  }
  if (iVar1 != 0xb) {
    if (iVar1 != 4) {
      return 0xa0048008;
    }
    param_1[6] = param_2;
    param_1[7] = param_3;
    param_1[8] = param_4;
    return 0;
  }
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return 0;
}



/* ===== TEST_VPSS_Proc @ 000178c8 size=748 ===== */

undefined4 TEST_VPSS_Proc(int *param_1)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  __useconds_t __useconds;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_ec;
  size_t local_e8 [2];
  undefined4 uStack_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_78 [21];
  
  local_ec = 0;
  memset(&local_c8,0,0x50);
  memset(local_78,0,0x50);
  local_d0 = param_1[0xb];
  local_d8 = *(undefined8 *)(param_1 + 9);
  local_cc = 0;
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_d8,local_e8);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","TEST_VPSS_Proc",0xe9,iVar1);
    return 0;
  }
  RK_MPI_MMZ_Alloc(&local_ec,local_e8[0],0);
  iVar1 = 0;
LAB_00017950:
  iVar6 = *param_1;
  do {
    if (iVar6 != 1) {
      return 0;
    }
    if ((FILE *)param_1[1] == (FILE *)0x0) {
      uVar4 = RK_MPI_MB_Handle2VirAddr(local_ec);
      iVar8 = param_1[9];
      iVar6 = param_1[10];
      uVar5 = RK_MPI_CAL_COMM_GetHorStride(iVar8,param_1[0xb]);
      iVar6 = TEST_COMM_FillImage(uVar4,iVar8,iVar6,uVar5,uStack_e0,param_1[0xb],iVar1);
      if (iVar6 != 0) goto LAB_00017b28;
    }
    else {
      iVar6 = fseek((FILE *)param_1[1],0,0);
      if (iVar6 != 0) {
        return 0;
      }
      pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(local_ec);
      sVar3 = fread(pvVar2,1,local_e8[0],(FILE *)param_1[1]);
      if ((int)sVar3 < 1) {
        RK_LOG(2,0x17171700,"read size is not enough. read %d, request %d","TEST_VPSS_Proc",0xf6,
               sVar3,local_e8[0]);
        return 0;
      }
    }
    RK_MPI_SYS_MmzFlushCache(local_ec,0);
    local_b0 = param_1[0xb];
    local_c8 = local_ec;
    local_c4 = *(undefined8 *)(param_1 + 9);
    local_a8 = 0;
    iVar6 = RK_MPI_VPSS_SendFrame(param_1[3],0,&local_c8,0xffffffff);
    if (iVar6 != 0) {
LAB_00017b28:
      RK_MPI_MB_ReleaseMB(local_ec);
      return 0;
    }
    iVar1 = iVar1 + 1;
    uVar7 = 0;
    if (param_1[4] == 0) goto LAB_00017950;
    do {
      iVar6 = RK_MPI_VPSS_GetChnFrame(param_1[3],uVar7,local_78,0xffffffff);
      if (iVar6 == 0) {
        RK_LOG(4,0x17171700,"get chn[%d] frame %p length %d","TEST_VPSS_Proc",0x11b,uVar7,
               local_78[0],local_e8[0]);
        if (param_1[2] != 0) {
          RK_MPI_SYS_MmzFlushCache(local_78[0],1);
          pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(local_78[0]);
          fwrite(pvVar2,1,local_e8[0],(FILE *)param_1[2]);
          fflush((FILE *)param_1[2]);
        }
        RK_MPI_VPSS_ReleaseChnFrame(param_1[3],uVar7,local_78);
        __useconds = __aeabi_uidiv(1000000,param_1[5]);
        usleep(__useconds);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[4]);
    iVar6 = *param_1;
  } while( true );
}



/* ===== TEST_VPSS_Start @ 00017bb4 size=412 ===== */

int TEST_VPSS_Start(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = RK_MPI_VPSS_CreateGrp(param_1,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_CreateGrp(grp:%d) failed with %#x!","TEST_VPSS_Start",0x3d,
           param_1,iVar1);
    return iVar1;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    do {
      iVar2 = RK_MPI_VPSS_SetChnAttr(param_1,iVar1,param_4);
      iVar3 = iVar1 + 1;
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnAttr failed with %#x","TEST_VPSS_Start",0x44,iVar2);
        return iVar2;
      }
      iVar1 = RK_MPI_VPSS_EnableChn(param_1,iVar1);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_EnableChn failed with %#x","TEST_VPSS_Start",0x4a,iVar1);
        return iVar1;
      }
      iVar1 = iVar3;
      param_4 = param_4 + 0x4c;
    } while (param_2 != iVar3);
  }
  iVar1 = RK_MPI_VPSS_StartGrp(param_1);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_VPSS_ResetGrp(param_1);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_VPSS_ResetGrp failed with %#x","TEST_VPSS_Start",0x56,iVar1);
    }
  }
  else {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_StartGrp failed with %#x","TEST_VPSS_Start",0x51,iVar1);
  }
  return iVar1;
}



/* ===== TEST_VPSS_Stop @ 00017d50 size=252 ===== */

int TEST_VPSS_Stop(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_VPSS_DisableChn(param_1,iVar2);
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_DisableChn failed with %#x!","TEST_VPSS_Stop",100,iVar1);
        return iVar1;
      }
    } while (iVar2 != param_2);
  }
  iVar2 = RK_MPI_VPSS_StopGrp(param_1);
  if (iVar2 == 0) {
    iVar2 = RK_MPI_VPSS_DestroyGrp(param_1);
    if (iVar2 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_VPSS_DestroyGrp failed with %#x!","TEST_VPSS_Stop",0x71,iVar2);
    }
    return iVar2;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_StopGrp failed with %#x!","TEST_VPSS_Stop",0x6b,iVar2);
  return iVar2;
}



/* ===== TEST_VPSS_GrpSetZoom @ 00017e4c size=212 ===== */

int TEST_VPSS_GrpSetZoom(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = RK_MPI_VPSS_GetGrpCrop(param_1,&local_30);
  if (local_2c != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetGrpCrop failed with %#x!","TEST_VPSS_GrpSetZoom",0x7e,
           local_2c);
    return local_2c;
  }
  local_28 = 500 - (param_2 >> 1);
  local_30 = param_3;
  local_24 = local_28;
  local_20 = param_2;
  local_1c = param_2;
  iVar1 = RK_MPI_VPSS_SetGrpCrop(param_1,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetGrpCrop failed with %#x!","TEST_VPSS_GrpSetZoom",0x8a,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_ChnSetZoom @ 00017f20 size=220 ===== */

int TEST_VPSS_ChnSetZoom(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = RK_MPI_VPSS_GetChnCrop(param_1,param_2,&local_30);
  if (local_2c != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetChnCrop failed with %#x!","TEST_VPSS_ChnSetZoom",0x97,
           local_2c);
    return local_2c;
  }
  local_28 = 500 - (param_3 >> 1);
  local_30 = param_4;
  local_24 = local_28;
  local_20 = param_3;
  local_1c = param_3;
  iVar1 = RK_MPI_VPSS_SetChnCrop(param_1,param_2,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnCrop failed with %#x!","TEST_VPSS_ChnSetZoom",0xa3,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_SetChnRotation @ 00017ffc size=192 ===== */

int TEST_VPSS_SetChnRotation(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  local_1c[0] = 0;
  iVar1 = RK_MPI_VPSS_GetChnRotation(param_1,param_2,local_1c);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetChnRotation failed with %#x!","TEST_VPSS_SetChnRotation",
           0xb0,iVar1);
    return iVar1;
  }
  iVar1 = RK_MPI_VPSS_SetChnRotation(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnRotation failed with %#x!","TEST_VPSS_SetChnRotation",0xb5,
         iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_SetChnRotationEx @ 000180bc size=120 ===== */

int TEST_VPSS_SetChnRotationEx(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_2c [2];
  int local_24;
  
  if (param_3 != 0) {
    local_2c[0] = 1;
    local_24 = param_3;
    iVar1 = RK_MPI_VPSS_SetChnRotationEx(param_1,param_2,local_2c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = RK_MPI_VPSS_GetChnRotationEx(param_1,param_2,local_2c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_2c[0] != 1) || (local_24 != param_3)) {
      return -1;
    }
  }
  return 0;
}



/* ===== TEST_VPSS_StartProc @ 00018134 size=300 ===== */

int TEST_VPSS_StartProc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  FILE *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 * 0x34;
  uVar4 = param_3[3];
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(&DAT_00031ed8 + iVar5) = *param_3;
  *(undefined4 *)(&DAT_00031edc + iVar5) = uVar2;
  *(undefined4 *)(&DAT_00031ee0 + iVar5) = uVar3;
  *(undefined4 *)(&DAT_00031ee4 + iVar5) = uVar4;
  uVar2 = param_3[5];
  *(undefined4 *)(&DAT_00031ee8 + iVar5) = param_3[4];
  *(undefined4 *)(&DAT_00031eec + iVar5) = uVar2;
  if (*(char **)(&DAT_00031ed8 + iVar5) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_00031ed8 + iVar5),"r");
    *(FILE **)(&DAT_00031ec0 + iVar5) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_00031ed8 + iVar5);
      uVar3 = 0x134;
      goto LAB_0001822c;
    }
  }
  iVar6 = param_1 * 0x34;
  if (*(char **)(&DAT_00031edc + iVar6) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_00031edc + iVar6),"wb");
    *(FILE **)(&DAT_00031ec4 + iVar6) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_00031edc + iVar6);
      uVar3 = 0x13b;
LAB_0001822c:
      RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VPSS_StartProc",uVar3,uVar2);
      return -1;
    }
  }
  uVar2 = param_3[5];
  iVar6 = param_1 * 0x34;
  *(undefined4 *)(&DAT_00031ebc + iVar6) = 1;
  *(undefined4 *)(&DAT_00031ed0 + iVar6) = uVar2;
  *(int *)(&DAT_00031ec8 + iVar6) = param_1;
  *(undefined4 *)(&DAT_00031ecc + iVar6) = param_2;
  iVar5 = pthread_create((pthread_t *)(&DAT_00031ed4 + iVar5),(pthread_attr_t *)0x0,TEST_VPSS_Proc,
                         &DAT_00031ebc + iVar5);
  return iVar5;
}



/* ===== TEST_VPSS_StopProc @ 00018260 size=128 ===== */

undefined4 TEST_VPSS_StopProc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x34;
  if (*(int *)(&DAT_00031ebc + iVar1) == 1) {
    *(undefined4 *)(&DAT_00031ebc + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_00031ed4 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_00031ec0 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_00031ec0 + iVar1));
      *(undefined4 *)(&DAT_00031ec0 + iVar1) = 0;
    }
    if (*(FILE **)(&DAT_00031ec4 + param_1 * 0x34) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_00031ec4 + param_1 * 0x34));
      *(undefined4 *)(&DAT_00031ec4 + param_1 * 0x34) = 0;
      return 0;
    }
  }
  return 0;
}



/* ===== TEST_COMM_GetBmpInfo @ 000182e0 size=212 ===== */

undefined4 TEST_COMM_GetBmpInfo(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uVar1;
  short local_1a [3];
  
  if (param_1 == (char *)0x0) {
    puts("OSD_LoadBMP: filename=NULL");
    uVar1 = 0xffffffff;
  }
  else {
    __stream = fopen64(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      printf("Open file faild:%s!\n",param_1);
      uVar1 = 0xffffffff;
    }
    else {
      fread(local_1a,1,2,__stream);
      if (local_1a[0] == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        uVar1 = 0;
      }
      else {
        puts("not bitmap file");
        fclose(__stream);
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}



/* ===== load_bmp_ex @ 000183b8 size=2080 ===== */

/* load_bmp_ex(char const*, tag_OSD_Logo*, rkOSD_COLOR_FMT_E) */

undefined4 load_bmp_ex(char *param_1,uint *param_2,int param_3)

{
  uint __n;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  FILE *__stream;
  void *__ptr;
  size_t sVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  size_t __size;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint local_9c;
  uint local_94;
  byte local_90;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 auStack_64 [4];
  ushort local_60;
  uint local_5c;
  ushort local_56;
  int local_54;
  
  if (param_1 == (char *)0x0) {
    puts("load_bmp_ex: filename=NULL");
    uVar17 = 0xffffffff;
  }
  else {
    iVar14 = TEST_COMM_GetBmpInfo(param_1,auStack_70,auStack_64);
    if (iVar14 < 0) {
      uVar17 = 0xffffffff;
    }
    else {
      __n = (uint)(local_56 >> 3);
      if (local_56 < 0x10) {
        puts("bitmap format not supported!");
        uVar17 = 0xffffffff;
      }
      else {
        if (local_54 != 0) {
          printf("not support compressed bitmap file! biCompression = %d\n");
        }
        if ((int)local_5c < 0) {
          puts("bmpInfo.bmiHeader.biHeight < 0");
          uVar17 = 0xffffffff;
        }
        else {
          __stream = fopen64(param_1,"rb");
          if (__stream == (FILE *)0x0) {
            printf("Open file faild:%s!\n",param_1);
            uVar17 = 0xffffffff;
          }
          else {
            uVar20 = (uint)local_60;
            local_94 = __n * uVar20;
            if ((int)local_5c < 0) {
              local_5c = -local_5c;
            }
            *param_2 = uVar20;
            uVar22 = local_5c & 0xffff;
            param_2[1] = uVar22;
            if ((local_94 & 3) != 0) {
              local_94 = (local_94 & 0xfffc) + 4;
            }
            __size = local_94 * uVar22;
            __ptr = malloc(__size);
            if (__ptr == (void *)0x0) {
              puts("not enough memory to malloc!");
              fclose(__stream);
              uVar17 = 0xffffffff;
            }
            else {
              uVar23 = param_2[3];
              fseek(__stream,local_68,0);
              sVar15 = fread(__ptr,1,__size,__stream);
              if (__size - sVar15 == 0) {
                if (param_3 < 7) {
                  uVar28 = *param_2 << 1;
                }
                else {
                  uVar28 = *param_2 << 2;
                }
                param_2[2] = uVar28;
                uVar13 = DAT_000187b8;
                uVar12 = DAT_000187b0;
                if (uVar22 != 0) {
                  iVar14 = param_3 * 0x10;
                  puVar24 = (uint *)(s_OSDCompInfo + iVar14);
                  if (uVar20 != 0) {
                    local_9c = 0;
                    do {
                      uVar28 = 0;
                      iVar25 = local_94 * ((uVar22 - 1) - local_9c);
                      do {
                        if (__n == 3) {
                          switch(param_3) {
                          case 0:
                          case 1:
                          case 3:
                          case 4:
                          case 5:
                            iVar26 = uVar28 * 3 + iVar25;
                            uVar29 = *puVar24;
                            iVar30 = *(int *)(s_OSDCompInfo + iVar14 + 4);
                            uVar18 = uVar29 & 0xff;
                            uVar31 = uVar29 - 1;
                            if (uVar18 == 0) {
                              uVar19 = 0;
                            }
                            else {
                              if (uVar18 - 1 < 6) {
                                uVar19 = 0;
                              }
                              else {
                                auVar6._8_8_ = CONCAT44(uVar31,uVar31);
                                auVar6._0_8_ = CONCAT44(uVar31,uVar31);
                                auVar11._8_8_ = uVar13;
                                auVar11._0_8_ = uVar12;
                                auVar34 = VectorAdd(auVar6,auVar11,4);
                                auVar35 = (undefined1  [16])0x0;
                                uVar27 = ((uVar18 - 4 & 0xff) >> 2) + 1;
                                auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar3._0_8_ = 0x300000003;
                                uVar21 = 0;
                                auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar4._0_8_ = 0x100000001;
                                do {
                                  uVar21 = uVar21 + 1;
                                  auVar37 = VectorShiftLeft(*(undefined1 (*) [16])
                                                             (auVar4 << 0x40 | auVar4),auVar34,4,0);
                                  auVar34 = VectorAdd(auVar34,~*(undefined1 (*) [16])
                                                                (auVar3 << 0x40 | auVar3),4);
                                  auVar35 = auVar35 | auVar37;
                                } while ((uVar21 & 0xff) < uVar27);
                                uVar21 = uVar27 * 4 & 0xff;
                                auVar8._8_8_ = 0;
                                auVar8._0_8_ = auVar35._8_8_;
                                bVar32 = uVar18 == uVar21;
                                uVar31 = uVar31 - uVar21;
                                uVar18 = uVar18 - uVar21 & 0xff;
                                uVar19 = SUB162(auVar8 | auVar35,4) | SUB162(auVar8 | auVar35,0);
                                if (bVar32) goto LAB_00018a80;
                              }
                              uVar19 = uVar19 | (ushort)(1 << (uVar31 & 0xff));
                              if (uVar18 != 1) {
                                uVar19 = uVar19 | (ushort)(1 << (uVar31 - 1 & 0xff));
                                if (uVar18 != 2) {
                                  uVar19 = uVar19 | (ushort)(1 << (uVar31 - 2 & 0xff));
                                  if (uVar18 != 3) {
                                    uVar19 = uVar19 | (ushort)(1 << (uVar31 - 3 & 0xff));
                                    if (uVar18 != 4) {
                                      uVar19 = uVar19 | (ushort)(1 << (uVar31 - 4 & 0xff));
                                      if (uVar18 != 5) {
                                        uVar19 = uVar19 | (ushort)(1 << (uVar31 - 5 & 0xff));
                                      }
                                    }
                                  }
                                }
                              }
                            }
LAB_00018a80:
                            local_90 = (byte)((int)(uint)*(byte *)((int)__ptr + iVar26) >>
                                             (8U - *(int *)(s_OSDCompInfo + iVar14 + 0xc) & 0xff));
                            *(ushort *)(uVar23 + param_2[2] * local_9c + uVar28 * 2) =
                                 (ushort)(((int)(uint)*(byte *)((int)__ptr + iVar26 + 2) >>
                                           (8U - iVar30 & 0xff) & 0xffU) << (uVar29 & 0xff)) |
                                 (ushort)(((int)(uint)*(byte *)((int)__ptr + iVar26 + 1) >>
                                           (8U - *(int *)(s_OSDCompInfo + iVar14 + 8) & 0xff) &
                                          0xffU) << (uVar29 + iVar30 & 0xff)) |
                                 (ushort)local_90 <<
                                 (iVar30 + *(int *)(s_OSDCompInfo + iVar14 + 8) + uVar29 & 0xff) |
                                 uVar19;
                            break;
                          case 2:
                          case 6:
                            iVar26 = uVar28 * 3 + iVar25;
                            uVar31 = *puVar24 & 0xff;
                            iVar30 = *(int *)(s_OSDCompInfo + iVar14 + 8);
                            uVar29 = *(uint *)(s_OSDCompInfo + iVar14 + 0xc);
                            uVar18 = (*puVar24 + *(int *)(s_OSDCompInfo + iVar14 + 4) + iVar30 +
                                     uVar29) - 1;
                            if (uVar31 == 0) {
                              uVar19 = 0;
                            }
                            else {
                              if (uVar31 - 1 < 6) {
                                uVar19 = 0;
                              }
                              else {
                                auVar5._8_8_ = CONCAT44(uVar18,uVar18);
                                auVar5._0_8_ = CONCAT44(uVar18,uVar18);
                                auVar10._8_8_ = uVar13;
                                auVar10._0_8_ = uVar12;
                                auVar34 = VectorAdd(auVar5,auVar10,4);
                                auVar35 = (undefined1  [16])0x0;
                                uVar27 = ((uVar31 - 4 & 0xff) >> 2) + 1;
                                auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar1._0_8_ = 0x300000003;
                                uVar21 = 0;
                                auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar2._0_8_ = 0x100000001;
                                do {
                                  uVar21 = uVar21 + 1;
                                  auVar37 = VectorShiftLeft(*(undefined1 (*) [16])
                                                             (auVar2 << 0x40 | auVar2),auVar34,4,0);
                                  auVar34 = VectorAdd(auVar34,~*(undefined1 (*) [16])
                                                                (auVar1 << 0x40 | auVar1),4);
                                  auVar35 = auVar35 | auVar37;
                                } while ((uVar21 & 0xff) < uVar27);
                                uVar21 = uVar27 * 4 & 0xff;
                                auVar7._8_8_ = 0;
                                auVar7._0_8_ = auVar35._8_8_;
                                bVar32 = uVar31 == uVar21;
                                uVar18 = uVar18 - uVar21;
                                uVar31 = uVar31 - uVar21 & 0xff;
                                uVar19 = SUB162(auVar7 | auVar35,4) | SUB162(auVar7 | auVar35,0);
                                if (bVar32) goto LAB_00018910;
                              }
                              uVar19 = uVar19 | (ushort)(1 << (uVar18 & 0xff));
                              if (uVar31 != 1) {
                                uVar19 = uVar19 | (ushort)(1 << (uVar18 - 1 & 0xff));
                                if (uVar31 != 2) {
                                  uVar19 = uVar19 | (ushort)(1 << (uVar18 - 2 & 0xff));
                                  if (uVar31 != 3) {
                                    uVar19 = uVar19 | (ushort)(1 << (uVar18 - 3 & 0xff));
                                    if (uVar31 != 4) {
                                      uVar19 = uVar19 | (ushort)(1 << (uVar18 - 4 & 0xff));
                                      if (uVar31 != 5) {
                                        uVar19 = uVar19 | (ushort)(1 << (uVar18 - 5 & 0xff));
                                      }
                                    }
                                  }
                                }
                              }
                            }
LAB_00018910:
                            *(ushort *)(uVar23 + param_2[2] * local_9c + uVar28 * 2) =
                                 (ushort)(((int)(uint)*(byte *)((int)__ptr + iVar26 + 1) >>
                                           (8U - iVar30 & 0xff) & 0xffU) << (uVar29 & 0xff)) |
                                 (ushort)(((int)(uint)*(byte *)((int)__ptr + iVar26 + 2) >>
                                           (8U - *(int *)(s_OSDCompInfo + iVar14 + 4) & 0xff) &
                                          0xffU) << (uVar29 + iVar30 & 0xff)) |
                                 (ushort)((int)(uint)*(byte *)((int)__ptr + iVar26) >>
                                         (8 - uVar29 & 0xff)) & 0xff | uVar19;
                            break;
                          case 7:
                          case 9:
                            iVar26 = uVar28 * 3 + iVar25;
                            uVar29 = *puVar24;
                            iVar30 = *(int *)(s_OSDCompInfo + iVar14 + 4);
                            uVar18 = uVar29 & 0xff;
                            uVar31 = uVar29 - 1;
                            if (uVar18 == 0) {
                              uVar21 = 0;
                            }
                            else {
                              if (uVar18 - 1 < 6) {
                                uVar21 = 0;
                              }
                              else {
                                auVar35._8_8_ = CONCAT44(uVar31,uVar31);
                                auVar35._0_8_ = CONCAT44(uVar31,uVar31);
                                auVar33._8_8_ = uVar13;
                                auVar33._0_8_ = uVar12;
                                auVar33 = VectorAdd(auVar35,auVar33,4);
                                auVar35 = (undefined1  [16])0x0;
                                uVar27 = ((uVar18 - 4 & 0xff) >> 2) + 1;
                                auVar34._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar34._0_8_ = 0x300000003;
                                uVar21 = 0;
                                auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                                auVar37._0_8_ = 0x100000001;
                                do {
                                  uVar21 = uVar21 + 1;
                                  auVar36 = VectorShiftLeft(*(undefined1 (*) [16])
                                                             (auVar37 << 0x40 | auVar37),auVar33,4,0
                                                           );
                                  auVar33 = VectorAdd(auVar33,~*(undefined1 (*) [16])
                                                                (auVar34 << 0x40 | auVar34),4);
                                  auVar35 = auVar35 | auVar36;
                                } while ((uVar21 & 0xff) < uVar27);
                                uVar21 = uVar27 * 4 & 0xff;
                                auVar36._8_8_ = 0;
                                auVar36._0_8_ = auVar35._8_8_;
                                bVar32 = uVar21 == uVar18;
                                uVar31 = uVar31 - uVar21;
                                uVar18 = uVar18 - uVar21 & 0xff;
                                uVar21 = SUB164(auVar35 | auVar36,0) | SUB164(auVar35 | auVar36,4);
                                if (bVar32) goto LAB_00018774;
                              }
                              uVar21 = uVar21 | 1 << (uVar31 & 0xff);
                              if (uVar18 != 1) {
                                uVar21 = uVar21 | 1 << (uVar31 - 1 & 0xff);
                                if (uVar18 != 2) {
                                  uVar21 = uVar21 | 1 << (uVar31 - 2 & 0xff);
                                  if (uVar18 != 3) {
                                    uVar21 = uVar21 | 1 << (uVar31 - 3 & 0xff);
                                    if (uVar18 != 4) {
                                      uVar21 = uVar21 | 1 << (uVar31 - 4 & 0xff);
                                      if (uVar18 != 5) {
                                        uVar21 = uVar21 | 1 << (uVar31 - 5 & 0xff);
                                      }
                                    }
                                  }
                                }
                              }
                            }
LAB_00018774:
                            *(uint *)(uVar23 + param_2[2] * local_9c + uVar28 * 4) =
                                 ((int)(uint)*(byte *)((int)__ptr + iVar26 + 2) >>
                                  (8U - iVar30 & 0xff) & 0xffU) << (uVar29 & 0xff) |
                                 ((int)(uint)*(byte *)((int)__ptr + iVar26 + 1) >>
                                  (8U - *(int *)(s_OSDCompInfo + iVar14 + 8) & 0xff) & 0xffU) <<
                                 (uVar29 + iVar30 & 0xff) |
                                 ((int)(uint)*(byte *)((int)__ptr + iVar26) >>
                                  (8U - *(int *)(s_OSDCompInfo + iVar14 + 0xc) & 0xff) & 0xffU) <<
                                 (iVar30 + *(int *)(s_OSDCompInfo + iVar14 + 8) + uVar29 & 0xff) |
                                 uVar21;
                            break;
                          case 8:
                          case 10:
                            iVar26 = param_2[2] * local_9c + uVar28 * 4;
                            puVar16 = (undefined2 *)((int)__ptr + uVar28 * 3 + iVar25);
                            uVar9 = *(undefined1 *)(puVar16 + 1);
                            *(undefined2 *)(uVar23 + iVar26) = *puVar16;
                            *(undefined1 *)(uVar23 + iVar26 + 2) = uVar9;
                            *(undefined1 *)(param_2[2] * local_9c + uVar23 + uVar28 * 4 + 3) = 0xff;
                            break;
                          default:
                            printf("file(%s), line(%d), no such format!\n",
                                   "/rv1106_sdk_ipc/rv1106_sdk_ipc_ac_x1_factory/media/rockit/rockit/mpi/example/common/test_comm_bmp.cpp"
                                   ,0xea);
                          }
                        }
                        else if ((__n - 2 & 0xfffd) == 0) {
                          memcpy((void *)(uVar23 + param_2[2] * local_9c + __n * uVar28),
                                 (void *)((int)__ptr + __n * uVar28 + iVar25),__n);
                        }
                        uVar28 = uVar28 + 1 & 0xffff;
                      } while (uVar28 < uVar20);
                      local_9c = local_9c + 1 & 0xffff;
                    } while (local_9c < uVar22);
                  }
                }
                free(__ptr);
                fclose(__stream);
                uVar17 = 0;
              }
              else {
                printf("fread (%d*%d)error!line:%d\n",uVar22,local_94,0xb5);
                uVar17 = 0xffffffff;
              }
            }
          }
        }
      }
    }
  }
  return uVar17;
}



/* ===== get_ext_name @ 00018c18 size=100 ===== */

/* get_ext_name(char*) */

char * get_ext_name(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == (char *)0x0) {
    printf("filename can\'t be null!");
    return (char *)0x0;
  }
  sVar2 = strlen(param_1);
  if (sVar2 == 0) {
    return (char *)0x0;
  }
  pcVar3 = param_1 + sVar2;
  iVar1 = (sVar2 - 1) - (int)pcVar3;
  pcVar4 = pcVar3;
  do {
    bVar5 = pcVar4 == param_1 + 1;
    pcVar4 = pcVar4 + (int)(param_1 + iVar1);
    if (bVar5) {
      return param_1 + 1;
    }
    pcVar3 = pcVar3 + -1;
  } while (*pcVar3 != '.');
  return pcVar4 + 1;
}



/* ===== load_image_ex @ 00018c7c size=196 ===== */

/* load_image_ex(char const*, tag_OSD_Logo*, rkOSD_COLOR_FMT_E) */

undefined4 load_image_ex(char *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *__s1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == (char *)0x0) {
    printf("filename can\'t be null!");
    __s1 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    __s1 = (char *)0x0;
    if (sVar1 != 0) {
      pcVar3 = param_1 + sVar1;
      __s1 = param_1 + 1;
      iVar2 = (sVar1 - 1) - (int)pcVar3;
      pcVar4 = pcVar3;
      do {
        bVar5 = pcVar4 == __s1;
        pcVar4 = pcVar4 + (int)(param_1 + iVar2);
        if (bVar5) goto LAB_00018cd0;
        pcVar3 = pcVar3 + -1;
      } while (*pcVar3 != '.');
      __s1 = pcVar4 + 1;
    }
  }
LAB_00018cd0:
  iVar2 = strcmp(__s1,"bmp");
  if (iVar2 != 0) {
    puts("not supported image file!");
    return 0xffffffff;
  }
  iVar2 = load_bmp_ex(param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  puts("OSD_LoadBMP error!");
  return 0xffffffff;
}



/* ===== TEST_COMM_CreateSurfaceByBitmap @ 00018d40 size=252 ===== */

undefined4 TEST_COMM_CreateSurfaceByBitmap(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  size_t sVar1;
  char *__s1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  
  uVar4 = *param_2;
  local_14 = param_3;
  if (param_1 == (char *)0x0) {
    printf("filename can\'t be null!");
    __s1 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    if (sVar1 == 0) {
      __s1 = (char *)0x0;
    }
    else {
      __s1 = param_1 + sVar1;
      iVar2 = (sVar1 - 1) - (int)__s1;
      pcVar3 = __s1;
      do {
        if (param_1 + 1 == __s1) goto LAB_00018d9c;
        pcVar3 = pcVar3 + -1;
        __s1 = __s1 + (int)(param_1 + iVar2);
      } while (*pcVar3 != '.');
      __s1 = __s1 + 1;
    }
  }
LAB_00018d9c:
  iVar2 = strcmp(__s1,"bmp");
  if (iVar2 == 0) {
    iVar2 = load_bmp_ex(param_1,local_20,uVar4);
    if (iVar2 == 0) {
      *(undefined2 *)(param_2 + 2) = local_1c;
      *(undefined2 *)((int)param_2 + 10) = local_20[0];
      *(undefined2 *)(param_2 + 3) = local_18;
      return 0;
    }
    puts("OSD_LoadBMP error!");
  }
  else {
    puts("not supported image file!");
  }
  puts("load bmp error!");
  return 0xffffffff;
}



/* ===== TEST_COMM_FillImage @ 000194b8 size=14224 ===== */

undefined4
TEST_COMM_FillImage(undefined8 *param_1,uint param_2,uint param_3,uint param_4,int param_5,
                   uint param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined1 *puVar90;
  undefined4 uVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  char cVar98;
  uint uVar99;
  int iVar100;
  int iVar101;
  code *pcVar102;
  int iVar103;
  undefined8 *puVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  int iVar110;
  undefined8 *puVar111;
  undefined8 *puVar112;
  longlong lVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  uint local_110;
  uint local_b4;
  undefined8 *local_b0;
  
  uVar107 = param_5 * param_4;
  puVar104 = (undefined8 *)((int)param_1 + uVar107);
  local_110 = param_4;
  local_b0 = param_1;
  if (param_6 < 0x10006) {
    if (param_6 < 0x10000) {
      cVar95 = (char)param_7;
      if (param_6 == 8) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar106 = param_2 & 0xfffffff0;
        auVar133._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar133._0_8_ = 0x1000000010;
        auVar147._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar147._0_8_ = 0x400000004;
        auVar121._8_8_ = DAT_0001b6f8;
        auVar121._0_8_ = DAT_0001b6f0;
        auVar184._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar184._0_8_ = 0x800000008;
        auVar181._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar181._0_8_ = 0xc0000000c;
        uVar107 = 0;
        do {
          cVar94 = cVar95 * '\x03' + (char)uVar107;
          if (param_2 - 1 < 0xf) {
            uVar105 = 0;
LAB_0001b974:
            uVar99 = uVar105 + 1;
            *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
            if (uVar99 < param_2) {
              uVar108 = uVar105 + 2;
              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
              if (uVar108 < param_2) {
                uVar99 = uVar105 + 3;
                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 4;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 5;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 6;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 7;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 8;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 9;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 10;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 0xb;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 0xc;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xd;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar105 = uVar105 + 0xe;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar105 < param_2) {
                                        *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar81._8_8_ = uVar67;
            auVar81._0_8_ = uVar67;
            puVar111 = param_1;
            auVar157 = auVar121;
            do {
              auVar173 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar147 << 0x40 | auVar147),4);
              auVar167 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar181 << 0x40 | auVar181),4);
              auVar185 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar184 << 0x40 | auVar184),4);
              auVar179._0_8_ = VectorCopyNarrow(auVar157,4);
              auVar179._8_8_ = VectorCopyNarrow(auVar173,4);
              auVar157 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar133 << 0x40 | auVar133),4);
              auVar173._0_8_ = VectorCopyNarrow(auVar185,4);
              auVar173._8_8_ = VectorCopyNarrow(auVar167,4);
              auVar167._0_8_ = VectorCopyNarrow(auVar179,2);
              auVar167._8_8_ = VectorCopyNarrow(auVar173,2);
              auVar167 = VectorAdd(auVar167,auVar81,1);
              *puVar111 = auVar167._0_8_;
              puVar111[1] = auVar167._8_8_;
              puVar111 = puVar111 + 2;
            } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
            uVar105 = uVar106;
            if (param_2 != uVar106) goto LAB_0001b974;
          }
          uVar107 = uVar107 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar107);
        uVar107 = param_2 >> 1;
        cVar94 = cVar95 * '\x05' + '@';
        if (uVar107 == 0) {
          return 0;
        }
        auVar157._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar157._0_8_ = 0x1000000010;
        auVar185._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar185._0_8_ = 0x400000004;
        auVar45._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar45._0_8_ = 0x800000008;
        auVar46._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar46._0_8_ = 0xc0000000c;
        uVar106 = (param_2 >> 5) * 0x10;
        uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
        uVar67 = CONCAT44(uVar91,uVar91);
        auVar82._8_8_ = uVar67;
        auVar82._0_8_ = uVar67;
        uVar105 = 0;
        auVar126._8_8_ = DAT_0001bd18;
        auVar126._0_8_ = DAT_0001bd10;
        do {
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
          if (uVar107 - 1 < 0xf) {
            uVar99 = 0;
LAB_0001bb60:
            uVar108 = uVar99 + 1;
            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
            *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
            if (uVar108 < uVar107) {
              uVar109 = uVar99 + 2;
              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
              if (uVar109 < uVar107) {
                uVar108 = uVar99 + 3;
                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 4;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 5;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 6;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 7;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 8;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 9;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 10;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 0xb;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 0xc;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xd;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar99 = uVar99 + 0xe;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar99 < uVar107) {
                                        *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar99 * 2) =
                                             cVar94 + (char)uVar99;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            puVar111 = puVar104;
            auVar133 = auVar126;
            do {
              auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar185 << 0x40 | auVar185),4);
              auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar46 << 0x40 | auVar46),4);
              auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar45 << 0x40 | auVar45),4);
              auVar180._0_8_ = VectorCopyNarrow(auVar133,4);
              auVar180._8_8_ = VectorCopyNarrow(auVar184,4);
              auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar157 << 0x40 | auVar157),4);
              auVar174._0_8_ = VectorCopyNarrow(auVar181,4);
              auVar174._8_8_ = VectorCopyNarrow(auVar147,4);
              auVar168._0_8_ = VectorCopyNarrow(auVar180,2);
              auVar168._8_8_ = VectorCopyNarrow(auVar174,2);
              VectorAdd(auVar168,auVar82,1);
              puVar87 = (undefined1 *)0x380;
              puVar88 = (undefined1 *)0x390;
              lVar113 = 8;
              puVar112 = puVar111;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar87 = (undefined1 *)0x388;
              puVar88 = (undefined1 *)0x398;
              lVar113 = 8;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar111 = puVar111 + 4;
            } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
            uVar99 = uVar106;
            if (uVar106 != uVar107) goto LAB_0001bb60;
          }
          uVar105 = uVar105 + 1;
          puVar104 = (undefined8 *)((int)puVar104 + param_4);
          if (param_3 == uVar105) {
            return 0;
          }
        } while( true );
      }
      if (param_6 < 9) {
        if (param_6 == 4) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 != 0) {
            uVar105 = param_2 & 0xfffffff0;
            auVar29._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar29._0_8_ = 0x1000000010;
            auVar30._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar30._0_8_ = 0x400000004;
            auVar31._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar31._0_8_ = 0x800000008;
            auVar117._8_8_ = DAT_0001aff8;
            auVar117._0_8_ = DAT_0001aff0;
            auVar32._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar32._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001b0c8:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar77._8_8_ = uVar67;
                auVar77._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar117;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar30 << 0x40 | auVar30),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar32 << 0x40 | auVar32),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar31 << 0x40 | auVar31),4)
                  ;
                  auVar165._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar165._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar29 << 0x40 | auVar29),4)
                  ;
                  auVar155._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar155._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar141._0_8_ = VectorCopyNarrow(auVar165,2);
                  auVar141._8_8_ = VectorCopyNarrow(auVar155,2);
                  auVar147 = VectorAdd(auVar141,auVar77,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar105) != puVar111);
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_0001b0c8;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
          }
          param_3 = param_3 >> 1;
          if (param_3 == 0) {
            return 0;
          }
          uVar106 = param_2 >> 1;
          if (uVar106 == 0) {
            return 0;
          }
          uVar105 = 0;
          puVar111 = puVar104;
          do {
            uVar99 = ((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar105;
            uVar105 = uVar105 + 1;
            memset(puVar111,uVar99 & 0xff,uVar106);
            puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
          } while (uVar105 != param_3);
          auVar33._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar33._0_8_ = 0x1000000010;
          auVar34._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar34._0_8_ = 0x400000004;
          uVar105 = (param_2 >> 5) * 0x10;
          auVar35._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar35._0_8_ = 0x800000008;
          cVar95 = cVar95 * '\x05' + '@';
          auVar36._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar36._0_8_ = 0xc0000000c;
          puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 2));
          auVar118._8_8_ = DAT_0001aff8;
          auVar118._0_8_ = DAT_0001aff0;
          uVar107 = 0;
          uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
          uVar67 = CONCAT44(uVar91,uVar91);
          auVar78._8_8_ = uVar67;
          auVar78._0_8_ = uVar67;
          do {
            if (uVar106 - 1 < 0xf) {
              uVar99 = 0;
LAB_0001b2f0:
              uVar108 = uVar99 + 1;
              *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
              if (uVar108 < uVar106) {
                uVar109 = uVar99 + 2;
                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                if (uVar109 < uVar106) {
                  uVar108 = uVar99 + 3;
                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                  if (uVar108 < uVar106) {
                    uVar109 = uVar99 + 4;
                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                    if (uVar109 < uVar106) {
                      uVar108 = uVar99 + 5;
                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                      if (uVar108 < uVar106) {
                        uVar109 = uVar99 + 6;
                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                        if (uVar109 < uVar106) {
                          uVar108 = uVar99 + 7;
                          *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                          if (uVar108 < uVar106) {
                            uVar109 = uVar99 + 8;
                            *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                            if (uVar109 < uVar106) {
                              uVar108 = uVar99 + 9;
                              *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                              if (uVar108 < uVar106) {
                                uVar109 = uVar99 + 10;
                                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                if (uVar109 < uVar106) {
                                  uVar108 = uVar99 + 0xb;
                                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                  if (uVar108 < uVar106) {
                                    uVar109 = uVar99 + 0xc;
                                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                    if (uVar109 < uVar106) {
                                      uVar108 = uVar99 + 0xd;
                                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                      if (uVar108 < uVar106) {
                                        uVar99 = uVar99 + 0xe;
                                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                        if (uVar99 < uVar106) {
                                          *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              puVar111 = puVar104;
              auVar133 = auVar118;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar34 << 0x40 | auVar34),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar36 << 0x40 | auVar36),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar35 << 0x40 | auVar35),4);
                auVar166._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar166._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar33 << 0x40 | auVar33),4);
                auVar156._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar156._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar142._0_8_ = VectorCopyNarrow(auVar166,2);
                auVar142._8_8_ = VectorCopyNarrow(auVar156,2);
                auVar147 = VectorAdd(auVar142,auVar78,1);
                *puVar111 = auVar147._0_8_;
                puVar111[1] = auVar147._8_8_;
                puVar111 = puVar111 + 2;
              } while (puVar104 + (param_2 >> 5) * 2 != puVar111);
              uVar99 = uVar105;
              if (uVar106 != uVar105) goto LAB_0001b2f0;
            }
            uVar107 = uVar107 + 1;
            puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
            if (uVar107 == param_3) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 5) {
          if (param_6 == 0) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar55._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar55._0_8_ = 0x1000000010;
            auVar56._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar56._0_8_ = 0x400000004;
            auVar57._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar57._0_8_ = 0x800000008;
            auVar122._8_8_ = DAT_0001c5d0;
            auVar122._0_8_ = DAT_0001c5c8;
            auVar58._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar58._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_0001c698:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar85._8_8_ = uVar67;
                auVar85._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar122;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar56 << 0x40 | auVar56),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar58 << 0x40 | auVar58),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar57 << 0x40 | auVar57),4)
                  ;
                  auVar169._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar169._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar55 << 0x40 | auVar55),4)
                  ;
                  auVar158._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar158._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar145._0_8_ = VectorCopyNarrow(auVar169,2);
                  auVar145._8_8_ = VectorCopyNarrow(auVar158,2);
                  auVar147 = VectorAdd(auVar145,auVar85,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_0001c698;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar59._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar59._0_8_ = 0x1000000010;
            auVar60._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar60._0_8_ = 0x400000004;
            auVar61._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar61._0_8_ = 0x800000008;
            auVar62._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar62._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar86._8_8_ = uVar67;
            auVar86._0_8_ = uVar67;
            uVar105 = 0;
            auVar129._8_8_ = DAT_0001c5d0;
            auVar129._0_8_ = DAT_0001c5c8;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001c890:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar129;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar60 << 0x40 | auVar60),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar62 << 0x40 | auVar62),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar61 << 0x40 | auVar61),4)
                  ;
                  auVar170._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar170._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar59 << 0x40 | auVar59),4)
                  ;
                  auVar159._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar159._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar146._0_8_ = VectorCopyNarrow(auVar170,2);
                  auVar146._8_8_ = VectorCopyNarrow(auVar159,2);
                  VectorAdd(auVar146,auVar86,1);
                  puVar87 = (undefined1 *)0x3e0;
                  puVar88 = (undefined1 *)0x3f0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3e8;
                  puVar88 = (undefined1 *)0x3f8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_0001c890;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 2) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar17._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar17._0_8_ = 0x1000000010;
            auVar18._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar18._0_8_ = 0x400000004;
            auVar119._8_8_ = DAT_0001a200;
            auVar119._0_8_ = DAT_0001a1f8;
            auVar19._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar19._0_8_ = 0x800000008;
            auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar20._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_0001a560:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar74._8_8_ = uVar67;
                auVar74._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar119;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar18 << 0x40 | auVar18),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar20 << 0x40 | auVar20),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar19 << 0x40 | auVar19),4)
                  ;
                  auVar162._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar162._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar17 << 0x40 | auVar17),4)
                  ;
                  auVar152._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar152._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar138._0_8_ = VectorCopyNarrow(auVar162,2);
                  auVar138._8_8_ = VectorCopyNarrow(auVar152,2);
                  auVar147 = VectorAdd(auVar138,auVar74,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (uVar106 != param_2) goto LAB_0001a560;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar21._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar21._0_8_ = 0x1000000010;
            auVar22._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar22._0_8_ = 0x400000004;
            auVar23._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar23._0_8_ = 0x800000008;
            auVar24._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar24._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar75._8_8_ = uVar67;
            auVar75._0_8_ = uVar67;
            uVar105 = 0;
            auVar124._8_8_ = DAT_0001a908;
            auVar124._0_8_ = DAT_0001a900;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001a750:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar124;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar22 << 0x40 | auVar22),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar24 << 0x40 | auVar24),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar23 << 0x40 | auVar23),4)
                  ;
                  auVar163._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar163._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar21 << 0x40 | auVar21),4)
                  ;
                  auVar153._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar153._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar139._0_8_ = VectorCopyNarrow(auVar163,2);
                  auVar139._8_8_ = VectorCopyNarrow(auVar153,2);
                  VectorAdd(auVar139,auVar75,1);
                  puVar87 = (undefined1 *)0x3c0;
                  puVar88 = (undefined1 *)0x3d0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3c8;
                  puVar88 = (undefined1 *)0x3d8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar106 != uVar107) goto LAB_0001a750;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 6) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar37._0_8_ = 0x1000000010;
            auVar38._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar38._0_8_ = 0x400000004;
            auVar120._8_8_ = DAT_0001b6f8;
            auVar120._0_8_ = DAT_0001b6f0;
            auVar39._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar39._0_8_ = 0x800000008;
            auVar40._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar40._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_0001b4e8:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar79._8_8_ = uVar67;
                auVar79._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar120;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar38 << 0x40 | auVar38),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar40 << 0x40 | auVar40),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar39 << 0x40 | auVar39),4)
                  ;
                  auVar177._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar177._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar37 << 0x40 | auVar37),4)
                  ;
                  auVar171._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar171._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar143._0_8_ = VectorCopyNarrow(auVar177,2);
                  auVar143._8_8_ = VectorCopyNarrow(auVar171,2);
                  auVar147 = VectorAdd(auVar143,auVar79,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_0001b4e8;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar41._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar41._0_8_ = 0x1000000010;
            auVar42._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar42._0_8_ = 0x400000004;
            auVar43._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar43._0_8_ = 0x800000008;
            auVar44._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar44._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar80._8_8_ = uVar67;
            auVar80._0_8_ = uVar67;
            uVar105 = 0;
            auVar125._8_8_ = DAT_0001b6f8;
            auVar125._0_8_ = DAT_0001b6f0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001b700:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar125;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar42 << 0x40 | auVar42),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar44 << 0x40 | auVar44),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar43 << 0x40 | auVar43),4)
                  ;
                  auVar178._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar178._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar41 << 0x40 | auVar41),4)
                  ;
                  auVar172._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar172._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar144._0_8_ = VectorCopyNarrow(auVar178,2);
                  auVar144._8_8_ = VectorCopyNarrow(auVar172,2);
                  VectorAdd(auVar144,auVar80,1);
                  puVar87 = (undefined1 *)0x3a0;
                  puVar88 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3a8;
                  puVar88 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_0001b700;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 7) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar105 = param_2 & 0xfffffff0;
            auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar9._0_8_ = 0x1000000010;
            auVar10._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar10._0_8_ = 0x400000004;
            auVar11._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar11._0_8_ = 0x800000008;
            auVar114._8_8_ = DAT_0001a200;
            auVar114._0_8_ = DAT_0001a1f8;
            auVar12._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar12._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_00019ea4:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar72._8_8_ = uVar67;
                auVar72._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar114;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar10 << 0x40 | auVar10),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar11 << 0x40 | auVar11),4)
                  ;
                  auVar160._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar160._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9),4);
                  auVar150._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar150._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar136._0_8_ = VectorCopyNarrow(auVar160,2);
                  auVar136._8_8_ = VectorCopyNarrow(auVar150,2);
                  auVar147 = VectorAdd(auVar136,auVar72,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar105 + (int)param_1));
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_00019ea4;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
            uVar106 = param_2 >> 1;
            if (uVar106 == 0) {
              return 0;
            }
            uVar105 = 0;
            puVar111 = puVar104;
            do {
              uVar99 = uVar105 >> 1;
              uVar105 = uVar105 + 1;
              memset(puVar111,((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar99 & 0xff,uVar106);
              puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
            } while (param_3 != uVar105);
            auVar13._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar13._0_8_ = 0x1000000010;
            auVar14._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar14._0_8_ = 0x400000004;
            auVar15._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar15._0_8_ = 0x800000008;
            cVar95 = cVar95 * '\x05' + '@';
            puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 1));
            auVar16._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar16._0_8_ = 0xc0000000c;
            uVar107 = (param_2 >> 5) * 0x10;
            auVar115._8_8_ = DAT_0001a200;
            auVar115._0_8_ = DAT_0001a1f8;
            uVar105 = 0;
            uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar73._8_8_ = uVar67;
            auVar73._0_8_ = uVar67;
            do {
              if (uVar106 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001a0c4:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                if (uVar108 < uVar106) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                  if (uVar109 < uVar106) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                    if (uVar108 < uVar106) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                      if (uVar109 < uVar106) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                        if (uVar108 < uVar106) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                          if (uVar109 < uVar106) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                            if (uVar108 < uVar106) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                              if (uVar109 < uVar106) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                if (uVar108 < uVar106) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                  if (uVar109 < uVar106) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                    if (uVar108 < uVar106) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                      if (uVar109 < uVar106) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                        if (uVar108 < uVar106) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108) =
                                               cVar95 + (char)uVar108;
                                          if (uVar99 < uVar106) {
                                            *(char *)((int)puVar104 + uVar99) =
                                                 cVar95 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar115;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar16 << 0x40 | auVar16),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar15 << 0x40 | auVar15),4)
                  ;
                  auVar161._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar161._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar13 << 0x40 | auVar13),4)
                  ;
                  auVar151._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar151._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar137._0_8_ = VectorCopyNarrow(auVar161,2);
                  auVar137._8_8_ = VectorCopyNarrow(auVar151,2);
                  auVar147 = VectorAdd(auVar137,auVar73,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 2);
                uVar99 = uVar107;
                if (uVar106 != uVar107) goto LAB_0001a0c4;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      else {
        if (param_6 == 0xb) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 == 0) {
            return 0;
          }
          uVar106 = param_2 & 0xfffffff0;
          auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar25._0_8_ = 0x1000000010;
          auVar26._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar26._0_8_ = 0x400000004;
          auVar116._8_8_ = DAT_0001aff8;
          auVar116._0_8_ = DAT_0001aff0;
          auVar27._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar27._0_8_ = 0x800000008;
          auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar28._0_8_ = 0xc0000000c;
          uVar107 = 0;
          do {
            cVar94 = cVar95 * '\x03' + (char)uVar107;
            if (param_2 - 1 < 0xf) {
              uVar105 = 0;
LAB_0001ae88:
              uVar99 = uVar105 + 1;
              *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
              if (uVar99 < param_2) {
                uVar108 = uVar105 + 2;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar99 = uVar105 + 3;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar99 < param_2) {
                    uVar108 = uVar105 + 4;
                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                    if (uVar108 < param_2) {
                      uVar99 = uVar105 + 5;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar99 < param_2) {
                        uVar108 = uVar105 + 6;
                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                        if (uVar108 < param_2) {
                          uVar99 = uVar105 + 7;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar99 < param_2) {
                            uVar108 = uVar105 + 8;
                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                            if (uVar108 < param_2) {
                              uVar99 = uVar105 + 9;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar99 < param_2) {
                                uVar108 = uVar105 + 10;
                                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                if (uVar108 < param_2) {
                                  uVar99 = uVar105 + 0xb;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar99 < param_2) {
                                    uVar108 = uVar105 + 0xc;
                                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                    if (uVar108 < param_2) {
                                      uVar99 = uVar105 + 0xd;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar99 < param_2) {
                                        uVar105 = uVar105 + 0xe;
                                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                        if (uVar105 < param_2) {
                                          *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105
                                          ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
              uVar67 = CONCAT44(uVar91,uVar91);
              auVar76._8_8_ = uVar67;
              auVar76._0_8_ = uVar67;
              puVar104 = param_1;
              auVar133 = auVar116;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar26 << 0x40 | auVar26),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar28 << 0x40 | auVar28),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar27 << 0x40 | auVar27),4);
                auVar164._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar164._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar25 << 0x40 | auVar25),4);
                auVar154._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar154._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar140._0_8_ = VectorCopyNarrow(auVar164,2);
                auVar140._8_8_ = VectorCopyNarrow(auVar154,2);
                auVar147 = VectorAdd(auVar140,auVar76,1);
                *puVar104 = auVar147._0_8_;
                puVar104[1] = auVar147._8_8_;
                puVar104 = puVar104 + 2;
              } while (puVar104 != (undefined8 *)(uVar106 + (int)param_1));
              uVar105 = uVar106;
              if (param_2 != uVar106) goto LAB_0001ae88;
            }
            uVar107 = uVar107 + 1;
            param_1 = (undefined8 *)((int)param_1 + param_4);
            if (param_3 == uVar107) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 0xc) {
          if (param_6 == 9) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar51._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar51._0_8_ = 0x1000000010;
            auVar52._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar52._0_8_ = 0x400000004;
            auVar53._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar53._0_8_ = 0x800000008;
            auVar54._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar54._0_8_ = 0xc0000000c;
            auVar66._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar66._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar84._8_8_ = uVar67;
            auVar84._0_8_ = uVar67;
            uVar105 = 0;
            auVar128._8_8_ = DAT_0001c5d0;
            auVar128._0_8_ = DAT_0001c5c8;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001c2ac:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar97._12_4_ = uVar91;
                auVar97._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar128;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar52 << 0x40 | auVar52),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar54 << 0x40 | auVar54),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar53 << 0x40 | auVar53),4)
                  ;
                  auVar187._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar187._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar51 << 0x40 | auVar51),4)
                  ;
                  auVar183._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar183._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar131._0_8_ = VectorCopyNarrow(auVar187,2);
                  auVar131._8_8_ = VectorCopyNarrow(auVar183,2);
                  auVar97._4_4_ = uVar91;
                  auVar97._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar131,auVar131,1);
                  VectorAdd(auVar131,auVar84,1);
                  auVar147 = VectorAdd(auVar147,auVar97,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar66 << 0x40 | auVar66),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_0001c2ac;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 10) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar5._0_8_ = 0x1000000010;
            auVar6._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar6._0_8_ = 0xc0000000c;
            auVar64._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar64._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar70._8_8_ = uVar67;
            auVar70._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            auVar123._8_8_ = DAT_00019970;
            auVar123._0_8_ = DAT_00019968;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00019aa4:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108
                                  ;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar71._8_8_ = uVar67;
                auVar71._0_8_ = uVar67;
                puVar104 = param_1;
                auVar133 = auVar123;
                do {
                  auVar7._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar7._0_8_ = 0x800000008;
                  auVar8._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar8._0_8_ = 0x400000004;
                  puVar112 = puVar104 + 8;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar7 << 0x40 | auVar7),4);
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar8 << 0x40 | auVar8),4);
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar6 << 0x40 | auVar6),4);
                  auVar176._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar176._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5),4);
                  auVar135._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar135._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar149._0_8_ = VectorCopyNarrow(auVar176,2);
                  auVar149._8_8_ = VectorCopyNarrow(auVar135,2);
                  auVar147 = VectorAdd(auVar149,auVar149,1);
                  VectorAdd(auVar149,auVar70,1);
                  auVar147 = VectorAdd(auVar147,auVar71,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar64 << 0x40 | auVar64),1);
                  puVar87 = (undefined1 *)0x3f0;
                  puVar88 = (undefined1 *)0x400;
                  puVar89 = (undefined1 *)0x410;
                  puVar90 = (undefined1 *)0x420;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x3f8;
                  puVar88 = (undefined1 *)0x408;
                  puVar89 = (undefined1 *)0x418;
                  puVar90 = (undefined1 *)0x428;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00019aa4;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 0x11) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar47._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar47._0_8_ = 0x1000000010;
            auVar48._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar48._0_8_ = 0x400000004;
            auVar49._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar49._0_8_ = 0x800000008;
            auVar50._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar50._0_8_ = 0xc0000000c;
            auVar65._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar65._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar83._8_8_ = uVar67;
            auVar83._0_8_ = uVar67;
            uVar105 = 0;
            auVar127._8_8_ = DAT_0001bd18;
            auVar127._0_8_ = DAT_0001bd10;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001be58:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar96._12_4_ = uVar91;
                auVar96._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar127;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar48 << 0x40 | auVar48),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar50 << 0x40 | auVar50),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar49 << 0x40 | auVar49),4)
                  ;
                  auVar186._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar186._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar47 << 0x40 | auVar47),4)
                  ;
                  auVar182._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar182._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar130._0_8_ = VectorCopyNarrow(auVar186,2);
                  auVar130._8_8_ = VectorCopyNarrow(auVar182,2);
                  auVar96._4_4_ = uVar91;
                  auVar96._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar130,auVar130,1);
                  VectorAdd(auVar130,auVar83,1);
                  auVar147 = VectorAdd(auVar147,auVar96,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar65 << 0x40 | auVar65),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_0001be58;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 0x12) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar1._0_8_ = 0x400000004;
            auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar2._0_8_ = 0x800000008;
            auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar3._0_8_ = 0xc0000000c;
            auVar63._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar63._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar68._8_8_ = uVar67;
            auVar68._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar98 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00019640:
                uVar108 = uVar99 + 1;
                cVar92 = cVar98 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar98 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar98 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar98 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108
                                      ;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar98 = cVar98 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar98 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar98,cVar98),CONCAT11(cVar98,cVar98));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar69._8_8_ = uVar67;
                auVar69._0_8_ = uVar67;
                auVar132._8_8_ = DAT_00019970;
                auVar132._0_8_ = DAT_00019968;
                puVar104 = param_1;
                do {
                  auVar133 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
                  auVar147 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
                  auVar175._0_8_ = VectorCopyNarrow(auVar132,4);
                  auVar175._8_8_ = VectorCopyNarrow(auVar133,4);
                  auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar4._0_8_ = 0x1000000010;
                  auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
                  auVar134._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar134._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar148._0_8_ = VectorCopyNarrow(auVar175,2);
                  auVar148._8_8_ = VectorCopyNarrow(auVar134,2);
                  auVar133 = VectorAdd(auVar148,auVar148,1);
                  VectorAdd(auVar148,auVar68,1);
                  auVar133 = VectorAdd(auVar133,auVar69,1);
                  VectorAdd(auVar133,*(undefined1 (*) [16])(auVar63 << 0x40 | auVar63),1);
                  puVar87 = (undefined1 *)0x330;
                  puVar88 = (undefined1 *)0x340;
                  puVar89 = (undefined1 *)0x350;
                  puVar90 = (undefined1 *)0x360;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x338;
                  puVar88 = (undefined1 *)0x348;
                  puVar89 = (undefined1 *)0x358;
                  puVar90 = (undefined1 *)0x368;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00019640;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      goto LAB_0001afb8;
    }
  }
  else if (param_6 < 0x1000e) {
    if (param_6 < 0x1000a) {
      if (0x10007 < param_6) {
LAB_0001a930:
        pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
        if (DAT_000352c0 == 0) {
          if ((int)param_4 < (int)(param_2 * 4)) {
            RK_LOG(3,0x17171700,
                   "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                   "util_check_stride_by_pixel",0x1bf,param_4,param_2,4);
            RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                   "util_check_stride_by_pixel",0x1c1,param_4,4,param_4 << 2);
            goto LAB_0001cb34;
          }
        }
        else {
LAB_0001cb34:
          local_110 = param_4 << 2;
          DAT_000352c0 = 1;
        }
        if (DAT_000352bc == 0) {
          uVar107 = local_110 + 0x1f & 0xffffffe0;
          if (local_110 == uVar107) goto LAB_0001aa08;
          RK_LOG(3,0x17171700,
                 "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
                 ,"util_check_8_pixel_aligned",0x1cd,"32bit RGB",4);
          RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
                 "util_check_8_pixel_aligned",0x1cf,uVar107);
        }
        local_110 = local_110 + 0x1f & 0xffffffe0;
        DAT_000352bc = 1;
LAB_0001aa08:
        if (param_3 == 0) {
          return 0;
        }
        param_7 = param_7 & 0xff;
        if (param_2 == 0) {
          return 0;
        }
        local_b4 = 0;
        do {
          uVar107 = 0;
          iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
          puVar104 = local_b0;
          do {
            while( true ) {
              iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
              uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
              iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
              iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
              iVar101 = 0;
              if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
                iVar101 = 0xff;
              }
              iVar100 = 0;
              if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
                iVar100 = 0xff;
              }
              if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
              uVar107 = uVar107 + 1;
              (*pcVar102)();
              puVar104 = (undefined8 *)((int)puVar104 + 4);
              if (param_2 == uVar107) goto LAB_0001ab50;
            }
            uVar107 = uVar107 + 1;
            (*pcVar102)(puVar104,iVar101,iVar100,0,1);
            puVar104 = (undefined8 *)((int)puVar104 + 4);
          } while (param_2 != uVar107);
LAB_0001ab50:
          local_b0 = (undefined8 *)((int)local_b0 + local_110);
          local_b4 = local_b4 + 1;
          if (param_3 == local_b4) {
            return 0;
          }
        } while( true );
      }
      pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
      if (DAT_000352c0 == 0) {
        if ((int)param_4 < (int)(param_2 * 3)) {
          iVar110 = param_4 * 2;
          RK_LOG(3,0x17171700,
                 "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                 "util_check_stride_by_pixel",0x1bf,param_4,param_2,3);
          RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                 "util_check_stride_by_pixel",0x1c1,param_4,3,param_4 * 3);
          goto LAB_0001cbc0;
        }
      }
      else {
        iVar110 = param_4 << 1;
LAB_0001cbc0:
        local_110 = iVar110 + param_4;
        DAT_000352c0 = 1;
      }
      if (DAT_000352bc == 0) {
        uVar107 = local_110 + 0x17 & 0xffffffe8;
        if (uVar107 == local_110) goto LAB_0001a314;
        RK_LOG(3,0x17171700,
               "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
               ,"util_check_8_pixel_aligned",0x1cd,"24bit RGB",3);
        RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
               "util_check_8_pixel_aligned",0x1cf,uVar107);
      }
      local_110 = local_110 + 0x17 & 0xffffffe8;
      DAT_000352bc = 1;
LAB_0001a314:
      if (param_3 == 0) {
        return 0;
      }
      param_7 = param_7 & 0xff;
      if (param_2 == 0) {
        return 0;
      }
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 3);
            if (param_2 == uVar107) goto LAB_0001a45c;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 3);
        } while (param_2 != uVar107);
LAB_0001a45c:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
        if (param_3 == local_b4) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (param_6 < 0x10010) {
LAB_0001afb8:
      RK_LOG(2,0x17171700,"filling function do not support type %d\n","TEST_COMM_FillImage",0x2ea,
             param_6);
      return 0xffffffff;
    }
    if (param_6 < 0x10014) goto LAB_0001a930;
    if (0x10016 < param_6) goto LAB_0001afb8;
  }
  pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
  if (DAT_000352c0 == 0) {
    if ((int)param_4 < (int)(param_2 * 2)) {
      RK_LOG(3,0x17171700,
             "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
             "util_check_stride_by_pixel",0x1bf,param_4,param_2,2);
      RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
             "util_check_stride_by_pixel",0x1c1,param_4,2,param_4 << 1);
      goto LAB_0001cab0;
    }
  }
  else {
LAB_0001cab0:
    local_110 = param_4 << 1;
    DAT_000352c0 = 1;
  }
  if (DAT_000352bc == 0) {
    uVar107 = local_110 + 0xf & 0xfffffff0;
    if (local_110 == uVar107) goto LAB_0001ac64;
    RK_LOG(3,0x17171700,
           "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
           ,"util_check_8_pixel_aligned",0x1cd,"16bit RGB",2);
    RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
           "util_check_8_pixel_aligned",0x1cf,uVar107);
  }
  local_110 = local_110 + 0xf & 0xfffffff0;
  DAT_000352bc = 1;
LAB_0001ac64:
  if (param_3 != 0) {
    param_7 = param_7 & 0xff;
    if (param_2 != 0) {
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 2);
            if (param_2 == uVar107) goto LAB_0001adac;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 2);
        } while (param_2 != uVar107);
LAB_0001adac:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
      } while (param_3 != local_b4);
    }
  }
  return 0;
}



/* ===== TEST_COMM_CompareImageFuzzy @ 0001ccc8 size=1236 ===== */

undefined4 TEST_COMM_CompareImageFuzzy(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  double in_d0;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  iVar4 = __aeabi_uidiv(param_3,param_4);
  uVar14 = param_4 * iVar4;
  if (param_5 == 0) {
    dVar24 = 0.0;
    dVar26 = 0.0;
    iVar4 = 0;
    uVar15 = 0;
  }
  else {
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x100000001;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    uVar11 = uVar14 & 0xfffffff0;
    auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar2._0_8_ = 0x2000000020;
    auVar2 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
    iVar8 = 0;
    iVar16 = 0;
    iVar4 = 0;
    uVar15 = 0;
    do {
      if (uVar14 != 0) {
        if (uVar14 - 1 < 0xf) {
          uVar13 = 0;
          uVar10 = uVar13;
LAB_0001ce04:
          iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                  (uint)*(byte *)(param_2 + uVar10 + iVar8);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          uVar6 = uVar10 + 1;
          if (0x20 < iVar5) {
            uVar13 = uVar13 + 1;
          }
          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
            uVar6 = uVar10 + 2;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (0x20 < iVar5) {
              uVar13 = uVar13 + 1;
            }
            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
              uVar6 = uVar10 + 3;
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (0x20 < iVar5) {
                uVar13 = uVar13 + 1;
              }
              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                uVar6 = uVar10 + 4;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (0x20 < iVar5) {
                  uVar13 = uVar13 + 1;
                }
                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                  if (iVar5 < 0) {
                    iVar5 = -iVar5;
                  }
                  uVar6 = uVar10 + 5;
                  if (0x20 < iVar5) {
                    uVar13 = uVar13 + 1;
                  }
                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                    if (iVar5 < 0) {
                      iVar5 = -iVar5;
                    }
                    uVar6 = uVar10 + 6;
                    if (0x20 < iVar5) {
                      uVar13 = uVar13 + 1;
                    }
                    if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                      iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                              (uint)*(byte *)(param_2 + uVar6 + iVar8);
                      if (iVar5 < 0) {
                        iVar5 = -iVar5;
                      }
                      uVar6 = uVar10 + 7;
                      if (0x20 < iVar5) {
                        uVar13 = uVar13 + 1;
                      }
                      if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                        iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                (uint)*(byte *)(param_2 + uVar6 + iVar8);
                        if (iVar5 < 0) {
                          iVar5 = -iVar5;
                        }
                        uVar6 = uVar10 + 8;
                        if (0x20 < iVar5) {
                          uVar13 = uVar13 + 1;
                        }
                        if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                          iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                  (uint)*(byte *)(param_2 + uVar6 + iVar8);
                          if (iVar5 < 0) {
                            iVar5 = -iVar5;
                          }
                          uVar6 = uVar10 + 9;
                          if (0x20 < iVar5) {
                            uVar13 = uVar13 + 1;
                          }
                          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
                            if (iVar5 < 0) {
                              iVar5 = -iVar5;
                            }
                            uVar6 = uVar10 + 10;
                            if (0x20 < iVar5) {
                              uVar13 = uVar13 + 1;
                            }
                            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
                              if (iVar5 < 0) {
                                iVar5 = -iVar5;
                              }
                              uVar6 = uVar10 + 0xb;
                              if (0x20 < iVar5) {
                                uVar13 = uVar13 + 1;
                              }
                              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                if (iVar5 < 0) {
                                  iVar5 = -iVar5;
                                }
                                uVar6 = uVar10 + 0xc;
                                if (0x20 < iVar5) {
                                  uVar13 = uVar13 + 1;
                                }
                                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                  if (iVar5 < 0) {
                                    iVar5 = -iVar5;
                                  }
                                  uVar6 = uVar10 + 0xd;
                                  if (0x20 < iVar5) {
                                    uVar13 = uVar13 + 1;
                                  }
                                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                    uVar10 = uVar10 + 0xe;
                                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                    if (iVar5 < 0) {
                                      iVar5 = -iVar5;
                                    }
                                    if (0x20 < iVar5) {
                                      uVar13 = uVar13 + 1;
                                    }
                                    if (uVar10 <= uVar14 && uVar14 - uVar10 != 0) {
                                      iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                                              (uint)*(byte *)(param_2 + uVar10 + iVar8);
                                      if (iVar5 < 0) {
                                        iVar5 = -iVar5;
                                      }
                                      if (0x20 < iVar5) {
                                        uVar13 = uVar13 + 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pauVar12 = (undefined1 (*) [16])(param_1 + iVar8);
          auVar28 = (undefined1  [16])0x0;
          puVar3 = *pauVar12;
          pauVar9 = (undefined1 (*) [16])(param_2 + iVar8);
          do {
            auVar17 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            auVar19 = *pauVar9;
            pauVar9 = pauVar9 + 1;
            auVar29 = VectorCopyLong(auVar17._0_8_,1,1);
            auVar25 = VectorCopyLong(auVar17._8_8_,1,1);
            auVar18 = VectorCopyLong(auVar19._0_8_,1,1);
            auVar20 = VectorCopyLong(auVar19._8_8_,1,1);
            auVar23 = VectorCopyLong(auVar29._0_8_,2,1);
            auVar17 = VectorCopyLong(auVar18._0_8_,2,1);
            auVar29 = VectorCopyLong(auVar29._8_8_,2,1);
            auVar19 = VectorCopyLong(auVar18._8_8_,2,1);
            auVar30 = VectorCopyLong(auVar25._0_8_,2,1);
            auVar18 = VectorCopyLong(auVar20._0_8_,2,1);
            auVar23 = VectorSub(auVar23,auVar17,4);
            auVar29 = VectorSub(auVar29,auVar19,4);
            auVar25 = VectorCopyLong(auVar25._8_8_,2,1);
            auVar17 = VectorCopyLong(auVar20._8_8_,2,1);
            auVar19 = VectorAbsolute(auVar23,4);
            auVar20 = VectorAbsolute(auVar29,4);
            auVar23 = VectorSub(auVar30,auVar18,4);
            auVar18 = VectorSub(auVar25,auVar17,4);
            auVar23 = VectorAbsolute(auVar23,4);
            auVar17 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorCompareGreaterThanOrEqual(auVar2,auVar20,4,0);
            auVar19 = VectorAbsolute(auVar18,4);
            auVar23 = VectorCompareGreaterThanOrEqual(auVar2,auVar23,4,0);
            auVar17 = VectorBitwiseSelect(auVar17,(undefined1  [16])0x0,auVar1);
            auVar18 = VectorBitwiseSelect(auVar20,(undefined1  [16])0x0,auVar1);
            auVar19 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorBitwiseSelect(auVar23,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar18,4);
            auVar19 = VectorBitwiseSelect(auVar19,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar20,4);
            auVar17 = VectorAdd(auVar17,auVar19,4);
            auVar28 = VectorAdd(auVar28,auVar17,4);
          } while (pauVar12 != (undefined1 (*) [16])(puVar3 + uVar11));
          uVar27 = VectorAdd(auVar28._0_8_,auVar28._8_8_,4);
          uVar27 = VectorPairwiseAdd(uVar27,uVar27,4);
          uVar13 = (uint)uVar27;
          uVar10 = uVar11;
          if (uVar14 - uVar11 != 0) goto LAB_0001ce04;
        }
        iVar4 = iVar4 + uVar13;
        if (uVar15 < uVar13) {
          uVar15 = uVar13;
        }
      }
      iVar16 = iVar16 + 1;
      iVar8 = iVar8 + param_3;
    } while (param_5 != iVar16);
    dVar26 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    dVar24 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
  }
  dVar21 = (double)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
  dVar22 = (double)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  RK_LOG(4,0x17171700,"max line diff(%d), stride(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30d,uVar15,uVar14);
  RK_LOG(4,0x17171700,"total pixel diff(%d), pixel number(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30f,iVar4,param_5 * uVar14);
  if (dVar24 / dVar21 <= in_d0 + in_d0) {
    uVar7 = 0;
  }
  else if (in_d0 * 0.5 < (dVar26 / dVar21) / dVar22) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== _fini @ 0001d19c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00036000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00036004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00036010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00036014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 00036018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00036020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00036024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00036028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00036030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00036034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00036038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0003603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00036040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00036044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00036048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00036050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00036054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00036058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 0003605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00036060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00036064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00036068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0003606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00036070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00036074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 00036078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 0003607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00036080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00036084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00036088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00036090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00036094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00036098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 0003609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000360a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 000360a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000360a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000360ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000360b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000360b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000360b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 000360bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000360c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000360c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000360c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000360cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 000360d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 000360d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 000360d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 000360dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 000360e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000360e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 000360e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000360ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000360f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 000360f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_UpdateCanvas @ 000360f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_UpdateCanvas(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000360fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00036100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00036104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00036108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 0003610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00036110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 00036114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00036118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0003611c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00036120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00036124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00036128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003612c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00036130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00036134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00036138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003613c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00036140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00036144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 00036148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 0003614c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00036150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00036154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00036158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003615c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetCanvasInfo @ 00036160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetCanvasInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00036164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00036168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 0003616c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00036170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00036174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00036178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003617c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


