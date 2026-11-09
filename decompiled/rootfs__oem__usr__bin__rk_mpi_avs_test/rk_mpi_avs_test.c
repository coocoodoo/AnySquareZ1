// rk_mpi_avs_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012df4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012e18 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003200c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnAttr @ 00012e24 size=12 ===== */

void RK_MPI_AVS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnAttr_00032010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012e30 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00032014)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012e3c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00032018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012e48 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003201c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00032020)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00032024)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 00012e6c size=12 ===== */

void RK_MPI_VPSS_GetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpCrop_00032028)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003202c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00012e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00032030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00012e90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00032034)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012e9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00032038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00012ea8 size=12 ===== */

void RK_MPI_VPSS_SetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnCrop_0003203c)();
  return;
}



/* ===== <EXTERNAL>::getline @ 00012eb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_00032040)(__lineptr);
  return _Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012ec0 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00032044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00012ecc size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00032048)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_VirAddr2Handle @ 00012ed8 size=12 ===== */

void RK_MPI_MMZ_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MMZ_VirAddr2Handle_0003204c)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 00012ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00032050)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00012ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00032054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00032058)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00032060)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00012f20 size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_00032064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00012f2c size=12 ===== */

void RK_MPI_AVS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StopGrp_00032068)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00012f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003206c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAllocEx @ 00012f44 size=12 ===== */

void RK_MPI_SYS_MmzAllocEx(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAllocEx_00032070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00012f50 size=12 ===== */

void RK_MPI_AVS_GetFinalLut(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetFinalLut_00032074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00012f5c size=12 ===== */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_ReleaseChnFrame_00032078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00012f68 size=12 ===== */

void RK_MPI_VPSS_GetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnCrop_0003207c)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00012f74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00032080)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00032084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00012f8c size=12 ===== */

void RK_MPI_AVS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_DestroyGrp_00032088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00012f98 size=12 ===== */

void RK_MPI_AVS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StartGrp_0003208c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00012fa4 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00032090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00012fb0 size=12 ===== */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ReleaseChnFrame_00032094)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00012fbc size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00032098)();
  return;
}



/* ===== <EXTERNAL>::access @ 00012fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0003209c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012fd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_000320a0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 00012fe0 size=12 ===== */

void RK_MPI_MB_VirAddr2Handle(void)

{
  (*(code *)PTR_RK_MPI_MB_VirAddr2Handle_000320a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00012fec size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000320a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SendPipeFrame @ 00012ff8 size=12 ===== */

void RK_MPI_AVS_SendPipeFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_SendPipeFrame_000320ac)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00013004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_000320b0)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00013010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000320b4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 0001301c size=12 ===== */

void RK_MPI_AVS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_EnableChn_000320b8)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00013028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000320bc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00013034 size=12 ===== */

void RK_MPI_VPSS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnFrame_000320c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00013040 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_000320c4)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 0001304c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000320c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00013058 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_000320cc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00013064 size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_000320d0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 00013070 size=12 ===== */

void RK_MPI_VPSS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DisableChn_000320d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 0001307c size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_000320d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetGrpAttr @ 00013094 size=12 ===== */

void RK_MPI_AVS_GetGrpAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetGrpAttr_000320e0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 000130a0 size=12 ===== */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_Cached_000320e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 000130ac size=12 ===== */

void RK_MPI_VPSS_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SendFrame_000320e8)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 000130b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000320ec)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 000130c4 size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_000320f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000130d0 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_000320f4)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 000130dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000320f8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 000130e8 size=12 ===== */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotationEx_000320fc)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000130f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00032100)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00013100 size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_00032104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 0001310c size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_00032108)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00013118 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003210c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00013124 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00032110)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00013130 size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_00032114)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 0001313c size=12 ===== */

void RK_MPI_AVS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnFrame_00032118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00013148 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_0003211c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00013154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00032120)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00013160 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00032124)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 0001316c size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_00032128)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00013178 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003212c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00013184 size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_00032130)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00013190 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00032134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0001319c size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00032138)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000131a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003213c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 000131b4 size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_00032140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000131c0 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00032144)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000131cc size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00032148)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000131d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003214c)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 000131e4 size=12 ===== */

void RK_MPI_VPSS_SetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetGrpCrop_00032150)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 000131f0 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00032154)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 000131fc size=12 ===== */

void RK_MPI_VPSS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ResetGrp_00032158)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00013208 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003215c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00013214 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_00032160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00013220 size=12 ===== */

void RK_MPI_AVS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetChnAttr_00032164)();
  return;
}



/* ===== <EXTERNAL>::ftell @ 0001322c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_00032168)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ResetGrp @ 00013238 size=12 ===== */

void RK_MPI_AVS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_ResetGrp_0003216c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00013244 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00032170)(__ptr);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFree @ 00013250 size=12 ===== */

void RK_MPI_SYS_MmzFree(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFree_00032174)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001325c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00032178)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00013268 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003217c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00013274 size=12 ===== */

void RK_MPI_AVS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_CreateGrp_00032180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00013280 size=12 ===== */

void RK_MPI_AVS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_DisableChn_00032184)();
  return;
}



/* ===== <EXTERNAL>::puts @ 0001328c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00032188)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00013298 size=12 ===== */

void RK_MPI_VPSS_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotation_0003218c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 000132a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00032190)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 000132b0 size=12 ===== */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotationEx_00032194)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetGrpAttr @ 000132bc size=12 ===== */

void RK_MPI_AVS_SetGrpAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetGrpAttr_00032198)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 000132c8 size=12 ===== */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetPicBufferSize_0003219c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 000132d4 size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_000321a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2VirAddr @ 000132e0 size=12 ===== */

void RK_MPI_MMZ_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Handle2VirAddr_000321a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 000132ec size=12 ===== */

void RK_MPI_VPSS_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotation_000321a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 000132f8 size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_000321ac)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00013304 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000321b0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00013310 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000321b4)(__th);
  return iVar1;
}



/* ===== main @ 00013320 size=5340 ===== */

int main(undefined4 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *__ptr;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_cc0;
  int local_cbc;
  int local_cb8;
  int local_cb4;
  int local_cb0;
  undefined4 *local_ca8;
  undefined1 *local_ca4;
  undefined4 local_ca0;
  int local_c9c [3];
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined1 auStack_c80 [40];
  int local_c58;
  undefined8 local_c54;
  undefined8 uStack_c4c;
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined8 local_c38;
  undefined8 uStack_c30;
  int local_c24;
  int local_c20;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c08;
  undefined4 local_bec;
  undefined4 local_b00;
  undefined4 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  int local_ae8;
  int local_ae4;
  undefined4 local_ae0;
  undefined4 local_adc;
  undefined4 local_ad8;
  undefined4 local_ad4;
  int local_ad0;
  int local_acc;
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  int local_ab0;
  undefined4 local_aac;
  undefined4 local_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined4 local_a98;
  undefined4 local_a94;
  undefined4 local_a90;
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  int local_a4c;
  undefined4 local_a48 [137];
  undefined1 auStack_824 [4];
  undefined4 local_820 [2];
  undefined *local_818;
  char *local_810;
  code *local_80c;
  undefined4 local_804;
  undefined4 local_800;
  char *local_7f0;
  undefined4 local_7e0;
  undefined1 local_7dc;
  char *local_7d8;
  undefined4 *local_7d4;
  char *local_7d0;
  undefined4 local_7c0;
  undefined1 local_7bc;
  char *local_7b8;
  undefined4 *local_7b4;
  char *local_7b0;
  undefined4 local_7a0;
  char *local_798;
  int *local_794;
  char *local_790;
  undefined4 local_780;
  undefined1 local_77c;
  char *local_778;
  undefined8 *local_774;
  char *local_770;
  undefined4 local_760;
  undefined1 local_75c;
  char *local_758;
  int local_754;
  char *local_750;
  undefined4 local_740;
  undefined1 local_73c;
  char *local_738;
  undefined8 *local_734;
  char *local_730;
  undefined4 local_720;
  undefined1 local_71c;
  char *local_718;
  int local_714;
  char *local_710;
  undefined4 local_700;
  undefined1 local_6fc;
  char *local_6f8;
  int *local_6f4;
  char *local_6f0;
  undefined4 local_6e0;
  undefined1 local_6dc;
  char *local_6d8;
  int *local_6d4;
  char *local_6d0;
  undefined4 local_6c0;
  char *local_6b8;
  undefined4 *local_6b4;
  char *local_6b0;
  undefined4 local_6a0;
  char *local_698;
  undefined4 *local_694;
  char *local_690;
  undefined4 local_680;
  undefined1 local_67c;
  char *local_678;
  undefined4 *local_674;
  char *local_670;
  undefined4 local_660;
  undefined1 local_65c;
  char *local_658;
  undefined4 *local_654;
  char *local_650;
  undefined4 local_640;
  undefined1 local_63c;
  char *local_638;
  int *local_634;
  char *local_630;
  undefined4 local_620;
  undefined1 local_61c;
  char *local_618;
  int *local_614;
  char *local_610;
  undefined4 local_600;
  undefined1 local_5fc;
  char *local_5f8;
  undefined4 *local_5f4;
  char *local_5f0;
  undefined4 local_5e0;
  undefined1 local_5dc;
  char *local_5d8;
  undefined4 *local_5d4;
  char *local_5d0;
  undefined4 local_5c0;
  char *local_5b8;
  undefined4 *local_5b4;
  char *local_5b0;
  undefined4 local_5a0;
  char *local_598;
  undefined4 *local_594;
  char *local_590;
  undefined4 local_580;
  char *local_578;
  undefined4 *local_574;
  char *local_570;
  undefined4 local_560;
  char *local_558;
  undefined4 *local_554;
  char *local_550;
  undefined4 local_540;
  char *local_538;
  undefined4 *local_534;
  char *local_530;
  undefined4 local_520;
  char *local_518;
  undefined4 *local_514;
  char *local_510;
  undefined4 local_500;
  char *local_4f8;
  undefined4 *local_4f4;
  char *local_4f0;
  undefined4 local_4e0;
  char *local_4d8;
  undefined4 *local_4d4;
  char *local_4d0;
  undefined4 local_4c0;
  char *local_4b8;
  undefined4 *local_4b4;
  char *local_4b0;
  undefined4 local_4a0;
  char *local_498;
  undefined4 *local_494;
  char *local_490;
  undefined4 local_480;
  char *local_478;
  undefined4 *local_474;
  char *local_470;
  undefined4 local_460;
  char *local_458;
  undefined4 *local_454;
  char *local_450;
  undefined4 local_440;
  char *local_438;
  undefined4 *local_434;
  char *local_430;
  undefined4 local_420;
  char *local_418;
  undefined4 *local_414;
  char *local_410;
  undefined4 local_400;
  char *local_3f8;
  undefined4 *local_3f4;
  char *local_3f0;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined4 *local_3d4;
  char *local_3d0;
  undefined4 local_3c0;
  char *local_3b8;
  undefined4 *local_3b4;
  char *local_3b0;
  undefined4 local_3a0;
  char *local_398;
  undefined4 *local_394;
  char *local_390;
  undefined4 local_380;
  undefined *local_378;
  undefined4 *local_374;
  char *local_370;
  undefined4 local_360;
  char *local_358;
  undefined4 *local_354;
  char *local_350;
  undefined4 local_340;
  char *local_338;
  undefined4 *local_334;
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
  undefined4 *local_2d4;
  char *local_2d0;
  undefined4 local_2c0;
  undefined1 local_2bc;
  char *local_2b8;
  undefined4 *local_2b4;
  char *local_2b0;
  undefined4 local_2a0;
  char *local_298;
  undefined4 *local_294;
  char *local_290;
  undefined4 local_280;
  char *local_278;
  undefined4 *local_274;
  char *local_270;
  undefined4 local_260;
  char *local_258;
  undefined4 *local_254;
  char *local_250;
  undefined4 local_240;
  char *local_238;
  undefined4 *local_234;
  char *local_230;
  undefined4 local_220;
  char *local_210;
  undefined4 local_200;
  char *local_1f8;
  undefined1 *local_1f4;
  char *local_1f0;
  undefined4 local_1c0 [103];
  
  puVar4 = &local_cc0;
  puVar7 = &local_cc0;
  local_ca8 = local_1c0;
  local_ca4 = param_2;
  memset(&local_b00,0,0x2e0);
  local_af8 = DAT_00013760;
  local_af0 = DAT_00013768;
  local_aa8 = 1;
  local_a58 = 0x3f800000;
  local_ac0 = 1;
  local_abc = 3;
  local_ab8 = 0xffffffff;
  local_ab4 = 0xffffffff;
  local_a54 = 0xffffffff;
  local_a50 = 0xffffffff;
  local_cc0 = 0x272;
  RK_LOG(2,0x11,"avs test running enter!",&DAT_0001e3b0);
  memset(local_820,0,0x660);
  local_804 = 1;
  local_7e0 = 6;
  local_818 = &DAT_0001e41c;
  local_7c0 = 6;
  local_810 = "show this help message and exit";
  local_800 = 1;
  local_80c = argparse_help_cb;
  local_7f0 = "basic options:";
  local_7d8 = "input";
  local_7d0 = "input file name. e.g.(/userdata/6x_equirectangular/input_image/). default(NULL).";
  local_7b8 = "output";
  local_7b0 = "output file path. e.g.(/userdata/res/). default(NULL).";
  local_798 = "test_mode";
  local_790 = "test mode. default(0. 0: avs single mod test, 1: multi mods bind test).";
  local_778 = "loop count";
  local_770 = "loop running count. default(1).";
  local_758 = "group_count";
  local_750 = "the count of avs group. default(1).";
  local_738 = "pipe_count";
  local_730 = "the count of avs pipe. default(6).";
  local_7bc = 0x6f;
  local_7dc = 0x69;
  local_77c = 0x6e;
  local_7a0 = 4;
  local_780 = 4;
  local_760 = 4;
  local_740 = 4;
  local_720 = 4;
  local_75c = 0x67;
  local_820[0] = 2;
  local_73c = 0x70;
  local_71c = 99;
  local_718 = "channel_count";
  local_700 = 4;
  local_6e0 = 4;
  local_6c0 = 4;
  local_6a0 = 4;
  local_680 = 4;
  local_660 = 4;
  local_640 = 4;
  local_620 = 4;
  local_600 = 4;
  local_710 = "the count of avs channel. default(1).";
  local_6f8 = "src_width";
  local_6f0 = "src width. e.g.(2560). <required>.";
  local_6d8 = "src_height";
  local_6d0 = "src height. e.g.(1520). <required>.";
  local_6b8 = "src_vir_width";
  local_6b0 = "src virtual width. e.g.(2560). default(0).";
  local_698 = "src_vir_height";
  local_690 = "src virtual height. e.g.(1520). default(0).";
  local_678 = "src_format";
  local_670 = "src pixel format. default(only 0. 0 is NV12).";
  local_658 = "src_compress";
  local_650 = "src compress mode. default(0. 0: NONE, 1: AFBC).";
  local_638 = "dst_width";
  local_630 = "dst width. e.g.(8192). <required>.";
  local_618 = "dst_height";
  local_610 = "dst height. e.g.(3840). <required>.";
  local_6fc = 0x77;
  local_6dc = 0x68;
  local_67c = 0x66;
  local_65c = 0x6d;
  local_63c = 0x57;
  local_61c = 0x48;
  local_5fc = 0x4d;
  local_5e0 = 4;
  local_5c0 = 4;
  local_5a0 = 4;
  local_580 = 4;
  local_560 = 4;
  local_540 = 6;
  local_520 = 4;
  local_500 = 4;
  local_4e0 = 4;
  local_4c0 = 4;
  local_5f8 = "dst_compress";
  local_5f0 = "dst compress mode. default(0. 0: NONE, 1: AFBC).";
  local_5d8 = "dst_format";
  local_5d0 = "dst pixel format. default(only 0. 0 is NV12).";
  local_5b8 = "work_mode";
  local_5b0 = "work mode. default(0. 0: BLEND, 1: NOBLEND_VER, 2: NOBLEND_HOR, 3: NOBLEND_QR).";
  local_598 = "proj_mode";
  local_590 = 
  "projection mode. default(0. 0: EQUIRECTANGULAR, 1: RECTILINEAR, 2: CYLINDRICAL,3: CUBE_MAP, 4: EQUIRECTANGULAR_TRANS)."
  ;
  local_578 = "frame_sync";
  local_570 = "whether enable avs frame sync. default(0. 0: Disable, 1: Enable).";
  local_558 = "param_source";
  local_550 = 
  "params required for stitch are obtained by lut or calib. default(1. 0: Lut, 1: Calib).";
  local_538 = "lut_file_path";
  local_530 = "lut file path. e.g.(/userdata/6x_equirectangular/middle_lut/). default(NULL).";
  local_518 = "lut_accuracy";
  local_510 = "lut accuracy. default(0, 0: HIGH, 1: LOW).";
  local_4f8 = "lut_use_width";
  local_4f0 = "lut fuse width. default(0, 0: 128 pixel, 1: 256 pixel, 2: 512 pixel).";
  local_4d8 = "lut_step_x";
  local_4d0 = "lut step in the x-axis direction. default(0, 0: 16 pixel, 1: 32 pixel, 2: 64 pixel)."
  ;
  local_4b8 = "lut_step_y";
  local_5dc = 0x46;
  local_4b0 = "lut step in the y-axis direction. default(0, 0: 16 pixel, 1: 32 pixel, 2: 64 pixel)."
  ;
  local_4a0 = 6;
  local_480 = 6;
  local_460 = 4;
  local_440 = 4;
  local_420 = 4;
  local_400 = 4;
  local_3e0 = 4;
  local_3c0 = 4;
  local_3a0 = 4;
  local_380 = 4;
  local_360 = 4;
  local_498 = "calib_file_name";
  local_490 = 
  "calib file name. e.g.(/userdata/avs/6x_equirectangular/avs_calib/calib_file.pto). default(NULL)."
  ;
  local_478 = "mesh_file_path";
  local_470 = "mesh file path. e.g.(/userdata/avs/6x_equirectangular/avs_mesh/). default(NULL).";
  local_458 = "center_x";
  local_450 = "center point in the x-axis direction. default(0).";
  local_438 = "center_y";
  local_430 = "center point in the y-axis direction. default(0).";
  local_418 = "fov_x";
  local_410 = "fov size in the x-axis direction. default(0).";
  local_3f8 = "fov_y";
  local_3f0 = "fov size in the y-axis direction. default(0).";
  local_3d8 = &DAT_0001ed5c;
  local_3d0 = "ori rotation in the yaw direction. default(0).";
  local_3b8 = "ori_pitch";
  local_3b0 = "ori rotation in the pitch direction. default(0).";
  local_398 = "ori_roll";
  local_390 = "ori rotation in the roll direction. default(0).";
  local_378 = &DAT_0001ed60;
  local_370 = "rotation in the yaw direction. default(0).";
  local_358 = "pitch";
  local_350 = "rotation in the pitch direction. default(0).";
  local_338 = "distance";
  local_340 = 4;
  local_320 = 4;
  local_300 = 4;
  local_2e0 = 4;
  local_2c0 = 4;
  local_2a0 = 4;
  local_280 = 4;
  local_260 = 4;
  local_330 = "optimal stitch distance. default(1.0).";
  local_240 = 2;
  local_318 = "src_grp_rate";
  local_220 = 1;
  local_310 = "src avs group frame rate, default(-1).";
  local_200 = 2;
  local_2f8 = "dst_grp_rate";
  local_2f0 = "dst avs group frame rate, default(-1).";
  local_2d8 = "chn_depth";
  local_2d0 = "channel output depth, default(3)";
  local_2b8 = "chn_buf_cnt";
  local_2b0 = "channel output buf cnt, default(3)";
  local_298 = "roll";
  local_290 = "rotation in the roll direction. default(0).";
  local_278 = "src_chn_rate";
  local_270 = "src avs channel frame rate, default(-1).";
  local_258 = "dst_chn_rate";
  local_250 = "dst avs channel frame rate, default(-1).";
  local_238 = "comm_mb_pool";
  local_230 = "whether enable common mb pool, default(0, 0: Disable, 1: Enable).";
  local_210 = "external options:";
  local_2dc = 100;
  local_2bc = 0x62;
  local_1f8 = "get_final_lut";
  local_794 = &local_ab0;
  local_734 = &local_af0;
  local_6d4 = &local_ae4;
  local_694 = &local_adc;
  local_634 = &local_ad0;
  local_5f4 = &local_ac4;
  local_594 = &local_aa4;
  local_534 = &local_a64;
  local_4f4 = &local_a70;
  local_494 = &local_a60;
  local_454 = &local_a7c;
  local_1f0 = "whether get final lut, default(0, 0: Disable, 1: Enable).";
  local_7b4 = &local_afc;
  local_6f4 = &local_ae8;
  local_674 = &local_ad8;
  local_5d4 = &local_ac8;
  local_554 = &local_aa8;
  local_4b4 = &local_a68;
  local_714 = (int)&local_af0 + 4;
  local_434 = &local_a78;
  local_6b4 = &local_ae0;
  local_3d4 = &local_a9c;
  local_654 = &local_ad4;
  local_614 = &local_acc;
  local_5b4 = &local_aac;
  local_574 = &local_aa0;
  local_514 = &local_a74;
  local_4d4 = &local_a6c;
  local_474 = &local_a5c;
  local_414 = &local_a84;
  local_3f4 = &local_a80;
  local_3b4 = &local_a98;
  local_334 = &local_a58;
  local_394 = &local_a94;
  local_294 = &local_a88;
  local_274 = &local_ab8;
  local_374 = &local_a90;
  local_354 = &local_a8c;
  local_314 = &local_a54;
  local_2f4 = &local_a50;
  local_2d4 = &local_ac0;
  local_2b4 = &local_abc;
  local_254 = &local_ab4;
  local_234 = local_a48;
  local_1f4 = auStack_824;
  local_7d4 = &local_b00;
  local_774 = &local_af8;
  local_754 = (int)&local_af8 + 4;
  argparse_init(auStack_c80,local_820,&DAT_0001e3a8,0);
  argparse_describe(auStack_c80,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_c80,param_1,local_ca4);
  puts("cmd parse result:");
  printf("input file path      : %s\n",local_b00);
  printf("output file path     : %s\n",local_afc);
  printf("test mode            : %d\n",local_ab0);
  printf("group number         : %d\n",local_af8._4_4_);
  printf("pipe number          : %d\n",(undefined4)local_af0);
  printf("channel number       : %d\n",local_af0._4_4_);
  printf("loop count           : %d\n",(int)local_af8);
  printf("input width          : %d\n",local_ae8);
  printf("input height         : %d\n",local_ae4);
  printf("input virtual width  : %d\n",local_ae0);
  printf("input virtual height : %d\n",local_adc);
  printf("input pixel format   : %d\n",local_ad8);
  printf("input compress mode  : %d\n",local_ad4);
  printf("output width         : %d\n",local_ad0);
  printf("output height        : %d\n",local_acc);
  printf("output pixel format  : %d\n",local_ac8);
  printf("output compress mode : %d\n",local_ac4);
  printf("work mode            : %d\n",local_aac);
  printf("projection mode      : %d\n",local_aa4);
  printf("params sources       : %d\n",local_aa8);
  printf("lut file path        : %s\n",local_a64);
  printf("lut accuracy         : %d\n",local_a74);
  printf("lut fuse width       : %d\n",local_a70);
  printf("lut step x           : %d\n",local_a6c);
  printf("lut step y           : %d\n",local_a68);
  printf("calib file name      : %s\n",local_a60);
  printf("mesh file path       : %s\n",local_a5c);
  printf("avs frame sync       : %d\n",local_aa0);
  printf("center x             : %d\n",local_a7c);
  printf("center x             : %d\n",local_a78);
  printf("fov x                : %d\n",local_a84);
  printf("fov y                : %d\n",local_a80);
  printf("rotation ori yaw     : %d\n",local_a9c);
  printf("rotation ori pitch   : %d\n",local_a98);
  printf("rotation ori roll    : %d\n",local_a94);
  printf("rotation yaw         : %d\n",local_a90);
  printf("rotation pitch       : %d\n",local_a8c);
  printf("rotation roll        : %d\n",local_a88);
  printf("distance             : %3.2f\n");
  printf("enable comm mb pool  : %d\n",local_a48[0]);
  if ((((local_ae8 == 0) || (local_ae4 == 0)) || (local_ad0 == 0)) || (local_acc == 0)) {
    argparse_usage(auStack_c80);
    return -1;
  }
  iVar3 = RK_MPI_SYS_Init();
  if (iVar3 != 0) {
    return iVar3;
  }
  if (local_ab0 == 0) {
    iVar3 = TEST_AVS_UnitTest(&local_b00);
    if (iVar3 == 0) goto LAB_00013eec;
    local_cc0 = 300;
    local_cbc = iVar3;
    RK_LOG(2,0x11,"TEST_AVS_UnitTest failed: %#x!","test_single_avs_loop");
LAB_00013fe4:
    *puVar4 = 0x30e;
    puVar4[1] = iVar3;
    RK_LOG(2,0x11,"test running exit: %x",&DAT_0001e3b0);
    RK_MPI_SYS_Exit();
  }
  else {
    if (local_ab0 == 2) {
      puts(" Media link: ");
      printf(" %d pool -> avs -> vpss -> venc(H264) \n",(undefined4)local_af0);
      local_ca4 = (undefined1 *)&local_cc0;
      puts("                     -> venc(H265) ");
      __ptr = calloc(0x8c,1);
      puVar4 = malloc(8);
      pvVar5 = calloc(0x50,1);
      *puVar4 = pvVar5;
      pvVar5 = calloc(0x50,1);
      puVar4[1] = pvVar5;
      iVar3 = TEST_AVS_ModCreateFramePool(&local_b00);
      if (iVar3 == 0) {
        iVar3 = TEST_AVS_ModInit(&local_b00);
        if (iVar3 == 0) {
          local_c38 = DAT_000144a8;
          uStack_c30 = DAT_000144b0;
          local_c40 = 0xffffffff;
          local_c54 = DAT_000144b8;
          uStack_c4c = DAT_000144c0;
          local_c3c = 0xffffffff;
          local_c18 = 0xffffffff;
          local_c14 = 0xffffffff;
          local_c1c = 1;
          local_bec = 3;
          local_c08 = 1;
          local_c58 = iVar3;
          local_c24 = iVar3;
          local_c20 = iVar3;
          iVar3 = TEST_VPSS_Start(0,1,(int)&local_c54 + 4,(int)&local_c38 + 4);
          if (iVar3 == 0) {
            local_c90 = DAT_000144c8;
            uStack_c88 = DAT_000144d0;
            local_cbc = RK_MPI_CAL_VGS_GetPicBufferSize(&local_c90,local_c9c);
            uVar2 = DAT_000144e0;
            uVar1 = DAT_000144d8;
            if (local_cbc == 0) {
              *__ptr = 0;
              __ptr[4] = 0;
              *(undefined8 *)(__ptr + 9) = uVar1;
              *(undefined8 *)(__ptr + 0xb) = uVar2;
              __ptr[6] = local_c9c[0];
              __ptr[1] = 8;
              __ptr[0xd] = 3;
              __ptr[0x15] = 1;
              __ptr[7] = 100;
              __ptr[0x16] = 0x3c;
              __ptr[0x1b] = 0x10000;
              local_ca0 = 0xffffffff;
              local_cb8 = RK_MPI_VENC_CreateChn(0,__ptr + 1);
              if (local_cb8 == 0) {
                local_cbc = *__ptr;
                local_cc0 = 0x5c;
                RK_LOG(6,0x11,"venc [%d] RK_MPI_VENC_CreateChn already.","create_venc");
                iVar3 = RK_MPI_VENC_StartRecvFrame(*__ptr,&local_ca0);
                local_cb8 = iVar3;
                if (iVar3 == 0) {
                  local_cbc = *__ptr;
                  local_cc0 = 100;
                  RK_LOG(6,0x11,"venc [%d] RK_MPI_VENC_StartRecvFrame already.","create_venc");
                  iVar6 = TEST_SYS_AvsBindVpss(0,0,local_c58);
                  local_cbc = iVar6;
                  if (iVar6 == 0) {
                    local_cb4 = local_c58;
                    local_cc0 = 0x1b0;
                    local_cb8 = iVar6;
                    RK_LOG(6,0x11,"bind success, avs [%d, %d] -> vpss [%d]",
                           "test_avs_vpss_venc_loop");
                    local_cbc = TEST_SYS_VpssBindVenc(0,0,0);
                    if (local_cbc == 0) {
                      local_cc0 = 0x1bb;
                      local_cb8 = local_cbc;
                      local_cb4 = local_cbc;
                      RK_LOG(6,0x11,"bind success, vpss [%d, %d] -> venc [%d]",
                             "test_avs_vpss_venc_loop");
                      signal(2,(__sighandler_t)&LAB_0001496c);
                      if (0 < (int)local_af8) {
                        pvVar5 = malloc(0x88);
                        *local_ca8 = pvVar5;
                        iVar3 = 0;
                        while ((DAT_00032240 == 0 && (iVar3 < (int)local_af8))) {
                          TEST_AVS_ModGetFrameFromPool(&local_b00,puVar4);
                          iVar6 = TEST_AVS_ModSendFrame(local_a4c,(undefined4)local_af0,puVar4);
                          if (iVar6 == 0) {
                            TEST_AVS_ModReleaseFrameToPool(&local_b00,puVar4);
                            puVar7 = local_ca8;
                            iVar3 = iVar3 + 1;
                            iVar6 = RK_MPI_VENC_GetStream(0,local_ca8,100);
                            if (-1 < iVar6) {
                              RK_MPI_VENC_ReleaseStream(0,puVar7);
                            }
                            usleep(33000);
                          }
                          else {
                            TEST_AVS_ModReleaseFrameToPool(&local_b00,puVar4);
                          }
                        }
                        if ((void *)*local_ca8 != (void *)0x0) {
                          free((void *)*local_ca8);
                        }
                      }
                      local_cbc = TEST_SYS_AvsUnbindVpss(0,0,local_c58);
                      if (local_cbc != 0) {
                        local_cb4 = 0;
                        local_cb8 = 0;
                        local_cc0 = 0x1e4;
                        local_cb0 = local_c58;
                        RK_LOG(2,0x11,"unbind failed: %x, avs [%d, %d] -> vpss [%d]",
                               "test_avs_vpss_venc_loop");
                      }
                      local_cb8 = 0;
                      local_cbc = 0;
                      local_cb4 = local_c58;
                      local_cc0 = 0x1e7;
                      RK_LOG(6,0x11,"unbind success, avs [%d, %d] -> vpss [%d]",
                             "test_avs_vpss_venc_loop");
                    }
                    else {
                      local_cc0 = 0x1b7;
                      local_cb8 = iVar6;
                      local_cb4 = iVar6;
                      local_cb0 = iVar6;
                      RK_LOG(2,0x11,"bind failed: %x, vpss [%d, %d] -> venc [%d]",
                             "test_avs_vpss_venc_loop");
                    }
                    local_cbc = TEST_SYS_VpssUnbindVenc(0,0);
                    if (local_cbc != 0) {
                      local_cb0 = 0;
                      local_cb4 = 0;
                      local_cc0 = 0x1ef;
                      local_cb8 = local_c58;
                      RK_LOG(2,0x11,"unbind failed: %x, vpss [%d, %d] -> venc [%d]",
                             "test_avs_vpss_venc_loop");
                    }
                    local_cb4 = 0;
                    local_cb8 = 0;
                    local_cc0 = 0x1f2;
                    local_cbc = local_c58;
                    RK_LOG(6,0x11,"unbind success, vpss [%d, %d] -> venc [%d]",
                           "test_avs_vpss_venc_loop");
                  }
                  else {
                    local_cb0 = local_c58;
                    local_cc0 = 0x1ac;
                    local_cb4 = iVar3;
                    RK_LOG(2,0x11,"bind failed: %x, avs [%d, %d] -> vpss [%d]",
                           "test_avs_vpss_venc_loop");
                  }
                }
                else {
                  local_cbc = *__ptr;
                  local_cc0 = 0x61;
                  RK_LOG(2,0x11,"venc [%d] RK_MPI_VENC_StartRecvFrame failed: %#x!","create_venc");
                }
              }
              else {
                local_cbc = *__ptr;
                local_cc0 = 0x59;
                RK_LOG(2,0x11,"venc [%d] RK_MPI_VENC_CreateChn failed: %#x!","create_venc");
              }
            }
            else {
              local_cc0 = 0x188;
              RK_LOG(2,0x11,"get picture buffer size failed: %#x!","test_avs_vpss_venc_loop");
            }
            iVar3 = RK_MPI_VENC_StopRecvFrame(*__ptr);
            if (iVar3 == 0) {
              local_cbc = *__ptr;
              local_cc0 = 0x72;
              RK_LOG(6,0x11,"venc [%d] RK_MPI_VENC_StopRecvFrame already.","destroy_venc");
              iVar3 = RK_MPI_VENC_DestroyChn(*__ptr);
              if (iVar3 != 0) {
                local_cbc = *__ptr;
                local_cc0 = 0x77;
                local_cb8 = iVar3;
                RK_LOG(2,0x11,0x1f800,"destroy_venc");
                goto LAB_00014518;
              }
              local_cbc = *__ptr;
              local_cc0 = 0x7a;
              RK_LOG(6,0x11,"venc [%d] RK_MPI_VENC_DestroyChn already.","destroy_venc");
            }
            else {
              local_cbc = *__ptr;
              local_cc0 = 0x6f;
              local_cb8 = iVar3;
              RK_LOG(2,0x11,"venc [%d] RK_MPI_VENC_StopRecvFrame failed: %#x!","destroy_venc");
LAB_00014518:
              local_cc0 = 0x1fa;
              local_cbc = 0;
              local_cb8 = iVar3;
              RK_LOG(2,0x11,"venc [%d] destroy_venc failed: %#x","test_avs_vpss_venc_loop");
            }
            local_cbc = 0;
            local_cc0 = 0x1fc;
            RK_LOG(6,0x11,"venc [%d] destroy_venc already.","test_avs_vpss_venc_loop");
            iVar3 = TEST_VPSS_Stop(local_c58,(undefined4)local_c54);
            if (iVar3 != 0) {
              local_cc0 = 0x203;
              local_cbc = local_c58;
              local_cb8 = iVar3;
              RK_LOG(2,0x11,"vpss [%d] TEST_VPSS_Stop failed: %#x","test_avs_vpss_venc_loop");
            }
            local_cc0 = 0x205;
            local_cbc = local_c58;
            RK_LOG(6,0x11,"vpss [%d] TEST_VPSS_Stop already.","test_avs_vpss_venc_loop");
          }
          iVar3 = TEST_AVS_ModDeInit(&local_b00);
          if (iVar3 != 0) {
            local_cc0 = 0x20b;
            local_cbc = local_a4c;
            local_cb8 = iVar3;
            RK_LOG(2,0x11,"avs [%d] TEST_AVS_ModDeInit failed: %#x","test_avs_vpss_venc_loop");
          }
          local_cc0 = 0x20d;
          local_cbc = local_a4c;
          RK_LOG(6,0x11,"avs [%d] TEST_AVS_ModDeInit already.","test_avs_vpss_venc_loop");
        }
        iVar3 = TEST_AVS_ModDestroyFramePool(&local_b00);
        if (iVar3 != 0) {
          local_cc0 = 0x214;
          local_cbc = local_a4c;
          local_cb8 = iVar3;
          RK_LOG(2,0x11,"avs [%d] TEST_AVS_ModDestroyFramePool failed: %#x",
                 "test_avs_vpss_venc_loop");
        }
        local_cc0 = 0x217;
        local_cbc = local_a4c;
        RK_LOG(6,0x11,"avs [%d] TEST_AVS_ModDestroyFramePool already.","test_avs_vpss_venc_loop");
      }
      if ((void *)*puVar4 != (void *)0x0) {
        free((void *)*puVar4);
        *puVar4 = 0;
      }
      if ((void *)puVar4[1] != (void *)0x0) {
        free((void *)puVar4[1]);
      }
      free(puVar4);
      free(__ptr);
      puVar4 = (undefined4 *)local_ca4;
      puVar7 = (undefined4 *)local_ca4;
      if (iVar3 != 0) goto LAB_00013fe4;
    }
    else {
      local_cbc = local_ab0;
      local_cc0 = 0x301;
      RK_LOG(2,0x11,"unsupport test mode: %d",&DAT_0001e3b0);
      puVar7 = &local_cc0;
    }
LAB_00013eec:
    iVar3 = RK_MPI_SYS_Exit();
    if (iVar3 == 0) {
      *puVar7 = 0x309;
      RK_LOG(6,0x11,"test running ok.",&DAT_0001e3b0);
    }
  }
  return iVar3;
}



/* ===== _start @ 00014854 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003205c)
            (DAT_00014888,param_2,&stack0x00000004,DAT_0001488c,DAT_00014884,param_1);
  return;
}



/* ===== FUN_00014890 @ 00014890 size=32 ===== */

void FUN_00014890(void)

{
  if (DAT_000148b4 == DAT_000148b0) {
    return;
  }
  if (DAT_000148b8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000148b8)();
  return;
}



/* ===== _FINI_0 @ 000148f4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00014930;
  if (*DAT_00014930 != '\0') {
    return;
  }
  FUN_00014890();
  if (DAT_00014934 != 0) {
    __deregister_frame_info(DAT_00014938);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001493c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00014960 != 0) {
    __register_frame_info(DAT_00014968,DAT_00014964);
  }
  if ((DAT_000148ec - DAT_000148e8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000148f0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000148f0)();
  return;
}



/* ===== FUN_00014994 @ 00014994 size=64 ===== */

void FUN_00014994(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0xfa5c;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0xfa40;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000149d4 @ 000149d4 size=588 ===== */

undefined4 FUN_000149d4(int param_1,undefined4 *param_2,uint param_3)

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
  if (pfVar5 == (float *)0x0) goto switchD_00014a08_default;
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
    goto LAB_00014a44;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_00014a44:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00014c1c:
                    /* WARNING: Subroutine does not return */
        FUN_00014994(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
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
LAB_00014c04:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00014994(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00014994(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00014c1c;
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
    if (iVar4 != 0) goto LAB_00014c04;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00014994(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00014c1c;
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
switchD_00014a08_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 00014c34 size=48 ===== */

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



/* ===== argparse_describe @ 00014c64 size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00014c78 size=1052 ===== */

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
        if (pcVar5 != (char *)0x0) goto LAB_00014d70;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00014d70:
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
          if (piVar7[2] != 0) goto LAB_00014e54;
LAB_00014e6c:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00014fc8;
LAB_00014e78:
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
          if (piVar7[2] == 0) goto LAB_00014e6c;
          if ((char)piVar7[1] == '\0') {
LAB_00014e54:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00014e6c;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_00014e54;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00014e78;
LAB_00014fc8:
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



/* ===== argparse_parse @ 00015094 size=892 ===== */

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
        if (uVar4 == 0) goto LAB_000150f4;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_000150f4:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00015100:
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
            if (piVar11[8] == 0) goto LAB_000152b8;
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
          while (iVar5 = FUN_000149d4(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_00015244;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_000153b0;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_000153b0;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000149d4(param_1);
              if (iVar5 == -2) goto LAB_000153b0;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_000153b0:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000152bc;
        }
        goto LAB_000152b8;
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
LAB_00015210:
                if (*pcVar3 == '\0') goto LAB_0001522c;
                if (*pcVar3 == '=') goto code_r0x00015224;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00015410;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_00015264;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00015210;
                }
              }
            }
LAB_00015264:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000152bc;
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
        goto LAB_00015138;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x00015224:
  param_1[9] = (int)(pcVar3 + 1);
LAB_0001522c:
  iVar5 = FUN_000149d4(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000152b8:
    pcVar10 = (char *)*__src;
LAB_000152bc:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_00015244:
  param_2 = param_1[5];
LAB_00015138:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00015100;
}



/* ===== argparse_help_cb @ 00015414 size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00015424 @ 00015424 size=652 ===== */

int FUN_00015424(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int local_128;
  uint local_124;
  int local_11c;
  int local_108 [58];
  
  iVar1 = RK_MPI_AVS_GetGrpAttr(param_1,&local_128);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetGrpAttr failed: %#x!!","TEST_AVS_Stop",0x76,
           param_1,0,iVar1);
    return iVar1;
  }
  RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetGrpAttr already.","TEST_AVS_Stop",0x79,param_1,0);
  if (local_124 != 0) {
    piVar5 = &local_128;
    uVar4 = 0;
    uVar3 = local_124;
    do {
      if (((local_128 == 0 && local_11c == 0) && (piVar5[8] != 0)) &&
         (iVar1 = RK_MPI_MB_VirAddr2Handle(), uVar3 = local_124, iVar1 != 0)) {
        iVar2 = RK_MPI_MB_ReleaseMB();
        if (iVar2 != 0) {
          RK_LOG(2,0x17171700,"avs [%d, %d] release Lut Blk %p virAddr %p failed: %#x!!",
                 "TEST_AVS_Stop",0x85,param_1,uVar4,iVar1,piVar5[8],iVar2);
        }
        RK_LOG(6,0x17171700,"avs [%d, %d] release Lut Blk %p virAddr %p already.","TEST_AVS_Stop",
               0x89,param_1,uVar4,iVar1,piVar5[8]);
        piVar5[8] = 0;
        uVar3 = local_124;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < uVar3);
  }
  iVar1 = RK_MPI_AVS_StopGrp(param_1);
  if (iVar1 == 0) {
    RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_StopGrp already.","TEST_AVS_Stop",0x96,param_1,0);
    iVar1 = RK_MPI_AVS_DestroyGrp(param_1);
    if (iVar1 == 0) {
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_DestroyGrp already.","TEST_AVS_Stop",0x9e,param_1
             ,0);
      return 0;
    }
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_DestroyGrp failed: %#x!!","TEST_AVS_Stop",0x9b,
           param_1,0,iVar1);
    return iVar1;
  }
  RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_StopGrp failed: %#x!!","TEST_AVS_Stop",0x93,param_1,0
         ,iVar1);
  return iVar1;
}



/* ===== TEST_AVS_Start @ 000156b0 size=684 ===== */

int TEST_AVS_Start(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_AVS_CreateGrp(param_1,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_CreateGrp failed: %#x!","TEST_AVS_Start",0x3a,
           param_1,0,iVar1);
    return iVar1;
  }
  RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_CreateGrp already.","TEST_AVS_Start",0x3d,param_1,0);
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      iVar2 = RK_MPI_AVS_SetChnAttr(param_1,iVar1,param_4);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d]RK_MPI_AVS_SetChnAttr failed: %#x!","TEST_AVS_Start",0x43,
               param_1,iVar1,iVar2);
        return iVar2;
      }
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_SetChnAttr already.","TEST_AVS_Start",0x46,
             param_1,iVar1);
      iVar2 = RK_MPI_AVS_EnableChn(param_1,iVar1);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_AVS_EnableChn failed: %#x!","TEST_AVS_Start",0x4a,iVar1,iVar2);
        return iVar2;
      }
      iVar2 = iVar1 + 1;
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_EnableChn already.","TEST_AVS_Start",0x4d,param_1
             ,iVar1);
      iVar1 = iVar2;
      param_4 = param_4 + 0x20;
    } while (param_2 != iVar2);
  }
  iVar1 = RK_MPI_AVS_StartGrp(param_1);
  if (iVar1 == 0) {
    RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_StartGrp already.","TEST_AVS_Start",0x55,param_1,0)
    ;
    iVar1 = RK_MPI_AVS_ResetGrp(param_1);
    if (iVar1 == 0) {
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_ResetGrp already.","TEST_AVS_Start",0x5d,param_1,
             0);
    }
    else {
      RK_LOG(2,0x17171700,"RK_MPI_AVS_ResetGrp failed: %#x!","TEST_AVS_Start",0x5a,param_1,iVar1);
    }
  }
  else {
    RK_LOG(2,0x17171700,"RK_MPI_AVS_StartGrp failed: %#x!","TEST_AVS_Start",0x52,param_1,iVar1);
  }
  return iVar1;
}



/* ===== TEST_AVS_Stop @ 0001595c size=200 ===== */

int TEST_AVS_Stop(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_AVS_DisableChn(param_1,iVar2);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn failed: %#x!!","TEST_AVS_Stop",0x6c,
               param_1,iVar2,iVar1);
        return iVar1;
      }
      iVar1 = iVar2 + 1;
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn already.","TEST_AVS_Stop",0x70,param_1
             ,iVar2);
      iVar2 = iVar1;
    } while (param_2 != iVar1);
  }
  iVar2 = FUN_00015424(param_1);
  return iVar2;
}



/* ===== TEST_AVS_ModCreateFramePool @ 00015a24 size=228 ===== */

int TEST_AVS_ModCreateFramePool(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_64 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_50 = *(undefined8 *)(param_1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = RK_MPI_CAL_COMM_GetPicBufferSize(&local_58,local_64);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed: %#x","TEST_AVS_ModCreateFramePool",0xb2,
           iVar1);
    return iVar1;
  }
  uVar3 = 0;
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_3c = 0;
  local_48 = local_64[0];
  local_40 = 2;
  local_30 = 1;
  local_44 = iVar1;
  uStack_38 = uVar4;
  uStack_34 = uVar5;
  uStack_2c = uVar4;
  uVar2 = RK_MPI_MB_CreatePool(&local_48);
  local_40 = 2;
  local_48 = local_64[0];
  local_30 = 1;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  local_44 = iVar1;
  local_3c = uVar3;
  uStack_38 = uVar4;
  uStack_34 = uVar5;
  uStack_2c = uVar4;
  uVar3 = RK_MPI_MB_CreatePool(&local_48);
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  return 0;
}



/* ===== TEST_AVS_ModDestroyFramePool @ 00015b08 size=48 ===== */

undefined4 TEST_AVS_ModDestroyFramePool(int param_1)

{
  if (*(int *)(param_1 + 0x2c8) != -1) {
    RK_MPI_MB_DestroyPool();
  }
  if (*(int *)(param_1 + 0x2cc) != -1) {
    RK_MPI_MB_DestroyPool();
  }
  return 0;
}



/* ===== TEST_AVS_ModGetFrameFromPool @ 00015b38 size=900 ===== */

int TEST_AVS_ModGetFrameFromPool(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r1_00;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_138;
  undefined8 local_130;
  char acStack_128 [260];
  
  memset(acStack_128,0,0x100);
  local_130 = *(undefined8 *)(param_1 + 10);
  local_138 = *(undefined8 *)(param_1 + 6);
  uVar10 = RK_MPI_CAL_COMM_GetPicBufferSize(&local_138,&local_148);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  iVar2 = (int)uVar10;
  if (iVar2 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed: %#x","TEST_AVS_ModGetFrameFromPool",0xdf,
           iVar2);
    return iVar2;
  }
  iVar2 = 0;
  if (0 < param_1[4]) {
    iVar8 = 0;
    piVar9 = param_1 + 0xb2;
    do {
      while( true ) {
        if (*piVar9 == -1) break;
        uVar10 = RK_MPI_MB_GetMB(*piVar9,uVar6,local_148,0,1);
        uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 != 0) {
          iVar7 = *param_1;
          **(int **)(param_2 + iVar8 * 4) = (int)uVar10;
          puVar5 = *(undefined4 **)(param_2 + iVar8 * 4);
          *(undefined8 *)(puVar5 + 1) = local_138;
          *(undefined8 *)(puVar5 + 3) = local_144;
          puVar5[6] = (undefined4)local_130;
          puVar5[8] = local_130._4_4_;
          if (iVar7 == 0) {
            if (local_130._4_4_ == 0) {
              uVar3 = RK_MPI_MB_Handle2VirAddr(*puVar5);
              iVar2 = *(int *)(param_2 + iVar8 * 4);
              uVar6 = (undefined4)local_138;
              uVar1 = local_138._4_4_;
              uVar4 = RK_MPI_CAL_COMM_GetHorStride
                                (*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x18));
              iVar2 = *(int *)(param_2 + iVar8 * 4);
              iVar2 = TEST_COMM_FillImage(uVar3,uVar6,uVar1,uVar4,*(undefined4 *)(iVar2 + 0x10),
                                          *(undefined4 *)(iVar2 + 0x18),iVar8 + DAT_00032248);
              if (iVar2 != 0) {
                RK_LOG(2,0x17171700,"fill COMPRESS_MODE_NONE data into pipe %d buf %p failed: %#x!",
                       "TEST_AVS_ModGetFrameFromPool",0x11a,iVar8,
                       *(undefined4 *)(param_2 + iVar8 * 4),iVar2);
              }
              puVar5 = *(undefined4 **)(param_2 + iVar8 * 4);
              DAT_00032248 = DAT_00032248 + 1;
            }
            else if (local_130._4_4_ == 1) {
              RK_LOG(2,0x17171700,0x1fff0,"TEST_AVS_ModGetFrameFromPool",0x11e);
              puVar5 = *(undefined4 **)(param_2 + iVar8 * 4);
            }
          }
          else {
            if (local_130._4_4_ == 0) {
              snprintf(acStack_128,0x100,"%simage_data/camera%d_%dx%d_nv12.yuv",iVar7,iVar8,
                       (undefined4)local_138,local_138._4_4_);
              iVar2 = TEST_COMM_FileReadOneFrame(acStack_128,*(undefined4 *)(param_2 + iVar8 * 4));
            }
            else {
              if (local_130._4_4_ == 1) {
                snprintf(acStack_128,0x100,"%safbc_image_data/camera%d_%dx%d_nv12_afbc.yuv",iVar7,
                         iVar8,(undefined4)local_138,local_138._4_4_);
                puVar5 = *(undefined4 **)(param_2 + iVar8 * 4);
              }
              iVar2 = TEST_COMM_FileReadOneFrame(acStack_128,puVar5);
            }
            if (iVar2 != 0) {
              RK_LOG(2,0x17171700,"avs [%d, %d] pipe frame %p fread file: %s failed: %#x!",
                     "TEST_AVS_ModGetFrameFromPool",0x109,param_1[0x2d],iVar8,
                     *(undefined4 *)(param_2 + iVar8 * 4),acStack_128,iVar2);
            }
            RK_LOG(6,0x17171700,"avs [%d, %d] pipe frame %p fread file: %s already.",
                   "TEST_AVS_ModGetFrameFromPool",0x10c,param_1[0x2d],iVar8,
                   *(undefined4 *)(param_2 + iVar8 * 4),acStack_128);
            puVar5 = *(undefined4 **)(param_2 + iVar8 * 4);
          }
          RK_MPI_SYS_MmzFlushCache(*puVar5,0);
          uVar6 = extraout_r1;
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
        if (param_1[4] <= iVar8) {
          return iVar2;
        }
      }
      iVar7 = iVar8 + 1;
      RK_LOG(2,0x17171700,"avs [%d, %d] srcVFramePool unexist %d!","TEST_AVS_ModGetFrameFromPool",
             0xe8,param_1[0x2d],iVar8,0xffffffff);
      uVar6 = extraout_r1_00;
      iVar8 = iVar7;
      piVar9 = piVar9 + 1;
    } while (iVar7 < param_1[4]);
  }
  return iVar2;
}



/* ===== TEST_AVS_ModReleaseFrameToPool @ 00015ebc size=96 ===== */

void TEST_AVS_ModReleaseFrameToPool(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 != 0)) {
    RK_MPI_MB_ReleaseMB();
    *(undefined4 *)*param_2 = 0;
  }
  if ((int *)param_2[1] == (int *)0x0) {
    return;
  }
  iVar1 = *(int *)param_2[1];
  if (iVar1 == 0) {
    return;
  }
  RK_MPI_MB_ReleaseMB(iVar1);
  *(undefined4 *)param_2[1] = 0;
  return;
}



/* ===== TEST_AVS_ModCreateFrame @ 00015f1c size=708 ===== */

int TEST_AVS_ModCreateFrame(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *__format;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_138;
  undefined8 local_130;
  char acStack_128 [260];
  
  memset(acStack_128,0,0x100);
  local_130 = *(undefined8 *)(param_1 + 10);
  local_138 = *(undefined8 *)(param_1 + 6);
  if (0 < param_1[4]) {
    iVar9 = 0;
    piVar8 = param_2;
    do {
      iVar3 = TEST_SYS_CreateVideoFrame(&local_138,*piVar8);
      if (iVar3 != 0) goto LAB_00016160;
      iVar7 = *piVar8;
      iVar4 = param_1[0x2d];
      iVar3 = iVar9;
      RK_LOG(6,0x17171700,"avs [%d, %d] create pipe frame %p already.","TEST_AVS_ModCreateFrame",
             0x148,iVar4,iVar9,iVar7);
      if (*param_1 == 0) {
        if (local_130._4_4_ == 0) {
          uVar5 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)*piVar8);
          uVar1 = (undefined4)local_138;
          uVar2 = local_138._4_4_;
          uVar6 = RK_MPI_CAL_COMM_GetHorStride
                            (*(undefined4 *)(*piVar8 + 4),*(undefined4 *)(*piVar8 + 0x18));
          iVar3 = TEST_COMM_FillImage(uVar5,uVar1,uVar2,uVar6,*(undefined4 *)(*piVar8 + 0x10),
                                      *(undefined4 *)(*piVar8 + 0x18),iVar9 + DAT_00032244);
          if (iVar3 != 0) {
            RK_LOG(2,0x17171700,"fill COMPRESS_MODE_NONE data into pipe %d buf %p failed: %#x!",
                   "TEST_AVS_ModCreateFrame",0x16a,iVar9,*piVar8,iVar3);
            goto LAB_00016160;
          }
          DAT_00032244 = DAT_00032244 + 1;
        }
        else if (local_130._4_4_ == 1) {
          RK_LOG(2,0x17171700,0x1fff0,"TEST_AVS_ModCreateFrame",0x170,iVar4,iVar3,iVar7);
        }
      }
      else {
        if (local_130._4_4_ == 0) {
          __format = "%simage_data/camera%d_%dx%d_nv12.yuv";
LAB_000160a0:
          snprintf(acStack_128,0x100,__format,*param_1,iVar9,(undefined4)local_138,local_138._4_4_);
        }
        else if (local_130._4_4_ == 1) {
          __format = "%safbc_image_data/camera%d_%dx%d_nv12_afbc.yuv";
          goto LAB_000160a0;
        }
        RK_LOG(6,0x17171700,"avs [%d, %d] pipe frame %p fread file: %s.","TEST_AVS_ModCreateFrame",
               0x157,param_1[0x2d],iVar9,*piVar8,acStack_128);
        iVar3 = TEST_COMM_FileReadOneFrame(acStack_128,*piVar8);
        if (iVar3 != 0) {
LAB_00016160:
          piVar8 = param_2 + iVar9;
          do {
            RK_MPI_MB_ReleaseMB(*(undefined4 *)*piVar8);
            bVar10 = piVar8 != param_2;
            piVar8 = piVar8 + -1;
          } while (bVar10);
          return iVar3;
        }
      }
      iVar9 = iVar9 + 1;
      RK_MPI_SYS_MmzFlushCache(*(undefined4 *)*piVar8,0);
      piVar8 = piVar8 + 1;
    } while (iVar9 < param_1[4]);
  }
  return 0;
}



/* ===== TEST_AVS_ModSendFrame @ 000161e0 size=188 ===== */

int TEST_AVS_ModSendFrame(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(param_3 + -4);
  iVar2 = 0;
  do {
    while( true ) {
      puVar4 = puVar4 + 1;
      iVar1 = RK_MPI_AVS_SendPipeFrame(param_1,iVar2,*puVar4,0xffffffff);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
      if (iVar2 == param_2) {
        return 0;
      }
    }
    iVar3 = iVar2 + 1;
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_SendPipeFrame %p failed: %#x!",
           "TEST_AVS_ModSendFrame",0x18a,param_1,iVar2,*(undefined4 *)*puVar4,iVar1);
    iVar2 = iVar3;
  } while (iVar3 != param_2);
  return iVar1;
}



/* ===== TEST_AVS_ModGetChnFrame @ 0001629c size=176 ===== */

int TEST_AVS_ModGetChnFrame(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(param_3 + -4);
  iVar2 = 0;
  do {
    while( true ) {
      puVar4 = puVar4 + 1;
      iVar1 = RK_MPI_AVS_GetChnFrame(param_1,iVar2,*puVar4,0x28);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
      if (param_2 == iVar2) {
        return 0;
      }
    }
    iVar3 = iVar2 + 1;
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetChnFrame failed: %#x!","TEST_AVS_ModGetChnFrame"
           ,0x19c,param_1,iVar2,iVar1);
    iVar2 = iVar3;
  } while (param_2 != iVar3);
  return iVar1;
}



/* ===== TEST_AVS_ModSaveChnFrame @ 0001634c size=304 ===== */

int TEST_AVS_ModSaveChnFrame(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_128 [260];
  int *piVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar5 = 0;
  piVar2 = param_4;
  iVar4 = 0;
  do {
    while( true ) {
      piVar3 = piVar2 + 1;
      iVar6 = *piVar2;
      if (iVar6 != 0) break;
LAB_00016394:
      iVar4 = iVar4 + 1;
      piVar2 = piVar3;
      if (piVar3 == param_4 + param_2) {
        return iVar5;
      }
    }
    memset(acStack_128,0,0x100);
    puVar1 = &DAT_000200f4;
    if (*(int *)(iVar6 + 0x20) == 0) {
      puVar1 = &DAT_000200fc;
    }
    snprintf(acStack_128,0x100,"%schn_out_%dx%d_%d_%d_%s.bin",param_3,*(undefined4 *)(iVar6 + 4),
             *(undefined4 *)(iVar6 + 8),param_1,iVar4,puVar1);
    iVar5 = TEST_COMM_FileWriteOneFrame(acStack_128,*piVar2);
    if (iVar5 == 0) goto LAB_00016394;
    RK_LOG(2,0x17171700,"avs [%d, %d] save chn frame %p to file %s failed: %#x!",
           "TEST_AVS_ModSaveChnFrame",0x1b9,param_1,iVar4,*piVar2,acStack_128,iVar5);
    piVar2 = piVar3;
    iVar4 = iVar4 + 1;
    if (piVar3 == param_4 + param_2) {
      return iVar5;
    }
  } while( true );
}



/* ===== TEST_AVS_ModReleaseChnFrame @ 0001647c size=172 ===== */

int TEST_AVS_ModReleaseChnFrame(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(param_3 + -4);
  iVar2 = 0;
  do {
    while( true ) {
      puVar4 = puVar4 + 1;
      iVar1 = RK_MPI_AVS_ReleaseChnFrame(param_1,iVar2,*puVar4);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
      if (param_2 == iVar2) {
        return 0;
      }
    }
    iVar3 = iVar2 + 1;
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_ReleaseChnFrame failed: %#x!",
           "TEST_AVS_ModReleaseChnFrame",0x1cb,param_1,iVar2,iVar1);
    iVar2 = iVar3;
  } while (param_2 != iVar3);
  return iVar1;
}



/* ===== TEST_AVS_InitAttr_Blend_Calib @ 00016528 size=396 ===== */

undefined4 TEST_AVS_InitAttr_Blend_Calib(int param_1,void *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = memset(param_2,0,0x108);
  uVar8 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar9 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar10 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_3 = 0;
  param_3[1] = uVar8;
  param_3[2] = uVar9;
  param_3[3] = uVar10;
  param_3[4] = 0;
  param_3[5] = uVar8;
  param_3[6] = uVar9;
  param_3[7] = uVar10;
  param_3[8] = 0;
  param_3[9] = uVar8;
  param_3[10] = uVar9;
  param_3[0xb] = uVar10;
  param_3[0xc] = 0;
  param_3[0xd] = uVar8;
  param_3[0xe] = uVar9;
  param_3[0xf] = uVar10;
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar15 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0xa0) != 0) {
    puVar1[4] = *(int *)(param_1 + 0xa0);
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    puVar1[5] = iVar4;
  }
  puVar1[1] = uVar13;
  uVar18 = *(undefined8 *)(param_1 + 0x84);
  puVar1[0x14] = uVar2;
  *puVar1 = uVar15;
  *(undefined8 *)(puVar1 + 0x15) = uVar18;
  *(undefined8 *)(puVar1 + 0x17) = *(undefined8 *)(param_1 + 0x7c);
  uVar18 = *(undefined8 *)(param_1 + 0x74);
  uVar19 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(puVar1 + 0x19) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(puVar1 + 0x1b) = uVar19;
  *(undefined8 *)(puVar1 + 0x1d) = uVar18;
  uVar18 = *(undefined8 *)(param_1 + 0xac);
  puVar1[0x3e] = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)(puVar1 + 0x3f) = uVar18;
  iVar4 = *(int *)(param_1 + 0x14);
  if (0 < iVar4) {
    uVar16 = *(uint *)(param_1 + 0x30);
    iVar5 = 0;
    uVar14 = *(uint *)(param_1 + 0x34);
    uVar12 = *(uint *)(param_1 + 0x3c);
    uVar11 = *(uint *)(param_1 + 0x40);
    uVar10 = *(uint *)(param_1 + 0x48);
    uVar9 = *(uint *)(param_1 + 0x4c);
    uVar8 = *(uint *)(param_1 + 0x44);
    puVar6 = param_3;
    do {
      bVar17 = iVar5 == 0;
      iVar5 = iVar5 + 1;
      if (bVar17) {
        uVar7 = *(uint *)(param_1 + 0x3c);
        *param_3 = uVar16;
        param_3[2] = uVar7;
        param_3[1] = uVar14;
      }
      else {
        puVar6[1] = (uVar14 >> 1) + 1 & 0xfffffffe;
        *puVar6 = (uVar16 >> 1) + 0xf & 0xfffffff0;
        puVar6[2] = 0;
      }
      puVar6[2] = uVar12;
      puVar6[4] = uVar11;
      puVar6[3] = 0;
      puVar6[5] = uVar10;
      puVar6[6] = uVar9;
      puVar6[7] = uVar8;
      puVar6 = puVar6 + 8;
    } while (iVar4 != iVar5);
  }
  return 0;
}



/* ===== TEST_AVS_InitAttr_NoBlend @ 000166b4 size=280 ===== */

undefined4 TEST_AVS_InitAttr_NoBlend(int param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  
  memset(param_2,0,0x108);
  uVar6 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar7 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar8 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_3 = 0;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  param_3[4] = 0;
  param_3[5] = uVar6;
  param_3[6] = uVar7;
  param_3[7] = uVar8;
  param_3[8] = 0;
  param_3[9] = uVar6;
  param_3[10] = uVar7;
  param_3[0xb] = uVar8;
  param_3[0xc] = 0;
  param_3[0xd] = uVar6;
  param_3[0xe] = uVar7;
  param_3[0xf] = uVar8;
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  param_2[1] = *(undefined4 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0xac);
  *param_2 = uVar2;
  param_2[2] = uVar3;
  *(undefined8 *)(param_2 + 0x3f) = uVar14;
  iVar12 = *(int *)(param_1 + 0x14);
  if (0 < iVar12) {
    uVar6 = *(uint *)(param_1 + 0x30);
    iVar1 = 0;
    uVar13 = *(uint *)(param_1 + 0x34);
    uVar10 = *(uint *)(param_1 + 0x40);
    uVar9 = *(uint *)(param_1 + 0x48);
    uVar8 = *(uint *)(param_1 + 0x4c);
    uVar7 = *(uint *)(param_1 + 0x44);
    puVar4 = param_3;
    do {
      puVar5 = puVar4;
      if (iVar1 == 0) {
        uVar11 = *(uint *)(param_1 + 0x3c);
        *param_3 = uVar6;
        param_3[1] = uVar13;
        puVar5 = puVar4 + 8;
        param_3[2] = uVar11;
        puVar4[3] = 0;
        iVar1 = 1;
        puVar4[4] = uVar10;
        puVar4[5] = uVar9;
        puVar4[6] = uVar8;
        puVar4[7] = uVar7;
        if (iVar12 == 1) {
          return 0;
        }
      }
      iVar1 = iVar1 + 1;
      *puVar5 = (uVar6 >> 1) + 0xf & 0xfffffff0;
      puVar5[1] = (uVar13 >> 1) + 1 & 0xfffffffe;
      puVar4 = puVar5 + 8;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = uVar10;
      puVar5[5] = uVar9;
      puVar5[6] = uVar8;
      puVar5[7] = uVar7;
    } while (iVar12 != iVar1);
  }
  return 0;
}



/* ===== TEST_AVS_ModDeInit @ 000167cc size=204 ===== */

int TEST_AVS_ModDeInit(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  if (iVar4 != 0) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_AVS_DisableChn(uVar3,iVar2);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn failed: %#x!!","TEST_AVS_Stop",0x6c,
               uVar3,iVar2,iVar1);
        return iVar1;
      }
      iVar1 = iVar2 + 1;
      RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn already.","TEST_AVS_Stop",0x70,uVar3,
             iVar2);
      iVar2 = iVar1;
    } while (iVar4 != iVar1);
  }
  iVar4 = FUN_00015424(uVar3);
  return iVar4;
}



/* ===== TEST_AVS_GetFileLen @ 00016898 size=220 ===== */

long TEST_AVS_GetFileLen(char *param_1)

{
  FILE *__stream;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    RK_LOG(2,0x17171700,"open file %s fail!","TEST_AVS_GetFileLen",0x31d,param_1);
    return 0;
  }
  iVar1 = fseek(__stream,0,2);
  if (iVar1 == 0) {
    lVar2 = ftell(__stream);
    iVar1 = fseek(__stream,0,0);
    if (iVar1 == 0) goto LAB_000168f4;
    uVar3 = 0x316;
  }
  else {
    uVar3 = 0x30d;
  }
  lVar2 = 0;
  RK_LOG(2,0x17171700,"fseek err!","TEST_AVS_GetFileLen",uVar3);
LAB_000168f4:
  fclose(__stream);
  return lVar2;
}



/* ===== TEST_AVS_LoadFile @ 00016974 size=132 ===== */

undefined4 TEST_AVS_LoadFile(char *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  undefined4 uVar1;
  
  __stream = fopen64(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    RK_LOG(2,0x17171700,"open file of %s failed!","TEST_AVS_LoadFile",0x32d,param_1);
    uVar1 = 0xffffffff;
  }
  else {
    fread(param_2,param_3,1,__stream);
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== TEST_AVS_MallocLutBuf @ 000169f8 size=648 ===== */

int TEST_AVS_MallocLutBuf(int param_1,undefined4 *param_2)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 uVar2;
  FILE *__stream;
  undefined4 uVar3;
  uint __size;
  undefined8 *puVar4;
  int iVar5;
  char *__s;
  void *__ptr_00;
  uint uVar6;
  char *pcVar7;
  undefined8 local_230;
  char acStack_228 [516];
  
  memset(acStack_228,0,0x200);
  local_230 = 0;
  __ptr = malloc(8);
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar5 = 0;
    puVar4 = &local_230;
    do {
      __s = acStack_228 + iVar5 * 0x100;
      snprintf(__s,0x100,"%s%s%d%s",*(undefined4 *)(param_1 + 0x9c),"rk_ps_lut_",iVar5,".bin");
      iVar1 = TEST_AVS_GetFileLen(__s);
      __size = iVar1 + 0xffU & 0xffffff00;
      if (iVar1 == 0) {
        iVar1 = -1;
        RK_LOG(2,0x17171700,"avs [%d, %d] open lut file %s failed!","TEST_AVS_MallocLutBuf",0x343,
               *(undefined4 *)(param_1 + 0xb4),iVar5,__s);
LAB_00016bcc:
        if ((void *)*__ptr != (void *)0x0) {
          free((void *)*__ptr);
          *__ptr = 0;
        }
        if ((void *)__ptr[1] != (void *)0x0) {
          free((void *)__ptr[1]);
        }
        free(__ptr);
        return iVar1;
      }
      iVar1 = RK_MPI_SYS_MmzAllocEx(puVar4,0,0,__size,0x200);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] alloc LUT buf failed with %#x!","TEST_AVS_MallocLutBuf",
               0x350,*(undefined4 *)(param_1 + 0xb4),iVar5,iVar1);
        goto LAB_00016bcc;
      }
      uVar2 = RK_MPI_MMZ_Handle2VirAddr(*(undefined4 *)puVar4);
      uVar3 = *(undefined4 *)(param_1 + 0xb4);
      __ptr[iVar5] = uVar2;
      iVar1 = iVar5;
      uVar6 = __size;
      pcVar7 = __s;
      RK_LOG(6,0x17171700,"avs [%d, %d] pipe lut buf size %d viraddr %p fread lut file: %s.",
             "TEST_AVS_MallocLutBuf",0x356,uVar3,iVar5,__size,uVar2,__s);
      __ptr_00 = (void *)__ptr[iVar5];
      __stream = fopen64(__s,"rb");
      iVar5 = iVar5 + 1;
      if (__stream == (FILE *)0x0) {
        RK_LOG(2,0x17171700,"open file of %s failed!","TEST_AVS_LoadFile",0x32d,__s,iVar1,uVar6,
               uVar2,pcVar7);
        iVar1 = -1;
        goto LAB_00016bcc;
      }
      fread(__ptr_00,__size,1,__stream);
      fclose(__stream);
      puVar4 = (undefined8 *)((int)puVar4 + 4);
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  *param_2 = __ptr;
  return 0;
}



/* ===== TEST_AVS_InitAttr_Blend_Lut @ 00016c80 size=424 ===== */

void TEST_AVS_InitAttr_Blend_Lut(int param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *local_24 [2];
  
  bVar9 = *(int *)(param_1 + 0x9c) == 0;
  if (bVar9) {
    param_1 = 6;
  }
  local_24[0] = (undefined4 *)0x0;
  if (!bVar9) {
    memset(param_2,0,0x108);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 1) = uVar3;
    *(undefined4 *)((int)param_3 + 0xc) = uVar6;
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined4 *)((int)param_3 + 0x14) = uVar2;
    *(undefined4 *)(param_3 + 3) = uVar3;
    *(undefined4 *)((int)param_3 + 0x1c) = uVar6;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)((int)param_3 + 0x24) = uVar2;
    *(undefined4 *)(param_3 + 5) = uVar3;
    *(undefined4 *)((int)param_3 + 0x2c) = uVar6;
    *(undefined4 *)(param_3 + 6) = 0;
    *(undefined4 *)((int)param_3 + 0x34) = uVar2;
    *(undefined4 *)(param_3 + 7) = uVar3;
    *(undefined4 *)((int)param_3 + 0x3c) = uVar6;
    iVar1 = TEST_AVS_MallocLutBuf(param_1,local_24);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(param_1 + 0x60);
      uVar2 = *(undefined4 *)(param_1 + 0x58);
      *param_2 = *(undefined4 *)(param_1 + 0x54);
      param_2[1] = iVar1;
      uVar3 = *(undefined4 *)(param_1 + 0x8c);
      param_2[2] = uVar6;
      uVar6 = *(undefined4 *)(param_1 + 0x90);
      param_2[3] = uVar2;
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      param_2[4] = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x98);
      param_2[5] = uVar6;
      param_2[6] = uVar2;
      param_2[7] = uVar3;
      if ((0 < iVar1) && (param_2[8] = *local_24[0], iVar1 != 1)) {
        param_2[9] = local_24[0][1];
      }
      uVar10 = *(undefined8 *)(param_1 + 0x84);
      param_2[0x14] = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(param_2 + 0x15) = uVar10;
      *(undefined8 *)(param_2 + 0x17) = *(undefined8 *)(param_1 + 0x7c);
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      uVar11 = *(undefined8 *)(param_1 + 0x6c);
      uVar10 = *(undefined8 *)(param_1 + 0x74);
      *(undefined8 *)(param_2 + 0x19) = *(undefined8 *)(param_1 + 100);
      *(undefined8 *)(param_2 + 0x1b) = uVar11;
      *(undefined8 *)(param_2 + 0x1d) = uVar10;
      *(undefined8 *)(param_2 + 0x3f) = *(undefined8 *)(param_1 + 0xac);
      uVar4 = *(uint *)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x34);
      uVar8 = *(undefined4 *)(param_1 + 0x4c);
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_3 + 2) = uVar7;
      *param_3 = uVar11;
      *(undefined4 *)(param_3 + 1) = uVar6;
      *(undefined4 *)((int)param_3 + 0xc) = 0;
      *(undefined8 *)((int)param_3 + 0x14) = uVar10;
      *(uint *)(param_3 + 4) = (uVar4 >> 1) + 0xf & 0xfffffff0;
      *(uint *)((int)param_3 + 0x24) = (uVar5 >> 1) + 1 & 0xfffffffe;
      *(undefined4 *)((int)param_3 + 0x1c) = uVar3;
      *(undefined4 *)(param_3 + 5) = 0;
      *(undefined4 *)((int)param_3 + 0x2c) = 0;
      *(undefined4 *)(param_3 + 6) = uVar7;
      *(undefined4 *)((int)param_3 + 0x34) = uVar2;
      *(undefined4 *)(param_3 + 7) = uVar8;
      *(undefined4 *)((int)param_3 + 0x3c) = uVar3;
    }
  }
  return;
}



/* ===== TEST_AVS_InitAttr @ 00016e28 size=120 ===== */

undefined4 TEST_AVS_InitAttr(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar1 = TEST_AVS_InitAttr_Blend_Lut();
      goto LAB_00016e58;
    }
    if (*(int *)(param_1 + 0x58) == 1) {
      uVar1 = TEST_AVS_InitAttr_Blend_Calib();
      goto LAB_00016e58;
    }
  }
  else if (*(int *)(param_1 + 0x54) - 1U < 3) {
    uVar1 = TEST_AVS_InitAttr_NoBlend();
    goto LAB_00016e58;
  }
  uVar1 = 0;
LAB_00016e58:
  if (*(int *)(param_1 + 0x2d0) == 1) {
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_1 + 0x2d4);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return uVar1;
}



/* ===== TEST_AVS_FreeLutBuf @ 00016ea0 size=136 ===== */

int TEST_AVS_FreeLutBuf(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x20);
  do {
    iVar1 = RK_MPI_MMZ_VirAddr2Handle(*puVar3);
    if ((iVar1 != 0) && (iVar4 = RK_MPI_SYS_MmzFree(), iVar4 != 0)) {
      RK_LOG(2,0x17171700,"pipe %d Lut buf RK_MPI_SYS_MmzFree failed: %#x!","TEST_AVS_FreeLutBuf",
             0x374,iVar2,iVar4);
    }
    bVar5 = iVar2 != 1;
    iVar2 = 1;
    puVar3 = puVar3 + 1;
  } while (bVar5);
  return iVar4;
}



/* ===== TEST_AVS_ComChnSetScale @ 00016f28 size=324 ===== */

int TEST_AVS_ComChnSetScale(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [4];
  
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_AVS_GetChnAttr(*(undefined4 *)(param_1 + 0xb4),iVar2,local_40);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetChnAttr failed: %#x!",
               "TEST_AVS_ComChnSetScale",0x385,*(undefined4 *)(param_1 + 0xb4),iVar2,iVar1);
        return iVar1;
      }
      local_40[0] = *(undefined8 *)(param_1 + 0x30);
      RK_LOG(6,0x17171700,"set new chn attr u32Width: %d, u32Height: %d.","TEST_AVS_ComChnSetScale",
             0x38c,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      iVar1 = RK_MPI_AVS_SetChnAttr(*(undefined4 *)(param_1 + 0xb4),iVar2,local_40);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_SetChnAttr failed: %#x!",
               "TEST_AVS_ComChnSetScale",0x391,*(undefined4 *)(param_1 + 0xb4),iVar2,iVar1);
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}



/* ===== TEST_AVS_ComGrpChnSetScale @ 0001706c size=552 ===== */

int TEST_AVS_ComGrpChnSetScale(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_148 [4];
  undefined1 auStack_128 [84];
  undefined8 local_d4;
  
  iVar1 = RK_MPI_AVS_GetGrpAttr(*(undefined4 *)(param_1 + 0xb4),auStack_128);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"avs [%d] RK_MPI_AVS_GetGrpAttr failed: %#x!","TEST_AVS_ComGrpChnSetScale",
           0x3a1,*(undefined4 *)(param_1 + 0xb4),iVar1);
    return iVar1;
  }
  local_d4 = *(undefined8 *)(param_1 + 0x84);
  RK_LOG(6,0x17171700,"set new grp attr centerX: %d, centerY: %d.","TEST_AVS_ComGrpChnSetScale",
         0x3a8,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  iVar1 = RK_MPI_AVS_SetGrpAttr(*(undefined4 *)(param_1 + 0xb4),auStack_128);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"avs [%d] RK_MPI_AVS_SetGrpAttr failed: %#x!","TEST_AVS_ComGrpChnSetScale",
           0x3ad,*(undefined4 *)(param_1 + 0xb4),iVar1);
    return iVar1;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
    do {
      iVar2 = RK_MPI_AVS_GetChnAttr(*(undefined4 *)(param_1 + 0xb4),iVar1,local_148);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetChnAttr failed: %#x!",
               "TEST_AVS_ComGrpChnSetScale",0x3b5,*(undefined4 *)(param_1 + 0xb4),iVar1,iVar2);
        return iVar2;
      }
      local_148[0] = *(undefined8 *)(param_1 + 0x30);
      RK_LOG(6,0x17171700,"set new chn attr u32Width: %d, u32Height: %d.",
             "TEST_AVS_ComGrpChnSetScale",0x3bc,*(undefined4 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x34));
      iVar2 = RK_MPI_AVS_SetChnAttr(*(undefined4 *)(param_1 + 0xb4),iVar1,local_148);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_SetChnAttr failed: %#x!",
               "TEST_AVS_ComGrpChnSetScale",0x3c1,*(undefined4 *)(param_1 + 0xb4),iVar1,iVar2);
        return iVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return 0;
}



/* ===== TEST_AVS_GetFinalLut @ 00017298 size=704 ===== */

int TEST_AVS_GetFinalLut(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  undefined4 auStack_68 [4];
  void *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  void *local_34;
  
  iVar2 = RK_MPI_AVS_CreateGrp();
  if (iVar2 != 0) {
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_CreateGrp failed: %#x!","TEST_AVS_GetFinalLut",
           0x3cf,param_1,0,iVar2);
    return iVar2;
  }
  RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_CreateGrp already.","TEST_AVS_GetFinalLut",0x3d2,
         param_1,0);
  uVar1 = DAT_00017558;
  local_80 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    puVar6 = auStack_68;
    uVar4 = 0;
    do {
      pvVar3 = malloc(0x81ac);
      local_44 = 0;
      uStack_40 = uVar1;
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(void **)(auStack_78 + uVar4 * 4 + -8) = pvVar3;
      local_54 = 0;
      local_58 = pvVar3;
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_34 = pvVar3;
      iVar2 = RK_MPI_SYS_CreateMB(puVar6,&local_58);
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"avs [%d, %d] create ldch blk failed with %#x!","TEST_AVS_GetFinalLut",
               0x3e3,param_1,uVar4,iVar2);
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < *(uint *)(param_2 + 4));
  }
  iVar2 = RK_MPI_AVS_GetFinalLut(param_1,auStack_78);
  if (iVar2 == 0) {
    RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetFinalLut already.","TEST_AVS_GetFinalLut",0x3ed,
           param_1,0);
  }
  else {
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetFinalLut failed: %#x!","TEST_AVS_GetFinalLut",
           0x3ea,param_1,0,iVar2);
  }
  if (*(int *)(param_2 + 4) == 0) {
LAB_000173f4:
    iVar2 = RK_MPI_AVS_DestroyGrp(param_1);
  }
  else {
    uVar4 = 0;
    puVar5 = &local_80;
    puVar6 = auStack_68;
    do {
      while( true ) {
        RK_MPI_SYS_Free(*puVar6);
        if (*(void **)puVar5 == (void *)0x0) break;
        free(*(void **)puVar5);
        uVar4 = uVar4 + 1;
        puVar5 = (undefined8 *)((int)puVar5 + 4);
        puVar6 = puVar6 + 1;
        if (*(uint *)(param_2 + 4) <= uVar4) goto LAB_000173f4;
      }
      uVar4 = uVar4 + 1;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      puVar6 = puVar6 + 1;
    } while (uVar4 < *(uint *)(param_2 + 4));
    iVar2 = RK_MPI_AVS_DestroyGrp(param_1);
  }
  if (iVar2 != 0) {
    RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_DestroyGrp failed: %#x!!","TEST_AVS_GetFinalLut",
           0x3fa,param_1,0,iVar2);
  }
  RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_DestroyGrp already.","TEST_AVS_GetFinalLut",0x3fc,
         param_1,0);
  return iVar2;
}



/* ===== TEST_AVS_ModInit @ 00017560 size=480 ===== */

int TEST_AVS_ModInit(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar2 = TEST_AVS_InitAttr_Blend_Lut(param_1,auStack_118,auStack_158);
    }
    else {
      if (*(int *)(param_1 + 0x58) != 1) goto LAB_0001758c;
      iVar2 = TEST_AVS_InitAttr_Blend_Calib(param_1,auStack_118,auStack_158);
    }
LAB_00017610:
    local_f0 = *(undefined4 *)(param_1 + 0x18);
    local_ec = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x2d0) == 1) goto LAB_0001762c;
  }
  else {
    if (*(int *)(param_1 + 0x54) - 1U < 3) {
      iVar2 = TEST_AVS_InitAttr_NoBlend(param_1,auStack_118,auStack_158);
      goto LAB_00017610;
    }
LAB_0001758c:
    local_f0 = *(undefined4 *)(param_1 + 0x18);
    local_ec = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x2d0) != 1) {
      uVar1 = *(undefined4 *)(param_1 + 0xb4);
      goto LAB_000175ac;
    }
    iVar2 = 0;
LAB_0001762c:
    local_28 = *(undefined8 *)(param_1 + 0x2d4);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  if (iVar2 != 0) {
    RK_LOG(2,0x17171700,"avs [%d, %d] TEST_AVS_InitAttr failed: %#x!","TEST_AVS_ModInit",0x2e1,uVar1
           ,0,iVar2);
    return iVar2;
  }
LAB_000175ac:
  if (*(int *)(param_1 + 0x2dc) != 0) {
    iVar2 = TEST_AVS_GetFinalLut(uVar1,auStack_118);
    if (iVar2 != 0) {
      RK_LOG(2,0x17171700,"avs [%d, %d] TEST_AVS_GetFinalLut failed: %#x!","TEST_AVS_ModInit",0x2e9,
             *(undefined4 *)(param_1 + 0xb4),0,iVar2);
      return iVar2;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
  }
  iVar2 = TEST_AVS_Start(uVar1,*(undefined4 *)(param_1 + 0x14),auStack_118,auStack_158);
  if (iVar2 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"avs [%d, %d] TEST_AVS_Start failed: %#x!","TEST_AVS_ModInit",0x2f2,
         *(undefined4 *)(param_1 + 0xb4),0,iVar2);
  return iVar2;
}



/* ===== TEST_AVS_UnitTest @ 00017740 size=1136 ===== */

int TEST_AVS_UnitTest(int param_1)

{
  undefined4 *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  int iVar2;
  int *__ptr_01;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int local_44;
  undefined4 *local_3c;
  int local_38;
  
  __ptr = malloc(8);
  __ptr_00 = malloc(8);
  pvVar1 = calloc(0x50,1);
  *__ptr = pvVar1;
  pvVar1 = calloc(0x50,1);
  __ptr[1] = pvVar1;
  pvVar1 = calloc(0x50,1);
  *__ptr_00 = pvVar1;
  pvVar1 = calloc(0x50,1);
  __ptr_00[1] = pvVar1;
  local_38 = TEST_AVS_ModCreateFrame(param_1,__ptr);
  if ((local_38 == 0) && (local_38 = TEST_AVS_ModInit(param_1), local_38 == 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0xb4);
    if (0 < *(int *)(param_1 + 8)) {
      local_44 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x10);
        if (iVar4 == 0) {
LAB_00017a34:
          iVar4 = *(int *)(param_1 + 0x14);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 4);
            uVar9 = 0;
            if (iVar4 != 0) {
LAB_00017ad8:
              iVar4 = TEST_AVS_ModSaveChnFrame(uVar3,uVar9,iVar4,__ptr_00);
              uVar3 = *(undefined4 *)(param_1 + 0xb4);
              if (iVar4 == 0) {
                uVar9 = *(uint *)(param_1 + 0x14);
                goto LAB_00017af8;
              }
              break;
            }
          }
          else {
            puVar8 = __ptr_00 + -1;
            iVar6 = 0;
            do {
              while( true ) {
                puVar8 = puVar8 + 1;
                iVar2 = RK_MPI_AVS_GetChnFrame(uVar3,iVar6,*puVar8,0x28);
                if (iVar2 == 0) break;
                iVar5 = iVar6 + 1;
                RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_GetChnFrame failed: %#x!",
                       "TEST_AVS_ModGetChnFrame",0x19c,uVar3,iVar6,iVar2);
                iVar6 = iVar5;
                if (iVar4 == iVar5) goto LAB_00017abc;
              }
              iVar6 = iVar6 + 1;
            } while (iVar4 != iVar6);
LAB_00017abc:
            uVar3 = *(undefined4 *)(param_1 + 0xb4);
            if (iVar2 != 0) goto LAB_00017970;
            iVar4 = *(int *)(param_1 + 4);
            uVar9 = *(uint *)(param_1 + 0x14);
            if (iVar4 != 0) goto LAB_00017ad8;
LAB_00017af8:
            if (uVar9 != 0) {
              puVar8 = __ptr_00 + -1;
              uVar10 = 0;
              do {
                while( true ) {
                  puVar8 = puVar8 + 1;
                  uVar7 = uVar10 + 1;
                  iVar4 = RK_MPI_AVS_ReleaseChnFrame(uVar3,uVar10,*puVar8);
                  if (iVar4 == 0) break;
                  RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_ReleaseChnFrame failed: %#x!",
                         "TEST_AVS_ModReleaseChnFrame",0x1cb,uVar3,uVar10,iVar4);
                  uVar10 = uVar7;
                  if (uVar9 <= uVar7) {
                    uVar3 = *(undefined4 *)(param_1 + 0xb4);
                    goto LAB_00017988;
                  }
                }
                uVar10 = uVar7;
              } while (uVar7 < uVar9);
            }
          }
          usleep(40000);
          uVar3 = *(undefined4 *)(param_1 + 0xb4);
        }
        else {
          iVar6 = 0;
          puVar8 = __ptr + -1;
          do {
            while( true ) {
              puVar8 = puVar8 + 1;
              iVar2 = RK_MPI_AVS_SendPipeFrame(uVar3,iVar6,*puVar8,0xffffffff);
              if (iVar2 == 0) break;
              iVar5 = iVar6 + 1;
              RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_SendPipeFrame %p failed: %#x!",
                     "TEST_AVS_ModSendFrame",0x18a,uVar3,iVar6,*(undefined4 *)*puVar8,iVar2);
              iVar6 = iVar5;
              if (iVar4 == iVar5) goto LAB_00017964;
            }
            iVar6 = iVar6 + 1;
          } while (iVar4 != iVar6);
LAB_00017964:
          uVar3 = *(undefined4 *)(param_1 + 0xb4);
          if (iVar2 == 0) goto LAB_00017a34;
        }
LAB_00017970:
        local_44 = local_44 + 1;
      } while (local_44 < *(int *)(param_1 + 8));
    }
LAB_00017988:
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 != 0) {
      iVar6 = 0;
      do {
        local_38 = RK_MPI_AVS_DisableChn(uVar3,iVar6);
        if (local_38 != 0) {
          RK_LOG(2,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn failed: %#x!!","TEST_AVS_Stop",
                 0x6c,uVar3,iVar6,local_38);
          goto LAB_000177cc;
        }
        iVar2 = iVar6 + 1;
        RK_LOG(6,0x17171700,"avs [%d, %d] RK_MPI_AVS_DisableChn already.","TEST_AVS_Stop",0x70,uVar3
               ,iVar6);
        iVar6 = iVar2;
      } while (iVar4 != iVar2);
    }
    local_38 = FUN_00015424(uVar3);
  }
LAB_000177cc:
  local_3c = __ptr + -1;
  iVar4 = 0;
  do {
    local_3c = local_3c + 1;
    __ptr_01 = (int *)*local_3c;
    if (iVar4 < *(int *)(param_1 + 0x10)) {
      if (__ptr_01 != (int *)0x0) {
        if (*__ptr_01 != 0) {
          RK_MPI_MB_ReleaseMB();
          __ptr_01 = (int *)*local_3c;
          goto LAB_00017804;
        }
        goto LAB_0001780c;
      }
    }
    else {
LAB_00017804:
      if (__ptr_01 != (int *)0x0) {
LAB_0001780c:
        free(__ptr_01);
        *local_3c = 0;
      }
    }
    bVar11 = iVar4 == 1;
    iVar4 = 1;
    if (bVar11) {
      if ((void *)*__ptr_00 != (void *)0x0) {
        free((void *)*__ptr_00);
        *__ptr_00 = 0;
      }
      if ((void *)__ptr_00[1] != (void *)0x0) {
        free((void *)__ptr_00[1]);
      }
      free(__ptr);
      free(__ptr_00);
      return local_38;
    }
  } while( true );
}



/* ===== TEST_COMM_GetNowUs @ 00017bb0 size=72 ===== */

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



/* ===== TEST_COMM_GetUriSchemeType @ 00017bf8 size=924 ===== */

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



/* ===== TEST_COMM_OpenFileUris @ 00017f94 size=540 ===== */

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
            if (__maxlen == 0) goto LAB_00018108;
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
LAB_00018108:
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



/* ===== TEST_COMM_CloseFileUris @ 000181b0 size=56 ===== */

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



/* ===== TEST_COMM_FileReadOneFrame @ 000181e8 size=372 ===== */

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



/* ===== TEST_COMM_FileWriteOneFrame @ 0001835c size=308 ===== */

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



/* ===== TEST_COMM_MkDirs @ 00018490 size=184 ===== */

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
        if (pcVar3 == local_218 + sVar1) goto LAB_00018508;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != local_218 + sVar1);
LAB_00018508:
    iVar2 = access(local_218,0);
    if (iVar2 != 0) {
      mkdir(local_218,param_2);
      return;
    }
  }
  return;
}



/* ===== TEST_COMM_CheckFileSizeInRange @ 00018548 size=284 ===== */

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



/* ===== TEST_COMM_GetSocType @ 00018664 size=540 ===== */

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
  if (DAT_0003224c != 0) {
    return DAT_0003224c;
  }
  __stream = fopen64("/proc/device-tree/compatible","r");
  memset(local_418,0,0x400);
  if (__stream == (FILE *)0x0) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"open failed.","TEST_COMM_GetSocType",0x130);
    goto LAB_00018730;
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
        if (pcVar1 == (char *)0x0) goto LAB_00018720;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
LAB_00018720:
      iVar2 = 1;
    }
  }
  fclose(__stream);
LAB_00018730:
  DAT_0003224c = iVar2;
  RK_LOG(5,0x17171700,"get the rkchip:%d.","TEST_COMM_GetSocType",0x133,iVar2);
  return iVar2;
}



/* ===== TEST_COMM_FillImage @ 00018f00 size=14224 ===== */

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
        auVar121._8_8_ = DAT_0001b140;
        auVar121._0_8_ = DAT_0001b138;
        auVar184._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar184._0_8_ = 0x800000008;
        auVar181._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar181._0_8_ = 0xc0000000c;
        uVar107 = 0;
        do {
          cVar94 = cVar95 * '\x03' + (char)uVar107;
          if (param_2 - 1 < 0xf) {
            uVar105 = 0;
LAB_0001b3bc:
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
            if (param_2 != uVar106) goto LAB_0001b3bc;
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
        auVar126._8_8_ = DAT_0001b760;
        auVar126._0_8_ = DAT_0001b758;
        do {
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
          if (uVar107 - 1 < 0xf) {
            uVar99 = 0;
LAB_0001b5a8:
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
            if (uVar106 != uVar107) goto LAB_0001b5a8;
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
            auVar117._8_8_ = DAT_0001aa40;
            auVar117._0_8_ = DAT_0001aa38;
            auVar32._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar32._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001ab10:
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
                if (uVar105 != param_2) goto LAB_0001ab10;
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
          auVar118._8_8_ = DAT_0001aa40;
          auVar118._0_8_ = DAT_0001aa38;
          uVar107 = 0;
          uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
          uVar67 = CONCAT44(uVar91,uVar91);
          auVar78._8_8_ = uVar67;
          auVar78._0_8_ = uVar67;
          do {
            if (uVar106 - 1 < 0xf) {
              uVar99 = 0;
LAB_0001ad38:
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
              if (uVar106 != uVar105) goto LAB_0001ad38;
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
            auVar122._8_8_ = DAT_0001c018;
            auVar122._0_8_ = DAT_0001c010;
            auVar58._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar58._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_0001c0e0:
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
                if (param_2 != uVar106) goto LAB_0001c0e0;
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
            auVar129._8_8_ = DAT_0001c018;
            auVar129._0_8_ = DAT_0001c010;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001c2d8:
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
                if (uVar107 != uVar106) goto LAB_0001c2d8;
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
            auVar119._8_8_ = DAT_00019c48;
            auVar119._0_8_ = DAT_00019c40;
            auVar19._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar19._0_8_ = 0x800000008;
            auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar20._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_00019fa8:
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
                if (uVar106 != param_2) goto LAB_00019fa8;
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
            auVar124._8_8_ = DAT_0001a350;
            auVar124._0_8_ = DAT_0001a348;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001a198:
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
                if (uVar106 != uVar107) goto LAB_0001a198;
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
            auVar120._8_8_ = DAT_0001b140;
            auVar120._0_8_ = DAT_0001b138;
            auVar39._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar39._0_8_ = 0x800000008;
            auVar40._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar40._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_0001af30:
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
                if (param_2 != uVar106) goto LAB_0001af30;
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
            auVar125._8_8_ = DAT_0001b140;
            auVar125._0_8_ = DAT_0001b138;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001b148:
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
                if (uVar107 != uVar106) goto LAB_0001b148;
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
            auVar114._8_8_ = DAT_00019c48;
            auVar114._0_8_ = DAT_00019c40;
            auVar12._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar12._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_000198ec:
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
                if (uVar105 != param_2) goto LAB_000198ec;
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
            auVar115._8_8_ = DAT_00019c48;
            auVar115._0_8_ = DAT_00019c40;
            uVar105 = 0;
            uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar73._8_8_ = uVar67;
            auVar73._0_8_ = uVar67;
            do {
              if (uVar106 - 1 < 0xf) {
                uVar99 = 0;
LAB_00019b0c:
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
                if (uVar106 != uVar107) goto LAB_00019b0c;
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
          auVar116._8_8_ = DAT_0001aa40;
          auVar116._0_8_ = DAT_0001aa38;
          auVar27._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar27._0_8_ = 0x800000008;
          auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar28._0_8_ = 0xc0000000c;
          uVar107 = 0;
          do {
            cVar94 = cVar95 * '\x03' + (char)uVar107;
            if (param_2 - 1 < 0xf) {
              uVar105 = 0;
LAB_0001a8d0:
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
              if (param_2 != uVar106) goto LAB_0001a8d0;
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
            auVar128._8_8_ = DAT_0001c018;
            auVar128._0_8_ = DAT_0001c010;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001bcf4:
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
                if (uVar107 != uVar106) goto LAB_0001bcf4;
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
            auVar123._8_8_ = DAT_000193b8;
            auVar123._0_8_ = DAT_000193b0;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_000194ec:
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
                if (uVar107 != uVar106) goto LAB_000194ec;
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
            auVar127._8_8_ = DAT_0001b760;
            auVar127._0_8_ = DAT_0001b758;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001b8a0:
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
                if (uVar107 != uVar106) goto LAB_0001b8a0;
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
LAB_00019088:
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
                auVar132._8_8_ = DAT_000193b8;
                auVar132._0_8_ = DAT_000193b0;
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
                if (uVar107 != uVar106) goto LAB_00019088;
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
      goto LAB_0001aa00;
    }
  }
  else if (param_6 < 0x1000e) {
    if (param_6 < 0x1000a) {
      if (0x10007 < param_6) {
LAB_0001a378:
        pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
        if (DAT_00032254 == 0) {
          if ((int)param_4 < (int)(param_2 * 4)) {
            RK_LOG(3,0x17171700,
                   "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                   "util_check_stride_by_pixel",0x1bf,param_4,param_2,4);
            RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                   "util_check_stride_by_pixel",0x1c1,param_4,4,param_4 << 2);
            goto LAB_0001c57c;
          }
        }
        else {
LAB_0001c57c:
          local_110 = param_4 << 2;
          DAT_00032254 = 1;
        }
        if (DAT_00032250 == 0) {
          uVar107 = local_110 + 0x1f & 0xffffffe0;
          if (local_110 == uVar107) goto LAB_0001a450;
          RK_LOG(3,0x17171700,
                 "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
                 ,"util_check_8_pixel_aligned",0x1cd,"32bit RGB",4);
          RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
                 "util_check_8_pixel_aligned",0x1cf,uVar107);
        }
        local_110 = local_110 + 0x1f & 0xffffffe0;
        DAT_00032250 = 1;
LAB_0001a450:
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
              if (param_2 == uVar107) goto LAB_0001a598;
            }
            uVar107 = uVar107 + 1;
            (*pcVar102)(puVar104,iVar101,iVar100,0,1);
            puVar104 = (undefined8 *)((int)puVar104 + 4);
          } while (param_2 != uVar107);
LAB_0001a598:
          local_b0 = (undefined8 *)((int)local_b0 + local_110);
          local_b4 = local_b4 + 1;
          if (param_3 == local_b4) {
            return 0;
          }
        } while( true );
      }
      pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
      if (DAT_00032254 == 0) {
        if ((int)param_4 < (int)(param_2 * 3)) {
          iVar110 = param_4 * 2;
          RK_LOG(3,0x17171700,
                 "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                 "util_check_stride_by_pixel",0x1bf,param_4,param_2,3);
          RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                 "util_check_stride_by_pixel",0x1c1,param_4,3,param_4 * 3);
          goto LAB_0001c608;
        }
      }
      else {
        iVar110 = param_4 << 1;
LAB_0001c608:
        local_110 = iVar110 + param_4;
        DAT_00032254 = 1;
      }
      if (DAT_00032250 == 0) {
        uVar107 = local_110 + 0x17 & 0xffffffe8;
        if (uVar107 == local_110) goto LAB_00019d5c;
        RK_LOG(3,0x17171700,
               "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
               ,"util_check_8_pixel_aligned",0x1cd,"24bit RGB",3);
        RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
               "util_check_8_pixel_aligned",0x1cf,uVar107);
      }
      local_110 = local_110 + 0x17 & 0xffffffe8;
      DAT_00032250 = 1;
LAB_00019d5c:
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
            if (param_2 == uVar107) goto LAB_00019ea4;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 3);
        } while (param_2 != uVar107);
LAB_00019ea4:
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
LAB_0001aa00:
      RK_LOG(2,0x17171700,"filling function do not support type %d\n","TEST_COMM_FillImage",0x2ea,
             param_6);
      return 0xffffffff;
    }
    if (param_6 < 0x10014) goto LAB_0001a378;
    if (0x10016 < param_6) goto LAB_0001aa00;
  }
  pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
  if (DAT_00032254 == 0) {
    if ((int)param_4 < (int)(param_2 * 2)) {
      RK_LOG(3,0x17171700,
             "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
             "util_check_stride_by_pixel",0x1bf,param_4,param_2,2);
      RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
             "util_check_stride_by_pixel",0x1c1,param_4,2,param_4 << 1);
      goto LAB_0001c4f8;
    }
  }
  else {
LAB_0001c4f8:
    local_110 = param_4 << 1;
    DAT_00032254 = 1;
  }
  if (DAT_00032250 == 0) {
    uVar107 = local_110 + 0xf & 0xfffffff0;
    if (local_110 == uVar107) goto LAB_0001a6ac;
    RK_LOG(3,0x17171700,
           "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
           ,"util_check_8_pixel_aligned",0x1cd,"16bit RGB",2);
    RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
           "util_check_8_pixel_aligned",0x1cf,uVar107);
  }
  local_110 = local_110 + 0xf & 0xfffffff0;
  DAT_00032250 = 1;
LAB_0001a6ac:
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
            if (param_2 == uVar107) goto LAB_0001a7f4;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 2);
        } while (param_2 != uVar107);
LAB_0001a7f4:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
      } while (param_3 != local_b4);
    }
  }
  return 0;
}



/* ===== TEST_COMM_CompareImageFuzzy @ 0001c710 size=1236 ===== */

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
LAB_0001c84c:
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
          if (uVar14 - uVar11 != 0) goto LAB_0001c84c;
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



/* ===== TEST_SYS_CreateVideoFrame @ 0001cbe4 size=220 ===== */

int TEST_SYS_CreateVideoFrame(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined8 local_1c;
  
  if (param_2 == 0 || param_1 == (undefined8 *)0x0) {
    return -1;
  }
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(param_1,&local_20);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(param_2,0,0,local_20);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar4 = *(undefined4 *)((int)param_1 + 0xc);
      *(undefined8 *)(param_2 + 4) = *param_1;
      *(undefined8 *)(param_2 + 0xc) = local_1c;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      return 0;
    }
    uVar2 = 0x2e;
    pcVar3 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar3 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_00020d54,"TEST_SYS_CreateVideoFrame",uVar2,pcVar3,iVar1);
  return iVar1;
}



/* ===== TEST_SYS_AvsUnbindVenc @ 0001ccc0 size=124 ===== */

undefined4 TEST_SYS_AvsUnbindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 0x11;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVenc",0x49,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsBindVpss @ 0001cd3c size=124 ===== */

undefined4 TEST_SYS_AvsBindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 6;
  local_20 = 0x11;
  local_c = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsBindVpss",0x60,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsUnbindVpss @ 0001cdb8 size=124 ===== */

undefined4 TEST_SYS_AvsUnbindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 6;
  local_20 = 0x11;
  local_c = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVpss",0x76,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsBindVo @ 0001ce34 size=120 ===== */

undefined4
TEST_SYS_AvsBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x11;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsBindVo",0x8c,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsUnbindVo @ 0001ceac size=120 ===== */

undefined4
TEST_SYS_AvsUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x11;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVo",0xa2,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_ViBindAvs @ 0001cf24 size=120 ===== */

undefined4
TEST_SYS_ViBindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 8;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_ViBindAvs",0xb8,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_ViUnbindAvs @ 0001cf9c size=120 ===== */

undefined4
TEST_SYS_ViUnbindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 8;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_ViUnbindAvs",0xce,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindAvs @ 0001d014 size=120 ===== */

undefined4
TEST_SYS_VpssBindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindAvs",0xe4,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindAvs @ 0001d08c size=120 ===== */

undefined4
TEST_SYS_VpssUnbindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindAvs",0xfa,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindVo @ 0001d104 size=120 ===== */

undefined4
TEST_SYS_VpssBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindVo",0x110,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindVo @ 0001d17c size=120 ===== */

undefined4
TEST_SYS_VpssUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindVo",0x126,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecBindVpss @ 0001d1f4 size=120 ===== */

undefined4 TEST_SYS_VdecBindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 6;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecBindVpss",0x13c,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecUnbindVpss @ 0001d26c size=120 ===== */

undefined4 TEST_SYS_VdecUnbindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 6;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecUnbindVpss",0x152,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindVenc @ 0001d2e4 size=124 ===== */

undefined4 TEST_SYS_VpssBindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 6;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindVenc",0x168,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindVenc @ 0001d360 size=124 ===== */

undefined4 TEST_SYS_VpssUnbindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 6;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindVenc",0x17e,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VencBindVdec @ 0001d3dc size=120 ===== */

undefined4 TEST_SYS_VencBindVdec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_20 = 4;
  local_1c = 0;
  local_14 = 5;
  uStack_10 = 0;
  local_18 = param_1;
  local_c = param_2;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VencBindVdec",0x194,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VencUnbindVdec @ 0001d454 size=120 ===== */

undefined4 TEST_SYS_VencUnbindVdec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_20 = 4;
  local_1c = 0;
  local_14 = 5;
  uStack_10 = 0;
  local_18 = param_1;
  local_c = param_2;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VencUnbindVdec",0x1aa,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecBindVo @ 0001d4cc size=120 ===== */

undefined4 TEST_SYS_VdecBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 9;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecBindVo",0x1c0,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecUnbindVo @ 0001d544 size=120 ===== */

undefined4 TEST_SYS_VdecUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 9;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecUnbindVo",0x1d6,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_FuzzyCompareFrameByFile @ 0001d5bc size=452 ===== */

int TEST_SYS_FuzzyCompareFrameByFile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  
  memset(&local_70,0,0x50);
  local_78 = *(undefined8 *)(param_2 + 7);
  local_80 = *(undefined8 *)(param_2 + 3);
  VectorTranspose(local_78,4);
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_80,&local_90);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(&local_70,0,0,local_90);
    if (iVar1 == 0) {
      local_58 = (undefined4)local_78;
      local_6c = local_80;
      local_64 = local_8c;
      local_50 = local_78._4_4_;
      iVar1 = TEST_COMM_FileReadOneFrame(param_1,&local_70);
      if (iVar1 == 0) {
        RK_MPI_SYS_MmzFlushCache(local_70,0);
        RK_MPI_SYS_MmzFlushCache(*param_2,0);
        uVar2 = RK_MPI_MB_Handle2VirAddr(*param_2);
        uVar3 = RK_MPI_MB_Handle2VirAddr(local_70);
        uVar4 = RK_MPI_CAL_COMM_GetHorStride(param_2[3],param_2[6]);
        iVar5 = TEST_COMM_CompareImageFuzzy(uVar2,uVar3,uVar4,param_2[1],param_2[2]);
        if (iVar5 != 0) {
          iVar1 = -1;
          RK_LOG(2,0x17171700,"image compare has too large different.",
                 "TEST_SYS_FuzzyCompareFrameByFile",0x1ff);
        }
      }
      RK_MPI_MB_ReleaseMB(local_70);
      return iVar1;
    }
    uVar2 = 0x2e;
    pcVar6 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar6 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_00020d54,"TEST_SYS_CreateVideoFrame",uVar2,pcVar6,iVar1);
  return iVar1;
}



/* ===== TEST_SYS_FuzzyCompareFrame @ 0001d780 size=500 ===== */

int TEST_SYS_FuzzyCompareFrame(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  
  memset(&local_70,0,0x50);
  local_78 = *(undefined8 *)(param_1 + 7);
  local_80 = *(undefined8 *)(param_1 + 3);
  VectorTranspose(local_78,4);
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_80,&local_90);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(&local_70,0,0,local_90);
    if (iVar1 == 0) {
      local_58 = (undefined4)local_78;
      local_64 = local_8c;
      local_50 = local_78._4_4_;
      local_6c = local_80;
      uVar2 = RK_MPI_MB_Handle2VirAddr(local_70);
      uVar7 = param_1[1];
      uVar6 = param_1[2];
      uVar3 = RK_MPI_CAL_COMM_GetHorStride(param_1[3],param_1[6]);
      iVar1 = TEST_COMM_FillImage(uVar2,uVar7,uVar6,uVar3,param_1[4],param_1[6],1);
      if (iVar1 == 0) {
        RK_MPI_SYS_MmzFlushCache(local_70,0);
        RK_MPI_SYS_MmzFlushCache(*param_1,0);
        uVar2 = RK_MPI_MB_Handle2VirAddr(*param_1);
        uVar3 = RK_MPI_MB_Handle2VirAddr(local_70);
        uVar6 = RK_MPI_CAL_COMM_GetHorStride(param_1[3],param_1[6]);
        iVar4 = TEST_COMM_CompareImageFuzzy(uVar2,uVar3,uVar6,param_1[1],param_1[2]);
        if (iVar4 != 0) {
          iVar1 = -1;
          RK_LOG(2,0x17171700,"image compare has too large different.","TEST_SYS_FuzzyCompareFrame",
                 0x230);
        }
      }
      RK_MPI_MB_ReleaseMB(local_70);
      return iVar1;
    }
    uVar2 = 0x2e;
    pcVar5 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar5 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_00020d54,"TEST_SYS_CreateVideoFrame",uVar2,pcVar5,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_Proc @ 0001d974 size=748 ===== */

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
LAB_0001d9fc:
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
      if (iVar6 != 0) goto LAB_0001dbd4;
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
LAB_0001dbd4:
      RK_MPI_MB_ReleaseMB(local_ec);
      return 0;
    }
    iVar1 = iVar1 + 1;
    uVar7 = 0;
    if (param_1[4] == 0) goto LAB_0001d9fc;
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



/* ===== TEST_VPSS_Start @ 0001dc60 size=412 ===== */

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



/* ===== TEST_VPSS_Stop @ 0001ddfc size=252 ===== */

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



/* ===== TEST_VPSS_GrpSetZoom @ 0001def8 size=212 ===== */

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



/* ===== TEST_VPSS_ChnSetZoom @ 0001dfcc size=220 ===== */

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



/* ===== TEST_VPSS_SetChnRotation @ 0001e0a8 size=192 ===== */

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



/* ===== TEST_VPSS_SetChnRotationEx @ 0001e168 size=120 ===== */

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



/* ===== TEST_VPSS_StartProc @ 0001e1e0 size=312 ===== */

undefined4 TEST_VPSS_StartProc(int param_1,undefined4 param_2,undefined4 *param_3)

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
  *(undefined4 *)(&DAT_00032274 + iVar5) = *param_3;
  *(undefined4 *)(&DAT_00032278 + iVar5) = uVar2;
  *(undefined4 *)(&DAT_0003227c + iVar5) = uVar3;
  *(undefined4 *)(&DAT_00032280 + iVar5) = uVar4;
  uVar2 = param_3[5];
  *(undefined4 *)(&DAT_00032284 + iVar5) = param_3[4];
  *(undefined4 *)(&DAT_00032288 + iVar5) = uVar2;
  if (*(char **)(&DAT_00032274 + iVar5) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_00032274 + iVar5),"r");
    *(FILE **)(&DAT_0003225c + iVar5) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_00032274 + iVar5);
      uVar3 = 0x134;
      goto LAB_0001e2d8;
    }
  }
  iVar6 = param_1 * 0x34;
  if (*(char **)(&DAT_00032278 + iVar6) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_00032278 + iVar6),"wb");
    *(FILE **)(&DAT_00032260 + iVar6) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_00032278 + iVar6);
      uVar3 = 0x13b;
LAB_0001e2d8:
      RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VPSS_StartProc",uVar3,uVar2);
      return 0xffffffff;
    }
  }
  uVar2 = param_3[5];
  iVar6 = param_1 * 0x34;
  *(undefined4 *)(&DAT_00032258 + iVar6) = 1;
  *(undefined4 *)(&DAT_0003226c + iVar6) = uVar2;
  *(int *)(&DAT_00032264 + iVar6) = param_1;
  *(undefined4 *)(&DAT_00032268 + iVar6) = param_2;
  uVar2 = (*(code *)PTR_pthread_create_000320dc)
                    (&DAT_00032270 + iVar5,0,TEST_VPSS_Proc,&DAT_00032258 + iVar5);
  return uVar2;
}



/* ===== TEST_VPSS_StopProc @ 0001e30c size=128 ===== */

undefined4 TEST_VPSS_StopProc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x34;
  if (*(int *)(&DAT_00032258 + iVar1) == 1) {
    *(undefined4 *)(&DAT_00032258 + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_00032270 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_0003225c + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0003225c + iVar1));
      *(undefined4 *)(&DAT_0003225c + iVar1) = 0;
    }
    if (*(FILE **)(&DAT_00032260 + param_1 * 0x34) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_00032260 + param_1 * 0x34));
      *(undefined4 *)(&DAT_00032260 + param_1 * 0x34) = 0;
      return 0;
    }
  }
  return 0;
}



/* ===== _fini @ 0001e38c size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00036018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 0003601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00036020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetGrpAttr @ 00036024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetGrpAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00036028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00036030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00036034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00036038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00036040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00036044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00036048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 0003604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00036050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00036054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00036058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 0003605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00036060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00036064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00036068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0003606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00036070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00036074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00036078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00036080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00036084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFree @ 00036088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00036090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 00036094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00036098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 0003609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 000360a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 000360a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000360a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 000360ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000360b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 000360b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 000360b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000360bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAllocEx @ 000360c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAllocEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000360c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000360c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000360cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000360d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 000360d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000360d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ResetGrp @ 000360dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000360e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000360e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_VirAddr2Handle @ 000360e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000360ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 000360f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 000360f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 000360f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 000360fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetFinalLut(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_VirAddr2Handle @ 00036100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_VirAddr2Handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 00036104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Handle2VirAddr @ 00036108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetPicBufferSize @ 0003610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00036110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00036114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00036118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003611c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00036120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00036124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00036128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetGrpAttr @ 0003612c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetGrpAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00036130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00036134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00036138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003613c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 00036140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00036144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 00036148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003614c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00036150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00036154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00036158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003615c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00036160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00036164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00036168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003616c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00036170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00036174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SendPipeFrame @ 00036178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SendPipeFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 0003617c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00036180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00036184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00036188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003618c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00036190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00036194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00036198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnAttr @ 0003619c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000361a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 000361a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 000361a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000361ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 000361b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000361b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000361b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


